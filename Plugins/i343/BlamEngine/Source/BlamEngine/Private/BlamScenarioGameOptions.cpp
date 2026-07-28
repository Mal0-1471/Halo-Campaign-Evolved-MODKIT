#include "BlamScenarioGameOptions.h"

FBlamScenarioGameOptions::FBlamScenarioGameOptions() {
    this->bLoadFromCoreSave = false;
    this->SaveSlot = 0;
    this->CampaignDifficultyLevel = EBlamCampaignDifficultyLevel::Easy;
    this->InsertionPoint = 0;
    this->bFriendlyFireEnabled = false;
    this->bIsLASO = false;
    this->GameVariant = NULL;
}

