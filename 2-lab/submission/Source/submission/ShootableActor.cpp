// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootableActor.h"

// Sets default values
AShootableActor::AShootableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // lab 2
    RootComponent = CreateDefaultSubobject<USceneComponent>
        (TEXT("RootComponent"));
    mVisibleComponent = CreateDefaultSubobject
        <UStaticMeshComponent>(TEXT("VisibleComponent"));
    mVisibleComponent->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AShootableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShootableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Lab 2 code
void AShootableActor::OnBulletHit() {
    Destroy();
}