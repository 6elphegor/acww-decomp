#ifndef NET_UNK_OV065_02264C44_THR_H
#define NET_UNK_OV065_02264C44_THR_H

#include "types.h"

// Thread / socket / thread-info views and a buffer entry used by the IP stack shutdown code
// (src/ov065/unk_ov065_02261638.cpp, src/ov065/unk_ov065_02264d0c.cpp).

struct Unk_ov065_02264c44_Ent {
    /* 0x00 */ u8 unk_00[4];
    /* 0x04 */ u16 cnt;
    /* 0x06 */ u8 unk_06[0x2e];
    /* 0x34 */ void *buf;
};

struct Unk_ov065_02264c44_Sub {
    /* 0x0 */ void *ownerThread;
    /* 0x4 */ void *waitReason;
    /* 0x8 */ u8 state;
    /* 0x9 */ u8 useSsl;
};

struct Unk_ov065_02264c44_Thr {
    /* 0x00 */ u8 unk_00[0x68];
    /* 0x68 */ Unk_ov065_02264c44_Thr *next;
    /* 0x6c */ u8 unk_6c[0x38];
    /* 0xa4 */ Unk_ov065_02264c44_Sub *ipSocket;
};

struct Unk_ov065_02264c44_Info {
    /* 0x0 */ u32 unk_00;
    /* 0x4 */ Unk_ov065_02264c44_Thr *cur;
    /* 0x8 */ Unk_ov065_02264c44_Thr *list;
};

#endif
