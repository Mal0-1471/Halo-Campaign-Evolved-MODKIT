#pragma once
#include "CoreMinimal.h"
#include "BlamMaterialWrapper.h"
#include "BlamPermutationWrapper.h"
#include "BlamRegionWrapper.h"
#include "BlamPhysicsShapeProperties.generated.h"

USTRUCT(BlueprintType)
struct FBlamPhysicsShapeProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShapeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamRegionWrapper REGION;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamPermutationWrapper> Permutations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamMaterialWrapper Material;
    
    BLAMSYNCHRONIZATION_API FBlamPhysicsShapeProperties();
};

