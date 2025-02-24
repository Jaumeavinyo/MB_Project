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
		processMetalConsumption(DeltaTime);
	}
}


void UAllomancyComponent::initAllomanticMetals()
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

void UAllomancyComponent::processMetalConsumption(float DeltaTime)
{
	//if (bIsConsumingMetal && ammountToBeConsumed > 0) {

	//	TimeSinceLastConsumption += DeltaTime;
	//	TimeSinceConsumptionCalled = FApp::GetCurrentTime() - TimeConsumptionStart;
	//	//TimeSinceConsumptionStarted = tiempo actual menos tiempo cuando empezo a consumir
	//	if (TimeSinceLastConsumption >= ConsumptionInterval) {

	//		int32 graphNumber = getGraphValue(currentConsumptionGraph, TimeSinceConsumptionCalled);
	//		changeAllomanticMetalValue(selectedMetal, -graphNumber);
	//		ammountToBeConsumed -= graphNumber;

	//		TimeSinceLastConsumption = 0.0f;
	//	}
	//}

	//if (ammountToBeConsumed <= 0) {//posible bug de q en el grafico diga numeros de consumo actual en ese mom y no numeros de consumo en ese momento, que sea un sumatorio de lo anterior rompe esto
	//	bIsConsumingMetal = false;
	//	bMetalToBeConsumed = false;
	//	TimeSinceConsumptionCalled = 0.0f;
	//	//ammount to be consumed already being resseted ----------------------------------------------AQUI ME HE QUEDADO
	//}
}

int32 getGraphValue(UEdGraph* currentConsumptionGraph,float TimeSinceConsumptionStarted) {
	//time since consumption started is the time value to be used with the graph to get a number
	return 0;
}

void UAllomancyComponent::consumeAllomanticMetal(UAllomanticMetal* metal, int32 ammount, UEdGraph* consumptionGraph)
{
	if (!metal || !consumptionGraph) {
		UE_LOG(LogTemp, Warning, TEXT("metal or consumption graph in function: UAllomancyComponent::consumeAllomanticMetal are not valid"));
		return;
	}

	if (AllomanticMetals.Contains(metal))
	{
		selectedMetal = metal;
	}
	//get consumption interval from graph?
	bMetalToBeConsumed = true;
	ammountToBeConsumed = ammount;
	currentConsumptionGraph = consumptionGraph;
	bIsConsumingMetal = true;
	TimeConsumptionStart = FApp::GetCurrentTime();
	
}

void UAllomancyComponent::changeAllomanticMetalValue(UAllomanticMetal *metal, int32 ammount)
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


UAllomanticMetal* UAllomancyComponent::getAllomanticMetal(EMetalType metalType_)
{/*
	TArray<UAllomanticMetal*> array;
	AllomanticMetals.GetKeys(array);
	for (uint32 i = 0; i < array.Num(); i++) {
		if (array[i] && array[i]->getMetalType() == metalType_) {
			return array[i];
		}
	}*/

	return nullptr;
}




