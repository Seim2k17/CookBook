// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CookBookLessonsGameMode.h"
#include "CookBookLessonsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACookBookLessonsGameMode::ACookBookLessonsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
