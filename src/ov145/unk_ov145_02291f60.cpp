// ov145: scene overlay (class Unk_ov145_022937c0, vtable 0x022937c0): donation / catalogue list menu.
#define vfunc_08() vfunc_08(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef vfunc_08
#undef vfunc_14

class Unk_ov145_022937c0;
typedef void (Unk_ov145_022937c0::*Unk_ov145_022937c0_Fn)();

#define func_0208d4fc _ZN12Unk_020e100c13func_0208d4fcEv
#define func_0208d534 _ZN12Unk_020e100c13func_0208d534Ev
#define func_0208d9a8 _ZN12Unk_020e102813func_0208d9a8Ev
#define func_0208dae8 _ZN12Unk_020e102813func_0208dae8Eii
#define func_020b87d0 _ZN12Unk_020e45f813func_020b87d0Ev
#define func_02133150 _s32_div_f
#define func_020700a4 _ZN12Unk_0206fe8013func_020700a4EiPt
#define func_02070358 _ZN12Unk_0206fe8013func_02070358EPt
#define func_020b8670 _ZN12Unk_020e45f813func_020b8670Ejhj
#define func_020b86c0 _ZN12Unk_020e45f813func_020b86c0Ejhjj
#define func_ov002_022028f0 _ZN18Unk_ov002_02202d9819func_ov002_022028f0Ev
#define func_ov002_022029e8 _ZN18Unk_ov002_02202d9819func_ov002_022029e8Eiiii
#define func_ov002_02202a40 _ZN18Unk_ov002_02202d9819func_ov002_02202a40Eii
#define func_ov002_02202a78 _ZN18Unk_ov002_02202d9819func_ov002_02202a78Ev
#define func_ov002_02202af0 _ZN18Unk_ov002_02202d9819func_ov002_02202af0Ev
#define func_ov002_02202844 _ZN18Unk_ov002_02202d9819func_ov002_02202844Ev
#define func_ov002_02202b68 _ZN18Unk_ov002_0220464c19func_ov002_02202b68Ev
#define func_ov002_02202c40 _ZN18Unk_ov002_0220464c19func_ov002_02202c40Ev
#define func_ov002_02202ca0 _ZN18Unk_ov002_0220464c19func_ov002_02202ca0Ev
#define func_ov002_02202d00 _ZN18Unk_ov002_0220464c19func_ov002_02202d00Ei
#define func_ov002_02202e60 _ZN18Unk_ov002_022046b019func_ov002_02202e60Ev
#define func_ov002_02202e84 _ZN18Unk_ov002_022046b019func_ov002_02202e84Ev
#define func_ov002_02202ed0 _ZN18Unk_ov002_022046b019func_ov002_02202ed0Ev
#define func_ov002_02202ef4 _ZN18Unk_ov002_022046b019func_ov002_02202ef4Ev
#define func_ov002_02202f00 _ZN18Unk_ov002_022046b019func_ov002_02202f00Ev
#define func_ov002_02202f0c _ZN18Unk_ov002_022046b019func_ov002_02202f0cEv
#define func_ov002_02202f18 _ZN18Unk_ov002_022046b019func_ov002_02202f18Eii
#define func_ov002_0220306c _ZN18Unk_ov002_02202fac19func_ov002_0220306cEv
#define func_ov002_0220308c _ZN18Unk_ov002_02202fac19func_ov002_0220308cEv
#define func_ov002_022030ac _ZN18Unk_ov002_02202fac19func_ov002_022030acEh
#define func_ov002_022030b8 _ZN18Unk_ov002_02202fac19func_ov002_022030b8Ei
#define func_ov002_022030f4 _ZN18Unk_ov002_02202fac19func_ov002_022030f4Ei
#define func_ov002_02203110 _ZN18Unk_ov002_02202fac19func_ov002_02203110Ei
#define func_ov002_02203510 _ZN18Unk_ov002_022046cc19func_ov002_02203510Ei
#define func_ov002_02203900 _ZN18Unk_ov002_022046cc19func_ov002_02203900Ev
#define func_ov002_022036a4 _ZN18Unk_ov002_022046cc19func_ov002_022036a4Ei
#define func_ov092_02291c5c _ZN18Unk_ov092_02291ec819func_ov092_02291c5cEv
#define func_ov092_02291ce4 _ZN18Unk_ov092_02291ec819func_ov092_02291ce4Eii

struct Unk_ov145_SceneEntry {
    Unk_ov145_022937c0 *(*fn)();
    u16 a;
    u16 b;
};

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

class Unk_020e45f8 {
public:
    Unk_020e45f8();
    u32 unk_00[0x24 / 4];
};

