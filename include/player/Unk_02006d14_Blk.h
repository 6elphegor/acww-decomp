#ifndef PLAYER_UNK_02006D14_BLK_H
#define PLAYER_UNK_02006D14_BLK_H

#include "types.h"

// 0x30-byte matrix block (e.g. Unk_02006d14::itemHandMtx).
// Used in src/main/unk_02004558.cpp (PlayerActor unit), src/main/unk_02094810.cpp and src/main/unk_020943dc.cpp.

struct Unk_02006d14_Blk {
    /* 0x00 */ u32 w[12];
};

#endif
