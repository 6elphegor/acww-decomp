// mwcc-version: 1.2/base
#include "types.h"
#include "room/Unk_ov004_0224882c_Buf.h"
#include "gfx/Unk_ov004_Mtx.h"
#include "room/FtrActorViews.h"
#include "actor/Unk_02002f14_Node.h"
#include "actor/Unk_0203e5d0_Node.h"
#include "game/Unk_0203e4f0_Vec.h"
#include "room/FtrActorParts.h"
#include "gfx/AnimFrameCtrl.h"
#include "game/Vec3.h"
#include "item/ItemId.h"
#include "game/CollisionVec2.h"
#include "game/LightLevel.h"
#include "gfx/G3dResAccess.h"
#include "room/FtrVisNodes.h"
#include "room/FtrSwitch.h"
#include "room/FtrClockHands.h"
#include "room/FtrAnimSet.h"
#include "room/FtrStackedSet.h"
#include "talk/TalkWindowState.h"
#include "game/BoxCollider.h"
#include "room/Unk_ov004_02205c80_Obj.h"
#include "room/Unk_ov004_02206570_Act.h"
#include "room/Unk_ov004_View00_Chk.h"
// The two functions of the ov004 translation unit 0x02209f70-0x022136d0 that need mwcc 1.2/base (signed-halfword
// switch tables): FtrSingingInsect::updateActive and vfunc_7c. Same declarations as the main file of the unit;
// nothing else is emitted here (see config/usa/arm9/overlays/ov004/object_order.txt).
// ================================================================ library chain and TU02 helper classes (from the linked TU02 unit)

// ================================================================ plain value types


typedef Vec3 Unk_ov004_Vec3;
typedef Vec3 Unk_ov004_022077a4_Vec3;
typedef Vec3 Unk_ov004_02208284_V3;
typedef Unk_ov004_Mtx Unk_ov004_02208284_M;
typedef Unk_ov004_Mtx Unk_ov004_022077a4_Mtx;
typedef Unk_ov004_Mtx Unk_ov004_02205eb0_Mtx;

// main class 0x02000c8c (3 words, registered for destruction through __register_global_object)
struct FxVec3 {
    s32 x, y, z;
    FxVec3() {}
    FxVec3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~FxVec3();
};

// ================================================================ library chain (as tu01, but slot 08/14 as this class overrides them)
class ProcBase {
public:
    static void *operator new(unsigned long size);
    static void operator delete(void *ptr);

    ProcBase();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual void postCreate(s32 a);
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
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


class Actor : public GameProc {
public:
    Actor();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
    virtual ~Actor();

    /* 0x50 */ Unk_02002f14_Node listNode;
    /* 0x5c */ s32 position[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 rotY;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};


class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual BOOL vfunc_04();
    virtual BOOL preDelete();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual FxVec3 *getInteractionPos();
    virtual BOOL acceptsInteractionOutOfRange(void *a);
    virtual BOOL vfunc_58(void *a);
    virtual BOOL vfunc_5c();

    void detachTalkRequest(s32 a);
    void attachTalkRequest(s32 a);

    /* 0xd4 */ Unk_0203e5d0_Node charNode;
    /* 0xe4 */ s32 interactionRangeSq;
    /* 0xe8 */ u16 charFlags;
    /* 0xea */ u16 pad_ea;
};

// ---------------------------------------------------------------- secondary base at +0xec (vtable 0x020ddcf0 in main)
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_s08();
    void setFileName(const char *src);

    /* 0x04 */ char fileName[0x1a];
    /* 0x1e */ u8 msgIndex;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void onMessageStart();
    virtual void onMessageEnd();
    virtual void onChoice();
    virtual void onSignalTag();
    virtual void onActionTag0();
    virtual void onActionTag1();
    virtual void onActionTag2();
    virtual void onActionTag3();
    virtual void onActionTag4();
    virtual void onConditionTag();
    virtual void onEventTag(u32 a);
    virtual void onTag09_0();
    virtual void onTag09_1();
    virtual void onTag09_2();
    virtual void onTag09_3();
    virtual void onTag09_4();
    virtual void onTag09_5();
    virtual void onTag09_6();
    virtual void onTag09_7();
    virtual void onTag09_8();
    virtual void onTag09_9();
    virtual void onScannedTag();
    virtual void getSpeakerData();
    virtual void getVoiceType();
    virtual void onWindowClose();
    virtual void onTalkEnd();

    u8 pad_20[0x1c];
    /* 0x3c */ TalkWindowState *unk_3c;
    /* 0x40 */ u8 unk_40;
};

// ================================================================ helper object types (members of / used by the 0224882c object)


// ---- 0x02206520: list of up to 4 tile positions

struct FtrTileList {
    u32 count;
    Unk_ov004_02206520_Ent tiles[4];
    Unk_ov004_02206520_Ent *get(s32 i);
    u32 getCount();
    BOOL add(u32 a, u32 b);
    void release();
    FtrTileList();
};


// ---- 0x02205994: 4 ids + count (member at 0x760)

// ---- 0x02205bcc: model animation slot (base: main class LightLevel)

struct FtrGlowMat : public LightLevel {
    FtrGlowMat();
    ~FtrGlowMat();
    BOOL setLit(BOOL on, s32 a, s32 b);
    BOOL bindMaterial(G3dResAccess *res, s32 idx, BOOL on);
    s8 matIdx;
    G3dResAccess *resMdl;
};

// ---- 0x02205b14: element view used by the 3-element container (same object as 0x02205bcc)


class FtrGlowMatSet {
public:
    FtrGlowMatSet();
    ~FtrGlowMatSet();
    void update();
    u32 setLit(u32 a, u32 b, u32 c);
    u32 init(u32 a, u32 b);

    /* 0x00 */ FtrGlowMat mats[3];
    /* 0x54 */ u8 anyBound;
};

// ---- 0x02205c44 (member at 0x73c)

// ---- 0x02205d5c (member at 0x73e)