class Unk_ov002_02204614 {
public:
    Unk_ov002_02204614();
    virtual ~Unk_ov002_02204614();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[0x60 / 4];
};

class Unk_ov002_022046b0 {
public:
    Unk_ov002_022046b0();
    virtual ~Unk_ov002_022046b0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    u32 unk_04[(0x48 - 4) / 4];
};

class Unk_ov002_022046cc {
public:
    Unk_ov002_022046cc();
    ~Unk_ov002_022046cc();
    u32 unk_00[0x164 / 4];
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
    BOOL func_ov002_022008fc(s32 a);
    void func_ov002_022008c4(s32 a, s32 b, s32 c, s32 d);
    void func_ov002_022008e0(s32 a, s32 b, s32 c, s32 d);
    BOOL func_ov002_02200908(s32 a);
    s32 func_ov002_02200920();
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

typedef Unk_020e1c64 Unk_ov145_02292600_A;
typedef Unk_020dd324 Unk_ov145_02292600_B;

extern "C" {
extern u8 data_020e416c;
extern u8 data_021ed0a0;
extern u16 data_021f47d8[];
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern void *data_021f482c;
Unk_ov145_022937c0 *func_ov145_022936a8();

void _ZN12Unk_020e2a7813func_020a7bd8EPS_(void *self, void *o);
void func_0206f9c8(Unk_020e0488 *w, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0206f9fc(Unk_020e0488 *w, s32 a);
void func_0206ecf8(s32 a);
void func_0200402c(s32 a);
BOOL func_02070358(void *a, void *b);
s32 func_02133150(s32 a, s32 b);
void func_0208dae8(void *p, s32 a, s32 b);
BOOL func_0208d9a8(void *p);
BOOL func_0208d4fc(void *p);
BOOL func_0208d534(void *p);
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
BOOL func_020700a4(void *a, void *b, void *c);
BOOL func_ov002_0220125c(u32 v);
BOOL func_ov002_0220126c(u32 v);
BOOL func_ov002_0220127c(u32 v);
BOOL func_ov002_0220128c(u32 v);
void func_020ed188(void *p);
s32 func_020ed174();
void func_020b87d0(void *p);
void func_020020b8(u32 x);
void func_ov092_02291c5c();
void func_ov092_02291ce4(s32 a, s32 b, s32 c);
void func_020021a0(u32 x);
void func_02087e70(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
BOOL func_0206ef00();
void func_ov002_02202e48(void *p);
void func_ov002_02202e54(void *p);
void func_ov002_02202f00(void *p);
void func_ov002_02202f0c(void *p);
void func_ov002_02202ef4(void *p);
s32 func_ov002_02202ed0(void *p);
void func_ov002_02202af0(void *p);
void func_ov002_02202b68(void *p);
void func_ov002_02202a78(void *p);
void func_ov002_022029e8(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov002_02202ca0(void *p);
void func_ov002_02202c40(void *p);
void func_ov002_02202d00(void *p, s32 a);
s32 func_ov002_022030b8(void *p, s32 a);
s32 func_ov002_022030f4(void *p, s32 a);
void func_ov002_022030ac(void *p, s32 a);
s32 func_ov002_02202e60(void *p);
s32 func_ov002_02202e84(void *p);
void func_ov002_02202a40(void *p, s32 a, s32 b);
BOOL func_ov002_02202f18(void *p, s32 a, s32 b);
BOOL func_ov002_022028f0(void *p);
BOOL func_ov002_0220308c(void *p);
s32 func_ov002_0220306c(void *p);
BOOL func_ov002_02203110(void *p, s32 a);
void func_ov002_02203900(void *p);
void func_ov002_02203510(void *p, s32 a);
void func_ov002_022036a4(void *p, s32 a);
void func_ov002_02202844(void *p);
}

extern "C" Unk_ov145_SceneEntry data_ov145_02293758 = {func_ov145_022936a8, 0xba, 0xbe};
extern "C" u32 data_ov145_02293820[32] = {0x20678026, 0x80c8, 0x678018, 0x80e8, 0x678008, 0x80e8, 0x6780f8, 0x80e8,
                                          0x6780e8, 0x80e8, 0x6780d8, 0x80e8, 0x6780c8, 0x80e8, 0x6780ba, 0xffff80c8,
                                          0x400d0045, 0x5106, 0x8005003d, 0xffff50c0, 0x41e80045, 0x5104, 0x81e0003d, 0xffff50c0,
                                          0x41c40045, 0x50c6, 0x81bc003d, 0xffff50c0, 0x41a00045, 0x70c4, 0x8198003d, 0xffff70c0};

// ---- ov145 scene (vtable 0x022937c0), size 0x2188 ----
class Unk_ov145_022937c0 : public Unk_ov002_022044e4 {
public:
    Unk_ov145_022937c0() : unk_c8(), unk_12c(), unk_174(), unk_2d8(), unk_758() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_4c();
    virtual BOOL vfunc_50();
    virtual BOOL vfunc_54();
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_5c();

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
    void func_ov145_022931e4();
    void func_ov145_022931ec();
    void func_ov145_02293204();
    void func_ov145_02293244();
    void func_ov145_022932a8();
    void func_ov145_022932e8();
    void func_ov145_02293318();
    void func_ov145_02293350();
    void func_ov145_02293378();
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
    /* 0x0b8 */ s16 unk_b8[4];
    /* 0x0c0 */ u8 unk_c0;
    /* 0x0c1 */ u8 unk_c1;
    /* 0x0c2 */ u8 unk_c2;
    /* 0x0c3 */ u8 unk_c3;
    /* 0x0c4 */ u8 unk_c4;
    /* 0x0c5 */ u8 unk_c5;
    /* 0x0c6 */ u8 unk_c6;
    /* 0x0c7 */ u8 unk_c7;
    /* 0x0c8 */ Unk_ov002_02204614 unk_c8;
    /* 0x12c */ Unk_ov002_022046b0 unk_12c;
    /* 0x174 */ Unk_ov002_022046cc unk_174;
    /* 0x2d8 */ Unk_020e0488 unk_2d8[18];
    /* 0x758 */ Unk_020e45f8 unk_758[3];
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

static inline BOOL Both() {
    if (data_021f4770 != 0 && data_021f4774 != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" Unk_ov145_022937c0 *func_ov145_022936a8() { return new Unk_ov145_022937c0(); }

BOOL Unk_ov145_022937c0::vfunc_00() {
    func_ov145_02293244();
    unk_8c = 0;
    func_ov002_02200a60(0);
    return TRUE;
}

BOOL Unk_ov145_022937c0::vfunc_0c() {
    func_020ed174();
    func_ov092_02291c5c();
    func_ov145_02293204();
    return TRUE;
}

BOOL Unk_ov145_022937c0::vfunc_24() {
    s32 i;
    u8 *p;
    s32 y;
    if (func_0206ef00()) {
        func_ov002_02202844(&unk_c8);
    }
    if (!func_ov145_02292028(1)) {
        return FALSE;
    }
    func_ov002_022036a4(&unk_174, func_ov002_02200920());
    y = unk_94 + 0x60;
    if (unk_a4 > 0) {
        Unk_ov002_022046b0 *q = &unk_12c;
        q->vfunc_08();
        func_02087e70(1, data_ov145_02293820, 0x80, y, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    p = (u8 *)&data_ov145_02293820[16];
    for (i = 0; i < 4; i++) {
        s32 pal;
        if (i == unk_c1) {
            pal = 7;
        } else {
            pal = 5;
        }
        func_02087e70(1, p, 0x80, y, pal, 1, 0x1000, 0x1000, 0, -1, 0, 0);
        p += 0x10;
    }
    return TRUE;
}

BOOL Unk_ov145_022937c0::vfunc_4c() {
    static Unk_ov145_022937c0_Fn tbl[4] = {
        &Unk_ov145_022937c0::func_ov145_02293378,
        &Unk_ov145_022937c0::func_ov145_02293350,
        &Unk_ov145_022937c0::func_ov145_02293318,
        &Unk_ov145_022937c0::func_ov145_022932e8};
    func_ov145_02293198();
    (this->*tbl[unk_8c])();
    func_ov145_02293170();
    return TRUE;
}

void Unk_ov145_022937c0::func_ov145_02293424() {
    static Unk_ov145_022937c0_Fn tbl[10] = {
        &Unk_ov145_022937c0::func_ov145_02292f70,
        &Unk_ov145_022937c0::func_ov145_02292f3c,
        &Unk_ov145_022937c0::func_ov145_02292f08,
        &Unk_ov145_022937c0::func_ov145_02292ea4,
        &Unk_ov145_022937c0::func_ov145_02292e58,
        &Unk_ov145_022937c0::func_ov145_02292e18,
        &Unk_ov145_022937c0::func_ov145_02292df0,
        &Unk_ov145_022937c0::func_ov145_02292dbc,
        &Unk_ov145_022937c0::func_ov145_02292d98,
        &Unk_ov145_022937c0::func_ov145_02292d30};
    (this->*tbl[unk_8d])();
}

BOOL Unk_ov145_022937c0::vfunc_50() {
    func_ov145_022931ec();
    func_ov145_02293424();
    func_ov145_022931e4();
    return TRUE;
}

BOOL Unk_ov145_022937c0::vfunc_54() { return TRUE; }

BOOL Unk_ov145_022937c0::vfunc_58() { return TRUE; }

BOOL Unk_ov145_022937c0::vfunc_5c() {
    func_020ed188(this);
    return TRUE;
}

void Unk_ov145_022937c0::func_ov145_02293378() {
    func_ov145_02293138();
    func_ov145_02293088();
    unk_c0 = 4;
    func_ov145_0229232c(3);
    unk_c1 = 3;
    func_ov145_02293038();
    func_ov002_022008e0(0xa, 4, 0, 0x28);
    func_020020b8(6);
    func_020020b8(4);
    func_ov145_022932a8();
    func_ov145_02292018(1);
    func_ov002_02203510(&unk_174, 0x65);
    func_ov002_02200a50(1);
}

void Unk_ov145_022937c0::func_ov145_02293350() {
    if (func_ov002_02200908(0)) {
        func_ov002_02200a60(2);
        func_ov145_02292cd0();
    }
    func_ov145_022932a8();
}

void Unk_ov145_022937c0::func_ov145_02293318() {
    func_ov092_02291ce4(func_020ed174(), 0x44, 1);
    func_ov002_022008c4(0xa, 0, 0, 0x28);
    func_ov145_022932a8();
    func_ov002_02200a50(3);
}

void Unk_ov145_022937c0::func_ov145_022932e8() {
    if (func_ov002_022008fc(0)) {
        func_020021a0(6);
        func_020021a0(4);
        func_ov002_02200a60(5);
    } else {
        func_ov145_022932a8();
    }
}

void Unk_ov145_022937c0::func_ov145_022932a8() {
    func_ov002_02200840(6, 0, 0);
    func_ov002_02200840(4, 0, 0x18 - unk_9c);
    unk_94 = func_ov002_02200920();
    func_ov145_02292af4();
}

void Unk_ov145_022937c0::func_ov145_02293244() {
    s32 i;
    unk_b4 = 0;
    unk_c0 = 0;
    for (i = 0; i < 9; i++) {
        unk_934[i] = 0xfff1;
    }
    unk_c5 = 3;
    unk_c6 = 0;
    func_ov145_022929f4();
    func_ov145_022929d0();
    func_ov145_022929ac();
    func_ov145_02292988();
    func_ov002_02202f0c(&unk_12c);
}

void Unk_ov145_022937c0::func_ov145_02293204() {
    func_ov145_02292764();
    func_ov002_02203900(&unk_174);
    func_020b87d0(&unk_758[0]);
    func_020b87d0(&unk_758[1]);
    func_020b87d0(&unk_758[2]);
}

void Unk_ov145_022937c0::func_ov145_022931ec() {
    func_ov145_02293198();
    Unk_ov002_02204614 *p = &unk_c8;
    p->vfunc_0c();
}

// ---- 0x022931e4 ----
void Unk_ov145_022937c0::func_ov145_022931e4() {
    func_ov145_02293170();
}

void Unk_ov145_022937c0::func_ov145_02293198() {
    func_ov145_02292764();
    func_ov002_02203900(&unk_174);
    func_020b87d0(&unk_758[0]);
    func_020b87d0(&unk_758[1]);
    func_020b87d0(&unk_758[2]);
    unk_12c.vfunc_0c();
}

void Unk_ov145_022937c0::func_ov145_02293170() {
    func_ov145_0229203c();
    func_ov145_022923f4();
    func_ov145_02292590();
    func_ov002_02202ed0(&unk_12c);
}

void Unk_ov145_022937c0::func_ov145_02293138() {
    func_020015b8(0);
    func_02002398(6, 1);
    func_0200226c(6, 0, 0, 0);
    func_02002398(4, 2);
    func_0200226c(4, 0, 0, 0);
}

void Unk_ov145_022937c0::func_ov145_02293088() {
    void *heap = data_021f482c;
    func_0200261c("menu/donation/bg0.bch", heap, 6, 0x11, 0x11, 0x63);
    func_0200261c("menu/donation/bg1.bch", heap, 6, 0x26e, 0x26e, 0x27d);
    func_020026c4("menu/donation/bg.bpl", heap, 6, 1, 1, 7);
    func_020641b4("menu/donation/bg_3.bpl", unk_2146, 0x20);
    func_020641b4("menu/donation/b_bg.bsc", unk_946, 0x800);
    func_020641b4("menu/donation/a_bg.bsc", unk_1946, 0x800);
    func_020024f0(unk_1946, 6, 0x800, 0);
}

void Unk_ov145_022937c0::func_ov145_02293038() {
    func_ov002_02203920(&unk_174);
    void *heap = data_021f482c;
    func_0200261c("menu/donation/obj.bch", heap, 8, 0xc0, 0xc0, 0x13f);
    func_020026c4("menu/donation/obj.bpl", heap, 8, 4, 4, 9);
}

void Unk_ov145_022937c0::func_ov145_02292f70() {
    if (func_ov002_02200a14(1)) {
        func_ov145_02292cf0();
        return;
    }
    if (Both()) {
        if (func_ov002_02203110(&unk_174, 6)) {
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
                    func_ov002_02202f00(&unk_12c);
                    func_ov002_02200a58(2);
                }
            }
        }
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

void Unk_ov145_022937c0::func_ov145_02292f08() {
    if (data_021f4770 != 0) {
        func_ov145_02292be0(data_021ef5ec, 1);
    } else {
        func_ov145_02292bd0();
        func_ov002_02200a58(0);
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

void Unk_ov145_022937c0::func_ov145_02292e58() {
    if (data_021f47d8[0] & 1) {
        func_ov145_02292b44();
        s32 a = func_ov145_022928f0();
        s32 b = func_ov145_022928ac();
        func_ov002_02202a40(&unk_c8, a, b);
    } else {
        func_ov145_02292bd0();
        func_ov002_02200a58(5);
    }
}

void Unk_ov145_022937c0::func_ov145_02292e18() {
    if (func_ov145_02292b1c()) {
        func_ov002_02200a58(3);
        func_ov145_022927c8();
    }
    s32 a = func_ov145_022928f0();
    s32 b = func_ov145_022928ac();
    func_ov002_02202a40(&unk_c8, a, b);
}

void Unk_ov145_022937c0::func_ov145_02292df0() {
    if (!func_ov002_022028f0(&unk_c8)) {
        func_ov002_02200a58(unk_c3);
        func_ov145_02293424();
    }
}

void Unk_ov145_022937c0::func_ov145_02292dbc() {
    if (func_0208d4fc(&unk_c8)) {
        if (!func_ov145_022922b0(unk_c2)) {
            func_ov002_02200a58(3);
            func_ov145_022927c8();
        }
    }
}

void Unk_ov145_022937c0::func_ov145_02292d98() {
    if (func_0208d4fc(&unk_c8)) {
        func_ov145_02292804();
        func_ov002_02200a58(unk_c3);
    }
}

void Unk_ov145_022937c0::func_ov145_02292d30() {
    if (func_ov002_0220308c(&unk_174)) {
        if (func_0208d534(&unk_c8)) {
            s32 a = func_ov002_0220306c(&unk_174);
            s32 b = func_ov002_022030f4(&unk_174, -1);
            s32 c = func_ov002_022030b8(&unk_174, -1);
            func_ov002_02202a40(&unk_c8, a + b, a + c);
        }
    } else {
        func_ov145_02292890();
        func_ov002_02200a60(1);
    }
}

void Unk_ov145_022937c0::func_ov145_02292d18() {
    func_ov145_02292890();
    func_ov002_02200a58(0);
}

void Unk_ov145_022937c0::func_ov145_02292cf0() {
    unk_c2 = unk_c1;
    func_ov145_0229293c();
    func_ov002_02200980();
    func_ov002_02200a58(3);
}

void Unk_ov145_022937c0::func_ov145_02292cd0() {
    if (func_0206ef0c()) {
        func_ov145_02292d18();
    } else {
        func_ov145_02292cf0();
    }
}

void Unk_ov145_022937c0::func_ov145_02292ca0() {
    func_0206ecf8(1);
    func_ov002_022030ac(&unk_174, 6);
    func_ov002_02200a50(2);
    func_ov002_02200a58(9);
}

BOOL Unk_ov145_022937c0::func_ov145_02292c58(s32 x, s32 y) {
    if (func_ov002_02202f18(&unk_12c, x, y)) {
        unk_ac = unk_a8 - y;
        func_ov002_02202f00(&unk_12c);
        unk_b0 = unk_a8;
        return TRUE;
    }
    return FALSE;
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
        func_ov002_02202e54(&unk_12c);
        unk_b0 = unk_a8;
    }
}

void Unk_ov145_022937c0::func_ov145_02292bd0() {
    func_ov002_02202ef4(&unk_12c);
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
        func_ov002_02202e54(&unk_12c);
    }
}

BOOL Unk_ov145_022937c0::func_ov145_02292b1c() {
    if (func_0208d9a8(&unk_12c)) {
        func_ov002_02202f0c(&unk_12c);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov145_022937c0::func_ov145_02292af4() {
    func_0208dae8(&unk_12c, 0x63, unk_94 + (unk_a8 - 0x4b));
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

void Unk_ov145_022937c0::func_ov145_02292a90() {
    if (unk_a4 > 0) {
        unk_a8 = func_02133150(unk_9c * 0x78, unk_a4);
        func_ov145_02292af4();
    }
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

s32 Unk_ov145_022937c0::func_ov145_02292a2c(u16 *out, s32 start, s32 n) {
    return func_ov145_02292a40(out, start, n, 1);
}

s32 Unk_ov145_022937c0::func_ov145_02292a18(u16 *out, s32 start, s32 n) {
    return func_ov145_02292a40(out, start, n, 4);
}

void Unk_ov145_022937c0::func_ov145_022929f4() {
    unk_b8[3] = func_ov145_02292a18((u16 *)unk_7c4, 0x450c, 0x34);
}

void Unk_ov145_022937c0::func_ov145_022929d0() {
    unk_b8[0] = func_ov145_02292a18((u16 *)unk_90c, 0x3894, 0x14);
}

void Unk_ov145_022937c0::func_ov145_022929ac() {
    unk_b8[1] = func_ov145_02292a2c((u16 *)unk_82c, 0x12e8, 0x38);
}

void Unk_ov145_022937c0::func_ov145_02292988() {
    unk_b8[2] = func_ov145_02292a2c((u16 *)unk_89c, 0x12b0, 0x38);
}

void Unk_ov145_022937c0::func_ov145_0229293c() {
    s32 a = func_ov145_022928f0();
    s32 b = func_ov145_022928ac();
    func_ov002_02202a40(&unk_c8, a, b);
    if (unk_c2 == 4) {
        func_ov002_02202d00(&unk_c8, 7);
    } else {
        func_ov002_02202d00(&unk_c8, 1);
    }
    func_ov145_02292804();
}

s32 Unk_ov145_022937c0::func_ov145_022928f0() {
    u32 c = unk_c2;
    if (c <= 3) {
        return (s32)c * -0x24 + 0x94;
    }
    switch (c) {
    case 4:
        return func_ov002_022030f4(&unk_174, 6);
    case 5:
        return func_ov002_02202e84(&unk_12c);
    default:
        return 0x80;
    }
}

s32 Unk_ov145_022937c0::func_ov145_022928ac() {
    u32 c = unk_c2;
    if (c <= 3) {
        return 0xad;
    }
    switch (c) {
    case 4:
        return func_ov002_022030b8(&unk_174, 6);
    case 5:
        return func_ov002_02202e60(&unk_12c);
    default:
        return 0x60;
    }
}

void Unk_ov145_022937c0::func_ov145_02292890() {
    func_ov002_02202d00(&unk_c8, 0);
    unk_c8.vfunc_0c();
}

void Unk_ov145_022937c0::func_ov145_02292850() {
    if (unk_c2 == 4) {
        func_ov002_02202ca0(&unk_c8);
    } else {
        func_ov002_02202c40(&unk_c8);
    }
    s32 a = func_ov145_022928f0();
    s32 b = func_ov145_022928ac();
    func_ov145_02292820(a, b);
}

void Unk_ov145_022937c0::func_ov145_02292820(s32 a, s32 b) {
    func_ov002_022029e8(&unk_c8, a, b, 3, 1);
    unk_c3 = unk_8d;
    func_ov002_02200a58(6);
}

void Unk_ov145_022937c0::func_ov145_02292804() {
    func_ov002_02202a78(&unk_c8);
    unk_c8.vfunc_0c();
}

void Unk_ov145_022937c0::func_ov145_022927ec() {
    func_ov002_02202b68(&unk_c8);
    func_ov002_02200a58(7);
}

void Unk_ov145_022937c0::func_ov145_022927c8() {
    func_ov002_02202af0(&unk_c8);
    unk_c3 = unk_8d;
    func_ov002_02200a58(8);
}

Unk_020e0488 *Unk_ov145_022937c0::func_ov145_02292790() {
    if (*(volatile u8 *)&unk_c4 >= 18) {
        return &unk_2d8[17];
    }
    *(volatile u8 *)&unk_c4 = *(volatile u8 *)&unk_c4 + 1;
    return &unk_2d8[*(volatile u8 *)&unk_c4 - 1];
}

void Unk_ov145_022937c0::func_ov145_02292764() {
    s32 i = 0;
    unk_c4 = 0;
    for (; i < 18; i++) {
        unk_2d8[i].func_0206fc44();
    }
}

void Unk_ov145_022937c0::func_ov145_02292600() {
    Unk_ov145_02292600_A a;
    Unk_ov145_02292600_B b;
    u16 s[2];
    s32 k;
    Unk_020e0488 *w;
    Unk_020e0488 *w2;
    s32 cur = unk_b6;
    u16 *list = func_ov145_02292384(cur);
    s32 col = (cur + 9) % 9;
    s32 cnt = func_ov145_022923e4();
    for (k = 0; k < 9; k++) {
        w = 0;
        if (cur < 0 || cur >= cnt) {
            unk_934[col] = 0xfff1;
            w = func_ov145_02292790();
            w->func_020a7c3c();
            w2 = func_ov145_02292790();
            w2->func_020a7c3c();
        } else {
            if (*list != unk_934[col]) {
                unk_934[col] = *list;
                w = func_ov145_02292790();
                s[0] = *list;
                b.func_02062564(&s[0]);
                w->func_020a7bd8(&b);
                w2 = func_ov145_02292790();
                s[1] = *list;
                if (func_020700a4(&data_021ed0a0, &a, &s[1])) {
                    _ZN12Unk_020e2a7813func_020a7bd8EPS_(w2, &a);
                } else {
                    func_0206f9fc(w2, 0xcc);
                }
            }
            list++;
        }
        if (w) {
            w->func_0206fb9c(4, col * 26 + 0x184, 0xd, 0xf, 7, 0);
            w->func_0206fab4(0, 0);
            w2->func_0206fb9c(4, col * 16 + 0xf4, 8, 0xf, 7, 0);
            w2->func_0206fab4(0, 0);
        }
        cur++;
        col++;
        if (col >= 9) {
            col = 0;
        }
    }
}

void Unk_ov145_022937c0::func_ov145_02292590() {
    if (func_ov145_02292028(8)) {
        func_ov145_0229246c();
    }
    if (func_ov145_02292028(2)) {
        if (func_020b86c0(&unk_758[1], unk_1946, 6, 0x800, 0)) {
            func_ov145_02292008(2);
        }
    }
    if (func_ov145_02292028(4)) {
        func_ov145_02292008(4);
        func_ov145_02292600();
    }
}

void Unk_ov145_022937c0::func_ov145_02292554(s32 v) {
    unk_9c = v;
    func_020021fc(4, 0, unk_9c - 0x18);
    unk_b6 = (s16)(v >> 4);
    func_ov145_022924dc();
    func_ov145_02292018(4);
}

void Unk_ov145_022937c0::func_ov145_022924dc() {
    s32 cur = unk_b6;
    s32 r6 = (cur + 9) % 9;
    s32 r4 = cur & 0xf;
    volatile u16 fill = 0x10;
    s32 i;
    func_02115e30(fill, unk_1146, 0x800);
    for (i = 0; i < 9; i++) {
        func_02115e48(unk_946 + r6 * 0x80, unk_1146 + r4 * 0x80, 0x80);
        r6++;
        if (r6 >= 9) {
            r6 = 0;
        }
        r4 = (r4 + 1) & 0xf;
    }
    func_ov145_02292018(8);
}

void Unk_ov145_022937c0::func_ov145_0229246c() {
    func_0206ee80(unk_1146, 0, 0, 0x1f, 0x1f, 3);
    s32 n = func_ov145_022923e4();
    if (n < 9) {
        func_0206ee80(unk_1146, 0, n * 2, 0x1f, 0x12, 4);
    }
    if (func_020b86c0(unk_758, unk_1146, 4, 0x800, 0)) {
        func_ov145_02292008(8);
    }
}

void Unk_ov145_022937c0::func_ov145_022923f4() {
    if (unk_9c != unk_a0) {
        if (unk_9c > unk_a0) {
            unk_9c = unk_9c - 4;
            if (unk_9c < unk_a0) {
                unk_9c = unk_a0;
            }
        } else {
            unk_9c = unk_9c + 4;
            if (unk_9c > unk_a0) {
                unk_9c = unk_a0;
            }
        }
        func_ov145_02292554(unk_9c);
        func_ov145_02292a90();
    }
}

s32 Unk_ov145_022937c0::func_ov145_022923e4() {
    return unk_b8[unk_c0];
}

u16 *Unk_ov145_022937c0::func_ov145_02292384(s32 i) {
    static u16 *tbl[4] = { (u16 *)unk_90c, (u16 *)unk_82c, (u16 *)unk_89c, (u16 *)unk_7c4 };
    if (i < 0) {
        i = 0;
    }
    return tbl[unk_c0] + i;
}

void Unk_ov145_022937c0::func_ov145_0229232c(u8 v) {
    if (unk_c0 != v) {
        unk_c0 = v;
        unk_a4 = (func_ov145_022923e4() - 8) << 4;
        if (unk_a4 < 0) {
            unk_a4 = 0;
        }
        func_ov145_02292554(0);
        unk_a0 = 0;
        func_ov145_02292a90();
        func_ov145_02292af4();
    }
}

void Unk_ov145_022937c0::func_ov145_02292314(u8 v) {
    if (v != unk_c1) {
        unk_c1 = v;
        unk_c6 = 1;
    }
}

BOOL Unk_ov145_022937c0::func_ov145_022922b0(u32 t) {
    if (t <= 3) {
        if (t != unk_c1) {
            func_0200402c(0xc);
            func_ov145_02292314((u8)t);
        }
        return FALSE;
    } else {
        switch (t) {
        case 4:
            func_ov145_02292ca0();
            return TRUE;
        case 5:
            func_ov002_02202f00(&unk_12c);
            func_ov002_02202e48(&unk_12c);
            func_ov002_02200a58(4);
            return TRUE;
        }
    }
    return FALSE;
}

u32 Unk_ov145_022937c0::func_ov145_02292284(s32 x, s32 y) {
    if (y >= 0x9d && y < 0xbd) {
        s32 i;
        y = 0x84;
        for (i = 0; i < 4; i++) {
            if (y <= x && y + 0x20 > x) {
                return (u8)i;
            }
            y -= 0x24;
        }
    }
    return 6;
}

BOOL Unk_ov145_022937c0::func_ov145_02292190(u32 pad) {
    u32 old = unk_c2;
    if (old <= 3) {
        if (func_ov002_0220126c(pad)) {
            if (unk_c2 < 3) {
                unk_c2 = *(volatile u8 *)&unk_c2 + 1;
            }
        } else if (func_ov002_0220125c(pad)) {
            if (unk_c2 != 0) {
                unk_c2 = *(volatile u8 *)&unk_c2 - 1;
            } else {
                unk_c2 = 4;
            }
        } else if (func_ov002_0220128c(pad)) {
            if (unk_a4 > 0) {
                unk_c2 = 5;
            }
        }
    } else {
        switch (old) {
        case 4:
            if (func_ov002_0220128c(pad)) {
                if (unk_a4 > 0) {
                    unk_c2 = 5;
                }
            } else if (func_ov002_0220126c(pad)) {
                unk_c2 = 0;
            }
            break;
        case 5:
            if (func_ov002_0220127c(pad)) {
                unk_c2 = 4;
            } else if (func_ov002_0220126c(pad)) {
                unk_c2 = 0;
            }
            break;
        }
    }
    if (old != unk_c2) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov145_022937c0::func_ov145_022920b0(u32 t) {
    func_02115e48(unk_2146, unk_2166, 0x20);
    s32 y = unk_2146[7];
    u8 r = y & 0x1f;
    u8 g = (y & 0x3e0) >> 5;
    u8 b = (y & 0x7c00) >> 10;
    s32 n = 3 - t;
    s32 x = unk_2146[15];
    r = ((u8)(x & 0x1f) * (s32)t + r * n) / 3;
    g = ((u8)((x & 0x3e0) >> 5) * (s32)t + g * n) / 3;
    b = ((u8)((x & 0x7c00) >> 10) * (s32)t + b * n) / 3;
    unk_2166[15] = r | (g << 5) | (b << 10);
    func_020b8670(&unk_758[2], unk_2166, 4, 3);
}

void Unk_ov145_022937c0::func_ov145_0229203c() {
    switch (unk_c6) {
    case 0:
        return;
    case 1:
        if (unk_c5 != 0) {
            unk_c5 = *(volatile u8 *)&unk_c5 - 1;
        } else {
            unk_c6 = 2;
            func_ov145_0229232c(unk_c1);
        }
        break;
    case 2:
        if (unk_c5 < 3) {
            unk_c5 = *(volatile u8 *)&unk_c5 + 1;
        } else {
            unk_c6 = 0;
            return;
        }
        break;
    }
    func_ov145_022920b0(unk_c5);
}

BOOL Unk_ov145_022937c0::func_ov145_02292028(u32 m) {
    if (unk_b4 & m) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov145_022937c0::func_ov145_02292018(u32 m) { unk_b4 = unk_b4 | m; }

void Unk_ov145_022937c0::func_ov145_02292008(u32 m) { unk_b4 = unk_b4 & ~m; }

