// mwcc-version: 1.2/sp2
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

    void clearTalkStartMode();
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
struct TouchPickTriangle {
    TouchPickTriangle();
    static void *operator new(unsigned long, void *p) { return p; }
    u8 pad[0x44];
};

struct TouchPicker {
    BOOL addTriangle(TouchPickTriangle *o, Vec3 *a, Vec3 *b, Vec3 *c, s32 d, u8 e);
    BOOL pushTriangle(TouchPickTriangle *o);
};

struct StrBSizeData {
    void getSolidBounds(s32 *a, s32 *b, s32 *c, s32 *d);
    BOOL getTriangle(s32 *a, s32 *b, s32 *c, u32 i);
    u32 getTriangleCount();
};

class ObjShadowStrip {
public:
    void draw(Vec3 *pos);
    BOOL build(Vec3 *pos, s32 size, s32 shift, s32 idx, s32 a, s32 b, s32 heap);
    ObjShadowStrip *func_020ac1e0();

    u8 pad[0x34];
};

struct BgmSceneFade {
    void setFadeDelay(s32 a);
};

struct BgmManager {
    u8 pad_00[0x2d0];
    BgmSceneFade unk_2d0;
};

class BuildingActor;
struct Unk_ov009_0225cc24_Obj;

class CollisionTriangle {
public:
    CollisionTriangle();
    virtual s32 vfunc_00(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void vfunc_04(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void vfunc_08(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void collide(Unk_0202f2ac_V3 *a, Unk_0202f2ac_V3 *b, s32 c);
    virtual void onActorNear(Unk_ov009_0225b880_Vec3 *a, Unk_ov009_0225cc24_Obj *o, s32 off);
    s32 distanceTo(Unk_0202f2ac_V3 *p);
    BOOL intersectLine(Unk_0202f2ac_V3 *out, Unk_0202f2ac_V3 *p, Unk_0202f2ac_V3 *q);

    s32 unk_04[9];
    s32 unk_28, unk_2c, unk_30, unk_34;
};

class TriangleTrigger : public CollisionTriangle {
public:
    TriangleTrigger();
    void setupTrigger(Unk_02031e10_Vec *a, Unk_02031e10_Vec *b, Unk_02031e10_Vec *c, s32 d);

    TriangleTrigger *unk_38;
    s32 unk_3c, unk_40, unk_44;
    s32 unk_48;
};

// ov009 element (vtable 0x0225e280, size 0x54), one per ground-collision triangle
class BuildingCollider : public TriangleTrigger {
public:
    BuildingCollider();
    virtual void onActorNear(Unk_ov009_0225b880_Vec3 *a, Unk_ov009_0225cc24_Obj *o, s32 off);
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
    /* 0x280 */ ObjShadowStrip *unk_280;
    /* 0x284 */ TouchPickTriangle *unk_284;
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
#define TriangleTrigger_getCenter _ZN15TriangleTrigger9getCenterEv
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
extern void *gFieldStructureHeap;
extern void *gCurrentHeap;
extern BgmManager *data_021c1b3c;

void _ZN9Character17detachTalkRequestEi(void *self, MsgRequest *a);
void _ZN9Character17attachTalkRequestEi(void *self, MsgRequest *a);
void *func_ov009_0225b934(void *self);
void _ZN12SndSeEmitterD2Ev(void *self);
extern u8 data_0213b9c4[];
void func_ov009_0225b94c(void *self);
void _ZN17BuildingSeEmitter11setPositionEP23Unk_ov009_0225b880_Vec3(void *self, Unk_ov009_0225b880_Vec3 *v, u32 extra);
StrBSizeData *StrBSize_Get(u16 *p);

void BuildingInfo_Copy(void *self, const u8 *src);
void BuildingInfo_Destroy(void *self);
s32 BuildingInfo_GetViewRangeBack(void *self);
s32 BuildingInfo_GetViewRangeFront(void *self);
s32 BuildingInfo_GetViewRangeX(void *self);
s32 BuildingInfo_GetUnk05(void *self);
s32 BuildingInfo_GetInteriorScene(void *self);
s32 BuildingInfo_GetEntranceType(void *self);

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
void *TriangleTrigger_getCenter(void *);
BOOL Item_IsFurniture(u16 *);
s32 Item_GetFurnitureIndex(u16 *);
void TalkAutoAdvance_start(void *, u32);
void BuildingOccupancy_Leave(u32, u32);
void HouseVisitor_ClearPresent();
void *Scene_GetWarpRequest();
void Scene_ResetTownReturnPos();
s32 func_020e780c(s32, s32);
s32 func_020e9650(void *, void *);
s32 *PlayerActor_GetBodyPos(u32);
BOOL PlayerActor_LocalRequestDoorEnter(u32, s32 *, s32 *, s32);
BOOL PlayerActor_IsStowFinished();
void PlayerActor_RequestStowThenAct10(u32);
BOOL PlayerActor_IsEnteringDoor();
void Camera_SetMode3();
void TalkRequest_SetTargetDone(void *);
BOOL PlayerActor_LocalRequestDoorApproach(s32 *, s32 *, s16 *);
s32 Scene_GetCurrent();
s32 SceneWarp_RequestExit(void *, s32);
s32 Ground_GetDefaultY(u32);
void Scene_SetTownReturnPos(void *, s32, Unk_ov009_0225b880_Vec3 *, u32, s32, u32, u32);
void Building_SetLastEntranceType();

s32 BuildingOccupancy_GetAnswer(u32);
void BuildingOccupancy_RequestEnter(u32);
BOOL Item_IsNookShop(u16 *);
void AnimModel_stepAnim(void *);
BOOL AnimFrameCtrl_isFinished(void *);
BOOL AnimFrameCtrl_hasPassedFrame(void *, s32);
void BlendAnimModel_initAnim(void *, void *, s32, s32, s32, s32);
void Melody_PlayAt(void *, s32);
s32 PlayerActor_TestSlotFlag(s32, s32);
BOOL TalkRequestFlags_IsResetti();
void TalkRequest_AddPlayerTalk6(void *, s32);
TouchPicker *Scene_GetTouchPicker();
s32 TouchPick_GetTappedObject(void *, s32 *, u8 *);
void *PlayerActor_GetActor(u32);
BOOL BuildingState_Set(u32, u32);

void *Heap_Alloc(void *heap, u32 size);
u32 BuildingList_IndexOf(void *p);
void Field_SetDoorExitMode(u32 a);
BOOL PlayerActor_LocalRequestDoorExit();
s32 TriangleTrigger_Unregister(void *node);
void TriangleTrigger_Register(void *node);
s32 WorldCurve_ToCurved(void *out, void *in);
void func_020e8388(void *m, s32 a, s32 b, s32 c);
void func_020e8434(void *m, s32 a);
BOOL PlayerActor_IsInterruptibleByMenu();
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
s32 BuildingState_Get(u32);
s32 Field_GetStructureTexSuffix();
void FieldStructureMgr_GetPlayerHouseTex();
s32 PlayerHouseTex_Get();
void BuildingList_Remove(void *);
void BuildingList_Add(void *);
BOOL Model_setResource(void *, void *, s32);
void AnimModel_allocAnmObj(void *, void *);
void AnimModel_attachAnim(void *);
void Model_clearResource(void *);
void Model_setInitCallback(void *, void *, void *);
void func_020548a0(void *);
void ModelSlotHandle_Destroy(void *);
void Clock_GetMinuteHour(void *);
void BuildingLights_setLit(void *, s32, s32, s32);
void BuildingLights_updateLights(void *, void *);
void BuildingLights_bind(void *, void *, s32);
void func_020b200c(void *);
void CharInteractSync_ReleaseLock();
void NookShop_SetVisitState(u32);
BOOL func_02002d9c(void *);
s32 func_02002dd0(void *, u32);
BOOL func_0203e638(void *);
BOOL func_0203e650(void *);
void Character_setCharId(void *, u32);
BOOL Camera_IsBlockingFocusView(void *, s32, s32);
s32 WorldCurve_Apply(void *, void *);
void NNS_G3dBindMdlPltt(void *, s32);
void NNS_G3dBindMdlTex(void *, s32);

void func_020548d0(void *);
void func_020b2034(void *);
void ModelSlotHandle_Init(void *);
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

extern "C" void BuildingActor_Create() {
    BuildingActor *p = new BuildingActor();
}

extern "C" void Building_LocalToWorld(void *p, s32 a, s32 b) {
    Unk_ov009_0225b880_Vec3 v;
    MTX_MultVec43(a, b, &v);
    WorldCurve_FromCurved(p, &v);
}

BuildingResources::BuildingResources() {
    u32 i;
    unk_00 = 0;
    unk_04 = 0;
    unk_14 = 0;
    unk_18 = 0;
    unk_1c = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_40 = 0;
    unk_44 = 0;
    unk_48 = 0;
    unk_4c = 0;
    for (i = 0; i < 4; i++) {
        unk_20[i] = 0;
    }
}

BuildingResources::~BuildingResources() {}


extern "C" {
Unk_ov009_0225e4e0_Col data_ov009_0225e4fc(31, 20, 20, 31);
Unk_ov009_0225e4e0_Col data_ov009_0225e4e0(20, 20, 31, 31);
Unk_ov009_0225e4e0_Col data_ov009_0225e4f4(31, 31, 20, 31);
Unk_ov009_0225e4e0_Col data_ov009_0225e4f0(20, 31, 20, 31);
Unk_ov009_0225e4e0_Col data_ov009_0225e500(20, 31, 31, 31);
Unk_ov009_0225e4e0_Col data_ov009_0225e4f8(20, 24, 24, 31);
BuildingResources sBuildingResources[0x22];
}

extern "C" BOOL BuildingResources_IsLoaded(BuildingResources *e) {
    if (e->unk_00 != 0 || e->unk_04 != 0 || e->unk_14 != 0 || e->unk_18 != 0 || e->unk_1c != 0 || e->unk_08 != 0 ||
        e->unk_0c != 0 || e->unk_10 != 0) {
        return TRUE;
    }
    return FALSE;
}

void BuildingActor::vfunc_60(u32 a, void *b) {
}

extern "C" void Building_ModelCallback(Unk_ov009_0225df94_Arg *a) {
    BuildingActor *o = a->unk_04->unk_2c;
    if (o != NULL) {
        o->vfunc_60(a->unk_00[1], a);
    }
}

extern "C" void Building_InitModelCallback(Unk_ov009_0225df84_Obj *o) {
    o->unk_24 = (void *)Building_ModelCallback;
    o->unk_92 = 2;
}

extern "C" void *func_ov009_0225df6c(void *unused) {
    u8 *p = (u8 *)NNS_G3dGetMdlSet();
    return p + *(s32 *)(p + *(u16 *)(p + 0xe) + 0xc);
}

extern "C" void *func_ov009_0225df58(void *unused) {
    void *p = func_021065dc();
    return (void *)func_021065f8(p, 0);
}

BuildingActor::BuildingActor() {
    unk_132 = 0xfff1;
    func_020548d0(unk_138);
    func_020b2034(unk_1f0);
    func_ov009_0225b94c(unk_234);
    ModelSlotHandle_Init(unk_28e);
}

BuildingActor::~BuildingActor() {
    ModelSlotHandle_Destroy(unk_28e);
    func_ov009_0225b934(unk_234);
    func_020b200c(unk_1f0);
    func_020548a0(unk_138);
}

BOOL BuildingActor::func_ov009_0225dd58() { return TRUE; }

BOOL BuildingActor::vfunc_00() {
    Unk_ov009_0225bc88_Blk b1;
    Unk_ov009_0225bc88_Blk b2;
    struct {
        s32 v[12];
    } m;
    Unk_ov009_0225b880_Vec3 v;
    BuildingList_Add(this);
    unk_228 = unk_5c[0] >> 13;
    unk_22c = unk_5c[2] >> 13;
    Character_setCharId(this, (u16)(((unk_22c & 0xff) << 8) | (unk_228 & 0xff)));
    unk_132 = *(u32 *)((u8 *)this + 8);
    unk_134 = unk_132 & 0xfff;
    char *a = vfunc_a4();
    char *bb = vfunc_a8();
    char *c = vfunc_ac();
    setupModel(a, bb, c);
    initEntryArea();
    setupAnims();
    updateBaseMatrix(&b1);
    Model_setInitCallback(unk_138, (void *)Building_InitModelCallback, this);
    b2 = b1;
    createShadows(&b2);
    s32 ang = WorldCurve_Apply(&v, &unk_5c[0]);
    func_020e8388(&m, v.x, v.y, v.z);
    func_020e8434(&m, ang);
    createColliders((Unk_ov009_0225bc88_Blk *)&m);
    BuildingResources *r = getResources();
    BuildingLights_bind(unk_1f0, (void *)(r ? r->unk_00 : 0), 1);
    setInteractionRange(0);
    if (getDoorPos(&unk_2a4, (s16 *)0)) {
        unk_2a4.z -= 0x4000;
    }
    BOOL res = func_ov009_0225dd58();
    setEntryState(0);
    return res;
}

BOOL BuildingActor::preExecute() {
    if (!func_0203e638(this)) {
        return FALSE;
    }
    ((BuildingSeEmitter *)unk_234)->activate();
    u16 *p = getItemId();
    if (Unk_ov009_0225d858_Is(p, 0x501d)) {
        s32 t = BuildingState_Get(unk_132);
        if (unk_130 != t) {
            vfunc_6c(t);
        }
    }
    updateOffscreen();
    if (Scene_GetCurrent() != 0x2c) {
        updateEntryState();
    }
    func_ov009_0225ca98();
    if (Scene_GetCurrent() != 0x2c) {
        submitColliders();
    }
    BOOL on = vfunc_9c();
    s32 b = vfunc_a0();
    BuildingLights_setLit(unk_1f0, on, 1, b);
    BuildingLights_updateLights(unk_1f0, unk_194);
    func_ov009_0225d0d8();
    return TRUE;
}

BOOL BuildingActor::vfunc_20(u32 a) {
    Unk_ov009_0225da90_Vec3 v = vfunc_b4();
    u16 *pp = getItemId();
    _ZN17BuildingSeEmitter11setPositionEP23Unk_ov009_0225b880_Vec3(unk_234, (Unk_ov009_0225b880_Vec3 *)&v, *pp);
    if (unk_231 & 2) {
        unk_231 |= 8;
    } else {
        unk_231 &= ~8;
    }
    unk_231 &= ~2;
    unk_231 &= ~4;
    func_02002dd0(this, a);
}

BOOL BuildingActor::preDraw() {
    if (!func_02002d9c(this)) {
        return FALSE;
    }
    if ((unk_231 & 1) == 0) {
        u16 *p = getItemId();
        BOOL r = Unk_ov009_0225d858_Is(p, 0x500b);
        if (r || !Camera_IsBlockingFocusView(&unk_290, unk_29c, unk_2a0)) {
            if (vfunc_b0()) {
                updateMatrix();
            }
            return TRUE;
        }
    }
    return FALSE;
}

BOOL BuildingActor::preDelete() {
    if (!func_0203e650(this)) {
        return FALSE;
    }
    ((BuildingSeEmitter *)unk_234)->deactivate();
    destroyShadows();
    destroyColliders();
    Model_clearResource(unk_138);
    BuildingList_Remove(this);
    if (unk_232.f0) {
        CharInteractSync_ReleaseLock();
        if (Item_IsNookShop(&unk_132)) {
            NookShop_SetVisitState(1);
        }
    }
    return TRUE;
}

void BuildingActor::initEntryArea() {
    BuildingResources *r = getResources();
    if (r != NULL) {
        s32 z = unk_5c[2] + r->unk_44;
        s32 y = unk_5c[1];
        s32 x = unk_5c[0] + r->unk_40;
        unk_290 = x;
        unk_294 = y;
        unk_298 = z;
        unk_29c = r->unk_48;
        unk_2a0 = r->unk_4c;
    }
}

void BuildingActor::setupAnims() {
    if (func_ov009_0225d708() != 0 || func_ov009_0225d6f0() != 0) {
        AnimModel_allocAnmObj(unk_138, gFieldStructureHeap);
        BlendAnimModel_initAnim(unk_138, (void *)func_ov009_0225d708(), 0, 0x1000, 0, 0);
        AnimModel_attachAnim(unk_138);
    }
    if (getEntranceType() != 0) {
        u16 *p = getItemId();
        if (Unk_ov009_0225d858_Is(p, 0x501d)) {
            vfunc_6c(BuildingState_Get(unk_132));
        } else {
            vfunc_6c(0);
        }
    }
}

s32 BuildingActor::getViewRangeX() {
    u32 v;
    BOOL in = FALSE;
    v = unk_132;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    Unk_ov009_0225bb0c_Tmp t;
    BuildingInfo_Copy(&t, v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = BuildingInfo_GetViewRangeX(&t) << 13;
    BuildingInfo_Destroy(&t);
    return r;
}

s32 BuildingActor::getViewRangeBack() {
    u32 v;
    BOOL in = FALSE;
    v = unk_132;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    Unk_ov009_0225bb0c_Tmp t;
    BuildingInfo_Copy(&t, v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = BuildingInfo_GetViewRangeBack(&t) << 13;
    BuildingInfo_Destroy(&t);
    return r;
}

s32 BuildingActor::getViewRangeFront() {
    u32 v;
    BOOL in = FALSE;
    v = unk_132;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    Unk_ov009_0225bb0c_Tmp t;
    BuildingInfo_Copy(&t, v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = BuildingInfo_GetViewRangeFront(&t) << 13;
    BuildingInfo_Destroy(&t);
    return r;
}

s32 BuildingActor::func_ov009_0225d708() {
    BuildingResources *r = getResources();
    if (r != NULL) {
        return r->unk_08;
    }
    return 0;
}

s32 BuildingActor::func_ov009_0225d6f0() {
    BuildingResources *r = getResources();
    if (r != NULL) {
        return r->unk_0c;
    }
    return 0;
}

s32 BuildingActor::getBca2Anim() {
    BuildingResources *r = getResources();
    if (r != NULL) {
        return r->unk_10;
    }
    return 0;
}

void *BuildingActor::getBtaAnim(u32 idx) {
    if (idx < 4) {
        BuildingResources *r = getResources();
        if (r != NULL) {
            return (void *)r->unk_20[idx];
        }
    }
    return 0;
}

s32 BuildingActor::getEntranceType() {
    u32 v;
    BOOL in = FALSE;
    v = unk_132;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    Unk_ov009_0225bb0c_Tmp t;
    BuildingInfo_Copy(&t, v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = BuildingInfo_GetEntranceType(&t);
    BuildingInfo_Destroy(&t);
    return r;
}

BOOL BuildingActor::vfunc_9c() {
    if (Building_IsNight() && vfunc_8c()) {
        return TRUE;
    }
    return FALSE;
}

BOOL BuildingActor::vfunc_8c() { return TRUE; }

extern "C" BOOL Building_IsNight() {
    struct {
        u8 v[4];
    } t;
    Clock_GetMinuteHour(&t);
    u32 b = t.v[1];
    if (b >= 6 && b < 0x12) {
        return FALSE;
    }
    return TRUE;
}

char *BuildingActor::vfunc_a4() {
    u32 i = unk_134;
    func_020639e8(sBuildingArcPath, sBuildingArcPathFmt, i, i, Field_GetStructureTexSuffix());
    return sBuildingArcPath;
}

char *BuildingActor::vfunc_a8() {
    u32 i = unk_134;
    func_020639e8(sBuildingTexPath, sBuildingTexPathFmt, i, i, Field_GetStructureTexSuffix());
    return sBuildingTexPath;
}

char *BuildingActor::vfunc_ac() {
    volatile u16 v = Item_MakeBuilding(unk_134);
    switch (v) {
    case 0x500a:
    case 0x5011:
    case 0x501c:
    case 0x501d:
        return 0;
    }
    u32 i = unk_134;
    func_020639e8(sBuildingLightTexPath, sBuildingLightTexPathFmt, i, i, Field_GetStructureTexSuffix());
    return sBuildingLightTexPath;
}

BOOL BuildingActor::setupModel(char *a, char *b, char *c) {
    if (unk_280 != 0 || unk_194 != 0) {
        return TRUE;
    }
    loadResources(a, b, c);
    BuildingResources *r = getResources();
    if (r != NULL && r->unk_00 != 0) {
        if (Model_setResource(unk_138, (void *)r->unk_00, 0)) {
            FieldStructureMgr_GetPlayerHouseTex();
            s32 x = PlayerHouseTex_Get();
            NNS_G3dBindMdlPltt((void *)r->unk_00, x);
            if (r->unk_14) {
                NNS_G3dBindMdlTex((void *)r->unk_00, r->unk_14);
            }
            if (r->unk_18) {
                NNS_G3dBindMdlTex((void *)r->unk_00, r->unk_18);
                NNS_G3dBindMdlPltt((void *)r->unk_00, r->unk_18);
            }
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

BOOL BuildingActor::loadResources(char *a, char *b, char *c) {
    BOOL result = FALSE;
    BuildingResources *e = getResources();
    if (BuildingResources_IsLoaded(e)) {
        return TRUE;
    }
    StrBSizeData *h = StrBSize_Get(&unk_132);
    if (h != NULL) {
        h->getSolidBounds(&e->unk_40, &e->unk_44, &e->unk_48, &e->unk_4c);
    }
    if (a != NULL) {
        void *data = File_LoadAlloc(a, gFieldStructureHeap, 4, 0);
        if (data != NULL) {
            char b1[0x1e];
            char b2[0x1e];
            Unk_ov009_0225d2a4_Obj obj;
            s32 z1, z2;
            u32 i;
            if (func_02101340(&obj, data_ov009_0225e3e8, data)) {
                void *t;
                t = func_021012bc(data_ov009_0225e3ec);
                if (t) {
                    e->unk_08 = (s32)func_ov009_0225df58(t);
                }
                t = func_021012bc(data_ov009_0225e3fc);
                if (t) {
                    e->unk_0c = (s32)func_ov009_0225df58(t);
                }
                t = func_021012bc(data_ov009_0225e40c);
                if (t) {
                    e->unk_10 = (s32)func_ov009_0225df58(t);
                }
                i = 0;
                z1 = i;
                for (; i < 4; i++) {
                    func_020639e8(b1, data_ov009_0225e41c, i);
                    if (func_021012bc(b1)) {
                        e->unk_20[i] = (s32)func_02106670(func_02106654(), z1);
                    }
                }
                i = 0;
                z2 = i;
                for (; i < 4; i++) {
                    func_020639e8(b2, data_ov009_0225e42c, i);
                    if (func_021012bc(b2)) {
                        e->unk_30[i] = (s32)func_021066ac(func_02106690(), z2);
                    }
                }
                e->unk_00 = (s32)func_ov009_0225df6c(func_021012bc(data_ov009_0225e43c));
                t = func_021012bc(data_ov009_0225e44c);
                if (t) {
                    e->unk_04 = (s32)func_ov009_0225df6c(t);
                }
                e->unk_1c = (BuildingShadowTable *)func_021012bc(data_ov009_0225e45c);
                func_02101310(&obj);
            }
            result = TRUE;
        }
    }
    if (b != NULL) {
        if (File_Exists(b)) {
            void *r5 = File_LoadAlloc(b, gCurrentHeap, -4, 0);
            if (r5 != NULL) {
                e->unk_14 = (s32)NNS_G3dGetTex(r5);
                if (Gfx3d_LoadTex((void *)e->unk_14, 0)) {
                    e->unk_14 = (s32)Gfx3d_CopyTex((void *)e->unk_14, gFieldStructureHeap);
                }
                Mem_Free(r5);
            }
        }
    }
    if (c != NULL) {
        if (File_Exists(c)) {
            void *r5 = File_LoadAlloc(c, gCurrentHeap, -4, 0);
            if (r5 != NULL) {
                e->unk_18 = (s32)NNS_G3dGetTex(r5);
                if (Gfx3d_LoadTexAndPltt((void *)e->unk_18, 0)) {
                    e->unk_18 = (s32)Gfx3d_CopyTex((void *)e->unk_18, gFieldStructureHeap);
                }
                Mem_Free(r5);
            }
        }
    }
    return result;
}

void BuildingActor::makeCurvedMatrix(Unk_ov009_0225bc88_Blk *out) {
    Unk_ov009_0225bc88_Blk m;
    func_020e8388(&m, unk_c4, unk_c8, unk_cc);
    func_020e8434(&m, unk_d0);
    *out = m;
}

// tiny callees defined last so they stay out of line
BuildingResources *BuildingActor::getResources() {
    if (unk_134 < 0x22) {
        return &sBuildingResources[unk_134];
    }
    return NULL;
}

void BuildingActor::func_ov009_0225d0d8() {
    if (unk_230 >= 1) {
        if (unk_230 == 3) {
            if (PlayerActor_IsInterruptibleByMenu()) {
                switch (getEntranceType()) {
                case 2:
                    Field_SetDoorExitMode(1);
                    data_021c1b3c->unk_2d0.setFadeDelay(1);
                    if (PlayerActor_LocalRequestDoorExit()) {
                        unk_230 = 0;
                        return;
                    }
                    break;
                case 3:
                    Field_SetDoorExitMode(0);
                    data_021c1b3c->unk_2d0.setFadeDelay(2);
                    if (PlayerActor_LocalRequestDoorExit()) {
                        unk_230 = 0;
                        return;
                    }
                    break;
                case 1:
                    Field_SetDoorExitMode(0);
                    if (Unk_ov009_0225d0d8_Match(&unk_132, 0x5012) || Unk_ov009_0225d0d8_Match(&unk_132, 0x5013)) {
                        data_021c1b3c->unk_2d0.setFadeDelay(4);
                    } else {
                        data_021c1b3c->unk_2d0.setFadeDelay(3);
                    }
                    if (PlayerActor_LocalRequestDoorExit()) {
                        unk_230 = 0;
                        return;
                    }
                    break;
                default:
                    unk_230 = 0;
                    return;
                }
            }
        }
        if (unk_230 < 3) {
            unk_230++;
        }
    }
}

void BuildingActor::updateBaseMatrix(Unk_ov009_0225bc88_Blk *out) {
    Unk_ov009_0225bc88_Blk blk;
    if (!vfunc_b8(&blk)) {
        unk_d0 = WorldCurve_ToCurved(&unk_c4, unk_5c);
        makeCurvedMatrix(&blk);
    }
    unk_19c = blk;
    if (out != NULL) {
        *out = blk;
    }
}

void BuildingActor::createShadows(Unk_ov009_0225bc88_Blk *m) {
    BuildingResources *e = getResources();
    if (e != NULL) {
        if (e->unk_1c != NULL) {
            void *heap = gFieldStructureHeap;
            u32 n = e->unk_1c->getCount();
            unk_280 = (ObjShadowStrip *)Heap_Alloc(heap, n * 0x34);
            ObjShadowStrip *p = unk_280;
            u32 i;
            s32 zero;
            i = 0;
            zero = i;
            for (; i < n; p++, i++) {
                if (p != NULL) {
                    p = p->func_020ac1e0();
                }
                Unk_ov009_0225cd48_Item *it = e->unk_1c->getEntry(i);
                Unk_ov009_0225cb4c_V3 v(it->unk_04, zero, it->unk_08);
                Unk_ov009_0225b880_Vec3 out;
                Building_LocalToWorld(&out, (s32)&v, (s32)m);
                p->build((Vec3 *)&out, it->unk_0c, it->unk_10, it->unk_00, it->unk_14, it->unk_18, (s32)heap);
            }
        }
    }
}

void BuildingActor::updateShadows(Unk_ov009_0225bc88_Blk *m) {
    BuildingResources *e = getResources();
    if (e != NULL) {
        ObjShadowStrip *p = unk_280;
        if (p != NULL) {
            s32 i = 0;
            s32 zero = i;
            for (; (u32)i < e->unk_1c->getCount(); p++, i++) {
                Unk_ov009_0225cd48_Item *it = e->unk_1c->getEntry(i);
                Unk_ov009_0225cb4c_V3 v(it->unk_04, zero, it->unk_08);
                Unk_ov009_0225b880_Vec3 out;
                Building_LocalToWorld(&out, (s32)&v, (s32)m);
                p->draw((Vec3 *)&out);
            }
        }
    }
}

void BuildingActor::destroyShadows() {
    BuildingResources *e = getResources();
    if (e != NULL) {
        if (unk_280 != NULL) {
            u32 i;
            for (i = 0; i < e->unk_1c->getCount(); i++) {
            }
            unk_280 = NULL;
        }
    }
}

void BuildingActor::createColliders(Unk_ov009_0225bc88_Blk *m) {
    unk_28c = 0;
    StrBSizeData *h = StrBSize_Get(&unk_132);
    if (h != NULL) {
        unk_28c = h->getTriangleCount();
        if (unk_28c != 0) {
            BuildingCollider *e4;
            TouchPickTriangle *e6;
            u8 k;
            u32 i;
            Unk_ov009_0225b880_Vec3 a, b, c;
            Unk_ov009_0225b880_Vec3 wa, wb, wc;
            Unk_ov009_0225b880_Vec3 la, lb, lc;
            unk_284 = (TouchPickTriangle *)Heap_Alloc(gFieldStructureHeap, unk_28c * 0x44);
            unk_288 = (BuildingCollider *)Heap_Alloc(gFieldStructureHeap, unk_28c * 0x54);
            e4 = unk_288;
            e6 = unk_284;
            k = BuildingList_IndexOf(this);
            for (i = 0; i < unk_28c; e4++, e6++, i++) {
                if (h->getTriangle(&a.x, &b.x, &c.x, i)) {
                    Building_LocalToWorld(&wa, (s32)&a, (s32)m);
                    Building_LocalToWorld(&wb, (s32)&b, (s32)m);
                    Building_LocalToWorld(&wc, (s32)&c, (s32)m);
                    func_01ffd070(&la, unk_5c, &a);
                    func_01ffd070(&lb, unk_5c, &b);
                    func_01ffd070(&lc, unk_5c, &c);
                    e6 = new (e6) TouchPickTriangle;
                    Scene_GetTouchPicker()->addTriangle(e6, (Vec3 *)&wa, (Vec3 *)&wb, (Vec3 *)&wc, 7, k);
                    e4 = new (e4) BuildingCollider;
                    e4->unk_4c = this;
                    e4->unk_50 = getEntranceType();
                    e4->setupTrigger((Unk_02031e10_Vec *)&la, (Unk_02031e10_Vec *)&lb, (Unk_02031e10_Vec *)&lc, 0x3000);
                    TriangleTrigger_Register(e4);
                }
            }
        }
    }
}

void BuildingActor::submitColliders() {
    if ((unk_231 & 1) == 0) {
        TouchPickTriangle *p = unk_284;
        if (p != NULL) {
            for (; p < unk_284 + unk_28c; p++) {
                Scene_GetTouchPicker()->pushTriangle(p);
            }
        }
    }
}

// ---------------------------------------------------------------- actor
void BuildingActor::destroyColliders() {
    if (unk_284 != NULL) {
        unk_284 = NULL;
    }
    BuildingCollider *p = unk_288;
    if (p != NULL) {
        for (; p < unk_288 + unk_28c; p += 2) {
            TriangleTrigger_Unregister(p);
            p->unk_4c = NULL;
        }
        unk_288 = NULL;
    }
    unk_28c = 0;
}

u32 BuildingShadowTable::getCount() {
    return unk_00;
}

Unk_ov009_0225cd48_Item *BuildingShadowTable::getEntry(u32 i) {
    return &unk_04[i];
}

BuildingCollider::BuildingCollider() {}

void BuildingCollider::onActorNear(Unk_ov009_0225b880_Vec3 *a, Unk_ov009_0225cc24_Obj *o, s32 off) {
    if (isPlayerAtDoor(a, off, o)) {
        unk_4c->unk_231 |= 2;
        if (o->unk_98 >= 0x200) {
            unk_4c->unk_231 |= 4;
        }
    }
}

// ---------------------------------------------------------------- element
BOOL BuildingCollider::isPlayerAtDoor(Unk_ov009_0225b880_Vec3 *v, s32 off, Unk_ov009_0225cc24_Obj *o) {
    s16 ang;
    Unk_ov009_0225b880_Vec3 p;
    Unk_ov009_0225b880_Vec3 a;
    Unk_ov009_0225b880_Vec3 b;
    Unk_ov009_0225b880_Vec3 c;
    if (o != NULL) {
        if (unk_4c != NULL) {
            if (Unk_ov009_0225cc24_IsNine(o->unk_0c)) {
                if (PlayerActor_GetActor(4) == o) {
                    s32 d = distanceTo((Unk_0202f2ac_V3 *)v);
                    if (d >= 0) {
                        if (d <= off + 0x666) {
                            if (unk_4c->getDoorPos(&p, &ang)) {
                                if (func_020e780c(ang, o->unk_8e) <= 0x1100) {
                                    a.x = v->x;
                                    a.y = v->y;
                                    a.z = v->z;
                                    a.y = a.y + off;
                                    b.x = a.x;
                                    b.y = a.y;
                                    b.z = a.z;
                                    b.x = b.x - func_01ffcb0c(unk_28, 0x2000);
                                    b.z = b.z - func_01ffcb0c(unk_30, 0x2000);
                                    if (intersectLine((Unk_0202f2ac_V3 *)&c, (Unk_0202f2ac_V3 *)&a, (Unk_0202f2ac_V3 *)&b)) {
                                        return TRUE;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return FALSE;
}

// ---------------------------------------------------------------- vfunc_6c
s32 BuildingActor::vfunc_6c(s32 a) {
    static BOOL (BuildingActor::*tbl[7])() = {
        &BuildingActor::enterDoorIdle, &BuildingActor::enterDoorOpenIn,
        &BuildingActor::enterDoorOpenOut, &BuildingActor::enterDoorSlideOpen,
        &BuildingActor::enterDoorSlideClose, &BuildingActor::enterDoorNoAnimIn,
        &BuildingActor::enterDoorNoAnimOut,
    };
    if ((u32)a < 7) {
        if ((this->*tbl[a])()) {
            if (BuildingState_Set(unk_132, a)) {
                unk_130 = a;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void BuildingActor::func_ov009_0225ca98() {
    static Unk_ov009_0225c290_Fn tbl[7] = {
        &BuildingActor::execDoorIdle, &BuildingActor::execDoorOpenIn,
        &BuildingActor::execDoorOpenOut, &BuildingActor::execDoorSlideOpen,
        &BuildingActor::execDoorSlideClose, &BuildingActor::execDoorNoAnimIn,
        &BuildingActor::execDoorNoAnimOut
    };
    if (unk_130 < 7) {
        (this->*tbl[unk_130])();
    }
}

BOOL BuildingActor::enterDoorIdle() {
    switch (getEntranceType()) {
    case 1:
    case 2: {
        void *r = (void *)func_ov009_0225d708();
        if (r == 0) {
            return FALSE;
        }
        BlendAnimModel_initAnim(unk_138, r, 0, 0x1000, 0, 0);
        break;
    }
    }
    return TRUE;
}

void BuildingActor::execDoorIdle() {
    if (PlayerActor_TestSlotFlag(0x13, 4) == 0 && TalkRequestFlags_IsResetti() == 0) {
        s32 st = getEntranceType();
        s32 f = 0;
        if (st == 1 || st == 3) {
            if ((unk_231 & 4) != 0) {
                if (vfunc_8c() == 0) {
                    clearTalkStartMode();
                    unk_27c = 1;
                } else {
                    clearTalkStartMode();
                    unk_27c = 0;
                }
                TalkRequest_AddPlayerTalk6(this, 0);
                f = 1;
            }
        }
        if ((unk_231 & 2) != 0 && f == 0) {
            s32 a = TouchPick_GetTappedObject(Scene_GetTouchPicker(), 0, 0);
            s32 b = (s32)PlayerActor_GetActor(4);
            if (b != 0 && b == a) {
                if (vfunc_8c() == 0) {
                    clearTalkStartMode();
                    unk_27c = 1;
                } else {
                    clearTalkStartMode();
                    unk_27c = 0;
                }
                TalkRequest_AddPlayerTalk6(this, 0);
            }
        }
    }
}

BOOL BuildingActor::enterDoorOpenIn() {
    void *r = (void *)func_ov009_0225d708();
    if (r != 0) {
        BlendAnimModel_initAnim(unk_138, r, 1, 0x1000, 0, 0);
        ((BuildingSeEmitter *)unk_234)->playSe(0x7d1);
        ((BuildingSeEmitter *)unk_234)->playSe(0x7d2);
        if (vfunc_98()) {
            s32 m = 0;
            u16 v[3];
            BOOL ok;
            if (Item_IsFurniture(&unk_132)) {
                v[0] = 0x500d;
                if (Item_GetFurnitureIndex(&unk_132) == Item_GetFurnitureIndex(&v[0])) {
                    ok = TRUE;
                } else {
                    ok = FALSE;
                }
            } else {
                if (unk_132 == 0x500d) {
                    ok = TRUE;
                } else {
                    ok = FALSE;
                }
            }
            if (ok) {
                m = 1;
            } else {
                if (Item_IsFurniture(&unk_132)) {
                    v[1] = 0x5000;
                    if (Item_GetFurnitureIndex(&unk_132) == Item_GetFurnitureIndex(&v[1])) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                } else {
                    if (unk_132 == 0x5000) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                }
                if (ok) {
                    m = 2;
                } else {
                    if (Item_IsFurniture(&unk_132)) {
                        v[2] = 0x500c;
                        if (Item_GetFurnitureIndex(&unk_132) == Item_GetFurnitureIndex(&v[2])) {
                            ok = TRUE;
                        } else {
                            ok = FALSE;
                        }
                    } else {
                        if (unk_132 == 0x500c) {
                            ok = TRUE;
                        } else {
                            ok = FALSE;
                        }
                    }
                    if (ok) {
                        m = 3;
                    }
                }
            }
            Unk_ov009_0225da90_Vec3 msg = vfunc_b4();
            Melody_PlayAt(&msg, m);
        }
        return TRUE;
    }
    return FALSE;
}

void BuildingActor::execDoorOpenIn() {
    AnimModel_stepAnim(unk_138);
    if (AnimFrameCtrl_isFinished(unk_1d4)) {
        vfunc_6c(0);
    } else if (AnimFrameCtrl_hasPassedFrame(unk_1d4, 0x14)) {
        ((BuildingSeEmitter *)unk_234)->playSe(0x7d3);
    } else if (AnimFrameCtrl_hasPassedFrame(unk_1d4, 0x1e)) {
        ((BuildingSeEmitter *)unk_234)->playSe(0x7d4);
    }
}

BOOL BuildingActor::enterDoorOpenOut() {
    void *r = (void *)func_ov009_0225d6f0();
    if (r != 0) {
        BlendAnimModel_initAnim(unk_138, r, 1, 0x1000, 0, 0);
        ((BuildingSeEmitter *)unk_234)->playSe(0x7d1);
        ((BuildingSeEmitter *)unk_234)->playSe(0x7d2);
        if (vfunc_98()) {
            s32 m = 0;
            u16 v[3];
            BOOL ok;
            if (Item_IsFurniture(&unk_132)) {
                v[0] = 0x500d;
                if (Item_GetFurnitureIndex(&unk_132) == Item_GetFurnitureIndex(&v[0])) {
                    ok = TRUE;
                } else {
                    ok = FALSE;
                }
            } else {
                if (unk_132 == 0x500d) {
                    ok = TRUE;
                } else {
                    ok = FALSE;
                }
            }
            if (ok) {
                m = 1;
            } else {
                if (Item_IsFurniture(&unk_132)) {
                    v[1] = 0x5000;
                    if (Item_GetFurnitureIndex(&unk_132) == Item_GetFurnitureIndex(&v[1])) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                } else {
                    if (unk_132 == 0x5000) {
                        ok = TRUE;
                    } else {
                        ok = FALSE;
                    }
                }
                if (ok) {
                    m = 2;
                } else {
                    if (Item_IsFurniture(&unk_132)) {
                        v[2] = 0x500c;
                        if (Item_GetFurnitureIndex(&unk_132) == Item_GetFurnitureIndex(&v[2])) {
                            ok = TRUE;
                        } else {
                            ok = FALSE;
                        }
                    } else {
                        if (unk_132 == 0x500c) {
                            ok = TRUE;
                        } else {
                            ok = FALSE;
                        }
                    }
                    if (ok) {
                        m = 3;
                    }
                }
            }
            Unk_ov009_0225da90_Vec3 msg = vfunc_b4();
            Melody_PlayAt(&msg, m);
        }
        return TRUE;
    }
    return FALSE;
}

void BuildingActor::execDoorOpenOut() {
    AnimModel_stepAnim(unk_138);
    if (AnimFrameCtrl_isFinished(unk_1d4)) {
        vfunc_6c(0);
    } else if (AnimFrameCtrl_hasPassedFrame(unk_1d4, 0x12)) {
        ((BuildingSeEmitter *)unk_234)->playSe(0x7d3);
    } else if (AnimFrameCtrl_hasPassedFrame(unk_1d4, 0x18)) {
        ((BuildingSeEmitter *)unk_234)->playSe(0x7d4);
    }
}

BOOL BuildingActor::enterDoorSlideOpen() {
    void *r = (void *)func_ov009_0225d708();
    if (r) {
        BlendAnimModel_initAnim(unk_138, r, 1, 0x1000, 0, 0);
        if (Item_IsNookShop(&unk_132)) {
            ((BuildingSeEmitter *)unk_234)->playSe(0x806);
        } else {
            ((BuildingSeEmitter *)unk_234)->playSe(0x808);
        }
        return TRUE;
    }
    return FALSE;
}

void BuildingActor::execDoorSlideOpen() {
    AnimModel_stepAnim(unk_138);
    if (AnimFrameCtrl_isFinished(unk_1d4)) {
        vfunc_6c(4);
    }
}

BOOL BuildingActor::enterDoorSlideClose() {
    unk_42 = 0x1a;
    void *r = (void *)func_ov009_0225d6f0();
    if (r) {
        BlendAnimModel_initAnim(unk_138, r, 1, 0x1000, 0, 0);
        return TRUE;
    }
    return FALSE;
}

void BuildingActor::execDoorSlideClose() {
    if (unk_42 != 0) {
        unk_42--;
        if (unk_42 == 0) {
            if (Item_IsNookShop(&unk_132)) {
                ((BuildingSeEmitter *)unk_234)->playSe(0x807);
            } else {
                ((BuildingSeEmitter *)unk_234)->playSe(0x809);
            }
        }
    }
    if (unk_42 == 0) {
        AnimModel_stepAnim(unk_138);
        if (AnimFrameCtrl_isFinished(unk_1d4)) {
            vfunc_6c(0);
        }
    }
}

BOOL BuildingActor::enterDoorNoAnimIn() { return TRUE; }

void BuildingActor::execDoorNoAnimIn() { vfunc_6c(0); }

BOOL BuildingActor::enterDoorNoAnimOut() { return TRUE; }

void BuildingActor::execDoorNoAnimOut() { vfunc_6c(0); }

BOOL BuildingActor::setEntryState(s32 a) {
    static Unk_ov009_0225c360_Fn tbl[9] = {
        &BuildingActor::enterEntryIdle, &BuildingActor::enterEntryCheck,
        &BuildingActor::enterEntryTalkOpen, &BuildingActor::enterEntryTalk,
        &BuildingActor::enterEntry04, &BuildingActor::enterEntry05,
        &BuildingActor::enterEntryWarp, &BuildingActor::enterEntry07,
        &BuildingActor::enterEntry08
    };
    if (a < 9) {
        if ((this->*tbl[a])()) {
            unk_278 = a;
            return TRUE;
        }
    }
    return FALSE;
}

void BuildingActor::updateEntryState() {
    static Unk_ov009_0225c290_Fn tbl[9] = {
        &BuildingActor::execEntryIdle, (Unk_ov009_0225c290_Fn)&BuildingActor::execEntryCheck,
        &BuildingActor::execEntryTalkOpen, &BuildingActor::execEntryTalk,
        &BuildingActor::execEntry04, &BuildingActor::execEntry05,
        &BuildingActor::execEntryWarp, &BuildingActor::execEntry07,
        &BuildingActor::execEntry08
    };
    if (unk_278 < 9) {
        (this->*tbl[unk_278])();
    }
}

BOOL BuildingActor::enterEntryIdle() { return TRUE; }

void BuildingActor::execEntryIdle() {}

BOOL BuildingActor::enterEntryCheck() {
    if (unk_27c == 0) {
        BuildingOccupancy_RequestEnter(unk_132);
    }
    unk_232.f1 = 0;
    unk_233 = 0;
    return TRUE;
}

BOOL BuildingActor::execEntryCheck() {
    if (unk_27c == 0) {
        s32 r = BuildingOccupancy_GetAnswer(unk_132);
        if (r != 0) {
            s32 v = (r == 2) ? 1 : 0;
            u8 *p = (u8 *)&unk_232;
            *p = (*p & ~2) | ((v & 1) << 1);
            unk_233 = (r == 3) ? 1 : 0;
            if (unk_232.f1 != 0 || unk_233 != 0) {
                setEntryState(2);
            } else if (getEntranceType() == 1) {
                setEntryState(7);
            } else {
                setEntryState(4);
            }
        }
    } else {
        setEntryState(2);
    }
}

BOOL BuildingActor::enterEntryTalkOpen() {
    _ZN9Character17attachTalkRequestEi(this, this);
    unk_3c->unk_08 = 1;
    vfunc_78();
    return TRUE;
}

void BuildingActor::execEntryTalkOpen() {
    if (unk_3c != NULL && unk_3c->unk_04 != 0) {
        vfunc_7c();
        setEntryState(3);
    }
}

BOOL BuildingActor::enterEntryTalk() { return TRUE; }

void BuildingActor::execEntryTalk() {
    if (unk_3c != NULL && unk_3c->unk_04 == 0) {
        vfunc_84();
        _ZN9Character17detachTalkRequestEi(this, this);
        TalkRequest_SetTargetDone(this);
    } else {
        vfunc_80();
    }
}

BOOL BuildingActor::enterEntry04() {
    PlayerActor_RequestStowThenAct10(0);
    return TRUE;
}

void BuildingActor::execEntry04() {
    if (PlayerActor_IsStowFinished()) {
        setEntryState(5);
    }
}

BOOL BuildingActor::enterEntry05() {
    s16 ang;
    s32 p4;
    Unk_ov009_0225b880_Vec3 v;
    if (getDoorPos(&v, &ang)) {
        p4 = v.x;
        if (vfunc_94() == 0) {
            s32 *q = PlayerActor_GetBodyPos(4);
            if (q != NULL) {
                p4 = *q;
            }
        }
        if (vfunc_90()) {
            if (PlayerActor_LocalRequestDoorApproach(&p4, &v.z, &ang)) {
                return TRUE;
            }
        } else {
            BOOL m = getEntranceType() == 2 ? TRUE : FALSE;
            if (PlayerActor_LocalRequestDoorEnter(m, &p4, &v.z, ang)) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

void BuildingActor::execEntry05() {
    if (PlayerActor_IsEnteringDoor()) {
        switch (getEntranceType()) {
        case 2:
            Camera_SetMode3();
            setEntryState(6);
            break;
        case 3:
            Camera_SetMode3();
            setEntryState(6);
            break;
        }
    }
}

BOOL BuildingActor::enterEntryWarp() {
    unk_27e = 0;
    return TRUE;
}

void BuildingActor::execEntryWarp() {
    unk_27e = unk_27e + 1;
    getEntranceType();
    u32 lim = 0x14;
    if (getEntranceType() == 1) {
        lim += 0xc;
    }
    if (unk_27e >= lim) {
        s32 r = getInteriorScene();
        s16 ang;
        Unk_ov009_0225b880_Vec3 v;
        if (getDoorPos(&v, &ang)) {
            if (SceneWarp_RequestExit(Scene_GetWarpRequest(), r)) {
                v.y = Ground_GetDefaultY(0);
                v.z = v.z + 0x1000;
                void *o = Scene_GetWarpRequest();
                s32 k = Scene_GetCurrent();
                Scene_SetTownReturnPos(o, k, &v, 0xf000000, (s16)(ang + 0x8000), unk_228, unk_22c);
                getEntranceType();
                Building_SetLastEntranceType();
                unk_232.f0 = 1;
            }
        }
    }
}

BOOL BuildingActor::enterEntry07() {
    PlayerActor_RequestStowThenAct10(0);
    return TRUE;
}

void BuildingActor::execEntry07() {
    if (PlayerActor_IsStowFinished()) {
        setEntryState(8);
    }
}

BOOL BuildingActor::enterEntry08() { return TRUE; }

void BuildingActor::execEntry08() {
    s16 ang;
    s32 p4;
    Unk_ov009_0225b880_Vec3 v;
    if (getDoorPos(&v, &ang)) {
        p4 = v.x;
        if (vfunc_94() == 0) {
            s32 *q = PlayerActor_GetBodyPos(4);
            if (q != NULL) {
                p4 = *q;
            }
        }
        if (PlayerActor_LocalRequestDoorEnter(2, &p4, &v.z, ang)) {
            setEntryState(6);
        }
    }
}

Unk_ov009_0225b880_Vec3 *BuildingActor::getInteractionPos() { return &unk_2a4; }

BOOL BuildingActor::vfunc_48(Character *a) {
    if (a == NULL) {
        return FALSE;
    }
    s32 d = func_020e780c((s16)(unk_8e + 0x8000), a->unk_8e);
    if (d <= 0x1000) {
        if (getEntranceType() != 0) {
            if ((unk_231 & 8) != 0 && getEntranceType() == 2) {
                if (vfunc_8c() == 0) {
                    clearTalkStartMode();
                    unk_27c = 1;
                    return TRUE;
                }
                clearTalkStartMode();
                unk_27c = 0;
                return TRUE;
            }
        } else if (vfunc_8c() == 0) {
            s32 r = func_020e9650(a->getInteractionPos(), getInteractionPos());
            clearTalkStartMode();
            unk_27c = 1;
            if (r >= 0x3000) {
                return FALSE;
            }
            return TRUE;
        }
    }
    return FALSE;
}


void BuildingActor::vfunc_88() {
    BOOL ok;
    if (Item_IsFurniture(&unk_132)) {
        u16 v = 0x500a;
        if (Item_GetFurnitureIndex(&unk_132) == Item_GetFurnitureIndex(&v)) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    } else {
        if (unk_132 == 0x500a) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    }
    if (!ok) {
        TalkAutoAdvance_start(unk_3c, 0x64);
    }
}

void BuildingActor::vfunc_78() {
    Unk_ov009_0225bce0_Pad pad;
    setFileName((const char *)sBuildingDefaultMsgFile);
    unk_1e = 0;
}

void BuildingActor::vfunc_7c() {}

void BuildingActor::vfunc_80() {}

void BuildingActor::vfunc_84() {}

void BuildingActor::updateMatrix() {
    if (unk_194 != NULL) {
        updateBaseMatrix(0);
        AnimModel_drawAnimated(unk_138, 0);
        Unk_ov009_0225bc88_Blk t = unk_19c;
        updateShadows(&t);
    }
}

BOOL BuildingActor::getDoorPos(Unk_ov009_0225b880_Vec3 *out, s16 *ang) {
    if (unk_288 != NULL && unk_28c != 0) {
        s32 a = func_020e7b98(unk_288->unk_28, unk_288->unk_30);
        s32 t0 = func_01ffcb0c(0x1000, unk_288->unk_30);
        Unk_ov009_0225b880_Vec3 v;
        v.x = func_01ffcb0c(0x1000, unk_288->unk_28);
        v.y = 0;
        v.z = t0;
        if (ang != NULL) {
            *ang = a + 0x8000;
        }
        if (out != NULL) {
            Unk_ov009_0225b880_Vec3 r;
            func_01ffd070(&r, TriangleTrigger_getCenter(unk_288), &v);
            out->x = r.x;
            out->y = r.y;
            out->z = r.z;
            out->y = 0x200;
            out->z = out->z - 0x200;
        }
        return TRUE;
    }
    out->x = unk_5c[0];
    out->y = unk_5c[1];
    out->z = unk_5c[2];
    return FALSE;
}

s32 BuildingActor::getInteriorScene(){
    u32 v;
    BOOL in = FALSE;
    v = unk_132;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    Unk_ov009_0225bb0c_Tmp t;
    BuildingInfo_Copy(&t, v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = BuildingInfo_GetInteriorScene(&t);
    BuildingInfo_Destroy(&t);
    return r;
}

s32 BuildingActor::vfunc_a0(){
    u32 v;
    BOOL in = FALSE;
    v = unk_132;
    if (v >= 0x5000 && v <= 0x5021) {
        in = TRUE;
    }
    if (in) {
        v = v & 0xfff;
    } else {
        v = -1;
    }
    Unk_ov009_0225bb0c_Tmp t;
    BuildingInfo_Copy(&t, v < 0x22 ? data_020d0a7c + v * 10 : data_020d0a7c);
    s32 r = BuildingInfo_GetUnk05(&t);
    BuildingInfo_Destroy(&t);
    return r;
}

BOOL BuildingActor::vfunc_90() { return FALSE; }

BOOL BuildingActor::vfunc_b0() { return TRUE; }

BOOL BuildingActor::vfunc_94() { return TRUE; }

BOOL BuildingActor::vfunc_98() { return FALSE; }

BOOL BuildingActor::isOffscreen() {
    if (gCamera != 0) {
        Unk_ov009_0225b880_Vec3 *g = &gCameraLookAt;
        s32 dx = unk_5c[0] - g->x;
        if (dx < 0) {
            dx = -dx;
        }
        s32 dz = unk_5c[2] - g->z;
        if (dx > getViewRangeX() || dz > getViewRangeFront() || dz < -getViewRangeBack()) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

void BuildingActor::updateOffscreen() {
    unk_231 = unk_231 & ~1;
    if (isOffscreen()) {
        unk_231 = unk_231 | 1;
    }
}

BOOL BuildingActor::isDoorIdle() {
    if (unk_130 == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL BuildingActor::openDoorForEntry() {
    switch (getEntranceType()) {
    case 2:
        return vfunc_6c(1);
    case 3:
        return vfunc_6c(5);
    case 1:
        return vfunc_6c(3);
    default:
        return FALSE;
    }
}

BOOL BuildingActor::tryOpenDoorForEntry() {
    if (unk_278 == 0) {
        return openDoorForEntry();
    }
    return FALSE;
}

BOOL BuildingActor::openDoorForExit() {
    switch (getEntranceType()) {
    case 2:
        return vfunc_6c(2);
    case 3:
        return vfunc_6c(6);
    case 1:
        return vfunc_6c(3);
    default:
        return FALSE;
    }
}

BOOL BuildingActor::tryOpenDoorForExit() {
    if (unk_278 == 0) {
        return openDoorForExit();
    }
    return FALSE;
}

u16 *BuildingActor::getItemId() { return &unk_132; }

u32 BuildingActor::getGridX() { return unk_228; }

u32 BuildingActor::getGridZ() { return unk_22c; }

void BuildingActor::callIsLit() { BuildingLights_isLit(unk_1f0); }


BuildingSeEmitter::BuildingSeEmitter() {
    unk_40 = 0;
}

extern "C" void *_ZN12Unk_0213b9c4D1Ev(void *p) {
    *(void **)p = data_0213b9c4;
    _ZN12SndSeEmitterD2Ev(p);
    return p;
}

void BuildingSeEmitter::activate() {
    if (unk_40 == 0) {
        func_02003ecc(this);
        unk_40 = 1;
    }
}

void BuildingSeEmitter::setPosition(Unk_ov009_0225b880_Vec3 *v) {
    if (unk_40 != 0) {
        Unk_ov009_0225b880_Vec3 t;
        t.x = v->x;
        t.y = v->y;
        t.z = v->z;
        func_02003e80(this, &t);
    }
}

void BuildingSeEmitter::deactivate() {
    if (unk_40 != 0) {
        func_02003e50(this);
        unk_40 = 0;
    }
}

void BuildingSeEmitter::playSe(u32 a) {
    if (unk_40 != 0) {
        func_02003e70(this, a, 0x7f, 0);
    }
}

void BuildingSeEmitter::playSeHeld(u32 a) {
    if (unk_40 != 0) {
        Snd_SeEmitterPlayHeld(this, a, 0x7f, 0);
    }
}

Unk_ov009_0225da90_Vec3 BuildingActor::vfunc_b4() {
    Unk_ov009_0225da90_Vec3 r;
    r.x = unk_5c[0];
    r.y = unk_5c[1];
    r.z = unk_5c[2];
    return r;
}

// Slots b4 / b8 of the vtable (were free functions func_ov009_0225b884 / func_ov009_0225b880)
BOOL BuildingActor::vfunc_b8(Unk_ov009_0225bc88_Blk *out) { return 0; }

// ---------------------------------------------------------------- data

struct Unk_ov009_0225e260_Entry {
    void (*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};

extern "C" Unk_ov009_0225e260_Entry sBuildingActorProfile = {BuildingActor_Create, 0x1a, 0x20, {0, 0xc8000, 0x12c000, 0x258000}};
extern "C" char sBuildingDefaultMsgFile[16] = "obj_etc_error";
extern "C" char data_ov009_0225e3e8[4] = "STR";
extern "C" char data_ov009_0225e3ec[16] = "STR:a/bca/bca0";
extern "C" char data_ov009_0225e3fc[16] = "STR:a/bca/bca1";
extern "C" char data_ov009_0225e40c[16] = "STR:a/bca/bca2";
extern "C" char data_ov009_0225e41c[16] = "STR:a/bta/bta%d";
extern "C" char data_ov009_0225e42c[16] = "STR:a/btp/btp%d";
extern "C" char data_ov009_0225e43c[16] = "STR:a/bmd/bmd0";
extern "C" char data_ov009_0225e44c[16] = "STR:a/bmd/bmd1";
extern "C" char data_ov009_0225e45c[24] = "STR:a/bshadow/bshadow0";
extern "C" char sBuildingLightTexPathFmt[32] = "/str/arc/%d/str%d%c_lt.nsbtx";
extern "C" char sBuildingTexPathFmt[28] = "/str/arc/%d/str%d%c.nsbtx";
extern "C" char sBuildingArcPathFmt[24] = "/str/arc/%d/str%d%c.arc";
extern "C" char sBuildingArcPath[32] = {0};
extern "C" char sBuildingTexPath[32] = {0};
extern "C" char sBuildingLightTexPath[32] = {0};