// ---- 0x02205e58 (member at 0x178)
struct FtrStackLink {
    ~FtrStackLink();
    BOOL attachAt(s32 x, s32 y, s16 z);
    BOOL set(s32 idx, Unk_ov004_02205d8c_Vec *pos, s32 ang);
    s32 getRelAngle();
    Unk_ov004_02205d8c_Vec *getRelPos();
    s32 getParentIndex();
    BOOL isAttached();
    void clear();
    s16 parentIndex;
    s16 relAngle;
    Unk_ov004_02205d8c_Vec relPos;
};

// ---- 0x022062f4 (element of 0x022061b4)
struct FtrTopItem {
    FtrTopItem();
    ~FtrTopItem();
    BOOL set(u16 *id, Unk_ov004_02205d8c_Vec *pos);
    u16 *getItem();
    Unk_ov004_02205d8c_Vec *getPos();
    void clear();
    BOOL isSet();
    void draw(Unk_ov004_02205c80_Obj *o);
    u16 unk_00;
    u16 item;
    Unk_ov004_02205d8c_Vec relPos;
};


// ---- 0x022061b4 (member at 0x188)
struct FtrTopItems {
    FtrTopItems();
    ~FtrTopItems();
    void dropAll(Unk_ov004_02205c80_Obj *o);
    BOOL pickUpAll(Unk_ov004_02205c80_Obj *o);
    BOOL canPickUp(Unk_ov004_02205c80_Obj *o);
    BOOL add(u16 *id, Unk_ov004_02205d8c_Vec *pos);
    void drawAll(Unk_ov004_02205c80_Obj *o);
    FtrTopItem *get(u32 i);
    void clearAll();
    u32 unk_00;
    FtrTopItem items[4];
};

// ---- 0x02206398 (member at 0x44 of 0x02206e38; 5 pairs of resource pointers)


// ---- 0x02206434 (set of up to 4 neighbour objects)

// ---- 0x022487cc : BoxCollider (member at 0x628)

class CollisionEdge {
public:
    virtual BOOL hasRoundEnds();
    CollisionVec2 start, end, normal;
    s32 offset;
    BOOL intersectLine(CollisionVec2 *out, CollisionVec2 *a, CollisionVec2 *b);
    s32 isBetweenEnds(CollisionVec2 *p);
};




struct FtrCollider : BoxCollider {
    void *owner;
    FtrCollider();
    void onEdgeContact(CollisionEdge *a, Unk_ov004_02206570_Act *b, s32 c);
    void slideOwnerForWideFtr(Unk_ov004_02206570_Act *b);
    void clearOwner();
    void setOwner(void *p);
};

// ---- 0x022069ec / 0x02206e38 (model loader, member at 0x6c8)
class TexVramSlot;

class ModelResource {
public:
    u32 fileData;
    u32 pad[10];
    u8 loadState;
    u8 unk_31;
    u8 pad2[2];

    ModelResource();
    virtual ~ModelResource();
    u32 loadTexture(void *a, TexVramSlot *b, void *c);
    void release(void);
    void *getTexture(void);
};


struct FtrModelRes {
    void *texFile;
    void *arcFile;
    void *model;
    void *texture;
    ModelResource texLoader;
    FtrAnimSet animSet;
    u16 item;
    u8 keepTexCopy;

    void release();
    void *getTexture();
    void *getModel();
    BOOL loadAsync(void *obj, s32 a, s32 flag);
    BOOL loadSync(void *obj, s32 a, s32 flag);
    void freeTexFile();
    FtrAnimSet *getAnimSet();
    BOOL loadFiles(void *obj, s32 id);
    char *makeTexPath(s32 id);
    char *makeArcPath(s32 id);
    BOOL isLoaded();
};

struct Unk_ov004_02206e38 {
    Unk_ov004_02206e38();
    ~Unk_ov004_02206e38();
    u32 texFile;
    u32 arcFile;
    u32 model;
    u32 texture;
    ModelResource texLoader;
    FtrAnimSet animSet;
    u16 item;
    u8 keepTexCopy;
};

// ---- 0x02248804 (array of 4 at 0x7c0)

class ModelAnim : public AnimFrameCtrl {
public:
    ModelAnim();
    virtual ~ModelAnim();
    u32 anmObj;
    u32 resMdl;
};

class FtrModelAnim : public ModelAnim {
public:
    FtrModelAnim();
    virtual ~FtrModelAnim();
    u32 getAnmObj();
};

// ================================================================ FtrActor





// ================================================================ types used by the per-part views of the base object

// ---- part 13

// ---- part 15

// ---- part 24

// ---- size checks of the per-part views of the base object (0x130..0x840)
typedef char Unk_ov004_View00_Assert[sizeof(Unk_ov004_View00_Chk) == 0x840 - 0x130 ? 1 : -1];

typedef char Unk_ov004_View10_Assert[sizeof(Unk_ov004_View10_Chk) == 0x840 - 0x130 ? 1 : -1];

typedef char Unk_ov004_View11_Assert[sizeof(Unk_ov004_View11_Chk) == 0x840 - 0x130 ? 1 : -1];

typedef char Unk_ov004_View12_Assert[sizeof(Unk_ov004_View12_Chk) == 0x840 - 0x130 ? 1 : -1];

typedef char Unk_ov004_View13_Assert[sizeof(Unk_ov004_View13_Chk) == 0x840 - 0x130 ? 1 : -1];

typedef char Unk_ov004_View14_Assert[sizeof(Unk_ov004_View14_Chk) == 0x840 - 0x130 ? 1 : -1];

typedef char Unk_ov004_View15_Assert[sizeof(Unk_ov004_View15_Chk) == 0x840 - 0x130 ? 1 : -1];

typedef char Unk_ov004_View16_Assert[sizeof(Unk_ov004_View16_Chk) == 0x840 - 0x130 ? 1 : -1];

typedef char Unk_ov004_View17_Assert[sizeof(Unk_ov004_View17_Chk) == 0x840 - 0x130 ? 1 : -1];

typedef char Unk_ov004_View18_Assert[sizeof(Unk_ov004_View18_Chk) == 0x840 - 0x130 ? 1 : -1];

