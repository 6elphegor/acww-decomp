#ifndef ITEM_ITEMINFOTABLES_H
#define ITEM_ITEMINFOTABLES_H

#include "types.h"
#include "game/InfoTableSet.h"
#include "sys/RecordFile.h"

// The item info tables (gItemInfo, 0x70 bytes): always.bin / indoor.bin / dma.bin (the InfoTableSet) and the series
// names (series.bin). Defined in src/main/unk_02061478.cpp (ItemInfoTables_Open / _Close, ItemInfo_*).
class ItemInfoTables : public InfoTableSet {
public:
    ItemInfoTables();
    ~ItemInfoTables();

    /* 0x54 */ RecordFile series;
};

#endif
