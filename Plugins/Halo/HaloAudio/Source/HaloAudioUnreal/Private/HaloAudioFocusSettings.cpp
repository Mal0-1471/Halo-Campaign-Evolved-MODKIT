#include "HaloAudioFocusSettings.h"

FHaloAudioFocusSettings::FHaloAudioFocusSettings() {
    this->bSphereInnerRadiusOverride = false;
    this->bSphereOuterRadiusOverride = false;
    this->bConeInnerAngleDegreesOverride = false;
    this->bConeOuterAngleDegreesOverride = false;
    this->bElevationScaleOverride = false;
    this->SphereInnerRadius = 0.00f;
    this->SphereOuterRadius = 0.00f;
    this->ConeInnerAngleDegrees = 0.00f;
    this->ConeOuterAngleDegrees = 0.00f;
    this->ElevationScale = 0.00f;
}

