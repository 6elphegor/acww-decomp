#ifndef FIELD_UNK_OV003_02214494_VIEWS_H
#define FIELD_UNK_OV003_02214494_VIEWS_H

#include "types.h"

// Small views used by the ov003 building actors (ReddTent 0x02214494, GracieCar 0x02214ce0, CountdownSign 0x022150ec).

// talk-target state words (state at +4, nextState at +8)
struct Unk_ov003_022141bc_Target {
    /* 0x00 */ u8 pad_00[4];
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 nextState;
};

// 8-byte stack pair with a trivial user-declared ctor/dtor
struct Unk_ov003_0221475c_Pad {
    /* 0x00 */ s32 v[2];
    Unk_ov003_0221475c_Pad() {}
    ~Unk_ov003_0221475c_Pad() {}
};

// 8-byte message/text buffer pair
struct Unk_ov003_02214890_Buf {
    /* 0x00 */ s32 w0;
    /* 0x04 */ s32 w1;
};

#endif
