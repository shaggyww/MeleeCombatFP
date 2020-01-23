// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MeleeCombatFPGameMode.h"
#include "MeleeCombatFPHUD.h"
#include "MeleeCombatFPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMeleeCombatFPGameMode::AMeleeCombatFPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMeleeCombatFPHUD::StaticClass();
}
