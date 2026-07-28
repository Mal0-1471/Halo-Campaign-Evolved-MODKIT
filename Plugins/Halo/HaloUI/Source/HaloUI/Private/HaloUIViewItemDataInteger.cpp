#include "HaloUIViewItemDataInteger.h"

UHaloUIViewItemDataInteger::UHaloUIViewItemDataInteger() {
    this->SubButtonStyle = NULL;
    this->MinValue = -2147483648;
    this->MaxValue = 2147483647;
}

void UHaloUIViewItemDataInteger::SetValue(int32 NewValue) {
}

void UHaloUIViewItemDataInteger::SetMin(int32 NewValue) {
}

void UHaloUIViewItemDataInteger::SetMax(int32 NewValue) {
}

void UHaloUIViewItemDataInteger::HaloUICastToViewItemDataInteger(UObject* SourceItemData, const UObject* ParentWidget, EItemDataCastResult& CastResult, UHaloUIViewItemDataInteger*& AsHaloUIViewItemDataInteger) {
}

int32 UHaloUIViewItemDataInteger::GetValue() const {
    return 0;
}

int32 UHaloUIViewItemDataInteger::GetMin() const {
    return 0;
}

int32 UHaloUIViewItemDataInteger::GetMax() const {
    return 0;
}

void UHaloUIViewItemDataInteger::BindSetter(UHaloUIViewItemDataInteger::FViewSetterInteger NewSetter) {
}

void UHaloUIViewItemDataInteger::BindGetter(UHaloUIViewItemDataInteger::FViewGetterInteger NewGetter) {
}


