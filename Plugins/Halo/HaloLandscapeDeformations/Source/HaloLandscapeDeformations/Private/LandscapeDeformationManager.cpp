#include "LandscapeDeformationManager.h"

ALandscapeDeformationManager::ALandscapeDeformationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseDeformablePlanes = false;
    this->SMDefaultTileLow = NULL;
    this->SMDefaultTileHigh = NULL;
    this->DeformableMaterial = NULL;
    this->LandscapeRVT_PBR = NULL;
    this->LandscapeRVT_H = NULL;
    this->bResetEditorDeformationMaskAfterPlay = true;
    this->BrushesTrackedDelta = 0.20f;
    this->bIsInDisabledState = false;
    this->bGenerateMeltingMask = false;
    this->bEnableSceneCaptureBrushes = true;
    this->MaxDeformationHeight = 30.00f;
}

void ALandscapeDeformationManager::ShiftMaskFast(UTextureRenderTarget2D* RTMask, int32 TileSizePixels, FLinearColor ClearColor, int32 DiffX, int32 DiffY) {
}

void ALandscapeDeformationManager::RemoveLandscapeDeformationBrush_Implementation(ULandscapeDeformationBrushComponent* DeformationBrushToTrack) {
}

void ALandscapeDeformationManager::PrepareSCBrushes(int32 StartIndex, int32 Limit, const TArray<ULandscapeDeformationBrushComponent*>& SCBrushes, int32& NextIndex, TArray<ULandscapeDeformationBrushComponent*>& SCBrushesToPrepare) {
}

void ALandscapeDeformationManager::OnUseRVTForOutsideDeformationsChanged_Implementation(bool UseRVTForOutsideDeformations) {
}

void ALandscapeDeformationManager::OnUseMeltingMaskChanged_Implementation(bool UseMeltingMask) {
}

void ALandscapeDeformationManager::OnUseDeformationMaskChanged_Implementation(bool UseDeformationMask) {
}

void ALandscapeDeformationManager::OnTrackedBrushesPerFrameChanged_Implementation(int32 MaxTrackedBrushesPerFrame) {
}

void ALandscapeDeformationManager::OnShowDeformationChanged_Implementation(bool ShowFlag) {
}

void ALandscapeDeformationManager::OnShowDebugOriginsChanged_Implementation(bool ShowFlag) {
}

void ALandscapeDeformationManager::OnShowDebugBrushVolumesChanged_Implementation(bool ShowFlag) {
}

void ALandscapeDeformationManager::OnSceneCaptureUseNaniteFallbackChanged_Implementation(bool SceneCaptureUseNaniteFallback) {
}

void ALandscapeDeformationManager::OnSceneCaptureNaniteFallbackProxyLifeSpanChanged_Implementation(float SceneCaptureNaniteFallbackProxyLifeSpan) {
}

void ALandscapeDeformationManager::OnQualityChanged_Implementation(int32 NewQuality) {
}

void ALandscapeDeformationManager::OnPreDeformBrushesPerFrameChanged_Implementation(int32 MaxPreDeformBrushesPerFrame) {
}

void ALandscapeDeformationManager::OnMeltingMaskTileResolutionChanged_Implementation(int32 MeltingMaskTileResolution) {
}

void ALandscapeDeformationManager::OnMeltingFadeRadiusChanged_Implementation(float FadeRadius) {
}

void ALandscapeDeformationManager::OnMaterialBrushesPerFrameChanged_Implementation(int32 MaxMaterialBrushesPerFrame) {
}

void ALandscapeDeformationManager::OnLandscapeDeformationEnableInSplitScreenChanged_Implementation(bool IsEnabled) {
}

void ALandscapeDeformationManager::OnLandscapeDeformationCVarChanged_Implementation(bool IsEnabled) {
}

void ALandscapeDeformationManager::OnDeformationSceneCaptureRefreshTimeChanged_Implementation(float SceneCaptureRefreshTime) {
}

void ALandscapeDeformationManager::OnDeformationSceneCaptureActiveTimeChanged_Implementation(float SceneCaptureActiveTime) {
}

void ALandscapeDeformationManager::OnDeformationRangeChanged_Implementation(float DeformationRange) {
}

void ALandscapeDeformationManager::OnDeformationNormalStrenghMultiplierChanged_Implementation(float NormalStrenghMultiplier) {
}

void ALandscapeDeformationManager::OnDeformationNormalShiftStepMultiplierChanged_Implementation(float NormalShiftStepMultiplier) {
}

void ALandscapeDeformationManager::OnDeformationMaskTileResolutionChanged_Implementation(int32 DeformationMaskTileResolution) {
}

void ALandscapeDeformationManager::OnDeformationFadeRadiusChanged_Implementation(float FadeRadius) {
}

void ALandscapeDeformationManager::OnBackgroundBrushesPerFrameChanged_Implementation(int32 MaxBackgroundBrushesPerFrame) {
}

bool ALandscapeDeformationManager::IsInTheEditorWorld() const {
    return false;
}

bool ALandscapeDeformationManager::IsInSIE() const {
    return false;
}

bool ALandscapeDeformationManager::GetEditorSceneCaptureWasRequested() const {
    return false;
}

TSet<ULandscapeDeformationBrushComponent*> ALandscapeDeformationManager::GetEditorRegisteredBrushes() const {
    return TSet<ULandscapeDeformationBrushComponent*>();
}

void ALandscapeDeformationManager::GetEditorCameraAttributes(FVector& position, FRotator& Rotation, bool& Success) const {
}

bool ALandscapeDeformationManager::GetEditorBrushComponentsHasChanged() const {
    return false;
}

void ALandscapeDeformationManager::FlushDeferredDrawingFast(UTextureRenderTarget2D* RTMask, TArray<FDeferredDeformationDraw>& DeferredDrawings) {
}

void ALandscapeDeformationManager::DrawTrackedBrushes(int32 StartIndex, int32 Limit, const TArray<ULandscapeDeformationBrushComponent*>& Brushes, int32& NextIndex, int32& BrushesWereDrawnThisFrame, TArray<ULandscapeDeformationBrushComponent*>& BrushesOutsideDeformableArea) {
}

bool ALandscapeDeformationManager::DrawToTilesGridFast(ULandscapeDeformationBrushComponent* DeformationBrush, bool& bBrushOutsideDeformableArea) {
    return false;
}

void ALandscapeDeformationManager::DrawDeformation_Implementation(ULandscapeDeformationBrushComponent* DeformationBrush) {
}

void ALandscapeDeformationManager::DrawDebugBrushes(const TArray<ULandscapeDeformationBrushComponent*>& Brushes, bool bSingleColor, FLinearColor BoxColor, float Thickness) {
}

void ALandscapeDeformationManager::ClearEditorSceneCaptureWasRequestedBP() const {
}

void ALandscapeDeformationManager::ClearEditorBrushComponentsHasChangedBP() const {
}

void ALandscapeDeformationManager::CheckBrushesOutsideDeformableArea(int32 StartIndex, int32 Limit, bool bPreDeformBrushes, const TArray<ULandscapeDeformationBrushComponent*>& BackgroundBrushes, int32& NextIndex, TArray<ULandscapeDeformationBrushComponent*>& BrushesInDeformableArea, bool& bReachedTheEnd) {
}


void ALandscapeDeformationManager::AddLandscapeDeformationBrush_Implementation(ULandscapeDeformationBrushComponent* DeformationBrushToTrack) {
}


