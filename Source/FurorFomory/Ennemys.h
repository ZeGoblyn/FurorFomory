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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	float n_pv; //variable santé

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
		float n_pvMAX_grunt; //variable santé maximum

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	float dgts; //variable dgts

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	bool mort; //variable dgts

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Geteur et sesseur santé
	int getPV();

	void setPV(float s);

	int getPVmax();

	void setPVmax(float s);

	int damage();

	void damage(float d);


	//Fonction gestion de dégats
	UFUNCTION(BlueprintCallable)
	virtual void detectArme(WeaponsType flingue, float vie);

	//Application des dégats
	//virtual void appliDamage(WeaponsType flingue);

	UFUNCTION(BlueprintCallable)
	virtual void detectDeath(float vie);


};
