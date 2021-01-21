// Fill out your copyright notice in the Description page of Project Settings.


#include "TicTacToe_PlayerController.h"
#include "Cell.h"
#include "Math/Vector.h"

ATicTacToe_PlayerController::ATicTacToe_PlayerController()
{
	SetShowMouseCursor(true);
}

void ATicTacToe_PlayerController::BeginPlay() {

	TArray<AActor*> massCellOnScene;
	
	float x_Cell = 0;
	float y_Cell = 110;
	float z_Cell = -110;
	FVector Location_Cell = FVector(0.0f, 0.0f, 0.0f);//FVector(1185.0f, -110.0f, 350.0f);
	AActor* Buf_Cell_ptr = NULL;
	//Buf_Cell_ptr[0] = (AActor*)GetWorld()->SpawnActor(ACell::StaticClass(), &Location_Cell);
	for (int row = 0; row < 3; row++) {
		for (int column = 0; column < 3; column++) {
			Location_Cell = FVector(1185.0f, -110.0f + (column * y_Cell), 350.0f + (row * z_Cell));
			Buf_Cell_ptr = (AActor*)GetWorld()->SpawnActor(ACell::StaticClass(), &Location_Cell);
			massCellOnScene.Add(Buf_Cell_ptr);
		}
	}
}
