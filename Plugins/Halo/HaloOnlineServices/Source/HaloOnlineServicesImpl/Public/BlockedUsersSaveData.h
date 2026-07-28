#pragma once
#include "CoreMinimal.h"
#include "SocialHaloInGameBlockedUser.h"
#include "BlockedUsersSaveData.generated.h"

USTRUCT(BlueprintType)
struct FBlockedUsersSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSocialHaloInGameBlockedUser> Users;
    
    HALOONLINESERVICESIMPL_API FBlockedUsersSaveData();
};

