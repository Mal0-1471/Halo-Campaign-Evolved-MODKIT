#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HaloMaterialResponseDataAsset.generated.h"

class BLAMENGINE_API UObject;

UCLASS(Blueprintable)
class BLAMENGINE_API UHaloMaterialResponseDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ResponseDataArray;
    
    UHaloMaterialResponseDataAsset();

};

