#include "HaloUIViewItemData.h"

UHaloUIViewItemData::UHaloUIViewItemData() {
    this->UserDataInt = 0;
    this->EntryDescriptionImage = NULL;
    this->bIsSelectableOrNavigable = true;
    this->EntryWidgetClass = NULL;
    this->EntryWidgetButtonStyle = NULL;
}

void UHaloUIViewItemData::ReportItemDataCastFailure(const UObject* ItemData, const UClass* RequiredClass, const UObject* ParentWidget) {
}

bool UHaloUIViewItemData::PassesFilter(int32 UserIndex, const UObject* WorldContextObject) const {
    return false;
}

void UHaloUIViewItemData::HaloUICastToViewItemData(UObject* SourceItemData, const UObject* ParentWidget, EItemDataCastResult& CastResult, UHaloUIViewItemData*& AsHaloUIViewItemData) {
}

FString UHaloUIViewItemData::GetEditorArrayItemName() const {
    return TEXT("");
}

void UHaloUIViewItemData::BindClickedDelegate(UHaloUIViewItemData::FViewItemClicked InDelegate) {
}


