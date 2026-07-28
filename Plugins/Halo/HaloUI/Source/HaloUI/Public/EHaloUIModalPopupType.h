#pragma once
#include "CoreMinimal.h"
#include "EHaloUIModalPopupType.generated.h"

UENUM(BlueprintType)
enum class EHaloUIModalPopupType : uint8 {
    Alert,
    Dialog,
    InProgress,
    Unknown,
};

