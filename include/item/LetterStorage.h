#ifndef ITEM_LETTERSTORAGE_H
#define ITEM_LETTERSTORAGE_H

#include "types.h"
#include "item/Letter.h"

// Saved-letter storage: 75 letters. Defined in main, unk_02096c10.cpp (clear 0x02096f68, getPage 0x02096f88).
class LetterStorage {
public:
    void clear();
    Letter *getPage(s32 i);

    /* 0x000 */ Letter letters[75];
};

#endif
