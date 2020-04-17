// Fill out your copyright notice in the Description page of Project Settings.

#include "FleePlayerActor.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AFleePlayerActor::AFleePlayerActor()
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

    Speed = 500;
    MinimumDistance = 500;

}

// Called when the game starts or when spawned
void AFleePlayerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFleePlayerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if (FollowTarget) {
        FVector TargetDirection = GetActorLocation() - FollowTarget->GetActorLocation();
        TargetDirection.Z = 0;
        
        if (TargetDirection.Size() < MinimumDistance) {
            TargetDirection.Normalize();
            SetActorLocation(GetActorLocation() + TargetDirection
                * Speed * DeltaTime);
        }
    }

}

