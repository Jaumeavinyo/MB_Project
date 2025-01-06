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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Mesh", meta = (DisplayThumbnail = "true"))
	UStaticMesh* StaticMesh;

	UPROPERTY(BlueprintReadOnly, Category = "Mesh")
	UStaticMeshComponent* MeshComponent;

	// MATERIAL #############

	//Always needs to be defined, if needed will be used, if not, instance or dinamic material will be used.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Material")
	UMaterial* DefaultMaterial;

	//Used if it is defined
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Material", meta = (DisplayThumbnail = "true"))
	UMaterialInstance* InstanceMaterial;

	//Used for temporary materials, use "Blueprint callable ChangeMaterial(Umaterial mat);" to define and use this material.
	UPROPERTY(BlueprintReadOnly,Category = "Material")
	UMaterialInterface* CurrentMeshMaterial;

	UFUNCTION(BlueprintCallable, Category = "Material")
	void ChangeMaterial(UMaterialInterface* mat);

	UFUNCTION(BlueprintCallable, Category = "Material")
	void ResetMaterial();

};
