// mwcc-version: 1.2/base
// ov004 TU31: 0x0222c9bc-0x02233074 (.text), see notes.txt
#include "types.h"
#include "Unk_020d8c7c.h"

// ---------------------------------------------------------------------------------------------------------------
// Calls into other modules: the old stand-in names are #defined to the real symbols (mangled method names).
#define func_02000c8c _ZN6FxVec3D1Ev
#define Unk_02003c30_callRelease _ZN12Unk_02003c3011callReleaseEv
#define Unk_02003c40_callRequestSustained _ZN12Unk_02003c4020callRequestSustainedEPv
#define Unk_02003c40_callUpdateRelative _ZN12Unk_02003c4018callUpdateRelativeEP16Unk_02003a6c_Vec
#define Unk_02003c30_callReset _ZN12Unk_02003c309callResetEv
#define GroundInfoBase_getHeight _ZN14GroundInfoBase9getHeightEi
#define GroundInfo_initAtPos _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii
#define BlendAnimModel_playBlend _ZN14BlendAnimModel9playBlendEiiiitt
#define BlendAnimModel_stepBlend _ZN14BlendAnimModel9stepBlendEv
#define BlendAnimModel_onJointCalcPost _ZN14BlendAnimModel15onJointCalcPostEPS_
#define BlendAnimModel_onJointCalcPre _ZN14BlendAnimModel14onJointCalcPreEPS_
#define func_020544d8 _ZN14BlendAnimModelD1Ev
#define func_02054514 _ZN14BlendAnimModelC1Ev
#define AnimModel_detachJointAnim _ZN9AnimModel15detachJointAnimEv
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define CachedModel_release _ZN11CachedModel7releaseEv
#define CachedModel_allocJointRecord _ZN11CachedModel16allocJointRecordEPv
#define Model_setInitCallback _ZN5Model15setInitCallbackEii
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj
#define AnimFrameCtrl_hasPassedFrame _ZN13AnimFrameCtrl14hasPassedFrameEi
#define MuseumData_isDonated _ZN10MuseumData9isDonatedEPt
#define func_02088c64 _ZN12Unk_020e0d1c13func_02088c64EP4Vec3iijjjhi
#define func_02089040 _ZN12Unk_020e0d0813func_02089040Ev
#define PooledModel_getModel _ZN11PooledModel8getModelEv
#define PooledModel_unload _ZN11PooledModel6unloadEv
#define PooledModel_reset _ZN11PooledModel5resetEv
#define PooledModel_loadFromSlot _ZN11PooledModel12loadFromSlotEP9ModelSlotPKc
#define func_0209c128 _ZN11PooledModelD1Ev
#define func_0209c140 _ZN11PooledModelC1Ev
#define ModelSlotPool_destroy _ZN13ModelSlotPool7destroyEv
#define ModelSlotPool_init _ZN13ModelSlotPool4initEjPvS0_jPFS0_jjEPFvvE
#define ModelSlotPool_release _ZN13ModelSlotPool7releaseEPt
#define ModelSlotPool_acquire _ZN13ModelSlotPool7acquireEPt
#define func_0209c2d8 _ZN13ModelSlotPoolD1Ev
#define func_0209c2dc _ZN13ModelSlotPoolC1Ev
#define ModelSlot_getHeap _ZN9ModelSlot7getHeapEv
#define TouchPicker_addBox _ZN11TouchPicker6addBoxEP12TouchPickBoxP4Vec3iiisih
#define TouchPicker_pushBox _ZN11TouchPicker7pushBoxEP12TouchPickBox
#define func_020b6df4 _ZN12TouchPickBoxD2Ev
#define func_020b6e10 _ZN12TouchPickBoxC2Ev
#define func_02133150 _s32_div_f

typedef GameProc Unk_ov004_Base;

// ---------------------------------------------------------------------------------------------------------------
struct V3 {
    s32 x, y, z;
};

struct Mtx {
    s64 v[6];
};

struct Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// one 0x11-byte record of the actor table (sAquariumFishParams[56])
struct Rec {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
    u8 unk_05;
    u8 unk_06;
    u8 unk_07;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;
};

// library object with a destructor (two of these are static: sAquariumTankCenterB / d9c)
struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) : x(a), y(b), z(c) {}
    ~FxVec3();
};

// ---- library sub-object with two inline vtable stores (0x0213b91c, 0x0213b954)
class SndEnvChannel {
public:
    SndEnvChannel() {}
    virtual void vfunc_00();
    u8 unk_04[8];
    u16 unk_0c;
    u8 unk_0e;
    u8 pad_0f;
};

class Unk_0213b954 : public SndEnvChannel {
public:
    Unk_0213b954() {}
    virtual void vfunc_00();
};

// ---- collision sub-object chain (main: Unk_020e0d08 <- Unk_020e0d1c), derived class in this overlay
class Unk_020e0d08 {
public:
    Unk_020e0d08();
    ~Unk_020e0d08();
    virtual void *vfunc_00() = 0;
    virtual u32 vfunc_04() = 0;
    virtual void vfunc_08(u32 a, u32 b, u32 c);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ u8 unk_0c;
    /* 0x0d */ u8 unk_0d;
    /* 0x0e */ u8 unk_0e;
    /* 0x0f */ u8 unk_0f;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ u32 unk_1c;
    /* 0x20 */ u32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ u32 unk_28;
    /* 0x2c */ u32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ Unk_020e0d08 *unk_38;
    /* 0x3c */ u8 unk_3c;
};

class Unk_020e0d1c : public Unk_020e0d08 {
public:
    Unk_020e0d1c();
    ~Unk_020e0d1c();
    virtual void *vfunc_00();
    virtual u32 vfunc_04();
    /* 0x40 */ V3 unk_40;
};

class AquariumFish;

// ---------------------------------------------------------------------------------------------------------------
// The "Ent" family: state actors. Root = vtable 0x0224e774 (0x1fc bytes of common state).
class AquariumFish {
public:
    AquariumFish();
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual ~AquariumFish();

    /* 0x004 */ u8 unk_04[0x13 - 4];
    /* 0x013 */ u8 unk_13;
    /* 0x014 */ s32 unk_14;
    /* 0x018 */ u8 pad_18[4];
    /* 0x01c */ s32 unk_1c;
    /* 0x020 */ u8 pad_20[0x40 - 0x20];
    /* 0x040 */ u8 unk_40;
    /* 0x041 */ u8 pad_41[0x50 - 0x41];
    /* 0x050 */ AquariumFish *unk_50;
    /* 0x054 */ u32 unk_54[4];
    /* 0x064 */ u8 unk_64[0xc8 - 0x64];
    /* 0x0c8 */ Mtx unk_c8;
    /* 0x0f8 */ u8 pad_f8[0x100 - 0xf8];
    /* 0x100 */ u32 unk_100;
    /* 0x104 */ Bits unk_104;
    /* 0x108 */ s32 unk_108;
    /* 0x10c */ u8 pad_10c[4];
    /* 0x110 */ s32 unk_110;
    /* 0x114 */ u8 pad_114[0x158 - 0x114];
    /* 0x158 */ s32 unk_158;
    /* 0x15c */ s32 unk_15c;
    /* 0x160 */ s32 unk_160;
    /* 0x164 */ u8 unk_164;
    /* 0x165 */ u8 pad_165;
    /* 0x166 */ u8 unk_166[2];
    /* 0x168 */ u8 unk_168[0x1a8 - 0x168];
    /* 0x1a8 */ V3 unk_1a8;
    /* 0x1b4 */ V3 unk_1b4;
    union {
        /* 0x1c0 */ s16 unk_1c0;
        u16 unk_1c0u;
    };
    /* 0x1c2 */ s16 unk_1c2;
    /* 0x1c4 */ s16 unk_1c4;
    /* 0x1c6 */ u8 unk_1c6;
    /* 0x1c7 */ u8 unk_1c7;
    /* 0x1c8 */ u8 unk_1c8;
    /* 0x1c9 */ u8 unk_1c9;
    /* 0x1ca */ s8 unk_1ca;
    /* 0x1cb */ u8 pad_1cb;
    /* 0x1cc */ s32 unk_1cc;
    /* 0x1d0 */ V3 unk_1d0[2];
    /* 0x1e8 */ u8 unk_1e8;
    /* 0x1e9 */ u8 unk_1e9;
    /* 0x1ea */ u8 unk_1ea;
    /* 0x1eb */ u8 unk_1eb;
    /* 0x1ec */ s16 unk_1ec;
    /* 0x1ee */ u8 unk_1ee;
    /* 0x1ef */ u8 unk_1ef;
    /* 0x1f0 */ u8 unk_1f0;
    /* 0x1f1 */ u8 unk_1f1;
    /* 0x1f2 */ u8 pad_1f2[2];
    /* 0x1f4 */ u32 unk_1f4[2];
};

// vtable 0x0224e864: common base of most state actors (0x258 bytes)
class AquariumSwimFish : public AquariumFish {
public:
    AquariumSwimFish();
    virtual ~AquariumSwimFish();
    virtual void vfunc_00();
    virtual void vfunc_04();

    /* 0x1fc */ u8 unk_1fc;
    /* 0x1fd */ u8 unk_1fd;
    /* 0x1fe */ s8 unk_1fe;
    /* 0x1ff */ u8 pad_1ff;
    /* 0x200 */ s16 unk_200;
    /* 0x202 */ u8 unk_202;
    /* 0x203 */ u8 unk_203;
    /* 0x204 */ u8 unk_204;
    /* 0x205 */ u8 unk_205;
    /* 0x206 */ u8 unk_206;
    /* 0x207 */ u8 unk_207;
    /* 0x208 */ u8 pad_208[4];
    /* 0x20c */ s32 unk_20c;
    /* 0x210 */ s32 unk_210;
    /* 0x214 */ s32 unk_214;
    /* 0x218 */ s32 unk_218;
    /* 0x21c */ s32 unk_21c;
    /* 0x220 */ u16 unk_220;
    /* 0x222 */ u8 pad_222[2];
    /* 0x224 */ s32 unk_224;
    /* 0x228 */ s32 unk_228;
    /* 0x22c */ u8 pad_22c[2];
    /* 0x22e */ u8 unk_22e;
    /* 0x22f */ u8 unk_22f;
    /* 0x230 */ u16 unk_230;
    /* 0x232 */ u8 pad_232[0x238 - 0x232];
    /* 0x238 */ u8 unk_238;
    /* 0x239 */ u8 pad_239[3];
    /* 0x23c */ s32 unk_23c;
    /* 0x240 */ u8 pad_240[0x24c - 0x240];
    /* 0x24c */ s16 unk_24c;
    /* 0x24e */ u8 unk_24e;
    /* 0x24f */ u8 pad_24f;
    /* 0x250 */ s16 unk_250;
    /* 0x252 */ u8 unk_252;
    /* 0x253 */ u8 unk_253;
    /* 0x254 */ u8 unk_254;
    /* 0x255 */ u8 unk_255;
    union {
        /* 0x256 */ u8 unk_256;
        s8 unk_256s;
    };
    /* 0x257 */ u8 unk_257;
};

class AquariumBigFish : public AquariumSwimFish {
public:
    AquariumBigFish();
    virtual ~AquariumBigFish();
    virtual void vfunc_00();
    virtual void vfunc_04();
};

class AquariumCrawfish : public AquariumFish {
public:
    AquariumCrawfish();
    virtual ~AquariumCrawfish();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x1fc */ s32 unk_1fc;
    /* 0x200 */ s32 unk_200;
    /* 0x204 */ s32 unk_204;
    /* 0x208 */ s16 unk_208;
    /* 0x20a */ u8 pad_20a[2];
    /* 0x20c */ s32 unk_20c;
    union {
        /* 0x210 */ s32 unk_210;
        u8 unk_210b;
    };
    /* 0x214 */ u8 pad_214[4];
    /* 0x218 */ s32 unk_218;
    /* 0x21c */ u8 unk_21c;
    /* 0x21d */ u8 pad_21d[3];
};

class AquariumSeaButterfly : public AquariumSwimFish {
public:
    AquariumSeaButterfly();
    virtual ~AquariumSeaButterfly();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x258 */ s32 unk_258[3];
    /* 0x264 */ V3 unk_264;
    /* 0x270 */ u8 unk_270;
    /* 0x271 */ u8 pad_271[3];
    /* 0x274 */ s32 unk_274;
};

// vtable 0x0224e6e8: 0x50-byte collision sub-object of every actor
class AquariumFishHitBox : public Unk_020e0d1c {
public:
    AquariumFishHitBox();
    ~AquariumFishHitBox();
    virtual void vfunc_08(u32 a, u32 b, u32 c);
    /* 0x4c */ AquariumFish *unk_4c;
};

// vtables 0x0224e714 / 0x0224e75c: 0x25c bytes
class AquariumSurfacingFish : public AquariumSwimFish {
public:
    AquariumSurfacingFish();
    virtual ~AquariumSurfacingFish();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x258 */ u8 unk_258;
    /* 0x259 */ u8 unk_259;
};

class AquariumFrog : public AquariumFish {
public:
    AquariumFrog();
    virtual ~AquariumFrog();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x1fc */ Unk_0213b954 unk_1fc;
    /* 0x20c */ s32 unk_20c;
    /* 0x210 */ u8 unk_210;
    /* 0x211 */ u8 unk_211;
    /* 0x212 */ u8 pad_212[2];
};

// state actors derived from the root directly
class AquariumOctopus : public AquariumFish {
public:
    AquariumOctopus();
    virtual ~AquariumOctopus();
    virtual void vfunc_00();
};

class AquariumSeahorse : public AquariumSwimFish {
public:
    AquariumSeahorse();
    virtual ~AquariumSeahorse();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x258 */ s32 unk_258[3];
    /* 0x264 */ u8 unk_264;
    /* 0x265 */ u8 pad_265[3];
    /* 0x268 */ s32 unk_268;
};

class AquariumPufferFish : public AquariumSwimFish {
public:
    AquariumPufferFish();
    virtual ~AquariumPufferFish();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x258 */ u8 unk_258;
};

class AquariumPiranha : public AquariumSwimFish {
public:
    AquariumPiranha();
    virtual ~AquariumPiranha();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x258 */ u8 unk_258;
    /* 0x259 */ u8 unk_259;
};

class AquariumFastFish : public AquariumSwimFish {
public:
    AquariumFastFish();
    virtual ~AquariumFastFish();
    virtual void vfunc_00();
    virtual void vfunc_04();
};

// element of the 5-entry array in the manager (0x64 bytes)
struct AquariumObstacle {
    AquariumFishHitBox unk_00;
    u32 unk_50[5];
};

// vtable 0x0224e87c: the scene object (0x810 bytes)
class MuseumAquarium : public GameProc {
public:
    MuseumAquarium();
    virtual ~MuseumAquarium();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    /* 0x050 */ AquariumObstacle unk_50[5];
    /* 0x244 */ AquariumFishHitBox unk_244;
    /* 0x294 */ u32 unk_294[5];
    /* 0x2a8 */ u32 unk_2a8[0x550 / 4];
    /* 0x7f8 */ u32 unk_7f8[6];

    typedef void (MuseumAquarium::*Fn)(AquariumFish **, s32);
};

// vtable 0x0224e6fc: 0x27c bytes
class AquariumHidingFish : public AquariumSwimFish {
public:
    AquariumHidingFish();
    virtual ~AquariumHidingFish();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x258 */ s32 unk_258[3];
    /* 0x264 */ s32 unk_264;
    /* 0x268 */ s32 unk_268;
    /* 0x26c */ s32 unk_26c;
    /* 0x270 */ s32 unk_270;
    /* 0x274 */ u32 unk_274;
    /* 0x278 */ u32 unk_278;
};

class AquariumSquid : public AquariumSwimFish {
public:
    AquariumSquid();
    virtual ~AquariumSquid();
    virtual void vfunc_00();
    virtual void vfunc_04();
};

class AquariumEel : public AquariumFish {
public:
    AquariumEel();
    virtual ~AquariumEel();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x1fc */ u8 pad_1fc[4];
    /* 0x200 */ s32 unk_200;
    union {
        /* 0x204 */ s32 unk_204;
        u8 unk_204b[4];
    };
    /* 0x208 */ s32 unk_208;
    /* 0x20c */ u8 unk_20c;
    /* 0x20d */ u8 unk_20d;
    /* 0x20e */ u8 unk_20e;
    /* 0x20f */ u8 pad_20f;
};

class AquariumJellyfish : public AquariumSwimFish {
public:
    AquariumJellyfish();
    virtual ~AquariumJellyfish();
    virtual void vfunc_00();
    virtual void vfunc_04();
    /* 0x258 */ s32 unk_258;
    /* 0x25c */ s32 unk_25c;
    /* 0x260 */ s32 unk_260;
    /* 0x264 */ u8 unk_264;
    /* 0x265 */ u8 pad_265[3];
    /* 0x268 */ s32 unk_268;
    /* 0x26c */ V3 unk_26c;
    /* 0x278 */ s32 unk_278;
    /* 0x27c */ s32 unk_27c;
    /* 0x280 */ u8 unk_280;
    /* 0x281 */ u8 unk_281;
    /* 0x282 */ u16 unk_282;
    /* 0x284 */ u8 unk_284;
    /* 0x285 */ u8 pad_285[3];
    /* 0x288 */ s32 unk_288;
};




















// 0x94-byte element of the TU30 array (its ctor/dtor are referenced by TU30's static initialiser)
struct Unk_020f440c_Obj {
    u8 pad[0x48];
};

class Unk_ov004_0222c9d0 {
public:
    Unk_ov004_0222c9d0();
    ~Unk_ov004_0222c9d0();

    /* 0x00 */ u32 pad_00[4];
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u32 pad_18[(0x4c - 0x18) / 4];
    /* 0x4c */ u8 unk_4c[0x48];
};

typedef AquariumFish R;
typedef AquariumSwimFish E864;
typedef MuseumAquarium Mgr;
typedef AquariumHidingFish E6fc;
typedef AquariumSurfacingFish E714;
typedef AquariumPiranha E75c;
typedef AquariumPufferFish E78c;
typedef AquariumSeahorse E7a4;
typedef AquariumSeaButterfly E7bc;
typedef AquariumJellyfish E7d4;
typedef AquariumBigFish E72c;
typedef AquariumFastFish E744;
typedef AquariumSquid E81c;
typedef AquariumOctopus E7ec;
typedef AquariumEel E804;
typedef AquariumFrog E834;
typedef AquariumCrawfish E84c;
typedef void (E864::*Fn)();
typedef void (E804::*Fn804)();
typedef void (Mgr::*MgrFn)(R **, s32);

struct Unk_ov004_0222ef04_Own {
    u8 pad_00[0x2c];
    void *unk_2c;
};

struct Unk_ov004_0222ef04_Cb {
    u8 pad_00[4];
    Unk_ov004_0222ef04_Own *unk_04;
    u8 pad_08[0x24 - 8];
    void *unk_24;
    u8 pad_28[0x92 - 0x28];
    u8 unk_92;
};

typedef Unk_ov004_0222ef04_Cb Cb;

struct Unk_ov004_0222fd7c_W {
    u8 pad[0x258];
    s32 w[6];
};

struct Unk_ov004_022303b4_P {
    u8 pad_00[0x5c];
    V3 unk_5c;
    u8 pad_68[0x98 - 0x68];
    s32 unk_98;
};

typedef Unk_ov004_022303b4_P P;

struct PairFn {
    Fn a;
    Fn b;
};

struct Unk_ov004_SceneEntry {
    void *fn;
    u16 a;
    u16 b;
};


// ---------------------------------------------------------------------------------------------------------------
// constructors of the state actors (called by the allocation switches)
#define func_02232864 _ZN18AquariumHidingFishC1Ev
#define func_022328b4 _ZN21AquariumSurfacingFishC1Ev
#define func_02232930 _ZN15AquariumPiranhaC1Ev
#define func_02232a08 _ZN16AquariumCrawfishC1Ev
#define func_02232b54 _ZN11AquariumEelC1Ev
#define func_02232bb0 _ZN12AquariumFrogC1Ev
#define func_02232d8c _ZN16AquariumSwimFishC1Ev
#define func_ov004_02232ce4 _ZN17AquariumJellyfishC1Ev
#define func_ov004_02232c88 _ZN16AquariumFastFishC1Ev
#define func_ov004_02232c24 _ZN15AquariumBigFishC1Ev
#define func_ov004_02232adc _ZN20AquariumSeaButterflyC1Ev
#define func_ov004_02232a64 _ZN16AquariumSeahorseC1Ev
#define func_ov004_0223299c _ZN18AquariumPufferFishC1Ev
#define func_ov004_02232864 _ZN18AquariumHidingFishC1Ev
#define func_ov004_02232808 _ZN13AquariumSquidC1Ev
#define func_ov004_022327b8 _ZN15AquariumOctopusC1Ev
#define func_ov004_02232d8c _ZN16AquariumSwimFishC1Ev

#define func_ov004_02232608 _ZN18AquariumFishHitBoxC1Ev
#define func_ov004_022325f0 _ZN18AquariumFishHitBoxD1Ev

extern "C" {
void func_ov004_02232608(void *);
void func_ov004_022325f0(void *);
void func_02232864(void *);
void func_022328b4(void *);
void func_02232930(void *);
void func_02232a08(void *);
void func_02232b54(void *);
void func_02232bb0(void *);
void func_02232d8c(void *);
void func_ov004_02232ce4(void *);
void func_ov004_02232c88(void *);
void func_ov004_02232c24(void *);
void func_ov004_02232adc(void *);
void func_ov004_02232a64(void *);
void func_ov004_0223299c(void *);
void func_ov004_02232864(void *);
void func_ov004_02232808(void *);
void func_ov004_022327b8(void *);
void func_ov004_02232d8c(void *);
}