typedef char Unk_ov004_View19_Assert[sizeof(Unk_ov004_View19_Chk) == 0x840 - 0x130 ? 1 : -1];

typedef char Unk_ov004_View20_Assert[sizeof(Unk_ov004_View20_Chk) == 0x840 - 0x130 ? 1 : -1];

typedef char Unk_ov004_View21_Assert[sizeof(Unk_ov004_View21_Chk) == 0x840 - 0x130 ? 1 : -1];

typedef char Unk_ov004_View22_Assert[sizeof(Unk_ov004_View22_Chk) == 0x840 - 0x130 ? 1 : -1];

typedef char Unk_ov004_View23_Assert[sizeof(Unk_ov004_View23_Chk) == 0x840 - 0x130 ? 1 : -1];

typedef char Unk_ov004_View24_Assert[sizeof(Unk_ov004_View24_Chk) == 0x840 - 0x130 ? 1 : -1];

typedef char Unk_ov004_View25_Assert[sizeof(Unk_ov004_View25_Chk) == 0x840 - 0x130 ? 1 : -1];

class FtrActor;

class FtrActor : public Character, public TalkMsgRequest {
public:
    FtrActor();
    virtual ~FtrActor();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_00();
    virtual void postCreate(s32 a);
    virtual BOOL preDelete();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL onExecute();
    virtual BOOL preDraw();
    virtual FxVec3 *getInteractionPos();
    virtual BOOL vfunc_60();
    virtual void vfunc_64(s32 a, Unk_ov004_02206ec8_Ctx *b);
    virtual BOOL vfunc_68();
    virtual void vfunc_6c(s32 a, void *b);
    virtual BOOL changeAct(u32 a, u8 b);
    virtual u8 getActSwitchState(u32 a);
    virtual u8 getActAid();
    virtual BOOL initModel();
    virtual BOOL updateActive();
    virtual BOOL updateAppearRemove();
    virtual BOOL isVisible();
    virtual BOOL needsTexCopy();
    virtual void onRemove();
    virtual void onMoveStart();
    virtual void onRotateStart();
    virtual void onRotateUpdate();
    virtual BOOL isReady();

    void execPreview();
    BOOL enterPreview();
    void execHide();
    BOOL enterHide();
    void execRemove();
    BOOL enterRemove();
    void execPull();
    BOOL enterPull();
    void execPush();
    BOOL enterPush();

    BOOL execRotate();
    BOOL enterRotate();
    BOOL execIdle();
    BOOL enterIdle();
    void execAppear();
    BOOL enterAppear();
    void execAct();
    BOOL setAct(s32 idx);
    BOOL isAct(s32 s);
    BOOL isHidden();
    BOOL isRemoving();
    BOOL isNotReady();
    BOOL isNotIdle();
    BOOL isIdle();
    BOOL startHide();
    BOOL startPull(s16 a);
    BOOL startPush(s16 a);
    BOOL startRotate(s32 a);

    BOOL isPreview();
    void spawnEffectAtCorner(s32 a);
    void spawnEffectAt(Unk_0203e4f0_Vec *v);
    void spawnActorC0AtCenter();
    void spawnActorC0AtTile(s32 a);
    BOOL findOwnTile(s32 *ox, s32 *oy, s32 a, s32 b);
    u16 makeCharId(s32 a, s32 b);
    BOOL canMoveTo(s32 a, s32 b);
    BOOL canMoveBy(s32 a);
    BOOL canRotateBy(s32 a);
    BOOL hasItemOnTop();
    void releaseRoomLight();
    void updateLamp();

    void playAnim(s32 a, s32 b, s32 c, u32 d);
    void initAnims(s32 a, s32 b, s32 c, s32 d);
    u16 getAnimFrameCount(s32 a);
    BOOL playSound3();
    BOOL playSound2();
    BOOL playSound1();
    BOOL playSound0();
    u32 hasIndoorFlag6();
    BOOL isSoundingClock();
    BOOL isCabinClock();
    BOOL isGyroid();
    BOOL isSeatOrBed();
    BOOL isTvOn();
    BOOL isStereoOn();
    BOOL bindTvScreenTex(BOOL a);   // defined in TU03

