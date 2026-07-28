#pragma once
#include "CoreMinimal.h"
#include "SocialHaloInGameBlockedUser.generated.h"

USTRUCT(BlueprintType)
struct FSocialHaloInGameBlockedUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlatformId;
    
    HALOONLINESERVICESIMPL_API FSocialHaloInGameBlockedUser();
};

