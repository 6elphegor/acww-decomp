// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov067_0225facc_Msg {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u16 unk_0e;
    u16 unk_10;
};

struct Unk_ov067_0225facc_Sub {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u16 unk_0c;
    u16 unk_0e;
    u16 unk_10;
    u16 unk_12;
    u16 unk_14;
    u16 unk_16;
    u16 unk_18;
    u8 pad_1a[0x32 - 0x1a];
    u16 unk_32;
};

typedef void (*Unk_ov067_0225facc_Cb)(u32, void *);

struct Unk_ov067_0225facc_Ctx {
    u8 pad_0000[0x50e0];
    u16 unk_50e0;
    u16 unk_50e2;
    u16 unk_50e4;
    u16 unk_50e6;
    u16 unk_50e8;
    u16 unk_50ea;
    u32 unk_50ec;
    s32 unk_50f0;
    s32 unk_50f4;
    Unk_ov067_0225facc_Cb unk_50f8;
    Unk_ov067_0225facc_Sub *unk_50fc;
    s32 unk_5100;
    s32 unk_5104;
    s32 unk_5108;
    u8 pad_510c[0x55e0 - 0x510c];
    u32 unk_55e0;
    u16 unk_55e4;
    u16 unk_55e6;
    u16 unk_55e8;
    u8 unk_55ea[6];
    u16 unk_55f0;
    u16 unk_55f2;
    u8 unk_55f4[0x20];
};

typedef Unk_ov067_0225facc_Msg Msg;
typedef Unk_ov067_0225facc_Ctx Ctx;
typedef Unk_ov067_0225facc_Sub Sub;

