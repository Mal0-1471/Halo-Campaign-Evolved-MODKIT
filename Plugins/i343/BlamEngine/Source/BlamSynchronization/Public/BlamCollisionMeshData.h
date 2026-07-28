#pragma once
#include "CoreMinimal.h"
#include "BlamAttachmentBoneWrapper.h"
#include "BlamPermutationWrapper.h"
#include "BlamRegionWrapper.h"
#include "BlamCollisionMeshData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FBlamCollisionMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamRegionWrapper REGION;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamRegionWrapper Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamPermutationWrapper Permutation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamAttachmentBoneWrapper bone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* CollisionMesh;
    
    BLAMSYNCHRONIZATION_API FBlamCollisionMeshData();
};

