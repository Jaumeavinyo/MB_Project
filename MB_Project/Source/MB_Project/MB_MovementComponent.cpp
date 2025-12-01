// Fill out your copyright notice in the Description page of Project Settings.


#include "MB_MovementComponent.h"


UMB_MovementComponent::UMB_MovementComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	
	//RotationRate = FRotator(0.0f, 540.0f, 0.0f); 
	
}

void UMB_MovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	
	// Call parent tick for basic movement updates
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
		
	if (!CharacterOwner || !UpdatedComponent || ShouldSkipUpdate(DeltaTime))
	{
		return;
	}

	// Handle custom rotation
	UpdateRotation(DeltaTime);
}



void UMB_MovementComponent::UpdateRotation(float DeltaTime)
{
	if (!CharacterOwner || !HasValidData())
	{
		return;
	}

	// Skip if no controller or not possessing locally
	AController* Controller = CharacterOwner->GetController();
	if (Controller && Controller->IsLocalController())
	{
		FRotator CurrentRotation = UpdatedComponent->GetComponentRotation();
		FRotator DesiredRotation = CurrentRotation;

		// Determine target rotation based on mode
		if (bOrientRotationToMovement /*&& (Velocity.SizeSquared() > KINDA_SMALL_NUMBER)*/)
		{
			// Rotate toward movement direction
			DesiredRotation = Velocity.GetSafeNormal().Rotation();
		}
		else
		{
			// Use control rotation as fallback
			DesiredRotation = Controller->GetControlRotation();
		}

		// Apply custom rotation logic
		if (bInstantRotation)
		{
			// Instant rotation - set directly
			MoveUpdatedComponent(FVector::ZeroVector, DesiredRotation, false);
		}
		else
		{
			// Smooth rotation interpolation
			FRotator NewRotation = SmoothRotation(CurrentRotation, DesiredRotation, DeltaTime);
            
			// Only apply if rotation has changed
			if (!NewRotation.Equals(CurrentRotation, 0.01f))
			{
				MoveUpdatedComponent(FVector::ZeroVector, NewRotation, false);
			}
		}
	}
}