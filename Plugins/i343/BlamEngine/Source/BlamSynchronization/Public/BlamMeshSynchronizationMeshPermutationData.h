#pragma once
#include "CoreMinimal.h"
#include "BlamMeshSynchronizationMaterialOverrideData.h"
#include "BlamMeshSynchronizationMeshPermutationData.generated.h"

USTRUCT(BlueprintType)
struct FBlamMeshSynchronizationMeshPermutationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamMeshSynchronizationMaterialOverrideData> MaterialOverrides;
    
    BLAMSYNCHRONIZATION_API FBlamMeshSynchronizationMeshPermutationData();
};

