#pragma once
#include "CoreMinimal.h"
#include "EBlamDrivingMode.generated.h"

UENUM(BlueprintType)
enum class EBlamDrivingMode : uint8 {
    AimBased,
    DriverBased,
    Num,
};

