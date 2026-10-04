#ifndef SYS_UNK_02000FC0_THR_H
#define SYS_UNK_02000FC0_THR_H

#include "types.h"

// Crash-screen view of a thread (id, stack bounds, stack warning offset).
// Defined in src/main/unk_02000c2c.cpp (crash screen); also used by src/main/unk_0200137c.cpp.

struct Unk_02000fc0_Thr {
    /* 0x00 */ u8 pad_00[0x6c];
    /* 0x6c */ u32 id;
    /* 0x70 */ u8 pad_70[0x20];
    /* 0x90 */ u32 stackTop;
    /* 0x94 */ u32 stackBottom;
    /* 0x98 */ u32 stackWarningOffset;
};

#endif
