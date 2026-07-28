#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
#include "HaloUINavpointHandle.h"
#include "NavpointInstance.h"
#include "PinStorage.h"
#include "HaloUINavpointsManager.generated.h"

class APlayerController;
class IHaloUINavpointsData;
class UHaloUINavpointsData;
class UPanelWidget;
class UWidget;

UCLASS(Blueprintable)
class HALOUI_API UHaloUINavpointsManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AgeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AgeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2f VisualScale;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IHaloUINavpointsData>> DataInterfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ParentContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* CachedPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPinStorage> PinContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FHaloUINavpointHandle, FNavpointInstance> NavpointInstances;
    
public:
    UHaloUINavpointsManager();

    UFUNCTION(BlueprintCallable)
    void UnregisterNavpointDataSource(TScriptInterface<IHaloUINavpointsData> InNavpointDataSourceInterface);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterAllNavpointDataSources();
    
    UFUNCTION(BlueprintCallable)
    void RegisterPlayerController(APlayerController* InPlayerController);
    
    UFUNCTION(BlueprintCallable)
    void RegisterPinContainer(FName PinContainerName, UWidget* PinContainer, float Rounding);
    
    UFUNCTION(BlueprintCallable)
    void RegisterParentContainer(UPanelWidget* InParentContainer);
    
    UFUNCTION(BlueprintCallable)
    void RegisterNavpointDataSource(TScriptInterface<IHaloUINavpointsData> InNavpointDataSourceInterface);
    
};

