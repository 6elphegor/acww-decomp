#ifndef FIELD_UNK_OV003_02214494_VIEWS_H
#define FIELD_UNK_OV003_02214494_VIEWS_H

#include "types.h"

// Small views used by the ov003 building actors (ReddTent 0x02214494, GracieCar 0x02214ce0, CountdownSign 0x022150ec).


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
