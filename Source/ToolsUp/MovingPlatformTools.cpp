// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatformTools.h"

// Sets default values
AMovingPlatformTools::AMovingPlatformTools()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatformTools::BeginPlay()
{
	Super::BeginPlay();
	
	StartLocation = GetActorLocation();

	FString Name = GetName();

	UE_LOG(LogTemp, Display, TEXT("BeginPlay : %s"), *Name);
}

// Called every frame
void AMovingPlatformTools::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);
}

void AMovingPlatformTools:: MovePlatform(float DeltaTime)
{
	
	if(ShouldPlatformReturn())
	{
		FVector MoveDirection = PlatformVelocity.GetSafeNormal();
		StartLocation = StartLocation + MoveDirection * MovedDistance;
		SetActorLocation(StartLocation);
		PlatformVelocity = -PlatformVelocity;
	}
	else
	{
		FVector CurrentLocation = GetActorLocation();
		CurrentLocation = CurrentLocation + (PlatformVelocity * DeltaTime);
		SetActorLocation(CurrentLocation);
	}
}

void AMovingPlatformTools::RotatePlatform(float DeltaTime)
{
	AddActorLocalRotation(RotaionVelocity * DeltaTime);
}

bool AMovingPlatformTools::ShouldPlatformReturn() const
{
	
	return GetDistanceMoved() > MovedDistance;
}

float AMovingPlatformTools::GetDistanceMoved() const
{
	return FVector::Dist(StartLocation, GetActorLocation());
}
