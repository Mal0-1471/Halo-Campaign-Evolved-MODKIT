#include "BlamPlayerRespawn.h"

FBlamPlayerRespawn::FBlamPlayerRespawn() {
    this->PlayerRespawnFailure = EBlamPlayerRespawnFailure::None;
    this->PlayerRespawnTimer = 0;
    this->ViewedPlayerAbsoluteIndex = 0;
}

