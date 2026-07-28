#pragma once
#include "CoreMinimal.h"
#include "EOutlineSetting.generated.h"

UENUM(BlueprintType)
enum class EOutlineSetting : uint8 {
    AlwaysOn,
    Long,
    Short,
    Off,
    Count,
};

