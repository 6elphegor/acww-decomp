#ifndef ITEM_SHOPACKCOUNTER_H
#define ITEM_SHOPACKCOUNTER_H

// Two-byte acknowledgement counter of the shop purchase sync (ShopAckCounter_*; constructor in
// src/main/unk_020af258.cpp, functions in src/main/unk_020ac750.cpp).
#include "types.h"

struct Counter {
    Counter();
    /* 0x00 */ u8 needed;
    /* 0x01 */ u8 received;
};

#endif
