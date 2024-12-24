// Copyright Epic Games, Inc. All Rights Reserved.

#include "StarRail_ReproGameMode.h"
#include "StarRail_ReproCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStarRail_ReproGameMode::AStarRail_ReproGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
