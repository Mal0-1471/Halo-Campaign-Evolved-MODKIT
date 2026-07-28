#include "HaloMemoryTelemetrySettings.h"

UHaloMemoryTelemetrySettings::UHaloMemoryTelemetrySettings() {
    this->bTickTelemetryWhilePaused = false;
    this->bEnableInclusiveBuckets = false;
    this->bCollectMemoryTelemetry = true;
}


