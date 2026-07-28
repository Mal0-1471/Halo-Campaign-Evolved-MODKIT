#pragma once
#include "CoreMinimal.h"
#include "PlayerRepresentationFlags.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FPlayerRepresentationFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanUseHealthPacks: 1;
    
    FPlayerRepresentationFlags();
};

