#ifndef NET_UNK_OV065_02290600_S_H
#define NET_UNK_OV065_02290600_S_H

#include "types.h"

// NAS authentication work (sNasAuth, 0x13e0 bytes) and the config block copied into it by NasAuth_Start.
// Defined in src/ov065/unk_ov065_0226d128.cpp; also used by src/ov065/unk_ov065_0226cb18.cpp (namespace N_d080),
// whose copy named config.v[9]/v[10] (alloc/free callbacks) unk_1f0/unk_1f4 but never used them.

struct Unk_ov065_02290600_Obj;

struct Unk_ov065_0226dd2c_Cfg {
    /* 0x00 */ u32 v[11];
};

struct Unk_ov065_02290600_S {
    /* 0x000 */ u32 unk_00;
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 resultCode;
    /* 0x00c */ char returnCd[4];
    /* 0x010 */ char datetime[0xf];
    /* 0x01f */ char locator[0x33];
    /* 0x052 */ char token[0x12d];
    /* 0x17f */ char challenge[9];
    /* 0x188 */ char cookie[0x41];
    /* 0x1c9 */ u8 pad_1c9[0x1cc - 0x1c9];
    /* 0x1cc */ Unk_ov065_0226dd2c_Cfg config;
    /* 0x1f8 */ u8 httpFields[0x2f8 - 0x1f8];
    /* 0x2f8 */ Unk_ov065_02290600_Obj *http;
    /* 0x2fc */ u8 thread[0x368 - 0x2fc];
    /* 0x368 */ s32 threadId;
    /* 0x36c */ u8 pad_36c[0x3bc - 0x36c];
    /* 0x3bc */ u8 mutex[0x18];
    /* 0x3d4 */ s32 isAborting;
    /* 0x3d8 */ u8 unk_3d8[0x13e0 - 0x3d8];
};

#endif
