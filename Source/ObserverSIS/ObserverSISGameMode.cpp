// Copyright Epic Games, Inc. All Rights Reserved.

#include "ObserverSISGameMode.h"
#include "ObserverSISCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "JumpNotifier.h"
#include "Kismet/GameplayStatics.h"

AObserverSISGameMode::AObserverSISGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AObserverSISGameMode::BeginPlay()
{
    Super::BeginPlay();

	// Obtener el personaje del jugador
	AObserverSISCharacter* Character = Cast<AObserverSISCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (Character)
	{
		// Crear una instancia del JumpNotifier
		AJumpNotifier* JumpNotifier = GetWorld()->SpawnActor<AJumpNotifier>();
		if (JumpNotifier)
		{
			// Suscribir al observador
			Character->AddObserver(JumpNotifier);
		}
	}
}
