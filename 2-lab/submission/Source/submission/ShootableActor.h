// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShootableActor.generated.h"

UCLASS()
class SUBMISSION_API AShootableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShootableActor();

    // Lab 2 code
    // A UProperty of EditAnywhere allows us to edit this
    // variable from the Editor!
    UPROPERTY(EditAnywhere)
    UStaticMeshComponent *mVisibleComponent;
    // end lab 2

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    // Lab 2 code
    void OnBulletHit();

};
