#pragma once
#include "CoreMinimal.h"
#include "EBlamHelperLibrarySearchOutcome.generated.h"

UENUM(BlueprintType)
enum class EBlamHelperLibrarySearchOutcome : uint8 {
    Found,
    NotFound,
};

