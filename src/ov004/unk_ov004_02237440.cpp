// mwcc-version: 1.2/base
// ov004 TU34: .text 0x02237440-0x0223db88 (bug-actor manager 0224ec80 + 0x2d8-byte slot state functions; slot array
// sMuseumInsects[0x20], tables sMuseumInsectParams (0xe4) / sMuseumInsectBehaviors (0x1c8), insect path strings)
#include "types.h"
#include "Unk_020d8c7c.h"

// ---- main / runtime symbols by their real names
#define func_02000c8c _ZN6FxVec3D1Ev
#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define Unk_02003c40_callRequest _ZN12Unk_02003c4011callRequestEPv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define Unk_02003c30_callReset _ZN12Unk_02003c309callResetEv
#define func_02031c10 _ZN11BoxColliderD2Ev
#define func_02031c48 _ZN11BoxColliderC1Ev
#define func_0203239c _ZN14CollisionStateD1Ev
#define func_020323b0 _ZN14CollisionStateC1Ev
#define AnimModel_detachVisAnim _ZN9AnimModel13detachVisAnimEv
#define AnimModel_detachJointAnim _ZN9AnimModel15detachJointAnimEv
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_setFrame _ZN9AnimModel8setFrameEi
#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define func_020548a0 _ZN9AnimModelD1Ev
#define func_020548d0 _ZN9AnimModelC1Ev
#define func_02054e24 _ZN11CachedModelD1Ev
#define func_02054e3c _ZN11CachedModelC1Ev
#define Model_getRenderObj _ZN5Model12getRenderObjEv
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj
#define ModelAnim_init _ZN9ModelAnim4initEiiit
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv
#define AnimFrameCtrl_setup _ZN13AnimFrameCtrl5setupEihit
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv
#define MuseumData_isDonated _ZN10MuseumData9isDonatedEPt
#define func_02088bb0 _ZN12Unk_020e0d1cD1Ev
#define func_02088bc8 _ZN12Unk_020e0d1cC1Ev
#define func_02088c64 _ZN12Unk_020e0d1c13func_02088c64EP4Vec3iijjjhi
#define func_02088d38 _ZN12Unk_020e0d0813func_02088d38Ej
#define func_02089040 _ZN12Unk_020e0d0813func_02089040Ev
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
#define func_0209c2d8 _ZN12Unk_0209c15cD1Ev
#define func_0209c2dc _ZN12Unk_0209c15cC1Ev
#define func_0209c348 _ZN12Unk_0209c2f413func_0209c348Ev
#define func_021355f0 __cxa_vec_cleanup
#define func_02135714 __cxa_vec_ctor

// ---- main-module classes used by this unit
struct Unk_0203389c_Vec {
    s32 x, y, z;
};

class GroundInfoBase {
public:
    s32 getHeight(s32 flag);
    u8 pad_00[0x3c];
    s32 unk_3c;
};

class GroundInfo : public GroundInfoBase {
public:
    GroundInfo() {}
    GroundInfo *initAtPos(Unk_0203389c_Vec *v, s32 a, s32 b);
};

// library base of the sub-object at +0 of the 0x2d8-byte slot (func_02055cac / func_02055c38)
class ModelAnim {
public:
    ModelAnim();
    virtual ~ModelAnim();

    /* 0x04 */ u8 pad_04[4];
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ u8 pad_0c[0x18 - 0x0c];
    /* 0x18 */ s32 *unk_18;
    /* 0x1c */ u8 pad_1c[4];
};

// vtable 0x0224ec70
class MuseumInsectAnim : public ModelAnim {
public:
    MuseumInsectAnim();
    virtual ~MuseumInsectAnim();
};

struct Unk_ov004_022380a4_Tbl {
    void (*f)(void *);
    u32 v;
};

struct Unk_ov004_02237440_Out {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_ov004_022375b8_Ent {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
};

struct Unk_ov004_022375b8_Rec {
    /* 0x000 */ u8 pad_00[0x18];
    /* 0x018 */ s32 unk_18;
    /* 0x01c */ s32 unk_1c;
    /* 0x020 */ u8 pad_20[4];
    /* 0x024 */ u8 unk_24[0xb0 - 0x24];
    /* 0x0b0 */ u8 unk_b0[0x168 - 0xb0];
    /* 0x168 */ u16 unk_168;
    /* 0x16a */ u8 pad_16a[0x172 - 0x16a];
    /* 0x172 */ u16 unk_172;
    /* 0x174 */ u8 pad_174[0x180 - 0x174];
    /* 0x180 */ u8 pad_180[0x192 - 0x180];
    /* 0x192 */ u16 unk_192;
    /* 0x194 */ u8 pad_194[2];
    /* 0x196 */ s8 unk_196;
    /* 0x197 */ u8 pad_197;
    /* 0x198 */ s32 unk_198;
    /* 0x19c */ u8 pad_19c[0x284 - 0x19c];
    /* 0x284 */ u16 unk_284[2];
    /* 0x288 */ u8 unk_288[0x2d4 - 0x288];
    /* 0x2d4 */ s32 unk_2d4;
};

struct Unk_ov004_022376f8_V3 {
    s32 x, y, z;
};

struct Unk_ov004_022376f8_Mtx {
    s64 v[6];
};

struct Unk_ov004_022376f8_Obj {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[4];
    s32 unk_18;
    u8 pad_1c[0x3c - 0x1c];
    u8 unk_3c;
    u8 pad_3d[0x4c - 0x3d];
};

// {flag, s16 value} per id
struct Unk_ov004_0224ecc8 {
    u8 unk_00;
    u8 pad_01;
    s16 unk_02;
};

class MuseumInsect {
public:
    MuseumInsect();
    ~MuseumInsect();

    /* 0x000 */ MuseumInsectAnim unk_00;
    /* 0x020 */ u8 unk_20;
    /* 0x021 */ u8 pad_21[3];
    /* 0x024 */ void *unk_24;
    /* 0x028 */ u8 pad_28[0x34 - 0x28];
    /* 0x034 */ Unk_ov004_022376f8_V3 unk_34;
    /* 0x040 */ u8 pad_40[0x68 - 0x40];
    /* 0x068 */ u8 unk_68[0xb0 - 0x68];
    /* 0x0b0 */ u8 unk_b0[0x114 - 0xb0];
    /* 0x114 */ Unk_ov004_022376f8_Mtx unk_114;
    /* 0x144 */ u8 pad_144[0x168 - 0x144];
    /* 0x168 */ u16 unk_168;
    /* 0x16a */ u8 pad_16a[0x172 - 0x16a];
    /* 0x172 */ s16 unk_172;
    /* 0x174 */ u8 pad_174[4];
    /* 0x178 */ u8 unk_178[0x18];
    /* 0x190 */ s16 unk_190;
    /* 0x192 */ s16 unk_192;
    /* 0x194 */ s16 unk_194;
    /* 0x196 */ s8 unk_196;
    /* 0x197 */ u8 pad_197;
    /* 0x198 */ s32 unk_198;
    /* 0x19c */ Unk_ov004_022376f8_Obj unk_19c;
    /* 0x1e8 */ u8 unk_1e8[0x284 - 0x1e8];
    /* 0x284 */ u8 unk_284[4];
    /* 0x288 */ u8 unk_288[0x2c8 - 0x288];
    /* 0x2c8 */ Unk_ov004_022376f8_V3 unk_2c8;
    /* 0x2d4 */ void (*unk_2d4)(MuseumInsect *);
};

typedef MuseumInsect Elem_7690;

typedef Unk_ov004_022376f8_V3 V3_7690;

typedef Unk_ov004_022376f8_Mtx Mtx_7690;

struct Unk_ov004_02237de4_Buf {
    u8 pad_00[0x24];
    V3_7690 unk_24;
};

struct Unk_ov004_02238498_Pad {
    u32 v[0xa9];
    Unk_ov004_02238498_Pad() {}
    ~Unk_ov004_02238498_Pad() {}
};

struct Unk_ov004_02238af4_V3 {
    s32 x, y, z;
};

// Actor-like object driven by state tables at 0x0224ed40..0x0224eeb4
struct Unk_ov004_02238af4 {
    /* 0x00 */ u8 pad_00[0x10];
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u8 pad_14[0x21 - 0x14];
    /* 0x21 */ u8 unk_21;
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23[0x40 - 0x23];
    /* 0x40 */ Unk_ov004_02238af4_V3 unk_40;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ u8 unk_50;
    /* 0x51 */ u8 pad_51[0x98 - 0x51];
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ u8 pad_9a[0xa4 - 0x9a];
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 pad_a5[0xae - 0xa5];
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 pad_af[0x14c - 0xaf];
    /* 0x14c */ u8 unk_14c[0x10];
    /* 0x15c */ s32 unk_15c;
    /* 0x160 */ u8 pad_160[0x170 - 0x160];
    /* 0x170 */ u8 unk_170;
    /* 0x171 */ u8 pad_171;
    /* 0x172 */ s16 unk_172;
    /* 0x174 */ s32 unk_174;
    /* 0x178 */ u8 pad_178[0x196 - 0x178];
    /* 0x196 */ s8 unk_196;
    /* 0x197 */ u8 pad_197[0x288 - 0x197];
    /* 0x288 */ u8 unk_288[0x40];
    /* 0x2c8 */ Unk_ov004_02238af4_V3 unk_2c8;
};

struct Unk_ov004_02239434_Vec {
    s32 x, y, z;
};

struct Unk_ov004_02239988_Vec2 {
    s32 x, y;
};

struct Unk_ov004_022395cc_Pad {
    s32 v[3];
    Unk_ov004_022395cc_Pad() {}
    ~Unk_ov004_022395cc_Pad() {}
};

struct Unk_ov004_02239b6c_Sub {
    /* 0x00 */ u8 pad_00[0x9c];
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ u32 unk_a0;
    /* 0xa4 */ u32 unk_a4;
    /* 0xa8 */ u32 pad_a8;
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 pad_b0[0xb8 - 0xb0];
};

struct Unk_ov004_02239b6c_Buf {
    u8 pad[0x10];
    s32 v;
    u8 flag;
};

class Unk_ov004_02239434 {
public:
    void setupLanternFly();
    void setupEveningCicada();
    void setupWalkerCicada();
    void setupRobustCicada();
    void setupBrownCicada();
    void updateCicada();
    void setupOakSilkMoth();
    void setupWalkingstick();
    void setupGoliathBeetle();
    void setupScarabBeetle();
    void setupRainbowStag();
    void setupLonghornBeetle();
    void setupFruitBeetle();
    void setupJewelBeetle();
    void setupGiantBeetle();
    void setupStagBeetle();
    void setupSawStagBeetle();
    void setupDynastidBeetle();
    void setupAtlasBeetle();
    void setupElephantBeetle();
    void setupHerculesBeetle();
    void updatePerched();
    void setupPerched(s32 a, s32 b);
    void updateMosquito();
    void setupMosquito();
    void updateFirefly();
    void setupFirefly();
    void setupMoth();
    void updateMoth();
    void setupBirdwing();
    void setupAgrias();
    void setupEmperor();
    void setupMonarch();
    void setupPeacock();
    void setupTigerButterfly();
    void setupYellowButterfly();
    void setupCommonButterfly();
    void setupFlyer(s32 a, s32 b, s32 c, s32 d, s32 e);
    void updateButterfly();
    void init(u32 a, s32 b, s32 c, s16 d, s32 e, s32 f);
    void setBoundsAroundPos();
    void setBounds(s32 *a, s32 *b);
    void wander();
    void reactToPlayer(u16 *out);
    void runWalker();

    /* 0x00 */ u8 pad_00[0x22];
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23[0x30 - 0x23];
    /* 0x30 */ u16 unk_30;
    /* 0x32 */ u8 pad_32[2];
    /* 0x34 */ Unk_ov004_02239434_Vec unk_34;
    /* 0x40 */ Unk_ov004_02239434_Vec unk_40;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ u8 unk_50;
    /* 0x51 */ u8 pad_51[3];
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ Unk_ov004_02239988_Vec2 unk_58;
    /* 0x60 */ Unk_ov004_02239988_Vec2 unk_60;
    /* 0x68 */ u8 pad_68[0x98 - 0x68];
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ u8 unk_9a;
    /* 0x9b */ u8 pad_9b;
    /* 0x9c */ s16 unk_9c;
    /* 0x9e */ s16 unk_9e;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ s32 unk_a4;
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ u8 pad_ac[2];
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 pad_af;
    /* 0xb0 */ Unk_ov004_02239b6c_Sub unk_b0;
    /* 0x168 */ s16 unk_168;
    /* 0x16a */ u16 unk_16a;
    /* 0x16c */ s32 unk_16c;
    /* 0x170 */ u8 unk_170;
    /* 0x171 */ u8 pad_171;
    /* 0x172 */ s16 unk_172;
    /* 0x174 */ s32 unk_174;
    /* 0x178 */ u8 pad_178[0x190 - 0x178];
    /* 0x190 */ s16 unk_190;
    /* 0x192 */ s16 unk_192;
    /* 0x194 */ u8 pad_194[2];
    /* 0x196 */ s8 unk_196;
    /* 0x197 */ u8 pad_197[0x2c8 - 0x197];
    /* 0x2c8 */ Unk_ov004_02239434_Vec unk_2c8;
};

struct Unk_ov004_02239e70_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02239e70_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_02239e70_Buf {
    u32 v[0x44 / 4];
};

struct Unk_ov004_02239e70_Anim {
    u32 vptr;
    union {
        u32 unk_04;
        Unk_ov004_02239e70_Bits unk_04b;
    };
    union {
        s32 unk_08;
        Unk_ov004_02239e70_Bits unk_08b;
    };
};

struct Unk_ov004_02239e70_Model {
    u8 pad_00[0x9c];
    Unk_ov004_02239e70_Anim anim;
};

class Unk_ov004_02239e70 {
public:
    /* 0x00 */ u8 pad_00[0x22];
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23[0x4c - 0x23];
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ u8 unk_50;
    /* 0x51 */ u8 pad_51[0x98 - 0x51];
    /* 0x98 */ s16 unk_98;
    /* 0x9a */ u8 pad_9a[2];
    /* 0x9c */ s16 unk_9c;
    /* 0x9e */ s16 unk_9e;
    /* 0xa0 */ u8 pad_a0[8];
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ u8 pad_ac[4];
    /* 0xb0 */ Unk_ov004_02239e70_Model unk_b0;
    /* 0x158 */ u8 pad_158[0x160 - 0x158];
    /* 0x160 */ u8 unk_160;
    /* 0x161 */ u8 pad_161[0x168 - 0x161];
    /* 0x168 */ s16 unk_168;
    /* 0x16a */ u8 pad_16a[2];
    /* 0x16c */ s32 unk_16c;
    /* 0x170 */ u8 unk_170;
    /* 0x171 */ u8 pad_171;
    /* 0x172 */ s16 unk_172;
    /* 0x174 */ s32 unk_174;
    /* 0x178 */ u8 pad_178[0x190 - 0x178];
    /* 0x190 */ s16 unk_190;
    /* 0x192 */ s16 unk_192;
    /* 0x194 */ s16 unk_194;
    /* 0x196 */ s8 unk_196;
    /* 0x197 */ u8 pad_197[0x288 - 0x197];
    /* 0x288 */ u8 unk_288[0x40];
    /* 0x2c8 */ Unk_ov004_02239e70_V3 unk_2c8;

