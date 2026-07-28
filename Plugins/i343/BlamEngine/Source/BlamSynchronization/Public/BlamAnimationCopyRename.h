#pragma once
#include "CoreMinimal.h"
#include "BlamAnimationCopyRename.generated.h"

USTRUCT(BlueprintType)
struct FBlamAnimationCopyRename {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationCopyRename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnimationReferenceName;
    
    BLAMSYNCHRONIZATION_API FBlamAnimationCopyRename();
};

