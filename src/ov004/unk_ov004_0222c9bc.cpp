// mwcc-version: 1.2/base
// ov004 TU31: 0x0222c9bc-0x02233074 (.text), see notes.txt
#include "types.h"
#include "Unk_020d8c7c.h"
#include "room/Unk_ov004_0222c9d0.h"
#include "actor/ActorCollider.h"
#include "snd/SndEnvChannel.h"
#include "game/FxVec3.h"
#include "gfx/VecFx32.h"
#include "gfx/V3.h"
#include "snd/Unk_0213b954.h"
#include "actor/StaticCollider.h"
#include "sys/ProcProfile.h"

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
#define StaticCollider_setupAtPos _ZN14StaticCollider10setupAtPosEP4Vec3iijjjhi
#define ActorCollider_submit _ZN13ActorCollider6submitEv
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
    u8 rank;
    u8 numAnims;
    u8 hitHeight;
    u8 hitRadius;
    u8 baseY;
    u8 accel;
    u8 decel;
    u8 maxSpeed;
    u8 cruiseTimeMax;
    u8 cruiseTimeMin;
    u8 restTimeMax;
    u8 restTimeMin;
    u8 turnRange;
    u8 verticalSpeed;
    u8 maxY;
    u8 minY;
    u8 unk_10;
};


// ---- library sub-object with two inline vtable stores (0x0213b91c, 0x0213b954)


// ---- collision sub-object chain (main: ActorCollider <- StaticCollider), derived class in this overlay


class AquariumFish;

// ---------------------------------------------------------------------------------------------------------------
// The "Ent" family: state actors. Root = vtable 0x0224e774 (0x1fc bytes of common state).
class AquariumFish {
public:
    AquariumFish();
    virtual void setup();
    virtual void update();
    virtual ~AquariumFish();

    /* 0x004 */ u8 unk_04[0x13 - 4];
    /* 0x013 */ u8 hitOtherId;
    /* 0x014 */ s32 hitPushX;
    /* 0x018 */ u8 pad_18[4];
    /* 0x01c */ s32 hitPushZ;
    /* 0x020 */ u8 pad_20[0x40 - 0x20];
    /* 0x040 */ u8 isHit;
    /* 0x041 */ u8 pad_41[0x50 - 0x41];
    /* 0x050 */ AquariumFish *hitBoxOwner;
    /* 0x054 */ u32 animFiles[4];
    /* 0x064 */ u8 model[0xc8 - 0x64];
    /* 0x0c8 */ Mtx modelMtx;
    /* 0x0f8 */ u8 pad_f8[0x100 - 0xf8];
    /* 0x100 */ u32 animFrameCtrl;
    /* 0x104 */ Bits animNumFrames;
    /* 0x108 */ s32 animFrame;
    /* 0x10c */ u8 pad_10c[4];
    /* 0x110 */ s32 animFrameStep;
    /* 0x114 */ u8 pad_114[0x158 - 0x114];
    /* 0x158 */ s32 stateTimer;
    /* 0x15c */ s32 fishIndex;
    /* 0x160 */ s32 loadState;
    /* 0x164 */ u8 rank;
    /* 0x165 */ u8 pad_165;
    /* 0x166 */ u8 modelSlot[2];
    /* 0x168 */ u8 pooledModel[0x1a8 - 0x168];
    /* 0x1a8 */ V3 pos;
    /* 0x1b4 */ V3 prevPos;
    union {
        /* 0x1c0 */ s16 unk_1c0;
        u16 unk_1c0u;
    };
    /* 0x1c2 */ s16 targetAngle;
    /* 0x1c4 */ s16 pitch;
    /* 0x1c6 */ u8 hasTurnAnims;
    /* 0x1c7 */ u8 hasCollision;
    /* 0x1c8 */ u8 tankArea;
    /* 0x1c9 */ u8 isAvoiding;
    /* 0x1ca */ s8 verticalDir;
    /* 0x1cb */ u8 pad_1cb;
    /* 0x1cc */ s32 maxY;
    /* 0x1d0 */ V3 bodyEnds[2];
    /* 0x1e8 */ u8 contactFish;
    /* 0x1e9 */ u8 avoidedFish;
    /* 0x1ea */ u8 contactFlags;
    /* 0x1eb */ u8 turnRetryCount;
    /* 0x1ec */ s16 avoidAngle;
    /* 0x1ee */ u8 state;
    /* 0x1ef */ u8 unk_1ef;
    /* 0x1f0 */ u8 hitTankWall;
    /* 0x1f1 */ u8 contactCount;
    /* 0x1f2 */ u8 pad_1f2[2];
    /* 0x1f4 */ u32 contactMask[2];
};

// vtable 0x0224e864: common base of most state actors (0x258 bytes)
class AquariumSwimFish : public AquariumFish {
public:
    AquariumSwimFish();
    virtual ~AquariumSwimFish();
    virtual void setup();
    virtual void update();

    /* 0x1fc */ u8 isWallTurning;
    /* 0x1fd */ u8 wallTurnState;
    /* 0x1fe */ s8 turnDir;
    /* 0x1ff */ u8 pad_1ff;
    /* 0x200 */ s16 turnStep;
    /* 0x202 */ u8 cruiseTime;
    /* 0x203 */ u8 restTime;
    /* 0x204 */ u8 cruiseTimeMax;
    /* 0x205 */ u8 cruiseTimeMin;
    /* 0x206 */ u8 restTimeMax;
    /* 0x207 */ u8 restTimeMin;
    /* 0x208 */ u8 pad_208[4];
    /* 0x20c */ s32 speed;
    /* 0x210 */ s32 maxSpeed;
    /* 0x214 */ s32 accel;
    /* 0x218 */ s32 decel;
    /* 0x21c */ s32 bobTimer;
    /* 0x220 */ u16 unk_220;
    /* 0x222 */ u8 pad_222[2];
    /* 0x224 */ s32 verticalSpeed;
    /* 0x228 */ s32 minY;
    /* 0x22c */ u8 pad_22c[2];
    /* 0x22e */ u8 isTurnAnimPlaying;
    /* 0x22f */ u8 isTurningToTarget;
    /* 0x230 */ u16 turnRange;
    /* 0x232 */ u8 pad_232[0x238 - 0x232];
    /* 0x238 */ u8 unk_238;
    /* 0x239 */ u8 pad_239[3];
    /* 0x23c */ s32 pitchTimer;
    /* 0x240 */ u8 pad_240[0x24c - 0x240];
    /* 0x24c */ s16 fleeAngle;
    /* 0x24e */ u8 isLeveling;
    /* 0x24f */ u8 pad_24f;
    /* 0x250 */ s16 turnAngleTotal;
    /* 0x252 */ u8 lastContactFish;
    /* 0x253 */ u8 isTouchFleeing;
    /* 0x254 */ u8 contactTimer;
    /* 0x255 */ u8 subState;
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
    virtual void setup();
    virtual void update();
};

class AquariumCrawfish : public AquariumFish {
public:
    AquariumCrawfish();
    virtual ~AquariumCrawfish();
    virtual void setup();
    virtual void update();
    /* 0x1fc */ s32 homeX;
    /* 0x200 */ s32 homeY;
    /* 0x204 */ s32 homeZ;
    /* 0x208 */ s16 wobbleAngle;
    /* 0x20a */ u8 pad_20a[2];
    /* 0x20c */ s32 walkSpeed;
    union {
        /* 0x210 */ s32 unk_210;
        u8 unk_210b;
    };
    /* 0x214 */ u8 pad_214[4];
    /* 0x218 */ s32 walkAnimSpeed;
    /* 0x21c */ u8 walkState;
    /* 0x21d */ u8 pad_21d[3];
};

class AquariumSeaButterfly : public AquariumSwimFish {
public:
    AquariumSeaButterfly();
    virtual ~AquariumSeaButterfly();
    virtual void setup();
    virtual void update();
    /* 0x258 */ s32 homePos[3];
    /* 0x264 */ V3 hitCenter;
    /* 0x270 */ u8 swayUp;
    /* 0x271 */ u8 pad_271[3];
    /* 0x274 */ s32 swayCounter;
};

// vtable 0x0224e6e8: 0x50-byte collision sub-object of every actor
class AquariumFishHitBox : public StaticCollider {
public:
    AquariumFishHitBox();
    ~AquariumFishHitBox();
    virtual void onCollide(u32 a, u32 b, u32 c);
    /* 0x4c */ AquariumFish *owner;
};

// vtables 0x0224e714 / 0x0224e75c: 0x25c bytes
class AquariumSurfacingFish : public AquariumSwimFish {
public:
    AquariumSurfacingFish();
    virtual ~AquariumSurfacingFish();
    virtual void setup();
    virtual void update();
    /* 0x258 */ u8 surfaceState;
    /* 0x259 */ u8 hasSurfaced;
};

class AquariumFrog : public AquariumFish {
public:
    AquariumFrog();
    virtual ~AquariumFrog();
    virtual void setup();
    virtual void update();
    /* 0x1fc */ Unk_0213b954 croakSound;
    /* 0x20c */ s32 croakAnimSpeed;
    /* 0x210 */ u8 croakCount;
    /* 0x211 */ u8 croakState;
    /* 0x212 */ u8 pad_212[2];
};

// state actors derived from the root directly
class AquariumOctopus : public AquariumFish {
public:
    AquariumOctopus();
    virtual ~AquariumOctopus();
    virtual void setup();
};

class AquariumSeahorse : public AquariumSwimFish {
public:
    AquariumSeahorse();
    virtual ~AquariumSeahorse();
    virtual void setup();
    virtual void update();
    /* 0x258 */ s32 homePos[3];
    /* 0x264 */ u8 swayUp;
    /* 0x265 */ u8 pad_265[3];
    /* 0x268 */ s32 swayCounter;
};

class AquariumPufferFish : public AquariumSwimFish {
public:
    AquariumPufferFish();
    virtual ~AquariumPufferFish();
    virtual void setup();
    virtual void update();
    /* 0x258 */ u8 puffTimer;
};

class AquariumPiranha : public AquariumSwimFish {
public:
    AquariumPiranha();
    virtual ~AquariumPiranha();
    virtual void setup();
    virtual void update();
    /* 0x258 */ u8 biteTime;
    /* 0x259 */ u8 nearPlayerTimer;
};

class AquariumFastFish : public AquariumSwimFish {
public:
    AquariumFastFish();
    virtual ~AquariumFastFish();
    virtual void setup();
    virtual void update();
};

// element of the 5-entry array in the manager (0x64 bytes)
struct AquariumObstacle {
    AquariumFishHitBox hitBox;
    u32 box[5];
};

// vtable 0x0224e87c: the scene object (0x810 bytes)
class MuseumAquarium : public GameProc {
public:
    MuseumAquarium();
    virtual ~MuseumAquarium();
    virtual BOOL onCreate();
    virtual BOOL onDelete();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    /* 0x050 */ AquariumObstacle obstacles[5];
    /* 0x244 */ AquariumFishHitBox extraHitBox;
    /* 0x294 */ u32 extraBox[5];
    /* 0x2a8 */ u32 touchBoxes[0x550 / 4];
    /* 0x7f8 */ u32 modelPool[6];

    typedef void (MuseumAquarium::*Fn)(AquariumFish **, s32);
};

// vtable 0x0224e6fc: 0x27c bytes
class AquariumHidingFish : public AquariumSwimFish {
public:
    AquariumHidingFish();
    virtual ~AquariumHidingFish();
    virtual void setup();
    virtual void update();
    /* 0x258 */ s32 homePos[3];
    /* 0x264 */ s32 hideoutX;
    /* 0x268 */ s32 hideoutY;
    /* 0x26c */ s32 hideoutZ;
    /* 0x270 */ s32 hideTime;
    /* 0x274 */ u32 roamTime;
    /* 0x278 */ u32 roamTimer;
};

class AquariumSquid : public AquariumSwimFish {
public:
    AquariumSquid();
    virtual ~AquariumSquid();
    virtual void setup();
    virtual void update();
};

class AquariumEel : public AquariumFish {
public:
    AquariumEel();
    virtual ~AquariumEel();
    virtual void setup();
    virtual void update();
    /* 0x1fc */ u8 pad_1fc[4];
    /* 0x200 */ s32 accel;
    union {
        /* 0x204 */ s32 unk_204;
        u8 unk_204b[4];
    };
    /* 0x208 */ s32 maxSpeed;
    /* 0x20c */ u8 holdTime;
    /* 0x20d */ u8 waitTime;
    /* 0x20e */ u8 eelState;
    /* 0x20f */ u8 pad_20f;
};

class AquariumJellyfish : public AquariumSwimFish {
public:
    AquariumJellyfish();
    virtual ~AquariumJellyfish();
    virtual void setup();
    virtual void update();
    /* 0x258 */ s32 scaleX;
    /* 0x25c */ s32 scaleY;
    /* 0x260 */ s32 scaleZ;
    /* 0x264 */ u8 pulseState;
    /* 0x265 */ u8 pad_265[3];
    /* 0x268 */ s32 pulseTimer;
    /* 0x26c */ V3 hitCenter;
    /* 0x278 */ s32 pulseStep;
    /* 0x27c */ s32 pulseMinScale;
    /* 0x280 */ u8 pulseBoostCount;
    /* 0x281 */ u8 driftState;
    /* 0x282 */ u16 driftAngle;
    /* 0x284 */ u8 swayUp;
    /* 0x285 */ u8 pad_285[3];
    /* 0x288 */ s32 swayCounter;
};




















// 0x94-byte element of the TU30 array (its ctor/dtor are referenced by TU30's static initialiser)
struct Unk_020f440c_Obj {
    u8 pad[0x48];
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
    void *ptrUser;
};

struct Unk_ov004_0222ef04_Cb {
    u8 pad_00[4];
    Unk_ov004_0222ef04_Own *pRenderObj;
    u8 pad_08[0x24 - 8];
    void *nodeDescCallback;
    u8 pad_28[0x92 - 0x28];
    u8 nodeDescCallbackTiming;
};

typedef Unk_ov004_0222ef04_Cb Cb;

struct Unk_ov004_0222fd7c_W {
    u8 pad[0x258];
    s32 w[6];
};

struct Unk_ov004_022303b4_P {
    u8 pad_00[0x5c];
    V3 position;
    u8 pad_68[0x98 - 0x68];
    s32 speed;
};

typedef Unk_ov004_022303b4_P P;

