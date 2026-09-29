#include "types.h"

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
    volatile s32 unk_68;
};

struct Unk_02074c4c_Color {
    u8 r, g, b;
    u8 col[2];
};

extern "C" {
extern void (*data_020cbb74[])(void *, s32, s32);
extern Unk_020cbb18 *data_020cbb18;

s32 func_020b50e8();
s32 func_020a0370();
s32 func_020a0208(s32, s32);
s32 func_020a0228(s32);
s32 func_020a024c(s32, s32, s32);
s32 func_020a02b0(s32, s32);
s32 func_020a023c(s32, s32, s32);
s32 func_020a0244(s32, s32, s32);
s32 func_020a02b8(s32, s32);
s32 func_020a0294(s32);
s32 func_020a0298(s32, s32);
s32 func_020a02a0(s32, s32);
void func_02116048(void *, void *, u32);
s32 func_0209750c();
s32 func_02097a04(s32);
s32 func_020a148c(s32);
s32 func_02095300(s32, s32);
void func_020a68a8(void *);
void func_020a6898(void *);
void func_020a6858(void *, u8 *, u8 *, u8 *, u32 *);
void func_020a6878(void *, u32, u32, u32, u32);
s32 func_020a63bc(u32, u32, u32, u32, u32);
u32 func_020eaf90();
s32 func_020a027c(s32, s32, s32);
void func_020766ec(void *, s32, s32);
s32 func_02072998(Unk_020cbb18 *);
s32 func_02072e1c(Unk_020cbb18 *);
s32 func_02072e20(Unk_020cbb18 *, u32);
s32 func_020a5cfc(s32);
s32 func_020a5f9c(s32, u32);
s32 func_020a5f7c(u16);
s32 func_020974a0(s32);
s32 func_0208f0b0(s32);
s32 func_0208f1dc(s32);
s32 func_020a1464(s32, s32, s32);
s32 func_020a0394();
s32 func_0209f14c(s32);
s32 func_0209f08c(s32, s32);
s32 func_020a037c();
s32 func_020a02c8(s32, u16);
s32 func_020a02c0(s32, u8);
void func_020720f8();
u32 func_020eaca0();
u32 func_02076b40(u32);
s32 func_020729cc(Unk_020cbb18 *, s32);
s32 func_02072ddc(Unk_020cbb18 *, s32);
s32 func_02076bf0(s32, s32, s32);
s32 func_02072ee4(Unk_020cbb18 *, s32, u32, u32, s32, s32, s32, s32, s32, s32);
s32 func_020952e0(s32);
s32 func_020750ac(void *, s32, s32, s32, s32);
void func_02073190();
s32 func_020a5e74(u32, u8 *, u8 *, u8 *);
s32 func_0209d498(void *);
}

extern "C" {

void func_020742f4(void *a, s32 b, s32 c, u32 idx) {
    data_020cbb74[idx](a, b, c);
}

void func_02074308() {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a0208(func_020a0370(), 1);
        }
    }
}

void func_0207432c(u8 *a, s32 b) {
    u32 n;
    func_02116048(a, &n, 4);
    s32 q = func_02097a04(func_0209750c());
    func_02116048(a + 4, (void *)(q + n), b - 4);
}

void func_0207435c(u8 *a, s32 b) {
    u32 n;
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_02116048(a, &n, 4);
            s32 r = func_020a148c(func_020a0370());
            Unk_020cbb18 *g = data_020cbb18;
            g->unk_68 = 0;
            func_02095300(g->unk_68, r);
            s32 q = func_0209750c();
            func_02116048(a + 4, (void *)(q + n), b - 4);
        }
    }
}

void func_020743b4(void *a, s32 b, s32 c) {
    func_020a0228(c);
}

void func_020743c0(void *a, s32 b, s32 c) {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a024c(func_020a0370(), c, 1);
        }
    }
}

void func_020743e8() {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a02b0(func_020a0370(), 1);
        }
    }
}

void func_0207440c(void *a, s32 b, s32 c) {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a023c(func_020a0370(), c, 1);
        }
    }
}

void func_02074434(void *a, s32 b, s32 c) {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a0244(func_020a0370(), c, 1);
        }
    }
}

void func_0207445c(u8 *a) {
    struct {
        u8 r, g, b;
        u8 col[2];
    } l;
    u32 out;
    u32 i;
    for (i = 0; i < 4; i++) {
        func_020a68a8(l.col);
        func_02116048(a, l.col, 2);
        func_020a6858(l.col, &l.r, &l.g, &l.b, &out);
        func_020a63bc(i, l.r, l.g, l.b, out);
        a += 2;
        func_020a6898(l.col);
    }
}

