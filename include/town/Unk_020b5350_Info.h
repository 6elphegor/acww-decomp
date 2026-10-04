#ifndef TOWN_UNK_020B5350_INFO_H
#define TOWN_UNK_020B5350_INFO_H

#include "types.h"

// Acre layout info (acre id table and its size), used by src/main/unk_0204cc1c.cpp and unk_0204c50c.cpp.
struct Unk_020b5350_Info {
    /* 0x0 */ u32 *acreIds;
    /* 0x4 */ u8 width;
    /* 0x5 */ u8 height;
    /* 0x6 */ u16 moduleParam;
};

#endif
