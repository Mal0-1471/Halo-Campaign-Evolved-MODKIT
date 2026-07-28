#pragma once
#include "CoreMinimal.h"
#include "BlamIncidentName.generated.h"

USTRUCT(BlueprintType)
struct BLAMSYNCHRONIZATION_API FBlamIncidentName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FBlamIncidentName();
};

