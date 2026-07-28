#include "HaloAudioMusicControl.h"

UHaloAudioMusicControl::UHaloAudioMusicControl() {
    this->Priority = 0;
    this->bOverridePriority = false;
    this->bBlockSamePriority = false;
    this->DeferredConditionType = NULL;
}


