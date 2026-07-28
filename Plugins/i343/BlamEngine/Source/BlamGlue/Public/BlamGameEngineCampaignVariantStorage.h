#pragma once
#include "CoreMinimal.h"
#include "BlamCampaignVariantFlags.h"
#include "BlamGameEngineBaseVariantStorage.h"
#include "BlamGameEnginePlayerTraits.h"
#include "BlamGameEngineCampaignVariantStorage.generated.h"

USTRUCT(BlueprintType)
struct BLAMGLUE_API FBlamGameEngineCampaignVariantStorage : public FBlamGameEngineBaseVariantStorage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamCampaignVariantFlags Flags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 EncounterRemixRandomSeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamGameEnginePlayerTraits PerPlayerTraits[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 PerPlayerXuidMapping[4];
    
    FBlamGameEngineCampaignVariantStorage();
};

