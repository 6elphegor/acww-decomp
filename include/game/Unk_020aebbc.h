#ifndef GAME_UNK_020AEBBC_H
#define GAME_UNK_020AEBBC_H

#include "types.h"

// Date/time output record of the shop clock helpers (the shop state record is NookShop, game/NookShop.h). Used by
// src/main/unk_020af258.cpp and unk_020ac750.cpp.

struct Unk_020aec74_Out {
    /* 0x0 */ u8 second, minute, hour, day, month, year;
    /* 0x6 */ u16 unk_06;
};

#endif
