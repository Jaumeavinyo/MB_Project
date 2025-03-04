// Fill out your copyright notice in the Description page of Project Settings.


#include "AllomancyComponent.h"

// Sets default values for this component's properties
UAllomancyComponent::UAllomancyComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UAllomancyComponent::PostInitProperties()
{
	Super::PostInitProperties();

	// Initialize metals when object is created in the editor
	initAllomanticMetals();
}

void UAllomancyComponent::Initialize()
{
	bMetalToBeConsumed = false;
}


// Called when the game starts
void UAllomancyComponent::BeginPlay()
{
	Super::BeginPlay();

	
	// ...
	
}


// Called every frame
void UAllomancyComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...


	if (bMetalToBeConsumed) {
		if (CurrentConsumptionCurve) {
			processMetalConsumption(DeltaTime);
		}
		}
}


void UAllomancyComponent::initAllomanticMetals() //DONE
{
	AllomanticMetals.Empty();
	
	UAllomanticMetal* PewterMetal = NewObject<UAllomanticMetal>(this);
	PewterMetal->Initialize(EMetalType::PEWTER, 0);
	AllomanticMetals.Add(PewterMetal);

	// Create and initialize Iron metal
	UAllomanticMetal* IronMetal = NewObject<UAllomanticMetal>(this);
	IronMetal->Initialize(EMetalType::IRON, 0);
	AllomanticMetals.Add(IronMetal);

	// Create and initialize Steel metal
	UAllomanticMetal* SteelMetal = NewObject<UAllomanticMetal>(this);
	SteelMetal->Initialize(EMetalType::STEEL,0);
	AllomanticMetals.Add(SteelMetal);
}

//void UAllomancyComponent::consumeAllomanticMetal(UAllomanticMetal* metal, int32 ammount, FFloatCurve* curve) //WIP
//{
	//if (!metal || !curve) {
	//	UE_LOG(LogTemp, Warning, TEXT("metal or consumption graph in function: UAllomancyComponent::consumeAllomanticMetal are not valid"));
	//	return;
	//}

	//if (AllomanticMetals.Contains(metal))
	//{
	//	selectedMetal = metal;
	//}
	////get consumption interval from graph?
	//bMetalToBeConsumed = true;
	//bIsConsumingMetal = true;
	//ammountToBeConsumed = ammount;
	//CurrentConsumptionCurve = curve;

	//TimeConsumptionStart = FApp::GetCurrentTime();

//}

int32 UAllomancyComponent::getConsumptionvalueFromCurve(FFloatCurve* ConsumptionCurve, float TimeSinceConsumptionStarted) {
	

	//if (!CurrentConsumptionCurve || ConsumptionDuration <= 0 || totalAmmountOfConsumption <= 0)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("Invalid curve, TimeToConsume, or totalAmmountOfConsumption!"));
	//	return 0.0f;
	//}

	//// Convert elapsed time to normalized time (0 to 1 range)
	//float NormalizedTime = FMath::Clamp(ElapsedTime / TimeToConsume, 0.0f, 1.0f);

	//// Get percentage of total consumption from curve
	//float CurveValue = consumptionCurve->GetFloatValue(NormalizedTime);

	//// Convert to actual amount
	//return CurveValue * totalAmmountOfConsumption;


	return 0;
}

void UAllomancyComponent::processMetalConsumption(float DeltaTime)
{
	
}

void UAllomancyComponent::changeAllomanticMetalValue(UAllomanticMetal *metal, int32 ammount) //DONE
{
	if (!metal) {
		UE_LOG(LogTemp, Warning, TEXT("metal  in function: UAllomancyComponent::changeAllomanticMetalValue is not valid"))
	}
	else {
		if (AllomanticMetals.Contains(metal))
		{
			AllomanticMetals[metal] += ammount; 
			UE_LOG(LogTemp, Log, TEXT("Updated metal amount: %d"), AllomanticMetals[metal]);
		}
	}

}


UAllomanticMetal* UAllomancyComponent::getAllomanticMetal(EMetalType metalType_)  //DONE
{
	TArray<UAllomanticMetal*> array;
	AllomanticMetals.GetKeys(array);
	for (int32 i = 0; i < array.Num(); i++) {
		if (array[i] && array[i]->getMetalType() == metalType_) {
			return array[i];
		}
	}

	return nullptr;
}




