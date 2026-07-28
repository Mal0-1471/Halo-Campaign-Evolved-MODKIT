#include "HaloAudioUnrealProbeActor.h"

AHaloAudioUnrealProbeActor::AHaloAudioUnrealProbeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkRtpc = NULL;
}

void AHaloAudioUnrealProbeActor::UpdateProbeMaxRadius_Implementation(double Radius) {
}

FHaloAudioUnrealOptionalRtpcValue AHaloAudioUnrealProbeActor::TryGetRtpcValue_Implementation() {
    return FHaloAudioUnrealOptionalRtpcValue{};
}


