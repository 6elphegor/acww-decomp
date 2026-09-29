#include "types.h"

class Unk_ov004_0222fd7c;
typedef void (Unk_ov004_0222fd7c::*Unk_ov004_0222fd7c_Fn)();

class Unk_ov004_0222fd7c {
public:
    /* 0x000 */ u8 pad_000[4];
    /* 0x004 */ u8 unk_04[0x4c];
    /* 0x050 */ Unk_ov004_0222fd7c *unk_50;
    /* 0x054 */ u8 pad_054[0x64 - 0x54];
    /* 0x064 */ u8 unk_64[0x110 - 0x64];
    /* 0x110 */ s32 unk_110;
    /* 0x114 */ u8 pad_114[0x158 - 0x114];
    /* 0x158 */ s32 unk_158;
    /* 0x15c */ s32 unk_15c;
    /* 0x160 */ u8 pad_160[4];
    /* 0x164 */ u8 unk_164;
    /* 0x165 */ u8 pad_165[0x1a8 - 0x165];
    /* 0x1a8 */ s32 unk_1a8;
    /* 0x1ac */ s32 unk_1ac;
    /* 0x1b0 */ s32 unk_1b0;
    /* 0x1b4 */ s32 unk_1b4;
    /* 0x1b8 */ s32 unk_1b8;
    /* 0x1bc */ s32 unk_1bc;
    /* 0x1c0 */ s16 unk_1c0;
    /* 0x1c2 */ u8 pad_1c2[2];
    /* 0x1c4 */ s16 unk_1c4;
    /* 0x1c6 */ u8 pad_1c6[4];
    /* 0x1ca */ s8 unk_1ca;
    /* 0x1cb */ u8 pad_1cb;
    /* 0x1cc */ s32 unk_1cc;
    /* 0x1d0 */ u8 pad_1d0[0x1e8 - 0x1d0];
    /* 0x1e8 */ u8 unk_1e8;
    /* 0x1e9 */ u8 unk_1e9;
    /* 0x1ea */ u8 pad_1ea[4];
    /* 0x1ee */ u8 unk_1ee;
    /* 0x1ef */ u8 pad_1ef[0x20c - 0x1ef];
    /* 0x20c */ s32 unk_20c;
    /* 0x210 */ s32 unk_210;
    /* 0x214 */ u8 pad_214[0x224 - 0x214];
    /* 0x224 */ s32 unk_224;
    /* 0x228 */ s32 unk_228;
    /* 0x22c */ u8 pad_22c[0x23c - 0x22c];
    /* 0x23c */ s32 unk_23c;
    /* 0x240 */ u8 pad_240[0x255 - 0x240];
    /* 0x255 */ u8 unk_255;
    /* 0x256 */ s8 unk_256;
    /* 0x257 */ u8 unk_257;
    /* 0x258 */ u8 unk_258;
    /* 0x259 */ u8 unk_259;
};

struct Unk_ov004_0222fd7c_W {
    u8 pad[0x258];
    s32 w[6];
};

struct Unk_ov004_022303b4_Vec {
    s32 x, y, z;
};

struct Unk_ov004_022303b4_P {
    u8 pad_00[0x5c];
    Unk_ov004_022303b4_Vec unk_5c;
    u8 pad_68[0x98 - 0x68];
    s32 unk_98;
};

typedef Unk_ov004_0222fd7c Obj;
typedef Unk_ov004_0222fd7c_Fn ObjFn;
typedef Unk_ov004_022303b4_P P;
typedef Unk_ov004_022303b4_Vec V3;

