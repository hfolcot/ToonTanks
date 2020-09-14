// Copyright Heather Olcot 2020 - Project forms part of the GameDev.tv Unreal Engine Course


#include "PlayerControllerBase.h"


void APlayerControllerBase::SetPlayerEnableState(bool SetPlayerEnabled) 
{
    if (SetPlayerEnabled)
    {
        GetPawn()->EnableInput(this);
    }
    else 
    {
        GetPawn()->DisableInput(this);
    }
    
    bShowMouseCursor = SetPlayerEnabled;

}
