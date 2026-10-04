#ifndef SAVE_UNK_020942C8_H
#define SAVE_UNK_020942C8_H

#include "types.h"
#include "net/Unk_020720f8_Data.h"

// Player identity record (town id/name, player id/name, gender); ctor/dtor labels 0x020942f8/0x020942c8.
// This is the PlayerId record (PlayerId::equals = 0x020941e8). Used in src/main/unk_02070560.cpp and
// src/main/unk_020720f8.cpp (the func_020941e8 declaration has no symbol of its own and is never called).

class Unk_020942c8 {
public:
    Unk_020942c8();
    ~Unk_020942c8();
    /* 0x00 */ u16 townId;
    /* 0x02 */ Unk_02071fa4_Id8 townName;
    /* 0x0a */ u16 playerId;
    /* 0x0c */ Unk_02071fa4_Id8 playerName;
    /* 0x14 */ s8 gender;
    /* 0x15 */ u8 unk_15;
    BOOL func_020941e8(Unk_020942c8 *o);
};

#endif
