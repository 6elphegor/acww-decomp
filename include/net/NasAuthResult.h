#ifndef NET_NASAUTHRESULT_H
#define NET_NASAUTHRESULT_H

#include "types.h"

// NAS login result as copied out by NasAuth_GetResult (0x1c4 bytes from NasAuthWork::resultCode); token / challenge
// feed the GP pre-auth login (src/ov065/unk_ov065_02270e34.cpp DwcLogin_PollNasAuth; also src/ov065/unk_ov065_0226fc18.cpp).

struct NasAuthResult {
    /* 0x000 */ s32 result;
    /* 0x004 */ char returnCd[4];
    /* 0x008 */ char datetime[0xf];
    /* 0x017 */ char locator[0x33];
    /* 0x04a */ char token[0x12d];
    /* 0x177 */ char challenge[9];
    /* 0x180 */ char cookie[0x41];
    /* 0x1c1 */ u8 pad_1c1[0x1c4 - 0x1c1];
};

#endif
