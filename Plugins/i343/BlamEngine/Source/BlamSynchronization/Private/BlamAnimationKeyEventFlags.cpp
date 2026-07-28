#include "BlamAnimationKeyEventFlags.h"

FBlamAnimationKeyEventFlags::FBlamAnimationKeyEventFlags() {
    this->bAllowOnPlayer = false;
    this->bLeftArmOnly = false;
    this->bRightArmOnly = false;
    this->bFirstPersonOnly = false;
    this->bThirdPersonOnly = false;
    this->bForwardOnly = false;
    this->bReverseOnly = false;
    this->bFpNoAgedWeapons = false;
}

