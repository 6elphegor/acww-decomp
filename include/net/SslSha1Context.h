#ifndef NET_SSLSHA1CONTEXT_H
#define NET_SSLSHA1CONTEXT_H

#include "types.h"

// SHA-1 context of the SSL code (SslSha1_*, src/ov065/unk_ov065_0226795c.cpp).

struct SslSha1Context {
    /* 0x00 */ u32 st[5];
    /* 0x14 */ u32 hi;
    /* 0x18 */ u32 lo;
    /* 0x1c */ u8 buf[64];
};

#endif
