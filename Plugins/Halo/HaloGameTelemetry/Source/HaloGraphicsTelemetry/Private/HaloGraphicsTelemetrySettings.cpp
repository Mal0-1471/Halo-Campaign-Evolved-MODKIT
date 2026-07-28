#include "HaloGraphicsTelemetrySettings.h"

UHaloGraphicsTelemetrySettings::UHaloGraphicsTelemetrySettings() {
    this->bTickTelemetryWhilePaused = false;
    this->bEnableInclusiveBuckets = true;
    this->bCollectResolutionTelemetry = true;
    this->bCollectFrameTimingTelemetry = true;
    this->NumExclusiveFrameTimingBuckets = 0;
}


