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
	FVector PullDir; //Straight line character-metal (Normalized) and if input from player, blended with input vector 

	UPROPERTY(BlueprintReadOnly, Category = "Pull")
	AActor* PullTarget;

	//AIR DRIFTING AND MOVEMENT
	UPROPERTY(BlueprintReadOnly,Category = "Pull" )
	FVector PullForce;//Force deviated from DesiredPullForce caused by: Inertia and player direction input
	
	UPROPERTY(BlueprintReadOnly,Category = "Pull" )
	FVector DesiredPullForce; //Straight line force character-metal

	UPROPERTY(BlueprintReadOnly,Category = "Pull")
	FVector AirControlInputVector;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	float AirControlMultiplyer;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	float Drag; //0.98 or less than 1 this would slow speed and give inertia feel
	
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
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")//jump before bCanPull
	float InitialLaunchForce;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	float InitialLaunchDirAngle;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	float InitialLaunchTimeDuration = 1.0f;

	UPROPERTY()
	float AbilityStartTime; //time in world seconds when ability was called
	UPROPERTY()
	float AbilityCurrentDuration;//Time in seconds 

	
	int32 FrameCounter = 0;//debug purposes
	
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	UCurveFloat* PullForceCurve;

	// Curve controlling lift or arc over time
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	UCurveFloat* TurnRateCurve;



	
	UPROPERTY(EditDefaultsOnly, Category="Pull")
	float MaxPullForce ;

	UPROPERTY(EditDefaultsOnly, Category="Pull")
	float CurrPullForce;
	
	UPROPERTY(EditDefaultsOnly, Category="Pull")
	float MinDistance;

	UPROPERTY(EditDefaultsOnly, Category="Pull")
	float MaxDistance;
};
