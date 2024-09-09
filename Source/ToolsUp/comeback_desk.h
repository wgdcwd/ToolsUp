// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "comeback_desk.generated.h"

UCLASS()
class TOOLSUP_API Acomeback_desk : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Acomeback_desk();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
