// mwcc-version: 1.2/base
#include "types.h"
// The two functions of the ov004 translation unit 0x02209f70-0x022136d0 that need mwcc 1.2/base (signed-halfword
// switch tables): FtrSingingInsect::updateActive and vfunc_7c. Same declarations as the main file of the unit;
// nothing else is emitted here (see config/usa/arm9/overlays/ov004/object_order.txt).
// ================================================================ library chain and TU02 helper classes (from the linked TU02 unit)
struct TalkWindowState {
    /* 0x0000 */ u32 index;
    /* 0x0004 */ s32 state;
    /* 0x0008 */ s32 nextState;
};

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

    /* 0x50 */ Unk_02002f14_Node listNode;
    /* 0x5c */ s32 position[3];
    /* 0x68 */ u8 pad_68[0x8e - 0x68];
    /* 0x8e */ s16 rotY;
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
class CollisionVec2 {
public:
    s32 x, y;
    void set(s32 a, s32 b);
    void setDiff(CollisionVec2 *a, CollisionVec2 *b);
    s64 distSq(CollisionVec2 *p);
    BOOL normalize();
};

class CollisionEdge {
public:
    virtual BOOL hasRoundEnds();
    CollisionVec2 unk_04, unk_0c, unk_14;
    s32 unk_1c;
    BOOL intersectLine(CollisionVec2 *out, CollisionVec2 *a, CollisionVec2 *b);
    s32 isBetweenEnds(CollisionVec2 *p);
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
    virtual void onEdgeContact(CollisionEdge *a, Unk_ov004_02206570_Act *b, s32 c);
    u8 pad_04[0x98];
    BoxCollider();
    ~BoxCollider();
};

struct FtrCollider : BoxCollider {
    void *unk_9c;
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
    u32 numFrames;
    u32 curFrame;
    u32 prevFrame;
    u32 frameStep;
    u32 playMode;
};

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


// ================================================================ types used by the per-part views of the base object
struct Unk_ov004_0220a648_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

// ---- part 13
struct Unk_ov004_0220bc80_V3 {
    s32 x, y, z;
};

// ---- part 15
struct Unk_ov004_0220ce38_Slot {
    /* 0x00 */ u32 sub[2];
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u32 pad_0c[3];
    /* 0x18 */ u32 *unk_18;
    /* 0x1c */ u32 pad_1c;
};

// ---- part 24
struct Unk_ov004_02206e74 {
    u8 pad_00[0x10];
    u32 unk_10;
    u8 pad_14[0x20 - 0x14];
};

