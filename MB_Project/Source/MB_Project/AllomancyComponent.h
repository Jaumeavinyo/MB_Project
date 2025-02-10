// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UAllomanticAbility.h"
#include "UAllomanticMetal.h"
#include "AllomancyComponent.generated.h"




class UAllomanticMetal;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MB_PROJECT_API UAllomancyComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAllomancyComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Allomancy")
	TMap<FString, UAllomanticAbility*> ActiveAbilities;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Allomancy")
	TMap<UAllomanticMetal*, int32> AllomanticMetals;

public:
	UFUNCTION(BlueprintCallable,Category = "Allomancy")
	void consumeAllomanticMetal(UAllomanticMetal *metal,int32 ammount, UEdGraph *consumptionGraph);

	void changeAllomanticMetalValue(UAllomanticMetal *metal, int32 ammount);
};
