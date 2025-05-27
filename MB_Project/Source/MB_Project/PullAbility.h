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
	
	UPROPERTY()
    ACharacter* OwnerCharacter = nullptr;

	//CHARACTER AND METAL WORLD POS AND DIRECTION
	UPROPERTY()
    FVector MetalPos;
    	
    UPROPERTY()
    FVector CharPos;
	
	UPROPERTY(BlueprintReadOnly, Category = "Pull")
	FVector PullDir;

	UPROPERTY(BlueprintReadOnly, Category = "Pull")
	AActor* PullTarget;

	//AIR DRIFTING AND MOVEMENT
	UPROPERTY(BlueprintReadOnly,Category = "Pull" )
	FVector PullForce;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	float Drag; //0.98 or less than 1 this would slow speed, don't know if should use
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	float SteerAngle;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	float Traction;
	
	
	UPROPERTY()
	float initialDistance;
	UPROPERTY()
	float currDistance;


	UPROPERTY()
	bool bIsTriggered;
	UPROPERTY()
	float TriggerValue;


	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	UCurveFloat* PullForceCurve;

	// Curve controlling lift or arc over time
	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pull Ability")
	//UCurveFloat* ArcAdjustmentCurve;



	
	UPROPERTY(EditDefaultsOnly, Category="Pull")
	float MaxPullForce = 100000.f;

	UPROPERTY(EditDefaultsOnly, Category="Pull")
	float CurrPullForce;
	
	UPROPERTY(EditDefaultsOnly, Category="Pull")
	float MinDistance = 100.f;

	UPROPERTY(EditDefaultsOnly, Category="Pull")
	float MaxDistance = 4000.f;
};
