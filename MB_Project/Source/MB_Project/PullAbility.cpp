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
		if (FVector::Dist(MetalPos,CharPos) <= MinDistance)
		{
			OwnerCharacter->GetCharacterMovement()->Velocity = FVector::ZeroVector;
			OwnerCharacter->GetCharacterMovement()->StopMovementImmediately();
			PullForce = FVector::ZeroVector;
			//Stop();
		}
	
		if (bIsTriggered && TriggerValue > 0)
		{
			//target Direction
			MetalPos = PullTarget->GetActorLocation();
			CharPos = OwnerCharacter->GetActorLocation();
			PullDir = (MetalPos - CharPos).GetSafeNormal();
			GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Cyan, FString::Printf(TEXT("Joystick value: %f"), JoystickValue.Length()));
			
			//Player control in Air modifies PullDir
			if (JoystickValue.Length()>0.25f)
			{
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("AIR CONTROL"));
				AirControlInputVector = calculateAirControlVector();
				PullDir = FMath::VInterpTo(PullDir,AirControlInputVector,DeltaTime,JoystickValue.Length()*AirControlMultiplyer);
			}
			
			//Force calculation based on distance
			currDistance = initialDistance - (FVector::Dist(MetalPos, CharPos));
			float PullForceCurvePoint = currDistance/initialDistance;
			DesiredPullForce = MaxPullForce * PullForceCurve->GetFloatValue(PullForceCurvePoint) * PullDir;
			

			//Interpolate character direction
			FVector currentVelocity = OwnerCharacter->GetVelocity();
			FVector currentDir = currentVelocity.GetSafeNormal();

			float Alingment = FVector::DotProduct(currentDir,PullDir);
			float TurnRateValue = TurnRateCurve->GetFloatValue(Alingment);
			
			if (TriggerValue > 0.3f)
			{	
				TurnRateValue *= (1.0f + TriggerValue);
			}
			
			//180 degrees aligment handling
			if (Alingment < -0.8f)
			{
				FVector DampedVelocity = FMath::VInterpTo(currentVelocity, FVector::ZeroVector, DeltaTime, TurnRateValue);

				if (DampedVelocity.Size() < 400.0f) // Small threshold — ready to redirect
				{
					PullForce = PullDir * DesiredPullForce.Size();
				}
				else
				{
					PullForce = DampedVelocity;
				}
			}
			else
			{
				if (OwnerCharacter->GetVelocity().Size() <= 1500)//no big arc when character speed is to small
				{
					PullForce = FMath::VInterpTo(OwnerCharacter->GetVelocity(), DesiredPullForce, DeltaTime, TurnRateValue);
				}
				else //Normal arcs
				{
					float SpeedFactor = FMath::Clamp(currentVelocity.Size()/MaxPullForce,0.f,1.f);
					float InterpolationWeight = FMath::Lerp(1.0f,TurnRateValue,SpeedFactor);
				
					FVector InterpDir = FMath::VInterpTo(currentDir, PullDir, DeltaTime, InterpolationWeight).GetSafeNormal();

					float desiredMagnitude = DesiredPullForce.Size();
					PullForce = InterpDir * desiredMagnitude;
				}
				
			}
			
		}else
		{
			OwnerCharacter->LaunchCharacter(PullForce * EndLaunchForceMultiplyer, true, true);
			Stop();
		}
	}
	
	
}

void UPullAbility::Update(float DeltaTime)
{
	Super::Update(DeltaTime);
	if (bCanPull)
	{
		DebugLines();
		if (OwnerCharacter->GetCharacterMovement()->MovementMode == MOVE_Walking)
		{
			OwnerCharacter->GetCharacterMovement()->SetMovementMode(MOVE_Falling);
		}
		
		
		OwnerCharacter->GetCharacterMovement()->Velocity = PullForce;
		
		
		
		//OwnerCharacter->LaunchCharacter(PullForce, true, true);
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
	OwnerCharacter->SetActorRotation(FRotator(0.f,PullDir.Rotation().Yaw,0.f));
	if (FrameCounter % 2 == 0)
	{
		//DrawDebugDirectionalArrow(GetWorld(), OwnerCharacter->GetActorLocation(), OwnerCharacter->GetActorLocation()+PullForce, 200.0f, FColor::Red, false, 20.0f, 0, 3.0f);
		//DrawDebugDirectionalArrow(GetWorld(), OwnerCharacter->GetActorLocation(), OwnerCharacter->GetActorLocation()+OwnerCharacter->GetVelocity().GetSafeNormal(), 20.0f, FColor::Green, false, 50.0f, 0, 3.0f);
		//DrawDebugDirectionalArrow(GetWorld(), OwnerCharacter->GetActorLocation(), OwnerCharacter->GetActorLocation()+JoystickValue.Length()*AirControlMultiplyer*10, 20.0f, FColor::Yellow, false, 50.0f, 0, 3.0f);
	}
}
