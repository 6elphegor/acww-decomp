#ifndef PLAYER_UNK_02009F68_BYTES_H
#define PLAYER_UNK_02009F68_BYTES_H

#include "types.h"

// Pick-up / unit-position argument and work views of the player actor
// (src/main/unk_02004558.cpp; also used by src/main/unk_02004558_extra.cpp).

struct Unk_02009f68_Bytes {
    /* 0x0 */ u8 unk_0;
    /* 0x1 */ u8 unitX;
    /* 0x2 */ u8 unitZ;
};

struct Unk_0200a050_Obj {
    /* 0x0 */ u8 pad[12];
};

struct Unk_0200a0a0_Bytes {
    /* 0x0 */ u8 unk_0;
    /* 0x1 */ u8 unitX;
    /* 0x2 */ u8 unitZ;
    /* 0x3 */ u8 pad_3[13];
};

struct Unk_0200a63c_St {
    /* 0x0 */ u8 unk_0;
    /* 0x1 */ u8 unk_1[2];
    /* 0x3 */ u8 unitX;
    /* 0x4 */ u8 unitZ;
};

struct Unk_0200a6d4_St {
    /* 0x0 */ u8 pad[16];
};

struct Unk_0200a728_St {
    /* 0x0 */ u16 item;
    /* 0x2 */ u8 unitX;
    /* 0x3 */ u8 unitZ;
    /* 0x4 */ u8 unk_4;
    /* 0x5 */ u8 pad_5[15];
};

#endif
