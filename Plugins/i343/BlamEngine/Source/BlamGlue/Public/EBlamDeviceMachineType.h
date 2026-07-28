#pragma once
#include "CoreMinimal.h"
#include "EBlamDeviceMachineType.generated.h"

UENUM(BlueprintType)
enum class EBlamDeviceMachineType : uint8 {
    Door,
    Platform,
    Gear,
    Num,
};

