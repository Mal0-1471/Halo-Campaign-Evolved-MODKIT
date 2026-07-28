#pragma once
#include "CoreMinimal.h"
#include "BlamPermutationWrapper.h"
#include "BlamRegionWrapper.h"
#include "BlamPhysicsMeshData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FBlamPhysicsMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamRegionWrapper Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamRegionWrapper REGION;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamPermutationWrapper> Permutations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* PhysicsMesh;
    
    BLAMSYNCHRONIZATION_API FBlamPhysicsMeshData();
};

