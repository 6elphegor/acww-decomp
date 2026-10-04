#ifndef NET_UNK_OV065_022679F8_SHA1_H
#define NET_UNK_OV065_022679F8_SHA1_H

#include "types.h"

// SHA-1 context of the SSL code (SslSha1_*, src/ov065/unk_ov065_0226795c.cpp).

struct Unk_ov065_022679f8_Sha1 {
    /* 0x00 */ u32 st[5];
    /* 0x14 */ u32 hi;
    /* 0x18 */ u32 lo;
    /* 0x1c */ u8 buf[64];
};

#endif