extern "C" {
extern ObjFn data_ov004_02251e5c[];
extern ObjFn data_ov004_02251db4[];
extern u8 data_ov004_022404ec[];
extern s32 data_ov004_02251d84[];

s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02133150(s32 a, s32 b);
s32 func_020e769c(s16 *p, s32 a, s32 b);
s32 func_020e759c(s32 *p, s32 a, s32 b);
long long func_020e9600(void *a, void *b);
s32 func_02002bdc(s32 *a, s32 *b);
P *func_020947f0(s32 n);
P *func_02095204(s32 n);
BOOL func_020308b4(s32 *p, s32 a, s32 *c, s32 w, s32 h);
void func_02088c64(void *self, void *v, s32 a, s32 b, u32 c, u32 d, u32 e, u32 f, s32 g);
void func_02089040(void *a);
void func_02055488(void *a, void *cb, void *arg);

s32 func_ov004_02231e28(s32 a, s32 b);
s16 func_ov004_02231e3c(s32 a, s32 b);
void func_ov004_0223257c(void *a, s32 b, s16 c);
void func_ov004_02232548(Obj *o);
void func_ov004_02232130(Obj *o);
void func_ov004_02231f98(Obj *o, s32 a, s32 b);
void func_ov004_0222e2f4(Obj *o);
void func_ov004_0222e288(Obj *o, s32 a);
void func_ov004_0222ede0(Obj *o);
void func_ov004_0222dea8(Obj *o);
void func_ov004_0222ef04(Obj *o);

void func_ov004_0222fd7c(Obj *o);
void func_ov004_0222fe1c(Obj *o);
void func_ov004_0222fff8(Obj *o);
void func_ov004_02230034(Obj *o);
void func_ov004_022300e4(Obj *o);
void func_ov004_0223012c(Obj *o);
void func_ov004_0223015c(Obj *o);
void func_ov004_022301b4(Obj *o);
void func_ov004_022301fc(Obj *o);
void func_ov004_02230238(Obj *o);
void func_ov004_022302b4(Obj *o);
void func_ov004_022303b4(Obj *o);
void func_ov004_022304f4(Obj *o);
void func_ov004_022305dc(Obj *o);
}

extern "C" void func_ov004_0222fd7c(Obj *o) {
    o->unk_50 = o;
    s32 *p = &o->unk_15c;
    o->unk_1e8 = *p;
    o->unk_1e9 = *p;
    Unk_ov004_0222fd7c_W *w = (Unk_ov004_0222fd7c_W *)o;
    if (*p == 0x26) {
        w->w[0] = 0x9e00;
        w->w[1] = 0x1000;
        w->w[2] = 0x14700;
        w->w[3] = 0xa100;
        w->w[4] = 0xb00;
        w->w[5] = 0x14a00;
    } else if (*p == 0xc) {
        w->w[0] = 0x15900;
        w->w[1] = 0x1000;
        w->w[2] = 0x13900;
    }
    func_ov004_0222dea8(o);
}

extern "C" void func_ov004_0222fe1c(Obj *o) {
    switch (o->unk_1ee) {
    case 0:
    case 2:
        break;
    case 3:
        o->unk_23c = o->unk_23c + 1;
        break;
    case 5:
        o->unk_23c = o->unk_23c - 1;
        break;
    case 4:
        if (o->unk_258 == 0) o->unk_158 = 0;
        break;
    case 1: {
        o->unk_1ac -= o->unk_224 * 2;
        if (o->unk_1ac < o->unk_228) o->unk_1ac = o->unk_228;
        return;
    }
    }
    {
        s32 a = -o->unk_23c;
        a *= o->unk_256;
        s32 b = o->unk_20c * 1000;
        b >>= 12;
        o->unk_1c4 = a * b;
    }
    {
        s32 v = o->unk_1c4;
        if (v <= -0x1554) o->unk_1c4 = -0x1554;
        else if (v >= 0x1554) o->unk_1c4 = 0x1554;
    }
    o->unk_1ac += o->unk_224 * o->unk_256;
    switch (o->unk_258) {
    case 0:
        if (o->unk_1ac > 0x299a) {
            if (o->unk_1ee == 4) {
                o->unk_257++;
                if (o->unk_257 >= 0x14) {
                    o->unk_1ee = 5;
                    o->unk_258 = 1;
                    o->unk_257 = 0;
                }
            }
        }
        break;
    case 1:
        o->unk_1ac = o->unk_1ac - func_01ffcb0c(0x1800, o->unk_224 * o->unk_256);
        if (o->unk_1ee == 6) {
            if (o->unk_1ac < o->unk_1cc) {
                o->unk_256 = 1;
                o->unk_255 = 0;
                o->unk_258 = 0;
                o->unk_259 = 1;
            } else {
                o->unk_1ee = 2;
                o->unk_256 = -1;
                o->unk_258 = 2;
            }
        }
        break;
    case 2:
        if (o->unk_1ac < o->unk_1cc) {
            if (o->unk_1ee == 2) {
                o->unk_256 = 1;
                o->unk_255 = 0;
                o->unk_258 = 0;
                o->unk_259 = 1;
            }
        }
        break;
    }
    {
        s32 t = o->unk_1ac;
        if (t > 0x299a) o->unk_1ac = 0x299a;
        else if (t < o->unk_228) o->unk_1ac = o->unk_228;
    }
}

