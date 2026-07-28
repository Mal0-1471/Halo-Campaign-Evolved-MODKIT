#pragma once
#include "CoreMinimal.h"
#include "EBlamInputAction.h"
#include "EBlamKeyBindingSlot.h"
#include "InputMapperOutputErrorData.generated.h"

USTRUCT(BlueprintType)
struct BLAMENGINE_API FInputMapperOutputErrorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamInputAction ExclusivityErrorAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlamKeyBindingSlot ExclusivityErrorSlot;
    
     FInputMapperOutputErrorData();
};

