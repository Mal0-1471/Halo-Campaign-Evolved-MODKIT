#pragma once
#include "CoreMinimal.h"
#include "ETelemetryCategory.generated.h"

UENUM(BlueprintType)
enum ETelemetryCategory {
    UnusedCategory,
    BlamEngineTelemetry,
    RequiredAnalyticsTelemetry,
    OnlineServicesTelemetry,
    HaloGraphicsTelemetry,
    PerformanceTelemetry,
    GameplayTelemetry,
    ConcurrencyTelemetry = GameplayTelemetry,
};

