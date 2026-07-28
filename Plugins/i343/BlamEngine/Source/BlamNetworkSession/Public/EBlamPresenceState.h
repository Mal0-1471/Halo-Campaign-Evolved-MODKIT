#pragma once
#include "CoreMinimal.h"
#include "EBlamPresenceState.generated.h"

UENUM(BlueprintType)
enum class EBlamPresenceState : uint8 {
    InGame,
    Menus,
    MenusIdle,
    TitleScreen,
    Unknown,
};

