#include "HaloUIHudParallax.h"

UHaloUIHudParallax::UHaloUIHudParallax() {
    this->ParallaxHistoryCount = 8;
    this->LocalPlayerController = NULL;
}

void UHaloUIHudParallax::SetPlayerController(const APlayerController* PlayerController) {
}

void UHaloUIHudParallax::RemoveParallaxByName(FName RowName) {
}

void UHaloUIHudParallax::RemoveParallaxByHandle(FDataTableRowHandle ParallaxParamsRow) {
}

FParallaxResult UHaloUIHudParallax::GetParallaxResultByName(FName RowName) const {
    return FParallaxResult{};
}

FParallaxResult UHaloUIHudParallax::GetParallaxResultByHandle(FDataTableRowHandle ParallaxParamsRow) const {
    return FParallaxResult{};
}

void UHaloUIHudParallax::AddParallax(FDataTableRowHandle ParallaxParamsRow) {
}