    /* 0x12e */ u16 modelSlot;
    union {
        struct {
            /* 0x130 */ u8 pad_130[0x14c - 0x130];
            /* 0x14c */ s32 drawScale;
            /* 0x150 */ s32 drawScaleY;
            /* 0x154 */ s32 drawScaleZ;
            /* 0x158 */ s32 colliderScale;
            /* 0x15c */ u16 appearFrame;
            /* 0x15e */ u16 wobblePhase;
            /* 0x160 */ s16 wobbleSpeed;
            /* 0x162 */ u8 pad_162[2];
            /* 0x164 */ s32 wobbleAmp;
            /* 0x168 */ s16 targetAngle;
            /* 0x16a */ u8 pad_16a[2];
            /* 0x16c */ s32 targetPos[3];
            /* 0x178 */ u8 stackLink[0x10];   // FtrStackLink
            /* 0x188 */ u8 topItems[0x44];   // FtrTopItems
            /* 0x1cc */ u8 topItemCylinders[0x80];   // 4 x TouchPickCylinder (0x20)
            /* 0x24c */ u8 moveFlag[0x34];
            /* 0x280 */ u32 ftrIndex;
            /* 0x284 */ u8 mapLayer;
            /* 0x285 */ u8 pad_285[3];
            /* 0x288 */ u8 touchBox[0x2a8];  // TouchPickBox
            /* 0x530 */ s32 baseAct;
            /* 0x534 */ u8 model[0x590 - 0x534]; // BlendAnimModel
            /* 0x590 */ u32 modelResMdl;
            /* 0x594 */ u8 pad_594[4];
            /* 0x598 */ Unk_ov004_Mtx modelMtx;
            /* 0x5c8 */ u8 pad_5c8[0x5d0 - 0x5c8];
            /* 0x5d0 */ u8 animFrameCtrl[4];
            /* 0x5d4 */ u32 animNumFrames;
            /* 0x5d8 */ u32 animFrame;
            /* 0x5dc */ u8 pad_5dc[0x628 - 0x5dc];
            /* 0x628 */ u8 collider[0xa0];   // FtrCollider
            /* 0x6c8 */ u8 modelRes[0x74];   // Unk_ov004_02206e38
            /* 0x73c */ u8 switchState[2];      // FtrSwitch
            /* 0x73e */ s8 clockHands;         // FtrClockHands (3 bytes)
            /* 0x73f */ s8 clockHandsMinJnt;
            /* 0x740 */ u8 clockHandsValid;
            /* 0x741 */ u8 pad_741[3];
            /* 0x744 */ u8 lampMat[0x1c];   // FtrGlowMat
            /* 0x760 */ u8 visNodes[8];      // FtrVisNodes
            /* 0x768 */ s32 spawnMode;
            /* 0x76c */ u16 actFrame;
            /* 0x76e */ u8 pad_76e[2];
            /* 0x770 */ s32 commentPersonality;
            /* 0x774 */ s32 commentId;
            /* 0x778 */ u8 actAid;
            /* 0x779 */ u8 netRequestPending;
            /* 0x77a */ u8 isInitializing;
            /* 0x77b */ u8 pad_77b;
            /* 0x77c */ s32 kind;
            /* 0x780 */ s32 footprint;
            /* 0x784 */ s32 hasTopSurface;
            /* 0x788 */ u8 noCollision;
            /* 0x789 */ u8 startsOff;
            /* 0x78a */ u8 pad_78a[2];
            /* 0x78c */ s32 surfaceHeight;
            /* 0x790 */ s32 lightKind;
            /* 0x794 */ u8 soundEmitter[0x20];   // Unk_ov004_02235984
            /* 0x7b4 */ s32 centerPos[3];
            /* 0x7c0 */ Unk_ov004_02208980_E anims[4];   // 4 x FtrModelAnim
        };
        struct {
            /* 0x130 */ u8 b10_pad_130[0x5d0 - 0x130];
            /* 0x5d0 */ u8 b10_pad_5d0[4];
            /* 0x5d4 */ Unk_ov004_0220a648_Bits b10_unk_5d4;
            /* 0x5d8 */ u8 b10_pad_5d8[0x6c8 - 0x5d8];
            /* 0x6c8 */ u32 b10_sub_6c8[(0x73c - 0x6c8) / 4];
            /* 0x73c */ u32 b10_sub_73c[(0x768 - 0x73c) / 4];
            /* 0x768 */ s32 b10_unk_768;
            /* 0x76c */ u8 b10_pad_76c[0x794 - 0x76c];
            /* 0x794 */ u32 b10_sub_794[(0x7b4 - 0x794) / 4];
            /* 0x7b4 */ u32 b10_sub_7b4[(0x820 - 0x7b4) / 4];
            /* 0x820 */ u32 b10_pad_820;
            /* 0x824 */ Unk_ov004_0220a648_Bits b10_unk_824;
            /* 0x828 */ u8 b10_pad_828[0x840 - 0x828];
        };
        struct {
            /* 0x130 */ u8 b11_pad_10c[0x590 - 0x130];
            /* 0x590 */ s32 b11_unk_590;
            /* 0x594 */ u8 b11_pad_594[0x73c - 0x594];
            /* 0x73c */ u8 b11_unk_73c[0x24];
            /* 0x760 */ u8 b11_unk_760[8];
            /* 0x768 */ s32 b11_unk_768;
            /* 0x76c */ u8 b11_pad_76c[0x840 - 0x76c];
        };
        struct {
            /* 0x130 */ u8 b12_f_0f0[0x73c - 0x130];
            /* 0x73c */ u8 b12_f_73c[0x778 - 0x73c];
            /* 0x778 */ u8 b12_unk_778;
            /* 0x779 */ u8 b12_f_779[0x794 - 0x779];
            /* 0x794 */ u8 b12_f_794[0x7b4 - 0x794];
            /* 0x7b4 */ u8 b12_f_7b4[0x840 - 0x7b4];
        };
        struct {
            /* 0x130 */ u8 b13_f_12c[0x178 - 0x130];
            /* 0x178 */ u8 b13_f_178[0x188 - 0x178];
            /* 0x188 */ u8 b13_f_188[0x1cc - 0x188];
            /* 0x1cc */ u8 b13_f_1cc[0x24c - 0x1cc];
            /* 0x24c */ u8 b13_f_24c[0x280 - 0x24c];
            /* 0x280 */ u32 b13_unk_280;
            /* 0x284 */ u8 b13_f_284[0x288 - 0x284];
            /* 0x288 */ u8 b13_f_288[0x534 - 0x288];
            /* 0x534 */ u8 b13_f_534[0x590 - 0x534];
            /* 0x590 */ u32 b13_unk_590;
            /* 0x594 */ u8 b13_f_594[0x628 - 0x594];
            /* 0x628 */ u8 b13_f_628[0x6c8 - 0x628];
            /* 0x6c8 */ u8 b13_f_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b13_f_73c[2];
            /* 0x73e */ u8 b13_f_73e[0x744 - 0x73e];
            /* 0x744 */ u8 b13_f_744[0x760 - 0x744];
            /* 0x760 */ u8 b13_f_760[0x768 - 0x760];
            /* 0x768 */ u32 b13_unk_768;
            /* 0x76c */ u8 b13_f_76c[0x77a - 0x76c];
            /* 0x77a */ u8 b13_unk_77a;
            /* 0x77b */ u8 b13_pad_77b;
            /* 0x77c */ u32 b13_unk_77c;
            /* 0x780 */ u8 b13_f_780[0x794 - 0x780];
            /* 0x794 */ u8 b13_f_794[0x7b4 - 0x794];
            /* 0x7b4 */ Unk_ov004_0220bc80_V3 b13_unk_7b4;
            /* 0x7c0 */ u8 b13_f_7c0[0x840 - 0x7c0];
        };
        struct {
            /* 0x130 */ u8 b14_f_0f0[0x534 - 0x130];
            /* 0x534 */ u8 b14_f_534[0x590 - 0x534];
            /* 0x590 */ u32 b14_unk_590;
            /* 0x594 */ u8 b14_f_594[4];
            /* 0x598 */ u8 b14_f_598[0x30];
            /* 0x5c8 */ u8 b14_f_5c8[8];
            /* 0x5d0 */ u8 b14_f_5d0[0x628 - 0x5d0];
            /* 0x628 */ u8 b14_f_628[0x6c8 - 0x628];
            /* 0x6c8 */ u8 b14_f_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b14_f_73c[0x760 - 0x73c];
            /* 0x760 */ u8 b14_f_760[0x77c - 0x760];
            /* 0x77c */ u32 b14_unk_77c;
            /* 0x780 */ u8 b14_f_780[0x840 - 0x780];
        };
        struct {
            /* 0x130 */ u8 b15_pad_0f0[0x534 - 0x130];
            /* 0x534 */ u8 b15_f_534[0x590 - 0x534];
            /* 0x590 */ u32 b15_unk_590;
            /* 0x594 */ u8 b15_pad_594[0x6c8 - 0x594];
            /* 0x6c8 */ u8 b15_f_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b15_f_73c[0x7c0 - 0x73c];
            /* 0x7c0 */ Unk_ov004_0220ce38_Slot b15_unk_7c0[4];
        };
        struct {
            /* 0x130 */ u8 b16_pad_f0[0x534 - 0x130];
            /* 0x534 */ u8 b16_unk_534[0x6c8 - 0x534];
            /* 0x6c8 */ u8 b16_unk_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b16_unk_73c[0x768 - 0x73c];
            /* 0x768 */ s32 b16_unk_768;
            /* 0x76c */ u8 b16_pad_76c[0x778 - 0x76c];
            /* 0x778 */ u8 b16_unk_778;
            /* 0x779 */ u8 b16_pad_779;
            /* 0x77a */ u8 b16_unk_77a;
            /* 0x77b */ u8 b16_pad_77b;
            /* 0x77c */ s32 b16_unk_77c;
            /* 0x780 */ u8 b16_pad_780[0x840 - 0x780];
        };
        struct {
            /* 0x130 */ u8 b17_pad_130[0x590 - 0x130];
            /* 0x590 */ void *b17_unk_590;
            /* 0x594 */ u8 b17_pad_594[0x6c8 - 0x594];
            /* 0x6c8 */ u32 b17_sub_6c8[(0x73c - 0x6c8) / 4];
            /* 0x73c */ u8 b17_unk_73c[2];
            /* 0x73e */ u8 b17_pad_73e[0x794 - 0x73e];
            /* 0x794 */ u32 b17_sub_794[(0x7b4 - 0x794) / 4];
            /* 0x7b4 */ u32 b17_unk_7b4[3];
            /* 0x7c0 */ u8 b17_pad_7c0[0x840 - 0x7c0];
        };
        struct {
            /* 0x130 */ u8 b18_pad_12c[0x534 - 0x130];
            /* 0x534 */ u8 b18_f_534[0x590 - 0x534];
            /* 0x590 */ u32 b18_unk_590;
            /* 0x594 */ u8 b18_pad_594[0x6c8 - 0x594];
            /* 0x6c8 */ u8 b18_f_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b18_f_73c[0x768 - 0x73c];
            /* 0x768 */ u32 b18_unk_768;
            /* 0x76c */ u8 b18_f_76c[0x778 - 0x76c];
            /* 0x778 */ u8 b18_unk_778;
            /* 0x779 */ u8 b18_pad_779;
            /* 0x77a */ u8 b18_unk_77a;
            /* 0x77b */ u8 b18_pad_77b;
            /* 0x77c */ s32 b18_unk_77c;
            /* 0x780 */ u8 b18_f_780[0x840 - 0x780];
        };
        struct {
            /* 0x130 */ u8 b19_pad_12c[0x534 - 0x130];
            /* 0x534 */ u8 b19_f_534[0x5d0 - 0x534];
            /* 0x5d0 */ u8 b19_f_5d0[0x6c8 - 0x5d0];
            /* 0x6c8 */ u8 b19_f_6c8[0x77c - 0x6c8];
            /* 0x77c */ s32 b19_unk_77c;
            /* 0x780 */ u8 b19_pad_780[0x794 - 0x780];
            /* 0x794 */ u8 b19_f_794[0x7b4 - 0x794];
            /* 0x7b4 */ u8 b19_f_7b4[0x840 - 0x7b4];
        };
        struct {
            /* 0x130 */ u8 b20_pad_12c[0x534 - 0x130];
            /* 0x534 */ u8 b20_f_534[0x6c8 - 0x534];
            /* 0x6c8 */ u8 b20_f_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b20_f_73c[0x744 - 0x73c];
            /* 0x744 */ u8 b20_f_744[0x760 - 0x744];
            /* 0x760 */ u8 b20_f_760[0x768 - 0x760];
            /* 0x768 */ u32 b20_unk_768;
            /* 0x76c */ u8 b20_pad_76c[0x77c - 0x76c];
            /* 0x77c */ u32 b20_unk_77c;
            /* 0x780 */ u32 b20_unk_780;
            /* 0x784 */ u8 b20_pad_784[0x840 - 0x784];
        };
        struct {
            /* 0x130 */ u8 b21_f_12c[0x178 - 0x130];
            /* 0x178 */ u8 b21_f_178[0x188 - 0x178];
            /* 0x188 */ u8 b21_f_188[0x1cc - 0x188];
            /* 0x1cc */ u8 b21_f_1cc[0x24c - 0x1cc];
            /* 0x24c */ u8 b21_f_24c[0x280 - 0x24c];
            /* 0x280 */ u32 b21_unk_280;
            /* 0x284 */ u8 b21_f_284[0x288 - 0x284];
            /* 0x288 */ u8 b21_f_288[0x534 - 0x288];
            /* 0x534 */ u8 b21_f_534[0x590 - 0x534];
            /* 0x590 */ u32 b21_unk_590;
            /* 0x594 */ u8 b21_f_594[0x628 - 0x594];
            /* 0x628 */ u8 b21_f_628[0x6c8 - 0x628];
            /* 0x6c8 */ u8 b21_f_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b21_f_73c[2];
            /* 0x73e */ u8 b21_f_73e[0x744 - 0x73e];
            /* 0x744 */ u8 b21_f_744[0x760 - 0x744];
            /* 0x760 */ u8 b21_f_760[0x768 - 0x760];
            /* 0x768 */ u32 b21_unk_768;
            /* 0x76c */ u8 b21_f_76c[0x77a - 0x76c];
            /* 0x77a */ u8 b21_unk_77a;
            /* 0x77b */ u8 b21_pad_77b;
            /* 0x77c */ u32 b21_unk_77c;
            /* 0x780 */ u8 b21_f_780[0x794 - 0x780];
            /* 0x794 */ u8 b21_f_794[0x7b4 - 0x794];
            /* 0x7b4 */ Unk_ov004_0220bc80_V3 b21_unk_7b4;
            /* 0x7c0 */ u8 b21_f_7c0[0x840 - 0x7c0];
        };
        struct {
            /* 0x130 */ u8 b22_f_0f0[0x590 - 0x130];
            /* 0x590 */ u32 b22_unk_590;
            /* 0x594 */ u8 b22_f_594[0x73c - 0x594];
            /* 0x73c */ u8 b22_f_73c[0x760 - 0x73c];
            /* 0x760 */ u8 b22_f_760[0x77c - 0x760];
            /* 0x77c */ u32 b22_unk_77c;
            /* 0x780 */ u32 b22_unk_780;
            /* 0x784 */ u8 b22_f_784[0x840 - 0x784];
        };
        struct {
            /* 0x130 */ u8 b23_pad_12c[0x534 - 0x130];
            /* 0x534 */ u8 b23_f_534[0x6c8 - 0x534];
            /* 0x6c8 */ u8 b23_f_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b23_f_73c[0x744 - 0x73c];
            /* 0x744 */ u8 b23_f_744[0x760 - 0x744];
            /* 0x760 */ u8 b23_f_760[0x768 - 0x760];
            /* 0x768 */ u32 b23_unk_768;
            /* 0x76c */ u8 b23_pad_76c[0x77c - 0x76c];
            /* 0x77c */ u32 b23_unk_77c;
            /* 0x780 */ u32 b23_unk_780;
            /* 0x784 */ u8 b23_pad_784[0x840 - 0x784];
        };
        struct {
            /* 0x130 */ u8 b24_pad_130[0x590 - 0x130];
            /* 0x590 */ void *b24_unk_590;
            /* 0x594 */ u8 b24_pad_594[0x5d0 - 0x594];
            /* 0x5d0 */ u8 b24_unk_5d0[0x10];
            /* 0x5e0 */ u32 b24_unk_5e0;
            /* 0x5e4 */ u8 b24_pad_5e4[0x73c - 0x5e4];
            /* 0x73c */ u8 b24_unk_73c[2];
            /* 0x73e */ u8 b24_pad_73e[0x7c0 - 0x73e];
            /* 0x7c0 */ Unk_ov004_02206e74 b24_unk_7c0[4];
        };
        struct {
            /* 0x130 */ u8 b25_pad_12c[0x534 - 0x130];
            /* 0x534 */ u8 b25_f_534[0x590 - 0x534];
            /* 0x590 */ u32 b25_unk_590;
            /* 0x594 */ u8 b25_pad_594[0x5d0 - 0x594];
            /* 0x5d0 */ u8 b25_f_5d0[0x6c8 - 0x5d0];
            /* 0x6c8 */ u8 b25_f_6c8[0x73c - 0x6c8];
            /* 0x73c */ u8 b25_f_73c[0x744 - 0x73c];
            /* 0x744 */ u8 b25_f_744[0x768 - 0x744];
            /* 0x768 */ u32 b25_unk_768;
            /* 0x76c */ u8 b25_pad_76c[0x77c - 0x76c];
            /* 0x77c */ u32 b25_unk_77c;
            /* 0x780 */ u8 b25_pad_780[0x794 - 0x780];
            /* 0x794 */ u8 b25_f_794[0x7b4 - 0x794];
            /* 0x7b4 */ u8 b25_f_7b4[0x840 - 0x7b4];
        };
    };
};


