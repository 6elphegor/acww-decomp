#ifndef NET_UNK_OV065_02280E7C_CTX_H
#define NET_UNK_OV065_02280E7C_CTX_H

#include "types.h"
#include "net/GsGpPeer.h"
#include "net/GsGpProfile.h"

// GsGpContext view of the peer code (nick/password, buddy-message callback, peer socket and list) and the callback pair
// with constructors used there (src/ov065/unk_ov065_02280c08.cpp gpiPeer.c, src/ov065/unk_ov065_0228176c.cpp).

struct Unk_ov065_02280e7c_Ctx {
    /* 0x000 */ u8 pad_000[0x110];
    /* 0x110 */ char nick[0x67];
    /* 0x177 */ char password[0x29];
    /* 0x1a0 */ s32 profileId;
    /* 0x1a4 */ u8 pad_1a4[0x18];
    /* 0x1bc */ s32 buddyMessageCallback;
    /* 0x1c0 */ s32 buddyMessageParam;
    /* 0x1c4 */ u8 pad_1c4[0x40];
    /* 0x204 */ s32 peerSocket;
    /* 0x208 */ u8 pad_208[0x22c];
    /* 0x434 */ GsGpPeer *peerList;
};

struct Unk_ov065_02280e7c_Pair {
    /* 0x0 */ s32 func;
    /* 0x4 */ s32 param;
    Unk_ov065_02280e7c_Pair() {}
    Unk_ov065_02280e7c_Pair(s32 a, s32 b) { func = a; param = b; }
};

struct Unk_ov065_02280e7c_Pair2 {
    /* 0x0 */ Unk_ov065_02280e7c_Pair p;
};

#endif
