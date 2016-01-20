// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Test.h"
#include "TestGameMode.h"
#include "TestPlayerController.h"
#include "TestCharacter.h"

ATestGameMode::ATestGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATestPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}