// mwcc-version: 1.2/base
#include "types.h"
#include "Unk_020d8c7c.h"

// TU23 of ov003 (fish actors, scene classes 0223498c / 02234a94): 0x0221ffb8-0x02224e68, static initialiser 0x354 bytes.
// Merged from ten unit files; every view of the shared objects (data_ov003_0225812c etc.) is reached through casts.

#define func_02003c30 _ZN12Unk_02003c3013func_02003c30Ev
#define func_02003c40 _ZN12Unk_02003c4013func_02003c40EPv
#define func_02003c70 _ZN12Unk_02003c4013func_02003c70EP16Unk_02003a6c_Vec
#define func_02003cbc _ZN12Unk_02003c3013func_02003cbcEv
#define func_02003e50 _ZN12Unk_02003c3013func_02003e50Ev
#define func_02003e80 _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec
#define func_02003ecc _ZN12Unk_02003c3013func_02003eccEv
#define func_0203239c _ZN12Unk_02032238D1Ev
#define func_020323b0 _ZN12Unk_02032238C1Ev
#define func_020339bc _ZN12Unk_0203398c13func_020339bcEP16Unk_0203389c_Vecii
#define func_020375bc _ZN12Unk_020375d013func_020375bcEv
#define func_020546ec _ZN12Unk_020dbd5413func_020546ecEv
#define func_02054710 _ZN12Unk_020dbd5413func_02054710Ev
#define func_02054720 _ZN12Unk_0205454c13func_02054720Eiiitt
#define func_020547cc _ZN12Unk_020dbd5413func_020547ccEPv
#define func_020547e4 _ZN12Unk_020dbd5413func_020547e4Ev
#define func_02054800 _ZN12Unk_020dbd5413func_02054800EPv
#define func_020548a0 _ZN12Unk_020dbd54D1Ev
#define func_020548d0 _ZN12Unk_020dbd54C1Ev
#define func_02054b14 _ZN12Unk_020dbd3413func_02054b14Ev
#define func_02054c2c _ZN12Unk_020dbd3413func_02054c2cEPvS0_
#define func_02054e24 _ZN12Unk_020dbd34D1Ev
#define func_02054e3c _ZN12Unk_020dbd34C1Ev
#define func_020554c0 _ZN12Unk_020dbe3413func_020554c0Ev
#define func_020555ec _ZN12Unk_020dbe3413func_020555ecEP16Unk_020553f8_Resj
#define func_02055a9c _ZN12Unk_020dbe4c13func_02055a9cEj
#define func_02055b38 _ZN12Unk_020dbe4c13func_02055b38Eiiit
#define func_02055bcc _ZN12Unk_020dbe4c13func_02055bccEjPv
#define func_02055c38 _ZN12Unk_020dbe4cD2Ev
#define func_02055cac _ZN12Unk_020dbe4cC2Ev
#define func_020565e8 _ZN12Unk_020dbe7c13func_020565e8Ei
#define func_020566bc _ZN12Unk_020dbe7c13func_020566bcEv
#define func_0205f92c _ZN12Unk_0205f8d413func_0205f92cEi
#define func_0205fb40 _ZN12Unk_0205f8d413func_0205fb40Ev
#define func_0205fbbc _ZN12Unk_0205f8d413func_0205fbbcEPv
#define func_02072824 _ZN12Unk_020cbb1813func_02072824Ejj
#define func_020728a4 _ZN12Unk_020cbb1813func_020728a4EPhj
#define func_020728d4 _ZN12Unk_020cbb1813func_020728d4Ev
#define func_020729cc _ZN12Unk_020cbb1813func_020729ccEj
#define func_02072e44 _ZN12Unk_020cbb1813func_02072e44Ev
#define func_0209c0ac _ZN12Unk_0209c0ac13func_0209c0acEv
#define func_0209c0b4 _ZN12Unk_0209c0ac13func_0209c0b4Ev
#define func_0209c0c8 _ZN12Unk_0209c0ac13func_0209c0c8Ev
#define func_0209c0d0 _ZN12Unk_0209c0ac13func_0209c0d0EP12Unk_0209c2f4PKc
#define func_0209c128 _ZN12Unk_0209c0acD1Ev
#define func_0209c140 _ZN12Unk_0209c0acC1Ev
#define func_0209c15c _ZN12Unk_0209c15c13func_0209c15cEv
#define func_0209c1a4 _ZN12Unk_0209c15c13func_0209c1a4EjPvS0_jPFS0_jjEPFvvE
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt
#define func_0209c348 _ZN12Unk_0209c2f413func_0209c348Ev
#define func_02133150 _s32_div_f
#define func_021355f0 __cxa_vec_cleanup
// ---- from file 2
struct Unk_ov003_02220128_Vec3 {
    s32 x, y, z;
};

struct Unk_ov003_02220128_Pos {
    s32 a, b;
};

struct Unk_ov003_02257e9c_Rec {
    u8 pad_00[0x40];
    s32 unk_40;
    u8 pad_44[4];
    s32 unk_48;
    u8 pad_4c[8];
    Unk_ov003_02220128_Vec3 unk_54;
    Unk_ov003_02220128_Vec3 unk_60;
    Unk_ov003_02220128_Vec3 unk_6c;
    u8 pad_78[4];
    s32 unk_7c;
    u8 pad_80[0x10];
    s32 unk_90;
    u8 pad_94[0x10];
};

struct Unk_ov003_0225812c {
    Unk_ov003_0225812c();
    ~Unk_ov003_0225812c();
    u8 pad_000[0x7f];
    u8 unk_7f;
    u8 pad_080[0x208 - 0x80];
    Unk_ov003_02220128_Pos unk_208;
    u8 pad_210[0x24c - 0x210];
};

struct Unk_ov003_02220844_Obj {
    u8 pad_000[0x7e];
    u8 unk_7e;
    u8 unk_7f;
    s32 unk_80;
    u8 pad_84[0x12c - 0x84];
    s32 unk_12c;
    s32 unk_130;
    s32 unk_134;
    s16 unk_138;
    u8 pad_13a[0x1fc - 0x13a];
    u8 unk_1fc;
    u8 pad_1fd;
    u8 unk_1fe;
    u8 unk_1ff;
    u8 unk_200;
    u8 pad_201[0x208 - 0x201];
    Unk_ov003_02220128_Pos unk_208;
    u8 pad_210[0x211 - 0x210];
    u8 unk_211;
    u16 unk_212;
    u8 pad_214[0x218 - 0x214];
    Unk_ov003_02220128_Vec3 unk_218;
    u8 pad_224[0x244 - 0x224];
    s32 unk_244;
};

struct Unk_ov003_0222069c_Cell {
    u8 pad[0x28];
};

struct Unk_ov003_0222069c_Grid {
    Unk_ov003_0222069c_Cell *unk_00;
    u32 unk_04;
    u32 unk_08;
};

