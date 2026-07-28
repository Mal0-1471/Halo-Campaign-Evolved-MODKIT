#pragma once
#include "CoreMinimal.h"
#include "BlamBaseDynamicObjectTagDataAsset.h"
#include "BlamVariant.h"
#include "BlamModelTagDataAsset.generated.h"

class UBlamModelRegionStringTable;
class UBlamObjectTagDataAsset;

UCLASS(Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamModelTagDataAsset : public UBlamBaseDynamicObjectTagDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlamModelRegionStringTable* ModelRegionStringTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RegionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> Permutations_EMPTY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamVariant> Variants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamVariant> RuntimeVariants;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBlamObjectTagDataAsset* ObjectTagDataAsset;
    
public:
    UBlamModelTagDataAsset();

};

