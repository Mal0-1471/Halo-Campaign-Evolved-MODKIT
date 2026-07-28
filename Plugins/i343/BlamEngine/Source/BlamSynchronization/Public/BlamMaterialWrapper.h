#pragma once
#include "CoreMinimal.h"
#include "BlamMaterialWrapper.generated.h"

USTRUCT(BlueprintType)
struct FBlamMaterialWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    BLAMSYNCHRONIZATION_API FBlamMaterialWrapper();
};

