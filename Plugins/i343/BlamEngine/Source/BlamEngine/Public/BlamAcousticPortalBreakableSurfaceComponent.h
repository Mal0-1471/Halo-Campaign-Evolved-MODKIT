#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "HaloAudioPortalDoorComponent.h"
#include "BlamAcousticPortalBreakableSurfaceComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BLAMENGINE_API UBlamAcousticPortalBreakableSurfaceComponent : public UHaloAudioPortalDoorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid BreakableSurfaceTemplateGuid;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxProximity;
    
    UBlamAcousticPortalBreakableSurfaceComponent(const FObjectInitializer& ObjectInitializer);

};