struct PairFn {
    Fn a;
    Fn b;
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
s32 Random_GlobalBelow(s32 n);
s32 File_LoadAlloc(char *, s32, s32, s32);
s32 MuseumData_isDonated(void *, u16 *);
void StaticCollider_setupAtPos(void *self, void *pos, s32 w, s32 h, u32 a, u32 b, u32 c, u8 t, s32 d);
void ActorCollider_submit(void *a);
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
s32 Math_StepS32Alt(void *p, s32 a, s32 b);
s32 Math_StepS16(void *p, s32 a, s32 b);
s32 Math_ApproachS16Div(void *p, s32 a, s32 b, s32 c);
s32 Random_Next(void *p);
void Mtx43_SetTranslate(void *m, s32 a, s32 b, s32 c);
void Mtx43_RotateY(void *, s32);
void Mtx43_RotateX(void *, s32);
void Mem_Free(void *p);
void Heap_Free(void *, void *);
void *Heap_Alloc(void *heap, u32 size);
s64 Vec_DistSqXZ(void *, void *);
s32 Vec_Distance(void *a, void *b);
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
extern "C" void _ZN17AquariumJellyfish5setupEv(E7d4 *o);
extern "C" void _ZN17AquariumJellyfish6updateEv(E7d4 *o);
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
extern "C" void _ZN16AquariumFastFish5setupEv(E744 *o);
extern "C" void _ZN16AquariumFastFish6updateEv(E744 *o);
extern "C" void AquariumFastFish_UpdateLap(E744 *o, s32 a, s32 b);
extern "C" void _ZN15AquariumBigFish5setupEv(E72c *o);
extern "C" void _ZN15AquariumBigFish6updateEv(E72c *o);
extern "C" void AquariumBigFish_UpdatePatrol(E72c *o, s32 a, s32 b);
extern "C" void _ZN12AquariumFrog5setupEv(E834 *o);
extern "C" void _ZN12AquariumFrog6updateEv(E834 *o);
extern "C" void AquariumFrog_StartCroak(E834 *o);
extern "C" void AquariumFrog_Croak(E834 *o);
extern "C" void _ZN11AquariumEel5setupEv(E804 *e);
extern "C" void _ZN11AquariumEel6updateEv(E804 *e);
extern "C" void AquariumEel_StateStart(E804 *e);
extern "C" void AquariumEel_StateSpeedUp(E804 *e);
extern "C" void AquariumEel_StateHold(E804 *e);
extern "C" void AquariumEel_StateSlowDown(E804 *e);
extern "C" void AquariumEel_StateWait(E804 *e);
extern "C" void _ZN20AquariumSeaButterfly5setupEv(E7bc *e);
extern "C" void _ZN20AquariumSeaButterfly6updateEv(E7bc *e);
extern "C" void _ZN16AquariumSeahorse5setupEv(E7a4 *e);
extern "C" void _ZN16AquariumSeahorse6updateEv(E7a4 *e);
extern "C" void _ZN18AquariumPufferFish5setupEv(E78c *e);
extern "C" void _ZN18AquariumPufferFish6updateEv(E78c *e);
extern "C" void _ZN15AquariumPiranha5setupEv(E75c *e);
extern "C" void _ZN15AquariumPiranha6updateEv(E75c *o);
extern "C" void AquariumPiranha_StateSwim(E75c *o);
extern "C" void AquariumPiranha_StateApproach(E75c *o);
extern "C" void AquariumPiranha_StateBite(E75c *o);
extern "C" void AquariumPiranha_BobDepth(E75c *o);
extern "C" void AquariumPiranha_BiteIdle(E75c *o);
extern "C" void AquariumPiranha_BiteLunge(E75c *o);
extern "C" void AquariumPiranha_BiteRecoil(E75c *o);
extern "C" void _ZN21AquariumSurfacingFish5setupEv(E714 *o);
extern "C" void _ZN21AquariumSurfacingFish6updateEv(E714 *o);
extern "C" void AquariumSurfacingFish_StateSwim(E714 *o);
extern "C" void AquariumSurfacingFish_StateSurface(E714 *o);
extern "C" void AquariumSurfacingFish_UpdateSurface(E714 *o);
extern "C" void _ZN18AquariumHidingFish5setupEv(E6fc *o);
extern "C" void _ZN18AquariumHidingFish6updateEv(E6fc *o);
extern "C" void AquariumHidingFish_UpdateClownfish(E6fc *o);
extern "C" void AquariumHidingFish_UpdateGoby(E6fc *o);
extern "C" void AquariumHidingFish_CheckTouch(E6fc *o);
extern "C" void AquariumHidingFish_UpdateHide(E6fc *o);
extern "C" void AquariumHidingFish_MoveToHideout(E6fc *o, s32 f);
extern "C" void AquariumHidingFish_StayHidden(E6fc *o);
extern "C" void _ZN16AquariumCrawfish5setupEv(E84c *o);
extern "C" void _ZN16AquariumCrawfish6updateEv(E84c *o);
extern "C" void AquariumCrawfish_StartWalk(E84c *o);
extern "C" void AquariumCrawfish_Walk(E84c *o);
extern "C" void AquariumCrawfish_SlowDown(E84c *o);
extern "C" void _ZN13AquariumSquid5setupEv(E81c *o);
extern "C" void _ZN13AquariumSquid6updateEv(E81c *o);
extern "C" void AquariumSquid_TurnAtTankEnd(E864 *e);
extern "C" void _ZN15AquariumOctopus5setupEv(E7ec *e);
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
extern "C" void _ZN16AquariumSwimFish5setupEv(E864 *e);
extern "C" void _ZN16AquariumSwimFish6updateEv(E864 *e);
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
extern "C" BOOL _ZN14MuseumAquarium8onCreateEv(Mgr *self);
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
extern "C" s32 _ZN14MuseumAquarium8onDeleteEv(Mgr *o);
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
extern ProcProfile sMuseumAquariumProfile;
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
    func_02054514(model);
    ModelSlotHandle_Init((u16 *)modelSlot);
    func_0209c140(pooledModel);
    __cxa_vec_ctor(bodyEnds, 2, 0xc, FxVec3_Construct, func_02000c8c);
    fishIndex = -1;
    loadState = 0;
    PooledModel_reset(pooledModel);
    hasTurnAnims = 0;
    hasCollision = 1;
    contactCount = 0;
    pitch = 0;
    for (s32 i = 0; i < 4; i++) animFiles[i] = 0;
}

AquariumFish::~AquariumFish() {
    __cxa_vec_cleanup(bodyEnds, 2, 0xc, func_02000c8c);
    func_0209c128(pooledModel);
    ModelSlotHandle_Destroy((u16 *)modelSlot);
    func_020544d8(model);
    func_ov004_022325f0(unk_04);
}

AquariumSwimFish::AquariumSwimFish() {
    state = 2;
    turnDir = 2;
    turnStep = 3;
    isWallTurning = 0;
    bobTimer = 0;
    unk_220 = 0;
    verticalDir = 0;
    verticalSpeed = 0x28;
    isTurnAnimPlaying = 0;
    maxY = 0x3000;
    minY = 0x1000;
    unk_1ef = 0;
    contactTimer = 0;
}

AquariumSwimFish::~AquariumSwimFish() {}

AquariumJellyfish::AquariumJellyfish() {
    subState = 1;
    bobTimer = 0;
    speed = 0x41;
    pulseStep = 0x14;
    pulseMinScale = 0xccd;
    swayUp = 0;
}

AquariumJellyfish::~AquariumJellyfish() {}

AquariumFastFish::AquariumFastFish() {
    unk_238 = 0;
}

AquariumFastFish::~AquariumFastFish() {}

AquariumBigFish::AquariumBigFish() {
    subState = 0;
    unk_256 = 0;
}

AquariumBigFish::~AquariumBigFish() {}

AquariumFrog::AquariumFrog() {
    croakState = 2;
}

AquariumFrog::~AquariumFrog() {}

AquariumEel::AquariumEel() {
    eelState = 0;
}

AquariumEel::~AquariumEel() {}

extern "C" AquariumSeaButterfly::AquariumSeaButterfly() {
    subState = 1;
    bobTimer = 0;
    speed = 0x41;
    swayUp = 0;
}

extern "C" AquariumSeaButterfly::~AquariumSeaButterfly() {
}

extern "C" AquariumSeahorse::AquariumSeahorse() {
    subState = 1;
    bobTimer = 0;
    speed = 0xa3;
    swayUp = 0;
}

extern "C" AquariumSeahorse::~AquariumSeahorse() {
}

extern "C" AquariumCrawfish::AquariumCrawfish() {
    *(u8 *)&walkState = 2;
}

extern "C" AquariumCrawfish::~AquariumCrawfish() {
}

extern "C" AquariumPufferFish::AquariumPufferFish() {
    subState = 0;
    unk_256 = 0;
    puffTimer = 0;
}

extern "C" AquariumPufferFish::~AquariumPufferFish() {
}

extern "C" AquariumPiranha::AquariumPiranha() {
    subState = 0;
    unk_257 = 0;
    nearPlayerTimer = 0;
}

extern "C" AquariumPiranha::~AquariumPiranha() {
}

extern "C" AquariumSurfacingFish::AquariumSurfacingFish() {
    surfaceState = 0;
    unk_257 = 0;
    subState = 0;
    unk_256 = 1;
    hasSurfaced = 0;
}

extern "C" AquariumSurfacingFish::~AquariumSurfacingFish() {
}

extern "C" AquariumHidingFish::AquariumHidingFish() {
}

extern "C" AquariumHidingFish::~AquariumHidingFish() {
}

extern "C" AquariumSquid::AquariumSquid() {
    subState = 0;
}

extern "C" AquariumSquid::~AquariumSquid() {
}

extern "C" AquariumOctopus::AquariumOctopus() {
}

extern "C" AquariumOctopus::~AquariumOctopus() {
}

extern "C" MuseumAquarium::MuseumAquarium() {
    __cxa_vec_ctor(touchBoxes, 2, 0x2a8, (void *)func_020b6e10, (void *)func_020b6df4);
    func_0209c2dc(modelPool);
}

extern "C" MuseumAquarium::~MuseumAquarium() {
    func_0209c2d8(modelPool);
    __cxa_vec_cleanup(touchBoxes, 2, 0x2a8, (void *)func_020b6df4);
}

extern "C" AquariumFishHitBox::AquariumFishHitBox() {
    owner = 0;
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
        o->isWallTurning = 0;
        o->wallTurnState = 0;
        AquariumFish_EndTurnAnim(o);
    }
}

extern "C" void AquariumFish_TurnAtWall(E864 *o) {
    if (o->state != 1) {
        if (o->wallTurnState == 0) {
            if (Aquarium_RandRange(0, 100) < 0x4b) {
                o->wallTurnState = 1;
            } else {
                o->wallTurnState = 2;
                return;
            }
        } else {
            if (o->turnRetryCount >= 4) {
                o->wallTurnState = 1;
                o->isWallTurning = 0;
                o->turnRetryCount = 0;
            }
        }
        if (o->wallTurnState == 1) {
            if (o->state == 5) {
                o->state = 4;
            }
            if (o->isWallTurning == 0) {
                V3 l;
                l.x = o->pos.x;
                l.y = o->pos.y;
                l.z = o->pos.z;
                Aquarium_StepXZ(&l, ((s32)sAquariumFishParams[o->fishIndex].hitRadius << 12) >> 7, o->unk_1c0);
                s32 r = Aquarium_ProbeTurnSide((s32 *)&l, o->unk_1c0);
                AquariumFish_PickTurn(o, r, 2, 6);
                o->isWallTurning = 1;
                o->turnAngleTotal = 0;
                o->turnAngleTotal = o->turnAngleTotal + o->turnStep;
            }
            if (o->turnStep * o->turnAngleTotal < 0) {
                if (AquariumFish_EndTurnAnim(o)) {
                    o->wallTurnState = 2;
                } else if (o->hasTurnAnims == 0) {
                    o->wallTurnState = 2;
                } else if (o->hasTurnAnims == 1) {
                    if (o->isTurnAnimPlaying == 0) {
                        o->wallTurnState = 2;
                    }
                }
            } else {
                o->isTurningToTarget = 0;
                o->unk_1c0 = o->unk_1c0 + o->turnStep;
                o->turnAngleTotal = o->turnAngleTotal + o->turnStep;
                AquariumFish_PlayTurnAnim(o, (u16)o->turnDir);
                if (o->state == 4) {
                    o->stateTimer = 0;
                }
            }
        } else if (o->wallTurnState == 2) {
            AquariumFish_EndTurnAnim(o);
        }
    }
}

extern "C" void AquariumFish_PickTurn(E864 *o, s32 f, u32 a, u32 b) {
    s32 t = Aquarium_RandRange((u16)a, (u16)b);
    o->turnStep = t * 0xb6;
    if (f != 0) {
        s32 idx = (u16)o->unk_1c0 >> 4;
        if (func_01ffcb0c(data_02135f44[idx * 2], data_02135f44[idx * 2 + 1]) >= 0) {
            o->turnStep *= -1;
            o->turnDir = 10;
        } else {
            o->turnDir = 3;
        }
    } else {
        s32 idx = (u16)o->unk_1c0 >> 4;
        if (func_01ffcb0c(data_02135f44[idx * 2], data_02135f44[idx * 2 + 1]) >= 0) {
            o->turnDir = 3;
        } else {
            o->turnStep *= -1;
            o->turnDir = 10;
        }
    }
}

extern "C" void AquariumFish_PlayTurnAnim(E864 *o, u32 a) {
    if (o->hasTurnAnims != 0) {
        if (o->isTurnAnimPlaying != 0) {
            if (AnimFrameCtrl_hasPassedFrame(&o->animFrameCtrl, a)) {
                o->animFrame = (u32)((a - 1) << 16) >> 4;
            }
        } else {
            if (AnimFrameCtrl_hasPassedFrame(&o->animFrameCtrl, (u16)(o->animNumFrames.mid - 1))) {
                if (a == 10) {
                    AquariumFish_PlayAnim(o, 2);
                } else {
                    AquariumFish_PlayAnim(o, 1);
                }
                o->isTurnAnimPlaying = 1;
            }
        }
    } else {
        if (AnimFrameCtrl_hasPassedFrame(&o->animFrameCtrl, a)) {
            o->animFrame = (u32)((a - 1) << 16) >> 4;
        }
    }
}

extern "C" s32 AquariumFish_EndTurnAnim(E864 *o) {
    BOOL r = FALSE;
    if (o->hasTurnAnims != 0) {
        if (o->isTurnAnimPlaying != 0) {
            if (AnimFrameCtrl_hasPassedFrame(&o->animFrameCtrl, o->animNumFrames.mid)) {
                AquariumFish_PlaySwimAnim(o);
                r = TRUE;
            }
        }
    }
    return r;
}

