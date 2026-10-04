#ifndef GAME_UNK_020AEC00_H
#define GAME_UNK_020AEC00_H

#include "types.h"

// NookShop-shaped object (vtable word + 0x25 ItemId slots); its only member, the constructor at 0x020aec00 that
// runs __cxa_vec_cleanup over the slots, is defined in src/main/unk_020ac750.cpp.
struct Unk_020aec00 {
    /* 0x00 */ u32 vt;
    /* 0x04 */ u16 e[0x25];
    Unk_020aec00();
};

#endif // GAME_UNK_020AEC00_H
