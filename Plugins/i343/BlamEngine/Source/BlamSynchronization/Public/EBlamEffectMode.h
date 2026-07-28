#pragma once
#include "CoreMinimal.h"
#include "EBlamEffectMode.generated.h"

UENUM()
enum class EBlamEffectMode : int8 {
    SourceObjectPoint,
    ContextObjectLinePoint,
    SourceObjectPointImmediate,
};

