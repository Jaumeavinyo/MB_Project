// Fill out your copyright notice in the Description page of Project Settings.


#include "PullAbility.h"
#include "MB_ProjectCharacter.h"
#include "VectorTypes.h"
#include "Chaos/Utilities.h"
#include "GameFramework/CharacterMovementComponent.h"

void UPullAbility::Activate(AActor* target,ACharacter* AbilityOwner)
{
	Super::Activate();
	if (target)
	{
		PullTarget = target;
	}
	if (AbilityOwner)
	{
		OwnerCharacter = AbilityOwner;
	}
	
	if (OwnerCharacter->GetCharacterMovement()->MovementMode == MOVE_Walking)
	{
		bCanPull = false;
	}else
	{
		bCanPull = true;
	}

	
}

void UPullAbility::DeActivate()
{
	Super::DeActivate();
}

void UPullAbility::Start()
{
	Super::Start();

	AbilityStartTime = GetWorld()->GetTimeSeconds();
	
	MetalPos = PullTarget->GetActorLocation();
	CharPos = OwnerCharacter->GetActorLocation();
	
	initialDistance = FVector::Dist(MetalPos, CharPos);
	currDistance = initialDistance;

	if (bCanPull == false)
	{
		FVector Forward = OwnerCharacter->GetActorForwardVector();
		FVector RotationAxis = FVector::CrossProduct(Forward, FVector::UpVector); // Character's local right
		RotationAxis.Normalize();
		
		FVector LaunchDirection = Forward.RotateAngleAxis(InitialLaunchDirAngle, RotationAxis); 
		FVector LaunchVelocity = LaunchDirection * InitialLaunchForce;
		OwnerCharacter->LaunchCharacter(LaunchVelocity, true, true);
	}
}

void UPullAbility::PreUpdate(float DeltaTime)
{
	Super::PreUpdate(DeltaTime);
	
	if (bCanPull)
	{
		OwnerCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;
		if (FVector::Dist(MetalPos,CharPos) <= MinDistance)
		{
			OwnerCharacter->GetCharacterMovement()->Velocity = FVector::ZeroVector;
			OwnerCharacter->GetCharacterMovement()->StopMovementImmediately();
			VFinalVelocity = FVector::ZeroVector;
			//Stop();
		}
	
		if (bIsTriggered && TriggerValue > 0)
		{
			//target Direction
			MetalPos = PullTarget->GetActorLocation();
			CharPos = OwnerCharacter->GetActorLocation();
			VPlayerMetalDir = (MetalPos - CharPos).GetSafeNormal();
			
			//Player control in Air modifies VPlayerMetalDir
			if (JoystickValue.Length()>0.05f)
			{
				AirControlInputVector = calculateAirControlVector();
				VPlayerMetalDir.X = FMath::FInterpTo(VPlayerMetalDir.X, AirControlInputVector.X, DeltaTime, JoystickValue.Length() * AirControlMultiplyerX);
				VPlayerMetalDir.Y = FMath::FInterpTo(VPlayerMetalDir.Y, AirControlInputVector.Y, DeltaTime, JoystickValue.Length() * AirControlMultiplyerY);
			}
			
			//Force to apply based on curve float graph measuring totaldistance as 1 
			currDistance = initialDistance - (FVector::Dist(MetalPos, CharPos));
			VPullForce = MaxPullForce * PullForceCurve->GetFloatValue(currDistance/initialDistance) * VPlayerMetalDir;
			
			//Interpolate character direction
			FVector VPlayerVelocity = OwnerCharacter->GetVelocity();
			FVector VPlayerVelocityDir = VPlayerVelocity.GetSafeNormal();

			Alingment = FVector::DotProduct(VPlayerVelocityDir,VPlayerMetalDir);
			float TurnRateValue = TurnRateCurve->GetFloatValue(Alingment);
			
			if (TriggerValue > 0.2f)
			{
				//Trigger value affects how much the player turns direction in air
				TurnRateValue *= (1.0f + TriggerValue);
			}
			
			//180 degrees aligment handling <--|--> causes interpolation problems
			if (Alingment < -0.8f)
			{
				VFinalVelocity = VPlayerVelocity + (VPullForce * DeltaTime);
			}
			else
			{
				if (VPlayerVelocity.Size() <= 1500)//no big arc when character speed is too small
				{
					VFinalVelocity = FMath::VInterpTo(OwnerCharacter->GetVelocity(), VPullForce, DeltaTime, TurnRateValue);//VPlayerVelocity + (VPullForce);
				}
				else //Normal arcs
				{
					SpeedFactor = FMath::Clamp(VPlayerVelocity.Size()/MaxPullForce,0.f,1.f);
					float InterpolationWeight = FMath::Lerp(1.0f,TurnRateValue,SpeedFactor);
				
					FVector InterpDir = FMath::VInterpTo(VPlayerVelocityDir, VPlayerMetalDir, DeltaTime, InterpolationWeight).GetSafeNormal();

					float desiredMagnitude = VPullForce.Size();
					VFinalVelocity = InterpDir * desiredMagnitude;
				}
				
			}
			
		}
		else
		{
			OwnerCharacter->LaunchCharacter(VFinalVelocity * EndLaunchForceMultiplyer, true, true);
			Stop();
		}
	}
	
	
}

