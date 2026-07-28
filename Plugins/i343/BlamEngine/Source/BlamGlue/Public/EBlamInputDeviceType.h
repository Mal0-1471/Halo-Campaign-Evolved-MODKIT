#pragma once
#include "CoreMinimal.h"
#include "EBlamInputDeviceType.generated.h"

UENUM(BlueprintType)
enum class EBlamInputDeviceType : uint8 {
    KeyboardAndMouse,
    Gamepad,
    Count,
};

