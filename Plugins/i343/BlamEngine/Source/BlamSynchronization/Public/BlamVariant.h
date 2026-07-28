#pragma once
#include "CoreMinimal.h"
#include "BlamVariant.generated.h"

USTRUCT(BlueprintType)
struct FBlamVariant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariantName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FName> Permutations;
    
    BLAMSYNCHRONIZATION_API FBlamVariant();
};

