#include "types.h"

struct Unk_0202f660_V3 {
    s32 x, y, z;
};
typedef Unk_0202f660_V3 Vec3;

struct Unk_0202f7b8 {
    Unk_0202f7b8(Vec3 *c, s32 a, s32 b);
    BOOL func_0202f968(Vec3 *a, Vec3 *b);
    BOOL func_0202f7b8(Vec3 *a, Vec3 *b);
    u8 pad[0x14];
};

// the original calls the D2 copy of the destructor (0x0202fdb4), which a declared ~Unk_0202f7b8() would not
extern "C" void _ZN12Unk_0202f7b8D2Ev(Unk_0202f7b8 *self);

extern "C" {
s32 func_01ffcb0c(s32 a, s32 b);
extern s16 data_02136f44[];
extern s16 data_02138f44[];
}

struct Unk_020b7074_Pad {
    s32 v[3];
    Unk_020b7074_Pad() {}
    ~Unk_020b7074_Pad() {}
};

extern const u8 data_020d0d90[];
const u8 data_020d0d90[0x18] = {
    0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0,
};

extern "C" BOOL func_020b7074(Vec3 *out, Vec3 *a, Vec3 *b, s32 c, s32 d) {
    Vec3 zero, v24, v30;
    zero.x = 0;
    zero.y = 0;
    zero.z = 0;
    Unk_0202f7b8 o(&zero, c, d);
    Unk_020b7074_Pad pad;
    s32 az = a->z, ay = a->y, ax = a->x;
    v24.x = ax;
    v24.y = ay;
    v24.z = az;
    s32 bz = b->z, by = b->y, bx = b->x;
    v30.x = bx;
    v30.y = by;
    v30.z = bz;
    s32 sn = data_02136f44[0];
    s32 cs = data_02136f44[1];
    v24.x = func_01ffcb0c(cs, ax) - func_01ffcb0c(sn, ay);
    v24.y = func_01ffcb0c(sn, ax) + func_01ffcb0c(cs, ay);
    s32 y = v30.y;
    s32 x = v30.x;
    v30.x = func_01ffcb0c(cs, x) - func_01ffcb0c(sn, y);
    v30.y = func_01ffcb0c(sn, x) + func_01ffcb0c(cs, y);
    if (o.func_0202f7b8(&v30, &v24)) {
        s32 y2, x2, sn2, cs2;
        y2 = v30.y;
        sn2 = data_02138f44[0];
        x2 = v30.x;
        cs2 = data_02138f44[1];
        v30.x = func_01ffcb0c(cs2, x2) - func_01ffcb0c(sn2, y2);
        v30.y = func_01ffcb0c(sn2, x2) + func_01ffcb0c(cs2, y2);
        *out = v30;
        _ZN12Unk_0202f7b8D2Ev(&o);
        return TRUE;
    }
    _ZN12Unk_0202f7b8D2Ev(&o);
    return FALSE;
}

extern "C" s32 func_020b705c(s32 i) {
    if (i >= 0 && i < 0x17) {
        return data_020d0d90[i];
    }
    return 0;
}

