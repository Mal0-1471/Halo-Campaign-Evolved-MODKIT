#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "EBlamCampaignType.h"
#include "BlamCampaignDataAsset.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamCampaignDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid CampaignGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> ScenarioList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamCampaignType CampaignType;
    
    UBlamCampaignDataAsset();

};

