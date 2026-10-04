#ifndef PLAYER_HELDITEMMODEL_H
#define PLAYER_HELDITEMMODEL_H

// Model of the item held by a character (0x68 bytes): slot of the shared HeldItemModelBank, scale, texture animation
// and the fishing bobber. Both classes are defined in src/main/unk_0205dfa4.cpp.
#include "types.h"
#include "gfx/ModelAnim.h"
#include "player/FishBobber.h"

class HeldItemTexAnim : public ModelAnim {
public:
    HeldItemTexAnim();
    virtual ~HeldItemTexAnim();
};

class HeldItemModel {
public:
    /* 0x00 */ u8 slot;
    /* 0x04 */ u32 scale;
    /* 0x08 */ HeldItemTexAnim texAnim;
    /* 0x28 */ FishBobber bobber;
    HeldItemModel();
    ~HeldItemModel();
};

#endif // PLAYER_HELDITEMMODEL_H
