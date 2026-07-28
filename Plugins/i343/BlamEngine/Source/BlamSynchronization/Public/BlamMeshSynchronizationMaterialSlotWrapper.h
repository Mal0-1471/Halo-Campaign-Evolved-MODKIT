#pragma once
#include "CoreMinimal.h"
#include "BlamMeshSynchronizationMaterialSlotWrapper.generated.h"

USTRUCT(BlueprintType)
struct FBlamMeshSynchronizationMaterialSlotWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    BLAMSYNCHRONIZATION_API FBlamMeshSynchronizationMaterialSlotWrapper();
};

