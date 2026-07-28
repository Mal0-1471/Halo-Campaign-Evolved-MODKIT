#pragma once
#include "CoreMinimal.h"
#include "HaloUIButtonState.generated.h"

UENUM(BlueprintType)
enum HaloUIButtonState {
    NormalBase,
    NormalHovered,
    NormalPressed,
    SelectedBase,
    SelectedHovered,
    SelectedPressed,
    Disabled,
};

