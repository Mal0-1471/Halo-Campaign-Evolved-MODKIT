#include "BlamAudioLoopingSound.h"

UBlamAudioLoopingSound::UBlamAudioLoopingSound() {
    this->BlamAudioStackLevel = EBlamAudioStackLevel::Default;
    this->PlayLoopEvent = NULL;
    this->SwitchToAltLoopEvent = NULL;
    this->SwitchToLoopEvent = NULL;
    this->StopLoopEvent = NULL;
    this->Category = NULL;
}


