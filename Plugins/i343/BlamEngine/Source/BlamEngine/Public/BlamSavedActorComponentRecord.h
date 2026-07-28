#pragma once
#include "CoreMinimal.h"
#include "BlamSavedActorComponentRecord.generated.h"

class BLAMENGINE_API UActorComponent;

USTRUCT(BlueprintType)
struct BLAMENGINE_API FBlamSavedActorComponentRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UActorComponent> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefaultComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ComponentName;
    
     FBlamSavedActorComponentRecord();
};

