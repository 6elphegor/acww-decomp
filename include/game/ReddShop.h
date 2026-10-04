#ifndef GAME_REDDSHOP_H
#define GAME_REDDSHOP_H

#include "types.h"
#include "item/ItemId.h"
#include "game/ReddPassword.h"

// 0x18-byte Crazy Redd shop state: three stock items, the password state and a table. Defined in main,
// unk_020ac750.cpp (0x020ad040..0x020ad444).
class ReddShop {
public:
    /* 0x00 */ ItemId arr[3];
    /* 0x08 */ ReddPassword s;
    /* 0x10 */ u16 tbl[3];

    ReddShop();                             // C1 0x020ad414
    ~ReddShop();                            // D1 0x020ad3f0
    void restock();                         // 0x020ad040
    ReddPassword *getPassword();            // 0x020ad3bc
    void clearStock();                      // 0x020ad3c8
    void reset();                           // 0x020ad3d8
};

#endif
