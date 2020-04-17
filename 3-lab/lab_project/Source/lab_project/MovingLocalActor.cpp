// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingLocalActor.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AMovingLocalActor::AMovingLocalActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    RootComponent = CreateDefaultSubobject<USceneComponent>
        (TEXT("Root Component"));
    VisibleComponent = CreateDefaultSubobject<UStaticMeshComponent>
        (TEXT("Visible Component")); 

    VisibleComponent->SetupAttachment(RootComponent);

    // Add a mesh to component
    ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshObject
        (TEXT("/Game/Geometry/Meshes/1M_Cube.1M_Cube"));

    if (CubeMeshObject.Succeeded()) {
        VisibleComponent->SetStaticMesh(CubeMeshObject.Object);
    }

    TravelDistance = 2000; //mm
    Speed = 200;
    Tolerance = 10;
    Direction = 1; 
}

// Called when the game starts or when spawned
void AMovingLocalActor::BeginPlay()
{
	Super::BeginPlay();
	
    StartingPosition = GetActorLocation();
}

// Called every frame
void AMovingLocalActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    FVector DirectionVector = GetActorForwardVector() * Direction;
    FVector CurrentPosition = GetActorLocation();

    FVector TargetPosition = StartingPosition
         + (DirectionVector * TravelDistance);

    CurrentPosition += DirectionVector * Speed * DeltaTime;

    if (FVector::Dist(CurrentPosition, TargetPosition) <= Tolerance) {
        CurrentPosition = TargetPosition;
        StartingPosition = CurrentPosition;

        Direction *= -1;
    }

    SetActorLocation(CurrentPosition);
}

