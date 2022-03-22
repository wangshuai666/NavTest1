// Copyright Epic Games, Inc. All Rights Reserved.

#include "NavTestGameMode.h"
#include "NavTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANavTestGameMode::ANavTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
