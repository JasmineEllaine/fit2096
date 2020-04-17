// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ChasePlayerActor.generated.h"

UCLASS()
class LAB_PROJECT_API AChasePlayerActor : public AActor
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
	AChasePlayerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
