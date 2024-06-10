// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5StarterGameMode.h"
#include "UE5StarterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5StarterGameMode::AUE5StarterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
