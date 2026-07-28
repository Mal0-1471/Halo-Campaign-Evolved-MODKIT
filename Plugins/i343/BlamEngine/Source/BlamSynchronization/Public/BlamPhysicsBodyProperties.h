#pragma once
#include "CoreMinimal.h"
#include "BlamMaterialWrapper.h"
#include "BlamPermutationWrapper.h"
#include "BlamPhysicsShapeProperties.h"
#include "BlamRegionWrapper.h"
#include "BlamPhysicsBodyProperties.generated.h"

USTRUCT(BlueprintType)
struct FBlamPhysicsBodyProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamPhysicsShapeProperties> ShapePropertyOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamRegionWrapper REGION;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamPermutationWrapper> Permutations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamMaterialWrapper Material;
    
    BLAMSYNCHRONIZATION_API FBlamPhysicsBodyProperties();
};

