#pragma once
#include "CoreMinimal.h"
#include "EPlatformConstraint.generated.h"

UENUM()
enum class EPlatformConstraint : int32 {
    Windows,
    XboxAnaconda,
    XboxLockhart,
    PS5Prospero,
    PS5Trinity,
    Any,
};

