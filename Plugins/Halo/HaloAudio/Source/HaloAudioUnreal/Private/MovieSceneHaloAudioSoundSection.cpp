#include "MovieSceneHaloAudioSoundSection.h"

UMovieSceneHaloAudioSoundSection::UMovieSceneHaloAudioSoundSection() {
    this->Sound = NULL;
    this->bAttachToObject = true;
    this->bCallStopOnEnd = true;
    this->Rtpc = NULL;
    this->RtpcValue = 0.00f;
}


