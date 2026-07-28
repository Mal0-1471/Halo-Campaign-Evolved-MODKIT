#pragma once
#include "CoreMinimal.h"
#include "EBlamVehicleGear.generated.h"

UENUM(BlueprintType)
enum class EBlamVehicleGear : uint8 {
    Reverse,
    First,
    Second,
    Third,
    Fourth,
    Fifth,
    Sixth,
    Seventh,
    Eighth,
    Ninth,
    Tenth,
    Eleventh,
    Twelvth,
    Thirteenth,
    Fourteenth,
    Fifteenth,
    Num,
    None = 254,
    Parking,
};

