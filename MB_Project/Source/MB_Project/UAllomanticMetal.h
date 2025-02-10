// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UAllomanticMetal.generated.h"
//ALL ALLOMANTIC METALS THAT ACT AS MANA FOR HABILITIES HAVE THIS CLASS AS PARENT


enum metalType {
	NONE,
	PEWTER,
	IRON,
	STEAL
};


UCLASS(BlueprintType)
class MB_PROJECT_API UAllomanticMetal : public UObject
{
	GENERATED_BODY()
public:

	UAllomanticMetal();
	~UAllomanticMetal();

	void Initialize(metalType type_);


public:
	metalType type;

};
