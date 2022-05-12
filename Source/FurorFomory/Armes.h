// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Runtime/Engine/Classes/Components/BoxComponent.h>
#include "Armes.generated.h"


UENUM(BlueprintType)
enum class  WeaponsType : uint8
{
	EPEE = 0 UMETA(DisplayName = "epee"),
	HALLEBARDE = 1 UMETA(DisplayName = "hallebarde"),
	LANCE = 2 UMETA(DisplayName = "lance"),
};

UCLASS()
class FURORFOMORY_API AArmes : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmes();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		WeaponsType swichswooch;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Character Components|Root Component")
		USceneComponent* SceneComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Character Components")
		UBoxComponent* BoxComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Character Components")
		UStaticMeshComponent* ArmesMesh;

};
