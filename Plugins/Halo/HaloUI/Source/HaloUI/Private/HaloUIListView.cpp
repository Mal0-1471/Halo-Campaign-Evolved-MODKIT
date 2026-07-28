#include "HaloUIListView.h"
#include "Templates/SubclassOf.h"

void UHaloUIListView::SetScrollBarStyle(TSubclassOf<UHaloUIScrollBarStyle> NewStyle) {
}

void UHaloUIListView::SetInitialFocus(bool bResetSelection) {
}

void UHaloUIListView::SetEntryWidgetClass(TSubclassOf<UUserWidget> NewWidgetClass) {
}

void UHaloUIListView::SetEntryWidgetButtonStyle(TSubclassOf<UCommonButtonStyle> Style) {
}

void UHaloUIListView::SelectItemForDirection(EUINavigation Direction) {
}

UObject* UHaloUIListView::SelectInitialChild(bool bResetSelection) {
    return NULL;
}

void UHaloUIListView::SelectFirstSelectableItem() {
}

void UHaloUIListView::RefreshSelection() {
}

float UHaloUIListView::GetScrollOffsetAmount() const {
    return 0.0f;
}

void UHaloUIListView::AddFilteredItem(int32 UserIndex, UHaloUIViewItemData* Item) {
}


