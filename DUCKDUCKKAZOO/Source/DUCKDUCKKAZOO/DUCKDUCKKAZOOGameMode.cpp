// Copyright Epic Games, Inc. All Rights Reserved.

#include "DUCKDUCKKAZOOGameMode.h"
#include "DUCKDUCKKAZOOCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADUCKDUCKKAZOOGameMode::ADUCKDUCKKAZOOGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
