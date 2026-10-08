#ifndef GAME_ABLESHOP_H
#define GAME_ABLESHOP_H

#include "types.h"
#include "item/ItemId.h"
#include "game/ShopDate.h"

// The Able Sisters' stock (SaveData::ableShop, 0x12 bytes): the items, the stock date, the restock flag, the sold
// bits. Defined in main, unk_020ac750.cpp (AbleShop_*).
struct AbleShop {
    /* 0x00 */ ItemId items[6];
    /* 0x0c */ ShopDate stockDate;
    /* 0x0f */ u8 stockStale;  // 1: restock at the next update
    /* 0x10 */ u8 sold[2];     // a bit per item (StockList_*)
};

#endif
