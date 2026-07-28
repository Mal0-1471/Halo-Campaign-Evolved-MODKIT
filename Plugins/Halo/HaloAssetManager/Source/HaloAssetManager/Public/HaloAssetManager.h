#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "HaloAssetManager.generated.h"

class UObject;
class UPrimaryDataAsset;

UCLASS(Blueprintable, Config=Game)
class HALOASSETMANAGER_API UHaloAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UPrimaryDataAsset*> GameDataMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UObject*> LoadedAssets;
    
public:
    UHaloAssetManager();

};

