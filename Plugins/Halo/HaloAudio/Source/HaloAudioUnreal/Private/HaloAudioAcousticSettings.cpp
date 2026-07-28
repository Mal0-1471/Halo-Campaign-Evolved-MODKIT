#include "HaloAudioAcousticSettings.h"

FHaloAudioAcousticSettings::FHaloAudioAcousticSettings() {
    this->bDisableSourceZoneReverbOverride = false;
    this->bSoundTransmissivityOverride = false;
    this->bDisableObstructionOverride = false;
    this->bDisableDynamicObjectObstructionOverride = false;
    this->bDisableOcclusionOverride = false;
    this->bDisableSourcePortalOcclusionOverride = false;
    this->bDisableVirtualPositioningOverride = false;
    this->bUseOnlyFirstListenerInSplitscreenOverride = false;
    this->bDisableSourceZoneReverb = false;
    this->SoundTransmissivity = 0.00f;
    this->bDisableObstruction = false;
    this->bDisableDynamicObjectObstruction = false;
    this->bDisableOcclusion = false;
    this->bDisableSourcePortalOcclusion = false;
    this->bDisableVirtualPositioning = false;
    this->bUseOnlyFirstListenerInSplitscreen = false;
}