// ---- size checks of the per-part views of the base object (0x130..0x840)
struct Unk_ov004_View00_Chk {
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
    /* 0x288 */ u8 unk_288[0x2a8];  // TouchPickBox
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
typedef char Unk_ov004_View00_Assert[sizeof(Unk_ov004_View00_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View10_Chk {
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
typedef char Unk_ov004_View10_Assert[sizeof(Unk_ov004_View10_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View11_Chk {
    /* 0x130 */ u8 b11_pad_10c[0x590 - 0x130];
    /* 0x590 */ s32 b11_unk_590;
    /* 0x594 */ u8 b11_pad_594[0x73c - 0x594];
    /* 0x73c */ u8 b11_unk_73c[0x24];
    /* 0x760 */ u8 b11_unk_760[8];
    /* 0x768 */ s32 b11_unk_768;
    /* 0x76c */ u8 b11_pad_76c[0x840 - 0x76c];
};
typedef char Unk_ov004_View11_Assert[sizeof(Unk_ov004_View11_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View12_Chk {
    /* 0x130 */ u8 b12_f_0f0[0x73c - 0x130];
    /* 0x73c */ u8 b12_f_73c[0x778 - 0x73c];
    /* 0x778 */ u8 b12_unk_778;
    /* 0x779 */ u8 b12_f_779[0x794 - 0x779];
    /* 0x794 */ u8 b12_f_794[0x7b4 - 0x794];
    /* 0x7b4 */ u8 b12_f_7b4[0x840 - 0x7b4];
};
typedef char Unk_ov004_View12_Assert[sizeof(Unk_ov004_View12_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View13_Chk {
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
typedef char Unk_ov004_View13_Assert[sizeof(Unk_ov004_View13_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View14_Chk {
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
typedef char Unk_ov004_View14_Assert[sizeof(Unk_ov004_View14_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View15_Chk {
    /* 0x130 */ u8 b15_pad_0f0[0x534 - 0x130];
    /* 0x534 */ u8 b15_f_534[0x590 - 0x534];
    /* 0x590 */ u32 b15_unk_590;
    /* 0x594 */ u8 b15_pad_594[0x6c8 - 0x594];
    /* 0x6c8 */ u8 b15_f_6c8[0x73c - 0x6c8];
    /* 0x73c */ u8 b15_f_73c[0x7c0 - 0x73c];
    /* 0x7c0 */ Unk_ov004_0220ce38_Slot b15_unk_7c0[4];
};
typedef char Unk_ov004_View15_Assert[sizeof(Unk_ov004_View15_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View16_Chk {
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
typedef char Unk_ov004_View16_Assert[sizeof(Unk_ov004_View16_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View17_Chk {
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
typedef char Unk_ov004_View17_Assert[sizeof(Unk_ov004_View17_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View18_Chk {
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
typedef char Unk_ov004_View18_Assert[sizeof(Unk_ov004_View18_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View19_Chk {
    /* 0x130 */ u8 b19_pad_12c[0x534 - 0x130];
    /* 0x534 */ u8 b19_f_534[0x5d0 - 0x534];
    /* 0x5d0 */ u8 b19_f_5d0[0x6c8 - 0x5d0];
    /* 0x6c8 */ u8 b19_f_6c8[0x77c - 0x6c8];
    /* 0x77c */ s32 b19_unk_77c;
    /* 0x780 */ u8 b19_pad_780[0x794 - 0x780];
    /* 0x794 */ u8 b19_f_794[0x7b4 - 0x794];
    /* 0x7b4 */ u8 b19_f_7b4[0x840 - 0x7b4];
};
typedef char Unk_ov004_View19_Assert[sizeof(Unk_ov004_View19_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View20_Chk {
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
typedef char Unk_ov004_View20_Assert[sizeof(Unk_ov004_View20_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View21_Chk {
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
typedef char Unk_ov004_View21_Assert[sizeof(Unk_ov004_View21_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View22_Chk {
    /* 0x130 */ u8 b22_f_0f0[0x590 - 0x130];
    /* 0x590 */ u32 b22_unk_590;
    /* 0x594 */ u8 b22_f_594[0x73c - 0x594];
    /* 0x73c */ u8 b22_f_73c[0x760 - 0x73c];
    /* 0x760 */ u8 b22_f_760[0x77c - 0x760];
    /* 0x77c */ u32 b22_unk_77c;
    /* 0x780 */ u32 b22_unk_780;
    /* 0x784 */ u8 b22_f_784[0x840 - 0x784];
};
typedef char Unk_ov004_View22_Assert[sizeof(Unk_ov004_View22_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View23_Chk {
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
typedef char Unk_ov004_View23_Assert[sizeof(Unk_ov004_View23_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View24_Chk {
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
typedef char Unk_ov004_View24_Assert[sizeof(Unk_ov004_View24_Chk) == 0x840 - 0x130 ? 1 : -1];

struct Unk_ov004_View25_Chk {
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

    /* 0x12e */ u16 unk_12e;
    union {
        struct {
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
            /* 0x288 */ u8 unk_288[0x2a8];  // TouchPickBox
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

    /* 0x840 */ u32 unk_840;
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

    /* 0x840 */ s32 unk_840;
    /* 0x844 */ s32 unk_844;
    /* 0x848 */ s32 unk_848;
    /* 0x84c */ u16 unk_84c;
    /* 0x84e */ u16 unk_84e;
    /* 0x850 */ u8 unk_850;
    /* 0x851 */ u8 pad_851[3];
    /* 0x854 */ s32 unk_854;
};

// 0x0224b43c: size >= 0x84a (only the methods in this range are here)
class FtrSingingInsect : public FtrActor {
public:
    FtrSingingInsect();
    virtual ~FtrSingingInsect();
    virtual BOOL vfunc_0c();
    virtual BOOL initModel();
    virtual BOOL updateActive();

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u16 unk_842;
    /* 0x844 */ u8 unk_844;
    /* 0x845 */ u8 unk_845;
    /* 0x846 */ u8 unk_846;
    /* 0x847 */ u8 pad_847;
    /* 0x848 */ u16 unk_848;
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





struct Unk_ov004_0220a0e4_Pad {
    s32 v[2];
    Unk_ov004_0220a0e4_Pad() {}
    ~Unk_ov004_0220a0e4_Pad() {}
};






typedef void (FtrPhone::*Unk_ov004_0220a1e8_Fn)();
typedef BOOL (FtrPhone::*Unk_ov004_0220a280_Fn)();





















// ---------------------------------------------------------------- FtrSingingInsect


BOOL FtrSingingInsect::updateActive() {
    u32 h = p10::FtrSound_GetSe0(p10::FtrActor_GetFtrIndex(this));
    if ((u16)(h + 0xfc07) <= 3) {
        switch (unk_845) {
        case 0:
            if (unk_842 != 0) {
                unk_842--;
            }
            if (unk_842 == 0) {
                unk_845 = 1;
                unk_844 = 0;
                unk_846 = 0;
                unk_848 = 0;
                if (h != p10::gFtrSoundNone) {
                    p10::_ZN15FtrSoundEmitter4playEjj(b10_sub_794, h, b10_sub_7b4);
                }
            }
            break;
        case 1: {
            unk_848++;
            u32 r = p10::FtrActor_StepAnims(this);
            if (unk_846 != 0 && r != 0) {
                unk_846 = 0;
                playAnim(0, 1, 0x1000, 0);
                unk_844++;
                if (unk_844 >= unk_840) {
                    unk_845 = 0;
                    if (h == 0x3fc) {
                        unk_842 = 0x3c;
                    } else {
                        unk_842 = 200;
                    }
                }
            }
            unk_846 = r;
            break;
        }
        }
    } else {
        switch (unk_845) {
        case 0:
            if (unk_842 != 0) {
                unk_842--;
            }
            if (unk_842 == 0) {
                unk_845 = 1;
                unk_844 = 0;
                unk_846 = 0;
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
            if (unk_846 != 0 && r != 0) {
                unk_846 = 0;
                playAnim(0, 1, 0x1000, 0);
                unk_844++;
                if (unk_844 >= unk_840) {
                    unk_845 = (unk_845 + 1) & 3;
                    unk_844 = 0;
                    if (unk_845 != 0) {
                        if (h != p10::gFtrSoundNone) {
                            p10::_ZN15FtrSoundEmitter4playEjj(b10_sub_794, h, b10_sub_7b4);
                        }
                    } else {
                        if (p10::_ZN10FtrAnimSet6getBvaEj(p10::_ZN11FtrModelRes10getAnimSetEv(b10_sub_6c8), 0) != 0) {
                            unk_842 = unk_840 * b10_unk_824.mid;
                        } else {
                            unk_842 = unk_840 * b10_unk_5d4.mid;
                        }
                    }
                }
            }
            unk_846 = r;
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

    /* 0x840 */ FtrGlowMatSet unk_840;
    /* 0x898 */ u8 unk_898;
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

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 unk_841;
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

    /* 0x840 */ u16 unk_840;
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

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u8 unk_842;
    /* 0x843 */ u8 pad_843;
    /* 0x844 */ MatTexVramTask unk_844;
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
        unk_844 = 4;
        unk_840 = unk_844;
        break;
    case 0x3fb:
        unk_844 = 4;
        unk_840 = unk_844;
        break;
    case 0x3fa:
        unk_844 = 4;
        unk_840 = unk_844;
        break;
    case 0x3fc:
        unk_844 = 2;
        unk_840 = unk_844;
        break;
    default:
        unk_844 = 1;
        unk_840 = unk_844;
        break;
    }
    unk_845 = 0;
    unk_842 = 0;
    if (b11_unk_768 != 1) {
        if (t == 0x3fc) {
            unk_842 = p11::Random_GlobalBelow(0x3c, 0);
        } else if ((u16)(t + 0xfc07) <= 2) {
            unk_842 = p11::Random_GlobalBelow(0xc8, 0);
        } else {
            unk_842 = p11::Random_GlobalBelow(unk_840 * p11::_ZN8FtrActor17getAnimFrameCountEi(this));
        }
    }
    return TRUE;
}

