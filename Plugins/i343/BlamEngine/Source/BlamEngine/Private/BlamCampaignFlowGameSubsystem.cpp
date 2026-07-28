#include "BlamCampaignFlowGameSubsystem.h"

UBlamCampaignFlowGameSubsystem::UBlamCampaignFlowGameSubsystem() {
    this->CurrentCampaign = NULL;
}

bool UBlamCampaignFlowGameSubsystem::SetAndBeginCampaign(const UBlamCampaignDataAsset* Campaign, const FName StartingScenarioName, const FBlamScenarioGameOptions& Options) {
    return false;
}

void UBlamCampaignFlowGameSubsystem::SetActiveCampaign(const UBlamCampaignDataAsset* Campaign) {
}

void UBlamCampaignFlowGameSubsystem::RevertToLastSave() {
}

void UBlamCampaignFlowGameSubsystem::RestartLevel() {
}

void UBlamCampaignFlowGameSubsystem::LeaveGame() {
}

FName UBlamCampaignFlowGameSubsystem::GetLastBlamErrorName() const {
    return NAME_None;
}

void UBlamCampaignFlowGameSubsystem::EndCampaign() {
}

bool UBlamCampaignFlowGameSubsystem::BeginCampaign(const FName StartingScenarioName, const FBlamScenarioGameOptions& Options) {
    return false;
}

void UBlamCampaignFlowGameSubsystem::AcknowledgeLastBlamError() {
}


