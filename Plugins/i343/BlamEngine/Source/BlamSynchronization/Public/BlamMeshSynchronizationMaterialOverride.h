#pragma once
#include "CoreMinimal.h"
#include "BlamMeshSynchronizationMaterialOverride.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FBlamMeshSynchronizationMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> OverrideMaterial;
    
    BLAMSYNCHRONIZATION_API FBlamMeshSynchronizationMaterialOverride();
};

