// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
// Includes for Lab 2
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Pawn.h"
#include "CollisionQueryParams.h"
// End of includes
#include "CharacterPawn.generated.h"

UCLASS()
class SUBMISSION_API ACharacterPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACharacterPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

    // Functions/variables added for lab 2
    void MoveForward(float axisValue);
    void MoveRight(float axisValue);
    void Shoot();

    float speed = 500.0f;
    FVector mMovementInput;
    UCameraComponent *mCamera;
    // End of lab 2

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(
        class UInputComponent* PlayerInputComponent) override;

};
