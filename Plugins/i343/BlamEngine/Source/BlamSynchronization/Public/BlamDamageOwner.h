#pragma once
#include "CoreMinimal.h"
#include "BlamDamageOwner.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BLAMSYNCHRONIZATION_API FBlamDamageOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DamageOwnerObject;
    
    FBlamDamageOwner();
};

