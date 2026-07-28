#pragma once
#include "CoreMinimal.h"
#include "BlamMeshSynchronizationRuntimeSkeletalMesh.h"
#include "BlamMeshSynchronizationRuntimeStaticMesh.h"
#include "BlamMeshSynchronizationRuntimePermutation.generated.h"

USTRUCT(BlueprintType)
struct FBlamMeshSynchronizationRuntimePermutation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamMeshSynchronizationRuntimeSkeletalMesh> SkeletalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamMeshSynchronizationRuntimeStaticMesh> StaticMeshes;
    
    BLAMSYNCHRONIZATION_API FBlamMeshSynchronizationRuntimePermutation();
};

