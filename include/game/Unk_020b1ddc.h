#ifndef GAME_UNK_020B1DDC_H
#define GAME_UNK_020B1DDC_H

#include "types.h"

// Clock model whose hour/minute hand joints are rotated; methods defined in src/main/unk_020b0e60.cpp.

struct Obj_b4;

class Unk_020b1ddc {
public:
    void rotateMinuteHand();
    void rotateHourHand();

    /* 0x00 */ u8 pad[0xb4];
    /* 0xb4 */ Obj_b4 *pJntAnmResult;
};

#endif
