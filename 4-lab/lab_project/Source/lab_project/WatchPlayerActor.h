// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/StaticMeshComponent.h"
#include "WatchPlayerActor.generated.h"

UCLASS()
class LAB_PROJECT_API AWatchPlayerActor : public AActor
{
	GENERATED_BODY()

    UPROPERTY(EditAnywhere)
    UStaticMeshComponent* VisibleComponent;

    UPROPERTY(EditAnywhere)
    AActor* FollowTarget;
	
public:	
	// Sets default values for this actor's properties
	AWatchPlayerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
