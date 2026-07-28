#pragma once
#include "CoreMinimal.h"
#include "EBlamGamepadButton.generated.h"

UENUM(BlueprintType)
enum class EBlamGamepadButton : uint8 {
    AnalogLeftTrigger,
    AnalogRightTrigger,
    BinaryDpadUp,
    BinaryDpadDown,
    BinaryDpadLeft,
    BinaryDpadRight,
    BinaryStart,
    BinaryBack,
    BinaryLeftThumb,
    BinaryRightThumb,
    BinaryLeftShoulder,
    BinaryRightShoulder,
    BinaryA,
    BinaryB,
    BinaryX,
    BinaryY,
    Num,
};

