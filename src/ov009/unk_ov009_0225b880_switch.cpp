// mwcc-version: 1.2/base
#include "types.h"

// Library base class chain (header GameProc.h rebuilt so that the vtable names the real symbols:
// slot 08 is Character::postCreate(int)).
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20(u32 a);
    virtual BOOL onDraw();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual BOOL vfunc_30();
    virtual BOOL createHeapFitted();
    virtual BOOL createHeap();
    virtual BOOL vfunc_3c();
    virtual ~ProcBase();
};

class GameProc : public ProcBase {
public:
    GameProc() {}
    virtual ~GameProc() {}

    /* 0x04 */ u8 unk_04[0x4c];
};

struct Unk_ov009_0225b880_Vec3 {
    s32 x, y, z;
};

// Returned through a hidden pointer by vfunc_b4 (func_ov009_0225b884)
struct Unk_ov009_0225da90_Vec3 {
    s32 x, y, z;
    Unk_ov009_0225da90_Vec3() {}
};

struct Unk_ov009_0225cb4c_V3 : Unk_ov009_0225b880_Vec3 {
    Unk_ov009_0225cb4c_V3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    Unk_ov009_0225cb4c_V3() {}
};

class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor();

    /* 0x50 */ u8 unk_50[0xc];
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xc4 - 0x90];
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ s32 unk_c8;
    /* 0xcc */ s32 unk_cc;
    /* 0xd0 */ s16 unk_d0;
    /* 0xd2 */ u16 pad_d2;
};

struct Unk_0203e5d0_Node {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_0203e5d0_Node *unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ void *unk_0c;
};

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual void postCreate(s32 v);
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(Character *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225b880_Vec3 *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void func_0203e42c();
    void setInteractionRange(s32 v);

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

struct Unk_ov009_0225b880_Target {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

// Real class of the secondary base's first part (vtable 0x020e2a30 in main)
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_08();
    void setFileName(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

// Secondary base at +0xec (vtable 0x020ddcf0 in main)
class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_88();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void onActionTag4();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 a);
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

    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ Unk_ov009_0225b880_Target *unk_3c;
    /* 0x40 */ u8 pad_40[2];
    /* 0x42 */ u16 unk_42;
};

struct Unk_ov009_0225bc88_Blk {
    s64 v[6];
};

struct Unk_ov009_0225bf3c_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 rest : 6;
};

struct Unk_ov009_0225c644_Msg {
    u32 v[4];
    Unk_ov009_0225c644_Msg() {}
};


struct Unk_ov009_0225bb0c_Tmp {
    u32 pad[4];
};

struct Vec3 {
    s32 x, y, z;
};
struct Unk_0202f2ac_V3 {
    s32 x, y, z;
};
struct Unk_02031e10_Vec {
    s32 x, y, z;
};

struct Unk_ov009_0225e4e0_Col {
    u8 r, g, b, a;
    Unk_ov009_0225e4e0_Col(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
};

// Scratch object of vfunc_78 (its empty ctor/dtor are inlined; mwcc still emits one unreferenced weak dtor)
struct Unk_ov009_0225bce0_Pad {
    s32 v[2];
    Unk_ov009_0225bce0_Pad() {}
    ~Unk_ov009_0225bce0_Pad() {}
};

// ---- main-module helper classes (declarations only)
struct Unk_020e44d4 {
    Unk_020e44d4();
    static void *operator new(unsigned long, void *p) { return p; }
    u8 pad[0x44];
};

struct Unk_020b6960 {
    BOOL func_020b6818(Unk_020e44d4 *o, Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    BOOL func_020b6848(Unk_020e44d4 *o);
};

struct Unk_020b28ac {
    void func_020b28ac(s32 *a, s32 *b, s32 *c, s32 *d);
    BOOL func_020b2958(s32 *a, s32 *b, s32 *c, u32 i);
    u32 func_020b29e4();
};

class Unk_020abea8 {
public:
    void func_020abed4(Vec3 *pos);
    BOOL func_020ac0c4(Vec3 *pos, s32 size, s32 shift, s32 idx, s32 a, s32 b, s32 heap);
    Unk_020abea8 *func_020ac1e0();

