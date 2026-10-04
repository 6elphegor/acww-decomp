#ifndef TOWN_UNK_020419B4_H
#define TOWN_UNK_020419B4_H

#include "types.h"

// Town update thread context (TownUpdateThread_*) and the gTownUpdater global that points to it
// (src/main/unk_02041868.cpp, unk_02041e00.cpp).

struct Unk_020419b4 {
    /* 0x0000 */ u8 pad00[0x64];
    /* 0x0064 */ s32 threadState;
    /* 0x0068 */ u8 pad68[0xc0 - 0x68];
    /* 0x00c0 */ u32 callerThread;
    /* 0x00c4 */ u32 heap;
    /* 0x00c8 */ u8 unk_c8[8];
    /* 0x00d0 */ u8 unk_d0[8];
    /* 0x00d8 */ u32 unk_d8;
    /* 0x00dc */ u8 unk_dc;
    /* 0x00dd */ u8 paddd[3];
    /* 0x00e0 */ u32 stackGuardLow;
    /* 0x00e4 */ u8 pade4[0x10e4 - 0xe4];
    /* 0x10e4 */ u32 stackGuardHigh;
    /* 0x10e8 */ u8 hasArgs;
    /* 0x10e9 */ u8 done;
    /* 0x10ea */ u8 started;
};

struct Unk_02041ac0_Glob {
    /* 0x00 */ u32 pad[8];
    /* 0x20 */ Unk_020419b4 *updateThread;
};

#endif
