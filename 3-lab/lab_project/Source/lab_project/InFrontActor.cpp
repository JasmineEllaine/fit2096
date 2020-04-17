// Fill out your copyright notice in the Description page of Project Settings.

#include "InFrontActor.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AInFrontActor::AInFrontActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    RootComponent = CreateDefaultSubobject<USceneComponent>
        (TEXT("Root Component"));
    VisibleComponent = CreateDefaultSubobject<UStaticMeshComponent>
        (TEXT("Visible Component")); 

    VisibleComponent->SetupAttachment(RootComponent);

    OnMaterial = CreateDefaultSubobject<UMaterial>(TEXT("On Material"));
    OffMaterial = CreateDefaultSubobject<UMaterial>(TEXT("Off Material"));

    // Add a mesh to component
    ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMeshObject
        (TEXT("/Game/Geometry/Meshes/1M_Cube.1M_Cube"));
    ConstructorHelpers::FObjectFinder<UMaterial> OnMaterialObject
        (TEXT("/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse"));
    ConstructorHelpers::FObjectFinder<UMaterial> OffMaterialObject
        (TEXT("/Game/StarterContent/Materials/M_Tech_Hex_Tile.M_Tech_Hex_Tile"));

    if (CubeMeshObject.Succeeded()) {
        VisibleComponent->SetStaticMesh(CubeMeshObject.Object);
    }

    if (OnMaterialObject.Succeeded()) {
        OnMaterial = OnMaterialObject.Object;
    }

    if (OffMaterialObject.Succeeded()) {
        OffMaterial = OffMaterialObject.Object;
    }

    MaxDistance = 500;
}

// Called when the game starts or when spawned
void AInFrontActor::BeginPlay()
{
	Super::BeginPlay();

    // Set material to off by default
    VisibleComponent->SetMaterial(0, OffMaterial);
	
} 

// Called every frame
void AInFrontActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    // 
    if (Target) {
        FVector TargetDirection = Target->GetActorLocation()
            - GetActorLocation();

        if (TargetDirection.Size() <= MaxDistance) {
            TargetDirection.Normalize();
            float DotProduct = FVector::DotProduct(GetActorForwardVector(),
                TargetDirection); 

            // 180 degrees in front
            if (DotProduct > 0) {
                VisibleComponent->SetMaterial(0, OnMaterial);
            } else {
                VisibleComponent->SetMaterial(0, OffMaterial);
            }
        }
    }
}

