#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "HaloAudioVoxelGridRenderComponent.generated.h"

class AHaloAudioZonePartialVoxelGrid;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HALOAUDIOUNREAL_API UHaloAudioVoxelGridRenderComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHaloAudioZonePartialVoxelGrid> VoxelGrid;
    
public:
    UHaloAudioVoxelGridRenderComponent(const FObjectInitializer& ObjectInitializer);

};

