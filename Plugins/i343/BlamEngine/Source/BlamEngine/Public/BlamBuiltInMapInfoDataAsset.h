#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BlamBuiltInMapInfoDataAsset.generated.h"

class UBlamCampaignDataAsset;
class UDataTable;

UCLASS(Blueprintable, Const)
class BLAMENGINE_API UBlamBuiltInMapInfoDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBlamCampaignDataAsset*> CampaignInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> CampaignMapInfoTables;
    
    UBlamBuiltInMapInfoDataAsset();

};

