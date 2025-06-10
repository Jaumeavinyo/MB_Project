// Fill out your copyright notice in the Description page of Project Settings.


#include "UPendulumPullAbility.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UUPendulumPullAbility::Activate(AActor* target, ACharacter* AbilityOwner)
{
	Super::Activate(target, AbilityOwner);
	if (target)
	{
		PullTarget = target;
	}
	if (AbilityOwner)
	{
		OwnerCharacter = AbilityOwner;
	}
	if (OwnerCharacter->GetCharacterMovement()->MovementMode == MOVE_Walking)
	{
		bCanPull = false;
	}else
	{
		bCanPull = true;
	}
}

void UUPendulumPullAbility::DeActivate()
{
	Super::DeActivate();
}

void UUPendulumPullAbility::Start()
{
	Super::Start();
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Start()"));
	
	AbilityStartTime = GetWorld()->GetTimeSeconds();
	
	CharPos = OwnerCharacter->GetActorLocation();
	MetalPos = PullTarget->GetActorLocation();
	
	VRadius = CharPos - MetalPos;
	VRadius /= 100; //m
	radius = VRadius.Size(); //m
	VRopeDir = VRadius / radius; //normalized //m
	characterVelocity = OwnerCharacter->GetVelocity()/100; //m

	if (bCanPull == false)
	{
		FVector Forward = OwnerCharacter->GetActorForwardVector();
		FVector RotationAxis = FVector::CrossProduct(Forward, FVector::UpVector); // Character's local right
		RotationAxis.Normalize();
		
		FVector LaunchDirection = Forward.RotateAngleAxis(InitialLaunchDirAngle, RotationAxis); 
		FVector LaunchVelocity = LaunchDirection * InitialLaunchForce;
		OwnerCharacter->LaunchCharacter(LaunchVelocity, true, true);
		//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, TEXT("LAUNCH"));
	}
}

void UUPendulumPullAbility::PreUpdate(float DeltaTime)
{
	Super::PreUpdate(DeltaTime);
	CharPos = OwnerCharacter->GetActorLocation();
	MetalPos = PullTarget->GetActorLocation();
	
	VRadius = CharPos - MetalPos;
	VRadius /= 100; //m
	radius = VRadius.Size(); //m
	VRopeDir = VRadius / radius; //normalized //m

	characterVelocity = OwnerCharacter->GetVelocity()/100; //m
	
	if (bCanPull)
	{
		if (bIsTriggered && TriggerValue > 0)
		{
			
			//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("PreUpdate()"));
			//Decompose velocity in tangent vector and radius projected velocity
			float radialVelocity = FVector::DotProduct(characterVelocity,VRopeDir);//radius projected velocity
	
			FVector VRopeVelocity = radialVelocity * VRopeDir;
			FVector VTangencialVelocity = characterVelocity - VRopeVelocity;


			//Angular velocity
			FVector VAngularDir = FVector::CrossProduct(VRopeDir,VTangencialVelocity);
			VAngularDir = VAngularDir.GetSafeNormal();
			float angularVelocity = (VTangencialVelocity.Size()) / radius;
			if (angularVelocity < 1.0f)
			{
				angularVelocity*=2.0f;
			}
			FVector VAngularVelocity = VAngularDir * angularVelocity;
			
			//gravity
			FVector VTorque = FVector::CrossProduct(VRadius,FVector(0,0,gravityValue));

			float inertia = mass * (radius*radius);

			FVector VAngularAcceleration = VTorque / inertia;
			VAngularAcceleration = VAngularAcceleration.GetClampedToMaxSize(100.f);//SECURITY
			
			//AngularVelocityIntegration
			VAngularVelocity += VAngularAcceleration * DeltaTime;
			VAngularVelocity = VAngularVelocity.GetClampedToMaxSize(100.f); //SECURITY
			FVector VFinalTangencialVelocity = FVector::CrossProduct(VAngularVelocity,VRadius);


			if (VFinalTangencialVelocity.Size() > 5000.f)//SECURITY
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Velocity explosion detected!"));
				VFinalTangencialVelocity = VFinalTangencialVelocity.GetClampedToMaxSize(5000.f);
			}
			VFinalVelocity = VFinalTangencialVelocity + radialVelocity * VRopeDir;


			if (GEngine)//DEBUG
			{
				GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, FString::Printf(TEXT("Vec angularVelocity: %s"), *VAngularVelocity.ToString()));
				GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, FString::Printf(TEXT("f angularVelocity: %.4f"), angularVelocity));
				GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Cyan, FString::Printf(TEXT("VAngularAcceleration: %s"), *VAngularAcceleration.ToString()));
				GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Cyan, FString::Printf(TEXT("VAngularVelocity: %s"), *VAngularVelocity.ToString()));
			}
			
		}
		else
		{
			FVector NCharacterFwd = OwnerCharacter->GetActorForwardVector().GetSafeNormal();
			NCharacterFwd.Z = 0;
			float Dot = FVector::DotProduct(NCharacterFwd,FVector(1.0f, 0.0f, 0.0f));
			Dot = FMath::Clamp(Dot,-1.0f,1.0f);
			
			if ( Dot>0.2/*avobe horizontal++*/)
			{
				//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("LAUNCH BABY!!!!!!!!!!"));
				OwnerCharacter->LaunchCharacter(VFinalVelocity*EndLaunchForceMultiplyer, true, true);
			}
			Stop();
			
		}
	}
	

	
}

void UUPendulumPullAbility::Update(float DeltaTime)
{
	Super::Update(DeltaTime);
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Orange, TEXT("Update()"));

	if (bCanPull)
	{
		OwnerCharacter->GetCharacterMovement()->Velocity = VFinalVelocity * 100 /* DeltaTime*/; //cm
		if (GEngine)
		{
			FVector MyVector = VFinalVelocity * 100;
			FString Message = FString::Printf(TEXT("Vector: %s"), *MyVector.ToString());

			GEngine->AddOnScreenDebugMessage(-1, 50.0f, FColor::Green, Message);
		}
	}
	
	
}

void UUPendulumPullAbility::PostUpdate(float DeltaTime)
{
	Super::PostUpdate(DeltaTime);
	if (bCanPull)//first time won't enter here. also first time VFinalVelocity won't be calculated
	{
		if (VFinalVelocity.Size() < 0.01f)
		{
			characterVelocity = OwnerCharacter->GetVelocity()/100; //m
		}else
		{
			characterVelocity = VFinalVelocity;
		}
		
	}
	
	if (!bCanPull)
	{
		AbilityCurrentDuration = GetWorld()->GetTimeSeconds()-AbilityStartTime;
		if (AbilityCurrentDuration >= InitialLaunchTimeDuration)
		{
			bCanPull = true;
			VFinalVelocity = OwnerCharacter->GetVelocity()/100; //m
		}
	}
	
	
}

void UUPendulumPullAbility::Stop()
{
	Super::Stop();
	bCanPull = false;
	DeActivate();
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("STOP()"));
}

void UUPendulumPullAbility::DebugLogScreen()
{
}
