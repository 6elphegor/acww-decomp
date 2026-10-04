#ifndef NET_UNK_OV065_02264C44_THR_H
#define NET_UNK_OV065_02264C44_THR_H

#include "types.h"
#include "net/IpSocket.h"

// OSThread / OSThreadInfo views (thread specific[0] = IpSocket) used by the IP stack shutdown code
// (src/ov065/unk_ov065_02261638.cpp, src/ov065/unk_ov065_02264d0c.cpp).

struct Unk_ov065_02264c44_Thr {
    /* 0x00 */ u8 unk_00[0x68];
    /* 0x68 */ Unk_ov065_02264c44_Thr *next;
    /* 0x6c */ u8 unk_6c[0x38];
    /* 0xa4 */ IpSocket *ipSocket;
};

struct Unk_ov065_02264c44_Info {
    /* 0x0 */ u32 unk_00;
    /* 0x4 */ Unk_ov065_02264c44_Thr *cur;
    /* 0x8 */ Unk_ov065_02264c44_Thr *list;
};

#endif
