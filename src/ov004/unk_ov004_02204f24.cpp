// mwcc-version: 1.2/sp2
#include "types.h"

// ================================================================ plain value types
struct Vec3 {
    s32 x, y, z;
};

struct Unk_ov004_Mtx {
    s64 v[6];
};

typedef Vec3 Unk_ov004_Vec3;
struct Unk_ov004_02205d8c_Vec {
    s32 x, y, z;
};
struct Unk_0203e4f0_Vec {
    s32 x, y, z;
};
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

struct Unk_02002f14_Node {
    void *unk_00;
    void *unk_04;
    void *unk_08;
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

    /* 0x50 */ Unk_02002f14_Node unk_50;
    /* 0x5c */ s32 unk_5c[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 unk_8e;
    /* 0x90 */ u8 pad_90[0xd4 - 0x90];
};

struct Unk_0203e5d0_Node {
    u32 unk_00;
    Unk_0203e5d0_Node *unk_04;
    u32 unk_08;
    void *unk_0c;
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

    /* 0xd4 */ Unk_0203e5d0_Node unk_d4;
    /* 0xe4 */ s32 unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xea */ u16 pad_ea;
};

// ---------------------------------------------------------------- secondary base at +0xec (vtable 0x020ddcf0 in main)
class MsgRequest {
public:
    MsgRequest();
    virtual ~MsgRequest();
    virtual void vfunc_s08();
    void setFileName(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class TalkMsgRequest : public MsgRequest {
public:
    TalkMsgRequest();
    virtual ~TalkMsgRequest();
    virtual void vfunc_s08();
    virtual void vfunc_s0c();
    virtual void vfunc_s10();
    virtual void vfunc_14();
    virtual void vfunc_s18();
    virtual void vfunc_s1c();
    virtual void vfunc_s20();
    virtual void vfunc_s24();
    virtual void vfunc_s28();
    virtual void vfunc_s2c();
    virtual void onActionTag4();
    virtual void vfunc_s34();
    virtual void vfunc_s38(u32 a);
    virtual void vfunc_s3c();
    virtual void vfunc_s40();
    virtual void vfunc_s44();
    virtual void vfunc_s48();
    virtual void vfunc_s4c();
    virtual void vfunc_s50();
    virtual void vfunc_s54();
    virtual void vfunc_s58();
    virtual void vfunc_s5c();
    virtual void vfunc_s60();
    virtual void vfunc_s64();
    virtual void vfunc_s68();
    virtual void vfunc_s6c();
    virtual void vfunc_s70();
    virtual void vfunc_s74();

    u8 pad_20[0x1c];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 unk_40;
};

// ================================================================ helper object types (members of / used by the 0224882c object)
struct Unk_ov004_02205c80_Obj {
    u8 pad_00[0x8e];
    s16 unk_8e;
    u8 pad_90[0x284 - 0x90];
    u8 unk_284;
    u8 pad_285[0x598 - 0x285];
    Unk_ov004_Mtx unk_598;
    u8 pad_5c8[0x768 - 0x5c8];
    s32 unk_768;
    u8 pad_76c[0x789 - 0x76c];
    u8 unk_789;
    u8 pad_78a[2];
    s32 unk_78c;
};

struct G3dResAccess {
    s32 findMatIdx(s32 a);
};

// ---- 0x02206520: list of up to 4 tile positions
struct Unk_ov004_02206520_Ent {
    s32 x, y;
    Unk_ov004_02206520_Ent() {
        x = 0;
        y = 0;
    }
};

struct FtrTileList {
    u32 unk_00;
    Unk_ov004_02206520_Ent unk_04[4];
    Unk_ov004_02206520_Ent *get(s32 i);
    u32 getCount();
    BOOL add(u32 a, u32 b);
    void release();
    FtrTileList();
};

struct Unk_ov004_0220650c {
    u32 unk_00;
    u32 unk_04[4];
    void clear();
};

// ---- 0x02205994: 4 ids + count (member at 0x760)
class FtrVisNodes {
public:
    u8 isVisible();
    BOOL hasNode(s32 v);
    void setVisible(u32 v);
    void init(void *p, u32 v);

    /* 0x00 */ s8 unk_00[4];
    /* 0x04 */ u8 unk_04;
};

// ---- 0x02205bcc: model animation slot (base: main class LightLevel)
struct LightLevel {
    LightLevel();
    ~LightLevel();
    BOOL switchLight(BOOL on, s32 a, s32 b, u32 param);
    BOOL switchLightAnimated(BOOL on);
    s32 unk_00;
    s32 unk_04;
    u32 unk_08;
    s32 unk_0c;
    u16 unk_10;
    u16 unk_12;
};

struct FtrGlowMat : public LightLevel {
    FtrGlowMat();
    ~FtrGlowMat();
    BOOL setLit(BOOL on, s32 a, s32 b);
    BOOL bindMaterial(G3dResAccess *res, s32 idx, BOOL on);
    s8 unk_14;
    G3dResAccess *unk_18;
};

// ---- 0x02205b14: element view used by the 3-element container (same object as 0x02205bcc)
struct Unk_ov004_02205b14_Obj {
    u8 pad[0x18];
    u8 unk_18;
};

class Unk_ov004_02205b14 {
public:
    void updateEmission();

    /* 0x00 */ u8 pad_00[0x14];
    /* 0x14 */ s8 unk_14;
    /* 0x15 */ u8 pad_15[3];
    /* 0x18 */ Unk_ov004_02205b14_Obj *unk_18;
};

class FtrGlowMatSet {
public:
    FtrGlowMatSet();
    ~FtrGlowMatSet();
    void update();
    u32 setLit(u32 a, u32 b, u32 c);
    u32 init(u32 a, u32 b);

    /* 0x00 */ FtrGlowMat unk_00[3];
    /* 0x54 */ u8 unk_54;
};

// ---- 0x02205c44 (member at 0x73c)
struct FtrSwitch {
    ~FtrSwitch();
    void set(u32 v, s32 flag);
    void toggle(s32 flag);
    BOOL isChanging();
    u8 isOn();
    void saveToMap(Unk_ov004_02205c80_Obj *o);
    void commit(Unk_ov004_02205c80_Obj *o);
    void loadFromMap(Unk_ov004_02205c80_Obj *o);
    void clear();
    u8 unk_00;
    u8 unk_01;
};

// ---- 0x02205d5c (member at 0x73e)
struct FtrClockHands {
    ~FtrClockHands();
    void set(s32 a, s32 b);
    void clear();
    s8 unk_00;
    s8 unk_01;
    u8 unk_02;
};

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
    s16 unk_00;
    s16 unk_02;
    Unk_ov004_02205d8c_Vec unk_04;
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
    u16 unk_02;
    Unk_ov004_02205d8c_Vec unk_04;
};

struct ItemId {
    ItemId() {
        unk_00 = 0xfff1;
    }
    ~ItemId();
    u16 unk_00;
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
    FtrTopItem unk_04[4];
};

// ---- 0x02206398 (member at 0x44 of 0x02206e38; 5 pairs of resource pointers)
struct Unk_ov004_02208a18_Rec {
    u32 unk_00;
    u16 unk_04;
};

struct FtrAnimSet {
    inline FtrAnimSet() { clear(); }
    ~FtrAnimSet();
    s32 getTexCopy();
    Unk_ov004_02208a18_Rec *getBtp(u32 i);
    Unk_ov004_02208a18_Rec *getBta(u32 i);
    Unk_ov004_02208a18_Rec *getBva(u32 i);
    Unk_ov004_02208a18_Rec *getBma(u32 i);
    Unk_ov004_02208a18_Rec *getBca(u32 i);
    void setTexCopy(s32 v);
    void setBtp(void *v, u32 i);
    void setBta(void *v, u32 i);
    void setBva(void *v, u32 i);
    void setBma(void *v, u32 i);
    void setBca(void *v, u32 i);
    void clear();
    void *unk_00[2];
    void *unk_08[2];
    void *unk_10[2];
    void *unk_18[2];
    void *unk_20[2];
    s32 unk_28;
};

// ---- 0x02206434 (set of up to 4 neighbour objects)
struct FtrStackedSet {
    FtrStackedSet();
    FtrStackedSet(FtrTileList *l, s32 flag);
    BOOL add(Unk_ov004_02205c80_Obj *o);
    Unk_ov004_02205c80_Obj *get(u32 i);
    u32 getCount();
    void collect(FtrTileList *l, s32 flag);
    u32 unk_00;
    Unk_ov004_02205c80_Obj *unk_04[4];
};

// ---- 0x022487cc : BoxCollider (member at 0x628)
class Unk_0202f048 {
public:
    s32 x, y;
    void func_0202f048(s32 a, s32 b);
    void func_0202efe4(Unk_0202f048 *a, Unk_0202f048 *b);
    s64 func_0202ef84(Unk_0202f048 *p);
    BOOL func_0202ef40();
};

class Unk_020d8ce4 {
public:
    virtual ~Unk_020d8ce4();
    Unk_0202f048 unk_04, unk_0c, unk_14;
    s32 unk_1c;
    BOOL func_0202ece8(Unk_0202f048 *out, Unk_0202f048 *a, Unk_0202f048 *b);
    s32 func_0202ebb0(Unk_0202f048 *p);
};

struct Unk_ov004_02206744_V3 {
    s32 x, y, z;
    Unk_ov004_02206744_V3() {}
};

struct Unk_ov004_02206570_Act {
    u8 pad_00[0x5c];
    Unk_ov004_02206744_V3 unk_5c;
    Unk_ov004_02206744_V3 unk_68;
    u8 pad_74[0x8e - 0x74];
    s16 unk_8e;
};

struct BoxCollider {
    virtual void onEdgeContact(Unk_020d8ce4 *a, Unk_ov004_02206570_Act *b, s32 c);
    u8 pad_04[0x98];
    BoxCollider();
    ~BoxCollider();
};

struct FtrCollider : BoxCollider {
    void *unk_9c;
    FtrCollider();
    void onEdgeContact(Unk_020d8ce4 *a, Unk_ov004_02206570_Act *b, s32 c);
    void slideOwnerForWideFtr(Unk_ov004_02206570_Act *b);
    void clearOwner();
    void setOwner(void *p);
};

// ---- 0x022069ec / 0x02206e38 (model loader, member at 0x6c8)
class TexVramSlot;

class ModelResource {
public:
    u32 unk_04;
    u32 pad[10];
    u8 unk_30;
    u8 unk_31;
    u8 pad2[2];

    ModelResource();
    virtual ~ModelResource();
    u32 loadTexture(void *a, TexVramSlot *b, void *c);
    void release(void);
    void *getTexture(void);
};

struct Unk_ov004_02206be8_Blk {
    u32 pad[26];
};

struct FtrModelRes {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    ModelResource unk_10;
    FtrAnimSet unk_44;
    u16 unk_70;
    u8 unk_72;

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
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    ModelResource unk_10;
    FtrAnimSet unk_44;
    u16 unk_70;
    u8 unk_72;
};

// ---- 0x02248804 (array of 4 at 0x7c0)
class AnimFrameCtrl {
public:
    AnimFrameCtrl();
    virtual ~AnimFrameCtrl();
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

class ModelAnim : public AnimFrameCtrl {
public:
    ModelAnim();
    virtual ~ModelAnim();
    u32 unk_18;
    u32 unk_1c;
};

class FtrModelAnim : public ModelAnim {
public:
    FtrModelAnim();
    virtual ~FtrModelAnim();
    u32 getAnmObj();
};

// ================================================================ FtrActor
struct Unk_ov004_02208980_E {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0c[12];
    s32 *unk_18;
    u8 pad_1c[4];
};

struct Unk_ov004_0224882c_Buf {
    s32 v[4];
};

struct Unk_ov004_02206ec8_Ctx {
    u8 pad_00[0xb8];
    u32 *unk_b8;
};

struct Unk_ov004_02207854_List {
    u32 count;
    s32 v[4][2];
};

class FtrActor;
typedef FtrActor Self;

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

    /* 0x12e */ u16 unk_12e; // a Unk_0209c364 (ctor/dtor called by hand)
    /* 0x130 */ u8 pad_130[0x14c - 0x130];
    /* 0x14c */ s32 unk_14c;
    /* 0x150 */ s32 unk_150;
    /* 0x154 */ s32 unk_154;
    /* 0x158 */ s32 unk_158;
    /* 0x15c */ u16 unk_15c;
    /* 0x15e */ u16 unk_15e;
    /* 0x160 */ s16 unk_160;
    /* 0x162 */ u8 pad_162[2];
    /* 0x164 */ s32 unk_164;
    /* 0x168 */ s16 unk_168;
    /* 0x16a */ u8 pad_16a[2];
    /* 0x16c */ s32 unk_16c[3];
    /* 0x178 */ u8 unk_178[0x10];   // FtrStackLink
    /* 0x188 */ u8 unk_188[0x44];   // FtrTopItems
    /* 0x1cc */ u8 unk_1cc[0x80];   // 4 x TouchPickCylinder (0x20)
    /* 0x24c */ u8 unk_24c[0x34];
    /* 0x280 */ u32 unk_280;
    /* 0x284 */ u8 unk_284;
    /* 0x285 */ u8 pad_285[3];
    /* 0x288 */ u8 unk_288[0x2a8];  // Unk_020b6e10
    /* 0x530 */ s32 unk_530;
    /* 0x534 */ u8 unk_534[0x590 - 0x534]; // BlendAnimModel
    /* 0x590 */ u32 unk_590;
    /* 0x594 */ u8 pad_594[4];
    /* 0x598 */ Unk_ov004_Mtx unk_598;
    /* 0x5c8 */ u8 pad_5c8[0x5d0 - 0x5c8];
    /* 0x5d0 */ u8 unk_5d0[4];
    /* 0x5d4 */ u32 unk_5d4;
    /* 0x5d8 */ u32 unk_5d8;
    /* 0x5dc */ u8 pad_5dc[0x628 - 0x5dc];
    /* 0x628 */ u8 unk_628[0xa0];   // FtrCollider
    /* 0x6c8 */ u8 unk_6c8[0x74];   // Unk_ov004_02206e38
    /* 0x73c */ u8 unk_73c[2];      // FtrSwitch
    /* 0x73e */ s8 unk_73e;         // FtrClockHands (3 bytes)
    /* 0x73f */ s8 unk_73f;
    /* 0x740 */ u8 unk_740;
    /* 0x741 */ u8 pad_741[3];
    /* 0x744 */ u8 unk_744[0x1c];   // FtrGlowMat
    /* 0x760 */ u8 unk_760[8];      // FtrVisNodes
    /* 0x768 */ s32 unk_768;
    /* 0x76c */ u16 unk_76c;
    /* 0x76e */ u8 pad_76e[2];
    /* 0x770 */ s32 unk_770;
    /* 0x774 */ s32 unk_774;
    /* 0x778 */ u8 unk_778;
    /* 0x779 */ u8 unk_779;
    /* 0x77a */ u8 unk_77a;
    /* 0x77b */ u8 pad_77b;
    /* 0x77c */ s32 unk_77c;
    /* 0x780 */ s32 unk_780;
    /* 0x784 */ s32 unk_784;
    /* 0x788 */ u8 unk_788;
    /* 0x789 */ u8 unk_789;
    /* 0x78a */ u8 pad_78a[2];
    /* 0x78c */ s32 unk_78c;
    /* 0x790 */ s32 unk_790;
    /* 0x794 */ u8 unk_794[0x20];   // Unk_ov004_02235984
    /* 0x7b4 */ s32 unk_7b4[3];
    /* 0x7c0 */ Unk_ov004_02208980_E unk_7c0[4];   // 4 x FtrModelAnim
};

// ================================================================ Unk_ov004_022077a4 (methods of the same object, named by the file they came from)
class Unk_ov004_022077a4;

// Set of up to four neighbour objects built by func_ov004_02206494
struct Unk_ov004_02207854_Set {
    u32 count;
    Unk_ov004_022077a4 *v[4];
};

class Unk_ov004_022077a4 : public Character {
public:
    virtual BOOL vfunc_60();
    virtual void vfunc_64(s32 a, Unk_ov004_02206ec8_Ctx *b);
    virtual BOOL vfunc_68();
    virtual void vfunc_6c(s32 a, void *b);
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual u8 vfunc_78();

    void initLamp();
    void moveTiles(void *a, s32 b);
    void writeTiles(s32 unused, void *x, s32 y, u8 flag);
    void clearTiles(s32 a, s32 b);
    void getTiles(Unk_ov004_02207854_List *l, void *x, s32 y);
    void applyPolygonId();
    void setupModel();
    void setupFromSpawnArg();

