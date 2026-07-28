#pragma once
#include "CoreMinimal.h"
#include "EBlamMotorResource.generated.h"

UENUM(BlueprintType)
enum class EBlamMotorResource : uint8 {
    State,
    Overlay,
    PrimaryImpulse,
    SecondaryImpulse,
    Num,
};