static inline BOOL Unk_ov003_022203f8_Chk(void *s, s32 v) {
    if ((u32)(v - 0x34) <= 2) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov003_022209ec_Buf {
    u8 pad_00[0x24];
    s32 unk_24;
    u8 pad_28[4];
    s32 unk_2c;
    u8 pad_30[0x14];
    Unk_ov003_022209ec_Buf() {}
    ~Unk_ov003_022209ec_Buf() {}
};

// ---- from file 3
struct Unk_ov003_02220a2c_V3 {
    s32 x, y, z;
    Unk_ov003_02220a2c_V3() {}
};

typedef Unk_ov003_02220a2c_V3 V3_f3;

// owner object (passed in r0 by the state functions); only fields used here
struct Unk_ov003_02220a2c_O {
    u8 pad_00[0x80];
    s32 unk_80;
    u8 unk_84;
};

// 0x24c-byte entry, table at ((E_f3 *)(data_ov003_0225812c))
struct Unk_ov003_0225812c_f3 {
    u8 pad_00[0x7e];
    s8 unk_7e;
    u8 unk_7f;
    s32 unk_80;
    u8 pad_84[0x120 - 0x84];
    Unk_ov003_02220a2c_V3 unk_120;
    u16 unk_12c;
    u8 pad_12e[0x138 - 0x12e];
    s16 unk_138;
    u8 pad_13a[0x13c - 0x13a];
    s32 unk_13c;
    u8 pad_140[0x144 - 0x140];
    u8 unk_144[0x1a0 - 0x144];
    void *unk_1a0;
    u8 pad_1a4[0x1e8 - 0x1a4];
    u32 unk_1e8;
    u8 pad_1ec[4];
    s32 unk_1f0;
    u8 pad_1f4[0x1fd - 0x1f4];
    u8 unk_1fd;
    u8 unk_1fe;
    u8 unk_1ff;
    u8 unk_200;
    u8 unk_201;
    u8 pad_202[2];
    s32 unk_204;
    u8 pad_208[0x214 - 0x208];
    u8 unk_214;
    u8 pad_215[3];
    V3_f3 unk_218;
    u8 unk_224;
    u8 pad_225[0x23c - 0x225];
    u8 unk_23c;
    u8 pad_23d[3];
    u8 pad_240[4];
    s32 unk_244;
    u8 pad_248[4];
};

struct Unk_ov003_022210a4_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov003_022210a4_R {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0c[0x18 - 0xc];
    s32 *unk_18;
};

struct Unk_ov003_02257be0_f3 {
    u8 pad_00[0x48];
    V3_f3 unk_48;
    s16 unk_54;
    u8 pad_56[2];
    u8 unk_58[0x11c - 0x58];
    Unk_ov003_022210a4_R unk_11c;
};

struct Unk_ov003_02220eec_Rec {
    u8 pad_00[0xe];
    u8 unk_0e;
    u8 unk_0f;
    u8 pad_10[4];
};

struct Unk_ov003_02220eec_Bits {
    u8 pad_00[0xc];
    u32 unk_0c;
};

typedef Unk_ov003_02220a2c_O O_f3;

typedef Unk_ov003_0225812c_f3 E_f3;



// ---- from file 4
struct Unk_ov003_02221364_Vec {
    s32 x, y, z;
};

struct Unk_ov003_02221524_Slot {
    u8 pad_00[0x80];
    s32 unk_80;
    u8 pad_84[0x1fc - 0x84];
    u8 unk_1fc;
    u8 pad_1fd[3];
    s32 unk_200;
    s32 unk_204;
    struct {
        s32 a;
        s32 b;
    } unk_208;
    u8 pad_210[0x224 - 0x210];
    u8 unk_224;
    u8 pad_225[2];
    s8 unk_227;
    u8 pad_228[4];
    void *unk_22c;
    u8 pad_230[0x23c - 0x230];
    u8 unk_23c;
    u8 pad_23d[0x24c - 0x23d];
};

struct Unk_ov003_02221ab0_Ent {
    Unk_ov003_02221ab0_Ent();
    ~Unk_ov003_02221ab0_Ent();
    u8 pad_00[0x40];
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    u8 pad_4c[0x54 - 0x4c];
    s32 unk_54;
    s32 unk_58;
    s32 unk_5c;
    Unk_ov003_02221364_Vec unk_60;
    u8 pad_6c[0x78 - 0x6c];
    s8 unk_78;
    u8 pad_79[3];
    s32 unk_7c;
    u8 unk_80;
    u8 pad_81[3];
    s32 unk_84;
    s32 unk_88;
    s32 unk_8c;
    s32 unk_90;
    u8 unk_94;
    u8 pad_95;
    u16 unk_96;
    u16 unk_98;
    u16 unk_9a;
    s32 unk_9c;
    u8 unk_a0;
    u8 pad_a1[3];
};

struct Unk_ov003_022216f8_MFP {
    void (*unk_00)();
    s32 unk_04;
};

struct Unk_ov003_02221498_Tbl {
    Unk_ov003_022216f8_MFP unk_00;
    Unk_ov003_022216f8_MFP unk_08;
};

class Unk_0209c15c {
public:
    Unk_0209c15c();
    ~Unk_0209c15c();
    u32 unk_00[6];
};

class Unk_ov003_0223498c : public Unk_020d8c7c {
public:
    Unk_ov003_0223498c();
    virtual ~Unk_ov003_0223498c();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();

    /* 0x50 */ Unk_0209c15c unk_50;
    /* 0x68 */ Unk_0209c15c unk_68;
    /* 0x80 */ s32 unk_80;
    /* 0x84 */ u8 pad_84[4];
};

typedef void (Unk_ov003_0223498c::*Unk_ov003_0222144c_Fn_f4)(void *, void *);

struct Unk_ov003_0222144c_Ent {
    Unk_ov003_0222144c_Fn_f4 enter;
    Unk_ov003_0222144c_Fn_f4 exit;
};



// ---- from file 5
struct Unk_ov003_02221cec_Vec3 {
    s32 x, y, z;
};

typedef Unk_ov003_02221cec_Vec3 V3_f5;

struct Unk_ov003_02221cec_T48 {
    s32 v[12];
};

typedef Unk_ov003_02221cec_T48 T48_f5;

struct Unk_ov003_02221cec_Dead : V3_f5 {
    Unk_ov003_02221cec_Dead() {}
};

class Unk_ov003_02221cec_Ent {
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
    virtual BOOL vfunc_5c(V3_f5 *out);

    u8 pad_04[0x58];
    V3_f5 unk_5c;
    u8 pad_68[0xb0 - 0x68];
    u32 unk_b0;
};

typedef Unk_ov003_02221cec_Ent Ent_f5;

struct Unk_ov003_02221cec_Self {
    u8 pad_00[0x40];
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    s32 unk_4c;
    s32 unk_50;
    V3_f5 unk_54;
    V3_f5 unk_60;
    V3_f5 unk_6c;
    s8 unk_78;
    u8 pad_79[3];
    s32 unk_7c;
    u8 unk_80;
    u8 pad_81[3];
    V3_f5 unk_84;
    s32 unk_90;
    u8 unk_94;
    u8 pad_95;
    s16 unk_96;
    s16 unk_98;
    s16 unk_9a;
    s32 unk_9c;
    u8 unk_a0;
};

typedef Unk_ov003_02221cec_Self Self_f5;

struct Unk_ov003_02222224_Rec {
    u8 pad_000[0x224];
    u8 unk_224;
    u8 pad_225[2];
    s8 unk_227;
    u8 pad_228[4];
    s32 unk_22c;
    u8 pad_230[0x23c - 0x230];
    u8 unk_23c;
    u8 pad_23d[0x24c - 0x23d];
};

#define CP(d, s) do { (d).x = (s).x; (d).y = (s).y; (d).z = (s).z; } while (0)

static inline BOOL Unk_ov003_02222490_Bit(u32 f, u32 m) {
    return (f & m) ? TRUE : FALSE;
}

// ---- from file 6
struct Unk_ov003_02222658_V3 {
    s32 x, y, z;
};

typedef Unk_ov003_02222658_V3 V3_f6;

struct Unk_ov003_02222658_Ent {
    /* 0x00 */ u8 pad_00[0x40];
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ u8 pad_44[4];
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ u8 pad_4c[0x14];
    /* 0x60 */ V3_f6 unk_60;
    /* 0x6c */ u8 pad_6c[0xc];
    /* 0x78 */ u8 unk_78;
    /* 0x79 */ u8 pad_79[0x17];
    /* 0x90 */ s32 unk_90;
    /* 0x94 */ u8 pad_94[0x10];
};

typedef Unk_ov003_02222658_Ent Ent_f6;

struct Unk_ov003_02222764_Sub {
    u8 b0, b1, b2, b3;
};

typedef Unk_ov003_02222764_Sub Sub_f6;

struct Unk_ov003_02222658_Rec {
    u16 unk_00;
    u16 unk_02;
    u8 pad[0x10];
};

struct Unk_ov003_02222f28_Ent {
    u8 *p;
    u32 unk_04;
};

class Unk_ov003_02222658_Obj;

typedef void (Unk_ov003_02222658_Obj::*Fn_f6)(void *);

struct Unk_ov003_02222658_Mp {
    Fn_f6 f;
};

class Unk_ov003_02222658_Obj {
public:
    /* 0x000 */ u8 pad_000[0x40];
    /* 0x040 */ s32 unk_40;
    /* 0x044 */ u8 pad_044[0x10];
    /* 0x054 */ V3_f6 unk_54;
    /* 0x060 */ u8 pad_060[0x1e];
    /* 0x07e */ s8 unk_7e;
    /* 0x07f */ u8 pad_07f[0x120 - 0x7f];
    /* 0x120 */ V3_f6 unk_120;
    /* 0x12c */ u8 pad_12c[0xc];
    /* 0x138 */ u16 unk_138;
    /* 0x13a */ u8 pad_13a[2];
    /* 0x13c */ s32 unk_13c;
    /* 0x140 */ u8 pad_140[0x1fd - 0x140];
    /* 0x1fd */ u8 unk_1fd;
    /* 0x1fe */ u8 unk_1fe;
    /* 0x1ff */ u8 unk_1ff;
    /* 0x200 */ u8 pad_200[0x218 - 0x200];
    /* 0x218 */ s32 unk_218, unk_21c, unk_220;
    /* 0x224 */ u8 unk_224;
    /* 0x225 */ u8 pad_225[2];
    /* 0x227 */ s8 unk_227;
    /* 0x228 */ u8 pad_228[4];
    /* 0x22c */ void *unk_22c;
    /* 0x230 */ u8 pad_230[0xc];
    /* 0x23c */ u8 unk_23c;
    /* 0x23d */ u8 unk_23d;
    /* 0x23e */ u8 pad_23e[0x248 - 0x23e];
    /* 0x248 */ Sub_f6 unk_248;
};

typedef Unk_ov003_02222658_Obj Obj_f6;

class Unk_0203398c {
public:
    u8 pad_00[0x24];
    s32 unk_24, unk_28, unk_2c;
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[4];
    s32 unk_3c;
    Unk_0203398c() {}
    ~Unk_0203398c();
};

static inline BOOL R74(volatile u16 *p)
{
    u32 a = *p;
    u32 b = *p;
    BOOL r = FALSE;
    if (b >= 0x1374 && a <= 0x1374) {
        r = TRUE;
    }
    return r;
}

#define COPY() \
    do { \
        self->unk_120.x = self->unk_218; \
        self->unk_120.y = self->unk_21c; \
        self->unk_120.z = self->unk_220; \
    } while (0)

// ---- from file 7
struct Unk_ov003_02222fe4_V3 {
    s32 x, y, z;
};

typedef Unk_ov003_02222fe4_V3 V3_f7;

struct Unk_ov003_02222fe4_Ent {
    u8 pad_00[8];
    V3_f7 unk_08;
    u8 pad_14[0x3c - 0x14];
    s32 unk_3c;
};

typedef Unk_ov003_02222fe4_Ent Ent_f7;

struct Unk_ov003_02257e9c_Rec_f7 {
    u8 pad_00[0x40];
    s32 unk_40;
    void *unk_44;
    s32 unk_48;
    u8 pad_4c[8];
    V3_f7 unk_54;
    V3_f7 unk_60;
    V3_f7 unk_6c;
    u8 pad_78[8];
    u8 unk_80;
    u8 pad_81[3];
    V3_f7 unk_84;
    s32 unk_90;
    u8 pad_94;
    u8 pad_95;
    s16 unk_96;
    s16 unk_98;
    s16 unk_9a;
    s32 unk_9c;
    u8 unk_a0;
    u8 pad_a1[3];
};

typedef Unk_ov003_02257e9c_Rec_f7 Rec_f7;

struct Unk_ov003_0225812c_Obj {
    u8 pad_000[0x7e];
    s8 unk_7e;
    u8 unk_7f;
    u8 pad_80[0x120 - 0x80];
    V3_f7 unk_120;
    u8 pad_12c[0x138 - 0x12c];
    s16 unk_138;
    u8 pad_13a[2];
    s32 unk_13c;
    u16 unk_140;
    u8 pad_142[0x1e0 - 0x142];
    u8 unk_1e0[8];
    s32 unk_1e8;
    u8 pad_1ec[0x1ff - 0x1ec];
    u8 unk_1ff;
    u8 unk_200;
    u8 pad_201[3];
    s32 unk_204;
    u8 pad_208[0x211 - 0x208];
    u8 unk_211;
    u8 pad_212[0x224 - 0x212];
    u8 unk_224;
    u8 unk_225;
    u8 pad_226;
    s8 unk_227;
    u8 pad_228[4];
    Ent_f7 *unk_22c;
    V3_f7 unk_230;
    u8 unk_23c;
    u8 pad_23d;
    u8 unk_23e;
    u8 unk_23f;
    u8 pad_240[0x24c - 0x240];
};

typedef Unk_ov003_0225812c_Obj Obj_f7;



// ---- from file 8
struct Unk_ov003_02223924_V3 {
    s32 x, y, z;
};

typedef Unk_ov003_02223924_V3 V3_f8;

class Unk_ov003_02223924_Obj;

typedef s32 (Unk_ov003_02223924_Obj::*Fn_f8)();

struct Unk_ov003_02223924_Mp {
    Fn_f8 f;
};

struct Unk_ov003_02223924_Tbl {
    u8 *p;
    u32 q;
};

class Unk_ov003_02223924_Obj {
public:
    /* 0x000 */ u8 pad_000[0x7e];
    /* 0x07e */ s8 unk_7e;
    /* 0x07f */ u8 unk_7f;
    /* 0x080 */ u8 pad_080[0x120 - 0x80];
    /* 0x120 */ V3_f8 unk_120;
    /* 0x12c */ u8 pad_12c[0xc];
    /* 0x138 */ u16 unk_138;
    /* 0x13a */ u8 pad_13a[2];
    /* 0x13c */ s32 unk_13c;
    /* 0x140 */ u8 pad_140[2];
    /* 0x142 */ u16 unk_142;
    /* 0x144 */ u8 pad_144[0x1fe - 0x144];
    /* 0x1fe */ u8 unk_1fe;
    /* 0x1ff */ u8 unk_1ff;
    /* 0x200 */ u8 pad_200[4];
    /* 0x204 */ s32 unk_204;
    /* 0x208 */ u8 pad_208[0x224 - 0x208];
    /* 0x224 */ u8 unk_224;
    /* 0x225 */ u8 unk_225;
    /* 0x226 */ u8 pad_226;
    /* 0x227 */ s8 unk_227;
    /* 0x228 */ u8 pad_228[4];
    /* 0x22c */ void *unk_22c;
    /* 0x230 */ u8 pad_230[0xc];
    /* 0x23c */ u8 pad_23c;
    /* 0x23d */ u8 unk_23d;
    /* 0x23e */ u8 pad_23e[2];
    /* 0x240 */ u8 unk_240;
};

typedef Unk_ov003_02223924_Obj Obj_f8;



// ---- from file 9
struct Unk_ov003_0222426c_V3 {
    s32 x, y, z;
    Unk_ov003_0222426c_V3() {}
    Unk_ov003_0222426c_V3(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
    Unk_ov003_0222426c_V3(const Unk_ov003_0222426c_V3 &o) { x = o.x; y = o.y; z = o.z; }
};

typedef Unk_ov003_0222426c_V3 V3_f9;

struct Unk_ov003_02224990_V3 {
    s32 x, y, z;
    Unk_ov003_02224990_V3(const Unk_ov003_02224990_V3 &o) { x = o.x; y = o.y; z = o.z; }
    ~Unk_ov003_02224990_V3() {}
};

typedef Unk_ov003_02224990_V3 V3d_f9;

struct Unk_ov003_0222426c_Sub {
    u8 b0, b1, b2, b3;
};

class Unk_ov003_0222426c_Obj;

typedef void (Unk_ov003_0222426c_Obj::*Fn_f9)();

struct Unk_ov003_0222426c_Mp {
    Fn_f9 f;
};

struct Unk_ov003_0222426c_Mp2 {
    Fn_f9 a;
    Fn_f9 b;
};

class Unk_ov003_0222426c_Obj {
public:
    /* 0x000 */ u8 pad_000[0x7e];
    /* 0x07e */ s8 unk_7e;
    /* 0x07f */ u8 pad_07f[0x120 - 0x7f];
    /* 0x120 */ V3_f9 unk_120;
    /* 0x12c */ s32 unk_12c, unk_130, unk_134;
    /* 0x138 */ s16 unk_138;
    /* 0x13a */ u8 pad_13a[2];
    /* 0x13c */ s32 unk_13c;
    /* 0x140 */ u16 unk_140;
    /* 0x142 */ s16 unk_142;
    /* 0x144 */ u8 pad_144[0x19a - 0x144];
    /* 0x19a */ u8 pad_19a[0x1fc - 0x19a];
    /* 0x1fc */ u8 unk_1fc;
    /* 0x1fd */ u8 unk_1fd;
    /* 0x1fe */ u8 unk_1fe;
    /* 0x1ff */ u8 unk_1ff;
    /* 0x200 */ u8 unk_200;
    /* 0x201 */ u8 unk_201;
    /* 0x202 */ u8 pad_202[0x210 - 0x202];
    /* 0x210 */ u8 unk_210;
    /* 0x211 */ u8 pad_211[0x218 - 0x211];
    /* 0x218 */ s32 unk_218, unk_21c, unk_220;
    /* 0x224 */ u8 unk_224;
    /* 0x225 */ u8 pad_225[0x23c - 0x225];
    /* 0x23c */ u8 unk_23c;
    /* 0x23d */ u8 pad_23d[0x248 - 0x23d];
    /* 0x248 */ Unk_ov003_0222426c_Sub unk_248;
};

typedef Unk_ov003_0222426c_Obj Obj_f9;

class Unk_ov003_02224ae0_Ent;

struct Unk_ov003_02224ae0_E {
    /* 0x00 */ u8 pad_00[0x30];
    /* 0x30 */ u8 unk_30;
    /* 0x31 */ u8 pad_31[3];
    /* 0x34 */ V3_f9 unk_34;
    /* 0x40 */ V3_f9 unk_40;
    /* 0x4c */ V3_f9 unk_4c;
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ u8 unk_5c;
    /* 0x5d */ u8 pad_5d[3];
};

typedef Unk_ov003_02224ae0_E E_f9;

class Unk_ov003_02224ae0_St {
public:
    void f();
};

typedef void (Unk_ov003_02224ae0_St::*StFn_f9)(E_f9 *);

struct Unk_ov003_02224ae0_StMp {
    StFn_f9 f;
};



// ---- from file 10
struct Unk_ov003_02224ba4_V3 {
    s32 x, y, z;
};

typedef Unk_ov003_02224ba4_V3 V3_f10;

// polymorphic actor returned by func_020951ec (only the slots used here)
class Unk_ov003_02224bc4_Actor : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual void *vfunc_50();
    virtual BOOL vfunc_54(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c(V3_f10 *out);

    /* 0x50 */ u8 pad_50[0xc];
    /* 0x5c */ V3_f10 unk_5c;
    /* 0x68 */ u8 pad_68[0xb0 - 0x68];
    /* 0xb0 */ u32 unk_b0;
};

static inline BOOL Unk_ov003_02224bc4_Bit(u32 f, u32 m)
{
    if ((f & m) != 0) return TRUE;
    return FALSE;
}


// 0x60-byte entry, table at data_ov003_02257d1c
struct Unk_ov003_02257d1c {
    Unk_ov003_02257d1c();
    ~Unk_ov003_02257d1c();
    u32 unk_00[0x30 / 4];
    u8 unk_30;
    u8 pad_31[3];
    V3_f10 unk_34;
    V3_f10 unk_40;
    V3_f10 unk_4c;
    s32 unk_58;
    u8 unk_5c;
    u8 pad_5d[3];
};

class Unk_020dbe4c {
public:
    Unk_020dbe4c();
    virtual ~Unk_020dbe4c();
    u8 pad_04[0x14];
    u32 unk_18;
    u32 unk_1c;
};

class Unk_ov003_02234a94 : public Unk_020dbe4c {
public:
    virtual ~Unk_ov003_02234a94() {}
};

// ================= canonical classes of the objects built by the static initialiser =================
extern "C" {
void func_020f440c(void *p);
void func_020f43fc(void *p);
void func_0209c370(void *p);
void func_0209c364(void *p);
void _ZN12Unk_02032238C1Ev(void *p);
void _ZN12Unk_02032238D1Ev(void *p);
void _ZN12Unk_020dbd34C1Ev(void *p);
void _ZN12Unk_020dbd34D1Ev(void *p);
void _ZN12Unk_020dbd54C1Ev(void *p);
void _ZN12Unk_020dbd54D1Ev(void *p);
void _ZN12Unk_0209c0acC1Ev(void *p);
void _ZN12Unk_0209c0acD1Ev(void *p);
void _ZN12Unk_0209c0ac13func_0209c0c8Ev(void *p);
}

// empty global object at data_ov003_02257a74 (out-of-line empty constructor and destructor)
class Unk_ov003_02257a74 {
public:
    Unk_ov003_02257a74();
    ~Unk_ov003_02257a74();
};

// members of the 0x13c-byte object at data_ov003_02257be0 (constructors and destructors live in main)
class Unk_0209c364 {
public:
    Unk_0209c364();
    ~Unk_0209c364();
    u8 raw[4];
};

class Unk_0209c0ac {
public:
    Unk_0209c0ac();
    ~Unk_0209c0ac();
    u8 raw[0x50];
};

class Unk_020dbd54 {
public:
    Unk_020dbd54();
    ~Unk_020dbd54();
    u8 raw[0xc4];
};

class Unk_ov003_02257be0 {
public:
    Unk_ov003_02257be0();
    ~Unk_ov003_02257be0();
    u32 unk_00;
    Unk_0209c364 unk_04;
    Unk_0209c0ac unk_08;
    Unk_020dbd54 unk_58;
    Unk_ov003_02234a94 unk_11c;
};

extern "C" {
extern s32 data_020c7c1c;
extern u8 data_020ca314[];
extern u8 data_020ca315[];
extern u8 data_020ca316[];
extern void * data_020cbb18;
extern s16 data_02135f44[];
extern u8 data_0213b91c[];
extern u8 data_0213b954[];
extern u32 data_021c3070;
extern Unk_ov003_02220128_Vec3 data_021c309c;
extern void * data_021c47c4;
extern u8 data_021f4770;
extern u8 data_021f47e0[];
extern void * data_021f482c;
extern u8 data_ov003_02234a74[];
extern u8 data_ov003_02234a80[];
extern u8 data_ov003_02234a94[];

s32 func_02002bdc(void *a, void *b);
void func_02003e70(void *o, s32 a, s32 b, s32 c);
void func_02003e80(void *self, void *v);
s32 func_020309d4(void *a, void *b, void *c, s32 d, s32 e, s32 f, s32 g);
s32 func_020312a8(s32 x, s32 y);
u32 func_020374e8(void *c);
void func_0204ee10(s32 *a, s32 *b, void *c);
void func_0204f4f8(u32 i, s32 a, s32 b, s32 c, s32 d);
void func_02054710(void *o);
void func_02054720(void *o, s32 a, s32 b, s32 c, s32 d, s32 e);
BOOL func_02054800(void *o, void *t);
s32 func_0205f92c(void *p, s32 a);
void func_0205fbbc(void *e, void *o);
void *func_0205ffe4();
u32 func_02063b8c(u32 n);
void *func_020641ec(void *a, void *b, s32 c, s32 d);
void func_02072824(void *g, s32 a, s32 b);
void func_020728a4(void *g, void *buf, s32 n);
void func_020728d4(void *g);
BOOL func_020729cc(void *g, s32 a);
BOOL func_02072e44(void *g);
void func_020902d4(s32 h, void *v, s32 a, s32 b);
void func_020902f8(s32 h);
s32 func_02090330(s32 a, void *v, s32 b, s32 c);
void func_020947c0(u16 *out, s32 a);
void *func_020947f0(s32 a);
void *func_020951ec(s32 n);
void *func_02095204(s32 n);
void func_0209c224(void *p, void *q);
void *func_0209c25c(void *p, void *q);
s32 func_0209c348(void *a);
s64 func_020e9600(void *a, s32 b);
s32 func_020e9650(void *a, void *b);
s32 func_021065dc(s32 a);
s32 func_02133150(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_02003c30(void *p);
void func_02003c40(void *, s32);
void func_02003c70(void *self, Unk_ov003_02221364_Vec *v);
void func_02003cbc(void *self);
s32 func_02003e50(void *p);
void func_02003ecc(void *self);
BOOL func_02030d78(V3_f7 *out, void *pos, s32 ang, s32 a, s32 b, s32 c);
s32 func_020312ec(s32 x, s32 y);
void func_0203239c(void *p);
void func_020323b0(void *p);
void func_02033988(void *o);
void func_020339bc(void *o, void *p, s32 a, s32 b);
s32 func_020375bc(void *c);
void func_0203ee38(V3_f5 *a, V3_f5 *b);
s32 func_0203eeac(V3_f3 *v);
s32 func_020429d0(s32 a, s32 *p, s32 c);
void func_0204ed8c(void *a, s32 x, s32 y);
void func_0204edd8(void *a, void *b);
void func_0204edf8(s32 *a, s32 *b, s32 c, s32 d, s32 e, s32 f);
BOOL func_0204f134(s32 *a, s32 *b, s32 c);
BOOL func_0204f364(void *o, s32 a);
void func_0204f3b4(s32 h);
void func_0204f3e4(s32 h, s32 a, V3_f5 *p, V3_f5 *q, s32 r, s32 s, s32 t, s32 u, s32 v, s32 w);
s32 func_0204f49c();
s32 func_0204f4a4(Unk_ov003_02221364_Vec *v, s32 *p, u8 i);
u32 func_0204f4c8(u8 i);
u32 func_0204f4e0(u8 i);
void func_020546ec(void *p);
s32 func_020547cc(void *p, V3_f3 *v);
s32 func_020547e4(void *p);
void func_020548a0(void *p);
void func_020548d0(void *p);
void func_02054b14(void *p);
BOOL func_02054c2c(void *a, s32 b, void *c);
void func_02054e24(void *p);
void func_02054e3c(void *p);
void *func_020554c0(void *a);
void func_020555ec(void *a, void *b, s32 c);
void func_02055a9c(void *a, void *b);
void func_02055b38(void *a, s32 b, s32 c, s32 d, s32 e);
BOOL func_02055bcc(void *a, void *b, void *c);
void func_02055c38(void *p);
void func_02055cac(void *p);
BOOL func_020565e8(void *o, s32 a);
s32 func_020566bc(void *p);
void func_0205bfd0();
void func_0205bfec();
void func_0205c004();
void func_0205c020();
BOOL func_0205f1e8(V3_f5 *a, s32 b, s32 *c, s32 *d, s32 e);
void func_0205f284(V3_f5 *a, V3_f5 *b, s32 *c, s32 *d, s32 e);
void func_0205fb40(void *);
void func_02076a6c(void *, s32, s32);
void func_020944f8(T48_f5 *out, u32 a);
void *func_0209c0ac(void *a);
void func_0209c0b4(void *p);
void func_0209c0c8(void *p);
BOOL func_0209c0d0(void *a, void *b, void *c);
void func_0209c128(void *p);
void func_0209c140(void *p);
s32 func_0209c15c(void *p);
void func_0209c1a4(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, void *f);
void func_0209c364(void *p);
void func_0209c370(void *p);
s32 func_020b8fe8();
BOOL func_020e7500(void *a);
s32 func_020e780c(s32, s32);
s32 func_020e7b98(s32 x, s32 z);
s32 func_020e8388(void *m, s32 x, s32 y, s32 z);
s32 func_020e8404(void *m, s32 a);
s32 func_020e8434(void *m, s32 a);
s32 func_020e8558(s32 a);
void func_020f43fc(void *p);
void func_020f440c(void *p);
s32 func_021065f8(s32 a, s32 b);
s32 func_02106654();
s32 func_02106670(s32 a, s32 b);
s32 func_02116048(const void *src, void *dst, u32 n);
void func_021355f0(void *p, u32 n, u32 size, void *dtor);
void func_ov003_02212034(T48_f5 *t, V3_f5 *d);
s32 func_ov003_02212824(s32 a);
void func_ov003_0221cfdc(s32 o, V3_f9 *a, V3_f9 *b, s32 c, s16 d, s16 e);

// own functions
BOOL func_ov003_02220030(u8 *self, void *a);
u8 *func_ov003_02220004(s32 i);
s32 func_ov003_0221ffe8(s32 id);
BOOL func_ov003_0221ffb8(u32 *out, s32 id);
void func_ov003_022209ec(s32 *p, s32 b);
BOOL func_ov003_022209c8(s32 idx);
BOOL func_ov003_02220994(void *self, s32 b, s32 idx);
BOOL func_ov003_02220844(void *self, Unk_ov003_02220844_Obj *e, s32 flag);
BOOL func_ov003_0222069c(void *self, u8 *out, s32 *cnt, s32 mode);
BOOL func_ov003_02220460(void *self, s32 *ox, s32 *oz, s32 *a3, s32 *a4, s32 mode, s32 flag, Unk_ov003_02220844_Obj *e);
BOOL func_ov003_022203f8(void *self, Unk_ov003_02220844_Obj *e, s32 id);
BOOL func_ov003_022203e0(void *self);
void func_ov003_02220388(Unk_ov003_02220844_Obj *self);
BOOL func_ov003_0222034c(s32 *a, s32 *b, s32 c, s32 d, s32 e);
BOOL func_ov003_0222031c(s32 *a, s32 *b, s32 *c);
BOOL func_ov003_02220300(s32 a, s32 b, s32 c);
s32 func_ov003_022202ec(s32 a, u16 b);
s32 func_ov003_022202cc(s32 a, u16 b);
BOOL func_ov003_02220290(Unk_ov003_02220128_Vec3 *out, s32 idx);
BOOL func_ov003_022201bc(s32 idx, u16 id0, Unk_ov003_02220128_Vec3 *pos);
void func_ov003_022201ac(u8 *self, s32 v);
BOOL func_ov003_02220128(u8 *self, void *p, s32 q);
void func_ov003_02221294(O_f3 *o, E_f3 *e);
void func_ov003_02221290(void);
void func_ov003_022211fc(O_f3 *o, E_f3 *e, s32 idx);
void func_ov003_022211f8(void);
void func_ov003_02221134(O_f3 *o, E_f3 *e, s32 x);
void func_ov003_022210a4(O_f3 *o, E_f3 *e);
void func_ov003_0222105c(O_f3 *a, void *b, void *dstv, s32 ang);
BOOL func_ov003_0222101c(O_f3 *o);
void func_ov003_02220fc8(O_f3 *o);
BOOL func_ov003_02220eec(void);
BOOL func_ov003_02220ed0(O_f3 *o);
void func_ov003_02220e58(O_f3 *o);
void func_ov003_02220e2c(s32 a);
void func_ov003_02220e10(s32 a);
BOOL func_ov003_02220db0(s32 a, s32 b);
void func_ov003_02220d94(O_f3 *o, E_f3 *e, s32 idx);
void func_ov003_02220d30(O_f3 *o, E_f3 *e, s32 idx);
BOOL func_ov003_02220cf8(s32 a, E_f3 *e);
BOOL func_ov003_02220c98(s32 a, s32 b, E_f3 *e);
BOOL func_ov003_02220c68(E_f3 *e, s32 a);
BOOL func_ov003_02220b00(E_f3 *e, s32 a);
void func_ov003_02220a2c(O_f3 *o, E_f3 *e, s32 idx);
void func_ov003_02221bfc(void *a);
void func_ov003_02221b94(void *a, s32 idx);
BOOL func_ov003_02221b78(void *a, u8 idx);
BOOL func_ov003_02221b34(void *a, u8 idx, u32 v, Unk_ov003_02221364_Vec *p);
BOOL func_ov003_02221ab0(void *a, u8 idx);
u8 *func_ov003_022219dc(u8 *a);
u8 *func_ov003_02221998(u8 *a);
u8 *func_ov003_02221980(u8 *a);
u8 *func_ov003_0222193c(u8 *a);
u8 *func_ov003_02221904(u8 *a);
void func_ov003_022218f8(u8 *p);
void func_ov003_022218f4(void *p);
Unk_ov003_02221ab0_Ent *func_ov003_02221884(Unk_ov003_02221ab0_Ent *a);
u8 *func_ov003_02221874(u8 *a);
BOOL func_ov003_022217ac(void *a, s32 idx);
void func_ov003_022216f8(void *a, s32 idx);
BOOL func_ov003_022216cc(u8 *a);
void func_ov003_02221684(u8 *a);
BOOL func_ov003_02221524(u8 *a);
void func_ov003_02221498(void *a, u8 *b, void *c);
void func_ov003_0222144c(void *a, s32 idx, u8 *b, void *c);
void func_ov003_02221448();
void func_ov003_022213d0(u8 *a, u8 *b, s32 c);
void func_ov003_022213cc();
void func_ov003_02221364(u8 *a, u8 *b, s32 c);
void func_ov003_02221360();
BOOL func_ov003_022225b4(Self_f5 *self, u32 a);
BOOL func_ov003_02222504(Self_f5 *self, u32 a);
BOOL func_ov003_02222490(Self_f5 *self, u32 a);
BOOL func_ov003_022223e8(Self_f5 *self, u32 a);
BOOL func_ov003_02222368(Self_f5 *self, u32 a);
BOOL func_ov003_022222a0(Self_f5 *self, u32 a);
BOOL func_ov003_02222274(Self_f5 *self, s32 a);
BOOL func_ov003_02222224(Self_f5 *self);
void func_ov003_022221a0(Self_f5 *self, s32 a);
s32 func_ov003_02221f40(Self_f5 *self, s32 a);
void func_ov003_02221e64(Self_f5 *self, BOOL flag);
BOOL func_ov003_02221dd8(V3_f5 *p, V3_f5 *a, V3_f5 *b, s32 n, s32 k, s32 m);
BOOL func_ov003_02221d60(Self_f5 *self, V3_f5 *p);
void func_ov003_02221cec(Self_f5 *self, Ent_f5 *ent, V3_f5 *out);
BOOL func_ov003_02222f28(void *self, s32 a1, s32 a2, s32 a3);
void func_ov003_02222f1c();
BOOL func_ov003_02222f08();
void func_ov003_02222ef4();
BOOL func_ov003_02222d9c(Obj_f6 *self, u32 k);
BOOL func_ov003_02222d48(Obj_f6 *self);
s32 func_ov003_02222d28(Obj_f6 *self);
BOOL func_ov003_02222ce0(Obj_f6 *self);
s32 func_ov003_02222b1c(Obj_f6 *self);
BOOL func_ov003_02222a38(Obj_f6 *self);
void func_ov003_022228dc(Obj_f6 *self, s32 *o1, s32 *o2, s32 *o3);
void func_ov003_022228b0(Sub_f6 *s, Obj_f6 *o);
void func_ov003_0222285c(Sub_f6 *s, Obj_f6 *o);
void func_ov003_022227dc(Sub_f6 *s, Obj_f6 *o);
void func_ov003_02222770(Sub_f6 *s, Obj_f6 *o);
s32 func_ov003_02222764(Sub_f6 *s);
s32 func_ov003_02222754(Obj_f6 *self);
void func_ov003_02222658(Obj_f6 *self, void *arg);
s32 func_ov003_02222654();
BOOL func_ov003_022237dc(Obj_f7 *o);
BOOL func_ov003_02223730(Obj_f7 *o);
void func_ov003_022236dc(Obj_f7 *o);
BOOL func_ov003_02223554(Obj_f7 *o);
s32 func_ov003_022234fc(Obj_f7 *o);
BOOL func_ov003_022234c4(Obj_f7 *o);
BOOL func_ov003_02223498(Obj_f7 *o);
void func_ov003_02223450(V3_f7 *out, s32 idx);
BOOL func_ov003_02223400(Obj_f7 *o, V3_f7 *a, V3_f7 *b);
BOOL func_ov003_02223310(s32 idx, s32 flag);
BOOL func_ov003_022232e8(s32 idx);
V3_f7 *func_ov003_022232c8(s32 idx);
BOOL func_ov003_02223258(s32 idx);
BOOL func_ov003_0222323c(Rec_f7 *self, u32 a);
void func_ov003_0222316c(Rec_f7 *self, s32 a, s32 t);
BOOL func_ov003_02223134(Obj_f7 *self);
BOOL func_ov003_02222fe4(Obj_f7 *self);
void func_ov003_02224148(Obj_f8 *self);
void func_ov003_02224144();
void func_ov003_022240f4(Obj_f8 *self);
s32 func_ov003_022240d4(Obj_f8 *self);
s32 func_ov003_02223f78(Obj_f8 *self);
s32 func_ov003_02223dd8(Obj_f8 *self);
s32 func_ov003_02223b64(Obj_f8 *self);
s32 func_ov003_02223924(Obj_f8 *self);
s32 func_ov003_02224b6c(s32 i);
s32 func_ov003_02224b1c(E_f9 *e);
void func_ov003_02224ae0(Unk_ov003_02224ae0_St *self, E_f9 *e);
void func_ov003_02224adc();
void func_ov003_02224990(void *self, E_f9 *e);
void func_ov003_0222489c(void *self, E_f9 *e);
void func_ov003_02224874(s32 *p, s32 a, s32 ang);
void func_ov003_02224848(s32 *p, s32 a, s32 ang);
void func_ov003_02224828(s32 *p, s32 a, s32 ang);
void func_ov003_022247f0(Obj_f9 *o);
void func_ov003_022247b8(Obj_f9 *o);
void func_ov003_022246f0(Obj_f9 *o);
void func_ov003_022244bc(Obj_f9 *o);
void func_ov003_0222443c(Obj_f9 *o);
void func_ov003_02224364(Obj_f9 *o);
void func_ov003_02224310(Obj_f9 *o);
void func_ov003_022242ac(Obj_f9 *o);
void func_ov003_0222426c(Obj_f9 *o);
void func_ov003_02224e44();
void func_ov003_02224e24();
void func_ov003_02224e04();
void func_ov003_02224dcc();
void func_ov003_02224dc8();
void func_ov003_02224dc4();
Unk_ov003_02257d1c *func_ov003_02224d90(Unk_ov003_02257d1c *p);
void *func_ov003_02224d80(void *p);
void func_ov003_02224d58(V3_f10 *v, s32 i);
BOOL func_ov003_02224d14(s32 i);
s32 func_ov003_02224bc4(s32 i);
V3_f10 *func_ov003_02224ba4(s32 i);
}

// ================= TU23 data definitions: types =================
struct Unk_ov003_02234780_Rec {
    u8 b[4];
    s32 v;
};

struct Unk_ov003_022348c0_Ent {
    u8 *p;
    void *q;
};

struct Unk_ov003_022349d4_Rec {
    u8 a0, a1, a2, a3;
    u8 b0, b1, b2, b3;
    u16 c0;
    u16 c1;
    u16 d;
    u8 e, f;
    u16 g;
    u16 h;
};

struct Unk_ov003_02234860_Ent {
    void *factory;
    u16 a;
    u16 b;
};

// ================= objects defined by this unit, in creation order (see notes) =================
extern "C" {
Unk_ov003_0225812c data_ov003_0225812c[6];
Unk_ov003_02257be0 data_ov003_02257be0;
Unk_ov003_02221ab0_Ent data_ov003_02257e9c[4];
void *data_ov003_02257a7c = (void *)data_021c47c4;
Unk_ov003_02257a74 data_ov003_02257a74;
Unk_ov003_02257d1c data_ov003_02257d1c[4];
extern void *data_ov003_022348a0[2];
extern void *data_ov003_02234868[2];
extern void *data_ov003_022348a8[2];
Unk_ov003_02224ae0_StMp data_ov003_02257ac0[3] = {
    {*(StFn_f9 *)data_ov003_022348a0},
    {*(StFn_f9 *)data_ov003_02234868},
    {*(StFn_f9 *)data_ov003_022348a8},
};
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
extern u8 data_ov003_022348b0[16];
Unk_ov003_022349d4_Rec data_ov003_022349d4[8] = {
    {0x3c, 0x40, 0xa, 0x14, 0x28, 0x64, 0x14, 0xa, 0x5, 0x3e, 0x5d, data_ov003_022348b0[0], data_ov003_022348b0[1], 0xdc, 0x8c},
    {0x3c, 0x42, 0xf, 0x1e, 0x28, 0x64, 0x14, 0xa, 0x5, 0x48, 0x69, data_ov003_022348b0[2], data_ov003_022348b0[3], 0xe6, 0x82},
    {0x46, 0x48, 0x14, 0x28, 0x28, 0x64, 0x14, 0xa, 0x5, 0x50, 0x85, data_ov003_022348b0[4], data_ov003_022348b0[5], 0xf0, 0x82},
    {0x55, 0x56, 0x19, 0x32, 0x28, 0x64, 0x14, 0xa, 0x5, 0x55, 0x96, data_ov003_022348b0[6], data_ov003_022348b0[7], 0xff, 0x78},
    {0x6e, 0x70, 0x1e, 0x3c, 0x28, 0x64, 0x14, 0xa, 0x5, 0x5c, 0xb7, data_ov003_022348b0[8], data_ov003_022348b0[9], 0x109, 0x78},
    {0x7d, 0x80, 0x23, 0x46, 0x28, 0x64, 0x14, 0xa, 0x5, 0x64, 0xc3, data_ov003_022348b0[10], data_ov003_022348b0[11], 0x113, 0x78},
    {0x96, 0x9a, 0x28, 0x50, 0x28, 0x64, 0x14, 0xa, 0x5, 0x6e, 0xd5, data_ov003_022348b0[12], data_ov003_022348b0[13], 0x11d, 0x78},
    {0x55, 0x56, 0x19, 0x32, 0x28, 0x64, 0x14, 0xa, 0x5, 0x5d, 0x9b, data_ov003_022348b0[14], data_ov003_022348b0[15], 0xff, 0x78},
};
extern void *data_ov003_022347b0[2];
extern void *data_ov003_02234890[2];
extern void *data_ov003_02234888[2];
extern void *data_ov003_02234880[2];
extern void *data_ov003_02234878[2];
Unk_ov003_02222658_Mp data_ov003_02257af8[5] = {
    {*(Fn_f6 *)data_ov003_022347b0},
    {*(Fn_f6 *)data_ov003_02234890},
    {*(Fn_f6 *)data_ov003_02234888},
    {*(Fn_f6 *)data_ov003_02234880},
    {*(Fn_f6 *)data_ov003_02234878},
};
extern char data_ov003_02234968[];
char *data_ov003_0223476c = data_ov003_02234968;
extern char data_ov003_02234930[];
char *data_ov003_0223477c = data_ov003_02234930;
void *data_ov003_02234820[2] = {(void *)func_ov003_022240d4, 0};
void *data_ov003_022347b0[2] = {(void *)func_ov003_02222654, 0};
extern void *data_ov003_02234838[2];
extern void *data_ov003_02234840[2];
extern void *data_ov003_02234808[2];
extern void *data_ov003_02234800[2];
Unk_ov003_0222426c_Mp2 data_ov003_02257ad8[2] = {
    {*(Fn_f9 *)data_ov003_02234838, *(Fn_f9 *)data_ov003_02234840},
    {*(Fn_f9 *)data_ov003_02234808, *(Fn_f9 *)data_ov003_02234800},
};
s32 data_ov003_02234768 = 0x11f;
extern void *data_ov003_022347f0[2];
extern void *data_ov003_022347e8[2];
extern void *data_ov003_022347e0[2];
extern void *data_ov003_022347b8[2];
extern void *data_ov003_022347c8[2];
extern void *data_ov003_022347d0[2];
Unk_ov003_0222426c_Mp data_ov003_02257b20[6] = {
    {*(Fn_f9 *)data_ov003_022347f0},
    {*(Fn_f9 *)data_ov003_022347e8},
    {*(Fn_f9 *)data_ov003_022347e0},
    {*(Fn_f9 *)data_ov003_022347b8},
    {*(Fn_f9 *)data_ov003_022347c8},
    {*(Fn_f9 *)data_ov003_022347d0},
};
void *data_ov003_02234830[2] = {(void *)func_ov003_02223f78, 0};
void *data_ov003_02234838[2] = {(void *)func_ov003_022246f0, 0};
void *data_ov003_02234898[2] = {(void *)func_ov003_02223924, 0};
void *data_ov003_022348a0[2] = {(void *)func_ov003_02224adc, 0};
void *data_ov003_022348a8[2] = {(void *)func_ov003_0222489c, 0};
extern void *data_ov003_02234858[2];
extern void *data_ov003_022347a0[2];
extern void *data_ov003_02234810[2];
extern void *data_ov003_022347f8[2];
Unk_ov003_02223924_Mp data_ov003_02257b50[8] = {
    {*(Fn_f8 *)data_ov003_02234820},
    {*(Fn_f8 *)data_ov003_02234830},
    {*(Fn_f8 *)data_ov003_02234858},
    {*(Fn_f8 *)data_ov003_022347a0},
    {*(Fn_f8 *)data_ov003_02234898},
    {*(Fn_f8 *)data_ov003_02234810},
    {*(Fn_f8 *)data_ov003_022347f8},
};
void *data_ov003_022347a0[2] = {(void *)func_ov003_02223b64, 0};
s32 data_ov003_02234764 = 0x14;
void *data_ov003_02234888[2] = {(void *)func_ov003_02222490, 0};
char data_ov003_02234968[] = "/fish/03/fish_shadow.nsbca";
extern u16 data_ov003_022348d0[10];
extern Unk_ov003_02234780_Rec data_ov003_02234788;
extern u16 data_ov003_022348e4[10];
extern Unk_ov003_02234780_Rec data_ov003_02234780;
Unk_ov003_022348c0_Ent data_ov003_022348c0[2] = {
    {(u8 *)data_ov003_022348d0, (void *)&data_ov003_02234788},
    {(u8 *)data_ov003_022348e4, (void *)&data_ov003_02234780},
};
void *data_ov003_02234870[2] = {(void *)func_ov003_022213cc, 0};
void *data_ov003_022347c8[2] = {(void *)func_ov003_0222426c, 0};
Unk_ov003_02234860_Ent data_ov003_02234860 = {(void *)func_ov003_02224dcc, 0xc1, 7};
void *data_ov003_02234858[2] = {(void *)func_ov003_02223dd8, 0};
void *data_ov003_02234850[2] = {(void *)func_ov003_022211f8, 0};
char data_ov003_02234914[] = "/fish/03/fish_hire.nsbca";
u16 data_ov003_022348e4[10] = {0x16, 0x2000, 0x16, 0x2aa8, 0x1a, 0x3556, 0x1e, 0x4000, 0x22, 0x5550};
void *data_ov003_02234798[2] = {(void *)func_ov003_022211fc, 0};
void *data_ov003_022347b8[2] = {(void *)func_ov003_022242ac, 0};
Unk_ov003_02234780_Rec data_ov003_02234780 = {{9, 0xb, 0xd, 0x11}, 0x2a};
Unk_ov003_02234780_Rec data_ov003_02234788 = {{8, 0xa, 0xb, 0xe}, 0x20};
u16 data_ov003_02257a78;
char data_ov003_0223494c[] = "/fish/03/fish_shadow.nsbmd";
void *data_ov003_02234790[2] = {(void *)func_ov003_02221294, 0};
void *data_ov003_02234800[2] = {(void *)func_ov003_022240f4, 0};
void *data_ov003_022347f8[2] = {(void *)func_ov003_02223730, 0};
void *data_ov003_02234890[2] = {(void *)func_ov003_022225b4, 0};
void *data_ov003_022347e8[2] = {(void *)func_ov003_02224364, 0};
void *data_ov003_022347e0[2] = {(void *)func_ov003_02224310, 0};
void *data_ov003_022347d8[2] = {(void *)func_ov003_022213d0, 0};
void *data_ov003_022347d0[2] = {(void *)func_ov003_02224148, 0};
void *data_ov003_02234880[2] = {(void *)func_ov003_022223e8, 0};
s32 data_ov003_02257a80;
void *data_ov003_02234808[2] = {(void *)func_ov003_02224144, 0};
char *data_ov003_02234774 = data_ov003_02234914;
char data_ov003_02234930[] = "/fish/03/fish_hire.nsbta";
void *data_ov003_02234828[2] = {(void *)func_ov003_02221360, 0};
void *data_ov003_022347a8[2] = {(void *)func_ov003_02221364, 0};
void *data_ov003_022347c0[2] = {(void *)func_ov003_02221448, 0};
char *data_ov003_02234778 = data_ov003_0223494c;
void *data_ov003_022347f0[2] = {(void *)func_ov003_0222443c, 0};
u16 data_ov003_022348d0[10] = {0x14, 0x1554, 0x14, 0x1c72, 0x16, 0x238e, 0x19, 0x2aa8, 0x1e, 0x4000};
char data_ov003_022348f8[] = "/fish/03/fish_hire.nsbmd";
void *data_ov003_02234818[2] = {(void *)func_ov003_02221134, 0};
void *data_ov003_02234848[2] = {(void *)func_ov003_02221290, 0};
Unk_ov003_0222144c_Ent data_ov003_02257b90[5] = {
    {*(Unk_ov003_0222144c_Fn_f4 *)data_ov003_022347c0, *(Unk_ov003_0222144c_Fn_f4 *)data_ov003_022347d8},
    {*(Unk_ov003_0222144c_Fn_f4 *)data_ov003_02234870, *(Unk_ov003_0222144c_Fn_f4 *)data_ov003_022347a8},
    {*(Unk_ov003_0222144c_Fn_f4 *)data_ov003_02234828, *(Unk_ov003_0222144c_Fn_f4 *)data_ov003_02234790},
    {*(Unk_ov003_0222144c_Fn_f4 *)data_ov003_02234850, *(Unk_ov003_0222144c_Fn_f4 *)data_ov003_02234818},
    {*(Unk_ov003_0222144c_Fn_f4 *)data_ov003_02234848, *(Unk_ov003_0222144c_Fn_f4 *)data_ov003_02234798},
};
char *data_ov003_02234770 = data_ov003_022348f8;
u8 data_ov003_022348b0[16] = {0x1b, 0x21, 0x25, 0x35, 0x2f, 0x41, 0x39, 0x55, 0x3e, 0x5f, 0x48, 0x6b, 0x5e, 0x87, 0x23, 0x55};
void *data_ov003_02234878[2] = {(void *)func_ov003_02222274, 0};
void *data_ov003_02234840[2] = {(void *)func_ov003_022244bc, 0};
void *data_ov003_02234810[2] = {(void *)func_ov003_022237dc, 0};
void *data_ov003_02234868[2] = {(void *)func_ov003_02224990, 0};
}

//@ 0x2224dcc
extern "C" void func_ov003_02224dcc()
{
    new Unk_ov003_0223498c;
}


//@ 0x2224dc8
Unk_ov003_02257a74::Unk_ov003_02257a74() {}


//@ 0x2224dc4
Unk_ov003_02257a74::~Unk_ov003_02257a74() {}


//@ 0x2224d90
Unk_ov003_02257d1c::Unk_ov003_02257d1c()
{
    Unk_ov003_02257d1c *p = this;
    _ZN12Unk_02032238C1Ev(p);
    p->unk_30 = 0;
    p->unk_34.x = 0x1000;
    p->unk_34.y = 0x1000;
    p->unk_34.z = 0x1000;
    p->unk_40.x = 0x1000;
    p->unk_40.y = 0x1000;
    p->unk_40.z = 0x1000;
    p->unk_4c.x = 0x1000;
    p->unk_4c.y = 0x1000;
    p->unk_4c.z = 0x1000;
    p->unk_58 = 0;
}


//@ 0x2224d80
Unk_ov003_02257d1c::~Unk_ov003_02257d1c()
{
    _ZN12Unk_02032238D1Ev(this);
}


//@ 0x2224d58
extern "C" void func_ov003_02224d58(V3_f10 *v, s32 i)
{
    if (i >= 0 && i < 4) {
        Unk_ov003_02257d1c *e = &data_ov003_02257d1c[i];
        V3_f10 *pv = &e->unk_4c;
        pv->x = v->x;
        pv->y = v->y;
        pv->z = v->z;
    }
}


//@ 0x2224d14
extern "C" BOOL func_ov003_02224d14(s32 i)
{
    if (i < 0 || i >= 4) {
        return FALSE;
    }
    Unk_ov003_02257d1c *e = &data_ov003_02257d1c[i];
    u32 st = e->unk_30;
    if (st == 0) goto zero;
    if (st == 2) {
        if (e->unk_58 > 0x64) goto zero;
    }
    if (((s32 (*)(Unk_ov003_02257d1c *))func_ov003_02224b1c)(e) == 0) goto one;
zero:
    return FALSE;
one:
    return TRUE;
}


//@ 0x2224bc4
extern "C" s32 func_ov003_02224bc4(s32 i)
{
    Unk_ov003_02257d1c *e;
    Unk_ov003_02224bc4_Actor *p;
    void *s;
    V3_f10 t;
    if (i < 0 || i >= 4) {
        return 0;
    }
    e = &data_ov003_02257d1c[i];
    if (e->unk_30 != 0) {
        return 1;
    }
    p = ((Unk_ov003_02224bc4_Actor * (*)(s32))func_020951ec)(i);
    if (p == 0) {
        return 0;
    }
    s = data_020cbb18;
    if (func_02072e44(s)) {
        if (func_020729cc(s, i)) {
            e->unk_5c = 1;
        } else {
            e->unk_5c = 0;
        }
        u32 f = p->unk_b0;
        if (Unk_ov003_02224bc4_Bit(f, 4) && Unk_ov003_02224bc4_Bit(f, 2)) {
            { V3_f10 *ps = &p->unk_5c; V3_f10 *pd = &e->unk_40; pd->x = ps->x; pd->y = ps->y; pd->z = ps->z; }
        } else if (p->vfunc_5c(&t)) {
            { V3_f10 *pd = &e->unk_40; pd->x = t.x; pd->y = t.y; pd->z = t.z; }
        } else {
            { V3_f10 *ps = &p->unk_5c; V3_f10 *pd = &e->unk_40; pd->x = ps->x; pd->y = ps->y; pd->z = ps->z; }
        }
    } else {
        e->unk_5c = 1;
        if (p->vfunc_5c(&t)) {
            { V3_f10 *pd = &e->unk_40; pd->x = t.x; pd->y = t.y; pd->z = t.z; }
        } else {
            { V3_f10 *ps = &p->unk_5c; V3_f10 *pd = &e->unk_40; pd->x = ps->x; pd->y = ps->y; pd->z = ps->z; }
        }
    }
    e->unk_30 = 1;
    { V3_f10 *pd = &e->unk_34; pd->x = t.x; pd->y = t.y; pd->z = t.z; }
    e->unk_58 = 0;
    e->unk_4c.y = -0x3800;
    return 2;
}


//@ 0x2224ba4
extern "C" V3_f10 *func_ov003_02224ba4(s32 i)
{
    if (i < 0 || i >= 4) {
        return &(*(V3_f10 *)((u8 *)&data_ov003_02257d1c[0].unk_34));
    }
    return &data_ov003_02257d1c[i].unk_34;
}


//@ 0x2224b6c
extern "C" s32 func_ov003_02224b6c(s32 i)
{
    s32 r = 0;
    if (i < 0 || i >= 4) {
        return 0;
    }
    E_f9 *e = &((E_f9 *)(data_ov003_02257d1c))[i];
    if (e->unk_30 == 1) {
        if (e->unk_58 == 0) {
            r = 1;
        } else if (e->unk_58 == 0xf) {
            r = 2;
        }
    }
    return r;
}


//@ 0x2224b1c
extern "C" s32 func_ov003_02224b1c(E_f9 *e)
{
    s32 r = 0;
    if (data_021c3070 == 0) {
        return 1;
    }
    V3_f9 v = (*(V3_f9 *)&data_021c309c);
    if (((s32 (*)(V3_f9 *, V3_f9 *, s32, s32, s32))func_ov003_0222034c)(&e->unk_34, &v, 0x8000, 0x6000, 0x6000) == 0) {
        r = 1;
    }
    return r;
}


//@ 0x2224ae0
extern "C" void func_ov003_02224ae0(Unk_ov003_02224ae0_St *self, E_f9 *e)
{
    if (data_ov003_02257ac0[e->unk_30].f) {
        (self->*data_ov003_02257ac0[e->unk_30].f)(e);
    }
}


//@ 0x2224adc
extern "C" void func_ov003_02224adc()
{
}


//@ 0x2224990
extern "C" void func_ov003_02224990(void *self, E_f9 *e)
{
    V3_f9 *pos = &e->unk_34;
    s32 *cnt = &e->unk_58;
    V3d_f9 *pa = (V3d_f9 *)&e->unk_40;
    V3d_f9 a(*pa);
    V3d_f9 *pb = (V3d_f9 *)&e->unk_4c;
    V3d_f9 b(*pb);
    V3_f9 c30(*pos);
    V3_f9 c3c(*(V3_f9 *)&a);
    V3_f9 c48(*(V3_f9 *)&b);
    if (((s32 (*)(V3_f9 *, V3_f9 *, V3_f9 *))func_ov003_0222031c)(&c30, &c3c, &c48) != 0) {
        e->unk_30 = 2;
        *cnt = 0;
        if (e->unk_5c != 0) {
            ((void (*)(void *, s32))func_ov003_02220db0)(pos, 0x2800);
        }
    } else {
        V3_f9 x1(*(V3_f9 *)&a);
        V3_f9 x2(*(V3_f9 *)&b);
        s32 ok = ((s32 (*)(V3_f9 *, V3_f9 *, V3_f9 *, s32, s32, s32))func_ov003_02221dd8)(pos, &x1, &x2, *cnt, 0x14cd, 0xf) == 0 ? 1 : 0;
        if (ok != 0) {
            e->unk_30 = 2;
            *cnt = 0;
            if (e->unk_5c != 0) {
                ((void (*)(void *, s32))func_ov003_02220db0)(pos, 0x2800);
            }
        }
        s32 t = (*cnt * 0x199a) >> 5;
        if (t > 0x199a) t = 0x199a;
        ((void (*)(void *, void *, void *, s32, s32, s32, s32))func_020309d4)(e, pos, pos, func_02002bdc(&e->unk_4c, &e->unk_40), t, 0, 0xb);
        V3_f9 t6c(*pos);
        V3_f9 b78(0x1000, 0x1000, 0x1000);
        func_ov003_0221cfdc(0x1520, &t6c, &b78, 0, 0, 0);
        *cnt = *cnt + 1;
    }
}


//@ 0x222489c
extern "C" void func_ov003_0222489c(void *self, E_f9 *e)
{
    V3_f9 *pos = &e->unk_34;
    s32 *cnt = &e->unk_58;
    V3_f9 a1, b, a2;
    s32 t;
    if (e->unk_58 < 0x64) {
        a1.x = pos->x;
        a1.y = pos->y;
        a1.z = pos->z;
        b.x = 0x1000;
        b.y = 0x1000;
        b.z = 0x1000;
        func_ov003_0221cfdc(0x1520, &a1, &b, 0, 0, 0);
        if (func_ov003_02224b1c(e) != 0) {
            *cnt = 0x64;
        }
    } else if ((e->unk_58 & 1) != 0) {
        a2.x = pos->x;
        a2.y = pos->y;
        a2.z = pos->z;
        b.x = 0x1000;
        b.y = 0x1000;
        b.z = 0x1000;
        func_ov003_0221cfdc(0x1520, &a2, &b, 0, 0, 0);
    }
    ((void (*)(void *, s32))func_ov003_022209ec)(pos, data_ov003_02234768);
    pos->y = pos->y - data_ov003_02234764;
    t = (*cnt * 0x199a) >> 5;
    if (t > 0x199a) t = 0x199a;
    ((void (*)(void *, void *, void *, s32, s32, s32, s32))func_020309d4)(e, pos, pos, func_02002bdc(&e->unk_4c, &e->unk_40), t, 0, 0xb);
    *cnt = *cnt + 1;
    if (*cnt >= 0x78) {
        e->unk_30 = 0;
        V3_f9 *v = &e->unk_4c;
        e->unk_4c.x = 0x1000;
        v->y = 0x1000;
        v->z = 0x1000;
    }
}


//@ 0x2224874
extern "C" void func_ov003_02224874(s32 *p, s32 a, s32 ang)
{
    *p += func_01ffcb0c(a, data_02135f44[((u16)ang >> 4) * 2]);
}


//@ 0x2224848
extern "C" void func_ov003_02224848(s32 *p, s32 a, s32 ang)
{
    *p += func_01ffcb0c(a, data_02135f44[((u16)ang >> 4) * 2 + 1]);
}


//@ 0x2224828
extern "C" void func_ov003_02224828(s32 *p, s32 a, s32 ang)
{
    func_ov003_02224874(p, a, ang);
    func_ov003_02224848(p + 2, a, ang);
}


//@ 0x22247f0
extern "C" void func_ov003_022247f0(Obj_f9 *o)
{
    (o->*data_ov003_02257ad8[o->unk_23c].a)();
}


//@ 0x22247b8
extern "C" void func_ov003_022247b8(Obj_f9 *o)
{
    (o->*data_ov003_02257ad8[o->unk_23c].b)();
}


//@ 0x22246f0
extern "C" void func_ov003_022246f0(Obj_f9 *o)
{
    s32 r;
    o->unk_120.x = o->unk_12c;
    o->unk_120.y = o->unk_130;
    o->unk_120.z = o->unk_134;
    (o->*data_ov003_02257b20[o->unk_200].f)();
    r = ((s32 (*)(void *))func_ov003_02222b1c)(o);
    if (r != 0 && r != 5) {
        if (o->unk_1fc == 0) {
            o->unk_138 = o->unk_138 + 0x2aa8;
        } else {
            o->unk_138 = func_ov003_022202cc(0, 0xaaa);
        }
        o->unk_201 = 0;
    } else {
        o->unk_201 = o->unk_201 + 1;
    }
    o->unk_13c = o->unk_13c + 2;
}


//@ 0x22244bc
extern "C" void func_ov003_022244bc(Obj_f9 *o)
{
    s32 r;
    s32 x, y;
    if (o->unk_7e == 0xb) {
        ((void (*)(void *, void *))func_ov003_022228b0)(&o->unk_248, o);
    }
    (o->*data_ov003_02257b20[o->unk_200].f)();
    if (o->unk_200 == 5) {
        r = 0;
    } else {
        r = ((s32 (*)(void *))func_ov003_02222b1c)(o);
    }
    switch (r) {
    case 0:
        o->unk_201 = 0;
        break;
    case 1:
    case 3:
        if (o->unk_210 != 0) {
            o->unk_138 = o->unk_138 + 0x222;
        } else {
            o->unk_138 = o->unk_138 - 0x222;
        }
        break;
    case 2:
    case 4:
        if (o->unk_200 == 1) {
            if (o->unk_210 != 0) {
                o->unk_138 = o->unk_138 + 0x222;
            } else {
                o->unk_138 = o->unk_138 - 0x222;
            }
        }
        break;
    case 6:
        if (o->unk_200 != 4) {
            s32 t = *(volatile s16 *)&o->unk_138;
            if (t < 0x3556 || t > 0x4aaa) {
                o->unk_138 = o->unk_138 - 0x555;
            }
        }
        break;
    case 7:
        if (o->unk_200 != 4) {
            s32 t = *(volatile s16 *)&o->unk_138;
            if (t > -0x3556 || t < -0x4aaa) {
                o->unk_138 = o->unk_138 + 0x555;
            }
        }
        break;
    case 5:
        if ((u8)(o->unk_200 + 0xff) <= 1) {
            s32 t = *(volatile s16 *)&o->unk_138;
            if (t < 0) t = -t;
            if (t < 0x7556) {
                if (o->unk_210 != 0) {
                    o->unk_138 = o->unk_138 + 0x555;
                } else {
                    o->unk_138 = o->unk_138 - 0x555;
                }
            }
        }
        break;
    }
    o->unk_13c = o->unk_13c + 1;
    if (o->unk_224 != 7 && o->unk_200 != 5) {
        if (((s32 (*)(void *))func_ov003_02222fe4)(o) != 0) {
            o->unk_13c = 0;
            o->unk_224 = 0;
        }
    } else {
        o->unk_224 = 0;
        switch (o->unk_1fe) {
        case 0:
        case 1:
        case 2:
        case 3:
            func_0204ee10(&x, &y, &o->unk_120);
            if (func_020312a8(x, y) == 1) {
                ((s32 (*)(void *, void *))func_ov003_02220c68)(o, &o->unk_218);
            }
            break;
        case 4:
            break;
        case 5:
        case 6:
            func_0204ee10(&x, &y, &o->unk_120);
            if (func_020312a8(x, y) == 2) {
                ((s32 (*)(void *, void *))func_ov003_02220c68)(o, &o->unk_218);
            }
            break;
        }
    }
}


//@ 0x222443c
extern "C" void func_ov003_0222443c(Obj_f9 *o)
{
    o->unk_138 = o->unk_138 + (s16)func_ov003_022202cc(0, 0x2aa8);
    o->unk_13c = 0;
    o->unk_140 = (u8)func_ov003_022202ec(1, 3);
    o->unk_142 = func_ov003_022202cc(0xaaa, 0x2000);
    o->unk_210 = func_ov003_022202cc(0, 2) != 0 ? 1 : 0;
    o->unk_200 = 1;
}


//@ 0x2224364
extern "C" void func_ov003_02224364(Obj_f9 *o)
{
    s32 t;
    s32 a, b, x, q, z, c, d;
    t = o->unk_13c << 3;
    o->unk_142 = o->unk_142 + 0x2000;
    a = data_02135f44[((u16)o->unk_142 >> 4) * 2];
    b = data_02135f44[((u16)o->unk_138 >> 4) * 2];
    q = t >> 2;
    x = func_01ffcb0c(t, b) + func_01ffcb0c(q, a);
    c = data_02135f44[((u16)o->unk_142 >> 4) * 2];
    d = data_02135f44[((u16)o->unk_138 >> 4) * 2 + 1];
    z = func_01ffcb0c(t, d) + func_01ffcb0c(q, c);
    o->unk_120.x += x;
    o->unk_120.z += z;
    if (o->unk_13c >= 10) {
        ((void (*)(void *, s32))func_ov003_022201ac)(o, 0x20);
    } else {
        ((void (*)(void *, s32))func_ov003_022201ac)(o, 0x10);
    }
    if (t > 0x19a) {
        o->unk_200 = 2;
    }
}


//@ 0x2224310
extern "C" void func_ov003_02224310(Obj_f9 *o)
{
    func_ov003_02224828((s32 *)&o->unk_120, 0x19a, o->unk_138);
    ((void (*)(void *, s32))func_ov003_022201ac)(o, 0x20);
    o->unk_140--;
    if (o->unk_140 == 0) {
        o->unk_13c = 0;
        o->unk_200 = 3;
    }
}


//@ 0x22242ac
extern "C" void func_ov003_022242ac(Obj_f9 *o)
{
    s32 t = 0x19a - (o->unk_13c << 3);
    func_ov003_02224828((s32 *)&o->unk_120, t, o->unk_138);
    if (o->unk_13c >= 10) {
        ((void (*)(void *, s32))func_ov003_022201ac)(o, 3);
    } else {
        ((void (*)(void *, s32))func_ov003_022201ac)(o, 0x10);
    }
    if (t <= 0) {
        o->unk_13c = 0;
        o->unk_200 = 4;
    }
}


//@ 0x222426c
extern "C" void func_ov003_0222426c(Obj_f9 *o)
{
    ((void (*)(void *, s32))func_ov003_022201ac)(o, 10);
    ((void (*)(void *, s32))func_ov003_022209ec)(&o->unk_120, 0x40);
    if (func_ov003_022202ec(0, 0x64) == 1 || o->unk_13c > 0x64) {
        o->unk_200 = 0;
    }
}


//@ 0x2224148
extern "C" void func_ov003_02224148(Obj_f8 *self)
{
    s32 a, x, y, sq;
    s32 t, s142, s138;
    u16 *pf;
    a = self->unk_13c << 7;
    if (a > 0x215) {
        a = 0x215;
    }
    pf = &self->unk_142;
    *pf = (s16)*pf + 0x2000;
    s142 = data_02135f44[(*pf >> 4) * 2];
    s138 = *(volatile s16 *)&data_02135f44[(self->unk_138 >> 4) * 2];
    sq = a >> 5;
    t = func_01ffcb0c(a, s138);
    x = t + func_01ffcb0c(sq, s142);
    s142 = data_02135f44[(self->unk_142 >> 4) * 2];
    s138 = *(volatile s16 *)&data_02135f44[((self->unk_138 >> 4) * 2) + 1];
    t = func_01ffcb0c(a, s138);
    y = t + func_01ffcb0c(sq, s142);
    self->unk_120.x += x;
    self->unk_120.z += y;
    if (self->unk_7f) {
        if (self->unk_13c >= 10) {
            ((void (*)(void *, s32))func_ov003_022201ac)(self, 3);
        } else if (self->unk_13c >= 5) {
            ((void (*)(void *, s32))func_ov003_022201ac)(self, 0x10);
        } else {
            ((void (*)(void *, s32))func_ov003_022201ac)(self, 0x20);
        }
    } else {
        ((void (*)(void *, s32))func_ov003_022201ac)(self, 0x20);
    }
    {
        V3_f8 v;
        v.x = self->unk_120.x;
        v.y = self->unk_120.y;
        v.z = self->unk_120.z;
        v.y = data_020c7c1c;
        ((void (*)(s32, V3_f8 *, s32, s32))func_020902d4)(self->unk_204, &v, 0, 0);
    }
}


//@ 0x2224144
extern "C" void func_ov003_02224144()
{
}


//@ 0x22240f4
extern "C" void func_ov003_022240f4(Obj_f8 *self)
{
    if ((self->*data_ov003_02257b50[self->unk_224].f)() == 0) {
        ((s32 (*)(Obj_f8 *))func_ov003_02223134)(self);
    }
    self->unk_13c = self->unk_13c + 1;
}


//@ 0x22240d4
extern "C" s32 func_ov003_022240d4(Obj_f8 *self)
{
    if (self->unk_22c == 0) {
        return 0;
    }
    self->unk_224 = 1;
    return 1;
}


//@ 0x2223f78
extern "C" s32 func_ov003_02223f78(Obj_f8 *self)
{
    u8 *p = (u8 *)self->unk_22c;
    s32 dv, s;
    if (p == 0) {
        return 0;
    }
    p = (u8 *)((u32)p + 8);
    dv = ((s32)((u8 *)(data_ov003_022349d4))[self->unk_1ff * 0x14] << 12) / 100;
    s = self->unk_23d << 4;
    if (s >= 0x100) {
        s = 0x100;
    }
    self->unk_138 = func_02002bdc(&self->unk_120, p);
    ((s32 (*)(void *, s32, s32))func_ov003_02224828)(&self->unk_120, s, (s16)self->unk_138);
    ((void (*)(void *, s32))func_ov003_022201ac)(self, 0x18);
    if (((s32 (*)(void *, void *, s32, s32, s32))func_ov003_0222034c)(&self->unk_120, p, dv, dv, dv)) {
        s32 r = ((s32 (*)(s32, s32))func_ov003_022202ec)(0, 100);
        s32 lim = 0x5f;
        s32 a, b;
        func_0204ee10(&a, &b, p);
        switch (self->unk_1fe) {
        case 0:
        case 1:
        case 2:
        case 3:
            if (func_020312a8(a, b) == 1) {
                lim = 0x64;
            }
            break;
        case 4:
            break;
        case 5:
        case 6:
            if (func_020312a8(a, b) == 2) {
                lim = 0x64;
            }
            break;
        }
        if (r <= lim) {
            self->unk_240 = ((s32 (*)(s32, s32))func_ov003_022202ec)(4, 0xb4);
            self->unk_13c = 0;
            self->unk_23d = 0;
            self->unk_225 = 3;
            self->unk_224 = 3;
            self->unk_138 = func_02002bdc(&self->unk_120, p);
        } else {
            self->unk_23d = 0;
            self->unk_225 = 0;
            self->unk_224 = 2;
            self->unk_138 = func_02002bdc(&self->unk_120, p);
        }
    }
    self->unk_23d = self->unk_23d + 1;
    return 1;
}


//@ 0x2223dd8
extern "C" s32 func_ov003_02223dd8(Obj_f8 *self)
{
    u8 *p = (u8 *)self->unk_22c;
    u8 *q;
    if (p == 0) {
        return 0;
    }
    q = p + 8;
    switch (self->unk_225) {
    case 0: {
        s32 s, dv;
        dv = ((s32)((u8 *)(data_ov003_022349d4))[self->unk_1ff * 0x14] << 12) / 100;
        s = self->unk_23d << 4;
        if (s >= 0x100) {
            s = 0x100;
        }
        self->unk_138 = func_02002bdc(&self->unk_120, q);
        ((s32 (*)(void *, s32, s32))func_ov003_02224828)(&self->unk_120, s, (s16)self->unk_138);
        if (((s32 (*)(void *, void *, s32, s32, s32))func_ov003_0222034c)(&self->unk_120, q, dv, dv, dv)) {
            self->unk_23d = 0;
            func_0205fb40(p);
            self->unk_225 = 1;
        }
        break;
    }
    case 1: {
        s32 lim = ((s32 (*)(s32, s32))func_ov003_022202ec)(10, 15);
        if (((s32 (*)(s32, s32))func_ov003_022202ec)(0, 100) < 0x32) {
            self->unk_138 = func_02002bdc(q, &self->unk_120);
        } else {
            self->unk_138 = func_02002bdc(&self->unk_120, q);
        }
        ((s32 (*)(void *, s32, s32))func_ov003_02224828)(&self->unk_120, 0x100, (s16)self->unk_138);
        self->unk_138 = func_02002bdc(&self->unk_120, q);
        if (self->unk_23d > lim) {
            self->unk_23d = 0;
            self->unk_138 = (s16)self->unk_138 + (s16)(func_ov003_022202cc(1, 2) * 0x1554);
            self->unk_225 = 2;
        }
        break;
    }
    case 2: {
        s32 dv = ((s32)*(u16 *)(((u8 *)((u8 *)&data_ov003_022349d4[0].d)) + self->unk_1ff * 0x14) << 12) / 100;
        ((s32 (*)(void *, s32, s32))func_ov003_02224828)(&self->unk_120, 0x14c, (s16)self->unk_138);
        if (((s32 (*)(void *, void *, s32, s32, s32))func_ov003_0222034c)(&self->unk_120, q, dv, dv, dv) == 0) {
            if (((s32 (*)(Obj_f8 *))func_ov003_02222d48)(self) == 0) {
                ((s32 (*)(Obj_f8 *))func_ov003_02223134)(self);
            }
        }
        break;
    }
    }
    ((void (*)(void *, s32))func_ov003_022201ac)(self, 0x18);
    self->unk_23d = self->unk_23d + 1;
    return 1;
}


//@ 0x2223b64
extern "C" s32 func_ov003_02223b64(Obj_f8 *self)
{
    BOOL r = FALSE;
    u8 *p = (u8 *)self->unk_22c;
    u8 *q;
    s32 base;
    s32 dv, sq, ang;
    if (p == 0) {
        return r;
    }
    q = p + 8;
    if (self->unk_13c >= self->unk_240) {
        s32 dv = ((s32)((u8 *)(data_ov003_022349d4))[self->unk_1ff * 0x14] << 12) / 100;
        if (((s32 (*)(void *, void *, s32, s32, s32))func_ov003_0222034c)(&self->unk_120, q, dv, dv, dv)) {
            self->unk_13c = r;
            ((s32 (*)(void *, u32))func_0205f92c)(p, 5);
            func_02003e70(self, 0x84f, 0x7f, r);
            {
                s32 t = self->unk_7e;
                if (t != 0x38 && t != 0x39 && t != 0x3a) {
                    goto plain;
                }
                {
                    s32 arr[2];
                    arr[1] = arr[0] = 0;
                    if (func_020429d0(0x10, arr, 0)) {
                        self->unk_224 = 4;
                        self->unk_225 = 6;
                        r = TRUE;
                    }
                }
                goto done;
            plain:
                self->unk_224 = 4;
                self->unk_225 = 6;
                r = TRUE;
            done:;
            }
            return r;
        }
    }
    base = (u32)((u8 *)(data_ov003_022349d4))[self->unk_1ff * 0x14] << 12;
    switch (self->unk_225) {
    case 3: {
        dv = base / 100;
        s32 s = self->unk_23d << 4;
        s64 d;
        if (s >= 0x100) {
            s = 0x100;
        }
        ((s32 (*)(void *, s32, s32))func_ov003_02224828)(&self->unk_120, s, func_02002bdc(&self->unk_120, q));
        d = ((s64 (*)(void *, void *))func_020e9600)(&self->unk_120, q);
        if ((s64)func_01ffcb0c(dv, dv) >= d) {
            self->unk_23d = 0;
            func_0205fb40(p);
            self->unk_225 = 4;
        }
        ((void (*)(void *, s32))func_ov003_022201ac)(self, 0x18);
        break;
    }
    case 4: {
        s32 lim = ((s32 (*)(s32, s32))func_ov003_022202ec)(10, 0x14);
        if (((s32 (*)(s32, s32))func_ov003_022202ec)(0, 100) < 0x32) {
            ang = func_02002bdc(q, &self->unk_120);
        } else {
            ang = func_02002bdc(&self->unk_120, q);
            if (((s32 (*)(s32, s32))func_ov003_022202ec)(0, 100) < 5) {
                func_0205fb40(p);
            }
        }
        ((s32 (*)(void *, s32, s32))func_ov003_02224828)(&self->unk_120, 0x100, ang);
        if (self->unk_23d > lim) {
            self->unk_23d = 0;
            self->unk_225 = 5;
        }
        break;
    }
    case 5: {
        s32 dv = ((s32)*(u16 *)(((u8 *)((u8 *)&data_ov003_022349d4[0].d)) + self->unk_1ff * 0x14) << 12) / 100;
        s32 s = 0x100 - (self->unk_23d << 4);
        if (s < 0) {
            s = 0;
        }
        ((s32 (*)(void *, s32, s32))func_ov003_02224828)(&self->unk_120, s, func_02002bdc(q, &self->unk_120));
        if (s == 0 || ((s32 (*)(void *, void *, s32, s32, s32))func_ov003_0222034c)(&self->unk_120, q, dv, dv, dv) == 0) {
            self->unk_23d = 0;
            self->unk_225 = 3;
        }
        ((void (*)(void *, s32))func_ov003_022201ac)(self, 0x10);
        break;
    }
    }
    {
        sq = base >> 9;
        s64 d = ((s64 (*)(void *, void *))func_020e9600)(&self->unk_120, q);
        if (d >= (s64)func_01ffcb0c(sq, sq)) {
            self->unk_138 = func_02002bdc(&self->unk_120, q);
        }
    }
    self->unk_23d = self->unk_23d + 1;
    return 1;
}


//@ 0x2223924
extern "C" s32 func_ov003_02223924(Obj_f8 *self)
{
    u8 *p = (u8 *)self->unk_22c;
    u8 *q;
    s32 idx;
    if (p == 0) {
        return 0;
    }
    if (self->unk_227 == -1) {
        return 0;
    }
    q = p + 8;
    ((void (*)(void *, s32))func_ov003_022201ac)(self, 0x18);
    {
        u16 out[2];
        BOOL ok;
        u16 a, b;
        func_020947c0(out, self->unk_227);
        ok = FALSE;
        {
            volatile u16 *pv = &out[0];
            a = *pv;
            b = *pv;
        }
        if (b >= 0x1374 && a <= 0x1374) {
            ok = TRUE;
        }
        if (ok) {
            idx = 0;
        } else if (a >= 0x1375 && a <= 0x1375) {
            idx = 1;
        } else {
            return 0;
        }
    }
    {
        s32 cur = self->unk_13c;
        u8 *lim = ((Unk_ov003_02223924_Tbl *)((u8 *)&data_ov003_022348c0[0].q))[idx].p;
        if (cur >= lim[data_020ca316[self->unk_7e * 6]]) {
            self->unk_13c = 0;
            ((s32 (*)(void *, u32))func_0205f92c)(p, 4);
            return 0;
        }
    }
    switch (self->unk_225 - 6) {
    case 0: {
        s32 dv = ((s32)((u8 *)(data_ov003_022349d4))[self->unk_1ff * 0x14] << 12) / 100;
        s32 ang = func_02002bdc(&self->unk_120, q);
        ((s32 (*)(void *, s32, s32))func_ov003_02224828)(&self->unk_120, 0x180, ang);
        ((s32 (*)(void *, s32, s32))func_ov003_02224828)(&self->unk_120, 0xc0, (s16)(ang + 0x4000));
        if (((s32 (*)(void *, void *, s32, s32, s32))func_ov003_0222034c)(&self->unk_120, q, dv, dv, dv)) {
            self->unk_225 = 8;
        } else {
            self->unk_225 = 7;
        }
        break;
    }
    case 1: {
        s32 dv = ((s32)((u8 *)(data_ov003_022349d4))[self->unk_1ff * 0x14] << 12) / 100;
        s32 ang = func_02002bdc(&self->unk_120, q);
        ((s32 (*)(void *, s32, s32))func_ov003_02224828)(&self->unk_120, 0x180, ang);
        ((s32 (*)(void *, s32, s32))func_ov003_02224828)(&self->unk_120, 0xc0, (s16)(ang - 0x4000));
        if (((s32 (*)(void *, void *, s32, s32, s32))func_ov003_0222034c)(&self->unk_120, q, dv, dv, dv)) {
            self->unk_225 = 8;
        } else {
            self->unk_225 = 6;
        }
        break;
    }
    case 2: {
        s32 dv = ((s32)((u8 *)((u8 *)&data_ov003_022349d4[0].a1))[self->unk_1ff * 0x14] << 12) / 100;
        s32 r;
        s32 ang = func_02002bdc(q, &self->unk_120);
        ((s32 (*)(void *, s32, s32))func_ov003_02224828)(&self->unk_120, 0x180, ang);
        r = ((s32 (*)(s32, s32))func_ov003_022202ec)(0, 100);
        if (((s32 (*)(void *, void *, s32, s32, s32))func_ov003_0222034c)(&self->unk_120, q, dv, dv, dv) == 0) {
            if (r >= 0x46) {
                self->unk_225 = 6;
            } else {
                self->unk_225 = 9;
            }
        }
        break;
    }
    case 3:
        if (((s32 (*)(s32, s32))func_ov003_022202ec)(0, 100) <= 0x32) {
            self->unk_225 = 7;
        }
        break;
    }
    self->unk_138 = func_02002bdc(&self->unk_120, q);
    return 1;
}


//@ 0x22237dc
extern "C" BOOL func_ov003_022237dc(Obj_f7 *o) {
    Ent_f7 *e = o->unk_22c;
    if (e == NULL) {
        return FALSE;
    }
    s32 step;
    s32 ang;
    if (o->unk_1ff >= 3) {
        step = 0x1000;
    } else {
        step = 0x1249;
    }
    if (o->unk_23e != 0) {
        if (func_020565e8(o->unk_1e0, 4)) {
            o->unk_1e8 = 0x3000;
        }
        o->unk_138 = o->unk_138 + step;
        ang = (s16)(o->unk_138 - 0x4000);
    } else {
        if (func_020565e8(o->unk_1e0, 0xb)) {
            o->unk_1e8 = 0xa000;
        }
        o->unk_138 = o->unk_138 - step;
        ang = (s16)(o->unk_138 + 0x4000);
    }
    s32 d = func_ov003_022202cc(3, 10);
    s32 s = data_ov003_02257a80 + d;
    data_ov003_02257a80 = s;
    if (s < -12) {
        data_ov003_02257a80 = -12;
    } else if (s > 0x14) {
        data_ov003_02257a80 = 0x14;
    }
    s32 d2 = func_ov003_022202cc(0, 0xf);
    s32 sum = data_ov003_02257a80 + d2 + *(u16 *)&((u8 *)((u8 *)&data_ov003_022349d4[0].c1))[o->unk_1ff * 0x14];
    s32 sc = func_02133150(sum << 12, 100);
    V3_f7 v;
    V3_f7 *ps = &e->unk_08;
    v.x = e->unk_08.x;
    v.y = ps->y;
    v.z = ps->z;
    o->unk_120.x = v.x;
    o->unk_120.z = v.z;
    ((s32 (*)(void *, s32, s32))func_ov003_02224828)(&o->unk_120, sc, ang);
    void *m = func_020947f0(4);
    if (m != NULL) {
        s32 a2 = func_02002bdc(m, &v);
        ((s32 (*)(void *, s32, s32))func_ov003_02224828)(&o->unk_120, 0xa00, a2);
    }
    return TRUE;
}


//@ 0x2223730
extern "C" BOOL func_ov003_02223730(Obj_f7 *o) {
    ((void (*)(void *, s32))func_ov003_022201ac)(o, 0x1c);
    s32 c = o->unk_13c;
    s32 v = (c + 10) * 25;
    if (v >= 0x180) {
        v = 0x180;
    }
    if (o->unk_7f != 0) {
        if (c >= 0x14) {
            ((void (*)(void *, s32))func_ov003_022201ac)(o, 3);
        } else if (c >= 0xf) {
            ((void (*)(void *, s32))func_ov003_022201ac)(o, 0x10);
        } else {
            ((void (*)(void *, s32))func_ov003_022201ac)(o, 0x20);
        }
    }
    ((s32 (*)(void *, s32, s32))func_ov003_02224828)(&o->unk_120, v, o->unk_138);
    V3_f7 t;
    t.x = o->unk_120.x;
    t.y = o->unk_120.y;
    t.z = o->unk_120.z;
    t.y = data_020c7c1c;
    ((void (*)(s32, V3_f7 *, s32, s32))func_020902d4)(o->unk_204, &t, 0, 0);
    return TRUE;
}


//@ 0x22236dc
extern "C" void func_ov003_022236dc(Obj_f7 *o) {
    if (o->unk_23c == 1) {
        switch (o->unk_224) {
        case 3:
        case 4:
        case 5:
            func_ov003_02223134(o);
            break;
        case 6:
            break;
        default:
            if (((BOOL (*)(Obj_f7 *))func_ov003_02222d48)(o) == 0) {
                func_ov003_02223134(o);
            }
            break;
        }
    }
}


//@ 0x2223554
extern "C" BOOL func_ov003_02223554(Obj_f7 *o) {
    BOOL r = FALSE;
    if (o == NULL) {
        return r;
    }
    Ent_f7 *e = o->unk_22c;
    if (e == NULL) {
        func_ov003_02223134(o);
        return r;
    }
    switch (o->unk_224) {
    case 4: {
        u16 buf[1];
        func_020947c0(buf, o->unk_227);
        u32 k = 0;
        u32 a = *(volatile u16 *)buf;
        u32 b = *(volatile u16 *)buf;
        s32 m;
        if (b >= 0x1374 && a <= 0x1374) {
            k = 1;
        }
        if (k) {
            m = 0;
        } else if (a >= 0x1375 && a <= 0x1375) {
            m = 1;
        } else {
            func_ov003_02223134(o);
            return FALSE;
        }
        if (data_021f4770 == 0) {
            s32 cur = o->unk_13c;
            u8 *tbl = ((u8 * *)((u8 *)&data_ov003_022348c0[0].q))[m * 2];
            if (cur > tbl[data_020ca316[o->unk_7e * 6]] - 1) {
                func_ov003_02223134(o);
                return FALSE;
            }
        }
        o->unk_224 = 5;
        o->unk_225 = 10;
        o->unk_13c = 0;
        ((void (*)(Ent_f7 *, s32))func_0205f92c)(e, 6);
        o->unk_23e = func_ov003_022202ec(0, 2) != 0;
        o->unk_23f = func_ov003_022202ec(((u8 *)((u8 *)&data_ov003_022349d4[0].a2))[o->unk_1ff * 0x14], ((u8 *)((u8 *)&data_ov003_022349d4[0].a3))[o->unk_1ff * 0x14]);
        V3_f7 *ps = &e->unk_08;
        V3_f7 *pd = &o->unk_230;
        pd->x = e->unk_08.x;
        pd->y = ps->y;
        pd->z = ps->z;
        if (o->unk_23e != 0) {
            o->unk_138 = o->unk_138 - 0x4000;
        } else {
            o->unk_138 = o->unk_138 + 0x4000;
        }
        r = TRUE;
        break;
    }
    case 3:
        func_ov003_02223134(o);
        break;
    case 6:
        break;
    default:
        if (((BOOL (*)(Obj_f7 *))func_ov003_02222d48)(o) == 0) {
            func_ov003_02223134(o);
        }
        break;
    }
    return r;
}


//@ 0x22234fc
extern "C" s32 func_ov003_022234fc(Obj_f7 *o) {
    s32 r = 0;
    if (o == NULL) {
        return r;
    }
    if (o->unk_224 != 5) {
        return r;
    }
    if (o->unk_13c >= o->unk_23f) {
        if (((BOOL (*)(Obj_f7 *, u32))func_ov003_02222d9c)(o, o->unk_211)) {
            r = 2;
        } else {
            func_ov003_02223134(o);
            r = 1;
        }
    }
    return r;
}


//@ 0x22234c4
extern "C" BOOL func_ov003_022234c4(Obj_f7 *o) {
    BOOL r = FALSE;
    if (o == NULL) {
        return r;
    }
    s32 i = o->unk_227;
    if (i == -1) {
        return r;
    }
    Rec_f7 *p = &((Rec_f7 *)(data_ov003_02257e9c))[i];
    if (p->unk_80 != 0) {
        r = TRUE;
    }
    return r;
}


//@ 0x2223498
extern "C" BOOL func_ov003_02223498(Obj_f7 *o) {
    if (o == NULL) {
        return FALSE;
    }
    s32 i = o->unk_227;
    BOOL r = FALSE;
    if (i != -1) {
        Rec_f7 *p = &((Rec_f7 *)(data_ov003_02257e9c))[i];
        p->unk_40 = 4;
        r = TRUE;
    }
    return r;
}


//@ 0x2223450
extern "C" void func_ov003_02223450(V3_f7 *out, s32 idx) {
    if (idx < 0 || idx >= 0x3b) {
        out->x = 0x1000;
        out->y = 0x1000;
        out->z = 0x1000;
    } else {
        s32 v = func_02133150(((u8 *)((u8 *)&data_ov003_022349d4[0].h))[data_020ca314[idx * 6] * 0x14] << 12, 100);
        out->x = v;
        out->y = v;
        out->z = v;
    }
}


//@ 0x2223400
extern "C" BOOL func_ov003_02223400(Obj_f7 *o, V3_f7 *a, V3_f7 *b) {
    if (o == NULL) {
        return FALSE;
    }
    s32 i = o->unk_227;
    if (i == -1) {
        return FALSE;
    }
    Rec_f7 *r = &((Rec_f7 *)(data_ov003_02257e9c))[i];
    V3_f7 *pd = &r->unk_54;
    pd->x = a->x;
    pd->y = a->y;
    pd->z = a->z;
    pd = &r->unk_84;
    pd->x = b->x;
    pd->y = b->y;
    pd->z = b->z;
    return TRUE;
}


//@ 0x2223310
extern "C" BOOL func_ov003_02223310(s32 idx, s32 flag) {
    s32 t;
    s32 ang;
    V3_f7 *pos;
    if (idx < 0 || idx > 3) {
        return FALSE;
    }
    u8 *ob = (u8 *)func_02095204(idx);
    if (ob == NULL) {
        return FALSE;
    }
    pos = (V3_f7 *)(ob + 0x5c);
    Rec_f7 *rec = &((Rec_f7 *)(data_ov003_02257e9c))[idx];
    t = rec->unk_90;
    if ((u32)(t - 0x38) <= 2) {
        if (flag != 0) {
            return TRUE;
        }
        rec->unk_40 = 4;
        return TRUE;
    }
    V3_f7 *q = &rec->unk_60;
    ang = func_02002bdc(&rec->unk_6c, q);
    V3_f7 tmp;
    if (func_02030d78(&tmp, pos, ang, 0x7800, 0x2000, 0xc)) {
        q->x = tmp.x;
        q->y = tmp.y;
        q->z = tmp.z;
    }
    func_ov003_0222316c(rec, ang, t);
    if (flag != 0) {
        rec->unk_40 = 1;
    }
    rec->unk_48 = 3;
    void *g = data_020cbb18;
    if (func_02072e44(g)) {
        if (func_020729cc(g, idx)) {
            u8 b = 2;
            g = data_020cbb18;
            func_020728d4(g);
            func_020728a4(g, &b, 1);
            func_02072824(g, 0x2a, 4);
        }
    }
    return TRUE;
}


//@ 0x22232e8
extern "C" BOOL func_ov003_022232e8(s32 idx) {
    if (idx < 0 || idx >= 4) {
        return TRUE;
    }
    Rec_f7 *p = &((Rec_f7 *)(data_ov003_02257e9c))[idx];
    if (p->unk_40 != 0) {
        return TRUE;
    }
    return FALSE;
}


//@ 0x22232c8
extern "C" V3_f7 *func_ov003_022232c8(s32 idx) {
    if (idx < 0 || idx >= 4) {
        return &(*(V3_f7 *)((u8 *)&data_ov003_02257e9c[0].unk_54));
    }
    return &((Rec_f7 *)(data_ov003_02257e9c))[idx].unk_54;
}


//@ 0x2223258
extern "C" BOOL func_ov003_02223258(s32 idx) {
    BOOL r = FALSE;
    if (idx < 0 || idx >= 4) {
        return FALSE;
    }
    Rec_f7 *p = &((Rec_f7 *)(data_ov003_02257e9c))[idx];
    if (p->unk_40 != 3 && p->unk_40 != 2) {
        return r;
    }
    if (p->unk_a0 == 0) {
        u8 b = 1;
        void *g = data_020cbb18;
        func_020728d4(g);
        func_020728a4(g, &b, 1);
        func_02072824(g, 0x2a, 4);
        r = TRUE;
        p->unk_a0 = r;
    }
    return r;
}


//@ 0x222323c
extern "C" BOOL func_ov003_0222323c(Rec_f7 *self, u32 a) {
    BOOL r = FALSE;
    if (func_0204f364(self->unk_44, 1)) {
        r = TRUE;
    }
    return r;
}


//@ 0x222316c
extern "C" void func_ov003_0222316c(Rec_f7 *self, s32 a, s32 t) {
    s16 *p96 = &self->unk_96;
    s16 *p98 = &self->unk_98;
    s16 *p9a = &self->unk_9a;
    switch (t) {
    case 0xa:
    case 0xb:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
        *p9a = *p9a + 0x7fff;
        *p98 = -a;
        *p96 = *p96 + 0x4000;
        break;
    case 0xf:
        *p9a = *p9a + 0x6000;
        *p98 = a;
        *p96 = *p96 + 0x4000;
        break;
    case 0x23:
    case 0x24:
    case 0x25:
        *p98 = a;
        break;
    case 0x35:
    case 0x36:
        *p96 = *p96 + 0x4000;
        *p98 = a;
        break;
    default:
        *p9a = *p9a + 0x4000;
        *p96 = a;
        *p96 = *p96 + 0x4000;
        break;
    }
}


//@ 0x2223134
extern "C" BOOL func_ov003_02223134(Obj_f7 *self) {
    BOOL r = FALSE;
    if (self == NULL) {
        return r;
    }
    void *p = func_020947f0(4);
    if (p == NULL) {
        return r;
    }
    if (((BOOL (*)(Obj_f7 *, void *))func_ov003_02220b00)(self, p)) {
        r = TRUE;
    }
    return r;
}


//@ 0x2222fe4
extern "C" BOOL func_ov003_02222fe4(Obj_f7 *self) {
    s32 res = 0;
    Ent_f7 *e = ((Ent_f7 * (*)(void))func_0205ffe4)();
    s32 who;
    Obj_f7 *p;
    s32 ok;
    s32 i;
    if (e == NULL) {
        return FALSE;
    }
    void *g = data_020cbb18;
    if (func_02072e44(g)) {
        s32 t = e->unk_3c;
        if (t < 0) {
            return FALSE;
        }
        who = ((s32 *)g)[0x64 / 4];
        if (t != who) {
            return FALSE;
        }
    } else {
        who = 0;
    }
    p = ((Obj_f7 *)(data_ov003_0225812c));
    ok = 1;
    for (i = 0; i < 6; p++, i++) {
        if (self != p && who == p->unk_227) {
            ok = 0;
            break;
        }
    }
    if (ok != 0) {
        V3_f7 v8;
        V3_f7 v14;
        V3_f7 *p120 = &self->unk_120;
        v14.x = p120->x;
        v14.y = p120->y;
        v14.z = p120->z;
        if (((BOOL (*)(V3_f7 *, s32, s32, s32))func_ov003_02222f28)(&v14, self->unk_138, who, self->unk_7e)) {
            s32 sc = func_02133150(((u8 *)(data_ov003_022349d4))[self->unk_1ff * 0x14] << 12, 100);
            V3_f7 *pv = &e->unk_08;
            v8.x = e->unk_08.x;
            v8.y = pv->y;
            v8.z = pv->z;
            if (func_ov003_02222f08() && ((BOOL (*)(V3_f7 *, V3_f7 *, s32, s32, s32))func_ov003_0222034c)(&self->unk_120, &v8, sc, sc, sc)) {
                if (self->unk_200 != 2) {
                    self->unk_200 = 2;
                }
                s32 r = func_ov003_022202cc(0x5000, 0x7fff);
                self->unk_138 = self->unk_138 + (s16)r;
                self->unk_140 = 0x14;
            } else {
                self->unk_227 = (s8)who;
                self->unk_22c = e;
                ((void (*)(Ent_f7 *, void *))func_0205fbbc)(e, self);
                res = 1;
                self->unk_23c = 1;
            }
        }
        func_ov003_02222ef4();
    }
    return res;
}


//@ 0x2222f28
extern "C" BOOL func_ov003_02222f28(void *self, s32 a1, s32 a2, s32 a3)
{
    volatile BOOL result = FALSE;
    u8 *p, *p2;
    u32 vw;
    volatile u16 *pp;
    BOOL k;
    u32 a, b;
    s32 idx;
    s32 off;
    s32 val;
    Unk_ov003_02222f28_Ent *t;

    p = (u8 *)func_0205ffe4();
    if (p == 0) {
        return FALSE;
    }
    func_020947c0((u16 *)&vw, a2);
    k = FALSE;
    pp = (volatile u16 *)&vw;
    a = *pp;
    b = *pp;
    if (b >= 0x1374 && a <= 0x1374) {
        k = TRUE;
    }
    if (k) {
        idx = 0;
    } else if (a >= 0x1375 && a <= 0x1375) {
        idx = 1;
    } else {
        return FALSE;
    }
    p2 = p + 8;
    a3 = data_020ca315[a3 * 6] * 4;
    off = a3;
    t = &((Unk_ov003_02222f28_Ent *)(data_ov003_022348c0))[idx];
    val = (t->p[off] << 12) / 10;
    if (((s32 (*)(void *, void *, s32, s32, s32))func_ov003_0222034c)(self, p2, val, val, val)) {
        s32 lim = *(s16 *)(t->p + off + 2);
        if (func_020e780c(func_02002bdc(self, p2), a1) <= lim) {
            result = TRUE;
        }
    }
    return result;
}


//@ 0x2222f1c
extern "C" void func_ov003_02222f1c()
{
    data_ov003_02257a78 = 10;
}


//@ 0x2222f08
extern "C" BOOL func_ov003_02222f08()
{
    if (data_ov003_02257a78 != 0) {
        return TRUE;
    }
    return FALSE;
}


//@ 0x2222ef4
extern "C" void func_ov003_02222ef4()
{
    if (data_ov003_02257a78 != 0) {
        data_ov003_02257a78--;
    }
}


//@ 0x2222d9c
extern "C" BOOL func_ov003_02222d9c(Obj_f6 *self, u32 k)
{
    s32 idx;
    Ent_f6 *e;
    V3_f6 *pv;
    V3_f6 loc;
    u8 buf[7];
    u8 tmp[5];
    void *s;
    u32 sel;
    s32 h;
    V3_f6 *q;
    BOOL z;

    self->unk_1fd = 1;
    idx = self->unk_227;
    z = FALSE;
    if (idx == -1) {
        return z;
    }
    e = (Ent_f6 *)((u8 *)((Ent_f6 *)(data_ov003_02257e9c)) + idx * 0xa4);
    e->unk_40 = 1;
    e->unk_48 = 1;
    pv = &self->unk_120;
    q = &e->unk_60;
    q->x = pv->x;
    q->y = pv->y;
    q->z = pv->z;
    e->unk_78 = k;
    h = self->unk_7e;
    e->unk_90 = h;
    sel = self->unk_1ff;
    loc.x = pv->x;
    loc.y = pv->y;
    loc.z = pv->z;
    switch (sel) {
    case 0:
        ((s32 (*)(s32, V3_f6 *, s32, s32))func_02090330)(0x12, &loc, z, z);
        break;
    case 1:
        ((s32 (*)(s32, V3_f6 *, s32, s32))func_02090330)(0x13, &loc, z, z);
        break;
    case 2:
        ((s32 (*)(s32, V3_f6 *, s32, s32))func_02090330)(0x14, &loc, z, z);
        break;
    case 3:
        ((s32 (*)(s32, V3_f6 *, s32, s32))func_02090330)(0x15, &loc, z, z);
        break;
    case 4:
        ((s32 (*)(s32, V3_f6 *, s32, s32))func_02090330)(0x16, &loc, z, z);
        break;
    case 5:
        ((s32 (*)(s32, V3_f6 *, s32, s32))func_02090330)(0x17, &loc, z, z);
        break;
    case 6:
        ((s32 (*)(s32, V3_f6 *, s32, s32))func_02090330)(0x19, &loc, z, z);
        break;
    case 7:
        ((s32 (*)(s32, V3_f6 *, s32, s32))func_02090330)(0x18, &loc, z, z);
        break;
    }
    buf[0] = 0;
    buf[1] = h;
    func_02076a6c(tmp, self->unk_120.x, self->unk_120.z);
    func_02116048(tmp, &buf[2], 5);
    s = data_020cbb18;
    func_020728d4(s);
    func_020728a4(s, buf, 7);
    func_02072824(s, 0x2a, 4);
    return TRUE;
}


//@ 0x2222d48
extern "C" BOOL func_ov003_02222d48(Obj_f6 *self)
{
    void *p = self->unk_22c;
    if (p == 0) {
        return FALSE;
    }
    self->unk_23d = 0;
    self->unk_227 = -1;
    ((void (*)(void *, s32))func_0205fbbc)(p, 0);
    self->unk_22c = 0;
    self->unk_23c = 0;
    self->unk_224 = 7;
    self->unk_13c = 0;
    return TRUE;
}


//@ 0x2222d28
extern "C" s32 func_ov003_02222d28(Obj_f6 *self)
{
    s32 r = 2;
    s32 t = self->unk_120.x >> 17;
    if (t == 0) {
        r = 0;
    } else if (t == 5) {
        r = 1;
    }
    return r;
}


//@ 0x2222ce0
extern "C" BOOL func_ov003_02222ce0(Obj_f6 *self)
{
    BOOL r = FALSE;
    s32 x, y;
    V3_f6 p;
    V3_f6 *pv = &self->unk_120;
    p.x = pv->x;
    p.y = pv->y;
    p.z = pv->z;
    p.z = p.z - 0x2000;
    ((void (*)(s32 *, s32 *, V3_f6 *))func_0204ee10)(&x, &y, &p);
    if (func_020312a8(x, y) == 1) {
        r = TRUE;
    }
    return r;
}


//@ 0x2222b1c
extern "C" s32 func_ov003_02222b1c(Obj_f6 *self)
{
    s32 r = 0;
    s32 x, y;
    ((void (*)(s32 *, s32 *, V3_f6 *))func_0204ee10)(&x, &y, &self->unk_120);
    switch (self->unk_1fe) {
    case 0:
    case 1:
    case 2:
    case 3:
        if (func_ov003_02222a38(self)) {
            COPY();
            r = 1;
        } else if (func_020312a8(x, y) == 1) {
            COPY();
            r = 3;
        }
        break;
    case 4:
        goto dflt;
    case 5:
    case 6: {
        s32 t = func_ov003_02222d28(self);
        if (t == 0) {
            r = 6;
        } else if (t == 1) {
            r = 7;
        } else if (func_ov003_02222a38(self)) {
            COPY();
            r = 2;
        } else if (func_020312a8(x, y) != 1) {
            COPY();
            r = 4;
        } else if (func_ov003_02222ce0(self)) {
            r = 5;
        }
        break;
    }
    default:
    dflt:
        if (func_020312a8(x, y) == 2) {
            if (func_ov003_02222a38(self)) {
                COPY();
                r = 1;
            }
        } else if (func_020312a8(x, y) == 1) {
            s32 t = func_ov003_02222d28(self);
            if (t == 0) {
                r = 6;
            } else if (t == 1) {
                r = 7;
            } else if (func_ov003_02222a38(self)) {
                COPY();
                r = 2;
            } else if (func_ov003_02222ce0(self)) {
                r = 5;
            }
        } else {
            COPY();
            r = 1;
        }
        break;
    }
    return r;
}


//@ 0x2222a38
extern "C" BOOL func_ov003_02222a38(Obj_f6 *self)
{
    BOOL r = TRUE;
    s32 a, b, c;
    func_ov003_022228dc(self, &a, &b, &c);
    switch (self->unk_1fe) {
    case 0:
    case 1:
    case 2:
    case 3:
        if ((a >= 0xb && a <= 0x12) || a == 7 || a == 0x14) {
            if ((b >= 0xb && b <= 0x12) || b == 7 || b == 0x14) {
                if ((c >= 0xb && c <= 0x12) || c == 7 || c == 0x14) {
                    r = FALSE;
                }
            }
        }
        break;
    case 4:
        goto dflt;
    case 5:
    case 6:
        if (a == 8 || a == 0x17) {
            if (b == 8 || b == 0x17) {
                if (c == 8 || c == 0x17) {
                    r = FALSE;
                }
            }
        }
        break;
    default:
    dflt:
        if ((a >= 0xb && a <= 0x12) || a == 8 || a == 7 || a == 0x14) {
            if ((b >= 0xb && b <= 0x12) || b == 8 || b == 7 || b == 0x14) {
                if ((c >= 0xb && c <= 0x12) || c == 8 || c == 7 || c == 0x14) {
                    r = FALSE;
                }
            }
        }
        break;
    }
    return r;
}


//@ 0x22228dc
extern "C" void func_ov003_022228dc(Obj_f6 *self, s32 *o1, s32 *o2, s32 *o3)
{
    V3_f6 v0, v1, v2;
    Unk_0203398c g0, g1, g2;
    s16 ang;
    s32 r;
    s32 z0, z1, z2;
    s32 i0, i1, i2;

    ang = self->unk_138;
    i0 = ((u16)(s16)(ang + 0x2000) >> 4) * 2;
    r = *(u16 *)(((u8 *)((u8 *)&data_ov003_022349d4[0].g)) + self->unk_1ff * 0x14);
    z0 = self->unk_120.z + (r * data_02135f44[i0 + 1]) / 100;
    v0.x = self->unk_120.x + (r * data_02135f44[i0]) / 100;
    v0.y = -0x1333;
    v0.z = z0;
    i1 = ((u16)(s16)(ang - 0x2000) >> 4) * 2;
    z1 = self->unk_120.z + (r * data_02135f44[i1 + 1]) / 100;
    v1.x = self->unk_120.x + (r * data_02135f44[i1]) / 100;
    v1.y = -0x1333;
    v1.z = z1;
    i2 = (self->unk_138 >> 4) * 2;
    z2 = self->unk_120.z + (r * data_02135f44[i2 + 1]) / 100;
    v2.x = self->unk_120.x + (r * data_02135f44[i2]) / 100;
    v2.y = -0x1333;
    v2.z = z2;
    func_020339bc(&g0, &v0, 0, 0);
    func_020339bc(&g1, &v1, 0, 0);
    func_020339bc(&g2, &v2, 0, 0);
    *o1 = g0.unk_34;
    *o2 = g1.unk_34;
    *o3 = g2.unk_34;
}


//@ 0x22228b0
extern "C" void func_ov003_022228b0(Sub_f6 *s, Obj_f6 *o)
{
    switch (s->b3) {
    case 0:
        func_ov003_0222285c(s, o);
        break;
    case 1:
        func_ov003_022227dc(s, o);
        break;
    case 2:
        func_ov003_02222770(s, o);
        break;
    }
}


//@ 0x222285c
extern "C" void func_ov003_0222285c(Sub_f6 *s, Obj_f6 *o)
{
    s32 t;
    if (s->b0 != 0) {
        s->b0 = s->b0 - 3;
        if (s->b0 < 0xa) {
            s->b0 = 0;
        }
    }
    if (s->b2 != 0) {
        s->b2 = s->b2 - 1;
    }
    t = ((s32 (*)(s32))func_020947f0)(0);
    if (t != 0) {
        if (((s32 (*)(s32, void *))func_020e9650)(t, &o->unk_120) < 0x8000) {
            s->b3 = 1;
        }
    }
}


//@ 0x22227dc
extern "C" void func_ov003_022227dc(Sub_f6 *s, Obj_f6 *o)
{
    s32 t;
    if (s->b2 != 0) {
        s->b2 = s->b2 - 1;
    }
    t = ((s32 (*)(s32))func_020947f0)(0);
    if (t != 0) {
        if (((s32 (*)(s32, void *))func_020e9650)(t, &o->unk_120) >= 0x8000) {
            s->b3 = 0;
            return;
        }
    }
    if (((s32 (*)(s32))func_ov003_022209c8)(0)) {
        s->b0 = s->b0 + 1;
        if (s->b0 >= 0xc8) {
            s->b0 = 0xc8;
        }
    } else {
        if (s->b0 != 0) {
            s->b0 = s->b0 - 1;
        }
        if (s->b0 <= 0x96) {
            if (s->b2 == 0) {
                s->b1 = ((s32 (*)(s32, s32))func_ov003_022202ec)(0x3c, 0x8c);
                s->b3 = 2;
            }
        }
    }
}


//@ 0x2222770
extern "C" void func_ov003_02222770(Sub_f6 *s, Obj_f6 *o)
{
    if (s->b1 != 0) {
        s->b1 = s->b1 - 1;
        func_02003c40(&o->unk_40, 0x82f);
    } else {
        s->b2 = ((s32 (*)(s32, s32))func_ov003_022202ec)(0x14, 0x50);
        s->b3 = 1;
    }
    if (((s32 (*)(s32))func_ov003_022209c8)(0)) {
        s->b2 = ((s32 (*)(s32, s32))func_ov003_022202ec)(0x14, 0x28);
        s->b3 = 1;
        s->b1 = 0;
        s->b0 = s->b0 + 1;
        if (s->b0 >= 0xc8) {
            s->b0 = 0xc8;
        }
    } else if (s->b0 != 0) {
        s->b0 = s->b0 - 1;
    }
}


//@ 0x2222764
extern "C" s32 func_ov003_02222764(Sub_f6 *s)
{
    s->b0 = 0;
    s->b1 = 0;
    s->b2 = 0;
    s->b3 = 0;
}


//@ 0x2222754
extern "C" s32 func_ov003_02222754(Obj_f6 *self)
{
    return func_ov003_02222764(&self->unk_248);
}


//@ 0x2222658
extern "C" void func_ov003_02222658(Obj_f6 *self, void *arg)
{
    V3_f6 a, b;
    if (((s32 (*)(void *))func_ov003_02224d14)(arg)) {
        V3_f6 *p = ((V3_f6 * (*)(void *))func_ov003_02224ba4)(arg);
        a.x = p->x;
        a.y = p->y;
        a.z = p->z;
        b = a;
        ((void (*)(void *, V3_f6 *))func_02003e80)(self, &a);
        if (((s32 (*)(void *))func_ov003_02224b6c)(arg) == 1) {
            func_02003e70(self, 0x7e0, 0x7f, 0);
        } else if (((s32 (*)(void *))func_ov003_02224b6c)(arg) == 2) {
            func_02003e70(self, 0x7e1, 0x7f, 0);
            b.y = data_020c7c1c;
            ((s32 (*)(s32, V3_f6 *, s32, s32))func_02090330)(0x15, &b, 0, 0);
        }
    } else {
        a.x = self->unk_54.x;
        a.y = self->unk_54.y;
        a.z = self->unk_54.z;
        ((void (*)(void *, V3_f6 *))func_02003e80)(self, &a);
    }
    if (data_ov003_02257af8[self->unk_40].f) {
        (self->*data_ov003_02257af8[self->unk_40].f)(arg);
    }
    {
        void *s = data_020cbb18;
        if (((s32 (*)(void *))func_02072e44)(s)) {
            if (((s32 (*)(void *, void *))func_020729cc)(s, arg) == 0) {
                if (self->unk_40 == 4) {
                    ((s32 (*)(void *, s32, s32, s32, s32))func_0204f4f8)(arg, 8, -1, 0, 0);
                }
            }
        }
    }
}


//@ 0x2222654
extern "C" s32 func_ov003_02222654()
{
    return 1;
}


//@ 0x22225b4
extern "C" BOOL func_ov003_022225b4(Self_f5 *self, u32 a) {
    if (self->unk_44 != -1) {
        return FALSE;
    }
    self->unk_44 = func_0204f49c();
    if (self->unk_48 != 5) {
        ((void (*)(V3_f5 *, s32))func_ov003_02223450)(&self->unk_84, self->unk_90);
    }
    if (self->unk_48 == 1) {
        if (!func_ov003_02222504(self, a)) {
            return FALSE;
        }
    } else if (self->unk_48 == 2) {
        if (!func_ov003_02222504(self, a)) {
            return FALSE;
        }
        Ent_f5 *e = ((Ent_f5 * (*)(u32))func_02095204)(a);
        if (e != NULL) {
            u32 f = e->unk_b0;
            if (Unk_ov003_02222490_Bit(f, 4) && Unk_ov003_02222490_Bit(f, 2)) {
                self->unk_40 = 2;
                return TRUE;
            }
        }
    }
    self->unk_40 = 3;
    return TRUE;
}


//@ 0x2222504
extern "C" BOOL func_ov003_02222504(Self_f5 *self, u32 a) {
    struct {
        Unk_ov003_02221cec_Dead dead;
        T48_f5 t;
        V3_f5 d, w;
        T48_f5 blk;
        V3_f5 y, z;
    } l;
    if (a >= 4) {
        self->unk_40 = 4;
        return FALSE;
    }
    if (((Ent_f5 * (*)(u32))func_020951ec)(a) == NULL) {
        self->unk_40 = 4;
        return FALSE;
    }
    func_020944f8(&l.blk, a);
    l.t = l.blk;
    l.d.x = 0x800;
    l.d.y = 0;
    l.d.z = 0;
    func_ov003_02212034(&l.t, &l.d);
    l.w.x = ((V3_f5 *)((u8 *)&l.t + 0x24))->x;
    l.w.y = ((V3_f5 *)((u8 *)&l.t + 0x24))->y;
    l.w.z = ((V3_f5 *)((u8 *)&l.t + 0x24))->z;
    func_0203ee38(&l.w, &l.w);
    CP(l.dead, l.w);
    CP(l.y, l.w);
    CP(l.z, self->unk_60);
    func_0205f284(&l.y, &l.z, &self->unk_4c, &self->unk_50, 3);
    CP(self->unk_54, self->unk_60);
    return TRUE;
}


//@ 0x2222490
extern "C" BOOL func_ov003_02222490(Self_f5 *self, u32 a) {
    BOOL r = FALSE;
    struct Pad {
        s32 v[3];
        Pad() {}
        ~Pad() {}
    } pad;
    Ent_f5 *e = ((Ent_f5 * (*)(u32))func_020951ec)(a);
    if (e == NULL) {
        self->unk_40 = 4;
        return r;
    }
    u32 f = e->unk_b0;
    if (Unk_ov003_02222490_Bit(f, 4) && Unk_ov003_02222490_Bit(f, 2)) {
        V3_f5 v;
        V3_f5 *pv = &e->unk_5c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        CP(self->unk_54, v);
        CP(self->unk_6c, v);
    } else {
        r = TRUE;
        self->unk_80 = r;
        self->unk_40 = 3;
    }
    return r;
}


//@ 0x22223e8
extern "C" BOOL func_ov003_022223e8(Self_f5 *self, u32 a) {
    s32 r5 = 0x1e;
    BOOL r6 = FALSE;
    switch (self->unk_48) {
    case 0:
        break;
    case 1:
        func_ov003_02222368(self, a);
        r6 = TRUE;
        break;
    case 2:
        func_ov003_022222a0(self, a);
        r6 = TRUE;
        break;
    case 3:
        func_ov003_02221e64(self, TRUE);
        break;
    case 4:
        func_ov003_02221e64(self, r6);
        break;
    case 5: {
        Ent_f5 *e = ((Ent_f5 * (*)(u32))func_02095204)(a);
        if (e == NULL) {
            self->unk_40 = 4;
            return r6;
        }
        func_ov003_02221d60(self, &e->unk_5c);
        r5 = r5 - self->unk_7c;
        if (r5 < 1) {
            r5 = 1;
        }
        break;
    }
    }
    func_0204f3e4(self->unk_44, self->unk_90, &self->unk_54, &self->unk_84, self->unk_96, self->unk_98, self->unk_9a, 1, r6, r5);
    return TRUE;
}


//@ 0x2222368
extern "C" BOOL func_ov003_02222368(Self_f5 *self, u32 a) {
    BOOL r = FALSE;
    if (self->unk_80 == 0) {
        Ent_f5 *e = ((Ent_f5 * (*)(u32))func_020951ec)(a);
        if (e == NULL) {
            self->unk_40 = 4;
            return r;
        }
        V3_f5 t;
        func_ov003_02221cec(self, e, &t);
        r = TRUE;
        V3_f5 u;
        CP(u, t);
        if (func_0205f1e8(&u, self->unk_4c, &self->unk_54.x, &self->unk_50, r)) {
            self->unk_80 = r;
            CP(self->unk_6c, t);
        }
    } else if (self->unk_a0 == 0) {
        ((void (*)(Self_f5 *, u32))func_ov003_0222323c)(self, a);
        r = TRUE;
    }
    return r;
}


//@ 0x22222a0
extern "C" BOOL func_ov003_022222a0(Self_f5 *self, u32 a) {
    BOOL r;
    struct {
        V3_f5 t;
        T48_f5 tt;
        V3_f5 w, u;
        T48_f5 blk;
    } l;
    Ent_f5 *e = ((Ent_f5 * (*)(u32))func_020951ec)(a);
    if (e == NULL) {
        self->unk_40 = 4;
        return FALSE;
    }
    if (self->unk_80 == 0) {
        func_ov003_02221cec(self, e, &l.t);
        r = TRUE;
        CP(l.u, l.t);
        if (func_0205f1e8(&l.u, self->unk_4c, &self->unk_54.x, &self->unk_50, r)) {
            self->unk_80 = r;
            CP(self->unk_6c, l.t);
        }
    } else {
        ((void (*)(Self_f5 *, u32))func_ov003_0222323c)(self, a);
        func_020944f8(&l.blk, a);
        l.tt = l.blk;
        func_ov003_02212034(&l.tt, 0);
        l.w.x = ((V3_f5 *)((u8 *)&l.tt + 0x24))->x;
        l.w.y = ((V3_f5 *)((u8 *)&l.tt + 0x24))->y;
        l.w.z = ((V3_f5 *)((u8 *)&l.tt + 0x24))->z;
        func_0203ee38(&l.w, &l.w);
        CP(self->unk_54, l.w);
        CP(self->unk_6c, l.w);
        r = TRUE;
    }
    return r;
}


//@ 0x2222274
extern "C" BOOL func_ov003_02222274(Self_f5 *self, s32 a) {
    if (self->unk_48 == 1 || self->unk_48 == 3) {
        func_ov003_02222224(self);
    }
    func_ov003_022221a0(self, a);
    return TRUE;
}


//@ 0x2222224
extern "C" BOOL func_ov003_02222224(Self_f5 *self) {
    BOOL r = FALSE;
    s32 i = self->unk_78;
    if (i != -1) {
        Unk_ov003_02222224_Rec *p = &((Unk_ov003_02222224_Rec *)(data_ov003_0225812c))[i];
        if (p->unk_22c != 0) {
            p->unk_22c = r;
        }
        p->unk_227 = -1;
        p->unk_23c = 0;
        p->unk_224 = 0;
        r = TRUE;
    }
    return r;
}


//@ 0x22221a0
extern "C" void func_ov003_022221a0(Self_f5 *self, s32 a) {
    func_0204f3b4(self->unk_44);
    self->unk_44 = -1;
    self->unk_40 = 0;
    self->unk_78 = -1;
    self->unk_80 = 0;
    self->unk_a0 = 0;
    self->unk_7c = 0;
    self->unk_84.x = 0x1333;
    self->unk_84.y = 0x1333;
    self->unk_84.z = 0x1333;
    self->unk_96 = 0;
    self->unk_98 = 0;
    self->unk_9a = 0;
    func_020902f8(self->unk_9c);
    self->unk_9c = -1;
    if (self->unk_94) {
        func_ov003_02221f40(self, a);
    }
}


//@ 0x2221f40
extern "C" s32 func_ov003_02221f40(Self_f5 *self, s32 a) {
    self->unk_40 = 1;
    self->unk_94 = 0;
    s32 k = self->unk_90 * 6;
    s32 t = data_020ca314[k];
    s32 r = t * 0x14;
    self->unk_84.x = (((u8 *)((u8 *)&data_ov003_022349d4[0].e))[r] << 12) / 100;
    self->unk_84.y = 0x1000;
    self->unk_84.z = (((u8 *)((u8 *)&data_ov003_022349d4[0].f))[r] << 12) / 100;
    self->unk_54.y = data_020c7c1c;
    self->unk_90 = 0x3b;
    V3_f5 v;
    v.x = self->unk_54.x;
    v.y = self->unk_54.y;
    v.z = self->unk_54.z;
    s32 *h = &self->unk_9c;
    switch (t) {
    case 0:
        ((s32 (*)(s32, V3_f5 *, s32, s32))func_02090330)(0x12, &v, 0, 0);
        *h = ((s32 (*)(s32, V3_f5 *, s32, s32))func_02090330)(0x1a, &v, 0, 0);
        func_02003e70(self, 0x7e2, 0x7f, 0);
        break;
    case 1:
        ((s32 (*)(s32, V3_f5 *, s32, s32))func_02090330)(0x13, &v, 0, 0);
        *h = ((s32 (*)(s32, V3_f5 *, s32, s32))func_02090330)(0x1b, &v, 0, 0);
        func_02003e70(self, 0x7e2, 0x7f, 0);
        break;
    case 2:
        ((s32 (*)(s32, V3_f5 *, s32, s32))func_02090330)(0x14, &v, 0, 0);
        *h = ((s32 (*)(s32, V3_f5 *, s32, s32))func_02090330)(0x1c, &v, 0, 0);
        func_02003e70(self, 0x7e2, 0x7f, 0);
        break;
    case 3:
        ((s32 (*)(s32, V3_f5 *, s32, s32))func_02090330)(0x15, &v, 0, 0);
        *h = ((s32 (*)(s32, V3_f5 *, s32, s32))func_02090330)(0x1d, &v, 0, 0);
        func_02003e70(self, 0x7e3, 0x7f, 0);
        break;
    case 4:
        ((s32 (*)(s32, V3_f5 *, s32, s32))func_02090330)(0x16, &v, 0, 0);
        *h = ((s32 (*)(s32, V3_f5 *, s32, s32))func_02090330)(0x1e, &v, 0, 0);
        func_02003e70(self, 0x7e3, 0x7f, 0);
        break;
    case 5:
        ((s32 (*)(s32, V3_f5 *, s32, s32))func_02090330)(0x17, &v, 0, 0);
        *h = ((s32 (*)(s32, V3_f5 *, s32, s32))func_02090330)(0x1f, &v, 0, 0);
        func_02003e70(self, 0x7e4, 0x7f, 0);
        break;
    case 6:
        ((s32 (*)(s32, V3_f5 *, s32, s32))func_02090330)(0x19, &v, 0, 0);
        *h = ((s32 (*)(s32, V3_f5 *, s32, s32))func_02090330)(0x21, &v, 0, 0);
        func_02003e70(self, 0x7e4, 0x7f, 0);
        break;
    case 7:
        ((s32 (*)(s32, V3_f5 *, s32, s32))func_02090330)(0x18, &v, 0, 0);
        *h = ((s32 (*)(s32, V3_f5 *, s32, s32))func_02090330)(0x20, &v, 0, 0);
        func_02003e70(self, 0x7e3, 0x7f, 0);
        break;
    }
    self->unk_48 = 5;
    void *g = data_020cbb18;
    if (func_02072e44(g)) {
        if (func_020729cc(g, a)) {
            ((s32 (*)(void *, s32))func_ov003_02220db0)(&v, ((*(u8 * *)(data_ov003_022348c0))[data_020ca315[k] * 4] << 12) / 10);
        }
    } else {
        ((s32 (*)(void *, s32))func_ov003_02220db0)(&v, ((*(u8 * *)(data_ov003_022348c0))[data_020ca315[k] * 4] << 12) / 10);
    }
}


//@ 0x2221e64
extern "C" void func_ov003_02221e64(Self_f5 *self, BOOL flag) {
    struct {
        V3_f5 a, b, c, a2, b2, a3, b3;
    } l;
    s32 n;
    if (flag) {
        CP(l.a, self->unk_6c);
        CP(l.b, self->unk_60);
        l.b.y = l.b.y - 0x1800;
        n = 0x14;
    } else {
        CP(l.a, self->unk_60);
        CP(l.b, self->unk_6c);
        l.b.y = l.b.y - l.a.y;
        n = 0x14;
    }
    CP(l.c, self->unk_54);
    CP(l.a2, l.a);
    CP(l.b2, l.b);
    if (((BOOL (*)(V3_f5 *, V3_f5 *, V3_f5 *))func_ov003_0222031c)(&l.c, &l.a2, &l.b2)) {
        self->unk_40 = 4;
        self->unk_94 = 1;
    } else {
        CP(l.a3, l.a);
        CP(l.b3, l.b);
        if (!func_ov003_02221dd8(&self->unk_54, &l.a3, &l.b3, self->unk_7c, 0x14cd, n)) {
            self->unk_40 = 4;
            self->unk_94 = 1;
        }
        self->unk_7c = self->unk_7c + 1;
    }
}


//@ 0x2221dd8
extern "C" BOOL func_ov003_02221dd8(V3_f5 *p, V3_f5 *a, V3_f5 *b, s32 n, s32 k, s32 m) {
    s32 mm, y, ang;
    volatile s32 t, d;
    if (m <= n) {
        return FALSE;
    }
    y = b->y;
    mm = m * m;
    t = ((k - (y >> 1)) << 3) / mm;
    d = func_020e9650(a, b);
    ang = ((s32 (*)(V3_f5 *, V3_f5 *))func_02002bdc)(a, b);
    s32 nn = n * n;
    p->y = a->y + (n * ((y + ((mm * t) >> 1)) / m) - ((nn * t) >> 1));
    ((s32 (*)(void *, s32, s32))func_ov003_02224828)(p, d / m, ang);
    return TRUE;
}


//@ 0x2221d60
extern "C" BOOL func_ov003_02221d60(Self_f5 *self, V3_f5 *p) {
    s32 c = self->unk_7c;
    s32 t = (c + 2) << 7;
    if (c == 0) {
        self->unk_98 = ((s32 (*)(V3_f5 *, V3_f5 *))func_02002bdc)(p, &self->unk_54);
    } else if (c >= 0x1e) {
        self->unk_40 = 4;
    }
    if (t > 0x214) {
        t = 0x214;
    }
    ((s32 (*)(void *, s32, s32))func_ov003_02224828)(&self->unk_54, t, self->unk_98);
    self->unk_7c = self->unk_7c + 1;
    V3_f5 v;
    v.x = self->unk_54.x;
    v.y = self->unk_54.y;
    v.z = self->unk_54.z;
    v.y = data_020c7c1c;
    ((void (*)(s32, V3_f5 *, s32, s32))func_020902d4)(self->unk_9c, &v, 0, 0);
    return TRUE;
}


//@ 0x2221cec
extern "C" void func_ov003_02221cec(Self_f5 *self, Ent_f5 *ent, V3_f5 *out) {
    if (ent->vfunc_5c(out) == 0) {
        V3_f5 *pv = &ent->unk_5c;
        out->x = pv->x;
        out->y = pv->y;
        out->z = pv->z;
    } else {
        s32 ang = func_020e7b98(self->unk_54.x - out->x, self->unk_54.z - out->z);
        s32 idx = ((u16)ang >> 4) * 2;
        out->x += func_01ffcb0c(0x4cd, data_02135f44[idx]);
        out->z += func_01ffcb0c(0x4cd, data_02135f44[idx + 1]);
    }
}


//@ 0x2221bfc
extern "C" void func_ov003_02221bfc(void *a) {
    s32 i = 0;
    void *net = data_020cbb18;
    volatile s32 zero = 0;
    s32 m1 = -1;
    s32 z = 0;
    for (; i < 4; i++) {
        if (func_020729cc(net, i) == 0) {
            u32 t = func_0204f4e0(i);
            if (t == 9) {
                t = 1;
            }
            switch (t) {
            case 0:
                func_ov003_02221b94(a, i);
                break;
            case 6:
                data_ov003_02257e9c[i].unk_80 = 1;
                func_ov003_02221b94(a, i);
                break;
            case 1:
                if (func_ov003_02221b78(a, i)) {
                    ((void (*)(u8, s32, s32, s32, s32))func_0204f4f8)(i, 8, m1, z, z);
                } else {
                    data_ov003_02257e9c[i].unk_40 = 4;
                }
                break;
            case 2:
                if (func_ov003_02221ab0(a, i)) {
                    ((void (*)(u8, s32, s32, s32, s32))func_0204f4f8)(i, 8, m1, zero, zero);
                } else {
                    data_ov003_02257e9c[i].unk_40 = 4;
                }
                break;
            case 3:
            case 4:
            case 5:
            case 7:
            case 8:
            case 9:
                break;
            }
        }
    }
}


//@ 0x2221b94
extern "C" void func_ov003_02221b94(void *a, s32 idx) {
    u32 r = func_0204f4c8(idx);
    Unk_ov003_02221364_Vec v;
    v.y = -0x1333;
    if (func_0204f4a4(&v, &v.z, idx)) {
        if (func_ov003_02221b34(a, idx, r, &v)) {
            ((void (*)(u8, s32, s32, s32, s32))func_0204f4f8)(idx, 3, -1, 0, 0);
        } else {
            Unk_ov003_02221ab0_Ent *e = data_ov003_02257e9c + idx;
            e->unk_40 = 4;
        }
    }
}


//@ 0x2221b78
extern "C" BOOL func_ov003_02221b78(void *a, u8 idx) {
    if (idx >= 4) {
        return FALSE;
    }
    Unk_ov003_02221ab0_Ent *e = data_ov003_02257e9c + idx;
    e->unk_40 = 4;
    return TRUE;
}


//@ 0x2221b34
extern "C" BOOL func_ov003_02221b34(void *a, u8 idx, u32 v, Unk_ov003_02221364_Vec *p) {
    if (idx >= 4) {
        return FALSE;
    }
    Unk_ov003_02221ab0_Ent *e = &data_ov003_02257e9c[idx];
    if (e->unk_40 != 0) {
        return FALSE;
    }
    Unk_ov003_02221364_Vec *d = &e->unk_60;
    d->x = p->x;
    d->y = p->y;
    d->z = p->z;
    s32 *p90 = &e->unk_90;
    *p90 = v;
    e->unk_40 = 1;
    e->unk_48 = 2;
    return TRUE;
}


//@ 0x2221ab0
extern "C" BOOL func_ov003_02221ab0(void *a, u8 idx) {
    if (idx >= 4) {
        return FALSE;
    }
    Unk_ov003_02221ab0_Ent *e = &data_ov003_02257e9c[idx];
    volatile Unk_ov003_02221364_Vec v;
    Unk_ov003_02221364_Vec *pv = &e->unk_60;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 st = e->unk_40;
    if (st == 3) {
        if (((s32 (*)(s32, s32))func_ov003_02223310)(idx, 0) == 0) {
            e->unk_40 = 4;
            return FALSE;
        }
    } else if (st == 0) {
        if (((s32 (*)(s32, s32))func_ov003_02223310)(idx, 1) == 0) {
            e->unk_40 = 4;
            return FALSE;
        }
    } else if (st == 2) {
        e->unk_40 = 3;
        if (((s32 (*)(s32, s32))func_ov003_02223310)(idx, 0) == 0) {
            e->unk_40 = 4;
            return FALSE;
        }
    }
    return TRUE;
}


//@ 0x22219dc
Unk_ov003_0225812c::Unk_ov003_0225812c()
{
    u8 *a = (u8 *)this;
    func_020f440c(a);
    *(volatile u8 **)(a + 0x40) = data_0213b91c;
    *(volatile u8 **)(a + 0x40) = data_0213b954;
    _ZN12Unk_02032238C1Ev(a + 0x4c);
    func_0209c370(a + 0x7c);
    _ZN12Unk_020dbd34C1Ev(a + 0x84);
    _ZN12Unk_020dbd54C1Ev(a + 0x144);
    *(u32 *)(a + 0x208) = 0;
    *(u32 *)(a + 0x20c) = 0;
    func_ov003_022218f8(a + 0x248);
    *(s8 *)(a + 0x7e) = -1;
    *(s32 *)(a + 0x244) = -1;
    *(s32 *)(a + 0x80) = 0;
    a[0x1fc] = 2;
    a[0x201] = 0;
    *(s32 *)(a + 0x204) = -1;
    *(s8 *)(a + 0x227) = -1;
    *(s32 *)(a + 0x22c) = 0;
    a[0x224] = 0;
    a[0x23c] = 0;
    *(s32 *)(a + 0x120) = 0x1000;
    *(s32 *)(a + 0x124) = 0x1000;
    *(s32 *)(a + 0x128) = 0x1000;
}


//@ 0x2221998
Unk_ov003_0225812c::~Unk_ov003_0225812c()
{
    u8 *a = (u8 *)this;
    func_ov003_022218f4(a + 0x248);
    _ZN12Unk_020dbd54D1Ev(a + 0x144);
    _ZN12Unk_020dbd34D1Ev(a + 0x84);
    func_0209c364(a + 0x7c);
    _ZN12Unk_02032238D1Ev(a + 0x4c);
    func_020f43fc(a);
}


//@ 0x222193c
Unk_ov003_02257be0::Unk_ov003_02257be0()
{
    unk_00 = 0;
    _ZN12Unk_0209c0ac13func_0209c0c8Ev(&unk_08);
}


//@ 0x2221904
Unk_ov003_02257be0::~Unk_ov003_02257be0()
{
}


//@ 0x22218f8
extern "C" void func_ov003_022218f8(u8 *p) {
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
}


//@ 0x22218f4
extern "C" void func_ov003_022218f4(void *p) {
}


//@ 0x2221884
Unk_ov003_02221ab0_Ent::Unk_ov003_02221ab0_Ent()
{
    Unk_ov003_02221ab0_Ent *a = this;
    func_020f440c(a);
    a->unk_40 = 0;
    a->unk_44 = -1;
    a->unk_48 = 0;
    a->unk_78 = -1;
    a->unk_80 = 0;
    a->unk_7c = 0;
    a->unk_84 = 0x1333;
    a->unk_88 = 0x1333;
    a->unk_8c = 0x1333;
    a->unk_94 = 0;
    a->unk_96 = 0;
    a->unk_98 = 0;
    a->unk_9a = 0;
    a->unk_9c = -1;
    a->unk_a0 = 0;
    a->unk_54 = 0x1000;
    a->unk_58 = 0x1000;
    a->unk_5c = 0x1000;
}


//@ 0x2221874
Unk_ov003_02221ab0_Ent::~Unk_ov003_02221ab0_Ent()
{
    func_020f43fc(this);
}


//@ 0x222183c
Unk_ov003_0223498c::Unk_ov003_0223498c() {
    unk_80 = 0;
}


//@ 0x22217d0
Unk_ov003_0223498c::~Unk_ov003_0223498c() {
}


//@ 0x22217ac
extern "C" BOOL func_ov003_022217ac(void *a, s32 idx) {
    BOOL r = FALSE;
    if (idx >= 0 && idx < 6) {
        Unk_ov003_02221524_Slot *s = ((Unk_ov003_02221524_Slot *)(data_ov003_0225812c)) + idx;
        s->unk_80 = 2;
        r = TRUE;
    }
    return r;
}


//@ 0x22216f8
extern "C" void func_ov003_022216f8(void *a, s32 idx) {
    if (idx >= 0 && idx < 6) {
        Unk_ov003_02221524_Slot *s = &((Unk_ov003_02221524_Slot *)(data_ov003_0225812c))[idx];
        s->unk_80 = 0;
        func_020902f8(s->unk_204);
        s->unk_204 = -1;
        if (s->unk_1fc == 0) {
            s->unk_1fc = 3;
        } else if (s->unk_1fc == 1) {
            s->unk_1fc = 4;
        }
        s32 *p208 = (s32 *)((u8 *)s + 0x208);
        p208[0] = idx;
        p208[1] = 0;
        if (s->unk_22c != 0) {
            Unk_ov003_02221ab0_Ent *ent = data_ov003_02257e9c + s->unk_227;
            if (ent->unk_40 != 1) {
                ((void (*)(void *, s32))func_0205fbbc)(s->unk_22c, 0);
                s->unk_22c = 0;
                s->unk_227 = -1;
                s->unk_23c = 0;
            }
            s->unk_224 = 0;
        }
    }
}


//@ 0x22216cc
extern "C" BOOL func_ov003_022216cc(u8 *a) {
    (*(u32 *)((u8 *)&data_ov003_02257be0)) = 2;
    ((void (*)(void *, void *))func_0209c25c)(a + 0x68, ((u8 *)((u8 *)&data_ov003_02257be0.unk_04.raw[0])));
    func_0209c0c8(((u8 *)((u8 *)&data_ov003_02257be0.unk_08.raw[0])));
    return TRUE;
}


//@ 0x2221684
extern "C" void func_ov003_02221684(u8 *a) {
    (*(u32 *)((u8 *)&data_ov003_02257be0)) = 0;
    func_020546ec(((u8 *)((u8 *)&data_ov003_02257be0.unk_58.raw[0])));
    func_02054b14(((u8 *)((u8 *)&data_ov003_02257be0.unk_58.raw[0])));
    func_0209c0b4(((u8 *)((u8 *)&data_ov003_02257be0.unk_08.raw[0])));
    func_0209c224(a + 0x68, ((u8 *)((u8 *)&data_ov003_02257be0.unk_04.raw[0])));
    data_ov003_02257be0.unk_11c.unk_18 = 0;
    data_ov003_02257be0.unk_11c.unk_1c = 0;
}


//@ 0x2221524
BOOL Unk_ov003_0223498c::vfunc_00() {
    u8 *a = (u8 *)this;
    func_0209c1a4(a + 0x50, 6, 0, 0, 0x800, (void *)func_0205c020, (void *)func_0205c004, (void *)"fish_sdw");
    func_0209c1a4(a + 0x68, 1, 0x400, 0x80, 0x800, (void *)func_0205bfec, (void *)func_0205bfd0, (void *)"fish_fin");
    *(s32 *)(a + 0x80) = ((s32 (*)(u32, void *, s32, u32))func_020641ec)((*(u32 *)((u8 *)&data_ov003_0223476c)), data_021f482c, 4, 0);
    Unk_ov003_02221524_Slot *s = ((Unk_ov003_02221524_Slot *)(data_ov003_0225812c));
    s32 i = 0;
    s32 z = 0;
    do {
        ((void (*)(void *, s32, void *))func_ov003_02220128)(s, *(s32 *)(a + 0x80), a + 0x50);
        if (i < 3) {
            s->unk_1fc = 3;
        } else if (i < 6) {
            s->unk_1fc = 4;
        }
        s32 *p208 = &s->unk_208.a;
        p208[0] = i;
        p208[1] = z;
        *((u8 *)s + 0x211) = i;
        *(u16 *)((u8 *)s + 0x212) = i * 0x190 + 0x960;
        func_02003ecc(s);
        func_02003cbc((u8 *)s + 0x40);
        s++;
        i++;
    } while (i < 6);
    u8 *q = (u8 *)data_ov003_02257e9c;
    s32 k = 0;
    void *net = data_020cbb18;
    for (; k < 4; k++) {
        if (func_02072e44(net) && !func_020729cc(net, k) && func_0204f4e0(k) == 3) {
            ((void (*)(u8, s32, s32, s32, s32))func_0204f4f8)(k, 6, -1, z, z);
        }
        func_02003ecc(q);
        q += 0xa4;
    }
    return TRUE;
}


//@ 0x2221498
extern "C" void func_ov003_02221498(void *a, u8 *b, void *c) {
    Unk_ov003_02221364_Vec v1;
    Unk_ov003_02221364_Vec *pv = (Unk_ov003_02221364_Vec *)(b + 0x120);
    v1.x = pv->x;
    v1.y = pv->y;
    v1.z = pv->z;
    ((void (*)(void *, Unk_ov003_02221364_Vec *))func_02003e80)(b, &v1);
    Unk_ov003_02221364_Vec v2;
    pv = (Unk_ov003_02221364_Vec *)(b + 0x120);
    v2.x = pv->x;
    v2.y = pv->y;
    v2.z = pv->z;
    func_02003c70(b + 0x40, &v2);
    if (data_ov003_02257b90[*(s32 *)(b + 0x80)].exit) {
        (((Unk_ov003_0223498c *)a)->*(data_ov003_02257b90[*(s32 *)(b + 0x80)].exit))(b, c);
    }
    ((void (*)(void *))func_ov003_02220388)(b);
}


//@ 0x222144c
extern "C" void func_ov003_0222144c(void *a, s32 idx, u8 *b, void *c) {
    if (idx >= 0 && idx < 5) {
        *(s32 *)(b + 0x80) = idx;
        s32 i = *(volatile s32 *)(b + 0x80);
        Unk_ov003_0222144c_Ent *e = &data_ov003_02257b90[i];
        if (e->enter) {
            (((Unk_ov003_0223498c *)a)->*(e->enter))(b, c);
        }
    }
}


//@ 0x2221448
extern "C" void func_ov003_02221448() {
}


//@ 0x22213d0
extern "C" void func_ov003_022213d0(u8 *a, u8 *b, s32 c) {
    if (a[0x84] == 0) {
        u32 t = b[0x1fc];
        if (t == 3) {
            if (b[0x23c] == 0) {
                if (((s32 (*)(void *, void *, s32))func_ov003_02220844)(a, b, 0) != 0) {
                    func_ov003_0222144c(a, 1, b, (void *)c);
                }
                a[0x84] = 1;
            }
        } else if (t == 4) {
            if (b[0x23c] == 0) {
                if (((s32 (*)(void *, void *, s32))func_ov003_02220844)(a, b, 1) != 0) {
                    func_ov003_0222144c(a, 1, b, (void *)c);
                }
                a[0x84] = 1;
            }
        }
    }
}


//@ 0x22213cc
extern "C" void func_ov003_022213cc() {
}


//@ 0x2221364
extern "C" void func_ov003_02221364(u8 *a, u8 *b, s32 c) {
    if ((*(void * *)&data_021c3070) != 0) {
        Unk_ov003_02221364_Vec v;
        v = (*(Unk_ov003_02221364_Vec *)&data_021c309c);
        if (((s32 (*)(void *, void *, s32, s32, s32))func_ov003_0222034c)(b + 0x12c, &v, 0xa000, 0x10000, 0xa000)) {
            func_ov003_022217ac(a, c);
            if (b[0x7f] != 0) {
                func_ov003_022216cc(a);
            }
        }
    }
}


//@ 0x2221360
extern "C" void func_ov003_02221360() {
}


//@ 0x2221294
extern "C" void func_ov003_02221294(O_f3 *o, E_f3 *e) {
    s32 ang;
    V3_f3 *pv;
    if (e->unk_7f != 0) {
        u8 *p = ((u8 *)((u8 *)&data_ov003_02257be0));
        if (((s32 (*)(void *, void *))func_ov003_02220030)(p, (u8 *)o + 0x68) != 0) {
            ((s32 (*)(E_f3 *))func_ov003_022247f0)(e);
            e->unk_80 = 3;
            e->unk_1fd = 0x1f;
            pv = &e->unk_120;
            ang = e->unk_138;
            func_ov003_0222105c(o, pv, e->unk_144, ang);
            p = p + 0x58;
            func_ov003_0222105c(o, pv, p, ang);
        }
    } else {
        ((s32 (*)(E_f3 *))func_ov003_022247f0)(e);
        if (e->unk_201 > 3 || e->unk_200 == 3) {
            e->unk_80 = 3;
            e->unk_1fd = 0x1f;
            e->unk_201 = 0;
            func_ov003_0222105c(o, &e->unk_120, e->unk_144, e->unk_138);
            if (e->unk_7e == 11) {
                ((s32 (*)(E_f3 *))func_ov003_02222754)(e);
            }
        }
    }
}


//@ 0x2221290
extern "C" void func_ov003_02221290(void) {
}


//@ 0x22211fc
extern "C" void func_ov003_022211fc(O_f3 *o, E_f3 *e, s32 idx) {
    if ((*(void * *)&data_021c3070) != NULL) {
        V3_f3 v = (*(V3_f3 *)&data_021c309c);
        if (((s32 (*)(V3_f3 *, V3_f3 *, s32, s32, s32))func_ov003_0222034c)(&e->unk_120, &v, 0xa000, 0x10000, 0xa000) != 0) {
            e->unk_80 = 3;
            e->unk_244 = -1;
        } else {
            s32 t = e->unk_244;
            s32 m = -1;
            if (t != m) {
                if (t == 0) {
                    if (e->unk_7f != 0) {
                        ((s32 (*)(O_f3 *))func_ov003_02221684)(o);
                    }
                    ((s32 (*)(O_f3 *, s32))func_ov003_022216f8)(o, idx);
                } else {
                    e->unk_244 = t - 1;
                }
            }
        }
    }
}


//@ 0x22211f8
extern "C" void func_ov003_022211f8(void) {
}


//@ 0x2221134
extern "C" void func_ov003_02221134(O_f3 *o, E_f3 *e, s32 x) {
    ((s32 (*)(E_f3 *))func_ov003_022247b8)(e);
    V3_f3 *pb = &e->unk_218;
    V3_f3 *pa = &e->unk_120;
    s32 t = func_02133150(((u8 *)((u8 *)&data_ov003_022349d4[0].c0))[e->unk_1ff * 0x14] << 12, 10);
    func_020309d4((u8 *)e + 0x4c, pa, pb, e->unk_138, t, 0, 0xb);
    pb->x = e->unk_120.x;
    pb->y = pa->y;
    pb->z = pa->z;
    V3_f3 v;
    v.x = e->unk_120.x;
    v.y = pa->y;
    v.z = pa->z;
    v.y = -0x1333;
    func_ov003_0222105c(o, &v, e->unk_144, e->unk_138);
    if (e->unk_7f != 0) {
        func_ov003_022210a4(o, e);
    } else {
        func_020547e4(e->unk_144);
    }
    func_ov003_02220d94(o, e, x);
}


//@ 0x22210a4
extern "C" void func_ov003_022210a4(O_f3 *o, E_f3 *e) {
    Unk_ov003_02257be0_f3 *p = (Unk_ov003_02257be0_f3 *)((u8 *)((u8 *)&data_ov003_02257be0));
    V3_f3 *pv = &e->unk_120;
    p->unk_48.x = pv->x;
    p->unk_48.y = pv->y;
    p->unk_48.z = pv->z;
    s16 ang = e->unk_138;
    p->unk_54 = ang;
    u8 *q = p->unk_58;
    *(s32 *)(q + 0xac) = e->unk_1f0;
    *(u32 *)(q + 0xa4) = (u32)(u16)(((Unk_ov003_022210a4_Bits *)&e->unk_1e8)->mid + 1) << 12;
    func_ov003_0222105c(o, pv, q, ang);
    func_020547e4(e->unk_144);
    func_020547e4(q);
    Unk_ov003_022210a4_R *r = &p->unk_11c;
    func_020566bc(r);
    *r->unk_18 = r->unk_08;
}


//@ 0x222105c
extern "C" void func_ov003_0222105c(O_f3 *a, void *b, void *dstv, s32 ang) {
    u8 *dst = (u8 *)dstv;
    V3_f3 v;
    s32 r = func_0203eeac(&v);
    func_020e8388(data_021f47e0, v.x, v.y, v.z);
    func_020e8434(data_021f47e0, r);
    func_020e8404(data_021f47e0, ang);
    struct T { s32 v[12]; };
    *(T *)(dst + 0x64) = *(T *)data_021f47e0;
}


//@ 0x222101c
BOOL Unk_ov003_0223498c::vfunc_18() {
    O_f3 *o = (O_f3 *)this;
    E_f3 *e = ((E_f3 *)(data_ov003_0225812c));
    s32 i;
    for (i = 0; i < 6; e = (E_f3 *)((u8 *)e + 0x24c), i++) {
        ((s32 (*)(O_f3 *, E_f3 *, s32))func_ov003_02221498)(o, e, i);
    }
    o->unk_84 = 0;
    func_ov003_02220fc8(o);
    return TRUE;
}


//@ 0x2220fc8
extern "C" void func_ov003_02220fc8(O_f3 *o) {
    if (((s32 (*)(void *))func_02072e44)(data_020cbb18) != 0) {
        ((s32 (*)(O_f3 *))func_ov003_02221bfc)(o);
    }
    s32 i;
    u8 *p = ((u8 *)(data_ov003_02257e9c));
    u8 *q = ((u8 *)(data_ov003_02257d1c));
    for (i = 0; i < 4; i++) {
        ((s32 (*)(void *, u8))func_ov003_02222658)(p, i);
        p += 0xa4;
        ((s32 (*)(void *, void *))func_ov003_02224ae0)(((u8 *)((u8 *)&data_ov003_02257a74)), q);
        q += 0x60;
    }
}


//@ 0x2220eec
BOOL Unk_ov003_0223498c::vfunc_24() {
    E_f3 *e = ((E_f3 *)(data_ov003_0225812c));
    s32 i;
    for (i = 0; i < 6; i++) {
        if (e->unk_80 == 3) {
            Unk_ov003_02220eec_Rec *rec = &((Unk_ov003_02220eec_Rec *)(data_ov003_022349d4))[e->unk_1ff];
            V3_f3 v;
            v.x = func_02133150(rec->unk_0e << 12, 100);
            v.y = 0x1000;
            v.z = func_02133150(rec->unk_0f << 12, 100);
            u8 *p0 = (u8 *)e->unk_1a0;
            u8 *b = p0 + *(s32 *)(p0 + 8);
            u8 *c = b + *(u16 *)(b + 0xa);
            Unk_ov003_02220eec_Bits *q = (Unk_ov003_02220eec_Bits *)(b + *(s32 *)(c + 8));
            s32 n = e->unk_1fd;
            if (q != NULL && n > 0) {
                q->unk_0c = q->unk_0c & 0xffe0ffff;
                q->unk_0c = q->unk_0c | ((n & 0x1f) << 16);
            }
            func_020547cc(e->unk_144, &v);
            if (e->unk_7f != 0) {
                V3_f3 v2;
                v2.x = func_02133150(rec->unk_0e << 12, 100);
                v2.y = 0x1000;
                v2.z = func_02133150(rec->unk_0f << 12, 100);
                func_020547cc(((u8 *)((u8 *)&data_ov003_02257be0.unk_58.raw[0])), &v2);
            }
        }
        e = (E_f3 *)((u8 *)e + 0x24c);
    }
    return TRUE;
}


//@ 0x2220ed0
BOOL Unk_ov003_0223498c::vfunc_0c() {
    O_f3 *o = (O_f3 *)this;
    func_ov003_02220e58(o);
    func_ov003_02220e2c((s32)o);
    func_ov003_02220e10((s32)o);
    return TRUE;
}


//@ 0x2220e58
extern "C" void func_ov003_02220e58(O_f3 *o) {
    BOOL f = FALSE;
    E_f3 *e = ((E_f3 *)(data_ov003_0225812c));
    s32 i;
    for (i = 0; i < 6; i++) {
        if (e->unk_7f != 0) {
            f = TRUE;
        }
        ((s32 (*)(O_f3 *, s32))func_ov003_022216f8)(o, i);
        ((s32 (*)(void *, void *))func_0209c224)((u8 *)o + 0x50, (u8 *)e + 0x7c);
        func_02003e50(e);
        func_02003c30((u8 *)e + 0x40);
        e = (E_f3 *)((u8 *)e + 0x24c);
    }
    func_020e8558(o->unk_80);
    func_0209c15c((u8 *)o + 0x50);
    if (f != FALSE) {
        ((s32 (*)(O_f3 *))func_ov003_02221684)(o);
    }
    func_0209c15c((u8 *)o + 0x68);
}


//@ 0x2220e2c
extern "C" void func_ov003_02220e2c(s32 a) {
    u8 *p = ((u8 *)(data_ov003_02257e9c));
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 (*)(void *, u8))func_ov003_02222274)(p, i);
        func_02003e50(p);
        p += 0xa4;
    }
}


