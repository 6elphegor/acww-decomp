#ifndef GAME_UNK_OV004_022146EC_BITS_H
#define GAME_UNK_OV004_022146EC_BITS_H

#include "types.h"

// 16-bit packed field (2/6/8 bits) used by MuseumExhibitInfo (ov004 unk_ov004_02213b90 + _switch).

struct Unk_ov004_022146ec_Bits {
    u16 a : 2;
    u16 b : 6;
    u16 c : 8;
};

#endif // GAME_UNK_OV004_022146EC_BITS_H
