// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpectatorPawn.h"
#include "TicTacToe_SpectatorPawn.generated.h"

/**
 * 
 */
UCLASS()
class TIC_TAC_TOE_API ATicTacToe_SpectatorPawn : public ASpectatorPawn
{
	GENERATED_BODY()
public:
	ATicTacToe_SpectatorPawn();
	UPROPERTY(EditAnywhere)
	UCameraComponent* Player_CameraComponent;

};
