#ifndef ACTOR_UNK_OV004_022142FC_ACTOR_H
#define ACTOR_UNK_OV004_022142FC_ACTOR_H

#include "types.h"

// Actor view (position at 0x5c, rotY at 0x8e) used by MuseumExhibitInfo (ov004 unk_ov004_02213b90 + _switch).

struct Unk_ov004_022142fc_Actor {
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ u8 position[0xc];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 rotY;
};

#endif // ACTOR_UNK_OV004_022142FC_ACTOR_H
