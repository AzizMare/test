// Copyright Epic Games, Inc. All Rights Reserved.

#include "fpsGameMode.h"
#include "fpsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AfpsGameMode::AfpsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
