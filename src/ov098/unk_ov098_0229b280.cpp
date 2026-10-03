#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
s32 func_0200402c(s32 a);
s32 func_02095154(s32 a, s32 b);
u8 *func_02095204(s32 a);
void *func_0209750c();
s32 func_0206e61c();
s32 func_0204341c(s32 a, void *b, s32 c, s32 d, s32 e);
s32 func_02042c9c(s32 a, s32 b, s32 c);
s32 func_02042d10(s32 a);
void func_02042820(s32 a);
void func_0204ed8c(void *out, s32 x, s32 z);
void func_0204ee10(s32 *x, s32 *z, void *p);
void *func_0204da0c();
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
u32 func_0204ec50(void *grid, s32 x, s32 z);
BOOL func_02030d78(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void func_02076a6c(void *out, s32 a, s32 b);
u32 func_02063b8c(u32 a);
void *func_020e8618(void *heap, u32 size);
void func_020e85fc(void *heap, void *p);
void MI_CpuCopy8(void *src, void *dst, s32 n);
void *func_0208f158(void *p);
void func_02065e70(void *a, void *b);

extern void *data_021c6210;
extern void *data_021c47c4;
extern u8 data_021e7f8c[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u16 data_021f47d8[];
extern "C" s16 data_ov098_0229bd00[16] = {0, 0x1800, -0x1800, 0};

// other overlays
BOOL func_ov003_022120e4();
BOOL func_ov003_0221264c();
BOOL func_ov003_0221211c();
BOOL func_ov003_02224d14(void *p);
void func_ov003_02224d58(void *p, void *q);
void func_ov003_0221220c();
BOOL func_ov003_02227434(void *p);
void func_ov003_02227248(u32 a, void *p);
void func_ov003_0222746c(void *p, s32 a);
void func_ov003_02212504(s32 a);
BOOL func_ov003_022201bc(void *p, s32 a, void *q);
BOOL func_ov003_0221255c(void *a, void *b);
BOOL func_ov002_02201700(u8 *p, u32 a, u32 b);
}

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
    BOOL func_02072e44();
    void func_020728d4();
    void func_020728a4(u8 *buf, u32 n);
    void func_02072824(u32 cmd, u32 arg);
};
extern "C" Unk_020cbb18 *data_020cbb18;

class Unk_ov096_0229aea8;
extern "C" {
void *func_ov096_0229567c(Unk_ov096_0229aea8 *self);
s32 func_ov096_02297b14(Unk_ov096_0229aea8 *self, u32 a);
s32 func_ov096_02297b9c(Unk_ov096_0229aea8 *self, u32 a);
s32 func_ov096_0229803c(Unk_ov096_0229aea8 *self, u32 a);
s32 func_ov096_0229806c(Unk_ov096_0229aea8 *self, u32 a);
s32 func_ov096_02298320(Unk_ov096_0229aea8 *self);
s32 func_ov096_02298334(Unk_ov096_0229aea8 *self, s32 a, s32 b, s32 c);
s32 func_ov096_0229865c(Unk_ov096_0229aea8 *self);
}
struct Unk_0208f238 {
    void func_0208f168();
    void func_0208f1a8(u32 v);
};
struct Unk_02097ff4 {
    s32 func_02098044(u32 v);
};
struct Unk_0209865c {
    u16 *func_02098744();
};

// +0x27fc sub-object (0x108 bytes, opaque here)
class Unk_ov002_022040ec {
public:
    void func_ov002_022040c0();
    void func_ov002_022040c8();
    void func_ov002_022040d4();
    void func_ov002_022040ec();
    u8 unk_00[0x108];
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
class Unk_ov002_022044e4 : public Unk_020d8c7c {
public:
    Unk_ov002_022044e4();
    virtual ~Unk_ov002_022044e4();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void vfunc_08(s32 a);
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_48();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    void func_ov002_02200a50(u8 v);
    void func_ov002_02200a58(u8 v);
    void func_ov002_02200a60(u8 v);

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ Unk_ov002_022044e4 *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

// Vtable 0x0229aea8, size 0x2d80
class Unk_ov096_0229aea8 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov096_0229aea8();

