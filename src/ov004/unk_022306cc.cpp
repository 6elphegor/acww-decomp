#include "types.h"

struct Unk_ov004_022306f0_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class Unk_ov004_022306cc {
public:
    typedef void (Unk_ov004_022306cc::*Fn)();
    virtual void vfunc_00();
    virtual void vfunc_04();
    u8 pad_04[0x3c];
    u8 unk_40;
    u8 pad_41[0x50 - 0x41];
    Unk_ov004_022306cc *unk_50;
    u8 pad_54[0x64 - 0x54];
    u8 unk_64[0x100 - 0x64];
    u32 unk_100;
    Unk_ov004_022306f0_Bits unk_104;
    u8 pad_108[0x110 - 0x108];
    s32 unk_110;
    u8 pad_114[0x158 - 0x114];
    s32 unk_158;
    s32 unk_15c;
    u8 pad_160[0x1a8 - 0x160];
    s32 unk_1a8;
    s32 unk_1ac;
    s32 unk_1b0;
    s32 unk_1b4;
    s32 unk_1b8;
    u8 pad_1bc[0x1c0 - 0x1bc];
    s16 unk_1c0;
    u8 pad_1c2[2];
    u16 unk_1c4;
    u8 pad_1c6;
    u8 unk_1c7;
    u8 unk_1c8;
    u8 pad_1c9[0x1e8 - 0x1c9];
    u8 unk_1e8;
    u8 unk_1e9;
    u8 pad_1ea[0x1ee - 0x1ea];
    u8 unk_1ee;
    u8 pad_1ef[0x200 - 0x1ef];
    s32 unk_200;
    union {
        s32 unk_204;
        u8 unk_204b[4];
    };
    s32 unk_208;
    u8 unk_20c;
    u8 unk_20d;
    u8 unk_20e;
    u8 pad_20f;
    s32 unk_210;
    s32 unk_214;
    s32 unk_218;
    s32 unk_21c;
    u8 pad_220[0x230 - 0x220];
    u16 unk_230;
    u8 pad_232[0x255 - 0x232];
    u8 unk_255;
    u8 unk_256;
    u8 unk_257;
    union {
        u8 unk_258;
        s32 unk_258w;
    };
    s32 unk_25c;
    s32 unk_260;
    s32 unk_264;
    s32 unk_268;
    u8 pad_26c[4];
    s32 unk_270;
    s32 unk_274;
};

typedef Unk_ov004_022306cc Ent;

extern "C" {
extern Ent::Fn data_ov004_02251e5c[];
extern Ent::Fn data_ov004_02251e04[];
extern Ent *data_ov004_02251d78;
extern u8 data_ov004_022402f4[];
extern u8 data_ov004_022402f5[];
extern u8 data_ov004_022402f6[];
extern u8 data_ov004_022402f7[];

BOOL func_020565e8(void *, u32);
void func_02055488(void *, void *, void *);
s32 func_ov004_0222dea8(Ent *);
s32 func_ov004_0222dfbc(Ent *);
s32 func_ov004_0222e238(Ent *);
s32 func_ov004_0222e288(Ent *, s32);
s32 func_ov004_0222e2f4(Ent *);
s32 func_ov004_0222e61c(Ent *);
s32 func_ov004_0222e7a4(Ent *);
s32 func_ov004_0222ede0(Ent *);
void func_ov004_0222ef04(void *);
s32 func_ov004_022320c8(Ent *);
void func_ov004_022321e8(Ent *, s32);
s32 func_ov004_02231dec(void *, void *, void *, s32);
s32 func_ov004_02231e28(s32, s32);
s32 func_ov004_02231eec(Ent *, s32);
s32 func_ov004_022319ac(void *, void *, void *, s32, s32);
s32 func_ov004_02231e8c(Ent *, s32, s32, s32);
s32 func_ov004_02231600(Ent *, void *);
}

extern "C" void func_ov004_022306cc(Ent *e) {
    e->unk_1e8 = e->unk_15c;
    e->unk_1c7 = 0;
    func_ov004_0222dea8(e);
}

