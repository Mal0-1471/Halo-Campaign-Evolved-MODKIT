#include "HaloUINavpointsManager.h"

UHaloUINavpointsManager::UHaloUINavpointsManager() {
    this->AgeInTime = 1.00f;
    this->AgeOutTime = 1.00f;
    this->ParentContainer = NULL;
    this->CachedPlayerController = NULL;
}

void UHaloUINavpointsManager::UnregisterNavpointDataSource(TScriptInterface<IHaloUINavpointsData> InNavpointDataSourceInterface) {
}

void UHaloUINavpointsManager::UnregisterAllNavpointDataSources() {
}

void UHaloUINavpointsManager::RegisterPlayerController(APlayerController* InPlayerController) {
}

void UHaloUINavpointsManager::RegisterPinContainer(FName PinContainerName, UWidget* PinContainer, float Rounding) {
}

void UHaloUINavpointsManager::RegisterParentContainer(UPanelWidget* InParentContainer) {
}

void UHaloUINavpointsManager::RegisterNavpointDataSource(TScriptInterface<IHaloUINavpointsData> InNavpointDataSourceInterface) {
}


