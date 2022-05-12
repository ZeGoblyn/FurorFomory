// Fill out your copyright notice in the Description page of Project Settings.


#include "Armes.h"

// Sets default values
AArmes::AArmes()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	BoxComponent->SetupAttachment(RootComponent);

	ArmesMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArmesMesh"));
	ArmesMesh->SetupAttachment(BoxComponent);

}

// Called when the game starts or when spawned
void AArmes::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AArmes::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

