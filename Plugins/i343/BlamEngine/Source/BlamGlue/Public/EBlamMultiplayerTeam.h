#pragma once
#include "CoreMinimal.h"
#include "EBlamMultiplayerTeam.generated.h"

UENUM(BlueprintType)
enum class EBlamMultiplayerTeam : uint8 {
    Red,
    Blue,
    Green,
    Yellow,
    Purple,
    Orange,
    Brown,
    Grey,
    Num,
    None = 255,
};