    // this group (ov098_000)
    void func_ov098_0229b280();
    void func_ov098_0229b2b0();
    void func_ov098_0229b2d8();
    void func_ov098_0229b344();
    void func_ov098_0229b36c();
    void func_ov098_0229b390();
    void func_ov098_0229b3ac();
    void func_ov098_0229b44c();
    void func_ov098_0229b468();
    void func_ov098_0229b488();
    void func_ov098_0229b4c4();
    void func_ov098_0229b580();
    void func_ov098_0229b5d4();
    void func_ov098_0229b624();
    BOOL func_ov098_0229b6b4();
    s32 *func_ov098_0229b790(s16 a);
    void func_ov098_0229b864(u8 a, u32 b);
    void func_ov098_0229b8ac();
    void func_ov098_0229b954();
    void func_ov098_0229b96c(u8 a);
    void func_ov098_0229b978(u8 a, u8 b);
    void func_ov098_0229b9e4();
    void func_ov098_0229ba60();
    BOOL func_ov098_0229ba78(s32 flag);
    void func_ov098_0229bb18();
    void func_ov098_0229bb5c(u16 v);

    // other groups of this overlay (declarations only)
    s32 func_ov096_02294ed4();
    s32 func_ov096_02296898();
    s32 func_ov096_02294d9c(u32 a);
    s32 func_ov096_02294dac(u32 a);

