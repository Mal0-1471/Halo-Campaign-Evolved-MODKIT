#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "HaloAudioPortalDoorComponent.h"
#include "HaloAudioPortalDoorRayCastThruComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HALOAUDIOUNREAL_API UHaloAudioPortalDoorRayCastThruComponent : public UHaloAudioPortalDoorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> RaycastChannel;
    
    UHaloAudioPortalDoorRayCastThruComponent(const FObjectInitializer& ObjectInitializer);

};