extern "C" void func_ov004_0222fff8(Obj *o) {
    (o->*data_ov004_02251e5c[o->unk_1ee])();
    func_ov004_0222fe1c(o);
}

extern "C" void func_ov004_02230034(Obj *o) {
    if (o->unk_1ee == 2) {
        if (o->unk_259 != 0) {
            if (func_ov004_02231e28(0, 100) < 15) {
                o->unk_255 = 1;
                return;
            }
            o->unk_259 = 0;
        } else {
            if (func_ov004_02231e28(0, 100) < 0x46) {
                o->unk_255 = 1;
                return;
            }
        }
    }
    (o->*data_ov004_02251e5c[o->unk_1ee])();
    func_ov004_02232548(o);
    if (o->unk_1ee != 2 && o->unk_1ee != 6) {
        func_ov004_02232130(o);
        func_ov004_02231f98(o, 0x1554, 0x3e8);
        func_ov004_0222e2f4(o);
    }
}

extern "C" void func_ov004_022300e4(Obj *o) {
    switch (o->unk_255) {
    case 0:
        func_ov004_02230034(o);
        break;
    case 1:
        func_ov004_0222fff8(o);
        break;
    }
    func_ov004_0222e288(o, 0x333);
    o->unk_158 = o->unk_158 + 1;
    func_ov004_0222ede0(o);
}

extern "C" void func_ov004_0223012c(Obj *o) {
    o->unk_1e8 = o->unk_15c;
    func_02055488(&o->unk_64, (void *)func_ov004_0222ef04, o);
    func_ov004_0222dea8(o);
}

extern "C" void func_ov004_0223015c(Obj *o) {
    func_ov004_0223257c(&o->unk_1a8, 0xcd, -o->unk_1c0);
    if (o->unk_158 % 4 == 1) o->unk_257 = 1;
    if (o->unk_158 >= o->unk_258) o->unk_257 = 0;
}

extern "C" void func_ov004_022301b4(Obj *o) {
    func_ov004_0223257c(&o->unk_1a8, 0x266, o->unk_1c0);
    s16 t = func_ov004_02231e3c(0x168, 0);
    func_ov004_0223257c(&o->unk_1a8, 0x52, t);
    o->unk_257 = 2;
}

extern "C" void func_ov004_022301fc(Obj *o) {
    if (func_ov004_02231e28(0, 100) < 15) {
        o->unk_257 = 1;
        o->unk_258 = func_ov004_02231e28(8, 0xd);
        o->unk_158 = 0;
    }
}

extern "C" void func_ov004_02230238(Obj *o) {
    o->unk_1ac = o->unk_1ac + o->unk_224 * o->unk_1ca;
    if (func_ov004_02231e28(0, 100) < 15) o->unk_1ca *= -1;
    if (o->unk_1ac > o->unk_1cc) {
        o->unk_1ca = -1;
        o->unk_1ac = o->unk_1cc;
    } else if (o->unk_1ac < o->unk_228) {
        o->unk_1ca = 1;
        o->unk_1ac = o->unk_228;
    }
}

