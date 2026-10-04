#ifndef SND_PLAYER_H
#define SND_PLAYER_H

#include "types.h"
#include "sys/FndList.h"
#include "snd/SndSeBytes4.h"

// 0x28-byte sound-effect player record of the SE system (SndSeSystem_*; group list, setup word at 0x15, heap level).
// Used by src/autoload_2/unk_020ed81c.cpp, unk_020ed8cc.cpp, unk_020ede18.cpp, unk_020ee98c.cpp, unk_020f0fb4.cpp.
struct Player {
    /* 0x00 */ FndList list;
    /* 0x0c */ u32 active;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ Bytes4 unk_15;
    /* 0x1c */ u32 heapLevel;
    /* 0x20 */ u8 unk_20[4];
    /* 0x24 */ u8 unk_24[4];
};

#endif
