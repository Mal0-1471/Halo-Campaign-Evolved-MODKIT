#pragma once
#include "CoreMinimal.h"
#include "EBlamCampaignDifficultyLevel.h"
#include "EBlamGameSkulls.h"
#include "BlamScenarioGameOptions.generated.h"

class BLAMENGINE_API UBlamGameEngineBaseVariant;

USTRUCT(BlueprintType)
struct BLAMENGINE_API FBlamScenarioGameOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLoadFromCoreSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 SaveSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SavedFilmName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamCampaignDifficultyLevel CampaignDifficultyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InsertionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EBlamGameSkulls> ActiveSkulls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFriendlyFireEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLASO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBlamGameEngineBaseVariant* GameVariant;
    
     FBlamScenarioGameOptions();
};

