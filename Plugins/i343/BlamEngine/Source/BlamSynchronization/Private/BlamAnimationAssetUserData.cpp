#include "BlamAnimationAssetUserData.h"

UBlamAnimationAssetUserData::UBlamAnimationAssetUserData() {
    this->AnimationType = EBlamModelAnimationType::Base;
    this->OverlayType = EModelAnimationOverlayType::Keyframe;
    this->OverlayBlending = EModelAnimationOverlayBlending::Additive;
    this->MovementData = EModelAnimationMovementData::None;
    this->AnimationPedestalNodeName = TEXT("Pedestal");
}


