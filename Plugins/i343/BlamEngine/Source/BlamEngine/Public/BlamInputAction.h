#pragma once
#include "CoreMinimal.h"
#include "InputAction.h"
#include "BlamInputAction.generated.h"

class BLAMENGINE_API UBlamInputAction;
class BLAMENGINE_API UInputMappingContext;

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamInputAction : public UInputAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowUnmappedAction;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ActionExclusivityContextFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UBlamInputAction*> FriendInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UInputMappingContext*> InvalidKeyMappings;
    
    UBlamInputAction();

};