extern "C" {
extern Ctx *data_ov067_02262260;
extern u8 data_ov067_02262174[];
extern u8 data_ov067_02262188[];
extern u8 data_ov067_022621a8[];
extern u8 data_ov067_022621bc[];
extern u8 data_ov067_022621ec[];
extern u8 data_ov067_02262204[];

s32 func_01ffa314(void);
void func_01ffa3d4(s32);
s32 func_0211f410(void);
s32 func_0211fd8c(void (*)(Msg *));
void func_02115e64(u32, void *, u32);
void func_02115fb4(void *, u32, u32);
u32 func_0211f800(void);
s32 func_0211fdd4(void (*)(Msg *), void *);
s32 func_0211fcbc(void (*)(Msg *), void *, u32, u32, u32);
s32 func_021218d0(void (*)(Msg *), u32, u32, u32, u32);
s32 func_021206b4(void (*)(Msg *), void *, u32, void *, u32, u32, u32, u32, u32, u32, u32);
s32 func_02120164(void (*)(Msg *), void *);
s32 func_021200a8(void (*)(Msg *));
void func_02114594(void *, u32);
void func_02116048(void *, void *, u32);
s32 func_ov067_0225f3e8(void *, ...);
u32 func_ov067_0225f1a0(u32);
s32 func_ov067_02260d64(Ctx *, Msg *);
void func_ov067_02260d9c(Ctx *, u32, s32);
void func_ov067_02260a4c(Ctx *, u32, void *);
void func_ov067_022604c0(u32);
void func_ov067_02260c8c(Ctx *);
void func_ov067_02260f34(Ctx *);

void func_ov067_0225fb7c(Msg *m);
void func_ov067_0225fe1c(Msg *m);
void func_ov067_0225ff20(Msg *m);
void func_ov067_02260080(Msg *m);
void func_ov067_02260168(Msg *m);
void func_ov067_02260320(Msg *m);

#pragma thumb off

static inline u32 Clz(u32 x) {
    u32 r;
    asm { clz r, x }
    return r;
}

void func_ov067_0225facc(Ctx *c, Sub *s, Unk_ov067_0225facc_Cb cb, u32 v) {
    s32 r = func_01ffa314();
    func_0211f410();
    func_01ffa3d4(r);
    data_ov067_02262260 = c;
    volatile u32 z = 0;
    func_02115e64(z, c, 0x5640);
    c->unk_50e4 = 0;
    c->unk_50ec = 1;
    c->unk_50f8 = cb;
    c->unk_50e0 = v;
    c->unk_50e8 = 0x220;
    c->unk_50ea = 0x3dc0;
    c->unk_50f0 = 0;
    c->unk_50fc = s;
    c->unk_50fc->unk_0e = 1;
    c->unk_50fc->unk_18 = 0x5a;
    c->unk_50fc->unk_32 = 1;
}

void func_ov067_0225fb7c(Msg *m) {
    Ctx *c = data_ov067_02262260;
    if (m != NULL) {
        if (func_ov067_02260d64(c, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        c->unk_50f0 = 1;
        c->unk_5108 = 0;
        c->unk_55e0 = (u32)c + 0x51e0;
        c->unk_55e4 = 0x400;
        c->unk_55e6 = func_0211f800();
        c->unk_55e8 = 0x6e;
        func_02115fb4(c->unk_55ea, 0xff, 6);
        c->unk_55f0 = 1;
        c->unk_55f2 = 0;
        func_02115fb4(c->unk_55f4, 0xff, 0x20);
        func_ov067_02260d9c(c, 0x26, func_0211fdd4(func_ov067_0225fb7c, &c->unk_55e0));
        return;
    }
    if (m->unk_00 == 0x26) {
        if (m->unk_08 == 5) {
            func_02114594((u8 *)c + 0x51e0, 0x400);
            c->unk_5108 = m->unk_0e;
        }
        func_ov067_02260d9c(c, 0xb, func_0211fd8c(func_ov067_0225fb7c));
        return;
    }
    if (m->unk_00 != 0xb) {
        return;
    }
    BOOL found = FALSE;
    if (c->unk_50f4 == 5) {
        s32 i;
        u8 *p = (u8 *)c + 0x51e0;
        func_ov067_0225f3e8(data_ov067_02262174, c->unk_5108);
        i = 0;
        if (c->unk_5108 > 0) {
            do {
                s32 n = *(u16 *)p << 1;
                func_ov067_0225f3e8(data_ov067_02262188, n >= 0x48 ? *(s32 *)(p + 0x44) : -1, *(u16 *)(p + 0x36), n);
                if (n >= 0x48) {
                    found = FALSE;
                    if (c->unk_50f8 != NULL) {
                        found = ((s32 (*)(u32, void *))c->unk_50f8)(6, p);
                    }
                    if (found) {
                        func_ov067_0225f3e8(data_ov067_022621a8);
                        func_02116048(p, (u8 *)c + 0x5120, 0xc0);
                        break;
                    }
                }
                i++;
                p += (n + 3) & ~3;
            } while (i < c->unk_5108);
        }
    }
    if (found) {
        func_ov067_0225ff20(NULL);
        return;
    }
    if (c->unk_50f4 == 5) {
        c->unk_50f4 = 3;
    }
    func_ov067_02260a4c(c, 3, NULL);
}

void func_ov067_0225fe1c(Msg *m) {
    Ctx *c = data_ov067_02262260;
    u32 v = 0;
    if (m == NULL) {
        c->unk_50f0 = 1;
        c->unk_50e2 = v;
        c->unk_5104 = 0x65;
    } else if (func_ov067_02260d64(c, m) != 0) {
        s32 t = m->unk_0a;
        v = m->unk_08;
        if (c->unk_5104 > t) {
            c->unk_5104 = t;
            c->unk_50e2 = v;
        }
        if (v == 32 - Clz(func_0211f800())) {
            c->unk_5100 = 0;
            func_ov067_02260a4c(c, 3, NULL);
        }
    } else {
        c->unk_5100 = 0;
    }
    if (c->unk_5100 == 0) {
        return;
    }
    u32 a = func_ov067_0225f1a0(v);
    func_ov067_02260d9c(c, 0x1e, func_021218d0(func_ov067_0225fe1c, 3, 0x11, a, 0x1e));
}

void func_ov067_0225ff20(Msg *m) {
    Ctx *c = data_ov067_02262260;
    if (m != NULL) {
        if (func_ov067_02260d64(c, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        c->unk_50f0 = 1;
        func_ov067_02260d9c(c, 0xc, func_0211fcbc(func_ov067_02260080, (u8 *)c + 0x5120, 0, 1, 0));
        return;
    }
    if (m->unk_00 == 0xc) {
        c->unk_50e4 = m->unk_0a;
        BOOL b = c->unk_50fc->unk_16 == 0 ? TRUE : FALSE;
        func_ov067_02260d9c(c, 0xe, func_021206b4(func_ov067_0225ff20, (u8 *)c + 0x1120, c->unk_50ea, (u8 *)c + 0xf00, c->unk_50e8, (u16)b, 0, 0, 0, 0, 0));
        return;
    }
    if (m->unk_00 != 0xe) {
        return;
    }
    if (m->unk_04 != 0xa) {
        return;
    }
    func_ov067_02260a4c(c, 5, m);
}

void func_ov067_02260080(Msg *m) {
    Ctx *c = data_ov067_02262260;
    if (func_ov067_02260d64(c, m) == 0) {
        return;
    }
    switch (m->unk_08) {
    case 7:
        if (c->unk_50f0 == 5) {
            return;
        }
        func_ov067_0225ff20(m);
        return;
    case 9:
        if (c->unk_50f0 == 1) {
            c->unk_50f4 = 3;
            return;
        }
        c->unk_50f4 = 4;
        func_ov067_022604c0(0);
        return;
    case 6:
    case 8:
        break;
    default:
        func_ov067_02260f34(c);
        break;
    }
}

void func_ov067_02260168(Msg *m) {
    Ctx *c = data_ov067_02262260;
    if (m != NULL) {
        if (func_ov067_02260d64(c, m) == 0) {
            return;
        }
    }
    if (m == NULL) {
        c->unk_50f0 = 1;
        c->unk_50fc->unk_32 = c->unk_50e2;
        c->unk_50fc->unk_0c = func_0211f410();
        func_ov067_0225f3e8(data_ov067_022621bc, c->unk_50e2, c->unk_50fc->unk_0c, c->unk_50fc->unk_08);
        func_ov067_02260d9c(c, 7, func_02120164(func_ov067_02260168, c->unk_50fc));
        return;
    }
    if (m->unk_00 == 7) {
        func_ov067_02260d9c(c, 8, func_021200a8(func_ov067_02260320));
        return;
    }
    if (m->unk_00 == 8) {
        BOOL b = FALSE;
        c->unk_50e4 = b;
        c->unk_50e6 = b;
        if (c->unk_50fc->unk_16 == 0) {
            b = TRUE;
        }
        func_ov067_02260d9c(c, 0xe, func_021206b4(func_ov067_02260168, (u8 *)c + 0x1120, c->unk_50ea, (u8 *)c + 0xf00, c->unk_50e8, (u16)b, 0, 0, 0, 0, 0));
        return;
    }
    if (m->unk_00 != 0xe) {
        return;
    }
    if (m->unk_04 != 0xa) {
        return;
    }
    func_ov067_02260a4c(c, 4, NULL);
}

void func_ov067_02260320(Msg *m) {
    Ctx *c;
    s32 t = m->unk_08;
    c = data_ov067_02262260;
    if (t == 0) {
        func_ov067_02260168(m);
        return;
    }
    if (m->unk_02 != 0) {
        return;
    }
    switch (t) {
    case 0:
        return;
    case 7: {
        BOOL first = c->unk_50e6 == 0 ? TRUE : FALSE;
        func_ov067_0225f3e8(data_ov067_022621ec, c->unk_50e6, 1 << m->unk_10);
        c->unk_50e6 = c->unk_50e6 | (u16)(1 << m->unk_10);
        if (c->unk_50f8 != NULL) {
            c->unk_50f8(9, m);
        }
        if (first) {
            func_ov067_02260c8c(c);
        }
        return;
    }
    case 9:
        func_ov067_0225f3e8(data_ov067_02262204, c->unk_50e6, 1 << m->unk_10);
        c->unk_50e6 = c->unk_50e6 & (u16)~(1 << m->unk_10);
        Unk_ov067_0225facc_Cb cb = c->unk_50f8;
        u32 a = 1 << m->unk_10;
        if (cb != NULL) {
            cb(0xa, (void *)a);
        }
        return;
    case 2: {
        void *a = c->unk_50fc;
        if (c->unk_50f8 != NULL) {
            c->unk_50f8(5, a);
        }
        return;
    }
    }
}

#pragma thumb reset
}
