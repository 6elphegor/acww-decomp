#ifndef NET_NASAUTHWORK_H
#define NET_NASAUTHWORK_H

#include "types.h"
#include "net/DwcHttp.h"
#include "net/NasAuthParams.h"

// NAS (nas.nintendowifi.net/ac) login work sNasAuth ("DWCAuth", 0x13e0 bytes incl. the 0x1000 thread stack) and the
// user-id record sNasUserId, both defined in src/ov065/unk_ov065_0226d128.cpp; also declared by
// src/ov065/unk_ov065_0226cb18.cpp (namespace N_d080).

struct NasUserIdInfo {
    /* 0x00 */ u64 userId;
    /* 0x08 */ u64 tempUserId;
    /* 0x10 */ u16 password;
};

struct NasAuthWork {
    /* 0x000 */ u32 unk_00;
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 resultCode; // NasAuthResult (0x1c4 bytes) starts here
    /* 0x00c */ char returnCd[4];
    /* 0x010 */ char datetime[0xf];
    /* 0x01f */ char locator[0x33];
    /* 0x052 */ char token[0x12d];
    /* 0x17f */ char challenge[9];
    /* 0x188 */ char cookie[0x41];
    /* 0x1c9 */ u8 pad_1c9[0x1cc - 0x1c9];
    /* 0x1cc */ NasAuthParams config;
    /* 0x1f8 */ DwcHttpField httpFields[0x20];
    /* 0x2f8 */ DwcHttp *http;
    /* 0x2fc */ u8 thread[0x368 - 0x2fc];
    /* 0x368 */ s32 threadId;
    /* 0x36c */ u8 pad_36c[0x3bc - 0x36c];
    /* 0x3bc */ u8 mutex[0x18];
    /* 0x3d4 */ s32 isAborting;
    /* 0x3d8 */ u8 unk_3d8[0x13e0 - 0x3d8];
};

#endif
