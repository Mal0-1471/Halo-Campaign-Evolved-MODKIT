#pragma once
#include "CoreMinimal.h"
#include "BlamMeshSynchronizationMeshData.h"
#include "BlamRegionWrapper.h"
#include "BlamMeshSynchronizationRegionData.generated.h"

USTRUCT(BlueprintType)
struct FBlamMeshSynchronizationRegionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamRegionWrapper REGION;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamMeshSynchronizationMeshData> Meshes;
    
    BLAMSYNCHRONIZATION_API FBlamMeshSynchronizationRegionData();
};

