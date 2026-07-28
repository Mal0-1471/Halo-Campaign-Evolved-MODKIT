#pragma once
#include "CoreMinimal.h"
#include "EBlamModelAnimationType.generated.h"

UENUM(BlueprintType)
enum class EBlamModelAnimationType : uint8 {
    Base,
    Overlay,
    Rename,
    Copy,
};

