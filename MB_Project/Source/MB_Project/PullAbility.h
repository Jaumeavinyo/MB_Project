// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UAllomanticAbilityBase.h"
#include "PullAbility.generated.h"

/**
 * 
 */
UCLASS()
class MB_PROJECT_API UPullAbility : public UAllomanticAbilityBase
{
	GENERATED_BODY()
public:
	virtual void Activate(TSubclassOf<AActor> target = nullptr) override;
	virtual void DeActivate() override;
	
	virtual void Start() override;
	virtual void PreUpdate(float DeltaTime) override;
	virtual void Update(float DeltaTime) override;
	virtual void PostUpdate(float DeltaTime) override;


	UPROPERTY(BlueprintReadOnly, Category = "Abilities")
	TSubclassOf<AActor*> PullTarget;
	
};
