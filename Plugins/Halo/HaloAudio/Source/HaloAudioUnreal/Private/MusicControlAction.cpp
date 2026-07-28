#include "MusicControlAction.h"

FMusicControlAction::FMusicControlAction() {
    this->Type = EMusicControlType::StartEvent;
    this->AkEvent = NULL;
    this->AkStateValue = NULL;
    this->AkSwitchValue = NULL;
    this->Rptc = NULL;
    this->RtpcValue = 0.00f;
    this->NewPriority = 0;
}

