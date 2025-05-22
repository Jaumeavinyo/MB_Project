// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UAllomanticAbilityBase.h"
#include "UAllomanticMetal.h"
#include "Metal.h"
#include "MB_ProjectCharacter.h"
#include "Camera/CameraComponent.h"
#include "AllomancyComponent.generated.h"




class UAllomanticMetal;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
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
	
	UAllomanticMetal* selectedAllomanticMetal;
	bool bMetalToBeConsumed;
	bool bIsConsumingMetal = true;
	int32 ammountToBeConsumed;
	FFloatCurve* CurrentConsumptionCurve;
	float TimeSinceLastConsumption = 0.0f;
	float TimeSinceConsumptionCalled = 0.0f;
	float ConsumptionDuration = 0.0f;
	float TimeConsumptionStart = 0.0f;

	

protected:
	//const vars
	ACharacter* ComponentOwner;
	
	

	//GAMEPLAY VARS
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PULL", meta = (DisplayThumbnail = "true"))
	float MetalSelectionCameraAngle;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PULL", meta = (DisplayThumbnail = "true"))
	float metalInteractDistance;
	
	UPROPERTY(BlueprintReadOnly, Category = "Allomancy")
	TArray<UAllomanticAbilityBase*> Abilities;

	UPROPERTY(EditAnywhere, Category = "Allomancy")
	TMap<UAllomanticMetal*, int32> AllomanticMetals;

	UPROPERTY(BlueprintReadWrite,Category="Allomancy")
	TArray<AMetal*> SelectableMetals;
	
	//the valid most centered metal that is valid
	UPROPERTY(BlueprintReadWrite, Category = "Allomancy")
	AMetal* CenteredMetal;
	
	//the valid most centered metal that is selected by player input
	UPROPERTY(BlueprintReadWrite, Category = "Allomancy")
	AMetal* SelectedMetal;

	
	//GAMEPLAY FUNCTIONS
	
	UFUNCTION(BlueprintCallable, Category = "Allomancy")
	void ActivateAbility(TSubclassOf<UAllomanticAbilityBase> AbilityClass,TSubclassOf<AActor> target = nullptr,TSubclassOf<ACharacter> AbilityOwner = nullptr);


	//ABILITY INPUT HANDLING
	UFUNCTION(BlueprintCallable, Category = "Pull")
	void PullTriggerInput(bool triggered, float value);
	
	//ALLOMANTIC COMPONENT INTERNAL FUNCTIONS
	
	//Only for internal use, not for gameplay programming
	void initAllomanticMetals();

	//Only for internal use, not for gameplay programming
	void processMetalConsumption(float DeltaTime);

	//Only for internal use, not for gameplay programming
	void changeAllomanticMetalValue(UAllomanticMetal* metal, int32 ammount);

	//Only for internal use, not for gameplay programming
	//Based on the time in the "FFloatCurve* ConsumptionCurve" retrieve a value of consumption for that time. 
	//If curve goes from 0 to 1, if the time is 0.5 and the consumption value "CV" is 0.3%: value to consume will be:
	//consumedMetalSofar - (CV*totalAmmountToConsume)
	int32 getConsumptionvalueFromCurve(FFloatCurve* ConsumptionCurve, float TimeSinceConsumptionStarted);
public:

	//for blueprint calls, public use, gameplay programming
	//UFUNCTION(BlueprintCallable,Category = "Allomancy")
	//void consumeAllomanticMetal(UAllomanticMetal *metal,int32 ammount, FFloatCurve* curve);

	UFUNCTION(BlueprintCallable, Category = "Allomancy")
	UAllomanticMetal* getAllomanticMetal(EMetalType metalType_);

	UFUNCTION(BlueprintCallable, Category = "Allomancy")
	TArray<AMetal*> sortSceneMetals(const TArray<AMetal*>& Metals);

	UFUNCTION(BlueprintCallable,Category = "Allomancy")
	void SelectMetal();
};
