#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "HaloMaterialResponseMapping.generated.h"

class BLAMENGINE_API UHaloMaterialResponseDataAsset;
class BLAMENGINE_API UHaloMaterialResponseMapping;

UCLASS(Blueprintable)
class BLAMENGINE_API UHaloMaterialResponseMapping : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHaloMaterialResponseMapping* ParentMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UHaloMaterialResponseDataAsset*> DataAssetMap;
    
    UHaloMaterialResponseMapping();

};