//@ 0x2220e10
extern "C" void func_ov003_02220e10(s32 a) {
    u8 *p = ((u8 *)(data_ov003_02257d1c));
    s32 i;
    for (i = 0; i < 4; i++) {
        p[0x30] = 0;
        *(s32 *)(p + 0x58) = 0;
        p += 0x60;
    }
}


//@ 0x2220db0
extern "C" BOOL func_ov003_02220db0(s32 a, s32 b) {
    s32 i;
    E_f3 *e;
    BOOL r = FALSE;
    e = ((E_f3 *)(data_ov003_0225812c));
    i = 0;
    for (; i < 6; i++) {
        V3_f3 *pv = &e->unk_120;
        V3_f3 v = *pv;
        if (((s32 (*)(V3_f3 *, s32))func_020e9650)(&v, a) <= b) {
            if (func_ov003_02220c68(e, a) != 0) {
                r = TRUE;
            }
        }
        e = (E_f3 *)((u8 *)e + 0x24c);
    }
    return r;
}


//@ 0x2220d94
extern "C" void func_ov003_02220d94(O_f3 *o, E_f3 *e, s32 idx) {
    func_ov003_02220d30(o, e, idx);
    func_ov003_02220a2c(o, e, idx);
}


//@ 0x2220d30
extern "C" void func_ov003_02220d30(O_f3 *o, E_f3 *e, s32 idx) {
    u32 t = e->unk_1fd;
    if (t == 0x1f) {
        func_ov003_02220cf8((s32)o, e);
    } else if (t != 0x1f) {
        if (e->unk_7f == 0) {
            e->unk_1fd = t - 1;
        }
    }
    if (e->unk_1fd <= 1) {
        e->unk_1fd = 0x1f;
        if (((s32 (*)(E_f3 *))func_ov003_022234fc)(e) == 2) {
            if (e->unk_7f != 0) {
                ((s32 (*)(O_f3 *))func_ov003_02221684)(o);
            }
        }
        ((s32 (*)(O_f3 *, s32))func_ov003_022216f8)(o, idx);
    }
}


