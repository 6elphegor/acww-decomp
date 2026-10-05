#ifndef GAME_SHOPACKCOUNTER_H
#define GAME_SHOPACKCOUNTER_H

#include "types.h"

// 2-byte acknowledgement counter (needed / received) of the shop's multiplayer handshake. Constructor and destructor in
// main, unk_020ac750.cpp (both call ShopAckCounter_Clear).
struct ShopAckCounter {
    ShopAckCounter();
    ~ShopAckCounter();
    /* 0x0 */ u8 needed;
    /* 0x1 */ u8 received;
};

#endif
