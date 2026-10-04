#ifndef SYS_UNK_02000FC0_CFG_H
#define SYS_UNK_02000FC0_CFG_H

#include "types.h"

// Crash-screen view of the owner of the current task node (profile at 0xc).
// Defined in src/main/unk_02000c2c.cpp (crash screen); also used by src/main/unk_0200137c.cpp.

struct Unk_02000fc0_Cfg {
    /* 0x0 */ u8 pad_00[0x0c];
    /* 0xc */ u16 profile;
};

#endif
