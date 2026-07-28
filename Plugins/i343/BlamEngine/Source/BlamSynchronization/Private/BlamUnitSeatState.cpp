#include "BlamUnitSeatState.h"

FBlamUnitSeatState::FBlamUnitSeatState() {
    this->EntryRadius = 0.00f;
    this->bIsInvisible = false;
    this->bIsLocked = false;
    this->bIsDriver = false;
    this->bIsGunner = false;
    this->bSeatAllowsWeapons = false;
    this->bIsBoardingSeat = false;
    this->bNotForPlayer = false;
    this->SeatedUnitDatumIndex = 0;
}