//@ 0x2220cf8
extern "C" BOOL func_ov003_02220cf8(s32 a, E_f3 *e) {
    BOOL r = FALSE;
    if (func_ov003_02220c98(a, 4, e) != 0) {
        s32 t = ((s32 (*)(s32))func_020947f0)(4);
        if (t == 0) {
            return r;
        }
        func_ov003_02220c68(e, t);
        r = TRUE;
    }
    return r;
}


//@ 0x2220c98
extern "C" BOOL func_ov003_02220c98(s32 a, s32 b, E_f3 *e) {
    BOOL r = FALSE;
    if (((s32 (*)(s32, V3_f3 *, s32))func_ov003_02220994)(a, &e->unk_120, b) != 0) {
        if (func_ov003_02212824(b) != 0) {
            r = TRUE;
        } else if (((s32 (*)(s32))func_ov003_022209c8)(b) != 0) {
            u8 *pc = &e->unk_214;
            u32 t = *pc;
            if (t != 0) {
                *pc = t - 1;
            } else {
                r = TRUE;
            }
        } else {
            e->unk_214 = 6;
        }
    } else {
        e->unk_214 = 6;
    }
    return r;
}


//@ 0x2220c68
extern "C" BOOL func_ov003_02220c68(E_f3 *e, s32 a) {
    BOOL r = FALSE;
    if (e == NULL) {
        return r;
    }
    if (e->unk_23c == 1) {
        return r;
    }
    if (func_ov003_02220b00(e, a) != 0) {
        r = TRUE;
    }
    return r;
}


