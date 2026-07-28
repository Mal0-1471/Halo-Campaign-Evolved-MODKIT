#pragma once
#include "CoreMinimal.h"
#include "Subsystems/EngineSubsystem.h"
#include "RenderImgUIManagedSignatureDelegate.h"
#include "HaloImGuiSubsystem.generated.h"

UCLASS(Blueprintable)
class HALOIMGUIUTILS_API UHaloImGuiSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRenderImgUIManagedSignature OnManagedRenderImGui;
    
    UHaloImGuiSubsystem();

};

