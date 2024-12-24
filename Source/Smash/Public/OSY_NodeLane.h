// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OSY_NodeLane.generated.h"

UCLASS()
class SMASH_API AOSY_NodeLane : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOSY_NodeLane();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