//@ 0x2220b00
extern "C" BOOL func_ov003_02220b00(E_f3 *e, s32 a) {
    if (e == NULL) {
        return FALSE;
    }
    if (e->unk_200 == 5 || e->unk_224 == 6 || e->unk_80 != 3) {
        return FALSE;
    }
    if (e->unk_23c == 0) {
        e->unk_200 = 5;
    } else {
        e->unk_224 = 6;
    }
    e->unk_1fd = 0x1e;
    e->unk_13c = 0;
    u16 *pa = (u16 *)&e->unk_138;
    V3_f3 *pv = &e->unk_120;
    V3_f3 v = *pv;
    if (e->unk_7f != 0) {
        *pa = 0;
    } else {
        *pa = ((s32 (*)(s32, V3_f3 *))func_02002bdc)(a, &v);
    }
    u32 k = e->unk_1ff;
    s32 *pr = &e->unk_204;
    V3_f3 w = v;
    w.y = data_020c7c1c;
    switch (k) {
    case 0: *pr = ((s32 (*)(s32, V3_f3 *, s32, s32))func_02090330)(0x1a, &w, 0, 0); break;
    case 1: *pr = ((s32 (*)(s32, V3_f3 *, s32, s32))func_02090330)(0x1b, &w, 0, 0); break;
    case 2: *pr = ((s32 (*)(s32, V3_f3 *, s32, s32))func_02090330)(0x1c, &w, 0, 0); break;
    case 3: *pr = ((s32 (*)(s32, V3_f3 *, s32, s32))func_02090330)(0x1d, &w, 0, 0); break;
    case 4: *pr = ((s32 (*)(s32, V3_f3 *, s32, s32))func_02090330)(0x1e, &w, 0, 0); break;
    case 5: *pr = ((s32 (*)(s32, V3_f3 *, s32, s32))func_02090330)(0x1f, &w, 0, 0); break;
    case 6: *pr = ((s32 (*)(s32, V3_f3 *, s32, s32))func_02090330)(0x21, &w, 0, 0); break;
    case 7: *pr = ((s32 (*)(s32, V3_f3 *, s32, s32))func_02090330)(0x20, &w, 0, 0); break;
    }
    return TRUE;
}


