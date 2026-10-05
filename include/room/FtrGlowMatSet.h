#ifndef ROOM_FTRGLOWMATSET_H
#define ROOM_FTRGLOWMATSET_H

// Three light-following materials of a furniture model (0x02205c44 area). Members defined in
// src/ov004/unk_ov004_02204f24.cpp.
#include "types.h"
#include "room/FtrGlowMat.h"

class FtrGlowMatSet {
public:
    FtrGlowMatSet();
    ~FtrGlowMatSet();
    void update();
    u32 setLit(u32 a, u32 b, u32 c);
    u32 init(u32 a, u32 b);

    /* 0x00 */ FtrGlowMat mats[3];
    /* 0x54 */ u8 anyBound;
};

#endif // ROOM_FTRGLOWMATSET_H
