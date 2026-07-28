#pragma once
#include "CoreMinimal.h"
#include "BlamTagDataAssetBase.h"
#include "Templates/SubclassOf.h"
#include "BlamObjectTagDataAsset.generated.h"

class ABlamObjectActor;

UCLASS(Abstract, Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamObjectTagDataAsset : public UBlamTagDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABlamObjectActor> AssetReference;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABlamObjectActor> DefaultAssetReference;
    
public:
    UBlamObjectTagDataAsset();

};

