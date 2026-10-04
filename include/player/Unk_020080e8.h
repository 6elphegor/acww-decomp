#ifndef PLAYER_UNK_020080E8_H
#define PLAYER_UNK_020080E8_H

#include "types.h"

// Player actor network data buffer (PlayerActor::netData at 0x8ec, 8 bytes); read/write methods are defined in
// src/main/unk_02004558.cpp.

class Unk_020080e8 {
public:
    void readU16(u16 *out);
    void writeU16(u16 v);
    void readS16(s16 *out);
    void writeS16(s16 v);
    /* 0x00 */ u8 unk_00[8];
};

#endif
