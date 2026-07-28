#include "HaloTelemetryConfig.h"

FHaloTelemetryConfig::FHaloTelemetryConfig() {
    this->MatchSamplingRate = 0.00f;
    this->BatchCountThreshold = 0;
    this->BatchBytesThreshold = 0;
    this->BatchMillisecondsThreshold = 0;
}

