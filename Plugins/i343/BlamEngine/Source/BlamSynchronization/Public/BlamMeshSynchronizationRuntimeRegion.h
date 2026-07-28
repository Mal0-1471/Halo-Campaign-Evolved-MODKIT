#pragma once
#include "CoreMinimal.h"
#include "BlamMeshSynchronizationRuntimePermutation.h"
#include "BlamMeshSynchronizationStaticMesh.h"
#include "BlamMeshSynchronizationRuntimeRegion.generated.h"

USTRUCT(BlueprintType)
struct FBlamMeshSynchronizationRuntimeRegion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FBlamMeshSynchronizationRuntimePermutation> Permutations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBlamMeshSynchronizationStaticMesh> ActiveStaticMeshComponents;
    
    BLAMSYNCHRONIZATION_API FBlamMeshSynchronizationRuntimeRegion();
};

