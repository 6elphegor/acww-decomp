#ifndef GAME_UNK_020A88FC_PAD_H
#define GAME_UNK_020A88FC_PAD_H

#include "types.h"

// Two-word member with trivial ctor/dtor, embedded in objects of src/main/unk_020a6974.cpp and unk_020a8ba0.cpp.
struct Unk_020a88fc_Pad {
    /* 0x0 */ s32 v[2];
    Unk_020a88fc_Pad() {}
    ~Unk_020a88fc_Pad() {}
};

#endif
