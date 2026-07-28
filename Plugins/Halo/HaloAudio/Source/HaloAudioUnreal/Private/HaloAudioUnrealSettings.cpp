#include "HaloAudioUnrealSettings.h"

UHaloAudioUnrealSettings::UHaloAudioUnrealSettings() {
    this->OutOfFillAreaObstruction = 0.16f;
    this->bEnforceZoneRuntimeCapaticy = true;
    this->MinRuntimeLodZRatio = 4.00f;
    this->MaxZoneRuntimeCapacity = 1000000;
}


