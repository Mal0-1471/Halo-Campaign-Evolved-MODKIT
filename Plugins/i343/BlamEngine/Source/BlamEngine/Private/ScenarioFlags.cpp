#include "ScenarioFlags.h"

FScenarioFlags::FScenarioFlags() {
    this->bDontStripPathfinding = false;
    this->bQuickLoadingCinematicOnlyScenario = false;
    this->bCharactersUsePreviousMissionWeapons = false;
    this->bSnapToWhiteAtStart = false;
    this->bBigVehicleUseCenterPointForLightSampling = false;
    this->bDontUseCampaignSharing = false;
    this->bIgnoreSizeAndCanTShip = false;
    this->bInSpace = false;
    this->bSurvival = false;
    this->bDoNotStripVariants = false;
}

