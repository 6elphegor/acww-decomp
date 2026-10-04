#ifndef NET_DWCUSERDATA_H
#define NET_DWCUSERDATA_H

#include "types.h"

// DWC user data / login id read by the login code
// (src/ov065/unk_ov065_0226fc18.cpp, src/ov065/unk_ov065_02270e34.cpp).

struct DwcLoginId {
    /* 0x0 */ u32 v[3];
};

// DwcCore_Init user data (DwcLogin_GetUserData).
struct DwcUserData {
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ DwcLoginId tempLoginId; // copied to DwcLoginControl::loginId when valid (DwcLogin_StartNasAuth)
    /* 0x10 */ DwcLoginId loginId;     // formatted for NAS when func_020ffdfc says the user has one
    /* 0x1c */ u32 profileId;
    /* 0x20 */ u8 unk_20[4];
    /* 0x24 */ u32 gameCode;
};

#endif
