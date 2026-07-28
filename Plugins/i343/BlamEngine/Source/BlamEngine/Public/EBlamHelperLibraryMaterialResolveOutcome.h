#pragma once
#include "CoreMinimal.h"
#include "EBlamHelperLibraryMaterialResolveOutcome.generated.h"

UENUM(BlueprintType)
enum class EBlamHelperLibraryMaterialResolveOutcome : uint8 {
    Resolved,
    FailedToResolve,
};

