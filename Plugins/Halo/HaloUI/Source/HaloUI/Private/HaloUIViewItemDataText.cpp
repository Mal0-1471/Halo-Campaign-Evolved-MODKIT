#include "HaloUIViewItemDataText.h"

UHaloUIViewItemDataText::UHaloUIViewItemDataText() {
}

void UHaloUIViewItemDataText::SetValue(const FText& NewValue) {
}

void UHaloUIViewItemDataText::HaloUICastToViewItemDataText(UObject* SourceItemData, const UObject* ParentWidget, EItemDataCastResult& CastResult, UHaloUIViewItemDataText*& AsHaloUIViewItemDataText) {
}

FText UHaloUIViewItemDataText::GetValue() const {
    return FText::GetEmpty();
}

void UHaloUIViewItemDataText::BindSetter(UHaloUIViewItemDataText::FViewSetterText NewSetter) {
}

void UHaloUIViewItemDataText::BindGetter(UHaloUIViewItemDataText::FViewGetterText NewGetter) {
}