extern "C" void func_ov004_022302b4(Obj *o) {
    P *p = func_020947f0(4);
    if (p == 0) {
        o->unk_255 = 0;
        return;
    }
    if (o->unk_1c4 != 0) func_020e769c(&o->unk_1c4, 0, 0x16c);
    if (o->unk_1ac != 0x199a) func_020e759c(&o->unk_1ac, 0x199a, o->unk_224);
    switch (o->unk_257) {
    case 1:
        func_ov004_022301b4(o);
        break;
    case 2:
        func_ov004_0223015c(o);
        break;
    case 0:
        func_ov004_022301fc(o);
        break;
    }
    func_020e769c(&o->unk_1c0, func_02002bdc(&o->unk_1a8, (s32 *)p), 0x222);
    long long d = func_020e9600(p, &o->unk_1a8);
    if (0x10000 < d) {
        o->unk_255 = 0;
        o->unk_158 = 0;
    } else if (0x4000 < d) {
        o->unk_255 = 1;
        o->unk_158 = 0;
    }
    o->unk_110 = 0x1000;
}

extern "C" void func_ov004_022303b4(Obj *o) {
    V3 v;
    P *p = func_02095204(4);
    if (p == 0) {
        o->unk_255 = 0;
        return;
    }
    V3 *pv = &p->unk_5c;
    v.x = p->unk_5c.x;
    v.y = pv->y;
    v.z = pv->z;
    func_020e769c(&o->unk_1c0, func_02002bdc(&o->unk_1a8, (s32 *)&v), 0x222);
    func_ov004_0223257c(&o->unk_1a8, o->unk_210, o->unk_1c0);
    if (p->unk_98 != 0) {
        if (o->unk_1c4 != 0) func_020e769c(&o->unk_1c4, 0, 0x222);
        if (o->unk_1ac != 0x199a) func_020e759c(&o->unk_1ac, 0x199a, o->unk_224);
        o->unk_259 = 0;
    } else {
        func_ov004_02230238(o);
        o->unk_259++;
        if (o->unk_259 >= 0x46) {
            o->unk_255 = 0;
            o->unk_1ee = 2;
            o->unk_158 = 0;
            o->unk_259 = 0;
            return;
        }
    }
    long long d = func_020e9600(&v, &o->unk_1a8);
    if (d < 0x4000) {
        if ((u8)o->unk_256 != 0) {
            o->unk_255 = 2;
            o->unk_158 = 0;
        }
    } else if (0x10000 < d) {
        o->unk_255 = 0;
        o->unk_158 = 0;
    }
    o->unk_110 = 0x1000;
}

extern "C" void func_ov004_022304f4(Obj *o) {
    (o->*data_ov004_02251e5c[o->unk_1ee])();
    func_ov004_02232548(o);
    if (o->unk_1ee != 2 && o->unk_1ee != 6) {
        func_ov004_02232130(o);
        func_ov004_02231f98(o, 0x1554, 0x384);
        func_ov004_0222e2f4(o);
    }
    func_ov004_0222e288(o, 0x666);
    P *p = func_02095204(4);
    if (p != 0) {
        V3 v;
        V3 *pv = &p->unk_5c;
        v.x = p->unk_5c.x;
        v.y = pv->y;
        v.z = pv->z;
        if (func_020e9600(&v, &o->unk_1a8) < 0x10000) {
            o->unk_259++;
            if (o->unk_259 > 0xa) {
                if (p->unk_98 != 0) {
                    o->unk_255 = 1;
                    o->unk_158 = 0;
                    o->unk_259 = 0;
                }
            }
        } else {
            o->unk_259 = 0;
        }
    }
}

extern "C" void func_ov004_022305dc(Obj *o) {
    (o->*data_ov004_02251db4[o->unk_255])();
    s32 t = (data_ov004_022404ec[1] << 12) >> 7;
    o->unk_256 = func_020308b4(&o->unk_1a8, t, data_ov004_02251d84, 0x11c00, 0x5c00);
    s32 g = func_02133150(o->unk_164 << 12, 10);
    func_02088c64(o->unk_04, &o->unk_1a8, t, (data_ov004_022404ec[0] << 12) >> 7, 0x100, 0x140, 0, 0xff, g);
    func_02089040(o->unk_04);
    o->unk_1b4 = o->unk_1a8;
    o->unk_1b8 = o->unk_1ac;
    o->unk_1bc = o->unk_1b0;
    o->unk_158 = o->unk_158 + 1;
}
