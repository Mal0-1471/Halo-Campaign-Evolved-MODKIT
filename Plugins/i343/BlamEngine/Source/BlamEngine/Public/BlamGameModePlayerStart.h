#pragma once
#include "CoreMinimal.h"
#include "Engine/NavigationObjectBase.h"
#include "BlamGameModePlayerStart.generated.h"

UCLASS(Blueprintable)
class BLAMENGINE_API ABlamGameModePlayerStart : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InsertionPointName;
    
    ABlamGameModePlayerStart(const FObjectInitializer& ObjectInitializer);

};

