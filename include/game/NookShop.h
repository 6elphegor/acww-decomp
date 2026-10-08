#ifndef GAME_NOOKSHOP_H
#define GAME_NOOKSHOP_H

#include "types.h"
#include "item/ItemId.h"
#include "game/ShopDate.h"
#include "sys/ClockDate.h"

// Nook's shop state (SaveData +0x15db4; constructor C1 0x020aec1c builds the stock slots, then NookShop_Clear): sales
// total, 0x25 ItemId stock slots with their sold bits, the stock date, the point-special date, the scheduled
// renovation and a packed bitfield at 0x5a. Defined in main, unk_020ac750.cpp.
struct Bits5a {
    u16 saleHour : 5;      // sale from this hour to 23:00 (0: no sale today)
    u16 paintCounter : 4;  // the next paint colour (NookShop_StockPaint)
    u16 level : 2;         // 0..3: Nook's Cranny .. Nookington's
    u16 unk_0b : 5;
};

// The renovation (NookShop_GetRenovation): the reopening day and whether one is scheduled
struct NookShopRenovation {
    /* 0x0 */ ShopDate date;
    /* 0x3 */ u8 scheduled;
};

struct NookShop {
    /* 0x00 */ u32 sales;
    /* 0x04 */ ItemId e[0x25];
    /* 0x4e */ ShopDate stockDate;         // the day the stock was made (NookShop_SetStockDate)
    /* 0x51 */ u8 stockStale;              // 1: restock at the next update
    /* 0x52 */ ClockDate pointSpecialDate; // the point-special day (SaveData flag 5)
    /* 0x56 */ NookShopRenovation renovation;
    /* 0x5a */ Bits5a packedState;
    /* 0x5c */ u8 sold[5];                 // a bit per stock slot (StockList_*)
    NookShop();
};

#endif
