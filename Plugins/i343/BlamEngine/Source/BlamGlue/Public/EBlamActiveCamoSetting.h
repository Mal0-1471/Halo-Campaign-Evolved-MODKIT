#pragma once
#include "CoreMinimal.h"
#include "EBlamActiveCamoSetting.generated.h"

UENUM(BlueprintType)
enum class EBlamActiveCamoSetting : uint8 {
    Unchanged,
    Off,
    Poor,
    Good,
    Excellent,
    Invisible,
    Num,
};

