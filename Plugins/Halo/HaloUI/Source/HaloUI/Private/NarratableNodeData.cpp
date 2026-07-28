#include "NarratableNodeData.h"

FNarratableNodeData::FNarratableNodeData() {
    this->bIsNarratableNode = false;
    this->bNarratesOnFocus = false;
    this->NarrationReadOutMode = EHaloUINarrationReadOutMode::Authored;
    this->NarrationReadOutPriority = EHaloUINarrationReadOutPriority::Maximum;
    this->SecondsToBlockReannouncement = 0.00f;
}