void func_020744b8(u8 *a, s32 b, s32 c) {
    if (func_020b50e8() == 0x2e || func_020b50e8() == 9) {
        s32 p = func_020a0370();
        if (p != 0) {
            if (func_020eaf90() == 0) {
                func_020a027c(p, c, *a);
            } else {
                func_020a027c(p, 0, *a);
            }
        }
    }
}

void func_020744fc(void *a, s32 b, s32 c) {
    func_020766ec(a, b, c);
}

void func_02074504(u8 *a, s32 b) {
    u32 n;
    func_02116048(a, &n, 4);
    s32 q = func_02072998(data_020cbb18);
    func_02116048(a + 4, (void *)(q + n), b - 4);
}

void func_02074538() {
    if (func_020b50e8() == 0xd || func_020b50e8() == 0x2f) {
        if (func_020a0370() != 0) {
            func_020a02b8(func_020a0370(), 1);
        }
    }
}

void func_02074564(void *a) {
    if (func_020b50e8() == 0xc) {
        if (func_020a0370() != 0) {
            func_02116048(a, (void *)func_020a0294(func_020a0370()), 8);
            func_020a0298(func_020a0370(), 1);
        }
    }
}

void func_0207459c() {
    if (func_020b50e8() == 0xd || func_020b50e8() == 0x2f) {
        if (func_020a0370() != 0) {
            func_020a02a0(func_020a0370(), 1);
        }
    }
}

void func_020745c8(u8 *a) {
    Unk_020cbb18 *g = data_020cbb18;
    if (func_02072e1c(g) == 3) {
        func_02072e20(g, *a);
    }
}

void func_020745f0() {
    func_020a5cfc(1);
}

void func_020745fc(u8 *a) {
    s32 v = *a;
    func_020a5f9c(3, v & 7);
    func_020a5f7c((v >> 4) & 0xf);
}

void func_02074620(u8 *a, s32 b, s32 c) {
    func_020a5f9c(c, *a);
}

void func_02074630(u8 *a, s32 b, s32 c) {
    u32 n;
    func_02116048(a, &n, 4);
    s32 t = c + 3;
    s32 q = func_020974a0(t);
    func_02116048(a + 4, (void *)(q + n), b - 4);
    func_02095300(c, t);
}

void func_02074668(u8 *a, s32 b) {
    if (b == 1) {
        if (*a != 0) {
            func_0208f1dc(func_0208f0b0(4));
        }
    } else {
        func_02116048(a, (void *)func_0208f0b0(4), 0x84c);
    }
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a1464(func_020a0370(), data_020cbb18->unk_64, 1);
        }
    }
}

void func_020746c0(u8 *a, s32 b, s32 c) {
    u32 n;
    if (b != 0) {
        func_02116048(a, &n, 4);
        s32 q = func_0208f0b0(c);
        func_02116048(a + 4, (void *)(q + n), b - 4);
    } else {
        func_0208f1dc(func_0208f0b0(c));
    }
    if (func_020b50e8() == 0xd || func_020b50e8() == 0x2f) {
        if (func_020a0370() != 0) {
            func_020a1464(func_020a0370(), c, 1);
        }
    }
}

void func_02074724(u8 *a, s32 b) {
    u32 n;
    if (func_020b50e8() == 0xc) {
        func_02116048(a, &n, 4);
        s32 p = func_020a0394();
        func_02116048(a + 4, (void *)(p + n), b - 4);
        s32 r = func_0209f14c(p);
        u32 lim;
        if (r == 0) {
            lim = 0x15fe4;
        } else {
            lim = r + 4;
        }
        if (n + (b - 4) >= lim) {
            func_0209f08c(func_020a037c(), 0);
        }
    }
}

void func_02074780(u8 *a) {
    if (func_020b50e8() == 0xc) {
        if (func_020a0370() != 0) {
            s32 v = *a;
            func_020a02c8(func_020a0370(), v & 0xf);
            func_020a02c0(func_020a0370(), (v >> 6) & 3);
        }
    }
}

