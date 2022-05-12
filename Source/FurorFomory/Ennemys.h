// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Armes.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Ennemys.generated.h"

UCLASS()
class FURORFOMORY_API AEnnemys : public ACharacter
{
	GENERATED_BODY()


public:
	// Sets default values for this character's properties
	AEnnemys();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float n_pv; //variable santé

	float dgts; //variable dgts

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Geteur et sesseur santé
	int getPV();

	void setPV(int s);

	int damage();

	void damage(float d);


	//Fonction gestion de dégats
	UFUNCTION(BlueprintCallable)
	virtual void detectArme(WeaponsType flingue);

	//Application des défats
	//virtual void appliDamage(WeaponsType flingue);


};
