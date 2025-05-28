// Fill out your copyright notice in the Description page of Project Settings.


#include "AllomancyComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "PullAbility.h"

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
	ComponentOwner = Cast<ACharacter>(GetOwner());
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
	float FPS = 1.0f / GetWorld()->GetDeltaSeconds();
	FString FPSString = FString::Printf(TEXT("FPS: %.1f"), FPS);
	GEngine->AddOnScreenDebugMessage(1, 0.f, FColor::Green, FPSString);
	// ...
	if (bMetalToBeConsumed) {
		if (CurrentConsumptionCurve) {
			processMetalConsumption(DeltaTime);
		}
	}

	for (UAllomanticAbilityBase* Ability: Abilities)
	{
		if (Ability && Ability->bIsActive)
		{
			Ability->PreUpdate(DeltaTime);
			
		}
	}
	for (UAllomanticAbilityBase* Ability: Abilities)
	{
		if (Ability && Ability->bIsActive)
		{
			
			Ability->Update(DeltaTime);
			
		}
	}
	for (UAllomanticAbilityBase* Ability: Abilities)
	{
		if (Ability && Ability->bIsActive)
		{
			
			Ability->PostUpdate(DeltaTime);
		}
	}
}


void UAllomancyComponent::ActivateAbility(TSubclassOf<UAllomanticAbilityBase> AbilityClass, TSubclassOf<AActor> target, TSubclassOf<ACharacter> AbilityOwner)
{
	UAllomanticAbilityBase** Exists = Abilities.FindByPredicate([&](UAllomanticAbilityBase* A)
	{
		return A && A->IsA(AbilityClass);
	});

	UAllomanticAbilityBase* Ability = nullptr;
	
	if (Exists)
	{
		Ability = *Exists;
	}else
	{
		Ability = NewObject<UAllomanticAbilityBase>(this, AbilityClass);
		if (Ability)
		{
			Abilities.Add(Ability);
		}
	}
	if (Ability)
	{
		Ability->Activate(SelectedMetal, ComponentOwner);
		Ability->Start();
		
	}
}

void UAllomancyComponent::PullTriggerInput(FGameplayInput GInput)
{
	for (UAllomanticAbilityBase* Ability: Abilities)
	{
		if (Ability)
		{
			UPullAbility* PullAbility = Cast<UPullAbility>(Ability);
			if (PullAbility)
			{
				PullAbility->bIsTriggered = GInput.bIsTriggered;
				PullAbility->TriggerValue = GInput.TriggerValue;
				PullAbility->JoystickValue = GInput.JoystickValue.GetSafeNormal();
				if (GInput.bIsTriggered == false)
				{
					UnSelectMetal();
				}
			}
		}else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("PullTriggerIput function called without activating PullAbility"));
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
	SteelMetal->Initialize(EMetalType::STEEL, 0);
	AllomanticMetals.Add(SteelMetal);
}

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

void UAllomancyComponent::changeAllomanticMetalValue(UAllomanticMetal* metal, int32 ammount) //DONE
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

