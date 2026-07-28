#include "HaloModularGameMode.h"
#include "HaloModularGameState.h"
#include "HaloModularPawn.h"
#include "HaloModularPlayerController.h"
#include "HaloModularPlayerState.h"

AHaloModularGameMode::AHaloModularGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = AHaloModularGameState::StaticClass();
    this->PlayerControllerClass = AHaloModularPlayerController::StaticClass();
    this->PlayerStateClass = AHaloModularPlayerState::StaticClass();
    this->DefaultPawnClass = AHaloModularPawn::StaticClass();
}


