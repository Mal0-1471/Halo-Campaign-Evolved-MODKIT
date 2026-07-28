#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "BlamAnimNotify.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories)
class BLAMSYNCHRONIZATION_API UBlamAnimNotify : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameOffset;
    
public:
    UBlamAnimNotify();

};

