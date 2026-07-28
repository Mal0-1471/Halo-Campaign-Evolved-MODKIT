#include "HaloUILoadingScreenSubsystem.h"

UHaloUILoadingScreenSubsystem::UHaloUILoadingScreenSubsystem() {
    this->bUseLoadingScreen = true;
    this->bShowNonBlockingLoadScreenAfterBlockingLoad = false;
    this->NonBlockingLoadMinimumDisplayTime = 0.00f;
    this->NonBlockingLoadScreenUWidget = NULL;
}

void UHaloUILoadingScreenSubsystem::ShowNonBlockingLoadScreen() {
}

void UHaloUILoadingScreenSubsystem::SetUseLoadingScreen(const bool bValue) {
}

void UHaloUILoadingScreenSubsystem::SetShowNonBlockingLoadScreenAfterBlockingLoad(const bool bValue) {
}

void UHaloUILoadingScreenSubsystem::SetNonBlockingLoadScreenImageIndex(const int32 Index) {
}

void UHaloUILoadingScreenSubsystem::SetNonBlockingLoadScreenHintText(const FText& Text) {
}

void UHaloUILoadingScreenSubsystem::SetNonBlockingLoadScreenHintSubText(const FText& Text) {
}

void UHaloUILoadingScreenSubsystem::SetNonBlockingLoadMinimumDisplayTime(const float InValue) {
}

void UHaloUILoadingScreenSubsystem::SetNonBlockingLoadImageTexture(const TSoftObjectPtr<UTexture2D>& Texture) {
}

void UHaloUILoadingScreenSubsystem::SetLoadingScreenClass(TSoftClassPtr<UHaloUILoadingScreenBase> InScreen) {
}

void UHaloUILoadingScreenSubsystem::SetDefaultSlateLoadingImagePath(const FName& InImagePath) {
}

void UHaloUILoadingScreenSubsystem::SetDefaultNonBlockingLoadScreenClass(TSoftClassPtr<UUserWidget> InScreen) {
}

void UHaloUILoadingScreenSubsystem::SetCurrentSlateLoadingImagePath(const FName& InImagePath) {
}

void UHaloUILoadingScreenSubsystem::SetCurrentNonBlockingLoadScreenClass(TSoftClassPtr<UUserWidget> InScreen) {
}

void UHaloUILoadingScreenSubsystem::HideNonBlockingLoadScreen() {
}

bool UHaloUILoadingScreenSubsystem::GetUseLoadingScreen() const {
    return false;
}

bool UHaloUILoadingScreenSubsystem::GetShowNonBlockingLoadScreenAfterBlockingLoad() const {
    return false;
}

int32 UHaloUILoadingScreenSubsystem::GetNonBlockingLoadScreenRefCount() const {
    return 0;
}

int32 UHaloUILoadingScreenSubsystem::GetNonBlockingLoadScreenImageIndex() const {
    return 0;
}

FText UHaloUILoadingScreenSubsystem::GetNonBlockingLoadScreenHintText() const {
    return FText::GetEmpty();
}

FText UHaloUILoadingScreenSubsystem::GetNonBlockingLoadScreenHintSubText() const {
    return FText::GetEmpty();
}

float UHaloUILoadingScreenSubsystem::GetNonBlockingLoadMinimumDisplayTime() const {
    return 0.0f;
}

TSoftObjectPtr<UTexture2D> UHaloUILoadingScreenSubsystem::GetNonBlockingLoadImageTexture() const {
    return NULL;
}

TSoftClassPtr<UHaloUILoadingScreenBase> UHaloUILoadingScreenSubsystem::GetLoadingScreenClass() const {
    return NULL;
}

FName UHaloUILoadingScreenSubsystem::GetDefaultSlateLoadingImagePath() const {
    return NAME_None;
}

TSoftClassPtr<UUserWidget> UHaloUILoadingScreenSubsystem::GetDefaultNonBlockingLoadScreenClass() const {
    return NULL;
}

FName UHaloUILoadingScreenSubsystem::GetCurrentSlateLoadingImagePath() const {
    return NAME_None;
}

TSoftClassPtr<UUserWidget> UHaloUILoadingScreenSubsystem::GetCurrentNonBlockingLoadScreenClass() const {
    return NULL;
}


