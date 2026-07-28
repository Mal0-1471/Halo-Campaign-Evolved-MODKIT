#include "HaloAudioUnrealQualitySettings.h"

FHaloAudioUnrealQualitySettings::FHaloAudioUnrealQualitySettings() {
    this->FloodFillUseSortedFrontier = false;
    this->FloodFillProcessDiagonals = false;
    this->EnableVoxelObstuction = false;
    this->EnableGlobalDynamicObjectObstruction = false;
    this->NumStringPullIterations = 0;
    this->EnableDynamicObjectsForLineOfSightRaycasts = false;
    this->StringPullIterationScale = 0.00f;
    this->VoxelBreakpointMultiplier = 0.00f;
    this->NumParallelSourceUpdates = 0;
    this->MaxRayCastRequestsPerFrame = 0;
    this->PrioritizerMaxActiveWeight = 0;
}

