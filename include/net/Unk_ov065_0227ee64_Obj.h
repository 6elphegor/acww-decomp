#ifndef NET_UNK_OV065_0227EE64_OBJ_H
#define NET_UNK_OV065_0227EE64_OBJ_H

#include "types.h"

// GP connection object view used by the GP connect/info helpers (gpiConnect auth token, secret, CD key)
// (src/ov065/unk_ov065_0227e160.cpp, src/ov065/unk_ov065_0227f2a4.cpp).

struct Unk_ov065_0227ee64_Obj {
    /* 0x000 */ u8 pad_000[0xc2];
    /* 0x0c2 */ char authToken[0x100];
    /* 0x1c2 */ char authSecret[0x100];
    /* 0x2c2 */ char cdKey[0x42];
    /* 0x304 */ s32 isNewUser;
};

#endif
