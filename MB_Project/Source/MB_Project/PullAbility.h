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
	virtual void Activate(AActor* target = nullptr,ACharacter* AbilityOwner = nullptr) override;
	virtual void DeActivate() override;
	
	virtual void Start() override;
	virtual void PreUpdate(float DeltaTime) override;
	virtual void Update(float DeltaTime) override;
	virtual void PostUpdate(float DeltaTime) override;
	virtual void Stop() override;

	FVector calculateAirControlVector();
	void DebugLines();
	
	UPROPERTY()
    ACharacter* OwnerCharacter = nullptr;

	//CHARACTER AND METAL WORLD POS AND DIRECTION
	UPROPERTY()
    FVector MetalPos;
    UPROPERTY()
    FVector CharPos;
	
	UPROPERTY(BlueprintReadOnly, Category = "Pull")
	AActor* PullTarget;

	//AIR DRIFTING AND MOVEMENT
	
	//Straight line character-metal (Normalized) and if input from player, blended with input vector 
	UPROPERTY(BlueprintReadOnly, Category = "Pull")
	FVector VPlayerMetalDir;
	//Force deviated from DesiredPullForce caused by: Inertia and player direction input
	UPROPERTY(BlueprintReadOnly,Category = "Pull" )
	FVector VFinalVelocity;
	//Straight line force character-metal
	UPROPERTY(BlueprintReadOnly,Category = "Pull" )
	FVector VPullForce; 

	UPROPERTY(BlueprintReadOnly,Category = "Pull")
	FVector AirControlInputVector;

	
	UPROPERTY()
	float initialDistance;
	UPROPERTY()
	float currDistance; //distance traveled


	UPROPERTY()
	bool bIsTriggered;
	
	UPROPERTY()
	float TriggerValue;

	UPROPERTY()
	FVector2D JoystickValue;
	
	UPROPERTY()
	bool bCanPull;//Pull after InitialLaunchForce
	
	//GAMEPLAY - BLUEPRINT EDITABLE
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
    float AirControlMultiplyerX;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	float AirControlMultiplyerY;
	//0.98 or less than 1 this would slow speed and give inertia feel	
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
    float Drag;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	//LauchforceMultiplyer*PullForce the las frame of the Ability
	float EndLaunchForceMultiplyer;
	//jump before bCanPull
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
    float InitialLaunchForce;	
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	float InitialLaunchDirAngle;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	float InitialLaunchTimeDuration;

	UPROPERTY(EditDefaultsOnly, Category="Pull Ability")
	float MaxPullForce ;

	UPROPERTY(EditDefaultsOnly, Category="Pull Ability")
	float CurrPullForce;
	
	UPROPERTY(EditDefaultsOnly, Category="Pull Ability")
	float MinDistance;

	UPROPERTY(EditDefaultsOnly, Category="Pull")
	float MaxDistance;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	UCurveFloat* PullForceCurve;

	// Curve controlling lift or arc over time
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	UCurveFloat* TurnRateCurve;


	UPROPERTY()
	float AbilityStartTime; //time in world seconds when ability was called
	UPROPERTY()
	float AbilityCurrentDuration;//Time in seconds 

	
	int32 FrameCounter = 0;//debug purposes

	//CAMERA USEFUL VARIABLES
	UPROPERTY(BlueprintReadOnly,Category="Pull state")
	float Alingment;
	UPROPERTY(BlueprintReadOnly,Category="Pull state")
	float SpeedFactor;

};