TArray<AMetal*> UAllomancyComponent::sortSceneMetals(const TArray<AMetal*>& Metals)   //THIS FUNCTION FILLS UP SELECTABLE METALS SO WE CAN SORT THAT LIST WHEN TRIGGERING PULL AND TAKE THE MOST CENTERED BETWEEN 10 AND NOT 300 METALS EVERY FRAME
{

	TArray<AMetal*> selectableMetals;


	for (AMetal* Metal : Metals) {
		if (Metal != SelectedMetal)
		{
			//Check if metal object is visible (being rendered)
			if (Metal && Metal->WasRecentlyRendered()) {

				//Check if metal is within interaction distance
				FVector MetalWorldPosition = Metal->GetActorTransform().GetLocation();
				FVector playerPosition = GetOwner()->GetActorLocation();
				float distanceToPlayer = FVector::Dist(MetalWorldPosition, playerPosition);

				if (distanceToPlayer <= metalInteractDistance) {
					/*
					Metal->ChangeMaterial(Metal->M_InteractuableMat);

					//Is inside selectable angle of camera view?
					AMB_ProjectCharacter* player = Cast<AMB_ProjectCharacter>(GetOwner());

					FVector Player_Metal_Vec = MetalWorldPosition - playerPosition;
					Player_Metal_Vec.Normalize();

					FVector cameraForwardVec = player->GetFollowCamera()->GetForwardVector();
					//float angleWithCameraView = FMath::RadiansToDegrees(acos(Player_Metal_Vec.Dot(cameraForwardVec)));

					float dot = FVector::DotProduct(Player_Metal_Vec, cameraForwardVec);
					dot = FMath::Clamp(dot, -1.0f, 1.0f); // Prevent acos from crashing

					float angleWithCameraView = FMath::RadiansToDegrees(acos(dot));
				
					//Dot product order matters, this order is vec metal-player projection on cameraforward vec (all normalized)
					if (angleWithCameraView <= MetalSelectionCameraAngle) {

						Metal->ChangeMaterial(Metal->M_SelectableMat);
						Metal->AngleFromCameraViewCenter = angleWithCameraView;//FMath::RadiansToDegrees(acos(Player_Metal_Vec.Dot(cameraForwardVec)));

						if (!selectableMetals.Contains(Metal)) {
							selectableMetals.Add(Metal);
						}
					}
					else {

						Metal->ChangeMaterial(Metal->M_InteractuableMat);
						if (selectableMetals.Contains(Metal)) {
							selectableMetals.Remove(Metal);
						}
					}*/
					APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
					int32 ScreenWidth, ScreenHeight;
					PC->GetViewportSize(ScreenWidth, ScreenHeight);
					Metal->ChangeMaterial(Metal->M_InteractuableMat);
					
					FVector ScreenWorldOrigin, ScreenWorldDirection;
					if (PC->DeprojectScreenPositionToWorld(ScreenWidth / 2.0f, ScreenHeight / 2.0f, ScreenWorldOrigin, ScreenWorldDirection))
					{
						ScreenWorldDirection.Normalize();

						FVector ToMetal = MetalWorldPosition - ScreenWorldOrigin;
						ToMetal.Normalize();

						float Dot = FVector::DotProduct(ScreenWorldDirection, ToMetal);
						Dot = FMath::Clamp(Dot, -1.0f, 1.0f);
						float Angle = FMath::RadiansToDegrees(FMath::Acos(Dot));

						//Metal->ChangeMaterial(Metal->M_InteractuableMat);

						if (Angle <= MetalSelectionCameraAngle)
						{
							Metal->ChangeMaterial(Metal->M_SelectableMat);
							Metal->AngleFromCameraViewCenter = Angle;

							if (!selectableMetals.Contains(Metal)) {
								selectableMetals.Add(Metal);
							}
						}
						else
						{
							if (selectableMetals.Contains(Metal)) {
								selectableMetals.Remove(Metal);
							}
						}
					}//cpy end
				}
				else {

					Metal->ChangeMaterial(Metal->M_NonInteractuableMat);
					if (selectableMetals.Contains(Metal)) {
						selectableMetals.Remove(Metal);
					}
				}
			}
			else {
				//Was this metal selectable before not being visible?(before not being rendered)
				Metal->ChangeMaterial(Metal->M_NonInteractuableMat);
				if (selectableMetals.Contains(Metal))
				{
					selectableMetals.Remove(Metal);
				}
			}
		}
	}
	return selectableMetals;
}

bool UAllomancyComponent::SelectMetal()
{
	if (SelectableMetals.Num() > 0)
	{
		//Look for all selectable metals and compare wich one is more centered
		for (AMetal* Metal : SelectableMetals)
		{
			if (CenteredMetal)
			{
				if (Metal->AngleFromCameraViewCenter < CenteredMetal->AngleFromCameraViewCenter)
				{
					CenteredMetal = Metal;
				}
			//is centered metal does not exist yet, make the first metal of the
			//list the most centered to start comparing it with other selectable metals	
			}else{
				CenteredMetal = Metal;
			}		
		}
		SelectedMetal = CenteredMetal;
		SelectedMetal->ChangeMaterial(SelectedMetal->M_SelectedMat);
		return true;
	}
	return false;
	
}

void UAllomancyComponent::UnSelectMetal()
{
	FString MetalName = SelectedMetal->GetName(); // Or a custom method like GetMetalName()
	CenteredMetal = nullptr;
	SelectedMetal = nullptr;
	
}




