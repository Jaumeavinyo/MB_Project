// Fill out your copyright notice in the Description page of Project Settings.


#include "Metal.h"

// Sets default values
AMetal::AMetal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Metal Static Mesh component"));
	RootComponent = MeshComponent;
	
	if (InstanceMaterial && InstanceMaterial->IsValidLowLevel()) {
		CurrentMeshMaterial = InstanceMaterial;
	}
	else if(DefaultMaterial && DefaultMaterial->IsValidLowLevel()) {
		CurrentMeshMaterial = DefaultMaterial;
	}
	else {
		UE_LOG(LogTemp, Error, TEXT(" Metal class constructor failed to assign 'CurrentMeshMaterial', InstanceMaterial and DefaultMaterial where nullptr"));
	}



}

// Called when the game starts or when spawned
void AMetal::BeginPlay()
{
	Super::BeginPlay();

	if (StaticMesh) {
		MeshComponent->SetStaticMesh(StaticMesh);
	}
	
}

// Called every frame
void AMetal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMetal::ChangeMaterial(UMaterialInterface* mat)
{
	CurrentMeshMaterial = mat;
}

void AMetal::ResetMaterial()
{
	if (InstanceMaterial) {
		CurrentMeshMaterial = InstanceMaterial;
	}
	else if (DefaultMaterial) {
		CurrentMeshMaterial = DefaultMaterial;
	}
}

