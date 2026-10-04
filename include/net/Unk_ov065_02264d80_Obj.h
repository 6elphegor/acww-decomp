#ifndef NET_UNK_OV065_02264D80_OBJ_H
#define NET_UNK_OV065_02264D80_OBJ_H

#include "types.h"

// Socket object and its SSL connection context (src/ov065/unk_ov065_02261638.cpp,
// src/ov065/unk_ov065_02264d0c.cpp).

struct Unk_ov065_02264d80_Conn {
    /* 0x000 */ u8 unk_000[0x2c0];
    /* 0x2c0 */ u8 unk_2c0[0xb8];
    /* 0x378 */ u8 unk_378[0xb0];
    /* 0x428 */ u8 unk_428;
    /* 0x429 */ u8 handshakeState;
    /* 0x42a */ u8 recordReady;
    /* 0x42b */ u8 unk_42b[0x3cd];
    /* 0x7f8 */ u8 *recordBuf;
    /* 0x7fc */ u32 recordLen;
    /* 0x800 */ u32 recordPos;
};

struct Unk_ov065_02264d80_Obj {
    /* 0x00 */ u8 unk_00[8];
    /* 0x08 */ u8 state;
    /* 0x09 */ u8 unk_09[3];
    /* 0x0c */ Unk_ov065_02264d80_Conn *sslCtx;
    /* 0x10 */ u8 unk_10[0x34];
    /* 0x44 */ u32 rxLen;
};

#endif
