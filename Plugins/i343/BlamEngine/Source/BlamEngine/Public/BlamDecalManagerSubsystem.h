#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Subsystems/WorldSubsystem.h"
#include "BlamDecalManagerSubsystem.generated.h"

class BLAMENGINE_API AActor;
class BLAMENGINE_API UDecalComponent;
class BLAMENGINE_API UMaterialInterface;

UCLASS(Blueprintable)
class BLAMENGINE_API UBlamDecalManagerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* DecalOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UDecalComponent*> TrackedDecals;
    
public:
    UBlamDecalManagerSubsystem();

    UFUNCTION(BlueprintCallable)
    int32 SpawnTrackedDecalDelayed(UMaterialInterface* DecalMaterial, const FTransform& DecalTransform, const FVector& DecalSize, const float SpawnDelayTime);
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnTrackedDecal(UMaterialInterface* DecalMaterial, const FTransform& DecalTransform, const FVector& DecalSize);
    
    UFUNCTION(BlueprintCallable)
    bool DestroyTrackedDecal(int32 DecalIndentifier);
    
};

