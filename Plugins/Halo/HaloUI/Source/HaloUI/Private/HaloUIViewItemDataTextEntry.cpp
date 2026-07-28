#include "HaloUIViewItemDataTextEntry.h"
#include "Templates/SubclassOf.h"

UHaloUIViewItemDataTextEntry::UHaloUIViewItemDataTextEntry() {
    this->TextEntryStyle = NULL;
}

void UHaloUIViewItemDataTextEntry::SetTextEntryStyle(const TSubclassOf<UHaloUITextEntryStyle>& NewTextEntryStyle) {
}

void UHaloUIViewItemDataTextEntry::HaloUICastToViewItemDataTextEntry(UObject* SourceItemData, const UObject* ParentWidget, EItemDataCastResult& CastResult, UHaloUIViewItemDataTextEntry*& AsHaloUIViewItemDataTextEntry) {
}

TSubclassOf<UHaloUITextEntryStyle> UHaloUIViewItemDataTextEntry::GetTextEntryStyle() const {
    return NULL;
}


