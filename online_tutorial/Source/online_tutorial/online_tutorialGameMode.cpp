// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "online_tutorialGameMode.h"
#include "online_tutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aonline_tutorialGameMode::Aonline_tutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
