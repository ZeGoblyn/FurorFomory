// Fill out your copyright notice in the Description page of Project Settings.


#include "Ennemys.h"

// Sets default values
AEnnemys::AEnnemys()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnnemys::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnnemys::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnnemys::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

