#ifndef NET_NASAUTHPARAMS_H
#define NET_NASAUTHPARAMS_H

#include "types.h"
#include "net/DwcHttp.h"

// NasAuth_Start parameters (0x2c bytes, copied to NasAuthWork::config): in-game name sent as "ingamesn", the
// "gsbrcd" text and the allocator (DwcLogin_StartNasAuth / DwcLogin_PollNasAuth in src/ov065/unk_ov065_02270e34.cpp,
// NetCheck_ThreadMain in src/ov065/unk_ov065_0226ec94.cpp).

struct NasAuthParams {
    /* 0x00 */ u8 inGameName[0x16]; // u16 text
    /* 0x16 */ char gsbrcd[14];
    /* 0x24 */ DwcAllocFunc allocFunc;
    /* 0x28 */ DwcFreeFunc freeFunc;
};

#endif
