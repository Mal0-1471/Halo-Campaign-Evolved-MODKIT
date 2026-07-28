#include "HaloModularGameModeBase.h"
#include "HaloModularGameStateBase.h"
#include "HaloModularPawn.h"
#include "HaloModularPlayerController.h"
#include "HaloModularPlayerState.h"

AHaloModularGameModeBase::AHaloModularGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AHaloModularGameStateBase::StaticClass();
    this->PlayerControllerClass = AHaloModularPlayerController::StaticClass();
    this->PlayerStateClass = AHaloModularPlayerState::StaticClass();
    this->DefaultPawnClass = AHaloModularPawn::StaticClass();
}


