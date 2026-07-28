#include "HaloAudioSoundBase.h"

UHaloAudioSoundBase::UHaloAudioSoundBase() {
}

bool UHaloAudioSoundBase::IsLooping() const {
    return false;
}

bool UHaloAudioSoundBase::Is3D() const {
    return false;
}

float UHaloAudioSoundBase::GetMaxAttenuationRadius() const {
    return 0.0f;
}

FFloatRange UHaloAudioSoundBase::GetDurationRange() const {
    return FFloatRange{};
}


