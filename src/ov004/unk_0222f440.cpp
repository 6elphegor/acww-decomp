#include "types.h"

struct Unk_ov004_0222f440_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

class Unk_ov004_0222f440 {
public:
    /* 0x00 */ u8 pad_00[0x50];
    /* 0x50 */ void *unk_50;
    /* 0x54 */ u8 pad_54[0x100 - 0x54];
    /* 0x100 */ u32 unk_100;
    /* 0x104 */ Unk_ov004_0222f440_Bits unk_104;
    /* 0x108 */ u8 pad_108[0x110 - 0x108];
    /* 0x110 */ s32 unk_110;
    /* 0x114 */ u8 pad_114[0x158 - 0x114];
    /* 0x158 */ s32 unk_158;
    /* 0x15c */ s32 unk_15c;
    /* 0x160 */ u8 pad_160[0x1a8 - 0x160];
    /* 0x1a8 */ s32 unk_1a8;
    /* 0x1ac */ s32 unk_1ac;
    /* 0x1b0 */ s32 unk_1b0;
    /* 0x1b4 */ u8 pad_1b4[0x1c0 - 0x1b4];
    /* 0x1c0 */ s16 unk_1c0;
    /* 0x1c2 */ u8 pad_1c2[0x1c8 - 0x1c2];
    /* 0x1c8 */ u8 unk_1c8;
    /* 0x1c9 */ u8 pad_1c9[0x1e8 - 0x1c9];
    /* 0x1e8 */ u8 unk_1e8;
    /* 0x1e9 */ u8 unk_1e9;
    /* 0x1ea */ u8 pad_1ea[0x1ee - 0x1ea];
    /* 0x1ee */ u8 unk_1ee;
    /* 0x1ef */ u8 pad_1ef[0x1fc - 0x1ef];
    /* 0x1fc */ s32 unk_1fc;
    /* 0x200 */ s32 unk_200;
    /* 0x204 */ s32 unk_204;
    /* 0x208 */ s16 unk_208;
    /* 0x20a */ u8 pad_20a[0x20c - 0x20a];
    /* 0x20c */ s32 unk_20c;
    /* 0x210 */ s32 unk_210;
    /* 0x214 */ u8 pad_214[0x218 - 0x214];
    /* 0x218 */ s32 unk_218;
    /* 0x21c */ u8 unk_21c;
    /* 0x21d */ u8 pad_21d[0x224 - 0x21d];
    /* 0x224 */ s32 unk_224;
    /* 0x228 */ u8 pad_228[0x252 - 0x228];
    /* 0x252 */ u8 unk_252;
    /* 0x253 */ u8 pad_253[0x255 - 0x253];
    /* 0x255 */ u8 unk_255;
    /* 0x256 */ u8 unk_256;
    /* 0x257 */ u8 pad_257;
    /* 0x258 */ s32 unk_258[3];
    /* 0x264 */ s32 unk_264;
    /* 0x268 */ s32 unk_268;
    /* 0x26c */ s32 unk_26c;
    /* 0x270 */ s32 unk_270;
    /* 0x274 */ u32 unk_274;
    /* 0x278 */ u32 unk_278;
};

typedef void (Unk_ov004_0222f440::*Unk_ov004_0222f440_Fn)();

