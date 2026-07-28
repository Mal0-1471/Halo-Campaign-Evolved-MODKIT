#pragma once
#include "CoreMinimal.h"
#include "BlamCustomizationGlobalsTagDataIndices.generated.h"

USTRUCT(BlueprintType)
struct FBlamCustomizationGlobalsTagDataIndices {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CustomizationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SelectionIndex;
    
    BLAMSYNCHRONIZATION_API FBlamCustomizationGlobalsTagDataIndices();
};

