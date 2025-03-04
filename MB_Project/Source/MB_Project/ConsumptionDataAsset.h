// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ConsumptionDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class MB_PROJECT_API UConsumptionDataAsset : public UDataAsset
{
	GENERATED_BODY()

public: 
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	TMap<float, float> consumptionOverTime;

	UFUNCTION(BlueprintCallable)
	float GetValueAtTime(float Time)const;
	
};
