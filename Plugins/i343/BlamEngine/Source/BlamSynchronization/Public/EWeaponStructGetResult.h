#pragma once
#include "CoreMinimal.h"
#include "EWeaponStructGetResult.generated.h"

UENUM(BlueprintType)
enum class EWeaponStructGetResult : uint8 {
    GetSucceeded,
    GetFailed,
};

