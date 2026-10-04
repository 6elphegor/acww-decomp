#ifndef NET_UNK_OV065_02290600_OBJ_H
#define NET_UNK_OV065_02290600_OBJ_H

#include "types.h"

// NAS auth HTTP request object (sNasAuth->http) and the NAS user-id record sNasUserId (defined in unk_ov065_0226d128.cpp)
// (copies were in src/ov065/unk_ov065_0226cb18.cpp and src/ov065/unk_ov065_0226d128.cpp).

struct Unk_ov065_02290604_S {
    /* 0x00 */ u64 userId;
    /* 0x08 */ u64 tempUserId;
    /* 0x10 */ u16 password;
};

struct Unk_ov065_02290600_Obj {
    /* 0x000 */ u8 pad_00[0x24];
    /* 0x024 */ s32 result;
    /* 0x028 */ u8 pad_28[0x938 - 0x28];
    /* 0x938 */ void *responseBuffer;
    /* 0x93c */ u8 pad_93c[0x968 - 0x93c];
    /* 0x968 */ u8 thread[0x9d4 - 0x968];
    /* 0x9d4 */ s32 threadId;
};

#endif