s32 func_020747c0() {
    func_020720f8();
    if (func_020eaca0() != 0 && func_02076b40(1) != 0) {
        Unk_020cbb18 *g = data_020cbb18;
        func_020729cc(g, 0);
        func_02076bf0(func_02072ddc(g, 4), 0, 0x17);
        return func_02072ee4(g, func_02072ddc(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}

s32 func_02074828(void *a) {
    s32 r = func_02097a04(func_020974a0(func_020952e0(data_020cbb18->unk_68)));
    return func_020750ac(a, r, 0x477c, 0x16, 1);
}

s32 func_02074860(void *a) {
    s32 r = func_020974a0(func_020952e0(data_020cbb18->unk_68));
    return func_020750ac(a, r, 0x228c, 0x15, 1);
}

s32 func_02074894() {
    func_020720f8();
    if (func_020eaca0() != 0 && func_02076b40(1) != 0) {
        Unk_020cbb18 *g = data_020cbb18;
        func_020729cc(g, 0);
        func_02076bf0(func_02072ddc(g, 4), 0, 0x14);
        return func_02072ee4(g, func_02072ddc(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}

s32 func_020748fc() {
    func_020720f8();
    if (func_020eaca0() != 0 && func_02076b40(1) != 0) {
        Unk_020cbb18 *g = data_020cbb18;
        func_02076bf0(func_02072ddc(g, 4), 0, 0x13);
        func_02073190();
        return func_02072ee4(g, func_02072ddc(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}

s32 func_02074960(u32 a) {
    func_020720f8();
    if (func_020eaca0() != 0 && func_02076b40(a) != 0) {
        Unk_020cbb18 *g = data_020cbb18;
        func_020729cc(g, 0);
        func_02076bf0(func_02072ddc(g, 4), 0, 0x12);
        return func_02072ee4(g, func_02072ddc(g, 4), 1, a, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}

s32 func_020749cc() {
    func_020720f8();
    if (func_020eaca0() != 0 && func_02076b40(1) != 0) {
        Unk_020cbb18 *g = data_020cbb18;
        func_02076bf0(func_02072ddc(g, 4), 0, 0x11);
        return func_02072ee4(g, func_02072ddc(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}

s32 func_02074a2c() {
    func_020720f8();
    if (func_020eaca0() != 0 && func_02076b40(1) != 0) {
        Unk_020cbb18 *g = data_020cbb18;
        func_020729cc(g, 0);
        func_02076bf0(func_02072ddc(g, 4), 0, 0x10);
        return func_02072ee4(g, func_02072ddc(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}

s32 func_02074a94(s32 a) {
    u16 m = 1 << a;
    func_020720f8();
    if (func_020eaca0() != 0 && func_02076b40(m) != 0) {
        u8 *p = (u8 *)func_02072ddc(data_020cbb18, 4);
        u32 len = 0;
        u32 j;
        func_02076bf0((s32)p, 0, 0xf);
        p++;
        len++;
        for (j = 0; j < 4; j++) {
            struct {
                u8 r, g, b;
                u8 col[2];
            } l;
            func_020a5e74(j, &l.r, &l.g, &l.b);
            func_020a68a8(l.col);
            func_020a6878(l.col, l.r, l.g, l.b, 7);
            func_02116048(l.col, p, 2);
            p += 2;
            len += 2;
            func_020a6898(l.col);
        }
        Unk_020cbb18 *g = data_020cbb18;
        return func_02072ee4(g, func_02072ddc(g, 4), len, m, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}

s32 func_02074b58(u8 a, u32 b) {
    if (b != 0) {
        func_020720f8();
        if (func_020eaca0() != 0 && func_02076b40(b) != 0) {
            Unk_020cbb18 *g = data_020cbb18;
            u8 *p = (u8 *)func_02072ddc(g, 4);
            func_02076bf0((s32)p, 0, 0xe);
            p[1] = a;
            return func_02072ee4(g, func_02072ddc(g, 4), 2, b, 0, 0, 0, 0, 0, 0);
        }
        return 0;
    }
    return 1;
}

s32 func_02074bc8(u32 a) {
    func_020720f8();
    if (func_020eaca0() != 0 && func_02076b40(a) != 0) {
        Unk_020cbb18 *g = data_020cbb18;
        func_020729cc(g, 0);
        u8 *p = (u8 *)func_02072ddc(g, 4);
        func_02076bf0((s32)p, 0, 0xa);
        u32 t[2];
        t[0] = 0;
        t[1] = 0;
        func_0209d498(t);
        func_02116048(t, p + 1, 8);
        return func_02072ee4(g, func_02072ddc(g, 4), 9, a, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}

}
