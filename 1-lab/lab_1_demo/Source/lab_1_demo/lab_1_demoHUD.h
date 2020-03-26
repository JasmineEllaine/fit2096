// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "lab_1_demoHUD.generated.h"

UCLASS()
class Alab_1_demoHUD : public AHUD
{
	GENERATED_BODY()

public:
	Alab_1_demoHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