// ---- part 10: from unk_02209e64.cpp
// The base declares vfunc_14() with no parameters, but this overlay class takes one (r1), so widen it locally.

// Secondary base of the 0x0224882c family (at +0xec). Its vtable 0x020ddcf0 is not overridden by the derived class.

// Target of the callbacks at 0x02209e64..0x02209ebc; only its vtable layout is known.

// 0x0224b0b8: size 0x844
class FtrNookway : public FtrActor {
public:
    FtrNookway();
    virtual BOOL vfunc_0c();
    virtual ~FtrNookway();
    virtual BOOL initModel();
    virtual BOOL updateActive();

    /* 0x840 */ u32 startFrame;
};

// 0x0224b310: size 0x858
class FtrPhone : public FtrActor {
public:
    FtrPhone();
    virtual BOOL vfunc_0c();
    virtual ~FtrPhone();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL changeAct(u32 a, u8 b);
    virtual u8 getActSwitchState(u32 a);
    virtual BOOL initModel();
    virtual BOOL updateActive();

    void execTalkAct04();
    BOOL enterTalkAct04();
    void execTalkAct03();
    BOOL enterTalkAct03();
    void execTalkAct02();
    BOOL enterTalkAct02();
    void execTalkAct01();
    BOOL enterTalkAct01();
    void execTalkAct00();
    BOOL enterTalkAct00();
    void execTalkAct();
    BOOL setTalkAct(s32 idx);
    void execFtrAct03();
    BOOL enterFtrAct03();
    void execFtrAct02();
    BOOL enterFtrAct02();
    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();