extern "C" void func_ov004_022306f0(Ent *e) {
    u32 v;
    s32 t;
    func_ov004_0222dfbc(e);
    (e->*data_ov004_02251e5c[e->unk_1ee])();
    v = (u16)(e->unk_104.mid - 1);
    if (e->unk_110 > 0x1000) {
        v = (u16)(e->unk_104.mid - 2);
    }
    switch (e->unk_256) {
    case 0:
        if (e->unk_40 != 0) {
            e->unk_255 = 1;
        }
        if (e->unk_255 != 0) {
            if (func_020565e8(&e->unk_100, v)) {
                e->unk_256 = 1;
                t = e->unk_210;
                e->unk_210 = t << 1;
                func_ov004_022321e8(e, 1);
                e->unk_255 = 0;
            }
        }
        break;
    case 1:
        if (func_020565e8(&e->unk_100, v)) {
            e->unk_257 = func_ov004_02231e28(0x3c, 0x50);
            e->unk_258 = 0;
            e->unk_256 = 2;
            func_ov004_022321e8(e, 2);
        }
        break;
    case 2: {
        u32 b = e->unk_258;
        if (b > e->unk_257) {
            if (func_020565e8(&e->unk_100, v)) {
                e->unk_256 = 3;
                e->unk_210 = e->unk_210 >> 1;
                func_ov004_022321e8(e, 3);
            }
        } else {
            e->unk_258 = b + 1;
        }
        break;
    }
    case 3:
        if (func_020565e8(&e->unk_100, v)) {
            e->unk_256 = 0;
            func_ov004_022321e8(e, 0);
        }
        break;
    }
    if (e->unk_1ee != 2 && e->unk_1ee != 6) {
        func_ov004_022320c8(e);
        func_ov004_02231eec(e, 0x1554);
        func_ov004_0222e2f4(e);
    }
    func_ov004_0222e288(e, 0x666);
    func_ov004_0222e238(e);
    func_ov004_0222e61c(e);
    func_ov004_0222e7a4(e);
    e->unk_158++;
    if (func_ov004_0222ede0(e)) {
        if (e->unk_256 == 0) {
            e->unk_255 = 1;
        } else {
            e->unk_258 = 0;
        }
    }
}

extern "C" void func_ov004_022308b8(Ent *e) {
    e->unk_50 = e;
    e->unk_1e8 = e->unk_15c;
    e->unk_1e9 = e->unk_15c;
    e->unk_1c8 = 1;
    func_ov004_0222dea8(e);
    func_02055488(&e->unk_64, (void *)func_ov004_0222ef04, e);
}

extern "C" void func_ov004_02230900(Ent *e) {
    func_ov004_02231dec(&e->unk_1c0, &e->unk_1a8, &e->unk_258, 0x1000);
    switch (e->unk_255) {
    case 1: {
        s32 r = func_ov004_02231e28(0, 0x64);
        if (r <= 8 || e->unk_1ac >= 0x2000) {
            e->unk_21c = 0;
            e->unk_255 = 2;
        } else if (e->unk_1ac == e->unk_1b8) {
            e->unk_21c = 0;
            e->unk_255 = 0;
        }
        e->unk_110 = 0xb33;
        break;
    }
    case 0: {
        s32 r = func_ov004_02231e28(0, 0x64);
        if (r <= 10) {
            e->unk_21c = 0;
            e->unk_255 = 1;
        }
        e->unk_110 = 0x1000;
        break;
    }
    case 2: {
        s32 r = func_ov004_02231e28(0, 0x64);
        if (r <= 3 || e->unk_1ac <= 0x1000) {
            e->unk_21c = 0;
            e->unk_255 = 1;
        }
        e->unk_110 = 0x666;
        break;
    }
    }
    (e->*data_ov004_02251e5c[e->unk_1ee])();
    func_ov004_022319ac(&e->unk_1c4, &e->unk_264, &e->unk_268, 0x11c6, 0x96);
    if (e->unk_1ee != 2) {
        func_ov004_0222e2f4(e);
    }
    func_ov004_02231e8c(e, 8, 0x51, e->unk_255);
    e->unk_21c++;
    e->unk_158++;
    func_ov004_0222ede0(e);
}

extern "C" void func_ov004_02230a74(Ent *e) {
    s32 *p = &e->unk_15c;
    e->unk_1e8 = *p;
    e->unk_1e9 = *p;
    e->unk_1c8 = 0;
    e->unk_210 = 0x51;
    e->unk_214 = 2;
    e->unk_218 = 2;
    e->unk_230 = 0x3c;
    e->unk_258w = 0x7000;
    e->unk_25c = 0;
    e->unk_260 = 0x14a00;
    e->unk_204b[0] = data_ov004_022402f4[*p * 0x11];
    e->unk_204b[1] = data_ov004_022402f5[*p * 0x11];
    e->unk_204b[2] = data_ov004_022402f6[*p * 0x11];
    e->unk_204b[3] = data_ov004_022402f7[*p * 0x11];
}

