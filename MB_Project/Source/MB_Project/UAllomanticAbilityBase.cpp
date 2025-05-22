// Fill out your copyright notice in the Description page of Project Settings.


#include "UAllomanticAbilityBase.h"

UAllomanticAbilityBase::UAllomanticAbilityBase()
{
	bIsActive = false;
}

UAllomanticAbilityBase::~UAllomanticAbilityBase()
{
}

void UAllomanticAbilityBase::Activate(AActor* target ,ACharacter* AbilityOwner)
{
	bIsActive = true;
}

void UAllomanticAbilityBase::DeActivate()
{
	bIsActive = false;
}

void UAllomanticAbilityBase::Start() {}
void UAllomanticAbilityBase::PreUpdate(float DeltaTime) {}
void UAllomanticAbilityBase::Update(float DeltaTime) {}
void UAllomanticAbilityBase::PostUpdate(float DeltaTime) {}
void UAllomanticAbilityBase::Stop() { DeActivate(); }
