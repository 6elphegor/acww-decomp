#ifndef PLAYER_UNK_0200E2C8_H
#define PLAYER_UNK_0200E2C8_H

// Base class of PlayerActionRequest (ctor/dtor at 0x0200e2cc/0x0200e2c8) and the 0x10-byte request payload blob.
// Used by unk_02004558.cpp / unk_02004558_extra.cpp.
#include "types.h"

struct Unk_0200e2c8 {
    Unk_0200e2c8();
    ~Unk_0200e2c8();
};

struct Unk_0200e248_Blob {
    /* 0x0 */ s32 v[4];
}; // size 0x10

#endif // PLAYER_UNK_0200E2C8_H
