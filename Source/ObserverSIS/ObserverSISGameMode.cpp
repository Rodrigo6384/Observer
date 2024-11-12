// Copyright Epic Games, Inc. All Rights Reserved.

#include "ObserverSISGameMode.h"
#include "ObserverSISCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "JumpNotifier.h"
#include "Kismet/GameplayStatics.h"

AObserverSISGameMode::AObserverSISGameMode()
{

	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AObserverSISGameMode::BeginPlay()
{
    Super::BeginPlay();

	AObserverSISCharacter* Character = Cast<AObserverSISCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (Character)
	{
		AJumpNotifier* JumpNotifier = GetWorld()->SpawnActor<AJumpNotifier>();
		if (JumpNotifier)
		{
			Character->AddObserver(JumpNotifier);
		}
	}
}
