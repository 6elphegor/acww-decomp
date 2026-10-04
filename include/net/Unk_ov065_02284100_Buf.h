#ifndef NET_UNK_OV065_02284100_BUF_H
#define NET_UNK_OV065_02284100_BUF_H

#include "types.h"

// Growable string buffer (ov065_058 pauthr/getpidr reply helpers); used by unk_ov065_02283720.cpp and
// unk_ov065_02283f34.cpp.

struct Unk_ov065_02284100_Buf {
    /* 0x00 */ char *data;
    /* 0x04 */ s32 size;
    /* 0x08 */ s32 len;
};

#endif
