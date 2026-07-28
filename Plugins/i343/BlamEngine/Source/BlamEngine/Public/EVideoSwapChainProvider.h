#pragma once
#include "CoreMinimal.h"
#include "EVideoSwapChainProvider.generated.h"

UENUM(BlueprintType)
enum class EVideoSwapChainProvider : uint8 {
    None,
    FStreamlineD3D12DXGISwapchainProvider,
    FSR4SwapchainProvider,
    FXeFGDXGISwapChainProvider,
};

