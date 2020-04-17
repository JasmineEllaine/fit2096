// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "lab_projectGameMode.h"
#include "lab_projectCharacter.h"
#include "UObject/ConstructorHelpers.h"

Alab_projectGameMode::Alab_projectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
