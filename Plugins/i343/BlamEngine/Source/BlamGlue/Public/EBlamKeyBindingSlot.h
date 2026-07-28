#pragma once
#include "CoreMinimal.h"
#include "EBlamKeyBindingSlot.generated.h"

UENUM(BlueprintType)
enum class EBlamKeyBindingSlot : uint8 {
    Main,
    Alternate,
    Num,
    None,
};

