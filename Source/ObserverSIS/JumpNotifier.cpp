// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpNotifier.h"
#include "Kismet/GameplayStatics.h"



void AJumpNotifier::OnCharacterJump()
{
	// Mostrar mensaje en el log
	UE_LOG(LogTemp, Warning, TEXT("�Esta persona est� saltando!"));

	// Mostrar mensaje en pantalla (Debug)
	if (GEngine)
	{
		// El primer par�metro es un ID �nico para el mensaje, el segundo es el tiempo de duraci�n (en segundos), y el tercero es el color
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Green, TEXT("�Esta persona est� saltando!"));
	}
}