extern "C" void func_ov004_02230b40(Ent *e) {
    if ((u8)(e->unk_1ee + 0xfd) <= 1) {
        func_ov004_02231dec(&e->unk_1c0, &e->unk_1a8, &e->unk_258, 0x1000);
    }
    (e->*data_ov004_02251e5c[e->unk_1ee])();
    func_ov004_022319ac(&e->unk_1c4, &e->unk_270, &e->unk_274, 0x2aac, 0x12c);
    switch (e->unk_255) {
    case 1: {
        s32 r = func_ov004_02231e28(0, 0x64);
        if (r <= 1 || e->unk_1ac >= 0x2b33) {
            if (func_020565e8(&e->unk_100, 1)) {
                e->unk_21c = 0;
                e->unk_255 = 2;
            }
        } else {
            r = func_ov004_02231e28(0, 0x64);
            if (r <= 0x1e) {
                e->unk_21c = 0;
                e->unk_255 = 0;
            } else if (e->unk_1ac == e->unk_1b8) {
                e->unk_21c = 0;
                e->unk_255 = 0;
            }
        }
        e->unk_110 = 0xe66;
        break;
    }
    case 0: {
        s32 r = func_ov004_02231e28(0, 0x64);
        if (r <= 0x1e) {
            e->unk_21c = 0;
            e->unk_255 = 1;
        }
        e->unk_110 = 0x1000;
        break;
    }
    case 2: {
        s32 r = func_ov004_02231e28(0, 0x64);
        if (r <= 1 || e->unk_1ac <= 0x800) {
            e->unk_21c = 0;
            e->unk_255 = 1;
        }
        e->unk_110 = 0x666;
        break;
    }
    }
    if (e->unk_1ee != 2) {
        func_ov004_0222e2f4(e);
    }
    func_ov004_02231e8c(e, 8, 0x14, e->unk_255);
    e->unk_21c++;
    e->unk_158++;
    func_ov004_0222ede0(e);
    func_ov004_02231600(e, &e->unk_264);
}

extern "C" void func_ov004_02230d08(Ent *e) {
    s32 *p = &e->unk_15c;
    e->unk_1e8 = *p;
    e->unk_1e9 = *p;
    e->unk_1c8 = 0;
    e->unk_210 = 0x3a;
    e->unk_214 = 1;
    e->unk_218 = 1;
    e->unk_230 = 0x1e;
    e->unk_258w = 0x6000;
    e->unk_25c = 0;
    e->unk_260 = 0x14a00;
    e->unk_204b[0] = data_ov004_022402f4[*p * 0x11];
    e->unk_204b[1] = data_ov004_022402f5[*p * 0x11];
    e->unk_204b[2] = data_ov004_022402f6[*p * 0x11];
    e->unk_204b[3] = data_ov004_022402f7[*p * 0x11];
    data_ov004_02251d78 = e;
}

extern "C" void func_ov004_02230ddc(Ent *e) {
    e->unk_110 = 0;
    if (e->unk_158 >= e->unk_20d) {
        e->unk_20e = 0;
        e->unk_158 = 0;
    }
}

extern "C" void func_ov004_02230e10(Ent *e) {
    s32 t = e->unk_208 - e->unk_204 * e->unk_158;
    if (t <= 0) {
        t = 0;
        e->unk_20e = 4;
        e->unk_158 = 0;
    }
    e->unk_110 = t;
}

extern "C" void func_ov004_02230e50(Ent *e) {
    if (e->unk_158 >= e->unk_20c) {
        e->unk_20e = 3;
        e->unk_158 = 0;
    }
    e->unk_110 = e->unk_208;
}

extern "C" void func_ov004_02230e88(Ent *e) {
    s32 t = e->unk_200 * e->unk_158 * 5;
    s32 m = e->unk_208;
    if (t >= m) {
        t = m;
        e->unk_20e = 2;
        e->unk_158 = 0;
    }
    e->unk_110 = t;
}

extern "C" void func_ov004_02230ecc(Ent *e) {
    e->unk_208 = (func_ov004_02231e28(0xb, 0xf) << 12) / 10;
    e->unk_200 = (func_ov004_02231e28(0x14, 0x32) << 12) / 1000;
    e->unk_204 = (func_ov004_02231e28(0xa, 0x1e) << 12) / 1000;
    e->unk_20c = func_ov004_02231e28(1, 0x96);
    e->unk_20d = func_ov004_02231e28(0xa, 0x78);
    e->unk_158 = 0;
    e->unk_110 = 0;
    e->unk_20e = 1;
}

extern "C" void func_ov004_02230f60(Ent *e) {
    (e->*data_ov004_02251e04[e->unk_20e])();
    e->unk_158++;
}

extern "C" void func_ov004_02230fa4(Ent *e) {
    e->unk_1c7 = 0;
    e->unk_1a8 = 0;
    e->unk_1ac = 0;
    e->unk_1b0 = 0;
    e->unk_1c0 = 0;
}