    u8 pad[0x34];
};

struct Unk_020d8e14 {
    void func_0203535c(s32 a);
};

struct Unk_02034518 {
    u8 pad_00[0x2d0];
    Unk_020d8e14 unk_2d0;
};

class BuildingActor;
struct Unk_ov009_0225cc24_Obj;

class Unk_020d8ccc {
public:
    Unk_020d8ccc();
    virtual s32 vfunc_00(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void vfunc_04(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void vfunc_08(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void vfunc_0c(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void vfunc_10(Unk_ov009_0225b880_Vec3 *a, Unk_ov009_0225cc24_Obj *o, s32 off);
    s32 func_0202f274(Unk_0202f2ac_V3 *p);
    BOOL func_0202f050(Unk_0202f2ac_V3 *out, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *q);

    s32 unk_04[9];
    s32 unk_28, unk_2c, unk_30, unk_34;
};

class Unk_020d8d74 : public Unk_020d8ccc {
public:
    Unk_020d8d74();
    void func_02031e10(Unk_02031e10_Vec *a, Unk_02031e10_Vec *b, Unk_02031e10_Vec *c, s32 d);

    Unk_020d8d74 *unk_38;
    s32 unk_3c, unk_40, unk_44;
    s32 unk_48;
};

// ov009 element (vtable 0x0225e280, size 0x54), one per ground-collision triangle
class BuildingCollider : public Unk_020d8d74 {
public:
    BuildingCollider();
    virtual void vfunc_10(Unk_ov009_0225b880_Vec3 *a, Unk_ov009_0225cc24_Obj *o, s32 off);
    BOOL isPlayerAtDoor(Unk_ov009_0225b880_Vec3 *v, s32 off, Unk_ov009_0225cc24_Obj *o);
    static void *operator new(unsigned long, void *p) { return p; }

    /* 0x4c */ BuildingActor *unk_4c;
    /* 0x50 */ s32 unk_50;
};

struct Unk_ov009_0225cc24_Obj {
    /* 0x00 */ u8 pad_00[0xc];
    /* 0x0c */ u16 unk_0c;
    /* 0x0e */ u8 pad_0e[0x8e - 0xe];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0x98 - 0x90];
    /* 0x98 */ s32 unk_98;
};

struct Unk_ov009_0225cd48_Item {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
};

struct BuildingShadowTable {
    Unk_ov009_0225cd48_Item *getEntry(u32 i);
    u32 getCount();

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_ov009_0225cd48_Item unk_04[1];
};

// 0x50-byte record of the static array sBuildingResources (0x22 entries)
struct BuildingResources {
    BuildingResources();
    ~BuildingResources();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ BuildingShadowTable *unk_1c;
    /* 0x20 */ s32 unk_20[4];
    /* 0x30 */ s32 unk_30[4];
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
};

struct Unk_ov009_0225d2a4_Obj {
    u32 pad[0x6c / 4];
};

struct Unk_ov009_0225bbdc_Target {
    /* 0x00 */ u8 pad_00[0x28];
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
};

struct Unk_ov009_0225df84_Obj;
struct Unk_ov009_0225df94_Target;

// Sub-object at +0x234 (Unk_0213b9c4 + flag byte, 0x44 bytes); its destructor is emitted in this overlay.
class SndSeEmitter {
public:
    virtual ~SndSeEmitter();
};

// Vtable 0x0213b9c4 (ctor func_020f3e50 in main); its destructor is emitted in this overlay.
class Unk_0213b9c4 : public SndSeEmitter {
public:
    Unk_0213b9c4();
    virtual ~Unk_0213b9c4();

    /* 0x04 */ u8 pad_04[0x3c];
};

class BuildingSeEmitter {
public:
    BuildingSeEmitter();

    void playSeHeld(u32 a);
    void playSe(u32 a);
    void deactivate();
    void setPosition(Unk_ov009_0225b880_Vec3 *v);
    void activate();

    /* 0x00 */ Unk_0213b9c4 unk_00;
    /* 0x40 */ u8 unk_40;
};

class BuildingActor : public Character, public TalkMsgRequest {
public:
    BuildingActor();
    virtual ~BuildingActor();
    virtual BOOL vfunc_00();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20(u32 a);
    virtual BOOL preDraw();
    virtual BOOL vfunc_48(Character *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual Unk_ov009_0225b880_Vec3 *getInteractionPos();
    virtual void vfunc_60(u32 a, void *b);
    virtual s32 func_ov009_0225d708();
    virtual s32 func_ov009_0225d6f0();
    virtual s32 vfunc_6c(s32 a);
    virtual BOOL func_ov009_0225dd58();
    virtual void func_ov009_0225ca98();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual BOOL vfunc_8c();
    virtual BOOL vfunc_90();
    virtual BOOL vfunc_94();
    virtual BOOL vfunc_98();
    virtual BOOL vfunc_9c();
    virtual s32 vfunc_a0();
    virtual char *vfunc_a4();
    virtual char *vfunc_a8();
    virtual char *vfunc_ac();
    virtual BOOL vfunc_b0();
    virtual Unk_ov009_0225da90_Vec3 vfunc_b4();
    virtual BOOL vfunc_b8(Unk_ov009_0225bc88_Blk *out);

    s32 getEntranceType();
    s32 getViewRangeX();
    s32 getViewRangeFront();
    s32 getViewRangeBack();
    BOOL setEntryState(s32 a);
    BOOL execEntryCheck();
    BOOL enterEntryCheck();
    void execEntryIdle();
    BOOL enterEntryIdle();
    void updateEntryState();
    void execDoorNoAnimOut();
    BOOL enterDoorNoAnimOut();
    void execDoorNoAnimIn();
    BOOL enterDoorNoAnimIn();
    void execDoorSlideClose();
    BOOL enterDoorSlideClose();
    void execDoorSlideOpen();
    BOOL enterDoorSlideOpen();
    void execDoorOpenOut();
    BOOL enterDoorOpenOut();
    void execDoorOpenIn();
    BOOL enterDoorOpenIn();
    void execDoorIdle();
    BOOL enterDoorIdle();

    void destroyColliders();
    void submitColliders();
    void createColliders(Unk_ov009_0225bc88_Blk *m);
    void destroyShadows();
    void updateShadows(Unk_ov009_0225bc88_Blk *m);
    void createShadows(Unk_ov009_0225bc88_Blk *m);
    void updateBaseMatrix(Unk_ov009_0225bc88_Blk *out);
    void func_ov009_0225d0d8();
    BuildingResources *getResources();
    void makeCurvedMatrix(Unk_ov009_0225bc88_Blk *out);
    BOOL loadResources(char *a, char *b, char *c);
    BOOL setupModel(char *a, char *b, char *c);
    void *getBtaAnim(u32 idx);
    s32 getBca2Anim();
    void setupAnims();
    void initEntryArea();

    BOOL tryOpenDoorForExit();
    BOOL openDoorForExit();
    BOOL tryOpenDoorForEntry();
    BOOL openDoorForEntry();
    BOOL isDoorIdle();
    void updateOffscreen();
    BOOL isOffscreen();
    void callIsLit();
    u32 getGridZ();
    u32 getGridX();
    u16 *getItemId();
    s32 getInteriorScene();
    BOOL getDoorPos(Unk_ov009_0225b880_Vec3 *out, s16 *ang);
    void updateMatrix();
    void execEntry08();
    BOOL enterEntry08();
    void execEntry07();
    BOOL enterEntry07();
    void execEntryWarp();
    BOOL enterEntryWarp();
    void execEntry05();
    BOOL enterEntry05();
    void execEntry04();
    BOOL enterEntry04();
    void execEntryTalk();
    BOOL enterEntryTalk();
    void execEntryTalkOpen();
    BOOL enterEntryTalkOpen();

    /* 0x130 */ u8 unk_130;
    /* 0x131 */ u8 pad_131;
    /* 0x132 */ u16 unk_132;
    /* 0x134 */ u32 unk_134;
    /* 0x138 */ u8 unk_138[0x194 - 0x138];
    /* 0x194 */ void *unk_194;
    /* 0x198 */ u8 pad_198[4];
    /* 0x19c */ Unk_ov009_0225bc88_Blk unk_19c;
    /* 0x1cc */ u8 pad_1cc[0x1d4 - 0x1cc];
    /* 0x1d4 */ u8 unk_1d4[0x1f0 - 0x1d4];
    /* 0x1f0 */ u8 unk_1f0[0x228 - 0x1f0];
    /* 0x228 */ u32 unk_228;
    /* 0x22c */ u32 unk_22c;
    /* 0x230 */ u8 unk_230;
    /* 0x231 */ u8 unk_231;
    /* 0x232 */ Unk_ov009_0225bf3c_Flags unk_232;
    /* 0x233 */ u8 unk_233;
    /* 0x234 */ u8 unk_234[0x44];
    /* 0x278 */ s32 unk_278;
    /* 0x27c */ u8 unk_27c;
    /* 0x27d */ u8 pad_27d;
    /* 0x27e */ u16 unk_27e;
    /* 0x280 */ Unk_020abea8 *unk_280;
    /* 0x284 */ Unk_020e44d4 *unk_284;
    /* 0x288 */ BuildingCollider *unk_288;
    /* 0x28c */ u8 unk_28c;
    /* 0x28d */ u8 pad_28d;
    /* 0x28e */ u8 unk_28e[2];
    /* 0x290 */ s32 unk_290;
    /* 0x294 */ s32 unk_294;
    /* 0x298 */ s32 unk_298;
    /* 0x29c */ s32 unk_29c;
    /* 0x2a0 */ s32 unk_2a0;
    /* 0x2a4 */ Unk_ov009_0225b880_Vec3 unk_2a4;
};

typedef void (BuildingActor::*Unk_ov009_0225c290_Fn)();
typedef BOOL (BuildingActor::*Unk_ov009_0225c360_Fn)();

// Real (mangled) symbols of the other modules, reached as plain functions with the object first.
#define func_02002d9c _ZN5Actor7preDrawEv
#define func_02002dd0 _ZN5Actor8vfunc_20Ev
#define func_0203e638 _ZN9Character10preExecuteEv
#define func_0203e650 _ZN9Character9preDeleteEv
#define Character_setCharId _ZN9Character9setCharIdEj
#define func_02003e50 _ZN12Unk_02003c3013func_02003e50Ev
#define func_02003e80 _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec
#define func_02003ecc _ZN12Unk_02003c3013func_02003eccEv
#define func_02031ea0 _ZN12Unk_020d8d7413func_02031ea0Ev
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt
#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv
#define AnimModel_stepAnim _ZN9AnimModel8stepAnimEv
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv
#define func_020548a0 _ZN9AnimModelD1Ev
#define func_020548d0 _ZN9AnimModelC1Ev
#define Model_setInitCallback _ZN5Model15setInitCallbackEii
#define Model_clearResource _ZN5Model13clearResourceEv
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj
#define AnimFrameCtrl_hasPassedFrame _ZN13AnimFrameCtrl14hasPassedFrameEi
#define AnimFrameCtrl_isFinished _ZN13AnimFrameCtrl10isFinishedEv
#define TalkAutoAdvance_start _ZN15TalkAutoAdvance5startEi
#define BuildingLights_isLit _ZN14BuildingLights5isLitEv
#define BuildingLights_setLit _ZN14BuildingLights6setLitEiii
#define BuildingLights_updateLights _ZN14BuildingLights12updateLightsEP3Ctx
#define BuildingLights_bind _ZN14BuildingLights4bindEP3Ctxi
#define func_020b200c _ZN14BuildingLightsD2Ev
#define func_020b2034 _ZN14BuildingLightsC2Ev
#define func_ov009_0225b934 _ZN12Unk_0213b9c4D1Ev
#define func_ov009_0225b94c _ZN17BuildingSeEmitterC1Ev

extern "C" {
extern char sBuildingDefaultMsgFile[];
extern char data_ov009_0225e3e8[];
extern char data_ov009_0225e3ec[];
extern char data_ov009_0225e3fc[];
extern char data_ov009_0225e40c[];
extern char data_ov009_0225e41c[];
extern char data_ov009_0225e42c[];
extern char data_ov009_0225e43c[];
extern char data_ov009_0225e44c[];
extern char data_ov009_0225e45c[];
extern char sBuildingLightTexPathFmt[];
extern char sBuildingTexPathFmt[];
extern char sBuildingArcPathFmt[];
extern char sBuildingArcPath[];
extern char sBuildingTexPath[];
extern char sBuildingLightTexPath[];
extern BuildingResources sBuildingResources[];
extern u32 gCamera;
extern Unk_ov009_0225b880_Vec3 gCameraLookAt;
extern u8 data_020d0a7c[];
extern void *data_021c6204;
extern void *gCurrentHeap;
extern Unk_02034518 *data_021c1b3c;

void _ZN9Character13func_0203e47cEi(void *self, MsgRequest *a);
void _ZN9Character13func_0203e488Ei(void *self, MsgRequest *a);
void *func_ov009_0225b934(void *self);
void _ZN12SndSeEmitterD2Ev(void *self);
extern u8 data_0213b9c4[];
void func_ov009_0225b94c(void *self);
void _ZN17BuildingSeEmitter11setPositionEP23Unk_ov009_0225b880_Vec3(void *self, Unk_ov009_0225b880_Vec3 *v, u32 extra);
Unk_020b28ac *StrBSize_Get(u16 *p);

void func_020b16bc(void *self, const u8 *src);
void func_020b16b8(void *self);
s32 func_020b1694(void *self);
s32 func_020b1698(void *self);
s32 func_020b169c(void *self);
s32 func_020b16a0(void *self);
s32 func_020b16a4(void *self);
s32 func_020b16b0(void *self);

void Snd_SeEmitterPlayHeld(void *, u32, u32, u32);
void func_02003e70(void *, u32, u32, u32);
void func_02003e50(void *);
void func_02003e80(void *, void *);
void func_02003ecc(void *);
void BuildingLights_isLit(void *);
void AnimModel_drawAnimated(void *, u32);
s32 func_020e7b98(s32, s32);
s32 func_01ffcb0c(s32, s32);
void func_01ffd070(Unk_ov009_0225b880_Vec3 *, void *, Unk_ov009_0225b880_Vec3 *);
void *func_02031ea0(void *);
BOOL Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
void TalkAutoAdvance_start(void *, u32);
void func_020b1040(u32, u32);
void func_020b101c();
void *func_020b4934();
void func_020b49b4();
s32 func_020e780c(s32, s32);
s32 func_020e9650(void *, void *);
s32 *func_020947f0(u32);
BOOL PlayerActor_LocalRequestDoorEnter(u32, s32 *, s32 *, s32);
BOOL func_020951d0();
void func_020949a0(u32);
BOOL func_020951c4();
void Camera_SetMode3();
void TalkRequest_EndTalkWith(void *);
BOOL PlayerActor_LocalRequestDoorApproach(s32 *, s32 *, s16 *);
s32 func_020b50e8();
s32 func_020b4bbc(void *, s32);
s32 func_02030814(u32);
void func_020b49c4(void *, s32, Unk_ov009_0225b880_Vec3 *, u32, s32, u32, u32);
void func_020b0f00();

s32 func_020b10c4(u32);
void func_020b10e0(u32);
BOOL Item_IsNookShop(u16 *);
void AnimModel_stepAnim(void *);
BOOL AnimFrameCtrl_isFinished(void *);
BOOL AnimFrameCtrl_hasPassedFrame(void *, s32);
void BlendAnimModel_initAnim(void *, void *, s32, s32, s32, s32);
void Melody_PlayAt(void *, s32);
s32 PlayerActor_TestSlotFlag(s32, s32);
BOOL func_0203d978();
void TalkRequest_AddPlayerTalk6(void *, s32);
Unk_020b6960 *func_020b50b4();
s32 func_020b6014(void *, s32 *, u8 *);
void *func_02095204(u32);
BOOL func_020b1d3c(u32, u32);

void *Heap_Alloc(void *heap, u32 size);
u32 func_ov003_02218b1c(void *p);
void func_ov003_02218d6c(u32 a);
BOOL PlayerActor_LocalRequestDoorExit();
s32 func_02031da4(void *node);
void func_02031de0(void *node);
s32 WorldCurve_ToCurved(void *out, void *in);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
void func_020e8434(void *m, s32 a);
BOOL func_02094e3c();
s32 func_020639e8(char *buf, const char *fmt, ...);
void *File_LoadAlloc(void *a, void *heap, s32 c, s32 d);
BOOL File_Exists(void *p);
s32 func_02101340(void *buf, char *name, void *data);
void *func_021012bc(void *name);
void func_02101310(void *buf);
void *func_02106654();
void *func_02106670(void *p, s32 a);
void *func_02106690();
void *func_021066ac(void *p, s32 a);
void *NNS_G3dGetTex(void *p);
void Mem_Free(void *p);
BOOL Gfx3d_LoadTex(void *p, u32 a);
BOOL Gfx3d_LoadTexAndPltt(void *p, u32 a);
void *Gfx3d_CopyTex(void *p, void *g);

u16 Item_MakeBuilding(u32 x);
s32 func_020b1d80(u32);
s32 func_ov003_02218da8();
void func_ov003_02218d94();
s32 func_ov003_022187f8();
void func_ov003_02218c0c(void *);
void func_ov003_02218c34(void *);
BOOL Model_setResource(void *, void *, s32);
void AnimModel_allocAnmObj(void *, void *);
void AnimModel_attachAnim(void *);
void Model_clearResource(void *);
void Model_setInitCallback(void *, void *, void *);
void func_020548a0(void *);
void func_0209c364(void *);
void Clock_GetMinuteHour(void *);
void BuildingLights_setLit(void *, s32, s32, s32);
void BuildingLights_updateLights(void *, void *);
void BuildingLights_bind(void *, void *, s32);
void func_020b200c(void *);
void func_0203e9d8();
void func_020ac790(u32);
BOOL func_02002d9c(void *);
s32 func_02002dd0(void *, u32);
BOOL func_0203e638(void *);
BOOL func_0203e650(void *);
void Character_setCharId(void *, u32);
BOOL func_0203a4c4(void *, s32, s32);
s32 WorldCurve_Apply(void *, void *);
void NNS_G3dBindMdlPltt(void *, s32);
void NNS_G3dBindMdlTex(void *, s32);

void func_020548d0(void *);
void func_020b2034(void *);
void func_0209c370(void *);
void *func_021065dc();
u32 func_021065f8(void *, u32);
void *NNS_G3dGetMdlSet();
void MTX_MultVec43(s32, s32, Unk_ov009_0225b880_Vec3 *);
void WorldCurve_FromCurved(void *, Unk_ov009_0225b880_Vec3 *);
void __cxa_vec_cleanup(void *, s32, s32, void (*)(BuildingResources *));

void Building_LocalToWorld(void *p, s32 a, s32 b);
BOOL _ZN13BuildingActor13setEntryStateEi(void *self, s32 a);
BOOL Building_IsNight();
void BuildingActor_Create();
BOOL BuildingResources_IsLoaded(BuildingResources *e);
void *func_ov009_0225df58(void *unused);
void *func_ov009_0225df6c(void *unused);
void Building_InitModelCallback(Unk_ov009_0225df84_Obj *o);
void Building_ModelCallback(struct Unk_ov009_0225df94_Arg *a);
}

static inline BOOL Unk_ov009_0225d0d8_Match(u16 *p, u32 v) {
    BOOL r;
    if (Item_IsFurniture(p)) {
        u16 t;
        t = v;
        s32 a = Item_GetFurnitureIndex(p);
        s32 b = Item_GetFurnitureIndex(&t);
        if (a == b) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (*p == v) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

static inline BOOL Unk_ov009_0225cc24_IsNine(u16 v) {
    if (v == 9) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov009_0225d858_Is(u16 *p, u32 v) {
    if (Item_IsFurniture(p)) {
        u16 t = v;
        s32 a = Item_GetFurnitureIndex(p);
        s32 b = Item_GetFurnitureIndex(&t);
        if (a == b) {
            return TRUE;
        }
        return FALSE;
    }
    if (*p == v) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov009_0225df94_Target {
    /* 0x00 */ u8 pad_00[0x2c];
    /* 0x2c */ BuildingActor *unk_2c;
};

struct Unk_ov009_0225df94_Arg {
    /* 0x00 */ u8 *unk_00;
    /* 0x04 */ Unk_ov009_0225df94_Target *unk_04;
};

struct Unk_ov009_0225df84_Obj {
    /* 0x00 */ u8 pad_00[0x24];
    /* 0x24 */ void *unk_24;
    /* 0x28 */ u8 pad_28[0x92 - 0x28];
    /* 0x92 */ u8 unk_92;
};

void BuildingActor::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 6:
        func_020b1040(unk_132, 0);
        func_020b101c();
        func_020b4934();
        func_020b49b4();
        unk_230 = 1;
        break;
    case 0:
    case 1:
        setEntryState(1);
        break;
    case 8:
        setEntryState(0);
        break;
    }
}
