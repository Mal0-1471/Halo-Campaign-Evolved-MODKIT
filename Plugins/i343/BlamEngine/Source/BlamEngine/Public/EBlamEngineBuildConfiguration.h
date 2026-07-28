#pragma once
#include "CoreMinimal.h"
#include "EBlamEngineBuildConfiguration.generated.h"

UENUM()
enum class EBlamEngineBuildConfiguration : int32 {
    TagTest,
    TagPlay,
    TagProfile,
    TagRelease,
};

