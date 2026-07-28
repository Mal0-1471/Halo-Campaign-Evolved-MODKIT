#pragma once
#include "CoreMinimal.h"
#include "EBlamDeviceControlType.generated.h"

UENUM(BlueprintType)
enum class EBlamDeviceControlType : uint8 {
    ToggleSwitch,
    OnButton,
    OffButton,
    CallButton,
    HealthStation,
    Num,
};

