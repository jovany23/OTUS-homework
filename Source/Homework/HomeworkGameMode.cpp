// Copyright Epic Games, Inc. All Rights Reserved.

#include "HomeworkGameMode.h"
#include "HomeworkCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHomeworkGameMode::AHomeworkGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
