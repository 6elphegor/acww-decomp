#ifndef ITEM_LETTER_H
#define ITEM_LETTER_H

#include "types.h"

// 0xf4-byte letter, stored in the save data (mailboxes, the inventory, the outbox, villagers, the letter storage):
// plain data with the DS layout on every host. C1 0x02065cd4, D1 0x02065cc8 in main, unk_02065330.cpp. The same
// bytes are handled through LetterView (recipient/sender 0x18-byte parties at 0x04/0x1c, greeting, body, signature,
// ...) and the Letter_* / LetterParty_* functions.
//
// On the DS the class had a virtual destructor (vtable _ZTV6Letter 0x020dd450) and nothing else virtual; no letter
// is deleted through a pointer or derived from with virtuals, so the vtable pointer is kept here as the data word it
// is in the save image: the constructor writes the DS's value (0x020dd458) and Letter_Clear zeroes it, as on the
// DS. A real vptr would be 8 bytes on 64-bit hosts and move every member.
#define LETTER_DS_VTABLE 0x020dd458u

class Letter {
public:
    Letter();
    ~Letter();

    /* 0x00 */ u32 dsVtable; // LETTER_DS_VTABLE once constructed, 0 once cleared; never dispatched through
    /* 0x04 */ u8 unk_04[0xec];
    /* 0xf0 */ u16 present;
    /* 0xf2 */ u16 pad_f2;
};

static_assert(sizeof(Letter) == 0xf4, "Letter: DS save layout");
static_assert(__builtin_offsetof(Letter, present) == 0xf0, "Letter::present");

#endif
