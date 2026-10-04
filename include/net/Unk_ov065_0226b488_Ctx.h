#ifndef NET_UNK_OV065_0226B488_CTX_H
#define NET_UNK_OV065_0226B488_CTX_H

#include "types.h"
#include "net/Unk_ov065_0226b488_Rec.h"

// Wi-Fi access-point search/connect context (src/ov065/unk_ov065_0226b3c4.cpp namespaces N_c750 / N_b488,
// src/ov065/unk_ov065_0226cb18.cpp).

struct Unk_ov065_0226b488_Ctx {
    /* 0x000 */ u8 pad000[0x300];
    /* 0x300 */ Unk_ov065_0226b488_Entry searchEntries[9];
    /* 0x444 */ u8 foundApInfo[0x2c];
    /* 0x470 */ Unk_ov065_0226b488_Rec foundApBss[11];
    /* 0xcb0 */ u32 stepStartTick;
    /* 0xcb4 */ u32 stepStartTickHi;
    /* 0xcb8 */ u8 wepSetting[0x52];
    /* 0xd0a */ u8 padd0a;
    /* 0xd0b */ u8 unk_d0b_lo : 2;
    /* 0xd0b */ u8 unk_d0b_hi : 2;
    /* 0xd0b */ u8 unk_d0b_pad : 4;
    /* 0xd0c */ u8 unk_d0c_st : 4;
    /* 0xd0c */ u8 unk_d0c_mid : 2;
    /* 0xd0c */ u8 unk_d0c_mode : 2;
    /* 0xd0d */ u8 apType;
    /* 0xd0e */ u8 resumeState;
    /* 0xd0f */ u8 searchIndex;
    /* 0xd10 */ u8 numSearchEntries;
    /* 0xd11 */ s8 scanChannel;
    /* 0xd12 */ u8 numFoundAps;
    /* 0xd13 */ u8 selectedAp;
    /* 0xd14 */ u8 connectFailKind;
    /* 0xd15 */ u8 stepCount;
    /* 0xd16 */ u16 foundChannelMask;
};

#endif