extern "C" void AquariumFish_PlayAnim(E864 *o, s32 i) {
    s32 t = func_021065dc(o->animFiles[i]);
    s32 r = func_021065f8(t, 0);
    BlendAnimModel_playBlend(o->model, r, 2, 0, 0x1000, 0, 0);
}

extern "C" void AquariumFish_PlaySwimAnim(E864 *o)
{
    AquariumFish_PlayAnim(o, 0);
    o->isTurnAnimPlaying = 0;
}

extern "C" void AquariumFish_CancelTurn(E864 *o)
{
    AquariumFish_PlaySwimAnim(o);
    o->wallTurnState = 2;
}

extern "C" void AquariumFish_MoveVertical(E864 *o, s32 a, s32 b, s32 c)
{
    s32 *p = &o->pos.y;
    s32 t = *p;
    s32 m = a * o->verticalDir;
    *p = t + m;
    if (*p > b) {
        Math_StepS32Alt(p, o->maxY, a);
    } else if (*p < c) {
        Math_StepS32Alt(p, o->minY, a);
    }
}

extern "C" void AquariumFish_UpdateDepth(E864 *o)
{
    AquariumFish_MoveVertical(o, o->verticalSpeed, o->maxY, o->minY);
}

extern "C" void AquariumFish_UpdateDepthCapped(E864 *o)
{
    s32 k = o->fishIndex;
    if (k == 0x2d || k == 0x2e) {
        AquariumFish_MoveVertical(o, o->verticalSpeed, o->maxY, o->minY);
    } else if (o->contactFish == k) {
        AquariumFish_MoveVertical(o, o->verticalSpeed, o->maxY, o->minY);
    } else {
        AquariumFish_MoveVertical(o, 0x7b, 0x5000, o->minY);
    }
}

extern "C" void AquariumFish_UpdatePitchByDir(E864 *o)
{
    u32 t = o->state;
    if ((u8)(t + 0xff) > 1) {
        if (t == 3) {
            Math_ApproachS16Div(&o->pitch, (s16)(o->verticalDir * -6825), 3, 0x222);
        } else if (t == 5) {
            Math_ApproachS16Div(&o->pitch, 0, 3, 0x222);
        }
    }
}

extern "C" void AquariumFish_UpdatePitch(E864 *o, s32 lim, s32 b)
{
    if ((u8)(o->state + 0xff) > 1) {
        s32 t = -o->pitchTimer * o->verticalDir;
        s32 s = (o->speed * b) >> 12;
        s32 n, c;
        t = t * s;
        o->pitch = t;
        n = -lim;
        c = o->pitch;
        if (c <= n) {
            o->pitch = n;
        } else if (c >= lim) {
            o->pitch = lim;
        }
        if (o->isLeveling != 0) {
            if (o->pitch != 0) {
                o->pitchTimer--;
            }
        } else {
            o->pitchTimer++;
            if (o->state == 5) {
                o->isLeveling = 1;
            } else {
                t = o->verticalDir;
                if (t == 1 && o->pos.y == o->maxY) goto set;
                if (t == -1 && o->pos.y == o->minY) {
                set:
                    o->isLeveling = 1;
                }
            }
        }
    }
}

extern "C" void AquariumFish_UpdatePitchSmooth(E864 *o, s32 a)
{
    if ((u8)(o->state + 0xff) > 1) {
        if (o->isLeveling != 0) {
            if (o->pitch != 0) {
                Math_ApproachS16Div(&o->pitch, 0, 3, 0x186);
            }
        } else {
            s32 d;
            Math_ApproachS16Div(&o->pitch, (s16)(-a * o->verticalDir), 4, 0x186);
            if (o->state == 5) {
                o->isLeveling = 1;
            } else {
                d = o->verticalDir;
                if (d == 1 && o->pos.y == o->maxY) goto set;
                if (d == -1 && o->pos.y == o->minY) {
                set:
                    o->isLeveling = 1;
                }
            }
        }
    }
}

