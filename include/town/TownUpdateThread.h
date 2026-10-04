#ifndef TOWN_TOWNUPDATETHREAD_H
#define TOWN_TOWNUPDATETHREAD_H

#include "types.h"
#include "gfx/VecFx32.h"

// Town update thread context (0x10ec bytes, allocated by TownUpdateThread_Create): the OS thread (0..0xc0), the caller's
// thread / heap, the Town_AdvanceDays arguments, the 0x1000-byte thread stack between the two guard words and the
// done / started flags; and the gTownUpdater global (TownUpdater) that points to it (src/main/unk_02041868.cpp,
// unk_02041e00.cpp).

struct TownUpdateThread {
    /* 0x0000 */ u8 pad00[0x64];
    /* 0x0064 */ s32 threadState;
    /* 0x0068 */ u8 pad68[0xc0 - 0x68];
    /* 0x00c0 */ u32 callerThread;
    /* 0x00c4 */ u32 heap;
    /* 0x00c8 */ u8 lastDate[8];
    /* 0x00d0 */ u8 curDate[8];
    /* 0x00d8 */ u32 elapsedDays;
    /* 0x00dc */ u8 prevDayRain;
    /* 0x00dd */ u8 paddd[3];
    /* 0x00e0 */ u32 stackGuardLow;
    /* 0x00e4 */ u8 pade4[0x10e4 - 0xe4];
    /* 0x10e4 */ u32 stackGuardHigh;
    /* 0x10e8 */ u8 hasArgs;
    /* 0x10e9 */ u8 done;
    /* 0x10ea */ u8 started;
};

// Parameters of the next flower petal effect (FlowerFx_SetParams), read by the particle init callbacks
// FlowerFx_InitByColor / FlowerFx_InitBySpecies (unk_02041e00.cpp).
struct FlowerFxParams {
    /* 0x00 */ s32 mode;      // Flower_SpawnPetalFx mode: 1 = one effect only, 2 = petals turned by angle
    /* 0x04 */ u8 species;
    /* 0x05 */ u8 color;
    /* 0x06 */ u8 unk_06;
    /* 0x08 */ VecFx32 pos;   // unit centre
    /* 0x14 */ s16 angle;
};

// gTownUpdater (0x24 bytes, defined in unk_02041e00.cpp; data_021c3ea8 is its offset 4).
struct TownUpdater {
    /* 0x00 */ u16 seashellTime;   // {minute, hour} (Clock_GetMinuteHour)
    /* 0x02 */ u8 pad_02[2];
    /* 0x04 */ FlowerFxParams flowerFx;
    /* 0x1c */ u8 beesReleased;    // Town_SetBeesReleased / Town_ClearBeesReleased / Town_CanReleaseBees
    /* 0x1d */ u8 pad_1d[3];
    /* 0x20 */ TownUpdateThread *updateThread;
    ~TownUpdater() {}
};

#endif
