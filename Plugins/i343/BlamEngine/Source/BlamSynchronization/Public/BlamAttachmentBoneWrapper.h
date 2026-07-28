#pragma once
#include "CoreMinimal.h"
#include "BlamAttachmentBoneWrapper.generated.h"

USTRUCT(BlueprintType)
struct FBlamAttachmentBoneWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    BLAMSYNCHRONIZATION_API FBlamAttachmentBoneWrapper();
};