extern "C" void AquariumFish_Bob(E864 *o, s32 m, s32 lim, u32 mode)
{
    s32 *p = &o->pos.y;
    if (mode == 0 || mode == 2) {
        m = m * o->bobTimer;
        if (m >= lim) {
            m = lim;
        }
    } else if (mode == 1 || mode == 3) {
        m = lim - m * o->bobTimer;
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
    return a + Random_GlobalBelow(b - a);
}

extern "C" BOOL Aquarium_TurnTowardHome(void *obj, void *a, void *b, s32 max)
{
    BOOL r = TRUE;
    if (Vec_Distance(a, b) > max) {
        Math_StepS16(obj, Math_AngleXZ(a, b), 0x38e);
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
    v.x = o->pos.x;
    v.y = o->pos.y;
    v.z = o->pos.z;
    Aquarium_StepXZ(&v, (sAquariumFishParams[o->fishIndex].hitRadius << 12) >> 7, o->unk_1c0);
    x = 0x400;
    if (o->isWallTurning != 0) {
        x = 0x1000;
    }
    if (o->fishIndex == 0x19 || o->fishIndex < 0x11) {
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

extern "C" void _ZN17AquariumJellyfish5setupEv(E7d4 *o)
{
    s32 *p = &o->fishIndex;
    o->hitBoxOwner = o;
    o->contactFish = *p;
    o->avoidedFish = *p;
    o->tankArea = 0;
    o->maxSpeed = 0x5e;
    o->accel = 1;
    o->decel = 1;
    o->turnRange = 0x96;
    o->cruiseTimeMax = sAquariumFishParams[*p].cruiseTimeMax;
    o->cruiseTimeMin = sAquariumFishParams[*p].cruiseTimeMin;
    o->restTimeMax = sAquariumFishParams[*p].restTimeMax;
    o->restTimeMin = sAquariumFishParams[*p].restTimeMin;
    sAquariumJellyfish = o;
}

extern "C" void _ZN17AquariumJellyfish6updateEv(E7d4 *o)
{
    u8 a = o->contactFish;
    u8 *p = &o->lastContactFish;
    if (*p != a && a != o->fishIndex) {
        *p = a;
        o->pulseBoostCount = 4;
        o->pulseStep = 0xcd;
        o->driftState = 1;
    }
    if (o->driftState == 0) {
        (o->*sAquariumSwimStates[o->state])();
    } else {
        AquariumJellyfish_UpdateDrift(o);
    }
    Aquarium_Oscillate(&o->pitch, &o->swayUp, (s32 *)&o->swayCounter, 0x2aac, 0x12c);
    switch (o->subState) {
    case 1: {
        s32 r = Aquarium_RandRange(0, 250);
        s32 v;
        if (r <= 1 || (v = o->pos.y) >= 0x2b33) {
            if (AnimFrameCtrl_hasPassedFrame(&o->animFrameCtrl, 1) != 0) {
                o->bobTimer = 0;
                o->subState = 2;
            }
        } else {
            if (v == o->prevPos.y) {
                o->bobTimer = 0;
                o->subState = 0;
            }
        }
        o->animFrameStep = 0x666;
        break;
    }
    case 0:
        if (Aquarium_RandRange(0, 100) <= 10) {
            o->bobTimer = 0;
            o->subState = 1;
        }
        o->animFrameStep = 0x800;
        break;
    case 2: {
        s32 r = Aquarium_RandRange(0, 250);
        if (r <= 1 || o->pos.y <= 0x800) {
            o->bobTimer = 0;
            o->subState = 1;
        }
        o->animFrameStep = 0x4cd;
        break;
    }
    }
    if (o->state != 2) {
        AquariumFish_TurnToTarget(o);
    }
    AquariumFish_Bob(o, 8, 0x28, o->subState);
    o->bobTimer++;
    o->stateTimer++;
    AquariumJellyfish_UpdatePulse(o);
    AquariumFish_CalcHitCenter(o, &o->hitCenter);
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
    switch (o->driftState) {
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
    R *p = sAquariumFish[o->contactFish];
    if (p != NULL) {
        o->driftAngle = p->unk_1c0 + 0x4000;
    }
    o->driftState = 2;
    o->stateTimer = 0;
}

extern "C" void AquariumJellyfish_DriftOut(E7d4 *o)
{
    s32 t = o->stateTimer * 2;
    if (t > 0x7b) {
        t = 0x7b;
        o->driftState = 3;
        o->stateTimer = 0;
    }
    Math_StepS16(&o->unk_1c0, o->avoidAngle, 0x2d8);
    Aquarium_StepXZ(&o->pos, t, o->unk_1c0);
}

extern "C" void AquariumJellyfish_DriftBack(E7d4 *o) {
    s32 t = 0x7b - o->stateTimer * 2;
    if (t < 0) {
        t = 0;
        o->driftState = 0;
        o->stateTimer = 0;
        o->state = 2;
    }
    Math_StepS16(&o->unk_1c0, o->avoidAngle, 0x2d8);
    Aquarium_StepXZ(&o->pos, t, o->unk_1c0);
}

extern "C" void AquariumJellyfish_UpdatePulse(E7d4 *o) {
    switch (o->pulseState) {
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
    o->pulseTimer++;
}

extern "C" void AquariumJellyfish_BeginPulse(E7d4 *o) {
    o->pulseState = 1;
    o->pulseTimer = 0;
    if (o->pulseBoostCount) {
        Math_StepS32Alt(&o->pulseStep, 0x14, 0x29);
        Math_StepS32Alt(&o->pulseMinScale, 0xccd, 0xcd);
        o->pulseBoostCount--;
    } else {
        o->pulseStep = 0x14;
        o->pulseMinScale = 0xccd;
    }
}

extern "C" void AquariumJellyfish_PulseGrow(E7d4 *o) {
    o->scaleX = o->pulseMinScale + o->pulseStep * o->pulseTimer;
    if (o->scaleX >= 0x1000) {
        o->scaleX = 0x1000;
        o->scaleY = 0x1000;
        o->scaleZ = 0x1000;
        o->pulseState = 2;
        o->pulseTimer = 0;
        if (o->pulseBoostCount == 4) {
            o->pulseMinScale = 0x99a;
        }
    } else {
        o->scaleY = o->scaleX;
        o->scaleZ = o->scaleX;
    }
}

extern "C" void AquariumJellyfish_PulseShrink(E7d4 *o) {
    s32 t = o->pulseStep * o->pulseTimer;
    o->scaleX = 0x1000 - t;
    if (o->scaleX < o->pulseMinScale) {
        o->scaleX = o->pulseMinScale;
        o->scaleY = o->pulseMinScale;
        o->scaleZ = o->pulseMinScale;
        o->pulseState = 0;
        o->pulseTimer = 0;
    } else {
        o->scaleY = o->scaleX;
        o->scaleZ = o->scaleX;
    }
}

extern "C" void AquariumFish_CalcHitCenter(R *o, V3 *out) {
    s32 t = o->fishIndex;
    static s32 k1 = (sAquariumFishParams[t].hitHeight << 12) >> 7;
    static s32 k2 = (sAquariumFishParams[t].hitRadius << 12) >> 7;
    V3 l[4];
    l[0].x = 0;
    l[0].y = k1;
    l[0].z = 0;
    l[1].x = 0;
    l[1].y = 0;
    l[1].z = k2;
    data_021f47e0 = o->modelMtx;
    MTX_MultVec43(&l[0], &data_021f47e0, &l[2]);
    MTX_MultVec43(&l[1], &data_021f47e0, &l[3]);
    V3 *p = &o->pos;
    out->x = (p->x + l[2].x) >> 1;
    out->z = (p->z + l[2].z) >> 1;
    if (l[3].y < p->y) {
        out->y = l[3].y;
    } else {
        out->y = p->y;
    }
}

extern "C" void _ZN16AquariumFastFish5setupEv(E744 *o) {
    o->hitBoxOwner = o;
    o->tankArea = 2;
    Model_setInitCallback(&o->model, (void *)AquariumFish_InstallJointCallbacks, o);
    s32 *t = &o->fishIndex;
    o->contactFish = *t;
    o->avoidedFish = *t;
    AquariumFish_LoadParams(o);
}

extern "C" void _ZN16AquariumFastFish6updateEv(E744 *o) {
    AquariumFastFish_UpdateLap(o, -2, 0x24);
    if (o->state != 2 && o->state != 6) {
        AquariumFish_UpdateDepthCapped(o);
    }
    AquariumFish_UpdateAnimSpeed(o, 0x333);
    o->stateTimer++;
    AquariumFish_CheckTouched(o);
}

extern "C" void AquariumFastFish_UpdateLap(E744 *o, s32 a, s32 b) {
    if (o->pos.x <= (a + 2) << 12) {
        o->isWallTurning = 1;
        if (Math_StepS16(&o->unk_1c0, 0x4000, 0x38e)) {
            o->pos.x += 0x19a;
        }
        o->pos.y = ((sAquariumFishParams[o->fishIndex].baseY << 12) >> 6);
        Aquarium_StepXZ(&o->pos, 0x19a, o->unk_1c0);
        o->animFrameStep = 0x1000;
        AquariumFish_PlayTurnAnim(o, 3);
        return;
    }
    if (o->pos.x >= (b - 2) << 12) {
        o->isWallTurning = 1;
        if (Math_StepS16(&o->unk_1c0, -0x4000, 0x38e)) {
            o->pos.x -= 0x19a;
        }
        o->pos.y = ((sAquariumFishParams[o->fishIndex].baseY << 12) >> 6);
        Aquarium_StepXZ(&o->pos, 0x19a, o->unk_1c0);
        o->animFrameStep = 0x1000;
        AquariumFish_PlayTurnAnim(o, 10);
        return;
    }
    AquariumFish_SteerFromWall(o);
    AquariumFish_UpdateAvoid(o);
    (o->*sAquariumFastSwimStates[o->state])();
    AquariumFish_TurnToTarget(o);
    AquariumFish_ClampHeadingSideways(o);
    AquariumFish_EndTurnAnim(o);
    AquariumFish_UpdateAnimSpeed(o, 0x333);
}

extern "C" void _ZN15AquariumBigFish5setupEv(E72c *o) {
    s32 *t = &o->fishIndex;
    o->contactFish = *t;
    o->hasCollision = 0;
    if ((u32)(*t - 0x35) <= 1) {
        Model_setInitCallback(&o->model, (void *)AquariumFish_InstallJointCallbacks, o);
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

extern "C" void _ZN15AquariumBigFish6updateEv(E72c *o) {
    s32 t = o->fishIndex;
    if ((u32)(t - 0x35) <= 1) {
        AquariumBigFish_UpdatePatrol(o, 2, 0x20);
    } else if (t == 0x34) {
        AquariumBigFish_UpdatePatrol(o, -4, 0x26);
    }
    if (o->state != 2 && o->state != 6) {
        AquariumFish_UpdateDepth(o);
        t = o->fishIndex;
        if ((u32)(t - 0x35) <= 1) {
            AquariumFish_UpdatePitch(o, 0x924, 0x28a);
        } else if (t == 0x34) {
            AquariumFish_UpdatePitch(o, 0x71c, 0x28a);
        }
    }
    o->stateTimer++;
}

extern "C" void AquariumBigFish_UpdatePatrol(E72c *o, s32 a, s32 b) {
    if (o->pos.x <= (a + 2) << 12) {
        if (Math_StepS16(&o->unk_1c0, 0x4000, 0x444)) {
            o->pos.x += 0x133;
        }
        Aquarium_StepXZ(&o->pos, 0x133, o->unk_1c0);
        o->animFrameStep = 0x1000;
        o->turnDir = 3;
        AquariumFish_PlayTurnAnim(o, (u16)o->turnDir);
        return;
    }
    if (o->pos.x >= (b - 2) << 12) {
        if (Math_StepS16(&o->unk_1c0, -0x4000, 0x444)) {
            o->pos.x -= 0x133;
        }
        Aquarium_StepXZ(&o->pos, 0x133, o->unk_1c0);
        o->animFrameStep = 0x1000;
        o->turnDir = 10;
        AquariumFish_PlayTurnAnim(o, (u16)o->turnDir);
        return;
    }
    if (o->turnDir == 3) {
        Math_StepS16(&o->unk_1c0, 0x4000, 0x444);
    } else if (o->turnDir == 10) {
        Math_StepS16(&o->unk_1c0, -0x4000, 0x444);
    }
    (o->*sAquariumSwimStates[o->state])();
    if ((u32)(o->fishIndex - 0x35) <= 1) {
        Math_StepS32Alt(&o->pos.z, 0x10800, 0xcd);
    } else if (o->fishIndex == 0x34) {
        Math_StepS32Alt(&o->pos.z, 0x10000, 0xcd);
    }
    AquariumFish_EndTurnAnim(o);
    AquariumFish_UpdateAnimSpeed(o, 0x333);
}

extern "C" void _ZN12AquariumFrog5setupEv(E834 *o) {
    o->hasCollision = 0;
    o->pos.x = 0x14500;
    o->pos.y = 0x3700;
    o->pos.z = 0x15400;
    o->unk_1c0 = 0;
    sAquariumFrog = o;
    Unk_02003c30_callReset(&o->croakSound);
}

extern "C" void _ZN12AquariumFrog6updateEv(E834 *o) {
    V3 l[2];
    l[0] = sRoomHasuPos;
    o->pos = l[0];
    l[1] = o->pos;
    Unk_02003c40_callUpdateRelative(&o->croakSound, &l[1]);
    switch (o->croakState) {
    case 2:
        AquariumFrog_StartCroak(o);
        break;
    case 4:
        AquariumFrog_Croak(o);
        break;
    case 6:
        if (o->stateTimer >= o->croakSound.unk_0c) {
            o->croakState = 2;
            o->stateTimer = 0;
        }
        break;
    }
    o->stateTimer++;
}

extern "C" void AquariumFrog_StartCroak(E834 *o) {
    o->croakSound.unk_0c = Aquarium_RandRange(0x28, 0xc8);
    o->croakAnimSpeed = (Aquarium_RandRange(0x32, 0x4b) << 12) / 100;
    o->animFrameStep = o->croakAnimSpeed;
    o->croakSound.unk_0e = Aquarium_RandRange(1, 7);
    o->croakCount = 0;
    o->stateTimer = 0;
    o->croakState = 4;
}

extern "C" void AquariumFrog_Croak(E834 *o) {
    if (AnimFrameCtrl_hasPassedFrame(&o->animFrameCtrl, 1)) {
        Unk_02003c40_callRequestSustained(&o->croakSound, 0x832);
        o->croakCount++;
    }
    if (o->croakCount >= o->croakSound.unk_0e) {
        if (AnimFrameCtrl_hasPassedFrame(&o->animFrameCtrl, (u16)(o->animNumFrames.mid - 1))) {
            o->croakState = 6;
            o->stateTimer = 0;
            o->animFrame = 0;
            o->animFrameStep = 0;
        }
    }
}

extern "C" void _ZN11AquariumEel5setupEv(E804 *e) {
    e->hasCollision = 0;
    e->pos.x = 0;
    e->pos.y = 0;
    e->pos.z = 0;
    e->unk_1c0 = 0;
}

extern "C" void _ZN11AquariumEel6updateEv(E804 *e) {
    (e->*sAquariumEelStates[e->eelState])();
    e->stateTimer++;
}

extern "C" void AquariumEel_StateStart(E804 *e) {
    e->maxSpeed = (Aquarium_RandRange(0xb, 0xf) << 12) / 10;
    e->accel = (Aquarium_RandRange(0x14, 0x32) << 12) / 1000;
    e->unk_204 = (Aquarium_RandRange(0xa, 0x1e) << 12) / 1000;
    e->holdTime = Aquarium_RandRange(1, 0x96);
    e->waitTime = Aquarium_RandRange(0xa, 0x78);
    e->stateTimer = 0;
    e->animFrameStep = 0;
    e->eelState = 1;
}

extern "C" void AquariumEel_StateSpeedUp(E804 *e) {
    s32 t = e->accel * e->stateTimer * 5;
    s32 m = e->maxSpeed;
    if (t >= m) {
        t = m;
        e->eelState = 2;
        e->stateTimer = 0;
    }
    e->animFrameStep = t;
}

extern "C" void AquariumEel_StateHold(E804 *e) {
    if (e->stateTimer >= e->holdTime) {
        e->eelState = 3;
        e->stateTimer = 0;
    }
    e->animFrameStep = e->maxSpeed;
}

extern "C" void AquariumEel_StateSlowDown(E804 *e) {
    s32 t = e->maxSpeed - e->unk_204 * e->stateTimer;
    if (t <= 0) {
        t = 0;
        e->eelState = 4;
        e->stateTimer = 0;
    }
    e->animFrameStep = t;
}

extern "C" void AquariumEel_StateWait(E804 *e) {
    e->animFrameStep = 0;
    if (e->stateTimer >= e->waitTime) {
        e->eelState = 0;
        e->stateTimer = 0;
    }
}

extern "C" void _ZN20AquariumSeaButterfly5setupEv(E7bc *e) {
    s32 *p = &e->fishIndex;
    e->contactFish = *p;
    e->avoidedFish = *p;
    e->tankArea = 0;
    e->maxSpeed = 0x3a;
    e->accel = 1;
    e->decel = 1;
    e->turnRange = 0x1e;
    e->homePos[0] = 0x6000;
    e->homePos[1] = 0;
    e->homePos[2] = 0x14a00;
    e->cruiseTimeMax = sAquariumFishParams[*p].cruiseTimeMax;
    e->cruiseTimeMin = sAquariumFishParams[*p].cruiseTimeMin;
    e->restTimeMax = sAquariumFishParams[*p].restTimeMax;
    e->restTimeMin = sAquariumFishParams[*p].restTimeMin;
    sAquariumSeaButterfly = e;
}

extern "C" void _ZN20AquariumSeaButterfly6updateEv(E7bc *e) {
    if ((u8)(e->state + 0xfd) <= 1) {
        Aquarium_TurnTowardHome(&e->unk_1c0, &e->pos, &e->homePos, 0x1000);
    }
    (e->*sAquariumSwimStates[e->state])();
    Aquarium_Oscillate(&e->pitch, &e->swayUp, &e->swayCounter, 0x2aac, 0x12c);
    switch (e->subState) {
    case 1: {
        s32 r = Aquarium_RandRange(0, 0x64);
        if (r <= 1 || e->pos.y >= 0x2b33) {
            if (AnimFrameCtrl_hasPassedFrame(&e->animFrameCtrl, 1)) {
                e->bobTimer = 0;
                e->subState = 2;
            }
        } else {
            r = Aquarium_RandRange(0, 0x64);
            if (r <= 0x1e) {
                e->bobTimer = 0;
                e->subState = 0;
            } else if (e->pos.y == e->prevPos.y) {
                e->bobTimer = 0;
                e->subState = 0;
            }
        }
        e->animFrameStep = 0xe66;
        break;
    }
    case 0: {
        s32 r = Aquarium_RandRange(0, 0x64);
        if (r <= 0x1e) {
            e->bobTimer = 0;
            e->subState = 1;
        }
        e->animFrameStep = 0x1000;
        break;
    }
    case 2: {
        s32 r = Aquarium_RandRange(0, 0x64);
        if (r <= 1 || e->pos.y <= 0x800) {
            e->bobTimer = 0;
            e->subState = 1;
        }
        e->animFrameStep = 0x666;
        break;
    }
    }
    if (e->state != 2) {
        AquariumFish_TurnToTarget(e);
    }
    AquariumFish_Bob(e, 8, 0x14, e->subState);
    e->bobTimer++;
    e->stateTimer++;
    AquariumFish_CheckTouched(e);
    AquariumFish_CalcHitCenter(e, &e->hitCenter);
}

extern "C" void _ZN16AquariumSeahorse5setupEv(E7a4 *e) {
    s32 *p = &e->fishIndex;
    e->contactFish = *p;
    e->avoidedFish = *p;
    e->tankArea = 0;
    e->maxSpeed = 0x51;
    e->accel = 2;
    e->decel = 2;
    e->turnRange = 0x3c;
    e->homePos[0] = 0x7000;
    e->homePos[1] = 0;
    e->homePos[2] = 0x14a00;
    e->cruiseTimeMax = sAquariumFishParams[*p].cruiseTimeMax;
    e->cruiseTimeMin = sAquariumFishParams[*p].cruiseTimeMin;
    e->restTimeMax = sAquariumFishParams[*p].restTimeMax;
    e->restTimeMin = sAquariumFishParams[*p].restTimeMin;
}

extern "C" void _ZN16AquariumSeahorse6updateEv(E7a4 *e) {
    Aquarium_TurnTowardHome(&e->unk_1c0, &e->pos, &e->homePos, 0x1000);
    switch (e->subState) {
    case 1: {
        s32 r = Aquarium_RandRange(0, 0x64);
        if (r <= 8 || e->pos.y >= 0x2000) {
            e->bobTimer = 0;
            e->subState = 2;
        } else if (e->pos.y == e->prevPos.y) {
            e->bobTimer = 0;
            e->subState = 0;
        }
        e->animFrameStep = 0xb33;
        break;
    }
    case 0: {
        s32 r = Aquarium_RandRange(0, 0x64);
        if (r <= 10) {
            e->bobTimer = 0;
            e->subState = 1;
        }
        e->animFrameStep = 0x1000;
        break;
    }
    case 2: {
        s32 r = Aquarium_RandRange(0, 0x64);
        if (r <= 3 || e->pos.y <= 0x1000) {
            e->bobTimer = 0;
            e->subState = 1;
        }
        e->animFrameStep = 0x666;
        break;
    }
    }
    (e->*sAquariumSwimStates[e->state])();
    Aquarium_Oscillate(&e->pitch, &e->swayUp, &e->swayCounter, 0x11c6, 0x96);
    if (e->state != 2) {
        AquariumFish_TurnToTarget(e);
    }
    AquariumFish_Bob(e, 8, 0x51, e->subState);
    e->bobTimer++;
    e->stateTimer++;
    AquariumFish_CheckTouched(e);
}

extern "C" void _ZN18AquariumPufferFish5setupEv(E78c *e) {
    e->hitBoxOwner = e;
    e->contactFish = e->fishIndex;
    e->avoidedFish = e->fishIndex;
    e->tankArea = 1;
    AquariumFish_LoadParams(e);
    Model_setInitCallback(&e->model, (void *)AquariumFish_InstallJointCallbacks, e);
}

extern "C" void _ZN18AquariumPufferFish6updateEv(E78c *e) {
    u32 v;
    s32 t;
    AquariumFish_SteerFromWall(e);
    (e->*sAquariumSwimStates[e->state])();
    v = (u16)(e->animNumFrames.mid - 1);
    if (e->animFrameStep > 0x1000) {
        v = (u16)(e->animNumFrames.mid - 2);
    }
    switch (e->unk_256) {
    case 0:
        if (e->isHit != 0) {
            e->subState = 1;
        }
        if (e->subState != 0) {
            if (AnimFrameCtrl_hasPassedFrame(&e->animFrameCtrl, v)) {
                e->unk_256 = 1;
                t = e->maxSpeed;
                e->maxSpeed = t << 1;
                AquariumFish_PlayAnim(e, 1);
                e->subState = 0;
            }
        }
        break;
    case 1:
        if (AnimFrameCtrl_hasPassedFrame(&e->animFrameCtrl, v)) {
            e->unk_257 = Aquarium_RandRange(0x3c, 0x50);
            e->puffTimer = 0;
            e->unk_256 = 2;
            AquariumFish_PlayAnim(e, 2);
        }
        break;
    case 2: {
        u32 b = e->puffTimer;
        if (b > e->unk_257) {
            if (AnimFrameCtrl_hasPassedFrame(&e->animFrameCtrl, v)) {
                e->unk_256 = 3;
                e->maxSpeed = e->maxSpeed >> 1;
                AquariumFish_PlayAnim(e, 3);
            }
        } else {
            e->puffTimer = b + 1;
        }
        break;
    }
    case 3:
        if (AnimFrameCtrl_hasPassedFrame(&e->animFrameCtrl, v)) {
            e->unk_256 = 0;
            AquariumFish_PlayAnim(e, 0);
        }
        break;
    }
    if (e->state != 2 && e->state != 6) {
        AquariumFish_UpdateDepthCapped(e);
        AquariumFish_UpdatePitchSmooth(e, 0x1554);
        AquariumFish_TurnToTarget(e);
    }
    AquariumFish_UpdateAnimSpeed(e, 0x666);
    AquariumFish_KeepInsideX(e);
    AquariumFish_UpdateAvoid(e);
    AquariumFish_TurnAtTankEnds(e);
    e->stateTimer++;
    if (AquariumFish_CheckTouched(e)) {
        if (e->unk_256 == 0) {
            e->subState = 1;
        } else {
            e->puffTimer = 0;
        }
    }
}

extern "C" void _ZN15AquariumPiranha5setupEv(E75c *e) {
    e->contactFish = e->fishIndex;
    e->hasCollision = 0;
    AquariumFish_LoadParams(e);
}

extern "C" void _ZN15AquariumPiranha6updateEv(E75c *o) {
    (o->*sAquariumPiranhaStates[o->subState])();
    s32 t = (sAquariumFishParams[30].hitRadius << 12) >> 7;
    o->unk_256 = Collision_ClampToRect(&o->pos, t, &sAquariumTankCenterB, 0x11c00, 0x5c00);
    s32 g = func_02133150(o->rank << 12, 10);
    StaticCollider_setupAtPos(o->unk_04, &o->pos, t, (sAquariumFishParams[30].hitHeight << 12) >> 7, 0x100, 0x140, 0, 0xff, g);
    ActorCollider_submit(o->unk_04);
    o->prevPos.x = o->pos.x;
    o->prevPos.y = o->pos.y;
    o->prevPos.z = o->pos.z;
    o->stateTimer = o->stateTimer + 1;
}

extern "C" void AquariumPiranha_StateSwim(E75c *o) {
    (o->*sAquariumSwimStates[o->state])();
    AquariumFish_UpdateWallTurn(o);
    if (o->state != 2 && o->state != 6) {
        AquariumFish_UpdateDepth(o);
        AquariumFish_UpdatePitch(o, 0x1554, 0x384);
        AquariumFish_TurnToTarget(o);
    }
    AquariumFish_UpdateAnimSpeed(o, 0x666);
    P *p = PlayerActor_GetActor(4);
    if (p != 0) {
        V3 v;
        V3 *pv = &p->position;
        v.x = p->position.x;
        v.y = pv->y;
        v.z = pv->z;
        if (Vec_DistSqXZ(&v, &o->pos) < 0x10000) {
            o->nearPlayerTimer++;
            if (o->nearPlayerTimer > 0xa) {
                if (p->speed != 0) {
                    o->subState = 1;
                    o->stateTimer = 0;
                    o->nearPlayerTimer = 0;
                }
            }
        } else {
            o->nearPlayerTimer = 0;
        }
    }
}

extern "C" void AquariumPiranha_StateApproach(E75c *o) {
    V3 v;
    P *p = PlayerActor_GetActor(4);
    if (p == 0) {
        o->subState = 0;
        return;
    }
    V3 *pv = &p->position;
    v.x = p->position.x;
    v.y = pv->y;
    v.z = pv->z;
    Math_StepS16(&o->unk_1c0, Math_AngleXZ(&o->pos, (s32 *)&v), 0x222);
    Aquarium_StepXZ(&o->pos, o->maxSpeed, o->unk_1c0);
    if (p->speed != 0) {
        if (o->pitch != 0) Math_StepS16(&o->pitch, 0, 0x222);
        if (o->pos.y != 0x199a) Math_StepS32Alt(&o->pos.y, 0x199a, o->verticalSpeed);
        o->nearPlayerTimer = 0;
    } else {
        AquariumPiranha_BobDepth(o);
        o->nearPlayerTimer++;
        if (o->nearPlayerTimer >= 0x46) {
            o->subState = 0;
            o->state = 2;
            o->stateTimer = 0;
            o->nearPlayerTimer = 0;
            return;
        }
    }
    long long d = Vec_DistSqXZ(&v, &o->pos);
    if (d < 0x4000) {
        if ((u8)o->unk_256s != 0) {
            o->subState = 2;
            o->stateTimer = 0;
        }
    } else if (0x10000 < d) {
        o->subState = 0;
        o->stateTimer = 0;
    }
    o->animFrameStep = 0x1000;
}

extern "C" void AquariumPiranha_StateBite(E75c *o) {
    P *p = PlayerActor_GetBodyPos(4);
    if (p == 0) {
        o->subState = 0;
        return;
    }
    if (o->pitch != 0) Math_StepS16(&o->pitch, 0, 0x16c);
    if (o->pos.y != 0x199a) Math_StepS32Alt(&o->pos.y, 0x199a, o->verticalSpeed);
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
    Math_StepS16(&o->unk_1c0, Math_AngleXZ(&o->pos, (s32 *)p), 0x222);
    long long d = Vec_DistSqXZ(p, &o->pos);
    if (0x10000 < d) {
        o->subState = 0;
        o->stateTimer = 0;
    } else if (0x4000 < d) {
        o->subState = 1;
        o->stateTimer = 0;
    }
    o->animFrameStep = 0x1000;
}

extern "C" void AquariumPiranha_BobDepth(E75c *o) {
    o->pos.y = o->pos.y + o->verticalSpeed * o->verticalDir;
    if (Aquarium_RandRange(0, 100) < 15) o->verticalDir *= -1;
    if (o->pos.y > o->maxY) {
        o->verticalDir = -1;
        o->pos.y = o->maxY;
    } else if (o->pos.y < o->minY) {
        o->verticalDir = 1;
        o->pos.y = o->minY;
    }
}

extern "C" void AquariumPiranha_BiteIdle(E75c *o) {
    if (Aquarium_RandRange(0, 100) < 15) {
        o->unk_257 = 1;
        o->biteTime = Aquarium_RandRange(8, 0xd);
        o->stateTimer = 0;
    }
}

extern "C" void AquariumPiranha_BiteLunge(E75c *o) {
    Aquarium_StepXZ(&o->pos, 0x266, o->unk_1c0);
    s16 t = Aquarium_RandAngle(0x168, 0);
    Aquarium_StepXZ(&o->pos, 0x52, t);
    o->unk_257 = 2;
}

extern "C" void AquariumPiranha_BiteRecoil(E75c *o) {
    Aquarium_StepXZ(&o->pos, 0xcd, -o->unk_1c0);
    if (o->stateTimer % 4 == 1) o->unk_257 = 1;
    if (o->stateTimer >= o->biteTime) o->unk_257 = 0;
}

extern "C" void _ZN21AquariumSurfacingFish5setupEv(E714 *o) {
    o->contactFish = o->fishIndex;
    Model_setInitCallback(&o->model, (void *)AquariumFish_InstallJointCallbacks, o);
    AquariumFish_LoadParams(o);
}

extern "C" void _ZN21AquariumSurfacingFish6updateEv(E714 *o) {
    switch (o->subState) {
    case 0:
        AquariumSurfacingFish_StateSwim(o);
        break;
    case 1:
        AquariumSurfacingFish_StateSurface(o);
        break;
    }
    AquariumFish_UpdateAnimSpeed(o, 0x333);
    o->stateTimer = o->stateTimer + 1;
    AquariumFish_CheckTouched(o);
}

extern "C" void AquariumSurfacingFish_StateSwim(E714 *o) {
    if (o->state == 2) {
        if (o->hasSurfaced != 0) {
            if (Aquarium_RandRange(0, 100) < 15) {
                o->subState = 1;
                return;
            }
            o->hasSurfaced = 0;
        } else {
            if (Aquarium_RandRange(0, 100) < 0x46) {
                o->subState = 1;
                return;
            }
        }
    }
    (o->*sAquariumSwimStates[o->state])();
    AquariumFish_UpdateWallTurn(o);
    if (o->state != 2 && o->state != 6) {
        AquariumFish_UpdateDepth(o);
        AquariumFish_UpdatePitch(o, 0x1554, 0x3e8);
        AquariumFish_TurnToTarget(o);
    }
}

extern "C" void AquariumSurfacingFish_StateSurface(E714 *o) {
    (o->*sAquariumSwimStates[o->state])();
    AquariumSurfacingFish_UpdateSurface(o);
}

extern "C" void AquariumSurfacingFish_UpdateSurface(E714 *o) {
    switch (o->state) {
    case 0:
    case 2:
        break;
    case 3:
        o->pitchTimer = o->pitchTimer + 1;
        break;
    case 5:
        o->pitchTimer = o->pitchTimer - 1;
        break;
    case 4:
        if (o->surfaceState == 0) o->stateTimer = 0;
        break;
    case 1: {
        o->pos.y -= o->verticalSpeed * 2;
        if (o->pos.y < o->minY) o->pos.y = o->minY;
        return;
    }
    }
    {
        s32 a = -o->pitchTimer;
        a *= o->unk_256s;
        s32 b = o->speed * 1000;
        b >>= 12;
        o->pitch = a * b;
    }
    {
        s32 v = o->pitch;
        if (v <= -0x1554) o->pitch = -0x1554;
        else if (v >= 0x1554) o->pitch = 0x1554;
    }
    o->pos.y += o->verticalSpeed * o->unk_256s;
    switch (o->surfaceState) {
    case 0:
        if (o->pos.y > 0x299a) {
            if (o->state == 4) {
                o->unk_257++;
                if (o->unk_257 >= 0x14) {
                    o->state = 5;
                    o->surfaceState = 1;
                    o->unk_257 = 0;
                }
            }
        }
        break;
    case 1:
        o->pos.y = o->pos.y - func_01ffcb0c(0x1800, o->verticalSpeed * o->unk_256s);
        if (o->state == 6) {
            if (o->pos.y < o->maxY) {
                o->unk_256s = 1;
                o->subState = 0;
                o->surfaceState = 0;
                o->hasSurfaced = 1;
            } else {
                o->state = 2;
                o->unk_256s = -1;
                o->surfaceState = 2;
            }
        }
        break;
    case 2:
        if (o->pos.y < o->maxY) {
            if (o->state == 2) {
                o->unk_256s = 1;
                o->subState = 0;
                o->surfaceState = 0;
                o->hasSurfaced = 1;
            }
        }
        break;
    }
    {
        s32 t = o->pos.y;
        if (t > 0x299a) o->pos.y = 0x299a;
        else if (t < o->minY) o->pos.y = o->minY;
    }
}

extern "C" void _ZN18AquariumHidingFish5setupEv(E6fc *o) {
    o->hitBoxOwner = o;
    s32 *p = &o->fishIndex;
    o->contactFish = *p;
    o->avoidedFish = *p;
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

extern "C" void _ZN18AquariumHidingFish6updateEv(E6fc *o) {
    if (o->fishIndex == 0x26) {
        AquariumHidingFish_UpdateClownfish(o);
    } else if (o->fishIndex == 0xc) {
        AquariumHidingFish_UpdateGoby(o);
    }
    AquariumFish_UpdateAnimSpeed(o, 0x666);
    o->stateTimer++;
}

extern "C" void AquariumHidingFish_UpdateClownfish(E6fc *o) {
    if (Vec_Distance(&o->pos, o->homePos) <= 0x1000) {
        o->subState = 1;
    } else {
        o->subState = 0;
    }
    if (o->unk_256 == 0) {
        if (o->state != 2 && o->state != 6) {
            AquariumFish_UpdateDepthCapped(o);
            AquariumFish_UpdatePitchSmooth(o, 0x1554);
        }
        (o->*sAquariumSwimStates[o->state])();
        AquariumFish_TurnToTarget(o);
        if (Aquarium_TurnTowardHome(&o->unk_1c0, &o->pos, o->homePos, 0x1000)) {
            if (o->roamTimer >= o->roamTime) {
                o->roamTimer = 0;
                o->unk_256 = 1;
                o->roamTime = Aquarium_RandRange(200, 0x140);
            }
            {
                u8 a = o->contactFish;
                u8 *p = &o->lastContactFish;
                if (*p != a) {
                    if (a != o->fishIndex) {
                        *p = a;
                        o->unk_256 = 2;
                    }
                }
            }
        } else {
            u8 a = o->contactFish;
            u8 *p = &o->lastContactFish;
            if (*p != a) {
                if (a != o->fishIndex) {
                    *p = a;
                    if (o->state != 1) {
                        AquariumFish_StartFlee(o, &sAquariumFish[o->contactFish]->pos);
                    }
                }
            }
        }
        o->roamTimer++;
    } else {
        AquariumHidingFish_UpdateHide(o);
    }
    AquariumHidingFish_CheckTouch(o);
}

extern "C" void AquariumHidingFish_UpdateGoby(E6fc *o) {
    if (o->state != 2 && o->state != 6) {
        AquariumFish_UpdateDepth(o);
        AquariumFish_UpdatePitchByDir(o);
    }
    (o->*sAquariumSwimStates[o->state])();
    AquariumFish_TurnToTarget(o);
    if (Aquarium_TurnTowardHome(&o->unk_1c0, &o->pos, o->homePos, 0x1000)) {
        AquariumFish_UpdateWallTurn(o);
    } else {
        if (*(u8 *)&o->isWallTurning != 0) {
            o->state = 2;
            *(u8 *)&o->isWallTurning = 0;
        }
    }
    {
        u8 a = o->contactFish;
        u8 *p = &o->lastContactFish;
        if (*p != a) {
            if (a != o->fishIndex) {
                *p = a;
                if (o->state != 1) {
                    AquariumFish_StartFlee(o, &sAquariumFish[o->contactFish]->pos);
                }
            }
        }
    }
    AquariumFish_CheckTouched(o);
}

extern "C" void AquariumHidingFish_CheckTouch(E6fc *o) {
    u32 buf[4];
    if (AquariumFish_GetTouchPoint(o, (V3 *)buf)) {
        if (o->subState != 0) {
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
        u8 a = o->contactFish;
        u8 *p = &o->lastContactFish;
        if (*p != a) {
            if (a != o->fishIndex) {
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
    if (o->subState == 0) {
        o->lastContactFish = o->fishIndex;
        o->unk_256 = 0;
        return;
    }
    if (o->pos.y > o->hideoutY) {
        if (f != 0) {
            Math_StepS32Alt(&o->pos.y, o->hideoutY, o->verticalSpeed << 2);
        } else {
            Math_StepS32Alt(&o->pos.y, o->hideoutY, o->verticalSpeed);
        }
    }
    if (Vec_Distance(&o->pos, &o->hideoutX) <= 0x800) {
        if (o->pos.y <= o->hideoutY) {
            o->unk_256 = 3;
            o->stateTimer = 0;
            o->hideTime = Aquarium_RandRange(0x3c, 0x78);
        }
    } else {
        o->unk_1c0 = Math_AngleXZ(&o->pos, &o->hideoutX);
        if (f != 0) {
            Aquarium_StepXZ(&o->pos, o->maxSpeed << 1, o->unk_1c0);
        } else {
            Aquarium_StepXZ(&o->pos, o->maxSpeed >> 1, o->unk_1c0);
        }
    }
}

extern "C" void AquariumHidingFish_StayHidden(E6fc *o) {
    Math_StepS32Alt(&o->pos, o->hideoutX, o->maxSpeed);
    Math_StepS32Alt(&o->pos.z, o->hideoutZ, o->maxSpeed);
    if (o->stateTimer > o->hideTime) {
        o->unk_256 = 0;
        o->stateTimer = 0;
        o->state = 2;
    }
}

extern "C" void _ZN16AquariumCrawfish5setupEv(E84c *o) {
    o->homeX = 0xc800;
    o->homeY = 0;
    o->homeZ = 0x14a00;
}

extern "C" void _ZN16AquariumCrawfish6updateEv(E84c *o) {
    switch (o->walkState) {
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
        if (o->stateTimer >= *(u16 *)((u8 *)o + 0x212)) {
            o->stateTimer = 0;
            o->walkState = 2;
        }
        break;
    }
    o->stateTimer++;
}

extern "C" void AquariumCrawfish_StartWalk(E84c *o) {
    o->unk_1c0 += Aquarium_RandAngle(0x5a, 0);
    *(u8 *)&o->unk_210 = Aquarium_RandRange(0x14, 0x78);
    *(u16 *)((u8 *)o + 0x212) = Aquarium_RandRange(0x3c, 0xf0);
    o->walkSpeed = Aquarium_RandFx(2, 4) / 100;
    o->stateTimer = 0;
    o->pos.y = 0x700;
    o->animFrameStep = o->walkAnimSpeed = 0x1000;
    o->walkState = 4;
}

extern "C" void AquariumCrawfish_Walk(E84c *o) {
    s32 r;
    Aquarium_TurnTowardHome(&o->unk_1c0, &o->pos, &o->homeX, 0x1600);
    r = o->walkSpeed;
    o->pos.x += func_01ffcb0c(r, data_02135f44[((u16)o->unk_1c0 >> 4) * 2]);
    o->pos.z += func_01ffcb0c(r, data_02135f44[((u16)o->unk_1c0 >> 4) * 2 + 1]);
    o->wobbleAngle += 0x2000;
    r = r * 7 / 10;
    o->pos.x += func_01ffcb0c(r, data_02135f44[((u16)o->wobbleAngle >> 4) * 2]);
    o->pos.z += func_01ffcb0c(r, data_02135f44[((u16)o->wobbleAngle >> 4) * 2]);
    if (o->stateTimer >= *(u8 *)&o->unk_210) {
        o->stateTimer = 0;
        o->walkState = 5;
        o->walkAnimSpeed >>= 1;
        o->animFrameStep = o->walkAnimSpeed;
    }
}

extern "C" void AquariumCrawfish_SlowDown(E84c *o) {
    s32 t = o->walkSpeed;
    s32 r = t - (o->stateTimer << 3);
    if (r < 0) {
        r = 0;
        o->stateTimer = r;
        o->animFrameStep = r;
        o->walkState = 6;
    }
    o->pos.x += func_01ffcb0c(r, data_02135f44[((u16)o->unk_1c0 >> 4) * 2]);
    o->pos.z += func_01ffcb0c(r, data_02135f44[((u16)o->unk_1c0 >> 4) * 2 + 1]);
    o->wobbleAngle += 0x2000;
    r = r * 7 / 10;
    o->pos.x += func_01ffcb0c(r, data_02135f44[((u16)o->wobbleAngle >> 4) * 2]);
    o->pos.z += func_01ffcb0c(r, data_02135f44[((u16)o->wobbleAngle >> 4) * 2]);
}

extern "C" void _ZN13AquariumSquid5setupEv(E81c *o) {
    o->hitBoxOwner = o;
    o->contactFish = o->fishIndex;
    o->avoidedFish = o->fishIndex;
    o->tankArea = 1;
    AquariumFish_LoadParams(o);
    Model_setInitCallback((u8 *)o + 0x64, (void *)AquariumFish_InstallJointCallbacks, o);
}

extern "C" void _ZN13AquariumSquid6updateEv(E81c *o) {
    if (o->unk_256 == 0) {
        if (AnimFrameCtrl_hasPassedFrame(&o->animFrameCtrl, (u16)(o->animNumFrames.mid - 1))) {
            o->unk_256 = 1;
            AquariumFish_PlayAnim(o, 1);
        }
    }
    if (o->state == 2) {
        o->subState = 0;
        if (AnimFrameCtrl_hasPassedFrame(&o->animFrameCtrl, (u16)(o->animNumFrames.mid - 1))) {
            o->unk_256 = 0;
            AquariumFish_PlayAnim(o, 0);
            o->subState = 1;
        }
    } else if (o->state != 2) {
        if (o->subState == 0) {
            o->subState = 1;
        }
    }
    if (o->subState != 0) {
        (o->*sAquariumSwimStates[o->state])();
        AquariumSquid_TurnAtTankEnd(o);
        if (o->state == 4) {
            AquariumFish_UpdateDepthCapped(o);
            AquariumFish_UpdatePitchSmooth(o, 0x1554);
        }
    }
    if (o->state != 6 && o->state != 5) {
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
    o->stateTimer++;
    if (AquariumFish_CheckTouched(o)) {
        o->unk_256 = 0;
        AquariumFish_PlayAnim(o, 0);
        o->subState = 1;
    }
}

extern "C" void AquariumSquid_TurnAtTankEnd(E864 *e) {
    s32 c = func_01ffcb0c(0x1800, (s32)(sAquariumFishParams[e->fishIndex].hitRadius << 12) >> 7);
    s32 a = e->pos.z + c;
    s32 b = e->pos.z - c;
    s32 t = e->pos.x;
    if (t < 0x4000 || t > 0x1e000) goto end;
    if (e->state == 1) {
        e->isWallTurning = 0;
        e->wallTurnState = 0;
        goto end;
    }
    {
        s32 w = e->unk_1c0;
        if (w < 0) w = -w;
        w = (s16)w;
        if (a >= 0x15dc2 && e->isWallTurning != 0) goto go;
        if (a <= 0x11000 && e->isWallTurning != 0) goto go;
        if (a >= 0x15dc2 && w < 0x4000 && e->isWallTurning == 0) goto go;
        if (b > 0x11000 || w <= 0x4000 || e->isWallTurning != 0) goto fail2;
    }
go:
    if (e->contactCount != 0) goto fail1;
    if (e->wallTurnState == 0) {
        if (Aquarium_RandRange(0, 0x64) < 0x4b) {
            e->wallTurnState = 1;
        } else {
            e->wallTurnState = 2;
            goto end;
        }
    } else {
        if (e->turnRetryCount >= 2) {
            e->wallTurnState = 1;
            e->isWallTurning = 0;
            e->turnRetryCount = 0;
        }
    }
    if (e->wallTurnState == 1) {
        if (e->isWallTurning == 0) {
            AquariumFish_PickTurn(e, 0, 1, 4);
            e->isWallTurning = 1;
            if (e->pos.x >= 0xb000 && e->pos.x <= 0x17000) {
                if (Aquarium_RandRange(0, 0x64) < 0x14) {
                    { s16 k = -1; e->turnStep *= k; }
                }
            }
        }
        e->isTurningToTarget = 0;
        e->unk_1c0 = e->unk_1c0 + e->turnStep;
        if (e->state == 5) {
            e->state = 4;
            e->stateTimer = 0;
        }
    }
    goto end;
fail1:
    e->isWallTurning = 0;
    e->wallTurnState = 0;
    goto end;
fail2:
    e->isWallTurning = 0;
    e->wallTurnState = 0;
end:;
}

extern "C" void _ZN15AquariumOctopus5setupEv(E7ec *e) {
    e->hasCollision = 0;
    e->pos.x = 0x16f00;
    e->pos.y = 0xfffff400;
    e->pos.z = 0x13300;
    e->unk_1c0 = 0;
}

extern "C" void AquariumSwimFish_SetupSea(E864 *e) {
    e->hitBoxOwner = e;
    s32 s = e->fishIndex;
    if ((u32)(s - 0x2d) <= 1) {
        e->tankArea = 0;
    } else if (s == 0x37) {
        e->tankArea = 2;
    } else {
        e->tankArea = 1;
    }
    s32 *p = &e->fishIndex;
    e->contactFish = *p;
    e->avoidedFish = *p;
    AquariumFish_LoadParams(e);
    if (e->hasTurnAnims) {
        Model_setInitCallback((u8 *)e + 0x64, (void *)AquariumFish_InstallJointCallbacks, e);
    }
}

extern "C" void AquariumSwimFish_UpdateSea(E864 *e) {
    AquariumFish_SteerFromWall(e);
    (e->*sAquariumSwimStates[e->state])();
    {
        s32 s = e->fishIndex;
        if (s != 0x2e && s != 0x2d) {
            if (s == 0x29 || s == 0x37 || s == 0x2b) {
                AquariumFish_ClampHeadingSideways(e);
            }
            AquariumFish_TurnAtTankEnds(e);
            AquariumFish_UpdateAvoid(e);
        } else {
            if (e->pos.z > 0x13dc2) {
                e->pos.z = 0x13dc2;
            }
        }
    }
    if (e->state != 2 && e->state != 6) {
        if (e->fishIndex == 0x2b || e->fishIndex == 0x37) {
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
    e->stateTimer++;
    AquariumFish_CheckTouched(e);
}

extern "C" void AquariumSwimFish_SetupFreshwater(E864 *e) {
    if (sAquariumFishParams[e->fishIndex].rank == 0) {
        e->hitBoxOwner = e;
    }
    e->contactFish = e->fishIndex;
    AquariumFish_LoadParams(e);
    if (e->hasTurnAnims) {
        Model_setInitCallback((u8 *)e + 0x64, (void *)AquariumFish_InstallJointCallbacks, e);
    }
}

extern "C" void AquariumSwimFish_UpdateFreshwater(E864 *e) {
    (e->*sAquariumSwimStates[e->state])();
    if (sAquariumFishParams[e->fishIndex].rank == 0) {
        u8 *p1 = &e->contactFish;
        u8 b = *p1;
        if (e->lastContactFish != b && b != e->fishIndex) {
            e->lastContactFish = b;
            if (e->state != 1) {
                AquariumFish_StartFlee(e, (V3 *)((u8 *)sAquariumFish[*p1] + 0x1a8));
            }
        }
    }
    AquariumFish_UpdateWallTurn(e);
    u8 m = e->state;
    if (m == 5) {
        if (e->speed < 0xcd) goto skip;
    }
    if (m == 6) goto skip;
    AquariumFish_UpdateDepth(e);
    {
        s32 s = e->fishIndex;
        if (s == 0x1d) {
            AquariumFish_UpdatePitch(e, 0xe38, 0x4b0);
        } else {
            u32 k = sAquariumFishParams[s].rank;
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
    e->stateTimer++;
    AquariumFish_CheckTouched(e);
}

extern "C" void AquariumFish_JointCalcPre(Cb *c) {
    void *m = c->pRenderObj->ptrUser;
    if (m) {
        BlendAnimModel_onJointCalcPre((u8 *)m + 0x64, c);
    }
}

extern "C" void AquariumFish_JointCalcPost(Cb *c) {
    void *m = c->pRenderObj->ptrUser;
    if (m) {
        BlendAnimModel_onJointCalcPost((u8 *)m + 0x64, c);
    }
}

extern "C" void AquariumFish_InstallJointCallbacks(Cb *c) {
    c->nodeDescCallback = (void *)AquariumFish_JointCalcPre;
    c->nodeDescCallbackTiming = 1;
    c->nodeDescCallback = (void *)AquariumFish_JointCalcPost;
    c->nodeDescCallbackTiming = 2;
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
                    if (Vec_DistSqXZ(&e->pos, &v) <= 0x9000) {
                        s32 d = e->pos.y - v.y;
                        if (d < 0) d = -d;
                        if (d <= 0x3000) {
                            out->x = v.x;
                            out->y = v.y;
                            out->z = v.z;
                            r = TRUE;
                        }
                    }
                } else if (b == 1) {
                    if (Vec_DistSqXZ(&e->pos, &v) <= 0x9000) {
                        s32 d = e->pos.y - v.y;
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
    if (e->isTouchFleeing != 0) {
        if (e->state != 1) {
            e->isTouchFleeing = r;
        }
        return FALSE;
    }
    V3 v;
    if (AquariumFish_GetTouchPoint(e, &v)) {
        AquariumFish_StartFlee(e, &v);
        r = TRUE;
        e->isTouchFleeing = r;
    }
    return r;
}

extern "C" void AquariumFish_StartFlee(E864 *e, V3 *p) {
    if (e->isTouchFleeing == 0) {
        e->pitch = 0;
        e->state = 1;
        e->stateTimer = 0;
        if ((u8)(e->rank + 0xfc) <= 1) {
            if (e->contactTimer >= 0x7d) {
                e->fleeAngle = Math_AngleXZ(p, &e->pos);
            } else if (e->unk_1c0 >= 0) {
                e->fleeAngle = Aquarium_RandRange(0x38e4, 0x471c);
            } else {
                e->fleeAngle = -Aquarium_RandRange(0x38e4, 0x471c);
            }
        } else {
            e->fleeAngle = Math_AngleXZ(p, &e->pos);
        }
        if (e->wallTurnState == 1) {
            AquariumFish_CancelTurn(e);
        }
    }
}

extern "C" void _ZN16AquariumSwimFish5setupEv(E864 *e) {
    (e->*sAquariumSwimFishRoomFns[sAquariumRoom].a)();
}

extern "C" void _ZN16AquariumSwimFish6updateEv(E864 *e) {
    (e->*sAquariumSwimFishRoomFns[sAquariumRoom].b)();
}

extern "C" void AquariumFish_StateStart(E864 *e) {
    e->speed = 0;
    if (e->wallTurnState == 2) {
        e->targetAngle = e->targetAngle + Aquarium_RandAngle(0xb4, 0x96);
        e->turnRetryCount++;
    } else {
        e->targetAngle = e->targetAngle + Aquarium_RandAngle(e->turnRange, 0);
        e->turnRetryCount = 0;
    }
    e->stateTimer = 0;
    e->cruiseTime = Aquarium_RandRange(e->cruiseTimeMin, e->cruiseTimeMax);
    e->restTime = Aquarium_RandRange(e->restTimeMin, e->restTimeMax);
    e->pitchTimer = 0;
    if (e->contactFish == e->fishIndex) {
        s32 v = e->pos.y;
        if (v >= e->maxY) {
            e->verticalDir = -1;
        } else if (v <= e->minY) {
            e->verticalDir = 1;
        } else {
            s32 t = Aquarium_RandRange(0, 2);
            e->verticalDir = t > 0 ? 1 : -1;
        }
    }
    e->isLeveling = 0;
    e->state = 3;
    e->isTurningToTarget = 1;
}

extern "C" void AquariumFish_StateAccelerate(E864 *e) {
    s32 *p = &e->speed;
    *p = e->accel * e->stateTimer;
    Aquarium_StepXZ(&e->pos, *p, e->unk_1c0);
    if (e->speed >= e->maxSpeed) {
        e->stateTimer = 0;
        e->state = 4;
    }
}

extern "C" void AquariumFish_StateCruise(E864 *e) {
    s32 *p = &e->speed;
    *p = e->maxSpeed;
    Aquarium_StepXZ(&e->pos, *p, e->unk_1c0);
    if (e->stateTimer >= e->cruiseTime) {
        e->stateTimer = 0;
        e->state = 5;
    }
}

extern "C" void AquariumFish_StateDecelerate(E864 *e) {
    s32 t = e->maxSpeed;
    s32 *p = &e->speed;
    *p = t - e->decel * e->stateTimer;
    Aquarium_StepXZ(&e->pos, *p, e->unk_1c0);
    if (e->speed <= 0) {
        e->speed = 0;
        e->stateTimer = 0;
        e->state = 6;
    }
}

extern "C" void AquariumFish_StateRest(E864 *e) {
    e->speed = 0;
    if (e->stateTimer >= e->restTime) {
        e->stateTimer = 0;
        e->state = 2;
    }
}

extern "C" void AquariumFish_StateFlee(E864 *e) {
    if (e->stateTimer <= 0x28) {
        if ((u8)(e->rank + 0xfc) <= 1) {
            Math_ApproachS16Div(&e->unk_1c0, e->fleeAngle, 3, 0xaaa);
        } else {
            Math_ApproachS16Div(&e->unk_1c0, e->fleeAngle, 2, 0x4000);
        }
        s32 *p = &e->speed;
        *p = e->maxSpeed;
        Aquarium_StepXZ(&e->pos, *p, e->unk_1c0);
    } else {
        e->isTouchFleeing = 0;
        e->state = 2;
    }
}

extern "C" void AquariumFish_StateNone() {}

extern "C" void AquariumFish_StateStartFast(E864 *e) {
    e->stateTimer = 1;
    e->cruiseTime = Aquarium_RandRange(e->cruiseTimeMin, e->cruiseTimeMax);
    e->restTime = 0;
    e->pitchTimer = 0;
    if (e->contactCount != 0) {
        e->targetAngle += Aquarium_RandAngle(0x1e, 0xf);
    }
    if (e->contactFish == e->fishIndex) {
        if (e->pos.y >= e->maxY) {
            e->verticalDir = -1;
        } else if (e->pos.y <= e->minY) {
            e->verticalDir = 1;
        } else {
            e->verticalDir = Aquarium_RandRange(0, 2) > 0 ? 1 : -1;
        }
    }
    e->state = 3;
}

extern "C" void AquariumFish_StateSlowDown(E864 *e) {
    s32 t = e->maxSpeed;
    s32 *p = &e->speed;
    *p = t - e->decel * e->stateTimer;
    Aquarium_StepXZ(&e->pos, *p, e->unk_1c0);
    if (e->speed <= 0xf6) {
        e->speed = 0xf6;
        e->stateTimer = 3;
        e->state = 2;
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
    if (e->tankArea == 1) {
        lo = 0;
        hi = 0x22;
    } else {
        lo = -2;
        hi = 0x24;
    }
    s32 x = e->pos.x >> 12;
    if (x <= lo) {
        e->unk_1c0 = 0x4000;
        e->pos.y = (sAquariumFishParams[e->fishIndex].baseY << 12) >> 6;
    } else if (x >= hi) {
        e->unk_1c0 = -0x4000;
        e->pos.y = (sAquariumFishParams[e->fishIndex].baseY << 12) >> 6;
    }
}

extern "C" void AquariumFish_UpdateAvoid(E864 *e) {
    if (e->state != 1) {
        if (e->isHit != 0) {
            if (e->contactCount == 0) {
                AquariumFish_ClearContact(e);
                e->verticalDir = 1;
            } else {
                u32 c5 = e->contactFish;
                if (e->lastContactFish != c5) {
                    e->lastContactFish = c5;
                    e->contactTimer = 0;
                } else {
                    u8 *c = &e->contactTimer;
                    *c = *c + 1;
                    u32 n = *c;
                    if (n >= 0x7d) {
                        R *o = sAquariumFish[e->contactFish];
                        if (!o) {
                            return;
                        } else {
                            u32 ra = sAquariumFishParams[e->fishIndex].hitRadius;
                            u32 rb = sAquariumFishParams[o->fishIndex].hitRadius;
                            if (ra <= rb) {
                                AquariumFish_StartFlee(e, &o->pos);
                                e->contactTimer = 0;
                                return;
                            } else if (n >= 0x91) {
                                AquariumFish_StartFlee(e, &o->pos);
                                e->contactTimer = 0;
                                return;
                            }
                        }
                    }
                }
                {
                    if (e->state == 6 || (e->state == 5 && e->fishIndex >= 0x23)) {
                        e->state = 2;
                    }
                    u32 m = e->contactFlags;
                    if ((m & 8) != 0 || (m & 0x10) != 0) {
                        if (e->state != 4) {
                            u32 a = sAquariumFishParams[e->fishIndex].rank;
                            u32 b = sAquariumFishParams[e->contactFish].rank;
                            if (a <= b) {
                                e->state = 4;
                                e->stateTimer = 0;
                            }
                        }
                    }
                    m = e->contactFlags;
                    if (m >= 0x40) {
                        if (e->isAvoiding == 0) {
                            AquariumFish_AvoidOther(e);
                        }
                    } else if ((m & 0x20) != 0) {
                        e->verticalDir = 1;
                        e->isAvoiding = 1;
                    }
                    Math_StepS16(&e->unk_1c0, e->avoidAngle, 0x38e);
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
    slot = &sAquariumFish[e->contactFish];
    o = *slot;
    if (o) {
        v = &o->pos;
        a = e->unk_1c0;
        if (a < 0) a = -a;
        b = o->unk_1c0;
        if (b < 0) c = -b; else c = b;
        if (a >= 0x4000 && c >= 0x4000) {
            if (e->pos.z > v->z) {
                e->avoidAngle = b + 0x8000;
            } else if (o->isAvoiding == 0) {
                o->isAvoiding = 1;
                (*slot)->avoidedFish = e->fishIndex;
                (*slot)->avoidAngle = e->unk_1c0 + 0x8000;
            }
            AquariumFish_SplitDepth(e, slot);
        } else if (a <= 0x4000 && c <= 0x4000) {
            if (e->pos.z < v->z) {
                e->avoidAngle = b + 0x8000;
            } else if (o->isAvoiding == 0) {
                o->isAvoiding = 1;
                (*slot)->avoidedFish = e->fishIndex;
                (*slot)->avoidAngle = e->unk_1c0 + 0x8000;
            }
            AquariumFish_SplitDepth(e, slot);
        } else {
            s32 r = Math_AngleXZ(v, &e->pos);
            s32 d = (s16)(r - e->unk_1c0);
            if (d < 0) {
                e->avoidAngle = r - 0x4000;
            } else {
                e->avoidAngle = r + 0x4000;
            }
        }
    }
}

extern "C" void AquariumFish_ClearContact(R *e) {
    e->contactFlags = 0;
    e->isAvoiding = 0;
    e->avoidAngle = e->unk_1c0;
    u32 t = e->contactFish;
    if (t != (u32)e->fishIndex) {
        R *o = sAquariumFish[t];
        if (o) {
            o->isAvoiding = 0;
        }
        e->contactFish = e->fishIndex;
        e->avoidedFish = e->fishIndex;
    }
}

extern "C" s32 Aquarium_GetContactSide(R *a, R **b) {
    s32 r4 = (*b)->unk_1c0;
    s32 y, x;
    s32 t = (s16)(Math_AngleXZ(&a->pos, &(*b)->pos) - 0x4000);
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
    if (a->maxY < (*b)->maxY) {
        a->verticalDir = -1;
        R *o = *b;
        if (o->isAvoiding == 0) {
            o->verticalDir = 1;
        }
    } else {
        a->verticalDir = 1;
        R *o = *b;
        if (o->isAvoiding == 0) {
            o->verticalDir = -1;
        }
    }
}

extern "C" void AquariumFish_TurnToTarget(E864 *e) {
    if (e->speed > 0x99a || e->state != 5) {
        if (e->state != 1) {
            if (e->isTurningToTarget != 0) {
                BOOL r;
                if (sAquariumFishParams[e->fishIndex].rank >= 4) {
                    r = Math_StepS16(&e->unk_1c0, e->targetAngle, 0x88) ? TRUE : FALSE;
                } else {
                    r = Math_StepS16(&e->unk_1c0, e->targetAngle, 0x16c) ? TRUE : FALSE;
                }
                if (r) {
                    e->isTurningToTarget = 0;
                }
            }
        }
    }
}

extern "C" void AquariumFish_UpdateAnimSpeed(E864 *e, s32 lo) {
    s32 v;
    u8 m = e->state;
    if (m == 1) {
        v = 0x1800;
    } else {
        s32 t = e->speed;
        if (m == 3) {
            t = t * 3;
        } else if (m == 5) {
            t = func_02133150(t, 3);
        }
        v = func_01ffcb0c(FX_Div(t, e->maxSpeed), 0x1800);
        if (v < lo) {
            v = lo;
        } else if (v > 0x1800) {
            v = 0x1800;
        }
    }
    e->animFrameStep = v;
}

void AquariumFish::setup() {
}

void AquariumFish::update() {
}

extern "C" void AquariumFish_KeepInsideX(R *e) {
    if (e->state != 1) {
        s32 x = e->pos.x;
        if (x > 0x5000 && x < 0x1e000) {
        } else {
            AquariumFish_ClampHeadingSideways(e);
            if (e->state == 6) {
                e->state = 2;
            }
        }
    }
}

void AquariumFishHitBox::onCollide(u32 a, u32 idx, u32 c) {
    R *q0 = owner;
    if (q0) {
        R *p = q0;
        if (idx >= 0x38) {
            p->contactFlags |= 0x20;
        } else {
            if (sAquariumFishParams[idx].rank != 0 || idx < 0x23) {
                R **q = &sAquariumFish[idx];
                AquariumFish_RecordContact(this, &p, q);
                AquariumFish_RecordContact(this, q, &p);
            }
        }
    }
}

extern "C" void AquariumFish_RecordContact(void *unused, R **pp, R **q)
{
    (*pp)->contactCount++;
    R *o = *pp;
    u32 b;
    s32 a;
    a = o->fishIndex;
    b = o->contactFish;
    s32 c = (*q)->fishIndex;
    s32 r2 = Aquarium_GetContactSide(o, q);
    R *o2 = *pp;
    u32 r1 = o2->contactFlags;
    o2->contactMask[c >> 5] |= 1 << (c & 31);
    if (b == a) {
        (*pp)->contactFlags = r2 | r1;
        (*pp)->contactFish = c;
        (*pp)->isAvoiding = 0;
    } else {
        u32 rc = sAquariumFishParams[c].rank;
        u32 rb = sAquariumFishParams[b].rank;
        if (rb < rc) {
            (*pp)->contactFlags = r2 | r1;
            (*pp)->contactFish = c;
            (*pp)->isAvoiding = 0;
        } else if (rb == rc) {
            if ((s32)r1 < r2) {
                (*pp)->contactFlags = r2 | r1;
                (*pp)->contactFish = c;
                (*pp)->isAvoiding = 0;
            }
        }
    }
}

extern "C" void AquariumFish_ResetContacts(R *self)
{
    s32 t0 = self->fishIndex;
    s32 c0 = self->contactFish;
    if (c0 != t0) {
        if ((self->contactMask[c0 >> 5] & (1 << (c0 & 31))) == 0) self->contactFish = t0;
        u8 *p2 = &self->avoidedFish;
        s32 c1 = *p2;
        if ((self->contactMask[c1 >> 5] & (1 << (c1 & 31))) == 0) {
            *p2 = self->fishIndex;
            self->isAvoiding = 0;
        }
    }
    self->contactMask[0] = 0;
    self->contactMask[1] = 0;
    self->contactCount = 0;
    self->hitTankWall = 0;
}

extern "C" void AquariumFish_SteerFromWall(E864 *self)
{
    if (self->isHit == 0 && self->isTurningToTarget == 0 && self->hitTankWall != 0) {
        s32 v = self->unk_1c0;
        if (v >= 0) {
            s32 a = v;
            if (a < 0) a = -a;
            if (a >= 0x4000) {
                Math_StepS16(&self->unk_1c0, 0x471c, 0x222);
            } else {
                Math_StepS16(&self->unk_1c0, 0x38e4, 0x222);
            }
        } else {
            s32 a = v;
            if (a < 0) a = -a;
            if (a <= -0x4000) {
                Math_StepS16(&self->unk_1c0, -0x471c, 0x222);
            } else {
                Math_StepS16(&self->unk_1c0, -0x38e4, 0x222);
            }
        }
    }
}

extern "C" void AquariumFish_LoadParams(E864 *self)
{
    const Rec *t = sAquariumFishParams;
    s32 *pi = &self->fishIndex;
    self->maxSpeed = (s32)(t[*pi].maxSpeed << 12) >> 10;
    self->accel = (s32)(t[*pi].accel << 12) >> 12;
    self->decel = (s32)(t[*pi].decel << 12) >> 13;
    self->cruiseTimeMax = t[*pi].cruiseTimeMax;
    self->cruiseTimeMin = t[*pi].cruiseTimeMin;
    self->restTimeMax = t[*pi].restTimeMax;
    self->restTimeMin = t[*pi].restTimeMin;
    self->turnRange = t[*pi].turnRange;
    self->verticalSpeed = (s32)(t[*pi].verticalSpeed << 12) >> 10;
    self->maxY = ((s32)(t[*pi].maxY << 12) >> 5) - 0x1000;
    self->minY = ((s32)(t[*pi].minY << 12) >> 6) - 0x1000;
}

extern "C" BOOL MuseumAquarium_RequestFishModel(Mgr *self, s32 i)
{
    if (i < sAquariumFirstFish || i >= sAquariumEndFish) return FALSE;
    R **p = &sAquariumFish[i];
    if (*p == NULL) return FALSE;
    (*p)->fishIndex = i;
    (*p)->loadState = 1;
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
            if ((*p)->animFiles[j]) {
                Mem_Free((void *)(*p)->animFiles[j]);
                (*p)->animFiles[j] = z;
            }
        }
        (*p)->loadState = 0;
        AnimModel_detachJointAnim((u8 *)*p + 0x64);
        CachedModel_release((u8 *)*p + 0x64);
        PooledModel_unload((u8 *)*p + 0x168);
        ModelSlotPool_release((u8 *)self + 0x7f8, (u8 *)*p + 0x166);
        switch ((*p)->fishIndex) {
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
        (*p)->fishIndex = -1;
    }
}

extern "C" BOOL _ZN14MuseumAquarium8onCreateEv(Mgr *self)
{
    ModelSlotPool_init((u8 *)self + 0x7f8, 0x38, 0x800, 0x80, 0xc00, (void *)MuseumAquariumHeap_Create, (void *)MuseumAquariumHeap_Destroy, 0);
    sAquariumRoom = (s32)self->param;
    if (sAquariumRoom == 0) {
        self->obstacles[0].box[0] = 0xc000;
        self->obstacles[0].box[1] = 0x700;
        self->obstacles[0].box[2] = 0x5600;
        self->obstacles[0].box[3] = 0x1000;
        self->obstacles[0].box[4] = 0x800;
        self->obstacles[1].box[0] = 0x15200;
        self->obstacles[1].box[1] = 0x700;
        self->obstacles[1].box[2] = 0x6200;
        self->obstacles[1].box[3] = 0x1000;
        self->obstacles[1].box[4] = 0xd00;
        self->obstacles[2].box[0] = 0x9c00;
        self->obstacles[2].box[1] = 0x700;
        self->obstacles[2].box[2] = 0x14b00;
        self->obstacles[2].box[3] = 0xa00;
        self->obstacles[2].box[4] = 0xa00;
        self->obstacles[3].box[0] = 0x15900;
        self->obstacles[3].box[1] = 0x700;
        self->obstacles[3].box[2] = 0x13900;
        self->obstacles[3].box[3] = 0x1000;
        self->obstacles[3].box[4] = 0x800;
        *(u32 *)&self->obstacles[4].box[0] = 0x14c00;
        self->obstacles[4].box[1] = 0x700;
        self->obstacles[4].box[2] = 0x14a00;
        self->obstacles[4].box[3] = 0x700;
        self->obstacles[4].box[4] = 0x700;
        sAquariumObstacleCount = 5;
        MuseumAquarium_CreateFreshwaterFish(self);
        TouchPicker_addBox(Scene_GetTouchPicker(), (u8 *)self + 0x2a8, &sAquariumTankCenterA, 0x11c00, 0x5c00, 0x3800, 0, 0x13, 0);
        TouchPicker_addBox(Scene_GetTouchPicker(), (u8 *)self + 0x550, &sAquariumTankCenterB, 0x11c00, 0x5c00, 0x3800, 0, 0x13, 1);
    } else {
        self->obstacles[0].box[0] = 0x8b00;
        self->obstacles[0].box[1] = 0xfffff300;
        self->obstacles[0].box[2] = 0x13e00;
        self->obstacles[0].box[3] = 0x800;
        self->obstacles[0].box[4] = 0x1200;
        self->obstacles[1].box[0] = 0x9e00;
        self->obstacles[1].box[1] = 0xfffff300;
        self->obstacles[1].box[2] = 0x14700;
        self->obstacles[1].box[3] = 0x1100;
        self->obstacles[1].box[4] = 0x1500;
        self->obstacles[2].box[0] = 0x12f00;
        self->obstacles[2].box[1] = 0xfffff300;
        self->obstacles[2].box[2] = 0x13d00;
        self->obstacles[2].box[3] = 0xa00;
        self->obstacles[2].box[4] = 0xd00;
        self->obstacles[3].box[0] = 0x16e00;
        self->obstacles[3].box[1] = 0xfffff300;
        self->obstacles[3].box[2] = 0x13100;
        self->obstacles[3].box[3] = 0x1200;
        self->obstacles[3].box[4] = 0x1400;
        sAquariumObstacleCount = 4;
        self->extraBox[0] = 0x9e00;
        self->extraBox[1] = 0xfffff300;
        self->extraBox[2] = 0x14700;
        self->extraBox[3] = 0xc00;
        self->extraBox[4] = 0x2000;
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
        u32 t = sAquariumFishParams[i].numAnims;
        if (t == 3) e->hasTurnAnims = 1;
        if (!MuseumAquarium_LoadFishAnims(self, p, i, t)) {
            MuseumAquarium_ReleaseFish(self, i);
            (*p)->hasTurnAnims = 0;
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
        if (sAquariumFishParams[i].numAnims == 3) {
            (*p)->hasTurnAnims = 1;
        }
        if (!MuseumAquarium_LoadFishAnims(o, p, i, sAquariumFishParams[i].numAnims)) {
            MuseumAquarium_ReleaseFish(o, i);
            (*p)->hasTurnAnims = 0;
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
        (*p)->animFiles[i] = File_LoadAlloc(buf, (s32)gCurrentHeap, 4, z);
        if ((*p)->animFiles[i] == 0) {
            return 0;
        }
    }
    return 1;
}

extern "C" void MuseumAquarium_UpdateFish(Mgr *o, R **p, s32 i) {
    R *e = *p;
    u32 k = (u8)e->loadState;
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
    V3 *v = &(*p)->pos;
    if (sAquariumRoom == 0) {
        s32 a = func_01ffcb0c((*p)->hitPushX, 0x99a);
        s32 b = func_01ffcb0c((*p)->hitPushZ, 0x99a);
        if ((*p)->isHit != 0) {
            s32 lv = (*p)->hitOtherId;
            if (lv >= 0x38) {
                a = Unk_ov004_0222d460_Clamp(a);
                b = Unk_ov004_0222d460_Clamp(b);
            }
            v->x = v->x + a;
            v->z = v->z + b;
        }
    } else if (sAquariumRoom == 1) {
        s32 a = func_01ffcb0c((*p)->hitPushX, 0x866);
        s32 b = func_01ffcb0c((*p)->hitPushZ, 0x866);
        if ((*p)->isHit != 0) {
            v->x = v->x + a;
            v->z = v->z + b;
        }
    }
    (*p)->update();
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
        StaticCollider_setupAtPos(obj, (u8 *)o + 0xa0 + off, *(s32 *)(s + 0xac), *(s32 *)(s + 0xb0), 0x102, 0x140, z, 0xff, 0x1000);
        ActorCollider_submit(obj);
    }
    if (sAquariumRoom == 1) {
        StaticCollider_setupAtPos((u8 *)o + 0x244, (u8 *)o + 0x294, *(s32 *)((u8 *)o + 0x2a0), *(s32 *)((u8 *)o + 0x2a4), 0x202, 0x140, 0, 0xff, 0x1000);
        ActorCollider_submit((u8 *)o + 0x244);
    }
}

extern "C" s32 MuseumAquarium_LoadFishModel(Mgr *o, R **p, s32 idx) {
    s32 res = 0;
    s32 n = (*p)->fishIndex;
    s32 a = ModelSlotPool_acquire((u8 *)o + 0x7f8, (*p)->modelSlot);
    void *b = (*p)->pooledModel;
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
        (*p)->targetAngle = (*p)->unk_1c0;
        (*p)->setup();
        q = (u8 *)(*p) + 0x64;
        Model_setResource(q, PooledModel_getModel(b), 0);
        c = ModelSlot_getHeap(a);
        if ((*p)->animFiles[0] == 0) {
            MuseumAquarium_ReleaseFish(o, idx);
            return 0;
        }
        d = func_021065f8(func_021065dc((*p)->animFiles[0]), 0);
        if (AnimModel_allocAnmObj(q, c)) {
            BlendAnimModel_initAnim(q, d, 0, 0x1000, 1, 0);
            AnimModel_attachAnim(q);
            CachedModel_allocJointRecord(q, ModelSlot_getHeap(a));
            (*p)->loadState = 2;
            (*p)->contactFish = (*p)->fishIndex;
            MuseumAquarium_CalcFishMtx(o, p);
            res = 1;
        }
    }
    return res;
}

extern "C" void MuseumAquarium_CalcFishMtx(Mgr *o, R **p) {
    R *e = *p;
    V3 *v = &e->pos;
    Mtx43_SetTranslate(&data_021f47e0, v->x, v->y, v->z);
    Mtx43_RotateY(&data_021f47e0, (*p)->unk_1c0);
    Mtx43_RotateX(&data_021f47e0, (*p)->pitch);
    e->modelMtx = data_021f47e0;
}

extern "C" s32 _ZN14MuseumAquarium6onDrawEv(Mgr *o) {
    s32 i = sAquariumFirstFish;
    R **p = &sAquariumFish[i];
    for (; i < sAquariumEndFish; p++, i++) {
        if (*p) {
            if ((*p)->loadState == 2) {
                V3 v;
                switch ((*p)->fishIndex) {
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

extern "C" s32 _ZN14MuseumAquarium8onDeleteEv(Mgr *o) {
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
            v = &(*p)->pos;
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
            v->y = ((sAquariumFishParams[i].baseY << 12) >> 6) - 0x1000;
            {
                R *e = *p;
                V3 *d = &e->prevPos;
                e->prevPos.x = v->x;
                d->y = v->y;
                d->z = v->z;
            }
            (*p)->rank = sAquariumFishParams[i].rank;
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
            e[1] = ((sAquariumFishParams[i].baseY << 12) >> 6) - 0x1000;
            s32 *d = (s32 *)((u8 *)*pp + 0x1b4);
            d[0] = e[0];
            d[1] = e[1];
            d[2] = e[2];
            *((u8 *)*pp + 0x164) = sAquariumFishParams[i].rank;
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
    v = &o1->pos;
    V3 *q;
    V3 *ep;
    s32 off;
    s32 c164 = o1->rank;
    w = (sAquariumFishParams[type].hitRadius << 12) >> 7;
    if (o1->hasCollision == 0) {
        return;
    }
    s32 h = (sAquariumFishParams[type].hitHeight << 12) >> 7;
    if (sAquariumRoom == 0) {
        StaticCollider_setupAtPos(&o1->unk_04, v, w, h, 0x100, 0x140, 0x14, type, (c164 << 12) >> 3);
    } else if (sAquariumRoom == 1) {
        if (type == 0x24) {
            u8 *g = (u8 *)sAquariumJellyfish;
            if (g != NULL) {
                StaticCollider_setupAtPos(&o1->unk_04, g + 0x26c, w, h, 0x100, 0x340, 0x14, type, (c164 << 12) >> 3);
            }
        } else if (type == 0x23) {
            u8 *g = (u8 *)sAquariumSeaButterfly;
            if (g != NULL) {
                StaticCollider_setupAtPos(&o1->unk_04, g + 0x264, w, h, 0x100, 0x340, 0x14, type, (c164 << 12) >> 3);
            }
        } else if (type == 0x26) {
            StaticCollider_setupAtPos(&o1->unk_04, v, w, h, 0x100, 0x140, 0x14, type, (c164 << 12) >> 3);
        } else {
            StaticCollider_setupAtPos(&o1->unk_04, v, w, h, 0x100, 0x340, 0x14, type, (c164 << 12) >> 3);
        }
    }
    ActorCollider_submit(&(*ctx)->unk_04);
    len = (sAquariumFishParams[type].unk_10 << 12) >> 7;
    base = w - (len >> 1);
    s32 k;
    k = 0;
loop0:
    {
        o2 = (*ctx);
        q = &o2->pos;
        off = k * 12;
        V3 *arr = o2->bodyEnds;
        ep = (V3 *)((u8 *)arr + off);
        *(s32 *)((u8 *)arr + off) = o2->pos.x;
        ep->y = q->y;
        ep->z = q->z;
        if (k == 0) {
            o1 = (*ctx);
            *(s32 *)((u8 *)o1->bodyEnds + off) += func_01ffcb0c(base, data_02135f44[(o1->unk_1c0u >> 4) * 2]);
            o2 = (*ctx);
            ((V3 *)((u8 *)o2->bodyEnds + off))->z += func_01ffcb0c(base, data_02135f44[(o2->unk_1c0u >> 4) * 2 + 1]);
            o3 = (*ctx);
            ep = (V3 *)((u8 *)o3->bodyEnds + off);
            bx0 = *(s32 *)((u8 *)o3->bodyEnds + off);
            bz0 = ep->z;
            o = o3;
        } else {
            s32 t;
            o3 = (*ctx);
            t = (u16)(s16)((s16)o3->unk_1c0 + 0x8000);
            t = (t >> 4) * 2;
            *(s32 *)((u8 *)o3->bodyEnds + off) += func_01ffcb0c(base, data_02135f44[t]);
            e = (V3 *)((u8 *)(*ctx)->bodyEnds + off);
            e->z += func_01ffcb0c(base, data_02135f44[t + 1]);
            o = (*ctx);
            ep = (V3 *)((u8 *)o->bodyEnds + off);
            bx1 = *(s32 *)((u8 *)o->bodyEnds + off);
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
            switch (o->tankArea) {
            case 0:
                if (Collision_ClampToRect(ep, len, &sAquariumTankCenterA, 0x1a000, 0x4dc3)) {
                    (*ctx)->hitTankWall = 1;
                }
                break;
            case 1:
                if (Collision_ClampToRect(ep, len, &sAquariumTankCenterA, 0x26000, 0x4dc3)) {
                    (*ctx)->hitTankWall = 1;
                }
                break;
            case 2:
                if (Collision_ClampToRect(ep, len, &sAquariumTankCenterA, 0x2a000, 0x4dc3)) {
                    (*ctx)->hitTankWall = 1;
                }
                break;
            }
        }
        if (k == 0) {
            o = (*ctx);
            ep = (V3 *)((u8 *)o->bodyEnds + off);
            ax0 = *(s32 *)((u8 *)o->bodyEnds + off);
            az0 = ep->z;
        } else {
            o = (*ctx);
            ep = (V3 *)((u8 *)o->bodyEnds + off);
            ax1 = *(s32 *)((u8 *)o->bodyEnds + off);
            az1 = ep->z;
        }
    }
    k++;
    if (k < 2) goto loop0;
    Aquarium_ApplyCorrection(self, &o->pos.x, bx0, ax0, bx1, ax1);
    Aquarium_ApplyCorrection(self, &(*ctx)->pos.z, bz0, az0, bz1, az1);
    V3 *dst = &(*ctx)->prevPos;
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
    func_020f440c(sound);
}

Unk_ov004_0222c9d0::~Unk_ov004_0222c9d0() {
    func_020f43fc(sound);
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
ProcProfile sMuseumAquariumProfile = {(void *(*)())MuseumAquarium_Create, 0xc3, 0xc4};
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

