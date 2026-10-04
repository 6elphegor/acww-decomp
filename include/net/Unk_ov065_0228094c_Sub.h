#ifndef NET_UNK_OV065_0228094C_SUB_H
#define NET_UNK_OV065_0228094C_SUB_H

#include "types.h"

// GP search connection (socket and in/out buffers)
// (src/ov065/unk_ov065_0227f2a4.cpp, src/ov065/unk_ov065_02280740.cpp, src/ov065/unk_ov065_02280c08.cpp).

struct Unk_ov065_0228094c_Sub {
    /* 0x00 */ s32 searchType;
    /* 0x04 */ s32 sock;
    /* 0x08 */ char *inputBuffer;
    /* 0x0c */ u8 pad_0c[0xc];
    /* 0x18 */ char *outputBuffer;
};

#endif
