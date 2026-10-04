#ifndef NET_UNK_OV065_02287200_SA_H
#define NET_UNK_OV065_02287200_SA_H

#include "types.h"

// sockaddr_in view (ov065_064 GameSpy query-and-report); used by unk_ov065_02286934.cpp and unk_ov065_02287390.cpp.

struct Unk_ov065_02287200_Sa {
    /* 0x00 */ u8 len;
    /* 0x01 */ u8 family;
    /* 0x02 */ u16 port;
    /* 0x04 */ u32 addr;
};

#endif
