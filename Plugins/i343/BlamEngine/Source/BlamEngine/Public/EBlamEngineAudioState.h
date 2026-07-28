#pragma once
#include "CoreMinimal.h"
#include "EBlamEngineAudioState.generated.h"

UENUM(BlueprintType)
enum class EBlamEngineAudioState : uint8 {
    None,
    FrontEnd,
    LoadingScreen,
    Cinematics,
    Gameplay,
    PauseMenu,
};

