#pragma once
#include "CoreMinimal.h"
#include "EGamepadLightEventType.generated.h"

UENUM(BlueprintType)
enum class EGamepadLightEventType : uint8 {
    Timed,
    Trigger,
};

