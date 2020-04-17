// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FleePlayerActor.generated.h"

UCLASS()
class LAB_PROJECT_API AFleePlayerActor : public AActor
{
	GENERATED_BODY()

    UPROPERTY(EditAnywhere)
        UStaticMeshComponent* VisibleComponent;

    UPROPERTY(EditAnywhere)
        float Speed;

    UPROPERTY(EditAnywhere)
        float MinimumDistance;

    UPROPERTY(EditAnywhere)
        AActor* FollowTarget;
	
public:	
	// Sets default values for this actor's properties
	AFleePlayerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
