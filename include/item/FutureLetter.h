#ifndef ITEM_FUTURELETTER_H
#define ITEM_FUTURELETTER_H

#include "types.h"
#include "item/Letter.h"

// 0xf8-byte letter to the player's future self, with its delivery date. Defined in main, unk_02096c10.cpp
// (clearFutureLetter 0x02096e28, getDeliveryDate 0x02096e50; FutureLetter_Construct / _Destruct are plain C wrappers).
class FutureLetter : public Letter {
public:
    void clearFutureLetter();
    u8 *getDeliveryDate();

    /* 0xf4 */ u8 deliveryDay;
    /* 0xf5 */ u8 deliveryMonth;
    /* 0xf6 */ u8 deliveryYear;
    /* 0xf7 */ u8 unk_f7;
};

#endif
