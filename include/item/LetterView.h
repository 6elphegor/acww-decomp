#ifndef ITEM_LETTERVIEW_H
#define ITEM_LETTERVIEW_H

#include "types.h"

// 0xf4-byte field view of a Letter (recipient/sender party records, greeting, body, signature, paper, present).
// Methods defined in main, unk_02065330.cpp (0x02065518..0x020655d6), with the LetterParty_* functions.
// 0x18-byte recipient/sender party record of a letter (LetterParty_* in unk_02065330.cpp; unk_16 = party type).
struct LetterParty {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u8 unk_04[0x12];
    /* 0x16 */ u8 partyType;
    /* 0x17 */ u8 pad_17;
};

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

    /* 0x00 */ u32 vtable;
    /* 0x04 */ LetterParty recipient;
    /* 0x1c */ LetterParty sender;
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
