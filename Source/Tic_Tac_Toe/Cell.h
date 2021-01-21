// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PaperFlipbook.h"
#include "PaperSprite.h"
#include "PaperSpriteComponent.h"
#include "Cell.generated.h"
UCLASS()
class TIC_TAC_TOE_API ACell : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACell();
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* Cell_MeshComponent;
	UPROPERTY(EditAnywhere)
		USceneComponent* Cell_SceneComponent;
	UPROPERTY(EditAnywhere)
		UPaperSpriteComponent* Cell_PaperSpriteComponent;
	UFUNCTION()
		void OnClicked(UPrimitiveComponent* Cell_PrimitiveComponent, FKey ButtonPressed);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
