#ifndef GFX_UNK_020AC2E8_V_H
#define GFX_UNK_020AC2E8_V_H

#include "types.h"
#include "game/Vec3.h"

// Local vector with inline empty ctor/dtor used by the object-shadow code (src/main/unk_020abea8.cpp,
// src/main/unk_020ac750.cpp).

struct Unk_020ac2e8_V : Vec3 {
    Unk_020ac2e8_V() {}
    ~Unk_020ac2e8_V() {}
};

#endif
