// Copyright Epic Games, Inc. All Rights Reserved.

#include "class1GameMode.h"
#include "class1Character.h"
#include "UObject/ConstructorHelpers.h"

Aclass1GameMode::Aclass1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
