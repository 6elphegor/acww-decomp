#ifndef TOWN_TOWNACREINDEX_H
#define TOWN_TOWNACREINDEX_H

#include "types.h"

// Row helper of the town acre grid (calcIndex returns this + i * 6). Defined in src/main/unk_0209bca8.cpp.
class TownAcreIndex {
public:
    u8 *calcIndex(s32 i);
};

#endif
