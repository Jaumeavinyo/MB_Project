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
	virtual void PostInitProperties() override;
protected:

	void Initialize();

	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//CHANGE ALLOMANTIC METAL VALUE OVER TIME
	UAllomanticMetal* selectedMetal;
	bool bMetalToBeConsumed;
	bool bIsConsumingMetal = true;
	int32 ammountToBeConsumed;
	UEdGraph* currentConsumptionGraph;
	float TimeSinceLastConsumption = 0.0f;
	float TimeSinceConsumptionCalled = 0.0f;
	float TimeConsumptionStart = 0.0f;
	float ConsumptionInterval = 1.0f;


protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Allomancy")
	TMap<FString, UAllomanticAbility*> ActiveAbilities;
	
	UPROPERTY(EditAnywhere, Category = "Allomancy")
	TMap<UAllomanticMetal*, int32> AllomanticMetals;

	//Only for internal use, not for gameplay programming
	void initAllomanticMetals();
	//Only for internal use, not for gameplay programming
	void processMetalConsumption(float DeltaTime);
	//Only for internal use, not for gameplay programming
	void changeAllomanticMetalValue(UAllomanticMetal* metal, int32 ammount);

public:

	//for blueprint calls, public use, gameplay programming
	UFUNCTION(BlueprintCallable,Category = "Allomancy")
	void consumeAllomanticMetal(UAllomanticMetal *metal,int32 ammount, UEdGraph *consumptionGraph);

	UFUNCTION(BlueprintCallable,Category = "Allomancy")
	UAllomanticMetal* getAllomanticMetal(EMetalType metalType_);
	
};
