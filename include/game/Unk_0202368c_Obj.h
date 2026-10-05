#ifndef GAME_UNK_0202368C_OBJ_H
#define GAME_UNK_0202368C_OBJ_H

// 8-byte item-pick spec view (passed to ItemPickSpec::set, ItemPick_One, ItemPickSpec_Destruct);
// used by unk_0201c050.cpp and the ov078/079/081/082 overlays.
#include "types.h"

struct Unk_0202368c_Obj {
    /* 0x0 */ u32 v[2];
}; // size 0x8

#endif // GAME_UNK_0202368C_OBJ_H
