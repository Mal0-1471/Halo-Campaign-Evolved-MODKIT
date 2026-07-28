#pragma once
#include "CoreMinimal.h"
#include "BlamMeshSynchronizationMaterialSlotWrapper.h"
#include "BlamMeshSynchronizationMaterialOverrideData.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FBlamMeshSynchronizationMaterialOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamMeshSynchronizationMaterialSlotWrapper MaterialSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* OverrideMaterial;
    
    BLAMSYNCHRONIZATION_API FBlamMeshSynchronizationMaterialOverrideData();
};

