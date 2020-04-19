// Fill out your copyright notice in the Description page of Project Settings.

#include "WorldOriginOrbitingActor.h"


// Sets default values
AWorldOriginOrbitingActor::AWorldOriginOrbitingActor()
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

    RotationSpeed = 20; // degrees per second
    RotationDegrees = 0;

    OrbitLocation = FVector(0, 0, 0);
}

// Called when the game starts or when spawned
void AWorldOriginOrbitingActor::BeginPlay()
{
	Super::BeginPlay();
	
    OrbitLocation.Z = GetActorLocation().Z;
    RotationRadius = GetActorLocation() - OrbitLocation;
    RotationRadius.Z = 0;
}

// Called every frame
void AWorldOriginOrbitingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    RotationDegrees += RotationSpeed * DeltaTime;
    if (RotationDegrees >= 360) {
        RotationDegrees -= 360;
    }

    FVector RotateValue = RotationRadius.RotateAngleAxis(
        RotationDegrees, FVector(0, 0, 1));
    FVector NewPosition = OrbitLocation + RotateValue;
    SetActorLocation(NewPosition);

    // FRotator Rotator = FRotator(0, RotationDegrees, 0);
    // FQuat RotationQuaternion = FQuat(Rotator);

    // SetActorRotation(RotationQuaternion);

    FVector TargetDirection = OrbitLocation - GetActorLocation();
    TargetDirection.Z = 0;
    TargetDirection.Normalize();

    FVector Forward = FVector(1, 0, 0);

    float Dot = FVector::DotProduct(Forward, TargetDirection);
    float Det = Forward.X * TargetDirection.Y + Forward.Y * TargetDirection.X;
    float RotRadians = FMath::Atan2(Det, Dot);
    float RotDegree = FMath::RadiansToDegrees(RotRadians);

    FRotator Rotator = FRotator(0, RotDegree, 0);
    FQuat RotationQuaternion = FQuat(Rotator);
    SetActorRotation(RotationQuaternion);
}

