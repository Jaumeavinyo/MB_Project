// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Metal.generated.h"


UCLASS()
class MB_PROJECT_API AMetal : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMetal();

	virtual void OnConstruction(const FTransform& Transform) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:

	// MESH		#############

	//variables .............

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	UStaticMeshComponent* StaticMeshComponent;

	// GAMEPLAY #############

	// variables .............

	float AngleFromCameraViewCenter;


	// MATERIALS #############

	// variables .............

	//Always needs to be defined, if needed will be used, if not, instance or dinamic material will be used.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Material")
	UMaterial* DefaultMaterial;

	//Used if it is defined
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Material", meta = (DisplayThumbnail = "true"))
	UMaterialInstance* InstanceMaterial;

	//Used for temporary materials, use "Blueprint callable ChangeMaterial(Umaterial mat);" to define and use this material.
	UPROPERTY(BlueprintReadOnly, Category = "Material")
	UMaterialInterface* CurrentMeshMaterial;

	//Next materials store the different debug materials for metals when being interactuated with
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Material")
	UMaterial* M_InteractuableMat;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Material")
	UMaterial* M_SelectableMat;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Material")
	UMaterial* M_NonInteractuableMat;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Material")
	UMaterial* M_MostCenteredMat;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Material")
	UMaterial* M_SelectedMat;
	//functions .............

	UFUNCTION(BlueprintCallable, Category = "Material")
	void ChangeMaterial(UMaterialInterface* mat);

	UFUNCTION(BlueprintCallable, Category = "Material")
	void ResetMaterial();


	// GAMEPLAY #############

	// variables

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Gameplay", meta = (Tooltip = "A static metal won't move when affected by abilities."))
	bool StaticMetal;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Gameplay", meta = (EditCondition = "!StaticMetal", Tooltip = "Player weight is equal to 1. A value of 0.5 is half the player weight, this will affect gameplay habilities"))
	float MetalWeight;


};
