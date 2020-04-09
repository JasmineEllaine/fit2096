// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterPawn.h"

// Sets default values
ACharacterPawn::ACharacterPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Lab 2 code. Automatically swet player as pawn and have 
    // camera follow it.
    AutoPossessPlayer = EAutoReceiveInput::Player0;
    RootComponent = CreateDefaultSubobject<USceneComponent>
        (TEXT("RootComponent"));
    mCamera = CreateDefaultSubobject<UCameraComponent>
        (TEXT("Camera"));
    mCamera->SetupAttachment(RootComponent);
    // End of setup code.
}

// Called when the game starts or when spawned
void ACharacterPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    // Lab 2 code.
    if (!mMovementInput.IsZero()) {
        mMovementInput.Normalize();
        SetActorLocation(GetActorLocation() + (mMovementInput
            * speed * DeltaTime));
    }
    // End lab 2 code.

}

// Called to bind functionality to input
void ACharacterPawn::SetupPlayerInputComponent(
    UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Lab 2 code to bind controls to pawn.
    PlayerInputComponent->BindAxis("MoveX", this,
        &ACharacterPawn::MoveForward);
    PlayerInputComponent->BindAxis("MoveY", this,
        &ACharacterPawn::MoveRight);
    PlayerInputComponent->BindAction("Shoot", IE_Pressed, this,
        &ACharacterPawn::Shoot);
    // End lab 2
}

void ACharacterPawn::MoveForward(float axisValue) {
    mMovementInput.X = axisValue;
}

void ACharacterPawn::MoveRight(float axisValue) {
    mMovementInput.Y = axisValue;
}

void ACharacterPawn::Shoot() {
    
}