// mwcc-flags: -str reuse
#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0203b350_V {
    s32 x, y, z;
};
typedef Unk_0203b350_V V3;
typedef Unk_0203b350_V Unk_0203a148_Vec;
typedef Unk_0203b350_V Unk_0203a9b8_Vec;
typedef Unk_0203b350_V Unk_0203c0b0_Vec;

struct Unk_02000c8c : Unk_0203b350_V {
    Unk_02000c8c() {}
    ~Unk_02000c8c();
};

struct Unk_0203a148_Mtx {
    s32 m[12];
};

struct Unk_0203a148_Mtx_Tmp : Unk_0203a148_Mtx {
    Unk_0203a148_Mtx_Tmp() {}
};

struct Unk_0203a8d4_Rot {
    s32 len;
    s16 ang;
    s16 vel;
};

struct Unk_0203c230 {
    s16 a, b;
    s32 c0, c1, c2, c3, c4, c5, c6;
    ~Unk_0203c230();
};
typedef Unk_0203c230 Unk_0203a278_Cam;

// Camera/scene helper object; the global pointer is data_021c3070.
struct Unk_021c3070 {
    /* 0x00 */ u8 unk_00[0x50];
    /* 0x50 */ Unk_0203a148_Mtx unk_50;
    /* 0x80 */ u8 unk_80[0x38];
    /* 0xb8 */ s32 unk_b8;
    /* 0xbc */ s32 unk_bc;
    /* 0xc0 */ u8 unk_c0[8];
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ Unk_0203a148_Vec unk_cc;
    /* 0xd8 */ u8 unk_d8[0x24];
    /* 0xfc */ Unk_0203a278_Cam unk_fc;
    /* 0x11c */ u8 unk_11c[0x14];
    /* 0x130 */ u8 unk_130[0x18];
    /* 0x148 */ Unk_0203a278_Cam unk_148;
    /* 0x168 */ Unk_0203a148_Vec unk_168;
    /* 0x174 */ u8 unk_174[0x14];
    /* 0x188 */ Unk_0203a148_Vec unk_188;
    /* 0x194 */ Unk_0203a148_Vec unk_194;
    /* 0x1a0 */ u8 unk_1a0[0x2a];
    /* 0x1ca */ u8 unk_1ca;
    /* 0x1cb */ u8 unk_1cb;
    /* 0x1cc */ Unk_0203a148_Vec unk_1cc;
    /* 0x1d8 */ Unk_0203a148_Vec unk_1d8;
    /* 0x1e4 */ u8 unk_1e4[4];
    /* 0x1e8 */ s32 unk_1e8;
    /* 0x1ec */ s32 unk_1ec;
    /* 0x1f0 */ s32 unk_1f0;
    /* 0x1f4 */ u8 unk_1f4;
    /* 0x1f5 */ u8 unk_1f5;
    /* 0x1f6 */ u8 unk_1f6;
    /* 0x1f7 */ u8 unk_1f7;
    /* 0x1f8 */ s32 unk_1f8;
    /* 0x1fc */ s32 unk_1fc;
    /* 0x200 */ u8 unk_200[0x1c];
    /* 0x21c */ Unk_0203a8d4_Rot unk_21c;
};

struct Unk_0203a9b8_Cfg {
    u8 pad[4];
    u8 unk_04;
};

struct Unk_0203a9b8_Row {
    s32 v[3];
};

struct Unk_0203a9b8_Sub {
    s32 unk_00;
    s16 unk_04, unk_06;
};

struct Unk_021c47c4 {
    u32 unk_00;
    u32 *unk_04;
    u32 *unk_08;
};

struct Unk_0203a9b8_Rgba {
    u8 v[4];
    Unk_0203a9b8_Rgba(u8 a, u8 b, u8 c, u8 d) {
        v[0] = a;
        v[1] = b;
        v[2] = c;
        v[3] = d;
    }
};

struct Unk_0203c1f0_Entry {
    void *unk_00;
    u16 unk_04;
    u16 unk_06;
};

struct Unk_0203bc68_Ent {
    s16 h0, h1;
    s32 w0;
    s32 x, y, z;
};

struct Unk_0203bc68_Pos {
    s16 h0, h1;
    s32 w0;
    s32 x, y, z;
};

struct Unk_0203c23c_Static {
    u16 v;
    Unk_0203c23c_Static(u16 x) { v = x; }
    ~Unk_0203c23c_Static();
};

struct Unk_0203bd10_Dtcm {
    u32 pad[16];
    u32 a, b, c, d, e, f, g, h, i;
};

class Unk_0203be94_Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual BOOL vfunc_a8();
};

class Unk_020e4590 : public Unk_020d8c7c {
public:
    virtual ~Unk_020e4590() {}
    virtual BOOL vfunc_24();
};

class Unk_01ffb7cc {
public:
    Unk_01ffb7cc();
    u8 pad_00[0x30];
};

#define M(T, o) (*(T *)((u8 *)this + (o)))

class Unk_020d93b8;
typedef BOOL (Unk_020d93b8::*Unk_021c30ec_Init)();
typedef void (Unk_020d93b8::*Unk_021c30ec_Update)();
struct Unk_021c30ec {
    Unk_021c30ec_Init init;
    Unk_021c30ec_Update update;
};

class Unk_020d93b8 : public Unk_020e4590, public Unk_01ffb7cc {
public:
    Unk_020d93b8() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    // 0x0203a9b8 .. 0x0203b28c
    BOOL func_0203a9b8();
    void func_0203a9dc();
    BOOL func_0203aa20();
    void func_0203aa34();
    BOOL func_0203ab0c();
    void func_0203ab2c();
    BOOL func_0203abb4();
    void func_0203abfc();
    BOOL func_0203ac84();
    void func_0203acbc();
    BOOL func_0203ad18();
    void func_0203ad84();
    BOOL func_0203aed0();
    void func_0203af68();
    void func_0203b094();
    void func_0203b160();
    BOOL func_0203b28c();

    // 0x0203b350 .. 0x0203bc48
    void func_0203b350(V3 *p);
    void func_0203b3c4(V3 *a, V3 *b);
    void func_0203b484(V3 *a, s32 r, s32 s, s32 z);
    void func_0203b56c();
    void func_0203b730();
    void func_0203b768();
    BOOL func_0203b7ac(s32 idx);
    s32 func_0203b8e0(s32 *p);
    void func_0203b910(u8 *o, V3 *v);
    BOOL func_0203b93c(s32 *p);
    void func_0203b9d4();
    void func_0203baec();
    void func_0203bb0c(s32 a);
    s32 func_0203bbbc();
    s32 func_0203bbd0();
    s32 func_0203bbe4();
    s32 func_0203bc28();
    s32 func_0203bc3c();
    s32 func_0203bc48();

    // 0x0203bc58 ..
    s32 func_0203bc58();
    s16 func_0203bc68();
    s16 func_0203bc7c();
    s16 func_0203bc90();
    V3 *func_0203bc9c();
    void func_0203bca8();
    void func_0203c07c(u32 *src);
    void func_0203c09c(s32 i);
    void func_0203c0b0(s32 a, s32 b, s32 n);
    void func_0203c1a4(s32 i, Unk_0203bc68_Pos *out);

    /* 0x80 */ s32 unk_80, unk_84, unk_88, unk_8c, unk_90, unk_94;
    s16 unk_98, unk_9a, unk_9c, unk_9e;
    s32 unk_a0, unk_a4, unk_a8, unk_ac, unk_b0, unk_b4;
    s32 unk_b8, unk_bc, unk_c0, unk_c4;
    u8 pad_c8[0xfc - 0xc8];
    Unk_0203bc68_Pos unk_fc;
    V3 unk_110;
    s16 unk_11c, unk_11e;
    s32 unk_120, unk_124, unk_128, unk_12c, unk_130, unk_134, unk_138;
    s32 unk_13c, unk_140, unk_144;
    s16 unk_148, unk_14a;
    u8 pad_14c[0x168 - 0x14c];
    s32 unk_168, unk_16c, unk_170;
    u8 pad_174[0x188 - 0x174];
    s32 unk_188, unk_18c, unk_190, unk_194, unk_198, unk_19c, unk_1a0, unk_1a4, unk_1a8;
    s16 unk_1ac;
    s16 pad_1ae;
    s32 unk_1b0, unk_1b4, unk_1b8;
    u8 pad_1bc[0x1c8 - 0x1bc];
    s16 unk_1c8;
    u8 pad_1ca[0x1e4 - 0x1ca];
    s32 unk_1e4, unk_1e8, unk_1ec, unk_1f0;
    u8 unk_1f4, unk_1f5, unk_1f6, pad_1f7;
    s32 unk_1f8, unk_1fc, unk_200;
    s32 unk_204, unk_208, unk_20c, unk_210, unk_214, unk_218;
    s32 unk_21c;
    u8 pad_220[0x14];
};