extern "C" {
typedef Unk_ov004_0222f440 Obj0222f440;
extern s16 data_02135f44[];
extern Unk_ov004_0222f440_Fn data_ov004_02251e5c[];
extern u32 data_ov004_02251e94[];

s32 func_01ffcb0c(s32 a, s32 b);
void func_020e759c(void *p, s32 a, s32 b);
s32 func_020e96a4(void *a, void *b);
s32 func_02002bdc(void *a, void *b);
BOOL func_020565e8(void *p, u32 v);
void func_02055488(void *self, void *fn, void *arg);

void func_ov004_022321e8(Obj0222f440 *o);
void func_ov004_0222f284(Obj0222f440 *o);
void func_ov004_022320c8(Obj0222f440 *o);
void func_ov004_02231eec(Obj0222f440 *o, s32 a);
void func_ov004_0222e2f4(Obj0222f440 *o);
void func_ov004_0222e288(Obj0222f440 *o, s32 a);
void func_ov004_0222e238(Obj0222f440 *o);
void func_ov004_0222e61c(Obj0222f440 *o);
void func_ov004_0222e7a4(Obj0222f440 *o);
BOOL func_ov004_0222ede0(Obj0222f440 *o);
void func_ov004_0222dea8(Obj0222f440 *o);
void func_ov004_0222ef04();
BOOL func_ov004_02231dec(void *a, void *b, void *c, s32 d);
s32 func_ov004_02231e3c(s32 a, s32 b);
s32 func_ov004_02231e28(s32 a, s32 b);
s32 func_ov004_02231e74(s32 a, s32 b);
void func_ov004_02232130(Obj0222f440 *o);
void func_ov004_02232068(Obj0222f440 *o);
void func_ov004_02232548(Obj0222f440 *o);
void func_ov004_0222ed24(Obj0222f440 *o, void *b);
BOOL func_ov004_0222ee2c(Obj0222f440 *o, void *b);
s32 func_ov004_0223257c(void *a, s32 b, s16 c);

void func_ov004_0222f440(Obj0222f440 *o);
void func_ov004_0222f59c(Obj0222f440 *o);
void func_ov004_0222f5e4(Obj0222f440 *o);
void func_ov004_0222f6c4(Obj0222f440 *o);
void func_ov004_0222f7d4(Obj0222f440 *o);
void func_ov004_0222f864(Obj0222f440 *o);
void func_ov004_0222f8d4(Obj0222f440 *o);
void func_ov004_0222f8fc(Obj0222f440 *o);
void func_ov004_0222f968(Obj0222f440 *o, s32 f);
void func_ov004_0222fa5c(Obj0222f440 *o);
void func_ov004_0222fabc(Obj0222f440 *o);
void func_ov004_0222fafc(Obj0222f440 *o);
void func_ov004_0222fbe0(Obj0222f440 *o);
void func_ov004_0222fd3c(Obj0222f440 *o);

void func_ov004_0222f440(Obj0222f440 *o) {
    if (o->unk_256 == 0) {
        if (func_020565e8(&o->unk_100, (u16)(o->unk_104.mid - 1))) {
            o->unk_256 = 1;
            func_ov004_022321e8(o);
        }
    }
    if (o->unk_1ee == 2) {
        o->unk_255 = 0;
        if (func_020565e8(&o->unk_100, (u16)(o->unk_104.mid - 1))) {
            o->unk_256 = 0;
            func_ov004_022321e8(o);
            o->unk_255 = 1;
        }
    } else if (o->unk_1ee != 2) {
        if (o->unk_255 == 0) {
            o->unk_255 = 1;
        }
    }
    if (o->unk_255 != 0) {
        (o->*data_ov004_02251e5c[o->unk_1ee])();
        func_ov004_0222f284(o);
        if (o->unk_1ee == 4) {
            func_ov004_022320c8(o);
            func_ov004_02231eec(o, 0x1554);
        }
    }
    if (o->unk_1ee != 6 && o->unk_1ee != 5) {
        func_ov004_0222e2f4(o);
    }
    if (o->unk_256 == 0) {
        func_ov004_0222e288(o, 0xccd);
    } else {
        func_ov004_0222e288(o, 0x666);
    }
    func_ov004_0222e238(o);
    func_ov004_0222e61c(o);
    func_ov004_0222e7a4(o);
    o->unk_158++;
    if (func_ov004_0222ede0(o)) {
        o->unk_256 = 0;
        func_ov004_022321e8(o);
        o->unk_255 = 1;
    }
}

void func_ov004_0222f59c(Obj0222f440 *o) {
    o->unk_50 = o;
    o->unk_1e8 = o->unk_15c;
    o->unk_1e9 = o->unk_15c;
    o->unk_1c8 = 1;
    func_ov004_0222dea8(o);
    func_02055488((u8 *)o + 0x64, (void *)func_ov004_0222ef04, o);
}

void func_ov004_0222f5e4(Obj0222f440 *o) {
    s32 t = o->unk_20c;
    s32 r = t - (o->unk_158 << 3);
    if (r < 0) {
        r = 0;
        o->unk_158 = r;
        o->unk_110 = r;
        o->unk_21c = 6;
    }
    o->unk_1a8 += func_01ffcb0c(r, data_02135f44[((u16)o->unk_1c0 >> 4) * 2]);
    o->unk_1b0 += func_01ffcb0c(r, data_02135f44[((u16)o->unk_1c0 >> 4) * 2 + 1]);
    o->unk_208 += 0x2000;
    r = r * 7 / 10;
    o->unk_1a8 += func_01ffcb0c(r, data_02135f44[((u16)o->unk_208 >> 4) * 2]);
    o->unk_1b0 += func_01ffcb0c(r, data_02135f44[((u16)o->unk_208 >> 4) * 2]);
}

void func_ov004_0222f6c4(Obj0222f440 *o) {
    s32 r;
    func_ov004_02231dec(&o->unk_1c0, &o->unk_1a8, &o->unk_1fc, 0x1600);
    r = o->unk_20c;
    o->unk_1a8 += func_01ffcb0c(r, data_02135f44[((u16)o->unk_1c0 >> 4) * 2]);
    o->unk_1b0 += func_01ffcb0c(r, data_02135f44[((u16)o->unk_1c0 >> 4) * 2 + 1]);
    o->unk_208 += 0x2000;
    r = r * 7 / 10;
    o->unk_1a8 += func_01ffcb0c(r, data_02135f44[((u16)o->unk_208 >> 4) * 2]);
    o->unk_1b0 += func_01ffcb0c(r, data_02135f44[((u16)o->unk_208 >> 4) * 2]);
    if (o->unk_158 >= *(u8 *)&o->unk_210) {
        o->unk_158 = 0;
        o->unk_21c = 5;
        o->unk_218 >>= 1;
        o->unk_110 = o->unk_218;
    }
}

void func_ov004_0222f7d4(Obj0222f440 *o) {
    o->unk_1c0 += func_ov004_02231e3c(0x5a, 0);
    *(u8 *)&o->unk_210 = func_ov004_02231e28(0x14, 0x78);
    *(u16 *)((u8 *)o + 0x212) = func_ov004_02231e28(0x3c, 0xf0);
    o->unk_20c = func_ov004_02231e74(2, 4) / 100;
    o->unk_158 = 0;
    o->unk_1ac = 0x700;
    o->unk_110 = o->unk_218 = 0x1000;
    o->unk_21c = 4;
}

void func_ov004_0222f864(Obj0222f440 *o) {
    switch (o->unk_21c) {
    case 2:
        func_ov004_0222f7d4(o);
        break;
    case 4:
        func_ov004_0222f6c4(o);
        break;
    case 5:
        func_ov004_0222f5e4(o);
        break;
    case 6:
        if (o->unk_158 >= *(u16 *)((u8 *)o + 0x212)) {
            o->unk_158 = 0;
            o->unk_21c = 2;
        }
        break;
    }
    o->unk_158++;
}

void func_ov004_0222f8d4(Obj0222f440 *o) {
    o->unk_1fc = 0xc800;
    o->unk_200 = 0;
    o->unk_204 = 0x14a00;
}

void func_ov004_0222f8fc(Obj0222f440 *o) {
    func_020e759c(&o->unk_1a8, o->unk_264, o->unk_210);
    func_020e759c(&o->unk_1b0, o->unk_26c, o->unk_210);
    if (o->unk_158 > o->unk_270) {
        o->unk_256 = 0;
        o->unk_158 = 0;
        o->unk_1ee = 2;
    }
}

void func_ov004_0222f968(Obj0222f440 *o, s32 f) {
    if (o->unk_255 == 0) {
        o->unk_252 = o->unk_15c;
        o->unk_256 = 0;
        return;
    }
    if (o->unk_1ac > o->unk_268) {
        if (f != 0) {
            func_020e759c(&o->unk_1ac, o->unk_268, o->unk_224 << 2);
        } else {
            func_020e759c(&o->unk_1ac, o->unk_268, o->unk_224);
        }
    }
    if (func_020e96a4(&o->unk_1a8, &o->unk_264) <= 0x800) {
        if (o->unk_1ac <= o->unk_268) {
            o->unk_256 = 3;
            o->unk_158 = 0;
            o->unk_270 = func_ov004_02231e28(0x3c, 0x78);
        }
    } else {
        o->unk_1c0 = func_02002bdc(&o->unk_1a8, &o->unk_264);
        if (f != 0) {
            func_ov004_0223257c(&o->unk_1a8, o->unk_210 << 1, o->unk_1c0);
        } else {
            func_ov004_0223257c(&o->unk_1a8, o->unk_210 >> 1, o->unk_1c0);
        }
    }
}

void func_ov004_0222fa5c(Obj0222f440 *o) {
    switch (o->unk_256) {
    case 1: {
        func_ov004_0222f968(o, 0);
        u8 a = o->unk_1e8;
        u8 *p = &o->unk_252;
        if (*p != a) {
            if (a != o->unk_15c) {
                *p = a;
                o->unk_256 = 2;
            }
        }
        break;
    }
    case 2:
        func_ov004_0222f968(o, 1);
        break;
    case 3:
        func_ov004_0222f8fc(o);
        break;
    }
}

void func_ov004_0222fabc(Obj0222f440 *o) {
    u32 buf[4];
    if (func_ov004_0222ee2c(o, buf)) {
        if (o->unk_255 != 0) {
            if (o->unk_256 != 3) {
                o->unk_256 = 2;
            }
        } else {
            func_ov004_0222ed24(o, buf);
        }
    }
}

void func_ov004_0222fafc(Obj0222f440 *o) {
    if (o->unk_1ee != 2 && o->unk_1ee != 6) {
        func_ov004_02232130(o);
        func_ov004_02232068(o);
    }
    (o->*data_ov004_02251e5c[o->unk_1ee])();
    func_ov004_0222e2f4(o);
    if (func_ov004_02231dec(&o->unk_1c0, &o->unk_1a8, o->unk_258, 0x1000)) {
        func_ov004_02232548(o);
    } else {
        if (*(u8 *)&o->unk_1fc != 0) {
            o->unk_1ee = 2;
            *(u8 *)&o->unk_1fc = 0;
        }
    }
    {
        u8 a = o->unk_1e8;
        u8 *p = &o->unk_252;
        if (*p != a) {
            if (a != o->unk_15c) {
                *p = a;
                if (o->unk_1ee != 1) {
                    func_ov004_0222ed24(o, (u8 *)data_ov004_02251e94[o->unk_1e8] + 0x1a8);
                }
            }
        }
    }
    func_ov004_0222ede0(o);
}

void func_ov004_0222fbe0(Obj0222f440 *o) {
    if (func_020e96a4(&o->unk_1a8, o->unk_258) <= 0x1000) {
        o->unk_255 = 1;
    } else {
        o->unk_255 = 0;
    }
    if (o->unk_256 == 0) {
        if (o->unk_1ee != 2 && o->unk_1ee != 6) {
            func_ov004_022320c8(o);
            func_ov004_02231eec(o, 0x1554);
        }
        (o->*data_ov004_02251e5c[o->unk_1ee])();
        func_ov004_0222e2f4(o);
        if (func_ov004_02231dec(&o->unk_1c0, &o->unk_1a8, o->unk_258, 0x1000)) {
            if (o->unk_278 >= o->unk_274) {
                o->unk_278 = 0;
                o->unk_256 = 1;
                o->unk_274 = func_ov004_02231e28(200, 0x140);
            }
            {
                u8 a = o->unk_1e8;
                u8 *p = &o->unk_252;
                if (*p != a) {
                    if (a != o->unk_15c) {
                        *p = a;
                        o->unk_256 = 2;
                    }
                }
            }
        } else {
            u8 a = o->unk_1e8;
            u8 *p = &o->unk_252;
            if (*p != a) {
                if (a != o->unk_15c) {
                    *p = a;
                    if (o->unk_1ee != 1) {
                        func_ov004_0222ed24(o, (u8 *)data_ov004_02251e94[o->unk_1e8] + 0x1a8);
                    }
                }
            }
        }
        o->unk_278++;
    } else {
        func_ov004_0222fa5c(o);
    }
    func_ov004_0222fabc(o);
}

void func_ov004_0222fd3c(Obj0222f440 *o) {
    if (o->unk_15c == 0x26) {
        func_ov004_0222fbe0(o);
    } else if (o->unk_15c == 0xc) {
        func_ov004_0222fafc(o);
    }
    func_ov004_0222e288(o, 0x666);
    o->unk_158++;
}
}
