#include "HaloUIViewItemDataDropdown.h"

UHaloUIViewItemDataDropdown::UHaloUIViewItemDataDropdown() {
    this->ListEntryButtonStyle = NULL;
    this->ListBorderStyle = NULL;
}

void UHaloUIViewItemDataDropdown::SetChildren(const TArray<UHaloUIViewItemData*>& NewChildren) {
}

void UHaloUIViewItemDataDropdown::HaloUICastToViewItemDataDropdown(UObject* SourceItemData, const UObject* ParentWidget, EItemDataCastResult& CastResult, UHaloUIViewItemDataDropdown*& AsHaloUIViewItemDataDropdown) {
}

TArray<UHaloUIViewItemData*> UHaloUIViewItemDataDropdown::GetChildren() const {
    return TArray<UHaloUIViewItemData*>();
}

UHaloUIViewItemData* UHaloUIViewItemDataDropdown::GetChild(int32 Index) const {
    return NULL;
}

UHaloUIViewItemData* UHaloUIViewItemDataDropdown::FindChildItem(const FGameplayTag& Tag) const {
    return NULL;
}

int32 UHaloUIViewItemDataDropdown::FindChildIndex(const FGameplayTag& Tag) const {
    return 0;
}