//@ 0x2220a2c
extern "C" void func_ov003_02220a2c(O_f3 *o, E_f3 *e, s32 idx) {
    if (e->unk_23c == 0 || e->unk_224 == 6) {
        if ((*(void * *)&data_021c3070) != NULL) {
            V3_f3 v = (*(V3_f3 *)&data_021c309c);
            if (((s32 (*)(V3_f3 *, V3_f3 *, s32, s32, s32))func_ov003_0222034c)(&e->unk_120, &v, 0xa000, 0x10000, 0xa000) == 0) {
                if (e->unk_200 == 5 || e->unk_224 == 6) {
                    if (e->unk_7f != 0) {
                        ((s32 (*)(O_f3 *))func_ov003_02221684)(o);
                    }
                    ((s32 (*)(O_f3 *, s32))func_ov003_022216f8)(o, idx);
                } else {
                    if ((u32)(e->unk_1fe - 4) <= 2) {
                        if (((s32 (*)(E_f3 *))func_ov003_02222ce0)(e) != 0) {
                            e->unk_244 = 0x12c;
                        } else {
                            e->unk_244 = 0x4b0;
                        }
                    } else {
                        e->unk_244 = 0x4b0;
                    }
                    e->unk_80 = 4;
                }
            }
        }
    }
}


