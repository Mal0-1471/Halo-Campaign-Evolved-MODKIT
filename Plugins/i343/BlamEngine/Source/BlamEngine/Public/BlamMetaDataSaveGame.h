#pragma once
#include "CoreMinimal.h"
#include "Misc/DateTime.h"
#include "BlamSaveGame.h"
#include "BlamScenarioGameOptions.h"
#include "BlamMetaDataSaveGame.generated.h"

class BLAMENGINE_API UBlamCampaignDataAsset;

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamMetaDataSaveGame : public UBlamSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentScenarioIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamScenarioGameOptions SavedScenarioGameOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamCampaignDataAsset> CurrentCampaignDataAssetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime TimestampUTC;
    
    UBlamMetaDataSaveGame();

};

