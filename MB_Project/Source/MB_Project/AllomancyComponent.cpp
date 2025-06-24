// Fill out your copyright notice in the Description page of Project Settings.


#include "AllomancyComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "PullAbility.h"
#include "UPendulumPullAbility.h"





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


	for (int i = 0;i<ActiveLineTraces.Num();i++)
	{
		AActor* Target = ActiveLineTraces[i].TargetActor;
		UNiagaraComponent* LineTrace = ActiveLineTraces[i].NiagaraComponent;
		if (!Target || !LineTrace)
		{
			if (LineTrace)//The only thing we need to make sure we destroy
			{
				LineTrace->DestroyComponent();
			}
			ActiveLineTraces.RemoveAt(i);
			continue;
		}
		FVector EndWorldPos = Target->GetActorLocation();
		FVector EndLocalPos = LineTrace->GetComponentTransform().InverseTransformPosition(EndWorldPos);
		LineTrace->SetVariableVec3(TEXT("User.Beam End"), EndLocalPos);
		//segun el input acia abajo cambiar el rate de turn de la grafica de cambio de vector de direccion
		//braking factor afecta a velocidad del pull pq estoy en falling mode y no en custom movement
		
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
			UUPendulumPullAbility* PendulumPullAbility = Cast<UUPendulumPullAbility>(Ability);
			if (PendulumPullAbility)
			{
				PendulumPullAbility->bIsTriggered = GInput.bIsTriggered;
				PendulumPullAbility->TriggerValue = GInput.TriggerValue;
				//PendulumPullAbility->JoystickValue = GInput.JoystickValue.GetSafeNormal();
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

void UAllomancyComponent::AddLineTrace(AActor* Target)
{
	if (!Target || !NS_LineTrace) return;
	UNiagaraComponent* NiagaraComp = UNiagaraFunctionLibrary::SpawnSystemAttached(
		NS_LineTrace,
		ComponentOwner->GetMesh(), // Or another component to attach to
		NAME_None,
		FVector(0.f,0.f,100.0f),
		FRotator::ZeroRotator,
		EAttachLocation::KeepRelativeOffset,
		true
	);
	/*FVector EndWorldPos = Target->GetActorLocation();
	FVector EndLocalPos = NiagaraComp->GetComponentTransform().InverseTransformPosition(EndWorldPos);
	NiagaraComp->SetVariableVec3(FName("User.Beam End"), Target->GetActorLocation());*/

	FLineTraceTarget newLineTrace;
	newLineTrace.TargetActor = Target;
	newLineTrace.NiagaraComponent = NiagaraComp;
	ActiveLineTraces.Add(newLineTrace);
	
}

void UAllomancyComponent::RemoveLineTrace(AActor* Target)
{
	for (int32 i = 0; i < ActiveLineTraces.Num(); ++i)
	{
		if (ActiveLineTraces[i].TargetActor == Target)
		{
			if (ActiveLineTraces[i].NiagaraComponent)
			{
				ActiveLineTraces[i].NiagaraComponent->DestroyComponent();
			}
			ActiveLineTraces.RemoveAt(i);
			break;
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
			if (Metal && Metal->WasRecentlyRendered() && Metal->WasRecentlyRendered()/*GetWorld()->TimeSeconds - Metal->GetLastRenderTime() > 1.0f*/) {

				//Check if metal is within interaction distance
				FVector MetalWorldPosition = Metal->GetActorTransform().GetLocation();
				FVector playerPosition = GetOwner()->GetActorLocation();
				float distanceToPlayer = FVector::Dist(MetalWorldPosition, playerPosition);
			
				if (distanceToPlayer <= metalInteractDistance) {
					
					APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
					int32 ScreenWidth, ScreenHeight;
					PC->GetViewportSize(ScreenWidth, ScreenHeight);
					Metal->ChangeMaterial(Metal->M_InteractuableMat);
					
					FVector ScreenWorldOrigin, ScreenWorldDirection;
					if (PC->DeprojectScreenPositionToWorld(ScreenWidth / 2.0f, ScreenHeight / 2.0f, ScreenWorldOrigin, ScreenWorldDirection))
					{
						if (SelectedMetal  != nullptr && Metal != SelectedMetal)
						{
							AddLineTrace(Metal);
						}
						
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
				RemoveLineTrace(Metal);
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
		for (int i = 0;i<ActiveLineTraces.Num();i++)
		{
			if (ActiveLineTraces[i].TargetActor == SelectedMetal)
			{
				ActiveLineTraces[i].NiagaraComponent->SetVariableLinearColor(TEXT("User.Color"), FLinearColor(1.0f,1.0f,0.0f,1.0f));
			}
		}
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




