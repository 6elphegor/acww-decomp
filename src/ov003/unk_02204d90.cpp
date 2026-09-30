// Needs base compiler: jump table (signed halfword form); the main file uses sp2 for the adjuster thunks
#include "types.h"

// ---------------------------------------------------------------- free functions on the big player object
struct Unk_ov003_02204ce8_Vec {
    s32 x, y, z;
};

class Unk_02006d14 {
public:
    s32 func_0200f5b0();
    BOOL func_0200fa2c(s32 *p, s32 m);
    BOOL func_0200f9d4(s32 m);
    BOOL func_0200f8f8(s32 *p, s32 a, s32 b);
    BOOL func_0200f6d4(s32 *p, s32 a);
    s32 func_0200f9bc();

    u8 pad_00[0x5c];
    /* 0x5c */ s32 unk_5c[3];
    u8 pad_68[0x8e - 0x68];
    /* 0x8e */ u16 unk_8e;
    u8 pad_90[0x13c - 0x90];
    /* 0x13c */ u8 unk_13c;
    u8 pad_13d[3];
    /* 0x140 */ s32 unk_140;
    /* 0x144 */ u8 unk_144;
    u8 pad_145[0x154 - 0x145];
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ s32 unk_158;
    /* 0x15c */ s32 unk_15c;
    u8 pad_160[0x16c - 0x160];
    /* 0x16c */ s32 unk_16c;
    u8 pad_170[0x6f0 - 0x170];
    /* 0x6f0 */ s32 unk_6f0;
    u8 pad_6f4[4];
    /* 0x6f8 */ s32 unk_6f8;
};

