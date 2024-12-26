// Copyright Epic Games, Inc. All Rights Reserved.

#include "MB_ProjectGameMode.h"
#include "MB_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMB_ProjectGameMode::AMB_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
