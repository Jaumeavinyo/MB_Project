// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UAllomanticAbilityBase.h"
#include "MB_Project/UAllomanticAbilityBase.h"
#include "UPendulumPullAbility.generated.h"

/**
 * 
 */
UCLASS()
class MB_PROJECT_API UUPendulumPullAbility : public UAllomanticAbilityBase
{
	GENERATED_BODY()
	
	virtual void Activate(AActor* target = nullptr,ACharacter* AbilityOwner = nullptr) override;
	virtual void DeActivate() override;
	
	virtual void Start() override;
	virtual void PreUpdate(float DeltaTime) override;
	virtual void Update(float DeltaTime) override;
	virtual void PostUpdate(float DeltaTime) override;
	virtual void Stop() override;

public:

	UPROPERTY()
	bool bIsTriggered;
	
	UPROPERTY()
	float TriggerValue;

	UPROPERTY()
	bool bCanPull;
	
	UPROPERTY()
	ACharacter* OwnerCharacter = nullptr;
	
	UPROPERTY(BlueprintReadOnly, Category = "Pull")
	AActor* PullTarget;
	
	//CHARACTER AND METAL WORLD POS AND DIRECTION
	UPROPERTY()
	FVector MetalPos;
	UPROPERTY()
	FVector CharPos;
	
	FVector VRadius;
	float radius;
	FVector VRopeDir;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pendulum Pull Ability")
	float gravityValue;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pendulum Pull Ability")
	float mass;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pendulum Pull Ability")
	float InitialLaunchDirAngle;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pendulum Pull Ability")
	float InitialLaunchForce;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pendulum Pull Ability")
	float EndLaunchForceMultiplyer;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	float InitialLaunchTimeDuration;



	UPROPERTY()
	float AbilityStartTime; //time in world seconds when ability was called
	UPROPERTY()
	float AbilityCurrentDuration;//Time in seconds
	
	FVector characterVelocity;
	FVector VFinalVelocity;
	
	void DebugLogScreen();
};


