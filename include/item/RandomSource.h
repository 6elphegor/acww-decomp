#ifndef ITEM_RANDOMSOURCE_H
#define ITEM_RANDOMSOURCE_H

// Date/random provider used by the item pickers (vtable 0x020dd354, methods 0x020634dc..; base of
// DateSeededRandomSource). Defined in src/main/unk_0206269c.cpp.
#include "types.h"

class RandomSource {
public:
    RandomSource();
    ~RandomSource();
    virtual u8 getYear();
    virtual u8 getMonth();
    virtual u8 getDay();
    virtual u32 random(u32 n);
};

#endif
