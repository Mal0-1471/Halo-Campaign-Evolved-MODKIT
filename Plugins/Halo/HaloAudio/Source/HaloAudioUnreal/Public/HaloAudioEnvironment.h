#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EHaloAudioSpaceCategoryType.h"
#include "EHaloAudioSpaceType.h"
#include "HaloAudioEnvironment.generated.h"

class UAkAuxBus;
class UAkSwitchValue;

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API UHaloAudioEnvironment : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHaloAudioSpaceType Space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHaloAudioSpaceCategoryType SpaceCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAuxBus* AuxBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* SwitchValue;
    
    UHaloAudioEnvironment();

};