extern "C" {
s32 func_020e9650(s32 *a, s32 *b);
extern s32 data_ov003_02230af0[];
extern s32 data_ov003_0222efb4[];
extern void *data_021c47c4;
BOOL func_ov003_02205b68(Unk_02006d14 *self, s32 *p);
s32 func_ov003_02205894(Unk_02006d14 *self, s32 *out, s32 *in);
void func_ov003_0220fc00(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_0220b620(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_0220d00c(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_0220e8cc(Unk_02006d14 *self, s32 *v, s32 a, s32 b);
void func_ov003_0220e6b0(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_02209030(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_02208d18(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_0220627c(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_02206770(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_02206574(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_022084f4(Unk_02006d14 *self, s32 x, s32 z, s32 f, s32 a, s32 b, s32 c);
void func_ov003_0220fe1c(Unk_02006d14 *self, s32 a, s32 b);
void func_ov003_02207404(Unk_02006d14 *self, s32 a, s32 b);
void func_0200f3ec(Unk_ov003_02204ce8_Vec *out, Unk_02006d14 *o, s32 *in, u16 *ang, s32 *p);
void func_0200f45c(Unk_ov003_02204ce8_Vec *out, Unk_02006d14 *o);
BOOL func_020e972c(s32 *a, s32 *b);
s32 func_020e7b98(s32 a, s32 b);
BOOL func_02030d60(s32 *p);
BOOL func_020b8e14();
void func_0204ee10(s32 *a, s32 *b, s32 *c);
void *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
}


extern "C" BOOL func_ov003_02204d90(Unk_02006d14 *self, s32 mode, s32 *pos) {
    Unk_ov003_02204ce8_Vec a, z, c, z2, t1, t2;
    switch (mode) {
    case 2:
        func_ov003_0220fc00(self, 6, -1);
        return TRUE;
    case 1:
        func_ov003_0220b620(self, 6, -1);
        return TRUE;
    case 4:
        func_ov003_0220d00c(self, 6, -1);
        return TRUE;
    case 3:
        z.x = 0;
        z.y = 0;
        z.z = 0;
        if (func_020e972c(pos, &z.x)) {
            s32 *pv = self->unk_5c;
            pos[0] = pv[0];
            pos[1] = pv[1];
            pos[2] = pv[2];
        }
        if (func_ov003_02205894(self, &a.x, pos)) {
            c.x = a.x;
            c.y = a.y;
            c.z = a.z;
            func_ov003_0220e8cc(self, &c.x, 6, -1);
        } else {
            func_ov003_0220e6b0(self, 6, -1);
        }
        return TRUE;
    case 5:
        func_ov003_02209030(self, 6, -1);
        return TRUE;
    case 6:
        func_ov003_02208d18(self, 6, -1);
        return TRUE;
    case 7:
        func_ov003_0220627c(self, 6, -1);
        return TRUE;
    case 8:
        func_ov003_02206770(self, 6, -1);
        return TRUE;
    case 9:
        func_ov003_02206574(self, 6, -1);
        return TRUE;
    case 0:
    case 10:
        z2.x = 0;
        z2.y = 0;
        z2.z = 0;
        if (func_020e972c(pos, &z2.x)) {
            func_0200f45c(&t1, (Unk_02006d14 *)self);
            pos[0] = t1.x;
            pos[1] = t1.y;
            pos[2] = t1.z;
        }
        func_0200f45c(&t2, self);
        a.x = t2.x;
        a.y = t2.y;
        a.z = t2.z;
        if (func_020e9650(self->unk_5c, pos) < 0x2334) {
            if (self->func_0200f8f8(&a.x, 1, 0)) {
                BOOL f;
                if (self->func_0200f9bc() == 1) {
                    f = FALSE;
                } else {
                    f = TRUE;
                }
                s32 zero = 0;
                func_ov003_022084f4(self, a.x, a.z, f, zero, 6, ~zero);
                return TRUE;
            }
        }
        if (mode == 10) {
            func_ov003_0220fe1c(self, 6, -1);
            return TRUE;
        }
    }
    return FALSE;
}

struct Unk_ov003_02204f3c_Pad {
    s32 v[3];
    Unk_ov003_02204f3c_Pad() {}
    ~Unk_ov003_02204f3c_Pad() {}
};

extern "C" BOOL func_ov003_02204f3c(Unk_02006d14 *self) {
    s32 mode = self->func_0200f5b0();
    u16 ang;
    s32 xy[2];
    struct {
        Unk_ov003_02204f3c_Pad pad;
        Unk_ov003_02204ce8_Vec t, s, z, va, vb, vc;
    } l;
    if (self->unk_13c) {
        l.z.x = 0;
        l.z.y = 0;
        l.z.z = 0;
        if (func_ov003_02204d90(self, mode, &l.z.x)) {
            return TRUE;
        }
    }
    if (!self->func_0200fa2c(&self->unk_154, mode)) {
        if (self->unk_140 == 1 || self->unk_144) {
            if (self->func_0200f9d4(mode)) {
                return TRUE;
            }
        }
        goto fail;
    }
    switch (self->unk_140) {
    case 1:
        if (self->unk_140 != 0) {
            if (func_ov003_02205b68(self, &mode)) {
                return TRUE;
            }
        }
        if (mode == 2 || mode == 1 || mode == 10 || mode == 0) {
            if (self->unk_140 != 0) {
                if (mode == 10) {
                    l.va.x = self->unk_154;
                    l.va.y = self->unk_158;
                    l.va.z = self->unk_15c;
                    if (func_ov003_02204d90(self, 0, &l.va.x)) {
                        return TRUE;
                    }
                } else {
                    l.vb.x = self->unk_154;
                    l.vb.y = self->unk_158;
                    l.vb.z = self->unk_15c;
                    if (func_ov003_02204d90(self, mode, &l.vb.x)) {
                        return TRUE;
                    }
                }
            }
        }
        break;
    case 2:
        if (mode == 4) {
            l.z.x = 0;
            l.z.y = 0;
            l.z.z = 0;
            if (func_ov003_02204d90(self, mode, &l.z.x)) {
                return TRUE;
            }
        }
        break;
    }
    if (self->unk_16c == 2 && mode == 5) {
        func_0204ee10(&xy[0], &xy[1], &self->unk_154);
        s32 hx, hy, x, y;
        x = xy[0];
        y = xy[1];
        hx = x >> 4;
        hy = y >> 4;
        u16 *cell = (u16 *)func_0204ebd8(data_021c47c4, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (cell) {
            BOOL f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
            u32 v = *cell;
            if (v <= 5) {
                f1 = TRUE;
            }
            if (!f1) {
                if (v < 6 || v > 0xb) {
                    f2 = FALSE;
                }
            }
            if (!f2) {
                if (v < 0xc || v > 0x11) {
                    f3 = FALSE;
                }
            }
            if (!f3) {
                if (!((v >= 0x12 && v <= 0x19) || v == 0x1c)) {
                    f4 = FALSE;
                }
            }
            if (!f4) {
                if (!((v >= 0x8a && v <= 0x8f) || (v >= 0x90 && v <= 0x95) || (v >= 0x96 && v <= 0x9b) || (v >= 0x9c && v <= 0xa3) || v == 0xa5)) {
                    f5 = FALSE;
                }
            }
            if (!f5) {
                if (v != 0x1a) {
                    f6 = FALSE;
                }
            }
            if (!f6) {
                if (v != 0xa4) {
                    f7 = FALSE;
                }
            }
            if (!f7) {
                if (v != 0x1d) {
                    f8 = FALSE;
                }
            }
            if (!f8) {
                if (!((v >= 0x6e && v <= 0x73) || (v >= 0x74 && v <= 0x79) || (v >= 0x7a && v <= 0x7f) || (v >= 0x80 && v <= 0x87) || v == 0x88 || v == 0x89)) {
                    goto after_tile;
                }
            }
            l.z.x = 0;
            l.z.y = 0;
            l.z.z = 0;
            if (func_ov003_02204d90(self, mode, &l.z.x)) {
                return TRUE;
            }
        }
    }
after_tile:
    if (self->unk_144) {
        if (self->func_0200f9d4(mode)) {
            return TRUE;
        }
    }
    if (self->unk_16c == 2) {
        switch (mode) {
        case 1: {
            ang = func_020e7b98(self->unk_154 - self->unk_6f0, self->unk_15c - self->unk_6f8);
            func_0200f3ec(&l.t, self, self->unk_5c, &ang, data_ov003_0222efb4);
            if (self->func_0200fa2c(&l.t.x, mode)) {
                s32 *pa = &self->unk_154;
                s32 *pb = &self->unk_158;
                s32 *pc = &self->unk_15c;
                l.s.x = *pa;
                l.s.y = *pb;
                l.s.z = *pc;
                *pa = l.t.x;
                *pb = l.t.y;
                *pc = l.t.z;
                l.z.x = 0;
                l.z.y = 0;
                l.z.z = 0;
                if (func_ov003_02204d90(self, mode, &l.z.x)) {
                    self->unk_154 = l.s.x;
                    self->unk_158 = l.s.y;
                    self->unk_15c = l.s.z;
                    return TRUE;
                }
                self->unk_154 = l.s.x;
                self->unk_158 = l.s.y;
                self->unk_15c = l.s.z;
            }
            break;
        }
        case 5:
            l.z.x = 0;
            l.z.y = 0;
            l.z.z = 0;
            if (func_ov003_02204d90(self, mode, &l.z.x)) {
                return TRUE;
            }
            break;
        case 3:
            if (func_02030d60(&self->unk_154)) {
                l.vc.x = self->unk_154;
                l.vc.y = self->unk_158;
                l.vc.z = self->unk_15c;
                if (func_ov003_02204d90(self, mode, &l.vc.x)) {
                    return TRUE;
                }
            }
            break;
        }
    }
fail:
    if (mode == 0) {
        if (self->unk_13c) {
            if (func_020b8e14()) {
                func_ov003_02207404(self, 6, -1);
                return TRUE;
            }
        }
    }
    return FALSE;
}