    void runCicada();
    void sidestep(volatile s16 *p);
    void crawlDown(volatile s16 *p);
    void crawlUp(volatile s16 *p);
    void animSilkMoth();
    void runPerched();
    BOOL swing(s16 *p);
    BOOL isPlayerNear();
    void runSpider();
    s32 crawl();
    void scurry(Unk_ov004_02239e70_V3 *v);
};

struct Unk_ov004_0223a850_Vec {
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_ov004_0223a850_Out {
    Unk_ov004_0223a850_Vec unk_00;
    s32 unk_0c;
    s32 unk_10;
    u8 unk_14;
};

struct Unk_ov004_0223aa40_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0223aa40_Sub {
    u8 pad_00[0x9c];
    u8 unk_9c[4];
    s32 unk_a0;
    Unk_ov004_0223aa40_Bits unk_a4;
};

struct Unk_ov004_0223a850_Rec {
    /* 0x000 */ u8 pad_00[0x22];
    /* 0x022 */ u8 unk_22;
    /* 0x023 */ u8 pad_23[0x34 - 0x23];
    /* 0x034 */ Unk_ov004_0223a850_Vec unk_34;
    /* 0x040 */ u8 pad_40[0x4c - 0x40];
    /* 0x04c */ s32 unk_4c;
    /* 0x050 */ u8 pad_50[0x98 - 0x50];
    /* 0x098 */ s16 unk_98;
    /* 0x09a */ u8 unk_9a;
    /* 0x09b */ u8 pad_9b;
    /* 0x09c */ s16 unk_9c;
    /* 0x09e */ u8 pad_9e[0xac - 0x9e];
    /* 0x0ac */ s16 unk_ac;
    /* 0x0ae */ u8 pad_ae[0xb0 - 0xae];
    /* 0x0b0 */ u8 unk_b0[0x15c - 0xb0];
    /* 0x15c */ s32 unk_15c;
    /* 0x160 */ u8 pad_160[0x168 - 0x160];
    /* 0x168 */ s16 unk_168;
    /* 0x16a */ u8 pad_16a[0x170 - 0x16a];
    /* 0x170 */ u8 unk_170;
    /* 0x171 */ u8 pad_171;
    /* 0x172 */ s16 unk_172;
    /* 0x174 */ s32 unk_174;
    /* 0x178 */ u8 pad_178[0x192 - 0x178];
    /* 0x192 */ s16 unk_192;
    /* 0x194 */ u8 pad_194[2];
    /* 0x196 */ u8 unk_196;
    /* 0x197 */ u8 pad_197[0x2c8 - 0x197];
    /* 0x2c8 */ Unk_ov004_0223a850_Vec unk_2c8;
};

struct Unk_ov004_0223b1e8_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0223b1e8_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0223b1e8_Obj {
    u8 pad_00[0x21];
    u8 unk_21;
    u8 unk_22;
    u8 pad_23[0x34 - 0x23];
    Unk_ov004_0223b1e8_V3 unk_34;
    Unk_ov004_0223b1e8_V3 unk_40;
    s32 unk_4c;
    u8 unk_50;
    u8 pad_51[0x98 - 0x51];
    s16 unk_98;
    u8 unk_9a;
    u8 pad_9b;
    s16 unk_9c;
    s16 unk_9e;
    u8 pad_a0[0xac - 0xa0];
    s16 unk_ac;
    u8 unk_ae;
    u8 pad_af;
    u8 unk_b0[0x14c - 0xb0];
    u8 unk_14c[4];
    s32 unk_150;
    Unk_ov004_0223b1e8_Bits unk_154;
    u8 pad_158[0x15c - 0x158];
    s32 unk_15c;
    u8 pad_160[0x168 - 0x160];
    s16 unk_168;
    u8 pad_16a[0x16c - 0x16a];
    s32 unk_16c;
    u8 unk_170;
    u8 pad_171;
    s16 unk_172;
    s32 unk_174;
    u8 pad_178[0x192 - 0x178];
    s16 unk_192;
    u8 pad_194[0x196 - 0x194];
    s8 unk_196;
    u8 pad_197[0x2c8 - 0x197];
    Unk_ov004_0223b1e8_V3 unk_2c8;
};

struct Unk_ov004_0223b1e8_Sub {
    u8 pad_00[0x9c];
    u8 unk_9c[4];
    s32 unk_a0;
    Unk_ov004_0223b1e8_Bits unk_a4;
};

struct Unk_ov004_0223b1e8_V3E : Unk_ov004_0223b1e8_V3 {
    Unk_ov004_0223b1e8_V3E() {}
};

typedef Unk_ov004_0223b1e8_Sub Sub_b1e8;

typedef Unk_ov004_0223b1e8_Obj Obj_b1e8;

typedef Unk_ov004_0223b1e8_V3 V3_b1e8;

struct Unk_ov004_0223bb5c_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0223bb5c_Out {
    s32 pad[4];
    s32 unk_10;
    u8 flag;
};

struct Unk_ov004_0223bb5c {
    u8 pad_00[0x22];
    u8 unk_22;
    u8 pad_23[0x34 - 0x23];
    Unk_ov004_0223bb5c_V3 unk_34;
    Unk_ov004_0223bb5c_V3 unk_40;
    s32 unk_4c;
    u8 unk_50;
    u8 pad_51[0x58 - 0x51];
    s32 unk_58;
    s32 unk_5c;
    s32 unk_60;
    s32 unk_64;
    u8 pad_68[0x98 - 0x68];
    s16 unk_98;
    u8 unk_9a;
    u8 pad_9b;
    s16 unk_9c;
    s16 unk_9e;
    u8 pad_a0[0xac - 0xa0];
    s16 unk_ac;
    u8 pad_ae[0x168 - 0xae];
    s16 unk_168;
    u8 pad_16a[0x16c - 0x16a];
    s32 unk_16c;
    u8 pad_170[2];
    s16 unk_172;
    s32 unk_174;
    u8 pad_178[0x190 - 0x178];
    s16 unk_190;
    s16 unk_192;
    u8 pad_194[2];
    s8 unk_196;
    u8 pad_197[0x288 - 0x197];
    u32 unk_288[16];
    Unk_ov004_0223bb5c_V3 unk_2c8;
};

typedef Unk_ov004_0223bb5c Obj_bb5c;

typedef Unk_ov004_0223bb5c_V3 V3_bb5c;

struct Unk_ov004_0223c4bc_V3 {
    s32 x, y, z;
};

struct Unk_ov004_0223c4bc_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0223c4bc_Obj {
    u8 pad_00[0x20];
    u8 unk_20;
    u8 unk_21;
    u8 unk_22;
    u8 pad_23[0x34 - 0x23];
    Unk_ov004_0223c4bc_V3 unk_34;
    Unk_ov004_0223c4bc_V3 unk_40;
    s32 unk_4c;
    u8 unk_50;
    u8 pad_51[0x98 - 0x51];
    s16 unk_98;
    u8 unk_9a;
    u8 pad_9b;
    s16 unk_9c;
    s16 unk_9e;
    u8 pad_a0[4];
    u8 unk_a4;
    u8 pad_a5[3];
    s32 unk_a8;
    s16 unk_ac;
    u8 unk_ae;
    u8 pad_af;
    u8 unk_b0[0x14c - 0xb0];
    u8 unk_14c[4];
    s32 unk_150;
    Unk_ov004_0223c4bc_Bits unk_154;
    u8 pad_158[0x15c - 0x158];
    s32 unk_15c;
    u8 pad_160[0x168 - 0x160];
    s16 unk_168;
    u8 pad_16a[0x16c - 0x16a];
    s32 unk_16c;
    u8 unk_170;
    u8 pad_171;
    s16 unk_172;
    s32 unk_174;
    u8 pad_178[0x192 - 0x178];
    s16 unk_192;
    u8 pad_194[0x196 - 0x194];
    s8 unk_196;
    u8 pad_197[0x2c8 - 0x197];
    Unk_ov004_0223c4bc_V3 unk_2c8;
};

typedef Unk_ov004_0223c4bc_Obj Obj_c4bc;

typedef Unk_ov004_0223c4bc_V3 V3_c4bc;

static inline s32 Abs_c8d4(s32 x) { if (x < 0) return -x; return x; }

struct V3z_c8d4 { s32 x, y, z; V3z_c8d4() {} ~V3z_c8d4() {} };

struct Unk_ov004_0223ceb8_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0223ceb8_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0223ceb8_Sub {
    u8 pad_00[0x9c];
    u8 unk_9c[4];
    Unk_ov004_0223ceb8_Bits unk_a0;
    Unk_ov004_0223ceb8_Bits unk_a4;
};

struct Unk_ov004_0223ceb8 {
    /* 0x00 */ u8 pad_00[0x22];
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23;
    /* 0x24 */ u8 unk_24[4];
    /* 0x28 */ u8 pad_28[0x40 - 0x28];
    /* 0x40 */ Unk_ov004_0223ceb8_Vec unk_40;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ u8 unk_50;
    /* 0x51 */ u8 pad_51[3];
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ u8 pad_58[0x9a - 0x58];
    /* 0x9a */ u8 unk_9a;
    /* 0x9b */ u8 pad_9b;
    /* 0x9c */ s16 unk_9c;
    /* 0x9e */ s16 unk_9e;
    /* 0xa0 */ s32 unk_a0;
    /* 0xa4 */ u8 pad_a4[4];
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ s16 unk_ac;
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 pad_af;
    /* 0xb0 */ Unk_ov004_0223ceb8_Sub unk_b0;
    /* 0x158 */ u8 pad_158[0x168 - 0x158];
    /* 0x168 */ s16 unk_168;
    /* 0x16a */ s16 unk_16a;
    /* 0x16c */ s32 unk_16c;
    /* 0x170 */ u8 unk_170;
    /* 0x171 */ u8 pad_171;
    /* 0x172 */ s16 unk_172;
    /* 0x174 */ s32 unk_174;
    /* 0x178 */ u8 pad_178[0x192 - 0x178];
    /* 0x192 */ s16 unk_192;
    /* 0x194 */ u8 pad_194[2];
    /* 0x196 */ s8 unk_196;
    /* 0x197 */ u8 pad_197[0x2c8 - 0x197];
    /* 0x2c8 */ Unk_ov004_0223ceb8_Vec unk_2c8;
};

struct Unk_ov004_0223d020_Rec {
    s32 x, y, z;
    s32 c;
    s32 d;
    u8 e;
};

struct Unk_ov004_0223d800_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0223d800_Bounds {
    /* 0x00 */ u8 pad_00[0x58];
    /* 0x58 */ s32 unk_58;
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ s32 unk_64;
};

// Owner actor of size 0x2d8 (array sMuseumInsects[0x20]).
struct Unk_ov004_0223d994_Obj {
    /* 0x000 */ u8 pad_000[0x178];
    /* 0x178 */ Unk_ov004_0223d800_Vec unk_178[2];
    /* 0x190 */ u8 pad_190[2];
    /* 0x192 */ s16 unk_192;
    /* 0x194 */ u8 pad_194[2];
    /* 0x196 */ u8 unk_196;
    /* 0x197 */ u8 pad_197[0x2c8 - 0x197];
    /* 0x2c8 */ Unk_ov004_0223d800_Vec unk_2c8;
    /* 0x2d4 */ u8 pad_2d4[4];
};

struct Unk_ov004_0223d8e8_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

struct Unk_ov004_0223d8e8_Sub {
    u8 pad_00[0xa4];
    Unk_ov004_0223d8e8_Bits unk_a4;
};

typedef Unk_ov004_0223d800_Vec V3_d800;

typedef Unk_ov004_0223d994_Obj Obj_d800;

struct Unk_ov004_0223d85c_V : V3_d800 {
    Unk_ov004_0223d85c_V(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

// manager with vtable 0x0224ec80
class MuseumInsectRoom : public GameProc {
public:
    MuseumInsectRoom();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual ~MuseumInsectRoom();

    void releaseInsect(s32 idx);
    BOOL getInsectRoom(u32 idx);
    void spawnDonatedInsects();
    BOOL hasShadow(Elem_7690 *e);
    void updateObstacles();
    BOOL hasHitBox(u32 id, u8 flag);
    void updateInsect(Elem_7690 *e);

    /* 0x050 */ u8 unk_50[4][0x4c];
    /* 0x180 */ u8 unk_180[0x18];
    /* 0x198 */ s32 unk_198;
    /* 0x19c */ s32 unk_19c;
};

extern "C" {
void _ZN18Unk_ov004_0223943412setupPerchedEii(void *self, s32 a, s32 b);
void _ZN18Unk_ov004_0223943410setupFlyerEiiiii(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void _ZN18Unk_ov004_022394344initEjiisii(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void _ZN18Unk_ov004_0223943418setBoundsAroundPosEv(void *self);
void _ZN18Unk_ov004_022394349setBoundsEPiS0_(void *self, s32 *a, s32 *b);
void _ZN18Unk_ov004_022394346wanderEv(void *self, s32 x);
void _ZN18Unk_ov004_022394349runWalkerEv(void *self);
void _ZN18Unk_ov004_02239e709runCicadaEv(void *self);
void _ZN18Unk_ov004_02239e7010runPerchedEv(void *self);
void _ZN18Unk_ov004_02239e709runSpiderEv(void *self);
void * _ZN18Unk_ov004_02239e705crawlEv(void *self);
void _ZN18Unk_ov004_02239e706scurryEP21Unk_ov004_02239e70_V3(void *self, void *v);
void _ZN16MuseumInsectRoomC1Ev(void *self);
u32 MuseumInsect_GetTimeOfDayBit();
Elem_7690 *MuseumInsect_FindDungBall();
Elem_7690 *MuseumInsect_FindScorpion();
void MuseumInsect_RevertOutOfBounds(void *m, u8 *s, s32 *p);
void MuseumInsectRoom_LoadInsect(u8 *m, u8 *s);
BOOL MuseumInsectRoom_AddInsect(u8 *m, s8 v);
s32 MuseumInsectRoom_FindFreeSlot();
void *MuseumInsectRoom_Create();
void MuseumInsect_InitPlacement(void *m, u8 *s);
void MuseumInsect_UpdateDungBeetle(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupDungBeetle(Unk_ov004_02238af4 *o);
void MuseumInsect_UpdateAnt();
void MuseumInsect_SetupAnt(Unk_ov004_02238af4 *o);
void MuseumInsect_UpdateFlea(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupFlea(Unk_ov004_02238af4 *o);
void MuseumInsect_UpdateBee(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupBee(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupScorpion(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupTarantula(Unk_ov004_02238af4 *o);
void MuseumInsect_UpdateArachnid(Unk_ov004_02238af4 *o);
void MuseumInsect_UpdateSpider(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupSpider(Unk_ov004_02238af4 *o);
void MuseumInsect_UpdateFly(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupFly(Unk_ov004_02238af4 *o);
void MuseumInsect_UpdateHoneybee(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupHoneybee(Unk_ov004_02238af4 *o);
void MuseumInsect_UpdatePillBug(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupPillBug(Unk_ov004_02238af4 *o);
void MuseumInsect_UpdateMoleCricket(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupMoleCricket(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupOrchidMantis(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupMantis(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupLadybug(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupSnail(Unk_ov004_02238af4 *o);
void MuseumInsect_UpdateWalker(Unk_ov004_02238af4 *o);
void MuseumInsect_UpdatePondSkater(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupPondSkater(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupBandedDragonfly(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupDarnerDragonfly(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupRedDragonfly(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupDragonfly(Unk_ov004_02238af4 *o, s32 a, s32 b, s32 c, u8 d, u8 e, s32 f);
void MuseumInsect_UpdateDragonfly(Unk_ov004_02238af4 *o);
void MuseumInsect_UpdateCockroach(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupCockroach(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupBellCricket(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupMigratoryLocust(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupLongLocust(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupCricket(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupGrasshopper(Unk_ov004_02238af4 *o);
void MuseumInsect_UpdateHopper(Unk_ov004_02238af4 *o);
void MuseumInsect_SetupHopper(Unk_ov004_02238af4 *o, s32 a, s32 b, s32 c, u8 d);
s32 MuseumInsect_RandTurn(s32 n);
void MuseumInsect_ClampStep(void *out_, void *in_, s32 lim);
void MuseumInsect_RunCockroach(void *r_);
void MuseumInsect_RunDungBeetle(void *r_);
BOOL MuseumInsect_ArachnidFacePlayer(void *r_);
void MuseumInsect_ArachnidWalk(void *r_);
void MuseumInsect_FightClash(void *r_);
void MuseumInsect_FightPause(void *r_);
void MuseumInsect_FightCircleSelf(void *r_);
void MuseumInsect_FightCircleOther(void *r_);
void MuseumInsect_FightSkirmish(void *r_);
BOOL MuseumInsect_UpdateFight(Obj_b1e8 *o);
BOOL MuseumInsect_FaceEachOther(Obj_b1e8 *a, Obj_b1e8 *b);
void MuseumInsect_WiggleHeading(void *o_, s32 a, s32 b);
void MuseumInsect_RunArachnid(void *o_);
void MuseumInsect_MothHover(Obj_b1e8 *o);
void MuseumInsect_RunMoth(void *o_);
void MuseumInsect_GetPillBugWaypoint(void *v_, s32 k);
void MuseumInsect_PillBugNextWaypoint(void *o_);
void MuseumInsect_PillBugWalk(Obj_b1e8 *o);
BOOL MuseumInsect_PillBugCheckCurl(Obj_b1e8 *o);
void MuseumInsect_RunPillBug(void *o_);
s32 MuseumInsect_SteerFromEdges(void *o_);
void MuseumInsect_MoleCricketCrawl(Obj_bb5c *self, s16 *p);
void MuseumInsect_MoleCricketJump(Obj_bb5c *self, s16 *p);
void MuseumInsect_MoleCricketCheckEmerge(Obj_bb5c *self);
void MuseumInsect_RunMoleCricket(void *self_);
void MuseumInsect_FleaJump(Obj_bb5c *self);
void MuseumInsect_RunFlea(void *self_);
void MuseumInsect_FlyingInsectFly(Obj_bb5c *self);
void MuseumInsect_RunFlyingInsect(void *self_);
void MuseumInsect_FireflyWander(Obj_bb5c *self);
void MuseumInsect_RunFirefly(void *self_);
void MuseumInsect_MosquitoChase(Obj_bb5c *self, s16 *p);
void MuseumInsect_RunMosquito(void *self_);
s32 MuseumInsect_RandTurn8(s32 n);
void MuseumInsect_PondSkaterGlide(void *self_, s16 *p);
void MuseumInsect_PondSkaterStartGlide(Obj_c4bc *o, s16 *p);
void MuseumInsect_RunPondSkater(void *o_);
void MuseumInsect_HopperChirp(Obj_c4bc *o);
s32 MuseumInsect_HopperAvoidWall(Obj_c4bc *o, s16 *p);
void MuseumInsect_HopperHop(Obj_c4bc *o);
void MuseumInsect_RunHopper(void *o_);
s32 MuseumInsect_DragonflyPickPerch(Obj_c4bc *o);
void MuseumInsect_DragonflyAvoidWall(Obj_c4bc *o);
void MuseumInsect_DragonflyFlyTo(Obj_c4bc *o);
void MuseumInsect_DragonflyHover(Obj_c4bc *o);
void MuseumInsect_DragonflyLand(Obj_c4bc *o);
void MuseumInsect_RunDragonfly(void *o_);
void MuseumInsect_ButterflyFlapHeight(Unk_ov004_0223ceb8 *self, s16 *p);
void MuseumInsect_ButterflyFly(Unk_ov004_0223ceb8 *self);
void MuseumInsect_RunButterfly(void *self_);
s32 MuseumInsect_UpdateAlertLevel(void *self_, void *out_);
s32 MuseumInsect_TickAlert(void *self_);
void MuseumInsect_TurnToTarget(void *self_, u32 a, s32 b);
s32 MuseumInsect_GetEscapeHeading(s32 a, s32 b);
void MuseumInsect_GetHomeDelta(Unk_ov004_0223ceb8 *self, s16 *a, s32 *b, Unk_ov004_0223ceb8_Vec *c);
s32 MuseumInsect_CheckScared(void *self_);
void MuseumInsect_BobHeight(void *self_, u32 a, s32 b, s32 c);
void MuseumInsect_Wander(void *self_, s32 a, s32 b, u32 c);
s32 MuseumInsect_GetSe(s32 a, s32 b);
BOOL MuseumInsect_PlaySe(void *self_, s32 b);
s32 MuseumInsect_TickTimer(void *self_);
void MuseumInsect_StateRest(void *self_);
void MuseumInsect_ApproachHome(void *self_);
u8 MuseumInsect_ClampToBounds(void *o_, void *v_);
BOOL MuseumInsect_RevertIfOffFloor(void *o_, void *v_);
void MuseumInsect_FlapWings(void *o_);
void MuseumInsect_PointAtAngle(void *out_, void *base_, u32 ang, s32 rad);
s16 MuseumInsect_RandHeading();
void MuseumInsect_MakeStepDir(void *v_, s32 a);
void MuseumInsect_SetProbePoints(Obj_d800 *o);
u8 MuseumInsect_ProbeWalls(Obj_d800 *o);
u8 MuseumInsect_ProbeFloor(Obj_d800 *o);
u8 MuseumInsect_CheckWallsAhead(void *o_);
u8 MuseumInsect_CheckFloorAhead(void *o_);
extern u8 gCurrentHeap[];
extern u8 data_0213b91c[];
extern u8 data_0213b954[];
extern Unk_ov004_0224ecc8 sMuseumInsectParams[];
extern Elem_7690 sMuseumInsects[0x20];
BOOL AnimModel_allocAnmObj(void *self, u32 a);
u32 func_02106788(u32 a);
u32 func_021067a4(u32 a, s32 b);
void BlendAnimModel_initAnim(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void AnimModel_attachAnim(void *p);
void Unk_02003c30_callReset(void *p);
void func_020548a0(void *p);
void func_0203239c(void *p);
void func_020323b0(void *p);
void func_020548d0(void *p);
void func_02000c8c();
void func_02000c98();
void func_02135714(void *p, u32 n, u32 size, void *ctor, void *dtor);
void func_021355f0(void *p, u32 n, u32 size, void *dtor);
s32 func_02063b8c(s32 n);
void *PlayerActor_GetActor(s32 a);
s32 func_020e9650(void *a, void *b);
void Clock_GetMinuteHour(void *p);
void func_0209c2d8(void *p);
void func_0209c2dc(void *p);
void func_02088bb0(void *p);
void func_02088bc8(void *p);
void Mem_Free(void *p);
void AnimModel_detachVisAnim(void *p);
void AnimModel_detachJointAnim(void *p);
void Unk_02003c30_callRelease(void *p);
void func_0209c0b4(void *p);
void func_0209c224(void *p, void *q);
void func_0209c128(void *p);
void func_0209c364(void *p);
void func_02054e24(void *p);
void func_02054e3c(void *p);
void func_0209c370(void *p);
void func_0209c140(void *p);
void func_0209c0c8(void *p);
void func_0209c15c(void *p);
void *func_0209c0ac(void *p);
u32 func_02106020(u32 a, u32 b);
void AnimModel_drawAnimated(void *obj, void *arg);
void AnimModel_stepAnim(void *obj);
void func_020abdd0(void *p, s32 a, u32 b, u8 c);
s32 MuseumData_isDonated(void *tbl, void *v);
void func_02031c48(void *p);
void func_02031c10(void *p);
u8 BoxCollider_Register(void *p, u32 a, u32 b, u32 c, void *r, s32 d, s32 e);
void BoxCollider_Unregister(void *p);
void func_02088c64(void *obj, void *v, s32 a, s32 b, u32 mode, u32 c0, u32 z, u32 ff, u32 k);
void func_02089040(void *obj);
s32 func_02088d38(void *obj, u32 flag);
s32 Model_GetJointWorldMtx(void *obj, void *buf, s32 z);
void WorldCurve_FromCurved(void *a, void *b);
s32 WorldCurve_ToCurved(void *out, void *in);
void Collision_Move(void *obj, void *pos, void *prev, s32 a, s32 b, s32 c, s32 d);
void AnimFrameCtrl_step(void *e);
void Unk_02003c40_callUpdateRelative(void *obj, void *v);
void func_020e8388(void *m, s32 x, s32 y, s32 z);
void func_020e8434(void *m, s16 a);
void func_020e8404(void *m, s32 a);
void func_020e83d4(void *m, s32 a);
extern s8 sMuseumScorpionSlot;
extern s8 sMuseumDungBallSlot;
extern V3_7690 sMuseumFleaDrawScale;
extern u8 sMuseumInsectFrame;
extern Mtx_7690 data_021f47e0;
extern u8 data_021ed0a0[];
void func_02133ef8(void *p, s32 n);
s32 func_020639e8(char *buf, const char *fmt, ...);
BOOL File_Exists(void *s);
s32 File_LoadAlloc(void *s, s32 a, s32 b, s32 c);
u32 func_0209c25c(void *self, void *p);
void func_0209c1a4(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, void *f);
void MuseumInsectHeap_Create();
void MuseumInsectHeap_Destroy();
BOOL func_0209c0d0(void *self, u32 a, void *s);
u32 func_0209c348(u32 self);
void Model_setResource(void *self, u32 a, s32 b);
BOOL ModelAnim_allocMatAnm(void *self, u32 a, u32 b);
void ModelAnim_init(void *self, s32 a, s32 b, s32 c, s32 d);
u32 Model_getRenderObj(void *self);
void ModelAnim_addToRenderObj(void *self, u32 a);
u32 func_021065dc(u32 a);
u32 func_021065f8(u32 a, s32 b);
u32 func_02106654();
u32 func_02106670(u32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void func_ov004_022378e4(void *m);
void func_ov004_0223756c(void *m);
extern char data_ov004_0224ef74[], data_ov004_0224ef88[], data_ov004_0224ef9c[], data_ov004_0224efb0[];
extern char data_ov004_0224efc4[], data_ov004_0224efd8[], data_ov004_0224efec[], data_ov004_0224f000[];
extern char data_ov004_0224f014[], data_ov004_0224f028[], data_ov004_0224f03c[], data_ov004_0224f048[];
extern char data_ov004_0224f054[], data_ov004_0224f060[];
void NNS_G3dMdlSetMdlAlpha(void *c, s32 i, s32 v);
s32 AnimFrameCtrl_setup(void *p, s32 a, s32 b, s32 c, s32 d);
void func_ov004_022398f4(void *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_ov004_02239804(void *o, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_ov004_02239988(void *o);
void func_ov004_022399d0(void *o, void *a, void *b);
void func_ov004_02239574(void *o, s32 a, s32 b);
void func_ov004_0223a25c(void *o);
void func_ov004_0223a3c0(void *o);
void func_ov004_02239d18(void *o);
void AnimModel_setFrame(void *p, s32 a);
s32 Math_AngleXZ(void *a, void *b);
extern s16 data_02136744[];
void func_020e9960(void *out, void *a, void *b);
s32 func_020e94f8(void *v);
s32 func_020e95cc(void *a, void *b);
s32 func_020e7530(void *p, s32 target, s32 step);
void GroundInfo_Destruct(void *p);
extern s16 data_02135f44[];
void func_ov004_0223a6e8(void *r, void *out);
void *func_ov004_0223a570(void *r);
void MuseumExhibitInfo_SpawnAutoTalk();
s32 func_020e7870(void *v, s32 a, s32 b, s32 c, s32 d);
void func_020e98f4(void *out, void *in, s32 s);
void VEC_Subtract(void *a, void *b, void *c);
void VEC_Add(void *a, void *b, void *c);
s32 func_020e7d4c(void *a, void *b, s32 c, s32 d, s32 e);
extern u8 gEffectSplDefaultInitCbs[];
void EffectSpl_CreateOneShot(u32, void *, s32, void *);
s32 FX_Div(s32, s32);
s32 PlayerActor_RequestAct79();
void func_ov004_02239a4c(void *, s32);
s32 func_020e7e6c(void *a, void *b, s32 c, s32 d, s32 e);
s32 Effect_PlayById2(s32 a, void *b, void *c, s32 d);
void Unk_02003c40_callRequest(void *o, s32 id);
void Unk_02003c40_callRequestSustained(void *o, s32 id);
void func_020e93a0(void *v, s32 a);
void func_ov004_02237690(void *p);
}

// ---- data (original order is set by definition order)
struct Unk_ov004_0224ec54 {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
};

extern "C" {
void _ZN18Unk_ov004_0223943415setupLanternFlyEv(void *self);
void _ZN18Unk_ov004_0223943418setupEveningCicadaEv(void *self);
void _ZN18Unk_ov004_0223943417setupWalkerCicadaEv(void *self);
void _ZN18Unk_ov004_0223943417setupRobustCicadaEv(void *self);
void _ZN18Unk_ov004_0223943416setupBrownCicadaEv(void *self);
void _ZN18Unk_ov004_0223943412updateCicadaEv(void *self);
void _ZN18Unk_ov004_0223943416setupOakSilkMothEv(void *self);
void _ZN18Unk_ov004_0223943417setupWalkingstickEv(void *self);
void _ZN18Unk_ov004_0223943418setupGoliathBeetleEv(void *self);
void _ZN18Unk_ov004_0223943417setupScarabBeetleEv(void *self);
void _ZN18Unk_ov004_0223943416setupRainbowStagEv(void *self);
void _ZN18Unk_ov004_0223943419setupLonghornBeetleEv(void *self);
void _ZN18Unk_ov004_0223943416setupFruitBeetleEv(void *self);
void _ZN18Unk_ov004_0223943416setupJewelBeetleEv(void *self);
void _ZN18Unk_ov004_0223943416setupGiantBeetleEv(void *self);
void _ZN18Unk_ov004_0223943415setupStagBeetleEv(void *self);
void _ZN18Unk_ov004_0223943418setupSawStagBeetleEv(void *self);
void _ZN18Unk_ov004_0223943419setupDynastidBeetleEv(void *self);
void _ZN18Unk_ov004_0223943416setupAtlasBeetleEv(void *self);
void _ZN18Unk_ov004_0223943419setupElephantBeetleEv(void *self);
void _ZN18Unk_ov004_0223943419setupHerculesBeetleEv(void *self);
void _ZN18Unk_ov004_0223943413updatePerchedEv(void *self);
void _ZN18Unk_ov004_0223943414updateMosquitoEv(void *self);
void _ZN18Unk_ov004_0223943413setupMosquitoEv(void *self);
void _ZN18Unk_ov004_0223943413updateFireflyEv(void *self);
void _ZN18Unk_ov004_0223943412setupFireflyEv(void *self);
void _ZN18Unk_ov004_022394349setupMothEv(void *self);
void _ZN18Unk_ov004_0223943410updateMothEv(void *self);
void _ZN18Unk_ov004_0223943413setupBirdwingEv(void *self);
void _ZN18Unk_ov004_0223943411setupAgriasEv(void *self);
void _ZN18Unk_ov004_0223943412setupEmperorEv(void *self);
void _ZN18Unk_ov004_0223943412setupMonarchEv(void *self);
void _ZN18Unk_ov004_0223943412setupPeacockEv(void *self);
void _ZN18Unk_ov004_0223943419setupTigerButterflyEv(void *self);
void _ZN18Unk_ov004_0223943420setupYellowButterflyEv(void *self);
void _ZN18Unk_ov004_0223943420setupCommonButterflyEv(void *self);
void _ZN18Unk_ov004_0223943415updateButterflyEv(void *self);
}

extern "C" Unk_ov004_0224ec54 sMuseumInsectRoomProfile = {MuseumInsectRoom_Create, 0xbe, 0xc1};
extern "C" s8 sMuseumScorpionSlot = -1;
extern "C" s8 sMuseumDungBallSlot = -1;
extern "C" V3_7690 sMuseumFleaDrawScale = {0x2000, 0x2000, 0x2000};
extern "C" Unk_ov004_0224ecc8 sMuseumInsectParams[57] = {
    {0, 0, 0x514},
    {0, 0, 0x514},
    {0, 0, 0x6a4},
    {0, 0, 0x6a4},
    {0, 0, 0x6a4},
    {0, 0, 0x708},
    {0, 0, 0x640},
    {0, 0, 0x898},
    {0, 0, 0x6a4},
    {0, 0, 0x960},
    {1, 0, 0x44c},
    {1, 0, 0x708},
    {1, 0, 0x640},
    {1, 0, 0x514},
    {0, 0, 0x578},
    {0, 0, 0x514},
    {1, 0, 0x514},
    {1, 0, 0x514},
    {1, 0, 0x4b0},
    {1, 0, 0x4b0},
    {0, 0, 0x578},
    {1, 0, 0x578},
    {1, 0, 0x708},
    {1, 0, 0x898},
    {0, 0, 0x0},
    {1, 0, 0x514},
    {1, 0, 0x3e8},
    {1, 0, 0x44c},
    {1, 0, 0x3e8},
    {1, 0, 0x4b0},
    {1, 0, 0x3e8},
    {1, 0, 0x514},
    {1, 0, 0x3e8},
    {1, 0, 0x4b0},
    {1, 0, 0x4b0},
    {0, 0, 0x400},
    {1, 0, 0x640},
    {0, 0, 0x44c},
    {1, 0, 0x4b0},
    {1, 0, 0x514},
    {1, 0, 0x578},
    {1, 0, 0x578},
    {1, 0, 0x578},
    {1, 0, 0x514},
    {1, 0, 0x578},
    {1, 0, 0x640},
    {1, 0, 0x640},
    {1, 0, 0x708},
    {1, 0, 0x3e8},
    {1, 0, 0x190},
    {1, 0, 0x3e8},
    {1, 0, 0x514},
    {1, 0, 0x514},
    {0, 0, 0x3e8},
    {0, 0, 0x7d0},
    {0, 0, 0x7d0},
    {0, 0, 0xb00},
};
extern "C" Unk_ov004_022380a4_Tbl sMuseumInsectBehaviors[57] = {
    {(void (*)(void *))_ZN18Unk_ov004_0223943420setupCommonButterflyEv, (u32)_ZN18Unk_ov004_0223943415updateButterflyEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943420setupYellowButterflyEv, (u32)_ZN18Unk_ov004_0223943415updateButterflyEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943419setupTigerButterflyEv, (u32)_ZN18Unk_ov004_0223943415updateButterflyEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943412setupPeacockEv, (u32)_ZN18Unk_ov004_0223943415updateButterflyEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943412setupMonarchEv, (u32)_ZN18Unk_ov004_0223943415updateButterflyEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943412setupEmperorEv, (u32)_ZN18Unk_ov004_0223943415updateButterflyEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943411setupAgriasEv, (u32)_ZN18Unk_ov004_0223943415updateButterflyEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943413setupBirdwingEv, (u32)_ZN18Unk_ov004_0223943415updateButterflyEv},
    {(void (*)(void *))_ZN18Unk_ov004_022394349setupMothEv, (u32)_ZN18Unk_ov004_0223943410updateMothEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943416setupOakSilkMothEv, (u32)_ZN18Unk_ov004_0223943413updatePerchedEv},
    {(void (*)(void *))MuseumInsect_SetupHoneybee, (u32)MuseumInsect_UpdateHoneybee},
    {(void (*)(void *))MuseumInsect_SetupBee, (u32)MuseumInsect_UpdateBee},
    {(void (*)(void *))MuseumInsect_SetupLongLocust, (u32)MuseumInsect_UpdateHopper},
    {(void (*)(void *))MuseumInsect_SetupMigratoryLocust, (u32)MuseumInsect_UpdateHopper},
    {(void (*)(void *))MuseumInsect_SetupMantis, (u32)MuseumInsect_UpdateWalker},
    {(void (*)(void *))MuseumInsect_SetupOrchidMantis, (u32)MuseumInsect_UpdateWalker},
    {(void (*)(void *))_ZN18Unk_ov004_0223943416setupBrownCicadaEv, (u32)_ZN18Unk_ov004_0223943412updateCicadaEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943417setupRobustCicadaEv, (u32)_ZN18Unk_ov004_0223943412updateCicadaEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943417setupWalkerCicadaEv, (u32)_ZN18Unk_ov004_0223943412updateCicadaEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943418setupEveningCicadaEv, (u32)_ZN18Unk_ov004_0223943412updateCicadaEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943415setupLanternFlyEv, (u32)_ZN18Unk_ov004_0223943412updateCicadaEv},
    {(void (*)(void *))MuseumInsect_SetupRedDragonfly, (u32)MuseumInsect_UpdateDragonfly},
    {(void (*)(void *))MuseumInsect_SetupDarnerDragonfly, (u32)MuseumInsect_UpdateDragonfly},
    {(void (*)(void *))MuseumInsect_SetupBandedDragonfly, (u32)MuseumInsect_UpdateDragonfly},
    {(void (*)(void *))MuseumInsect_SetupAnt, (u32)MuseumInsect_UpdateAnt},
    {(void (*)(void *))MuseumInsect_SetupPondSkater, (u32)MuseumInsect_UpdatePondSkater},
    {(void (*)(void *))MuseumInsect_SetupSnail, (u32)MuseumInsect_UpdateWalker},
    {(void (*)(void *))MuseumInsect_SetupCricket, (u32)MuseumInsect_UpdateHopper},
    {(void (*)(void *))MuseumInsect_SetupBellCricket, (u32)MuseumInsect_UpdateHopper},
    {(void (*)(void *))MuseumInsect_SetupGrasshopper, (u32)MuseumInsect_UpdateHopper},
    {(void (*)(void *))MuseumInsect_SetupMoleCricket, (u32)MuseumInsect_UpdateMoleCricket},
    {(void (*)(void *))_ZN18Unk_ov004_0223943417setupWalkingstickEv, (u32)_ZN18Unk_ov004_0223943413updatePerchedEv},
    {(void (*)(void *))MuseumInsect_SetupLadybug, (u32)MuseumInsect_UpdateWalker},
    {(void (*)(void *))_ZN18Unk_ov004_0223943416setupFruitBeetleEv, (u32)_ZN18Unk_ov004_0223943413updatePerchedEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943417setupScarabBeetleEv, (u32)_ZN18Unk_ov004_0223943413updatePerchedEv},
    {(void (*)(void *))MuseumInsect_SetupDungBeetle, (u32)MuseumInsect_UpdateDungBeetle},
    {(void (*)(void *))_ZN18Unk_ov004_0223943418setupGoliathBeetleEv, (u32)_ZN18Unk_ov004_0223943413updatePerchedEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943412setupFireflyEv, (u32)_ZN18Unk_ov004_0223943413updateFireflyEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943416setupJewelBeetleEv, (u32)_ZN18Unk_ov004_0223943413updatePerchedEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943419setupLonghornBeetleEv, (u32)_ZN18Unk_ov004_0223943413updatePerchedEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943418setupSawStagBeetleEv, (u32)_ZN18Unk_ov004_0223943413updatePerchedEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943415setupStagBeetleEv, (u32)_ZN18Unk_ov004_0223943413updatePerchedEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943416setupGiantBeetleEv, (u32)_ZN18Unk_ov004_0223943413updatePerchedEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943416setupRainbowStagEv, (u32)_ZN18Unk_ov004_0223943413updatePerchedEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943419setupDynastidBeetleEv, (u32)_ZN18Unk_ov004_0223943413updatePerchedEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943416setupAtlasBeetleEv, (u32)_ZN18Unk_ov004_0223943413updatePerchedEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943419setupElephantBeetleEv, (u32)_ZN18Unk_ov004_0223943413updatePerchedEv},
    {(void (*)(void *))_ZN18Unk_ov004_0223943419setupHerculesBeetleEv, (u32)_ZN18Unk_ov004_0223943413updatePerchedEv},
    {(void (*)(void *))MuseumInsect_SetupFlea, (u32)MuseumInsect_UpdateFlea},
    {(void (*)(void *))MuseumInsect_SetupPillBug, (u32)MuseumInsect_UpdatePillBug},
    {(void (*)(void *))_ZN18Unk_ov004_0223943413setupMosquitoEv, (u32)_ZN18Unk_ov004_0223943414updateMosquitoEv},
    {(void (*)(void *))MuseumInsect_SetupFly, (u32)MuseumInsect_UpdateFly},
    {(void (*)(void *))MuseumInsect_SetupCockroach, (u32)MuseumInsect_UpdateCockroach},
    {(void (*)(void *))MuseumInsect_SetupSpider, (u32)MuseumInsect_UpdateSpider},
    {(void (*)(void *))MuseumInsect_SetupTarantula, (u32)MuseumInsect_UpdateArachnid},
    {(void (*)(void *))MuseumInsect_SetupScorpion, (u32)MuseumInsect_UpdateArachnid},
    {(void (*)(void *))MuseumInsect_SetupDungBeetle, (u32)MuseumInsect_UpdateDungBeetle},
};
extern "C" {
u8 sMuseumInsectFrame;
}
Elem_7690 sMuseumInsects[0x20];

extern "C" u8 MuseumInsect_CheckFloorAhead(void *o_) {
    Obj_d800 *o = (Obj_d800 *)o_;
    MuseumInsect_SetProbePoints(o);
    return MuseumInsect_ProbeFloor(o);
}

extern "C" u8 MuseumInsect_CheckWallsAhead(void *o_) {
    Obj_d800 *o = (Obj_d800 *)o_;
    MuseumInsect_SetProbePoints(o);
    return MuseumInsect_ProbeWalls(o);
}

extern "C" u8 MuseumInsect_ProbeFloor(Obj_d800 *o) {
    u8 b = o->unk_196;
    u8 r = 0;
    V3_d800 *p = &o->unk_178[0];
    s32 d;
    {
        GroundInfo g;
        g.initAtPos((Unk_0203389c_Vec *)(p), 0, 1);
        d = g.getHeight(1);
        GroundInfo_Destruct(&g);
    }
    if (d <= 0 || d > p->y || (b == 0x1e && MuseumInsect_ClampToBounds((Unk_ov004_0223d800_Bounds *)o, p) != 0)) {
        r++;
    }
    {
        GroundInfo g;
        g.initAtPos((Unk_0203389c_Vec *)(p + 1), 0, 1);
        d = g.getHeight(1);
        GroundInfo_Destruct(&g);
    }
    if (d <= 0 || d > p[1].y || (b == 0x1e && MuseumInsect_ClampToBounds((Unk_ov004_0223d800_Bounds *)o, p + 1) != 0)) {
        r = r + 2;
    }
    return r;
}

extern "C" u8 MuseumInsect_ProbeWalls(Obj_d800 *o) {
    u8 r = 0;
    V3_d800 *p = &o->unk_178[0];
    s32 lim = o->unk_2c8.y;
    u8 buf[0x30];
    func_020323b0(buf);
    s16 ang = o->unk_192;
    Collision_Move(buf, p, p, ang, 0x266, NULL, 0xb);
    if (p->y > lim) {
        r++;
    }
    Collision_Move(buf, p + 1, p + 1, ang, 0x266, NULL, 0xb);
    if (p[1].y > lim) {
        r = r + 2;
    }
    func_0203239c(buf);
    return r;
}

extern "C" void MuseumInsect_SetProbePoints(Obj_d800 *o) {
    V3_d800 *b = &o->unk_2c8;
    s32 a = o->unk_192;
    V3_d800 *out = o->unk_178;
    s32 i = (u16)(s16)(a + 0xe38) >> 4;
    s32 z = b->z + data_02135f44[i * 2 + 1];
    s32 y = b->y;
    s32 x = b->x + data_02135f44[i * 2];
    out[0].x = x;
    out[0].y = y;
    out[0].z = z;
    i = (u16)(s16)(a - 0xe38) >> 4;
    z = b->z + data_02135f44[i * 2 + 1];
    y = b->y;
    x = b->x + data_02135f44[i * 2];
    out[1].x = x;
    out[1].y = y;
    out[1].z = z;
}

extern "C" void MuseumInsect_MakeStepDir(void *v_, s32 a) {
    V3_d800 *v = (V3_d800 *)v_;
    v->x = 0;
    v->y = 0;
    v->z = 0x29;
    func_020e93a0(v, a);
}

extern "C" s16 MuseumInsect_RandHeading() {
    u32 r = (u8)func_02063b8c(0x10);
    if (r > 8) {
        r = -(r - 8);
    }
    return (s16)(r * 0xaaa);
}

extern "C" void MuseumInsect_PointAtAngle(void *out_, void *base_, u32 ang, s32 rad) {
    V3_d800 *out = (V3_d800 *)out_;
    V3_d800 *base = (V3_d800 *)base_;
    s32 z;
    s32 i = ((u16)ang >> 4) * 2;
    z = base->z + func_01ffcb0c(rad, data_02135f44[i + 1]);
    s32 x = base->x + func_01ffcb0c(rad, data_02135f44[i]);
    out->x = x;
    out->y = 0;
    out->z = z;
}

extern "C" void MuseumInsect_FlapWings(void *o_) {
    u8 *o = (u8 *)o_;
    Unk_ov004_0223d8e8_Sub *p = (Unk_ov004_0223d8e8_Sub *)(o + 0xb0);
    if (p->unk_a4.mid == 1) {
        AnimModel_setFrame(p, 2);
    } else {
        AnimModel_setFrame(p, 1);
    }
}

extern "C" BOOL MuseumInsect_RevertIfOffFloor(void *o_, void *v_) {
    V3_d800 *o = (V3_d800 *)o_;
    V3_d800 *v = (V3_d800 *)v_;
    BOOL r = TRUE;
    BOOL far;
    {
        Unk_ov004_0223d85c_V a(o->x, 0, v->z);
        GroundInfo g;
        g.initAtPos((Unk_0203389c_Vec *)(&a), 0, 0);
        if (g.getHeight(0) > 0x200) {
            far = r;
        } else {
            far = FALSE;
        }
        GroundInfo_Destruct(&g);
    }
    if (far) {
        o->x = v->x;
        r = FALSE;
    }
    {
        Unk_ov004_0223d85c_V a(v->x, 0, o->z);
        GroundInfo g;
        g.initAtPos((Unk_0203389c_Vec *)(&a), 0, 0);
        if (g.getHeight(0) > 0x200) {
            far = TRUE;
        } else {
            far = FALSE;
        }
        GroundInfo_Destruct(&g);
    }
    if (far) {
        o->z = v->z;
        r = FALSE;
    }
    return r;
}

extern "C" u8 MuseumInsect_ClampToBounds(void *o_, void *v_) {
    Unk_ov004_0223d800_Bounds *o = (Unk_ov004_0223d800_Bounds *)o_;
    V3_d800 *v = (V3_d800 *)v_;
    u8 r;
    s32 *q;
    s32 *p;
    q = &o->unk_60;
    p = &o->unk_58;
    r = 0;
    if (v->x < o->unk_58) {
        v->x = o->unk_58;
        r = 1;
    } else if (v->x > q[0]) {
        v->x = q[0];
        r |= 2;
    }
    if (v->z < p[1]) {
        v->z = p[1];
        r |= 4;
    } else if (v->z > q[1]) {
        v->z = q[1];
        r |= 8;
    }
    return r;
}

extern "C" void MuseumInsect_ApproachHome(void *self_) {
    Unk_ov004_0223ceb8 *self = (Unk_ov004_0223ceb8 *)self_;
    if (MuseumInsect_TickTimer(self) != 0) {
        Unk_ov004_0223ceb8_Vec *r4 = &self->unk_2c8;
        s16 a;
        s32 b;
        Unk_ov004_0223ceb8_Vec c;
        MuseumInsect_GetHomeDelta(self, &a, &b, &c);
        if (b <= 0x400 && r4->y <= c.y + 0x200 && r4->y >= c.y - 0x200) {
            self->unk_172 = 6;
            self->unk_174 = (s16)((func_02063b8c(10) + 10) * 20);
            self->unk_168 = 0;
        } else {
            s32 r6 = self->unk_50;
            if (func_02063b8c(100) > r6 - 0x14) {
                if (b <= 0x3000) {
                    self->unk_54 = c.y;
                } else {
                    self->unk_54 = self->unk_a8;
                }
                self->unk_192 = a + self->unk_192;
                VEC_Subtract(&c, r4, &c);
                MuseumInsect_ClampStep(&c, &c, 1);
                VEC_Add(r4, &c, r4);
            }
        }
    } else {
        self->unk_54 = self->unk_a8;
    }
}

extern "C" void MuseumInsect_StateRest(void *self_) {
    Unk_ov004_0223ceb8 *self = (Unk_ov004_0223ceb8 *)self_;
    u8 st = *(u8 *)&self->unk_196;
    MuseumInsect_CheckScared(self);
    if (MuseumInsect_TickTimer(self) == 0 || self->unk_22 == 0) {
        if (self->unk_9a == 0) {
            if (st == 0xa || st == 0x33) {
                if (self->unk_b0.unk_a4.mid != 0) {
                    AnimModel_setFrame(&self->unk_b0, 0);
                }
            } else if (self->unk_b0.unk_a0.mid < 0xc) {
                AnimFrameCtrl_setup(self->unk_b0.unk_9c, 0x11, 1, 0x1000, 9);
            } else if (self->unk_b0.unk_a4.mid == 0x10) {
                if (self->unk_22 != 0 || sMuseumInsectFrame % 10 == 0) {
                    if (func_02063b8c(100) > 0x5f) {
                        AnimFrameCtrl_setup(self->unk_b0.unk_9c, 0x11, 1, 0x1000, 9);
                    }
                }
            }
            return;
        }
    }
    self->unk_172 = 0x19;
    self->unk_54 = self->unk_a8;
    self->unk_174 = (func_02063b8c(10) + 0x10) * 20;
    if (st != 0xa && st != 0x33) {
        AnimFrameCtrl_setup(self->unk_b0.unk_9c, 9, 0, self->unk_4c, 0);
    } else {
        AnimModel_setFrame(&self->unk_b0, 1);
    }
}

extern "C" s32 MuseumInsect_TickTimer(void *self_) {
    Unk_ov004_0223ceb8 *self = (Unk_ov004_0223ceb8 *)self_;
    s32 t = (s16)self->unk_174;
    if (t > 0) {
        self->unk_174 = t - 1;
        return 0;
    }
    return 1;
}

extern "C" BOOL MuseumInsect_PlaySe(void *self_, s32 b) {
    Unk_ov004_0223ceb8 *self = (Unk_ov004_0223ceb8 *)self_;
    s32 id = MuseumInsect_GetSe(self->unk_196, b);
    if (id >= 0) {
        if (b == 1) {
            Unk_02003c40_callRequestSustained(self->unk_24, id);
        } else {
            Unk_02003c40_callRequest(self->unk_24, id);
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 MuseumInsect_GetSe(s32 a, s32 b) {
    switch (a) {
    case 0xa: return 0x831;
    case 0x33: return 0x823;
    case 0x1d: return 0x825;
    case 0x1b: return 0x826;
    case 0x1c: return 0x82c;
    case 0x10: return 0x822;
    case 0x11: return 0x827;
    case 0x12: return 0x82e;
    case 0x13: return 0x824;
    case 0x32: return 0x828;
    case 0x1e:
        if (b == 0) return 0x829;
        return 0x82a;
    case 0x36: return 0x833;
    case 0x37: return 0x835;
    case 0x34:
        switch (b) {
        case 0: return 0x1d2;
        case 1: return 0x1d3;
        }
        break;
    }
    return -1;
}

extern "C" void MuseumInsect_Wander(void *self_, s32 a, s32 b, u32 c) {
    Unk_ov004_0223ceb8 *self = (Unk_ov004_0223ceb8 *)self_;
    s32 r6 = self->unk_192;
    u8 r7 = self->unk_ae;
    u32 rnd = (u8)func_02063b8c(100);
    Unk_ov004_0223ceb8_Vec *v = &self->unk_2c8;
    Unk_ov004_0223ceb8_Vec o;
    if (sMuseumInsectFrame % b == 0 && rnd > c) {
        if (r7 == 0) {
            r7 = 1;
        } else {
            r7 = 0;
        }
        self->unk_ae = r7;
    }
    if (rnd > self->unk_50) {
        if (r7 != 0) {
            r6 = (s16)(r6 + a);
        } else {
            r6 = (s16)(r6 - a);
        }
    }
    MuseumInsect_MakeStepDir(&o, r6);
    self->unk_192 = r6;
    if (self->unk_9a != 0) {
        v->x = v->x + func_01ffcb0c(func_01ffcb0c(0x1800, self->unk_16c << 12), o.x);
        v->z = v->z + func_01ffcb0c(func_01ffcb0c(0x1800, self->unk_16c << 12), o.z);
    } else {
        v->x = v->x + func_01ffcb0c(self->unk_16c << 12, o.x);
        v->z = v->z + func_01ffcb0c(self->unk_16c << 12, o.z);
    }
}

extern "C" void MuseumInsect_BobHeight(void *self_, u32 a, s32 b, s32 c) {
    Unk_ov004_0223ceb8 *self = (Unk_ov004_0223ceb8 *)self_;
    s32 r5;
    Unk_ov004_0223ceb8_Vec *v = &self->unk_2c8;
    s32 idx = ((u16)a >> 4) * 2;
    r5 = FX_Div(data_02135f44[idx], c);
    s32 r7 = b;
    if (self->unk_54 != self->unk_a8) {
        r7 = func_01ffcb0c(r7, 0x800);
    }
    if (r5 > 0 && v->y + r5 < r7 + self->unk_54 || r5 < 0 && v->y + r5 > self->unk_54 - r7) {
        v->y = v->y + r5;
    }
}

extern "C" s32 MuseumInsect_CheckScared(void *self_) {
    Unk_ov004_0223ceb8 *self = (Unk_ov004_0223ceb8 *)self_;
    Unk_ov004_0223d020_Rec rec;
    s32 r = MuseumInsect_UpdateAlertLevel(self, &rec);
    if (rec.e != 0 && self->unk_9a == 0 && self->unk_9c >= self->unk_9e) {
        self->unk_ac = Math_AngleXZ(&rec, &self->unk_2c8);
        self->unk_174 = (func_02063b8c(4) + 10) * 20;
        self->unk_172 = 7;
        self->unk_9a = 1;
        self->unk_54 = self->unk_a8;
    }
    return r;
}

extern "C" void MuseumInsect_GetHomeDelta(Unk_ov004_0223ceb8 *self, s16 *a, s32 *b, Unk_ov004_0223ceb8_Vec *c) {
    Unk_ov004_0223ceb8_Vec *p6 = &self->unk_2c8;
    Unk_ov004_0223ceb8_Vec *pv = &self->unk_40;
    c->x = pv->x;
    c->y = pv->y;
    c->z = pv->z;
    s32 r7 = self->unk_192;
    *a = Math_AngleXZ(p6, c) - r7;
    s16 t = *a;
    if (t > 0x38e) {
        *a = 0x38e;
    } else if (t < -0x38e) {
        *a = -0x38e;
    }
    *b = func_020e9650(c, p6);
}

extern "C" s32 MuseumInsect_GetEscapeHeading(s32 a, s32 b) {
    s32 orig = a;
    u32 r = (u8)func_02063b8c(100);
    if (b == 3) {
        a = (s16)(a + 0x8000);
        if (r < 5) {
            a = (s16)(a + 0x2aaa);
        } else if (r < 10) {
            a = (s16)(a - 0x2aaa);
        }
    } else {
        if (b == 1 && (a < -0x4000 || (a >= 0 && a < 0x4000)) || b == 2 && (a > 0x4000 || (a <= 0 && a > -0x4000))) {
            a = (s16)(-a);
        } else if (a >= 0) {
            a = (s16)(0x8000 - a);
        } else {
            a = (s16)(-0x8000 - a);
        }
    }
    if (r > 0x50) {
        if (a - orig >= 0) {
            a = (s16)(a + 0x1554);
        } else {
            a = (s16)(a - 0x1554);
        }
    }
    if (a == orig) {
        if (a >= 0) {
            a = (s16)(a + 0xaaa);
        } else {
            a = (s16)(a - 0xaaa);
        }
    }
    return a;
}

extern "C" void MuseumInsect_TurnToTarget(void *self_, u32 a, s32 b) {
    Unk_ov004_0223ceb8 *self = (Unk_ov004_0223ceb8 *)self_;
    s16 sv[2];
    sv[0] = self->unk_192;
    if (func_020e7530(sv, self->unk_ac, 0xe38) != 0) {
        self->unk_172 = b;
        self->unk_170 = a;
    }
    self->unk_192 = sv[0];
}

extern "C" s32 MuseumInsect_TickAlert(void *self_) {
    Unk_ov004_0223ceb8 *self = (Unk_ov004_0223ceb8 *)self_;
    Unk_ov004_0223d020_Rec rec;
    return MuseumInsect_UpdateAlertLevel(self, &rec);
}

extern "C" s32 MuseumInsect_UpdateAlertLevel(void *self_, void *out_) {
    Unk_ov004_0223ceb8 *self = (Unk_ov004_0223ceb8 *)self_;
    Unk_ov004_0223d020_Rec *out = (Unk_ov004_0223d020_Rec *)out_;
    volatile s32 old;
    s16 r4 = self->unk_9c;
    old = r4;
    s32 r7 = self->unk_9e;
    u8 *p = (u8 *)PlayerActor_GetActor(4);
    if (p != 0) {
        out->e = 1;
        out->c = *(s32 *)(p + 0x98);
        Unk_ov004_0223ceb8_Vec *pv = (Unk_ov004_0223ceb8_Vec *)(p + 0x5c);
        out->x = pv->x;
        out->y = pv->y;
        out->z = pv->z;
        out->d = func_020e9650(&self->unk_2c8, out);
        s32 t = out->d;
        if (t < 0x2000) {
            r4 += 0x19;
        } else if (t > self->unk_a0 || out->c == 0) {
            r4 -= 1;
        } else if (out->c <= 0x3e8) {
            r4 += 1;
        } else if (out->c <= 0x44c) {
            r4 = r4 + 3;
        } else if (out->c <= 0x490) {
            r4 = r4 + 5;
        } else if (out->c == 0x491) {
            r4 = r4 + 8;
        } else {
            r4 += 0xf;
        }
        if (r4 < 0) {
            r4 = 0;
        } else if (r4 > 0xff) {
            r4 = 0xff;
        }
        self->unk_9c = (u8)r4;
        if (r7 <= r4) {
            if (r7 > old) {
                return 1;
            }
            return 3;
        } else if (r7 > r4 && r7 <= old) {
            return 2;
        }
    } else {
        out->e = 0;
        return -1;
    }
    return 0;
}

extern "C" void MuseumInsect_RunButterfly(void *self_) {
    Unk_ov004_0223ceb8 *self = (Unk_ov004_0223ceb8 *)self_;
    switch (self->unk_172) {
    case 0:
        MuseumInsect_ButterflyFly(self);
        break;
    case 6:
        MuseumInsect_StateRest(self);
        break;
    default:
        self->unk_9a = 0;
        self->unk_172 = 0;
        self->unk_9c = 0;
        break;
    }
}

extern "C" void MuseumInsect_ButterflyFly(Unk_ov004_0223ceb8 *self) {
    Unk_ov004_0223ceb8_Vec *v = &self->unk_2c8;
    s16 *pa = &self->unk_168;
    s32 t = *pa;
    t = t * (0x44 - t * 5);
    Unk_ov004_0223ceb8_Sub *sb = &self->unk_b0;
    if (sb->unk_a0.mid > 9) {
        AnimFrameCtrl_setup(sb->unk_9c, 9, 0, self->unk_4c, 0);
    }
    if (self->unk_170 != 0 && t >= 0) {
        t = func_01ffcb0c(t, 0x2000);
    } else if (t < -0x333) {
        t = -0x333;
    }
    v->y += t;
    MuseumInsect_ButterflyFlapHeight(self, pa);
    *pa = *pa + 4;
    MuseumInsect_ApproachHome(self);
    MuseumInsect_Wander(self, 0xaaa, 0x14, 0x3c);
}

extern "C" void MuseumInsect_ButterflyFlapHeight(Unk_ov004_0223ceb8 *self, s16 *p) {
    s32 hi = 0x300;
    s32 a = self->unk_a8;
    u8 flag = self->unk_170;
    Unk_ov004_0223ceb8_Vec *v = &self->unk_2c8;
    s32 b = self->unk_54;
    if (a != b) {
        a = b;
    }
    hi += a;
    if (self->unk_16a < *p) {
        *p = 0;
        if (flag != 0) {
            *p = 0;
            self->unk_16a = 0x10;
        } else {
            *p = 8;
            self->unk_16a = 0x14;
        }
    }
    if (flag != 0 && v->y > hi) {
        self->unk_170 = 0;
    } else {
        s32 y = v->y;
        if (y < a) {
            if (y > a - 0x320) {
                v->y = a;
            }
            self->unk_170 = 1;
        }
    }
}

extern "C" void MuseumInsect_RunDragonfly(void *o_)
{
    Obj_c4bc *o = (Obj_c4bc *)o_;
    u8 st = (u8)o->unk_172;
    if (st != 0x19) {
        MuseumInsect_FlapWings(o);
    }
    switch (st) {
    case 19:
        MuseumInsect_TurnToTarget(o, 0, 5);
        break;
    case 3:
    case 15:
        MuseumInsect_TurnToTarget(o, 0, 4);
        break;
    case 4:
        if (MuseumInsect_TickTimer(o) != 0 && MuseumInsect_DragonflyPickPerch(o) < 0x5000) {
            o->unk_ac = Math_AngleXZ(&o->unk_2c8, &o->unk_40);
            o->unk_172 = 14;
            if (o->unk_196 != 0x17) {
                o->unk_168 = (func_02063b8c(5) + 2) * 10;
            }
        } else {
            MuseumInsect_DragonflyFlyTo(o);
        }
        MuseumInsect_DragonflyAvoidWall(o);
        break;
    case 5:
        MuseumInsect_DragonflyLand(o);
        break;
    case 11:
    case 12:
    case 13:
    case 14:
        MuseumInsect_DragonflyHover(o);
        break;
    case 7: {
        s32 a, rn;
        o->unk_172 = 15;
        o->unk_9c = 0;
        o->unk_174 = 0xa0;
        o->unk_9a = 0;
        o->unk_ae = 0;
        a = o->unk_ac;
        rn = func_02063b8c(3);
        MuseumInsect_PointAtAngle(&o->unk_34, &o->unk_2c8, a, (o->unk_a4 + rn) << 12);
        o->unk_ac = Math_AngleXZ(&o->unk_2c8, &o->unk_34);
        break;
    }
    case 0:
    case 1:
    case 2:
    case 6:
    case 8:
    case 9:
    case 10:
    case 16:
    case 17:
    case 18:
    default:
        if (o->unk_20 != 0) {
            o->unk_172 = 7;
        } else if (o->unk_ae != 0) {
            if (sMuseumInsectFrame % 20 == 0) {
                u32 r = (u8)func_02063b8c(100);
                if (o->unk_154.mid == 0 && r > 0x5c) {
                    AnimModel_setFrame(&o->unk_b0, 2);
                } else if (r > 0x32) {
                    AnimModel_setFrame(&o->unk_b0, 0);
                }
            } else if (o->unk_154.mid != 0) {
                MuseumInsect_FlapWings(o);
            }
            MuseumInsect_CheckScared(o);
            if (o->unk_22 != 0 && MuseumInsect_TickTimer(o) != 0) {
                o->unk_ae = 0;
                o->unk_172 = 11;
                o->unk_174 = 0xa0;
                if (o->unk_196 == 0x17) {
                    o->unk_168 = 0;
                } else {
                    o->unk_168 = (func_02063b8c(5) + 2) * 10;
                }
            }
        } else {
            o->unk_172 = 11;
            if (o->unk_196 == 0x17) {
                o->unk_168 = 0;
            } else {
                o->unk_168 = (func_02063b8c(5) + 2) * 10;
            }
        }
        break;
    }
    o->unk_20 = 0;
}

extern "C" void MuseumInsect_DragonflyLand(Obj_c4bc *o)
{
    V3_c4bc *r4 = &o->unk_2c8;
    V3_c4bc *r6 = &o->unk_40;
    s32 a, b;
    switch (o->unk_196) {
    case 0x15:
        a = 0x148;
        b = 0x40;
        break;
    case 0x16:
        a = 0x19a;
        b = 0x49;
        break;
    default:
        a = 0x19a;
        b = 0x4e;
        break;
    }
    if (!func_020e7e6c(r4, r6, b, 0x1000, a)) {
        o->unk_172 = 25;
        o->unk_174 = (func_02063b8c(5) + 5) * 20;
        o->unk_ae = 1;
    } else {
        o->unk_192 = Math_AngleXZ(r4, r6);
    }
}

extern "C" void MuseumInsect_DragonflyHover(Obj_c4bc *o)
{
    s16 *r6 = &o->unk_168;
    V3_c4bc *r4 = &o->unk_2c8;
    if (*r6 <= 0) {
        s16 t = o->unk_172;
        if ((u16)(s16)(t - 12) <= 1) {
            o->unk_172 = 15;
        } else if (t == 14) {
            o->unk_172 = 19;
        } else {
            s32 a, rn;
            if (o->unk_196 == 0x17) {
                s32 t = o->unk_192;
                a = MuseumInsect_RandTurn(4);
                a += t;
                o->unk_ac = a;
            } else {
                s32 t = o->unk_192;
                a = MuseumInsect_RandTurn(12);
                a += t;
                o->unk_ac = a;
            }
            o->unk_172 = 3;
            a = o->unk_ac;
            rn = func_02063b8c(3);
            MuseumInsect_PointAtAngle(&o->unk_34, r4, a, (o->unk_a4 + rn) << 12);
            o->unk_ac = Math_AngleXZ(&o->unk_2c8, &o->unk_34);
        }
    } else {
        if (*r6 % 10 < 5) {
            s32 y = r4->y;
            if (y < o->unk_a8 + 0x800) {
                r4->y = y + 0x80;
            }
        } else {
            s32 y = r4->y;
            if (y > o->unk_a8 - 0x1000) {
                r4->y = y - 0x80;
            }
        }
        *r6 = *r6 - 1;
    }
}

extern "C" void MuseumInsect_DragonflyFlyTo(Obj_c4bc *o)
{
    V3_c4bc *r7 = &o->unk_34;
    V3_c4bc *r4 = &o->unk_2c8;
    s32 r6 = o->unk_16c;
    if (!func_020e7d4c(r4, r7, r6, 0x1000, o->unk_4c)) {
        o->unk_172 = 25;
    } else {
        o->unk_192 = Math_AngleXZ(r4, r7);
    }
    if (o->unk_170) {
        func_020e7870(&r4->y, o->unk_a8, r6, 0x1000, 0xcd);
    } else {
        if (!func_020e7870(&r4->y, o->unk_a8 - 0x1000, r6, 0x1000, 0xcd)) {
            o->unk_170 = 1;
        }
    }
}

extern "C" void MuseumInsect_DragonflyAvoidWall(Obj_c4bc *o)
{
    s32 r = MuseumInsect_CheckWallsAhead(o);
    if (r != 0) {
        s32 t, rn;
        o->unk_ac = MuseumInsect_GetEscapeHeading(o->unk_192, r);
        t = o->unk_ac;
        rn = func_02063b8c(3);
        MuseumInsect_PointAtAngle(&o->unk_34, &o->unk_2c8, t, (o->unk_a4 + rn) << 12);
        o->unk_ac = Math_AngleXZ(&o->unk_2c8, &o->unk_34);
        if (o->unk_9a != 0) {
            o->unk_172 = 15;
        } else {
            o->unk_172 = 12;
            if (o->unk_196 == 0x17) {
                o->unk_168 = 0;
            } else {
                o->unk_168 = (func_02063b8c(5) + 2) * 10;
            }
        }
    }
}

extern "C" s32 MuseumInsect_DragonflyPickPerch(Obj_c4bc *o)
{
    V3z_c8d4 a, b;
    V3_c4bc *p;
    s32 r5, r4, r3, r2, s0, s4;
    s32 d1, d2;
    p = &o->unk_2c8;
    switch (o->unk_196) {
    case 0x15:
        r5 = 0x16c00;
        s0 = 0x1400;
        r4 = 0xd200;
        r3 = 0x1a600;
        s4 = 0x1400;
        r2 = 0x13c00;
        break;
    case 0x16:
        r5 = 0x13200;
        s0 = 0x1400;
        r4 = 0x10d00;
        r3 = 0x16600;
        s4 = 0x1400;
        r2 = 0x14200;
        break;
    default:
        r5 = 0x17800;
        s0 = 0x1400;
        r4 = 0x12200;
        r3 = 0x12b00;
        s4 = 0x1a00;
        r2 = 0xda00;
        break;
    }
    d1 = Abs_c8d4(p->x - r5) + Abs_c8d4(p->z - r4);
    d2 = Abs_c8d4(p->x - r3) + Abs_c8d4(p->z - r2);
    if (d1 < d2) {
        V3_c4bc *q = &o->unk_40;
        q->x = r5;
        q->y = s0;
        q->z = r4;
        return d1;
    }
    {
        V3_c4bc *q = &o->unk_40;
        q->x = r3;
        q->y = s4;
        q->z = r2;
    }
    return d2;
}

extern "C" void MuseumInsect_RunHopper(void *o_)
{
    Obj_c4bc *o = (Obj_c4bc *)o_;
    switch (o->unk_172) {
    case 3:
    case 15:
        MuseumInsect_TurnToTarget(o, 1, 4);
        break;
    case 4:
        MuseumInsect_HopperHop(o);
        break;
    default: {
        s16 *r4 = &o->unk_168;
        s16 *r6;
        if (o->unk_22) {
            MuseumInsect_HopperChirp(o);
        }
        if (MuseumInsect_HopperAvoidWall(o, r4) != 0) {
            break;
        }
        r6 = &o->unk_98;
        if (MuseumInsect_TickAlert(o) == 1) {
            *r4 = *r6 * 5;
        } else if (o->unk_22 == 0 && *r4 == 0) {
            *r6 = *r6 * 5;
        }
        *r4 = *r4 + 1;
        if (*r4 >= *r6 || o->unk_20 != 0) {
            s32 a, rn;
            s32 t = o->unk_192;
            a = MuseumInsect_RandTurn(12);
            a += t;
            o->unk_ac = a;
            a = o->unk_ac;
            rn = func_02063b8c(3);
            MuseumInsect_PointAtAngle(&o->unk_34, &o->unk_2c8, a, (o->unk_a4 + rn) << 12);
            o->unk_ac = Math_AngleXZ(&o->unk_2c8, &o->unk_34);
            o->unk_172 = 3;
            *r4 = 0;
            o->unk_9c = 0;
        }
        break;
    }
    }
    o->unk_20 = 0;
}

extern "C" void MuseumInsect_HopperHop(Obj_c4bc *o)
{
    V3_c4bc *r6 = &o->unk_34;
    V3_c4bc *r4 = &o->unk_2c8;
    volatile V3_c4bc sv;
    s32 t;
    s32 r7;
    sv.x = r4->x;
    sv.y = r4->y;
    sv.z = r4->z;
    r7 = o->unk_16c;
    if (MuseumInsect_CheckFloorAhead(o) == 0 || o->unk_20 != 0) {
        if (func_020e7d4c(r4, r6, r7, 0x1000, 0x333)) {
            if (MuseumInsect_ClampToBounds(o, r4)) {
                r4->x = sv.x;
                r4->y = sv.y;
                r4->z = sv.z;
                *r6 = *r4;
            } else {
                o->unk_192 = Math_AngleXZ(r4, r6);
            }
        }
    } else {
        *r6 = *r4;
    }
    if (o->unk_170) {
        if (!func_020e7870(&r4->y, 0x1400, r7, 0x1000, 0xcd)) {
            o->unk_170 = 0;
        }
    } else {
        {
            GroundInfo loc;
            loc.initAtPos((Unk_0203389c_Vec *)(r4), 0, 1);
            t = loc.getHeight(0);
            GroundInfo_Destruct(&loc);
        }
        if (!func_020e7870(&r4->y, t, r7, 0x1000, 0x266)) {
            o->unk_98 = (func_02063b8c(9) + 2) * 20;
            o->unk_172 = 25;
            AnimModel_setFrame(&o->unk_ae + 2, 0);
            *r6 = *r4;
            if (o->unk_9a != 0) {
                o->unk_9c = (u8)(o->unk_9e - 10);
                o->unk_9a = 0;
            }
        }
    }
}

extern "C" s32 MuseumInsect_HopperAvoidWall(Obj_c4bc *o, s16 *p)
{
    s32 r = MuseumInsect_CheckFloorAhead(o);
    if (r != 0) {
        s32 t, rn;
        o->unk_ac = MuseumInsect_GetEscapeHeading(o->unk_192, r);
        t = o->unk_ac;
        rn = func_02063b8c(3);
        MuseumInsect_PointAtAngle(&o->unk_34, &o->unk_2c8, t, (o->unk_a4 + rn) << 12);
        o->unk_ac = Math_AngleXZ(&o->unk_2c8, &o->unk_34);
        o->unk_172 = 15;
        o->unk_4c++;
        *p = 0;
    }
    return r;
}

extern "C" void MuseumInsect_HopperChirp(Obj_c4bc *o)
{
    switch (o->unk_196) {
    case 0x1b:
    case 0x1c:
    case 0x1d:
        if (o->unk_9c < 5) {
            MuseumInsect_PlaySe(o, 0);
        }
        break;
    }
}

extern "C" void MuseumInsect_RunPondSkater(void *o_)
{
    Obj_c4bc *o = (Obj_c4bc *)o_;
    switch (o->unk_172) {
    case 3:
    case 15:
        MuseumInsect_PondSkaterStartGlide(o, &o->unk_168);
        break;
    case 4:
        MuseumInsect_PondSkaterGlide(o, &o->unk_168);
        break;
    default: {
        s16 *p = &o->unk_98;
        if (*p <= 0) {
            o->unk_172 = 3;
        } else {
            *p = *p - 1;
        }
        o->unk_9a = 0;
        break;
    }
    }
}

extern "C" void MuseumInsect_PondSkaterStartGlide(Obj_c4bc *o, s16 *p)
{
    s16 a, t;
    s16 r4;
    t = o->unk_192;
    a = t;
    r4 = 0;
    if (o->unk_172 == 15) {
        r4 = (s16)(t + o->unk_ac);
        o->unk_172 = 4;
    } else {
        u8 n = (u8)func_02063b8c(5);
        u8 i;
        for (i = 0; i < n; i++) {
            r4 = (s16)(r4 + 0xaaa);
        }
        if (func_02063b8c(100) > 50) {
            r4 = (s16)-r4;
        }
        r4 += a;
        o->unk_172 = 4;
    }
    if (o->unk_172 == 4) {
        V3_c4bc v;
        o->unk_192 = r4;
        *p = func_02063b8c(8) + 8;
        V3_c4bc *sp_ = &o->unk_2c8;
        v.x = sp_->x;
        v.y = sp_->y;
        v.z = sp_->z;
        a = 0;
        Effect_PlayById2(0x1f, &v, &a, 0);
    }
}

extern "C" void MuseumInsect_PondSkaterGlide(void *self_, s16 *p)
{
    Obj_bb5c *self = (Obj_bb5c *)self_;
    V3_bb5c d;
    volatile V3_bb5c saved;
    V3_bb5c *v = &self->unk_2c8;
    saved.x = v->x;
    saved.y = v->y;
    saved.z = v->z;
    s32 *hi = &self->unk_60;
    s32 *lo = &self->unk_58;
    MuseumInsect_MakeStepDir(&d, self->unk_192);
    self->unk_2c8.x += func_01ffcb0c((*p * self->unk_16c) << 12, d.x);
    v->z += func_01ffcb0c((*p * self->unk_16c) << 12, d.z);
    v->y = 0x200;
    *p = *p - 1;
    if (self->unk_2c8.x < self->unk_58 || self->unk_2c8.x > hi[0] || v->z < lo[1] || v->z > hi[1]) {
        s32 base = -0x8000;
        v->x = saved.x;
        v->y = saved.y;
        v->z = saved.z;
        base += MuseumInsect_RandTurn8(8);
        self->unk_ac = base;
        self->unk_172 = 15;
        *p = 0;
    } else if (*p <= 0) {
        self->unk_172 = 25;
        if (self->unk_22 != 0) {
            self->unk_98 = func_02063b8c(60);
        } else {
            self->unk_98 = func_02063b8c(0x12c);
        }
    }
}

extern "C" s32 MuseumInsect_RandTurn8(s32 n)
{
    s32 r;
    switch (func_02063b8c(n)) {
    case 0:
        r = 0xaaa;
        break;
    case 1:
        r = 0x1554;
        break;
    case 2:
        r = 0x2000;
        break;
    case 3:
        r = 0x2aaa;
        break;
    case 4:
        r = -0xaaa;
        break;
    case 5:
        r = -0x1554;
        break;
    case 6:
        r = -0x2000;
        break;
    default:
        r = -0x2aaa;
        break;
    }
    return r;
}

extern "C" void MuseumInsect_RunMosquito(void *self_)
{
    Obj_bb5c *self = (Obj_bb5c *)self_;
    MuseumInsect_FlapWings(self);
    MuseumInsect_PlaySe(self, 0);
    if (self->unk_172 == 0) {
        MuseumInsect_MosquitoChase(self, &self->unk_168);
    } else {
        self->unk_172 = 0;
    }
}

extern "C" void MuseumInsect_MosquitoChase(Obj_bb5c *self, s16 *p)
{
    u8 *b;
    struct {
        s16 t;
        s16 pad;
    } l;
    V3_bb5c d;
    b = (u8 *)PlayerActor_GetActor(4);
    if (b != 0) {
        V3_bb5c *v = &self->unk_2c8;
        s32 dist;
        u8 *pb = b + 0x5c;
        dist = func_020e9650(pb, v);
        l.t = self->unk_192;
        func_020e7530(&l.t, Math_AngleXZ(v, pb), 0x38e);
        *p = *p + 0xaaa;
        if (self->unk_9a != 0) {
            s32 c = self->unk_9c;
            if (dist > 0x3000) {
                self->unk_9a = 0;
            } else if (c < 60) {
                self->unk_9c = (u8)(s16)(c + 1);
            } else if (self->unk_4c == 0 && dist < 0x1000 && PlayerActor_RequestAct79() != 0) {
                self->unk_9a = 0;
                self->unk_172 = 0;
                self->unk_4c = 1;
                *p = 0;
            }
        }
        if (dist < 0x2000) {
            if (dist < 0x1000 && self->unk_9a == 0) {
                self->unk_9a = 1;
                self->unk_9c = 0;
            }
            if (func_02063b8c(100) > 30) {
                if (l.t > 0) {
                    l.t += 0x5b0;
                } else if (l.t < 0) {
                    l.t -= 0x5b0;
                }
            }
        }
        self->unk_192 = l.t;
        MuseumInsect_MakeStepDir(&d, l.t);
        v->x += func_01ffcb0c(d.x, 0x8000);
        v->z += func_01ffcb0c(d.z, 0x8000);
        MuseumInsect_BobHeight(self, *p, 0x2800, (func_02063b8c(4) + 0x12) << 12);
    }
}

extern "C" void MuseumInsect_RunFirefly(void *self_)
{
    Obj_bb5c *self = (Obj_bb5c *)self_;
    if (self->unk_22 == 0) {
        _ZN18Unk_ov004_02239e7010runPerchedEv(self);
    } else if (self->unk_172 == 0) {
        MuseumInsect_FireflyWander(self);
        MuseumInsect_ClampToBounds(self, &self->unk_2c8);
    } else {
        self->unk_9a = 0;
        self->unk_172 = 0;
    }
}

extern "C" void MuseumInsect_FireflyWander(Obj_bb5c *self)
{
    MuseumInsect_Wander(self, 0x38e, 0x28, 0x50);
    s32 r = func_02063b8c(4);
    self->unk_168 = self->unk_168 + (s16)FX_Div(0x2000, (r + 5) << 12);
    MuseumInsect_BobHeight(self, self->unk_168, 0x1000, (func_02063b8c(4) + 10) << 12);
}

extern "C" void MuseumInsect_RunFlyingInsect(void *self_)
{
    Obj_bb5c *self = (Obj_bb5c *)self_;
    switch (self->unk_172) {
    case 0:
        MuseumInsect_PlaySe(self, 0);
        MuseumInsect_FlyingInsectFly(self);
        break;
    case 6:
        if (self->unk_196 == 10) {
            _ZN18Unk_ov004_022394346wanderEv(self, self->unk_196);
        }
        MuseumInsect_StateRest(self);
        break;
    case 7:
        self->unk_172 = 0;
        if (self->unk_9a != 0) {
            self->unk_192 = self->unk_192 + self->unk_ac;
        }
        break;
    default:
        self->unk_9a = 0;
        self->unk_172 = 0;
        if (self->unk_196 == 0x33) {
            V3_bb5c *p = &self->unk_40;
            if (func_02063b8c(100) > 50) {
                p->x = 0xef00;
                p->z = 0xc900;
            } else {
                p->x = 0xf700;
                p->z = 0x15200;
            }
            p->y = 0x1300;
        }
        break;
    }
}

extern "C" void MuseumInsect_FlyingInsectFly(Obj_bb5c *self)
{
    s16 *q = &self->unk_98;
    MuseumInsect_FlapWings(self);
    if (MuseumInsect_CheckScared(self) == 2) {
        self->unk_9a = 0;
    }
    if (self->unk_9a != 0) {
        MuseumInsect_Wander(self, 0xaaa, 10, 0x46);
    } else {
        MuseumInsect_ApproachHome(self);
        MuseumInsect_Wander(self, 0xaaa, 20, 0x50);
    }
    if (self->unk_196 == 0x33) {
        MuseumInsect_BobHeight(self, *q, 0x19a, (func_02063b8c(8) + 0x12) << 12);
        *q = *q + 0x1554;
    } else {
        MuseumInsect_BobHeight(self, *q, 0x1200, (func_02063b8c(8) + 10) << 12);
        *q = *q + 0xaaa;
    }
}

extern "C" void MuseumInsect_RunFlea(void *self_)
{
    Obj_bb5c *self = (Obj_bb5c *)self_;
    if (self->unk_172 == 4) {
        MuseumInsect_FleaJump(self);
    } else if (MuseumInsect_TickTimer(self) != 0) {
        u8 *p = (u8 *)PlayerActor_GetActor(4);
        if (p != 0) {
            u8 r = func_02063b8c(0x21) + 0x10;
            V3_bb5c *v = &self->unk_2c8;
            u8 *pp = p + 0x5c;
            if (func_020e9650(pp, v) > 0x6000) {
                r += 0x10;
            }
            self->unk_192 = Math_AngleXZ(v, pp);
            s32 ang = self->unk_192;
            MuseumInsect_PointAtAngle(&self->unk_34, v, ang, func_01ffcb0c(r << 12, 0x100));
            self->unk_98 = 1;
            self->unk_172 = 4;
        }
    }
}

extern "C" void MuseumInsect_FleaJump(Obj_bb5c *self)
{
    s16 *q = &self->unk_98;
    V3_bb5c *v = &self->unk_2c8;
    V3_bb5c saved;
    saved.x = v->x;
    saved.y = v->y;
    saved.z = v->z;
    func_020e7d4c(v, &self->unk_34, 0xaa, 0x1000, 0x333);
    if (self->unk_98 > 0) {
        s32 k = self->unk_98 << 12;
        v->y = func_01ffcb0c(0x99a - func_01ffcb0c(0x7b, k), k);
        if (v->y < 0) {
            u8 *p = (u8 *)PlayerActor_GetActor(4);
            s32 n = 20;
            if (p != 0) {
                if (func_020e9650(p + 0x5c, v) > 0x6000) {
                    n = 0;
                }
            }
            self->unk_174 = (s16)(func_02063b8c(n * 2 + 20) + 20) >> 1;
            self->unk_172 = 25;
            *q = 0;
        } else {
            *q = *q + 1;
        }
    }
    MuseumInsect_RevertIfOffFloor(v, &saved);
}

extern "C" void MuseumInsect_RunMoleCricket(void *self_)
{
    Obj_bb5c *self = (Obj_bb5c *)self_;
    switch (self->unk_172) {
    case 4:
        MuseumInsect_PlaySe(self, 2);
        MuseumInsect_MoleCricketCrawl(self, &self->unk_168);
        break;
    case 5:
        MuseumInsect_MoleCricketJump(self, &self->unk_168);
        break;
    case 3: {
        s16 t = self->unk_192;
        if (func_020e7530(&t, self->unk_ac, 0x38e) != 0) {
            self->unk_172 = 4;
        }
        MuseumInsect_PlaySe(self, 2);
        self->unk_192 = t;
        break;
    }
    case 16:
        if (MuseumInsect_TickTimer(self) != 0) {
            self->unk_172 = 25;
            V3_bb5c *sp = &self->unk_34;
            V3_bb5c *dp = &self->unk_2c8;
            dp->x = self->unk_34.x;
            dp->y = sp->y;
            dp->z = sp->z;
        }
        break;
    default:
        MuseumInsect_MoleCricketCheckEmerge(self);
        break;
    }
}

extern "C" void MuseumInsect_MoleCricketCheckEmerge(Obj_bb5c *self)
{
    u32 idx;
    s32 c;
    V3_bb5c *v;
    Unk_ov004_0223bb5c_Out o;
    v = &self->unk_2c8;
    idx = (u8)self->unk_9c;
    MuseumInsect_UpdateAlertLevel(self, &o);
    if (o.flag != 0) {
        if (o.unk_10 < 0x5000) {
            self->unk_50 = 60;
        }
        c = self->unk_50;
        if (c > 0) {
            MuseumInsect_PlaySe(self, 0);
            self->unk_50 = c - 1;
        }
        if ((s32)idx > self->unk_9e) {
            self->unk_172 = 5;
            EffectSpl_CreateOneShot(0x80, v, 0, gEffectSplDefaultInitCbs);
            self->unk_98 = (func_02063b8c(11) + 5) * 20;
            self->unk_192 = Math_AngleXZ(&o, v);
            NNS_G3dMdlSetMdlAlpha(func_0209c0ac(self->unk_288), 0, 31);
            V3_bb5c *sp = &self->unk_2c8;
            V3_bb5c *dp = &self->unk_34;
            self->unk_34.x = sp->x;
            dp->y = sp->y;
            dp->z = sp->z;
        }
    }
}

extern "C" void MuseumInsect_MoleCricketJump(Obj_bb5c *self, s16 *p)
{
    V3_bb5c *v = &self->unk_2c8;
    s32 k = (self->unk_16c + 2) << 12;
    V3_bb5c d;
    MuseumInsect_MakeStepDir(&d, self->unk_192);
    self->unk_2c8.x += func_01ffcb0c(k, d.x);
    v->z += func_01ffcb0c(k, d.z);
    v->y += (25 - *p) * (*p * 4);
    BOOL ok;
    {
        GroundInfo g;
        g.initAtPos((Unk_0203389c_Vec *)(v), 0, 1);
        if (v->y > g.getHeight(0)) {
            ok = FALSE;
        } else {
            ok = TRUE;
        }
        GroundInfo_Destruct(&g);
    }
    if (ok && *p > 0) {
        self->unk_172 = 4;
        self->unk_9c = 0;
        *p = 0;
        self->unk_190 = 0;
    } else {
        *p = *p + 2;
    }
}

extern "C" void MuseumInsect_MoleCricketCrawl(Obj_bb5c *self, s16 *p)
{
    s16 *q = &self->unk_98;
    if (self->unk_98 > 0) {
        *q = self->unk_98 - 1;
        _ZN18Unk_ov004_02239e705crawlEv(self);
        MuseumInsect_ClampToBounds(self, &self->unk_2c8);
        if (*q > 5) {
            if (sMuseumInsectFrame % 8 == 0) {
                if (func_02063b8c(100) > 50) {
                    s32 t = self->unk_192;
                    self->unk_ac = t + MuseumInsect_RandTurn(12);
                    self->unk_172 = 3;
                }
            }
        } else if (*q == 5) {
            EffectSpl_CreateOneShot(0x80, &self->unk_2c8, 0, gEffectSplDefaultInitCbs);
        }
    } else {
        self->unk_172 = 16;
        NNS_G3dMdlSetMdlAlpha(func_0209c0ac(self->unk_288), 0, 0);
        self->unk_174 = 60;
        *p = 0;
    }
}

extern "C" s32 MuseumInsect_SteerFromEdges(void *o_)
{
    Obj_b1e8 *o = (Obj_b1e8 *)o_;
    u8 r4 = o->unk_50;
    u32 r0;
    s16 r1;
    if (o->unk_196 == 0x34) {
        r0 = MuseumInsect_CheckWallsAhead(o);
    } else {
        r0 = MuseumInsect_CheckFloorAhead(o);
    }
    if (r0 != 0) {
        r1 = o->unk_192;
        if (r0 == 3) {
            if (r4 == 1 || r4 == 10) {
                r1 -= 0xaaa;
            } else {
                r1 += 0xaaa;
            }
        } else if (r0 == 1 || r4 == 1) {
            r1 -= 0x38e;
            r4 = 1;
        } else if (r0 == 2 || r4 == 2) {
            r1 += 0x38e;
            r4 = 2;
        }
        o->unk_192 = r1;
    } else if (r4 < 10) {
        r4 = r4 * 10;
    }
    o->unk_50 = r4;
    return r0;
}

extern "C" void MuseumInsect_RunPillBug(void *o_)
{
    Obj_b1e8 *o = (Obj_b1e8 *)o_;
    switch (o->unk_172) {
    case 3:
        if (MuseumInsect_PillBugCheckCurl(o)) {
            s16 v = o->unk_192;
            if (func_020e7530(&v, o->unk_ac, 0x38e)) {
                o->unk_172 = 4;
            }
            o->unk_192 = v;
        }
        break;
    case 4:
        MuseumInsect_PillBugWalk(o);
        break;
    default:
        if (MuseumInsect_TickTimer(o) && MuseumInsect_PillBugCheckCurl(o)) {
            if (o->unk_154.mid != 1) {
                AnimModel_setFrame(o->unk_b0, 1);
            }
            o->unk_168 = 0;
            o->unk_172 = 4;
            o->unk_174 = (func_02063b8c(9) + 4) * 20;
        }
        break;
    }
}

extern "C" BOOL MuseumInsect_PillBugCheckCurl(Obj_b1e8 *o)
{
    s32 r4 = o->unk_50;
    MuseumInsect_TickAlert(o);
    if (o->unk_9c < o->unk_9e && r4 < 2) {
        AnimModel_setFrame(o->unk_b0, 1);
        goto yes;
    }
    if (r4 == 0) {
        o->unk_50 = 0x3c;
    } else if (r4 > 1) {
        o->unk_50 = r4 - 1;
    }
    AnimModel_setFrame(o->unk_b0, 0);
    return FALSE;
yes:
    return TRUE;
}

extern "C" void MuseumInsect_PillBugWalk(Obj_b1e8 *o)
{
    if (!MuseumInsect_PillBugCheckCurl(o)) {
        return;
    }
    {
        V3_b1e8 *r4 = &o->unk_2c8;
        V3_b1e8 *r6 = &o->unk_34;
        if (MuseumInsect_TickTimer(o) == 0) {
            if (func_020e7d4c(r4, r6, 0x40, 0x1000, 0x29) == 0) {
                MuseumInsect_PillBugNextWaypoint(o);
                o->unk_ac = Math_AngleXZ(r4, r6);
                o->unk_172 = 3;
            } else {
                s32 t = (s16)o->unk_174;
                o->unk_192 = Math_AngleXZ(r4, r6);
                if (t % 8 == 0) {
                    o->unk_192 = o->unk_192 + 0xaaa;
                } else if (t % 4 == 0) {
                    o->unk_192 = o->unk_192 - 0xaaa;
                }
            }
        } else {
            o->unk_174 = (func_02063b8c(3) + 2) * 20;
            o->unk_172 = 0x19;
        }
    }
}

extern "C" void MuseumInsect_PillBugNextWaypoint(void *o_)
{
    Obj_b1e8 *o = (Obj_b1e8 *)o_;
    u32 st = (u8)o->unk_4c;
    u32 nx;
    if (st == 0 && o->unk_170 == 0) {
        o->unk_170 = 1;
        nx = 1;
    } else if (st == 4 && o->unk_170 != 0) {
        nx = 3;
        o->unk_170 = 0;
    } else if (func_02063b8c(100) > 70 && st != 0 && st != 4) {
        if (o->unk_170 != 0) {
            nx = (u8)(st - 1);
            o->unk_170 = 0;
        } else {
            nx = (u8)(st + 1);
            o->unk_170 = 1;
        }
    } else {
        if (o->unk_170 != 0) {
            nx = (u8)(st + 1);
        } else {
            nx = (u8)(st - 1);
        }
    }
    o->unk_4c = nx;
    MuseumInsect_GetPillBugWaypoint(&o->unk_34, nx);
}

extern "C" void MuseumInsect_GetPillBugWaypoint(void *v_, s32 k)
{
    V3_b1e8 *v = (V3_b1e8 *)v_;
    switch (k) {
    case 0:
        v->x = 0x11e00;
        v->y = 0x800;
        v->z = 0xda00;
        break;
    case 1:
        v->x = 0x12300;
        v->y = 0x800;
        v->z = 0xf400;
        break;
    case 2:
        v->x = 0x13800;
        v->y = 0x800;
        v->z = 0xf600;
        break;
    case 3:
        v->x = 0x14100;
        v->y = 0x800;
        v->z = 0xe800;
        break;
    default:
        v->x = 0x14000;
        v->y = 0x800;
        v->z = 0xd900;
        break;
    }
}

extern "C" void MuseumInsect_RunMoth(void *o_)
{
    Obj_b1e8 *o = (Obj_b1e8 *)o_;
    if (o->unk_172 == 0) {
        MuseumInsect_MothHover(o);
    } else if (o->unk_22 != 0) {
        o->unk_9a = 0;
        o->unk_172 = 0;
        o->unk_168 = 0;
    } else if (sMuseumInsectFrame % 40 == 0) {
        if (func_02063b8c(100) > 80) {
            AnimFrameCtrl_setup(o->unk_14c, 8, 1, 0x1000, 0);
        }
    }
}

extern "C" void MuseumInsect_MothHover(Obj_b1e8 *o)
{
    u8 r6 = o->unk_ae;
    V3_b1e8 *r4 = &o->unk_2c8;
    V3_b1e8 *tp = (V3_b1e8 *)o;
    volatile s32 c;
    u8 r7;
    Unk_ov004_0223b1e8_V3E sv;
    tp = (V3_b1e8 *)((u8 *)tp + 0x40);
    r7 = o->unk_170;
    *(V3_b1e8 *)&sv = *r4;
    if (func_02063b8c(100) > 30) {
        s32 t = sMuseumInsectFrame;
        c = t;
        if (t % 10 == 0) {
            o->unk_170 = (r7 == 0) ? 1 : 0;
        } else if (c % 5 == 0) {
            o->unk_ae = (r6 == 0) ? 1 : 0;
        }
    }
    if (r6) {
        r4->x = r4->x + o->unk_16c * 0x30;
    } else {
        r4->x = r4->x - o->unk_16c * 0x30;
    }
    if (r7) {
        r4->y = r4->y + o->unk_16c * 0x30;
    } else {
        r4->y = r4->y - o->unk_16c * 0x30;
    }
    {
        s32 d = r4->x - tp->x;
        if (d < 0) d = -d;
        if (d > 0x1000) {
            o->unk_ae = (r6 == 0) ? 1 : 0;
            r4->x = sv.x;
        }
    }
    {
        s32 d = r4->y - tp->y;
        if (d < 0) d = -d;
        if (d > 0x800) {
            o->unk_170 = (r7 == 0) ? 1 : 0;
            r4->y = sv.y;
        }
    }
}

extern "C" void MuseumInsect_RunArachnid(void *o_)
{
    Obj_b1e8 *o = (Obj_b1e8 *)o_;
    if (o->unk_21 != 0) {
        if (!MuseumInsect_UpdateFight(o)) {
            return;
        }
    } else {
        if (MuseumInsect_ArachnidFacePlayer(o) == 1) {
            return;
        }
        if (o->unk_196 == 0x37) {
            u32 t = o->unk_154.mid;
            if (t > 3) {
                AnimFrameCtrl_setup(o->unk_14c, 3, 3, 0x1000, t);
            } else if (t == 3) {
                AnimFrameCtrl_setup(o->unk_14c, 3, 0, 0x1000, 0);
            }
        }
    }
    switch (o->unk_172) {
    case 20:
        MuseumInsect_FightSkirmish(o);
        return;
    case 21:
        MuseumInsect_FightCircleOther(o);
        return;
    case 22:
        MuseumInsect_FightCircleSelf(o);
        return;
    case 23:
        MuseumInsect_FightClash(o);
        return;
    case 24:
        MuseumInsect_FightPause(o);
        return;
    case 4:
        MuseumInsect_ArachnidWalk(o);
        return;
    case 3:
    case 15: {
        s32 r = MuseumInsect_CheckFloorAhead(o);
        if (r != 0 && o->unk_172 == 3) {
            o->unk_ac = MuseumInsect_GetEscapeHeading(o->unk_192, r);
            o->unk_172 = 15;
            return;
        }
        {
            s16 v = o->unk_192;
            if (func_020e7530(&v, o->unk_ac, 0x71c)) {
                o->unk_172 = 4;
            }
            o->unk_192 = v;
        }
        return;
    }
    default:
        if (MuseumInsect_TickTimer(o)) {
            s32 t;
            s32 c;
            o->unk_9a = 0;
            o->unk_172 = 3;
            t = (func_02063b8c(3) + 1) * 20;
            o->unk_174 = (s16)t;
            c = o->unk_192;
            s32 t2 = MuseumInsect_RandTurn(0x10);
            t2 += c;
            o->unk_ac = t2;
        }
        return;
    }
}

extern "C" void MuseumInsect_WiggleHeading(void *o_, s32 a, s32 b)
{
    Obj_b1e8 *o = (Obj_b1e8 *)o_;
    if (b % 4 == 0) {
        o->unk_192 = a + 0x71c;
    } else if (b % 2 == 0) {
        o->unk_192 = a - 0x71c;
    }
    MuseumInsect_PlaySe(o, 0);
}

extern "C" BOOL MuseumInsect_FaceEachOther(Obj_b1e8 *a, Obj_b1e8 *b)
{
    s16 v[2];
    u8 r;
    v[0] = a->unk_192;
    v[1] = b->unk_192;
    r = func_020e7530(&v[1], Math_AngleXZ(&b->unk_2c8, &a->unk_2c8), 0xaaa);
    r &= func_020e7530(&v[0], Math_AngleXZ(&a->unk_2c8, &b->unk_2c8), 0xaaa);
    a->unk_192 = v[0];
    b->unk_192 = v[1];
    if (r) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL MuseumInsect_UpdateFight(Obj_b1e8 *o)
{
    MuseumInsect_ClampToBounds(o, &o->unk_2c8);
    if (o->unk_196 == 0x37) {
        Sub_b1e8 *b = (Sub_b1e8 *)((u8 *)o + 0xb0);
        s32 t = b->unk_a0 >> 12;
        if ((u16)t < 11 && b->unk_a4.mid <= 2) {
            AnimFrameCtrl_setup(b->unk_9c, 11, 1, 0x1000, 3);
        } else if ((u16)t < 14 && b->unk_a4.mid < 11) {
            AnimFrameCtrl_setup(b->unk_9c, 14, 0, 0x1000, 10);
        } else if ((u16)t > 11 && b->unk_a4.mid == 13) {
            AnimModel_setFrame(b, 10);
        }
        return FALSE;
    }
    if (o->unk_172 == 0x19) {
        Obj_b1e8 *p = ((Obj_b1e8 *)MuseumInsect_FindScorpion());
        u32 r = (u8)func_02063b8c(100);
        s16 *q = &o->unk_98;
        if (!MuseumInsect_FaceEachOther(o, p)) {
            return FALSE;
        }
        if (r < 20) {
            o->unk_174 = (func_02063b8c(8) + 2) * 20;
            o->unk_172 = 20;
        } else if (r < 35) {
            o->unk_174 = (func_02063b8c(4) + 1) * 20;
            o->unk_172 = 21;
            {
                V3_b1e8 *sv = &p->unk_2c8;
                V3_b1e8 *dv = &p->unk_34;
                dv->x = sv->x;
                dv->y = sv->y;
                dv->z = sv->z;
            }
            if (func_02063b8c(100) > 50) {
                o->unk_170 = 0;
            } else {
                o->unk_170 = 1;
            }
        } else if (r < 50) {
            o->unk_174 = (func_02063b8c(4) + 1) * 20;
            o->unk_172 = 22;
            {
                V3_b1e8 *sv = &o->unk_2c8;
                V3_b1e8 *dv = &o->unk_34;
                dv->x = sv->x;
                dv->y = sv->y;
                dv->z = sv->z;
            }
            if (func_02063b8c(100) > 50) {
                o->unk_170 = 0;
            } else {
                o->unk_170 = 1;
            }
        } else if (r < 70) {
            o->unk_174 = (func_02063b8c(4) + 1) * 20;
            o->unk_172 = 23;
        } else {
            o->unk_174 = (func_02063b8c(8) + 1) * 20;
            o->unk_172 = 24;
            p->unk_15c = 0;
        }
        o->unk_4c = 0;
        *q = func_02063b8c(5) + 5;
        if (func_02063b8c(100) > 50) {
            *q = -*q;
        }
        p->unk_168 = 0;
        p->unk_172 = o->unk_172;
        MuseumInsect_ClampToBounds(p, &p->unk_2c8);
    }
    return TRUE;
}

extern "C" void MuseumInsect_FightSkirmish(void *r_) {
    Unk_ov004_0223a850_Rec *r = (Unk_ov004_0223a850_Rec *)r_;
    Unk_ov004_0223a850_Rec *o = ((Unk_ov004_0223a850_Rec *)MuseumInsect_FindScorpion());
    Unk_ov004_0223a850_Vec *rp = &r->unk_2c8;
    Unk_ov004_0223a850_Vec *op = &o->unk_2c8;
    s32 a1 = Math_AngleXZ(op, rp);
    s32 v4c;
    s32 dist;
    s32 f1;
    s32 f2;
    s16 *cnt;
    cnt = &r->unk_168;
    v4c = r->unk_4c;
    dist = func_020e9650(rp, op);
    f1 = 1;
    f2 = 1;
    s16 *pw = &r->unk_98;
    Unk_ov004_0223a850_Vec v1, v2;
    MuseumInsect_MakeStepDir(&v1, a1);
    s32 a2 = Math_AngleXZ(rp, op);
    MuseumInsect_MakeStepDir(&v2, a2);
    if (sMuseumInsectFrame % 15 == 0) {
        v4c = func_02063b8c(100);
        r->unk_4c = v4c;
        *pw = func_02063b8c(5) + 5;
        if (func_02063b8c(100) > 0x32) {
            *pw = -*pw;
        }
    }
    s32 t = *pw;
    if (t > 0) {
        *pw = t - 1;
    } else if (t < 0) {
        *pw = t + 1;
    }
    if (v4c < 0x1e && dist < 0xccd) {
        f1 = 0;
        if (*pw <= 0) {
            Unk_ov004_0223a850_Vec w;
            func_020e98f4(&w, &v2, 0x2000);
            VEC_Add(rp, &w, rp);
        } else {
            Unk_ov004_0223a850_Vec w;
            func_020e98f4(&w, &v1, 0x2000);
            VEC_Subtract(op, &w, op);
        }
    } else if (v4c < 0x3c && dist < 0xccd) {
        f2 = 0;
        if (*pw <= 0) {
            Unk_ov004_0223a850_Vec w;
            func_020e98f4(&w, &v2, 0x2000);
            VEC_Subtract(rp, &w, rp);
        } else {
            Unk_ov004_0223a850_Vec w;
            func_020e98f4(&w, &v1, 0x2000);
            VEC_Add(op, &w, op);
        }
    } else if ((dist > 0x5800 || v4c < 0x50) && dist > 0x99a) {
        if (*pw <= 0) {
            Unk_ov004_0223a850_Vec w;
            func_020e98f4(&w, &v2, 0xa000);
            VEC_Add(rp, &w, rp);
        } else {
            Unk_ov004_0223a850_Vec w;
            func_020e98f4(&w, &v1, 0xa000);
            VEC_Add(op, &w, op);
        }
    } else if (dist < 0x5800) {
        if (v4c < 0x5a) {
            if (*pw <= 0) {
                VEC_Subtract(rp, &v2, rp);
            } else {
                VEC_Subtract(op, &v1, op);
            }
        } else if (v4c < 0x64) {
            if (*pw <= 0) {
                Unk_ov004_0223a850_Vec w;
                func_020e98f4(&w, &v2, 0x5000);
                VEC_Subtract(rp, &w, rp);
            } else {
                Unk_ov004_0223a850_Vec w;
                func_020e98f4(&w, &v1, 0x5000);
                VEC_Subtract(op, &w, op);
            }
        }
    }
    if (f2 != 0) {
        MuseumInsect_WiggleHeading(r, Math_AngleXZ(rp, op), *cnt);
    } else {
        r->unk_192 = Math_AngleXZ(rp, op);
    }
    if (f1 != 0) {
        MuseumInsect_WiggleHeading(o, a1, *cnt);
    } else {
        o->unk_192 = Math_AngleXZ(op, rp);
    }
    *cnt = *cnt + 1;
    if (MuseumInsect_TickTimer(r) != 0) {
        r->unk_172 = 0x19;
        *cnt = 0;
    }
}

extern "C" void MuseumInsect_FightCircleOther(void *r_) {
    Unk_ov004_0223a850_Rec *r = (Unk_ov004_0223a850_Rec *)r_;
    Unk_ov004_0223a850_Rec *o = ((Unk_ov004_0223a850_Rec *)MuseumInsect_FindScorpion());
    Unk_ov004_0223a850_Vec *a = &r->unk_2c8;
    Unk_ov004_0223a850_Vec *b = &o->unk_2c8;
    Unk_ov004_0223a850_Vec *c = &o->unk_34;
    s32 ang = Math_AngleXZ(a, b);
    s16 *cnt = &r->unk_168;
    s32 v4c = r->unk_4c;
    if (sMuseumInsectFrame % 10 == 0) {
        if (func_02063b8c(100) > 0x32) {
            r->unk_170 = 1;
        } else {
            r->unk_170 = 0;
        }
    }
    u32 f = r->unk_170;
    if (f != 0 && v4c < 0x1554) {
        ang = (s16)(ang + 0xb6);
        v4c += 0xb6;
    } else if (f == 0 && v4c > 0) {
        ang = (s16)(ang - 0xb6);
        v4c -= 0xb6;
    } else if (f != 0) {
        r->unk_170 = 0;
    } else {
        r->unk_170 = 1;
    }
    s32 d = func_020e9650(c, a);
    s32 idx = ((u16)ang >> 4) * 2;
    b->x = a->x + func_01ffcb0c(data_02135f44[idx], d);
    b->z = a->z + func_01ffcb0c(data_02135f44[idx + 1], d);
    r->unk_192 = ang;
    s32 res = Math_AngleXZ(b, a);
    o->unk_192 = res;
    MuseumInsect_WiggleHeading(o, res, *cnt);
    r->unk_4c = v4c;
    *cnt = *cnt + 1;
    if (MuseumInsect_TickTimer(r) != 0) {
        r->unk_172 = 0x19;
        *cnt = 0;
    }
}

extern "C" void MuseumInsect_FightCircleSelf(void *r_) {
    Unk_ov004_0223a850_Rec *r = (Unk_ov004_0223a850_Rec *)r_;
    Unk_ov004_0223a850_Rec *o = ((Unk_ov004_0223a850_Rec *)MuseumInsect_FindScorpion());
    Unk_ov004_0223a850_Vec *a = &r->unk_2c8;
    Unk_ov004_0223a850_Vec *b = &o->unk_2c8;
    Unk_ov004_0223a850_Vec *c = &r->unk_34;
    s32 ang = Math_AngleXZ(b, a);
    s16 *cnt = &r->unk_168;
    s32 v4c = r->unk_4c;
    if (sMuseumInsectFrame % 10 == 0) {
        if (func_02063b8c(100) > 0x32) {
            r->unk_170 = 1;
        } else {
            r->unk_170 = 0;
        }
    }
    u32 f = r->unk_170;
    if (f != 0 && v4c < 0x1554) {
        ang = (s16)(ang + 0xb6);
        v4c += 0xb6;
    } else if (f == 0 && v4c > 0) {
        ang = (s16)(ang - 0xb6);
        v4c -= 0xb6;
    } else if (f != 0) {
        r->unk_170 = 0;
    } else {
        r->unk_170 = 1;
    }
    s32 d = func_020e9650(c, b);
    s32 idx = ((u16)ang >> 4) * 2;
    a->x = b->x + func_01ffcb0c(data_02135f44[idx], d);
    a->z = b->z + func_01ffcb0c(data_02135f44[idx + 1], d);
    o->unk_192 = ang;
    s32 res = Math_AngleXZ(a, b);
    r->unk_192 = res;
    MuseumInsect_WiggleHeading(r, res, *cnt);
    r->unk_4c = v4c;
    *cnt = *cnt + 1;
    if (MuseumInsect_TickTimer(r) != 0) {
        r->unk_172 = 0x19;
        *cnt = 0;
    }
}

extern "C" void MuseumInsect_FightPause(void *r_) {
    Unk_ov004_0223a850_Rec *r = (Unk_ov004_0223a850_Rec *)r_;
    if (MuseumInsect_TickTimer(r) != 0) {
        r->unk_172 = 0x19;
        ((Unk_ov004_0223a850_Rec *)MuseumInsect_FindScorpion())->unk_15c = 0x1000;
        r->unk_168 = 0;
    }
}

extern "C" void MuseumInsect_FightClash(void *r_) {
    Unk_ov004_0223a850_Rec *r = (Unk_ov004_0223a850_Rec *)r_;
    Unk_ov004_0223a850_Rec *o = ((Unk_ov004_0223a850_Rec *)MuseumInsect_FindScorpion());
    Unk_ov004_0223a850_Vec *a = &r->unk_2c8;
    Unk_ov004_0223a850_Vec *b = &o->unk_2c8;
    s16 *cnt = &r->unk_168;
    if (func_020e9650(a, b) < 0x2000) {
        Unk_ov004_0223a850_Vec v1, v2, w1, w2;
        s32 ang1 = Math_AngleXZ(b, a);
        o->unk_192 = ang1;
        MuseumInsect_MakeStepDir(&v1, ang1);
        MuseumInsect_WiggleHeading(o, ang1, *cnt);
        s32 ang2 = Math_AngleXZ(a, b);
        r->unk_192 = ang2;
        MuseumInsect_MakeStepDir(&v2, ang2);
        MuseumInsect_WiggleHeading(r, ang2, *cnt);
        func_020e98f4(&w1, &v2, 0x4000);
        VEC_Subtract(a, &w1, a);
        func_020e98f4(&w2, &v1, 0x4000);
        VEC_Subtract(b, &w2, b);
        *cnt = *cnt + 1;
    } else if (MuseumInsect_TickTimer(r) != 0) {
        r->unk_172 = 0x19;
        *cnt = 0;
    }
}

extern "C" void MuseumInsect_ArachnidWalk(void *r_) {
    Unk_ov004_0223a850_Rec *r = (Unk_ov004_0223a850_Rec *)r_;
    void *p = _ZN18Unk_ov004_02239e705crawlEv(r);
    if (MuseumInsect_ClampToBounds(r, &r->unk_2c8) != 0) {
        r->unk_172 = 3;
        return;
    }
    if (MuseumInsect_TickTimer(r) != 0) {
        if (p != 0) {
            r->unk_ac = MuseumInsect_GetEscapeHeading(r->unk_192, (s32)p);
        } else {
            r->unk_ac = MuseumInsect_RandTurn(0x10);
        }
        r->unk_9a = 0;
        r->unk_172 = 0x19;
        if (r->unk_22 != 0) {
            s16 v = (func_02063b8c(6) + 1) * 0x14;
            r->unk_174 = v;
        } else {
            s16 v = (func_02063b8c(0x1e) + 5) * 0x14;
            r->unk_174 = v;
        }
    }
}

extern "C" BOOL MuseumInsect_ArachnidFacePlayer(void *r_) {
    Unk_ov004_0223a850_Rec *r = (Unk_ov004_0223a850_Rec *)r_;
    Unk_ov004_0223a850_Out l;
    s16 ang;
    s32 t = MuseumInsect_UpdateAlertLevel(r, &l);
    Unk_ov004_0223a850_Vec *pos = &r->unk_2c8;
    s16 *pw = &r->unk_98;
    if (l.unk_14 != 0 && (t == 3 || *pw != 0)) {
        s32 a = Math_AngleXZ(pos, &l);
        ang = r->unk_192;
        Unk_ov004_0223aa40_Sub *s = (Unk_ov004_0223aa40_Sub *)((u8 *)r + 0xb0);
        func_020e7530(&ang, a, 0x38e);
        r->unk_192 = ang;
        if ((s8)r->unk_196 == 0x37) {
            s32 x = s->unk_a0 >> 12;
            if ((u16)x < 0xb && s->unk_a4.mid <= 2) {
                AnimFrameCtrl_setup(s->unk_9c, 0xb, 1, 0x1000, 3);
            } else if ((u16)x < 0xe && s->unk_a4.mid < 0xa) {
                AnimFrameCtrl_setup(s->unk_9c, 0xe, 0, 0x1000, 0xa);
            } else if (s->unk_a4.mid == 0xd && (u16)x > 0xa) {
                AnimModel_setFrame(s, 0xa);
            }
        }
        if (*pw > 0) {
            *pw = *pw - 1;
        } else {
            *pw = 0x3c;
        }
        return TRUE;
    }
    return FALSE;
}

extern "C" void MuseumInsect_RunDungBeetle(void *r_) {
    Unk_ov004_0223a850_Rec *r = (Unk_ov004_0223a850_Rec *)r_;
    Unk_ov004_0223a850_Rec *p;
    u8 c = r->unk_196;
    if (c == 0x23) {
        p = ((Unk_ov004_0223a850_Rec *)MuseumInsect_FindDungBall());
    }
    switch (r->unk_172) {
    case 4: {
        u32 tmp = r->unk_15c;
        if (func_020e7870(&tmp, 0x1000, 0x66, 0x1000, 0x29) == 0) {
            r->unk_172 = 5;
        }
        r->unk_15c = tmp;
        break;
    }
    case 5:
        if (MuseumInsect_TickTimer(r) != 0) {
            r->unk_172 = 0x19;
            r->unk_15c = 0;
            if (c == 0x23) {
                s16 v = (func_02063b8c(3) + 2) * 0x14;
                if (r->unk_22 == 0) {
                    v = v * 3;
                }
                r->unk_174 = v;
                p->unk_98 = v;
            } else {
                r->unk_174 = r->unk_98;
            }
        }
        break;
    default:
        if (MuseumInsect_TickTimer(r) != 0) {
            r->unk_172 = 4;
            if (c == 0x23) {
                s16 v = (func_02063b8c(9) + 2) * 0x14;
                r->unk_174 = v;
                p->unk_98 = v;
            } else {
                s32 v = r->unk_98;
                if (v > 0) {
                    r->unk_174 = v;
                }
            }
        }
        break;
    }
}

extern "C" void MuseumInsect_RunCockroach(void *r_) {
    Unk_ov004_0223a850_Rec *r = (Unk_ov004_0223a850_Rec *)r_;
    Unk_ov004_0223a850_Out l;
    s16 ang;
    s32 t = MuseumInsect_UpdateAlertLevel(r, &l);
    if (r->unk_9c > 0x50) {
        r->unk_9c = 0x50;
    }
    switch (r->unk_172) {
    case 4:
        _ZN18Unk_ov004_02239e706scurryEP21Unk_ov004_02239e70_V3(r, &l);
        break;
    case 3:
        ang = r->unk_192;
        if (func_020e7530(&ang, r->unk_ac, 0x2000) != 0) {
            r->unk_172 = 4;
        }
        r->unk_192 = ang;
        break;
    default:
        if (t == 3) {
            r->unk_ac = Math_AngleXZ(&l, &r->unk_2c8);
            r->unk_174 = (func_02063b8c(4) + 2) * 0x14;
            r->unk_172 = 3;
        } else if (MuseumInsect_TickTimer(r) != 0) {
            r->unk_172 = 4;
            r->unk_174 = (func_02063b8c(4) + 1) * 0x14;
        }
        break;
    }
    if (r->unk_4c == 0) {
        if (l.unk_14 != 0) {
            if (l.unk_14 != 0) {
                if (l.unk_0c > 0) {
                    if (r->unk_98 == 0) {
                        if (func_020e9650(&l, &r->unk_2c8) < 0xe66) {
                            MuseumExhibitInfo_SpawnAutoTalk();
                            r->unk_4c = 1;
                        }
                    }
                }
            }
        }
    }
}

void Unk_ov004_02239e70::scurry(Unk_ov004_02239e70_V3 *v) {
    s16 *cnt = &unk_98;
    Unk_ov004_02239e70_V3 *pos = &unk_2c8;
    s32 res = crawl();
    s16 ang = unk_192;
    Unk_ov004_02239e70_V3 d1;
    func_020e9960(&d1, v, (Unk_ov004_02239e70_V3 *)((u8 *)this + 0x2c8));
    Unk_ov004_02239e70_V3 d0;
    MuseumInsect_MakeStepDir(&d0, ang);
    func_020e94f8(&d0);
    func_020e94f8(&d1);
    s32 dot = func_020e95cc(&d0, &d1);
    if (*((u8 *)v + 0x14) != 0 && dot > 0) {
        if (func_020e9650(pos, v) < 0x1800) {
            if (dot > data_02136744[1]) {
                *cnt = *cnt + 1;
            }
        } else if (func_020e9650(pos, v) < 0x2800) {
            if (res == 0) {
                func_020e7530(&ang, Math_AngleXZ(v, pos), 0xaaa);
                unk_192 = ang;
            }
        }
    }
    s32 c = *cnt;
    if (c > 0) {
        s32 m = c << 12;
        pos->y = func_01ffcb0c(0x99a - func_01ffcb0c(0xcd, m), m);
        if (pos->y < 3) {
            pos->y = 3;
            *cnt = 0;
        } else {
            *cnt = *cnt + 1;
        }
        MuseumInsect_FlapWings(this);
        MuseumInsect_PlaySe(this, 1);
    } else {
        MuseumInsect_PlaySe(this, 0);
        if (unk_b0.anim.unk_08b.mid != 0) {
            AnimModel_setFrame(&unk_b0, 0);
        }
    }
    if (MuseumInsect_TickTimer(this) != 0 && *cnt == 0) {
        unk_174 = (func_02063b8c(10) + 3) * 20;
        unk_172 = 0x19;
    }
}

s32 Unk_ov004_02239e70::crawl() {
    Unk_ov004_02239e70_V3 *pos = &unk_2c8;
    Unk_ov004_02239e70_V3 saved;
    saved.x = pos->x;
    saved.y = pos->y;
    saved.z = pos->z;
    s16 *cnt = &unk_168;
    s32 speed = 5;
    s32 res = MuseumInsect_SteerFromEdges(this);
    u32 st = *(u8 *)&unk_196;
    Unk_ov004_02239e70_V3 dir;
    s32 hit, a, c, mul, k;
    MuseumInsect_MakeStepDir(&dir, unk_192);
    if (st == 0x1e) {
        speed = 4;
    }
    if (res == 0 || st == 0x34) {
        mul = (speed + unk_16c) << 12;
        pos->x = pos->x + func_01ffcb0c(mul, dir.x);
        pos->z = pos->z + func_01ffcb0c(mul, dir.z);
        if (st == 0x34 || st == 0x30) {
            Unk_ov004_02239e70_Buf buf;
            ((GroundInfo *)&buf)->initAtPos((Unk_0203389c_Vec *)pos, 0, 0);
            if (((GroundInfo *)&buf)->getHeight(0) > 0x200) {
                hit = 1;
            } else {
                hit = 0;
            }
            GroundInfo_Destruct(&buf);
            if (hit != 0) {
                if (res == 0 && st == 0x34) {
                    if (func_02063b8c(100) < 0x32) {
                        unk_192 = unk_192 + 0x38e;
                    } else {
                        unk_192 = unk_192 - 0x38e;
                    }
                }
                pos->x = saved.x;
                pos->y = saved.y;
                pos->z = saved.z;
            }
        }
        if (st == 0x37) {
            k = 0x71c;
        } else {
            k = 0xaaa;
        }
        c = *cnt;
        if (c == 0) {
            a = unk_192;
            unk_192 = a + func_01ffcb0c(k, 0x800);
        } else if (c % 4 == 0) {
            unk_192 = k + unk_192;
        } else if (c % 2 == 0) {
            unk_192 = unk_192 - k;
        }
        *cnt = *cnt + 1;
        if ((u8)(st + 0xca) <= 1) {
            MuseumInsect_PlaySe(this, 0);
        }
        return res;
    }
    return res;
}

extern "C" void MuseumInsect_ClampStep(void *out_, void *in_, s32 lim) {
    Unk_ov004_02239e70_V3 *out = (Unk_ov004_02239e70_V3 *)out_;
    Unk_ov004_02239e70_V3 *in = (Unk_ov004_02239e70_V3 *)in_;
    s32 l = func_01ffcb0c(lim << 12, 0x40);
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
    out->y = 0;
    s32 x = in->x;
    if (x > l) {
        out->x = l;
    } else if (x < -l) {
        out->x = -l;
    }
    s32 z = in->z;
    if (z > l) {
        out->z = l;
    } else if (z < -l) {
        out->z = -l;
    }
}

void Unk_ov004_02239e70::runSpider() {
    s16 *cnt = &unk_98;
    switch (unk_172) {
    case 2: {
        if (unk_170 != 0) {
            unk_170 = 0;
            unk_194 = 0x5b;
        } else {
            unk_170 = 1;
            unk_194 = -0x5b;
        }
        if (unk_b0.anim.unk_08b.mid == 0x38) {
            unk_172 = 0x19;
            unk_194 = 0;
            unk_2c8.x = unk_4c;
            NNS_G3dMdlSetMdlAlpha(func_0209c0ac(unk_288), 0, 0);
            unk_98 = (func_02063b8c(4) + 3) * 20;
        }
        break;
    }
    case 1:
        if (unk_b0.anim.unk_08b.mid == 0x20) {
            unk_98 = (func_02063b8c(3) + 2) * 20;
            unk_172 = 0x12;
            unk_168 = 0;
        }
        break;
    case 0x12:
        if (swing(&unk_168) && *cnt <= 0) {
            unk_192 = 0;
            unk_172 = 2;
            AnimFrameCtrl_setup(&unk_b0.anim, 0x39, 1, 0x1000, 0x20);
        } else {
            *cnt = *cnt - 1;
        }
        break;
    default:
        if (isPlayerNear()) {
            if (*cnt > 0) {
                *cnt = *cnt - 1;
            } else {
                unk_172 = 1;
                unk_9c = 0;
                AnimFrameCtrl_setup(&unk_b0.anim, 0x21, 1, 0x1000, 0);
                NNS_G3dMdlSetMdlAlpha(func_0209c0ac(unk_288), 0, 0x1f);
            }
        } else {
            unk_160 = 1;
        }
        break;
    }
}

BOOL Unk_ov004_02239e70::isPlayerNear() {
    u8 *r = (u8 *)PlayerActor_GetActor(4);
    if (r != NULL) {
        if (func_020e9650(r + 0x5c, &unk_2c8) < 0x4800) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov004_02239e70::swing(s16 *p) {
    s32 a = unk_192;
    if (*p == 0) {
        if (func_02063b8c(100) > 0x32) {
            unk_170 = 0;
        } else {
            unk_170 = 1;
        }
    }
    if (unk_170 != 0) {
        if (a > 0xaaa) {
            unk_170 = 0;
        }
    } else if (a < (s32)0xfffff556) {
        unk_170 = 1;
    }
    if (unk_170 != 0) {
        unk_192 = a + 0x222;
    } else {
        unk_192 = a - 0x222;
    }
    *p = *p + 1;
    return TRUE;
}

void Unk_ov004_02239e70::runPerched() {
    switch (unk_172) {
    case 3:
        sidestep(&unk_168);
        break;
    case 2:
        crawlUp(&unk_168);
        break;
    case 1:
        crawlDown(&unk_168);
        break;
    default:
        if (unk_196 == 9) {
            animSilkMoth();
        } else if (unk_22 != 0) {
            if (sMuseumInsectFrame % 0x14 == 0) {
                if (func_02063b8c(100) < 0x46) {
                } else {
                    goto pick;
                }
            }
        } else if (sMuseumInsectFrame % 0x28 == 0) {
            if (func_02063b8c(100) >= 0x55) {
            pick:
                if (func_02063b8c(100) < 0x32) {
                    unk_172 = 3;
                } else {
                    unk_172 = 2;
                }
            }
        }
        break;
    }
}

void Unk_ov004_02239e70::animSilkMoth() {
    u32 r = unk_b0.anim.unk_08b.mid;
    if (r == 0xd || r < 9) {
        AnimFrameCtrl_setup(&unk_b0.anim, 9, 1, 0, 9);
    }
    if (sMuseumInsectFrame > 0x50) {
        if (unk_22 != 0) {
            if (func_02063b8c(100) > 0x5c) {
                if (r < 0xa) {
                    AnimFrameCtrl_setup(&unk_b0.anim, 0xe, 1, 0x1000, 9);
                }
            }
        } else if (sMuseumInsectFrame % 5 == 0) {
            if (func_02063b8c(100) > 0x5c) {
                if (r < 0xa) {
                    AnimFrameCtrl_setup(&unk_b0.anim, 0xe, 1, 0x1000, 9);
                }
            }
        }
    }
}

void Unk_ov004_02239e70::crawlUp(volatile s16 *p) {
    s32 lim = unk_a8 + 0x400;
    Unk_ov004_02239e70_V3 *pos = &unk_2c8;
    s32 v = *p;
    if ((v >= 0 && v < 2) || (v >= 6 && v < 8)) {
        *p = *p + 1;
        unk_192 = unk_192 + 0x2aa;
        unk_190 = unk_190 + 0xaa;
        pos->y = pos->y + 0x20;
    } else if (v >= 2 && v < 6) {
        *p = *p + 1;
        unk_192 = unk_192 - 0x2aa;
        unk_190 = unk_190 - 0xaa;
        pos->y = pos->y + 0x20;
    } else {
        if (func_02063b8c(100) > 0x46) {
            unk_172 = 1;
            *p = 0;
        } else {
            if (*p >= 8) {
                *p = 0;
            }
        }
    }
    if (pos->y > lim) {
        pos->y = lim;
    }
}

void Unk_ov004_02239e70::crawlDown(volatile s16 *p) {
    s32 lim = unk_a8 - 0x100;
    Unk_ov004_02239e70_V3 *pos = &unk_2c8;
    s32 v = *p;
    if ((v >= 0 && v < 2) || (v >= 6 && v < 8)) {
        *p = *p + 1;
        unk_192 = unk_192 + 0x2aa;
        unk_190 = unk_190 + 0xaa;
        pos->y = pos->y - 0x20;
    } else if (v >= 2 && v < 6) {
        *p = *p + 1;
        unk_192 = unk_192 - 0x2aa;
        unk_190 = unk_190 - 0xaa;
        pos->y = pos->y - 0x20;
    } else {
        if (func_02063b8c(100) > 0x46) {
            unk_172 = 0x19;
            *p = 0;
        } else {
            if (*p >= 8) {
                *p = 0;
            }
        }
    }
    if (pos->y < lim) {
        pos->y = lim;
    }
}

void Unk_ov004_02239e70::sidestep(volatile s16 *p) {
    s32 a = unk_192;
    s32 v = *p;
    if (v == 0) {
        if (func_02063b8c(100) < 0x32) {
            *p = *p + 1;
        } else {
            *p = *p - 1;
        }
    } else {
        if ((v > 0 && v <= 6) || (v > 0x12 && v <= 0x18) || (v < -6 && v >= -0x12)) {
            if (v > 0) {
                *p = *p + 1;
                unk_190 = unk_190 + 0xb6;
            } else {
                *p = *p - 1;
                unk_190 = unk_190 - 0xb6;
            }
            a = (s16)(a + 0x16b);
        } else if ((v > 6 && v <= 0x12) || (v < 0 && v >= -6) || (v < -0x12 && v >= -0x18)) {
            if (v > 0) {
                *p = *p + 1;
                unk_190 = unk_190 - 0xb6;
            } else {
                *p = *p - 1;
                unk_190 = unk_190 + 0xb6;
            }
            a = (s16)(a - 0x16b);
        } else {
            *p = 0;
            unk_172 = 0x19;
        }
    }
    unk_192 = a;
}

void Unk_ov004_02239e70::runCicada() {
    MuseumInsect_TickAlert(this);
    if (unk_196 == 0x14) {
        Unk_ov004_02239e70_Model *p = &unk_b0;
        if (unk_9c >= unk_9e || unk_50 != 0) {
            if (p->anim.unk_08b.mid == 0) {
                AnimFrameCtrl_setup(&p->anim, 4, 1, 0x1000, 0);
                unk_50 = 0x3c;
            } else if (unk_50 != 0) {
                unk_50 = unk_50 - 1;
            }
        } else {
            s32 v = p->anim.unk_08 >> 12;
            if ((u16)v != 0 || p->anim.unk_04b.mid != 0) {
                AnimFrameCtrl_setup(&p->anim, 0, 3, 0x1000, (u16)v);
            }
        }
    }
    if (unk_22 != 0) {
        if (unk_9c < unk_9e) {
            if (unk_50 == 0) {
                MuseumInsect_PlaySe(this, 0);
            } else {
                unk_50 = unk_50 - 1;
            }
        } else {
            unk_50 = 0x3c;
        }
    }
}

void Unk_ov004_02239434::runWalker()
{
    volatile s16 *p = &unk_168;
    s32 v;
    reactToPlayer((u16 *)p);
    unk_168 = unk_168 + 1;
    if (unk_172 == 4) {
        wander();
        if (unk_196 == 0x1a) {
            if ((v = *p) > 0x140 || (v % 0x14 == 0 && func_02063b8c(100) > 0x5a && *p > 0xa0)) {
                unk_172 = 0x19;
                *p = 0;
            }
        } else {
            if ((v = *p) > 0xa0 || (v % 0x14 == 0 && func_02063b8c(100) > 0x5a && *p > 0x50)) {
                unk_172 = 0x19;
                *p = 0;
            }
        }
    } else if (unk_196 == 0x1a) {
        if (unk_22 != 0 && (u32)(unk_b0.unk_a4 << 4) >> 16 == 2) {
            if ((v = *p) > 0xa0 || (v % 0x14 == 0 && func_02063b8c(100) > 0x55 && *p >= 0x28)) {
                *p = 0;
                unk_172 = 4;
            }
        }
    } else if (unk_22) {
        if ((v = *p) > 0x50 || (v % 0x14 == 0 && func_02063b8c(100) > 0x55)) {
            unk_172 = 4;
            *p = 0;
        }
    } else {
        if ((v = *p) > 0x320 || (v % 100 == 0 && func_02063b8c(100) > 0x5a)) {
            unk_172 = 4;
            *p = 0;
        }
    }
}

void Unk_ov004_02239434::reactToPlayer(u16 *out)
{
    Unk_ov004_02239b6c_Buf buf;
    MuseumInsect_UpdateAlertLevel(this, &buf);
    if (buf.flag == 0) return;
    s32 r6 = unk_9c;
    Unk_ov004_02239b6c_Sub *r4 = &unk_b0;
    if (buf.v <= 0xccd) {
        *out = 0;
        return;
    }
    s32 c = unk_196;
    u8 n;
    if ((u8)(s8)(c - 0xe) <= 1) {
        if (unk_50 != 0) {
            unk_192 = Math_AngleXZ(&unk_2c8, &buf);
            unk_172 = 0x19;
        }
        if (r6 > 0x14) {
            AnimFrameCtrl_setup(&r4->unk_9c, 9, 1, 0x1000, (u32)(r4->unk_a4 << 4) >> 16);
            unk_50 = 0x3c;
        } else if ((n = unk_50) != 0) {
            unk_50 = n - 1;
        } else if (buf.v < unk_a0) {
            u32 t = (u32)(r4->unk_a4 << 4) >> 16;
            if (t == 0) {
                AnimFrameCtrl_setup(&r4->unk_9c, 4, 1, 0x1000, 0);
                unk_50 = 0x3c;
            } else if (t > 4) {
                AnimFrameCtrl_setup(&r4->unk_9c, 4, 3, 0x1000, t);
            }
        } else {
            u32 t = (u32)(r4->unk_a4 << 4) >> 16;
            if (t != 0) {
                AnimFrameCtrl_setup(&r4->unk_9c, 0, 3, 0x1000, t);
            }
        }
    } else if (c == 0x1a) {
        if (r6 > 0x14 || unk_22 == 0) {
            u32 t = (u32)(r4->unk_a4 << 4) >> 16;
            if (t == 2) {
                AnimModel_setFrame(r4, 1);
            } else if (t == 1) {
                AnimModel_setFrame(r4, 0);
                unk_172 = 0x19;
                unk_50 = 0x3c;
            }
        } else {
            s32 h = (s32)r4->unk_a4 >> 12;
            if ((u16)h == 0 && unk_50 == 0) {
                AnimModel_setFrame(r4, 1);
            } else if ((u16)h == 1) {
                AnimModel_setFrame(r4, 2);
            } else if ((n = unk_50) != 0) {
                unk_50 = n - 1;
            }
        }
    }
}

void Unk_ov004_02239434::wander()
{
    s32 *p60 = &unk_60.x;
    s32 *p58 = &unk_58.x;
    s32 ang = unk_192;
    u32 flip = unk_ae;
    Unk_ov004_02239434_Vec *pos = &unk_2c8;
    struct {
        Unk_ov004_02239434_Vec v;
        Unk_ov004_02239434_Vec sv;
    } l;
    l.sv.x = pos->x;
    l.sv.y = pos->y;
    l.sv.z = pos->z;
    if (func_02063b8c(100) > 0x50) {
        if (sMuseumInsectFrame % 0x14 == 0) {
            if (flip == 0) flip = 1; else flip = 0;
            unk_ae = flip;
        }
        if (flip) {
            ang = (s16)(ang + (s16)unk_4c);
        } else {
            ang = (s16)(ang - (s16)unk_4c);
        }
    }
    MuseumInsect_MakeStepDir(&l.v, ang);
    unk_192 = ang;
    pos->z += func_01ffcb0c(func_01ffcb0c(unk_16c << 12, l.v.z), 0x80);
    pos->x += func_01ffcb0c(func_01ffcb0c(unk_16c << 12, l.v.x), 0x80);
    s32 x = pos->x;
    if (x < p58[0] || x > p60[0]) pos->x = l.sv.x;
    s32 z = pos->z;
    if (z < p58[1] || z > p60[1]) pos->z = l.sv.z;
    s32 sz = l.sv.z;
    s32 nz = pos->z;
    if (nz != sz) pos->y = pos->y - (nz - sz);
    s32 y = pos->y;
    if (y < 0x900 && y > 0x1000) pos->y = l.sv.y;
}

extern "C" s32 MuseumInsect_RandTurn(s32 n)
{
    return (s16)func_01ffcb0c(0x38e, (func_02063b8c(n * 2 + 1) - n) << 12);
}

void Unk_ov004_02239434::setBounds(s32 *a, s32 *b)
{
    s32 y1 = func_01ffcb0c(a[1] << 12, 0x100);
    s32 x1 = func_01ffcb0c(a[0] << 12, 0x100);
    Unk_ov004_02239988_Vec2 *a2 = &unk_58;
    a2->x = x1;
    a2->y = y1;
    s32 y2 = func_01ffcb0c(b[1] << 12, 0x100);
    s32 x2 = func_01ffcb0c(b[0] << 12, 0x100);
    Unk_ov004_02239988_Vec2 *b2 = &unk_60;
    b2->x = x2;
    b2->y = y2;
}

void Unk_ov004_02239434::setBoundsAroundPos()
{
    Unk_ov004_02239434_Vec *o = &unk_2c8;
    s32 ay = o->z - 0x200;
    Unk_ov004_02239988_Vec2 *a = &unk_58;
    a->x = o->x - 0x900;
    a->y = ay;
    s32 by = o->z + 0x500;
    Unk_ov004_02239988_Vec2 *b = &unk_60;
    b->x = o->x + 0x900;
    b->y = by;
}

void Unk_ov004_02239434::init(u32 a, s32 b, s32 c, s16 d, s32 e, s32 f)
{
    Unk_ov004_02239434_Vec *o = &unk_2c8;
    Unk_ov004_02239434_Vec *dv = &unk_34;
    dv->x = o->x;
    dv->y = o->y;
    dv->z = o->z;
    unk_172 = 0x19;
    unk_192 = d;
    unk_190 = c;
    unk_9e = a;
    unk_a0 = func_01ffcb0c(b << 12, 0x100);
    unk_4c = 0;
    unk_16c = f;
    unk_30 = 0;
    unk_9c = 0;
    s32 t = func_01ffcb0c(e << 12, 0x100);
    unk_a8 = o->y + t;
    unk_54 = unk_a8;
    unk_9a = 0;
}

void Unk_ov004_02239434::updateButterfly() { MuseumInsect_RunButterfly(this); }

void Unk_ov004_02239434::setupFlyer(s32 a, s32 b, s32 c, s32 d, s32 e)
{
    s32 t = func_01ffcb0c((c + 8) << 12, 0x1000);
    s32 r = func_01ffcb0c(t, 0x100);
    Unk_ov004_02239434_Vec *s = &unk_2c8;
    Unk_ov004_02239434_Vec *dst = &unk_40;
    dst->x = s->x;
    dst->y = s->y;
    dst->z = s->z;
    init(a, b, 0, 0, 0, d);
    unk_50 = 0x28;
    unk_174 = (func_02063b8c(10) + 0x10) * 0x14;
    unk_16a = (u8)func_02063b8c(0x12);
    unk_170 = 1;
    unk_4c = e;
    unk_98 = 0;
    unk_a8 = r;
    unk_54 = r;
    if (unk_22 == 0) {
        unk_172 = 6;
        s32 c2 = unk_196;
        if (c2 != 0xa && c2 != 0x33) {
            AnimFrameCtrl_setup(&unk_b0.unk_9c, 0x11, 1, 0x1000, 9);
        } else {
            AnimModel_setFrame(&unk_b0, 0);
        }
    }
}

void Unk_ov004_02239434::setupCommonButterfly() { setupFlyer(0xc8, 0x50, 0x25, 6, 0x119a); }

void Unk_ov004_02239434::setupYellowButterfly() { setupFlyer(0xc8, 0x50, 0x25, 6, 0x119a); }

void Unk_ov004_02239434::setupTigerButterfly() { setupFlyer(0xc8, 0x50, 0x28, 7, 0x1000); }

void Unk_ov004_02239434::setupPeacock() { setupFlyer(0xc8, 0x50, 0x28, 7, 0x1000); }

void Unk_ov004_02239434::setupMonarch() { setupFlyer(0xc8, 0x50, 0x2d, 7, 0xe66); }

void Unk_ov004_02239434::setupEmperor() { setupFlyer(0xc8, 0x50, 0x14, 9, 0x1000); }

void Unk_ov004_02239434::setupAgrias() { setupFlyer(0xc8, 0x50, 0x2d, 0xf, 0x1000); }

void Unk_ov004_02239434::setupBirdwing() { setupFlyer(0xc8, 0x50, 0x2d, 8, 0x1000); }

void Unk_ov004_02239434::updateMoth() { MuseumInsect_RunMoth(this); }

void Unk_ov004_02239434::setupMoth()
{
    Unk_ov004_02239434_Vec *d = &unk_40;
    init(0x96, 0x28, 1, (s16)0x8000, 0, 9);
    if (unk_22 == 0) {
        unk_190 = 0x2aa8;
    }
    unk_50 = 0x3c;
    unk_16a = (u8)func_02063b8c(0x12);
    unk_170 = 1;
    unk_54 = 0;
    Unk_ov004_02239434_Vec *s = &unk_2c8;
    d->x = s->x;
    d->y = s->y;
    d->z = s->z;
    if (unk_22 == 0) {
        AnimFrameCtrl_setup(&unk_b0.unk_9c, 8, 1, 0x1000, 0);
    }
}

void Unk_ov004_02239434::setupFirefly()
{
    Unk_ov004_022395cc_Pad pad;
    if (unk_22) {
        Unk_ov004_02239434_Vec *v = &unk_2c8;
        v->x = 0x7a00;
        v->y = 0x2d00;
        v->z = 0x12c00;
        init(0x5a, 0x50, 0, 0, 0, 4);
        unk_50 = 0x3c;
        s32 a[2];
        s32 b[2];
        a[0] = 0;
        a[1] = 0xac;
        b[0] = 0x96;
        b[1] = 0x1ac;
        setBounds(a, b);
    } else {
        init(0x5a, 0x50, 0x3556, 0x6000, 0, 4);
    }
}

void Unk_ov004_02239434::updateFirefly() { MuseumInsect_RunFirefly(this); }

void Unk_ov004_02239434::setupMosquito() { init(0, 0, 0, 0, 0, 0xb); }

void Unk_ov004_02239434::updateMosquito() { MuseumInsect_RunMosquito(this); }

void Unk_ov004_02239434::setupPerched(s32 a, s32 b)
{
    init(a, b, 0x3556, (s16)0x8000, 0, 0);
    unk_50 = 0;
}

void Unk_ov004_02239434::updatePerched() { _ZN18Unk_ov004_02239e7010runPerchedEv(this); }

void Unk_ov004_02239434::setupHerculesBeetle() { setupPerched(0x5a, 0x3c); }

void Unk_ov004_02239434::setupElephantBeetle() { setupPerched(0x5a, 0x3c); }

void Unk_ov004_02239434::setupAtlasBeetle() { setupPerched(0x5a, 0x3c); }

void Unk_ov004_02239434::setupDynastidBeetle() { setupPerched(0x64, 0x3c); }

void Unk_ov004_02239434::setupSawStagBeetle() { setupPerched(0x64, 0x3c); }

void Unk_ov004_02239434::setupStagBeetle() { setupPerched(0x64, 0x3c); }

void Unk_ov004_02239434::setupGiantBeetle() { setupPerched(0x5a, 0x3c); }

void Unk_ov004_02239434::setupJewelBeetle() { setupPerched(0x82, 0x3c); }

void Unk_ov004_02239434::setupFruitBeetle() { setupPerched(0x82, 0x3c); }

void Unk_ov004_02239434::setupLonghornBeetle() { setupPerched(0x82, 0x3c); }

void Unk_ov004_02239434::setupRainbowStag() { setupPerched(0x82, 0x3c); }

void Unk_ov004_02239434::setupScarabBeetle() { setupPerched(0x5a, 0x3c); }

void Unk_ov004_02239434::setupGoliathBeetle() { setupPerched(0x5a, 0x3c); }

void Unk_ov004_02239434::setupWalkingstick() { setupPerched(0x28, 0x78); }

void Unk_ov004_02239434::setupOakSilkMoth()
{
    setupPerched(0x96, 0x46);
    AnimFrameCtrl_setup(&unk_b0.unk_9c, (u32)(unk_b0.unk_a0 << 4) >> 16, 1, 0x1000, 0);
}

void Unk_ov004_02239434::updateCicada() { _ZN18Unk_ov004_02239e709runCicadaEv(this); }

void Unk_ov004_02239434::setupBrownCicada() { setupPerched(0xc8, 0x3c); }

void Unk_ov004_02239434::setupRobustCicada() { setupPerched(0xc8, 0x3c); }

void Unk_ov004_02239434::setupWalkerCicada() { setupPerched(0xc8, 0x3c); }

void Unk_ov004_02239434::setupEveningCicada() { setupPerched(0xc8, 0x3c); }

void Unk_ov004_02239434::setupLanternFly()
{
    setupPerched(0xc8, 0x50);
    unk_b0.unk_ac = 0;
}

extern "C" void MuseumInsect_SetupHopper(Unk_ov004_02238af4 *o, s32 a, s32 b, s32 c, u8 d) {
    s32 t = MuseumInsect_RandHeading();
    _ZN18Unk_ov004_022394344initEjiisii(o, a, b, 0, t, 0, 0x1000 / c);
    o->unk_98 = (func_02063b8c(9) + 2) * 20;
    o->unk_a4 = d;
}

extern "C" void MuseumInsect_UpdateHopper(Unk_ov004_02238af4 *o) { MuseumInsect_RunHopper(o); }

extern "C" void MuseumInsect_SetupGrasshopper(Unk_ov004_02238af4 *o) {
    MuseumInsect_SetupHopper(o, 0x3c, 0x46, 6, 1);
    s32 a[2], b[2];
    a[0] = 0x104;
    a[1] = 0xc2;
    b[0] = 0x1be;
    b[1] = 0x15a;
    _ZN18Unk_ov004_022394349setBoundsEPiS0_(o, a, b);
}

extern "C" void MuseumInsect_SetupCricket(Unk_ov004_02238af4 *o) {
    MuseumInsect_SetupHopper(o, 0x3c, 0x46, 6, 1);
    s32 a[2], b[2];
    a[0] = 0x104;
    a[1] = 0xc2;
    b[0] = 0x1be;
    b[1] = 0x15a;
    _ZN18Unk_ov004_022394349setBoundsEPiS0_(o, a, b);
}

extern "C" void MuseumInsect_SetupLongLocust(Unk_ov004_02238af4 *o) {
    MuseumInsect_SetupHopper(o, 0x3c, 0x50, 8, 2);
    s32 a[2], b[2];
    a[0] = 0x104;
    a[1] = 0xc2;
    b[0] = 0x1be;
    b[1] = 0x15a;
    _ZN18Unk_ov004_022394349setBoundsEPiS0_(o, a, b);
}

extern "C" void MuseumInsect_SetupMigratoryLocust(Unk_ov004_02238af4 *o) {
    MuseumInsect_SetupHopper(o, 0x3c, 0x50, 8, 3);
    s32 a[2], b[2];
    a[0] = 0x104;
    a[1] = 0xc2;
    b[0] = 0x1be;
    b[1] = 0x15a;
    _ZN18Unk_ov004_022394349setBoundsEPiS0_(o, a, b);
}

extern "C" void MuseumInsect_SetupBellCricket(Unk_ov004_02238af4 *o) {
    MuseumInsect_SetupHopper(o, 0x3c, 0x46, 8, 1);
    s32 a[2], b[2];
    a[0] = 0x104;
    a[1] = 0xc2;
    b[0] = 0x1be;
    b[1] = 0x15a;
    _ZN18Unk_ov004_022394349setBoundsEPiS0_(o, a, b);
}

extern "C" void MuseumInsect_SetupCockroach(Unk_ov004_02238af4 *o) {
    _ZN18Unk_ov004_022394344initEjiisii(o, 0x3c, 0x46, 0, MuseumInsect_RandHeading(), 0, 0x26);
    o->unk_174 = (func_02063b8c(10) + 3) * 20;
    o->unk_98 = 0;
}

extern "C" void MuseumInsect_UpdateCockroach(Unk_ov004_02238af4 *o) { MuseumInsect_RunCockroach(o); }

extern "C" void MuseumInsect_UpdateDragonfly(Unk_ov004_02238af4 *o) { MuseumInsect_RunDragonfly(o); }

extern "C" void MuseumInsect_SetupDragonfly(Unk_ov004_02238af4 *o, s32 a, s32 b, s32 c, u8 d, u8 e, s32 f) {
    s32 t = MuseumInsect_RandHeading();
    _ZN18Unk_ov004_022394344initEjiisii(o, a, b, 0, t, c, 0x1000 / d);
    o->unk_a4 = e;
    o->unk_4c = f;
    Unk_ov004_02238af4_V3 *sv = &o->unk_2c8;
    Unk_ov004_02238af4_V3 *dv = &o->unk_40;
    dv->x = sv->x;
    dv->y = sv->y;
    dv->z = sv->z;
    if (o->unk_22 != 0) {
        if (func_02063b8c(100) > 50) {
            o->unk_174 = 100;
            return;
        }
    }
    o->unk_ae = 1;
}

extern "C" void MuseumInsect_SetupRedDragonfly(Unk_ov004_02238af4 *o) {
    if (func_02063b8c(100) > 50) {
        Unk_ov004_02238af4_V3 *v = &o->unk_2c8;
        v->x = 0x1a600;
        v->y = 0x1400;
        v->z = 0x13c00;
    }
    MuseumInsect_SetupDragonfly(o, 0xc8, 0x3c, 0x28, 0x14, 1, 0xcd);
}

extern "C" void MuseumInsect_SetupDarnerDragonfly(Unk_ov004_02238af4 *o) {
    if (func_02063b8c(100) > 50) {
        Unk_ov004_02238af4_V3 *v = &o->unk_2c8;
        v->x = 0x16600;
        v->y = 0x1400;
        v->z = 0x14200;
    }
    MuseumInsect_SetupDragonfly(o, 0xc8, 0x28, 0x2d, 0x1e, 3, 0x19a);
}

extern "C" void MuseumInsect_SetupBandedDragonfly(Unk_ov004_02238af4 *o) {
    if (func_02063b8c(100) > 50) {
        Unk_ov004_02238af4_V3 *v = &o->unk_2c8;
        v->x = 0x12b00;
        v->y = 0x1a00;
        v->z = 0xda00;
    }
    MuseumInsect_SetupDragonfly(o, 0x64, 0x28, 0x32, 0x78, 0x1e, 0x266);
}

extern "C" void MuseumInsect_SetupPondSkater(Unk_ov004_02238af4 *o) {
    _ZN18Unk_ov004_022394344initEjiisii(o, 0x28, 0x50, 0, 0, 0, 1);
    s32 a[2], b[2];
    a[0] = 0x62;
    a[1] = 0x11a;
    b[0] = 0x92;
    b[1] = 0x13e;
    _ZN18Unk_ov004_022394349setBoundsEPiS0_(o, a, b);
    if (o->unk_22 != 0) {
        s32 t = func_02063b8c(0x14);
        t *= func_02063b8c(3);
        o->unk_98 = t;
    } else {
        s32 t = func_02063b8c(0x14);
        t *= func_02063b8c(0xf);
        o->unk_98 = t;
    }
}

extern "C" void MuseumInsect_UpdatePondSkater(Unk_ov004_02238af4 *o) { MuseumInsect_RunPondSkater(o); }

extern "C" void MuseumInsect_UpdateWalker(Unk_ov004_02238af4 *o) { _ZN18Unk_ov004_022394349runWalkerEv(o); }

extern "C" void MuseumInsect_SetupSnail(Unk_ov004_02238af4 *o) {
    _ZN18Unk_ov004_022394344initEjiisii(o, 0xc8, 0x3c, 0, MuseumInsect_RandHeading(), 0, 1);
    _ZN18Unk_ov004_0223943418setBoundsAroundPosEv(o);
    o->unk_4c = 0x38e;
}

extern "C" void MuseumInsect_SetupLadybug(Unk_ov004_02238af4 *o) {
    _ZN18Unk_ov004_022394344initEjiisii(o, 0x50, 0x3c, 0, MuseumInsect_RandHeading(), 0, 0x20);
    _ZN18Unk_ov004_0223943418setBoundsAroundPosEv(o);
    o->unk_4c = 0x71c;
}

extern "C" void MuseumInsect_SetupMantis(Unk_ov004_02238af4 *o) {
    _ZN18Unk_ov004_022394344initEjiisii(o, 0xa0, 0x3c, 0, MuseumInsect_RandHeading(), 0, 0x20);
    _ZN18Unk_ov004_0223943418setBoundsAroundPosEv(o);
    o->unk_4c = 0x71c;
}

extern "C" void MuseumInsect_SetupOrchidMantis(Unk_ov004_02238af4 *o) {
    _ZN18Unk_ov004_022394344initEjiisii(o, 0xa0, 0x46, 0, MuseumInsect_RandHeading(), 0, 0x20);
    _ZN18Unk_ov004_0223943418setBoundsAroundPosEv(o);
    o->unk_4c = 0x71c;
}

extern "C" void MuseumInsect_SetupMoleCricket(Unk_ov004_02238af4 *o) {
    _ZN18Unk_ov004_022394344initEjiisii(o, 0xc8, 0x3c, 0, 0, 0, 0);
    NNS_G3dMdlSetMdlAlpha(func_0209c0ac(&o->unk_288), 0, 0);
    s32 a[2], b[2];
    a[0] = 0xa6;
    a[1] = 0x106;
    b[0] = 0xfc;
    b[1] = 0x150;
    _ZN18Unk_ov004_022394349setBoundsEPiS0_(o, a, b);
}

extern "C" void MuseumInsect_UpdateMoleCricket(Unk_ov004_02238af4 *o) { MuseumInsect_RunMoleCricket(o); }

extern "C" void MuseumInsect_SetupPillBug(Unk_ov004_02238af4 *o) {
    u8 t = func_02063b8c(5);
    if (func_02063b8c(100) > 50) {
        o->unk_170 = 0;
    } else {
        o->unk_170 = 1;
    }
    o->unk_4c = t;
    _ZN18Unk_ov004_022394344initEjiisii(o, 0x50, 0x50, 0, 0, 0, 1);
    MuseumInsect_GetPillBugWaypoint(&o->unk_2c8, t);
    MuseumInsect_PillBugNextWaypoint(o);
    o->unk_50 = 0;
    if (func_02063b8c(100) > 50) {
        o->unk_174 = (func_02063b8c(9) + 4) * 20;
        o->unk_172 = 4;
    } else {
        o->unk_174 = (func_02063b8c(3) + 2) * 20;
        o->unk_172 = 0x19;
    }
}

extern "C" void MuseumInsect_UpdatePillBug(Unk_ov004_02238af4 *o) { MuseumInsect_RunPillBug(o); }

extern "C" void MuseumInsect_SetupHoneybee(Unk_ov004_02238af4 *o) {
    _ZN18Unk_ov004_0223943410setupFlyerEiiiii(o, 0x78, 0x3c, 0x25, 8, 0x1000);
    _ZN18Unk_ov004_0223943418setBoundsAroundPosEv(o);
}

extern "C" void MuseumInsect_UpdateHoneybee(Unk_ov004_02238af4 *o) { MuseumInsect_RunFlyingInsect(o); }

extern "C" void MuseumInsect_SetupFly(Unk_ov004_02238af4 *o) {
    _ZN18Unk_ov004_0223943410setupFlyerEiiiii(o, 0x1e, 0x14, 0x28, 0xf, 0x1000);
    o->unk_4c = 0x71c;
    Unk_ov004_02238af4_V3 *sv = &o->unk_2c8;
    Unk_ov004_02238af4_V3 *dv = &o->unk_40;
    dv->x = sv->x;
    dv->y = sv->y;
    dv->z = sv->z;
    o->unk_40.y = 0xb00;
}

extern "C" void MuseumInsect_UpdateFly(Unk_ov004_02238af4 *o) { MuseumInsect_RunFlyingInsect(o); }

extern "C" void MuseumInsect_SetupSpider(Unk_ov004_02238af4 *o) {
    _ZN18Unk_ov004_022394344initEjiisii(o, 0x5a, 0x40, 0, 0, 0, 0xf);
    o->unk_4c = o->unk_2c8.x;
}

extern "C" void MuseumInsect_UpdateSpider(Unk_ov004_02238af4 *o) { _ZN18Unk_ov004_02239e709runSpiderEv(o); }

extern "C" void MuseumInsect_UpdateArachnid(Unk_ov004_02238af4 *o) { MuseumInsect_RunArachnid(o); }

extern "C" void MuseumInsect_SetupTarantula(Unk_ov004_02238af4 *o) {
    _ZN18Unk_ov004_022394344initEjiisii(o, 0x50, 0x50, 0, MuseumInsect_RandHeading(), 0, 5);
    o->unk_170 = 0;
    Unk_ov004_02238af4 *p = ((Unk_ov004_02238af4 *)MuseumInsect_FindScorpion());
    if (p != 0) {
        s32 a[2], b[2];
        o->unk_21 = 1;
        p->unk_21 = 1;
        a[0] = 0x110;
        a[1] = 0x10c;
        b[0] = 0x14c;
        b[1] = 0x148;
        _ZN18Unk_ov004_022394349setBoundsEPiS0_(o, a, b);
    } else {
        s32 a[2], b[2];
        if (o->unk_22 != 0) {
            o->unk_174 = (s16)((func_02063b8c(6) + 1) * 20);
        } else {
            o->unk_174 = (s16)((func_02063b8c(0x1e) + 5) * 20);
        }
        a[0] = 0x104;
        a[1] = 0xc2;
        b[0] = 0x1be;
        b[1] = 0x15a;
        _ZN18Unk_ov004_022394349setBoundsEPiS0_(o, a, b);
    }
}

extern "C" void MuseumInsect_SetupScorpion(Unk_ov004_02238af4 *o) {
    _ZN18Unk_ov004_022394344initEjiisii(o, 0x50, 0x50, 0, MuseumInsect_RandHeading(), 0, 5);
    o->unk_170 = 0;
    AnimFrameCtrl_setup(&o->unk_14c, 3, 0, 0x1000, 0);
    s32 a[2], b[2];
    a[0] = 0x104;
    a[1] = 0xc2;
    b[0] = 0x1be;
    b[1] = 0x15a;
    _ZN18Unk_ov004_022394349setBoundsEPiS0_(o, a, b);
    if (o->unk_22 != 0) {
        o->unk_174 = (s16)((func_02063b8c(6) + 1) * 20);
    } else {
        o->unk_174 = (s16)((func_02063b8c(0x1e) + 5) * 20);
    }
}

extern "C" void MuseumInsect_SetupBee(Unk_ov004_02238af4 *o) { _ZN18Unk_ov004_0223943412setupPerchedEii(o, 0x5a, 0x3c); }

extern "C" void MuseumInsect_UpdateBee(Unk_ov004_02238af4 *o) { _ZN18Unk_ov004_02239e7010runPerchedEv(o); }

extern "C" void MuseumInsect_SetupFlea(Unk_ov004_02238af4 *o) {
    _ZN18Unk_ov004_022394344initEjiisii(o, 0x28, 0x1e, 0, 0, 0, 0xf);
    o->unk_174 = (s16)func_02063b8c(0x1e) + 10;
}

extern "C" void MuseumInsect_UpdateFlea(Unk_ov004_02238af4 *o) { MuseumInsect_RunFlea(o); }

extern "C" void MuseumInsect_SetupAnt(Unk_ov004_02238af4 *o) {
    _ZN18Unk_ov004_022394344initEjiisii(o, 0x28, 0x1e, 0, 0, 0, 0xf);
    if (o->unk_22 == 0) {
        o->unk_10 = 0x666;
    }
}

extern "C" void MuseumInsect_UpdateAnt() {}

extern "C" void MuseumInsect_SetupDungBeetle(Unk_ov004_02238af4 *o) {
    if (o->unk_196 == 0x23) {
        Unk_ov004_02238af4 *p = ((Unk_ov004_02238af4 *)MuseumInsect_FindDungBall());
        if (func_02063b8c(100) > 50) {
            s32 v = (s16)((func_02063b8c(9) + 4) * 20);
            o->unk_174 = v;
            p->unk_174 = v;
            o->unk_172 = 4;
            p->unk_172 = 4;
        } else {
            s32 v = (s16)((func_02063b8c(3) + 2) * 20);
            if (o->unk_22 == 0) {
                v = (s16)(v * 3);
            }
            o->unk_174 = v;
            p->unk_174 = v;
            o->unk_15c = 0;
            o->unk_172 = 0x19;
            p->unk_172 = 0x19;
        }
    } else if (o->unk_172 == 0x19) {
        o->unk_15c = 0;
    }
}

extern "C" void MuseumInsect_UpdateDungBeetle(Unk_ov004_02238af4 *o) { MuseumInsect_RunDungBeetle(o); }

extern "C" void MuseumInsect_InitPlacement(void *m, u8 *s) {
    Unk_ov004_02238498_Pad pad;
    s32 *v = (s32 *)(s + 0x2c8);
    u32 r = MuseumInsect_GetTimeOfDayBit();
    switch (*(s8 *)(s + 0x196)) {
    case 0x0:
        v[0] = 0x176; v[1] = 0x13; v[2] = 0x71;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x1:
        v[0] = 0x170; v[1] = 0x13; v[2] = 0x9c;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x2:
        v[0] = 0x17f; v[1] = 0x13; v[2] = 0x85;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x3:
        v[0] = 0x177; v[1] = 0x13; v[2] = 0xd0;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x4:
        v[0] = 0x184; v[1] = 0x13; v[2] = 0xb5;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x5:
        v[0] = 0x187; v[1] = 0x13; v[2] = 0xe4;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x6:
        v[0] = 0x178; v[1] = 0x13; v[2] = 0xfb;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x7:
        v[0] = 0x170; v[1] = 0x13; v[2] = 0x123;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x8:
        v[0] = 0x128; v[1] = 0x40; v[2] = 0x66;
        *(u8 *)(s + 0x22) = r & 0x21;
        break;
    case 0x9:
        v[0] = 0x82; v[1] = 0x1c; v[2] = 0x1aa;
        *(u8 *)(s + 0x22) = r & 0x21;
        break;
    case 0xa:
        v[0] = 0xd0; v[1] = 0x13; v[2] = 0xfc;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0xb:
        v[0] = 0x86; v[1] = 0x26; v[2] = 0x1a6;
        *(u8 *)(s + 0x22) = r & 0xe;
        break;
    case 0xc:
        v[0] = 0x146; v[1] = 0x8; v[2] = 0xf6;
        *(u8 *)(s + 0x22) = r & 0x1c;
        break;
    case 0xd:
        v[0] = 0x185; v[1] = 0x8; v[2] = 0x140;
        *(u8 *)(s + 0x22) = r & 0x1c;
        break;
    case 0xe:
        v[0] = 0xb5; v[1] = 0x13; v[2] = 0x141;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0xf:
        v[0] = 0x181; v[1] = 0x13; v[2] = 0x13f;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x10:
        v[0] = 0x8e; v[1] = 0x24; v[2] = 0xd1;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x11:
        v[0] = 0x8a; v[1] = 0x1a; v[2] = 0xd5;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x12:
        v[0] = 0xbe; v[1] = 0x1a; v[2] = 0x4d;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x13:
        v[0] = 0xb8; v[1] = 0x22; v[2] = 0x4b;
        *(u8 *)(s + 0x22) = r & 0x1a;
        break;
    case 0x14:
        v[0] = 0xf1; v[1] = 0x24; v[2] = 0x3d;
        *(u8 *)(s + 0x22) = r & 0x1b;
        break;
    case 0x15:
        v[0] = 0x16c; v[1] = 0x14; v[2] = 0xd2;
        *(u8 *)(s + 0x22) = r & 0x1c;
        break;
    case 0x16:
        v[0] = 0x132; v[1] = 0x14; v[2] = 0x10d;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x17:
        v[0] = 0x178; v[1] = 0x14; v[2] = 0x122;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x18:
        v[0] = 0x89; v[1] = 0x9; v[2] = 0x104;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x19:
        v[0] = 0x7a; v[1] = 0x0; v[2] = 0x12c;
        *(u8 *)(s + 0x22) = r & 0x1c;
        break;
    case 0x1a:
        v[0] = 0xaa; v[1] = 0x13; v[2] = 0xfa;
        *(u8 *)(s + 0x22) = r & 0x1c;
        break;
    case 0x1b:
        v[0] = 0x15e; v[1] = 0x8; v[2] = 0x118;
        *(u8 *)(s + 0x22) = r & 0x33;
        break;
    case 0x1c:
        v[0] = 0x19f; v[1] = 0x8; v[2] = 0x11a;
        *(u8 *)(s + 0x22) = r & 0x33;
        break;
    case 0x1d:
        v[0] = 0x16f; v[1] = 0x8; v[2] = 0xf2;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x1e:
        v[0] = 0xe2; v[1] = 0x8; v[2] = 0x13e;
        *(u8 *)(s + 0x22) = r & 0x3f;
        break;
    case 0x1f:
        v[0] = 0x1a2; v[1] = 0x24; v[2] = 0x4c;
        *(u8 *)(s + 0x22) = r & 0x1e;
        break;
    case 0x20:
        v[0] = 0x91; v[1] = 0x13; v[2] = 0xdf;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x21:
        v[0] = 0x82; v[1] = 0x18; v[2] = 0x65;
        *(u8 *)(s + 0x22) = r & 0x33;
        break;
    case 0x22:
        v[0] = 0x88; v[1] = 0x22; v[2] = 0x62;
        *(u8 *)(s + 0x22) = r & 0x3;
        break;
    case 0x23: case 0x38:
        v[0] = 0x165; v[1] = 0x8; v[2] = 0xec;
        *(u8 *)(s + 0x22) = r & 0x23;
        break;
    case 0x24:
        v[0] = 0xae; v[1] = 0x2a; v[2] = 0xcd;
        *(u8 *)(s + 0x22) = r & 0x23;
        break;
    case 0x25:
        v[0] = 0x53; v[1] = 0x13; v[2] = 0x146;
        *(u8 *)(s + 0x22) = r & 0x21;
        break;
    case 0x26:
        v[0] = 0xeb; v[1] = 0x16; v[2] = 0x42;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x27:
        v[0] = 0x122; v[1] = 0x22; v[2] = 0x52;
        *(u8 *)(s + 0x22) = r & 0xc;
        break;
    case 0x28:
        v[0] = 0x128; v[1] = 0x18; v[2] = 0x55;
        *(u8 *)(s + 0x22) = r & 0x23;
        break;
    case 0x29:
        v[0] = 0x15e; v[1] = 0x16; v[2] = 0x47;
        *(u8 *)(s + 0x22) = r & 0x23;
        break;
    case 0x2a:
        v[0] = 0x164; v[1] = 0x20; v[2] = 0x43;
        *(u8 *)(s + 0x22) = r & 0x3;
        break;
    case 0x2b:
        v[0] = 0x82; v[1] = 0x21; v[2] = 0x138;
        *(u8 *)(s + 0x22) = r & 0x23;
        break;
    case 0x2c:
        v[0] = 0x19c; v[1] = 0x16; v[2] = 0x51;
        *(u8 *)(s + 0x22) = r & 0x23;
        break;
    case 0x2d:
        v[0] = 0xaa; v[1] = 0x1a; v[2] = 0xd3;
        *(u8 *)(s + 0x22) = r & 0x23;
        break;
    case 0x2e:
        v[0] = 0x79; v[1] = 0x1a; v[2] = 0xe8;
        *(u8 *)(s + 0x22) = r & 0x23;
        break;
    case 0x2f:
        v[0] = 0x7d; v[1] = 0x2a; v[2] = 0xe2;
        *(u8 *)(s + 0x22) = r & 0x3;
        break;
    case 0x30:
        v[0] = 0x12c; v[1] = 0x0; v[2] = 0x12c;
        *(u8 *)(s + 0x22) = r & 0x3f;
        break;
    case 0x31:
        v[0] = 0x0; v[1] = 0x0; v[2] = 0x0;
        *(u8 *)(s + 0x22) = r & 0x3f;
        break;
    case 0x32:
        v[0] = 0xb4; v[1] = 0x19; v[2] = 0xfa;
        *(u8 *)(s + 0x22) = r & 0x3f;
        break;
    case 0x33:
        v[0] = 0x118; v[1] = 0x23; v[2] = 0xf0;
        *(u8 *)(s + 0x22) = r & 0x3f;
        break;
    case 0x34:
        v[0] = 0x14a; v[1] = 0x0; v[2] = 0xb4;
        *(u8 *)(s + 0x22) = r & 0x3f;
        break;
    case 0x35:
        v[0] = 0x96; v[1] = 0x29; v[2] = 0x133;
        *(u8 *)(s + 0x22) = r & 0x3f;
        break;
    case 0x36:
        v[0] = 0x134; v[1] = 0x8; v[2] = 0x11e;
        *(u8 *)(s + 0x22) = r & 0x21;
        break;
    case 0x37:
        v[0] = 0x128; v[1] = 0x8; v[2] = 0x136;
        *(u8 *)(s + 0x22) = r & 0x21;
        break;
    }
    v[0] = func_01ffcb0c(v[0] << 12, 0x100);
    v[1] = func_01ffcb0c(v[1] << 12, 0x100);
    v[2] = func_01ffcb0c(v[2] << 12, 0x100);
}

extern "C" void *MuseumInsectRoom_Create() {
    void *m = ProcBase::operator new(0x1a0);
    if (m) _ZN16MuseumInsectRoomC1Ev(m);
}

extern "C" s32 MuseumInsectRoom_FindFreeSlot() {
    u8 *p = ((u8 *)sMuseumInsects);
    u8 i;
    for (i = 0; i < 0x20; p += 0x2d8, i++) {
        if (*(u32 *)(p + 0x198) == 0) return i;
    }
    return -1;
}

extern "C" BOOL MuseumInsectRoom_AddInsect(u8 *m, s8 v) {
    s32 i = MuseumInsectRoom_FindFreeSlot();
    BOOL z = FALSE;
    u8 *p;
    if (i != -1) {
    p = ((u8 *)sMuseumInsects) + i * 0x2d8;
    p[0x196] = v;
    *(s32 *)(p + 0x198) = 1;
    func_0209c25c(m + 0x180, p + 0x284);
    func_0209c0c8(p + 0x288);
    MuseumInsect_InitPlacement(m, p);
    *(s32 *)(p + 0x18) = 0;
    *(s32 *)(p + 0x1c) = 0;
    return TRUE;
    }
    return z;
}

BOOL MuseumInsectRoom::vfunc_00() {
    func_0209c1a4(unk_180, 0x20, 0x400, 0x40, 0x9c4, (void *)MuseumInsectHeap_Create, (void *)MuseumInsectHeap_Destroy, 0);
    spawnDonatedInsects();
    return TRUE;
}

extern "C" void MuseumInsectRoom_LoadInsect(u8 *m, u8 *s) {
    u32 sp8;
    u32 res;
    u32 sp10;
    u8 *mdl;
    u8 *rec;
    u32 sp1c;
    res = func_0209c25c(m + 0x180, s + 0x284);
    mdl = s + 0x288;
    char nm[0x10];
    char pth[0x18];
    char buf3[0x24];
    u32 tmp;
    u8 *r6;
    BOOL ok;
    s32 t;

    func_02133ef8(nm, 0x11);
    func_02133ef8(pth + 1, 0x17);
    t = *(s8 *)(s + 0x196);
    if (t == 0x25 && s[0x22] == 0) {
        func_020639e8(nm, "/insect/51/bug57");
        ((u8 *)sMuseumInsectParams)[t * 4] = 1;
    } else if (t == 0x18) {
        func_020639e8(nm, "/insect/61/bug%d", 0x3c);
    } else if (t == 0x23) {
        func_020639e8(nm, "/insect/61/bug61");
    } else if (t == 0x38) {
        func_020639e8(nm, "/insect/61/bug62");
    } else if (t < 10) {
        func_020639e8(nm, "/insect/01/bug0%d", t);
    } else if (t < 0x14) {
        func_020639e8(nm, "/insect/11/bug%d", t);
    } else if (t < 0x1e) {
        func_020639e8(nm, "/insect/21/bug%d", t);
    } else if (t < 0x28) {
        func_020639e8(nm, "/insect/31/bug%d", t);
    } else if (t < 0x32) {
        func_020639e8(nm, "/insect/41/bug%d", t);
    } else {
        func_020639e8(nm, "/insect/51/bug%d", t);
    }
    func_020639e8(pth + 1, "%s.nsbmd", nm);
    if (File_Exists(pth + 1)) {
        if (func_0209c0d0(mdl, res, pth + 1)) {
            r6 = s + 0xb0;
            Model_setResource(r6, (u32)func_0209c0ac(mdl), 0);
            rec = ((u8 *)sMuseumInsectParams) + t * 4;
            if (*rec) {
                func_020639e8(pth + 1, "%s.nsbva", nm);
            } else {
                func_020639e8(pth + 1, "%s.nsbca", nm);
            }
            if (File_Exists(pth + 1)) {
                sp10 = func_0209c348(res);
                if (t == 0x38) {
                    tmp = *(u32 *)(m + 0x19c) = File_LoadAlloc(pth + 1, *(s32 *)gCurrentHeap, 4, 0);
                } else if (t == 0x23) {
                    tmp = *(u32 *)(m + 0x198) = File_LoadAlloc(pth + 1, *(s32 *)gCurrentHeap, 4, 0);
                } else {
                    tmp = File_LoadAlloc(pth + 1, sp10, 4, 0);
                }
                if (tmp) {
                    ok = TRUE;
                    if (*rec) {
                        sp8 = func_021067a4(func_02106788(tmp), 0);
                    } else {
                        sp8 = func_021065f8(func_021065dc(tmp), 0);
                    }
                    if (AnimModel_allocAnmObj(r6, sp10)) {
                        s32 k = 0x1000;
                        if (t == 0x35 || t == 9) k = 0;
                        BlendAnimModel_initAnim(r6, sp8, 0, k, 0, 0);
                        AnimModel_attachAnim(r6);
                    }
                    if (t == 0x18) {
                        func_020639e8(buf3, "/insect/61/bug%d.nsbta", 0x3c);
                        ok = FALSE;
                        if (File_Exists(buf3)) {
                            if (File_LoadAlloc(buf3, sp10, 4, ok)) {
                                sp1c = func_02106670(func_02106654(), ok);
                                if (ModelAnim_allocMatAnm(s, *(u32 *)(r6 + 0x5c), sp10)) {
                                    ModelAnim_init(s, sp1c, ok, 0x1000, ok);
                                    ModelAnim_addToRenderObj(s, Model_getRenderObj(r6));
                                    ok = TRUE;
                                }
                            }
                        }
                    }
                    if (ok) {
                        sMuseumInsectBehaviors[t].f(s);
                        Unk_02003c30_callReset(s + 0x24);
                        *(u32 *)(s + 0x2d4) = sMuseumInsectBehaviors[t].v;
                        *(u32 *)(s + 0x198) = 2;
                    }
                }
            }
        }
    }
}

// clamp x/z of the slot position against its bounds
extern "C" void MuseumInsect_RevertOutOfBounds(void *m, u8 *s, s32 *p) {
    s32 *hi = (s32 *)(s + 0x60);
    s32 *lo = (s32 *)(s + 0x58);
    s32 *v = (s32 *)(s + 0x2c8);
    if (v[0] < lo[0] || v[0] > hi[0]) v[0] = p[0];
    if (v[2] < lo[1] || v[2] > hi[1]) v[2] = p[2];
}

void MuseumInsectRoom::updateInsect(Elem_7690 *e) {
    V3_7690 prev;
    V3_7690 p2;
    Unk_ov004_02237de4_Buf buf;
    V3_7690 t;
    V3_7690 out;
    V3_7690 q;
    u32 mode;
    s32 a;
    if (e->unk_2d4 != 0) {
        Unk_ov004_022376f8_Obj *obj = &e->unk_19c;
        V3_7690 *pos = &e->unk_2c8;
        u8 id = e->unk_196;
        prev = *pos;
        if (obj->unk_3c != 0) {
            pos->x = pos->x + obj->unk_10;
            pos->z = pos->z + obj->unk_18;
            MuseumInsect_RevertOutOfBounds(this, (u8 *)e, (s32 *)&prev);
            if (func_02088d38(obj, 0x40)) {
                V3_7690 *pv = &e->unk_34;
                *pv = *pos;
                if (id == 0x17) {
                    e->unk_20 = 1;
                }
            } else if (func_02088d38(obj, 0x80)) {
                e->unk_20 = 1;
            }
        }
        e->unk_2d4(e);
        if (hasHitBox(id, e->unk_172)) {
            p2 = *pos;
            if (id == 0x38) {
                if (Model_GetJointWorldMtx(e->unk_b0, &buf, 0)) {
                    q = buf.unk_24;
                    WorldCurve_FromCurved(&p2, &q);
                }
                mode = 0x42;
                a = 0x1200;
            } else {
                switch (id) {
                case 0x0e:
                case 0x0f:
                case 0x1a:
                case 0x20:
                    mode = 0x82;
                    break;
                case 0x00: case 0x01: case 0x02: case 0x03: case 0x04: case 0x05: case 0x06: case 0x07:
                case 0x0a:
                case 0x25:
                case 0x33:
                    if (e->unk_172 != 0) {
                        mode = 0x82;
                        break;
                    }
                default:
                    mode = 0x80;
                }
                a = sMuseumInsectParams[id].unk_02;
            }
            Collision_Move(e->unk_68, pos, &prev, e->unk_192, sMuseumInsectParams[id].unk_02, 0, 0xb);
            func_02088c64(obj, &p2, sMuseumInsectParams[id].unk_02, a, mode, 0xc0, 0, 0xff, 0x1000);
            func_02089040(obj);
        }
        if (sMuseumInsectParams[id].unk_00 == 0) {
            AnimModel_stepAnim(e->unk_b0);
            if (id == 0x18) {
                AnimFrameCtrl_step(e);
                *e->unk_00.unk_18 = e->unk_00.unk_08;
            }
        }
        if (MuseumInsect_GetSe((s8)id, 0) > 0) {
            t = *pos;
            Unk_02003c40_callUpdateRelative(&e->unk_24, &t);
        }
        s32 r = WorldCurve_ToCurved(&out, &e->unk_2c8);
        func_020e8388(&data_021f47e0, out.x, out.y, out.z);
        func_020e8434(&data_021f47e0, r + e->unk_190);
        func_020e8404(&data_021f47e0, e->unk_192);
        func_020e83d4(&data_021f47e0, e->unk_194);
        e->unk_114 = data_021f47e0;
    }
}

BOOL MuseumInsectRoom::hasHitBox(u32 id, u8 flag) {
    switch (id) {
    case 0x9: case 0xb: case 0x10: case 0x11: case 0x12: case 0x13: case 0x14: case 0x19:
    case 0x1f: case 0x21: case 0x22: case 0x23: case 0x24: case 0x26: case 0x27: case 0x28:
    case 0x29: case 0x2a: case 0x2b: case 0x2c: case 0x2d: case 0x2e: case 0x2f: case 0x31:
    case 0x35:
        return FALSE;
    case 0x1e:
        if (flag != 4 && flag != 3) {
            return FALSE;
        }
        break;
    }
    return TRUE;
}

BOOL MuseumInsectRoom::onExecute() {
    u8 r[6];
    V3_7690 rect[3];
    u8 obj0[0x9c];
    u8 obj1[0x9c];
    u8 obj2[0x9c];
    u8 n;
    s32 k = 0;
    s32 z = 0;
    u8 i = 0;
    u8 *q;
    func_02031c48(obj0);
    func_02031c48(obj1);
    func_02031c48(obj2);
    if (*(s32 *)&unk_04[4] == 0) {
        rect[0].x = 0x3800;
        rect[0].z = 0x8000;
        r[3] = 0;
        rect[1].x = 0x3800;
        rect[1].z = 0x1a000;
        r[4] = 0;
        rect[2].x = 0x16000;
        rect[2].z = 0x1c800;
        r[5] = 1;
        n = 3;
    } else {
        rect[0].x = 0x1c800;
        rect[0].z = 0x8000;
        r[3] = 0;
        rect[1].x = 0x1c800;
        rect[1].z = 0x1a000;
        r[4] = 0;
        n = 2;
    }
    q = &r[3];
    for (i = 0; i < n; i++) {
        if (q[i]) {
            r[i] = BoxCollider_Register(&obj0[i * 0x9c], 0x4000, 0x1000, 0x6000, &rect[i], k, k);
        } else {
            r[i] = BoxCollider_Register(&obj0[i * 0x9c], 0x1000, 0x4000, 0x6000, &rect[i], z, z);
        }
    }
    Elem_7690 *e = sMuseumInsects;
    sMuseumInsectFrame++;
    updateObstacles();
    for (i = 0; i < 0x20; e++, i++) {
        switch (e->unk_198) {
        case 1:
            MuseumInsectRoom_LoadInsect((u8 *)this, (u8 *)e);
            break;
        case 2:
            updateInsect(e);
            break;
        }
    }
    for (i = 0; i < n; i++) {
        if (r[i]) {
            BoxCollider_Unregister(&obj0[i * 0x9c]);
        }
    }
    func_02031c10(obj2);
    func_02031c10(obj1);
    func_02031c10(obj0);
    return TRUE;
}

void MuseumInsectRoom::updateObstacles() {
    V3_7690 pos[4];
    s32 sb[4];
    s32 sc[4];
    s32 z = 0;
    u8 n;
    u8 i;
    if (*(s32 *)&unk_04[4] == 1) {
        pos[0].x = 0x13000;
        pos[0].y = 0x800;
        pos[0].z = 0xe300;
        sb[0] = 0x1000;
        sc[0] = 0x1000;
        pos[1].x = 0x19400;
        pos[1].y = 0x800;
        pos[1].z = 0xf300;
        sb[1] = 0x1000;
        sc[1] = 0x1000;
        pos[2].x = 0x10800;
        pos[2].y = 0x600;
        pos[2].z = 0xc600;
        sb[2] = 0xc00;
        sc[2] = 0x600;
        pos[3].x = 0x10800;
        pos[3].y = 0x600;
        pos[3].z = 0x15700;
        sb[3] = 0xc00;
        sc[3] = 0x600;
        n = 4;
    } else {
        pos[0].x = 0x7900;
        pos[0].y = 0x800;
        pos[0].z = 0xe100;
        sb[0] = 0x3c00;
        sc[0] = 0x800;
        pos[1].x = 0xaa00;
        pos[1].y = 0x800;
        pos[1].z = 0xcd00;
        sb[1] = 0x3c00;
        sc[1] = 0x800;
        n = 2;
    }
    for (i = 0; i < n; i++) {
        func_02088c64(unk_50[i], &pos[i], sc[i], sb[i], 0x42, 0x80, z, 0xff, 0x1000);
        func_02089040(unk_50[i]);
    }
}

BOOL MuseumInsectRoom::onDraw() {
    Elem_7690 *e = sMuseumInsects;
    s32 z0 = 0;
    s32 z1 = 0;
    u8 i = 0;
    for (; i < 0x20; e++, i++) {
        if (e->unk_198 == 2) {
            s8 id = e->unk_196;
            u8 *obj = e->unk_b0;
            if (id == 0x30) {
                V3_7690 v = sMuseumFleaDrawScale;
                AnimModel_drawAnimated(obj, &v);
            } else {
                AnimModel_drawAnimated(obj, (void *)z0);
            }
            if (hasShadow(e)) {
                u32 r = func_02106020((u32)func_0209c0ac(e->unk_288), z1);
                func_020abdd0(&e->unk_2c8, sMuseumInsectParams[id].unk_02, 0x9000, (u8)r);
            }
        }
    }
    return TRUE;
}

BOOL MuseumInsectRoom::hasShadow(Elem_7690 *e) {
    switch (e->unk_196) {
    case 0x9: case 0x10: case 0x11: case 0x12: case 0x13: case 0x14: case 0x18: case 0x19:
    case 0x1f: case 0x21: case 0x22: case 0x23: case 0x24: case 0x26: case 0x27: case 0x28:
    case 0x29: case 0x2a: case 0x2b: case 0x2c: case 0x2d: case 0x2e: case 0x2f: case 0x30:
    case 0x32: case 0x33: case 0x38:
        return FALSE;
    case 0x1e:
        if (e->unk_172 == 0x19) {
            return FALSE;
        }
        return TRUE;
    }
    return TRUE;
}

BOOL MuseumInsectRoom::vfunc_0c() {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        releaseInsect(i);
    }
    func_0209c15c(unk_180);
    return TRUE;
}

void MuseumInsectRoom::spawnDonatedInsects() {
    u32 v = *(s32 *)&unk_04[4];
    v = (u8)v;
    BOOL flag = FALSE;
    u8 i = flag;
    for (; i < 0x39; i++) {
        if (v == getInsectRoom(i)) {
            u16 tmp;
            u16 t;
            if (i < 0x38) {
                t = 0x12b0 + i;
            } else {
                t = 0x12b0;
            }
            tmp = t;
            if (i == 0x38) {
                if (flag) {
                    MuseumInsectRoom_AddInsect((u8 *)this, i);
                }
            } else if (MuseumData_isDonated(data_021ed0a0, &tmp)) {
                MuseumInsectRoom_AddInsect((u8 *)this, i);
                if (i == 0x23) {
                    flag = TRUE;
                }
            }
        }
    }
}

BOOL MuseumInsectRoom::getInsectRoom(u32 idx) {
    switch (idx) {
    case 0x0: case 0x1: case 0x2: case 0x3: case 0x4: case 0x5: case 0x6: case 0x7:
    case 0x8: case 0xa: case 0xe: case 0xf: case 0x19: case 0x1a: case 0x1e: case 0x20:
    case 0x24: case 0x25: case 0x2d: case 0x2e: case 0x2f: case 0x30: case 0x32: case 0x33:
    case 0x34:
        return FALSE;
    }
    return TRUE;
}

extern "C" Elem_7690 *MuseumInsect_FindScorpion() {
    s32 i = sMuseumScorpionSlot;
    if (i >= 0) {
        return &sMuseumInsects[i];
    }
    Elem_7690 *e = sMuseumInsects;
    u8 j;
    for (j = 0; j < 0x20; e++, j++) {
        if (e->unk_196 == 0x37 && e->unk_198 != 0) {
            sMuseumScorpionSlot = j;
            return e;
        }
    }
    return 0;
}

extern "C" Elem_7690 *MuseumInsect_FindDungBall() {
    s32 i = sMuseumDungBallSlot;
    if (i >= 0) {
        return &sMuseumInsects[i];
    }
    Elem_7690 *e = sMuseumInsects;
    u8 j;
    for (j = 0; j < 0x20; e++, j++) {
        if (e->unk_196 == 0x38 && e->unk_198 != 0) {
            sMuseumDungBallSlot = j;
            return e;
        }
    }
    return 0;
}

MuseumInsect::MuseumInsect() {
    unk_24 = data_0213b91c;
    unk_24 = data_0213b954;
    func_020323b0(unk_68);
    func_020548d0(unk_b0);
    func_02135714(unk_178, 2, 0xc, (void *)func_02000c98, (void *)func_02000c8c);
    func_02088bc8(&unk_19c);
    func_02054e3c(unk_1e8);
    func_0209c370(unk_284);
    func_0209c140(unk_288);
    unk_196 = -1;
    func_0209c0c8(unk_288);
    unk_2d4 = 0;
    unk_198 = 0;
}

MuseumInsect::~MuseumInsect() {
    func_0209c128(unk_288);
    func_0209c364(unk_284);
    func_02054e24(unk_1e8);
    func_02088bb0(&unk_19c);
    func_021355f0(unk_178, 2, 0xc, (void *)func_02000c8c);
    func_020548a0(unk_b0);
    func_0203239c(unk_68);
}

void MuseumInsectRoom::releaseInsect(s32 idx) {
    if (idx >= 0 && idx < 0x20) {
        Unk_ov004_022375b8_Rec *r = (Unk_ov004_022375b8_Rec *)&sMuseumInsects[idx];
        s32 t = r->unk_196;
        if (t == 0x38) {
            Mem_Free((void *)unk_19c);
            unk_19c = 0;
        } else if (t == 0x23) {
            Mem_Free((void *)unk_198);
            unk_198 = 0;
        }
        if (sMuseumInsectParams[t].unk_00 != 0) {
            AnimModel_detachVisAnim(r->unk_b0);
        } else {
            AnimModel_detachJointAnim(r->unk_b0);
        }
        r->unk_18 = 0;
        r->unk_1c = 0;
        Unk_02003c30_callRelease(r->unk_24);
        r->unk_196 = -1;
        r->unk_192 = 0;
        r->unk_198 = 0;
        r->unk_168 = 0;
        r->unk_172 = 0x19;
        func_0209c0b4(r->unk_288);
        func_0209c224(unk_180, r->unk_284);
        r->unk_2d4 = 0;
    }
}

MuseumInsectRoom::MuseumInsectRoom() {
    func_02135714(unk_50, 4, 0x4c, (void *)func_02088bc8, (void *)func_02088bb0);
    func_0209c2dc(unk_180);
}

MuseumInsectRoom::~MuseumInsectRoom() {
    func_0209c2d8(unk_180);
    func_021355f0(unk_50, 4, 0x4c, (void *)func_02088bb0);
}

MuseumInsectAnim::MuseumInsectAnim() {
}

MuseumInsectAnim::~MuseumInsectAnim() {
}

extern "C" u32 MuseumInsect_GetTimeOfDayBit() {
    Unk_ov004_02237440_Out o;
    Clock_GetMinuteHour(&o);
    u32 v = o.unk_01;
    if (v >= 4 && v <= 7) return 2;
    if (v >= 8 && v <= 0xf) return 4;
    if (v == 0x10) return 8;
    if ((u8)(v + 0xef) <= 1) return 0x10;
    if (v >= 0x13 && v <= 0x16) return 0x20;
    return 1;
}

