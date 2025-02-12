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
}

void UAllomancyComponent::consumeAllomanticMetal(UAllomanticMetal *metal, int32 ammount, UEdGraph* consumptionGraph)
{
	if (!metal || !consumptionGraph) {
		UE_LOG(LogTemp,Warning, TEXT("metal or consumption graph in function: UAllomancyComponent::consumeAllomanticMetal are not valid"))
	}

//this should be called multiple times following the graph values
	changeAllomanticMetalValue(metal, ammount);

	

}

void UAllomancyComponent::initAllomanticMetals()
{
	AllomanticMetals.Empty();

	UAllomanticMetal* PewterMetal = NewObject<UAllomanticMetal>(this);
	PewterMetal->Initialize(EMetalType::PEWTER);
	AllomanticMetals.Add(PewterMetal);

	// Create and initialize Iron metal
	UAllomanticMetal* IronMetal = NewObject<UAllomanticMetal>(this);
	IronMetal->Initialize(EMetalType::IRON);
	AllomanticMetals.Add(IronMetal);

	// Create and initialize Steel metal
	UAllomanticMetal* SteelMetal = NewObject<UAllomanticMetal>(this);
	SteelMetal->Initialize(EMetalType::STEEL);
	AllomanticMetals.Add(SteelMetal);
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



