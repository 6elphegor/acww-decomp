#ifndef FIELD_UNK_OV003_02217910_V3D_H
#define FIELD_UNK_OV003_02217910_V3D_H

#include "types.h"

// s32 vector with a trivial user-declared ctor/dtor (ov003 ground helpers 0x02217908 / 0x02217b10).
struct Unk_ov003_02217910_V3D {
    /* 0x00 */ s32 x, y, z;
    Unk_ov003_02217910_V3D() {}
    ~Unk_ov003_02217910_V3D() {}
};

#endif
