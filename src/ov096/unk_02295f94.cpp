#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

extern "C" {
s32 func_0200402c(s32 a);
BOOL func_0206ef00();
s32 func_0206f604(u8 a, s32 b);
s32 func_0206f53c(s32 a);
s32 func_0208a578();
s32 func_0208c1a4(s32 a);
s32 func_020991fc();
s32 func_0206ec54(u32 a);
s32 func_0206ed5c(s32 a);
s32 func_02065bfc();
s32 func_0204b718(s32 a, s32 b, s32 c);
s32 func_02042c64(s32 a, s32 b);
s32 func_020b52f8();
extern u8 data_020e416c;

// other overlays
s32 func_ov094_02293c58(void *p);
s32 func_ov094_02292efc(void *p, u16 a, u8 b);
s32 func_ov094_022934d8(void *p, s32 a);
s32 func_ov097_0229b2bc(void *self, s32 a);
s32 func_ov098_0229bc90(void *self, s32 a);
s32 func_ov097_0229b280(void *self);

// ov002 free functions
void func_ov002_022016e4(u8 *p, u8 v);
BOOL func_ov002_02201700(u8 *p, u32 a, u32 b);
u8 func_ov002_02201a70(void *self, s32 x);
}

class Unk_ov096_0229aea8;

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
    BOOL func_02072e44();
};
extern "C" Unk_020cbb18 *data_020cbb18;

class Unk_020e0db4 {
public:
    Unk_020e0db4();
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_020e100c : public Unk_020e0db4 {
public:
    Unk_020e100c(BOOL flag);
    virtual ~Unk_020e100c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    BOOL func_0208d4fc();
    s32 func_0208d534();
    s32 func_0208d538(s32 v);

    /* 0x0c */ u8 unk_0c[0x3f];
};

// +0x2498 sub-object (0x64 bytes)
class Unk_ov002_02204630 : public Unk_020e100c {
public:
    Unk_ov002_02204630();
    virtual ~Unk_ov002_02204630();
    virtual void vfunc_0c();

    void func_ov002_02202844();
    void func_ov002_02202a18(s32 x, s32 y, s32 n);
    void func_ov002_022029e8(s32 x, s32 y, s32 n, s32 f);
    void func_ov002_02202a40(s32 x, s32 y);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
    void func_ov002_02202b68();
    void func_ov002_02202d00(s32 idx);

    u8 unk_4b[0x64 - 0x4b];
};

// +0x23c0 sub-object (0xc0 bytes, opaque here)
class Unk_ov002_02204468 {
public:
    BOOL func_ov002_022006e4(s32 a);
    u8 unk_00[0xc0];
};

// +0x24fc sub-object (0x2f4 bytes, opaque here)
class Unk_ov002_022013ac {
public:
    s32 func_ov002_02201498(s32 v);
    s32 func_ov002_022014a4();
    u8 unk_00[0x2f4];
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

    void func_ov002_02200840(s32 a, s32 b, s32 c);
    void func_ov002_0220088c(s32 a, s32 b, s32 mode, s32 dist);
    void func_ov002_022008a8(s32 a, s32 b, s32 mode, s32 dist);
    BOOL func_ov002_022008fc(s32 a);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
    BOOL func_ov002_022009d4();
    BOOL func_ov002_02200a14(s32 a);
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

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

    // this group (ov096_002)
    void func_ov096_02295f94();
    void func_ov096_02295fb0();
    void func_ov096_02295fc8(s32 n);
    void func_ov096_02296030();
    void func_ov096_02296094();
    void func_ov096_022960ac();
    void func_ov096_022960b4();
    void func_ov096_02296124();
    void func_ov096_0229619c();
    void func_ov096_02296290();
    void func_ov096_02296338();
    void func_ov096_0229637c();
    BOOL func_ov096_022963ac();
    void func_ov096_022963fc();
    void func_ov096_02296460();
    void func_ov096_0229648c();
    void func_ov096_022964b0();
    s32 func_ov096_0229652c(s32 a);
    BOOL func_ov096_022965ac(s32 a);
    void func_ov096_022965f0(u32 v);
    void func_ov096_02296638(u32 v);
    void func_ov096_02296680();
    void func_ov096_022966a8();
    void func_ov096_022966c8();
    void func_ov096_022966e8();
    void func_ov096_02296708();
    void func_ov096_0229673c();
    void func_ov096_022967a0();
    void func_ov096_02296804();
    void func_ov096_02296854();
    void func_ov096_02296898();

