#pragma once
#include "CoreMinimal.h"
#include "EBlamPropertyChangeReason.generated.h"

UENUM(BlueprintType)
enum class EBlamPropertyChangeReason : uint8 {
    Gameplay,
    Reset,
    SaveGameRestore,
    Num,
};

