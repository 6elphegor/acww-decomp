#ifndef NET_UNK_OV065_02280C08_NODE_H
#define NET_UNK_OV065_02280C08_NODE_H

#include "types.h"

// GP peer node view (expire time, message queue)
// (src/ov065/unk_ov065_0227f2a4.cpp, src/ov065/unk_ov065_02280740.cpp, src/ov065/unk_ov065_02280c08.cpp).

struct Unk_ov065_02280c08_Node {
    /* 0x00 */ u8 pad_00[0x10];
    /* 0x10 */ s32 expireTime;
    /* 0x14 */ u8 pad_14[0x38 - 0x14];
    /* 0x38 */ s32 messageQueue;
};

#endif
