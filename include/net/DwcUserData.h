#ifndef NET_DWCUSERDATA_H
#define NET_DWCUSERDATA_H

#include "types.h"

// DWC user data / login id and the GP profile response read by the login code
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

// GP connect / get-info callback argument (DwcLogin_OnGpConnected, DwcLogin_OnGpProfileInfo, DwcFriend_On*Info).
struct GsGpInfoResponse {
    /* 0x00 */ s32 result;
    /* 0x04 */ u32 profileId;
    /* 0x08 */ u8 unk_08[0x86];
    /* 0x8e */ s8 lastName[1]; // GP_LASTNAME (0x705): DwcLogin_OnGpProfileInfo stores the login-id text there
};

#endif
