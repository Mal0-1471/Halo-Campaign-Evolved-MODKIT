#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BlamMeshSynchronizationDataAsset.generated.h"

class UBlamModelTagDataAsset;

UCLASS(Blueprintable)
class BLAMSYNCHRONIZATION_API UBlamMeshSynchronizationDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlamModelTagDataAsset* ModelTag;
    
    UBlamMeshSynchronizationDataAsset();

};