static inline BOOL Unk_0203c23c_InRange(u16 c, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (c >= lo && c <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_0203c23c_InRangeP(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline s32 Unk_0203c23c_Idx(u16 c, u32 lo, u32 hi) {
    if (Unk_0203c23c_InRange(c, lo, hi)) return c - lo;
    return -1;
}

static inline s32 Unk_0203c23c_None() {
    return Unk_0203c23c_Idx(0, 1, 0);
}

#define R096_TAIL(V) \
    func_0203b56c(); \
    func_01ffcbb0(&V, this); \
    s32 a = func_0203bc7c(); \
    s32 b = func_0203bc68(); \
    func_0203b484(&V, a, b, func_0203bc48());

// ---- externals ----
extern "C" {
extern Unk_021c3070 *data_021c3070;
extern Unk_0203a148_Mtx data_021f47e0;
extern s32 data_020d9254;
extern s32 data_020d9250;
extern s16 data_02135f44[];
extern Unk_0203a9b8_Vec data_021f4880;
extern Unk_0203a9b8_Cfg *data_021ef2f0;
extern const Unk_0203a9b8_Row data_020c8ce8[3];
extern s32 data_020c8cb8;
extern Unk_021c47c4 *data_021c47c4;
extern u8 data_021ef414[];
extern u32 data_021c3ba4[];
extern u32 data_021c3240;
extern u16 data_021c323c;
extern u8 data_020d9400[];
extern u32 data_027e0148[];
extern Unk_0203bd10_Dtcm data_027e02c8;
extern u32 data_027e00d0[];
extern u32 data_027e0114[];
}
extern Unk_021c30ec data_021c30ec[];
extern const u32 data_020c8d3c[6][4];
extern const Unk_0203bc68_Ent data_020c8d9c[33];
extern Unk_02000c8c data_021c309c;
extern Unk_02000c8c data_021c3084;
extern Unk_02000c8c data_021c30c0;
extern Unk_0203c230 data_021c30cc;
extern s32 data_021c3068;

extern "C" {
s32 func_0203eeac(void *p, void *q);
void MTX_MultVec43(void *in, void *m, void *out);
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_020e9888(void *v, s32 s);
void func_0200402c(s32 a);
void func_01ffcbb0(void *out, void *o);
void func_ov068_02266624(void *o, s32 a);
V3 *func_020947f0(s32 a);
s32 func_020b50e8();
void func_020e9960(void *out, void *a, void *b);
void func_01ffd070(void *out, void *a, void *b);
void func_020e9790(void *out, void *in, s32 s);
s32 VEC_Mag(void *v);
void MTX_MultVec33(void *a, void *b, void *c);
void VEC_Add(void *a, void *b, void *c);
void func_020e769c(s16 *p, s32 a, s32 b);
void func_020e7870(s32 *p, s32 a, s32 b, s32 c, s32 d);
void *func_ov003_022120ac(s32 id);
s32 func_020e9688(void *v);
s32 func_02002bdc(void *a, void *b);
void func_020e944c(void *v, s32 a);
void func_020e93a0(void *v, s32 a);
s32 func_0206ede0();
s32 func_020b52f8();
s32 func_020b51a4();
s32 func_020b51fc();
s32 func_ov068_0226647c(void *self);
void func_ov004_0223fe00(void *self, s32 a);
void func_ov003_0222ef10(void *self);
BOOL func_020e94f8(void *v);
void func_020e92f4(void *v, s32 a);
s32 func_0203edd0(void *p);
s32 func_02063a9c(s32, s32, s32, s32, s32);
s32 FX_Inv(s32);
s32 func_0202fe84(s32 *, s32 *, s32 *, s32 *);
s32 _ZN12Unk_020375d013func_020375d0Ev(u32);
void _ZN12Unk_020d924813func_0203a058Eitii(void *, s32, s32, s32, s32);
void MTX_Inverse43(void *a, void *b);
void func_020e98f4(void *out, void *a, s32 n);
void G3i_PerspectiveW_(s32 a, s32 b, s32 c, s32 d, u32 e, u32 f, u32 g, u32 h);
void G3i_LookAt_(void *a, void *b, void *c, s32 d, void *e);
void func_0203ecec(void *a, void *b);
s32 func_02081640(s32 a);
Unk_0203be94_Obj *func_0208175c(s32 i);
void *func_0209750c();
s32 _ZN12Unk_02097ff413func_02098044Ej(void *s, s32 a);
void *func_020b50dc();
s32 func_020b530c(void *a);
s32 NNS_G3dGetTex();
void func_02135558(void *a, void *b, void *c);
BOOL func_02063fcc(u32 a, s32 b, void *s, s32 idx);
void *func_020986c8(void *s);
BOOL func_0203c41c(void *a, u16 *p, s32 c);
BOOL func_0203c42c(u8 *base, u16 *p, s32 skip, s32 set);
BOOL func_0203c4cc(u8 *base, u16 *p);
u8 *func_0203c4f8(u8 *base, u8 *out, u16 *p);
s32 func_0203c354(u16 base, u32 n);
s32 func_0203c2f4();
s32 func_0203c304();
s32 func_0203c314();
s32 func_0203c318();
void func_02061168(u16 *out, u16 *in, s32 n);
BOOL func_0204b300(u16 *p);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
s32 func_0204b354(u16 *p);
s32 func_0204b248(s32 a, s32 b);
BOOL func_0204b8ac(u16 *p);
}

extern "C" void func_ov004_0223f8bc();
extern "C" void _ZN12Unk_020d93b813func_0203a9b8Ev();
extern "C" void func_ov004_0223fa94();
extern "C" void func_ov004_0223fc8c();
extern "C" void func_ov004_0223fc00();
extern "C" void _ZN12Unk_020d93b813func_0203b28cEv();
extern "C" void _ZN18Unk_ov068_0226668019func_ov068_022667acEv();
extern "C" void func_ov004_0223f6bc();
extern "C" void _ZN18Unk_ov068_0226668019func_ov068_0226673cEv();
extern "C" void func_ov004_0223fb9c();
extern "C" void _ZN12Unk_020d93b813func_0203abb4Ev();
extern "C" void func_ov004_0223f7b0();
extern "C" void func_ov004_0223fa54();
extern "C" void func_ov004_0223fdbc();
extern "C" void _ZN18Unk_ov068_0226668019func_ov068_02266680Ev();
extern "C" void _ZN18Unk_ov068_0226668019func_ov068_022666f4Ev();
extern "C" void _ZN18Unk_ov068_0226668019func_ov068_022667c4Ev();
extern "C" void func_ov004_0223f9f0();
extern "C" void _ZN12Unk_020d93b813func_0203aa34Ev();
extern "C" void _ZN12Unk_020d93b813func_0203aa20Ev();
extern "C" void func_ov004_0223f9d0();
extern "C" void _ZN12Unk_020d93b813func_0203ab0cEv();
extern "C" void _ZN12Unk_020d93b813func_0203ab2cEv();
extern "C" void _ZN12Unk_020d93b813func_0203a9dcEv();
extern "C" void _ZN12Unk_020d93b813func_0203abfcEv();
extern "C" void _ZN12Unk_020d93b813func_0203ac84Ev();
extern "C" void _ZN12Unk_020d93b813func_0203acbcEv();
extern "C" void _ZN12Unk_020d93b813func_0203ad18Ev();
extern "C" void _ZN12Unk_020d93b813func_0203ad84Ev();
extern "C" void _ZN12Unk_020d93b813func_0203aed0Ev();
extern "C" void _ZN12Unk_020d93b813func_0203b160Ev();
extern "C" void func_ov065_02266b24();
extern "C" void func_ov004_0223f96c();
extern "C" void _ZN18Unk_ov068_0226668019func_ov068_02266ab8Ev();
extern "C" void func_ov004_0223fc28();
extern "C" void _ZN18Unk_ov068_0226668019func_ov068_022669c8Ev();
extern "C" void func_ov004_0223fb34();
extern "C" void func_ov004_0223fd30();
extern "C" void func_ov004_0223f92c();
extern void *data_020d9258[2];
extern void *data_020d9260[2];
extern void *data_020d9268[2];
extern void *data_020d9270[2];
extern void *data_020d9278[2];
extern void *data_020d9280[2];
extern void *data_020d9290[2];
extern void *data_020d9298[2];
extern void *data_020d92a0[2];
extern void *data_020d92a8[2];
extern void *data_020d92b0[2];
extern void *data_020d92b8[2];
extern void *data_020d92c0[2];
extern void *data_020d92c8[2];
extern void *data_020d92d0[2];
extern void *data_020d92d8[2];
extern void *data_020d92e0[2];
extern void *data_020d92e8[2];
extern void *data_020d92f0[2];
extern void *data_020d92f8[2];
extern void *data_020d9300[2];
extern void *data_020d9308[2];
extern void *data_020d9310[2];
extern void *data_020d9318[2];
extern void *data_020d9320[2];
extern void *data_020d9328[2];
extern void *data_020d9330[2];
extern void *data_020d9338[2];
extern void *data_020d9340[2];
extern void *data_020d9348[2];
extern void *data_020d9350[2];
extern void *data_020d9358[2];
extern void *data_020d9360[2];
extern void *data_020d9368[2];
extern void *data_020d9370[2];
extern void *data_020d9378[2];
extern void *data_020d9380[2];
extern void *data_020d9388[2];
extern void *data_020d9390[2];
extern void *data_020d9398[2];
extern void *data_020d93a0[2];
extern void *data_020d93a8[2];

// ---- own plain functions (file unk_0203a058) ----
extern "C" {
BOOL func_0203a844(void);
Unk_0203a148_Mtx *func_0203a220(void);
void func_0203a458(void);
void func_0203a468(void);
s32 func_0203a7b8(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b, Unk_0203a148_Vec *c, s32 *d);
s32 func_0203a6fc(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b, Unk_0203a148_Vec *c, Unk_0203a148_Vec *d, s32 *e);
BOOL func_0203a148(s32 *x, s32 *y, Unk_0203a148_Vec *p);
BOOL func_0203a488(void);
void func_0203a378(void);
void func_0203a234(Unk_021c3070 *o, s32 a);
void func_0203bac4(s32 a, s32 *x, s32 *z);
}

// ---- members called from the plain functions (explicit object argument; names filled by the build script) ----
extern "C" {
s32 _ZN12Unk_020d93b813func_0203bc3cEv(Unk_021c3070 *o);
s32 _ZN12Unk_020d93b813func_0203bc48Ev(Unk_021c3070 *o);
s32 _ZN12Unk_020d93b813func_0203bc68Ev(Unk_021c3070 *o);
s32 _ZN12Unk_020d93b813func_0203bc7cEv(Unk_021c3070 *o);
s32 _ZN12Unk_020d93b813func_0203bbe4Ev(Unk_021c3070 *o);
void _ZN12Unk_020d93b813func_0203b910EPhP14Unk_0203b350_V(Unk_021c3070 *o, Unk_0203a278_Cam *c, s32 a);
void _ZN12Unk_020d93b813func_0203b484EP14Unk_0203b350_Viii(Unk_021c3070 *o, void *a, s32 b, s32 c, s32 d);
void _ZN12Unk_020d93b813func_0203af68Ev(Unk_021c3070 *o);
void _ZN12Unk_020d93b813func_0203b094Ev(Unk_021c3070 *o);
s32 _ZN12Unk_020d93b813func_0203b7acEi(Unk_021c3070 *o, s32 a);
void _ZN12Unk_020d93b813func_0203b56cEv(Unk_021c3070 *o);
void _ZN12Unk_020d93b813func_0203b350EP14Unk_0203b350_V(Unk_021c3070 *o, void *a);
void _ZN12Unk_020d93b813func_0203c1a4EiP16Unk_0203bc68_Pos(Unk_021c3070 *o, s32 a, s32 b);
void _ZN12Unk_020d93b813func_0203c09cEi(Unk_021c3070 *o, s32 a);
}

extern "C" s32 func_0203c234() {
    return NNS_G3dGetTex();
}

Unk_0203c230::~Unk_0203c230() {}

extern "C" Unk_020d93b8 *func_0203c1f0() {
    return new Unk_020d93b8();
}

void Unk_020d93b8::func_0203c1a4(s32 i, Unk_0203bc68_Pos *out) {
    if (!out) out = &unk_fc;
    out->x = data_020c8d9c[i].x;
    out->y = data_020c8d9c[i].y;
    out->z = data_020c8d9c[i].z;
    out->w0 = data_020c8d9c[i].w0;
    out->h1 = data_020c8d9c[i].h1;
    out->h0 = data_020c8d9c[i].h0;
}

void Unk_020d93b8::func_0203c0b0(s32 a, s32 b, s32 n) {
    Unk_0203c0b0_Vec d, q;
    d.x = data_020c8d9c[b].x - data_020c8d9c[a].x;
    d.y = data_020c8d9c[b].y - data_020c8d9c[a].y;
    d.z = data_020c8d9c[b].z - data_020c8d9c[a].z;
    unk_fc.x = data_020c8d9c[a].x;
    unk_fc.y = data_020c8d9c[a].y;
    unk_fc.z = data_020c8d9c[a].z;
    s32 w = data_020c8d9c[a].w0;
    unk_fc.w0 = w;
    s16 h1 = data_020c8d9c[a].h1;
    unk_fc.h1 = h1;
    s16 h0 = data_020c8d9c[a].h0;
    unk_fc.h0 = h0;
    func_020e98f4(&q, &d, n);
    VEC_Add(&unk_fc.x, &q, &unk_fc.x);
    unk_fc.w0 += func_01ffcb0c(data_020c8d9c[b].w0 - w, n);
    unk_fc.h1 = unk_fc.h1 + (s16)func_01ffcb0c((s16)(data_020c8d9c[b].h1 - h1), n);
    unk_fc.h0 = unk_fc.h0 + (s16)func_01ffcb0c((s16)(data_020c8d9c[b].h0 - h0), n);
}

void Unk_020d93b8::func_0203c09c(s32 i) {
    func_0203c07c((u32 *)data_020c8d3c[i]);
}

void Unk_020d93b8::func_0203c07c(u32 *src) {
    unk_b8 = src[0];
    unk_bc = src[1];
    unk_c0 = src[2];
    unk_c4 = src[3];
}

BOOL Unk_020d93b8::vfunc_00() {
    data_021c3070 = (Unk_021c3070 *)this;
    func_0203bca8();
    unk_1ec = 1;
    unk_1f0 = 1;
    unk_1c8 = 0x1555;
    unk_1e4 = 0;
    unk_1e8 = 0;
    unk_1f8 = unk_1fc = 0;
    if (func_0203b7ac(0)) {
        Unk_0203bc68_Pos *p = (Unk_0203bc68_Pos *)func_020947f0(4);
        if (p) {
            unk_110.x = ((s32 *)p)[0];
            unk_110.y = ((s32 *)p)[1];
            unk_110.z = ((s32 *)p)[2];
        }
    }
    func_0203b9d4();
    s32 r = func_020b50e8();
    if (r == 9) {
        data_020d9254 = 0x1000;
    } else {
        data_020d9254 = 0x1800;
    }
    switch (r) {
    case 0x2c: {
        Unk_0203be94_Obj *p = 0;
        s32 *g = &data_020d9250;
        s32 i = *g;
        if (i == 8) {
            p = (Unk_0203be94_Obj *)func_02081640((s32)g);
        } else {
            i = i + 1;
            if (i == 8) {
                i = (s32)p;
            } else {
                while (i != data_020d9250) {
                    p = func_0208175c(i);
                    if (p) {
                        if (p->vfunc_a8()) break;
                    }
                    i++;
                    if (i == 8) {
                        i = 0;
                        break;
                    }
                }
            }
            data_020d9250 = i;
        }
        if (p) {
            unk_21c = (s32)p;
            func_0203b7ac(7);
        } else {
            data_020d9250 = 8;
            func_0203b7ac(8);
        }
        break;
    }
    case 0x2d:
        func_0203b7ac(9);
        break;
    case 6:
        func_0203b7ac(0xa);
        break;
    case 13:
    case 14:
    case 0x2f:
        func_0203b7ac(0xe);
        break;
    case 12:
        func_0203b7ac(6);
        break;
    case 0: {
        void *s = func_0209750c();
        if (s) {
            if (_ZN12Unk_02097ff413func_02098044Ej(s, 0x23)) {
                if (func_020b530c(func_020b50dc()) != 0 || (s32)func_020b50dc() == 6) func_0203b7ac(0xd);
            }
        }
        break;
    }
    }
    vfunc_24();
    unk_1fc = unk_1f8;
    unk_200 = unk_1fc;
    func_0203a468();
    return TRUE;
}

BOOL Unk_020d93b8::vfunc_18() {
    s32 v[4];
    func_0203b768();
    func_01ffcbb0(v, this);
    func_0203ecec(data_021c3ba4, v);
    return TRUE;
}

BOOL Unk_020d93b8::vfunc_24() {
    s32 i = unk_1c8 >> 5;
    s32 k = i * 2;
    G3i_PerspectiveW_(data_02135f44[k], data_02135f44[k + 1], unk_1b0, unk_1b4, unk_1b8, 0x1000, 1, 0);
    G3i_LookAt_(&unk_194, &unk_1a0, &unk_188, 1, (u8 *)this + 0x50);
    MTX_Inverse43((u8 *)this + 0x50, (u8 *)this + 0xcc);
    s32 j = (s16)(unk_1c8 + unk_98) >> 5;
    s32 m = j * 2;
    G3i_PerspectiveW_(data_02135f44[m], data_02135f44[m + 1], unk_1b0, unk_1b4 + unk_90, unk_1b8 + unk_94, 0x1000, 0,
                  (u32)data_027e00d0);
    data_027e0148[0x7c / 4] &= ~0x50;
    data_027e02c8.a = unk_194;
    data_027e02c8.b = unk_198;
    data_027e02c8.c = unk_19c;
    data_027e02c8.d = unk_1a0;
    data_027e02c8.e = unk_1a4;
    data_027e02c8.f = unk_1a8;
    data_027e02c8.g = unk_188;
    data_027e02c8.h = unk_18c;
    data_027e02c8.i = unk_190;
    G3i_LookAt_(&unk_194, &unk_1a0, &unk_188, 0, data_027e0114);
    data_027e0148[0x7c / 4] &= ~0xe8;
    return Unk_020e4590::vfunc_24();
}

BOOL Unk_020d93b8::vfunc_0c() {
    data_021c3070 = 0;
    return TRUE;
}

void Unk_020d93b8::func_0203bca8() {
    unk_80 = 0;
    unk_9a = 0;
    unk_9c = 0;
    unk_84 = 0;
    unk_88 = 0;
    unk_8c = 0;
    unk_98 = 0;
    unk_90 = 0;
    unk_94 = 0;
    unk_a0 = 0;
    unk_a8 = 0;
    unk_ac = 0;
    unk_b0 = 0;
    unk_b4 = 0;
}

V3 *Unk_020d93b8::func_0203bc9c() {
    return (V3 *)((u8 *)this + 0x168);
}

s16 Unk_020d93b8::func_0203bc90() {
    return unk_1ac;
}

s16 Unk_020d93b8::func_0203bc7c() {
    return unk_14a + unk_9a;
}

s16 Unk_020d93b8::func_0203bc68() {
    return unk_148 + unk_9c;
}

s32 Unk_020d93b8::func_0203bc58() {
    return (s32)((u8 *)unk_a0 + 0xf0a);
}

s32 Unk_020d93b8::func_0203bc48()
{
    return M(s32, 0x14c) + M(s32, 0x80);
}

s32 Unk_020d93b8::func_0203bc3c()
{
    return M(s32, 0x1c4);
}

s32 Unk_020d93b8::func_0203bc28()
{
    s32 r = M(s32, 0xb8) + M(s32, 0xa8);
    if (r < 0) r = 0;
    return r;
}

s32 Unk_020d93b8::func_0203bbe4()
{
    s32 a = func_0203bbbc();
    s32 b = func_0203bc28();
    s32 tot = a + (b + func_0203bbd0());
    if (M(s32, 0xbc) < tot) M(s32, 0xbc) = tot;
    s32 t = M(s32, 0xbc) + M(s32, 0xac);
    if (t >= tot) tot = t;
    return tot;
}

s32 Unk_020d93b8::func_0203bbd0()
{
    s32 r = M(s32, 0xc0) + M(s32, 0xb0);
    if (r < 0) r = 0;
    return r;
}

s32 Unk_020d93b8::func_0203bbbc()
{
    s32 r = M(s32, 0xc4) + M(s32, 0xb4);
    if (r < 0) r = 0;
    return r;
}

void Unk_020d93b8::func_0203bb0c(s32 a)
{
    M(s16, 0x1c8) = a;
    s32 i = (u16)((s16)(M(s16, 0x1c8) + M(s16, 0x98)) >> 1) >> 4;
    M(s32, 0x1bc) = data_02135f44[i * 2];
    i = (u16)((s16)(M(s16, 0x1c8) + M(s16, 0x98)) >> 1) >> 4;
    M(s32, 0x1c0) = data_02135f44[i * 2 + 1];
    M(s32, 0x1c4) = func_01ffcb0c(M(s32, 0x1bc), FX_Inv(M(s32, 0x1c0)));
    _ZN12Unk_020d924813func_0203a058Eitii(data_021ef414, M(s32, 0x1b0), (s16)(M(s16, 0x1c8) + M(s16, 0x98)), M(s32, 0x1b4) + M(s32, 0x90),
                  M(s32, 0x1b8) + M(s32, 0x94));
}

void Unk_020d93b8::func_0203baec()
{
    M(s16, 0x1ac) = func_0203edd0(&M(u8, 0x194));
}

extern "C" void func_0203bac4(s32 a, s32 *x, s32 *z)
{
    V3 t;
    func_01ffcbb0(&t, (void *)a);
    *x = t.x >> 17;
    *z = t.z >> 17;
}

void Unk_020d93b8::func_0203b9d4()
{
    if (data_021ef2f0->unk_04 == 0) {
        func_0202fe84(&M(s32, 0x178), &M(s32, 0x17c), &M(s32, 0x180), &M(s32, 0x184));
        s32 m = data_020c8cb8;
        if (M(s32, 0x184) < m) {
            M(s32, 0x184) = m;
        }
    }
    if (func_020b50e8() == 0x29) {
        M(s32, 0x17c) += 0x4000;
        M(s32, 0x184) += 0x4000;
    } else {
        Unk_021c47c4 *g = data_021c47c4;
        u32 arg;
        if (g->unk_04 > (u32 *)0 && g->unk_08 > (u32 *)0 && g->unk_00 != 0) {
            arg = g->unk_00;
        } else {
            arg = 0;
        }
        switch (_ZN12Unk_020375d013func_020375d0Ev(arg) - 0x1009) {
        case 0:
        case 3:
            M(s32, 0x178) += 0x2000;
            break;
        case 1:
            M(s32, 0x17c) -= 0x2000;
            break;
        case 2:
        case 4:
            M(s32, 0x178) += 0x2000;
            M(s32, 0x17c) -= 0x2000;
            break;
        }
    }
}

BOOL Unk_020d93b8::func_0203b93c(s32 *p)
{
    BOOL r = FALSE;
    if (M(s32, 0x17c) - M(s32, 0x178) <= 0xa000) {
        p[0] = (M(s32, 0x17c) + M(s32, 0x178)) >> 1;
        r = TRUE;
    } else if (p[0] < M(s32, 0x178) + 0x5000) {
        p[0] = M(s32, 0x178) + 0x5000;
        r = TRUE;
    } else if (p[0] > M(s32, 0x17c) - 0x5000) {
        p[0] = M(s32, 0x17c) - 0x5000;
        r = TRUE;
    }
    if (M(s32, 0x184) - M(s32, 0x180) <= 0x7000) {
        p[2] = (M(s32, 0x184) + M(s32, 0x180)) >> 1;
        r = TRUE;
    } else if (p[2] < M(s32, 0x180) + 0x2000) {
        p[2] = M(s32, 0x180) + 0x2000;
        r = TRUE;
    } else if (p[2] > M(s32, 0x184) - 0x5000) {
        p[2] = M(s32, 0x184) - 0x5000;
        r = TRUE;
    }
    return r;
}

void Unk_020d93b8::func_0203b910(u8 *o, V3 *v)
{
    if (o == NULL) {
        o = &M(u8, 0xfc);
    }
    func_0203c1a4(0xb, 0);
    ((V3 *)(o + 0x14))->x = v->x;
    ((V3 *)(o + 0x14))->y = v->y;
    ((V3 *)(o + 0x14))->z = v->z;
}

s32 Unk_020d93b8::func_0203b8e0(s32 *p)
{
    s32 v = *p;
    if (v < M(s32, 0x178) + 0x5000) {
        return 1;
    }
    if (v > M(s32, 0x17c) - 0x5000) {
        return 2;
    }
    return 0;
}

BOOL Unk_020d93b8::func_0203b7ac(s32 idx)
{
    if (idx < 0x15) {
        if (idx != M(s32, 0x1f8)) {
            M(s32, 0x1fc) = M(s32, 0x1f8);
            if (idx != M(s32, 0x200)) {
                M(s16, 0x11c) = M(s16, 0xfc);
                M(s16, 0x11e) = M(s16, 0xfe);
                M(s32, 0x120) = M(s32, 0x100);
                M(s32, 0x124) = M(s32, 0x104);
                M(s32, 0x128) = M(s32, 0x108);
                M(s32, 0x12c) = M(s32, 0x10c);
                M(s32, 0x130) = M(s32, 0x110);
                M(s32, 0x134) = M(s32, 0x114);
                M(s32, 0x138) = M(s32, 0x118);
                M(s32, 0x13c) = M(s32, 0x168);
                M(s32, 0x140) = M(s32, 0x16c);
                M(s32, 0x144) = M(s32, 0x170);
            }
        }
        M(u8, 0x1f4) = 0;
        if ((this->*data_021c30ec[idx].init)()) {
            func_0203b730();
            M(s32, 0x1f8) = idx;
            func_0203b768();
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_020d93b8::func_0203b768()
{
    s32 i = M(s32, 0x1f8);
    if (i < 0x15) {
        (this->*data_021c30ec[i].update)();
        func_0203baec();
    }
}

void Unk_020d93b8::func_0203b730()
{
    M(s32, 0x1b0) = 0x1548;
    M(s32, 0x1b4) = 0xf6;
    M(s32, 0x1b8) = 0x3e800;
    func_0203bb0c(M(s16, 0x1c8));
}

void Unk_020d93b8::func_0203b56c()
{
    V3 t1, t2, o1, o2;
    s32 a, b, c, d;
    if (func_0203a488()) {
        a = func_0203bc28();
        b = func_0203bbe4();
        c = func_0203bbd0();
        d = func_0203bbbc();
        a = func_02063a9c(M(s32, 0xc8), a, b, c, d);
        func_020e9960(&t1, (V3 *)&M(u8, 0x110), (V3 *)&M(u8, 0x15c));
        func_020e9888(&t1, a);
        func_01ffd070(&o1, (V3 *)&M(u8, 0x15c), &t1);
        M(s32, 0x15c) = o1.x;
        M(s32, 0x160) = o1.y;
        M(s32, 0x164) = o1.z;
        func_020e9960(&t2, (V3 *)&M(u8, 0x104), (V3 *)&M(u8, 0x150));
        func_020e9888(&t2, a);
        func_01ffd070(&o2, (V3 *)&M(u8, 0x150), &t2);
        M(s32, 0x150) = o2.x;
        M(s32, 0x154) = o2.y;
        M(s32, 0x158) = o2.z;
        M(s16, 0x14a) += func_01ffcb0c(M(s16, 0xfe) - M(s16, 0x14a), a);
        M(s16, 0x148) += func_01ffcb0c(M(s16, 0xfc) - M(s16, 0x148), a);
        M(s32, 0x14c) += func_01ffcb0c(M(s32, 0x100) - M(s32, 0x14c), a);
        M(s32, 0x1e8) += func_01ffcb0c(M(s32, 0x1e4) - M(s32, 0x1e8), a);
        M(s32, 0xc8) += 0x1000;
    } else {
        M(s32, 0x15c) = M(s32, 0x110);
        M(s32, 0x160) = M(s32, 0x114);
        M(s32, 0x164) = M(s32, 0x118);
        M(s32, 0x150) = M(s32, 0x104);
        M(s32, 0x154) = M(s32, 0x108);
        M(s32, 0x158) = M(s32, 0x10c);
        M(s16, 0x14a) = M(s16, 0xfe);
        M(s16, 0x148) = M(s16, 0xfc);
        M(s32, 0x14c) = M(s32, 0x100);
        M(s32, 0x1e8) = M(s32, 0x1e4);
    }
}

void Unk_020d93b8::func_0203b484(V3 *a, s32 r, s32 s, s32 z)
{
    V3 t, o;
    t.x = 0;
    t.y = 0;
    t.z = z;
    func_020e944c(&t, (s16)-r);
    func_020e93a0(&t, s);
    func_01ffd070(&o, a, &t);
    M(s32, 0x168) = o.x;
    M(s32, 0x16c) = o.y;
    M(s32, 0x170) = o.z;
    s32 ang = func_0203eeac(&M(u8, 0x188), a);
    func_0203eeac(&M(u8, 0x194), func_0203bc9c());
    M(s32, 0x1a0) = 0;
    M(s32, 0x1a4) = 0x1000;
    M(s32, 0x1a8) = 0;
    func_020e944c((V3 *)&M(u8, 0x1a0), ang);
    func_020e92f4((V3 *)&M(u8, 0x1a0), M(s16, 0x174));
    data_021c309c.x = a->x;
    data_021c309c.y = a->y;
    data_021c309c.z = a->z;
    V3 *c = func_0203bc9c();
    data_021c3084.x = c->x;
    data_021c3084.y = c->y;
    data_021c3084.z = c->z;
    data_021c3068 = z;
}

void Unk_020d93b8::func_0203b3c4(V3 *a, V3 *b)
{
    V3 d;
    s32 ang = func_0203eeac(&M(u8, 0x188), a);
    func_0203eeac(&M(u8, 0x194), b);
    M(s32, 0x1a0) = 0;
    M(s32, 0x1a4) = 0x1000;
    M(s32, 0x1a8) = 0;
    s32 i = (u16)ang >> 4;
    M(s32, 0x1a4) = data_02135f44[i * 2 + 1];
    M(s32, 0x1a8) = data_02135f44[i * 2];
    func_020e92f4((V3 *)&M(u8, 0x1a0), M(s16, 0x174));
    data_021c309c.x = a->x;
    data_021c309c.y = a->y;
    data_021c309c.z = a->z;
    data_021c3084.x = b->x;
    data_021c3084.y = b->y;
    data_021c3084.z = b->z;
    func_020e9960(&d, a, b);
    data_021c3068 = VEC_Mag(&d);
}

void Unk_020d93b8::func_0203b350(V3 *p)
{
    V3 d;
    s32 len, ex;
    unk_110.y = p->y;
    func_020e9960(&d, &unk_110, p);
    len = func_020e9688(&d);
    if (len > func_0203bc58()) {
        ex = len - func_0203bc58();
        if (func_020e94f8(&d)) {
            unk_110.x -= func_01ffcb0c(d.x, ex);
            unk_110.z -= func_01ffcb0c(d.z, ex);
        }
    }
}

BOOL Unk_020d93b8::func_0203b28c() {
    if (data_021ef2f0->unk_04 == 0) {
        if (unk_1fc == 2) {
            unk_1f5 = 0;
        }
        func_0203c1a4(data_020c8ce8[unk_1f0].v[unk_1ec], 0);
    } else {
        func_0203c1a4(0, 0);
    }
    func_0203c09c(0);
    s32 t = unk_1fc;
    if (t == 2 || t == 4 || t == 0x10 || t == 5 || t == 6 || t == 0x12 || (u32)(t - 0xb) <= 1) {
        func_0203a458();
        unk_1e4 = 0;
    } else {
        unk_1e4 = 0;
        unk_1e8 = 0;
        func_0203a468();
    }
    if (unk_1fc == 2 || unk_1fc == 0x10) {
        func_0203a234((Unk_021c3070 *)this, 0x30);
    }
    return TRUE;
}

void Unk_020d93b8::func_0203b160() {
    volatile Unk_0203a9b8_Vec cur;
    cur.x = unk_110.x;
    cur.y = unk_110.y;
    cur.z = unk_110.z;
    volatile Unk_0203a9b8_Vec d;
    d.x = data_021f4880.x;
    d.y = data_021f4880.y;
    d.z = data_021f4880.z;
    Unk_0203a9b8_Vec *p = func_020947f0(4);
    if (p) {
        d.x = p->x;
        d.y = p->y;
        d.z = p->z;
    }
    if (data_021ef2f0->unk_04 == 0) {
        if (func_020b52f8() || func_020b51a4() || (func_020b51fc() && func_020b50e8() != 0x20 && func_020b50e8() != 0x22)) {
            func_0203c1a4(data_020c8ce8[unk_1f0].v[unk_1ec], 0);
            unk_110.x = d.x;
            unk_110.y = d.y;
            unk_110.z = d.z;
            if (unk_1f0 != 0) {
                func_0203b93c((s32 *)&unk_110.x);
            }
        } else {
            unk_110.x = d.x;
            unk_110.y = d.y;
            unk_110.z = d.z;
            func_0203b93c((s32 *)&unk_110.x);
        }
    } else {
        func_0203b350((Unk_0203a9b8_Vec *)&d);
    }
    Unk_0203a9b8_Vec v;
    R096_TAIL(v)
}

void Unk_020d93b8::func_0203b094() {
    unk_1f4 = 1;
    unk_11c = unk_fc.h0;
    unk_11e = unk_fc.h1;
    unk_120 = unk_fc.w0;
    unk_124 = unk_fc.x;
    unk_128 = unk_fc.y;
    unk_12c = unk_fc.z;
    unk_130 = unk_110.x;
    unk_134 = unk_110.y;
    unk_138 = unk_110.z;
    unk_13c = unk_168;
    unk_140 = unk_16c;
    unk_144 = unk_170;
    func_0203aed0();
}

void Unk_020d93b8::func_0203af68() {
    unk_1f4 = 0;
    func_0203aed0();
    unk_fc.h0 = unk_11c;
    unk_fc.h1 = unk_11e;
    unk_fc.w0 = unk_120;
    unk_fc.x = unk_124;
    unk_fc.y = unk_128;
    unk_fc.z = unk_12c;
    unk_110.x = unk_130;
    unk_110.y = unk_134;
    unk_110.z = unk_138;
    unk_168 = unk_13c;
    unk_16c = unk_140;
    unk_170 = unk_144;
    unk_204 = unk_110.x;
    unk_208 = unk_110.y;
    unk_20c = unk_110.z;
    unk_210 = unk_168;
    unk_214 = unk_16c;
    unk_218 = unk_170;
    func_0203a458();
    func_0203c09c(2);
}

BOOL Unk_020d93b8::func_0203aed0() {
    Unk_0203a9b8_Vec v;
    if (unk_1f4 == 0) {
        func_01ffcbb0(&v, this);
        unk_204 = v.x;
        unk_208 = v.y;
        unk_20c = v.z;
        Unk_0203a9b8_Vec *p = func_0203bc9c();
        unk_210 = p->x;
        unk_214 = p->y;
        unk_218 = p->z;
        func_0203a468();
    } else {
        if (data_021ef2f0->unk_04 == 0) {
            func_0203c1a4(0xf, 0);
        } else {
            func_0203c1a4(0xe, 0);
        }
        func_0203c09c(1);
        func_0203a458();
    }
    return TRUE;
}

void Unk_020d93b8::func_0203ad84() {
    volatile Unk_0203a9b8_Vec d;
    Unk_0203a9b8_Vec v, e, r, o, v2;
    d.x = data_021f4880.x;
    d.y = data_021f4880.y;
    d.z = data_021f4880.z;
    Unk_0203a9b8_Vec *p = func_020947f0(4);
    if (p) {
        d.x = p->x;
        d.y = p->y;
        d.z = p->z;
    }
    if (unk_1f4 == 0) {
        func_0203b56c();
        func_01ffcbb0(&v, this);
        Unk_0203a9b8_Vec *pp = func_0203bc9c();
        e.x = pp->x;
        e.y = pp->y;
        e.z = pp->z;
        if (func_0203a488()) {
            s32 z = func_0203bc48();
            r.x = 0;
            r.y = 0;
            r.z = z;
            func_020e944c(&r, (s16)-func_0203bc7c());
            func_020e93a0(&r, func_0203bc68());
            func_01ffd070(&o, &v, &r);
            e.x = o.x;
            e.y = o.y;
            e.z = o.z;
        }
        v.y = v.y + (0x1000 - func_0206ede0()) * 15;
        e.y = e.y + (0x1000 - func_0206ede0()) * 2;
        if (unk_1fc == 9) {
            v.y = v.y + func_ov068_0226647c(this);
        }
        func_0203b3c4(&v, &e);
    } else {
        unk_110.x = d.x;
        unk_110.y = d.y;
        unk_110.z = d.z;
        R096_TAIL(v2)
    }
}

BOOL Unk_020d93b8::func_0203ad18() {
    if (data_021ef2f0->unk_04 == 0) {
        func_0203c1a4(0xb, 0);
        unk_1f6 = 3;
        func_ov004_0223fe00(this, 0);
    } else {
        func_0203c1a4(0xa, 0);
        func_ov003_0222ef10(this);
    }
    func_0203c09c(0);
    if (unk_1fc == 1) {
        func_0203a468();
    } else {
        func_0203a458();
    }
    func_0203a234((Unk_021c3070 *)this, 0x2f);
    return TRUE;
}

void Unk_020d93b8::func_0203acbc() {
    if (data_021ef2f0->unk_04 == 0) {
        func_ov004_0223fe00(this, 0);
    } else {
        func_ov003_0222ef10(this);
    }
    Unk_0203a9b8_Vec v;
    R096_TAIL(v)
}

BOOL Unk_020d93b8::func_0203ac84() {
    if (data_021ef2f0->unk_04 == 0) {
        func_0203c1a4(0x1c, 0);
    } else {
        func_0203c1a4(0x1b, 0);
    }
    func_0203c09c(3);
    func_0203a458();
    return TRUE;
}

void Unk_020d93b8::func_0203abfc() {
    volatile Unk_0203a9b8_Vec d;
    d.x = data_021f4880.x;
    d.y = data_021f4880.y;
    d.z = data_021f4880.z;
    Unk_0203a9b8_Vec *p = func_020947f0(4);
    if (p) {
        d.x = p->x;
        d.y = p->y;
        d.z = p->z;
    }
    unk_110.x = d.x;
    unk_110.y = d.y;
    unk_110.z = d.z;
    Unk_0203a9b8_Vec v;
    R096_TAIL(v)
}

BOOL Unk_020d93b8::func_0203abb4() {
    if (data_021ef2f0->unk_04 == 0) {
        func_0203c1a4(0xd, 0);
    } else {
        func_0203c1a4(0xc, 0);
    }
    func_0203c09c(0);
    func_0203a458();
    unk_1e4 = 0x1000;
    return TRUE;
}

void Unk_020d93b8::func_0203ab2c() {
    volatile Unk_0203a9b8_Vec d;
    d.x = data_021f4880.x;
    d.y = data_021f4880.y;
    d.z = data_021f4880.z;
    Unk_0203a9b8_Vec *p = func_020947f0(4);
    if (p) {
        d.x = p->x;
        d.y = p->y;
        d.z = p->z;
    }
    unk_110.x = d.x;
    unk_110.y = d.y;
    unk_110.z = d.z;
    Unk_0203a9b8_Vec v;
    R096_TAIL(v)
}

BOOL Unk_020d93b8::func_0203ab0c() {
    func_0203c1a4(0, 0);
    func_0203c09c(0);
    func_0203a458();
    return TRUE;
}

void Unk_020d93b8::func_0203aa34() {
    Unk_0203a9b8_Vec d;
    d = data_021f4880;
    Unk_0203a9b8_Vec *p = func_020947f0(4);
    void *q = func_ov003_022120ac(4);
    if (p && q) {
        Unk_0203a9b8_Vec t;
        func_020e9960(&t, p, q);
        s32 len = func_020e9688(&t);
        s32 ang = func_02002bdc(p, q);
        s32 sc = func_01ffcb0c(len, 0xb33);
        d = *p;
        s32 idx = ((u16)ang >> 4) * 2;
        d.x += func_01ffcb0c(sc, data_02135f44[idx]);
        d.z += func_01ffcb0c(sc, data_02135f44[idx + 1]);
    }
    func_0203b350(&d);
    Unk_0203a9b8_Vec v;
    R096_TAIL(v)
}

BOOL Unk_020d93b8::func_0203aa20() {
    func_0203a378();
    func_0203a468();
    return TRUE;
}

void Unk_020d93b8::func_0203a9dc() {
    Unk_0203a9b8_Vec v;
    func_0203a378();
    R096_TAIL(v)
}

BOOL Unk_020d93b8::func_0203a9b8() {
    Unk_0203a9b8_Sub *sub = (Unk_0203a9b8_Sub *)&unk_21c;
    sub->unk_04 = 0;
    sub->unk_06 = 0x2000;
    func_0203a468();
    return TRUE;
}

extern "C" void func_0203a8d4(Unk_021c3070 *o) {
    Unk_0203a148_Vec v;
    Unk_0203a148_Vec cam;
    Unk_0203a8d4_Rot *r = &o->unk_21c;
    s32 sc;
    r->ang = r->ang + r->vel;
    func_020e769c(&r->vel, 0x6000, 0x180);
    sc = func_01ffcb0c(data_02135f44[((u16)r->ang >> 4) * 2], o->unk_21c.len);
    _ZN12Unk_020d93b813func_0203b350EP14Unk_0203b350_V(o, o->unk_130);
    func_020e7870((s32 *)r, 0, 0x400, 0x80, 0x10);
    _ZN12Unk_020d93b813func_0203b56cEv(o);
    func_01ffcbb0(&cam, o);
    s32 p = _ZN12Unk_020d93b813func_0203bc7cEv(o);
    s32 q = _ZN12Unk_020d93b813func_0203bc68Ev(o);
    _ZN12Unk_020d93b813func_0203b484EP14Unk_0203b350_Viii(o, &cam, p, q, _ZN12Unk_020d93b813func_0203bc48Ev(o));
    v.x = 0;
    v.y = 0x1000;
    v.z = 0;
    MTX_MultVec33(&v, &o->unk_cc, &v);
    func_020e9888(&v, sc);
    VEC_Add(&o->unk_194, &v, &o->unk_194);
    VEC_Add(&o->unk_188, &v, &o->unk_188);
}

extern "C" BOOL func_0203a8b4(Unk_021c3070 *o) {
    _ZN12Unk_020d93b813func_0203c1a4EiP16Unk_0203bc68_Pos(o, 0x1f, 0);
    _ZN12Unk_020d93b813func_0203c09cEi(o, 5);
    func_0203a458();
    return TRUE;
}

extern "C" void func_0203a874(Unk_021c3070 *o) {
    Unk_0203a148_Vec v;
    _ZN12Unk_020d93b813func_0203b56cEv(o);
    func_01ffcbb0(&v, o);
    s32 p = _ZN12Unk_020d93b813func_0203bc7cEv(o);
    s32 q = _ZN12Unk_020d93b813func_0203bc68Ev(o);
    _ZN12Unk_020d93b813func_0203b484EP14Unk_0203b350_Viii(o, &v, p, q, _ZN12Unk_020d93b813func_0203bc48Ev(o));
}

extern "C" BOOL func_0203a844(void) {
    s32 t = data_021c3070->unk_1f8;
    if (t == 9) {
        return FALSE;
    }
    if (t == 0) {
        return TRUE;
    }
    return _ZN12Unk_020d93b813func_0203b7acEi(data_021c3070, 0);
}

extern "C" void func_0203a830(void) {
    _ZN12Unk_020d93b813func_0203b7acEi(data_021c3070, 1);
}

extern "C" s32 func_0203a7b8(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b, Unk_0203a148_Vec *c, s32 *d) {
    s32 len;
    Unk_0203a148_Vec sub, v2, t1, t2;
    func_020e9960(&sub, a, b);
    v2.x = sub.x;
    v2.y = sub.y;
    v2.z = sub.z;
    v2.z = func_01ffcb0c(*(volatile s32 *)&sub.z, data_020d9254);
    len = VEC_Mag(&v2);
    if (c != NULL) {
        func_01ffd070(&t1, a, b);
        func_020e9790(&t2, &t1, 1);
        c->x = t2.x;
        c->y = t2.y;
        c->z = t2.z;
        if (d != NULL) {
            s32 t = sub.z >> 1;
            if (t < 0) {
                t = -t;
            }
            *d = t;
        }
    }
    return len;
}

extern "C" s32 func_0203a6fc(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b, Unk_0203a148_Vec *c, Unk_0203a148_Vec *d, s32 *e) {
    Unk_0203a148_Vec lo, hi, diff, t1, t2;
    s32 r;
    lo.x = a->x;
    lo.y = a->y;
    lo.z = a->z;
    hi.x = a->x;
    hi.y = a->y;
    hi.z = a->z;
    if (lo.x > b->x) {
        lo.x = b->x;
    } else {
        hi.x = b->x;
    }
    if (lo.z > b->z) {
        lo.z = b->z;
    } else {
        hi.z = b->z;
    }
    if (lo.x > c->x) {
        lo.x = c->x;
    }
    if (lo.z > c->z) {
        lo.z = c->z;
    }
    if (hi.x < c->x) {
        hi.x = c->x;
    }
    if (hi.z < c->z) {
        hi.z = c->z;
    }
    func_020e9960(&diff, &hi, &lo);
    s32 z = diff.z;
    r = diff.x;
    if (r <= z) {
        r = z;
    }
    if (d != NULL) {
        func_01ffd070(&t1, &lo, &hi);
        func_020e9790(&t2, &t1, 1);
        d->x = t2.x;
        d->y = t2.y;
        d->z = t2.z;
        d->y = (a->y + b->y) >> 1;
        if (e != NULL) {
            *e = diff.z >> 1;
        }
    }
    return r;
}

extern "C" BOOL func_0203a680(Unk_0203a148_Vec *a) {
    if (data_021c3070->unk_1f8 == 9) {
        return FALSE;
    }
    if (func_020b50e8() == 0xc) {
        return FALSE;
    }
    s32 r = func_0203a7b8(func_020947f0(4), a, NULL, NULL);
    if (r >= 0xb000) {
        return func_0203a844();
    }
    data_021c3070->unk_1ca = 0;
    data_021c3070->unk_1cc = *a;
    return _ZN12Unk_020d93b813func_0203b7acEi(data_021c3070, 2);
}

extern "C" void func_0203a608(Unk_0203a148_Vec *a, Unk_0203a148_Vec *b) {
    s32 r = func_0203a6fc(func_020947f0(4), a, b, NULL, NULL);
    if (r >= 0xb000) {
        func_0203a844();
    } else {
        data_021c3070->unk_1ca = 1;
        data_021c3070->unk_1cc = *a;
        data_021c3070->unk_1d8 = *b;
        _ZN12Unk_020d93b813func_0203b7acEi(data_021c3070, 2);
    }
}

extern "C" void func_0203a5ec(s32 a) {
    data_021c3070->unk_21c.len = a;
    _ZN12Unk_020d93b813func_0203b7acEi(data_021c3070, 0x11);
}

extern "C" void func_0203a5d8(void) {
    _ZN12Unk_020d93b813func_0203b7acEi(data_021c3070, 0x13);
}

extern "C" void func_0203a5c4(void) {
    _ZN12Unk_020d93b813func_0203b7acEi(data_021c3070, 3);
}

extern "C" void func_0203a5ac(void) {
    _ZN12Unk_020d93b813func_0203b7acEi(data_021c3070, data_021c3070->unk_1fc);
}

extern "C" void func_0203a598(void) {
    _ZN12Unk_020d93b813func_0203b7acEi(data_021c3070, 4);
}

extern "C" void func_0203a584(void) {
    _ZN12Unk_020d93b813func_0203b7acEi(data_021c3070, 5);
}

extern "C" BOOL func_0203a528(Unk_0203a148_Vec *v) {
    if (data_021c3070->unk_1f8 == 0x13) {
        data_021c3070->unk_c8 = 0;
        data_021c3070->unk_b8 = 0;
        data_021c3070->unk_bc = 0x15000;
        return TRUE;
    }
    Unk_0203a148_Vec *d = &data_021c3070->unk_1cc;
    *d = *v;
    data_021c3070->unk_c8 = 0;
    data_021c3070->unk_1f6 = 3;
    return TRUE;
}

extern "C" BOOL func_0203a4c4(Unk_0203a148_Vec *v, s32 unused, s32 h) {
    Unk_021c3070 *o = data_021c3070;
    if (o != NULL) {
        s32 t = o->unk_1f8;
        if (t != 2 && t != 4) {
            if (t == 1 && o->unk_1fc == 2) {
            } else if (o->unk_1f4 == 0) {
                return FALSE;
            }
        }
        if (v->z - (h >> 1) > o->unk_fc.c6 - 0x2000) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" s32 func_0203a4b0(void) {
    return data_021c3070->unk_1e8;
}

extern "C" BOOL func_0203a488(void) {
    if (data_021c3070->unk_c8 <= _ZN12Unk_020d93b813func_0203bbe4Ev(data_021c3070)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_0203a468(void) {
    data_021c3070->unk_c8 = _ZN12Unk_020d93b813func_0203bbe4Ev(data_021c3070);
}

extern "C" void func_0203a458(void) {
    data_021c3070->unk_c8 = 0;
}

extern "C" u8 func_0203a430(void) {
    return (_ZN12Unk_020d93b813func_0203bbe4Ev(data_021c3070) - data_021c3070->unk_c8) >> 12;
}

extern "C" void func_0203a3d8(void) {
    data_021c30cc = data_021c3070->unk_fc;
    *(Unk_0203a148_Vec *)&data_021c30c0 = data_021c3070->unk_168;
}

extern "C" void func_0203a378(void) {
    data_021c3070->unk_fc = data_021c30cc;
    data_021c3070->unk_168 = data_021c30c0;
}

extern "C" BOOL func_0203a35c(void) {
    if (data_021c3070->unk_1f4 != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_0203a344(void) {
    _ZN12Unk_020d93b813func_0203b094Ev(data_021c3070);
    return TRUE;
}

extern "C" BOOL func_0203a32c(void) {
    _ZN12Unk_020d93b813func_0203af68Ev(data_021c3070);
    return TRUE;
}

extern "C" void func_0203a318(void) {
    func_ov068_02266624(data_021c3070, 3);
}

extern "C" void func_0203a304(void) {
    data_021c3070->unk_1f5 = 1;
}

extern "C" void func_0203a278(s32 a) {
    _ZN12Unk_020d93b813func_0203b910EPhP14Unk_0203b350_V(data_021c3070, &data_021c3070->unk_fc, a);
    data_021c3070->unk_148 = data_021c3070->unk_fc;
    Unk_0203a148_Vec v;
    func_01ffcbb0(&v, data_021c3070);
    s32 p = _ZN12Unk_020d93b813func_0203bc7cEv(data_021c3070);
    s32 q = _ZN12Unk_020d93b813func_0203bc68Ev(data_021c3070);
    _ZN12Unk_020d93b813func_0203b484EP14Unk_0203b350_Viii(data_021c3070, &v, p, q, _ZN12Unk_020d93b813func_0203bc48Ev(data_021c3070));
}

extern "C" void func_0203a264(void) {
    data_021c3070->unk_1f7 = 1;
}

extern "C" void func_0203a250(void) {
    data_021c3070->unk_1f7 = 0;
}

extern "C" void func_0203a234(Unk_021c3070 *o, s32 a) {
    if (o->unk_1f7 == 0) {
        func_0200402c(a);
    }
}

extern "C" Unk_0203a148_Mtx *func_0203a220(void) {
    if (data_021c3070 != NULL) {
        return &data_021c3070->unk_50;
    }
    return NULL;
}

extern "C" BOOL func_0203a1d0(s32 a, s32 b) {
    Unk_021c3070 *o = data_021c3070;
    if (o != NULL) {
        if (o->unk_1ec != b || o->unk_1f0 != a) {
            func_0203a458();
            data_021c3070->unk_1f0 = a;
            data_021c3070->unk_1ec = b;
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_0203a148(s32 *x, s32 *y, Unk_0203a148_Vec *p) {
    struct {
        Unk_0203a148_Vec v;
        Unk_0203a148_Mtx m;
    } l;
    if (data_021c3070 != NULL) {
        Unk_0203a148_Mtx *src = func_0203a220();
        l.m = *src;
        data_021f47e0 = l.m;
        MTX_MultVec43(p, &data_021f47e0, &l.v);
        s32 t = FX_Div(0x60000, _ZN12Unk_020d93b813func_0203bc3cEv(data_021c3070));
        t = FX_Div(-t, l.v.z);
        func_020e9888(&l.v, t);
        *x = l.v.x >> 12;
        *y = -(l.v.y >> 12);
        return TRUE;
    }
    return FALSE;
}

// ======== FUNCTIONS ========

extern "C" BOOL func_0203a124(s32 *x, s32 *y, Unk_0203a148_Vec *p) {
    Unk_0203a148_Vec v;
    func_0203eeac(&v, p);
    return func_0203a148(x, y, &v);
}

Unk_0203a9b8_Rgba data_021c3060(31, 20, 20, 31);
Unk_0203a9b8_Rgba data_021c3074(20, 20, 31, 31);
Unk_0203a9b8_Rgba data_021c3064(31, 31, 20, 31);
Unk_0203a9b8_Rgba data_021c305c(20, 31, 20, 31);
Unk_0203a9b8_Rgba data_021c3058(20, 31, 31, 31);
Unk_0203a9b8_Rgba data_021c306c(20, 24, 24, 31);
Unk_02000c8c data_021c3084;
Unk_02000c8c data_021c309c;
Unk_0203c230 data_021c30cc;
Unk_02000c8c data_021c30c0;
Unk_021c30ec data_021c30ec[21] = {
    { *(Unk_021c30ec_Init *)data_020d9280, *(Unk_021c30ec_Update *)data_020d9368 },
    { *(Unk_021c30ec_Init *)data_020d9360, *(Unk_021c30ec_Update *)data_020d9358 },
    { *(Unk_021c30ec_Init *)data_020d9350, *(Unk_021c30ec_Update *)data_020d9348 },
    { *(Unk_021c30ec_Init *)data_020d9340, *(Unk_021c30ec_Update *)data_020d9338 },
    { *(Unk_021c30ec_Init *)data_020d92b0, *(Unk_021c30ec_Update *)data_020d9328 },
    { *(Unk_021c30ec_Init *)data_020d9320, *(Unk_021c30ec_Update *)data_020d9300 },
    { *(Unk_021c30ec_Init *)data_020d9308, *(Unk_021c30ec_Update *)data_020d9330 },
    { *(Unk_021c30ec_Init *)data_020d9370, *(Unk_021c30ec_Update *)data_020d9380 },
    { *(Unk_021c30ec_Init *)data_020d9390, *(Unk_021c30ec_Update *)data_020d92e8 },
    { *(Unk_021c30ec_Init *)data_020d92e0, *(Unk_021c30ec_Update *)data_020d92d8 },
    { *(Unk_021c30ec_Init *)data_020d92d0, *(Unk_021c30ec_Update *)data_020d93a0 },
    { *(Unk_021c30ec_Init *)data_020d9270, *(Unk_021c30ec_Update *)data_020d9388 },
    { *(Unk_021c30ec_Init *)data_020d9278, *(Unk_021c30ec_Update *)data_020d92a8 },
    { *(Unk_021c30ec_Init *)data_020d9290, *(Unk_021c30ec_Update *)data_020d92a0 },
    { *(Unk_021c30ec_Init *)data_020d92c0, *(Unk_021c30ec_Update *)data_020d92f8 },
    { *(Unk_021c30ec_Init *)data_020d9310, *(Unk_021c30ec_Update *)data_020d9378 },
    { *(Unk_021c30ec_Init *)data_020d9398, *(Unk_021c30ec_Update *)data_020d9268 },
    { *(Unk_021c30ec_Init *)data_020d9260, *(Unk_021c30ec_Update *)data_020d92c8 },
    { *(Unk_021c30ec_Init *)data_020d92b8, *(Unk_021c30ec_Update *)data_020d9298 },
    { *(Unk_021c30ec_Init *)data_020d92f0, *(Unk_021c30ec_Update *)data_020d9318 },
    { *(Unk_021c30ec_Init *)data_020d93a8, *(Unk_021c30ec_Update *)data_020d9258 }
};
Unk_021c3070 *data_021c3070;
s32 data_021c3068;

s32 data_020d9250 = 0x8;
s32 data_020d9254 = 0x1800;
Unk_0203c1f0_Entry data_020d9288 = { (void *)func_0203c1f0, 0xb, 0x6 };
void *data_020d9258[2] = { (void *)func_ov004_0223f8bc, 0 };
void *data_020d9260[2] = { (void *)_ZN12Unk_020d93b813func_0203a9b8Ev, 0 };
void *data_020d9268[2] = { (void *)func_ov004_0223fa94, 0 };
void *data_020d9270[2] = { (void *)func_ov004_0223fc8c, 0 };
void *data_020d9278[2] = { (void *)func_ov004_0223fc00, 0 };
void *data_020d9280[2] = { (void *)_ZN12Unk_020d93b813func_0203b28cEv, 0 };
void *data_020d9290[2] = { (void *)_ZN18Unk_ov068_0226668019func_ov068_022667acEv, 0 };
void *data_020d9298[2] = { (void *)func_ov004_0223f6bc, 0 };
void *data_020d92a0[2] = { (void *)_ZN18Unk_ov068_0226668019func_ov068_0226673cEv, 0 };
void *data_020d92a8[2] = { (void *)func_ov004_0223fb9c, 0 };
void *data_020d92b0[2] = { (void *)_ZN12Unk_020d93b813func_0203abb4Ev, 0 };
void *data_020d92b8[2] = { (void *)func_ov004_0223f7b0, 0 };
void *data_020d92c0[2] = { (void *)func_ov004_0223fa54, 0 };
void *data_020d92c8[2] = { (void *)func_0203a8d4, 0 };
void *data_020d92d0[2] = { (void *)func_ov004_0223fdbc, 0 };
void *data_020d92d8[2] = { (void *)_ZN18Unk_ov068_0226668019func_ov068_02266680Ev, 0 };
void *data_020d92e0[2] = { (void *)_ZN18Unk_ov068_0226668019func_ov068_022666f4Ev, 0 };
void *data_020d92e8[2] = { (void *)_ZN18Unk_ov068_0226668019func_ov068_022667c4Ev, 0 };
void *data_020d92f0[2] = { (void *)func_0203a8b4, 0 };
void *data_020d92f8[2] = { (void *)func_ov004_0223f9f0, 0 };
void *data_020d9300[2] = { (void *)_ZN12Unk_020d93b813func_0203aa34Ev, 0 };
void *data_020d9308[2] = { (void *)_ZN12Unk_020d93b813func_0203aa20Ev, 0 };
void *data_020d9310[2] = { (void *)func_ov004_0223f9d0, 0 };
void *data_020d9318[2] = { (void *)func_0203a874, 0 };
void *data_020d9320[2] = { (void *)_ZN12Unk_020d93b813func_0203ab0cEv, 0 };
void *data_020d9328[2] = { (void *)_ZN12Unk_020d93b813func_0203ab2cEv, 0 };
void *data_020d9330[2] = { (void *)_ZN12Unk_020d93b813func_0203a9dcEv, 0 };
void *data_020d9338[2] = { (void *)_ZN12Unk_020d93b813func_0203abfcEv, 0 };
void *data_020d9340[2] = { (void *)_ZN12Unk_020d93b813func_0203ac84Ev, 0 };
void *data_020d9348[2] = { (void *)_ZN12Unk_020d93b813func_0203acbcEv, 0 };
void *data_020d9350[2] = { (void *)_ZN12Unk_020d93b813func_0203ad18Ev, 0 };
void *data_020d9358[2] = { (void *)_ZN12Unk_020d93b813func_0203ad84Ev, 0 };
void *data_020d9360[2] = { (void *)_ZN12Unk_020d93b813func_0203aed0Ev, 0 };
void *data_020d9368[2] = { (void *)_ZN12Unk_020d93b813func_0203b160Ev, 0 };
void *data_020d9370[2] = { (void *)func_ov065_02266b24, 0 };
void *data_020d9378[2] = { (void *)func_ov004_0223f96c, 0 };
void *data_020d9380[2] = { (void *)_ZN18Unk_ov068_0226668019func_ov068_02266ab8Ev, 0 };
void *data_020d9388[2] = { (void *)func_ov004_0223fc28, 0 };
void *data_020d9390[2] = { (void *)_ZN18Unk_ov068_0226668019func_ov068_022669c8Ev, 0 };
void *data_020d9398[2] = { (void *)func_ov004_0223fb34, 0 };
void *data_020d93a0[2] = { (void *)func_ov004_0223fd30, 0 };
void *data_020d93a8[2] = { (void *)func_ov004_0223f92c, 0 };

// .rodata 0x020c8ce4-0x020c8d3c: the three objects before data_020c8d3c continue this file's ascending size run
// (4, 0x24, 0x30, 0x60, 0x294). data_020c8ce4 is read by the unit at 0x02038474 (0x020388f8), data_020c8ce8 by this
// file and ov004, data_020c8d0c (with the interior labels 0x020c8d0e/d10/d14) by ov068.
extern const u8 data_020c8ce4[4];
const u8 data_020c8ce4[4] = { 0, 0, 0, 0 };
const Unk_0203a9b8_Row data_020c8ce8[3] = { { { 1, 2, 3 } }, { { 4, 5, 6 } }, { { 7, 8, 9 } } };
struct Unk_020c8d0c_Row {
    s16 a;
    s16 b;
    s32 c;
    s32 d;
};
extern const Unk_020c8d0c_Row data_020c8d0c[4];
const Unk_020c8d0c_Row data_020c8d0c[4] = {
    { 0x0, 0x14, 0x0, 0x0 },
    { 0xa, 0x1, 0x2000, 0x28 },
    { 0xa, 0x1, 0x2000, 0x64 },
    { 0xa, 0x1, 0x2000, 0x96 }
};
const u32 data_020c8d3c[6][4] = {
    { 0x0, 0x1e000, 0x5000, 0x5000 },
    { 0x0, 0xa000, 0x3000, 0x3000 },
    { 0x0, 0x4000, 0x1000, 0x1000 },
    { 0x0, 0x5a000, 0x50000, 0xa000 },
    { 0x0, 0xb4000, 0xf000, 0xf000 },
    { 0x0, 0x3c000, 0xa000, 0xa000 }
};
const Unk_0203bc68_Ent data_020c8d9c[33] = {
    { 0x0, 0x27f6, 0x10e14, 0x0, 0x1e14, 0xf0a },
    { -0xe02, 0x13fb, 0xb000, 0x0, 0x1e14, 0xf0a },
    { 0x0, 0x13fb, 0xb000, 0x0, 0x1e14, 0xf0a },
    { 0xe02, 0x13fb, 0xb000, 0x0, 0x1e14, 0xf0a },
    { -0xe02, 0x21fd, 0x10e14, 0x0, 0x1e14, 0xf0a },
    { 0x0, 0x21fd, 0x10e14, 0x0, 0x1e14, 0xf0a },
    { 0xe02, 0x21fd, 0x10e14, 0x0, 0x1e14, 0xf0a },
    { -0xe02, 0x3000, 0x19000, 0x0, 0x1e14, 0xf0a },
    { 0x0, 0x3000, 0x19000, 0x0, 0x1e14, 0xf0a },
    { 0xe02, 0x3000, 0x19000, 0x0, 0x1e14, 0xf0a },
    { 0x0, 0x20ec, 0xb000, 0x0, 0x4f6, 0xf0a },
    { 0x0, 0x13fb, 0xb000, 0x0, 0x4f6, 0xf0a },
    { 0x0, 0x1eee, 0xb000, 0x0, 0xf0a, 0xf0a },
    { 0x0, 0x13fb, 0xb000, 0x0, 0xf0a, 0xf0a },
    { 0x0, 0x1eee, 0xa000, 0x0, 0x18f6, 0xf0a },
    { 0x0, 0x13fb, 0xb000, 0x0, 0x1e14, 0xf0a },
    { 0xd03, 0x8f5, 0x1e14, 0x11614, 0x1e14, 0x1c9ec },
    { 0x0, 0x21a2, 0x12c00, 0x10000, 0x1e14, 0x17e14 },
    { 0x0, 0xdf0, 0xf000, 0x10000, 0x4000, 0x1c000 },
    { 0x0, 0xdf0, 0xf000, 0x8000, 0x4000, 0x1c000 },
    { 0x0, 0xdf0, 0xf000, 0x8000, 0x4000, 0x14000 },
    { 0x0, 0xdf0, 0xf000, 0x8000, 0x4000, 0x14000 },
    { 0x0, 0x17f6, 0xa000, 0x10000, 0x4000, 0x1ee14 },
    { 0x0, 0x17f6, 0xa000, 0x8000, 0x4000, 0x1ee14 },
    { 0x0, 0x17f6, 0xa000, 0x8000, 0x4000, 0x16e14 },
    { 0x0, 0x17f6, 0xa000, 0x8000, 0x4000, 0x16e14 },
    { 0x0, 0x27f6, 0x10e14, 0x0, 0x1e14, 0x2cf6 },
    { 0x0, 0x1eee, 0x8000, 0x0, 0xf0a, -0x10f6 },
    { 0x0, 0x13fb, 0x8000, 0x0, 0xf0a, -0x10f6 },
    { 0x0, 0x9f4, 0xa000, 0x0, 0x1e14, 0xf0a },
    { -0x19ab, 0x9f4, 0xa000, -0x230a, 0x4f6, 0xf0a },
    { 0x0, 0x21fd, 0x10e14, 0x0, 0x1e14, 0x40f6 },
    { 0x0, 0xe02, 0x8819, 0x0, 0x1400, 0xf0a }
};
