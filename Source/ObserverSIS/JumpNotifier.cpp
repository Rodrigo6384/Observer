// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpNotifier.h"
#include "Kismet/GameplayStatics.h"



void AJumpNotifier::OnCharacterJump()
{
	// Mostrar mensaje en el log
	UE_LOG(LogTemp, Warning, TEXT("¡Esta persona está saltando!"));

	// Mostrar mensaje en pantalla (Debug)
	if (GEngine)
	{
		// El primer parámetro es un ID único para el mensaje, el segundo es el tiempo de duración (en segundos), y el tercero es el color
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, TEXT("¡Esta persona está saltando!"));
	}
}
