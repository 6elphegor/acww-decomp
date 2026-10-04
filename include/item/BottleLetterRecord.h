#ifndef ITEM_BOTTLELETTERRECORD_H
#define ITEM_BOTTLELETTERRECORD_H

#include "types.h"
#include "item/Letter.h"

// Message-in-a-bottle letter plus the used-message bits. Defined in main, unk_02096c10.cpp (0x02096e78..0x02096f44;
// BottleLetterRecord_Construct / _Destruct are plain C wrappers).
class BottleLetterRecord : public Letter {
public:
    s32 pickUnusedMessage();
    void clearUsedMessages();
    BOOL isMessageUsed(s32 i);
    void setMessageUsed(s32 i);
    void clearRecord();

    /* 0xf4 */ u8 unk_f4[5];
};

#endif
