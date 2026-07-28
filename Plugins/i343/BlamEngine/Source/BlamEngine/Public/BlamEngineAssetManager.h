#pragma once

#include "HaloAssetManager.h"
#include "BlamEngineAssetManager.generated.h"

class BLAMENGINE_API UBlamBuiltInMapInfoDataAsset;

UCLASS(Blueprintable, Config=Engine)
class BLAMENGINE_API UBlamEngineAssetManager : public UHaloAssetManager {
    GENERATED_BODY()
public:



protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBlamBuiltInMapInfoDataAsset> BuiltInMapInfoDataPath;
    
public:


};

