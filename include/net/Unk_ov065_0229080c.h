#ifndef NET_UNK_OV065_0229080C_H
#define NET_UNK_OV065_0229080C_H

#include "types.h"

// DWC friend control (sDwcFriendControl) and the GP connection it points to
// (src/ov065/unk_ov065_02270e34.cpp, src/ov065/unk_ov065_022723b8.cpp; DwcFriend_*).

struct Unk_ov065_0229080c_Big {
    /* 0x000 */ u8 unk_00[0x214];
    /* 0x214 */ s32 lastStatus;
    /* 0x218 */ u8 lastStatusString[0x100];
    /* 0x318 */ u8 lastLocationString[0x100];
};

struct Unk_ov065_0229080c_Sub {
    /* 0x00 */ Unk_ov065_0229080c_Big *connection;
};

struct Unk_ov065_0229080c_Ent {
    /* 0x00 */ u8 unk_00[0xc];
};

struct Unk_ov065_0229080c {
    /* 0x00 */ s32 updateState;
    /* 0x04 */ Unk_ov065_0229080c_Sub *gpConnection;
    /* 0x08 */ u32 tickCount;
    /* 0x0c */ u32 lastTick;
    /* 0x10 */ u32 lastProcessTickHi;
    /* 0x14 */ s32 numFriends;
    /* 0x18 */ Unk_ov065_0229080c_Ent *friendList;
    /* 0x1c */ u8 syncIndex;
    /* 0x1d */ u8 isListChanged;
    /* 0x1e */ u8 syncPhase;
    /* 0x1f */ u8 updateStep;
    /* 0x20 */ u32 unk_20;
    /* 0x24 */ u32 unk_24;
    /* 0x28 */ u32 buddyRequestText;
    /* 0x2c */ void (*unk_2c)(s32, u32, s32);
    /* 0x30 */ s32 updateCallbackArg;
    /* 0x34 */ void (*unk_34)(s32, s32, char *, s32);
    /* 0x38 */ s32 statusCallbackArg;
    /* 0x3c */ void (*unk_3c)(void);
    /* 0x40 */ void (*unk_40)(void);
    /* 0x44 */ void (*unk_44)(s32, s32);
    /* 0x48 */ s32 addedCallbackArg;
    /* 0x4c */ u32 unk_4c;
    /* 0x50 */ u32 unk_50;
};

#endif