    // other groups of this overlay (declarations only)
    s32 func_ov096_022956d0();
    s32 func_ov096_022956e4();
    s32 func_ov096_02295c94(s32 a);
    s32 func_ov096_022968bc();
    s32 func_ov096_022968cc();
    s32 func_ov096_02296bb8(s32 a);
    s32 func_ov096_02296c18();
    u32 func_ov096_02296f64(s32 k);
    s32 func_ov096_0229713c();
    s32 func_ov096_02297160();
    s32 func_ov096_0229741c(u32 a);
    s32 func_ov096_02297460(u32 a);
    s32 func_ov096_02297b48(u32 a);
    s32 func_ov096_02297b9c(u32 a);
    s32 func_ov096_02297cc0(u32 a);
    s32 func_ov096_02297d50(u32 a);
    s32 func_ov096_0229801c();
    s32 func_ov096_0229806c(u32 a);
    s32 func_ov096_0229826c(u32 a);
    s32 func_ov096_02298334(s32 a, s32 b, s32 c);
    s32 func_ov096_0229838c(u32 a, s32 b, s32 c, s32 d);
    s32 func_ov096_0229865c();
    s32 func_ov096_02298870();
    s32 func_ov096_02294d9c(u32 a);
    s32 func_ov096_02294dac(u32 a);
    BOOL func_ov096_02294dbc(u32 a);
    s32 func_ov096_02294f9c();
    s32 func_ov096_0229a000();
    s32 func_ov096_0229a39c(s32 a);

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
    /* 0x0c8 */ u8 unk_c8[0x358 - 0xc8];
    /* 0x358 */ u8 unk_358[0xdb8 - 0x358];
    /* 0xdb8 */ u8 unk_db8[0x23c0 - 0xdb8];
    /* 0x23c0 */ Unk_ov002_02204468 unk_23c0;
    /* 0x2480 */ u8 unk_2480[0x2498 - 0x2480];
    /* 0x2498 */ Unk_ov002_02204630 unk_2498;
    /* 0x24fc */ Unk_ov002_022013ac unk_24fc;
    /* 0x27f0 */ u8 unk_27f0[0x114];
    /* 0x2904 */ u8 unk_2904[0x2d80 - 0x2904];
};

// ---------------------------------------------------------------------------------------------

void Unk_ov096_0229aea8::func_ov096_02295f94() {
    func_ov096_02295fc8(unk_bb - 0x1c);
    func_ov096_0229865c();
}

void Unk_ov096_0229aea8::func_ov096_02295fb0() {
    func_ov096_02295fc8(0);
    func_ov096_0229865c();
}

void Unk_ov096_0229aea8::func_ov096_02295fc8(s32 n) {
    Unk_020cbb18 *g = data_020cbb18;
    if (g->func_02072e44()) {
        if (g->unk_64 == 0) {
            BOOL z;
            if (n == 0) {
                z = TRUE;
            } else {
                z = FALSE;
            }
            if (z != func_0208c1a4(func_0208a578())) {
                func_0206f604((u8)(n + 0x12), 4);
                func_0206f53c(n);
            }
        } else {
            func_0206f604((u8)(n + 0xd), 0);
        }
    } else {
        func_0206f53c(n);
    }
}

void Unk_ov096_0229aea8::func_ov096_02296030() {
    func_ov002_022016e4(unk_27f0, 0x22);
    func_ov002_02201700(unk_27f0, 0xdd, 0x1d);
    func_ov002_02201700(unk_27f0, 0xde, 0x1e);
    func_ov002_02201700(unk_27f0, 0xdf, 0x1f);
    func_ov002_02201700(unk_27f0, 0xe0, 0x20);
    func_ov002_02201700(unk_27f0, 0x2, 0x22);
    func_ov096_02296898();
    func_ov096_02295c94(0);
}

void Unk_ov096_0229aea8::func_ov096_02296094() {
    func_ov002_02200a58(0x31);
    func_ov096_02298870();
}

void Unk_ov096_0229aea8::func_ov096_022960ac() { func_ov096_022956e4(); }

void Unk_ov096_0229aea8::func_ov096_022960b4() {
    u32 t = unk_b6;
    func_ov096_0229741c(t);
    unk_a4 = func_ov096_02297d50(t);
    unk_a8 = func_ov096_02297cc0(t);
    if (func_0206ef00()) {
        unk_a4 = unk_a4 - 2;
        unk_a8 = unk_a8 - 2;
    }
    func_ov002_02200a58(0x2a);
    func_ov094_02293c58(unk_db8);
}

void Unk_ov096_0229aea8::func_ov096_02296124() {
    u32 t = unk_b6;
    func_ov096_02297460(t);
    unk_a4 = func_ov096_02297d50(t);
    unk_a8 = func_ov096_02297cc0(t);
    if (func_0206ef00()) {
        unk_a4 = unk_a4 - 2;
        unk_a8 = unk_a8 - 2;
    }
    func_ov002_02200a58(0x2b);
    func_ov094_02292efc(unk_358, unk_ac, unk_b0);
}

static inline BOOL Unk_ov096_0229619c_Range(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 b = *p;
    u32 a = *p;
    if (a >= lo && b <= hi) {
        r = TRUE;
    }
    return r;
}

void Unk_ov096_0229aea8::func_ov096_0229619c() {
    BOOL ok = TRUE;
    volatile u16 v = 0xfff1;
    u32 k = unk_bb;
    switch (k) {
    case 0xf:
        unk_c0 = 3;
        break;
    case 0x10:
        unk_c0 = 4;
        v = func_ov096_02296f64(4);
        if (Unk_ov096_0229619c_Range(&v, 0x1429, 0x1430)) {
            ok = FALSE;
        }
        break;
    case 0x11:
        unk_c0 = 5;
        v = func_ov096_02296f64(5);
        if (Unk_ov096_0229619c_Range(&v, 0x13a0, 0x13a7)) {
            ok = FALSE;
        }
        break;
    default:
        func_ov096_0229865c();
        return;
    }
    s32 r = func_ov096_0229801c();
    if (ok && r == 0x26) {
        func_ov096_0229865c();
        func_ov096_02298334(0xa, 0xff, 0);
        func_0200402c(0x73);
        return;
    }
    unk_b4 = r;
    func_ov096_02297160();
    unk_ac = 0xfff1;
    func_ov096_0229713c();
    func_ov096_02294dac(0x8000);
}

void Unk_ov096_0229aea8::func_ov096_02296290() {
    s32 v;
    s32 r;
    switch (unk_bb) {
    case 0xb:
        v = func_0204b718(func_ov096_02296c18(), 0, 0);
        break;
    case 0xc:
        v = func_0204b718(0x64, 0, 0);
        break;
    case 0xd:
        v = func_0204b718(0x3e8, 0, 0);
        break;
    case 0xe:
        v = func_0204b718(0x2710, 0, 0);
        break;
    }
    r = func_ov096_0229801c();
    if (r == 0x26) {
        func_ov096_0229865c();
        func_ov096_02298334(0xc, 0xff, 1);
    } else {
        func_ov096_02296bb8(v);
        func_ov096_0229838c(0x25, r, v, 0);
    }
}

void Unk_ov096_0229aea8::func_ov096_02296338() {
    if (func_ov096_022963ac()) {
        s32 t = func_ov096_02294f9c();
        func_02065bfc();
        func_0206ed5c(t);
        func_ov096_0229806c(unk_b8);
        func_ov096_0229a39c(8);
        func_ov096_0229a000();
    }
}

void Unk_ov096_0229aea8::func_ov096_0229637c() {
    if (func_ov096_022963ac()) {
        func_0206ed5c(func_ov096_02294f9c());
        func_ov096_022956d0();
        func_ov096_02294dac(0x200);
    }
}

BOOL Unk_ov096_0229aea8::func_ov096_022963ac() {
    s32 t = func_020991fc();
    if (t == -1) {
        func_ov096_0229865c();
        func_ov096_02298334(2, 0xff, 1);
        return FALSE;
    }
    func_0206ec54(unk_b6);
    unk_b8 = unk_b6;
    unk_b6 = t + 0xf;
    return TRUE;
}

void Unk_ov096_0229aea8::func_ov096_022963fc() {
    s32 r6 = func_ov096_0229801c();
    if (r6 == 0x26) {
        func_ov096_0229865c();
        func_ov096_02298334(0xb, 0xff, 1);
    } else {
        s32 a = func_ov096_02297b48(unk_b6);
        s32 b = func_ov096_02297b9c(unk_b6);
        func_ov096_0229806c(unk_b6);
        func_ov096_0229838c(unk_b6, r6, b, a);
    }
}

void Unk_ov096_0229aea8::func_ov096_02296460() {
    func_0206ec54(unk_b6);
    func_0206ed5c(func_ov096_02294f9c());
    func_ov096_0229a39c(8);
    func_ov096_0229a000();
}

void Unk_ov096_0229aea8::func_ov096_0229648c() {
    func_0206ed5c(func_ov096_02294f9c());
    func_ov096_022956d0();
    func_ov096_02294d9c(0x200);
}

void Unk_ov096_0229aea8::func_ov096_022964b0() {
    u32 t = unk_b6;
    s32 r6 = func_ov096_02297b9c(t);
    if (!func_ov096_022965ac(r6)) {
        func_ov096_0229865c();
        func_ov096_02298334(9, 0xff, 1);
    } else {
        s32 r = func_ov096_0229652c(r6);
        if (r != 0) {
            if (r == 2) {
                func_ov002_02200a58(0x28);
                func_ov096_02294dac(0x1000);
            } else {
                s32 x = func_ov096_0229826c(t);
                func_ov094_022934d8(unk_358, x);
                func_ov096_0229865c();
            }
        }
    }
}

static inline BOOL Unk_ov096_0229652c_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

s32 Unk_ov096_0229aea8::func_ov096_0229652c(s32 a) {
    if (Unk_ov096_0229652c_IsZero(data_020e416c)) {
        unk_c4 = func_02042c64(data_020cbb18->unk_64, a);
        if (unk_c4 == -1) {
            func_ov096_0229865c();
            func_ov096_02298334(3, 0xff, 0);
            func_0200402c(0x73);
            return 0;
        }
        return 2;
    }
    if (func_020b52f8()) {
        return func_ov097_0229b2bc(this, a);
    }
    return 0;
}

BOOL Unk_ov096_0229aea8::func_ov096_022965ac(s32 a) {
    if (Unk_ov096_0229652c_IsZero(data_020e416c)) {
        return func_ov098_0229bc90(this, a);
    }
    if (func_020b52f8()) {
        if (func_ov097_0229b280(this)) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

void Unk_ov096_0229aea8::func_ov096_022965f0(u32 v) {
    unk_23c0.func_ov002_022006e4(1);
    unk_ba = unk_8d;
    unk_b7 = v;
    unk_2498.func_ov002_02202d00(6);
    func_ov002_02200a58(0x15);
}

void Unk_ov096_0229aea8::func_ov096_02296638(u32 v) {
    unk_23c0.func_ov002_022006e4(1);
    unk_b7 = v;
    unk_2498.func_ov002_02202d00(5);
    func_ov002_02200a58(0x14);
    func_ov096_02294d9c(0x2000);
}

void Unk_ov096_0229aea8::func_ov096_02296680() {
    unk_2498.func_ov002_02202d00(4);
    func_ov002_02200a58(0x12);
    unk_b9 = 0x26;
}

void Unk_ov096_0229aea8::func_ov096_022966a8() {
    unk_2498.func_ov002_02202af0();
    func_ov002_02200a58(0x11);
}

void Unk_ov096_0229aea8::func_ov096_022966c8() {
    unk_2498.func_ov002_02202b68();
    func_ov002_02200a58(0x10);
}

void Unk_ov096_0229aea8::func_ov096_022966e8() {
    unk_2498.func_ov002_02202a78();
    unk_2498.vfunc_0c();
}

void Unk_ov096_0229aea8::func_ov096_02296708() {
    s32 a = func_ov096_022968cc();
    s32 b = func_ov096_022968bc();
    unk_2498.func_ov002_02202a40(a, b);
    unk_2498.func_ov002_02202d00(1);
}

void Unk_ov096_0229aea8::func_ov096_0229673c() {
    if (func_ov096_02294dbc(0x40000)) {
        unk_bc = 1;
    } else {
        unk_bc = 0;
    }
    s32 a = unk_24fc.func_ov002_022014a4();
    s32 b = unk_24fc.func_ov002_02201498(unk_bc);
    unk_2498.func_ov002_02202a40(a, b);
    unk_2498.func_ov002_02202d00(7);
}

void Unk_ov096_0229aea8::func_ov096_022967a0() {
    unk_bb = 0x22;
    unk_bc = func_ov002_02201a70(&unk_24fc, 1);
    s32 a = unk_24fc.func_ov002_022014a4();
    s32 b = unk_24fc.func_ov002_02201498(unk_bc);
    unk_2498.func_ov002_02202a40(a, b);
    unk_2498.func_0208d538(8);
    func_ov002_02200a58(0x1e);
}

void Unk_ov096_0229aea8::func_ov096_02296804() {
    s32 a = unk_24fc.func_ov002_022014a4();
    s32 b = unk_24fc.func_ov002_02201498(unk_bc);
    unk_2498.func_ov002_02202a18(a, b, 2);
    unk_ba = unk_8d;
    func_ov002_02200a58(0xf);
}

void Unk_ov096_0229aea8::func_ov096_02296854() {
    s32 a = func_ov096_022968cc();
    s32 b = func_ov096_022968bc();
    unk_2498.func_ov002_022029e8(a, b, 3, 1);
    unk_ba = unk_8d;
    func_ov002_02200a58(0xf);
}

void Unk_ov096_0229aea8::func_ov096_02296898() {
    unk_2498.func_ov002_02202d00(0);
    unk_2498.vfunc_0c();
}