    /* 0x840 */ s32 contactPoint;
    /* 0x844 */ s32 contactPointY;
    /* 0x848 */ s32 contactPointZ;
    /* 0x84c */ u16 pushAngle;
    /* 0x84e */ u16 talkDelay;
    /* 0x850 */ u8 ftrAct;
    /* 0x851 */ u8 pad_851[3];
    /* 0x854 */ s32 talkAct;
};

// 0x0224b43c: size >= 0x84a (only the methods in this range are here)
class FtrSingingInsect : public FtrActor {
public:
    FtrSingingInsect();
    virtual ~FtrSingingInsect();
    virtual BOOL vfunc_0c();
    virtual BOOL initModel();
    virtual BOOL updateActive();

    /* 0x840 */ u16 loopsPerPhrase;
    /* 0x842 */ u16 restTimer;
    /* 0x844 */ u8 loopCount;
    /* 0x845 */ u8 singPhase;
    /* 0x846 */ u8 prevAnimDone;
    /* 0x847 */ u8 pad_847;
    /* 0x848 */ u16 singFrames;
};

namespace p10 {
extern "C" {
extern u16 gFtrSoundNone;
extern const u8 data_ov004_0224004c[];
extern const char data_ov004_0224bb44[];

void *FtrActorHeap_GetInstance(void);
void _ZN12FtrActorHeap4freeEPv(void *heap, void *p);
void *_ZN12FtrActorHeap5allocEv(void *heap, u32 size);
void *func_0212899c(void *p, s32 v, u32 n);

void _ZN8FtrActorC1Ev(void *);
void _ZN8FtrActorC2Ev(void *);

void _ZN9FtrSwitch3setEji(void *, s32, s32);
BOOL _ZN9FtrSwitch10isChangingEv(void *);
u8 _ZN9FtrSwitch4isOnEv(void *);
void _ZN15FtrSoundEmitter4playEjj(void *, u32, void *);
void *_ZN11FtrModelRes10getAnimSetEv(void *);
void *_ZN10FtrAnimSet6getBvaEj(void *, u32);
u32 FtrActor_StepAnims(void *);
u32 FtrActor_GetFtrIndex(void *);
u32 FtrSound_GetSe0(u32);
void *FtrContactSet_GetInstance(void);
void *_ZN13FtrContactSet11findContactEPv(void *, void *);
s32 *_ZN10FtrContact22getClampedContactPointEv(void);
u32 _ZN10FtrContact12getPushAngleEv(void *);

u32 ItemInfo_IsReady(void);
void TalkRequest_SetTargetDone(void *);
void TalkRequest_AddPlayerTalk6(void *, s32);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *, u32);
}
}

