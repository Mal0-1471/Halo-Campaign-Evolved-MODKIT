#pragma once
#include "CoreMinimal.h"
#include "EBlamFrameEventType.generated.h"

UENUM(BlueprintType)
enum class EBlamFrameEventType : uint8 {
    Animation,
    Effect,
    Sound,
    Dialogue,
};

