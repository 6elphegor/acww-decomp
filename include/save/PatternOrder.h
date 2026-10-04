#ifndef SAVE_PATTERNORDER_H
#define SAVE_PATTERNORDER_H

#include "types.h"

// Display order of a player's 8 patterns (PlayerPatterns::getPatternOrder). Methods defined in
// src/main/unk_02070560.cpp.

class PatternOrder {
public:
    PatternOrder();
    ~PatternOrder();
    /* 0x0 */ u8 unk_00[8];
    u32 getSlot(u32 i);
    void swap(u32 a, u32 b);
    void reset();
};

#endif
