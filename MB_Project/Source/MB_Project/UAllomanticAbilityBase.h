// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UAllomanticAbilityBase.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class MB_PROJECT_API UAllomanticAbilityBase : public UObject
{
	GENERATED_BODY()
public:
	UAllomanticAbilityBase();
	~UAllomanticAbilityBase();

	 virtual void Activate(AActor* target = nullptr, ACharacter* AbilityOwner = nullptr);
	 virtual void DeActivate();
	
	virtual void Start();
	virtual void PreUpdate(float DeltaTime);
	virtual void Update(float DeltaTime);
	virtual void PostUpdate(float DeltaTime);
	virtual void Stop();


	UPROPERTY(BlueprintReadOnly)
	bool bIsActive;
	
};
