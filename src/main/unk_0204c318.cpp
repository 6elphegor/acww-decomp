#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0204da0c_Size {
    s32 w;
    s32 h;
};

struct Unk_0204da0c_Map {
    u32 unk_00;
    Unk_0204da0c_Size unk_04;
};

struct Unk_0204c3c0_Ver {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_0204c3f4_Slot {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_0204c3f4 {
    /* 0x00 */ Unk_0204c3c0_Ver unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
    /* 0x0c */ u8 pad_0c[0x21 - 0x0c];
    /* 0x21 */ s8 unk_21;
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23[0x54 - 0x23];
    /* 0x54 */ u8 unk_54;
    /* 0x55 */ u8 unk_55;
    /* 0x56 */ u8 unk_56;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ Unk_0204c3f4_Slot unk_58[4];
    /* 0x68 */ u8 unk_68;
    /* 0x69 */ u8 unk_69;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
};

extern "C" {
extern u16 data_020ca2e8[];
extern u8 data_020e416c;
extern void *data_021f482c;
extern void *data_021c47c4;
extern void *data_021c47d0;
extern u32 data_021e58a8[];
extern u32 data_021e3680[];

Unk_0204da0c_Map *func_0204da0c();
u16 *func_0204ebd8(Unk_0204da0c_Map *m, s32 cx, s32 cy, s32 lx, s32 ly, s32 z);
s32 func_0204eb30(Unk_0204da0c_Map *m, u16 *v, s32 x, s32 y, s32 z);
s32 func_0204e914(Unk_0204da0c_Map *m, s32 x, s32 y);
s32 func_0204e300(void *m, s32 x, s32 y);
void func_0204edf8(s32 *a, s32 *b, s32 c, s32 d, s32 e, s32 f);
void func_0209cf88(void *p);
s32 func_0209cdc0(void *a, void *b);
s32 func_0209ceac(u32 a, u32 b, u32 c);
void func_0204c21c(void *p);
void func_0204c20c(void *p);
void func_0204c1d8(void *p);
void func_0204c22c(void *p, void *q);
void func_0204c290(void *p);
void func_02045e34();
s32 func_02063b8c(s32 a);
BOOL func_0204b08c(u16 *p);
s32 func_0205b470();
s32 func_0204e2cc(void *a, void *heap);
void func_0204e2f0();
s32 func_0204e1a8(void *a, void *b, void *c, void *heap);
void func_020e85fc(void *heap, void *p);
void *func_020e8608(void *heap, s32 size);
struct Unk_020b5350_Info {
    u32 *unk_00;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
};
Unk_020b5350_Info *func_020b5350();
s32 func_020b52d0();
u32 func_020603c8(void *p);
u32 func_020604f8(void *p, u32 a, void *heap);
s32 func_020b50e8();
s32 func_020b52f8();
u32 func_020b5328();
s32 func_020b51a4();
u32 func_020b51d4();
s32 func_020b530c();
void *func_0204debc(void *p, void *heap);
void *func_0204ce50(void *heap, s32 n);
void *func_0204d22c(void *a, u32 b, void *heap);
void *func_0204ee64(s32 n, void *heap);
s32 func_0204ce80(s32 a, u32 b);
u32 func_0204cda0(s32 a, u32 b, void *heap, s32 n);
Unk_0204da0c_Map *func_0204d500(s32 a);
s32 func_0204cc48(void *a, s32 b, s32 c, s32 d);
}

static inline BOOL Unk_0204c5c0_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
static inline BOOL Unk_0204cab4_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }


// ---- func_0204c318 ----
static inline BOOL Unk_0204c318_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" void func_0204c6a4(Unk_0204da0c_Map *p);
extern "C" void func_0204c318(Unk_0204c3f4 *p) {
    Unk_0204da0c_Map *m = func_0204da0c();
    if (m) {
        Unk_0204da0c_Size *sz = &m->unk_04;
        s32 w = sz->w << 4;
        s32 h = sz->h << 4;
        s32 x, y, cx, cy;
        y = 0;
        u16 v = data_020ca2e8[p->unk_04];
        for (; y < h; y++) {
            x = 0;
            if (w > 0) {
                goto test;
            loop:
                cx = x >> 4;
                cy = y >> 4;
                {
                    u16 *t = func_0204ebd8(m, cx, cy, x - (cx << 4), y - (cy << 4), 0);
                    if (t) {
                        if (Unk_0204c318_InRange(t, 0x2f, 0x56)) {
                            u16 nv = v;
                            func_0204eb30(m, &nv, x, y, 0);
                            func_0204e914(m, x, y);
                        }
                    }
                }
                x++;
            test:
                if (x < w) goto loop;
            }
        }
    }
}

// ---- func_0204c6a4 ----
static inline BOOL Unk_0204c6a4_Check(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (!f1 && !(v >= 0x5d && v <= 0x61)) f2 = FALSE;
    if (!f2 && !(v >= 0x2f && v <= 0x56)) f3 = FALSE;
    if (!f3 && !(v >= 0x57 && v <= 0x5b)) f4 = FALSE;
    if (!f4 && !(v >= 0x66 && v <= 0x68)) f5 = FALSE;
    if (!f5 && !(v == 0x69)) f6 = FALSE;
    if (!f6 && !(v >= 0x6a && v <= 0x6c)) f7 = FALSE;
    if (!f7 && !(v == 0x6d)) f8 = FALSE;
    if (!f8 && !(v >= 0xc8 && v <= 0xcf)) f9 = FALSE;
    return f9;
}

extern "C" void func_0204c6a4(Unk_0204da0c_Map *p) {
    s32 x;
    u16 *t;
    u16 val;
    Unk_0204da0c_Size *sz;
    s32 cx;
    s32 y;
    s32 w;
    s32 y0;
    s32 h;
    s32 x1;
    s32 y1;
    s32 x0;
    s32 cy;
    if (p == NULL) return;
    sz = &p->unk_04;
    w = sz->w;
    h = sz->h;
    val = 0xfff1;
    x0 = 0;
    y0 = 0;
    x1 = 0;
    y1 = 0;
    func_0204edf8(&x0, &y0, 1, 1, 0, 0);
    func_0204edf8(&x1, &y1, w - 2, h - 2, 15, 15);
    y = y0;
    x = x0;
    if (x <= x1) {
        goto test;
    loop:
        func_0204e300(p, x, y);
            cx = x >> 4;
            cy = y >> 4;
            t = func_0204ebd8(p, cx, cy, x - (cx << 4), y - (cy << 4), 0);
            if (t) {
                if (Unk_0204c6a4_Check(t)) {
                    if (!func_0204b08c(t)) func_0204eb30(p, &val, x, y, 0);
                }
            }
        x++;
    test:
        if (x <= x1) goto loop;
    }
    for (y = y0; y <= y1; y++) {
        x = x0;
        func_0204e300(p, x, y);
            cx = x >> 4;
            cy = y >> 4;
            t = func_0204ebd8(p, cx, cy, x - (cx << 4), y - (cy << 4), 0);
            if (t) {
                if (Unk_0204c6a4_Check(t)) {
                    if (!func_0204b08c(t)) func_0204eb30(p, &val, x, y, 0);
                }
            }
        x = x1;
        func_0204e300(p, x, y);
            cx = x >> 4;
            cy = y >> 4;
            t = func_0204ebd8(p, cx, cy, x - (cx << 4), y - (cy << 4), 0);
            if (t) {
                if (Unk_0204c6a4_Check(t)) {
                    if (!func_0204b08c(t)) func_0204eb30(p, &val, x, y, 0);
                }
            }
    }
}

// ---- func_0204c3c0 ----
extern "C" void func_0204c3c0(Unk_0204c3c0_Ver *p) {
    Unk_0204c3c0_Ver t;
    func_0209cf88(&t);
    if (func_0209cdc0(&t, p) == 0) {
        p->unk_00 = t.unk_00;
        p->unk_01 = t.unk_01;
        p->unk_02 = t.unk_02;
        p->unk_03 = t.unk_03;
    }
}

// ---- func_0204c3f4 ----
extern "C" void func_0204c3f4(Unk_0204c3f4 *p) {
    func_0209cf88(p);
    p->unk_04 = 0;
    p->unk_08 = 1;
    p->unk_09 = 1;
    p->unk_0a = 0;
    p->unk_0b = 0;
    func_0204c21c(p);
    func_0204c20c(p);
    func_0204c1d8(p);
    Unk_0204c3f4_Slot *s;
    s32 i;
    for (s = p->unk_58, i = 0; i < 4; i++) {
        s->unk_00 = 1;
        s->unk_01 = 1;
        s->unk_02 = 0;
        s->unk_03 = 0;
        s++;
    }
    p->unk_21 = -1;
    p->unk_54 = 1;
    p->unk_55 = 1;
    p->unk_56 = 0;
    p->unk_57 = 0;
}

// ---- func_0204c45c ----
extern "C" void func_0204c45c(Unk_0204c3f4 *p) {
    func_0209cf88(p);
    p->unk_04 = func_02063b8c(5);
    func_0209ceac(p->unk_00.unk_02, p->unk_00.unk_01, p->unk_00.unk_00);
    func_0204c22c(p, p);
    func_0204c21c(p);
    func_0204c20c(p);
    func_0204c318(p);
    func_0204c290(p);
    func_0204c1d8(p);
    Unk_0204c3f4_Slot *s;
    s32 i;
    for (s = p->unk_58, i = 0; i < 4; i++) {
        s->unk_00 = 1;
        s->unk_01 = 1;
        s->unk_02 = 0;
        s->unk_03 = 0;
        s++;
    }
    p->unk_21 = -1;
    p->unk_54 = 1;
    p->unk_55 = 1;
    p->unk_56 = 0;
    p->unk_57 = 0;
    func_02045e34();
    p->unk_6b = 0;
    p->unk_6a = 0xff;
    p->unk_69 = 0xff;
    p->unk_68 = 0xff;
    p->unk_22 = 0;
}

extern "C" void func_0204c504() {}
extern "C" void func_0204c508() {}

// ---- Unk_020da3d4 ----
class Unk_020da3d4 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_020da3d4();

