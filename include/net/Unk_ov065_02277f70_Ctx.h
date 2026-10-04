#ifndef NET_UNK_OV065_02277F70_CTX_H
#define NET_UNK_OV065_02277F70_CTX_H

#include "types.h"

// Callback context with user data (src/ov065/unk_ov065_02277974.cpp, src/ov065/unk_ov065_02277e70.cpp).

struct Unk_ov065_02277f70_Ctx {
    /* 0x0 */ u32 userData;
    /* 0x4 */ void (*callback)(s32, s32, s32, u32);
};

#endif
