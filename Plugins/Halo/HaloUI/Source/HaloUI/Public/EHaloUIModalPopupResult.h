#pragma once
#include "CoreMinimal.h"
#include "EHaloUIModalPopupResult.generated.h"

UENUM(BlueprintType)
enum class EHaloUIModalPopupResult : uint8 {
    Completed,
    DialogButton1Pressed,
    DialogButton2Pressed,
    DialogButton3Pressed,
    DialogButton4Pressed,
    Killed,
    Denied,
    Unknown,
};