    /* 0x50 */ u16 unk_50;
    /* 0x52 */ u16 pad_52;
    /* 0x54 */ u32 *unk_54;
    /* 0x58 */ s32 unk_58;

    s32 func_0204c5c0(void *heap);
    void func_0204c684(u32 *out, s32 n);
    void func_0204cb28(u32 v, s32 idx);
    void func_0204cb3c(void *heap);
    void func_0204cb8c(void *heap);
    u32 *func_0204c9e8(u32 *src, s32 n, void *heap);
    u32 func_0204cab4(u32 v, s32 idx, void *heap);
};

Unk_020da3d4::~Unk_020da3d4() {}
BOOL Unk_020da3d4::vfunc_24() { return TRUE; }
BOOL Unk_020da3d4::vfunc_18() { return TRUE; }

BOOL Unk_020da3d4::vfunc_0c() {
    void *heap = data_021f482c;
    if (data_021c47c4 != NULL) {
        func_0204cb3c(heap);
        func_0204e2cc(data_021c47c4, heap);
        func_020e85fc(heap, data_021c47c4);
        data_021c47c4 = NULL;
    }
    return TRUE;
}

BOOL Unk_020da3d4::vfunc_00() {
    if (!func_0204c5c0(data_021f482c)) return FALSE;
    func_0205b470();
    return TRUE;
}

