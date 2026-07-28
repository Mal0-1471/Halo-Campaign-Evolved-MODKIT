#include "LandscapeDeformationBrushComponent.h"

ULandscapeDeformationBrushComponent::ULandscapeDeformationBrushComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DeformationBrushUsage = DeformationBrushUsage_DeformationOnly;
    this->DeformationBrushType = DeformationBrushDrawType_DefaultDynamicBrush;
    this->bEnableStaticPreDeformationLOD = true;
    this->bDrawDynamicBrushEachFrame = false;
    this->bCaptureBrushTextureFromOwner = false;
    this->bRotateBrushTowardTheVelocity = false;
    this->bIsCylinderBrush = false;
    this->CylinderBrushTilingFactor = 3.00f;
    this->CylinderBrushUseBrushPathAsAngle = false;
    this->CylinderBrushUVOffset = 0.00f;
    this->CylinderBrushPath = 0.00f;
    this->bGenerateRenderTarget = true;
    this->GeneratedRenderTargetResolution = 64;
    this->SceneCaptureDepthRenderTarget = NULL;
    this->BrushOutputRenderTarget = NULL;
    this->SceneCaptureBlurTexelStep = 0.02f;
    this->SceneCaptureSetBrushAlphaToOne = true;
    this->CapturesPerSecond = 0;
    this->bUseFallbackNaniteMeshesInSceneCapture = true;
    this->LastTimeWasCaptured = -1.00f;
    this->DepthToBrushMat = NULL;
    this->DepthToBrushMatAlpha = NULL;
    this->DeformationBrushDrawMethod = DeformationBrushDrawMethod_Texture;
    this->BrushTexture = NULL;
    this->BrushTextureBlendMode = BLEND_TranslucentGreyTransmittance;
    this->BrushMaterial = NULL;
    this->bUseMaterialParameters = false;
    this->BrushMaterialDynamic = NULL;
    this->bFirstFrameCheck = true;
    this->bNewCaptureIsRequired = false;
    this->bContinueCapturing = false;
    this->LastTimeContinueFlagWasSet = 0.00f;
    this->bCapturedBrushIsReady = false;
    this->bEditorCaptureBrushRequestRecapture = true;
    this->SMPlanePredeformationLOD = NULL;
    this->SceneCaptureNaniteFallbackProxy = NULL;
}

void ULandscapeDeformationBrushComponent::SetStampFlag(bool Flag) {
}

FBoxSphereBounds ULandscapeDeformationBrushComponent::GetWorldScaledUnrotatedBounds() const {
    return FBoxSphereBounds{};
}

bool ULandscapeDeformationBrushComponent::GetStampFlag() {
    return false;
}

void ULandscapeDeformationBrushComponent::Draw() {
}


