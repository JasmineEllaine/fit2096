// Fill out your copyright notice in the Description page of Project Settings.

#include "StationaryRotatingActor.h"

// Sets default values
AStationaryRotatingActor::AStationaryRotatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    RootComponent = CreateDefaultSubobject<USceneComponent>
        (TEXT("RootComponent"));
    VisibleComponent = CreateDefaultSubobject<UStaticMeshComponent>
        (TEXT("VisibleComponent"));
    VisibleComponent->SetupAttachment(RootComponent);

    ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshObj 
        (TEXT("/Game/Geometry/Meshes/1M_Cube.1M_Cube"));

    if (CubeMeshObj.Succeeded()) {
        VisibleComponent->SetStaticMesh(CubeMeshObj.Object);
    }

    RotationSpeed = 20;
}

// Called when the game starts or when spawned
void AStationaryRotatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStationaryRotatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    FRotator Rotator(0, RotationSpeed * DeltaTime, 0);
    FQuat RotationQuaternion(Rotator);

    AddActorLocalRotation(RotationQuaternion, false, nullptr,
                          ETeleportType::None);
}

