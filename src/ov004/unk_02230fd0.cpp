#include "types.h"

struct Unk_ov004_02230fd0_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02230fd0_Mat {
    s32 v[12];
};

struct Unk_ov004_02230fd0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class Unk_ov004_02230fd0 {
public:
    typedef void (Unk_ov004_02230fd0::*Fn)();
    u8 pad_00[0x50];
    void *unk_50;
    u8 pad_54[0x64 - 0x54];
    u8 unk_64[0xc8 - 0x64];
    Unk_ov004_02230fd0_Mat unk_c8;
    u32 unk_f8[2];
    u32 unk_100;
    Unk_ov004_02230fd0_Bits unk_104;
    s32 unk_108;
    u8 pad_10c[4];
    s32 unk_110;
    u8 pad_114[0x158 - 0x114];
    s32 unk_158;
    s32 unk_15c;
    u8 pad_160[0x1a8 - 0x160];
    Unk_ov004_02230fd0_V3 unk_1a8;
    u8 pad_1b4[0x1c0 - 0x1b4];
    s16 unk_1c0;
    u8 pad_1c2[5];
    u8 unk_1c7;
    u8 unk_1c8;
    u8 pad_1c9[0x1e8 - 0x1c9];
    u8 unk_1e8;
    u8 unk_1e9;
    u8 pad_1ea[2];
    s16 unk_1ec;
    u8 unk_1ee;
    u8 pad_1ef[0x1fc - 0x1ef];
    u8 unk_1fc;
    u8 pad_1fd;
    s8 unk_1fe;
    u8 pad_1ff[0x208 - 0x1ff];
    u16 unk_208;
    u8 unk_20a;
    u8 pad_20b;
    s32 unk_20c;
    u8 unk_210;
    u8 unk_211;
    u8 pad_212[0x258 - 0x212];
    s32 unk_258;
    s32 unk_25c;
    s32 unk_260;
    u8 unk_264;
    u8 pad_265[3];
    s32 unk_268;
    u8 pad_26c[0x278 - 0x26c];
    s32 unk_278;
    s32 unk_27c;
    u8 unk_280;
    u8 unk_281;
};

typedef Unk_ov004_02230fd0 Obj;
typedef Unk_ov004_02230fd0_V3 V3;

extern V3 data_ov004_022513f0;
extern Obj::Fn data_ov004_02251e5c[];
extern Obj::Fn data_ov004_02251e2c[];
extern u8 data_ov004_022402f0[];
extern u8 data_ov004_022402ee[];
extern u8 data_ov004_022402ef[];
extern Unk_ov004_02230fd0_Mat data_021f47e0;

