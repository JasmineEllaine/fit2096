// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Materials/Material.h"
#include "InFrontActor.generated.h"

UCLASS()
class LAB_PROJECT_API AInFrontActor : public AActor
{
	GENERATED_BODY()

    UPROPERTY(EditAnywhere)
        UStaticMeshComponent* VisibleComponent;

    UPROPERTY(EditAnywhere)
        UMaterial* OnMaterial;
	
    UPROPERTY(EditAnywhere)
        UMaterial* OffMaterial;

    UPROPERTY(EditAnywhere)
        AActor* Target;

    UPROPERTY(EditAnywhere)
        float MaxDistance;
public:	
	// Sets default values for this actor's properties
	AInFrontActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
