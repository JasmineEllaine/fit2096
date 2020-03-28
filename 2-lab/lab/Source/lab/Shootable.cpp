// Fill out your copyright notice in the Description page of Project Settings.


#include "Shootable.h"

// Sets default values
AShootable::AShootable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    mVisibleComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisibleComponent"));
    mVisibleComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AShootable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShootable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AShootable::OnBulletHit() {
    Destroy();
}
