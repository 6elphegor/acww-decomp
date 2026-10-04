#ifndef ITEM_RECEIVEDLETTERBLOCK_H
#define ITEM_RECEIVEDLETTERBLOCK_H

#include "types.h"
#include "item/Letter.h"

// 0xfc-byte letter exchange block (a Letter plus the exchange kind) sent between players. The constructor (C1 0x0208f0a0)
// and destructor (D1 0x0208f090) only construct / destroy the Letter and store no vtable of their own, so the Letter is
// a member, not a base. Defined in main, unk_0208eeac.cpp; ov055 sends and receives it.
class ReceivedLetterBlock {
public:
    ReceivedLetterBlock();
    ~ReceivedLetterBlock();

    /* 0x00 */ Letter letter;
    /* 0xf4 */ u8 unk_f4[4];
    /* 0xf8 */ u8 exchangeKind;
    /* 0xf9 */ u8 pad_f9[3];
};

#endif
