#ifndef GFX_UNK_OV003_BLK_H
#define GFX_UNK_OV003_BLK_H

#include "types.h"

// 0x30-byte matrix block (8-byte aligned), BuildingActor::baseMatrix (+0x19c) of the ov003 building actors.
struct Unk_ov003_Blk {
    /* 0x00 */ s64 v[6];
};

#endif
