#include "BlamScenario.h"

ABlamScenario::ABlamScenario(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIncludeActorsNotInLayers = false;
    this->Type = EScenarioTypeEnum::Solo;
    this->CampaignId = 0;
    this->MapId = 0;
    this->SoundPermutationMissionId = 0;
    this->LocalNorth = 0.00f;
    this->LocalSeaLevel = 0.00f;
    this->AltitudeCap = 0.00f;
    this->SandboxBudget = 0.00f;
    this->UserInterfaceObjectivesDataAsset = NULL;
    this->InsertionPointsDataAsset = NULL;
}