//@ 0x22209ec
extern "C" void func_ov003_022209ec(s32 *p, s32 b) {
    Unk_ov003_022209ec_Buf buf;
    func_020339bc(&buf, p, 0, 0);
    p[0] += func_01ffcb0c(b, buf.unk_24);
    p[2] += func_01ffcb0c(b, buf.unk_2c);
    func_02033988(&buf);
}


//@ 0x22209c8
extern "C" BOOL func_ov003_022209c8(s32 idx) {
    BOOL r = FALSE;
    u8 *o = ((u8 * (*)(s32))func_02095204)(idx);
    if (o != NULL) {
        if (*(s32 *)(o + 0x98) > 0x548) {
            r = TRUE;
        }
    }
    return r;
}


//@ 0x2220994
extern "C" BOOL func_ov003_02220994(void *self, s32 b, s32 idx) {
    u8 *o = ((u8 * (*)(s32))func_02095204)(idx);
    if (o == NULL) {
        return FALSE;
    }
    if (((long long (*)(void *, s32))func_020e9600)(o + 0x5c, b) <= 0x135c3) {
        return TRUE;
    }
    return FALSE;
}


//@ 0x2220844
extern "C" BOOL func_ov003_02220844(void *self, Unk_ov003_02220844_Obj *e, s32 flag) {
    BOOL r = FALSE;
    s32 a = -1, b = -1;
    Unk_ov003_02220128_Pos cd;
    cd.a = -1;
    cd.b = -1;
    s32 x, y;
    Unk_ov003_02220128_Vec3 v;
    s32 fl;
    switch (flag) {
    case 0:
        fl = 0;
        break;
    default:
        fl = 1;
        break;
    }
    if (func_0204f134(&x, &y, fl)) {
        if (func_ov003_02220460(self, &a, &b, &cd.a, &cd.b, y, flag, e)) {
            if (func_ov003_022203f8(self, e, x)) {
                func_0204ed8c(&v, a, b);
                v.y = 0xffffeccd;
                s32 t = x;
                e->unk_7e = t;
                e->unk_7f = (u32)(t - 0x34) <= 2 ? 1 : 0;
                e->unk_1fe = y;
                e->unk_1ff = data_020ca314[x * 6];
                e->unk_138 = -0x8000;
                e->unk_12c = v.x;
                e->unk_130 = v.y;
                e->unk_134 = v.z;
                e->unk_1fc = flag;
                r = TRUE;
                e->unk_80 = r;
                e->unk_200 = 0;
                Unk_ov003_02220128_Vec3 *pv = &e->unk_218;
                *pv = v;
                s32 db = cd.b;
                Unk_ov003_02220128_Pos *pp = &e->unk_208;
                pp->a = cd.a;
                pp->b = db;
                e->unk_244 = -1;
            }
        } else if (flag == 0) {
            e->unk_1fc = 3;
        } else if (flag == 1) {
            e->unk_1fc = 4;
        }
    } else if (flag == 0) {
        e->unk_1fc = 5;
    } else if (flag == 1) {
        e->unk_1fc = 6;
    }
    return r;
}


