// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Character.h"
#include "MB_MovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class MB_PROJECT_API UMB_MovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()
	

public:
	UMB_MovementComponent(const FObjectInitializer& ObjectInitializer);
	// Target rotation for manual control
	FRotator TargetRotation;

	// Set target rotation
	UFUNCTION(BlueprintCallable, Category = "Rotation")
	void SetTargetRotation(FRotator NewRotation);

	// Set target rotation from vector (yaw)
	UFUNCTION(BlueprintCallable, Category = "Rotation")
	void SetTargetRotationFromVector(FVector Direction);

	void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation")
	bool bInstantRotation = false;

	//interpolation speed (degrees per second)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation", meta = (EditCondition = "!bInstantRotation"))
	float RotationInterpSpeed = 360.0f;

protected:
	// Handle rotation update
	virtual void UpdateRotation(float DeltaTime);

	// Smooth rotation interpolation
	virtual FRotator SmoothRotation(FRotator CurrentRot, FRotator TargetRot, float DeltaTime);
};
