// Copyright Heather Olcot 2020 - Project forms part of the GameDev.tv Unreal Engine Course

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API APlayerControllerBase : public APlayerController
{
	GENERATED_BODY()
	
public:
	void SetPlayerEnableState(bool SetPlayerEnabled);

};
