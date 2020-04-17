// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingWorldActor.generated.h"

UCLASS()
class LAB_PROJECT_API AMovingWorldActor : public AActor
{
	GENERATED_BODY()

    UPROPERTY(EditAnywhere)
        float TravelDistance;

    UPROPERTY(EditAnywhere)
        float Speed;

    UPROPERTY(EditAnywhere)
        float Tolerance;

    UPROPERTY(EditAnywhere)
        UStaticMeshComponent* VisibleComponent;

    FVector StartingPosition;
    FVector TargetPosition;

    float Direction;

	
public:	
	// Sets default values for this actor's properties
	AMovingWorldActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
