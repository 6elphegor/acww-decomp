#ifndef SND_SNDSEBYTES4_H
#define SND_SNDSEBYTES4_H

// 4-byte sound-effect setup word (kept at 0x15 of the SE player, passed by value to SndSeSystem_Setup). Shared by
// src/autoload_2/unk_020ed81c.cpp, unk_020ed8cc.cpp, unk_020ede18.cpp, unk_020ee98c.cpp, unk_020f0fb4.cpp;
// unk_020edd58.cpp keeps its `u8 b[4]` view (byte-array access gives different code in SndSeSystem_Setup).
#include "types.h"

struct Bytes4 {
    u8 b0;
    u8 b1;
    u8 b2;
    u8 b3;
};

#endif
