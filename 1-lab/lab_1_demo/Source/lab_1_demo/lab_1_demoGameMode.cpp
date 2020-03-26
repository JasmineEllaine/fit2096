// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "lab_1_demoGameMode.h"
#include "lab_1_demoHUD.h"
#include "lab_1_demoCharacter.h"
#include "UObject/ConstructorHelpers.h"

Alab_1_demoGameMode::Alab_1_demoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Alab_1_demoHUD::StaticClass();
}
