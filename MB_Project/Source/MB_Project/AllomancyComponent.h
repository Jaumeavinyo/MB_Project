// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UAllomanticAbility.h"
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




	// metal list (normally from scene)
	TArray<AMetal*> DetectedSceneMetals;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PULL", meta = (DisplayThumbnail = "true"))
	float MetalSelectionCameraAngle;

	//Pull vars
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PULL", meta = (DisplayThumbnail = "true"))
	float metalInteractDistance;

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
	TArray<AMetal*> sortSceneMetals(TArray<AMetal*>& Metals);
};
