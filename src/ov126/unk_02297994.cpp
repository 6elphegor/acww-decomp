#include "types.h"

struct Unk_ov126_02297994_Vt {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

struct Unk_ov126_02297994 {
    u8 pad_000[0x98];
    s32 unk_98;
    u8 pad_9c[4];
    s32 unk_a0;
    u16 unk_a4;
    u8 unk_a6;
    u8 unk_a7;
    u8 unk_a8;
    u8 unk_a9;
    u8 unk_aa;
    u8 unk_ab;
    u8 unk_ac;
    u8 unk_ad;
    u8 pad_ae;
    u8 unk_af;
    u8 unk_b0[0x144 - 0xb0];
    u8 unk_144[0x3d00 - 0x144];
    u8 unk_3d00[0x3e64 - 0x3d00];
    Unk_ov126_02297994_Vt unk_3e64;
    u8 pad_3e68[0x4088 - 0x3e68];
    u8 unk_4088[0x40a8 - 0x4088];
    u8 unk_40a8[0x20];
};

typedef Unk_ov126_02297994 S;

extern u8 data_021ef5ec;
extern u8 data_021ef5f0;

extern "C" {
void func_0200402c(s32 v);
s32 func_020512e0(void *p, s32 v);
void func_0205125c(void *p, s32 v);
void func_02051268(void *p, void *q, s32 n);
s32 func_02051348(void *p, s32 v);

void func_ov002_02202d00(void *p, s32 a);
void func_ov002_02202a40(void *p, s32 a, s32 b);
void func_ov002_022034c4(void *p, s32 a);
void func_ov002_02203510(void *p, s32 a);
s32 func_ov002_02202fac(void *p, s32 a);
s32 func_ov002_02203110(void *p, s32 a);
s32 func_ov002_0220126c(void *p);
s32 func_ov002_0220125c(void *p);
s32 func_ov002_0220127c(void *p);
void func_ov002_02200a58(void *self, s32 s);

void func_ov124_02296c7c(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov124_02296c90(void *p, void *q, u32 v);
void func_ov124_02296cd4(void *p);
void func_ov124_02296c98(void *p);

void func_ov095_022924f0(void *p);
s32 func_ov095_02292580(void *p);
s32 func_ov095_02292544(void *p);
s32 func_ov095_02293da0(void *p);
void func_ov095_02293dc0(void *p);
s32 func_ov095_02293dc8(void *p, u32 a, s32 b);
s32 func_ov095_022940f0(void *p, void *q, u32 a, void *r, s32 b, s32 c, s32 d, s32 e);
s32 func_ov095_02293f90(void *p, u32 a);
s32 func_ov095_02293f8c(void *p, u32 a);
s32 func_ov095_02293f88(void *p, u32 a);
s32 func_ov095_02293f94(void *p, void *q, u32 a, u32 b, s32 c, s32 d);
s32 func_ov095_0229423c(void *p, u32 a);
s32 func_ov095_02295264(void *p);
s32 func_ov095_02295258(void *p);
void func_ov095_02295194(void *p);
s32 func_ov095_02294a44(void *p, s32 a, s32 b);
s32 func_ov095_02294864(void *p, s32 a, s32 b);
void func_ov095_02294d40(void *p, s32 a);
void func_ov095_02294318(void *p);
void func_ov095_02293d94(void *p);
void func_ov095_02293d88(void *p);
void func_ov095_022923ec(void *p);
void func_ov095_022923f8(void *p);
u32 func_ov095_02293fb4(void *p, void *q, u32 a, u32 b, s32 c);
u32 func_ov095_02293f2c(void *p, void *q, u32 a, u32 b, u32 c, void *d);

void func_ov126_02297168(S *self, u32 m);
void func_ov126_02297178(S *self, u32 m);
s32 func_ov126_02297188(S *self, u32 m);
u32 func_ov126_022982e8(S *self);
void func_ov126_022982a8(S *self);
void func_ov126_02298304(S *self, u32 v);
s32 func_ov126_02298358(S *self);
s32 func_ov126_022984c0(S *self, s32 v);
s32 func_ov126_022985c0(S *self, s32 a, s32 b);

void func_ov126_02297858(S *self);
void func_ov126_02297994(S *self);
void func_ov126_022979b8(S *self);
void func_ov126_02297a0c(S *self);
BOOL func_ov126_02297a5c(S *self);
void func_ov126_02297ac8(S *self);
void func_ov126_02297ad4(S *self);
void func_ov126_02297b38(S *self);
BOOL func_ov126_02297bac(S *self, u32 x);
BOOL func_ov126_02297bf0(S *self, u32 x);
BOOL func_ov126_02297c4c(S *self, s32 x);
BOOL func_ov126_02297ce4(S *self, s32 x);
s32 func_ov126_02297d94(S *self, s32 x);
s32 func_ov126_02297ed4(S *self);
void func_ov126_02297f38(S *self);
void func_ov126_02297ffc(S *self);
void func_ov126_02298064(S *self);
void func_ov126_02298098(S *self);
void func_ov126_022980bc(S *self);
void func_ov126_0229810c(S *self);
BOOL func_ov126_02298124(S *self);
s32 func_ov126_0229814c(S *self, void *p);
BOOL func_ov126_022981cc(S *self);
void func_ov126_02298238(S *self, s32 v);
}


extern "C" {

void func_ov126_02297994(S *self) {
    func_ov002_02202d00(&self->unk_3e64, 0);
    self->unk_3e64.vfunc_0c();
}

void func_ov126_022979b8(S *self) {
    func_ov126_02297168(self, 0x80);
    func_ov095_022924f0(self->unk_144);
    s32 a = func_ov095_02292580(self->unk_144);
    s32 b = func_ov095_02292544(self->unk_144);
    func_ov002_02202a40(&self->unk_3e64, a, b);
    func_ov002_02202d00(&self->unk_3e64, 1);
    func_ov126_02297858(self);
}

void func_ov126_02297a0c(S *self) {
    switch (self->unk_ad) {
    case 0:
        func_ov002_022034c4(self->unk_3d00, 0xd8);
        break;
    case 2:
        func_ov002_02203510(self->unk_3d00, 0x21);
        break;
    case 1:
        func_ov002_02203510(self->unk_3d00, 0x65);
        break;
    case 3:
        break;
    }
}

BOOL func_ov126_02297a5c(S *self) {
    if (self->unk_ad == 3) return FALSE;
    if (func_ov002_02202fac(self->unk_3d00, 6) == 0 && func_ov002_02203110(self->unk_3d00, 6) != 0) {
        func_ov126_022984c0(self, 0);
        return TRUE;
    }
    if (self->unk_ad != 0) return FALSE;
    if (func_ov002_02203110(self->unk_3d00, 7) != 0) {
        func_ov126_022984c0(self, 1);
        return TRUE;
    }
    return FALSE;
}

void func_ov126_02297ac8(S *self) {
    func_0200402c(0x34);
}

void func_ov126_02297ad4(S *self) {
    s32 r0, r1, r2, r4;
    if (func_ov126_02298124(self) != 0) {
        u32 e = self->unk_aa;
        u32 s = self->unk_a9;
        if (s > e) {
            r4 = e;
            r0 = s - e;
        } else {
            r4 = s;
            r0 = e - s;
        }
        r1 = 7;
        r2 = 6;
    } else {
        r0 = func_ov095_02293da0(self->unk_144);
        if (r0 != 0) {
            r4 = self->unk_a8 - r0;
        }
        r1 = 5;
        r2 = 1;
    }
    if (r0 != 0) {
        func_ov124_02296c7c(self->unk_b0, r1, r2, r4, r0);
    }
}

void func_ov126_02297b38(S *self) {
    func_ov124_02296c90(self->unk_b0, self->unk_4088, self->unk_a6);
    if (func_ov126_02297188(self, 0x100) != 0) {
        s32 t = func_02051348(self->unk_4088, self->unk_a6);
        self->unk_a0 = -(self->unk_af - t - 2);
    }
    func_ov124_02296cd4(self->unk_b0);
    func_ov126_02297ad4(self);
    func_ov124_02296c98(self->unk_b0);
    func_ov126_02297178(self, 0x10);
    func_ov126_02298358(self);
}

BOOL func_ov126_02297bac(S *self, u32 x) {
    if (func_ov126_02298124(self) != 0) {
        func_ov126_022980bc(self);
        func_ov095_02293dc0(self->unk_144);
    }
    BOOL r = func_ov126_02297bf0(self, x);
    func_ov126_02297b38(self);
    func_ov126_022982a8(self);
    return r;
}

BOOL func_ov126_02297bf0(S *self, u32 x) {
    u8 v[8];
    v[0] = self->unk_a8;
    if (func_ov095_022940f0(self->unk_144, self->unk_4088, x, v, self->unk_a6, self->unk_af, 0, 1) != 0) {
        func_ov126_02298304(self, v[0]);
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov126_02297c4c(S *self, s32 x) {
    if (func_ov126_02298124(self) != 0) {
        func_ov095_02293dc0(self->unk_144);
        func_0200402c(0x35);
        goto done;
    }
    {
        u32 t = self->unk_a8;
        if (t != 0) {
            self->unk_a9 = t;
            self->unk_aa = self->unk_a8 - 1;
            func_0200402c(0x35);
            goto done;
        }
    }
    if (self->unk_4088[0] != 0) {
        self->unk_a9 = 0;
        self->unk_aa = 1;
        func_0200402c(0x35);
        goto done;
    }
    if (x != 0) func_ov126_02297ac8(self);
    return FALSE;
done:
    func_ov126_022980bc(self);
    func_ov126_02297b38(self);
    func_ov126_022982a8(self);
    return TRUE;
}

BOOL func_ov126_02297ce4(S *self, s32 x) {
    u32 r2 = func_ov126_022982e8(self);
    if (r2 == 0) return FALSE;
    switch (x) {
    case 0x103:
        r2 = func_ov095_02293f90(self->unk_144, r2);
        break;
    case 0x104:
        r2 = func_ov095_02293f8c(self->unk_144, r2);
        break;
    case 0x105:
        r2 = func_ov095_02293f88(self->unk_144, r2);
        break;
    }
    if (r2 == 0) return FALSE;
    if (func_ov095_02293f94(self->unk_144, self->unk_4088, r2, self->unk_a8, self->unk_a6, 0x2710) == 0) return FALSE;
    func_ov126_02297b38(self);
    func_ov126_022982a8(self);
    return TRUE;
}

s32 func_ov126_02297d94(S *self, s32 x) {
    s32 r6 = 1;
    s32 r7 = func_ov095_02293dc8(self->unk_144, x, 6);
    if (r7 != 0) {
        func_ov126_02297b38(self);
        return r7;
    }
    if (func_ov095_0229423c(self->unk_144, x) != 0) {
        switch (x) {
        case 0x100:
            func_ov126_02297c4c(self, r6);
            break;
        case 0x103:
        case 0x104:
        case 0x105:
            if (func_ov126_02297ce4(self, x) == 0) func_ov126_02297ac8(self);
            r6 = 2;
            break;
        case 0x118:
            func_ov126_02297ffc(self);
            r6 = 2;
            break;
        case 0x119:
            func_ov126_02297f38(self);
            r6 = 2;
            break;
        case 0x116:
            func_ov126_022984c0(self, 0);
            r6 = 3;
            break;
        case 0x117:
            func_ov126_022984c0(self, r6);
            r6 = 3;
            break;
        default:
            r6 = 2;
            break;
        }
    } else {
        BOOL r4 = func_ov126_02297bac(self, (u8)x);
        if (func_ov095_02295264(self->unk_144) != 0) {
            func_ov126_022985c0(self, 0x1c, r6);
            return 4;
        }
        if (func_ov095_02295258(self->unk_144) != 0) {
            func_ov126_022985c0(self, 0x1c, r6);
            return 4;
        }
        if (r4 == 0) func_ov126_02297ac8(self);
    }
    return r6;
}

s32 func_ov126_02297ed4(S *self) {
    func_ov095_02295194(self->unk_144);
    s32 r4 = func_ov095_02294a44(self->unk_144, data_021ef5f0, data_021ef5ec);
    if (r4 != -1) {
        s32 r1 = func_ov095_02294864(self->unk_144, r4, 8);
        s32 r6 = func_ov126_02297d94(self, r1);
        func_ov095_02294d40(self->unk_144, r4);
        func_ov095_02294318(self->unk_144);
        return r6;
    }
    return 0;
}

void func_ov126_02297f38(S *self) {
    if (func_ov126_02297188(self, 8) != 0) {
        func_ov095_02293d94(self->unk_144);
        func_ov095_02293dc0(self->unk_144);
        if (func_ov126_02298124(self) != 0) func_ov126_022980bc(self);
        s32 n = func_020512e0(self->unk_40a8, 0x20);
        u8 v;
        v = self->unk_a8;
        s32 i;
        for (i = 0; i < n; i++) {
            if (func_ov095_022940f0(self->unk_144, self->unk_4088, self->unk_40a8[i], &v, self->unk_a6, self->unk_af, 0, 0) == 0) {
                if (i == 0) func_ov126_02297ac8(self);
                i = n;
            }
        }
        func_ov095_022923ec(self->unk_144);
        func_ov126_02298304(self, v);
        func_ov126_022982a8(self);
        func_ov126_02297b38(self);
        func_ov095_02293d88(self->unk_144);
    }
}

void func_ov126_02297ffc(S *self) {
    if (func_ov126_02298124(self) != 0) {
        u32 e = self->unk_aa;
        u32 s = self->unk_a9;
        s32 r6, r4;
        if (s > e) {
            r6 = e;
            r4 = s - e;
        } else {
            r6 = s;
            r4 = e - s;
        }
        func_0205125c(self->unk_40a8, 0x20);
        func_02051268(self->unk_4088 + r6, self->unk_40a8, r4);
        func_ov126_02297178(self, 8);
        func_ov095_022923f8(self->unk_144);
        func_ov126_02298358(self);
    }
}

void func_ov126_02298064(S *self) {
    self->unk_aa = self->unk_a8;
    if (self->unk_aa != self->unk_a9) {
        func_ov126_02297178(self, 4);
    } else {
        func_ov126_02297168(self, 4);
    }
}

void func_ov126_02298098(S *self) {
    self->unk_a9 = self->unk_a8;
    self->unk_aa = self->unk_a8;
    func_ov126_02297168(self, 4);
}

void func_ov126_022980bc(S *self) {
    u32 e = self->unk_aa;
    u32 s = self->unk_a9;
    u32 lo, hi;
    if (s > e) {
        lo = e;
        hi = s;
    } else {
        lo = s;
        hi = e;
    }
    u8 r = func_ov095_02293fb4(self->unk_144, self->unk_4088, lo, hi, self->unk_a6);
    func_ov126_02298304(self, r);
    func_ov126_0229810c(self);
}

void func_ov126_0229810c(S *self) {
    self->unk_a9 = 0;
    self->unk_aa = 0;
    func_ov126_02297168(self, 4);
}

BOOL func_ov126_02298124(S *self) {
    if (func_ov126_02297188(self, 4) == 0) goto no;
    if (self->unk_a9 != self->unk_aa) goto yes;
no:
    return FALSE;
yes:
    return TRUE;
}

s32 func_ov126_0229814c(S *self, void *p) {
    if (p == 0) return 0;
    u32 r4 = self->unk_a8;
    if (func_ov002_0220126c(p) != 0) {
        if (r4 != 0) {
            func_ov126_02298304(self, (u8)(r4 - 1));
            return 1;
        }
        return 3;
    }
    if (func_ov002_0220125c(p) != 0) {
        s32 n = func_020512e0(self->unk_4088, self->unk_a6);
        s32 t = r4 + 1;
        if (t <= n) {
            func_ov126_02298304(self, (u8)t);
            return 1;
        }
        return 4;
    }
    if (func_ov002_0220127c(p) != 0) return 2;
    return 0;
}

BOOL func_ov126_022981cc(S *self) {
    s32 r1 = data_021ef5f0;
    s32 r2 = data_021ef5ec;
    if (r2 < 0x28 || r2 > 0x38) return FALSE;
    if (r1 < self->unk_ab - 0xc) return FALSE;
    if (r1 > self->unk_ac + 0xc) return FALSE;
    func_ov126_02298238(self, r1);
    func_ov126_02298098(self);
    func_ov002_02200a58(self, 1);
    func_ov095_02293dc0(self->unk_144);
    func_ov126_02297b38(self);
    return TRUE;
}

void func_ov126_02298238(S *self, s32 v) {
    s32 t = v - self->unk_ab;
    if (t < 0) t = 0;
    u8 out[8];
    self->unk_98 = func_ov095_02293f2c(self->unk_144, self->unk_4088, self->unk_a6, self->unk_af, (u8)t, out);
    self->unk_98 = self->unk_98 + self->unk_ab;
    func_ov126_02298304(self, out[0]);
    func_ov126_02298358(self);
}

}
