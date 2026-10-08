#ifndef ROOM_FTRACTORPARTS_H
#define ROOM_FTRACTORPARTS_H

#include "types.h"
#include "sys/StackPad.h"
#include "sys/NNSFndArchive.h"
#include "gfx/VecFx32.h"
#include "gfx/NNSG3dResAnmCommon.h"

// Helper records of the ov004 furniture actor (FtrActor, TU unk_ov004_02204f24 / unk_ov004_02209f70 (+_switch)):
// tile/actor lists, material/animation views and small vectors used by its parts.

// ---- 0x02206520: list of up to 4 tile positions
struct Unk_ov004_02206520_Ent {
    /* 0x0 */ s32 x, y;
    Unk_ov004_02206520_Ent() {
        x = 0;
        y = 0;
    }
};

// ---- 0x02205b14: model resource seen by FtrGlowMat::updateEmission (material count at 0x18)
struct Unk_ov004_02205b14_Obj {
    /* 0x00 */ u8 pad[0x18];
    /* 0x18 */ u8 numMat;
};

// fx32 frame value read as bit fields (mid = whole frames); FtrSingingInsect reads the frame counts this way.
struct Unk_ov004_0220a648_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};


#endif // ROOM_FTRACTORPARTS_H
