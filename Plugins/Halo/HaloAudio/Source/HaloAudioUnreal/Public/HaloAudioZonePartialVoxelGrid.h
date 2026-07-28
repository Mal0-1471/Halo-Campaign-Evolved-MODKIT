#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "HaloAudioZoneVoxelLod.h"
#include "HaloAudioZonePartialVoxelGrid.generated.h"

class UHaloAudioVoxelGridRenderComponent;

UCLASS(Blueprintable)
class HALOAUDIOUNREAL_API AHaloAudioZonePartialVoxelGrid : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ZoneGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform FullZoneTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHaloAudioZoneVoxelLod> LodDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHaloAudioVoxelGridRenderComponent* VisualComponent;
    
    AHaloAudioZonePartialVoxelGrid(const FObjectInitializer& ObjectInitializer);

};