extern "C" {
s32 func_020565e8(void *, s32);
void func_02003c50(void *, s32);
void func_02003c70(void *, V3 *);
void func_02003cbc(void *);
s32 func_020e769c(void *, s32, s32);
s32 func_020e759c(void *, s32, s32);
void func_02055488(void *, void *, void *);
void func_01ffb898(V3 *, void *, V3 *);
s32 func_ov004_02231e28(s32, s32);
s32 func_ov004_0223257c(void *, s32, s32);
s32 func_ov004_02232270(Obj *, u32);
s32 func_ov004_02232220(Obj *);
s32 func_ov004_0222e288(Obj *, s32);
s32 func_ov004_0222dea8(Obj *);
s32 func_ov004_0222dfbc(Obj *);
s32 func_ov004_0222e61c(Obj *);
s32 func_ov004_0222e2f4(Obj *);
s32 func_ov004_0222e820(Obj *);
s32 func_ov004_02232130(Obj *);
s32 func_ov004_022320c8(Obj *);
s32 func_ov004_02231f98(Obj *, s32, s32);
s32 func_ov004_0222ede0(Obj *);
void func_ov004_0222ef04(void);

void func_ov004_02230fd0(Obj *o);
void func_ov004_02231060(Obj *o);
void func_ov004_022317d0(Obj *o);
void func_ov004_02231750(Obj *o);
void func_ov004_022316e0(Obj *o);

void func_ov004_02230fd0(Obj *o) {
    if (func_020565e8(&o->unk_100, 1)) {
        func_02003c50(&o->unk_1fc, 0x832);
        o->unk_210++;
    }
    if (o->unk_210 >= o->unk_20a) {
        if (func_020565e8(&o->unk_100, (u16)(o->unk_104.mid - 1))) {
            o->unk_211 = 6;
            o->unk_158 = 0;
            o->unk_108 = 0;
            o->unk_110 = 0;
        }
    }
}

void func_ov004_02231060(Obj *o) {
    o->unk_208 = func_ov004_02231e28(0x28, 0xc8);
    o->unk_20c = (func_ov004_02231e28(0x32, 0x4b) << 12) / 100;
    o->unk_110 = o->unk_20c;
    o->unk_20a = func_ov004_02231e28(1, 7);
    o->unk_210 = 0;
    o->unk_158 = 0;
    o->unk_211 = 4;
}

void func_ov004_022310cc(Obj *o) {
    V3 l[2];
    l[0] = data_ov004_022513f0;
    o->unk_1a8 = l[0];
    l[1] = o->unk_1a8;
    func_02003c70(&o->unk_1fc, &l[1]);
    switch (o->unk_211) {
    case 2:
        func_ov004_02231060(o);
        break;
    case 4:
        func_ov004_02230fd0(o);
        break;
    case 6:
        if (o->unk_158 >= o->unk_208) {
            o->unk_211 = 2;
            o->unk_158 = 0;
        }
        break;
    }
    o->unk_158++;
}

extern Obj *data_ov004_02251d6c;

void func_ov004_02231178(Obj *o) {
    o->unk_1c7 = 0;
    o->unk_1a8.x = 0x14500;
    o->unk_1a8.y = 0x3700;
    o->unk_1a8.z = 0x15400;
    o->unk_1c0 = 0;
    data_ov004_02251d6c = o;
    func_02003cbc(&o->unk_1fc);
}

void func_ov004_022311cc(Obj *o, s32 a, s32 b) {
    if (o->unk_1a8.x <= (a + 2) << 12) {
        if (func_020e769c(&o->unk_1c0, 0x4000, 0x444)) {
            o->unk_1a8.x += 0x133;
        }
        func_ov004_0223257c(&o->unk_1a8, 0x133, o->unk_1c0);
        o->unk_110 = 0x1000;
        o->unk_1fe = 3;
        func_ov004_02232270(o, (u16)o->unk_1fe);
        return;
    }
    if (o->unk_1a8.x >= (b - 2) << 12) {
        if (func_020e769c(&o->unk_1c0, -0x4000, 0x444)) {
            o->unk_1a8.x -= 0x133;
        }
        func_ov004_0223257c(&o->unk_1a8, 0x133, o->unk_1c0);
        o->unk_110 = 0x1000;
        o->unk_1fe = 10;
        func_ov004_02232270(o, (u16)o->unk_1fe);
        return;
    }
    if (o->unk_1fe == 3) {
        func_020e769c(&o->unk_1c0, 0x4000, 0x444);
    } else if (o->unk_1fe == 10) {
        func_020e769c(&o->unk_1c0, -0x4000, 0x444);
    }
    (o->*data_ov004_02251e5c[o->unk_1ee])();
    if ((u32)(o->unk_15c - 0x35) <= 1) {
        func_020e759c(&o->unk_1a8.z, 0x10800, 0xcd);
    } else if (o->unk_15c == 0x34) {
        func_020e759c(&o->unk_1a8.z, 0x10000, 0xcd);
    }
    func_ov004_02232220(o);
    func_ov004_0222e288(o, 0x333);
}

void func_ov004_02231334(Obj *o) {
    s32 t = o->unk_15c;
    if ((u32)(t - 0x35) <= 1) {
        func_ov004_022311cc(o, 2, 0x20);
    } else if (t == 0x34) {
        func_ov004_022311cc(o, -4, 0x26);
    }
    if (o->unk_1ee != 2 && o->unk_1ee != 6) {
        func_ov004_02232130(o);
        t = o->unk_15c;
        if ((u32)(t - 0x35) <= 1) {
            func_ov004_02231f98(o, 0x924, 0x28a);
        } else if (t == 0x34) {
            func_ov004_02231f98(o, 0x71c, 0x28a);
        }
    }
    o->unk_158++;
}

void func_ov004_022313bc(Obj *o) {
    s32 *t = &o->unk_15c;
    o->unk_1e8 = *t;
    o->unk_1c7 = 0;
    if ((u32)(*t - 0x35) <= 1) {
        func_02055488(&o->unk_64, (void *)func_ov004_0222ef04, o);
    }
    s32 r;
    if (func_ov004_02231e28(0, 2) > 0) {
        r = 1;
    } else {
        r = -1;
    }
    o->unk_1c0 = r << 14;
    func_ov004_0222dea8(o);
}

void func_ov004_02231420(Obj *o, s32 a, s32 b) {
    if (o->unk_1a8.x <= (a + 2) << 12) {
        o->unk_1fc = 1;
        if (func_020e769c(&o->unk_1c0, 0x4000, 0x38e)) {
            o->unk_1a8.x += 0x19a;
        }
        o->unk_1a8.y = ((data_ov004_022402f0[o->unk_15c * 0x11] << 12) >> 6);
        func_ov004_0223257c(&o->unk_1a8, 0x19a, o->unk_1c0);
        o->unk_110 = 0x1000;
        func_ov004_02232270(o, 3);
        return;
    }
    if (o->unk_1a8.x >= (b - 2) << 12) {
        o->unk_1fc = 1;
        if (func_020e769c(&o->unk_1c0, -0x4000, 0x38e)) {
            o->unk_1a8.x -= 0x19a;
        }
        o->unk_1a8.y = ((data_ov004_022402f0[o->unk_15c * 0x11] << 12) >> 6);
        func_ov004_0223257c(&o->unk_1a8, 0x19a, o->unk_1c0);
        o->unk_110 = 0x1000;
        func_ov004_02232270(o, 10);
        return;
    }
    func_ov004_0222dfbc(o);
    func_ov004_0222e61c(o);
    (o->*data_ov004_02251e2c[o->unk_1ee])();
    func_ov004_0222e2f4(o);
    func_ov004_0222e820(o);
    func_ov004_02232220(o);
    func_ov004_0222e288(o, 0x333);
}

void func_ov004_0223156c(Obj *o) {
    func_ov004_02231420(o, -2, 0x24);
    if (o->unk_1ee != 2 && o->unk_1ee != 6) {
        func_ov004_022320c8(o);
    }
    func_ov004_0222e288(o, 0x333);
    o->unk_158++;
    func_ov004_0222ede0(o);
}

void func_ov004_022315b8(Obj *o) {
    o->unk_50 = o;
    o->unk_1c8 = 2;
    func_02055488(&o->unk_64, (void *)func_ov004_0222ef04, o);
    s32 *t = &o->unk_15c;
    o->unk_1e8 = *t;
    o->unk_1e9 = *t;
    func_ov004_0222dea8(o);
}

void func_ov004_02231600(Obj *o, V3 *out) {
    s32 t = o->unk_15c;
    static s32 k1 = (data_ov004_022402ee[t * 0x11] << 12) >> 7;
    static s32 k2 = (data_ov004_022402ef[t * 0x11] << 12) >> 7;
    V3 l[4];
    l[0].x = 0;
    l[0].y = k1;
    l[0].z = 0;
    l[1].x = 0;
    l[1].y = 0;
    l[1].z = k2;
    data_021f47e0 = o->unk_c8;
    func_01ffb898(&l[0], &data_021f47e0, &l[2]);
    func_01ffb898(&l[1], &data_021f47e0, &l[3]);
    V3 *p = &o->unk_1a8;
    out->x = (p->x + l[2].x) >> 1;
    out->z = (p->z + l[2].z) >> 1;
    if (l[3].y < p->y) {
        out->y = l[3].y;
    } else {
        out->y = p->y;
    }
}

void func_ov004_022316e0(Obj *o) {
    s32 t = o->unk_278 * o->unk_268;
    o->unk_258 = 0x1000 - t;
    s32 *p = &o->unk_258;
    s32 *q = &o->unk_27c;
    if (*p < *q) {
        *p = *q;
        o->unk_25c = *q;
        o->unk_260 = *q;
        o->unk_264 = 0;
        o->unk_268 = 0;
    } else {
        o->unk_25c = *p;
        o->unk_260 = *p;
    }
}

void func_ov004_02231750(Obj *o) {
    o->unk_258 = o->unk_27c + o->unk_278 * o->unk_268;
    if (o->unk_258 >= 0x1000) {
        o->unk_258 = 0x1000;
        o->unk_25c = 0x1000;
        o->unk_260 = 0x1000;
        o->unk_264 = 2;
        o->unk_268 = 0;
        if (o->unk_280 == 4) {
            o->unk_27c = 0x99a;
        }
    } else {
        o->unk_25c = o->unk_258;
        o->unk_260 = o->unk_258;
    }
}

void func_ov004_022317d0(Obj *o) {
    o->unk_264 = 1;
    o->unk_268 = 0;
    if (o->unk_280) {
        func_020e759c(&o->unk_278, 0x14, 0x29);
        func_020e759c(&o->unk_27c, 0xccd, 0xcd);
        o->unk_280--;
    } else {
        o->unk_278 = 0x14;
        o->unk_27c = 0xccd;
    }
}

void func_ov004_02231838(Obj *o) {
    switch (o->unk_264) {
    case 0:
        func_ov004_022317d0(o);
        break;
    case 1:
        func_ov004_02231750(o);
        break;
    case 2:
        func_ov004_022316e0(o);
        break;
    }
    o->unk_268++;
}

void func_ov004_02231878(Obj *o) {
    s32 t = 0x7b - o->unk_158 * 2;
    if (t < 0) {
        t = 0;
        o->unk_281 = 0;
        o->unk_158 = 0;
        o->unk_1ee = 2;
    }
    func_020e769c(&o->unk_1c0, o->unk_1ec, 0x2d8);
    func_ov004_0223257c(&o->unk_1a8, t, o->unk_1c0);
}
}
