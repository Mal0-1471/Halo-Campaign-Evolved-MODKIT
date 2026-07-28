#include "HaloAudioClusterSettings.h"

FHaloAudioClusterSettings::FHaloAudioClusterSettings() {
    this->bClusterDistanceOverride = false;
    this->bClusterSmoothingUnitsPerSecondOverride = false;
    this->bClusterTimeoutInSecondsOverride = false;
    this->ClusterDistance = 0.00f;
    this->ClusterSmoothingUnitsPerSecond = 0.00f;
    this->ClusterTimeoutInSeconds = 0.00f;
}

