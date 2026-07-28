#pragma once
#include "CoreMinimal.h"
#include "EBlamCameraPerspective.generated.h"

UENUM(BlueprintType)
enum class EBlamCameraPerspective : uint8 {
    None,
    FirstPerson,
    ThirdPerson,
};

