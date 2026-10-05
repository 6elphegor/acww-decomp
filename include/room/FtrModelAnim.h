#ifndef ROOM_FTRMODELANIM_H
#define ROOM_FTRMODELANIM_H

// Furniture model animation (0x02248804; array of 4 at 0x7c0 of FtrActor). Members defined in
// src/ov004/unk_ov004_02204f24.cpp.
#include "types.h"
#include "gfx/ModelAnim.h"

class FtrModelAnim : public ModelAnim {
public:
    FtrModelAnim();
    virtual ~FtrModelAnim();
    u32 getAnmObj();
};

#endif // ROOM_FTRMODELANIM_H
