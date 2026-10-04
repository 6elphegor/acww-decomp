#ifndef PLAYER_UNK_0200D560_H
#define PLAYER_UNK_0200D560_H

// Small player-actor work records of the 0x02004558 unit (unk_02004558.cpp / unk_02004558_extra.cpp):
// init work (Unk_0200d560::initInitWork), init args (Unk_0200d5b4::setInitArgs; the payload of the init action's
// PlayerActionRequest).
#include "types.h"

struct Unk_0200d560 {
    /* 0x0 */ u32 unk_00;
    /* 0x4 */ u8 modelSetupDone;
    void initInitWork(u32 v);
};

struct Unk_0200d5b4 {
    /* 0x0 */ u32 unk_00;
    void setInitArgs(u32 v);
};

#endif // PLAYER_UNK_0200D560_H
