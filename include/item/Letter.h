#ifndef ITEM_LETTER_H
#define ITEM_LETTER_H

#include "types.h"

// 0xf4-byte letter (vtable _ZTV6Letter 0x020dd450; C1 0x02065cd4, D1 0x02065cc8, D0 0x02065cb0 in main,
// unk_02065330.cpp). The same bytes are handled through LetterView (recipient/sender 0x18-byte parties at 0x04/0x1c,
// greeting, body, signature, ...) and the Letter_* / LetterParty_* functions.
class Letter {
public:
    Letter();
    virtual ~Letter();

    /* 0x04 */ u8 unk_04[0xec];
    /* 0xf0 */ u16 present;
    /* 0xf2 */ u16 pad_f2;
};

#endif
