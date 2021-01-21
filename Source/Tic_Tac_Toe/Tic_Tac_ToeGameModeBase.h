// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Tic_Tac_ToeGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TIC_TAC_TOE_API ATic_Tac_ToeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	// Sets default values for this actor's properties
	ATic_Tac_ToeGameModeBase();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
