#pragma once
#include "CoreMinimal.h"
#include "BlamGameProgressionFlags.h"
#include "BlamGameProgression.generated.h"

USTRUCT(BlueprintType)
struct BLAMGLUE_API FBlamGameProgression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlamGameProgressionFlags Flags;
    
    FBlamGameProgression();
};

