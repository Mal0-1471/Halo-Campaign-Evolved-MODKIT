#include "HaloAudioCategory.h"

UHaloAudioCategory::UHaloAudioCategory() {
    this->Parent = NULL;
    this->bMaxPriorityGroupSoundsOverride = false;
    this->bCullByMaxRadiusOverride = false;
    this->bEnableDopplerOverride = false;
    this->bEnsureOneFramePlaybackOverride = false;
    this->bOneShotsUseStickyParametersOverride = false;
    this->bLoopsUseStickyParametersOverride = false;
    this->bPriorityAtListenerOverride = false;
    this->bPriorityAtMaxDistanceOverride = false;
    this->bApplyFocusFeatureOverride = false;
    this->bEnableAmbientWindRtpcOverride = false;
    this->bWaitForAmbientWindResultBeforePlayingOverride = false;
    this->bEnableWaterDepthRtpcOverride = false;
    this->bWaitForWaterDepthResultBeforePlayingOverride = false;
    this->bCullByMaxRadius = true;
    this->bEnableDoppler = false;
    this->bEnsureOneFramePlayback = true;
    this->bOneShotsUseStickyParameters = false;
    this->bLoopsUseStickyParameters = false;
    this->MaxPriorityGroupSounds = 0;
    this->PriorityAtListener = 75.00f;
    this->PriorityAtMaxDistance = 25.00f;
    this->bApplyFocusFeature = false;
    this->bEnableAmbientWindRtpc = false;
    this->bWaitForAmbientWindResultBeforePlaying = false;
    this->bEnableWaterDepthRtpc = false;
    this->bWaitForWaterDepthResultBeforePlaying = false;
}

bool UHaloAudioCategory::GetWaitForWaterDepthResultBeforePlaying() const {
    return false;
}

bool UHaloAudioCategory::GetWaitForAmbientWindResultBeforePlaying() const {
    return false;
}

FHaloAudioShapeInfo UHaloAudioCategory::GetShapeInfo() const {
    return FHaloAudioShapeInfo{};
}

float UHaloAudioCategory::GetPriorityAtMaxDistance() const {
    return 0.0f;
}

float UHaloAudioCategory::GetPriorityAtListener() const {
    return 0.0f;
}

bool UHaloAudioCategory::GetOneShotsUseStickyParameters() const {
    return false;
}

int32 UHaloAudioCategory::GetMaxPriorityGroupSounds() const {
    return 0;
}

bool UHaloAudioCategory::GetLoopsUseStickyParameters() const {
    return false;
}

FHaloAudioFocusSettings UHaloAudioCategory::GetFocusSettings() const {
    return FHaloAudioFocusSettings{};
}

bool UHaloAudioCategory::GetEnsureOneFramePlayback() const {
    return false;
}

bool UHaloAudioCategory::GetEnableWaterDepthRtpc() const {
    return false;
}

bool UHaloAudioCategory::GetEnableDoppler() const {
    return false;
}

bool UHaloAudioCategory::GetEnableAmbientWindRtpc() const {
    return false;
}

bool UHaloAudioCategory::GetCullByMaxRadius() const {
    return false;
}

FHaloAudioClusterSettings UHaloAudioCategory::GetClusterSettings() const {
    return FHaloAudioClusterSettings{};
}

bool UHaloAudioCategory::GetApplyFocusFeature() const {
    return false;
}

FHaloAudioAcousticSettings UHaloAudioCategory::GetAcousticSettings() const {
    return FHaloAudioAcousticSettings{};
}


