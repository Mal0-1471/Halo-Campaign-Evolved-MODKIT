#include "BlamGameEngineCampaignVariant.h"

UBlamGameEngineCampaignVariant::UBlamGameEngineCampaignVariant() {
}

void UBlamGameEngineCampaignVariant::SetPerPlayerTraits(int32 CampaignPlayerIndex, FBlamGameEnginePlayerTraits PlayerTraits) {
}

void UBlamGameEngineCampaignVariant::SetFlags(FBlamCampaignVariantFlags Flags) {
}

FBlamGameEnginePlayerTraits UBlamGameEngineCampaignVariant::GetPerPlayerTraits(int32 CampaignPlayerIndex) const {
    return FBlamGameEnginePlayerTraits{};
}

FBlamCampaignVariantFlags UBlamGameEngineCampaignVariant::GetFlags() const {
    return FBlamCampaignVariantFlags{};
}


