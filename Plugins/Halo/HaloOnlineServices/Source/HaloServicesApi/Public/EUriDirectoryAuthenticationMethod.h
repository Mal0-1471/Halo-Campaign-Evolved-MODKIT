#pragma once
#include "CoreMinimal.h"
#include "EUriDirectoryAuthenticationMethod.generated.h"

UENUM(BlueprintType)
enum class EUriDirectoryAuthenticationMethod : uint8 {
    None,
    SpartanTokenV4,
    DedicatedServerSpartanTokenV4,
};

