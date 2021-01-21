// Fill out your copyright notice in the Description page of Project Settings.


#include "TicTacToe_SpectatorPawn.h"

ATicTacToe_SpectatorPawn::ATicTacToe_SpectatorPawn()
{
	Player_CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	RootComponent = Player_CameraComponent;
}