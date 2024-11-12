// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "JumpObserver.h"
#include "GameFramework/Actor.h"
#include "JumpNotifier.generated.h"

UCLASS()
class OBSERVERSIS_API AJumpNotifier : public AActor, public IJumpObserver
{
	GENERATED_BODY()
	public:
	virtual void OnCharacterJump() override;
};
