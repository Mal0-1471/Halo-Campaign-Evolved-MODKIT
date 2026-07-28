#include "HaloAudioPortalProperties.h"

FHaloAudioPortalProperties::FHaloAudioPortalProperties() {
    this->FrontEntrySound = NULL;
    this->FrontExitSound = NULL;
    this->BackEntrySound = NULL;
    this->BackExitSound = NULL;
    this->TransmissivityType = EHaloAudioPortalTransmissivityType::Auto;
    this->MinTransmissivity = 0.00f;
    this->MaxTransmissivity = 0.00f;
    this->MaskScale = 0.00f;
    this->NumberOfSpokes = 0;
    this->DoNotUseMask = false;
    this->AffectsTransmissivity = false;
}

