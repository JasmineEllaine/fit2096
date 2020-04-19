// Fill out your copyright notice in the Description page of Project Settings.


#include "WatchPlayerActor.h"

// Sets default values
AWatchPlayerActor::AWatchPlayerActor()
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

}

// Called when the game starts or when spawned
void AWatchPlayerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWatchPlayerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (FollowTarget) {
        FVector Direction = FollowTarget->GetActorLocation()
            - GetActorLocation();
        Direction.Z = 0;
        Direction.Normalize();

        FVector Forward = FVector(1, 0, 0);

        float Dot = FVector::DotProduct(Forward, Direction);
        float Det = Forward.X * Direction.Y + Forward.Y * Direction.X;
        float Rad = FMath::Atan2(Det, Dot);
        float Degrees = FMath::RadiansToDegrees(Rad);

        SetActorRotation(FRotator(0, Degrees, 0));
    }

}

