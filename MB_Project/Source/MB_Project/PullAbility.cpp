// Fill out your copyright notice in the Description page of Project Settings.


#include "PullAbility.h"

void UPullAbility::Start()
{
	Super::Start();
	GEngine->AddOnScreenDebugMessage(
		-1,                             // Key: -1 = auto-add without overriding others
		5.0f,                           // Duration in seconds
		FColor::Green,                 // Text color
		TEXT("PULL ABILITY: START")        // Your message
	);
}

void UPullAbility::PreUpdate(float DeltaTime)
{
	Super::PreUpdate(DeltaTime);
	GEngine->AddOnScreenDebugMessage(
		-1,                             // Key: -1 = auto-add without overriding others
		5.0f,                           // Duration in seconds
		FColor::Green,                 // Text color
		TEXT("PULL ABILITY: PREUPDATE")        // Your message
	);
}

void UPullAbility::Update(float DeltaTime)
{
	Super::Update(DeltaTime);
	GEngine->AddOnScreenDebugMessage(
		-1,                             // Key: -1 = auto-add without overriding others
		5.0f,                           // Duration in seconds
		FColor::Green,                 // Text color
		TEXT("PULL ABILITY: UPDATE")        // Your message
	);
}

void UPullAbility::PostUpdate(float DeltaTime)
{
	Super::PostUpdate(DeltaTime);
	GEngine->AddOnScreenDebugMessage(
		-1,                             // Key: -1 = auto-add without overriding others
		5.0f,                           // Duration in seconds
		FColor::Green,                 // Text color
		TEXT("PULL ABILITY: POSTUPDATE")        // Your message
	);
}
