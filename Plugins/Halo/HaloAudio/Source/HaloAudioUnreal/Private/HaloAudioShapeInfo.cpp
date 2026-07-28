#include "HaloAudioShapeInfo.h"

FHaloAudioShapeInfo::FHaloAudioShapeInfo() {
    this->bUpperHemisphereOnlyOverride = false;
    this->bIsAcousticsObstructionOnlySphereOverride = false;
    this->bSphereRadiusOverride = false;
    this->bSphereStretchValueOverride = false;
    this->bUpperHemisphereOnly = false;
    this->bIsAcousticsObstructionOnlySphere = false;
    this->SphereRadius = 0.00f;
    this->SphereStretchValue = 0.00f;
}

