#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BlamCustomizationGlobalsTagDataIndices.h"
#include "BlamTagDataAssetBase.h"
#include "BlamPlayerModelCustomizationGlobalsTagDataAsset.generated.h"

class UBlamObjectTagDataAsset;
class UDataTable;

UCLASS(Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamPlayerModelCustomizationGlobalsTagDataAsset : public UBlamTagDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UBlamObjectTagDataAsset>, TSoftObjectPtr<UDataTable>> CustomizationDataTables;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FBlamCustomizationGlobalsTagDataIndices> CustomizationIndicesLookup;
    
public:
    UBlamPlayerModelCustomizationGlobalsTagDataAsset();

};

