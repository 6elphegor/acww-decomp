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

// View of one FtrModelAnim (0x20 bytes: AnimFrameCtrl numFrames 0x04 / curFrame 0x08 / frameStep 0x10, ModelAnim
// anmObj 0x18) for the anims[4] array at 0x7c0 of FtrActor, where the real class (vtable, constructor) cannot be a
// member.
struct FtrModelAnimView {
    /* 0x00 */ u8 pad_00[4];
    /* 0x04 */ u32 numFrames;
    /* 0x08 */ s32 curFrame;
    /* 0x0c */ u8 pad_0c[4];
    /* 0x10 */ s32 frameStep;
    /* 0x14 */ u8 pad_14[4];
    /* 0x18 */ s32 *anmObj;
    /* 0x1c */ u8 pad_1c[4];
};

// fx32 frame value read as bit fields (mid = whole frames); FtrSingingInsect reads the frame counts this way.
struct Unk_ov004_0220a648_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_02207854_List {
    /* 0x00 */ u32 count;
    /* 0x04 */ s32 v[4][2];
};

#endif // ROOM_FTRACTORPARTS_H
