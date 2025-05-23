// Fill out your copyright notice in the Description page of Project Settings.


#include "PullAbility.h"
#include "MB_ProjectCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UPullAbility::Activate(AActor* target,ACharacter* AbilityOwner)
{
	Super::Activate();
	if (target)
	{
		PullTarget = target;
	}

	OwnerCharacter = AbilityOwner;
}

void UPullAbility::DeActivate()
{
	Super::DeActivate();
}

void UPullAbility::Start()
{
	Super::Start();

	MetalPos = PullTarget->GetActorLocation();
	CharPos = OwnerCharacter->GetActorLocation();

	initialDistance = FVector::Dist(MetalPos, CharPos);
	currDistance = initialDistance;
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("Pull Start()"));
}

void UPullAbility::PreUpdate(float DeltaTime)
{
	Super::PreUpdate(DeltaTime);

	if (FVector::Dist(MetalPos,CharPos)<=400.0f)
	{
		FString Message = FString::Printf(TEXT("ZERO VECTOR"));
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, Message);
		OwnerCharacter->GetCharacterMovement()->Velocity = FVector::ZeroVector;
		OwnerCharacter->GetCharacterMovement()->StopMovementImmediately();
		//OwnerCharacter->GetCharacterMovement()->SetMovementMode(MOVE_Walking);
		
		Stop();
	}
	
	if (bIsTriggered && TriggerValue > 0)
	{
		
		//Direction
		MetalPos = PullTarget->GetActorLocation();
		CharPos = OwnerCharacter->GetActorLocation();

		PullDir = (MetalPos - CharPos).GetSafeNormal();
		
		//Pull force curve: calculate 0-1 in wich point of rthe curve we are
		currDistance = initialDistance - (FVector::Dist(MetalPos, CharPos));
		float curvePoint = currDistance/initialDistance;
		CurrPullForce = MaxPullForce * PullForceCurve->GetFloatValue(curvePoint);
		
		//FString Message = FString::Printf(TEXT("initialdistance: %f currDistance: %f currPullForce: %f curve point: %f"),initialDistance,currDistance, CurrPullForce, curvePoint);
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, Message);
	}else
	{
		
		Stop();
	}
}

void UPullAbility::Update(float DeltaTime)
{
	Super::Update(DeltaTime);
	
	FVector PullVelocity = PullDir * CurrPullForce * DeltaTime;
	OwnerCharacter->LaunchCharacter(PullVelocity, true, true);
}

void UPullAbility::PostUpdate(float DeltaTime)
{
	Super::PostUpdate(DeltaTime);
	
}

void UPullAbility::Stop()
{
	Super::Stop();
	
	DeActivate();
}
