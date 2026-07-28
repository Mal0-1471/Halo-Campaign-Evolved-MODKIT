#pragma once
#include "CoreMinimal.h"
#include "BlamMeshSynchronizationMaterialOverride.h"
#include "BlamMeshSynchronizationRuntimeSkeletalMesh.generated.h"

class USkeletalMesh;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FBlamMeshSynchronizationRuntimeSkeletalMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USkeletalMeshComponent> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlamMeshSynchronizationMaterialOverride> MaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ComponentTags;
    
    BLAMSYNCHRONIZATION_API FBlamMeshSynchronizationRuntimeSkeletalMesh();
};

