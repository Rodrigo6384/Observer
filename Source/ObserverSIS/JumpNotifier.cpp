// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpNotifier.h"
#include "Kismet/GameplayStatics.h"



void AJumpNotifier::OnCharacterJump()
{

	UE_LOG(LogTemp, Warning, TEXT("¡Esta persona está saltando!"));


	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, TEXT("¡Esta persona está saltando!"));
	}
}
