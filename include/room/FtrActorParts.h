#ifndef ROOM_FTRACTORPARTS_H
#define ROOM_FTRACTORPARTS_H

#include "types.h"

// Helper records of the ov004 furniture actor (FtrActor, TU unk_ov004_02204f24 / unk_ov004_02209f70 (+_switch)):
// tile/actor lists, material/animation views and small vectors used by its parts.

struct Unk_ov004_02205d8c_Vec {
    /* 0x0 */ s32 x, y, z;
};

// ---- 0x02206520: list of up to 4 tile positions
struct Unk_ov004_02206520_Ent {
    /* 0x0 */ s32 x, y;
    Unk_ov004_02206520_Ent() {
        x = 0;
        y = 0;
    }
};

struct Unk_ov004_0220650c {
    /* 0x00 */ u32 count;
    /* 0x04 */ u32 actors[4];
    void clear();
};

// ---- 0x02205b14: element view used by the 3-element container (same object as 0x02205bcc)
struct Unk_ov004_02205b14_Obj {
    /* 0x00 */ u8 pad[0x18];
    /* 0x18 */ u8 numMat;
};

class Unk_ov004_02205b14 {
public:
    void updateEmission();

    /* 0x00 */ u8 pad_00[0x14];
    /* 0x14 */ s8 matIdx;
    /* 0x15 */ u8 pad_15[3];
    /* 0x18 */ Unk_ov004_02205b14_Obj *resMdl;
};

struct Unk_ov004_02208a18_Rec {
    /* 0x0 */ u32 unk_00;
    /* 0x4 */ u16 numFrame;
};

struct Unk_ov004_02206744_V3 {
    /* 0x0 */ s32 x, y, z;
    Unk_ov004_02206744_V3() {}
};

struct Unk_ov004_02206be8_Blk {
    /* 0x00 */ u32 pad[26];
};

struct Unk_ov004_02208980_E {
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ s32 curFrame;
    /* 0x0c */ u8 pad_0c[12];
    /* 0x18 */ s32 *anmObj;
    /* 0x1c */ u8 pad_1c[4];
};

struct Unk_ov004_02206ec8_Ctx {
    /* 0x00 */ u8 pad_00[0xb8];
    /* 0xb8 */ u32 *pVisAnmResult;
};

struct Unk_ov004_02207854_List {
    /* 0x00 */ u32 count;
    /* 0x04 */ s32 v[4][2];
};

struct Unk_ov004_0220a0e4_Pad {
    /* 0x0 */ s32 v[2];
    Unk_ov004_0220a0e4_Pad() {}
    ~Unk_ov004_0220a0e4_Pad() {}
};

#endif // ROOM_FTRACTORPARTS_H
