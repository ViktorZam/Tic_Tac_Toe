// Copyright Epic Games, Inc. All Rights Reserved.


#include "Tic_Tac_ToeGameModeBase.h"
#include "TicTacToe_PlayerController.h"
#include "TicTacToe_SpectatorPawn.h"

ATic_Tac_ToeGameModeBase::ATic_Tac_ToeGameModeBase()
{
	PlayerControllerClass = ATicTacToe_PlayerController::StaticClass();
	DefaultPawnClass = ATicTacToe_SpectatorPawn::StaticClass();
}

void ATic_Tac_ToeGameModeBase::BeginPlay()
{
	Super::BeginPlay();

}
