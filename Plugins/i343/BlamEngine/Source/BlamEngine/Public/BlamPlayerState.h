#pragma once

#include "HaloModularPlayerState.h"
#include "BlamPlayerState.generated.h"

class BLAMENGINE_API UBlamExperiencePlayerStateComponent;
class BLAMENGINE_API UBlamNetworkPlayerStateComponent;
class BLAMENGINE_API UBlamPlayerStateComponent;
class BLAMENGINE_API UHaloPrivilegePlayerStateComponent;

UCLASS(Abstract, Blueprintable, Config=Game)
class BLAMENGINE_API ABlamPlayerState : public AHaloModularPlayerState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlamExperiencePlayerStateComponent* BlamExperiencePlayerStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlamNetworkPlayerStateComponent* BlamNetworkPlayerStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBlamPlayerStateComponent* BlamPlayerStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHaloPrivilegePlayerStateComponent* HaloPrivilegePlayerStateComponent;
    
public:
    ABlamPlayerState(const FObjectInitializer& ObjectInitializer);

};