    /* 0xec */ u8 pad_ec[0x14c - 0xec];
    /* 0x14c */ s32 unk_14c, unk_150, unk_154, unk_158;
    /* 0x15c */ u8 pad_15c[0x178 - 0x15c];
    /* 0x178 */ u8 unk_178[0x250 - 0x178];
    /* 0x250 */ Unk_ov004_Mtx unk_250;
    /* 0x280 */ s32 unk_280;
    /* 0x284 */ u8 unk_284;
    /* 0x285 */ u8 unk_285;
    /* 0x286 */ u8 pad_286[0x534 - 0x286];
    /* 0x534 */ u8 unk_534[0x590 - 0x534];
    /* 0x590 */ void *unk_590;
    /* 0x594 */ u8 pad_594[0x6c8 - 0x594];
    /* 0x6c8 */ u8 unk_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 unk_73c[2];
    /* 0x73e */ u8 unk_73e[6];
    /* 0x744 */ u8 unk_744[0x760 - 0x744];
    /* 0x760 */ u8 unk_760[8];
    /* 0x768 */ s32 unk_768;
    /* 0x76c */ u8 pad_76c[4];
    /* 0x770 */ s32 unk_770, unk_774;
    /* 0x778 */ u8 pad_778[4];
    /* 0x77c */ s32 unk_77c;
    /* 0x780 */ s32 unk_780;
    /* 0x784 */ s32 unk_784;
    /* 0x788 */ u8 unk_788, unk_789;
    /* 0x78a */ u8 pad_78a[2];
    /* 0x78c */ s32 unk_78c;
    /* 0x790 */ s32 unk_790;
};

// ================================================================ local helper types / inlines
struct Unk_ov004_02207ac4_Tmp {
    u16 v;
    u16 pad;
    Unk_ov004_02207ac4_Tmp() {}
    ~Unk_ov004_02207ac4_Tmp() {}
};

struct Unk_ov004_02207ef0_Bits {
    u32 lo : 4;
    u32 mid : 4;
    u32 id : 16;
    u32 dir : 2;
    u32 pad : 2;
    u32 flag : 1;
};

struct Unk_ov004_022071cc_Pkt {
    u16 a : 9;
    u16 b : 7;
    u16 x : 4;
    u16 y : 4;
    u16 f : 1;
    u16 id : 6;
    u16 pad : 1;
};

struct Unk_ov004_02209d40_Bits {
    u32 a : 4;
    u32 b : 4;
    u32 c : 16;
    u32 d : 2;
    u32 e : 2;
    u32 f : 1;
    u32 w1;
};

struct Unk_ov004_02209e44_Target {
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
    virtual void vfunc_60(u32 a, void *b);
    virtual void vfunc_64(u32 a, void *b);
    virtual void vfunc_68(u32 a, void *b);
    virtual void vfunc_6c(u32 a, void *b);
};

struct Unk_ov004_02209e44_Inner {
    u8 unk_00;
    u8 unk_01;
};

struct Unk_ov004_02209e44_Own {
    u8 pad_00[0x2c];
    Unk_ov004_02209e44_Target *unk_2c;
};

struct Unk_ov004_02209e64 {
    /* 0x00 */ Unk_ov004_02209e44_Inner *unk_00;
    /* 0x04 */ Unk_ov004_02209e44_Own *unk_04;
    /* 0x08 */ u8 pad_08[0x14 - 0x08];
    /* 0x14 */ void (*unk_14)(Unk_ov004_02209e64 *);
    /* 0x18 */ u8 pad_18[4];
    /* 0x1c */ void (*unk_1c)(Unk_ov004_02209e64 *);
    /* 0x20 */ u8 pad_20[4];
    /* 0x24 */ void (*unk_24)(Unk_ov004_02209e64 *);
    /* 0x28 */ u8 pad_28[0x8e - 0x28];
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 pad_8f;
    /* 0x90 */ u8 unk_90;
    /* 0x91 */ u8 pad_91;
    /* 0x92 */ u8 unk_92;
};

typedef BOOL (FtrActor::*Unk_ov004_0224882c_Fn)();
struct Unk_ov004_053c0_Buf { s32 v[4]; };

static inline BOOL Unk_ov004_02205820_Is3d(u16 v) {
    if (v == 0x3d) return TRUE;
    return FALSE;
}


// ================================================================ real names of the symbols outside this unit
#define func_02002d9c _ZN5Actor7preDrawEv   // main
#define func_02002ec0 _ZN5Actor8vfunc_14Ev   // main
#define BoxColliderShape_updateTransform _ZN16BoxColliderShape15updateTransformEP16Unk_0203182c_VeciS1_   // main
#define Character_setCharId _ZN9Character9setCharIdEj   // main
#define Character_getCharId _ZN9Character9getCharIdEv   // main
#define func_0203e650 _ZN9Character9preDeleteEv   // main
#define Character_postCreate _ZN9Character10postCreateEi   // main
#define BlendAnimModel_stepBlend _ZN14BlendAnimModel9stepBlendEv   // main
#define func_020544d8 _ZN14BlendAnimModelD1Ev   // main
#define func_02054514 _ZN14BlendAnimModelC1Ev   // main
#define BlendAnimModel_getAnmObj _ZN14BlendAnimModel9getAnmObjEv   // main
#define AnimModel_attachAnim _ZN9AnimModel10attachAnimEv   // main
#define BlendAnimModel_initAnim _ZN14BlendAnimModel8initAnimEiiitt   // main
#define AnimModel_drawAnimated _ZN9AnimModel12drawAnimatedEPv   // main
#define AnimModel_allocAnmObj _ZN9AnimModel11allocAnmObjEPv   // main
#define Model_setPolygonId _ZN5Model12setPolygonIdEj   // main
#define Model_setInitCallback _ZN5Model15setInitCallbackEii   // main
#define Model_getRenderObj _ZN5Model12getRenderObjEv   // main
#define Model_setResource _ZN5Model11setResourceEP16Unk_020553f8_Resj   // main
#define ModelAnim_addToRenderObj _ZN9ModelAnim14addToRenderObjEj   // main
#define ModelAnim_replaceWithTex _ZN9ModelAnim14replaceWithTexEiiihit   // main
#define ModelAnim_initWithTex _ZN9ModelAnim11initWithTexEiiiit   // main
#define ModelAnim_replace _ZN9ModelAnim7replaceEiiiit   // main
#define ModelAnim_init _ZN9ModelAnim4initEiiit   // main
#define ModelAnim_allocJointAnm _ZN9ModelAnim13allocJointAnmEjPv   // main
#define ModelAnim_allocMatAnm _ZN9ModelAnim11allocMatAnmEjPv   // main
#define AnimFrameCtrl_hasPassedFrame _ZN13AnimFrameCtrl14hasPassedFrameEi   // main
#define AnimFrameCtrl_isFinished _ZN13AnimFrameCtrl10isFinishedEv   // main
#define AnimFrameCtrl_step _ZN13AnimFrameCtrl4stepEv   // main
#define func_02056fcc _ZN12G3dResAccess13func_02056fccEi   // main
#define func_02094058 _ZN6TownId13func_02094058Ev   // main
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv   // main
#define func_0209c224 _ZN12Unk_0209c15c13func_0209c224EPt   // main
#define func_0209c25c _ZN12Unk_0209c15c13func_0209c25cEPt   // main
#define func_0209c344 _ZN12Unk_0209c2f413func_0209c344Ev   // main
#define func_0209c348 _ZN12Unk_0209c2f413func_0209c348Ev   // main
#define func_020b1ddc _ZN12Unk_020b1ddc13func_020b1ddcEv   // main
#define func_020b1e74 _ZN12Unk_020b1ddc13func_020b1e74Ev   // main
#define LightLevel_getLevel _ZN10LightLevel8getLevelEv   // main
#define Math_LerpFx _Z11Math_LerpFxiii   // main
#define LightLevel_update _ZN10LightLevel6updateEv   // main
#define TouchPicker_addCylinder _ZN11TouchPicker11addCylinderEP17TouchPickCylinderP4Vec3S3_S3_ih   // main
#define TouchPicker_addBox _ZN11TouchPicker6addBoxEP12Unk_020b6e10P4Vec3iiisih   // main
#define TouchPicker_pushBox _ZN11TouchPicker7pushBoxEP12Unk_020b6e10   // main
#define func_020b69fc _ZN17TouchPickCylinderD2Ev   // main
#define func_020b6a0c _ZN17TouchPickCylinderC2Ev   // main
#define func_020b6df4 _ZN12Unk_020b6e10D2Ev   // main
#define func_020b6e10 _ZN12Unk_020b6e10C2Ev   // main
#define Atm_execTalkAct02 _ZN3Atm13execTalkAct02Ev   // ov004
#define Atm_enterTalkAct02 _ZN3Atm14enterTalkAct02Ev   // ov004
#define Atm_execTalkAct01 _ZN3Atm13execTalkAct01Ev   // ov004
#define Atm_enterTalkAct01 _ZN3Atm14enterTalkAct01Ev   // ov004
#define Atm_execTalkAct00 _ZN3Atm13execTalkAct00Ev   // ov004
#define Atm_enterTalkAct00 _ZN3Atm14enterTalkAct00Ev   // ov004
#define Atm_execTalkAct _ZN3Atm11execTalkActEv   // ov004
#define Atm_setTalkAct _ZN3Atm10setTalkActEi   // ov004
#define Atm_setPointTexts _ZN3Atm13setPointTextsEv   // ov004
#define Atm_releaseCollision _ZN3Atm16releaseCollisionEv   // ov004
#define Atm_initCollision _ZN3Atm13initCollisionEv   // ov004
#define FtrPhone_execTalkAct04 _ZN8FtrPhone13execTalkAct04Ev   // ov004
#define FtrPhone_enterTalkAct04 _ZN8FtrPhone14enterTalkAct04Ev   // ov004
#define FtrPhone_execTalkAct03 _ZN8FtrPhone13execTalkAct03Ev   // ov004
#define FtrPhone_enterTalkAct03 _ZN8FtrPhone14enterTalkAct03Ev   // ov004
#define FtrPhone_execTalkAct02 _ZN8FtrPhone13execTalkAct02Ev   // ov004
#define FtrPhone_enterTalkAct02 _ZN8FtrPhone14enterTalkAct02Ev   // ov004
#define FtrPhone_execTalkAct01 _ZN8FtrPhone13execTalkAct01Ev   // ov004
#define FtrPhone_enterTalkAct01 _ZN8FtrPhone14enterTalkAct01Ev   // ov004
#define FtrPhone_execTalkAct00 _ZN8FtrPhone13execTalkAct00Ev   // ov004
#define FtrPhone_enterTalkAct00 _ZN8FtrPhone14enterTalkAct00Ev   // ov004
#define FtrPhone_execTalkAct _ZN8FtrPhone11execTalkActEv   // ov004
#define FtrPhone_setTalkAct _ZN8FtrPhone10setTalkActEi   // ov004
#define FtrPhone_execFtrAct03 _ZN8FtrPhone12execFtrAct03Ev   // ov004
#define FtrPhone_enterFtrAct03 _ZN8FtrPhone13enterFtrAct03Ev   // ov004
#define FtrPhone_execFtrAct02 _ZN8FtrPhone12execFtrAct02Ev   // ov004
#define FtrPhone_enterFtrAct02 _ZN8FtrPhone13enterFtrAct02Ev   // ov004
#define FtrPhone_execFtrAct01 _ZN8FtrPhone12execFtrAct01Ev   // ov004
#define FtrPhone_enterFtrAct01 _ZN8FtrPhone13enterFtrAct01Ev   // ov004
#define FtrPhone_execFtrAct00 _ZN8FtrPhone12execFtrAct00Ev   // ov004
#define FtrPhone_enterFtrAct00 _ZN8FtrPhone13enterFtrAct00Ev   // ov004
#define FtrPhone_execFtrAct _ZN8FtrPhone10execFtrActEv   // ov004
#define FtrContactSet_setContact _ZN13FtrContactSet10setContactEiP21Unk_ov004_02235528_V3S1_iS1_S1_si   // ov004
#define FtrContactSet_findContact _ZN13FtrContactSet11findContactEPv   // ov004
#define FtrContact_getPushAngle _ZN10FtrContact12getPushAngleEv   // ov004
#define FtrContact_getClampedContactPoint _ZN10FtrContact22getClampedContactPointEv   // ov004
#define FtrActorGrid_getActorAtPos _ZN12FtrActorGrid13getActorAtPosEPvi   // ov004
#define FtrActorGrid_getActor _ZN12FtrActorGrid8getActorEiii   // ov004
#define FtrActorGrid_getIndex _ZN12FtrActorGrid8getIndexEiii   // ov004
#define FtrActorGrid_clearCell _ZN12FtrActorGrid9clearCellEiiih   // ov004
#define FtrActorGrid_setCell _ZN12FtrActorGrid7setCellEiiih   // ov004
#define FtrActorTable_get _ZN13FtrActorTable3getEj   // ov004
#define FtrActorTable_indexOf _ZN13FtrActorTable7indexOfEPv   // ov004
#define FtrActorTable_remove _ZN13FtrActorTable6removeEPv   // ov004
#define FtrActorTable_add _ZN13FtrActorTable3addEPv   // ov004
#define FtrActorHeap_free _ZN12FtrActorHeap4freeEPv   // ov004
#define FtrActorHeap_alloc _ZN12FtrActorHeap5allocEv   // ov004
#define FtrSoundEmitter_playOnce _ZN15FtrSoundEmitter8playOnceEjj   // ov004
#define FtrSoundEmitter_play _ZN15FtrSoundEmitter4playEjj   // ov004
#define FtrSoundEmitter_release _ZN15FtrSoundEmitter7releaseEv   // ov004
#define FtrSoundEmitter_attach _ZN15FtrSoundEmitter6attachEv   // ov004
#define Unk_ov004_02235984_resetAttached _ZN18Unk_ov004_0223598413resetAttachedEv   // ov004

// ================================================================ externs
extern "C" {
s32 PlayerData_GetCurrent();
BOOL TalkRequest_SetTargetDone(void *p);
s32 func_020e9650(void *a, void *b);
s32 FtrInfo_GetDmaUnk05Fx();
s32 FX_Div(s32 a, s32 b);
s32 func_020e761c(s32 *p, s32 target, s32 step);
void FtrMgr_SetRemovePos(void *p);
void func_020943dc(u32 a);
s32 func_020e9960(void *out, void *a, void *b);
void *FurnitureManager_GetMoveAnim();
BOOL FtrMoveAnim_StartPull(void *o, void *a, s32 *b, s32 c);
BOOL FtrMoveAnim_StartPush(void *o, void *a, s32 *b, s32 c);
BOOL FtrMoveAnim_Step(void *o, void *a, s32 *out);
s32 func_020e7530(s16 *v, s32 target, s32 step);
s32 func_01ffcb0c(s32 a, s32 b);
void func_020e93a0(Unk_ov004_Vec3 *v, s16 a);
void func_01ffd070(Unk_ov004_Vec3 *out, Unk_ov004_Vec3 *a, Unk_ov004_Vec3 *b);
s32 func_02056fcc(void *p, u32 id);
void *func_02095204(s32 a);
u16 Item_MakeFurniture(s32 a, s32 b);
s32 FtrMgr_GetSurfaceHeightAtPos(void *v);
s32 ItemDrop_StartFromLocalPlayer(u16 *a, Unk_ov004_Vec3 *b);
s32 LightLevel_update(void *p);
s32 LightLevel_getLevel(void *p);
s32 Math_LerpFx(s32 a, s32 b, s32 c);
s32 NNSi_G3dModifyMatFlag(void *p, s32 a, s32 b);
s32 NNS_G3dMdlSetMdlEmi(void *p, s32 a, s32 b);
Unk_ov004_02205c80_Obj *FtrActorGrid_getActor(void *mgr, s32 a, s32 b, s32 c);
void *FtrActorTable_GetInstance();
s32 FtrActorTable_indexOf(void *mgr, void *o);
void RoomItemIcons_DrawItem(u32 a, void *b, void *c, s32 d, s32 e, s32 f);
void FieldPos_FromUnitCenter(void *out, s32 x, s32 y);
void FieldPos_ToUnit(s32 *x, s32 *y, void *v);
void MTX_Inverse43(void *a, void *b);
void MTX_MultVec43(void *a, void *b, void *c);
void func_020e8528(void *m, s32 x, s32 y, s32 z);
u32 Scene_GetCurrent();
void RoomFtrState_SetSwitch(s32 x, s32 y, u32 a, u32 b, u32 mgr);
s32 RoomFtrState_GetSwitch(s32 x, s32 y, u32 a, u32 mgr);
void FtrSync_SetTopItem(u32 mgr, s32 x, s32 y, u16 *p, s32 a);
u16 *BlockMap_GetItemPtr(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
BOOL Item_IsFurnitureOrF031(u16 *p);
BOOL Item_IsNormalItem(u16 *p);
BOOL Item_IsFurniture(u16 *p);
u32 Item_GetFurnitureIndex(u16 *p);
void *NNS_G3dGetTex(void *p);
extern void *gSceneBlockMap;
extern Unk_ov004_02205eb0_Mtx data_021f47e0;
extern void *gCurrentHeap;
void Gfx3d_LoadTexAndPltt(void *a, s32 b);
void *Gfx3d_CopyTex(void *a, s32 b);
s32 func_020e7b98(s32 a, s32 b);
s32 FX_Sqrt(s64 a);
void WallEdge_GetMidpoint(Unk_0202f048 *out, Unk_020d8ce4 *p);
void func_020e8300(void *a, s32 b);
void VEC_Subtract(void *a, void *b, void *c);
void VEC_Add(void *a, void *b, void *c);
s32 func_020e96a4(void *a, void *b);
s32 func_020e96ec(void *a, void *b);
void *FtrActorGrid_getActorAtPos(void *a, void *b, s32 c);
void *FtrContactSet_GetInstance();
void FtrContactSet_setContact(void *a, void *b, void *c, void *d, s32 e, void *f, void *g, s32 h, s32 i);
s32 func_0209c344(void *p);
s32 func_0209c348(void *p);
void *File_LoadAlloc(void *path, void *heap, s32 mode, u32 *size);
s32 func_020639e8(char *buf, char *fmt, ...);
void *Heap_Alloc(void *a, u32 b);
void MI_CpuCopy8(void *dst, void *src, u32 n);
s32 func_02101340(void *buf, char *fmt, void *arg);
void func_02101310(void *buf);
s32 func_021012bc(s32 a);
void *NNS_G3dGetMdlSet(s32 a);
s32 func_021065dc(s32 a);
s32 func_021065f8(s32 a, s32 b);
s32 func_02106618(s32 a);
s32 func_02106634(s32 a, s32 b);
s32 func_02106788(s32 a);
s32 func_021067a4(s32 a, s32 b);
s32 func_02106654(s32 a);
s32 func_02106670(s32 a, s32 b);
s32 func_02106690(s32 a);
s32 func_021066ac(s32 a, s32 b);
void Mem_Free(void *p);
extern s32 data_020c8cbc;
extern u8 gFieldSceneKind;
void HouseRoach_SpawnFromFurniture(void *a, void *b);
BOOL Scene_InHouseRoom(void);
BOOL Ground_CanPlaceItem(s32 x, s32 y);
s32 Ground_GetExitAtPos(void *v);
u16 *RoomShell_GetCarpet(void);
u32 ItemInfo_GetIndoorUnk1(u16 *p);
u32 GroundAttr_GetDragSe(u32 a);
s32 FtrMgr_CountSwitchedOn(void *fn);
void LightSwitch_SetOff(u32 a, u32 b);
s32 FtrSync_SetRoomLight(u32 a, u32 b);
void Effect_PlayById2(u32 id, void *v, u32 a, u32 b);
void *func_020947f0(u32 id);
void *Math_AngleXZ(void *v, void *cam);
u32 Scene_InUnk6To8(void);
void func_020b1e74(void *p);
void func_020b1ddc(void *p);
extern u8 gCameraEye[];
extern u8 gCameraLookAt[];
BOOL SceneId_IsHouseRoom(u32 a);
void LightSwitch_SetOn(u32 a, u32 b, u32 c);
void FtrSync_RemoveFurniture(s32 a, s32 x, s32 y, u32 layer, u32 c, void *p, s32 b, s32 a2);
void FtrSync_PlaceFurniture(s32 a, s32 x, s32 y, u32 layer, u32 c, u32 r7, s32 v18, void *p, s32 one);
void FtrActorGrid_setCell(void *a, void *self, s32 x, s32 y, u32 layer);
void FtrActorGrid_clearCell(void *a, void *self, s32 x, s32 y, u32 layer);
s32 FtrActorGrid_getIndex(void *a, s32 x, s32 y, s32 one);
void Model_setPolygonId(void *self, u32 v);
void Model_setInitCallback(void *self, s32 fn, void *arg);
void NNS_G3dBindMdlTex(s32 a, void *b);
void NNS_G3dBindMdlPltt(s32 a, void *b);
void FieldPos_FromBlockUnitCenter(void *p, s32 a, s32 b, u32 c, u32 d);
s32 func_020e94f8(void *v);
s32 FtrInfo_GetDmaUnk02(s32 a);
s32 FtrInfo_GetDmaUnk03Fx(s32 a);
s32 FtrInfo_GetUnk05(s32 a);
s32 FtrInfo_GetDmaUnk07(s32 a);
s32 FtrInfo_GetDmaUnk08(s32 a);
u32 FtrInfo_TestIndoorFlag2(s32 a);
u32 FtrInfo_TestIndoorFlag3(s32 a);
s32 FtrInfo_GetDmaUnk04(s32 a);
BOOL FtrInfo_GetIndoorFlagPair(u32 a);
extern u32 sFtrMgrPool[];
s32 FtrMgr_GetSurfaceHeight(s32 x, s32 y);
void TouchPicker_addCylinder(u32 o, void *p, void *v, s32 a, s32 b, s32 c, s32 d);
void TouchPicker_addBox(u32 o, void *p, void *v, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void TouchPicker_pushBox(u32 o, void *p);
s32 BoxColliderShape_updateTransform(void *o, void *p, s32 a, void *q);
void BoxCollider_Register(void *o, s32 a, s32 b, s32 c, void *p, s32 d, void *q);
void BoxCollider_Unregister(void *o);
s32 func_020e8388(void *m, s32 x, s32 y, s32 z);
s32 func_020e8434(void *m, s32 a);
s32 func_020e8404(void *m, s32 a);
s32 FtrInfo_GetDmaUnk06();
s32 NpcRegistry_GetSlotCount();
void *NpcRegistry_GetBySlot(s32 i);
s32 PlayerData_getPlayerId();
s32 func_02094058();
s32 BlendAnimModel_getAnmObj(void *o);
void BlendAnimModel_stepBlend(void *o);
s32 AnimFrameCtrl_isFinished(void *o);
void AnimFrameCtrl_step(void *o);
u32 Model_getRenderObj(void *o);
void ModelAnim_replace(void *o, u32 a, void *b, s32 c, s32 d, u32 e);
void ModelAnim_replaceWithTex(void *o, u32 a, void *b, void *c, s32 d, s32 e, u32 f);
void BlendAnimModel_initAnim(void *o, void *a, s32 b, s32 c, u32 d, s32 e);
void *func_0209c25c(void *self, void *p);
extern u8 data_027e00c8[];
extern s16 data_02135f44[];
u32 FtrSound_GetSe3(u32);
u32 FtrSound_GetSe2(u32);
u32 FtrSound_GetSe1(u32);
u32 FtrSound_GetSe0(u32);
void FtrSoundEmitter_play(void *, u32, void *);
void FtrSoundEmitter_playOnce(void *, u32, void *);
void FtrSoundEmitter_release(void *);
void FtrSoundEmitter_attach(void *);
void FtrActorTable_remove(void *, void *);
BOOL ModelAnim_allocJointAnm(void *, u32, u32);
BOOL ModelAnim_allocMatAnm(void *, u32, u32);
void ModelAnim_init(void *, void *, s32, s32, s32);
void ModelAnim_addToRenderObj(void *, u32);
void ModelAnim_initWithTex(void *, void *, void *, s32, s32, s32);
BOOL AnimModel_allocAnmObj(void *, u32);
void AnimModel_attachAnim(void *);
void AnimModel_drawAnimated(void *, void *);
void func_0209c224(void *, void *);
u32 FtrInfo_TestIndoorFlag6(u32);
BOOL SceneId_IsVillagerHouse(u32);
void BlockMap_SetItemAtUnit(void *, u16 *, s32, s32, s32);
BOOL func_02002ec0(void *, s32);
BOOL func_02002d9c(void *);
BOOL func_0203e650(void *);
void FtrSoundEmitter_Destroy(void *);
void func_ov004_02205c1c(void *);
void func_ov004_02205d78(void *);
void func_ov004_02205d4c(void *);
void func_ov004_022069b4(void *);
void func_020544d8(void *);
void func_020b6df4(void *);
void FtrMoveFlag_Destroy(void *);
void func_ov004_022061e8(void *);
void func_ov004_02205e9c(void *);
void func_0209c364(void *);
void func_ov004_02206e98(void *);
void func_020b69fc(void *);
void func_ov004_02206eb0(void *);
void func_020b6a0c(void *);
void func_0209c370(void *);
void func_ov004_02205ea0(void *);
void func_ov004_02206204(void *);
void FtrMoveFlag_Init(void *);
void func_020b6e10(void *);
void func_02054514(void *);
void func_ov004_022069cc(void *);
void func_ov004_02206e38(void *);
void func_ov004_02205d50(void *);
void func_ov004_02205d7c(void *);
void func_ov004_02205c2c(void *);
void Unk_ov004_02235984_resetAttached(void *);
void FtrActorTable_add(void *, void *);
BOOL Character_getCharId(void *);
void Character_setCharId(void *, u32);
void Model_setResource(void *, void *, void *);
void Character_postCreate(void *, s32);
extern const u8 data_ov004_0224004c[];
extern const char data_ov004_0224bb44[];
void *FtrActorHeap_GetInstance(void);
void FtrActorHeap_free(void *heap, void *p);
void *FtrActorHeap_alloc(void *heap, u32 size);
void *func_0212899c(void *p, s32 v, u32 n);
void *FtrContactSet_findContact(void *, void *);
s32 *FtrContact_getClampedContactPoint(void);
u32 FtrContact_getPushAngle(void *);
u32 ItemInfo_IsReady(void);
void TalkRequest_AddPlayerTalk6(void *, s32);
BOOL AnimFrameCtrl_hasPassedFrame(void *, u32);
u32 Scene_GetTouchPicker();
void *FtrActorGrid_GetInstance();
void *func_ov004_02206be4(void *o);
void ProcBase_RequestDelete(void *self);
struct Unk_ov004_027e0148 { u8 pad[0x18]; u32 unk_18; };
extern Unk_ov004_027e0148 data_027e0148;
extern void *gSceneBlockMap;
extern Unk_ov004_Mtx data_021f47e0;
BOOL _ZN8FtrActor9isPreviewEv(void *self);
BOOL _ZN8FtrActor11findOwnTileEPiS0_ii(void *self, s32 *a, s32 *b, s32 c, s32 d);
BOOL _ZN8FtrActor11canRotateByEi(void *self);
void _ZN18Unk_ov004_022077a48getTilesEP23Unk_ov004_02207854_ListPvi(void *self, Unk_ov004_02207854_List *l, void *x, s32 y);
void _ZN11FtrTileListC1Ev(void *self);
u32 _ZN11FtrTileList8getCountEv(void *self);
Unk_ov004_02206520_Ent *_ZN11FtrTileList3getEi(void *self, s32 i);
void _ZN11FtrTileList7releaseEv(void *self);
BOOL _ZN11FtrTileList3addEjj(void *self, u32 a, u32 b);
Unk_ov004_02207854_Set *_ZN13FtrStackedSetC1EP11FtrTileListi(Unk_ov004_02207854_Set *self, void *l, s32 flag);
Unk_ov004_022077a4 *_ZN13FtrStackedSet3getEj(Unk_ov004_02207854_Set *self, u32 i);
u32 _ZN13FtrStackedSet8getCountEv(Unk_ov004_02207854_Set *self);
void _ZN13FtrStackedSetC1Ev(Unk_ov004_02207854_Set *self);
BOOL _ZN8FtrActor8isGyroidEv(void);
BOOL _ZN8FtrActor11isSeatOrBedEv(void);
s32 FtrMgr_IsSaleMode();
FtrActor *FtrActorTable_get(void *a, u32 b);
void _ZN10FtrGlowMatD1Ev(void *);
void _ZN13FtrClockHandsD1Ev(void *);
void _ZN9FtrSwitchD1Ev(void *);
void _ZN18Unk_ov004_02206e38D1Ev(void *);
void *_ZN11FtrColliderD1Ev(void *);
void _ZN11FtrTopItemsD1Ev(void *);
void _ZN12FtrStackLinkD1Ev(void *);
void _ZN12FtrModelAnimD1Ev(void *);
void _ZN12FtrModelAnimC1Ev(void *);
void _ZN12FtrStackLink5clearEv(void *);
void _ZN11FtrTopItemsC1Ev(void *);
void _ZN11FtrColliderC1Ev(void *);
void _ZN18Unk_ov004_02206e38C1Ev(void *);
void _ZN9FtrSwitch5clearEv(void *);
void _ZN13FtrClockHands5clearEv(void *);
void _ZN10FtrGlowMatC1Ev(void *);
typedef void (*Unk_ov004_02209578_Fn)(void *);
void *__cxa_vec_ctor(void *, s32, s32, Unk_ov004_02209578_Fn, Unk_ov004_02209578_Fn);
void __cxa_vec_cleanup(void *, s32, s32, Unk_ov004_02209578_Fn);
BOOL _ZN8FtrActor9isNotIdleEv(void *self);
void _ZN18Unk_ov004_0220650c5clearEv(void *self);
void _ZN11BoxColliderD1Ev(void *self);
extern u32 _ZTV11FtrCollider[];
}

// plain functions defined in this unit
extern "C" {
void FtrVisNodes_Destruct(void *);
void FtrVisNodes_Construct(void *);
u16 FtrGlowMat_GetBaseEmission();
BOOL FtrStack_CalcRelPlacement(s32 *idx, Unk_ov004_02205d8c_Vec *pos, s16 *ang, s32 x, s32 a, s16 b);
void FtrActor_GetItemId(u16 *out, FtrActor *o);
s32 FtrActor_PredIsGyroid(void);
s32 FtrActor_PredIsSeatOrBed(void);
s32 FtrActor_PredIsStereo(void);
s32 FtrActor_PredIsLightSource(void);
void FtrActor_SpawnActorC0(void *a, u32 x);
s32 FtrActor_GetDragSe(void);
s32 FtrActor_TestCurSceneUnk();
s32 FtrActor_TestSceneUnk(s32 a);
void FtrActor_MakeItemForAngle(u16 *out, Unk_ov004_022077a4 *obj, s32 ang);
u32 FtrActor_AngleToDir(s32 v);
void FtrActor_SetInitialAct(Self *self);
void FtrActor_UpdateTopItemBoxes(Self *self);
void FtrActor_UpdateBox(Self *self);
void FtrActor_ReleaseCollider(Self *self);
void FtrActor_InitCollider(Self *self);
void FtrActor_GetBoxSize(Self *self, Unk_ov004_02208284_V3 *out);
void FtrActor_UpdateMtx(Self *self);
s32 FtrActor_CalcWorldMtx(Self *self, s32 a, s32 b);
u8 FtrActor_GetLayer(Self *self);
BOOL FtrActor_RequestToggle(Self *self);
s32 FtrActor_GetFtrIndex(Self *self);
Self *FtrActor_GetParent(Self *self);
BOOL FtrActor_IsPosClearOfCharacters(Self *self, s32 a, s32 b, s32 c, s32 d);
BOOL FtrActor_IsWithinDist(Self *self, s32 a, void *p, s32 b);
BOOL FtrActor_TestPlayerUnk();
void FtrActor_GetCenter(Self *self, Unk_ov004_02208284_V3 *out);
void FtrActor_GetCorner(Self *self, void *out, s32 i);
void FtrActor_LocalToWorld(Self *self, void *out, void *src);
u32 FtrActor_GetHeap(Self *self);
BOOL FtrActor_StepAnims(Self *self);
void FtrActor_PlayAnimsFromLastFrame(Self *self, u32 a, s32 b, s32 c);
BOOL FtrActor_IsStereo(FtrActor *p);
BOOL FtrActor_IsLightSource(FtrActor *p);
u32 FtrActor_GetArgMode(u32 v);
u32 FtrActor_GetArgFtrIndex(u32 v);
u32 FtrActor_MakeSpawnArg(u32 a, u32 b, u32 c, u32 d, u8 f, u32 e);
void FtrActor_TurnOnRoomLight(u32 a);
u32 FtrActor_IsLightKind1(u32 a);
void FtrActor_SetModelCallbacks(Unk_ov004_02209e64 *o);
void FtrActor_NodeCallback(Unk_ov004_02209e64 *o);
void FtrActor_NodeDescCallbackB(Unk_ov004_02209e64 *self);
void FtrActor_NodeDescCallbackA(Unk_ov004_02209e64 *self);
void FtrActor_MatCallback(Unk_ov004_02209e64 *self);
void FtrActor_Create();
}

// ================================================================ static inline helpers
static inline BOOL Unk_ov004_0220607c_IsEmpty(u16 *p) {
    BOOL r;
    if (Item_IsFurniture(p)) {
        u16 t = 0xfff1;
        r = (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&t)) ? TRUE : FALSE;
    } else {
        r = (*p == 0xfff1) ? TRUE : FALSE;
    }
    return r;
}

static inline BOOL Unk_ov004_02206a44_IsInvalid(u16 *a) {
    if (Item_IsFurniture(a)) {
        u16 t = 0xfff1;
        if (Item_GetFurnitureIndex(a) == Item_GetFurnitureIndex(&t)) {
            return TRUE;
        }
        return FALSE;
    }
    if (*a == 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov004_02206a44_Same(u16 *a, u16 *b) {
    if (Item_IsFurniture(a)) {
        if (Item_GetFurnitureIndex(a) == Item_GetFurnitureIndex(b)) {
            return TRUE;
        }
        return FALSE;
    }
    if (*a == *b) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov004_02207650_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

static inline BOOL Unk_ov004_02207650_InRange(u16 *p) {
    BOOL r = FALSE;
    u32 v = *p;
    if (v >= 0x1144 && v <= 0x1187) {
        r = TRUE;
    }
    return r;
}

#define UNK_OV004_022072B4_FAIL()                              \
    {                                                          \
        ((Unk_ov004_022077a4 *)this)->writeTiles(0, 0, 0, 0); \
        _ZN11FtrTileList7releaseEv(&c2);   \
        _ZN11FtrTileList7releaseEv(&c1);   \
        return FALSE;                                          \
    }

#define B8(o) (*(u8 *)((u8 *)self + (o)))
#define S32(o) (*(s32 *)((u8 *)self + (o)))
#define S16(o) (*(s16 *)((u8 *)self + (o)))
#define PT(o) ((void *)((u8 *)self + (o)))
typedef FtrActor Self;

// virtual call with one argument through the vtable slot (the real slots take no parameter in symbols.txt)
// view of the 0x0224882c vtable used for the three slots that take a parameter although symbols.txt names them without one
struct Unk_ov004_0224882c_VT {
    virtual void vslot_00();
    virtual void vslot_04();
    virtual void vslot_08();
    virtual void vslot_0c();
    virtual void vslot_10();
    virtual void vslot_14();
    virtual void vslot_18();
    virtual void vslot_1c();
    virtual void vslot_20();
    virtual void vslot_24();
    virtual void vslot_28();
    virtual void vslot_2c();
    virtual void vslot_30();
    virtual void vslot_34();
    virtual void vslot_38();
    virtual void vslot_3c();
    virtual void vslot_40();
    virtual void vslot_44();
    virtual void vslot_48();
    virtual void vslot_4c();
    virtual void vslot_50();
    virtual void vslot_54();
    virtual void vslot_58();
    virtual void vslot_5c();
    virtual void vslot_60();
    virtual void vslot_64();
    virtual void vslot_68();
    virtual void vslot_6c();
    virtual void vslot_70();
    virtual void vslot_74();
    virtual void vslot_78();
    virtual void vslot_7c();
    virtual void vslot_80();
    virtual void vslot_84();
    virtual void vslot_88();
    virtual void vslot_8c();
    virtual void vslot_90();
    virtual void vfunc_94(s32 a);
    virtual void vfunc_98(s32 a);
    virtual void vfunc_9c(s32 a);
};
#define VCALL94(self, arg) ((Unk_ov004_0224882c_VT *)(self))->vfunc_94(arg)
#define VCALL98(self, arg) ((Unk_ov004_0224882c_VT *)(self))->vfunc_98(arg)
#define VCALL9C(self, arg) ((Unk_ov004_0224882c_VT *)(self))->vfunc_9c(arg)

struct Unk_ov004_Scene_Entry {
    void *(*unk_00)();
    u16 unk_04;
    u16 unk_06;
    s32 unk_08[4];
};
struct Unk_ov004_Rgba {
    u8 a, b, c, d;
    Unk_ov004_Rgba(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

// ---- declarations of the data defined below
extern "C" {
extern const u32 sFtrInitialActByMode[3];
extern const u8 sFtrPolygonIds[0x1c];
extern u16 gFtrSoundNone;
extern char data_ov004_022486fc[2];
extern char data_ov004_02248700[3];
extern char data_ov004_02248704[3];
extern char data_ov004_02248708[3];
extern char sFtrModelName[15];
extern char *sFtrModelNamePtr;
extern char data_ov004_02248710[5];
extern char data_ov004_02248718[6];
extern char data_ov004_02248720[6];
extern char *sFtrGlowMatNames[3];
extern char *sFtrVisNodeNames[4];
extern Unk_ov004_Scene_Entry sFtrActorProfile;
extern s16 sFtrPreviewYaw;
extern s16 sFtrPreviewPitch;
extern char sFtrArcPathBuf[0x28];
extern char sFtrTexPathBuf[0x28];
extern Unk_ov004_Rgba data_ov004_0224f60c;
extern Unk_ov004_Rgba data_ov004_0224f62c;
extern Unk_ov004_Rgba data_ov004_0224f63c;
extern Unk_ov004_Rgba data_ov004_0224f608;
extern Unk_ov004_Rgba data_ov004_0224f61c;
extern Unk_ov004_Rgba data_ov004_0224f618;
extern FxVec3 data_ov004_0224f88c[4];
extern FxVec3 data_ov004_0224f8bc[4];
extern FxVec3 data_ov004_0224f8ec[4];
extern FxVec3 *sFtrFootprintCorners[3];
}

// ================================================================ functions and data

// @02209f1c
extern "C" void FtrActor_Create() {
    new FtrActor;
}

// @02209ef0
void *FtrActor::operator new(unsigned long size) {
    void *p = FtrActorHeap_alloc(FtrActorHeap_GetInstance(), size);
    if (p == 0) {
        return 0;
    }
    func_0212899c(p, 0, size);
    return p;
}

// @02209edc
void FtrActor::operator delete(void *p) {
    FtrActorHeap_free(FtrActorHeap_GetInstance(), p);
}

// @02209ebc
extern "C" void FtrActor_MatCallback(Unk_ov004_02209e64 *self) {
    Unk_ov004_02209e44_Target *t = self->unk_04->unk_2c;
    if (t != 0) {
        t->vfunc_60(self->unk_00->unk_01, self);
    }
}

// @02209e90
extern "C" void FtrActor_NodeDescCallbackA(Unk_ov004_02209e64 *self) {
    Unk_ov004_02209e44_Target *t = self->unk_04->unk_2c;
    if (t != 0) {
        t->vfunc_68(self->unk_00->unk_01, self);
    }
    self->unk_24 = FtrActor_NodeDescCallbackB;
    self->unk_92 = 2;
}

// @02209e64
extern "C" void FtrActor_NodeDescCallbackB(Unk_ov004_02209e64 *self) {
    Unk_ov004_02209e44_Target *t = self->unk_04->unk_2c;
    if (t != 0) {
        t->vfunc_6c(self->unk_00->unk_01, self);
    }
    self->unk_24 = FtrActor_NodeDescCallbackA;
    self->unk_92 = 1;
}

// @02209e44
extern "C" void FtrActor_NodeCallback(Unk_ov004_02209e64 *o) {
    Unk_ov004_02209e44_Target *t = o->unk_04->unk_2c;
    if (t != NULL) {
        t->vfunc_64(o->unk_00->unk_01, o);
    }
}

// @02209e14
extern "C" void FtrActor_SetModelCallbacks(Unk_ov004_02209e64 *o) {
    o->unk_1c = FtrActor_MatCallback;
    o->unk_90 = 2;
    o->unk_14 = FtrActor_NodeCallback;
    o->unk_8e = 2;
    o->unk_24 = FtrActor_NodeDescCallbackA;
    o->unk_92 = 1;
}

// @02209e08
extern "C" u32 FtrActor_IsLightKind1(u32 a) {
    if (a == 1) {
        return 1;
    }
    return 0;
}

// @02209dd8
extern "C" void FtrActor_TurnOnRoomLight(u32 a) {
    u32 t = FtrActor_IsLightKind1(a);
    if (a == 2) {
        LightSwitch_SetOn(0, 8, t);
    } else {
        LightSwitch_SetOn(0, 0xc, t);
    }
    FtrSync_SetRoomLight(Scene_GetCurrent(), 1);
}

// @02209d58
extern "C" u32 FtrActor_MakeSpawnArg(u32 a, u32 b, u32 c, u32 d, u8 f, u32 e) {
    Unk_ov004_02209d40_Bits l;
    l.a = a;
    l.b = b;
    l.c = c;
    l.d = d;
    l.e = e;
    l.f = f;
    l.w1 = (l.w1 & ~0x1f) | 1;
    return *(u32 *)&l;
}

// @02209d4c
extern "C" u32 FtrActor_GetArgFtrIndex(u32 v) {
    Unk_ov004_02209d40_Bits l;
    *(u32 *)&l = v;
    return l.c;
}

// @02209d40
extern "C" u32 FtrActor_GetArgMode(u32 v) {
    Unk_ov004_02209d40_Bits l;
    *(u32 *)&l = v;
    return l.e;
}

// @02209d10
extern "C" BOOL FtrActor_IsLightSource(FtrActor *p) {
    if (p != NULL) {
        if (FtrInfo_GetIndoorFlagPair(FtrActor_GetFtrIndex(p)) != 0) {
            if (p->isPreview() == 0) {
                return TRUE;
            }
        }
        return FALSE;
    }
    return FALSE;
}

// @02209cf0
extern "C" BOOL FtrActor_IsStereo(FtrActor *p) {
    if (p != NULL) {
        u32 v = *(u16 *)((u8 *)p + 0xc);
        BOOL r;
        if (v == 0x3a) r = TRUE; else r = FALSE;
        if (r != 0) return TRUE;
        return FALSE;
    }
    return FALSE;
}

// @02209ccc
BOOL FtrActor::isStereoOn() {
    if (FtrActor_IsStereo(this)) {
        return ((FtrSwitch *)(unk_73c))->isOn();
    }
    return FALSE;
}

// @02209c88
BOOL FtrActor::isTvOn() {
    u32 v = *(u16 *)((u8 *)this + 0xc);
    BOOL a;
    BOOL b;
    BOOL r;
    if (v == 0x3b) a = TRUE; else a = FALSE;
    if (a != 0 || ((v == 0x3c ? (b = TRUE) : (b = FALSE)), b != 0)) {
        if (((FtrSwitch *)(unk_73c))->isOn()) r = TRUE; else r = FALSE;
    } else {
        r = FALSE;
    }
    return r;
}

// @02209c58
BOOL FtrActor::isSeatOrBed() {
    BOOL r = TRUE;
    u32 v = *(u16 *)((u8 *)this + 0xc);
    BOOL a;
    if (v == 0x36) a = TRUE; else a = FALSE;
    if (a == 0) {
        BOOL b;
        if (v == 0x37) b = TRUE; else b = FALSE;
        if (b == 0) r = FALSE;
    }
    if (r != 0) return TRUE;
    return FALSE;
}

// @02209c44
BOOL FtrActor::isGyroid() {
    if (unk_77c == 0x18) {
        return TRUE;
    }
    return FALSE;
}

// @02209c10
BOOL FtrActor::isCabinClock() {
    if (isAct(0) == 0) {
        if (isAct(5) == 0) {
            if (unk_77c == 0x10) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

// @02209bb4
BOOL FtrActor::isSoundingClock() {
    if (isAct(0) == 0) {
        if (isAct(5) == 0) {
            switch (unk_77c) {
            case 0x10:
                return TRUE;
            case 0x11:
            case 0x2b:
                u32 c = FtrSound_GetSe3(FtrActor_GetFtrIndex(this));
                if (c != gFtrSoundNone) {
                    return TRUE;
                }
                return FALSE;
            }
        }
    }
    return FALSE;
}

// @02209bb0
BOOL FtrActor::initModel() {
    return TRUE;
}

// @022099a0
FtrActor::FtrActor() {
    func_0209c370(&unk_12e);
    _ZN12FtrStackLink5clearEv(unk_178);
    _ZN11FtrTopItemsC1Ev(unk_188);
    __cxa_vec_ctor(unk_1cc, 4, 0x20, func_020b6a0c, func_020b69fc);
    FtrMoveFlag_Init(unk_24c);
    func_020b6e10(unk_288);
    func_02054514(unk_534);
    _ZN11FtrColliderC1Ev(unk_628);
    _ZN18Unk_ov004_02206e38C1Ev(unk_6c8);
    _ZN9FtrSwitch5clearEv(unk_73c);
    _ZN13FtrClockHands5clearEv(&unk_73e);
    _ZN10FtrGlowMatC1Ev(unk_744);
    FtrVisNodes_Construct(unk_760);
    Unk_ov004_02235984_resetAttached(unk_794);
    __cxa_vec_ctor(unk_7c0, 4, 0x20, _ZN12FtrModelAnimC1Ev, _ZN12FtrModelAnimD1Ev);
}

// @022096b4
FtrActor::~FtrActor() {
    __cxa_vec_cleanup(unk_7c0, 4, 0x20, _ZN12FtrModelAnimD1Ev);
    FtrSoundEmitter_Destroy(unk_794);
    FtrVisNodes_Destruct(unk_760);
    _ZN10FtrGlowMatD1Ev(unk_744);
    _ZN13FtrClockHandsD1Ev(&unk_73e);
    _ZN9FtrSwitchD1Ev(unk_73c);
    _ZN18Unk_ov004_02206e38D1Ev(unk_6c8);
    _ZN11FtrColliderD1Ev(unk_628);
    func_020544d8(unk_534);
    func_020b6df4(unk_288);
    FtrMoveFlag_Destroy(unk_24c);
    __cxa_vec_cleanup(unk_1cc, 4, 0x20, func_020b69fc);
    _ZN11FtrTopItemsD1Ev(unk_188);
    _ZN12FtrStackLinkD1Ev(unk_178);
    func_0209c364(&unk_12e);
}

// @02209578
BOOL FtrActor::vfunc_00() {
    Unk_ov004_02209d40_Bits l;
    *(u32 *)&l = *(u32 *)((u8 *)this + 8);
    u32 t = l.e;
    unk_768 = t;
    FtrActorTable_add(FtrActorTable_GetInstance(), this);
    void *r = func_0209c25c(sFtrMgrPool, &unk_12e);
    ((Unk_ov004_022077a4 *)this)->setupFromSpawnArg();
    if (Character_getCharId(this) == 0) {
        Character_setCharId(this, makeCharId(0, 0));
    }
    if (unk_768 == 0) {
        ((FtrModelRes *)(unk_6c8))->loadSync(r, unk_280, needsTexCopy());
        void *p = ((FtrModelRes *)(unk_6c8))->getModel();
        Model_setResource(unk_534, p, ((FtrModelRes *)(unk_6c8))->getTexture());
        unk_77a = 1;
        ((Unk_ov004_022077a4 *)this)->setupModel();
        if (initModel()) {
            unk_77a = 0;
            return 1;
        }
        return 0;
    } else {
        if (((FtrModelRes *)(unk_6c8))->loadAsync(r, unk_280, needsTexCopy()) != 0) {
            void *p = ((FtrModelRes *)(unk_6c8))->getModel();
            Model_setResource(unk_534, p, ((FtrModelRes *)(unk_6c8))->getTexture());
            unk_77a = 1;
            ((Unk_ov004_022077a4 *)this)->setupModel();
            if (initModel()) {
                unk_77a = 0;
                return 1;
            }
            return 0;
        }
        return -1;
    }
}

// @02209558
void FtrActor::postCreate(s32 a) {
    if (a == 2) {
        ((Unk_ov004_022077a4 *)this)->initLamp();
    }
    Character_postCreate(this, a);
}

// @02209480
BOOL FtrActor::onExecute() {
    s32 v[4];
    if (isPreview() == 0) {
        FtrSoundEmitter_attach(unk_794);
        FtrActor_GetCenter(this, (Vec3 *)v);
        unk_7b4[0] = v[0];
        unk_7b4[1] = v[1];
        unk_7b4[2] = v[2];
    }
    execAct();
    FtrActor_UpdateBox((Self *)this);
    FtrActor_UpdateMtx((Self *)this);
    if (isAct(0) == 0 && isAct(5) == 0) {
        if (unk_77c == 0) {
            hasIndoorFlag6();
        }
        updateActive();
    } else {
        updateAppearRemove();
        if (((FtrSwitch *)(unk_73c))->isChanging()) {
            ((FtrSwitch *)(unk_73c))->toggle(0);
        }
    }
    if (isPreview() == 0) {
        updateLamp();
        ((FtrSwitch *)(unk_73c))->commit((Unk_ov004_02205c80_Obj *)this);
        FtrActor_UpdateTopItemBoxes((Self *)this);
    }
    return TRUE;
}

// @0220947c
BOOL FtrActor::updateActive() { return TRUE; }

// @02209478
BOOL FtrActor::updateAppearRemove() { return TRUE; }

// @022093a8
BOOL FtrActor::preDraw() {
    if (Actor::preDraw() == 0) {
        return FALSE;
    }
    if (isVisible() == 0) {
        return FALSE;
    }
    if (unk_14c != 0 || unk_150 != 0 || unk_154 != 0) {
        u32 saved[4];
        u32 i;
        if (isPreview()) {
            for (i = 0; i < 4; i++) {
                u32 o = i << 2;
                u8 *q = data_027e00c8 + o;
                *(u32 *)((u8 *)saved + o) = *(u32 *)(q + 0xa8);
                *(u32 *)(q + 0xa8) = (i << 30) | 0x7fff;
            }
        }
        AnimModel_drawAnimated(unk_534, &unk_14c);
        if (isPreview()) {
            for (i = 0; i < 4; i++) {
                u32 o = i << 2;
                u8 *q = data_027e00c8 + o;
                *(u32 *)(q + 0xa8) = *(u32 *)((u8 *)saved + o);
            }
        }
    }
    if (isPreview() == 0) {
        ((FtrTopItems *)((u8 *)this + 0x188))->drawAll((Unk_ov004_02205c80_Obj *)this);
    }
    return TRUE;
}

// @02209390
BOOL FtrActor::preDelete() {
    if (Character::preDelete()) {
        return TRUE;
    }
    return FALSE;
}

// @02209294
BOOL FtrActor::vfunc_14(s32 a) {
    if (a == 2) {
        FtrSoundEmitter_release(unk_794);
        releaseRoomLight();
        FtrActor_ReleaseCollider((Self *)this);
        if (isRemoving() == 0) {
            if (isHidden() == 0) {
                ((FtrSwitch *)(unk_73c))->saveToMap((Unk_ov004_02205c80_Obj *)this);
            }
        }
        ((FtrModelRes *)(unk_6c8))->release();
        func_0209c224(sFtrMgrPool, (u8 *)this + 0x12e);
        if (isRemoving()) {
            s32 x, y;
            findOwnTile(&x, &y, 0, 0);
            u32 r = Scene_GetCurrent();
            if (FtrMgr_IsSaleMode() && !SceneId_IsVillagerHouse(r) && !SceneId_IsHouseRoom(r)) {
                void *g = gSceneBlockMap;
                ((Unk_ov004_022077a4 *)this)->clearTiles(0, 0);
                if (g) {
                    u16 v = 0x1547;
                    BlockMap_SetItemAtUnit(g, &v, x, y, 0);
                }
            } else {
                ((Unk_ov004_022077a4 *)this)->clearTiles(1, 0);
            }
            spawnActorC0AtCenter();
        }
        FtrActorTable_remove(FtrActorTable_GetInstance(), this);
    }
    return func_02002ec0(this, a);
}

// @02209290
BOOL FtrActor::needsTexCopy() { return FALSE; }

// @0220928c
BOOL FtrActor::isVisible() { return TRUE; }

// @02209288
void FtrActor::onRemove() {}

// @02209284
void FtrActor::onMoveStart() {}

// @02209280
void FtrActor::onRotateStart() {}

// @0220927c
void FtrActor::onRotateUpdate() {}

// data
Unk_ov004_Rgba data_ov004_0224f60c(31, 20, 20, 31);
// data
Unk_ov004_Rgba data_ov004_0224f62c(20, 20, 31, 31);
// data
Unk_ov004_Rgba data_ov004_0224f63c(31, 31, 20, 31);
// data
Unk_ov004_Rgba data_ov004_0224f608(20, 31, 20, 31);
// data
Unk_ov004_Rgba data_ov004_0224f61c(20, 31, 31, 31);
// data
Unk_ov004_Rgba data_ov004_0224f618(20, 24, 24, 31);
// data
Unk_ov004_Scene_Entry sFtrActorProfile = {(void *(*)())FtrActor_Create, 0x2e, 0x35, {0, 0xc8000, 0x12c000, 0x258000}};
// data
FxVec3 data_ov004_0224f88c[4] = {FxVec3(-0x1000, 0, -0x1000), FxVec3(-0x1000, 0, 0x1000),
                                       FxVec3(0x1000, 0, 0x1000), FxVec3(0x1000, 0, -0x1000)};
// data
FxVec3 data_ov004_0224f8bc[4] = {FxVec3(-0x1000, 0, -0x1000), FxVec3(-0x1000, 0, 0x1000),
                                       FxVec3(0x3000, 0, 0x1000), FxVec3(0x3000, 0, -0x1000)};
// data
FxVec3 data_ov004_0224f8ec[4] = {FxVec3(-0x2000, 0, -0x2000), FxVec3(-0x2000, 0, 0x2000),
                                       FxVec3(0x2000, 0, 0x2000), FxVec3(0x2000, 0, -0x2000)};
// data
s16 sFtrPreviewYaw;
// data
FxVec3 *sFtrFootprintCorners[3] = {data_ov004_0224f88c, data_ov004_0224f8bc, data_ov004_0224f8ec};
// data
u16 gFtrSoundNone = 0xffff;

// @022091fc
FxVec3 *FtrActor::getInteractionPos() {
    static FxVec3 v;
    v.x = unk_5c[0];
    v.y = unk_5c[1];
    v.z = unk_5c[2];
    u8 *o = (u8 *)func_02095204(4);
    if (o) {
        s32 i = *(u16 *)(o + 0x8e) >> 4;
        s32 k = i * 2;
        v.x = *(s32 *)(o + 0x5c) + data_02135f44[k];
        v.y = *(s32 *)(o + 0x60);
        v.z = *(s32 *)(o + 0x64) + data_02135f44[k + 1];
    }
    return &v;
}

// @022091f0
u8 FtrActor::getActAid() {
    return unk_778;
}

// @022091e0
u32 FtrActor::hasIndoorFlag6() {
    return FtrInfo_TestIndoorFlag6(unk_280);
}

// @02209198
BOOL FtrActor::playSound0() {
    if (isPreview() == 0) {
        u32 t = FtrSound_GetSe0(unk_280);
        if (t != gFtrSoundNone) {
            FtrSoundEmitter_playOnce(unk_794, t, unk_7b4);
            return TRUE;
        }
    }
    return FALSE;
}

// @02209150
BOOL FtrActor::playSound1() {
    if (isPreview() == 0) {
        u32 t = FtrSound_GetSe1(unk_280);
        if (t != gFtrSoundNone) {
            FtrSoundEmitter_play(unk_794, t, unk_7b4);
            return TRUE;
        }
    }
    return FALSE;
}

// @02209108
BOOL FtrActor::playSound2() {
    if (isPreview() == 0) {
        u32 t = FtrSound_GetSe2(unk_280);
        if (t != gFtrSoundNone) {
            FtrSoundEmitter_play(unk_794, t, unk_7b4);
            return TRUE;
        }
    }
    return FALSE;
}

// @022090c0
BOOL FtrActor::playSound3() {
    if (isPreview() == 0) {
        u32 t = FtrSound_GetSe3(unk_280);
        if (t != gFtrSoundNone) {
            FtrSoundEmitter_play(unk_794, t, unk_7b4);
            return TRUE;
        }
    }
    return FALSE;
}

// @02208ff0
u16 FtrActor::getAnimFrameCount(s32 a) {
    u32 i = a & 1;
    if (((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBca(i)) {
        return ((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBca(i)->unk_04;
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBma(i)) {
        return ((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBma(i)->unk_04;
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBta(i)) {
        return ((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBta(i)->unk_04;
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBtp(i)) {
        return ((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBtp(i)->unk_04;
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBva(i)) {
        return ((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBva(i)->unk_04;
    }
    return 0;
}

// @02208de0
void FtrActor::initAnims(s32 a, s32 b, s32 c, s32 d) {
    u32 m = FtrActor_GetHeap((Self *)this);
    u32 i = a & 1;
    if (((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBva(i)) {
        u32 t = unk_590;
        if (ModelAnim_allocJointAnm(&unk_7c0[3], t, func_0209c348((void *)m))) {
            ModelAnim_init(&unk_7c0[3], ((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBva(i), b, c, d);
            ModelAnim_addToRenderObj(&unk_7c0[3], Model_getRenderObj(unk_534));
        }
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBma(i)) {
        u32 t = unk_590;
        if (ModelAnim_allocMatAnm(unk_7c0, t, func_0209c348((void *)m))) {
            ModelAnim_init(unk_7c0, ((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBma(i), b, c, d);
            ModelAnim_addToRenderObj(unk_7c0, Model_getRenderObj(unk_534));
        }
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBta(i)) {
        u32 t = unk_590;
        if (ModelAnim_allocMatAnm(&unk_7c0[1], t, func_0209c348((void *)m))) {
            ModelAnim_init(&unk_7c0[1], ((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBta(i), b, c, d);
            ModelAnim_addToRenderObj(&unk_7c0[1], Model_getRenderObj(unk_534));
        }
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBtp(i)) {
        u32 t = unk_590;
        if (ModelAnim_allocMatAnm(&unk_7c0[2], t, func_0209c348((void *)m))) {
            Unk_ov004_02208a18_Rec *rec = ((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBtp(i);
            ModelAnim_initWithTex(&unk_7c0[2], rec, ((FtrModelRes *)(unk_6c8))->getTexture(), b, c, d);
            ModelAnim_addToRenderObj(&unk_7c0[2], Model_getRenderObj(unk_534));
        }
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBca(i)) {
        if (AnimModel_allocAnmObj(unk_534, func_0209c348((void *)m))) {
            BlendAnimModel_initAnim(unk_534, ((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBca(i), b, c, d, 0);
            AnimModel_attachAnim(unk_534);
        }
    }
}

// @02208ba8
void FtrActor::playAnim(s32 a, s32 b, s32 c, u32 d) {
    u32 i = a & 1;
    if (((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBva(i)) {
        Unk_ov004_02208a18_Rec *rec = ((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBva(i);
        u32 v;
        if (d == 0xffff) {
            v = ((u32)unk_7c0[3].unk_08 << 4) >> 16;
        } else {
            u32 n = rec->unk_04;
            v = (u16)(d >= n ? n - 1 : d);
        }
        ModelAnim_replace(&unk_7c0[3], Model_getRenderObj(unk_534), rec, b, c, v);
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBma(i)) {
        Unk_ov004_02208a18_Rec *rec = ((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBma(i);
        u32 v;
        if (d == 0xffff) {
            v = ((u32)unk_7c0[0].unk_08 << 4) >> 16;
        } else {
            u32 n = rec->unk_04;
            v = (u16)(d >= n ? n - 1 : d);
        }
        ModelAnim_replace(unk_7c0, Model_getRenderObj(unk_534), rec, b, c, v);
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBta(i)) {
        Unk_ov004_02208a18_Rec *rec = ((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBta(i);
        u32 v;
        if (d == 0xffff) {
            v = ((u32)unk_7c0[1].unk_08 << 4) >> 16;
        } else {
            u32 n = rec->unk_04;
            v = (u16)(d >= n ? n - 1 : d);
        }
        ModelAnim_replace(&unk_7c0[1], Model_getRenderObj(unk_534), rec, b, c, v);
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBtp(i)) {
        Unk_ov004_02208a18_Rec *rec = ((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBtp(i);
        u32 v;
        if (d == 0xffff) {
            v = ((u32)unk_7c0[2].unk_08 << 4) >> 16;
        } else {
            u32 n = rec->unk_04;
            v = (u16)(d >= n ? n - 1 : d);
        }
        u32 p = Model_getRenderObj(unk_534);
        ModelAnim_replaceWithTex(&unk_7c0[2], p, rec, ((FtrModelRes *)(unk_6c8))->getTexture(), b, c, v);
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBca(i)) {
        Unk_ov004_02208a18_Rec *rec = ((FtrAnimSet *)(((FtrModelRes *)(unk_6c8))->getAnimSet()))->getBca(i);
        u32 v;
        if (d == 0xffff) {
            v = (unk_5d8 << 4) >> 16;
        } else {
            u32 n = rec->unk_04;
            if (d >= n) {
                d = n - 1;
            }
            v = (u16)d;
        }
        BlendAnimModel_initAnim(unk_534, rec, b, c, v, 0);
    }
}

// @02208a18
extern "C" void FtrActor_PlayAnimsFromLastFrame(Self *self, u32 a, s32 b, s32 c) {
    s32 k = a & 1;
    Unk_ov004_02208a18_Rec *q;
    if (((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBva(k)) {
        q = ((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBva(k);
        ModelAnim_replace(PT(0x820), Model_getRenderObj(PT(0x534)), q, b, c, (u16)(q->unk_04 - 1));
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBma(k)) {
        q = ((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBma(k);
        ModelAnim_replace(PT(0x7c0), Model_getRenderObj(PT(0x534)), q, b, c, (u16)(q->unk_04 - 1));
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBta(k)) {
        q = ((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBta(k);
        ModelAnim_replace(PT(0x7e0), Model_getRenderObj(PT(0x534)), q, b, c, (u16)(q->unk_04 - 1));
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBtp(k)) {
        u32 obj;
        q = ((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBtp(k);
        obj = Model_getRenderObj(PT(0x534));
        ModelAnim_replaceWithTex(PT(0x800), obj, q, ((FtrModelRes *)(PT(0x6c8)))->getTexture(), b, c, (u16)(q->unk_04 - 1));
    }
    if (((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBca(k)) {
        q = ((FtrAnimSet *)(((FtrModelRes *)(PT(0x6c8)))->getAnimSet()))->getBca(k);
        BlendAnimModel_initAnim(PT(0x534), q, b, c, (u16)(q->unk_04 - 1), 0);
    }
}

// @02208980
extern "C" BOOL FtrActor_StepAnims(Self *self) {
    BOOL k = TRUE;
    BOOL r4 = TRUE;
    BOOL z = FALSE;
    u32 i;
    void *p;
    if (BlendAnimModel_getAnmObj(PT(0x534))) {
        BlendAnimModel_stepBlend(PT(0x534));
        if (!AnimFrameCtrl_isFinished(PT(0x5d0))) {
            r4 = FALSE;
        }
    }
    for (i = z; i < 4; i++) {
        if (((FtrModelAnim *)(&self->unk_7c0[i]))->getAnmObj()) {
            p = (Unk_ov004_02208980_E *)PT(0x7c0) + i;
            AnimFrameCtrl_step(p);
            *self->unk_7c0[i].unk_18 = self->unk_7c0[i].unk_08;
            if (!AnimFrameCtrl_isFinished(p)) {
                k = z;
            }
        }
    }
    if (k && r4) {
        return TRUE;
    }
    return FALSE;
}

// @02208968
extern "C" u32 FtrActor_GetHeap(Self *self) {
    return (u32)func_0209c25c(sFtrMgrPool, (u8 *)self + 0x12e);
}

// @02208938
extern "C" void FtrActor_LocalToWorld(Self *self, void *out, void *src) {
    data_021f47e0 = *(Unk_ov004_02208284_M *)PT(0x250);
    MTX_MultVec43(src, &data_021f47e0, out);
}

// @02208910
extern "C" void FtrActor_GetCorner(Self *self, void *out, s32 i) {
    FxVec3 *tbl = sFtrFootprintCorners[S32(0x780)];
    FtrActor_LocalToWorld(self, out, (u8 *)tbl + (i & 3) * 12);
}

// @022088c0
extern "C" void FtrActor_GetCenter(Self *self, Unk_ov004_02208284_V3 *out) {
    u32 i = 0;
    Unk_ov004_02208284_V3 v;
    Unk_ov004_02208284_V3 t;
    v.x = i;
    v.y = i;
    v.z = i;
    for (; i < 4; i++) {
        FtrActor_GetCorner(self, &t, i);
        VEC_Add(&v, &t, &v);
    }
    v.x = v.x >> 2;
    v.y = v.y >> 2;
    v.z = v.z >> 2;
    out->x = v.x;
    out->y = v.y;
    out->z = v.z;
}

// @02208894
extern "C" BOOL FtrActor_TestPlayerUnk() {
    if (PlayerData_GetCurrent() != 0) {
        if (PlayerData_getPlayerId() != 0) {
            if (func_02094058() == 0) {
                return TRUE;
            }
            return FALSE;
        }
    }
    return FALSE;
}

// @02208870
extern "C" BOOL FtrActor_IsWithinDist(Self *self, s32 a, void *p, s32 b) {
    if (func_020e9650(self, p) < a + b) {
        return TRUE;
    }
    return FALSE;
}

// @022087e8
extern "C" BOOL FtrActor_IsPosClearOfCharacters(Self *self, s32 a, s32 b, s32 c, s32 d) {
    void *p;
    u32 i;
    u32 j;
    u32 n;
    p = func_02095204(4);
    if (p) {
        for (i = 0; i < 4; i++) {
            void *q = func_02095204(i);
            if (q && p != q) {
                if (FtrActor_IsWithinDist(self, a, (u8 *)q + 0x5c, c)) {
                    return FALSE;
                }
            }
        }
        n = NpcRegistry_GetSlotCount();
        for (j = 0; j < n; j++) {
            void *q = NpcRegistry_GetBySlot(j);
            if (q) {
                if (FtrActor_IsWithinDist(self, b, (u8 *)q + 0x5c, d)) {
                    return FALSE;
                }
            }
        }
        return TRUE;
    }
    return FALSE;
}

// @022087b0
extern "C" Self *FtrActor_GetParent(Self *self) {
    if (((FtrStackLink *)(PT(0x178)))->isAttached()) {
        void *p = FtrActorTable_GetInstance();
        return FtrActorTable_get(p, ((FtrStackLink *)(PT(0x178)))->getParentIndex());
    }
    return 0;
}

// @022087a4
extern "C" s32 FtrActor_GetFtrIndex(Self *self) {
    return S32(0x280);
}

// @0220878c
BOOL FtrActor::changeAct(u32 a, u8 v) {
    unk_778 = v;
    unk_779 = 0;
    return 1;
}

// @02208788
u8 FtrActor::getActSwitchState(u32 a) {
    return 0;
}

// @0220875c
extern "C" BOOL FtrActor_RequestToggle(Self *self) {
    if (B8(0x779) == 0) {
        ((FtrSwitch *)(PT(0x73c)))->toggle(1);
        return TRUE;
    }
    return FALSE;
}

// @02208750
extern "C" u8 FtrActor_GetLayer(Self *self) {
    return B8(0x284);
}

// @0220865c
extern "C" s32 FtrActor_CalcWorldMtx(Self *self, s32 a, s32 b) {
    if (((FtrStackLink *)(PT(0x178)))->isAttached()) {
        void *p = FtrActorTable_GetInstance();
        Self *q = FtrActorTable_get(p, ((FtrStackLink *)(PT(0x178)))->getParentIndex());
        s32 r4, r6;
        if (a != 0 || b != 0) {
            FtrActor_CalcWorldMtx(q, a, b);
        } else {
            data_021f47e0 = *(Unk_ov004_02208284_M *)((u8 *)q + 0x250);
        }
        r6 = ((FtrStackLink *)(PT(0x178)))->getRelPos()->z;
        r4 = ((FtrStackLink *)(PT(0x178)))->getRelPos()->y;
        s32 x = ((FtrStackLink *)(PT(0x178)))->getRelPos()->x;
        func_020e8528(&data_021f47e0, x, r4, r6);
        func_020e8404(&data_021f47e0, ((FtrStackLink *)(PT(0x178)))->getRelAngle());
    } else {
        Unk_ov004_02208284_V3 v;
        s32 ang;
        v.x = S32(0x5c);
        v.y = S32(0x60);
        v.z = S32(0x64);
        if (a != 0) {
            VEC_Add(&v, (void *)a, &v);
        }
        ang = (s16)(S16(0x8e) + b);
        func_020e8388(&data_021f47e0, v.x, v.y, v.z);
        func_020e8404(&data_021f47e0, ang);
        func_020e8528(&data_021f47e0, S32(0x140), S32(0x144), S32(0x148));
    }
}

// @02208554
extern "C" void FtrActor_UpdateMtx(Self *self) {
    if (((FtrActor *)(self))->isPreview()) {
        func_020e8388(&data_021f47e0, S32(0x5c), S32(0x60), S32(0x64));
        func_020e8434(&data_021f47e0, sFtrPreviewPitch);
        func_020e8404(&data_021f47e0, (s16)(S16(0x8e) + sFtrPreviewYaw));
        if (S32(0x780) == 1) {
            func_020e8528(&data_021f47e0, func_01ffcb0c(S32(0x14c), -0x1000), 0, 0);
        }
        FtrActor_GetFtrIndex(self);
        s32 y = FtrInfo_GetDmaUnk06() * 100 - 0x258;
        func_020e8528(&data_021f47e0, 0, y, 0);
        *(Unk_ov004_02208284_M *)PT(0x598) = data_021f47e0;
    } else {
        FtrActor_CalcWorldMtx(self, 0, 0);
        *(Unk_ov004_02208284_M *)PT(0x250) = data_021f47e0;
        if (S32(0x780) == 1) {
            func_020e8528(&data_021f47e0, func_01ffcb0c(0x1000 - S32(0x14c), 0x1000), 0, 0);
        }
        *(Unk_ov004_02208284_M *)PT(0x598) = data_021f47e0;
    }
}

// data
s16 sFtrPreviewPitch;

// @02208470
extern "C" void FtrActor_GetBoxSize(Self *self, Unk_ov004_02208284_V3 *out) {
    static FxVec3 vs[3] = {FxVec3(0x2000, 0x2000, 0x2000),
                                         FxVec3(0x4000, 0x2000, 0x2000),
                                         FxVec3(0x4000, 0x2000, 0x4000)};
    volatile Unk_ov004_02208284_V3 r;
    Scene_GetCurrent();
    {
        FxVec3 *q = &vs[S32(0x780)];
        r.x = q->x;
        r.y = q->y;
        r.z = q->z;
    }
    if (S32(0x78c) == 0) {
        r.y = 0x200;
    } else if (FtrMgr_IsSaleMode() != 0) {
        r.y = S32(0x78c);
    } else {
        r.y = S32(0x78c) >> 1;
    }
    out->x = r.x;
    out->y = r.y;
    out->z = r.z;
}

// @0220838c
extern "C" void FtrActor_InitCollider(Self *self) {
    Unk_ov004_02208284_V3 a;
    s32 b[3];
    Unk_ov004_02208284_V3 c;
    if (!((FtrActor *)(self))->isPreview()) {
        u32 r6;
        s32 k;
        FtrActor_GetBoxSize(self, &a);
        {
            s32 t = S32(0x158);
            b[0] = t;
            b[1] = t;
            b[2] = t;
        }
        FtrActor_GetCenter(self, &c);
        if (B8(0x788) == 0) {
            void *r4;
            ((FtrCollider *)(PT(0x628)))->setOwner(self);
            r4 = FtrActorTable_GetInstance();
            FtrActorTable_get(r4, ((FtrStackLink *)(PT(0x178)))->getParentIndex());
            BoxCollider_Register(PT(0x628), a.x, a.z, 0x4000, &c, S16(0x8e), b);
        }
        r6 = (u8)FtrActorTable_indexOf(FtrActorTable_GetInstance(), self);
        a.x = func_01ffcb0c(a.x, 0xc00);
        a.z = func_01ffcb0c(a.z, 0xc00);
        if (Scene_InUnk6To8() != 0) {
            k = 0xf;
        } else {
            k = 8;
        }
        TouchPicker_addBox(Scene_GetTouchPicker(), PT(0x288), &c, a.x, a.z, a.y, S16(0x8e), k, r6);
    }
}

// @02208358
extern "C" void FtrActor_ReleaseCollider(Self *self) {
    if (!((FtrActor *)(self))->isPreview()) {
        if (B8(0x788) == 0) {
            BoxCollider_Unregister(PT(0x628));
            ((FtrCollider *)(PT(0x628)))->clearOwner();
        }
    }
}

// @02208284
extern "C" void FtrActor_UpdateBox(Self *self) {
    Unk_ov004_02208284_V3 a;
    s32 b[3];
    Unk_ov004_02208284_V3 c;
    if (!((FtrActor *)(self))->isPreview()) {
        s32 r4;
        s32 t;
        FtrActor_GetBoxSize(self, &a);
        t = S32(0x158);
        b[0] = t;
        b[1] = t;
        b[2] = t;
        FtrActor_GetCenter(self, &c);
        r4 = 0;
        if (B8(0x788) == 0) {
            if (B8(0x6c0) != 0) {
                r4 = BoxColliderShape_updateTransform(PT(0x628), &c, S16(0x8e), b);
            } else {
                r4 = 1;
            }
        }
        a.x = func_01ffcb0c(a.x, 0xc00);
        a.z = func_01ffcb0c(a.z, 0xc00);
        if (r4 != 0) {
            u32 r6 = (u8)FtrActorTable_indexOf(FtrActorTable_GetInstance(), self);
            s32 k;
            if (Scene_InUnk6To8() != 0) {
                k = 0xf;
            } else {
                k = 8;
            }
            TouchPicker_addBox(Scene_GetTouchPicker(), PT(0x288), &c, a.x, a.z, a.y, S16(0x8e), k, r6);
        } else {
            TouchPicker_pushBox(Scene_GetTouchPicker(), PT(0x288));
        }
    }
}

// @022081b4
extern "C" void FtrActor_UpdateTopItemBoxes(Self *self) {
    if (B8(0x284) == 0 && S32(0x784) == 1) {
        Unk_ov004_02207854_List l;
        Unk_ov004_02208284_V3 v;
        void *grid;
        u32 i;
        _ZN11FtrTileListC1Ev(&l);
        ((Unk_ov004_022077a4 *)(self))->getTiles(&l, 0, 0);
        grid = gSceneBlockMap;
        for (i = 0; i < _ZN11FtrTileList8getCountEv(&l); i++) {
            s32 x = _ZN11FtrTileList3getEi(&l, i)->x;
            s32 y = _ZN11FtrTileList3getEi(&l, i)->y;
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 *c = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), 1);
            if (c) {
                if (Item_IsNormalItem(c)) {
                    FieldPos_FromUnitCenter(&v, x, y);
                    v.y = FtrMgr_GetSurfaceHeight(x, y);
                    TouchPicker_addCylinder(Scene_GetTouchPicker(), (u8 *)self + 0x1cc + i * 0x20, &v, 0xccd, 0x100, 10, 0xff);
                }
            }
        }
        _ZN11FtrTileList7releaseEv(&l);
    }
}

// @02208198
extern "C" void FtrActor_SetInitialAct(Self *self) {
    ((FtrActor *)(self))->setAct(sFtrInitialActByMode[S32(0x768)]);
}

// @02207ef0
void Unk_ov004_022077a4::setupFromSpawnArg() {
    if (unk_285 == 0) {
        struct {
            volatile u16 tmp;
            u16 pad;
            Unk_ov004_02207ef0_Bits bits;
            u32 pad2;
        } f;
        f.bits = *(Unk_ov004_02207ef0_Bits *)&unk_04[4];
        Unk_ov004_022077a4_Vec3 p1, p2, r;
        volatile Unk_ov004_022077a4_Vec3 q;
        if (!((FtrActor *)this)->isPreview()) {
            FieldPos_FromBlockUnitCenter(unk_5c, 0, 0, f.bits.lo, f.bits.mid);
            unk_5c[1] = FtrMgr_GetSurfaceHeightAtPos(unk_5c);
            unk_14c = 0x1000;
            unk_150 = 0x1000;
            unk_154 = 0x1000;
            unk_158 = 0x1000;
        } else {
            p1 = *(Unk_ov004_022077a4_Vec3 *)gCameraEye;
            p2 = *(Unk_ov004_022077a4_Vec3 *)gCameraLookAt;
            func_020e9960(&r, &p2, &p1);
            func_020e94f8(&r);
            s32 qz = func_01ffcb0c(r.z, 0x4000);
            s32 qy = func_01ffcb0c(r.y, 0x4000);
            s32 qx = func_01ffcb0c(r.x, 0x4000);
            q.x = qx;
            q.y = qy;
            q.z = qz;
            unk_5c[0] = p1.x + qx;
            unk_5c[1] = p1.y + q.y;
            unk_5c[2] = p1.z + q.z;
            unk_14c = 0x400;
            unk_150 = 0x400;
            unk_154 = 0x400;
            unk_158 = 0x1000;
            sFtrPreviewPitch = func_020e7b98(r.z, r.y) - 0xb000;
            sFtrPreviewYaw = func_020e7b98(r.x, r.z) + 0x8000;
        }
        unk_8e = f.bits.dir << 14;
        unk_280 = f.bits.id;
        if (unk_280 >= 0x6e9) {
            unk_280 = 0x6e8;
        }
        f.tmp = Item_MakeFurniture(unk_280, 0);
        unk_284 = f.bits.flag;
        if (!((FtrActor *)this)->isPreview() && unk_284 == 0) {
            unk_5c[1] = 0;
            if (Scene_GetCurrent() == 10) {
                unk_5c[1] = FtrMgr_GetSurfaceHeightAtPos(unk_5c);
            }
        }
        unk_77c = FtrInfo_GetDmaUnk02(unk_280);
        unk_78c = FtrInfo_GetDmaUnk03Fx(unk_280);
        unk_780 = FtrInfo_GetUnk05(unk_280);
        unk_770 = FtrInfo_GetDmaUnk07(unk_280);
        unk_774 = FtrInfo_GetDmaUnk08(unk_280);
        unk_788 = FtrInfo_TestIndoorFlag2(unk_280);
        unk_789 = FtrInfo_TestIndoorFlag3(unk_280);
        unk_784 = FtrInfo_GetDmaUnk04(unk_280);
        unk_790 = FtrInfo_GetIndoorFlagPair(unk_280);
        if (!((FtrActor *)this)->isPreview()) {
            if (unk_780 == 2) {
                unk_5c[0] += 0x1000;
                unk_5c[2] += 0x1000;
            }
            if (unk_284 == 1) {
                ((FtrStackLink *)(unk_178))->attachAt(f.bits.lo, f.bits.mid, unk_8e);
            }
        }
        FtrActor_UpdateMtx((Self *)this);
        ((FtrSwitch *)(unk_73c))->loadFromMap((Unk_ov004_02205c80_Obj *)this);
        writeTiles(1, 0, 0, 0);
        FtrActor_SetInitialAct((Self *)this);
        FtrActor_InitCollider((Self *)this);
        unk_285 = 1;
    }
}

// @02207e48
void Unk_ov004_022077a4::setupModel() {
    void *p = unk_590;
    s32 a = func_02056fcc(p, (s32)"kh_j");
    s32 b = func_02056fcc(p, (s32)"km_j");
    ((FtrClockHands *)(unk_73e))->set((s8)a, (s8)b);
    Model_setInitCallback(unk_534, (s32)FtrActor_SetModelCallbacks, this);
    ((FtrVisNodes *)(unk_760))->init((void *)unk_590, 1);
    s32 t = (s32)((FtrModelRes *)(unk_6c8))->getModel();
    NNS_G3dBindMdlTex(t, ((FtrModelRes *)(unk_6c8))->getTexture());
    t = (s32)((FtrModelRes *)(unk_6c8))->getModel();
    NNS_G3dBindMdlPltt(t, ((FtrModelRes *)(unk_6c8))->getTexture());
    applyPolygonId();
}

// @02207e14
void Unk_ov004_022077a4::applyPolygonId() {
    s32 r = FtrActorTable_indexOf(FtrActorTable_GetInstance(), this);
    if (r != -1) {
        Model_setPolygonId(unk_534, sFtrPolygonIds[r]);
    }
}

// data
const u32 sFtrInitialActByMode[3] = {1, 0, 8};
// data
const u8 sFtrPolygonIds[0x1c] = {0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 0x11, 0x12, 0x13,
                                      0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c};

// @02207c40
void Unk_ov004_022077a4::getTiles(Unk_ov004_02207854_List *l, void *x, s32 y) {
    Unk_ov004_022077a4_Vec3 c;
    Unk_ov004_022077a4_Vec3 d;
    Unk_ov004_022077a4_Vec3 e;
    s32 ox, oy;
    c.x = unk_5c[0];
    c.y = unk_5c[1];
    c.z = unk_5c[2];
    if (x != 0) {
        VEC_Add(&c, x, &c);
    }
    static FxVec3 arr[2] = {FxVec3(0, 0, 0), FxVec3(0x2000, 0, 0)};
    d.x = c.x;
    d.y = c.y;
    d.z = c.z;
    switch (unk_780) {
    case 0:
        if (x != 0 || y != 0) {
            FtrActor_CalcWorldMtx((Self *)this, (s32)x, y);
        } else {
            data_021f47e0 = unk_250;
        }
        {
            static FxVec3 s(0, 0, 0);
            MTX_MultVec43(&s, &data_021f47e0, &d);
        }
        FieldPos_ToUnit(&ox, &oy, &d);
        _ZN11FtrTileList3addEjj(l, ox, oy);
        break;
    case 1: {
        if (x != 0 || y != 0) {
            FtrActor_CalcWorldMtx((Self *)this, (s32)x, y);
        } else {
            data_021f47e0 = unk_250;
        }
        s32 i;
        for (i = 0; i < 2; i++) {
            e.x = arr[i].x;
            e.y = arr[i].y;
            e.z = arr[i].z;
            MTX_MultVec43(&e, &data_021f47e0, &d);
            FieldPos_ToUnit(&ox, &oy, &d);
            _ZN11FtrTileList3addEjj(l, ox, oy);
        }
        break;
    }
    default:
        d.x = c.x - 0x1000;
        d.z = c.z - 0x1000;
        FieldPos_ToUnit(&ox, &oy, &d);
        _ZN11FtrTileList3addEjj(l, ox, oy);
        _ZN11FtrTileList3addEjj(l, ox + 1, oy);
        _ZN11FtrTileList3addEjj(l, ox, oy + 1);
        _ZN11FtrTileList3addEjj(l, ox + 1, oy + 1);
        break;
    }
}

// @02207c04
extern "C" u32 FtrActor_AngleToDir(s32 v) {
    u32 x = (u16)v;
    if (x >= 0xe000 || x < 0x2000) {
        return 0;
    }
    if (x < 0x6000) {
        return 1;
    }
    if (x < 0xa000) {
        return 2;
    }
    return 3;
}

// @02207bdc
extern "C" void FtrActor_MakeItemForAngle(u16 *out, Unk_ov004_022077a4 *obj, s32 ang) {
    *out = Item_MakeFurniture(obj->unk_280, FtrActor_AngleToDir(ang));
}

// @02207ac4
void Unk_ov004_022077a4::clearTiles(s32 a, s32 b) {
    if (!((FtrActor *)this)->isPreview()) {
        Unk_ov004_02207854_List l;
        void *grid;
        u32 i;
        _ZN11FtrTileListC1Ev(&l);
        getTiles(&l, 0, 0);
        grid = (void *)gSceneBlockMap;
        {
            volatile u16 tmp[1];
            tmp[0] = 0xfff1;
            ((void (*)(u32))FtrMgr_IsSaleMode)(Scene_GetCurrent());
            i = 0;
            for (; i < _ZN11FtrTileList8getCountEv(&l); i++) {
                s32 x = _ZN11FtrTileList3getEi(&l, i)->x;
                s32 y = _ZN11FtrTileList3getEi(&l, i)->y;
                s32 hx = x >> 4;
                s32 hy = y >> 4;
                void *p = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), unk_284);
                if (p != 0 && Item_IsFurniture((u16 *)p)) {
                    s32 t = Scene_GetCurrent();
                    FtrSync_RemoveFurniture(t, x, y, unk_284, ((FtrSwitch *)(unk_73c))->isOn(), p, b, a);
                }
                FtrActorGrid_clearCell(FtrActorGrid_GetInstance(), this, x, y, unk_284);
                if (b != 0 && unk_284 == 0) {
                    s32 c = FtrActorGrid_getIndex(FtrActorGrid_GetInstance(), x, y, 1);
                    if (c != -1) {
                        FtrActorGrid_clearCell(FtrActorGrid_GetInstance(), this, x, y, 1);
                    }
                }
            }
        }
        _ZN11FtrTileList7releaseEv(&l);
    }
}

// @022078d8
void Unk_ov004_022077a4::writeTiles(s32 unused, void *x, s32 y, u8 flag) {
    if (!((FtrActor *)this)->isPreview()) {
        Unk_ov004_02207854_List l;
        u16 a, b, c;
        u32 r7;
        s32 v18;
        u32 i;
        _ZN11FtrTileListC1Ev(&l);
        getTiles(&l, x, y);
        a = 0xfff1;
        if (unk_284 == 1) {
            Unk_ov004_022077a4_Vec3 v1, v2;
            static FxVec3 s0(0, 0, 0);
            static FxVec3 s1(0, 0, 0x1000);
            MTX_MultVec43(&s0, &data_021f47e0, &v1);
            MTX_MultVec43(&s1, &data_021f47e0, &v2);
            s32 ang = func_020e7b98(v2.x - v1.x, v2.z - v1.z);
            FtrActor_MakeItemForAngle(&b, this, ang);
            a = b;
        } else {
            FtrActor_MakeItemForAngle(&c, this, (s16)(unk_8e + y));
            a = c;
        }
        ((void (*)(u32))FtrMgr_IsSaleMode)(Scene_GetCurrent());
        if (unk_285 == 0) {
            r7 = 0;
        } else {
            r7 = ((u32 (*)(void *))FtrActor_PredIsGyroid)(this);
        }
        v18 = vfunc_78();
        for (i = 0; i < _ZN11FtrTileList8getCountEv(&l); i++) {
            if (i == 0) {
                u32 s = ((FtrSwitch *)(unk_73c))->isOn();
                s32 t = Scene_GetCurrent();
                Unk_ov004_02206520_Ent *p1 = _ZN11FtrTileList3getEi(&l, i);
                Unk_ov004_02206520_Ent *p2 = _ZN11FtrTileList3getEi(&l, i);
                FtrSync_PlaceFurniture(t, p1->x, p2->y, unk_284, s, r7, v18, &a, 1);
            }
            void *o = FtrActorGrid_GetInstance();
            Unk_ov004_02206520_Ent *p3 = _ZN11FtrTileList3getEi(&l, i);
            Unk_ov004_02206520_Ent *p4 = _ZN11FtrTileList3getEi(&l, i);
            FtrActorGrid_setCell(o, this, p3->x, p4->y, unk_284);
        }
        if (flag != 0) {
            u32 r = ((FtrActor *)this)->makeCharId((s32)x, y);
            if (r != Character_getCharId(this)) {
                Character_setCharId(this, r);
            }
        }
        _ZN11FtrTileList7releaseEv(&l);
    }
}

// @02207854
void Unk_ov004_022077a4::moveTiles(void *a, s32 b) {
    Unk_ov004_02207854_List l;
    Unk_ov004_02207854_Set set;
    u32 i;
    _ZN11FtrTileListC1Ev(&l);
    getTiles(&l, 0, 0);
    _ZN13FtrStackedSetC1EP11FtrTileListi(&set, &l, unk_284);
    clearTiles(1, 1);
    writeTiles(1, a, b, 1);
    for (i = 0; i < _ZN13FtrStackedSet8getCountEv(&set); i++) {
        Unk_ov004_022077a4 *o = _ZN13FtrStackedSet3getEj(&set, i);
        if (o != 0) {
            o->writeTiles(1, a, b, 1);
        }
    }
    _ZN13FtrStackedSetC1Ev(&set);
    _ZN11FtrTileList7releaseEv(&l);
}

// @0220784c
extern "C" s32 FtrActor_TestSceneUnk(s32 a) {
    return SceneId_IsHouseRoom(a);
}

// @02207838
extern "C" s32 FtrActor_TestCurSceneUnk() {
    return FtrActor_TestSceneUnk(Scene_GetCurrent());
}

// @022077a4
void Unk_ov004_022077a4::initLamp() {
    if (FtrActor_PredIsLightSource()) {
        void *v = unk_590;
        u32 t = ((FtrSwitch *)(unk_73c))->isOn();
        ((FtrGlowMat *)(unk_744))->bindMaterial((G3dResAccess *)v, (s32)"lp_m", t);
        if (FtrActor_TestCurSceneUnk()) {
            s32 r = FtrMgr_CountSwitchedOn((void *)FtrActor_IsLightSource);
            if (((FtrSwitch *)(unk_73c))->isOn() != 0 && r == 1) {
                if (unk_768 != 0) {
                    FtrActor_TurnOnRoomLight(unk_790);
                    FtrSync_SetRoomLight(Scene_GetCurrent(), 1);
                } else {
                    LightSwitch_SetOn(0, 1, 0);
                }
            }
        }
    }
}

// @02207704
void FtrActor::updateLamp() {
    if (FtrActor_PredIsLightSource()) {
        if (FtrActor_TestCurSceneUnk()) {
            u32 b = ((FtrSwitch *)(unk_73c))->isOn();
            u32 f = unk_790 == 1 ? 1 : 0;
            if (((FtrGlowMat *)(unk_744))->setLit(b, 1, f)) {
                s32 m = FtrMgr_CountSwitchedOn((void *)FtrActor_IsLightSource);
                if (((FtrSwitch *)(unk_73c))->isOn()) {
                    if (m == 1) {
                        FtrActor_TurnOnRoomLight(unk_790);
                        FtrSync_SetRoomLight(Scene_GetCurrent(), 1);
                    }
                } else if (m == 0) {
                    LightSwitch_SetOff(0, 8);
                    FtrSync_SetRoomLight(Scene_GetCurrent(), 0);
                }
            }
        }
    }
    ((Unk_ov004_02205b14 *)(unk_744))->updateEmission();
}

// @022076b0
void FtrActor::releaseRoomLight() {
    if (FtrActor_PredIsLightSource()) {
        if (FtrActor_TestCurSceneUnk()) {
            if (((FtrSwitch *)(unk_73c))->isOn()) {
                if (FtrMgr_CountSwitchedOn((void *)FtrActor_IsLightSource) == 1) {
                    LightSwitch_SetOff(0, 1);
                    if (isRemoving()) {
                        FtrSync_SetRoomLight(Scene_GetCurrent(), 0);
                    }
                }
            }
        }
    }
}

// @02207650
extern "C" s32 FtrActor_GetDragSe(void) {
    if (Unk_ov004_02207650_IsOne(gFieldSceneKind)) {
        u16 *p = RoomShell_GetCarpet();
        if (Unk_ov004_02207650_InRange(p)) {
            s32 q = GroundAttr_GetDragSe(ItemInfo_GetIndoorUnk1(p));
            if (q != 0xffff) {
                return q;
            }
        }
        return 0x4c1;
    }
    return 0xffff;
}

// @022075b0
BOOL FtrActor::hasItemOnTop() {
    Unk_ov004_02207854_List c;
    _ZN11FtrTileListC1Ev(&c);
    ((Unk_ov004_022077a4 *)(this))->getTiles(&c, 0, 0);
    void *grid = gSceneBlockMap;
    if (unk_284 == 0 && unk_784 == 1) {
        u32 i;
        for (i = 0; i < _ZN11FtrTileList8getCountEv(&c); i++) {
            s32 y = _ZN11FtrTileList3getEi(&c, i)->y;
            s32 x = _ZN11FtrTileList3getEi(&c, i)->x;
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 *cell = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), 1);
            if (cell && *cell != 0xfff1) {
                _ZN11FtrTileList7releaseEv(&c);
                return TRUE;
            }
        }
    }
    _ZN11FtrTileList7releaseEv(&c);
    return FALSE;
}

// @022075a4
BOOL FtrActor::canRotateBy(s32 a) {
    return canMoveTo(0, a);
}

// @02207598
BOOL FtrActor::canMoveBy(s32 a) {
    return canMoveTo(a, 0);
}

// @022072b4
BOOL FtrActor::canMoveTo(s32 a, s32 b) {
    s32 x0, y0, x1, y1;
    Unk_0203e4f0_Vec v1;
    Unk_0203e4f0_Vec v2;
    Unk_ov004_02207854_List c1;
    Unk_ov004_02207854_List c2;
    FtrActor *obj;
    s32 y;
    s32 y2;
    void *grid;
    u16 *cell1;
    s32 x2;
    s32 x;
    if (unk_779 != 0) {
        return FALSE;
    }
    if (!Scene_InHouseRoom()) {
        return FALSE;
    }
    if (!FtrActor_TestPlayerUnk()) {
        return FALSE;
    }
    grid = gSceneBlockMap;
    u8 *cam = (u8 *)func_02095204(4);
    if (unk_284 == 1) {
        return FALSE;
    }
    if (grid == 0 || cam == 0) {
        return FALSE;
    }
    if (!((FtrTopItems *)(unk_188))->canPickUp((Unk_ov004_02205c80_Obj *)this)) {
        return FALSE;
    }
    Unk_0203e4f0_Vec *pp = (Unk_0203e4f0_Vec *)(cam + 0x5c);
    v1.x = pp->x;
    v1.y = pp->y;
    v1.z = pp->z;
    FieldPos_ToUnit(&x0, &y0, &v1);
    v2.x = v1.x;
    v2.y = v1.y;
    v2.z = v1.z;
    if (a) {
        VEC_Add(&v2, (void *)a, &v2);
    }
    FieldPos_ToUnit(&x1, &y1, &v2);
    obj = (FtrActor *)FtrActorGrid_getActor(FtrActorGrid_GetInstance(), x1, y1, 0);
    ((Unk_ov004_022077a4 *)(this))->clearTiles(0, 0);
    _ZN11FtrTileListC1Ev(&c1);
    ((Unk_ov004_022077a4 *)(this))->getTiles(&c1, (void *)a, b);
    _ZN11FtrTileListC1Ev(&c2);
    ((Unk_ov004_022077a4 *)(this))->getTiles(&c2, (void *)a, b >> 1);
    u32 i;
    for (i = 0; i < _ZN11FtrTileList8getCountEv(&c1); i++) {
        x = _ZN11FtrTileList3getEi(&c1, i)->x;
        y = _ZN11FtrTileList3getEi(&c1, i)->y;
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        cell1 = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (a == 0 && x0 == x && y0 == y) UNK_OV004_022072B4_FAIL()
        if (a == 0) {
            y2 = _ZN11FtrTileList3getEi(&c2, i)->y;
            x2 = _ZN11FtrTileList3getEi(&c2, i)->x;
            s32 hx2 = x2 >> 4;
            s32 hy2 = y2 >> 4;
            u16 *cell2 = BlockMap_GetItemPtr(grid, hx2, hy2, x2 - (hx2 << 4), y2 - (hy2 << 4), 0);
            if (cell2 && *cell2 != 0xfff1) UNK_OV004_022072B4_FAIL()
        }
        if (cell1 && *cell1 != 0xfff1) UNK_OV004_022072B4_FAIL()
        if (!Ground_CanPlaceItem(x, y)) UNK_OV004_022072B4_FAIL()
        if (FtrActorGrid_getActor(FtrActorGrid_GetInstance(), x, y, 1) && ((BOOL (*)(void))_ZN8FtrActor9isNotIdleEv)()) UNK_OV004_022072B4_FAIL()
        if (b == 0) {
            if ((obj && obj->unk_788 == 0 && obj != this) || Ground_GetExitAtPos(&v2) != -1 || FtrMgr_GetSurfaceHeightAtPos(&v2)) UNK_OV004_022072B4_FAIL()
        }
    }
    ((Unk_ov004_022077a4 *)(this))->writeTiles(0, 0, 0, 0);
    _ZN11FtrTileList7releaseEv(&c2);
    _ZN11FtrTileList7releaseEv(&c1);
    return TRUE;
}

// @022071cc
u16 FtrActor::makeCharId(s32 a, s32 b) {
    Unk_ov004_022071cc_Pkt p;
    s32 x;
    s32 y;
    if (Scene_InUnk6To8() != 0 || isPreview()) {
        (*(u16 *)&p) = ((*(u16 *)&p) & 0xfffffe00) | ((u16)FtrActorTable_indexOf(FtrActorTable_GetInstance(), this) & 0x1ff);
        (*(u16 *)&p) = ((*(u16 *)&p) & 0xffff01ff) | ((Scene_GetCurrent() & 0x7f) << 9);
        return (*(u16 *)&p);
    } else {
        if (findOwnTile(&x, &y, a, b)) {
            (((u16 *)&p)[1]) = ((((u16 *)&p)[1]) & ~0xf) | ((u16)(x & 0xf) & 0xf);
            (((u16 *)&p)[1]) = ((((u16 *)&p)[1]) & ~0xf0) | (((u16)(y & 0xf) & 0xf) << 4);
            (((u16 *)&p)[1]) = ((((u16 *)&p)[1]) & 0xfffffeff) | (((u16)(unk_284 & 1) & 1) << 8);
            (((u16 *)&p)[1]) = ((((u16 *)&p)[1]) & 0xffff81ff) | ((Scene_GetCurrent() & 0x3f) << 9);
            return (((u16 *)&p)[1]);
        }
        return 0;
    }
}

// @0220711c
BOOL FtrActor::findOwnTile(s32 *ox, s32 *oy, s32 a, s32 b) {
    Unk_ov004_02207854_List c;
    _ZN11FtrTileListC1Ev(&c);
    ((Unk_ov004_022077a4 *)(this))->getTiles(&c, (void *)a, *(s16 *)&b);
    void *grid = gSceneBlockMap;
    u32 i;
    for (i = 0; i < _ZN11FtrTileList8getCountEv(&c); i++) {
        s32 y, x, hx, hy;
        u8 layer;
        layer = unk_284;
        y = _ZN11FtrTileList3getEi(&c, i)->y;
        x = _ZN11FtrTileList3getEi(&c, i)->x;
        hx = x >> 4;
        hy = y >> 4;
        u16 *cell = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
        if (cell) {
            if (Item_IsFurniture(cell)) {
                *ox = _ZN11FtrTileList3getEi(&c, i)->x;
                *oy = _ZN11FtrTileList3getEi(&c, i)->y;
                _ZN11FtrTileList7releaseEv(&c);
                return TRUE;
            }
        }
    }
    _ZN11FtrTileList7releaseEv(&c);
    return FALSE;
}

// @02207100
extern "C" void FtrActor_SpawnActorC0(void *a, u32 x) {
    u16 s[3];
    s[0] = 0;
    s[1] = x;
    s[2] = 0;
    HouseRoach_SpawnFromFurniture(a, s);
}

// @02207038
void FtrActor::spawnActorC0AtTile(s32 a) {
    void *cam = func_020947f0(4);
    if (cam) {
        Unk_ov004_02207854_List c;
        Unk_0203e4f0_Vec v1;
        Unk_0203e4f0_Vec v2;
        _ZN11FtrTileListC1Ev(&c);
        ((Unk_ov004_022077a4 *)(this))->getTiles(&c, 0, 0);
        s32 hi = 0;
        s32 hiIdx = ~hi;
        s32 loIdx = hiIdx;
        s32 lo = data_020c8cbc;
        u32 i;
        for (i = 0; i < _ZN11FtrTileList8getCountEv(&c); i++) {
            Unk_ov004_02206520_Ent *e1 = _ZN11FtrTileList3getEi(&c, i);
            Unk_ov004_02206520_Ent *e2 = _ZN11FtrTileList3getEi(&c, i);
            FieldPos_FromUnitCenter(&v1, e1->x, e2->y);
            s32 d = func_020e9650(cam, &v1);
            if (d > hi) {
                hiIdx = i;
                hi = d;
            }
            if (d < lo) {
                loIdx = i;
                lo = d;
            }
        }
        if (a == 0) {
            hiIdx = loIdx;
        }
        if (hiIdx != -1) {
            Unk_ov004_02206520_Ent *p = _ZN11FtrTileList3getEi(&c, hiIdx);
            Unk_ov004_02206520_Ent *q = _ZN11FtrTileList3getEi(&c, hiIdx);
            FieldPos_FromUnitCenter(&v2, p->x, q->y);
            FtrActor_SpawnActorC0(&v2, (u32)Math_AngleXZ(&v2, cam));
        }
        _ZN11FtrTileList7releaseEv(&c);
    }
}

// @02207004
void FtrActor::spawnActorC0AtCenter() {
    void *cam = func_020947f0(4);
    if (cam) {
        Unk_0203e4f0_Vec v;
        FtrActor_GetCenter(this, (Vec3 *)&v);
        FtrActor_SpawnActorC0(&v, (u32)Math_AngleXZ(&v, cam));
    }
}

// @02206fe0
void FtrActor::spawnEffectAt(Unk_0203e4f0_Vec *v) {
    Unk_0203e4f0_Vec t;
    t.x = v->x;
    t.y = v->y;
    t.z = v->z;
    Effect_PlayById2(0x3d, &t, 0, 0);
}

// @02206fa0
void FtrActor::spawnEffectAtCorner(s32 a) {
    s32 p[3];
    s32 q[3];
    s32 r[3];
    FtrActor_GetCorner(this, p, a);
    FtrActor_GetCenter(this, (Vec3 *)q);
    s32 y = unk_5c[1];
    r[0] = (p[0] + q[0]) >> 1;
    r[1] = y;
    r[2] = (p[2] + q[2]) >> 1;
    spawnEffectAt((Unk_0203e4f0_Vec *)r);
}

// @02206f8c
BOOL FtrActor::isPreview() {
    if (unk_768 == 2) {
        return TRUE;
    }
    return FALSE;
}

// @02206f84
extern "C" s32 FtrActor_PredIsLightSource(void) {
    return ((s32 (*)(void))FtrActor_IsLightSource)();
}

// @02206f7c
extern "C" s32 FtrActor_PredIsStereo(void) {
    return ((s32 (*)(void))FtrActor_IsStereo)();
}

// @02206f74
extern "C" s32 FtrActor_PredIsSeatOrBed(void) {
    return _ZN8FtrActor11isSeatOrBedEv();
}

// @02206f6c
extern "C" s32 FtrActor_PredIsGyroid(void) {
    return _ZN8FtrActor8isGyroidEv();
}

// @02206f3c
extern "C" void FtrActor_GetItemId(u16 *out, FtrActor *o) {
    if (o->unk_77c == 0x1c) {
        *out = 0xfff1;
    } else {
        *out = Item_MakeFurniture(FtrActor_GetFtrIndex(o), 0);
    }
}

// @02206f38
BOOL FtrActor::vfunc_60() {
}

// @02206f34
BOOL FtrActor::vfunc_68() {
}

// @02206ef8
void FtrActor::vfunc_6c(s32 a, void *b) {
    if (unk_740 != 0) {
        if (unk_73e == a) {
            func_020b1e74(b);
        } else if (unk_73f == a) {
            func_020b1ddc(b);
        }
    }
}

// @02206ec8
void FtrActor::vfunc_64(s32 a, Unk_ov004_02206ec8_Ctx *b) {
    if (((FtrVisNodes *)(unk_760))->hasNode(a)) {
        u32 v = ((FtrVisNodes *)(unk_760))->isVisible();
        *b->unk_b8 = v;
    }
}

// @02206eb0
FtrModelAnim::FtrModelAnim() {
}

// @02206e78
FtrModelAnim::~FtrModelAnim() {
}

// @02206e74
u32 FtrModelAnim::getAnmObj() {
    return unk_18;
}

// @02206e38
Unk_ov004_02206e38::Unk_ov004_02206e38() : unk_70(0xfff1) {
    unk_00 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_70 = 0xfff1;
    unk_72 = 0;
}

// @02206e1c
// ---- functions ----
Unk_ov004_02206e38::~Unk_ov004_02206e38() {
}

// @02206e0c
BOOL FtrModelRes::isLoaded() {
    if (unk_0c != 0) {
        return TRUE;
    }
    return FALSE;
}

// @02206de0
char *FtrModelRes::makeArcPath(s32 id) {
    func_020639e8(sFtrArcPathBuf, "/ftr/%d/%d/%04x.arc", id >> 8, (id & 0xff) >> 4, id);
    return sFtrArcPathBuf;
}

// @02206db4
char *FtrModelRes::makeTexPath(s32 id) {
    func_020639e8(sFtrTexPathBuf, "/ftr/%d/%d/%04x.nsbtx", id >> 8, (id & 0xff) >> 4, id);
    return sFtrTexPathBuf;
}

// @02206be8
BOOL FtrModelRes::loadFiles(void *obj, s32 id) {
    u32 size0;
    u32 size1;
    char name[0x20];
    Unk_ov004_02206be8_Blk blk;
    if (unk_00 == 0) {
        unk_00 = File_LoadAlloc(makeTexPath(id), gCurrentHeap, -4, &size0);
        if (unk_72 != 0) {
            void *r7 = Heap_Alloc((void *)func_0209c348(obj), size0);
            MI_CpuCopy8(unk_00, r7, size0);
            unk_44.setTexCopy((s32)r7);
        }
    }
    if (unk_04 == 0) {
        char *p = makeArcPath(id);
        unk_04 = File_LoadAlloc(p, (void *)func_0209c348(obj), 4, &size1);
    }
    if (unk_08 == 0 && unk_04 != 0) {
        if (func_02101340(&blk, "FTR", unk_04)) {
            u8 *pb = (u8 *)NNS_G3dGetMdlSet(func_021012bc((s32)sFtrModelNamePtr));
            unk_08 = pb + *(u32 *)(pb + *(u16 *)(pb + 0xe) + 0xc);
            u32 i = 0;
            s32 z0 = 0, z1 = 0, z2 = 0, z3 = 0, z4 = 0;
            do {
                s32 h;
                func_020639e8(name, "FTR:a/bca/bca%d", i);
                h = func_021012bc((s32)name);
                if (h) {
                    unk_44.setBca((void *)func_021065f8(func_021065dc(h), z0), i);
                }
                func_020639e8(name, "FTR:a/bma/bma%d", i);
                h = func_021012bc((s32)name);
                if (h) {
                    unk_44.setBma((void *)func_02106634(func_02106618(h), z1), i);
                }
                func_020639e8(name, "FTR:a/bva/bva%d", i);
                h = func_021012bc((s32)name);
                if (h) {
                    unk_44.setBva((void *)func_021067a4(func_02106788(h), z2), i);
                }
                func_020639e8(name, "FTR:a/bta/bta%d", i);
                h = func_021012bc((s32)name);
                if (h) {
                    unk_44.setBta((void *)func_02106670(func_02106654(h), z3), i);
                }
                func_020639e8(name, "FTR:a/btp/btp%d", i);
                h = func_021012bc((s32)name);
                if (h) {
                    unk_44.setBtp((void *)func_021066ac(func_02106690(h), z4), i);
                }
                i++;
            } while (i < 2);
            func_02101310(&blk);
        }
    }
    if (unk_00 != 0 && unk_08 != 0) {
        return TRUE;
    }
    return FALSE;
}

// @02206be4
FtrAnimSet *FtrModelRes::getAnimSet() {
    return &unk_44;
}

// @02206bcc
void FtrModelRes::freeTexFile() {
    if (unk_00 != 0) {
        Mem_Free(unk_00);
        unk_00 = 0;
    }
}

// @02206b64
BOOL FtrModelRes::loadSync(void *obj, s32 a, s32 flag) {
    void *h;
    unk_72 = flag;
    if (isLoaded()) {
        return TRUE;
    }
    unk_70 = Item_MakeFurniture(a, 0);
    loadFiles(obj, a);
    h = NNS_G3dGetTex(unk_00);
    Gfx3d_LoadTexAndPltt(h, func_0209c344(obj));
    unk_0c = Gfx3d_CopyTex(h, func_0209c348(obj));
    release();
    return TRUE;
}

// @02206a44
BOOL FtrModelRes::loadAsync(void *obj, s32 a, s32 flag) {
    if (isLoaded()) {
        return TRUE;
    }
    u16 t2;
    if (Unk_ov004_02206a44_IsInvalid(&unk_70)) {
        unk_70 = Item_MakeFurniture(a, 0);
        unk_72 = flag;
    } else {
        t2 = Item_MakeFurniture(a, 0);
        if (!Unk_ov004_02206a44_Same(&t2, &unk_70)) {
            return FALSE;
        }
    }
    loadFiles(obj, a);
    if (unk_0c == 0) {
        void *p = NNS_G3dGetTex(unk_00);
        s32 x = func_0209c344(obj);
        s32 y = func_0209c348(obj);
        if (unk_10.loadTexture(p, (TexVramSlot *)x, (void *)y) == 3) {
            unk_0c = unk_10.getTexture();
            release();
            return TRUE;
        }
    }
    return FALSE;
}

// @02206a2c
void *FtrModelRes::getModel() {
    if (isLoaded()) {
        return unk_08;
    }
    return 0;
}

// @02206a14
void *FtrModelRes::getTexture() {
    if (isLoaded()) {
        return unk_0c;
    }
    return 0;
}

// @022069ec
void FtrModelRes::release() {
    unk_70 = 0xfff1;
    freeTexFile();
    unk_10.release();
    unk_72 = 0;
}

// @022069cc
FtrCollider::FtrCollider() {
    clearOwner();
}

// @022069b4
// D1 written out: the original destroys the BoxCollider part with its D1 (0x02031bd8), which an sp2 base-object destructor call would not use
extern "C" void *_ZN11FtrColliderD1Ev(void *self) {
    *(void **)self = (void *)&_ZTV11FtrCollider[2];
    _ZN11BoxColliderD1Ev(self);
    return self;
}

// @022069ac
void FtrCollider::setOwner(void *p) {
    unk_9c = p;
}

// @022069a4
void FtrCollider::clearOwner() {
    unk_9c = 0;
}

// @02206744
void FtrCollider::onEdgeContact(Unk_020d8ce4 *a, Unk_ov004_02206570_Act *b, s32 c) {
    Unk_0202f048 v0, v1, v2, mid, d1, d2;
    volatile Unk_ov004_02206744_V3 pos;
    Unk_ov004_02206744_V3 w1, w2, buf;
    s32 t18, t1c, t20, t24, len2;
    s32 r7;
    s32 r5;
    s32 px, pz;
    void *chk = func_02095204(4);
    if (b != NULL && (void *)b == chk) {
        if (unk_9c != NULL && ((FtrActor *)unk_9c)->isAct(1)) {
            Unk_ov004_02206744_V3 *pv;
            t20 = func_020e7b98(a->unk_14.x, a->unk_14.y);
            t24 = t20 + 0x8000;
            r7 = (u16)(t24 - b->unk_8e);
            pv = &b->unk_68;
            px = b->unk_68.x;
            pos.x = px;
            pos.y = pv->y;
            pz = pv->z;
            pos.z = pz;
            v0.func_0202f048(px, pz);
            v1.func_0202f048(pos.x + a->unk_14.x, pos.z + a->unk_14.y);
            v2.func_0202f048(0, 0);
            if ((u32)r7 < 0x1700 || (u32)r7 > 0xe900) {
                if (a->func_0202ece8(&v2, &v0, &v1)) {
                    r7 = FX_Sqrt(a->unk_04.func_0202ef84(&v2));
                    len2 = FX_Sqrt(a->unk_04.func_0202ef84(&a->unk_0c));
                    if (r7 >= 0x666) {
                        if (r7 <= len2 - 0x666) {
                            if (a->func_0202ebb0(&v2)) {
                                WallEdge_GetMidpoint(&mid, a);
                                t1c = mid.y + func_01ffcb0c(a->unk_14.y, c);
                                s32 x = mid.x + func_01ffcb0c(a->unk_14.x, c);
                                w1.x = x;
                                w1.y = 0;
                                w1.z = t1c;
                                w2.x = x;
                                w2.y = 0;
                                w2.z = t1c;
                                if (len2 > 0x3000) {
                                    if (r7 < 0x1000) {
                                        d1.func_0202efe4(&a->unk_0c, &a->unk_04);
                                        d1.func_0202ef40();
                                        v2.x = a->unk_04.x + func_01ffcb0c(d1.x, 0x1000);
                                        v2.y = a->unk_04.y + func_01ffcb0c(d1.y, 0x1000);
                                    } else if (r7 > 0x3000) {
                                        d2.func_0202efe4(&a->unk_0c, &a->unk_04);
                                        d2.func_0202ef40();
                                        v2.x = a->unk_04.x + func_01ffcb0c(d2.x, 0x3000);
                                        v2.y = a->unk_04.y + func_01ffcb0c(d2.y, 0x3000);
                                    }
                                    r7 = v2.y + func_01ffcb0c(a->unk_14.y, c);
                                    w2.x = v2.x + func_01ffcb0c(a->unk_14.x, c);
                                    w2.y = 0;
                                    w2.z = r7;
                                }
                                slideOwnerForWideFtr(b);
                                t18 = (s32)FtrActorTable_indexOf(FtrActorTable_GetInstance(), unk_9c);
                                r5 = (s16)(t20 - ((Unk_ov004_02206570_Act *)unk_9c)->unk_8e);
                                if (FtrActor_GetLayer((Self *)unk_9c) == 1) {
                                    void *q;
                                    FtrActor_GetCenter((Self *)unk_9c, (Vec3 *)&buf);
                                    q = FtrActorGrid_getActorAtPos(FtrActorGrid_GetInstance(), &buf, 0);
                                    if (q != NULL) {
                                        r5 = (s16)(t20 - ((Unk_ov004_02206570_Act *)q)->unk_8e - ((FtrStackLink *)((u8 *)unk_9c + 0x178))->getRelAngle());
                                    }
                                }
                                r5 = FtrActor_AngleToDir(r5);
                                FtrContactSet_setContact(FtrContactSet_GetInstance(), (void *)t18, &b->unk_68, &b->unk_5c, c, &w1, &w2, (s16)t24, r5);
                            }
                        }
                    }
                }
            }
        }
    }
}

// data
char sFtrArcPathBuf[0x28];
// data
char sFtrTexPathBuf[0x28];
// data
char sFtrModelName[] = "FTR:a/bmd/bmd0";
// data
char *sFtrModelNamePtr = sFtrModelName;

// @02206570
void FtrCollider::slideOwnerForWideFtr(Unk_ov004_02206570_Act *b) {
    Unk_ov004_02206570_Act *o;
    Unk_ov004_02206744_V3 tmp[2];
    o = (Unk_ov004_02206570_Act *)unk_9c;
    if (*(s32 *)((u8 *)o + 0x780) == 1) {
        static FxVec3 tbl0[2] = {FxVec3(0, 0, 0), FxVec3(-0x2000, 0, 0)};
        static FxVec3 tbl1[2] = {FxVec3(0, 0, 0), FxVec3(0x2000, 0, 0)};
        static FxVec3 one(0x2000, 0, 0);
        s32 r6;
        func_020e8300(&data_021f47e0, ((Unk_ov004_02206570_Act *)unk_9c)->unk_8e);
        MTX_MultVec43(&one, &data_021f47e0, &tmp[0]);
        FtrActor_LocalToWorld((Self *)unk_9c, &tmp[1], &tbl1[0]);
        r6 = func_020e96a4(&b->unk_5c, &tmp[1]);
        FtrActor_LocalToWorld((Self *)unk_9c, &tmp[1], &tbl1[1]);
        if (r6 < func_020e96a4(&b->unk_5c, &tmp[1])) {
            if (func_020e96ec((u8 *)unk_9c + 0x140, &tbl0[0])) {
                Unk_ov004_02206744_V3 *d = (Unk_ov004_02206744_V3 *)((u8 *)unk_9c + 0x140);
                FxVec3 *s = &tbl0[0];
                d->x = s->x;
                d->y = s->y;
                d->z = s->z;
                VEC_Subtract(&((Unk_ov004_02206570_Act *)unk_9c)->unk_5c, &tmp[0], &((Unk_ov004_02206570_Act *)unk_9c)->unk_5c);
            }
        } else {
            if (func_020e96ec((u8 *)unk_9c + 0x140, &tbl0[1])) {
                Unk_ov004_02206744_V3 *d = (Unk_ov004_02206744_V3 *)((u8 *)unk_9c + 0x140);
                d->x = ((u32 *)tbl0)[3];
                d->y = ((u32 *)tbl0)[4];
                d->z = ((u32 *)tbl0)[5];
                VEC_Add(&((Unk_ov004_02206570_Act *)unk_9c)->unk_5c, &tmp[0], &((Unk_ov004_02206570_Act *)unk_9c)->unk_5c);
            }
        }
    }
}

// @02206558
FtrTileList::FtrTileList() {
    unk_00 = 0;
}

// @02206554
void FtrTileList::release() {}

// @02206530
BOOL FtrTileList::add(u32 a, u32 b) {
    if (unk_00 < 4) {
        unk_04[unk_00].x = a;
        unk_04[unk_00].y = b;
        unk_00++;
        return TRUE;
    }
    return FALSE;
}

// @0220652c
u32 FtrTileList::getCount() {
    return unk_00;
}

// @02206520
Unk_ov004_02206520_Ent *FtrTileList::get(s32 i) {
    return &unk_04[i & 3];
}

// @0220650c
void Unk_ov004_0220650c::clear() {
    u32 i;
    unk_00 = 0;
    for (i = 0; i < 4; i++) {
        unk_04[i] = 0;
    }
}

// @022064b4
void FtrStackedSet::collect(FtrTileList *l, s32 flag) {
    u32 i;
    if (flag == 0) {
        for (i = 0; i < l->getCount(); i++) {
            void *mgr = FtrActorGrid_GetInstance();
            Unk_ov004_02206520_Ent *a = l->get(i);
            Unk_ov004_02206520_Ent *b = l->get(i);
            Unk_ov004_02205c80_Obj *o = FtrActorGrid_getActor(mgr, a->x, b->y, 1);
            if (o != NULL) {
                add(o);
            }
        }
    }
}

// @02206494
FtrStackedSet::FtrStackedSet(FtrTileList *l, s32 flag) {
    _ZN18Unk_ov004_0220650c5clearEv(this);
    collect(l, flag);
}

// @02206484
FtrStackedSet::FtrStackedSet() {
    _ZN18Unk_ov004_0220650c5clearEv(this);
}

// @02206480
u32 FtrStackedSet::getCount() {
    return unk_00;
}

// @02206474
Unk_ov004_02205c80_Obj *FtrStackedSet::get(u32 i) {
    return unk_04[i & 3];
}

// @02206434
BOOL FtrStackedSet::add(Unk_ov004_02205c80_Obj *o) {
    u32 i;
    u32 n;
    if (o == NULL) {
        return FALSE;
    }
    n = unk_00;
    if (n >= 4) {
        return FALSE;
    }
    for (i = 0; i < n; i++) {
        if (unk_04[i] == o) {
            return FALSE;
        }
    }
    unk_00 = unk_00 + 1;
    unk_04[n] = o;
    return TRUE;
}

// @02206418
void FtrAnimSet::clear() {
    u32 i;
    unk_28 = 0;
    for (i = 0; i < 2; i++) {
        *(void **)((u8 *)this + i * 4) = NULL;
        unk_08[i] = NULL;
        unk_18[i] = NULL;
        unk_20[i] = NULL;
    }
}

// @02206414
FtrAnimSet::~FtrAnimSet() {
}

// @02206408
void FtrAnimSet::setBca(void *v, u32 i) {
    unk_00[i & 1] = v;
}

// @022063fc
void FtrAnimSet::setBma(void *v, u32 i) {
    unk_08[i & 1] = v;
}

// @022063f0
void FtrAnimSet::setBva(void *v, u32 i) {
    unk_10[i & 1] = v;
}

// @022063e4
void FtrAnimSet::setBta(void *v, u32 i) {
    unk_18[i & 1] = v;
}

// @022063d8
void FtrAnimSet::setBtp(void *v, u32 i) {
    unk_20[i & 1] = v;
}

// @022063d4
void FtrAnimSet::setTexCopy(s32 v) {
    unk_28 = v;
}

// @022063c8
Unk_ov004_02208a18_Rec *FtrAnimSet::getBca(u32 i) {
    return (Unk_ov004_02208a18_Rec *)unk_00[i & 1];
}

// @022063bc
Unk_ov004_02208a18_Rec *FtrAnimSet::getBma(u32 i) {
    return (Unk_ov004_02208a18_Rec *)unk_08[i & 1];
}

// @022063b0
Unk_ov004_02208a18_Rec *FtrAnimSet::getBva(u32 i) {
    return (Unk_ov004_02208a18_Rec *)unk_10[i & 1];
}

// @022063a4
Unk_ov004_02208a18_Rec *FtrAnimSet::getBta(u32 i) {
    return (Unk_ov004_02208a18_Rec *)unk_18[i & 1];
}

// @02206398
Unk_ov004_02208a18_Rec *FtrAnimSet::getBtp(u32 i) {
    return (Unk_ov004_02208a18_Rec *)unk_20[i & 1];
}

// @02206380
s32 FtrAnimSet::getTexCopy() {
    if (unk_28 != 0) {
        return (s32)NNS_G3dGetTex((void *)unk_28);
    }
    return 0;
}

// @02206368
FtrTopItem::FtrTopItem() {
    unk_02 = 0xfff1;
    clear();
}

// @02206364
FtrTopItem::~FtrTopItem() {
}

// @02206310
BOOL FtrTopItem::isSet() {
    BOOL r;
    if (Item_IsFurniture(&unk_02)) {
        u16 t = 0xfff1;
        if (Item_GetFurnitureIndex(&unk_02) == Item_GetFurnitureIndex(&t)) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (unk_02 == 0xfff1) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    if (r) {
        return FALSE;
    }
    return TRUE;
}

// @022062fc
void FtrTopItem::clear() {
    unk_02 = 0xfff1;
    unk_04.x = 0;
    unk_04.y = 0;
    unk_04.z = 0;
}

// @022062f8
Unk_ov004_02205d8c_Vec *FtrTopItem::getPos() {
    return &unk_04;
}

// @022062f4
u16 *FtrTopItem::getItem() {
    return &unk_02;
}

// @022062c8
BOOL FtrTopItem::set(u16 *id, Unk_ov004_02205d8c_Vec *pos) {
    if (isSet() == 0) {
        unk_02 = *id;
        unk_04.x = pos->x;
        unk_04.y = pos->y;
        unk_04.z = pos->z;
        return TRUE;
    }
    return FALSE;
}

// @02206234
void FtrTopItem::draw(Unk_ov004_02205c80_Obj *o) {
    if (isSet()) {
        Unk_ov004_02205d8c_Vec z, d, p, s;
        data_021f47e0 = o->unk_598;
        s32 x, y, c;
        c = getPos()->z;
        y = getPos()->y;
        x = getPos()->x;
        func_020e8528(&data_021f47e0, x, y, c);
        z.x = 0;
        z.y = 0;
        z.z = 0;
        MTX_MultVec43(&z, &data_021f47e0, &d);
        p.x = d.x;
        p.y = d.y;
        p.z = d.z;
        s.x = 0x1000;
        s.y = 0x1000;
        s.z = 0x1000;
        RoomItemIcons_DrawItem(*getItem(), &p, &s, 0, 0, 0);
    }
}

// @02206204
FtrTopItems::FtrTopItems() {
    clearAll();
}

// @022061e8
FtrTopItems::~FtrTopItems() {
}

// @022061c4
void FtrTopItems::clearAll() {
    u32 i;
    for (i = 0; i < 4; i++) {
        get(i)->clear();
    }
}

// @022061b4
FtrTopItem *FtrTopItems::get(u32 i) {
    if (i < 4) {
        return &unk_04[i];
    }
    return &unk_04[0];
}

// @02206190
void FtrTopItems::drawAll(Unk_ov004_02205c80_Obj *o) {
    u32 i;
    for (i = 0; i < 4; i++) {
        get(i)->draw(o);
    }
}

// @0220614c
BOOL FtrTopItems::add(u16 *id, Unk_ov004_02205d8c_Vec *pos) {
    u32 i;
    for (i = 0; i < 4; i++) {
        if (get(i)->isSet() == 0) {
            get(i)->set(id, pos);
            return TRUE;
        }
    }
    return FALSE;
}

// @0220607c
BOOL FtrTopItems::canPickUp(Unk_ov004_02205c80_Obj *o) {
    FtrTileList list;
    _ZN18Unk_ov004_022077a48getTilesEP23Unk_ov004_02207854_ListPvi(o, (Unk_ov004_02207854_List *)&list, 0, 0);
    void *grid = gSceneBlockMap;
    u32 i;
    for (i = 0; i < list.getCount(); i++) {
        s32 y = list.get(i)->y;
        s32 x = list.get(i)->x;
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *cell = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), 1);
        if (cell != NULL && !Item_IsFurnitureOrF031(cell) && !Item_IsNormalItem(cell)) {
            if (Unk_ov004_0220607c_IsEmpty(cell) == 0) {
                list.release();
                return FALSE;
            }
        }
    }
    list.release();
    return TRUE;
}

// @02205f58
BOOL FtrTopItems::pickUpAll(Unk_ov004_02205c80_Obj *o) {
    static ItemId dflt;
    BOOL res = TRUE;
    FtrTileList list;
    _ZN18Unk_ov004_022077a48getTilesEP23Unk_ov004_02207854_ListPvi(o, (Unk_ov004_02207854_List *)&list, 0, 0);
    void *grid = gSceneBlockMap;
    if (canPickUp(o)) {
        clearAll();
        FtrActor_CalcWorldMtx((Self *)o, 0, 0);
        MTX_Inverse43(&data_021f47e0, &data_021f47e0);
        u32 i;
        for (i = 0; i < list.getCount(); i++) {
            s32 x = list.get(i)->x;
            s32 y = list.get(i)->y;
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            u16 *cell = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), 1);
            if (cell != NULL && Item_IsNormalItem(cell)) {
                Unk_ov004_02205d8c_Vec v, d;
                FieldPos_FromUnitCenter(&v, x, y);
                v.y = o->unk_78c;
                MTX_MultVec43(&v, &data_021f47e0, &d);
                res &= add(cell, &d);
                if (res != 0) {
                    res = 1;
                } else {
                    res = 0;
                }
            }
        }
        if (res == 0) {
            clearAll();
        }
    }
    list.release();
    return res;
}

// @02205eb0
void FtrTopItems::dropAll(Unk_ov004_02205c80_Obj *o) {
    u32 i;
    for (i = 0; i < 4; i++) {
        FtrTopItem *e = get(i);
        if (e->isSet()) {
            Unk_ov004_02205d8c_Vec z, d;
            s32 a, b;
            z.x = 0;
            z.y = 0;
            z.z = 0;
            data_021f47e0 = o->unk_598;
            s32 x, y, c;
            c = e->getPos()->z;
            y = e->getPos()->y;
            x = e->getPos()->x;
            func_020e8528(&data_021f47e0, x, y, c);
            MTX_MultVec43(&z, &data_021f47e0, &d);
            FieldPos_ToUnit(&a, &b, &d);
            u32 mgr = Scene_GetCurrent();
            FtrSync_SetTopItem(mgr, a, b, e->getItem(), 1);
        }
    }
    clearAll();
}

// @02205ea0
void FtrStackLink::clear() {
    unk_00 = -1;
    unk_04.x = 0;
    unk_04.y = 0;
    unk_04.z = 0;
    unk_02 = 0;
}

// @02205e9c
FtrStackLink::~FtrStackLink() {
}

// @02205e8c
BOOL FtrStackLink::isAttached() {
    BOOL r = FALSE;
    if (unk_00 != -1) {
        r = TRUE;
    }
    return r;
}

// @02205e84
s32 FtrStackLink::getParentIndex() {
    return unk_00;
}

// @02205e80
Unk_ov004_02205d8c_Vec *FtrStackLink::getRelPos() {
    return &unk_04;
}

// @02205e78
s32 FtrStackLink::getRelAngle() {
    return unk_02;
}

// @02205e58
BOOL FtrStackLink::set(s32 idx, Unk_ov004_02205d8c_Vec *pos, s32 ang) {
    if (idx >= 0 && (u32)idx < 0x1c) {
        unk_00 = idx;
        unk_04.x = pos->x;
        unk_04.y = pos->y;
        unk_04.z = pos->z;
        unk_02 = ang;
        return TRUE;
    }
    return FALSE;
}

// @02205e20
BOOL FtrStackLink::attachAt(s32 x, s32 y, s16 z) {
    s32 idx;
    Unk_ov004_02205d8c_Vec pos;
    s16 ang;
    if (FtrStack_CalcRelPlacement(&idx, &pos, &ang, x, y, z)) {
        return set(idx, &pos, ang);
    }
    return FALSE;
}

// @02205d8c
extern "C" BOOL FtrStack_CalcRelPlacement(s32 *idx, Unk_ov004_02205d8c_Vec *pos, s16 *ang, s32 x, s32 a, s16 b) {
    void *mgr = FtrActorGrid_GetInstance();
    Unk_ov004_02205c80_Obj *e = FtrActorGrid_getActor(mgr, x, a, 0);
    s32 i = FtrActorTable_indexOf(FtrActorTable_GetInstance(), e);
    if (e != NULL && i != -1) {
        Unk_ov004_02205d8c_Vec t;
        Unk_ov004_02205d8c_Vec d;
        FieldPos_FromUnitCenter(&t, x, a);
        t.y = e->unk_78c;
        FtrActor_CalcWorldMtx((Self *)e, 0, 0);
        MTX_Inverse43(&data_021f47e0, &data_021f47e0);
        MTX_MultVec43(&t, &data_021f47e0, &d);
        *idx = i;
        pos->x = d.x;
        pos->y = d.y;
        pos->z = d.z;
        *ang = b - e->unk_8e;
        return TRUE;
    }
    return FALSE;
}

// @02205d7c
void FtrClockHands::clear() {
    unk_01 = -1;
    unk_00 = unk_01;
    unk_02 = 0;
}

// @02205d78
FtrClockHands::~FtrClockHands() {
}

// @02205d5c
void FtrClockHands::set(s32 a, s32 b) {
    unk_00 = a;
    unk_01 = b;
    if (unk_00 == -1 && unk_01 == -1) {
    } else {
        unk_02 = 1;
    }
}

// @02205d50
void FtrSwitch::clear() {
    unk_01 = 0;
    unk_00 = unk_01;
}

// @02205d4c
FtrSwitch::~FtrSwitch() {
}

// @02205cdc
void FtrSwitch::loadFromMap(Unk_ov004_02205c80_Obj *o) {
    s32 r = 0;
    s32 x, y;
    if (o->unk_768 == 1 || _ZN8FtrActor9isPreviewEv(o) != 0) {
        if (o->unk_789 == 0) {
            r = 1;
        } else {
            r = 0;
        }
    } else {
        if (_ZN8FtrActor11findOwnTileEPiS0_ii(o, &x, &y, r, r)) {
            u32 mgr = Scene_GetCurrent();
            r = RoomFtrState_GetSwitch(x, y, o->unk_284, mgr);
        }
    }
    set(r, 0);
}

// @02205cc4
void FtrSwitch::commit(Unk_ov004_02205c80_Obj *o) {
    if (_ZN8FtrActor9isPreviewEv(o) == 0) {
        unk_00 = unk_01;
    }
}

// @02205c80
void FtrSwitch::saveToMap(Unk_ov004_02205c80_Obj *o) {
    if (_ZN8FtrActor9isPreviewEv(o) == 0) {
        s32 x, y;
        if (_ZN8FtrActor11findOwnTileEPiS0_ii(o, &x, &y, 0, 0)) {
            RoomFtrState_SetSwitch(x, y, o->unk_284, unk_01, Scene_GetCurrent());
        }
    }
}

// @02205c7c
u8 FtrSwitch::isOn() {
    return unk_01;
}

// @02205c6c
BOOL FtrSwitch::isChanging() {
    if (unk_00 != unk_01) {
        return TRUE;
    }
    return FALSE;
}

// @02205c54
void FtrSwitch::toggle(s32 flag) {
    set(((unk_01 + 1) & 1) != 0 ? TRUE : FALSE, flag);
}

// @02205c44
void FtrSwitch::set(u32 v, s32 flag) {
    if (flag != 0) {
        unk_01 = v;
    } else {
        unk_00 = v;
        unk_01 = unk_00;
    }
}

// @02205c2c
FtrGlowMat::FtrGlowMat() {
    unk_14 = -1;
    unk_18 = NULL;
}

// @02205c1c
FtrGlowMat::~FtrGlowMat() {
}

// @02205be4
BOOL FtrGlowMat::bindMaterial(G3dResAccess *res, s32 idx, BOOL on) {
    if (res != NULL) {
        unk_14 = res->findMatIdx(idx);
        if (unk_14 != -1) {
            switchLightAnimated(on);
            unk_18 = res;
            return TRUE;
        }
    }
    return FALSE;
}

// @02205bcc
BOOL FtrGlowMat::setLit(BOOL on, s32 a, s32 b) {
    return switchLight(on, a, b, 0x800);
}

// @02205b14
void Unk_ov004_02205b14::updateEmission() {
    if (unk_14 != -1) {
        LightLevel_update(this);
        s32 x = LightLevel_getLevel(this);
        if (x) {
            NNSi_G3dModifyMatFlag(unk_18, 1, 0x400);
            s32 col = FtrGlowMat_GetBaseEmission();
            s32 r7 = Math_LerpFx(x, ((col >> 10) & 0x1f) << 12, 0x1f000);
            s32 g = Math_LerpFx(x, (col & 0x1f) << 12, 0x1f000);
            s32 b = Math_LerpFx(x, ((col >> 5) & 0x1f) << 12, 0x1f000);
            u32 r7c = (u16)(((r7 >> 12) << 10) | ((g >> 12) | ((b >> 12) << 5)));
            for (s32 i = 0; i < unk_18->unk_18; i++) {
                NNS_G3dMdlSetMdlEmi(unk_18, i, i == unk_14 ? r7c : col);
            }
        } else {
            NNSi_G3dModifyMatFlag(unk_18, 0, 0x400);
        }
    }
}

// @02205b04
extern "C" u16 FtrGlowMat_GetBaseEmission() {
    return (u16)(data_027e0148.unk_18 >> 16);
}

// @02205ad4
FtrGlowMatSet::FtrGlowMatSet() {
    unk_54 = 0;
}

// @02205ab8
FtrGlowMatSet::~FtrGlowMatSet() {}

// @02205a64
u32 FtrGlowMatSet::init(u32 a, u32 b) {
    u32 i = 0;
    unk_54 = 0;
    u8 *pf = &unk_54;
    u32 z = 0;
    for (i = 0; i < 3; i++) {
        u32 r = unk_00[i].bindMaterial((G3dResAccess *)a, (s32)sFtrGlowMatNames[i], b);
        u32 t = *pf | r;
        if (t != 0) t = 1; else t = z;
        *pf = t;
    }
    return unk_54;
}

// @02205a1c
u32 FtrGlowMatSet::setLit(u32 a, u32 b, u32 c) {
    u32 r = 0;
    if (unk_54 != 0) {
        u32 z = 0;
        for (FtrGlowMat *p = unk_00; p < (FtrGlowMat *)&unk_54; p++) {
            r |= p->setLit(a, b, c);
            if (r != 0) r = 1; else r = z;
        }
    }
    return r;
}

// @022059f4
void FtrGlowMatSet::update() {
    if (unk_54 != 0) {
        FtrGlowMat *p = unk_00;
        FtrGlowMat *end = (FtrGlowMat *)&unk_54;
        for (; p < end; p++) ((Unk_ov004_02205b14 *)p)->updateEmission();
    }
}

// @022059f0
extern "C" void FtrVisNodes_Construct(void *) {}

// @022059ec
extern "C" void FtrVisNodes_Destruct(void *) {}

// @022059b4
void FtrVisNodes::init(void *p, u32 v) {
    if (p) {
        for (u32 i = 0; i < 4; i++) {
            unk_00[i] = func_02056fcc(p, (u32)sFtrVisNodeNames[i]);
        }
        setVisible(v);
    }
}

// @022059b0
void FtrVisNodes::setVisible(u32 v) { unk_04 = v; }

// @02205998
BOOL FtrVisNodes::hasNode(s32 v) {
    for (u32 i = 0; i < 4; i++) {
        if (v == unk_00[i]) return TRUE;
    }
    return FALSE;
}

// @02205994
u8 FtrVisNodes::isVisible() { return unk_04; }

// @02205954
BOOL FtrActor::startRotate(s32 a) {
    if (_ZN8FtrActor11canRotateByEi(this)) {
        unk_168 = unk_8e + a;
        setAct(2);
        func_020943dc(0x4c4);
        return TRUE;
    }
    return FALSE;
}

// @022058c0
BOOL FtrActor::startPush(s16 a) {
    Unk_ov004_Vec3 v;
    v.x = 0;
    v.y = 0;
    v.z = 0x2000;
    func_020e93a0(&v, a);
    if (canMoveBy((s32)&v)) {
        Unk_ov004_Vec3 w;
        func_01ffd070(&w, (Vec3 *)unk_5c, &v);
        unk_16c[0] = w.x;
        unk_16c[1] = w.y;
        unk_16c[2] = w.z;
        unk_168 = a;
        setAct(3);
        if (!Unk_ov004_02205820_Is3d(*(u16 *)((u8 *)this + 0xc))) {
            u32 t = ((s32 (*)(void *))FtrActor_GetDragSe)(this);
            if (t != 0xffff) func_020943dc(t);
        }
        return TRUE;
    }
    return FALSE;
}

// @02205820
BOOL FtrActor::startPull(s16 a) {
    Unk_ov004_Vec3 v;
    v.x = 0;
    v.y = 0;
    v.z = 0x2000;
    func_020e93a0(&v, (s16)(a + 0x8000));
    if (canMoveBy((s32)&v)) {
        Unk_ov004_Vec3 w;
        func_01ffd070(&w, (Vec3 *)unk_5c, &v);
        unk_16c[0] = w.x;
        unk_16c[1] = w.y;
        unk_16c[2] = w.z;
        unk_168 = a;
        setAct(4);
        if (!Unk_ov004_02205820_Is3d(*(u16 *)((u8 *)this + 0xc))) {
            u32 t = ((s32 (*)(void *))FtrActor_GetDragSe)(this);
            if (t != 0xffff) func_020943dc(t);
        }
        return TRUE;
    }
    return FALSE;
}

// @02205814
BOOL FtrActor::startHide() { return setAct(6); }

// @02205808
BOOL FtrActor::isIdle() { return isAct(1); }

// @022057f0
BOOL FtrActor::isNotIdle() {
    if (isIdle() == 0) return TRUE;
    return FALSE;
}

// @022057e4
BOOL FtrActor::isReady() { return isAct(1); }

// @022057c8
BOOL FtrActor::isNotReady() {
    if (isReady() == 0) return TRUE;
    return FALSE;
}

// @022057bc
BOOL FtrActor::isRemoving() { return isAct(5); }

// @022057b0
BOOL FtrActor::isHidden() { return isAct(7); }

// @0220579c
BOOL FtrActor::isAct(s32 s) {
    if (unk_530 == s) return TRUE;
    return FALSE;
}

// data
char data_ov004_02248710[] = "mn_m";
// data
char data_ov004_02248718[] = "mn_m0";
// data
char data_ov004_02248720[] = "mn_m1";
// data
char *sFtrGlowMatNames[3] = {data_ov004_02248710, data_ov004_02248718, data_ov004_02248720};
// data
char data_ov004_022486fc[] = "v";
// data
char data_ov004_02248704[] = "v1";
// data
char data_ov004_02248708[] = "v2";
// data
char data_ov004_02248700[] = "v3";
// data
char *sFtrVisNodeNames[4] = {data_ov004_022486fc, data_ov004_02248704, data_ov004_02248708, data_ov004_02248700};

// @022056bc
BOOL FtrActor::setAct(s32 idx) {
    static Unk_ov004_0224882c_Fn tbl[9] = {
        &FtrActor::enterAppear, &FtrActor::enterIdle,
        &FtrActor::enterRotate, &FtrActor::enterPush,
        &FtrActor::enterPull, &FtrActor::enterRemove,
        &FtrActor::enterHide, &FtrActor::enterIdle,
        &FtrActor::enterPreview,
    };
    if (idx < 9) {
        if ((this->*tbl[idx])()) {
            unk_530 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

// @022055ec
void FtrActor::execAct() {
    static Unk_ov004_0224882c_Fn tbl[9] = {
        (Unk_ov004_0224882c_Fn)&FtrActor::execAppear, (Unk_ov004_0224882c_Fn)&FtrActor::execIdle,
        (Unk_ov004_0224882c_Fn)&FtrActor::execRotate, (Unk_ov004_0224882c_Fn)&FtrActor::execPush,
        (Unk_ov004_0224882c_Fn)&FtrActor::execPull, (Unk_ov004_0224882c_Fn)&FtrActor::execRemove,
        (Unk_ov004_0224882c_Fn)&FtrActor::execHide, (Unk_ov004_0224882c_Fn)&FtrActor::execIdle,
        (Unk_ov004_0224882c_Fn)&FtrActor::execPreview,
    };
    if (unk_530 < 9) (this->*tbl[unk_530])();
}

// @0220552c
BOOL FtrActor::enterAppear() {
    unk_158 = 0x555;
    unk_14c = 0;
    unk_150 = 0;
    unk_154 = 0;
    unk_15c = 0;
    unk_15e = 0;
    unk_160 = 0x2710;
    unk_164 = 0x800;
    if (func_02095204(4)) {
        Unk_ov004_Vec3 pos;
        u16 t;
        FtrActor_GetCenter(this, &pos);
        if (unk_284 == 0) pos.y = 0;
        else pos.y = FtrMgr_GetSurfaceHeightAtPos(&pos);
        pos.y += 0x800;
        t = Item_MakeFurniture(unk_280, 0);
        Unk_ov004_Vec3 c;
        c.x = pos.x;
        c.y = pos.y;
        c.z = pos.z;
        return ItemDrop_StartFromLocalPlayer(&t, &c);
    }
    return TRUE;
}

// @022053c0
void FtrActor::execAppear() {
    func_020e761c(&unk_158, 0x1000, 0x88);
    if (unk_15c < 0xf) {
        unk_15c = unk_15c + 1;
        unk_76c = 0;
        if (unk_15c == 0xc) func_020943dc(0x4c7);
        if (unk_15c == 0xf) {
            Unk_ov004_053c0_Buf buf;
            FtrActor_GetCenter(this, (Vec3 *)&buf);
            spawnEffectAt((Unk_0203e4f0_Vec *)&buf);
        }
    } else if (unk_15c < 0x11) {
        unk_15c = unk_15c + 1;
    } else {
        s16 r6 = unk_15e;
        u16 r4;
        u16 *q = (u16 *)&unk_15e;
        *q = *q + unk_160;
        r4 = *q;
        s32 m = func_01ffcb0c(unk_164, data_02135f44[((u16)(volatile s16)r4 >> 4) * 2]);
        s32 t = 0x1000;
        unk_150 = m + t;
        s32 *pp = &unk_14c;
        *pp = t - m;
        unk_154 = *pp;
        s32 c = func_01ffcb0c(data_02135f44[((u16)r6 >> 4) * 2], data_02135f44[((u16)(volatile s16)r4 >> 4) * 2]);
        if (c < 0) {
            unk_164 = func_01ffcb0c(unk_164, 0x4cd);
            unk_160 = unk_160 + 0x960;
        }
        if (unk_158 == 0x1000) {
            s32 v = unk_164;
            if (v < 0) v = -v;
            if (v < 0x52) setAct(1);
        }
        switch (unk_76c) {
        case 0:
            spawnEffectAtCorner(0);
            spawnEffectAtCorner(2);
            break;
        case 2:
            spawnEffectAtCorner(1);
            spawnEffectAtCorner(3);
            break;
        }
        unk_76c = unk_76c + 1;
    }
}

// @022053bc
BOOL FtrActor::enterIdle() { return TRUE; }

// @022053b8
BOOL FtrActor::execIdle() {}

// @022052f4
BOOL FtrActor::enterRotate() {
    ((FtrTopItems *)unk_188)->pickUpAll((Unk_ov004_02205c80_Obj *)this);
    s32 d = (s16)(unk_168 - unk_8e);
    ((Unk_ov004_022077a4 *)this)->moveTiles(0, d);
    if (d < 0) d = 1; else d = 0;
    VCALL98(this, d);
    if (unk_284 == 0 && unk_784 == 1) {
        FtrTileList v;
        ((Unk_ov004_022077a4 *)this)->getTiles((Unk_ov004_02207854_List *)&v, 0, 0);
        for (u32 i = 0; i < v.getCount(); i++) {
            void *mgr = FtrActorGrid_GetInstance();
            Unk_ov004_02206520_Ent *e = v.get(i);
            FtrActor *o = (FtrActor *)FtrActorGrid_getActor(mgr, e->x, v.get(i)->y, 1);
            if (o) VCALL98(o, d);
        }
        v.release();
    }
    return TRUE;
}

// @0220521c
BOOL FtrActor::execRotate() {
    s32 d = (s16)(unk_168 - unk_8e);
    BOOL neg;
    if (d < 0) neg = TRUE; else neg = FALSE;
    VCALL9C(this, neg);
    if (unk_284 == 0 && unk_784 == 1) {
        FtrTileList v;
        ((Unk_ov004_022077a4 *)this)->getTiles((Unk_ov004_02207854_List *)&v, 0, 0);
        for (u32 i = 0; i < v.getCount(); i++) {
            void *mgr = FtrActorGrid_GetInstance();
            Unk_ov004_02206520_Ent *e = v.get(i);
            FtrActor *o = (FtrActor *)FtrActorGrid_getActor(mgr, e->x, v.get(i)->y, 1);
            if (o) VCALL9C(o, neg);
        }
        v.release();
    }
    if (func_020e7530(&unk_8e, unk_168, 0x700)) {
        setAct(1);
        ((FtrTopItems *)unk_188)->dropAll((Unk_ov004_02205c80_Obj *)this);
    }
}

// @022051a4
BOOL FtrActor::enterPush() {
    Unk_ov004_0224882c_Buf buf;
    func_020e9960(&buf, unk_16c, unk_5c);
    ((FtrTopItems *)unk_188)->pickUpAll((Unk_ov004_02205c80_Obj *)this);
    ((Unk_ov004_022077a4 *)this)->moveTiles(&buf, 0);
    void *g = FurnitureManager_GetMoveAnim();
    if (g) {
        if (FtrMoveAnim_StartPush(g, unk_24c, unk_5c, unk_168)) {
            VCALL94(this, 1);
            spawnActorC0AtTile(0);
            return TRUE;
        }
    }
    return FALSE;
}

// @02205138
void FtrActor::execPush() {
    Unk_ov004_0224882c_Buf buf;
    void *g = FurnitureManager_GetMoveAnim();
    if (g) {
        if (FtrMoveAnim_Step(g, unk_24c, buf.v)) {
            unk_5c[0] = unk_16c[0];
            unk_5c[1] = unk_16c[1];
            unk_5c[2] = unk_16c[2];
            setAct(1);
            ((FtrTopItems *)unk_188)->dropAll((Unk_ov004_02205c80_Obj *)this);
        } else {
            unk_5c[0] = buf.v[0];
            unk_5c[1] = buf.v[1];
            unk_5c[2] = buf.v[2];
        }
    }
}

// @022050c0
BOOL FtrActor::enterPull() {
    Unk_ov004_0224882c_Buf buf;
    func_020e9960(&buf, unk_16c, unk_5c);
    ((FtrTopItems *)unk_188)->pickUpAll((Unk_ov004_02205c80_Obj *)this);
    ((Unk_ov004_022077a4 *)this)->moveTiles(&buf, 0);
    void *g = FurnitureManager_GetMoveAnim();
    if (g) {
        if (FtrMoveAnim_StartPull(g, unk_24c, unk_5c, unk_168)) {
            VCALL94(this, 0);
            spawnActorC0AtTile(1);
            return TRUE;
        }
    }
    return FALSE;
}

// @022050b8
void FtrActor::execPull() {
    execPush();
}

// @0220507c
BOOL FtrActor::enterRemove() {
    Unk_ov004_0224882c_Buf buf;
    onRemove();
    unk_76c = 0;
    FtrActor_GetCenter(this, (Vec3 *)&buf);
    FtrMgr_SetRemovePos(&buf);
    func_020943dc(0x4c8);
    return TRUE;
}

// @0220500c
void FtrActor::execRemove() {
    Unk_ov004_0224882c_Buf buf;
    func_020e761c(&unk_14c, 0, 0x400);
    unk_150 = unk_154 = unk_14c;
    if (unk_14c == 0) {
        ProcBase_RequestDelete(this);
    }
    if (unk_76c == 1) {
        FtrActor_GetCenter(this, (Vec3 *)&buf);
        spawnEffectAt((Unk_0203e4f0_Vec *)&buf);
    }
    unk_76c++;
}

// @02205004
BOOL FtrActor::enterHide() {
    return enterRemove();
}

// @02204f90
void FtrActor::execHide() {
    Unk_ov004_0224882c_Buf buf;
    func_020e761c(&unk_14c, 0, 0x400);
    unk_150 = unk_154 = unk_14c;
    if (unk_14c == 0) {
        setAct(7);
    } else if (unk_76c == 1) {
        FtrActor_GetCenter(this, (Vec3 *)&buf);
        spawnEffectAt((Unk_0203e4f0_Vec *)&buf);
    }
    unk_76c++;
}

// @02204f8c
BOOL FtrActor::enterPreview() {
    return TRUE;
}

// @02204f24
// SKIPPED (out of range 35670208): void Atm::vfunc_68()
// SKIPPED (out of range 35670388): void Atm::vfunc_64()
// SKIPPED (out of range 35670492): void Atm::vfunc_60()
// SKIPPED (out of range 35670496): void Atm::execTalkAct02()
// SKIPPED (out of range 35670544): BOOL Atm::enterTalkAct02()
// SKIPPED (out of range 35670548): void Atm::execTalkAct01()
// SKIPPED (out of range 35670584): BOOL Atm::enterTalkAct01()
// SKIPPED (out of range 35670656): void Atm::execTalkAct00()
// SKIPPED (out of range 35670660): BOOL Atm::enterTalkAct00()
// SKIPPED (out of range 35670664): void Atm::execTalkAct()
// SKIPPED (out of range 35670788): BOOL Atm::setTalkAct(s32 m)
// SKIPPED (out of range 35670928): void Atm::vfunc_4c(u32 a, u8 b)
// SKIPPED (out of range 35670964): BOOL Atm::vfunc_48(void *a)
// SKIPPED (out of range 35671056): void Atm::setPointTexts()
// SKIPPED (out of range 35671244): BOOL Atm::releaseCollision()
// SKIPPED (out of range 35671260): void Atm::initCollision()
// SKIPPED (out of range 35671344): BOOL Atm::vfunc_0c()
// SKIPPED (out of range 35671360): BOOL Atm::vfunc_24()
// SKIPPED (out of range 35671364): BOOL Atm::vfunc_18()
// SKIPPED (out of range 35671396): BOOL Atm::vfunc_00()
// SKIPPED (out of range 35671436): Atm::~Atm()
// SKIPPED (out of range 35671584): Atm::Atm()
// SKIPPED (out of range 35671676): extern "C" Atm *Atm_Create()
// ================================================================ FtrActor
void FtrActor::execPreview() {
    if (unk_77c != 0x23 && unk_77c != 0x24 && unk_77c != 0x25) {
        unk_8e += 0x400;
    }
    FtrActor_GetFtrIndex(this);
    s32 v = FX_Div(FtrInfo_GetDmaUnk05Fx(), 0x64000) >> 2;
    unk_14c = unk_150 = unk_154 = v;
}