// ---------------------------------------------------------------- callbacks

// ---------------------------------------------------------------- 0x0224882c allocator

// ---------------------------------------------------------------- FtrNookway





// ---------------------------------------------------------------- FtrPhone











typedef void (FtrPhone::*Unk_ov004_0220a1e8_Fn)();
typedef BOOL (FtrPhone::*Unk_ov004_0220a280_Fn)();





















// ---------------------------------------------------------------- FtrSingingInsect


BOOL FtrSingingInsect::updateActive() {
    u32 h = p10::FtrSound_GetSe0(p10::FtrActor_GetFtrIndex(this));
    if ((u16)(h + 0xfc07) <= 3) {
        switch (singPhase) {
        case 0:
            if (restTimer != 0) {
                restTimer--;
            }
            if (restTimer == 0) {
                singPhase = 1;
                loopCount = 0;
                prevAnimDone = 0;
                singFrames = 0;
                if (h != p10::gFtrSoundNone) {
                    p10::_ZN15FtrSoundEmitter4playEjj(b10_sub_794, h, b10_sub_7b4);
                }
            }
            break;
        case 1: {
            singFrames++;
            u32 r = p10::FtrActor_StepAnims(this);
            if (prevAnimDone != 0 && r != 0) {
                prevAnimDone = 0;
                playAnim(0, 1, 0x1000, 0);
                loopCount++;
                if (loopCount >= loopsPerPhrase) {
                    singPhase = 0;
                    if (h == 0x3fc) {
                        restTimer = 0x3c;
                    } else {
                        restTimer = 200;
                    }
                }
            }
            prevAnimDone = r;
            break;
        }
        }
    } else {
        switch (singPhase) {
        case 0:
            if (restTimer != 0) {
                restTimer--;
            }
            if (restTimer == 0) {
                singPhase = 1;
                loopCount = 0;
                prevAnimDone = 0;
                if (h != p10::gFtrSoundNone) {
                    p10::_ZN15FtrSoundEmitter4playEjj(b10_sub_794, h, b10_sub_7b4);
                }
            }
            break;
        case 1:
        case 2:
        case 3: {
            if (h == 0x3ff) {
                if (p10::_ZN13AnimFrameCtrl14hasPassedFrameEi(b10_pad_5d0, 0x14)) {
                    if (h != p10::gFtrSoundNone) {
                        p10::_ZN15FtrSoundEmitter4playEjj(b10_sub_794, h, b10_sub_7b4);
                    }
                }
            }
            u32 r = p10::FtrActor_StepAnims(this);
            if (prevAnimDone != 0 && r != 0) {
                prevAnimDone = 0;
                playAnim(0, 1, 0x1000, 0);
                loopCount++;
                if (loopCount >= loopsPerPhrase) {
                    singPhase = (singPhase + 1) & 3;
                    loopCount = 0;
                    if (singPhase != 0) {
                        if (h != p10::gFtrSoundNone) {
                            p10::_ZN15FtrSoundEmitter4playEjj(b10_sub_794, h, b10_sub_7b4);
                        }
                    } else {
                        if (p10::_ZN10FtrAnimSet6getBvaEj(p10::_ZN11FtrModelRes10getAnimSetEv(b10_sub_6c8), 0) != 0) {
                            restTimer = loopsPerPhrase * b10_unk_824.mid;
                        } else {
                            restTimer = loopsPerPhrase * b10_unk_5d4.mid;
                        }
                    }
                }
            }
            prevAnimDone = r;
            break;
        }
        }
    }
    return TRUE;
}

// ---- part 11: from unk_0220a898.cpp
// ---------------------------------------------------------------------------------------------------------------------
// Main-module base classes (layout only; copied in shape from src/main)

