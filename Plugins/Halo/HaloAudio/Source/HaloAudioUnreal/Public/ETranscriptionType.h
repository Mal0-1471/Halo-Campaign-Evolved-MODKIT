#pragma once
#include "CoreMinimal.h"
#include "ETranscriptionType.generated.h"

UENUM(BlueprintType)
enum class ETranscriptionType : uint8 {
    None,
    Subtitle,
    Caption,
};

