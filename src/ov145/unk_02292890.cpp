#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

// ---- main-module classes (copied from src/main) ----
class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020e1c64 {
public:
    Unk_020e1c64();
    virtual ~Unk_020e1c64();
    u8 pad_04[0x18];
};

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a7aa0(void *src, BOOL a, BOOL b);
    void func_020a7bd8(Unk_020e2a78 *o);
    void func_020a7bd8(Unk_020e1c64 *o);
    void func_020a7c3c();
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

class Unk_02050288;

class Unk_020e0488 : public Unk_020e2a78 {
public:
    Unk_020e0488();
    virtual ~Unk_020e0488();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    void func_0206fa4c();
    void func_0206f9fc(u32 id);
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb48(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();

    /* 0x12 */ u8 unk_12[0x2a];
    /* 0x3c */ Unk_02050288 *unk_3c;
};

class Unk_020dd324 : public Unk_020e2a78 {
public:
    Unk_020dd324();
    virtual ~Unk_020dd324();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    BOOL func_02062564(u16 *p);

    /* 0x12 */ u8 unk_12[0x11];
};

extern "C" {
void func_0206f9c8(Unk_020e0488 *w, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0206f9fc(Unk_020e0488 *w, s32 a);
void func_0206ecf8(s32 a);
void func_0200402c(s32 a);
void func_ov004_02235a04();
void func_ov004_02235a2c();
}
extern u8 data_020e416c;

// ---- ov002 sub-objects (opaque bodies) ----
class Unk_020e0db4 {
public:
    virtual ~Unk_020e0db4();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    u32 unk_04[2];
};

// object at +0xe8 of the scene (size 0x64)
class Unk_ov002_0220464c : public Unk_020e0db4 {
public:
    virtual ~Unk_ov002_0220464c();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    void func_ov002_022029e8(s32 x, s32 y, s32 n, s32 f);
    void func_ov002_02202a40(s32 x, s32 y);
    void func_ov002_02202a78();
    void func_ov002_02202af0();
    void func_ov002_02202b68();
    void func_ov002_02202c40();
    void func_ov002_02202ca0();
    void func_ov002_02202d00(s32 idx);
    BOOL func_0208d4fc();
    s32 func_0208d534();
    BOOL func_ov002_022028f0();
    u8 unk_0c[0x64 - 0xc];
};

// object at +0x14c (size 0x48)
class Unk_ov002_022046b0 {
public:
    virtual ~Unk_ov002_022046b0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    s32 func_ov002_02202e60();
    void func_ov002_02202e48();
    void func_ov002_02202e54();
    void func_ov002_02202ef4();
    void func_ov002_02202f00();
    void func_ov002_02202f0c();
    BOOL func_ov002_02202f18(s32 x, s32 y);
    s32 func_ov002_02202ed0();
    s32 func_ov002_02202e84();
    u8 unk_04[0x44];
};

// object at +0x194 (size 0x164)
class Unk_ov002_02202fac {
public:
    ~Unk_ov002_02202fac();
    BOOL func_ov002_0220308c();
    s32 func_ov002_0220306c();
    BOOL func_ov002_02203110(s32 idx);
    void func_ov002_02203900();
    void func_ov002_022030ac(u8 v);
    s32 func_ov002_022030b8(s32 idx);
    s32 func_ov002_022030f4(s32 idx);
    u8 unk_00[0x164];
};

// ---- ov002 scene base (vtable 0x022044e4) ----
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
    void func_ov002_0220085c(s32 a, s32 mode);
    void func_ov002_02200980();
    BOOL func_ov002_02200a14(s32 a);
    u32 func_ov002_022009c8();
    BOOL func_ov002_022009d4();
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

class Unk_ov145_020b8800 {
public:
    void func_020b87d0();
    u32 unk_00[9];
};

typedef Unk_020e1c64 Unk_ov145_02292600_A;
typedef Unk_020dd324 Unk_ov145_02292600_B;

extern "C" {
extern u8 data_021ed0a0;
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern void *data_021f482c;
extern u8 data_ov145_022938a0[];
extern u8 data_ov145_022938b8[];
extern u8 data_ov145_022938d0[];
extern u8 data_ov145_022938e8[];
extern u8 data_ov145_02293900[];
extern u8 data_ov145_02293918[];
extern u8 data_ov145_02293930[];
extern u8 data_ov145_02293948[];
BOOL func_02070358(void *a, void *b);
s32 func_02133150(s32 a, s32 b);
void func_0208dae8(void *p, s32 a, s32 b);
BOOL func_0208d9a8(void *p);
void func_020e761c(void *p, s32 a, s32 b);
BOOL func_0206ef0c();
s32 func_0200261c(const void *d, void *heap, s32 a, s32 b, s32 c, s32 e);
s32 func_020026c4(const void *d, void *heap, s32 a, s32 b, s32 c, s32 e);
s32 func_020641b4(const void *src, void *dst, s32 n);
void func_020015b8(s32 a);
void func_02002398(s32 a, s32 b);
void func_0200226c(s32 a, s32 b, s32 c, s32 d);
void func_020024f0(void *a, s32 b, s32 c, s32 d);
void func_ov002_02203920(void *p);
void func_02115e48(void *dst, void *src, u32 n);
void func_02115e30(u16 v, void *dst, u32 n);
s32 func_020b86c0(void *a, void *b, s32 c, s32 d, s32 e);
void func_020b8670(void *a, void *b, u32 c, u32 d);
void func_0206ee80(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020021fc(s32 a, s32 b, s32 c);
void func_02094030(void *p);
void func_02094018(void *p);
void func_0206267c(void *p);
void func_0206260c(void *p);
BOOL func_020700a4(void *a, void *b, void *c);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
}

// ---- ov145 scene (vtable 0x022937c0) ----
class Unk_ov145_022937c0 : public Unk_ov002_022044e4 {
public:
    virtual ~Unk_ov145_022937c0();

    // this group
    void func_ov145_02292008(u32 m);
    void func_ov145_02292018(u32 m);
    BOOL func_ov145_02292028(u32 m);
    void func_ov145_0229203c();
    void func_ov145_022920b0(u32 t);
    BOOL func_ov145_02292190(u32 pad);
    u32 func_ov145_02292284(s32 x, s32 y);
    BOOL func_ov145_022922b0(u32 t);
    void func_ov145_02292314(u8 v);
    void func_ov145_0229232c(u8 v);
    u16 *func_ov145_02292384(s32 i);
    s32 func_ov145_022923e4();
    void func_ov145_022923f4();
    void func_ov145_0229246c();
    void func_ov145_022924dc();
    void func_ov145_02292554(s32 v);
    void func_ov145_02292590();
    void func_ov145_02292600();
    void func_ov145_02292764();
    Unk_020e0488 *func_ov145_02292790();
    void func_ov145_022927c8();
    void func_ov145_022927ec();
    void func_ov145_02292804();
    void func_ov145_02292820(s32 a, s32 b);
    void func_ov145_02292850();

    // this group (ov145_001)
    void func_ov145_02292890();
    s32 func_ov145_022928ac();
    s32 func_ov145_022928f0();
    void func_ov145_0229293c();
    void func_ov145_02292988();
    void func_ov145_022929ac();
    void func_ov145_022929d0();
    void func_ov145_022929f4();
    s32 func_ov145_02292a18(u16 *out, s32 start, s32 n);
    s32 func_ov145_02292a2c(u16 *out, s32 start, s32 n);
    s32 func_ov145_02292a40(u16 *out, s32 start, s32 n, s32 step);
    void func_ov145_02292a90();
    void func_ov145_02292abc();
    void func_ov145_02292af4();
    BOOL func_ov145_02292b1c();
    void func_ov145_02292b44();
    void func_ov145_02292bd0();
    void func_ov145_02292be0(s32 a, s32 flag);
    BOOL func_ov145_02292c58(s32 x, s32 y);
    void func_ov145_02292ca0();
    void func_ov145_02292cd0();
    void func_ov145_02292cf0();
    void func_ov145_02292d18();
    void func_ov145_02292d30();
    void func_ov145_02292d98();
    void func_ov145_02292dbc();
    void func_ov145_02292df0();
    void func_ov145_02292e18();
    void func_ov145_02292e58();
    void func_ov145_02292ea4();
    void func_ov145_02292f08();
    void func_ov145_02292f3c();
    void func_ov145_02292f70();
    void func_ov145_02293038();
    void func_ov145_02293088();
    void func_ov145_02293138();
    void func_ov145_02293170();
    void func_ov145_02293198();

    // other groups
    void func_ov145_02293424();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ s32 unk_94;
    /* 0x098 */ u8 unk_98[4];
    /* 0x09c */ s32 unk_9c;
    /* 0x0a0 */ s32 unk_a0;
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ s32 unk_ac;
    /* 0x0b0 */ s32 unk_b0;
    /* 0x0b4 */ u16 unk_b4;
    /* 0x0b6 */ s16 unk_b6;
    /* 0x0b8 */ u16 unk_b8;
    /* 0x0ba */ u16 unk_ba;
    /* 0x0bc */ u16 unk_bc;
    /* 0x0be */ u16 unk_be;
    /* 0x0c0 */ u8 unk_c0;
    /* 0x0c1 */ u8 unk_c1;
    /* 0x0c2 */ u8 unk_c2;
    /* 0x0c3 */ u8 unk_c3;
    /* 0x0c4 */ u8 unk_c4;
    /* 0x0c5 */ u8 unk_c5;
    /* 0x0c6 */ u8 unk_c6;
    /* 0x0c7 */ u8 unk_c7;
    /* 0x0c8 */ Unk_ov002_0220464c unk_c8;
    /* 0x12c */ Unk_ov002_022046b0 unk_12c;
    /* 0x174 */ Unk_ov002_02202fac unk_174;
    /* 0x2d8 */ Unk_020e0488 unk_2d8[18];
    /* 0x758 */ Unk_ov145_020b8800 unk_758;
    /* 0x77c */ Unk_ov145_020b8800 unk_77c;
    /* 0x7a0 */ Unk_ov145_020b8800 unk_7a0;
    /* 0x7c4 */ u8 unk_7c4[0x68];
    /* 0x82c */ u8 unk_82c[0x70];
    /* 0x89c */ u8 unk_89c[0x70];
    /* 0x90c */ u8 unk_90c[0x28];
    /* 0x934 */ u16 unk_934[9];
    /* 0x946 */ u8 unk_946[0x800];
    /* 0x1146 */ u8 unk_1146[0x800];
    /* 0x1946 */ u8 unk_1946[0x800];
    /* 0x2146 */ u16 unk_2146[16];
    /* 0x2166 */ u16 unk_2166[16];
};


// ---------------------------------------------------------------------------------------------
// ov145_001 group

static inline BOOL Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov145_022937c0::func_ov145_02292890() {
    unk_c8.func_ov002_02202d00(0);
    unk_c8.vfunc_0c();
}

s32 Unk_ov145_022937c0::func_ov145_022928ac() {
    u32 c = unk_c2;
    if (c <= 3) {
        return 0xad;
    }
    switch (c) {
    case 4:
        return unk_174.func_ov002_022030b8(6);
    case 5:
        return unk_12c.func_ov002_02202e60();
    default:
        return 0x60;
    }
}

s32 Unk_ov145_022937c0::func_ov145_022928f0() {
    u32 c = unk_c2;
    if (c <= 3) {
        return (s32)c * -0x24 + 0x94;
    }
    switch (c) {
    case 4:
        return unk_174.func_ov002_022030f4(6);
    case 5:
        return unk_12c.func_ov002_02202e84();
    default:
        return 0x80;
    }
}

void Unk_ov145_022937c0::func_ov145_0229293c() {
    s32 a = func_ov145_022928f0();
    s32 b = func_ov145_022928ac();
    unk_c8.func_ov002_02202a40(a, b);
    if (unk_c2 == 4) {
        unk_c8.func_ov002_02202d00(7);
    } else {
        unk_c8.func_ov002_02202d00(1);
    }
    func_ov145_02292804();
}

void Unk_ov145_022937c0::func_ov145_02292988() {
    unk_bc = func_ov145_02292a2c((u16 *)unk_89c, 0x12b0, 0x38);
}

void Unk_ov145_022937c0::func_ov145_022929ac() {
    unk_ba = func_ov145_02292a2c((u16 *)unk_82c, 0x12e8, 0x38);
}

void Unk_ov145_022937c0::func_ov145_022929d0() {
    unk_b8 = func_ov145_02292a18((u16 *)unk_90c, 0x3894, 0x14);
}

void Unk_ov145_022937c0::func_ov145_022929f4() {
    unk_be = func_ov145_02292a18((u16 *)unk_7c4, 0x450c, 0x34);
}

s32 Unk_ov145_022937c0::func_ov145_02292a18(u16 *out, s32 start, s32 n) {
    return func_ov145_02292a40(out, start, n, 4);
}

s32 Unk_ov145_022937c0::func_ov145_02292a2c(u16 *out, s32 start, s32 n) {
    return func_ov145_02292a40(out, start, n, 1);
}

s32 Unk_ov145_022937c0::func_ov145_02292a40(u16 *out, s32 start, s32 n, s32 step) {
    s32 cnt = 0;
    u16 v = 0xfff1;
    s32 i;
    for (i = cnt; i < n; i++) {
        v = start;
        if (func_02070358(&data_021ed0a0, &v)) {
            out[cnt] = start;
            cnt++;
        }
        start = (u16)(start + step);
    }
    return cnt;
}

void Unk_ov145_022937c0::func_ov145_02292a90() {
    if (unk_a4 > 0) {
        unk_a8 = func_02133150(unk_9c * 0x78, unk_a4);
        func_ov145_02292af4();
    }
}

void Unk_ov145_022937c0::func_ov145_02292abc() {
    s32 t;
    s32 n = unk_a4;
    t = func_02133150(unk_a8 * n, 0x78);
    if (t < 0) {
        t = 0;
    }
    if (t > n) {
        t = n;
    }
    func_ov145_02292554(t);
    unk_a0 = t;
}

void Unk_ov145_022937c0::func_ov145_02292af4() {
    func_0208dae8(&unk_12c, 0x63, unk_94 + (unk_a8 - 0x4b));
}

BOOL Unk_ov145_022937c0::func_ov145_02292b1c() {
    if (func_0208d9a8(&unk_12c)) {
        unk_12c.func_ov002_02202f0c();
        return TRUE;
    }
    return FALSE;
}

void Unk_ov145_022937c0::func_ov145_02292b44() {
    s32 old = unk_a8;
    u32 k = data_021f47d8[0];
    if (k & 0x40) {
        unk_a8 = unk_a8 - 4;
        if (unk_a8 < 0) {
            unk_a8 = 0;
        }
    } else if (k & 0x80) {
        unk_a8 = unk_a8 + 4;
        if (unk_a8 > 0x78) {
            unk_a8 = 0x78;
        }
    }
    if (old != unk_a8) {
        func_ov145_02292abc();
        func_ov145_02292af4();
        unk_12c.func_ov002_02202e54();
    }
}

void Unk_ov145_022937c0::func_ov145_02292bd0() {
    unk_12c.func_ov002_02202ef4();
}

void Unk_ov145_022937c0::func_ov145_02292be0(s32 a, s32 flag) {
    if (flag) {
        a -= 0x1d;
    } else {
        a += unk_ac;
    }
    if (a < 0) {
        a = 0;
    }
    if (a > 0x78) {
        a = 0x78;
    }
    if (flag) {
        func_020e761c(&unk_a8, a, 8);
    } else {
        unk_a8 = a;
    }
    func_ov145_02292abc();
    func_ov145_02292af4();
    s32 d = unk_b0 - unk_a8;
    if (d >= 4 || d <= -4) {
        unk_12c.func_ov002_02202e54();
        unk_b0 = unk_a8;
    }
}

BOOL Unk_ov145_022937c0::func_ov145_02292c58(s32 x, s32 y) {
    if (unk_12c.func_ov002_02202f18(x, y)) {
        unk_ac = unk_a8 - y;
        unk_12c.func_ov002_02202f00();
        unk_b0 = unk_a8;
        return TRUE;
    }
    return FALSE;
}

void Unk_ov145_022937c0::func_ov145_02292ca0() {
    func_0206ecf8(1);
    unk_174.func_ov002_022030ac(6);
    func_ov002_02200a50(2);
    func_ov002_02200a58(9);
}

void Unk_ov145_022937c0::func_ov145_02292cd0() {
    if (func_0206ef0c()) {
        func_ov145_02292d18();
    } else {
        func_ov145_02292cf0();
    }
}

void Unk_ov145_022937c0::func_ov145_02292cf0() {
    unk_c2 = unk_c1;
    func_ov145_0229293c();
    func_ov002_02200980();
    func_ov002_02200a58(3);
}

void Unk_ov145_022937c0::func_ov145_02292d18() {
    func_ov145_02292890();
    func_ov002_02200a58(0);
}

void Unk_ov145_022937c0::func_ov145_02292d30() {
    if (unk_174.func_ov002_0220308c()) {
        if (unk_c8.func_0208d534()) {
            s32 a = unk_174.func_ov002_0220306c();
            s32 b = unk_174.func_ov002_022030f4(-1);
            s32 c = unk_174.func_ov002_022030b8(-1);
            unk_c8.func_ov002_02202a40(a + b, a + c);
        }
    } else {
        func_ov145_02292890();
        func_ov002_02200a60(1);
    }
}

void Unk_ov145_022937c0::func_ov145_02292d98() {
    if (unk_c8.func_0208d4fc()) {
        func_ov145_02292804();
        func_ov002_02200a58(unk_c3);
    }
}

void Unk_ov145_022937c0::func_ov145_02292dbc() {
    if (unk_c8.func_0208d4fc()) {
        if (!func_ov145_022922b0(unk_c2)) {
            func_ov002_02200a58(3);
            func_ov145_022927c8();
        }
    }
}

void Unk_ov145_022937c0::func_ov145_02292df0() {
    if (!unk_c8.func_ov002_022028f0()) {
        func_ov002_02200a58(unk_c3);
        func_ov145_02293424();
    }
}

void Unk_ov145_022937c0::func_ov145_02292e18() {
    if (func_ov145_02292b1c()) {
        func_ov002_02200a58(3);
        func_ov145_022927c8();
    }
    s32 a = func_ov145_022928f0();
    s32 b = func_ov145_022928ac();
    unk_c8.func_ov002_02202a40(a, b);
}

void Unk_ov145_022937c0::func_ov145_02292e58() {
    if (data_021f47d8[0] & 1) {
        func_ov145_02292b44();
        s32 a = func_ov145_022928f0();
        s32 b = func_ov145_022928ac();
        unk_c8.func_ov002_02202a40(a, b);
    } else {
        func_ov145_02292bd0();
        func_ov002_02200a58(5);
    }
}

void Unk_ov145_022937c0::func_ov145_02292ea4() {
    if (func_ov002_022009d4()) {
        func_ov145_02292d18();
        return;
    }
    if (func_ov145_02292190(func_ov002_022009c8())) {
        func_ov145_02292850();
        return;
    }
    {
        u32 k = data_021f47d8[1];
        if (k & 1) {
            func_ov145_022927ec();
            return;
        }
        if (k & 2) {
            func_ov145_02292890();
            func_ov145_02292ca0();
        }
    }
}

void Unk_ov145_022937c0::func_ov145_02292f08() {
    if (data_021f4770 != 0) {
        func_ov145_02292be0(data_021ef5ec, 1);
    } else {
        func_ov145_02292bd0();
        func_ov002_02200a58(0);
    }
}

void Unk_ov145_022937c0::func_ov145_02292f3c() {
    if (data_021f4770 != 0) {
        func_ov145_02292be0(data_021ef5ec, 0);
    } else {
        func_ov145_02292bd0();
        func_ov002_02200a58(0);
    }
}

void Unk_ov145_022937c0::func_ov145_02292f70() {
    if (func_ov002_02200a14(1)) {
        func_ov145_02292cf0();
        return;
    }
    if (Both()) {
        if (unk_174.func_ov002_02203110(6)) {
            func_ov145_02292ca0();
        } else {
            s32 x = data_021ef5f0;
            s32 y = data_021ef5ec;
            s32 r = func_ov145_02292284(x, y);
            if (r != 6) {
                func_ov145_022922b0(r);
            } else if (unk_a4 > 0) {
                if (func_ov145_02292c58(x, y)) {
                    func_ov002_02200a58(1);
                } else if (x >= 0xe4 && x <= 0xec && y >= 0x15 && y <= 0x8d) {
                    unk_12c.func_ov002_02202f00();
                    func_ov002_02200a58(2);
                }
            }
        }
    }
}

void Unk_ov145_022937c0::func_ov145_02293038() {
    func_ov002_02203920(&unk_174);
    void *heap = data_021f482c;
    func_0200261c(data_ov145_022938a0, heap, 8, 0xc0, 0xc0, 0x13f);
    func_020026c4(data_ov145_022938b8, heap, 8, 4, 4, 9);
}

void Unk_ov145_022937c0::func_ov145_02293088() {
    void *heap = data_021f482c;
    func_0200261c(data_ov145_022938d0, heap, 6, 0x11, 0x11, 0x63);
    func_0200261c(data_ov145_022938e8, heap, 6, 0x26e, 0x26e, 0x27d);
    func_020026c4(data_ov145_02293900, heap, 6, 1, 1, 7);
    func_020641b4(data_ov145_02293918, unk_2146, 0x20);
    func_020641b4(data_ov145_02293930, unk_946, 0x800);
    func_020641b4(data_ov145_02293948, unk_1946, 0x800);
    func_020024f0(unk_1946, 6, 0x800, 0);
}

void Unk_ov145_022937c0::func_ov145_02293138() {
    func_020015b8(0);
    func_02002398(6, 1);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
}

void Unk_ov145_022937c0::func_ov145_02293170() {
    func_ov145_0229203c();
    func_ov145_022923f4();
    func_ov145_02292590();
    unk_12c.func_ov002_02202ed0();
}

void Unk_ov145_022937c0::func_ov145_02293198() {
    func_ov145_02292764();
    unk_174.func_ov002_02203900();
    unk_758.func_020b87d0();
    unk_77c.func_020b87d0();
    unk_7a0.func_020b87d0();
    unk_12c.vfunc_0c();
}
