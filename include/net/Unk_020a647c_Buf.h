#ifndef NET_UNK_020A647C_BUF_H
#define NET_UNK_020A647C_BUF_H

#include "types.h"

// NetArea state buffer header (src/main/unk_020a647c.cpp, unk_020a6564.cpp, unk_020a65fc.cpp).

struct Unk_020a647c_Buf {
    /* 0x00 */ u16 total;
    /* 0x02 */ u16 len;
    /* 0x04 */ u8 id;
};

#endif // NET_UNK_020A647C_BUF_H