s32 Unk_020da3d4::func_0204c5c0(void *heap) {
    Unk_020b5350_Info *info;
    void *h;
    u32 *src;
    u32 *r;
    struct { s32 a; s32 b; } sz;
    unk_54 = NULL;
    unk_58 = 0;
    if (data_021c47c4 == NULL) {
        data_021c47c4 = func_020e8608(heap, 0x20);
        if (data_021c47c4 != NULL) func_0204e2f0();
    }
    if (data_021c47c4 != NULL) {
        info = func_020b5350();
        h = data_021f482c;
        src = NULL;
        sz.a = 0;
        sz.b = 0;
        if (info != NULL) {
            u32 nb = info->unk_05;
            u32 na = info->unk_04;
            sz.a = na;
            sz.b = nb;
            unk_58 = sz.a * sz.b;
            func_0204cb8c(h);
            src = info->unk_00;
            func_0204c684(src, unk_58);
            unk_50 = info->unk_06;
        }
        r = func_0204c9e8(src, unk_58, h);
        if (r != NULL) {
            func_0204e1a8(data_021c47c4, r, &sz, h);
            if (Unk_0204c5c0_IsZero(data_020e416c)) func_0204c6a4((Unk_0204da0c_Map *)data_021c47c4);
            func_020e85fc(h, r);
        }
    }
    return TRUE;
}

