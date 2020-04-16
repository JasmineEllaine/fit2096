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
    UE_LOG(LogTemp, Warning, TEXT("Bang!"));

    FHitResult linetraceResult;
    FVector startTrace = GetActorLocation();
    startTrace.X += 200;

    FVector endTrace = (GetActorForwardVector()*7500)
        + startTrace;
    FCollisionQueryParams params;

    bool isHit = GetWorld()->LineTraceSingleByChannel(
        linetraceResult, startTrace, endTrace, ECC_WorldStatic,
        params);

    if (isHit) {
        AShootableActor *shootTarget = Cast<AShootableActor>(
            linetraceResult.GetActor()); 
        if (shootTarget) {
            UE_LOG(LogTemp, Warning, TEXT("Hit target"));
            shootTarget->OnBulletHit(); 
        }
    }
}