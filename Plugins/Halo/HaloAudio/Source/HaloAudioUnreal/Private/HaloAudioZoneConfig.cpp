#include "HaloAudioZoneConfig.h"

FHaloAudioZoneConfig::FHaloAudioZoneConfig() {
    this->Priority = 0;
    this->UseDefaultTransitionSpeed = false;
    this->TransitionSpeed = 0.00f;
    this->InheritBaseAir = false;
    this->BaseAirSound = NULL;
    this->BaseAirSweetenerSound = NULL;
    this->ListenerEnteredMixState = NULL;
    this->ListenerExitedMixState = NULL;
    this->ListenerEnteredDefaultMixState = NULL;
    this->ListenerExitedDefaultMixState = NULL;
}

