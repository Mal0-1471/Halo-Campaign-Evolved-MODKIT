#include "BlamSynchronizationObjectThrottlingConfig.h"

FBlamSynchronizationObjectThrottlingConfig::FBlamSynchronizationObjectThrottlingConfig() {
    this->bEnabled = false;
    this->ExecutionBudget = 0.00f;
    this->FramesWithoutSyncBoostScale = 0.00f;
}

