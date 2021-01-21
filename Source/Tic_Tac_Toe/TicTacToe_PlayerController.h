// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TicTacToe_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TIC_TAC_TOE_API ATicTacToe_PlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	ATicTacToe_PlayerController();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};

