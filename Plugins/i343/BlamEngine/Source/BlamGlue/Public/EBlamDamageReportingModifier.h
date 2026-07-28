#pragma once
#include "CoreMinimal.h"
#include "EBlamDamageReportingModifier.generated.h"

UENUM(BlueprintType)
enum class EBlamDamageReportingModifier : uint8 {
    None,
    Headshot,
    SilentMelee,
    CollisionDamage,
    AttachedDamage,
    FancyAssassination,
    ArmorAmplified,
    ArmorMitigated,
    Num,
};

