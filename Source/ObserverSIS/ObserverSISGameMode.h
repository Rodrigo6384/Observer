// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ObserverSISGameMode.generated.h"

UCLASS(minimalapi)
class AObserverSISGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AObserverSISGameMode();
protected:
	virtual void BeginPlay() override;
};



