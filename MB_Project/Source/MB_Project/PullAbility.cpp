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
			//Stop();
		}
	
		if (bIsTriggered && TriggerValue > 0)
		{
			//target Direction
			MetalPos = PullTarget->GetActorLocation();
			CharPos = OwnerCharacter->GetActorLocation();
			PullDir = (MetalPos - CharPos).GetSafeNormal();

			//Player control in Air modifies PullDir
			if (!JoystickValue.IsNearlyZero())
			{
				AirControlInputVector = calculateAirControlVector();
				PullDir = FMath::VInterpTo(PullDir,AirControlInputVector,DeltaTime,JoystickValue.Length()*AirControlMultiplyer);
			}
			//Force calculation based on distance
			currDistance = initialDistance - (FVector::Dist(MetalPos, CharPos));
			float PullForceCurvePoint = currDistance/initialDistance;
			DesiredPullForce = MaxPullForce * PullForceCurve->GetFloatValue(PullForceCurvePoint) * PullDir;
			
			//Curve of inertia depending on dir vs desiredDir angle
			float TurnrateCurvePoint = FVector::DotProduct(PullDir,OwnerCharacter->GetVelocity().GetSafeNormal());
			//get inertia force and multiply by user input force
			float TurnRateValue = TurnRateCurve->GetFloatValue(TurnrateCurvePoint)*TriggerValue;
			PullForce = FMath::VInterpTo(OwnerCharacter->GetVelocity(), DesiredPullForce, DeltaTime, TurnRateValue);
			PullForce *= Drag/* 0.90 - 1+- */;
			float Gravity = -9.0f;
			float GravityMultiplyer = 1-TriggerValue;
			//PullForce+= FVector(0.0f,0.0f,Gravity*GravityMultiplyer);
			
		}else
		{
			FVector NCharacterFwd = OwnerCharacter->GetActorForwardVector().GetSafeNormal();
			NCharacterFwd.Z = 0;
			float Dot = FVector::DotProduct(NCharacterFwd,FVector(1.0f, 0.0f, 0.0f));
			Dot = FMath::Clamp(Dot,-1.0f,1.0f);
			
			if ( Dot>0.2/*avobe horizontal++*/)
			{
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("LAUNCH BABY!!!!!!!!!!"));
				OwnerCharacter->LaunchCharacter(PullForce*EndLaunchForceMultiplyer, true, true);
			}
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
