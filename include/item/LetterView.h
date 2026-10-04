#ifndef ITEM_LETTERVIEW_H
#define ITEM_LETTERVIEW_H

#include "types.h"

// 0xf4-byte field view of a Letter (recipient/sender party records, greeting, body, signature, paper, present).
// Methods defined in main, unk_02065330.cpp (0x02065518..0x020655d6). That TU keeps its own copy: it types the two
// 0x18-byte party records as its local polymorphic "Letter" (see item/Letter.h), which is not the 0xf4-byte Letter.
class LetterView {
public:
    void loadDefaultGreeting();             // 0x02065518
    BOOL isToFutureSelf();                  // 0x02065554
    void setState(u32 v);                   // 0x02065564
    u8 getState();                          // 0x02065578
    u32 setPresent(u16 v, u32 w);           // 0x02065588
    void setPresentFlags(u32 v);            // 0x020655ac
    u8 getPresentFlags();                   // 0x020655c0
    u16 getPresent();                       // 0x020655d0

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u8 recipient[0x18];
    /* 0x1c */ u8 sender[0x18];
    /* 0x34 */ u8 greeting[0x18];
    /* 0x4c */ u8 body[0x80];
    /* 0xcc */ u8 signature[0x20];
    /* 0xec */ u8 namePos;
    /* 0xed */ u8 paper;
    /* 0xee */ u8 status;
    /* 0xef */ u8 kind;
    /* 0xf0 */ u16 present;
    /* 0xf2 */ u16 pad_f2;
};

#endif
