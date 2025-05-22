// Fill out your copyright notice in the Description page of Project Settings.


#include "PullAbility.h"
#include "MB_ProjectCharacter.h"

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
	
}

void UPullAbility::PreUpdate(float DeltaTime)
{
	Super::PreUpdate(DeltaTime);


	if (bIsTriggered && TriggerValue > 0)
	{
		MetalPos = PullTarget->GetActorLocation();
		CharPos = OwnerCharacter->GetActorLocation();

		PullDir = (MetalPos - CharPos).GetSafeNormal();
	}else
	{
		Stop();
	}
}

void UPullAbility::Update(float DeltaTime)
{
	Super::Update(DeltaTime);

	FVector PullVelocity = PullDir * PullForce * DeltaTime;
	OwnerCharacter->LaunchCharacter(PullVelocity, true, true);
}

void UPullAbility::PostUpdate(float DeltaTime)
{
	Super::PostUpdate(DeltaTime);
	if (FVector::Dist(MetalPos,CharPos)<=100.0f)
	{
		Stop();
	}
}

void UPullAbility::Stop()
{
	Super::Stop();


	DeActivate();
}
