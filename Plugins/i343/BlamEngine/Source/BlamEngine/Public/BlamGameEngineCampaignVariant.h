#pragma once
#include "CoreMinimal.h"
#include "BlamCampaignVariantFlags.h"
#include "BlamGameEngineCampaignVariantStorage.h"
#include "BlamGameEnginePlayerTraits.h"
#include "BlamGameEngineBaseVariant.h"
#include "BlamGameEngineCampaignVariant.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamGameEngineCampaignVariant : public UBlamGameEngineBaseVariant {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamGameEngineCampaignVariantStorage CampaignVariantStorage;
    
public:
    UBlamGameEngineCampaignVariant();

    UFUNCTION(BlueprintCallable)
    void SetPerPlayerTraits(int32 CampaignPlayerIndex, FBlamGameEnginePlayerTraits PlayerTraits);
    
    UFUNCTION(BlueprintCallable)
    void SetFlags(FBlamCampaignVariantFlags Flags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBlamGameEnginePlayerTraits GetPerPlayerTraits(int32 CampaignPlayerIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBlamCampaignVariantFlags GetFlags() const;
    
};