//@ 0x222069c
extern "C" BOOL func_ov003_0222069c(void *self, u8 *out, s32 *cnt, s32 mode) {
    BOOL result = FALSE;
    Unk_ov003_0222069c_Grid *g = (*(Unk_ov003_0222069c_Grid * *)&data_021c47c4);
    if (g != NULL) {
        s32 x, y;
        for (x = 1; x < (s32)g->unk_08 - 1; x++) {
            for (y = 1; y < (s32)g->unk_04 - 1; y++) {
                Unk_ov003_0222069c_Cell *c;
                if ((u32)x < g->unk_04 && (u32)y < g->unk_08 && g->unk_00 != NULL) {
                    c = &g->unk_00[y * g->unk_04 + x];
                } else {
                    c = (Unk_ov003_0222069c_Cell *)result;
                }
                if (c == NULL) {
                    continue;
                }
                switch (mode) {
                case 6:
                    if ((func_020374e8(c) & 8) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                case 0:
                    if ((func_020374e8(c) & 0x7f000) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                case 1:
                    if ((func_020374e8(c) & 0x100) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                case 2:
                    if ((func_020374e8(c) & 0x80000) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                case 3:
                    if (func_020375bc(c) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                case 4: {
                    u32 t = func_020374e8(c);
                    if ((t & 0x7f000) != 0 && (t & 8) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                }
                case 5:
                    if ((func_020374e8(c) & 8) != 0) {
                        out[*cnt * 2] = x;
                        (&out[*cnt * 2])[1] = y;
                        (*cnt)++;
                    }
                    break;
                }
            }
        }
    }
    if (*cnt > 0) {
        result = TRUE;
    }
    return result;
}


//@ 0x2220460
extern "C" BOOL func_ov003_02220460(void *self, s32 *ox, s32 *oz, s32 *a3, s32 *a4, s32 mode, s32 flag, Unk_ov003_02220844_Obj *e) {
    s32 z = 0;
    s32 cnt = z;
    s32 sx, sz;
    u8 grid[0x20];
    Unk_ov003_02220128_Vec3 v44;
    Unk_ov003_02220128_Vec3 v50;
    Unk_ov003_02220128_Vec3 v5c;
    u8 cand[0x204];
    s32 x, y;
    if (data_021c3070 == 0) {
        return z;
    }
    v44 = data_021c309c;
    func_0204edd8(&v50, &v44);
    if (func_ov003_0222069c(self, grid, &cnt, mode) == 0) {
        return z;
    }
    s32 k = func_ov003_022202ec(z, (u16)cnt);
    s32 k2 = k * 2;
    *a3 = ((s8 *)grid)[k2];
    *a4 = ((s8 *)&grid[1])[k2];
    s32 ax = *a3;
    s32 az = *a4;
    if (flag == 0) {
        Unk_ov003_0225812c *p;
        s32 i;
        p = data_ov003_0225812c;
        for (i = z; i < 3; p++, i++) {
            if ((void *)e != (void *)p) {
                Unk_ov003_02220128_Pos *q = &p->unk_208;
                if (ax == p->unk_208.a && az == q->b) {
                    return FALSE;
                }
            }
        }
    } else if (flag == 1) {
        Unk_ov003_0225812c *p;
        s32 i;
        p = &data_ov003_0225812c[3];
        for (i = 3; i < 6; p++, i++) {
            if ((void *)e != (void *)p) {
                Unk_ov003_02220128_Pos *q = &p->unk_208;
                if (ax == p->unk_208.a && az == q->b) {
                    return FALSE;
                }
            }
        }
    }
    func_0204edf8(&sx, &sz, ax, az, 0, 0);
    s32 xlim = sx + 0x10;
    s32 zlim = sz + 0x10;
    for (x = sx; x < xlim; x++) {
        for (y = sz; y < zlim; y++) {
            switch (mode) {
            case 5:
            case 6:
                if (func_020312a8(x, y) == 1) {
                    cand[z * 2] = x;
                    (&cand[z * 2])[1] = y;
                    z++;
                }
                break;
            case 0:
            case 1:
                if (func_020312a8(x, y) == 2) {
                    cand[z * 2] = x;
                    (&cand[z * 2])[1] = y;
                    z++;
                }
                break;
            case 2:
                if (y < sz + 3) {
                    if (func_020312a8(x, y) == 2) {
                        cand[z * 2] = x;
                        (&cand[z * 2])[1] = y;
                        z++;
                    }
                }
                break;
            case 3:
                if (func_020312ec(x, y) != 0) {
                    cand[z * 2] = x;
                    (&cand[z * 2])[1] = y;
                    z++;
                }
                break;
            case 4:
                if (func_020312a8(x, y) == 2 || func_020312a8(x, y) == 1) {
                    cand[z * 2] = x;
                    (&cand[z * 2])[1] = y;
                    z++;
                }
                break;
            }
        }
    }
    if (z == 0) {
        *ox = -1;
        *oz = -1;
        return FALSE;
    }
    s32 kk = (s16)func_ov003_022202ec(0, (u16)z) * 2;
    s8 *cq = (s8 *)&cand[1];
    s32 rx, ry;
    ry = cq[kk];
    rx = ((s8 *)cand)[kk];
    func_0204ed8c(&v5c, rx, ry);
    if (func_ov003_0222034c((s32 *)&v5c, (s32 *)&v50, 0xa000, 0x10000, 0xa000)) {
        *ox = -1;
        *oz = -1;
        return FALSE;
    }
    *ox = rx;
    *oz = ry;
    return TRUE;
}


//@ 0x22203f8
extern "C" BOOL func_ov003_022203f8(void *self, Unk_ov003_02220844_Obj *e, s32 id) {
    BOOL ok = Unk_ov003_022203f8_Chk(self, id);
    if (ok) {
        if (((u8 * (*)(s32))func_02095204)(4) == NULL) {
            return FALSE;
        }
        s32 i;
        Unk_ov003_0225812c *p;
        p = &data_ov003_0225812c[3];
        i = 3;
        for (; i < 6; p++, i++) {
            if ((void *)e != (void *)p && p->unk_7f != 0) {
                return FALSE;
            }
        }
    } else if (id == 0x37) {
        if (func_ov003_022203e0(self) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}


//@ 0x22203e0
extern "C" BOOL func_ov003_022203e0(void *self) {
    BOOL r = FALSE;
    u32 t = func_020b8fe8() - 1;
    if (t <= 1) {
        r = TRUE;
    }
    return r;
}


//@ 0x2220388
extern "C" void func_ov003_02220388(Unk_ov003_02220844_Obj *self) {
    if (func_020e7500(&self->unk_212) == 0) {
        if ((u32)self->unk_80 <= 1) {
            self->unk_80 = 0;
            u32 b = self->unk_211;
            if (b < 3) {
                self->unk_1fc = 3;
            } else if (b < 6) {
                self->unk_1fc = 4;
            }
        }
        self->unk_212 = 0x960;
    }
}


//@ 0x222034c
extern "C" BOOL func_ov003_0222034c(s32 *a, s32 *b, s32 c, s32 d, s32 e) {
    BOOL r = FALSE;
    s32 dx = b[0] - a[0];
    if (dx < 0) {
        dx = -dx;
    }
    if (dx > c) {
        return FALSE;
    }
    s32 az = a[2];
    s32 bz = b[2];
    s32 dz = bz - az;
    if (dz >= 0) {
        if (dz <= d) {
            r = TRUE;
        }
    } else {
        if (az - bz <= e) {
            r = TRUE;
        }
    }
    return r;
}


//@ 0x222031c
extern "C" BOOL func_ov003_0222031c(s32 *a, s32 *b, s32 *c) {
    if (func_ov003_02220300(a[0], b[0], c[0])) {
        if (func_ov003_02220300(a[2], b[2], c[2])) {
            return TRUE;
        }
    }
    return FALSE;
}


//@ 0x2220300
extern "C" BOOL func_ov003_02220300(s32 a, s32 b, s32 c) {
    BOOL r = FALSE;
    a = a - b;
    if (a < 0) {
        a = -a;
    }
    b = c - b;
    if (b < 0) {
        b = -b;
    }
    if (a >= b) {
        r = TRUE;
    }
    return r;
}


//@ 0x22202ec
extern "C" s32 func_ov003_022202ec(s32 a, u16 b) {
    return a + ((BOOL (*)(s32))func_02063b8c)(b - a);
}


//@ 0x22202cc
extern "C" s32 func_ov003_022202cc(s32 a, u16 b) {
    s32 r = func_ov003_022202ec(a, b);
    if (((BOOL (*)(s32))func_02063b8c)(2) == 0) {
        r *= -1;
    }
    return r;
}


//@ 0x2220290
extern "C" BOOL func_ov003_02220290(Unk_ov003_02220128_Vec3 *out, s32 idx) {
    BOOL r = FALSE;
    if (idx < 0 || idx >= 4) {
        return FALSE;
    }
    Unk_ov003_02257e9c_Rec *rec = &((Unk_ov003_02257e9c_Rec *)(data_ov003_02257e9c))[idx];
    if (rec->unk_48 == 1) {
        Unk_ov003_02220128_Vec3 *pv = &rec->unk_60;
        *out = *pv;
        r = TRUE;
    }
    return r;
}


//@ 0x22201bc
extern "C" BOOL func_ov003_022201bc(s32 idx, u16 id0, Unk_ov003_02220128_Vec3 *pos) {
    volatile u16 id = id0;
    BOOL ok = FALSE;
    u32 v0 = id;
    u32 v1 = id;
    if (v1 >= 0x12e8 && v0 <= 0x131f) {
        ok = TRUE;
    }
    if (!ok) {
        return FALSE;
    }
    if (idx < 0 || idx >= 4) {
        return FALSE;
    }
    Unk_ov003_02257e9c_Rec *rec = &((Unk_ov003_02257e9c_Rec *)(data_ov003_02257e9c))[idx];
    if (rec->unk_40 != 0) {
        return FALSE;
    }
    u8 *ob = ((u8 * (*)(s32))func_02095204)(idx);
    if (ob == NULL) {
        return FALSE;
    }
    Unk_ov003_02220128_Vec3 v;
    Unk_ov003_02220128_Vec3 *ps = (Unk_ov003_02220128_Vec3 *)(ob + 0x5c);
    v = *ps;
    s32 r6 = (u16)id - 0x12e8;
    rec->unk_90 = r6;
    ((void (*)(void *, s32, s32))func_ov003_0222316c)(rec, ((s32 (*)(Unk_ov003_02220128_Vec3 *, Unk_ov003_02220128_Vec3 *))func_02002bdc)(&v, pos), r6);
    Unk_ov003_02220128_Vec3 *pd = &rec->unk_60;
    *pd = v;
    pd = &rec->unk_6c;
    *pd = *pos;
    pd = &rec->unk_54;
    *pd = v;
    rec->unk_7c = 0;
    rec->unk_48 = 4;
    rec->unk_40 = 1;
    return TRUE;
}


//@ 0x22201ac
extern "C" void func_ov003_022201ac(u8 *self, s32 v) {
    *(s32 *)(self + 0x1f0) = (v << 12) >> 4;
}


//@ 0x2220128
extern "C" BOOL func_ov003_02220128(u8 *self, void *p, s32 q) {
    BOOL r = FALSE;
    u8 *o = self + 0x144;
    func_02054c2c(o, 0x66736477, (*(void * *)((u8 *)&data_ov003_02234778)));
    if (p == NULL) {
        return r;
    }
    ((void (*)(s32, void *))func_0209c25c)(q, self + 0x7c);
    s32 t = ((s32 (*)(void))func_0209c348)();
    s32 u = func_021065f8(func_021065dc((s32)p), r);
    if (((BOOL (*)(void *, s32))func_02054800)(o, t)) {
        func_02054720(o, u, r, 0x1000, 1, r);
        func_02054710(o);
        r = TRUE;
    }
    return r;
}


//@ 0x2220030
extern "C" BOOL func_ov003_02220030(u8 *self, void *a)
{
    BOOL ok = FALSE;
    void *res = func_0209c25c(a, self + 4);
    u8 *m = self + 8;
    if (func_0209c0d0(m, res, (*(void * *)((u8 *)&data_ov003_02234770)))) {
        u8 *r4 = self + 0x58;
        func_020555ec(r4, func_0209c0ac(m), 0);
        void *nm = ((void * (*)(void *))func_0209c348)(res);
        func_020641ec((*(void * *)((u8 *)&data_ov003_02234774)), nm, 4, 0);
        s32 v = func_021065f8(((s32 (*)(void))func_021065dc)(), 0);
        if (func_02054800(r4, nm)) {
            func_02054720(r4, v, 0, 0x1000, 1, 0);
            func_02054710(r4);
        } else {
            return FALSE;
        }
        func_020641ec((*(void * *)((u8 *)&data_ov003_0223477c)), nm, 4, 0);
        s32 w = func_02106670(func_02106654(), 0);
        if (func_02055bcc(self + 0x11c, *(void **)(r4 + 0x5c), nm)) {
            func_02055b38(self + 0x11c, w, 0, 0x1000, 1);
            func_02055a9c(self + 0x11c, func_020554c0(r4));
        } else {
            return FALSE;
        }
        ok = TRUE;
    }
    return ok;
}


//@ 0x2220004
extern "C" u8 *func_ov003_02220004(s32 i)
{
    if (i < 0 || i >= 6) {
        return NULL;
    }
    u8 *p = ((u8 *)(data_ov003_0225812c)) + i * 0x24c;
    if ((u32)(*(s32 *)(p + 0x80) - 3) > 1) {
        p = NULL;
    }
    return p;
}


//@ 0x221ffe8
extern "C" s32 func_ov003_0221ffe8(s32 id)
{
    u8 *p = func_ov003_02220004(id);
    if (p == NULL) {
        return -1;
    }
    return *(s8 *)(p + 0x7e);
}


//@ 0x221ffb8
extern "C" BOOL func_ov003_0221ffb8(u32 *out, s32 id)
{
    u8 *p = func_ov003_02220004(id);
    if (p == NULL) {
        return FALSE;
    }
    u32 *q = (u32 *)(p + 0x120);
    out[0] = q[0];
    out[1] = q[1];
    out[2] = q[2];
    return TRUE;
}
