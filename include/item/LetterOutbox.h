#ifndef ITEM_LETTEROUTBOX_H
#define ITEM_LETTEROUTBOX_H

#include "types.h"
#include "item/Letter.h"

// 0x990-byte outgoing-letter box: 10 letters, the last delivery time and flags. Defined in main, unk_02096c10.cpp
// (0x02096fa0..0x02097078).
class LetterOutbox {
public:
    LetterOutbox();                         // C1 0x02097050
    ~LetterOutbox();                        // D1 0x02097034
    Letter *getLetter(s32 i);               // 0x02097020
    void clear();                           // 0x02096fd4
    BOOL testFlag(u32 mask);                // 0x02096fa0
    void setFlag(u32 mask);                 // 0x02096fb8
    u8 *getLastDeliveryTime();              // 0x02096fc8

    /* 0x000 */ Letter unk_00[10];
    /* 0x988 */ u8 lastDeliveryDay;
    /* 0x989 */ u8 lastDeliveryMonth;
    /* 0x98a */ u8 lastDeliveryYear;
    /* 0x98b */ u8 lastDeliveryHour;
    /* 0x98c */ u16 flags;
    /* 0x98e */ u16 pad_98e;
};

#endif
