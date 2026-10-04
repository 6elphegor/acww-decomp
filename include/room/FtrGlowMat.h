#ifndef ROOM_FTRGLOWMAT_H
#define ROOM_FTRGLOWMAT_H

#include "types.h"
#include "game/LightLevel.h"

class G3dResAccess;

// Model material whose emission follows a light level (0x02205bcc; element of FtrGlowMatSet).
// Members defined in src/ov004/unk_ov004_02204f24.cpp.
struct FtrGlowMat : public LightLevel {
    FtrGlowMat();
    ~FtrGlowMat();
    BOOL setLit(BOOL on, s32 a, s32 b);
    BOOL bindMaterial(G3dResAccess *res, s32 idx, BOOL on);
    /* 0x14 */ s8 matIdx;
    /* 0x18 */ G3dResAccess *resMdl;
};

#endif // ROOM_FTRGLOWMAT_H
