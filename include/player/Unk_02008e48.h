#ifndef PLAYER_UNK_02008E48_H
#define PLAYER_UNK_02008E48_H

#include "types.h"

// Action 76 / 77 net and request argument views; Unk_02008e48 methods are defined in
// src/main/unk_02004558.cpp.

struct Unk_02008e48 {
    /* 0x0 */ u8 unk_00;
    /* 0x1 */ u8 unk_01;
    /* 0x2 */ u8 unk_02;
    void readAct76Net(u8 *a, u8 *b, u8 *c);
    void writeAct76Net(u8 a, u8 b, u8 c);
};

struct Unk_02008e50_Pay {
    /* 0x0 */ u8 unk_00;
    /* 0x1 */ u8 unk_01;
    /* 0x2 */ u8 unk_02;
    /* 0x3 */ u8 pad_03[0xd];
    void set(u8 a, u8 b, u8 c) { unk_00 = a; unk_01 = b; unk_02 = c; }
};

struct Unk_02008ee4_Sub {
    /* 0x0 */ s16 unk_00;
    /* 0x2 */ s16 unk_02;
    void set(s16 v) { unk_02 = v; }
};

#endif
