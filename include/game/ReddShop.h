#ifndef GAME_REDDSHOP_H
#define GAME_REDDSHOP_H

#include "types.h"
#include "item/ItemId.h"
#include "game/ReddPassword.h"

// 0x14-byte Crazy Redd shop state (SaveData::reddShop): three stock items, the password state and their sold bits.
// Defined in main, unk_020ac750.cpp (0x020ad040..0x020ad444).
class ReddShop {
public:
    /* 0x00 */ ItemId arr[3];
    /* 0x08 */ ReddPassword s;
    /* 0x10 */ u8 sold[4];  // a bit per item (StockList_*: one byte for the three; declared 6 before, which made the
                            // record 0x18 bytes, past its 0x14 in the save data)

    ReddShop();                             // C1 0x020ad414
    ~ReddShop();                            // D1 0x020ad3f0
    void restock();                         // 0x020ad040
    ReddPassword *getPassword();            // 0x020ad3bc
    void clearStock();                      // 0x020ad3c8
    void reset();                           // 0x020ad3d8
};

#endif
