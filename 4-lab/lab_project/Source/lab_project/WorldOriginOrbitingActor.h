// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "WorldOriginOrbitingActor.generated.h"

UCLASS()
class LAB_PROJECT_API AWorldOriginOrbitingActor : public AActor
{
	GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    float RotationSpeed;

    UPROPERTY(EditAnywhere)
    FVector OrbitLocation;

    UPROPERTY(EditAnywhere)
    UStaticMeshComponent* VisibleComponent;
	
public:	
	// Sets default values for this actor's properties
	AWorldOriginOrbitingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

    float RotationDegrees;
    FVector RotationRadius;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