extern "C" {
void *__cxa_vec_ctor(void *, s32, s32, void *, void *);
void *__cxa_vec_cleanup(void *, s32, s32, void *);

extern s16 data_02135f44[];
extern u8 gRandom[];
extern u8 data_021ed0a0[];
extern u8 gTouchPrevChanged;
extern u8 gTouchPrevHeld;
extern Mtx data_021f47e0;
extern void *gCurrentHeap;
extern V3 sRoomHasuPos;

void MTX_MultVec43(V3 *, void *, V3 *);
s32 FX_Div(s32, s32);
s32 func_01ffcb0c(s32, s32);
void *FxVec3_Construct(void *);
void func_02000c8c(void *);
s32 Math_AngleXZ(void *, void *);
void Unk_02003c30_callRelease(void *);
void Unk_02003c40_callRequestSustained(void *, s32);
void Unk_02003c40_callUpdateRelative(void *, V3 *);
void Unk_02003c30_callReset(void *);
s32 Snd_StopSe(s32, s32);
void func_02004008(u32 a);
BOOL Collision_ClampToRect(void *p, s32 a, void *c, s32 w, s32 h);
s32 GroundInfoBase_getHeight(void *o, s32 f);
void GroundInfo_Destruct(void *o);
void *GroundInfo_initAtPos(void *o, void *v, s32 a, s32 b);
void BlendAnimModel_playBlend(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 BlendAnimModel_stepBlend(void *);
s32 BlendAnimModel_onJointCalcPost(void *, void *);
s32 BlendAnimModel_onJointCalcPre(void *, void *);
void func_020544d8(void *);
void func_02054514(void *);
void AnimModel_detachJointAnim(void *p);
s32 AnimModel_attachAnim(void *);
s32 BlendAnimModel_initAnim(void *, s32, s32, s32, s32, s32);
s32 AnimModel_drawAnimated(void *, V3 *);
s32 AnimModel_allocAnmObj(void *, s32);
void CachedModel_release(void *p);
s32 CachedModel_allocJointRecord(void *, s32);
void Model_setInitCallback(void *self, void *fn, void *arg);
s32 Model_setResource(void *, s32, s32);
BOOL AnimFrameCtrl_hasPassedFrame(void *p, s32 v);
void MuseumAquariumHeap_Destroy(void);
void MuseumAquariumHeap_Create(void);
s32 func_020639e8(char *, char *, ...);
s32 func_02063b8c(s32 n);
s32 File_LoadAlloc(char *, s32, s32, s32);
s32 MuseumData_isDonated(void *, u16 *);
void func_02088c64(void *self, void *pos, s32 w, s32 h, u32 a, u32 b, u32 c, u8 t, s32 d);
void func_02089040(void *a);
P *PlayerActor_GetBodyPos(s32 n);
P *PlayerActor_GetActor(s32 n);
s32 PooledModel_getModel(void *);
void PooledModel_unload(void *p);
void PooledModel_reset(void *p);
s32 PooledModel_loadFromSlot(void *, s32, char *);
void func_0209c128(void *);
void func_0209c140(void *);
s32 ModelSlotPool_destroy(void *);
void ModelSlotPool_init(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, void *f);
void ModelSlotPool_release(void *p, void *q);
s32 ModelSlotPool_acquire(void *, void *);
void func_0209c2d8(void *p);
void func_0209c2dc(void *p);
s32 ModelSlot_getHeap(s32);
void ModelSlotHandle_Destroy(u16 *);
void ModelSlotHandle_Init(u16 *);
void *Scene_GetTouchPicker(void);
s32 TouchPickResult_GetTarget(void *, void *, void *, void *);
void TouchPicker_addBox(void *t, void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
s32 TouchPicker_pushBox(void *, void *);
void func_020b6df4(void *p);
void func_020b6e10(void *p);
s32 func_020e759c(void *p, s32 a, s32 b);
s32 func_020e769c(void *p, s32 a, s32 b);
s32 func_020e7754(void *p, s32 a, s32 b, s32 c);
s32 Random_Next(void *p);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
void func_020e8404(void *, s32);
void func_020e8434(void *, s32);
void Mem_Free(void *p);
void Heap_Free(void *, void *);
void *Heap_Alloc(void *heap, u32 size);
s64 func_020e9600(void *, void *);
s32 func_020e96a4(void *a, void *b);
void func_020f43fc(void *p);
void func_020f440c(void *p);
s32 func_021065dc(u32 a);
s32 func_021065f8(s32 a, s32 b);
s32 func_02133150(s32 a, s32 b);
}

static inline BOOL Unk_ov004_0222ee2c_Both() {
    if (gTouchPrevHeld && gTouchPrevChanged) {
        return TRUE;
    }
    return FALSE;
}

static inline s32 Unk_ov004_0222d460_Clamp(s32 a) {
    s32 t = a < 0 ? -a : a;
    if (t > 0x8f) {
        s32 s;
        if (a > 0) {
            s = 1;
        } else {
            s = -1;
        }
        a = s * 0x8f;
    }
    return a;
}

extern "C" void MuseumAquarium_Create();
extern "C" AquariumSeaButterfly::AquariumSeaButterfly();
extern "C" AquariumSeaButterfly::~AquariumSeaButterfly();
extern "C" AquariumSeahorse::AquariumSeahorse();
extern "C" AquariumSeahorse::~AquariumSeahorse();
extern "C" AquariumCrawfish::AquariumCrawfish();
extern "C" AquariumCrawfish::~AquariumCrawfish();
extern "C" AquariumPufferFish::AquariumPufferFish();
extern "C" AquariumPufferFish::~AquariumPufferFish();
extern "C" AquariumPiranha::AquariumPiranha();
extern "C" AquariumPiranha::~AquariumPiranha();
extern "C" AquariumSurfacingFish::AquariumSurfacingFish();
extern "C" AquariumSurfacingFish::~AquariumSurfacingFish();
extern "C" AquariumHidingFish::AquariumHidingFish();
extern "C" AquariumHidingFish::~AquariumHidingFish();
extern "C" AquariumSquid::AquariumSquid();
extern "C" AquariumSquid::~AquariumSquid();
extern "C" AquariumOctopus::AquariumOctopus();
extern "C" AquariumOctopus::~AquariumOctopus();
extern "C" MuseumAquarium::MuseumAquarium();
extern "C" MuseumAquarium::~MuseumAquarium();
extern "C" AquariumFishHitBox::AquariumFishHitBox();
extern "C" /*EXTERN_C_CLOSE*/

AquariumFishHitBox::~AquariumFishHitBox();
extern "C" void Aquarium_StepX(s32 *p, s32 a, u32 ang);
extern "C" void Aquarium_StepZ(s32 *p, s32 a, u32 ang);
extern "C" void Aquarium_StepXZ(V3 *p, s32 a, s16 ang);
extern "C" void AquariumFish_UpdateWallTurn(E864 *o);
extern "C" void AquariumFish_TurnAtWall(E864 *o);
extern "C" void AquariumFish_PickTurn(E864 *o, s32 f, u32 a, u32 b);
extern "C" void AquariumFish_PlayTurnAnim(E864 *o, u32 a);
extern "C" s32 AquariumFish_EndTurnAnim(E864 *o);
extern "C" void AquariumFish_PlayAnim(E864 *o, s32 i);
extern "C" void AquariumFish_PlaySwimAnim(E864 *o);
extern "C" void AquariumFish_CancelTurn(E864 *o);
extern "C" void AquariumFish_MoveVertical(E864 *o, s32 a, s32 b, s32 c);
extern "C" void AquariumFish_UpdateDepth(E864 *o);
extern "C" void AquariumFish_UpdateDepthCapped(E864 *o);
extern "C" void AquariumFish_UpdatePitchByDir(E864 *o);
extern "C" void AquariumFish_UpdatePitch(E864 *o, s32 lim, s32 b);
extern "C" void AquariumFish_UpdatePitchSmooth(E864 *o, s32 a);
extern "C" void AquariumFish_Bob(E864 *o, s32 m, s32 lim, u32 mode);
extern "C" s32 Aquarium_RandFx(s32 a, s32 b);
extern "C" s16 Aquarium_RandAngle(s32 a, s32 b);
extern "C" s32 Aquarium_RandRange(s32 a, s32 b);
extern "C" BOOL Aquarium_TurnTowardHome(void *obj, void *a, void *b, s32 max);
extern "C" BOOL Aquarium_ProbeTurnSide(s32 *p, s32 v);
extern "C" BOOL Aquarium_TestHeight800At(V3 *pos);
extern "C" BOOL AquariumFish_IsNearWall(E864 *o);
extern "C" void _ZN17AquariumJellyfish8vfunc_00Ev(E7d4 *o);
extern "C" void _ZN17AquariumJellyfish8vfunc_04Ev(E7d4 *o);
extern "C" void Aquarium_Oscillate(s16 *out, u8 *flag, s32 *cnt, s32 max, s32 mul);
extern "C" void AquariumJellyfish_UpdateDrift(E7d4 *o);
extern "C" void AquariumJellyfish_StartDrift(E7d4 *o);
extern "C" void AquariumJellyfish_DriftOut(E7d4 *o);
extern "C" void AquariumJellyfish_DriftBack(E7d4 *o);
extern "C" void AquariumJellyfish_UpdatePulse(E7d4 *o);
extern "C" void AquariumJellyfish_BeginPulse(E7d4 *o);
extern "C" void AquariumJellyfish_PulseGrow(E7d4 *o);
extern "C" void AquariumJellyfish_PulseShrink(E7d4 *o);
extern "C" void AquariumFish_CalcHitCenter(R *o, V3 *out);
extern "C" void _ZN16AquariumFastFish8vfunc_00Ev(E744 *o);
extern "C" void _ZN16AquariumFastFish8vfunc_04Ev(E744 *o);
extern "C" void AquariumFastFish_UpdateLap(E744 *o, s32 a, s32 b);
extern "C" void _ZN15AquariumBigFish8vfunc_00Ev(E72c *o);
extern "C" void _ZN15AquariumBigFish8vfunc_04Ev(E72c *o);
extern "C" void AquariumBigFish_UpdatePatrol(E72c *o, s32 a, s32 b);
extern "C" void _ZN12AquariumFrog8vfunc_00Ev(E834 *o);
extern "C" void _ZN12AquariumFrog8vfunc_04Ev(E834 *o);
extern "C" void AquariumFrog_StartCroak(E834 *o);
extern "C" void AquariumFrog_Croak(E834 *o);
extern "C" void _ZN11AquariumEel8vfunc_00Ev(E804 *e);
extern "C" void _ZN11AquariumEel8vfunc_04Ev(E804 *e);
extern "C" void AquariumEel_StateStart(E804 *e);
extern "C" void AquariumEel_StateSpeedUp(E804 *e);
extern "C" void AquariumEel_StateHold(E804 *e);
extern "C" void AquariumEel_StateSlowDown(E804 *e);
extern "C" void AquariumEel_StateWait(E804 *e);
extern "C" void _ZN20AquariumSeaButterfly8vfunc_00Ev(E7bc *e);
extern "C" void _ZN20AquariumSeaButterfly8vfunc_04Ev(E7bc *e);
extern "C" void _ZN16AquariumSeahorse8vfunc_00Ev(E7a4 *e);
extern "C" void _ZN16AquariumSeahorse8vfunc_04Ev(E7a4 *e);
extern "C" void _ZN18AquariumPufferFish8vfunc_00Ev(E78c *e);
extern "C" void _ZN18AquariumPufferFish8vfunc_04Ev(E78c *e);
extern "C" void _ZN15AquariumPiranha8vfunc_00Ev(E75c *e);
extern "C" void _ZN15AquariumPiranha8vfunc_04Ev(E75c *o);
extern "C" void AquariumPiranha_StateSwim(E75c *o);
extern "C" void AquariumPiranha_StateApproach(E75c *o);
extern "C" void AquariumPiranha_StateBite(E75c *o);
extern "C" void AquariumPiranha_BobDepth(E75c *o);
extern "C" void AquariumPiranha_BiteIdle(E75c *o);
extern "C" void AquariumPiranha_BiteLunge(E75c *o);
extern "C" void AquariumPiranha_BiteRecoil(E75c *o);
extern "C" void _ZN21AquariumSurfacingFish8vfunc_00Ev(E714 *o);
extern "C" void _ZN21AquariumSurfacingFish8vfunc_04Ev(E714 *o);
extern "C" void AquariumSurfacingFish_StateSwim(E714 *o);
extern "C" void AquariumSurfacingFish_StateSurface(E714 *o);
extern "C" void AquariumSurfacingFish_UpdateSurface(E714 *o);
extern "C" void _ZN18AquariumHidingFish8vfunc_00Ev(E6fc *o);
extern "C" void _ZN18AquariumHidingFish8vfunc_04Ev(E6fc *o);
extern "C" void AquariumHidingFish_UpdateClownfish(E6fc *o);
extern "C" void AquariumHidingFish_UpdateGoby(E6fc *o);
extern "C" void AquariumHidingFish_CheckTouch(E6fc *o);
extern "C" void AquariumHidingFish_UpdateHide(E6fc *o);
extern "C" void AquariumHidingFish_MoveToHideout(E6fc *o, s32 f);
extern "C" void AquariumHidingFish_StayHidden(E6fc *o);
extern "C" void _ZN16AquariumCrawfish8vfunc_00Ev(E84c *o);
extern "C" void _ZN16AquariumCrawfish8vfunc_04Ev(E84c *o);
extern "C" void AquariumCrawfish_StartWalk(E84c *o);
extern "C" void AquariumCrawfish_Walk(E84c *o);
extern "C" void AquariumCrawfish_SlowDown(E84c *o);
extern "C" void _ZN13AquariumSquid8vfunc_00Ev(E81c *o);
extern "C" void _ZN13AquariumSquid8vfunc_04Ev(E81c *o);
extern "C" void AquariumSquid_TurnAtTankEnd(E864 *e);
extern "C" void _ZN15AquariumOctopus8vfunc_00Ev(E7ec *e);
extern "C" void AquariumSwimFish_SetupSea(E864 *e);
extern "C" void AquariumSwimFish_UpdateSea(E864 *e);
extern "C" void AquariumSwimFish_SetupFreshwater(E864 *e);
extern "C" void AquariumSwimFish_UpdateFreshwater(E864 *e);
extern "C" void AquariumFish_JointCalcPre(Cb *c);
extern "C" void AquariumFish_JointCalcPost(Cb *c);
extern "C" void AquariumFish_InstallJointCallbacks(Cb *c);
extern "C" BOOL AquariumFish_GetTouchPoint(E864 *e, V3 *out);
extern "C" BOOL AquariumFish_CheckTouched(E864 *e);
extern "C" void AquariumFish_StartFlee(E864 *e, V3 *p);
extern "C" void _ZN16AquariumSwimFish8vfunc_00Ev(E864 *e);
extern "C" void _ZN16AquariumSwimFish8vfunc_04Ev(E864 *e);
extern "C" void AquariumFish_StateStart(E864 *e);
extern "C" void AquariumFish_StateAccelerate(E864 *e);
extern "C" void AquariumFish_StateCruise(E864 *e);
extern "C" void AquariumFish_StateDecelerate(E864 *e);
extern "C" void AquariumFish_StateRest(E864 *e);
extern "C" void AquariumFish_StateFlee(E864 *e);
extern "C" void AquariumFish_StateNone();
extern "C" void AquariumFish_StateStartFast(E864 *e);
extern "C" void AquariumFish_StateSlowDown(E864 *e);
extern "C" void AquariumFish_ClampHeadingSideways(R *e);
extern "C" void AquariumFish_TurnAtTankEnds(R *e);
extern "C" void AquariumFish_UpdateAvoid(E864 *e);
extern "C" void AquariumFish_AvoidOther(R *e);
extern "C" void AquariumFish_ClearContact(R *e);
extern "C" s32 Aquarium_GetContactSide(R *a, R **b);
extern "C" void AquariumFish_SplitDepth(R *a, R **b);
extern "C" void AquariumFish_TurnToTarget(E864 *e);
extern "C" void AquariumFish_UpdateAnimSpeed(E864 *e, s32 lo);
extern "C" void AquariumFish_KeepInsideX(R *e);
extern "C" void AquariumFish_RecordContact(void *unused, R **pp, R **q);
extern "C" void AquariumFish_ResetContacts(R *self);
extern "C" void AquariumFish_SteerFromWall(E864 *self);
extern "C" void AquariumFish_LoadParams(E864 *self);
extern "C" BOOL MuseumAquarium_RequestFishModel(Mgr *self, s32 i);
extern "C" void MuseumAquarium_ReleaseFish(Mgr *self, s32 i);
extern "C" BOOL _ZN14MuseumAquarium8vfunc_00Ev(Mgr *self);
extern "C" BOOL MuseumAquarium_CreateFreshwaterFish(Mgr *self);
extern "C" s32 MuseumAquarium_CreateSeaFish(Mgr *o);
extern "C" s32 MuseumAquarium_LoadFishAnims(Mgr *o, R **p, s32 idx, s32 n);
extern "C" void MuseumAquarium_UpdateFish(Mgr *o, R **p, s32 i);
extern "C" void MuseumAquarium_FishStateNone();
extern "C" s32 MuseumAquarium_FishStateLoad(Mgr *o, R **p, s32 i);
extern "C" void MuseumAquarium_FishStateActive(Mgr *o, R **p, s32 x);
extern "C" s32 _ZN14MuseumAquarium9onExecuteEv(Mgr *o);
extern "C" void MuseumAquarium_UpdateObstacles(Mgr *o, s32 n);
extern "C" s32 MuseumAquarium_LoadFishModel(Mgr *o, R **p, s32 idx);
extern "C" void MuseumAquarium_CalcFishMtx(Mgr *o, R **p);
extern "C" s32 _ZN14MuseumAquarium6onDrawEv(Mgr *o);
extern "C" s32 _ZN14MuseumAquarium8vfunc_0cEv(Mgr *o);
extern "C" void MuseumAquarium_PlaceFreshwaterFish(Mgr *o);
extern "C" void MuseumAquarium_PlaceSeaFish(Mgr *self);
extern "C" void MuseumAquarium_ConfineFish(void *self, R **ctx, s32 type);
extern "C" void Aquarium_ApplyCorrection(void *self, s32 *p, s32 a, s32 b, s32 c, s32 d);

extern "C" {
extern const Rec sAquariumFishParams[56];
extern u8 sAquariumEndFish;
extern u8 sAquariumObstacleCount;
extern void *data_ov004_0224e5f8[2];
extern void *data_ov004_0224e600[2];
extern void *data_ov004_0224e608[2];
extern void *data_ov004_0224e610[2];
extern void *data_ov004_0224e618[2];
extern void *data_ov004_0224e620[2];
extern void *data_ov004_0224e628[2];
extern void *data_ov004_0224e630[2];
extern void *data_ov004_0224e638[2];
extern void *data_ov004_0224e640[2];
extern void *data_ov004_0224e648[2];
extern void *data_ov004_0224e650[2];
extern void *data_ov004_0224e658[2];
extern void *data_ov004_0224e660[2];
extern void *data_ov004_0224e668[2];
extern void *data_ov004_0224e670[2];
extern void *data_ov004_0224e678[2];
extern void *data_ov004_0224e680[2];
extern void *data_ov004_0224e688[2];
extern void *data_ov004_0224e690[2];
extern void *data_ov004_0224e698[2];
extern void *data_ov004_0224e6a0[2];
extern void *data_ov004_0224e6a8[2];
extern void *data_ov004_0224e6b0[2];
extern void *data_ov004_0224e6b8[2];
extern Unk_ov004_SceneEntry sMuseumAquariumProfile;
extern void *data_ov004_0224e6c8[2];
extern void *data_ov004_0224e6d0[2];
extern void *data_ov004_0224e6d8[2];
extern u8 sAquariumRoom;
extern u8 sAquariumFirstFish;
extern E834 *sAquariumFrog;
extern E7d4 *sAquariumJellyfish;
extern E7bc *sAquariumSeaButterfly;
extern R *sAquariumFish[0x38];
extern FxVec3 sAquariumTankCenterA;
extern FxVec3 sAquariumTankCenterB;
extern PairFn sAquariumSwimFishRoomFns[2];
extern Fn sAquariumSwimStates[7];
extern Fn sAquariumFastSwimStates[6];
extern Fn804 sAquariumEelStates[5];
extern Fn sAquariumPiranhaStates[3];
extern MgrFn sAquariumFishLoadStates[3];
}

extern "C" {
void *data_ov004_0224e638[2] = {(void *)MuseumAquarium_FishStateNone, 0};
FxVec3 sAquariumTankCenterA(0x11000, 0, 0x15000);
void *data_ov004_0224e600[2] = {(void *)AquariumSwimFish_SetupSea, 0};
const Rec sAquariumFishParams[56] = {
    {0x00, 0x01, 0x38, 0x28, 0xd8, 0x14, 0x19, 0x3d, 0x0a, 0x03, 0x1e, 0x05, 0x78, 0x1a, 0x7c, 0x98, 0x0c},
    {0x00, 0x01, 0x24, 0x28, 0xe0, 0x19, 0x21, 0x3d, 0x14, 0x03, 0x1e, 0x05, 0x78, 0x14, 0x7a, 0xc0, 0x0c},
    {0x01, 0x01, 0x48, 0x38, 0xc8, 0x0c, 0x08, 0x48, 0x28, 0x0a, 0x78, 0x14, 0x78, 0x14, 0x6e, 0xb5, 0x14},
    {0x01, 0x01, 0x2c, 0x48, 0xb8, 0x10, 0x08, 0x52, 0x14, 0x05, 0xb4, 0x14, 0x78, 0x14, 0x66, 0xa5, 0x18},
    {0x02, 0x03, 0x40, 0x5c, 0xa8, 0x21, 0x10, 0x52, 0x1e, 0x05, 0xb4, 0x1e, 0x78, 0x0a, 0x64, 0x88, 0x28},
    {0x03, 0x03, 0x5c, 0x74, 0x90, 0x21, 0x10, 0x5c, 0x1e, 0x05, 0xe6, 0x3c, 0x64, 0x14, 0x58, 0x70, 0x34},
    {0x03, 0x03, 0x5c, 0x74, 0xa8, 0x21, 0x10, 0x5c, 0x1e, 0x05, 0xe6, 0x3c, 0x64, 0x14, 0x64, 0x88, 0x34},
    {0x00, 0x01, 0x34, 0x2c, 0xd4, 0x14, 0x19, 0x33, 0x14, 0x05, 0x28, 0x05, 0x96, 0x14, 0x7d, 0x6d, 0x18},
    {0x00, 0x01, 0x34, 0x2c, 0xe0, 0x14, 0x19, 0x33, 0x14, 0x05, 0x28, 0x05, 0x96, 0x14, 0x7d, 0x6d, 0x18},
    {0x00, 0x01, 0x14, 0x1c, 0xec, 0x21, 0x29, 0x48, 0x0a, 0x03, 0x14, 0x02, 0x96, 0x14, 0x7d, 0xc0, 0x08},
    {0x00, 0x01, 0x10, 0x38, 0x5c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x30},
    {0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x01, 0x24, 0x28, 0x80, 0x0c, 0x10, 0x29, 0x1e, 0x05, 0x3c, 0x0a, 0xb4, 0x14, 0x4d, 0x80, 0x18},
    {0x00, 0x01, 0x1c, 0x3c, 0x74, 0x19, 0x19, 0x3d, 0x1e, 0x05, 0x3c, 0x0a, 0xa0, 0x14, 0x80, 0x6b, 0x1c},
    {0x02, 0x03, 0x4c, 0x64, 0x6c, 0x19, 0x19, 0x48, 0x14, 0x05, 0xe6, 0x3c, 0x78, 0x0a, 0x40, 0x6b, 0x30},
    {0x07, 0x01, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00},
    {0x03, 0x03, 0x58, 0x7c, 0x70, 0x1d, 0x29, 0x66, 0x1e, 0x0a, 0xc8, 0x32, 0x96, 0x0f, 0x50, 0x6d, 0x38},
    {0x01, 0x01, 0x4c, 0x34, 0xe0, 0xa4, 0x29, 0x52, 0x1e, 0x05, 0x64, 0x0a, 0x96, 0x12, 0x76, 0xba, 0x0c},
    {0x01, 0x01, 0x4c, 0x48, 0xdc, 0x52, 0x21, 0x48, 0x28, 0x05, 0x5a, 0x0a, 0x78, 0x0f, 0x75, 0xad, 0x18},
    {0x02, 0x03, 0x54, 0x5c, 0xc8, 0x1d, 0x19, 0x5c, 0x28, 0x05, 0xb4, 0x05, 0x78, 0x07, 0x6a, 0xa0, 0x2c},
    {0x00, 0x01, 0x18, 0x28, 0xec, 0x4a, 0x19, 0x5c, 0x0a, 0x03, 0x28, 0x05, 0x78, 0x07, 0x80, 0xc6, 0x0c},
    {0x01, 0x01, 0x30, 0x3c, 0xe0, 0x1d, 0x10, 0x5c, 0x1e, 0x05, 0x5a, 0x0a, 0x64, 0x07, 0x7b, 0xba, 0x14},
    {0x01, 0x01, 0x34, 0x4c, 0xcc, 0x52, 0x10, 0x61, 0x14, 0x05, 0x3c, 0x05, 0x64, 0x0a, 0x6d, 0xa0, 0x18},
    {0x02, 0x03, 0x3c, 0x58, 0xc0, 0x21, 0x10, 0x5c, 0x28, 0x05, 0x78, 0x0a, 0x96, 0x0a, 0x6a, 0x9a, 0x24},
    {0x03, 0x03, 0x54, 0x70, 0xb4, 0x29, 0x10, 0x5c, 0x1e, 0x05, 0x78, 0x14, 0x96, 0x0a, 0x60, 0x8d, 0x30},
    {0x04, 0x03, 0x84, 0xb0, 0x7c, 0x21, 0x08, 0x52, 0x14, 0x03, 0xe6, 0x3c, 0x78, 0x0a, 0x40, 0x6b, 0x3c},
    {0x03, 0x03, 0x6c, 0x8c, 0x90, 0x21, 0x10, 0x5c, 0x14, 0x05, 0xb4, 0x1e, 0xaa, 0x07, 0x5a, 0x86, 0x34},
    {0x04, 0x03, 0x80, 0xb8, 0x80, 0x14, 0x08, 0x66, 0x14, 0x05, 0xe6, 0x28, 0xaa, 0x07, 0x4d, 0x66, 0x3c},
    {0x00, 0x01, 0x20, 0x20, 0xec, 0x29, 0x10, 0x33, 0x1e, 0x03, 0x14, 0x05, 0x96, 0x14, 0x7e, 0xda, 0x0c},
    {0x00, 0x01, 0x58, 0x24, 0xd4, 0x10, 0x08, 0x33, 0x28, 0x05, 0x3c, 0x05, 0x96, 0x0a, 0x6d, 0xb3, 0x10},
    {0x01, 0x01, 0x4c, 0x3c, 0x9c, 0xf6, 0x21, 0x66, 0x0a, 0x03, 0x1e, 0x03, 0xb4, 0x14, 0x76, 0x80, 0x14},
    {0x03, 0x03, 0x4c, 0x70, 0xb8, 0x14, 0x08, 0x5c, 0x0a, 0x03, 0xdc, 0x14, 0xb4, 0x0a, 0x60, 0xa6, 0x28},
    {0x03, 0x03, 0x6c, 0x90, 0x78, 0x14, 0x10, 0x52, 0x0a, 0x03, 0xb4, 0x14, 0x96, 0x0a, 0x46, 0x66, 0x30},
    {0x05, 0x03, 0x60, 0xcc, 0x74, 0x0c, 0x10, 0x48, 0x0a, 0x03, 0xdc, 0x14, 0x96, 0x0a, 0x40, 0x6d, 0x34},
    {0x05, 0x03, 0x90, 0xd8, 0x64, 0x10, 0x10, 0x3d, 0x0a, 0x03, 0xdc, 0x28, 0x96, 0x07, 0x3a, 0x60, 0x40},
    {0x00, 0x01, 0x30, 0x08, 0xe0, 0x01, 0x02, 0x0f, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14},
    {0x00, 0x01, 0x50, 0x38, 0xcc, 0x01, 0x02, 0x18, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x38},
    {0x00, 0x01, 0x58, 0x14, 0xb0, 0x03, 0x06, 0x14, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08},
    {0x00, 0x01, 0x38, 0x28, 0x6c, 0x52, 0x08, 0x1f, 0x04, 0x01, 0x50, 0x05, 0xa0, 0x14, 0x5a, 0x61, 0x10},
    {0x01, 0x01, 0x58, 0x48, 0x68, 0x08, 0x21, 0x48, 0x3c, 0x05, 0x64, 0x05, 0x96, 0x0a, 0x3d, 0x3a, 0x2c},
    {0x01, 0x04, 0x80, 0x50, 0x88, 0x08, 0x10, 0x3d, 0x1e, 0x05, 0x78, 0x05, 0xa0, 0x14, 0x66, 0x40, 0x38},
    {0x02, 0x01, 0x50, 0x54, 0xb4, 0x29, 0x08, 0x66, 0x64, 0x05, 0x28, 0x05, 0x78, 0x07, 0x66, 0xa6, 0x18},
    {0x02, 0x03, 0x64, 0x60, 0xc8, 0x25, 0x19, 0x66, 0x32, 0x05, 0x50, 0x05, 0xa0, 0x0a, 0x73, 0x9a, 0x24},
    {0x03, 0x03, 0x6c, 0x94, 0xac, 0x21, 0x19, 0x71, 0x28, 0x05, 0xa0, 0x05, 0x78, 0x07, 0x66, 0x8d, 0x30},
    {0x02, 0x03, 0x80, 0x7c, 0x8c, 0x1d, 0x10, 0x5c, 0x50, 0x05, 0xb4, 0x0a, 0x96, 0x0a, 0x53, 0x66, 0x2c},
    {0x02, 0x01, 0x18, 0x60, 0x10, 0x21, 0x10, 0x48, 0x3c, 0x0a, 0xa0, 0x0a, 0xb4, 0x14, 0x0d, 0x0c, 0x38},
    {0x03, 0x01, 0x18, 0x78, 0x10, 0x31, 0x08, 0x3d, 0x3c, 0x05, 0xc8, 0x14, 0xb4, 0x14, 0x0d, 0x0c, 0x48},
    {0x01, 0x02, 0x30, 0x68, 0xc4, 0x52, 0x02, 0x29, 0x14, 0x05, 0x0a, 0x03, 0xb4, 0x1f, 0x6d, 0xb3, 0x28},
    {0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00},
    {0x02, 0x03, 0x74, 0x5c, 0x68, 0x7b, 0x08, 0x48, 0x3c, 0x05, 0xb4, 0x14, 0xb4, 0x1a, 0x3a, 0x33, 0x28},
    {0x05, 0x03, 0x7c, 0xb4, 0xa0, 0x52, 0x08, 0x9a, 0x50, 0x14, 0x50, 0x0a, 0x78, 0x04, 0x5a, 0x8d, 0x40},
    {0x05, 0x03, 0x64, 0xbc, 0xc0, 0x7b, 0x08, 0xa4, 0x3c, 0x14, 0x50, 0x0a, 0x78, 0x04, 0x6d, 0xb3, 0x3c},
    {0x06, 0x01, 0x00, 0x00, 0x44, 0x14, 0x08, 0x29, 0xb4, 0x3c, 0x14, 0x03, 0x01, 0x08, 0x33, 0x20, 0x00},
    {0x06, 0x03, 0x00, 0x00, 0x38, 0x7b, 0x08, 0x66, 0x32, 0x05, 0x50, 0x05, 0x01, 0x08, 0x33, 0x0d, 0x00},
    {0x06, 0x03, 0x00, 0x00, 0xa4, 0xf6, 0x04, 0x85, 0x50, 0x0a, 0x32, 0x05, 0x01, 0x1f, 0x6a, 0x73, 0x00},
    {0x03, 0x03, 0x74, 0xac, 0x7c, 0x19, 0x08, 0x52, 0x28, 0x05, 0xdc, 0x14, 0xa0, 0x09, 0x4d, 0x5a, 0x40},
};
void *data_ov004_0224e610[2] = {(void *)AquariumSwimFish_SetupFreshwater, 0};
void *data_ov004_0224e6d0[2] = {(void *)AquariumFish_StateStart, 0};
FxVec3 sAquariumTankCenterB(0x11000, 0, 0x7000);
void *data_ov004_0224e670[2] = {(void *)MuseumAquarium_FishStateActive, 0};
void *data_ov004_0224e668[2] = {(void *)AquariumPiranha_StateSwim, 0};
void *data_ov004_0224e680[2] = {(void *)AquariumFish_StateSlowDown, 0};
void *data_ov004_0224e6a0[2] = {(void *)AquariumEel_StateSpeedUp, 0};
void *data_ov004_0224e5f8[2] = {(void *)AquariumEel_StateWait, 0};
}

extern "C" void MuseumAquarium_Create() {
    new MuseumAquarium;
}

AquariumFish::AquariumFish() {
    func_ov004_02232608(unk_04);
    func_02054514(unk_64);
    ModelSlotHandle_Init((u16 *)unk_166);
    func_0209c140(unk_168);
    __cxa_vec_ctor(unk_1d0, 2, 0xc, FxVec3_Construct, func_02000c8c);
    unk_15c = -1;
    unk_160 = 0;
    PooledModel_reset(unk_168);
    unk_1c6 = 0;
    unk_1c7 = 1;
    unk_1f1 = 0;
    unk_1c4 = 0;
    for (s32 i = 0; i < 4; i++) unk_54[i] = 0;
}

AquariumFish::~AquariumFish() {
    __cxa_vec_cleanup(unk_1d0, 2, 0xc, func_02000c8c);
    func_0209c128(unk_168);
    ModelSlotHandle_Destroy((u16 *)unk_166);
    func_020544d8(unk_64);
    func_ov004_022325f0(unk_04);
}

AquariumSwimFish::AquariumSwimFish() {
    unk_1ee = 2;
    unk_1fe = 2;
    unk_200 = 3;
    unk_1fc = 0;
    unk_21c = 0;
    unk_220 = 0;
    unk_1ca = 0;
    unk_224 = 0x28;
    unk_22e = 0;
    unk_1cc = 0x3000;
    unk_228 = 0x1000;
    unk_1ef = 0;
    unk_254 = 0;
}

AquariumSwimFish::~AquariumSwimFish() {}

AquariumJellyfish::AquariumJellyfish() {
    unk_255 = 1;
    unk_21c = 0;
    unk_20c = 0x41;
    unk_278 = 0x14;
    unk_27c = 0xccd;
    unk_284 = 0;
}

AquariumJellyfish::~AquariumJellyfish() {}

AquariumFastFish::AquariumFastFish() {
    unk_238 = 0;
}

AquariumFastFish::~AquariumFastFish() {}

AquariumBigFish::AquariumBigFish() {
    unk_255 = 0;
    unk_256 = 0;
}

AquariumBigFish::~AquariumBigFish() {}

AquariumFrog::AquariumFrog() {
    unk_211 = 2;
}

AquariumFrog::~AquariumFrog() {}

AquariumEel::AquariumEel() {
    unk_20e = 0;
}

AquariumEel::~AquariumEel() {}

extern "C" AquariumSeaButterfly::AquariumSeaButterfly() {
    unk_255 = 1;
    unk_21c = 0;
    unk_20c = 0x41;
    unk_270 = 0;
}

extern "C" AquariumSeaButterfly::~AquariumSeaButterfly() {
}

extern "C" AquariumSeahorse::AquariumSeahorse() {
    unk_255 = 1;
    unk_21c = 0;
    unk_20c = 0xa3;
    unk_264 = 0;
}

extern "C" AquariumSeahorse::~AquariumSeahorse() {
}

extern "C" AquariumCrawfish::AquariumCrawfish() {
    *(u8 *)&unk_21c = 2;
}

extern "C" AquariumCrawfish::~AquariumCrawfish() {
}

extern "C" AquariumPufferFish::AquariumPufferFish() {
    unk_255 = 0;
    unk_256 = 0;
    unk_258 = 0;
}

extern "C" AquariumPufferFish::~AquariumPufferFish() {
}

extern "C" AquariumPiranha::AquariumPiranha() {
    unk_255 = 0;
    unk_257 = 0;
    unk_259 = 0;
}

extern "C" AquariumPiranha::~AquariumPiranha() {
}

extern "C" AquariumSurfacingFish::AquariumSurfacingFish() {
    unk_258 = 0;
    unk_257 = 0;
    unk_255 = 0;
    unk_256 = 1;
    unk_259 = 0;
}

extern "C" AquariumSurfacingFish::~AquariumSurfacingFish() {
}

extern "C" AquariumHidingFish::AquariumHidingFish() {
}

extern "C" AquariumHidingFish::~AquariumHidingFish() {
}

extern "C" AquariumSquid::AquariumSquid() {
    unk_255 = 0;
}

extern "C" AquariumSquid::~AquariumSquid() {
}

extern "C" AquariumOctopus::AquariumOctopus() {
}

extern "C" AquariumOctopus::~AquariumOctopus() {
}

extern "C" MuseumAquarium::MuseumAquarium() {
    __cxa_vec_ctor(unk_2a8, 2, 0x2a8, (void *)func_020b6e10, (void *)func_020b6df4);
    func_0209c2dc(unk_7f8);
}

extern "C" MuseumAquarium::~MuseumAquarium() {
    func_0209c2d8(unk_7f8);
    __cxa_vec_cleanup(unk_2a8, 2, 0x2a8, (void *)func_020b6df4);
}

extern "C" AquariumFishHitBox::AquariumFishHitBox() {
    unk_4c = 0;
}

extern "C" /*EXTERN_C_CLOSE*/

AquariumFishHitBox::~AquariumFishHitBox() {
}

extern "C" void Aquarium_StepX(s32 *p, s32 a, u32 ang) {
    s32 idx = ((u16)ang >> 4) * 2;
    *p += func_01ffcb0c(a, data_02135f44[idx]);
}

extern "C" void Aquarium_StepZ(s32 *p, s32 a, u32 ang) {
    s32 idx = ((u16)ang >> 4) * 2;
    *p += func_01ffcb0c(a, data_02135f44[idx + 1]);
}

extern "C" void Aquarium_StepXZ(V3 *p, s32 a, s16 ang) {
    Aquarium_StepX((s32 *)p, a, ang);
    Aquarium_StepZ((s32 *)p + 2, a, ang);
}

extern "C" void AquariumFish_UpdateWallTurn(E864 *o) {
    if (AquariumFish_IsNearWall(o)) {
        AquariumFish_TurnAtWall(o);
    } else {
        o->unk_1fc = 0;
        o->unk_1fd = 0;
        AquariumFish_EndTurnAnim(o);
    }
}

extern "C" void AquariumFish_TurnAtWall(E864 *o) {
    if (o->unk_1ee != 1) {
        if (o->unk_1fd == 0) {
            if (Aquarium_RandRange(0, 100) < 0x4b) {
                o->unk_1fd = 1;
            } else {
                o->unk_1fd = 2;
                return;
            }
        } else {
            if (o->unk_1eb >= 4) {
                o->unk_1fd = 1;
                o->unk_1fc = 0;
                o->unk_1eb = 0;
            }
        }
        if (o->unk_1fd == 1) {
            if (o->unk_1ee == 5) {
                o->unk_1ee = 4;
            }
            if (o->unk_1fc == 0) {
                V3 l;
                l.x = o->unk_1a8.x;
                l.y = o->unk_1a8.y;
                l.z = o->unk_1a8.z;
                Aquarium_StepXZ(&l, ((s32)sAquariumFishParams[o->unk_15c].unk_03 << 12) >> 7, o->unk_1c0);
                s32 r = Aquarium_ProbeTurnSide((s32 *)&l, o->unk_1c0);
                AquariumFish_PickTurn(o, r, 2, 6);
                o->unk_1fc = 1;
                o->unk_250 = 0;
                o->unk_250 = o->unk_250 + o->unk_200;
            }
            if (o->unk_200 * o->unk_250 < 0) {
                if (AquariumFish_EndTurnAnim(o)) {
                    o->unk_1fd = 2;
                } else if (o->unk_1c6 == 0) {
                    o->unk_1fd = 2;
                } else if (o->unk_1c6 == 1) {
                    if (o->unk_22e == 0) {
                        o->unk_1fd = 2;
                    }
                }
            } else {
                o->unk_22f = 0;
                o->unk_1c0 = o->unk_1c0 + o->unk_200;
                o->unk_250 = o->unk_250 + o->unk_200;
                AquariumFish_PlayTurnAnim(o, (u16)o->unk_1fe);
                if (o->unk_1ee == 4) {
                    o->unk_158 = 0;
                }
            }
        } else if (o->unk_1fd == 2) {
            AquariumFish_EndTurnAnim(o);
        }
    }
}

extern "C" void AquariumFish_PickTurn(E864 *o, s32 f, u32 a, u32 b) {
    s32 t = Aquarium_RandRange((u16)a, (u16)b);
    o->unk_200 = t * 0xb6;
    if (f != 0) {
        s32 idx = (u16)o->unk_1c0 >> 4;
        if (func_01ffcb0c(data_02135f44[idx * 2], data_02135f44[idx * 2 + 1]) >= 0) {
            o->unk_200 *= -1;
            o->unk_1fe = 10;
        } else {
            o->unk_1fe = 3;
        }
    } else {
        s32 idx = (u16)o->unk_1c0 >> 4;
        if (func_01ffcb0c(data_02135f44[idx * 2], data_02135f44[idx * 2 + 1]) >= 0) {
            o->unk_1fe = 3;
        } else {
            o->unk_200 *= -1;
            o->unk_1fe = 10;
        }
    }
}

extern "C" void AquariumFish_PlayTurnAnim(E864 *o, u32 a) {
    if (o->unk_1c6 != 0) {
        if (o->unk_22e != 0) {
            if (AnimFrameCtrl_hasPassedFrame(&o->unk_100, a)) {
                o->unk_108 = (u32)((a - 1) << 16) >> 4;
            }
        } else {
            if (AnimFrameCtrl_hasPassedFrame(&o->unk_100, (u16)(o->unk_104.mid - 1))) {
                if (a == 10) {
                    AquariumFish_PlayAnim(o, 2);
                } else {
                    AquariumFish_PlayAnim(o, 1);
                }
                o->unk_22e = 1;
            }
        }
    } else {
        if (AnimFrameCtrl_hasPassedFrame(&o->unk_100, a)) {
            o->unk_108 = (u32)((a - 1) << 16) >> 4;
        }
    }
}

extern "C" s32 AquariumFish_EndTurnAnim(E864 *o) {
    BOOL r = FALSE;
    if (o->unk_1c6 != 0) {
        if (o->unk_22e != 0) {
            if (AnimFrameCtrl_hasPassedFrame(&o->unk_100, o->unk_104.mid)) {
                AquariumFish_PlaySwimAnim(o);
                r = TRUE;
            }
        }
    }
    return r;
}

extern "C" void AquariumFish_PlayAnim(E864 *o, s32 i) {
    s32 t = func_021065dc(o->unk_54[i]);
    s32 r = func_021065f8(t, 0);
    BlendAnimModel_playBlend(o->unk_64, r, 2, 0, 0x1000, 0, 0);
}

extern "C" void AquariumFish_PlaySwimAnim(E864 *o)
{
    AquariumFish_PlayAnim(o, 0);
    o->unk_22e = 0;
}

extern "C" void AquariumFish_CancelTurn(E864 *o)
{
    AquariumFish_PlaySwimAnim(o);
    o->unk_1fd = 2;
}

extern "C" void AquariumFish_MoveVertical(E864 *o, s32 a, s32 b, s32 c)
{
    s32 *p = &o->unk_1a8.y;
    s32 t = *p;
    s32 m = a * o->unk_1ca;
    *p = t + m;
    if (*p > b) {
        func_020e759c(p, o->unk_1cc, a);
    } else if (*p < c) {
        func_020e759c(p, o->unk_228, a);
    }
}

extern "C" void AquariumFish_UpdateDepth(E864 *o)
{
    AquariumFish_MoveVertical(o, o->unk_224, o->unk_1cc, o->unk_228);
}

extern "C" void AquariumFish_UpdateDepthCapped(E864 *o)
{
    s32 k = o->unk_15c;
    if (k == 0x2d || k == 0x2e) {
        AquariumFish_MoveVertical(o, o->unk_224, o->unk_1cc, o->unk_228);
    } else if (o->unk_1e8 == k) {
        AquariumFish_MoveVertical(o, o->unk_224, o->unk_1cc, o->unk_228);
    } else {
        AquariumFish_MoveVertical(o, 0x7b, 0x5000, o->unk_228);
    }
}

extern "C" void AquariumFish_UpdatePitchByDir(E864 *o)
{
    u32 t = o->unk_1ee;
    if ((u8)(t + 0xff) > 1) {
        if (t == 3) {
            func_020e7754(&o->unk_1c4, (s16)(o->unk_1ca * -6825), 3, 0x222);
        } else if (t == 5) {
            func_020e7754(&o->unk_1c4, 0, 3, 0x222);
        }
    }
}

extern "C" void AquariumFish_UpdatePitch(E864 *o, s32 lim, s32 b)
{
    if ((u8)(o->unk_1ee + 0xff) > 1) {
        s32 t = -o->unk_23c * o->unk_1ca;
        s32 s = (o->unk_20c * b) >> 12;
        s32 n, c;
        t = t * s;
        o->unk_1c4 = t;
        n = -lim;
        c = o->unk_1c4;
        if (c <= n) {
            o->unk_1c4 = n;
        } else if (c >= lim) {
            o->unk_1c4 = lim;
        }
        if (o->unk_24e != 0) {
            if (o->unk_1c4 != 0) {
                o->unk_23c--;
            }
        } else {
            o->unk_23c++;
            if (o->unk_1ee == 5) {
                o->unk_24e = 1;
            } else {
                t = o->unk_1ca;
                if (t == 1 && o->unk_1a8.y == o->unk_1cc) goto set;
                if (t == -1 && o->unk_1a8.y == o->unk_228) {
                set:
                    o->unk_24e = 1;
                }
            }
        }
    }
}

extern "C" void AquariumFish_UpdatePitchSmooth(E864 *o, s32 a)
{
    if ((u8)(o->unk_1ee + 0xff) > 1) {
        if (o->unk_24e != 0) {
            if (o->unk_1c4 != 0) {
                func_020e7754(&o->unk_1c4, 0, 3, 0x186);
            }
        } else {
            s32 d;
            func_020e7754(&o->unk_1c4, (s16)(-a * o->unk_1ca), 4, 0x186);
            if (o->unk_1ee == 5) {
                o->unk_24e = 1;
            } else {
                d = o->unk_1ca;
                if (d == 1 && o->unk_1a8.y == o->unk_1cc) goto set;
                if (d == -1 && o->unk_1a8.y == o->unk_228) {
                set:
                    o->unk_24e = 1;
                }
            }
        }
    }
}

extern "C" void AquariumFish_Bob(E864 *o, s32 m, s32 lim, u32 mode)
{
    s32 *p = &o->unk_1a8.y;
    if (mode == 0 || mode == 2) {
        m = m * o->unk_21c;
        if (m >= lim) {
            m = lim;
        }
    } else if (mode == 1 || mode == 3) {
        m = lim - m * o->unk_21c;
        if (m <= 0) {
            m = 0;
        }
    }
    if (mode <= 1) {
        *p = *p + m;
    } else if ((u8)(mode + 0xfe) <= 1) {
        *p = *p - m;
    }
}

extern "C" s32 Aquarium_RandFx(s32 a, s32 b)
{
    s32 r = Aquarium_RandRange(a, b);
    if (r == 0) {
        r = 1;
    }
    return r << 12;
}

extern "C" s16 Aquarium_RandAngle(s32 a, s32 b)
{
    s32 sign;
    s32 r;
    if (Random_Next(gRandom) > 0) {
        sign = 1;
    } else {
        sign = -1;
    }
    r = Aquarium_RandRange(b, a);
    return (s8)sign * r * 0xb6;
}

extern "C" s32 Aquarium_RandRange(s32 a, s32 b)
{
    return a + func_02063b8c(b - a);
}

extern "C" BOOL Aquarium_TurnTowardHome(void *obj, void *a, void *b, s32 max)
{
    BOOL r = TRUE;
    if (func_020e96a4(a, b) > max) {
        func_020e769c(obj, Math_AngleXZ(a, b), 0x38e);
        r = FALSE;
    }
    return r;
}

extern "C" BOOL Aquarium_ProbeTurnSide(s32 *p, s32 v)
{
    BOOL r = FALSE;
    s32 sgn = 2;
    s32 k[1];
    volatile s32 b, a;
    V3 q;
    s32 i;
    k[0] = sgn;
    if (v < 0) {
        sgn *= -1;
    }
    if (v < 0) {
        v = -v;
    }
    if (v > 0x4000) {
        k[0] *= -1;
    }
    for (i = 0; i < 0x32; i++) {
        a = p[2];
        b = p[1];
        q.x = p[0] + ((sgn * i) << 12) / 10;
        q.y = b;
        q.z = a;
        if (Aquarium_TestHeight800At(&q) == 0) {
            r = TRUE;
            break;
        }
        s32 z = p[2] + ((k[0] * i) << 12) / 10;
        s32 y = p[1];
        s32 x = p[0];
        q.x = x;
        q.y = y;
        q.z = z;
        if (Aquarium_TestHeight800At(&q) == 0) {
            break;
        }
    }
    return r;
}

extern "C" BOOL Aquarium_TestHeight800At(V3 *pos)
{
    u32 buf[16];
    BOOL r = FALSE;
    GroundInfo_initAtPos(buf, pos, r, r);
    if (GroundInfoBase_getHeight(buf, r) == 0x800) {
        r = TRUE;
    }
    GroundInfo_Destruct(buf);
    return r;
}

extern "C" BOOL AquariumFish_IsNearWall(E864 *o)
{
    BOOL r = FALSE;
    V3 v;
    s32 x;
    v.x = o->unk_1a8.x;
    v.y = o->unk_1a8.y;
    v.z = o->unk_1a8.z;
    Aquarium_StepXZ(&v, (sAquariumFishParams[o->unk_15c].unk_03 << 12) >> 7, o->unk_1c0);
    x = 0x400;
    if (o->unk_1fc != 0) {
        x = 0x1000;
    }
    if (o->unk_15c == 0x19 || o->unk_15c < 0x11) {
        if (Collision_ClampToRect(&v.x, x, &sAquariumTankCenterA, 0xfc00, 0x3c00) != 0) {
            r = TRUE;
        }
    } else {
        if (Collision_ClampToRect(&v.x, x, &sAquariumTankCenterB, 0xfc00, 0x3c00) != 0) {
            r = TRUE;
        }
    }
    return r;
}

extern "C" void _ZN17AquariumJellyfish8vfunc_00Ev(E7d4 *o)
{
    s32 *p = &o->unk_15c;
    o->unk_50 = o;
    o->unk_1e8 = *p;
    o->unk_1e9 = *p;
    o->unk_1c8 = 0;
    o->unk_210 = 0x5e;
    o->unk_214 = 1;
    o->unk_218 = 1;
    o->unk_230 = 0x96;
    o->unk_204 = sAquariumFishParams[*p].unk_08;
    o->unk_205 = sAquariumFishParams[*p].unk_09;
    o->unk_206 = sAquariumFishParams[*p].unk_0a;
    o->unk_207 = sAquariumFishParams[*p].unk_0b;
    sAquariumJellyfish = o;
}

extern "C" void _ZN17AquariumJellyfish8vfunc_04Ev(E7d4 *o)
{
    u8 a = o->unk_1e8;
    u8 *p = &o->unk_252;
    if (*p != a && a != o->unk_15c) {
        *p = a;
        o->unk_280 = 4;
        o->unk_278 = 0xcd;
        o->unk_281 = 1;
    }
    if (o->unk_281 == 0) {
        (o->*sAquariumSwimStates[o->unk_1ee])();
    } else {
        AquariumJellyfish_UpdateDrift(o);
    }
    Aquarium_Oscillate(&o->unk_1c4, &o->unk_284, (s32 *)&o->unk_288, 0x2aac, 0x12c);
    switch (o->unk_255) {
    case 1: {
        s32 r = Aquarium_RandRange(0, 250);
        s32 v;
        if (r <= 1 || (v = o->unk_1a8.y) >= 0x2b33) {
            if (AnimFrameCtrl_hasPassedFrame(&o->unk_100, 1) != 0) {
                o->unk_21c = 0;
                o->unk_255 = 2;
            }
        } else {
            if (v == o->unk_1b4.y) {
                o->unk_21c = 0;
                o->unk_255 = 0;
            }
        }
        o->unk_110 = 0x666;
        break;
    }
    case 0:
        if (Aquarium_RandRange(0, 100) <= 10) {
            o->unk_21c = 0;
            o->unk_255 = 1;
        }
        o->unk_110 = 0x800;
        break;
    case 2: {
        s32 r = Aquarium_RandRange(0, 250);
        if (r <= 1 || o->unk_1a8.y <= 0x800) {
            o->unk_21c = 0;
            o->unk_255 = 1;
        }
        o->unk_110 = 0x4cd;
        break;
    }
    }
    if (o->unk_1ee != 2) {
        AquariumFish_TurnToTarget(o);
    }
    AquariumFish_Bob(o, 8, 0x28, o->unk_255);
    o->unk_21c++;
    o->unk_158++;
    AquariumJellyfish_UpdatePulse(o);
    AquariumFish_CalcHitCenter(o, &o->unk_26c);
}

extern "C" void Aquarium_Oscillate(s16 *out, u8 *flag, s32 *cnt, s32 max, s32 mul)
{
    s32 t;
    if (*flag != 0) {
        *cnt = *cnt + 1;
    } else {
        *cnt = *cnt - 1;
    }
    t = (s16)(*cnt * mul);
    if (t >= max) {
        t = max;
        *flag = 0;
    } else if (t <= 0) {
        t = 0;
        *flag = 1;
    }
    *out = t;
}

extern "C" void AquariumJellyfish_UpdateDrift(E7d4 *o)
{
    switch (o->unk_281) {
    case 1:
        AquariumJellyfish_StartDrift(o);
        break;
    case 2:
        AquariumJellyfish_DriftOut(o);
        break;
    case 3:
        AquariumJellyfish_DriftBack(o);
        break;
    }
}

extern "C" void AquariumJellyfish_StartDrift(E7d4 *o)
{
    R *p = sAquariumFish[o->unk_1e8];
    if (p != NULL) {
        o->unk_282 = p->unk_1c0 + 0x4000;
    }
    o->unk_281 = 2;
    o->unk_158 = 0;
}

extern "C" void AquariumJellyfish_DriftOut(E7d4 *o)
{
    s32 t = o->unk_158 * 2;
    if (t > 0x7b) {
        t = 0x7b;
        o->unk_281 = 3;
        o->unk_158 = 0;
    }
    func_020e769c(&o->unk_1c0, o->unk_1ec, 0x2d8);
    Aquarium_StepXZ(&o->unk_1a8, t, o->unk_1c0);
}

extern "C" void AquariumJellyfish_DriftBack(E7d4 *o) {
    s32 t = 0x7b - o->unk_158 * 2;
    if (t < 0) {
        t = 0;
        o->unk_281 = 0;
        o->unk_158 = 0;
        o->unk_1ee = 2;
    }
    func_020e769c(&o->unk_1c0, o->unk_1ec, 0x2d8);
    Aquarium_StepXZ(&o->unk_1a8, t, o->unk_1c0);
}

extern "C" void AquariumJellyfish_UpdatePulse(E7d4 *o) {
    switch (o->unk_264) {
    case 0:
        AquariumJellyfish_BeginPulse(o);
        break;
    case 1:
        AquariumJellyfish_PulseGrow(o);
        break;
    case 2:
        AquariumJellyfish_PulseShrink(o);
        break;
    }
    o->unk_268++;
}

extern "C" void AquariumJellyfish_BeginPulse(E7d4 *o) {
    o->unk_264 = 1;
    o->unk_268 = 0;
    if (o->unk_280) {
        func_020e759c(&o->unk_278, 0x14, 0x29);
        func_020e759c(&o->unk_27c, 0xccd, 0xcd);
        o->unk_280--;
    } else {
        o->unk_278 = 0x14;
        o->unk_27c = 0xccd;
    }
}

extern "C" void AquariumJellyfish_PulseGrow(E7d4 *o) {
    o->unk_258 = o->unk_27c + o->unk_278 * o->unk_268;
    if (o->unk_258 >= 0x1000) {
        o->unk_258 = 0x1000;
        o->unk_25c = 0x1000;
        o->unk_260 = 0x1000;
        o->unk_264 = 2;
        o->unk_268 = 0;
        if (o->unk_280 == 4) {
            o->unk_27c = 0x99a;
        }
    } else {
        o->unk_25c = o->unk_258;
        o->unk_260 = o->unk_258;
    }
}

extern "C" void AquariumJellyfish_PulseShrink(E7d4 *o) {
    s32 t = o->unk_278 * o->unk_268;
    o->unk_258 = 0x1000 - t;
    if (o->unk_258 < o->unk_27c) {
        o->unk_258 = o->unk_27c;
        o->unk_25c = o->unk_27c;
        o->unk_260 = o->unk_27c;
        o->unk_264 = 0;
        o->unk_268 = 0;
    } else {
        o->unk_25c = o->unk_258;
        o->unk_260 = o->unk_258;
    }
}

extern "C" void AquariumFish_CalcHitCenter(R *o, V3 *out) {
    s32 t = o->unk_15c;
    static s32 k1 = (sAquariumFishParams[t].unk_02 << 12) >> 7;
    static s32 k2 = (sAquariumFishParams[t].unk_03 << 12) >> 7;
    V3 l[4];
    l[0].x = 0;
    l[0].y = k1;
    l[0].z = 0;
    l[1].x = 0;
    l[1].y = 0;
    l[1].z = k2;
    data_021f47e0 = o->unk_c8;
    MTX_MultVec43(&l[0], &data_021f47e0, &l[2]);
    MTX_MultVec43(&l[1], &data_021f47e0, &l[3]);
    V3 *p = &o->unk_1a8;
    out->x = (p->x + l[2].x) >> 1;
    out->z = (p->z + l[2].z) >> 1;
    if (l[3].y < p->y) {
        out->y = l[3].y;
    } else {
        out->y = p->y;
    }
}

extern "C" void _ZN16AquariumFastFish8vfunc_00Ev(E744 *o) {
    o->unk_50 = o;
    o->unk_1c8 = 2;
    Model_setInitCallback(&o->unk_64, (void *)AquariumFish_InstallJointCallbacks, o);
    s32 *t = &o->unk_15c;
    o->unk_1e8 = *t;
    o->unk_1e9 = *t;
    AquariumFish_LoadParams(o);
}

extern "C" void _ZN16AquariumFastFish8vfunc_04Ev(E744 *o) {
    AquariumFastFish_UpdateLap(o, -2, 0x24);
    if (o->unk_1ee != 2 && o->unk_1ee != 6) {
        AquariumFish_UpdateDepthCapped(o);
    }
    AquariumFish_UpdateAnimSpeed(o, 0x333);
    o->unk_158++;
    AquariumFish_CheckTouched(o);
}

extern "C" void AquariumFastFish_UpdateLap(E744 *o, s32 a, s32 b) {
    if (o->unk_1a8.x <= (a + 2) << 12) {
        o->unk_1fc = 1;
        if (func_020e769c(&o->unk_1c0, 0x4000, 0x38e)) {
            o->unk_1a8.x += 0x19a;
        }
        o->unk_1a8.y = ((sAquariumFishParams[o->unk_15c].unk_04 << 12) >> 6);
        Aquarium_StepXZ(&o->unk_1a8, 0x19a, o->unk_1c0);
        o->unk_110 = 0x1000;
        AquariumFish_PlayTurnAnim(o, 3);
        return;
    }
    if (o->unk_1a8.x >= (b - 2) << 12) {
        o->unk_1fc = 1;
        if (func_020e769c(&o->unk_1c0, -0x4000, 0x38e)) {
            o->unk_1a8.x -= 0x19a;
        }
        o->unk_1a8.y = ((sAquariumFishParams[o->unk_15c].unk_04 << 12) >> 6);
        Aquarium_StepXZ(&o->unk_1a8, 0x19a, o->unk_1c0);
        o->unk_110 = 0x1000;
        AquariumFish_PlayTurnAnim(o, 10);
        return;
    }
    AquariumFish_SteerFromWall(o);
    AquariumFish_UpdateAvoid(o);
    (o->*sAquariumFastSwimStates[o->unk_1ee])();
    AquariumFish_TurnToTarget(o);
    AquariumFish_ClampHeadingSideways(o);
    AquariumFish_EndTurnAnim(o);
    AquariumFish_UpdateAnimSpeed(o, 0x333);
}

extern "C" void _ZN15AquariumBigFish8vfunc_00Ev(E72c *o) {
    s32 *t = &o->unk_15c;
    o->unk_1e8 = *t;
    o->unk_1c7 = 0;
    if ((u32)(*t - 0x35) <= 1) {
        Model_setInitCallback(&o->unk_64, (void *)AquariumFish_InstallJointCallbacks, o);
    }
    s32 r;
    if (Aquarium_RandRange(0, 2) > 0) {
        r = 1;
    } else {
        r = -1;
    }
    o->unk_1c0 = r << 14;
    AquariumFish_LoadParams(o);
}

extern "C" void _ZN15AquariumBigFish8vfunc_04Ev(E72c *o) {
    s32 t = o->unk_15c;
    if ((u32)(t - 0x35) <= 1) {
        AquariumBigFish_UpdatePatrol(o, 2, 0x20);
    } else if (t == 0x34) {
        AquariumBigFish_UpdatePatrol(o, -4, 0x26);
    }
    if (o->unk_1ee != 2 && o->unk_1ee != 6) {
        AquariumFish_UpdateDepth(o);
        t = o->unk_15c;
        if ((u32)(t - 0x35) <= 1) {
            AquariumFish_UpdatePitch(o, 0x924, 0x28a);
        } else if (t == 0x34) {
            AquariumFish_UpdatePitch(o, 0x71c, 0x28a);
        }
    }
    o->unk_158++;
}

extern "C" void AquariumBigFish_UpdatePatrol(E72c *o, s32 a, s32 b) {
    if (o->unk_1a8.x <= (a + 2) << 12) {
        if (func_020e769c(&o->unk_1c0, 0x4000, 0x444)) {
            o->unk_1a8.x += 0x133;
        }
        Aquarium_StepXZ(&o->unk_1a8, 0x133, o->unk_1c0);
        o->unk_110 = 0x1000;
        o->unk_1fe = 3;
        AquariumFish_PlayTurnAnim(o, (u16)o->unk_1fe);
        return;
    }
    if (o->unk_1a8.x >= (b - 2) << 12) {
        if (func_020e769c(&o->unk_1c0, -0x4000, 0x444)) {
            o->unk_1a8.x -= 0x133;
        }
        Aquarium_StepXZ(&o->unk_1a8, 0x133, o->unk_1c0);
        o->unk_110 = 0x1000;
        o->unk_1fe = 10;
        AquariumFish_PlayTurnAnim(o, (u16)o->unk_1fe);
        return;
    }
    if (o->unk_1fe == 3) {
        func_020e769c(&o->unk_1c0, 0x4000, 0x444);
    } else if (o->unk_1fe == 10) {
        func_020e769c(&o->unk_1c0, -0x4000, 0x444);
    }
    (o->*sAquariumSwimStates[o->unk_1ee])();
    if ((u32)(o->unk_15c - 0x35) <= 1) {
        func_020e759c(&o->unk_1a8.z, 0x10800, 0xcd);
    } else if (o->unk_15c == 0x34) {
        func_020e759c(&o->unk_1a8.z, 0x10000, 0xcd);
    }
    AquariumFish_EndTurnAnim(o);
    AquariumFish_UpdateAnimSpeed(o, 0x333);
}

extern "C" void _ZN12AquariumFrog8vfunc_00Ev(E834 *o) {
    o->unk_1c7 = 0;
    o->unk_1a8.x = 0x14500;
    o->unk_1a8.y = 0x3700;
    o->unk_1a8.z = 0x15400;
    o->unk_1c0 = 0;
    sAquariumFrog = o;
    Unk_02003c30_callReset(&o->unk_1fc);
}

extern "C" void _ZN12AquariumFrog8vfunc_04Ev(E834 *o) {
    V3 l[2];
    l[0] = sRoomHasuPos;
    o->unk_1a8 = l[0];
    l[1] = o->unk_1a8;
    Unk_02003c40_callUpdateRelative(&o->unk_1fc, &l[1]);
    switch (o->unk_211) {
    case 2:
        AquariumFrog_StartCroak(o);
        break;
    case 4:
        AquariumFrog_Croak(o);
        break;
    case 6:
        if (o->unk_158 >= o->unk_1fc.unk_0c) {
            o->unk_211 = 2;
            o->unk_158 = 0;
        }
        break;
    }
    o->unk_158++;
}

extern "C" void AquariumFrog_StartCroak(E834 *o) {
    o->unk_1fc.unk_0c = Aquarium_RandRange(0x28, 0xc8);
    o->unk_20c = (Aquarium_RandRange(0x32, 0x4b) << 12) / 100;
    o->unk_110 = o->unk_20c;
    o->unk_1fc.unk_0e = Aquarium_RandRange(1, 7);
    o->unk_210 = 0;
    o->unk_158 = 0;
    o->unk_211 = 4;
}

extern "C" void AquariumFrog_Croak(E834 *o) {
    if (AnimFrameCtrl_hasPassedFrame(&o->unk_100, 1)) {
        Unk_02003c40_callRequestSustained(&o->unk_1fc, 0x832);
        o->unk_210++;
    }
    if (o->unk_210 >= o->unk_1fc.unk_0e) {
        if (AnimFrameCtrl_hasPassedFrame(&o->unk_100, (u16)(o->unk_104.mid - 1))) {
            o->unk_211 = 6;
            o->unk_158 = 0;
            o->unk_108 = 0;
            o->unk_110 = 0;
        }
    }
}

extern "C" void _ZN11AquariumEel8vfunc_00Ev(E804 *e) {
    e->unk_1c7 = 0;
    e->unk_1a8.x = 0;
    e->unk_1a8.y = 0;
    e->unk_1a8.z = 0;
    e->unk_1c0 = 0;
}

extern "C" void _ZN11AquariumEel8vfunc_04Ev(E804 *e) {
    (e->*sAquariumEelStates[e->unk_20e])();
    e->unk_158++;
}

extern "C" void AquariumEel_StateStart(E804 *e) {
    e->unk_208 = (Aquarium_RandRange(0xb, 0xf) << 12) / 10;
    e->unk_200 = (Aquarium_RandRange(0x14, 0x32) << 12) / 1000;
    e->unk_204 = (Aquarium_RandRange(0xa, 0x1e) << 12) / 1000;
    e->unk_20c = Aquarium_RandRange(1, 0x96);
    e->unk_20d = Aquarium_RandRange(0xa, 0x78);
    e->unk_158 = 0;
    e->unk_110 = 0;
    e->unk_20e = 1;
}

extern "C" void AquariumEel_StateSpeedUp(E804 *e) {
    s32 t = e->unk_200 * e->unk_158 * 5;
    s32 m = e->unk_208;
    if (t >= m) {
        t = m;
        e->unk_20e = 2;
        e->unk_158 = 0;
    }
    e->unk_110 = t;
}

extern "C" void AquariumEel_StateHold(E804 *e) {
    if (e->unk_158 >= e->unk_20c) {
        e->unk_20e = 3;
        e->unk_158 = 0;
    }
    e->unk_110 = e->unk_208;
}

extern "C" void AquariumEel_StateSlowDown(E804 *e) {
    s32 t = e->unk_208 - e->unk_204 * e->unk_158;
    if (t <= 0) {
        t = 0;
        e->unk_20e = 4;
        e->unk_158 = 0;
    }
    e->unk_110 = t;
}

extern "C" void AquariumEel_StateWait(E804 *e) {
    e->unk_110 = 0;
    if (e->unk_158 >= e->unk_20d) {
        e->unk_20e = 0;
        e->unk_158 = 0;
    }
}

extern "C" void _ZN20AquariumSeaButterfly8vfunc_00Ev(E7bc *e) {
    s32 *p = &e->unk_15c;
    e->unk_1e8 = *p;
    e->unk_1e9 = *p;
    e->unk_1c8 = 0;
    e->unk_210 = 0x3a;
    e->unk_214 = 1;
    e->unk_218 = 1;
    e->unk_230 = 0x1e;
    e->unk_258[0] = 0x6000;
    e->unk_258[1] = 0;
    e->unk_258[2] = 0x14a00;
    e->unk_204 = sAquariumFishParams[*p].unk_08;
    e->unk_205 = sAquariumFishParams[*p].unk_09;
    e->unk_206 = sAquariumFishParams[*p].unk_0a;
    e->unk_207 = sAquariumFishParams[*p].unk_0b;
    sAquariumSeaButterfly = e;
}

extern "C" void _ZN20AquariumSeaButterfly8vfunc_04Ev(E7bc *e) {
    if ((u8)(e->unk_1ee + 0xfd) <= 1) {
        Aquarium_TurnTowardHome(&e->unk_1c0, &e->unk_1a8, &e->unk_258, 0x1000);
    }
    (e->*sAquariumSwimStates[e->unk_1ee])();
    Aquarium_Oscillate(&e->unk_1c4, &e->unk_270, &e->unk_274, 0x2aac, 0x12c);
    switch (e->unk_255) {
    case 1: {
        s32 r = Aquarium_RandRange(0, 0x64);
        if (r <= 1 || e->unk_1a8.y >= 0x2b33) {
            if (AnimFrameCtrl_hasPassedFrame(&e->unk_100, 1)) {
                e->unk_21c = 0;
                e->unk_255 = 2;
            }
        } else {
            r = Aquarium_RandRange(0, 0x64);
            if (r <= 0x1e) {
                e->unk_21c = 0;
                e->unk_255 = 0;
            } else if (e->unk_1a8.y == e->unk_1b4.y) {
                e->unk_21c = 0;
                e->unk_255 = 0;
            }
        }
        e->unk_110 = 0xe66;
        break;
    }
    case 0: {
        s32 r = Aquarium_RandRange(0, 0x64);
        if (r <= 0x1e) {
            e->unk_21c = 0;
            e->unk_255 = 1;
        }
        e->unk_110 = 0x1000;
        break;
    }
    case 2: {
        s32 r = Aquarium_RandRange(0, 0x64);
        if (r <= 1 || e->unk_1a8.y <= 0x800) {
            e->unk_21c = 0;
            e->unk_255 = 1;
        }
        e->unk_110 = 0x666;
        break;
    }
    }
    if (e->unk_1ee != 2) {
        AquariumFish_TurnToTarget(e);
    }
    AquariumFish_Bob(e, 8, 0x14, e->unk_255);
    e->unk_21c++;
    e->unk_158++;
    AquariumFish_CheckTouched(e);
    AquariumFish_CalcHitCenter(e, &e->unk_264);
}

extern "C" void _ZN16AquariumSeahorse8vfunc_00Ev(E7a4 *e) {
    s32 *p = &e->unk_15c;
    e->unk_1e8 = *p;
    e->unk_1e9 = *p;
    e->unk_1c8 = 0;
    e->unk_210 = 0x51;
    e->unk_214 = 2;
    e->unk_218 = 2;
    e->unk_230 = 0x3c;
    e->unk_258[0] = 0x7000;
    e->unk_258[1] = 0;
    e->unk_258[2] = 0x14a00;
    e->unk_204 = sAquariumFishParams[*p].unk_08;
    e->unk_205 = sAquariumFishParams[*p].unk_09;
    e->unk_206 = sAquariumFishParams[*p].unk_0a;
    e->unk_207 = sAquariumFishParams[*p].unk_0b;
}

extern "C" void _ZN16AquariumSeahorse8vfunc_04Ev(E7a4 *e) {
    Aquarium_TurnTowardHome(&e->unk_1c0, &e->unk_1a8, &e->unk_258, 0x1000);
    switch (e->unk_255) {
    case 1: {
        s32 r = Aquarium_RandRange(0, 0x64);
        if (r <= 8 || e->unk_1a8.y >= 0x2000) {
            e->unk_21c = 0;
            e->unk_255 = 2;
        } else if (e->unk_1a8.y == e->unk_1b4.y) {
            e->unk_21c = 0;
            e->unk_255 = 0;
        }
        e->unk_110 = 0xb33;
        break;
    }
    case 0: {
        s32 r = Aquarium_RandRange(0, 0x64);
        if (r <= 10) {
            e->unk_21c = 0;
            e->unk_255 = 1;
        }
        e->unk_110 = 0x1000;
        break;
    }
    case 2: {
        s32 r = Aquarium_RandRange(0, 0x64);
        if (r <= 3 || e->unk_1a8.y <= 0x1000) {
            e->unk_21c = 0;
            e->unk_255 = 1;
        }
        e->unk_110 = 0x666;
        break;
    }
    }
    (e->*sAquariumSwimStates[e->unk_1ee])();
    Aquarium_Oscillate(&e->unk_1c4, &e->unk_264, &e->unk_268, 0x11c6, 0x96);
    if (e->unk_1ee != 2) {
        AquariumFish_TurnToTarget(e);
    }
    AquariumFish_Bob(e, 8, 0x51, e->unk_255);
    e->unk_21c++;
    e->unk_158++;
    AquariumFish_CheckTouched(e);
}

extern "C" void _ZN18AquariumPufferFish8vfunc_00Ev(E78c *e) {
    e->unk_50 = e;
    e->unk_1e8 = e->unk_15c;
    e->unk_1e9 = e->unk_15c;
    e->unk_1c8 = 1;
    AquariumFish_LoadParams(e);
    Model_setInitCallback(&e->unk_64, (void *)AquariumFish_InstallJointCallbacks, e);
}

extern "C" void _ZN18AquariumPufferFish8vfunc_04Ev(E78c *e) {
    u32 v;
    s32 t;
    AquariumFish_SteerFromWall(e);
    (e->*sAquariumSwimStates[e->unk_1ee])();
    v = (u16)(e->unk_104.mid - 1);
    if (e->unk_110 > 0x1000) {
        v = (u16)(e->unk_104.mid - 2);
    }
    switch (e->unk_256) {
    case 0:
        if (e->unk_40 != 0) {
            e->unk_255 = 1;
        }
        if (e->unk_255 != 0) {
            if (AnimFrameCtrl_hasPassedFrame(&e->unk_100, v)) {
                e->unk_256 = 1;
                t = e->unk_210;
                e->unk_210 = t << 1;
                AquariumFish_PlayAnim(e, 1);
                e->unk_255 = 0;
            }
        }
        break;
    case 1:
        if (AnimFrameCtrl_hasPassedFrame(&e->unk_100, v)) {
            e->unk_257 = Aquarium_RandRange(0x3c, 0x50);
            e->unk_258 = 0;
            e->unk_256 = 2;
            AquariumFish_PlayAnim(e, 2);
        }
        break;
    case 2: {
        u32 b = e->unk_258;
        if (b > e->unk_257) {
            if (AnimFrameCtrl_hasPassedFrame(&e->unk_100, v)) {
                e->unk_256 = 3;
                e->unk_210 = e->unk_210 >> 1;
                AquariumFish_PlayAnim(e, 3);
            }
        } else {
            e->unk_258 = b + 1;
        }
        break;
    }
    case 3:
        if (AnimFrameCtrl_hasPassedFrame(&e->unk_100, v)) {
            e->unk_256 = 0;
            AquariumFish_PlayAnim(e, 0);
        }
        break;
    }
    if (e->unk_1ee != 2 && e->unk_1ee != 6) {
        AquariumFish_UpdateDepthCapped(e);
        AquariumFish_UpdatePitchSmooth(e, 0x1554);
        AquariumFish_TurnToTarget(e);
    }
    AquariumFish_UpdateAnimSpeed(e, 0x666);
    AquariumFish_KeepInsideX(e);
    AquariumFish_UpdateAvoid(e);
    AquariumFish_TurnAtTankEnds(e);
    e->unk_158++;
    if (AquariumFish_CheckTouched(e)) {
        if (e->unk_256 == 0) {
            e->unk_255 = 1;
        } else {
            e->unk_258 = 0;
        }
    }
}

extern "C" void _ZN15AquariumPiranha8vfunc_00Ev(E75c *e) {
    e->unk_1e8 = e->unk_15c;
    e->unk_1c7 = 0;
    AquariumFish_LoadParams(e);
}

extern "C" void _ZN15AquariumPiranha8vfunc_04Ev(E75c *o) {
    (o->*sAquariumPiranhaStates[o->unk_255])();
    s32 t = (sAquariumFishParams[30].unk_03 << 12) >> 7;
    o->unk_256 = Collision_ClampToRect(&o->unk_1a8, t, &sAquariumTankCenterB, 0x11c00, 0x5c00);
    s32 g = func_02133150(o->unk_164 << 12, 10);
    func_02088c64(o->unk_04, &o->unk_1a8, t, (sAquariumFishParams[30].unk_02 << 12) >> 7, 0x100, 0x140, 0, 0xff, g);
    func_02089040(o->unk_04);
    o->unk_1b4.x = o->unk_1a8.x;
    o->unk_1b4.y = o->unk_1a8.y;
    o->unk_1b4.z = o->unk_1a8.z;
    o->unk_158 = o->unk_158 + 1;
}

extern "C" void AquariumPiranha_StateSwim(E75c *o) {
    (o->*sAquariumSwimStates[o->unk_1ee])();
    AquariumFish_UpdateWallTurn(o);
    if (o->unk_1ee != 2 && o->unk_1ee != 6) {
        AquariumFish_UpdateDepth(o);
        AquariumFish_UpdatePitch(o, 0x1554, 0x384);
        AquariumFish_TurnToTarget(o);
    }
    AquariumFish_UpdateAnimSpeed(o, 0x666);
    P *p = PlayerActor_GetActor(4);
    if (p != 0) {
        V3 v;
        V3 *pv = &p->unk_5c;
        v.x = p->unk_5c.x;
        v.y = pv->y;
        v.z = pv->z;
        if (func_020e9600(&v, &o->unk_1a8) < 0x10000) {
            o->unk_259++;
            if (o->unk_259 > 0xa) {
                if (p->unk_98 != 0) {
                    o->unk_255 = 1;
                    o->unk_158 = 0;
                    o->unk_259 = 0;
                }
            }
        } else {
            o->unk_259 = 0;
        }
    }
}

extern "C" void AquariumPiranha_StateApproach(E75c *o) {
    V3 v;
    P *p = PlayerActor_GetActor(4);
    if (p == 0) {
        o->unk_255 = 0;
        return;
    }
    V3 *pv = &p->unk_5c;
    v.x = p->unk_5c.x;
    v.y = pv->y;
    v.z = pv->z;
    func_020e769c(&o->unk_1c0, Math_AngleXZ(&o->unk_1a8, (s32 *)&v), 0x222);
    Aquarium_StepXZ(&o->unk_1a8, o->unk_210, o->unk_1c0);
    if (p->unk_98 != 0) {
        if (o->unk_1c4 != 0) func_020e769c(&o->unk_1c4, 0, 0x222);
        if (o->unk_1a8.y != 0x199a) func_020e759c(&o->unk_1a8.y, 0x199a, o->unk_224);
        o->unk_259 = 0;
    } else {
        AquariumPiranha_BobDepth(o);
        o->unk_259++;
        if (o->unk_259 >= 0x46) {
            o->unk_255 = 0;
            o->unk_1ee = 2;
            o->unk_158 = 0;
            o->unk_259 = 0;
            return;
        }
    }
    long long d = func_020e9600(&v, &o->unk_1a8);
    if (d < 0x4000) {
        if ((u8)o->unk_256s != 0) {
            o->unk_255 = 2;
            o->unk_158 = 0;
        }
    } else if (0x10000 < d) {
        o->unk_255 = 0;
        o->unk_158 = 0;
    }
    o->unk_110 = 0x1000;
}

extern "C" void AquariumPiranha_StateBite(E75c *o) {
    P *p = PlayerActor_GetBodyPos(4);
    if (p == 0) {
        o->unk_255 = 0;
        return;
    }
    if (o->unk_1c4 != 0) func_020e769c(&o->unk_1c4, 0, 0x16c);
    if (o->unk_1a8.y != 0x199a) func_020e759c(&o->unk_1a8.y, 0x199a, o->unk_224);
    switch (o->unk_257) {
    case 1:
        AquariumPiranha_BiteLunge(o);
        break;
    case 2:
        AquariumPiranha_BiteRecoil(o);
        break;
    case 0:
        AquariumPiranha_BiteIdle(o);
        break;
    }
    func_020e769c(&o->unk_1c0, Math_AngleXZ(&o->unk_1a8, (s32 *)p), 0x222);
    long long d = func_020e9600(p, &o->unk_1a8);
    if (0x10000 < d) {
        o->unk_255 = 0;
        o->unk_158 = 0;
    } else if (0x4000 < d) {
        o->unk_255 = 1;
        o->unk_158 = 0;
    }
    o->unk_110 = 0x1000;
}

extern "C" void AquariumPiranha_BobDepth(E75c *o) {
    o->unk_1a8.y = o->unk_1a8.y + o->unk_224 * o->unk_1ca;
    if (Aquarium_RandRange(0, 100) < 15) o->unk_1ca *= -1;
    if (o->unk_1a8.y > o->unk_1cc) {
        o->unk_1ca = -1;
        o->unk_1a8.y = o->unk_1cc;
    } else if (o->unk_1a8.y < o->unk_228) {
        o->unk_1ca = 1;
        o->unk_1a8.y = o->unk_228;
    }
}

extern "C" void AquariumPiranha_BiteIdle(E75c *o) {
    if (Aquarium_RandRange(0, 100) < 15) {
        o->unk_257 = 1;
        o->unk_258 = Aquarium_RandRange(8, 0xd);
        o->unk_158 = 0;
    }
}

extern "C" void AquariumPiranha_BiteLunge(E75c *o) {
    Aquarium_StepXZ(&o->unk_1a8, 0x266, o->unk_1c0);
    s16 t = Aquarium_RandAngle(0x168, 0);
    Aquarium_StepXZ(&o->unk_1a8, 0x52, t);
    o->unk_257 = 2;
}

extern "C" void AquariumPiranha_BiteRecoil(E75c *o) {
    Aquarium_StepXZ(&o->unk_1a8, 0xcd, -o->unk_1c0);
    if (o->unk_158 % 4 == 1) o->unk_257 = 1;
    if (o->unk_158 >= o->unk_258) o->unk_257 = 0;
}

extern "C" void _ZN21AquariumSurfacingFish8vfunc_00Ev(E714 *o) {
    o->unk_1e8 = o->unk_15c;
    Model_setInitCallback(&o->unk_64, (void *)AquariumFish_InstallJointCallbacks, o);
    AquariumFish_LoadParams(o);
}

extern "C" void _ZN21AquariumSurfacingFish8vfunc_04Ev(E714 *o) {
    switch (o->unk_255) {
    case 0:
        AquariumSurfacingFish_StateSwim(o);
        break;
    case 1:
        AquariumSurfacingFish_StateSurface(o);
        break;
    }
    AquariumFish_UpdateAnimSpeed(o, 0x333);
    o->unk_158 = o->unk_158 + 1;
    AquariumFish_CheckTouched(o);
}

extern "C" void AquariumSurfacingFish_StateSwim(E714 *o) {
    if (o->unk_1ee == 2) {
        if (o->unk_259 != 0) {
            if (Aquarium_RandRange(0, 100) < 15) {
                o->unk_255 = 1;
                return;
            }
            o->unk_259 = 0;
        } else {
            if (Aquarium_RandRange(0, 100) < 0x46) {
                o->unk_255 = 1;
                return;
            }
        }
    }
    (o->*sAquariumSwimStates[o->unk_1ee])();
    AquariumFish_UpdateWallTurn(o);
    if (o->unk_1ee != 2 && o->unk_1ee != 6) {
        AquariumFish_UpdateDepth(o);
        AquariumFish_UpdatePitch(o, 0x1554, 0x3e8);
        AquariumFish_TurnToTarget(o);
    }
}

extern "C" void AquariumSurfacingFish_StateSurface(E714 *o) {
    (o->*sAquariumSwimStates[o->unk_1ee])();
    AquariumSurfacingFish_UpdateSurface(o);
}

extern "C" void AquariumSurfacingFish_UpdateSurface(E714 *o) {
    switch (o->unk_1ee) {
    case 0:
    case 2:
        break;
    case 3:
        o->unk_23c = o->unk_23c + 1;
        break;
    case 5:
        o->unk_23c = o->unk_23c - 1;
        break;
    case 4:
        if (o->unk_258 == 0) o->unk_158 = 0;
        break;
    case 1: {
        o->unk_1a8.y -= o->unk_224 * 2;
        if (o->unk_1a8.y < o->unk_228) o->unk_1a8.y = o->unk_228;
        return;
    }
    }
    {
        s32 a = -o->unk_23c;
        a *= o->unk_256s;
        s32 b = o->unk_20c * 1000;
        b >>= 12;
        o->unk_1c4 = a * b;
    }
    {
        s32 v = o->unk_1c4;
        if (v <= -0x1554) o->unk_1c4 = -0x1554;
        else if (v >= 0x1554) o->unk_1c4 = 0x1554;
    }
    o->unk_1a8.y += o->unk_224 * o->unk_256s;
    switch (o->unk_258) {
    case 0:
        if (o->unk_1a8.y > 0x299a) {
            if (o->unk_1ee == 4) {
                o->unk_257++;
                if (o->unk_257 >= 0x14) {
                    o->unk_1ee = 5;
                    o->unk_258 = 1;
                    o->unk_257 = 0;
                }
            }
        }
        break;
    case 1:
        o->unk_1a8.y = o->unk_1a8.y - func_01ffcb0c(0x1800, o->unk_224 * o->unk_256s);
        if (o->unk_1ee == 6) {
            if (o->unk_1a8.y < o->unk_1cc) {
                o->unk_256s = 1;
                o->unk_255 = 0;
                o->unk_258 = 0;
                o->unk_259 = 1;
            } else {
                o->unk_1ee = 2;
                o->unk_256s = -1;
                o->unk_258 = 2;
            }
        }
        break;
    case 2:
        if (o->unk_1a8.y < o->unk_1cc) {
            if (o->unk_1ee == 2) {
                o->unk_256s = 1;
                o->unk_255 = 0;
                o->unk_258 = 0;
                o->unk_259 = 1;
            }
        }
        break;
    }
    {
        s32 t = o->unk_1a8.y;
        if (t > 0x299a) o->unk_1a8.y = 0x299a;
        else if (t < o->unk_228) o->unk_1a8.y = o->unk_228;
    }
}

extern "C" void _ZN18AquariumHidingFish8vfunc_00Ev(E6fc *o) {
    o->unk_50 = o;
    s32 *p = &o->unk_15c;
    o->unk_1e8 = *p;
    o->unk_1e9 = *p;
    Unk_ov004_0222fd7c_W *w = (Unk_ov004_0222fd7c_W *)o;
    if (*p == 0x26) {
        w->w[0] = 0x9e00;
        w->w[1] = 0x1000;
        w->w[2] = 0x14700;
        w->w[3] = 0xa100;
        w->w[4] = 0xb00;
        w->w[5] = 0x14a00;
    } else if (*p == 0xc) {
        w->w[0] = 0x15900;
        w->w[1] = 0x1000;
        w->w[2] = 0x13900;
    }
    AquariumFish_LoadParams(o);
}

extern "C" void _ZN18AquariumHidingFish8vfunc_04Ev(E6fc *o) {
    if (o->unk_15c == 0x26) {
        AquariumHidingFish_UpdateClownfish(o);
    } else if (o->unk_15c == 0xc) {
        AquariumHidingFish_UpdateGoby(o);
    }
    AquariumFish_UpdateAnimSpeed(o, 0x666);
    o->unk_158++;
}

extern "C" void AquariumHidingFish_UpdateClownfish(E6fc *o) {
    if (func_020e96a4(&o->unk_1a8, o->unk_258) <= 0x1000) {
        o->unk_255 = 1;
    } else {
        o->unk_255 = 0;
    }
    if (o->unk_256 == 0) {
        if (o->unk_1ee != 2 && o->unk_1ee != 6) {
            AquariumFish_UpdateDepthCapped(o);
            AquariumFish_UpdatePitchSmooth(o, 0x1554);
        }
        (o->*sAquariumSwimStates[o->unk_1ee])();
        AquariumFish_TurnToTarget(o);
        if (Aquarium_TurnTowardHome(&o->unk_1c0, &o->unk_1a8, o->unk_258, 0x1000)) {
            if (o->unk_278 >= o->unk_274) {
                o->unk_278 = 0;
                o->unk_256 = 1;
                o->unk_274 = Aquarium_RandRange(200, 0x140);
            }
            {
                u8 a = o->unk_1e8;
                u8 *p = &o->unk_252;
                if (*p != a) {
                    if (a != o->unk_15c) {
                        *p = a;
                        o->unk_256 = 2;
                    }
                }
            }
        } else {
            u8 a = o->unk_1e8;
            u8 *p = &o->unk_252;
            if (*p != a) {
                if (a != o->unk_15c) {
                    *p = a;
                    if (o->unk_1ee != 1) {
                        AquariumFish_StartFlee(o, &sAquariumFish[o->unk_1e8]->unk_1a8);
                    }
                }
            }
        }
        o->unk_278++;
    } else {
        AquariumHidingFish_UpdateHide(o);
    }
    AquariumHidingFish_CheckTouch(o);
}

extern "C" void AquariumHidingFish_UpdateGoby(E6fc *o) {
    if (o->unk_1ee != 2 && o->unk_1ee != 6) {
        AquariumFish_UpdateDepth(o);
        AquariumFish_UpdatePitchByDir(o);
    }
    (o->*sAquariumSwimStates[o->unk_1ee])();
    AquariumFish_TurnToTarget(o);
    if (Aquarium_TurnTowardHome(&o->unk_1c0, &o->unk_1a8, o->unk_258, 0x1000)) {
        AquariumFish_UpdateWallTurn(o);
    } else {
        if (*(u8 *)&o->unk_1fc != 0) {
            o->unk_1ee = 2;
            *(u8 *)&o->unk_1fc = 0;
        }
    }
    {
        u8 a = o->unk_1e8;
        u8 *p = &o->unk_252;
        if (*p != a) {
            if (a != o->unk_15c) {
                *p = a;
                if (o->unk_1ee != 1) {
                    AquariumFish_StartFlee(o, &sAquariumFish[o->unk_1e8]->unk_1a8);
                }
            }
        }
    }
    AquariumFish_CheckTouched(o);
}

extern "C" void AquariumHidingFish_CheckTouch(E6fc *o) {
    u32 buf[4];
    if (AquariumFish_GetTouchPoint(o, (V3 *)buf)) {
        if (o->unk_255 != 0) {
            if (o->unk_256 != 3) {
                o->unk_256 = 2;
            }
        } else {
            AquariumFish_StartFlee(o, (V3 *)buf);
        }
    }
}

extern "C" void AquariumHidingFish_UpdateHide(E6fc *o) {
    switch (o->unk_256) {
    case 1: {
        AquariumHidingFish_MoveToHideout(o, 0);
        u8 a = o->unk_1e8;
        u8 *p = &o->unk_252;
        if (*p != a) {
            if (a != o->unk_15c) {
                *p = a;
                o->unk_256 = 2;
            }
        }
        break;
    }
    case 2:
        AquariumHidingFish_MoveToHideout(o, 1);
        break;
    case 3:
        AquariumHidingFish_StayHidden(o);
        break;
    }
}

extern "C" void AquariumHidingFish_MoveToHideout(E6fc *o, s32 f) {
    if (o->unk_255 == 0) {
        o->unk_252 = o->unk_15c;
        o->unk_256 = 0;
        return;
    }
    if (o->unk_1a8.y > o->unk_268) {
        if (f != 0) {
            func_020e759c(&o->unk_1a8.y, o->unk_268, o->unk_224 << 2);
        } else {
            func_020e759c(&o->unk_1a8.y, o->unk_268, o->unk_224);
        }
    }
    if (func_020e96a4(&o->unk_1a8, &o->unk_264) <= 0x800) {
        if (o->unk_1a8.y <= o->unk_268) {
            o->unk_256 = 3;
            o->unk_158 = 0;
            o->unk_270 = Aquarium_RandRange(0x3c, 0x78);
        }
    } else {
        o->unk_1c0 = Math_AngleXZ(&o->unk_1a8, &o->unk_264);
        if (f != 0) {
            Aquarium_StepXZ(&o->unk_1a8, o->unk_210 << 1, o->unk_1c0);
        } else {
            Aquarium_StepXZ(&o->unk_1a8, o->unk_210 >> 1, o->unk_1c0);
        }
    }
}

extern "C" void AquariumHidingFish_StayHidden(E6fc *o) {
    func_020e759c(&o->unk_1a8, o->unk_264, o->unk_210);
    func_020e759c(&o->unk_1a8.z, o->unk_26c, o->unk_210);
    if (o->unk_158 > o->unk_270) {
        o->unk_256 = 0;
        o->unk_158 = 0;
        o->unk_1ee = 2;
    }
}

extern "C" void _ZN16AquariumCrawfish8vfunc_00Ev(E84c *o) {
    o->unk_1fc = 0xc800;
    o->unk_200 = 0;
    o->unk_204 = 0x14a00;
}

extern "C" void _ZN16AquariumCrawfish8vfunc_04Ev(E84c *o) {
    switch (o->unk_21c) {
    case 2:
        AquariumCrawfish_StartWalk(o);
        break;
    case 4:
        AquariumCrawfish_Walk(o);
        break;
    case 5:
        AquariumCrawfish_SlowDown(o);
        break;
    case 6:
        if (o->unk_158 >= *(u16 *)((u8 *)o + 0x212)) {
            o->unk_158 = 0;
            o->unk_21c = 2;
        }
        break;
    }
    o->unk_158++;
}

extern "C" void AquariumCrawfish_StartWalk(E84c *o) {
    o->unk_1c0 += Aquarium_RandAngle(0x5a, 0);
    *(u8 *)&o->unk_210 = Aquarium_RandRange(0x14, 0x78);
    *(u16 *)((u8 *)o + 0x212) = Aquarium_RandRange(0x3c, 0xf0);
    o->unk_20c = Aquarium_RandFx(2, 4) / 100;
    o->unk_158 = 0;
    o->unk_1a8.y = 0x700;
    o->unk_110 = o->unk_218 = 0x1000;
    o->unk_21c = 4;
}

extern "C" void AquariumCrawfish_Walk(E84c *o) {
    s32 r;
    Aquarium_TurnTowardHome(&o->unk_1c0, &o->unk_1a8, &o->unk_1fc, 0x1600);
    r = o->unk_20c;
    o->unk_1a8.x += func_01ffcb0c(r, data_02135f44[((u16)o->unk_1c0 >> 4) * 2]);
    o->unk_1a8.z += func_01ffcb0c(r, data_02135f44[((u16)o->unk_1c0 >> 4) * 2 + 1]);
    o->unk_208 += 0x2000;
    r = r * 7 / 10;
    o->unk_1a8.x += func_01ffcb0c(r, data_02135f44[((u16)o->unk_208 >> 4) * 2]);
    o->unk_1a8.z += func_01ffcb0c(r, data_02135f44[((u16)o->unk_208 >> 4) * 2]);
    if (o->unk_158 >= *(u8 *)&o->unk_210) {
        o->unk_158 = 0;
        o->unk_21c = 5;
        o->unk_218 >>= 1;
        o->unk_110 = o->unk_218;
    }
}

extern "C" void AquariumCrawfish_SlowDown(E84c *o) {
    s32 t = o->unk_20c;
    s32 r = t - (o->unk_158 << 3);
    if (r < 0) {
        r = 0;
        o->unk_158 = r;
        o->unk_110 = r;
        o->unk_21c = 6;
    }
    o->unk_1a8.x += func_01ffcb0c(r, data_02135f44[((u16)o->unk_1c0 >> 4) * 2]);
    o->unk_1a8.z += func_01ffcb0c(r, data_02135f44[((u16)o->unk_1c0 >> 4) * 2 + 1]);
    o->unk_208 += 0x2000;
    r = r * 7 / 10;
    o->unk_1a8.x += func_01ffcb0c(r, data_02135f44[((u16)o->unk_208 >> 4) * 2]);
    o->unk_1a8.z += func_01ffcb0c(r, data_02135f44[((u16)o->unk_208 >> 4) * 2]);
}

extern "C" void _ZN13AquariumSquid8vfunc_00Ev(E81c *o) {
    o->unk_50 = o;
    o->unk_1e8 = o->unk_15c;
    o->unk_1e9 = o->unk_15c;
    o->unk_1c8 = 1;
    AquariumFish_LoadParams(o);
    Model_setInitCallback((u8 *)o + 0x64, (void *)AquariumFish_InstallJointCallbacks, o);
}

extern "C" void _ZN13AquariumSquid8vfunc_04Ev(E81c *o) {
    if (o->unk_256 == 0) {
        if (AnimFrameCtrl_hasPassedFrame(&o->unk_100, (u16)(o->unk_104.mid - 1))) {
            o->unk_256 = 1;
            AquariumFish_PlayAnim(o, 1);
        }
    }
    if (o->unk_1ee == 2) {
        o->unk_255 = 0;
        if (AnimFrameCtrl_hasPassedFrame(&o->unk_100, (u16)(o->unk_104.mid - 1))) {
            o->unk_256 = 0;
            AquariumFish_PlayAnim(o, 0);
            o->unk_255 = 1;
        }
    } else if (o->unk_1ee != 2) {
        if (o->unk_255 == 0) {
            o->unk_255 = 1;
        }
    }
    if (o->unk_255 != 0) {
        (o->*sAquariumSwimStates[o->unk_1ee])();
        AquariumSquid_TurnAtTankEnd(o);
        if (o->unk_1ee == 4) {
            AquariumFish_UpdateDepthCapped(o);
            AquariumFish_UpdatePitchSmooth(o, 0x1554);
        }
    }
    if (o->unk_1ee != 6 && o->unk_1ee != 5) {
        AquariumFish_TurnToTarget(o);
    }
    if (o->unk_256 == 0) {
        AquariumFish_UpdateAnimSpeed(o, 0xccd);
    } else {
        AquariumFish_UpdateAnimSpeed(o, 0x666);
    }
    AquariumFish_KeepInsideX(o);
    AquariumFish_UpdateAvoid(o);
    AquariumFish_TurnAtTankEnds(o);
    o->unk_158++;
    if (AquariumFish_CheckTouched(o)) {
        o->unk_256 = 0;
        AquariumFish_PlayAnim(o, 0);
        o->unk_255 = 1;
    }
}

extern "C" void AquariumSquid_TurnAtTankEnd(E864 *e) {
    s32 c = func_01ffcb0c(0x1800, (s32)(sAquariumFishParams[e->unk_15c].unk_03 << 12) >> 7);
    s32 a = e->unk_1a8.z + c;
    s32 b = e->unk_1a8.z - c;
    s32 t = e->unk_1a8.x;
    if (t < 0x4000 || t > 0x1e000) goto end;
    if (e->unk_1ee == 1) {
        e->unk_1fc = 0;
        e->unk_1fd = 0;
        goto end;
    }
    {
        s32 w = e->unk_1c0;
        if (w < 0) w = -w;
        w = (s16)w;
        if (a >= 0x15dc2 && e->unk_1fc != 0) goto go;
        if (a <= 0x11000 && e->unk_1fc != 0) goto go;
        if (a >= 0x15dc2 && w < 0x4000 && e->unk_1fc == 0) goto go;
        if (b > 0x11000 || w <= 0x4000 || e->unk_1fc != 0) goto fail2;
    }
go:
    if (e->unk_1f1 != 0) goto fail1;
    if (e->unk_1fd == 0) {
        if (Aquarium_RandRange(0, 0x64) < 0x4b) {
            e->unk_1fd = 1;
        } else {
            e->unk_1fd = 2;
            goto end;
        }
    } else {
        if (e->unk_1eb >= 2) {
            e->unk_1fd = 1;
            e->unk_1fc = 0;
            e->unk_1eb = 0;
        }
    }
    if (e->unk_1fd == 1) {
        if (e->unk_1fc == 0) {
            AquariumFish_PickTurn(e, 0, 1, 4);
            e->unk_1fc = 1;
            if (e->unk_1a8.x >= 0xb000 && e->unk_1a8.x <= 0x17000) {
                if (Aquarium_RandRange(0, 0x64) < 0x14) {
                    { s16 k = -1; e->unk_200 *= k; }
                }
            }
        }
        e->unk_22f = 0;
        e->unk_1c0 = e->unk_1c0 + e->unk_200;
        if (e->unk_1ee == 5) {
            e->unk_1ee = 4;
            e->unk_158 = 0;
        }
    }
    goto end;
fail1:
    e->unk_1fc = 0;
    e->unk_1fd = 0;
    goto end;
fail2:
    e->unk_1fc = 0;
    e->unk_1fd = 0;
end:;
}

extern "C" void _ZN15AquariumOctopus8vfunc_00Ev(E7ec *e) {
    e->unk_1c7 = 0;
    e->unk_1a8.x = 0x16f00;
    e->unk_1a8.y = 0xfffff400;
    e->unk_1a8.z = 0x13300;
    e->unk_1c0 = 0;
}

extern "C" void AquariumSwimFish_SetupSea(E864 *e) {
    e->unk_50 = e;
    s32 s = e->unk_15c;
    if ((u32)(s - 0x2d) <= 1) {
        e->unk_1c8 = 0;
    } else if (s == 0x37) {
        e->unk_1c8 = 2;
    } else {
        e->unk_1c8 = 1;
    }
    s32 *p = &e->unk_15c;
    e->unk_1e8 = *p;
    e->unk_1e9 = *p;
    AquariumFish_LoadParams(e);
    if (e->unk_1c6) {
        Model_setInitCallback((u8 *)e + 0x64, (void *)AquariumFish_InstallJointCallbacks, e);
    }
}

extern "C" void AquariumSwimFish_UpdateSea(E864 *e) {
    AquariumFish_SteerFromWall(e);
    (e->*sAquariumSwimStates[e->unk_1ee])();
    {
        s32 s = e->unk_15c;
        if (s != 0x2e && s != 0x2d) {
            if (s == 0x29 || s == 0x37 || s == 0x2b) {
                AquariumFish_ClampHeadingSideways(e);
            }
            AquariumFish_TurnAtTankEnds(e);
            AquariumFish_UpdateAvoid(e);
        } else {
            if (e->unk_1a8.z > 0x13dc2) {
                e->unk_1a8.z = 0x13dc2;
            }
        }
    }
    if (e->unk_1ee != 2 && e->unk_1ee != 6) {
        if (e->unk_15c == 0x2b || e->unk_15c == 0x37) {
            AquariumFish_UpdateDepthCapped(e);
            AquariumFish_UpdatePitchSmooth(e, 0x71c);
        } else {
            AquariumFish_UpdateDepthCapped(e);
            AquariumFish_UpdatePitchSmooth(e, 0xe38);
        }
        AquariumFish_TurnToTarget(e);
    }
    AquariumFish_UpdateAnimSpeed(e, 0x333);
    AquariumFish_KeepInsideX(e);
    e->unk_158++;
    AquariumFish_CheckTouched(e);
}

extern "C" void AquariumSwimFish_SetupFreshwater(E864 *e) {
    if (sAquariumFishParams[e->unk_15c].unk_00 == 0) {
        e->unk_50 = e;
    }
    e->unk_1e8 = e->unk_15c;
    AquariumFish_LoadParams(e);
    if (e->unk_1c6) {
        Model_setInitCallback((u8 *)e + 0x64, (void *)AquariumFish_InstallJointCallbacks, e);
    }
}

extern "C" void AquariumSwimFish_UpdateFreshwater(E864 *e) {
    (e->*sAquariumSwimStates[e->unk_1ee])();
    if (sAquariumFishParams[e->unk_15c].unk_00 == 0) {
        u8 *p1 = &e->unk_1e8;
        u8 b = *p1;
        if (e->unk_252 != b && b != e->unk_15c) {
            e->unk_252 = b;
            if (e->unk_1ee != 1) {
                AquariumFish_StartFlee(e, (V3 *)((u8 *)sAquariumFish[*p1] + 0x1a8));
            }
        }
    }
    AquariumFish_UpdateWallTurn(e);
    u8 m = e->unk_1ee;
    if (m == 5) {
        if (e->unk_20c < 0xcd) goto skip;
    }
    if (m == 6) goto skip;
    AquariumFish_UpdateDepth(e);
    {
        s32 s = e->unk_15c;
        if (s == 0x1d) {
            AquariumFish_UpdatePitch(e, 0xe38, 0x4b0);
        } else {
            u32 k = sAquariumFishParams[s].unk_00;
            if (k == 0) {
                AquariumFish_UpdatePitchByDir(e);
            } else if (k >= 4) {
                AquariumFish_UpdatePitch(e, 0x71c, 0x384);
            } else {
                AquariumFish_UpdatePitch(e, 0x1554, 0x384);
            }
        }
    }
    AquariumFish_TurnToTarget(e);
skip:
    AquariumFish_UpdateAnimSpeed(e, 0x333);
    e->unk_158++;
    AquariumFish_CheckTouched(e);
}

extern "C" void AquariumFish_JointCalcPre(Cb *c) {
    void *m = c->unk_04->unk_2c;
    if (m) {
        BlendAnimModel_onJointCalcPre((u8 *)m + 0x64, c);
    }
}

extern "C" void AquariumFish_JointCalcPost(Cb *c) {
    void *m = c->unk_04->unk_2c;
    if (m) {
        BlendAnimModel_onJointCalcPost((u8 *)m + 0x64, c);
    }
}

extern "C" void AquariumFish_InstallJointCallbacks(Cb *c) {
    c->unk_24 = (void *)AquariumFish_JointCalcPre;
    c->unk_92 = 1;
    c->unk_24 = (void *)AquariumFish_JointCalcPost;
    c->unk_92 = 2;
}

extern "C" BOOL AquariumFish_GetTouchPoint(E864 *e, V3 *out) {
    BOOL r = FALSE;
    u8 b;
    s32 t;
    V3 v;
    if (TouchPickResult_GetTarget(Scene_GetTouchPicker(), &v, &t, &b)) {
        if (!Unk_ov004_0222ee2c_Both()) {
            if (t == 0x13) {
                if (b == 0) {
                    if (func_020e9600(&e->unk_1a8, &v) <= 0x9000) {
                        s32 d = e->unk_1a8.y - v.y;
                        if (d < 0) d = -d;
                        if (d <= 0x3000) {
                            out->x = v.x;
                            out->y = v.y;
                            out->z = v.z;
                            r = TRUE;
                        }
                    }
                } else if (b == 1) {
                    if (func_020e9600(&e->unk_1a8, &v) <= 0x9000) {
                        s32 d = e->unk_1a8.y - v.y;
                        if (d < 0) d = -d;
                        if (d <= 0x3000) {
                            out->x = v.x;
                            out->y = v.y;
                            out->z = v.z;
                            r = TRUE;
                        }
                    }
                }
            }
        }
    }
    return r;
}

extern "C" BOOL AquariumFish_CheckTouched(E864 *e) {
    BOOL r = FALSE;
    if (e->unk_253 != 0) {
        if (e->unk_1ee != 1) {
            e->unk_253 = r;
        }
        return FALSE;
    }
    V3 v;
    if (AquariumFish_GetTouchPoint(e, &v)) {
        AquariumFish_StartFlee(e, &v);
        r = TRUE;
        e->unk_253 = r;
    }
    return r;
}

extern "C" void AquariumFish_StartFlee(E864 *e, V3 *p) {
    if (e->unk_253 == 0) {
        e->unk_1c4 = 0;
        e->unk_1ee = 1;
        e->unk_158 = 0;
        if ((u8)(e->unk_164 + 0xfc) <= 1) {
            if (e->unk_254 >= 0x7d) {
                e->unk_24c = Math_AngleXZ(p, &e->unk_1a8);
            } else if (e->unk_1c0 >= 0) {
                e->unk_24c = Aquarium_RandRange(0x38e4, 0x471c);
            } else {
                e->unk_24c = -Aquarium_RandRange(0x38e4, 0x471c);
            }
        } else {
            e->unk_24c = Math_AngleXZ(p, &e->unk_1a8);
        }
        if (e->unk_1fd == 1) {
            AquariumFish_CancelTurn(e);
        }
    }
}

extern "C" void _ZN16AquariumSwimFish8vfunc_00Ev(E864 *e) {
    (e->*sAquariumSwimFishRoomFns[sAquariumRoom].a)();
}

extern "C" void _ZN16AquariumSwimFish8vfunc_04Ev(E864 *e) {
    (e->*sAquariumSwimFishRoomFns[sAquariumRoom].b)();
}

extern "C" void AquariumFish_StateStart(E864 *e) {
    e->unk_20c = 0;
    if (e->unk_1fd == 2) {
        e->unk_1c2 = e->unk_1c2 + Aquarium_RandAngle(0xb4, 0x96);
        e->unk_1eb++;
    } else {
        e->unk_1c2 = e->unk_1c2 + Aquarium_RandAngle(e->unk_230, 0);
        e->unk_1eb = 0;
    }
    e->unk_158 = 0;
    e->unk_202 = Aquarium_RandRange(e->unk_205, e->unk_204);
    e->unk_203 = Aquarium_RandRange(e->unk_207, e->unk_206);
    e->unk_23c = 0;
    if (e->unk_1e8 == e->unk_15c) {
        s32 v = e->unk_1a8.y;
        if (v >= e->unk_1cc) {
            e->unk_1ca = -1;
        } else if (v <= e->unk_228) {
            e->unk_1ca = 1;
        } else {
            s32 t = Aquarium_RandRange(0, 2);
            e->unk_1ca = t > 0 ? 1 : -1;
        }
    }
    e->unk_24e = 0;
    e->unk_1ee = 3;
    e->unk_22f = 1;
}

extern "C" void AquariumFish_StateAccelerate(E864 *e) {
    s32 *p = &e->unk_20c;
    *p = e->unk_214 * e->unk_158;
    Aquarium_StepXZ(&e->unk_1a8, *p, e->unk_1c0);
    if (e->unk_20c >= e->unk_210) {
        e->unk_158 = 0;
        e->unk_1ee = 4;
    }
}

extern "C" void AquariumFish_StateCruise(E864 *e) {
    s32 *p = &e->unk_20c;
    *p = e->unk_210;
    Aquarium_StepXZ(&e->unk_1a8, *p, e->unk_1c0);
    if (e->unk_158 >= e->unk_202) {
        e->unk_158 = 0;
        e->unk_1ee = 5;
    }
}

extern "C" void AquariumFish_StateDecelerate(E864 *e) {
    s32 t = e->unk_210;
    s32 *p = &e->unk_20c;
    *p = t - e->unk_218 * e->unk_158;
    Aquarium_StepXZ(&e->unk_1a8, *p, e->unk_1c0);
    if (e->unk_20c <= 0) {
        e->unk_20c = 0;
        e->unk_158 = 0;
        e->unk_1ee = 6;
    }
}

extern "C" void AquariumFish_StateRest(E864 *e) {
    e->unk_20c = 0;
    if (e->unk_158 >= e->unk_203) {
        e->unk_158 = 0;
        e->unk_1ee = 2;
    }
}

extern "C" void AquariumFish_StateFlee(E864 *e) {
    if (e->unk_158 <= 0x28) {
        if ((u8)(e->unk_164 + 0xfc) <= 1) {
            func_020e7754(&e->unk_1c0, e->unk_24c, 3, 0xaaa);
        } else {
            func_020e7754(&e->unk_1c0, e->unk_24c, 2, 0x4000);
        }
        s32 *p = &e->unk_20c;
        *p = e->unk_210;
        Aquarium_StepXZ(&e->unk_1a8, *p, e->unk_1c0);
    } else {
        e->unk_253 = 0;
        e->unk_1ee = 2;
    }
}

extern "C" void AquariumFish_StateNone() {}

extern "C" void AquariumFish_StateStartFast(E864 *e) {
    e->unk_158 = 1;
    e->unk_202 = Aquarium_RandRange(e->unk_205, e->unk_204);
    e->unk_203 = 0;
    e->unk_23c = 0;
    if (e->unk_1f1 != 0) {
        e->unk_1c2 += Aquarium_RandAngle(0x1e, 0xf);
    }
    if (e->unk_1e8 == e->unk_15c) {
        if (e->unk_1a8.y >= e->unk_1cc) {
            e->unk_1ca = -1;
        } else if (e->unk_1a8.y <= e->unk_228) {
            e->unk_1ca = 1;
        } else {
            e->unk_1ca = Aquarium_RandRange(0, 2) > 0 ? 1 : -1;
        }
    }
    e->unk_1ee = 3;
}

extern "C" void AquariumFish_StateSlowDown(E864 *e) {
    s32 t = e->unk_210;
    s32 *p = &e->unk_20c;
    *p = t - e->unk_218 * e->unk_158;
    Aquarium_StepXZ(&e->unk_1a8, *p, e->unk_1c0);
    if (e->unk_20c <= 0xf6) {
        e->unk_20c = 0xf6;
        e->unk_158 = 3;
        e->unk_1ee = 2;
    }
}

extern "C" void AquariumFish_ClampHeadingSideways(R *e) {
    s32 v = e->unk_1c0;
    s32 t;
    if (v < 0) t = -v; else t = v;
    if (t > 0x5554) {
        if (v >= 0) {
            e->unk_1c0 = 0x5554;
            return;
        }
        e->unk_1c0 = -0x5554;
        return;
    } else if (t < 0x2aac) {
        if (v >= 0) {
            e->unk_1c0 = 0x2aac;
            return;
        }
        e->unk_1c0 = -0x2aac;
    }
}

extern "C" void AquariumFish_TurnAtTankEnds(R *e) {
    s32 lo, hi;
    if (e->unk_1c8 == 1) {
        lo = 0;
        hi = 0x22;
    } else {
        lo = -2;
        hi = 0x24;
    }
    s32 x = e->unk_1a8.x >> 12;
    if (x <= lo) {
        e->unk_1c0 = 0x4000;
        e->unk_1a8.y = (sAquariumFishParams[e->unk_15c].unk_04 << 12) >> 6;
    } else if (x >= hi) {
        e->unk_1c0 = -0x4000;
        e->unk_1a8.y = (sAquariumFishParams[e->unk_15c].unk_04 << 12) >> 6;
    }
}

extern "C" void AquariumFish_UpdateAvoid(E864 *e) {
    if (e->unk_1ee != 1) {
        if (e->unk_40 != 0) {
            if (e->unk_1f1 == 0) {
                AquariumFish_ClearContact(e);
                e->unk_1ca = 1;
            } else {
                u32 c5 = e->unk_1e8;
                if (e->unk_252 != c5) {
                    e->unk_252 = c5;
                    e->unk_254 = 0;
                } else {
                    u8 *c = &e->unk_254;
                    *c = *c + 1;
                    u32 n = *c;
                    if (n >= 0x7d) {
                        R *o = sAquariumFish[e->unk_1e8];
                        if (!o) {
                            return;
                        } else {
                            u32 ra = sAquariumFishParams[e->unk_15c].unk_03;
                            u32 rb = sAquariumFishParams[o->unk_15c].unk_03;
                            if (ra <= rb) {
                                AquariumFish_StartFlee(e, &o->unk_1a8);
                                e->unk_254 = 0;
                                return;
                            } else if (n >= 0x91) {
                                AquariumFish_StartFlee(e, &o->unk_1a8);
                                e->unk_254 = 0;
                                return;
                            }
                        }
                    }
                }
                {
                    if (e->unk_1ee == 6 || (e->unk_1ee == 5 && e->unk_15c >= 0x23)) {
                        e->unk_1ee = 2;
                    }
                    u32 m = e->unk_1ea;
                    if ((m & 8) != 0 || (m & 0x10) != 0) {
                        if (e->unk_1ee != 4) {
                            u32 a = sAquariumFishParams[e->unk_15c].unk_00;
                            u32 b = sAquariumFishParams[e->unk_1e8].unk_00;
                            if (a <= b) {
                                e->unk_1ee = 4;
                                e->unk_158 = 0;
                            }
                        }
                    }
                    m = e->unk_1ea;
                    if (m >= 0x40) {
                        if (e->unk_1c9 == 0) {
                            AquariumFish_AvoidOther(e);
                        }
                    } else if ((m & 0x20) != 0) {
                        e->unk_1ca = 1;
                        e->unk_1c9 = 1;
                    }
                    func_020e769c(&e->unk_1c0, e->unk_1ec, 0x38e);
                }
            }
        } else {
            AquariumFish_ClearContact(e);
        }
    }
}

extern "C" void AquariumFish_AvoidOther(R *e) {
    s32 a;
    R** slot;
    V3* v;
    R* o;
    s32 c;
    s32 b;
    slot = &sAquariumFish[e->unk_1e8];
    o = *slot;
    if (o) {
        v = &o->unk_1a8;
        a = e->unk_1c0;
        if (a < 0) a = -a;
        b = o->unk_1c0;
        if (b < 0) c = -b; else c = b;
        if (a >= 0x4000 && c >= 0x4000) {
            if (e->unk_1a8.z > v->z) {
                e->unk_1ec = b + 0x8000;
            } else if (o->unk_1c9 == 0) {
                o->unk_1c9 = 1;
                (*slot)->unk_1e9 = e->unk_15c;
                (*slot)->unk_1ec = e->unk_1c0 + 0x8000;
            }
            AquariumFish_SplitDepth(e, slot);
        } else if (a <= 0x4000 && c <= 0x4000) {
            if (e->unk_1a8.z < v->z) {
                e->unk_1ec = b + 0x8000;
            } else if (o->unk_1c9 == 0) {
                o->unk_1c9 = 1;
                (*slot)->unk_1e9 = e->unk_15c;
                (*slot)->unk_1ec = e->unk_1c0 + 0x8000;
            }
            AquariumFish_SplitDepth(e, slot);
        } else {
            s32 r = Math_AngleXZ(v, &e->unk_1a8);
            s32 d = (s16)(r - e->unk_1c0);
            if (d < 0) {
                e->unk_1ec = r - 0x4000;
            } else {
                e->unk_1ec = r + 0x4000;
            }
        }
    }
}

extern "C" void AquariumFish_ClearContact(R *e) {
    e->unk_1ea = 0;
    e->unk_1c9 = 0;
    e->unk_1ec = e->unk_1c0;
    u32 t = e->unk_1e8;
    if (t != (u32)e->unk_15c) {
        R *o = sAquariumFish[t];
        if (o) {
            o->unk_1c9 = 0;
        }
        e->unk_1e8 = e->unk_15c;
        e->unk_1e9 = e->unk_15c;
    }
}

extern "C" s32 Aquarium_GetContactSide(R *a, R **b) {
    s32 r4 = (*b)->unk_1c0;
    s32 y, x;
    s32 t = (s16)(Math_AngleXZ(&a->unk_1a8, &(*b)->unk_1a8) - 0x4000);
    x = (s16)(a->unk_1c0 - t);
    y = (s16)(r4 - t);
    if (x * y < 0) {
        if (x < 0) x = -x;
        if (y < 0) y = -y;
        if ((x - 0x4000) * (y - 0x4000) < 0) return 0x40;
        return 0x80;
    } else if (x < 0) {
        if (x < 0) x = -x;
        if (y < 0) y = -y;
        if ((x - 0x4000) * (y - 0x4000) < 0) return 8;
        return 0x10;
    } else {
        if (x < 0) x = -x;
        if (y < 0) y = -y;
        if ((x - 0x4000) * (y - 0x4000) < 0) return 2;
        return 4;
    }
}

extern "C" void AquariumFish_SplitDepth(R *a, R **b) {
    if (a->unk_1cc < (*b)->unk_1cc) {
        a->unk_1ca = -1;
        R *o = *b;
        if (o->unk_1c9 == 0) {
            o->unk_1ca = 1;
        }
    } else {
        a->unk_1ca = 1;
        R *o = *b;
        if (o->unk_1c9 == 0) {
            o->unk_1ca = -1;
        }
    }
}

extern "C" void AquariumFish_TurnToTarget(E864 *e) {
    if (e->unk_20c > 0x99a || e->unk_1ee != 5) {
        if (e->unk_1ee != 1) {
            if (e->unk_22f != 0) {
                BOOL r;
                if (sAquariumFishParams[e->unk_15c].unk_00 >= 4) {
                    r = func_020e769c(&e->unk_1c0, e->unk_1c2, 0x88) ? TRUE : FALSE;
                } else {
                    r = func_020e769c(&e->unk_1c0, e->unk_1c2, 0x16c) ? TRUE : FALSE;
                }
                if (r) {
                    e->unk_22f = 0;
                }
            }
        }
    }
}

extern "C" void AquariumFish_UpdateAnimSpeed(E864 *e, s32 lo) {
    s32 v;
    u8 m = e->unk_1ee;
    if (m == 1) {
        v = 0x1800;
    } else {
        s32 t = e->unk_20c;
        if (m == 3) {
            t = t * 3;
        } else if (m == 5) {
            t = func_02133150(t, 3);
        }
        v = func_01ffcb0c(FX_Div(t, e->unk_210), 0x1800);
        if (v < lo) {
            v = lo;
        } else if (v > 0x1800) {
            v = 0x1800;
        }
    }
    e->unk_110 = v;
}

void AquariumFish::vfunc_00() {
}

void AquariumFish::vfunc_04() {
}

extern "C" void AquariumFish_KeepInsideX(R *e) {
    if (e->unk_1ee != 1) {
        s32 x = e->unk_1a8.x;
        if (x > 0x5000 && x < 0x1e000) {
        } else {
            AquariumFish_ClampHeadingSideways(e);
            if (e->unk_1ee == 6) {
                e->unk_1ee = 2;
            }
        }
    }
}

void AquariumFishHitBox::vfunc_08(u32 a, u32 idx, u32 c) {
    R *q0 = unk_4c;
    if (q0) {
        R *p = q0;
        if (idx >= 0x38) {
            p->unk_1ea |= 0x20;
        } else {
            if (sAquariumFishParams[idx].unk_00 != 0 || idx < 0x23) {
                R **q = &sAquariumFish[idx];
                AquariumFish_RecordContact(this, &p, q);
                AquariumFish_RecordContact(this, q, &p);
            }
        }
    }
}

extern "C" void AquariumFish_RecordContact(void *unused, R **pp, R **q)
{
    (*pp)->unk_1f1++;
    R *o = *pp;
    u32 b;
    s32 a;
    a = o->unk_15c;
    b = o->unk_1e8;
    s32 c = (*q)->unk_15c;
    s32 r2 = Aquarium_GetContactSide(o, q);
    R *o2 = *pp;
    u32 r1 = o2->unk_1ea;
    o2->unk_1f4[c >> 5] |= 1 << (c & 31);
    if (b == a) {
        (*pp)->unk_1ea = r2 | r1;
        (*pp)->unk_1e8 = c;
        (*pp)->unk_1c9 = 0;
    } else {
        u32 rc = sAquariumFishParams[c].unk_00;
        u32 rb = sAquariumFishParams[b].unk_00;
        if (rb < rc) {
            (*pp)->unk_1ea = r2 | r1;
            (*pp)->unk_1e8 = c;
            (*pp)->unk_1c9 = 0;
        } else if (rb == rc) {
            if ((s32)r1 < r2) {
                (*pp)->unk_1ea = r2 | r1;
                (*pp)->unk_1e8 = c;
                (*pp)->unk_1c9 = 0;
            }
        }
    }
}

extern "C" void AquariumFish_ResetContacts(R *self)
{
    s32 t0 = self->unk_15c;
    s32 c0 = self->unk_1e8;
    if (c0 != t0) {
        if ((self->unk_1f4[c0 >> 5] & (1 << (c0 & 31))) == 0) self->unk_1e8 = t0;
        u8 *p2 = &self->unk_1e9;
        s32 c1 = *p2;
        if ((self->unk_1f4[c1 >> 5] & (1 << (c1 & 31))) == 0) {
            *p2 = self->unk_15c;
            self->unk_1c9 = 0;
        }
    }
    self->unk_1f4[0] = 0;
    self->unk_1f4[1] = 0;
    self->unk_1f1 = 0;
    self->unk_1f0 = 0;
}

extern "C" void AquariumFish_SteerFromWall(E864 *self)
{
    if (self->unk_40 == 0 && self->unk_22f == 0 && self->unk_1f0 != 0) {
        s32 v = self->unk_1c0;
        if (v >= 0) {
            s32 a = v;
            if (a < 0) a = -a;
            if (a >= 0x4000) {
                func_020e769c(&self->unk_1c0, 0x471c, 0x222);
            } else {
                func_020e769c(&self->unk_1c0, 0x38e4, 0x222);
            }
        } else {
            s32 a = v;
            if (a < 0) a = -a;
            if (a <= -0x4000) {
                func_020e769c(&self->unk_1c0, -0x471c, 0x222);
            } else {
                func_020e769c(&self->unk_1c0, -0x38e4, 0x222);
            }
        }
    }
}

extern "C" void AquariumFish_LoadParams(E864 *self)
{
    const Rec *t = sAquariumFishParams;
    s32 *pi = &self->unk_15c;
    self->unk_210 = (s32)(t[*pi].unk_07 << 12) >> 10;
    self->unk_214 = (s32)(t[*pi].unk_05 << 12) >> 12;
    self->unk_218 = (s32)(t[*pi].unk_06 << 12) >> 13;
    self->unk_204 = t[*pi].unk_08;
    self->unk_205 = t[*pi].unk_09;
    self->unk_206 = t[*pi].unk_0a;
    self->unk_207 = t[*pi].unk_0b;
    self->unk_230 = t[*pi].unk_0c;
    self->unk_224 = (s32)(t[*pi].unk_0d << 12) >> 10;
    self->unk_1cc = ((s32)(t[*pi].unk_0e << 12) >> 5) - 0x1000;
    self->unk_228 = ((s32)(t[*pi].unk_0f << 12) >> 6) - 0x1000;
}

extern "C" BOOL MuseumAquarium_RequestFishModel(Mgr *self, s32 i)
{
    if (i < sAquariumFirstFish || i >= sAquariumEndFish) return FALSE;
    R **p = &sAquariumFish[i];
    if (*p == NULL) return FALSE;
    (*p)->unk_15c = i;
    (*p)->unk_160 = 1;
    ModelSlotPool_acquire((u8 *)self + 0x7f8, (u8 *)*p + 0x166);
    PooledModel_reset((u8 *)*p + 0x168);
    return TRUE;
}

extern "C" void MuseumAquarium_ReleaseFish(Mgr *self, s32 i)
{
    if (i >= sAquariumFirstFish && i < sAquariumEndFish) {
        R **p = &sAquariumFish[i];
        s32 z = 0;
        s32 j;
        for (j = z; j < 4; j++) {
            if ((*p)->unk_54[j]) {
                Mem_Free((void *)(*p)->unk_54[j]);
                (*p)->unk_54[j] = z;
            }
        }
        (*p)->unk_160 = 0;
        AnimModel_detachJointAnim((u8 *)*p + 0x64);
        CachedModel_release((u8 *)*p + 0x64);
        PooledModel_unload((u8 *)*p + 0x168);
        ModelSlotPool_release((u8 *)self + 0x7f8, (u8 *)*p + 0x166);
        switch ((*p)->unk_15c) {
        case 0xb:
            if (sAquariumFrog) {
                Unk_02003c30_callRelease((u8 *)sAquariumFrog + 0x1fc);
                sAquariumFrog = 0;
            }
            break;
        case 0x24:
            if (sAquariumJellyfish) sAquariumJellyfish = 0;
            break;
        case 0x23:
            if (sAquariumSeaButterfly) sAquariumSeaButterfly = 0;
            break;
        }
        (*p)->unk_15c = -1;
    }
}

extern "C" BOOL _ZN14MuseumAquarium8vfunc_00Ev(Mgr *self)
{
    ModelSlotPool_init((u8 *)self + 0x7f8, 0x38, 0x800, 0x80, 0xc00, (void *)MuseumAquariumHeap_Create, (void *)MuseumAquariumHeap_Destroy, 0);
    sAquariumRoom = *(s32 *)&self->unk_04[4];
    if (sAquariumRoom == 0) {
        self->unk_50[0].unk_50[0] = 0xc000;
        self->unk_50[0].unk_50[1] = 0x700;
        self->unk_50[0].unk_50[2] = 0x5600;
        self->unk_50[0].unk_50[3] = 0x1000;
        self->unk_50[0].unk_50[4] = 0x800;
        self->unk_50[1].unk_50[0] = 0x15200;
        self->unk_50[1].unk_50[1] = 0x700;
        self->unk_50[1].unk_50[2] = 0x6200;
        self->unk_50[1].unk_50[3] = 0x1000;
        self->unk_50[1].unk_50[4] = 0xd00;
        self->unk_50[2].unk_50[0] = 0x9c00;
        self->unk_50[2].unk_50[1] = 0x700;
        self->unk_50[2].unk_50[2] = 0x14b00;
        self->unk_50[2].unk_50[3] = 0xa00;
        self->unk_50[2].unk_50[4] = 0xa00;
        self->unk_50[3].unk_50[0] = 0x15900;
        self->unk_50[3].unk_50[1] = 0x700;
        self->unk_50[3].unk_50[2] = 0x13900;
        self->unk_50[3].unk_50[3] = 0x1000;
        self->unk_50[3].unk_50[4] = 0x800;
        *(u32 *)&self->unk_50[4].unk_50[0] = 0x14c00;
        self->unk_50[4].unk_50[1] = 0x700;
        self->unk_50[4].unk_50[2] = 0x14a00;
        self->unk_50[4].unk_50[3] = 0x700;
        self->unk_50[4].unk_50[4] = 0x700;
        sAquariumObstacleCount = 5;
        MuseumAquarium_CreateFreshwaterFish(self);
        TouchPicker_addBox(Scene_GetTouchPicker(), (u8 *)self + 0x2a8, &sAquariumTankCenterA, 0x11c00, 0x5c00, 0x3800, 0, 0x13, 0);
        TouchPicker_addBox(Scene_GetTouchPicker(), (u8 *)self + 0x550, &sAquariumTankCenterB, 0x11c00, 0x5c00, 0x3800, 0, 0x13, 1);
    } else {
        self->unk_50[0].unk_50[0] = 0x8b00;
        self->unk_50[0].unk_50[1] = 0xfffff300;
        self->unk_50[0].unk_50[2] = 0x13e00;
        self->unk_50[0].unk_50[3] = 0x800;
        self->unk_50[0].unk_50[4] = 0x1200;
        self->unk_50[1].unk_50[0] = 0x9e00;
        self->unk_50[1].unk_50[1] = 0xfffff300;
        self->unk_50[1].unk_50[2] = 0x14700;
        self->unk_50[1].unk_50[3] = 0x1100;
        self->unk_50[1].unk_50[4] = 0x1500;
        self->unk_50[2].unk_50[0] = 0x12f00;
        self->unk_50[2].unk_50[1] = 0xfffff300;
        self->unk_50[2].unk_50[2] = 0x13d00;
        self->unk_50[2].unk_50[3] = 0xa00;
        self->unk_50[2].unk_50[4] = 0xd00;
        self->unk_50[3].unk_50[0] = 0x16e00;
        self->unk_50[3].unk_50[1] = 0xfffff300;
        self->unk_50[3].unk_50[2] = 0x13100;
        self->unk_50[3].unk_50[3] = 0x1200;
        self->unk_50[3].unk_50[4] = 0x1400;
        sAquariumObstacleCount = 4;
        self->unk_294[0] = 0x9e00;
        self->unk_294[1] = 0xfffff300;
        self->unk_294[2] = 0x14700;
        self->unk_294[3] = 0xc00;
        self->unk_294[4] = 0x2000;
        MuseumAquarium_CreateSeaFish(self);
        TouchPicker_addBox(Scene_GetTouchPicker(), (u8 *)self + 0x2a8, &sAquariumTankCenterA, 0x26000, 0x4dc3, 0x3800, 0, 0x13, 0);
    }
    func_02004008(0x4da);
    return TRUE;
}

extern "C" BOOL MuseumAquarium_CreateFreshwaterFish(Mgr *self)
{
    s32 i = 0;
    sAquariumFirstFish = 0;
    sAquariumEndFish = 0x23;
    sAquariumTankCenterA.x = 0x11000;
    sAquariumTankCenterA.y = 0;
    sAquariumTankCenterA.z = 0x15000;
    void *heap = gCurrentHeap;
    R **tbl = sAquariumFish;
    for (; i < sAquariumEndFish; i++) {
        R **p;
        switch (i) {
        case 11:
            p = &tbl[i];
            tbl[i] = (R *)Heap_Alloc(heap, 0x214);
            if (tbl[i]) func_02232bb0(tbl[i]);
            break;
        case 15:
            p = &tbl[i];
            tbl[i] = (R *)Heap_Alloc(heap, 0x210);
            if (tbl[i]) func_02232b54(tbl[i]);
            break;
        case 12:
            p = &tbl[i];
            tbl[i] = (R *)Heap_Alloc(heap, 0x27c);
            if (tbl[i]) func_02232864(tbl[i]);
            break;
        case 10:
            p = &tbl[i];
            tbl[i] = (R *)Heap_Alloc(heap, 0x220);
            if (tbl[i]) func_02232a08(tbl[i]);
            break;
        case 0x1e:
            p = &tbl[i];
            tbl[i] = (R *)Heap_Alloc(heap, 0x25c);
            if (tbl[i]) func_02232930(tbl[i]);
            break;
        case 5:
        case 6:
            p = &tbl[i];
            tbl[i] = (R *)Heap_Alloc(heap, 0x25c);
            if (tbl[i]) func_022328b4(tbl[i]);
            break;
        default:
            p = &tbl[i];
            tbl[i] = (R *)Heap_Alloc(heap, 0x258);
            if (tbl[i]) func_02232d8c(tbl[i]);
            break;
        }
        R *e = *p;
        if (e == NULL) return FALSE;
        u32 t = sAquariumFishParams[i].unk_01;
        if (t == 3) e->unk_1c6 = 1;
        if (!MuseumAquarium_LoadFishAnims(self, p, i, t)) {
            MuseumAquarium_ReleaseFish(self, i);
            (*p)->unk_1c6 = 0;
            return FALSE;
        }
    }
    MuseumAquarium_PlaceFreshwaterFish(self);
    return TRUE;
}

extern "C" s32 MuseumAquarium_CreateSeaFish(Mgr *o) {
    s32 i = 0x23;
    R **p;
    void *heap;
    sAquariumFirstFish = 0x23;
    sAquariumEndFish = 0x38;
    sAquariumTankCenterA.x = 0x11000;
    sAquariumTankCenterA.y = 0;
    sAquariumTankCenterA.z = 0x136e1;
    heap = gCurrentHeap;
    for (; i < sAquariumEndFish; i++) {
        switch (i - 0x23) {
        case 1: {
            u32 off = i << 2;
            p = &sAquariumFish[i];
            *(R **)((u8 *)sAquariumFish + off) = (R *)Heap_Alloc(heap, 0x28c);
            if (*(R **)((u8 *)sAquariumFish + off)) func_ov004_02232ce4(*(R **)((u8 *)sAquariumFish + off));
            break;
        }
        case 15:
        case 16: {
            u32 off = i << 2;
            p = &sAquariumFish[i];
            *(R **)((u8 *)sAquariumFish + off) = (R *)Heap_Alloc(heap, 0x258);
            if (*(R **)((u8 *)sAquariumFish + off)) func_ov004_02232c88(*(R **)((u8 *)sAquariumFish + off));
            break;
        }
        case 17:
        case 18:
        case 19: {
            u32 off = i << 2;
            p = &sAquariumFish[i];
            *(R **)((u8 *)sAquariumFish + off) = (R *)Heap_Alloc(heap, 0x258);
            if (*(R **)((u8 *)sAquariumFish + off)) func_ov004_02232c24(*(R **)((u8 *)sAquariumFish + off));
            break;
        }
        case 0: {
            u32 off = i << 2;
            p = &sAquariumFish[i];
            *(R **)((u8 *)sAquariumFish + off) = (R *)Heap_Alloc(heap, 0x278);
            if (*(R **)((u8 *)sAquariumFish + off)) func_ov004_02232adc(*(R **)((u8 *)sAquariumFish + off));
            break;
        }
        case 2: {
            u32 off = i << 2;
            p = &sAquariumFish[i];
            *(R **)((u8 *)sAquariumFish + off) = (R *)Heap_Alloc(heap, 0x26c);
            if (*(R **)((u8 *)sAquariumFish + off)) func_ov004_02232a64(*(R **)((u8 *)sAquariumFish + off));
            break;
        }
        case 5: {
            u32 off = i << 2;
            p = &sAquariumFish[i];
            *(R **)((u8 *)sAquariumFish + off) = (R *)Heap_Alloc(heap, 0x25c);
            if (*(R **)((u8 *)sAquariumFish + off)) func_ov004_0223299c(*(R **)((u8 *)sAquariumFish + off));
            break;
        }
        case 3: {
            u32 off = i << 2;
            p = &sAquariumFish[i];
            *(R **)((u8 *)sAquariumFish + off) = (R *)Heap_Alloc(heap, 0x27c);
            if (*(R **)((u8 *)sAquariumFish + off)) func_ov004_02232864(*(R **)((u8 *)sAquariumFish + off));
            break;
        }
        case 12: {
            u32 off = i << 2;
            p = &sAquariumFish[i];
            *(R **)((u8 *)sAquariumFish + off) = (R *)Heap_Alloc(heap, 0x258);
            if (*(R **)((u8 *)sAquariumFish + off)) func_ov004_02232808(*(R **)((u8 *)sAquariumFish + off));
            break;
        }
        case 13: {
            u32 off = i << 2;
            p = &sAquariumFish[i];
            *(R **)((u8 *)sAquariumFish + off) = (R *)Heap_Alloc(heap, 0x1fc);
            if (*(R **)((u8 *)sAquariumFish + off)) func_ov004_022327b8(*(R **)((u8 *)sAquariumFish + off));
            break;
        }
        case 4: case 6: case 7: case 8: case 9: case 10: case 11: case 14:
        default: {
            u32 off = i << 2;
            p = &sAquariumFish[i];
            *(R **)((u8 *)sAquariumFish + off) = (R *)Heap_Alloc(heap, 0x258);
            if (*(R **)((u8 *)sAquariumFish + off)) func_ov004_02232d8c(*(R **)((u8 *)sAquariumFish + off));
            break;
        }
        }
        if (*p == 0) {
            return 0;
        }
        if (sAquariumFishParams[i].unk_01 == 3) {
            (*p)->unk_1c6 = 1;
        }
        if (!MuseumAquarium_LoadFishAnims(o, p, i, sAquariumFishParams[i].unk_01)) {
            MuseumAquarium_ReleaseFish(o, i);
            (*p)->unk_1c6 = 0;
            return 0;
        }
    }
    MuseumAquarium_PlaceSeaFish(o);
    return TRUE;
}

extern "C" s32 MuseumAquarium_LoadFishAnims(Mgr *o, R **p, s32 idx, s32 n) {
    s32 k = idx / 10 + 10;
    s32 i = 0;
    s32 z = 0;
    char buf[0x1c];
    for (; i < n; i++) {
        if (idx < 10) {
            func_020639e8(buf, "/fish/%d/m_fish0%d%d.nsbca", k, idx, i);
        } else {
            func_020639e8(buf, "/fish/%d/m_fish%d%d.nsbca", k, idx, i);
        }
        (*p)->unk_54[i] = File_LoadAlloc(buf, (s32)gCurrentHeap, 4, z);
        if ((*p)->unk_54[i] == 0) {
            return 0;
        }
    }
    return 1;
}

extern "C" void MuseumAquarium_UpdateFish(Mgr *o, R **p, s32 i) {
    R *e = *p;
    u32 k = (u8)e->unk_160;
    if (k < 3) {
        (o->*sAquariumFishLoadStates[k])(p, i);
    }
}

extern "C" void MuseumAquarium_FishStateNone() {
}

extern "C" s32 MuseumAquarium_FishStateLoad(Mgr *o, R **p, s32 i) {
    return MuseumAquarium_LoadFishModel(o, p, i);
}

extern "C" void MuseumAquarium_FishStateActive(Mgr *o, R **p, s32 x) {
    V3 *v = &(*p)->unk_1a8;
    if (sAquariumRoom == 0) {
        s32 a = func_01ffcb0c((*p)->unk_14, 0x99a);
        s32 b = func_01ffcb0c((*p)->unk_1c, 0x99a);
        if ((*p)->unk_40 != 0) {
            s32 lv = (*p)->unk_13;
            if (lv >= 0x38) {
                a = Unk_ov004_0222d460_Clamp(a);
                b = Unk_ov004_0222d460_Clamp(b);
            }
            v->x = v->x + a;
            v->z = v->z + b;
        }
    } else if (sAquariumRoom == 1) {
        s32 a = func_01ffcb0c((*p)->unk_14, 0x866);
        s32 b = func_01ffcb0c((*p)->unk_1c, 0x866);
        if ((*p)->unk_40 != 0) {
            v->x = v->x + a;
            v->z = v->z + b;
        }
    }
    (*p)->vfunc_04();
    AquariumFish_ResetContacts(*p);
    MuseumAquarium_ConfineFish(o, p, x);
    MuseumAquarium_CalcFishMtx(o, p);
    BlendAnimModel_stepBlend((u8 *)(*p) + 0x64);
}

extern "C" s32 _ZN14MuseumAquarium9onExecuteEv(Mgr *o) {
    s32 i;
    R **p;
    if (sAquariumRoom == 0) {
        TouchPicker_pushBox(Scene_GetTouchPicker(), (u8 *)o + 0x2a8);
        TouchPicker_pushBox(Scene_GetTouchPicker(), (u8 *)o + 0x550);
    } else if (sAquariumRoom == 1) {
        TouchPicker_pushBox(Scene_GetTouchPicker(), (u8 *)o + 0x2a8);
    }
    i = sAquariumEndFish - 1;
    p = &sAquariumFish[i];
    for (; i >= sAquariumFirstFish; p--, i--) {
        if (*p) {
            MuseumAquarium_UpdateFish((Mgr *)o, p, i);
        }
    }
    MuseumAquarium_UpdateObstacles(o, sAquariumObstacleCount);
    return TRUE;
}

extern "C" void MuseumAquarium_UpdateObstacles(Mgr *o, s32 n) {
    s32 i;
    u32 z = 0;
    for (i = 0; i < n; i++) {
        s32 off = i * 0x64;
        u8 *s = (u8 *)o + off;
        void *obj = (u8 *)o + 0x50 + off;
        func_02088c64(obj, (u8 *)o + 0xa0 + off, *(s32 *)(s + 0xac), *(s32 *)(s + 0xb0), 0x102, 0x140, z, 0xff, 0x1000);
        func_02089040(obj);
    }
    if (sAquariumRoom == 1) {
        func_02088c64((u8 *)o + 0x244, (u8 *)o + 0x294, *(s32 *)((u8 *)o + 0x2a0), *(s32 *)((u8 *)o + 0x2a4), 0x202, 0x140, 0, 0xff, 0x1000);
        func_02089040((u8 *)o + 0x244);
    }
}

extern "C" s32 MuseumAquarium_LoadFishModel(Mgr *o, R **p, s32 idx) {
    s32 res = 0;
    s32 n = (*p)->unk_15c;
    s32 a = ModelSlotPool_acquire((u8 *)o + 0x7f8, (*p)->unk_166);
    void *b = (*p)->unk_168;
    char buf[0x18];
    s32 k = n / 10 + 10;
    if (n < 10) {
        func_020639e8(buf, "/fish/%d/m_fish0%d.nsbmd", k, n);
    } else {
        func_020639e8(buf, "/fish/%d/m_fish%d.nsbmd", k, n);
    }
    if (PooledModel_loadFromSlot(b, a, buf)) {
        void *q;
        s32 c, d;
        (*p)->unk_1c0 = Aquarium_RandAngle(0x168, 0);
        (*p)->unk_1c2 = (*p)->unk_1c0;
        (*p)->vfunc_00();
        q = (u8 *)(*p) + 0x64;
        Model_setResource(q, PooledModel_getModel(b), 0);
        c = ModelSlot_getHeap(a);
        if ((*p)->unk_54[0] == 0) {
            MuseumAquarium_ReleaseFish(o, idx);
            return 0;
        }
        d = func_021065f8(func_021065dc((*p)->unk_54[0]), 0);
        if (AnimModel_allocAnmObj(q, c)) {
            BlendAnimModel_initAnim(q, d, 0, 0x1000, 1, 0);
            AnimModel_attachAnim(q);
            CachedModel_allocJointRecord(q, ModelSlot_getHeap(a));
            (*p)->unk_160 = 2;
            (*p)->unk_1e8 = (*p)->unk_15c;
            MuseumAquarium_CalcFishMtx(o, p);
            res = 1;
        }
    }
    return res;
}

extern "C" void MuseumAquarium_CalcFishMtx(Mgr *o, R **p) {
    R *e = *p;
    V3 *v = &e->unk_1a8;
    func_020e8388(&data_021f47e0, v->x, v->y, v->z);
    func_020e8404(&data_021f47e0, (*p)->unk_1c0);
    func_020e8434(&data_021f47e0, (*p)->unk_1c4);
    e->unk_c8 = data_021f47e0;
}

extern "C" s32 _ZN14MuseumAquarium6onDrawEv(Mgr *o) {
    s32 i = sAquariumFirstFish;
    R **p = &sAquariumFish[i];
    for (; i < sAquariumEndFish; p++, i++) {
        if (*p) {
            if ((*p)->unk_160 == 2) {
                V3 v;
                switch ((*p)->unk_15c) {
                case 0xb:
                    v.x = 0x1000;
                    v.y = 0x1000;
                    v.z = 0x1000;
                    MuseumAquarium_CalcFishMtx(o, p);
                    break;
                case 0x24:
                    if (sAquariumJellyfish) {
                        V3 *q = (V3 *)((u8 *)sAquariumJellyfish + 0x258);
                        v.x = q->x;
                        v.y = q->y;
                        v.z = q->z;
                    } else {
                        v.x = 0x1000;
                        v.y = 0x1000;
                        v.z = 0x1000;
                    }
                    break;
                default:
                    v.x = 0x1000;
                    v.y = 0x1000;
                    v.z = 0x1000;
                    break;
                }
                AnimModel_drawAnimated((u8 *)(*p) + 0x64, &v);
            }
        }
    }
    return TRUE;
}

extern "C" s32 _ZN14MuseumAquarium8vfunc_0cEv(Mgr *o) {
    s32 i = sAquariumFirstFish;
    R **p;
    for (; i < sAquariumEndFish; i++) {
        p = &sAquariumFish[i];
        if (sAquariumFish[i]) {
            MuseumAquarium_ReleaseFish(o, i);
            Heap_Free(gCurrentHeap, *p);
            *p = 0;
        }
    }
    ModelSlotPool_destroy((u8 *)o + 0x7f8);
    Snd_StopSe(0x4da, 1);
    return TRUE;
}

extern "C" void MuseumAquarium_PlaceFreshwaterFish(Mgr *o) {
    s32 i = sAquariumFirstFish;
    R **p = &sAquariumFish[i];
    u16 id = 0xfff1;
    for (; i < sAquariumEndFish; p++, i++) {
        V3 *v;
        id = (u32)i < 0x38 ? (u16)(i + 0x12e8) : 0x12e8;
        if (MuseumData_isDonated(data_021ed0a0, &id)) {
            v = &(*p)->unk_1a8;
            if (i >= 0x11) {
                if (i != 0x19) {
                    v->x = Aquarium_RandFx(9, 0x1a);
                    v->z = Aquarium_RandFx(5, 0xa);
                } else {
                    v->x = Aquarium_RandFx(9, 0x1a);
                    v->z = Aquarium_RandFx(0x13, 0x18);
                }
            } else {
                switch (i) {
                case 0xa:
                    v->z = 0x14a00;
                    v->x = 0xc800;
                    break;
                case 0xc:
                    v->z = 0x13900;
                    v->x = 0x15900;
                    break;
                default:
                    v->x = Aquarium_RandFx(9, 0x1a);
                    v->z = Aquarium_RandFx(0x13, 0x18);
                    break;
                }
            }
            v->y = ((sAquariumFishParams[i].unk_04 << 12) >> 6) - 0x1000;
            {
                R *e = *p;
                V3 *d = &e->unk_1b4;
                e->unk_1b4.x = v->x;
                d->y = v->y;
                d->z = v->z;
            }
            (*p)->unk_164 = sAquariumFishParams[i].unk_00;
            MuseumAquarium_RequestFishModel(o, i);
        }
    }
}

extern "C" void MuseumAquarium_PlaceSeaFish(Mgr *self) {
    s32 i = sAquariumFirstFish;
    R **pp = &sAquariumFish[i];
    volatile u16 v = 0xfff1;
    for (; i < sAquariumEndFish; pp++, i++) {
        u16 w;
        if ((u32)i < 0x38) {
            w = (u16)(i + 0x12e8);
        } else {
            w = 0x12e8;
        }
        v = w;
        if (MuseumData_isDonated(data_021ed0a0, (u16 *)&v)) {
            s32 *e = (s32 *)((u8 *)*pp + 0x1a8);
            switch (i) {
            case 0x34:
            case 0x35:
            case 0x36:
                e[2] = 0x12000;
                if ((u32)(i - 0x35) <= 1) {
                    e[0] = Aquarium_RandFx(5, 0x1e);
                } else if (i == 0x34) {
                    e[0] = Aquarium_RandFx(5, 0x1e);
                }
                break;
            case 0x26:
                e[2] = 0x14700;
                e[0] = 0x9e00;
                break;
            case 0x23:
                e[2] = 0x14a00;
                e[0] = 0x6000;
                break;
            case 0x25:
                e[2] = 0x14a00;
                e[0] = 0x7000;
                break;
            default:
                e[2] = Aquarium_RandFx(0x12, 0x16);
                e[0] = Aquarium_RandFx(5, 0x1e);
                break;
            }
            e[1] = ((sAquariumFishParams[i].unk_04 << 12) >> 6) - 0x1000;
            s32 *d = (s32 *)((u8 *)*pp + 0x1b4);
            d[0] = e[0];
            d[1] = e[1];
            d[2] = e[2];
            *((u8 *)*pp + 0x164) = sAquariumFishParams[i].unk_00;
            MuseumAquarium_RequestFishModel(self, i);
        }
    }
}

extern "C" void MuseumAquarium_ConfineFish(void *self, R **ctx, s32 type) {
    R *o;
    R *o1;
    R *o2;
    R *o3;
    s32 w, len, base;
    V3 *v;
    V3 *e;
    s32 bx0, bz0, bx1, bz1, ax0, az0, ax1, az1;
    o1 = (*ctx);
    v = &o1->unk_1a8;
    V3 *q;
    V3 *ep;
    s32 off;
    s32 c164 = o1->unk_164;
    w = (sAquariumFishParams[type].unk_03 << 12) >> 7;
    if (o1->unk_1c7 == 0) {
        return;
    }
    s32 h = (sAquariumFishParams[type].unk_02 << 12) >> 7;
    if (sAquariumRoom == 0) {
        func_02088c64(&o1->unk_04, v, w, h, 0x100, 0x140, 0x14, type, (c164 << 12) >> 3);
    } else if (sAquariumRoom == 1) {
        if (type == 0x24) {
            u8 *g = (u8 *)sAquariumJellyfish;
            if (g != NULL) {
                func_02088c64(&o1->unk_04, g + 0x26c, w, h, 0x100, 0x340, 0x14, type, (c164 << 12) >> 3);
            }
        } else if (type == 0x23) {
            u8 *g = (u8 *)sAquariumSeaButterfly;
            if (g != NULL) {
                func_02088c64(&o1->unk_04, g + 0x264, w, h, 0x100, 0x340, 0x14, type, (c164 << 12) >> 3);
            }
        } else if (type == 0x26) {
            func_02088c64(&o1->unk_04, v, w, h, 0x100, 0x140, 0x14, type, (c164 << 12) >> 3);
        } else {
            func_02088c64(&o1->unk_04, v, w, h, 0x100, 0x340, 0x14, type, (c164 << 12) >> 3);
        }
    }
    func_02089040(&(*ctx)->unk_04);
    len = (sAquariumFishParams[type].unk_10 << 12) >> 7;
    base = w - (len >> 1);
    s32 k;
    k = 0;
loop0:
    {
        o2 = (*ctx);
        q = &o2->unk_1a8;
        off = k * 12;
        V3 *arr = o2->unk_1d0;
        ep = (V3 *)((u8 *)arr + off);
        *(s32 *)((u8 *)arr + off) = o2->unk_1a8.x;
        ep->y = q->y;
        ep->z = q->z;
        if (k == 0) {
            o1 = (*ctx);
            *(s32 *)((u8 *)o1->unk_1d0 + off) += func_01ffcb0c(base, data_02135f44[(o1->unk_1c0u >> 4) * 2]);
            o2 = (*ctx);
            ((V3 *)((u8 *)o2->unk_1d0 + off))->z += func_01ffcb0c(base, data_02135f44[(o2->unk_1c0u >> 4) * 2 + 1]);
            o3 = (*ctx);
            ep = (V3 *)((u8 *)o3->unk_1d0 + off);
            bx0 = *(s32 *)((u8 *)o3->unk_1d0 + off);
            bz0 = ep->z;
            o = o3;
        } else {
            s32 t;
            o3 = (*ctx);
            t = (u16)(s16)((s16)o3->unk_1c0 + 0x8000);
            t = (t >> 4) * 2;
            *(s32 *)((u8 *)o3->unk_1d0 + off) += func_01ffcb0c(base, data_02135f44[t]);
            e = (V3 *)((u8 *)(*ctx)->unk_1d0 + off);
            e->z += func_01ffcb0c(base, data_02135f44[t + 1]);
            o = (*ctx);
            ep = (V3 *)((u8 *)o->unk_1d0 + off);
            bx1 = *(s32 *)((u8 *)o->unk_1d0 + off);
            bz1 = ep->z;
        }
        if (sAquariumRoom == 0) {
            if (type < 0x11) {
                Collision_ClampToRect(ep, len, &sAquariumTankCenterA, 0x11c00, 0x5c00);
            } else if (type != 0x19) {
                Collision_ClampToRect(ep, len, &sAquariumTankCenterB, 0x11c00, 0x5c00);
            } else {
                Collision_ClampToRect(ep, len, &sAquariumTankCenterA, 0x11c00, 0x5c00);
            }
        } else {
            switch (o->unk_1c8) {
            case 0:
                if (Collision_ClampToRect(ep, len, &sAquariumTankCenterA, 0x1a000, 0x4dc3)) {
                    (*ctx)->unk_1f0 = 1;
                }
                break;
            case 1:
                if (Collision_ClampToRect(ep, len, &sAquariumTankCenterA, 0x26000, 0x4dc3)) {
                    (*ctx)->unk_1f0 = 1;
                }
                break;
            case 2:
                if (Collision_ClampToRect(ep, len, &sAquariumTankCenterA, 0x2a000, 0x4dc3)) {
                    (*ctx)->unk_1f0 = 1;
                }
                break;
            }
        }
        if (k == 0) {
            o = (*ctx);
            ep = (V3 *)((u8 *)o->unk_1d0 + off);
            ax0 = *(s32 *)((u8 *)o->unk_1d0 + off);
            az0 = ep->z;
        } else {
            o = (*ctx);
            ep = (V3 *)((u8 *)o->unk_1d0 + off);
            ax1 = *(s32 *)((u8 *)o->unk_1d0 + off);
            az1 = ep->z;
        }
    }
    k++;
    if (k < 2) goto loop0;
    Aquarium_ApplyCorrection(self, &o->unk_1a8.x, bx0, ax0, bx1, ax1);
    Aquarium_ApplyCorrection(self, &(*ctx)->unk_1a8.z, bz0, az0, bz1, az1);
    V3 *dst = &(*ctx)->unk_1b4;
    dst->x = v->x;
    dst->y = v->y;
    dst->z = v->z;
}

extern "C" void Aquarium_ApplyCorrection(void *self, s32 *p, s32 a, s32 b, s32 c, s32 d) {
    s32 dx = b - a;
    s32 dy = d - c;
    s32 ax = dx < 0 ? -dx : dx;
    s32 ay = dy < 0 ? -dy : dy;
    if (ax >= ay) {
        *p += dx;
    } else {
        *p += dy;
    }
}

Unk_ov004_0222c9d0::Unk_ov004_0222c9d0() : unk_10(0), unk_14(0) {
    func_020f440c(unk_4c);
}

Unk_ov004_0222c9d0::~Unk_ov004_0222c9d0() {
    func_020f43fc(unk_4c);
}

extern "C" {
void *data_ov004_0224e6d8[2] = {(void *)AquariumFish_StateCruise, 0};
PairFn sAquariumSwimFishRoomFns[2] = {{*(Fn *)data_ov004_0224e610, *(Fn *)data_ov004_0224e618}, {*(Fn *)data_ov004_0224e600, *(Fn *)data_ov004_0224e688}};
void *data_ov004_0224e618[2] = {(void *)AquariumSwimFish_UpdateFreshwater, 0};
void *data_ov004_0224e688[2] = {(void *)AquariumSwimFish_UpdateSea, 0};
void *data_ov004_0224e620[2] = {(void *)AquariumFish_StateNone, 0};
void *data_ov004_0224e628[2] = {(void *)AquariumFish_StateDecelerate, 0};
void *data_ov004_0224e648[2] = {(void *)AquariumFish_StateFlee, 0};
Fn sAquariumSwimStates[7] = {*(Fn *)data_ov004_0224e620, *(Fn *)data_ov004_0224e648, *(Fn *)data_ov004_0224e6d0, *(Fn *)data_ov004_0224e630, *(Fn *)data_ov004_0224e6d8, *(Fn *)data_ov004_0224e628, *(Fn *)data_ov004_0224e660};
void *data_ov004_0224e630[2] = {(void *)AquariumFish_StateAccelerate, 0};
R *sAquariumFish[0x38];
void *data_ov004_0224e640[2] = {(void *)MuseumAquarium_FishStateLoad, 0};
void *data_ov004_0224e650[2] = {(void *)AquariumPiranha_StateBite, 0};
void *data_ov004_0224e658[2] = {(void *)AquariumPiranha_StateApproach, 0};
void *data_ov004_0224e6c8[2] = {(void *)AquariumFish_StateNone, 0};
Unk_ov004_SceneEntry sMuseumAquariumProfile = {(void *)MuseumAquarium_Create, 0xc3, 0xc4};
void *data_ov004_0224e6b8[2] = {(void *)AquariumFish_StateStartFast, 0};
E834 *sAquariumFrog;
void *data_ov004_0224e690[2] = {(void *)AquariumFish_StateFlee, 0};
void *data_ov004_0224e6b0[2] = {(void *)AquariumEel_StateStart, 0};
void *data_ov004_0224e6a8[2] = {(void *)AquariumFish_StateCruise, 0};
Fn sAquariumFastSwimStates[6] = {*(Fn *)data_ov004_0224e6c8, *(Fn *)data_ov004_0224e690, *(Fn *)data_ov004_0224e6b8, *(Fn *)data_ov004_0224e698, *(Fn *)data_ov004_0224e6a8, *(Fn *)data_ov004_0224e680};
void *data_ov004_0224e698[2] = {(void *)AquariumFish_StateAccelerate, 0};
void *data_ov004_0224e608[2] = {(void *)AquariumEel_StateHold, 0};
void *data_ov004_0224e678[2] = {(void *)AquariumEel_StateSlowDown, 0};
E7bc *sAquariumSeaButterfly;
u8 sAquariumFirstFish;
void *data_ov004_0224e660[2] = {(void *)AquariumFish_StateRest, 0};
u8 sAquariumRoom;
E7d4 *sAquariumJellyfish;
Fn804 sAquariumEelStates[5] = {*(Fn804 *)data_ov004_0224e6b0, *(Fn804 *)data_ov004_0224e6a0, *(Fn804 *)data_ov004_0224e608, *(Fn804 *)data_ov004_0224e678, *(Fn804 *)data_ov004_0224e5f8};
u8 sAquariumEndFish = 0x23;
Fn sAquariumPiranhaStates[3] = {*(Fn *)data_ov004_0224e668, *(Fn *)data_ov004_0224e658, *(Fn *)data_ov004_0224e650};
u8 sAquariumObstacleCount = 0x05;
MgrFn sAquariumFishLoadStates[3] = {*(MgrFn *)data_ov004_0224e638, *(MgrFn *)data_ov004_0224e640, *(MgrFn *)data_ov004_0224e670};
}

