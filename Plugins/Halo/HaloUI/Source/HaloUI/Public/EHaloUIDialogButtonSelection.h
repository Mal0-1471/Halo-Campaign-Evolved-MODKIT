#pragma once
#include "CoreMinimal.h"
#include "EHaloUIDialogButtonSelection.generated.h"

UENUM(BlueprintType)
enum class EHaloUIDialogButtonSelection : uint8 {
    DEFAULTBUTTON = 5,
    BUTTON1 = 0,
    BUTTON2,
    BUTTON3,
    BUTTON4,
    NONE,
};