// ---------------------------------------------------------------------------------------------------------------------
// Externs

namespace p11 {
extern "C" {
extern u8 data_ov004_02240024[];
extern u8 data_ov004_02240038[];
extern char data_ov004_0224bb50[];

s32 FtrSync_RequestAct(s32 a, s32 b, u8 c, u8 d);
s32 FtrSync_ChangeAct(s32 a, s32 b, u8 c, u8 d);
s32 Random_GlobalBelow(s32 a, ...);
s32 Item_MakeFurniture(s32 a, s32 b);
BOOL CarpetTex_Load(u32 a, u16 *p);
s32 func_0203c234(s32 a);
BOOL _ZN14MatTexVramTask7requestEPvjS0_jj(void *a, s32 b, char *c, s32 d, s32 e, s32 f);

s32 _ZN8FtrActor9initAnimsEiiii(void *p, s32 a, s32 b, s32 c, s32 d);
s32 _ZN8FtrActor8playAnimEiiij(void *p, s32 a, s32 b, s32 c, s32 d);
s32 FtrActor_GetFtrIndex(void *p);
s32 FtrSound_GetSe0(void);
s32 _ZN8FtrActor17getAnimFrameCountEi(void *p);
void FtrActor_StepAnims(void *p);
void _ZN8FtrActor10playSound0Ev(void *p);
void _ZN8FtrActor10playSound1Ev(void *p);
void _ZN8FtrActor10playSound2Ev(void *p);
void _ZN13FtrGlowMatSet6setLitEjjj(void *p, s32 a, s32 b, s32 c);
s32 _ZN9FtrSwitch10isChangingEv(void *p);
void _ZN9FtrSwitch3setEji(void *p, s32 a, s32 b);
void _ZN13FtrGlowMatSet6updateEv(void *p);
s32 _ZN9FtrSwitch4isOnEv(void *p);
void _ZN13FtrGlowMatSet4initEjj(void *p, s32 a, s32 b);
s32 FtrMgr_IsShopScene(void);
void _ZN11FtrVisNodes10setVisibleEj(void *p, s32 a);
s32 FtrPreviewer_GetInstance(void);
s32 _ZN12FtrPreviewer14getFloorBufferEv(s32 a);
s32 _ZN12FtrPreviewer14getSampleIndexEv(s32 a);
}
}

// ---------------------------------------------------------------------------------------------------------------------
// Overlay 4 base class (vtable 0x0224882c, secondary vtable 0x022488d8 at +0xec)

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x0224b43c

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x0224936c

class FtrComputer : public FtrActor {
public:
    FtrComputer();
    virtual ~FtrComputer();
    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 a, u8 b);
    virtual u8 getActSwitchState(u32 a);
    virtual BOOL initModel();
    virtual BOOL updateActive();

    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();

    /* 0x840 */ FtrGlowMatSet glowMats;
    /* 0x898 */ u8 ftrAct;
};

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x02249498

class FtrHeadwear : public FtrActor {
public:
    FtrHeadwear();
    virtual ~FtrHeadwear();
    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 a, u8 b);
    virtual u8 getActSwitchState(u32 a);
    virtual BOOL initModel();
    virtual BOOL updateActive();
    virtual BOOL isVisible();

    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();
    void syncAct1();
    void syncAct0();

    /* 0x840 */ u8 ftrAct;
    /* 0x841 */ u8 alwaysVisible;
};

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x022496f0

class FtrKind25 : public FtrActor {
public:
    FtrKind25();
    virtual ~FtrKind25();
    virtual BOOL vfunc_0c();
    virtual BOOL initModel();
    virtual BOOL updateActive();

    /* 0x840 */ u16 sampleIndex;
};

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x0224981c

struct MatTexVramTask {
    MatTexVramTask();
    u32 pad[10];
};

class FtrCarpetSample : public FtrActor {
public:
    FtrCarpetSample();
    virtual ~FtrCarpetSample();
    virtual BOOL vfunc_0c();
    virtual BOOL initModel();
    virtual BOOL updateActive();
    virtual BOOL isVisible();

    /* 0x840 */ u16 sampleIndex;
    /* 0x842 */ u8 initFrames;
    /* 0x843 */ u8 pad_843;
    /* 0x844 */ MatTexVramTask texTask;
};

// ---------------------------------------------------------------------------------------------------------------------
// FtrSingingInsect



// ---------------------------------------------------------------------------------------------------------------------
// FtrComputer












// ---------------------------------------------------------------------------------------------------------------------
// FtrHeadwear
















// ---------------------------------------------------------------------------------------------------------------------
// FtrKind25





// ---------------------------------------------------------------------------------------------------------------------
// FtrCarpetSample





// Out-of-line constructors (defined after the factories so they are not inlined)

BOOL FtrSingingInsect::initModel() {
    p11::_ZN8FtrActor9initAnimsEiiii(this, 0, 1, 0x1000, 0);
    p11::FtrActor_GetFtrIndex(this);
    s32 t = p11::FtrSound_GetSe0();
    switch (t) {
    case 0x3f9:
        loopCount = 4;
        loopsPerPhrase = loopCount;
        break;
    case 0x3fb:
        loopCount = 4;
        loopsPerPhrase = loopCount;
        break;
    case 0x3fa:
        loopCount = 4;
        loopsPerPhrase = loopCount;
        break;
    case 0x3fc:
        loopCount = 2;
        loopsPerPhrase = loopCount;
        break;
    default:
        loopCount = 1;
        loopsPerPhrase = loopCount;
        break;
    }
    singPhase = 0;
    restTimer = 0;
    if (b11_unk_768 != 1) {
        if (t == 0x3fc) {
            restTimer = p11::Random_GlobalBelow(0x3c, 0);
        } else if ((u16)(t + 0xfc07) <= 2) {
            restTimer = p11::Random_GlobalBelow(0xc8, 0);
        } else {
            restTimer = p11::Random_GlobalBelow(loopsPerPhrase * p11::_ZN8FtrActor17getAnimFrameCountEi(this));
        }
    }
    return TRUE;
}

