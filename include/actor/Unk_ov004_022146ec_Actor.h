#ifndef ACTOR_UNK_OV004_022146EC_ACTOR_H
#define ACTOR_UNK_OV004_022146EC_ACTOR_H

#include "types.h"

// Actor view (pos at 0x5c, ang at 0x8e) used by MuseumExhibitInfo and BirthdayHostVillager (ov004).

struct Unk_ov004_022146ec_Actor {
    /* 0x00 */ u8 pad_00[0x5c];
    /* 0x5c */ s32 pos[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ u16 ang;
};

#endif // ACTOR_UNK_OV004_022146EC_ACTOR_H
