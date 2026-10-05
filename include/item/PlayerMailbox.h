#ifndef ITEM_PLAYERMAILBOX_H
#define ITEM_PLAYERMAILBOX_H

#include "types.h"
#include "item/Letter.h"

// 0x98c-byte player mailbox: 10 letters plus the last Wi-Fi mail id. Defined in main, unk_02096c10.cpp
// (0x02097078..0x02097110).
class PlayerMailbox {
public:
    PlayerMailbox();                        // C1 0x020970e8
    ~PlayerMailbox();                       // D1 0x020970cc
    Letter *getLetter(s32 i);               // 0x020970b8
    void setLastWifiMailId(u32 v);          // 0x02097078
    u32 getLastWifiMailId();                // 0x02097084
    void clear();                           // 0x02097090

    /* 0x000 */ Letter letters[10];
    /* 0x988 */ u16 lastWifiMailId;
    /* 0x98a */ u16 pad_98a;
};

#endif
