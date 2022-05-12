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

//Geteur et assesseurs
//Santé 
int AEnnemys::getPV()
{
	return n_pv;
}

void AEnnemys::setPV(int s)
{
	n_pv = s;
}


//Dégats
int AEnnemys::damage()
{
	return dgts;
}

void AEnnemys::damage(float d)
{
	dgts = d;
}

//Fonction d'application de dégats
void AEnnemys::detectArme(WeaponsType flingue)
{
	switch (WeaponsType w = flingue)
	{
	case WeaponsType::EPEE:
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::Printf(TEXT("EPEE")));
		break;
	case WeaponsType::HALLEBARDE:
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, FString::Printf(TEXT("HALLEBARDE")));
		break;
	case WeaponsType::LANCE:
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, FString::Printf(TEXT("LANCE")));
		break;
	default:
		break;
	}
}

