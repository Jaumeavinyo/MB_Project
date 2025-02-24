// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UAllomanticMetal.generated.h"
//ALL ALLOMANTIC METALS THAT ACT AS MANA FOR HABILITIES HAVE THIS CLASS AS PARENT

UENUM(BlueprintType)
enum class EMetalType : uint8
{
	NONE   UMETA(DisplayName = "None"),
	PEWTER UMETA(DisplayName = "Pewter"),
	IRON   UMETA(DisplayName = "Iron"),
	STEEL  UMETA(DisplayName = "Steel")
};


UCLASS(BlueprintType)
class MB_PROJECT_API UAllomanticMetal : public UObject
{
	GENERATED_BODY()
public:

	UAllomanticMetal();
	~UAllomanticMetal();

	void Initialize(EMetalType type_, int32 initialMetalReserves_);


public:

	UPROPERTY(EditAnywhere, Category = "AllomanticMetal")
	EMetalType metalType;

	UPROPERTY(EditAnywhere, Category = "AllomanticMetal")
	int32 metalReserves;

public:

	EMetalType getMetalType();

};
