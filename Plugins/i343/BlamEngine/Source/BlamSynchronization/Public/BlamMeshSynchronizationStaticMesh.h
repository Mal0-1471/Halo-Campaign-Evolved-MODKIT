#pragma once
#include "CoreMinimal.h"
#include "BlamMeshSynchronizationStaticMesh.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FBlamMeshSynchronizationStaticMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    BLAMSYNCHRONIZATION_API FBlamMeshSynchronizationStaticMesh();
};