void Unk_020da3d4::func_0204c684(u32 *out, s32 n) {
    if (func_020b52d0()) *out = func_020603c8(data_021e58a8);
}

u32 *Unk_020da3d4::func_0204c9e8(u32 *src, s32 n, void *heap) {
    u32 *r = NULL;
    s32 i;
    if (func_020b50e8() == 0 || func_020b50e8() == 0x31 || func_020b50e8() == 0x2c) {
        r = (u32 *)func_0204debc(data_021e3680, heap);
    } else if (func_020b52f8()) {
        r = (u32 *)func_020604f8(data_021e58a8, func_020b5328(), heap);
    } else if (func_020b51a4()) {
        i = func_020b51d4();
        r = (u32 *)func_0204ce50(heap, 4);
        func_0204cb28((u32)r, 0);
        r = (u32 *)func_0204d22c(r, i, heap);
    } else if (src != NULL && n > 0) {
        r = (u32 *)func_0204ee64(n, heap);
        if (r != NULL) {
            for (i = 0; i < n; i++) {
                u32 *e = r + i * 4;
                e[0] = *src;
                e[1] = func_0204cab4(e[0], i, heap);
                src++;
            }
        }
    }
    return r;
}

u32 Unk_020da3d4::func_0204cab4(u32 v, s32 idx, void *heap) {
    s32 k = 4;
    u32 m = v & 0xfff;
    u32 r = 0;
    u8 c = data_020e416c;
    if (Unk_0204c5c0_IsZero(c)) {
        k = 0;
    } else if (Unk_0204cab4_IsOne(c)) {
        k = 1;
    }
    if (k != 4) {
        if (func_0204ce80(k, m) == 1) {
            r = func_0204cda0(k, m, heap, 4);
            func_0204cb28(r, idx);
        }
    }
    return r;
}

void Unk_020da3d4::func_0204cb28(u32 v, s32 idx) {
    if (unk_54 != NULL && idx < unk_58) unk_54[idx] = v;
}

void Unk_020da3d4::func_0204cb3c(void *heap) {
    s32 i;
    if (unk_54 != NULL) {
        if (unk_58 > 0) {
            for (i = 0; i < unk_58; i++) {
                if (unk_54[i] != 0) {
                    func_020e85fc(heap, (void *)unk_54[i]);
                    unk_54[i] = 0;
                }
            }
            func_020e85fc(heap, unk_54);
            unk_54 = NULL;
            unk_58 = 0;
        }
    }
}

void Unk_020da3d4::func_0204cb8c(void *heap) {
    s32 i;
    if (unk_58 > 0) {
        unk_54 = (u32 *)func_020e8608(heap, unk_58 * 4);
        if (unk_54 != NULL) {
            for (i = 0; i < unk_58; i++) unk_54[i] = 0;
        }
    }
}

extern "C" Unk_0204da0c_Map *func_0204cbc0(s32 a) {
    Unk_0204da0c_Map *r = NULL;
    if (a == 0) {
        r = func_0204da0c();
    } else if (func_020b530c() == 1) {
        r = func_0204d500(a);
    }
    return r;
}

extern "C" Unk_020da3d4 *func_0204cbf0() {
    return new Unk_020da3d4;
}

extern "C" s32 func_0204cc1c(s32 a, s32 b, s32 c) {
    if (data_021c47d0 != NULL) return func_0204cc48(data_021c47d0, a, b, c);
    return 0;
}
