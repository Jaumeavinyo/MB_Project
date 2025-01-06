// Fill out your copyright notice in the Description page of Project Settings.


#include "Metal.h"

// Sets default values
AMetal::AMetal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh component"));

	if (StaticMeshComponent) {
		RootComponent = StaticMeshComponent;
	}
}
//Called when editing class in UE editor
void AMetal::OnConstruction(const FTransform& Transform)
{

	UMaterialInterface* MaterialToApply = nullptr;
	if (InstanceMaterial && InstanceMaterial->IsValidLowLevel()) {
		MaterialToApply = InstanceMaterial;
	}
	else if (DefaultMaterial && DefaultMaterial->IsValidLowLevel()) {
		MaterialToApply = DefaultMaterial;
	}
	else {
		UE_LOG(LogTemp, Error, TEXT(" Metal class constructor failed to assign 'CurrentMeshMaterial', InstanceMaterial and DefaultMaterial where nullptr"));
	}

	StaticMeshComponent->SetMaterial(0, MaterialToApply);
	CurrentMeshMaterial = MaterialToApply;
}

// Called when the game starts or when spawned
void AMetal::BeginPlay()
{
	Super::BeginPlay();

	
	
}

// Called every frame
void AMetal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMetal::ChangeMaterial(UMaterialInterface* mat)
{
	if (mat && mat->IsValidLowLevel()) {
		CurrentMeshMaterial = mat;
		StaticMeshComponent->SetMaterial(0,CurrentMeshMaterial);
	}
	else {
		UE_LOG(LogTemp, Error, TEXT(" ChangeMaterial() function from Metal class failed to assign new material because function argument of type UMaterialInterface* is nullptr or non-valid."));
	}
	
}

void AMetal::ResetMaterial()
{
	if (InstanceMaterial) {
		CurrentMeshMaterial = InstanceMaterial;
	}
	else if (DefaultMaterial) {
		CurrentMeshMaterial = DefaultMaterial;
	}
	else {
		UE_LOG(LogTemp, Error, TEXT(" ResetMaterial() from Metal class  failed to assign 'CurrentMeshMaterial' to a default value because InstanceMaterial and DefaultMaterial where nullptr"));
	}

	if (CurrentMeshMaterial && CurrentMeshMaterial->IsValidLowLevel()) {
		StaticMeshComponent->SetMaterial(0, CurrentMeshMaterial);
	}
	else {
		UE_LOG(LogTemp, Error, TEXT(" ResetMaterial() from Metal class failed to assign 'CurrentMeshMaterial' to the static mesh because CurrentMeshMaterial is nullptr"));
	}


}