void UPullAbility::Update(float DeltaTime)
{
	Super::Update(DeltaTime);
	if (bCanPull)
	{
		//DebugLines();
		if (OwnerCharacter->GetCharacterMovement()->MovementMode == MOVE_Walking)
		{
			OwnerCharacter->GetCharacterMovement()->SetMovementMode(MOVE_Falling);
		}
		OwnerCharacter->GetCharacterMovement()->Velocity = VFinalVelocity;
		
		//OwnerCharacter->LaunchCharacter(PullForce, true, true);

		if (!VFinalVelocity.IsNearlyZero())
		{
			FRotator TargetRotation = VFinalVelocity.Rotation();
			//smoothed rotation:
			FRotator CurrentRotation = OwnerCharacter->GetActorRotation();
			FRotator NewRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, DeltaTime, 8.0f);
			OwnerCharacter->SetActorRotation(NewRotation);
		}
	}
	
}

void UPullAbility::PostUpdate(float DeltaTime)
{
	Super::PostUpdate(DeltaTime);
	if (!bCanPull)
	{
		AbilityCurrentDuration = GetWorld()->GetTimeSeconds()-AbilityStartTime;
		if (AbilityCurrentDuration >= InitialLaunchTimeDuration)
		{
			bCanPull = true;
		}
	}
}

void UPullAbility::Stop()
{
	Super::Stop();
	OwnerCharacter->GetCharacterMovement()->bOrientRotationToMovement = true;
	bCanPull = false;
	DeActivate();
}

FVector UPullAbility::calculateAirControlVector()
{
	float UpInput = JoystickValue.Y;
	float RightInput = JoystickValue.X;

	FVector CharacterUp = OwnerCharacter->GetActorUpVector();
	FVector CharacterRight = OwnerCharacter->GetActorRightVector();
	
	CharacterUp.Normalize();
	CharacterRight.Normalize();

	return (CharacterUp * UpInput + CharacterRight * RightInput).GetSafeNormal();
}

void UPullAbility::DebugLines()
{
	FrameCounter++;
	OwnerCharacter->SetActorRotation(FRotator(0.f,VPlayerMetalDir.Rotation().Yaw,0.f));
	if (FrameCounter % 2 == 0)
	{
		DrawDebugDirectionalArrow(GetWorld(), OwnerCharacter->GetActorLocation(), OwnerCharacter->GetActorLocation()+VFinalVelocity, 200.0f, FColor::Red, false, 20.0f, 0, 3.0f);
		DrawDebugDirectionalArrow(GetWorld(), OwnerCharacter->GetActorLocation(), OwnerCharacter->GetActorLocation()+VPlayerMetalDir, 20.0f, FColor::Green, false, 20.0f, 0, 3.0f);
		//DrawDebugDirectionalArrow(GetWorld(), OwnerCharacter->GetActorLocation(), OwnerCharacter->GetActorLocation()+JoystickValue.Length()*AirControlInputVector*10, 20.0f, FColor::Yellow, false, 50.0f, 0, 3.0f);
	}
}
