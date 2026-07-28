#pragma once
#include "CoreMinimal.h"
#include "EInputMapperErrorCode.generated.h"

UENUM(BlueprintType)
enum class EInputMapperErrorCode : uint8 {
    Success,
    ErrorPreset,
    ErrorAction,
    ErrorSameKey,
    ErrorInvalidKey,
    ErrorExclusivity,
};