    /* 0x094 */ u32 unk_94;
    /* 0x098 */ u32 unk_98;
    /* 0x09c */ u8 unk_9c[8];
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u16 unk_ac;
    /* 0x0ae */ u8 unk_ae[2];
    /* 0x0b0 */ u8 unk_b0;
    /* 0x0b1 */ u8 unk_b1[3];
    /* 0x0b4 */ u8 unk_b4;
    /* 0x0b5 */ u8 unk_b5;
    /* 0x0b6 */ u8 unk_b6;
    /* 0x0b7 */ u8 unk_b7;
    /* 0x0b8 */ u8 unk_b8;
    /* 0x0b9 */ u8 unk_b9;
    /* 0x0ba */ u8 unk_ba;
    /* 0x0bb */ u8 unk_bb;
    /* 0x0bc */ u8 unk_bc;
    /* 0x0bd */ u8 unk_bd[3];
    /* 0x0c0 */ u8 unk_c0;
    /* 0x0c1 */ u8 unk_c1[3];
    /* 0x0c4 */ s32 unk_c4;
    /* 0x0c8 */ u8 unk_c8[0x27f0 - 0xc8];
    /* 0x27f0 */ u8 unk_27f0[0xc];
    /* 0x27fc */ Unk_ov002_022040ec unk_27fc;
    /* 0x2904 */ u8 unk_2904[0x2b84 - 0x2904];
    /* 0x2b84 */ s32 unk_2b84;
    /* 0x2b88 */ s32 unk_2b88;
    /* 0x2b8c */ s32 unk_2b8c;
    /* 0x2b90 */ s32 unk_2b90;
    /* 0x2b94 */ s32 unk_2b94;
    /* 0x2b98 */ u8 unk_2b98[0x2d80 - 0x2b98];
};

// ---------------------------------------------------------------------------------------------

static inline BOOL Unk_ov098_RangeCheck(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov098_0229b2d8_Both() {
    if (data_021f4770 && data_021f4774) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov098_0229b790_Pt {
    s32 x, y;
    Unk_ov098_0229b790_Pt(s32 a, s32 b) {
        x = a;
        y = b;
    }
};

struct Unk_0229bc90_Pad {
    s32 v[2];
    Unk_0229bc90_Pad() {}
    ~Unk_0229bc90_Pad() {}
};

extern "C" {
void *func_0209750c();
s32 func_ov094_022923a4(u32);
}

extern "C" s32 func_ov098_0229bc90(s32 a, u32 b) {
    Unk_0229bc90_Pad pad;
    if (((Unk_02097ff4 *)func_0209750c())->func_02098044(1) != 0) {
        if ((b >= 0x14fe && b <= 0x1517) || (b >= 0x151d && b <= 0x151e)) {
            return 0;
        }
    }
    return func_ov094_022923a4(b);
}

void Unk_ov096_0229aea8::func_ov098_0229bb5c(u16 v) {
    struct {
        u16 a;
    } l;
    l.a = v;
    BOOL f1 = FALSE;
    u16 a = *(volatile u16 *)&l.a;
    u16 b = *(volatile u16 *)&l.a;
    if (b >= 0x12b0 && a <= 0x12e7) {
        f1 = TRUE;
    }
    if (f1 || (a >= 0x12e8 && a <= 0x131f)) {
        func_ov002_02201700(unk_27f0, 0x1b, 0x21);
    }
    BOOL f2 = FALSE;
    u16 c = *(volatile u16 *)&l.a;
    u16 d = *(volatile u16 *)&l.a;
    if (d >= 0x12b0 && c <= 0x12e7) {
        f2 = TRUE;
    }
    if (f2) {
        func_ov002_02201700(unk_27f0, 8, 0x15);
    } else if (c >= 0x12e8 && c <= 0x131f) {
        if (func_ov098_0229ba78(0)) {
            func_ov002_02201700(unk_27f0, 8, 0x18);
        }
    } else if ((c >= 0x137c && c <= 0x137c) || (c >= 0x1408 && c <= 0x1428) || (c >= 0x1471 && c <= 0x1491) ||
               (c >= 0x14fe && c <= 0x1517) || (c >= 0x151d && c <= 0x151e) || (c >= 0x1567 && c <= 0x1567)) {
        func_ov002_02201700(unk_27f0, 6, 0x17);
    } else if (func_ov098_0229b6b4()) {
        func_ov002_02201700(unk_27f0, 7, 0x16);
    }
}

void Unk_ov096_0229aea8::func_ov098_0229bb18() {
    func_ov096_02294d9c(8);
    if (!data_020cbb18->func_02072e44()) {
        if (func_ov098_0229ba78(1)) {
            func_ov002_02201700(unk_27f0, 0x11, 0x19);
            func_ov096_02294dac(8);
        }
    }
}

BOOL Unk_ov096_0229aea8::func_ov098_0229ba78(s32 flag) {
    u8 *p = func_02095204(4);
    s32 base;
    u8 *q;
    q = p + 0x5c;
    base = 0xa00;
    u32 f = func_0204ec50(data_021c47c4, *(s32 *)(p + 0x5c) >> 17, *(s32 *)(q + 8) >> 17);
    if (flag) {
        if ((f & 0x7f000) == 0 && (f & 8) == 0) {
            return FALSE;
        }
        base = 0x1b58;
    } else {
        if ((f & 0x7f000) != 0 || (f & 8) != 0) {
            base += 0xe10;
        } else {
            base += 0x3e8;
        }
    }
    return func_02030d78(&unk_2b84, q, *(s16 *)(p + 0x8e), 0x7800, base, 0xc);
}

void Unk_ov096_0229aea8::func_ov098_0229ba60() {
    func_ov002_02200a58(0x30);
    func_ov098_0229b9e4();
}

void Unk_ov096_0229aea8::func_ov098_0229b9e4() {
    void *r6 = func_ov096_0229567c(this);
    s32 a = func_ov096_02297b9c(this, unk_b6);
    if (func_ov003_022201bc(r6, a, &unk_2b84)) {
        struct {
            u16 a;
        } l;
        l.a = a;
        BOOL ok = FALSE;
        volatile u16 *pv = &l.a;
        u16 v = *pv;
        u16 w = *pv;
        if (w >= 0x12e8 && v <= 0x131f) {
            ok = TRUE;
        }
        s32 r1;
        if (ok) {
            r1 = v - 0x12e8;
        } else {
            r1 = -1;
        }
        func_ov098_0229b96c((u8)r1);
        func_ov003_02212504(1);
        func_ov096_02298320(this);
    }
}

void Unk_ov096_0229aea8::func_ov098_0229b978(u8 a, u8 b) {
    if (data_020cbb18->func_02072e44()) {
        u8 pkt[12];
        pkt[0] = b;
        pkt[1] = a;
        func_02076a6c(&pkt[7], unk_2b84, unk_2b8c);
        MI_CpuCopy8(&pkt[7], &pkt[2], 5);
        Unk_020cbb18 *g = data_020cbb18;
        g->func_020728d4();
        g->func_020728a4(pkt, 7);
        g->func_02072824(0x16, 4);
    }
}

void Unk_ov096_0229aea8::func_ov098_0229b96c(u8 a) {
    func_ov098_0229b978(a, 2);
}

void Unk_ov096_0229aea8::func_ov098_0229b954() {
    func_ov002_02200a58(0x2c);
    func_ov098_0229b8ac();
}

void Unk_ov096_0229aea8::func_ov098_0229b8ac() {
    void *r7 = func_ov096_0229567c(this);
    if (func_ov003_02227434(r7) == 0) {
        struct { u16 a; } l;
        l.a = func_ov096_02297b9c(this, unk_b6);
        BOOL ok = FALSE;
        volatile u16 *pv = &l.a;
        u16 a = *pv;
        u16 b = *pv;
        if (b >= 0x12b0 && a <= 0x12e7) {
            ok = TRUE;
        }
        s32 r5 = ok ? a - 0x12b0 : -1;
        u32 t = (u8)func_02063b8c(0x3c);
        s16 x = (t - 0x1e) * 0xb6;
        x += *(s16 *)(func_02095204(4) + 0x8e);
        func_ov003_02227248((u8)r5, r7);
        func_ov003_0222746c(r7, x);
        func_ov003_02212504(0);
        func_ov098_0229b864((u8)r5, t);
        func_ov096_02298320(this);
    }
}

void Unk_ov096_0229aea8::func_ov098_0229b864(u8 a, u32 b) {
    if (data_020cbb18->func_02072e44()) {
        u8 buf[3];
        buf[0] = 1;
        buf[1] = a;
        buf[2] = b;
        Unk_020cbb18 *g = data_020cbb18;
        g->func_020728d4();
        g->func_020728a4(buf, 3);
        g->func_02072824(0x16, 4);
    }
}

s32 *Unk_ov096_0229aea8::func_ov098_0229b790(s16 a) {
    static Unk_ov098_0229b790_Pt tbl[16] = {
        Unk_ov098_0229b790_Pt(0, 1),   Unk_ov098_0229b790_Pt(1, 1),   Unk_ov098_0229b790_Pt(1, 1),
        Unk_ov098_0229b790_Pt(1, 0),   Unk_ov098_0229b790_Pt(1, 0),   Unk_ov098_0229b790_Pt(1, -1),
        Unk_ov098_0229b790_Pt(1, -1),  Unk_ov098_0229b790_Pt(0, -1),  Unk_ov098_0229b790_Pt(0, -1),
        Unk_ov098_0229b790_Pt(-1, -1), Unk_ov098_0229b790_Pt(-1, -1), Unk_ov098_0229b790_Pt(-1, 0),
        Unk_ov098_0229b790_Pt(-1, 0),  Unk_ov098_0229b790_Pt(-1, 1),  Unk_ov098_0229b790_Pt(-1, 1),
        Unk_ov098_0229b790_Pt(0, 1),
    };
    return &tbl[(a >> 12) & 15].x;
}

BOOL Unk_ov096_0229aea8::func_ov098_0229b6b4() {
    u16 *pv = ((Unk_0209865c *)func_0209750c())->func_02098744();
    BOOL r = FALSE;
    u32 v = *pv;
    if (v >= 0x1369 && v <= 0x1369) {
        r = TRUE;
    }
    if (!r) {
        if (v >= 0x136a && v <= 0x136a) {
        } else {
            return FALSE;
        }
    }
    u8 *q = func_02095204(4);
    s32 px = 0, py = 0;
    void *grid = func_0204da0c();
    func_0204ee10(&px, &py, q + 0x5c);
    s32 zero1 = 0, zero2 = 0;
    s16 base = *(s16 *)(q + 0x8e);
    for (s32 i = 0; i < 3; i++) {
        s32 *p = func_ov098_0229b790(base + data_ov098_0229bd00[i]);
        s32 x = px + p[0];
        s32 y = py + p[1];
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *c = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), zero1);
        if (c) {
            BOOL ok = zero2;
            if (*c >= 0xfc && *c <= 0xfd) {
                ok = TRUE;
            }
            if (ok) {
                unk_2b90 = x;
                unk_2b94 = y;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void Unk_ov096_0229aea8::func_ov098_0229b624() {
    if (func_ov098_0229b6b4() == 0) {
        func_ov096_0229865c(this);
        func_ov096_02298334(this, 0xd, 0xff, 1);
    } else {
        s32 a = func_ov096_02297b9c(this, unk_b6);
        s32 pair[2];
        pair[0] = unk_2b90;
        pair[1] = unk_2b94;
        unk_c4 = func_0204341c(data_020cbb18->unk_64, pair, 2, 0, a);
        if (unk_c4 == -1) {
            func_ov096_0229865c(this);
            func_ov096_02298334(this, 0xd, 0xff, 1);
        } else {
            func_ov002_02200a58(0x2d);
        }
    }
}

void Unk_ov096_0229aea8::func_ov098_0229b5d4() {
    switch (func_02042d10(unk_c4)) {
    case 1:
        func_ov002_02200a58(0x2e);
        func_ov098_0229b580();
        goto done;
    case 2:
        func_ov096_0229865c(this);
        func_ov096_02298334(this, 3, 0xff, 1);
    done:
        func_02042820(unk_c4);
        unk_c4 = -1;
    }
}

void Unk_ov096_0229aea8::func_ov098_0229b580() {
    u16 v;
    s32 out[3];
    func_0204ed8c(out, unk_2b90, unk_2b94);
    v = func_ov096_02297b9c(this, unk_b6);
    if (func_ov003_0221255c(out, &v)) {
        func_ov096_0229806c(this, unk_b6);
        func_ov002_02200a58(0x2f);
    }
}

void Unk_ov096_0229aea8::func_ov098_0229b4c4() {
    s32 a = func_ov096_02297b9c(this, unk_b6);
    if (func_ov098_0229b6b4()) {
        s32 pair[2];
        pair[0] = unk_2b90;
        pair[1] = unk_2b94;
        unk_c4 = func_0204341c(data_020cbb18->unk_64, pair, 2, 0, a);
        if (unk_c4 != -1) {
            func_ov002_02200a58(0x2d);
            return;
        }
    }
    unk_c4 = func_02042c9c(data_020cbb18->unk_64, 0x18, a);
    if (unk_c4 == -1) {
        func_ov096_0229865c(this);
        func_ov096_02298334(this, 8, 0xff, 0);
        func_0200402c(0x73);
    } else {
        func_ov002_02200a58(0x29);
        func_ov096_02294dac(0x1000);
    }
}

void Unk_ov096_0229aea8::func_ov098_0229b488() {
    func_ov098_0229b3ac();
    func_ov003_0221220c();
    func_ov003_02224d58(&unk_2b84, func_ov096_0229567c(this));
    func_ov096_0229803c(this, unk_b6);
    func_ov002_02200a58(0x33);
}

void Unk_ov096_0229aea8::func_ov098_0229b468() {
    if (func_ov003_02224d14(func_ov096_0229567c(this)) == 1) {
        func_ov002_02200a58(0x34);
    }
}

void Unk_ov096_0229aea8::func_ov098_0229b44c() {
    if (func_ov003_02224d14(func_ov096_0229567c(this)) == 0) {
        func_ov096_0229865c(this);
    }
}

void Unk_ov096_0229aea8::func_ov098_0229b3ac() {
    func_ov098_0229b978(0, 5);
    s32 p = func_ov096_02297b14(this, unk_b6);
    Unk_020cbb18 *g = data_020cbb18;
    if (!g->func_02072e44() || g->unk_64 == 0) {
        u8 *const d = data_021e7f8c;
        func_02065e70(func_0208f158(d), (void *)p);
        ((Unk_0208f238 *)d)->func_0208f168();
        ((Unk_0208f238 *)d)->func_0208f1a8(0);
    } else {
        void *heap = data_021c6210;
        u8 *buf = (u8 *)func_020e8618(heap, 0xf5);
        buf[0] = 6;
        MI_CpuCopy8((void *)p, buf + 1, 0xf4);
        Unk_020cbb18 *g2 = data_020cbb18;
        g2->func_020728d4();
        g2->func_020728a4(buf, 0xf5);
        g2->func_02072824(0x16, 0);
        func_020e85fc(heap, buf);
    }
}

void Unk_ov096_0229aea8::func_ov098_0229b390() {
    func_ov002_02200a58(0x35);
    func_ov096_02294ed4();
    func_ov096_02296898();
}

void Unk_ov096_0229aea8::func_ov098_0229b36c() {
    func_ov096_02297b9c(this, unk_b6);
    if (func_ov003_0221211c()) {
        func_ov002_02200a58(0x36);
    }
}

void Unk_ov096_0229aea8::func_ov098_0229b344() {
    if (func_ov003_0221264c()) {
        func_ov002_02200a58(0x37);
        unk_27fc.func_ov002_022040ec();
    }
}

void Unk_ov096_0229aea8::func_ov098_0229b2d8() {
    unk_27fc.func_ov002_022040d4();
    if (func_0206e61c() != 0 || Unk_ov098_0229b2d8_Both() || (data_021f47d8[1] & 1) || (data_021f47d8[1] & 2)) {
        func_ov002_02200a58(0x38);
        unk_27fc.func_ov002_022040c8();
    }
}

void Unk_ov096_0229aea8::func_ov098_0229b2b0() {
    unk_27fc.func_ov002_022040d4();
    if (func_ov003_022120e4()) {
        func_ov002_02200a58(0x39);
    }
}

void Unk_ov096_0229aea8::func_ov098_0229b280() {
    unk_27fc.func_ov002_022040d4();
    if (func_02095154(6, 4) == 0) {
        unk_27fc.func_ov002_022040c0();
        func_ov096_0229865c(this);
    }
}

