#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "DeferredDeformationDraw.h"
#include "LandscapeDeformationManager.generated.h"

class ULandscapeDeformationBrushComponent;
class UMaterialInterface;
class URuntimeVirtualTexture;
class UStaticMesh;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ALandscapeDeformationManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDeformablePlanes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SMDefaultTileLow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* SMDefaultTileHigh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> SMDefaultTileLowRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> SMDefaultTileHighRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DeformableMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeVirtualTexture* LandscapeRVT_PBR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeVirtualTexture* LandscapeRVT_H;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TEnumAsByte<EPhysicalSurface>> DeformableSurfaceTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetEditorDeformationMaskAfterPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeferredDeformationDraw> DeferredDeformationDrawsInternal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDeferredDeformationDraw> DeferredMeltingDrawsInternal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrushesTrackedDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInDisabledState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateMeltingMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSceneCaptureBrushes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDeformationHeight;
    
    ALandscapeDeformationManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShiftMaskFast(UTextureRenderTarget2D* RTMask, int32 TileSizePixels, FLinearColor ClearColor, int32 DiffX, int32 DiffY);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveLandscapeDeformationBrush(ULandscapeDeformationBrushComponent* DeformationBrushToTrack);
    
    UFUNCTION(BlueprintCallable)
    void PrepareSCBrushes(int32 StartIndex, int32 Limit, const TArray<ULandscapeDeformationBrushComponent*>& SCBrushes, int32& NextIndex, TArray<ULandscapeDeformationBrushComponent*>& SCBrushesToPrepare);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUseRVTForOutsideDeformationsChanged(bool UseRVTForOutsideDeformations);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUseMeltingMaskChanged(bool UseMeltingMask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUseDeformationMaskChanged(bool UseDeformationMask);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTrackedBrushesPerFrameChanged(int32 MaxTrackedBrushesPerFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShowDeformationChanged(bool ShowFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShowDebugOriginsChanged(bool ShowFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShowDebugBrushVolumesChanged(bool ShowFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSceneCaptureUseNaniteFallbackChanged(bool SceneCaptureUseNaniteFallback);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSceneCaptureNaniteFallbackProxyLifeSpanChanged(float SceneCaptureNaniteFallbackProxyLifeSpan);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnQualityChanged(int32 NewQuality);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPreDeformBrushesPerFrameChanged(int32 MaxPreDeformBrushesPerFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMeltingMaskTileResolutionChanged(int32 MeltingMaskTileResolution);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMeltingFadeRadiusChanged(float FadeRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMaterialBrushesPerFrameChanged(int32 MaxMaterialBrushesPerFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLandscapeDeformationEnableInSplitScreenChanged(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLandscapeDeformationCVarChanged(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeformationSceneCaptureRefreshTimeChanged(float SceneCaptureRefreshTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeformationSceneCaptureActiveTimeChanged(float SceneCaptureActiveTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeformationRangeChanged(float DeformationRange);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeformationNormalStrenghMultiplierChanged(float NormalStrenghMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeformationNormalShiftStepMultiplierChanged(float NormalShiftStepMultiplier);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeformationMaskTileResolutionChanged(int32 DeformationMaskTileResolution);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeformationFadeRadiusChanged(float FadeRadius);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBackgroundBrushesPerFrameChanged(int32 MaxBackgroundBrushesPerFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInTheEditorWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSIE() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEditorSceneCaptureWasRequested() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<ULandscapeDeformationBrushComponent*> GetEditorRegisteredBrushes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEditorCameraAttributes(FVector& position, FRotator& Rotation, bool& Success) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEditorBrushComponentsHasChanged() const;
    
    UFUNCTION(BlueprintCallable)
    void FlushDeferredDrawingFast(UTextureRenderTarget2D* RTMask, UPARAM(Ref) TArray<FDeferredDeformationDraw>& DeferredDrawings);
    
    UFUNCTION(BlueprintCallable)
    void DrawTrackedBrushes(int32 StartIndex, int32 Limit, const TArray<ULandscapeDeformationBrushComponent*>& Brushes, int32& NextIndex, int32& BrushesWereDrawnThisFrame, TArray<ULandscapeDeformationBrushComponent*>& BrushesOutsideDeformableArea);
    
    UFUNCTION(BlueprintCallable)
    bool DrawToTilesGridFast(ULandscapeDeformationBrushComponent* DeformationBrush, bool& bBrushOutsideDeformableArea);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DrawDeformation(ULandscapeDeformationBrushComponent* DeformationBrush);
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugBrushes(const TArray<ULandscapeDeformationBrushComponent*>& Brushes, bool bSingleColor, FLinearColor BoxColor, float Thickness);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClearEditorSceneCaptureWasRequestedBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ClearEditorBrushComponentsHasChangedBP() const;
    
    UFUNCTION(BlueprintCallable)
    void CheckBrushesOutsideDeformableArea(int32 StartIndex, int32 Limit, bool bPreDeformBrushes, const TArray<ULandscapeDeformationBrushComponent*>& BackgroundBrushes, int32& NextIndex, TArray<ULandscapeDeformationBrushComponent*>& BrushesInDeformableArea, bool& bReachedTheEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintEditorTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddLandscapeDeformationBrush(ULandscapeDeformationBrushComponent* DeformationBrushToTrack);
    
};

