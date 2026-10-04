#ifndef NET_NASAUTHPARAMS_H
#define NET_NASAUTHPARAMS_H

#include "types.h"
#include "net/DwcHttp.h"

// NasAuth_Start parameters (0x2c bytes, copied to NasAuthWork::config): in-game name sent as "ingamesn", the
// "gsbrcd" text and the allocator (DwcLogin_StartNasAuth / DwcLogin_PollNasAuth in src/ov065/unk_ov065_02270e34.cpp,
// NetCheck_ThreadMain in src/ov065/unk_ov065_0226ec94.cpp). Also a 64-bit hi/lo pair (src/ov065/unk_ov065_0226fc18.cpp).

struct NasAuthParams {
    /* 0x00 */ u8 inGameName[0x16]; // u16 text
    /* 0x16 */ char gsbrcd[14];
    /* 0x24 */ DwcAllocFunc allocFunc;
    /* 0x28 */ DwcFreeFunc freeFunc;
};

struct Unk_ov065_0227112c_Pair {
    /* 0x0 */ u32 hi;
    /* 0x4 */ u32 lo;
};

#endif
