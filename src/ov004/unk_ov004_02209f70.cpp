// mwcc-version: 1.2/sp2
#include "types.h"
// ov004 translation unit 0x02209f70-0x022136d0 (34 classes derived from FtrActor). Built by two compilers:
// this file's thunks need mwcc 1.2/sp2, FtrSingingInsect::updateActive / vfunc_7c (in the _switch file) need 1.2/base;
// the functions and data objects are placed by address (config/usa/arm9/overlays/ov004/object_order.txt).
// Layout: library chain + TU02 helper classes, the base class with one anonymous-struct view of its fields per old
// source file (b<NN>_ prefixes), then one part per old source file. Each part keeps its own C prototypes in a
// namespace p<NN>, declared under the real symbol names.
// ================================================================ library chain and TU02 helper classes (from the linked TU02 unit)
struct TalkWindowState {
    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ s32 unk_08;
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

    void func_0203e47c(s32 a);
    void func_0203e488(s32 a);

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
BOOL FtrNookway::vfunc_0c() { return TRUE; }
BOOL FtrNookway::updateActive() { return TRUE; }

BOOL FtrNookway::initModel() {
    unk_840 = p10::ItemInfo_IsReady();
    initAnims(0, 0, 0, (u16)unk_840);
    p10::FtrActor_StepAnims(this);
    return TRUE;
}

FtrNookway::~FtrNookway() {}

FtrNookway::FtrNookway() {}

extern "C" void FtrNookway_Create() {
    new FtrNookway;
}

// ---------------------------------------------------------------- FtrPhone
void FtrPhone::execTalkAct04() {
    if (unk_84e == 0) {
        p10::TalkRequest_SetTargetDone(this);
    }
    if (unk_84e != 0) {
        unk_84e--;
    }
}

BOOL FtrPhone::enterTalkAct04() {
    changeAct(3, 0xff);
    unk_84e = 1;
    return TRUE;
}

void FtrPhone::execTalkAct03() {
    if (unk_3c != 0) {
        if (unk_3c->unk_04 == 0) {
            func_0203e47c((s32)(TalkMsgRequest *)this);
            setTalkAct(4);
        }
    }
}

BOOL FtrPhone::enterTalkAct03() { return TRUE; }

void FtrPhone::execTalkAct02() {
    if (unk_3c != 0) {
        if (unk_3c->unk_04 != 0) {
            setTalkAct(3);
        }
    }
}

struct Unk_ov004_0220a0e4_Pad {
    s32 v[2];
    Unk_ov004_0220a0e4_Pad() {}
    ~Unk_ov004_0220a0e4_Pad() {}
};

BOOL FtrPhone::enterTalkAct02() {
    Unk_ov004_0220a0e4_Pad pad;
    func_0203e488((s32)(TalkMsgRequest *)this);
    unk_3c->unk_08 = 1;
    TalkMsgRequest &s = *this;
    s.setFileName(p10::data_ov004_0224bb44);
    unk_1e = 0;
    return TRUE;
}

void FtrPhone::execTalkAct01() {
    if (unk_84e == 0) {
        setTalkAct(2);
    }
    if (unk_84e != 0) {
        unk_84e--;
    }
}

BOOL FtrPhone::enterTalkAct01() {
    changeAct(1, 0xff);
    unk_84e = 1;
    return TRUE;
}

void FtrPhone::execTalkAct00() {
    if (p10::_ZN9FtrSwitch10isChangingEv(b10_sub_73c)) {
        void *a = p10::FtrContactSet_GetInstance();
        void *b = p10::_ZN13FtrContactSet11findContactEPv(a, this);
        s32 *v = p10::_ZN10FtrContact22getClampedContactPointEv();
        unk_840 = v[0];
        unk_844 = v[1];
        unk_848 = v[2];
        unk_84c = p10::_ZN10FtrContact12getPushAngleEv(b);
        p10::TalkRequest_AddPlayerTalk6(this, 0);
    }
    p10::_ZN9FtrSwitch3setEji(b10_sub_73c, 0, 0);
}

BOOL FtrPhone::enterTalkAct00() { return TRUE; }

typedef void (FtrPhone::*Unk_ov004_0220a1e8_Fn)();
typedef BOOL (FtrPhone::*Unk_ov004_0220a280_Fn)();

void FtrPhone::execTalkAct() {
    static Unk_ov004_0220a1e8_Fn tbl[5] = {
        &FtrPhone::execTalkAct00,
        &FtrPhone::execTalkAct01,
        &FtrPhone::execTalkAct02,
        &FtrPhone::execTalkAct03,
        &FtrPhone::execTalkAct04,
    };
    if (unk_854 < 5) {
        (this->*tbl[unk_854])();
    }
}

BOOL FtrPhone::setTalkAct(s32 idx) {
    static Unk_ov004_0220a280_Fn tbl[5] = {
        &FtrPhone::enterTalkAct00,
        &FtrPhone::enterTalkAct01,
        &FtrPhone::enterTalkAct02,
        &FtrPhone::enterTalkAct03,
        &FtrPhone::enterTalkAct04,
    };
    if (idx < 5) {
        if ((this->*tbl[idx])()) {
            unk_854 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void FtrPhone::execFtrAct03() {
    changeAct(0, 0xff);
}

BOOL FtrPhone::enterFtrAct03() {
    p10::_ZN9FtrSwitch3setEji(b10_sub_73c, 0, 0);
    playSound1();
    return TRUE;
}

void FtrPhone::execFtrAct02() {}

BOOL FtrPhone::enterFtrAct02() {
    p10::_ZN9FtrSwitch3setEji(b10_sub_73c, 1, 0);
    return TRUE;
}

void FtrPhone::execFtrAct01() {
    changeAct(2, 0xff);
}

BOOL FtrPhone::enterFtrAct01() {
    p10::_ZN9FtrSwitch3setEji(b10_sub_73c, 1, 0);
    playSound1();
    return TRUE;
}

void FtrPhone::execFtrAct00() {}

BOOL FtrPhone::enterFtrAct00() {
    p10::_ZN9FtrSwitch3setEji(b10_sub_73c, 0, 0);
    return TRUE;
}

void FtrPhone::execFtrAct() {
    static Unk_ov004_0220a1e8_Fn tbl[4] = {
        &FtrPhone::execFtrAct00,
        &FtrPhone::execFtrAct01,
        &FtrPhone::execFtrAct02,
        &FtrPhone::execFtrAct03,
    };
    if (unk_850 < 4) {
        (this->*tbl[unk_850])();
    }
}

BOOL FtrPhone::changeAct(u32 a, u8 b) {
    FtrActor::changeAct(a, b);
    static Unk_ov004_0220a280_Fn tbl[4] = {
        &FtrPhone::enterFtrAct00,
        &FtrPhone::enterFtrAct01,
        &FtrPhone::enterFtrAct02,
        &FtrPhone::enterFtrAct03,
    };
    if (a < 4) {
        if ((this->*tbl[a])()) {
            unk_850 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrPhone::getActSwitchState(u32 a) {
    if (a < 4) {
        return p10::data_ov004_0224004c[a];
    }
    return 0;
}

void FtrPhone::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
    case 1:
        setTalkAct(1);
        break;
    case 8:
        setTalkAct(0);
        break;
    }
}

BOOL FtrPhone::vfunc_0c() { return TRUE; }

BOOL FtrPhone::updateActive() {
    execTalkAct();
    execFtrAct();
    return TRUE;
}

BOOL FtrPhone::initModel() {
    if (b10_unk_768 == 1) {
        p10::_ZN9FtrSwitch3setEji(b10_sub_73c, 0, 0);
    }
    if (p10::_ZN9FtrSwitch4isOnEv(b10_sub_73c) != 0) {
        changeAct(2, 0xff);
    } else {
        changeAct(0, 0xff);
    }
    setTalkAct(0);
    return TRUE;
}

FtrPhone::~FtrPhone() {}

FtrPhone::FtrPhone() {}

extern "C" void FtrPhone_Create() {
    new FtrPhone;
}

// ---------------------------------------------------------------- FtrSingingInsect
BOOL FtrSingingInsect::vfunc_0c() { return TRUE; }


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
s32 func_02063b8c(s32 a, ...);
s32 Item_MakeFurniture(s32 a, s32 b);
BOOL func_0203c23c(u32 a, u16 *p);
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


extern "C" void FtrSingingInsect_Create() {
    new FtrSingingInsect;
}

// ---------------------------------------------------------------------------------------------------------------------
// FtrComputer

void FtrComputer::execFtrAct01() {
    p11::FtrActor_StepAnims(this);
    p11::_ZN13FtrGlowMatSet6setLitEjjj(&unk_840, 1, 1, 0);
    p11::_ZN8FtrActor10playSound0Ev(this);
    if (p11::_ZN9FtrSwitch10isChangingEv(b11_unk_73c)) {
        p11::FtrSync_RequestAct((s32)this, 0, 0xff, 1);
    }
}

BOOL FtrComputer::enterFtrAct01() {
    p11::_ZN8FtrActor10playSound1Ev(this);
    p11::_ZN9FtrSwitch3setEji(b11_unk_73c, 1, 0);
    p11::_ZN8FtrActor8playAnimEiiij(this, 1, 0, 0x1000, 0);
    return TRUE;
}

void FtrComputer::execFtrAct00() {
    p11::FtrActor_StepAnims(this);
    p11::_ZN13FtrGlowMatSet6setLitEjjj(&unk_840, 0, 1, 0);
    if (p11::_ZN9FtrSwitch10isChangingEv(b11_unk_73c)) {
        p11::FtrSync_RequestAct((s32)this, 1, 0xff, 1);
    }
}

BOOL FtrComputer::enterFtrAct00() {
    p11::_ZN8FtrActor10playSound2Ev(this);
    p11::_ZN9FtrSwitch3setEji(b11_unk_73c, 0, 0);
    p11::_ZN8FtrActor8playAnimEiiij(this, 0, 1, 0x1000, 0);
    return TRUE;
}

void FtrComputer::execFtrAct() {
    static void (FtrComputer::*tbl[2])() = {&FtrComputer::execFtrAct00, &FtrComputer::execFtrAct01};
    if (unk_898 < 2) {
        (this->*tbl[unk_898])();
    }
}

BOOL FtrComputer::changeAct(u32 a, u8 b) {
    FtrActor::changeAct(a, b);
    static BOOL (FtrComputer::*tbl[2])() = {&FtrComputer::enterFtrAct00, &FtrComputer::enterFtrAct01};
    if (a < 2) {
        if ((this->*tbl[a])()) {
            unk_898 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrComputer::getActSwitchState(u32 a) {
    if (a < 2) {
        return p11::data_ov004_02240024[a];
    }
    return 0;
}

BOOL FtrComputer::vfunc_0c() {
    return TRUE;
}

BOOL FtrComputer::updateActive() {
    execFtrAct();
    p11::_ZN13FtrGlowMatSet6updateEv(&unk_840);
    return TRUE;
}

BOOL FtrComputer::initModel() {
    p11::_ZN8FtrActor9initAnimsEiiii(this, 0, 1, 0x1000, 0);
    s32 t = b11_unk_590;
    s32 r = p11::_ZN9FtrSwitch4isOnEv(b11_unk_73c);
    p11::_ZN13FtrGlowMatSet4initEjj(&unk_840, t, r);
    if (b11_unk_768 == 1) {
        p11::FtrSync_ChangeAct((s32)this, 0, 0xff, 1);
    } else if (p11::_ZN9FtrSwitch4isOnEv(b11_unk_73c) && !p11::FtrMgr_IsShopScene()) {
        changeAct(1, 0xff);
    } else {
        changeAct(0, 0xff);
    }
    return TRUE;
}

extern "C" void FtrComputer_Create() {
    new FtrComputer;
}

// ---------------------------------------------------------------------------------------------------------------------
// FtrHeadwear

void FtrHeadwear::execFtrAct01() {
    p11::_ZN9FtrSwitch3setEji(b11_unk_73c, 1, 0);
    p11::_ZN11FtrVisNodes10setVisibleEj(b11_unk_760, 1);
}

BOOL FtrHeadwear::enterFtrAct01() {
    p11::_ZN9FtrSwitch3setEji(b11_unk_73c, 1, 0);
    return TRUE;
}

void FtrHeadwear::execFtrAct00() {
    p11::_ZN9FtrSwitch3setEji(b11_unk_73c, 0, 0);
    p11::_ZN11FtrVisNodes10setVisibleEj(b11_unk_760, 0);
}

BOOL FtrHeadwear::enterFtrAct00() {
    p11::_ZN9FtrSwitch3setEji(b11_unk_73c, 0, 0);
    return TRUE;
}

void FtrHeadwear::execFtrAct() {
    static void (FtrHeadwear::*tbl[2])() = {&FtrHeadwear::execFtrAct00, &FtrHeadwear::execFtrAct01};
    if (unk_840 < 2) {
        (this->*tbl[unk_840])();
    }
}

BOOL FtrHeadwear::changeAct(u32 a, u8 b) {
    FtrActor::changeAct(a, b);
    static BOOL (FtrHeadwear::*tbl[2])() = {&FtrHeadwear::enterFtrAct00, &FtrHeadwear::enterFtrAct01};
    if (a < 2) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrHeadwear::getActSwitchState(u32 a) {
    if (a < 2) {
        return p11::data_ov004_02240038[a];
    }
    return 0;
}

void FtrHeadwear::syncAct1() {
    p11::FtrSync_RequestAct((s32)this, 1, 0xff, 1);
}

void FtrHeadwear::syncAct0() {
    p11::FtrSync_RequestAct((s32)this, 0, 0xff, 1);
}

BOOL FtrHeadwear::isVisible() {
    if (unk_841 != 0) {
        return TRUE;
    }
    if (unk_840 == 1) {
        return TRUE;
    }
    return FALSE;
}

BOOL FtrHeadwear::vfunc_0c() {
    return TRUE;
}

BOOL FtrHeadwear::updateActive() {
    execFtrAct();
    return TRUE;
}

static inline BOOL Unk_ov004_0220af74_Range(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 x = *p;
    if (x >= lo && x <= hi) {
        r = TRUE;
    }
    return r;
}

BOOL FtrHeadwear::initModel() {
    volatile u16 v = p11::Item_MakeFurniture(p11::FtrActor_GetFtrIndex(this), 0);
    if (Unk_ov004_0220af74_Range(&v, 0x4124, 0x4223)) {
        unk_841 = 1;
    }
    if (p11::_ZN9FtrSwitch4isOnEv(b11_unk_73c)) {
        changeAct(1, 0xff);
    } else {
        changeAct(0, 0xff);
    }
    return TRUE;
}

extern "C" void FtrHeadwear_Create() {
    new FtrHeadwear;
}

// ---------------------------------------------------------------------------------------------------------------------
// FtrKind25

BOOL FtrKind25::vfunc_0c() {
    return TRUE;
}

BOOL FtrKind25::updateActive() {
    return TRUE;
}

BOOL FtrKind25::initModel() {
    unk_840 = p11::_ZN12FtrPreviewer14getSampleIndexEv(p11::FtrPreviewer_GetInstance());
    return TRUE;
}

extern "C" void FtrKind25_Create() {
    new FtrKind25;
}

// ---------------------------------------------------------------------------------------------------------------------
// FtrCarpetSample

BOOL FtrCarpetSample::isVisible() {
    if (unk_842 >= 2) {
        return TRUE;
    }
    return FALSE;
}

BOOL FtrCarpetSample::vfunc_0c() {
    return TRUE;
}

BOOL FtrCarpetSample::updateActive() {
    if (unk_842 < 2) {
        unk_842++;
    }
    return TRUE;
}

BOOL FtrCarpetSample::initModel() {
    unk_840 = p11::_ZN12FtrPreviewer14getSampleIndexEv(p11::FtrPreviewer_GetInstance());
    unk_842 = 0;
    u16 t = unk_840;
    s32 w;
    if (t < 0x44) {
        w = (u16)(t + 0x1144);
    } else {
        w = 0x1144;
    }
    u16 v = w;
    p11::func_0203c23c(p11::_ZN12FtrPreviewer14getFloorBufferEv(p11::FtrPreviewer_GetInstance()), &v);
    s32 h = b11_unk_590;
    s32 r = p11::func_0203c234(p11::_ZN12FtrPreviewer14getFloorBufferEv(p11::FtrPreviewer_GetInstance()));
    if (p11::_ZN14MatTexVramTask7requestEPvjS0_jj(&unk_844, h, p11::data_ov004_0224bb50, r, 0, 0)) {
        return TRUE;
    }
    return FALSE;
}

// Out-of-line constructors (defined after the factories so they are not inlined)
FtrSingingInsect::FtrSingingInsect() {}
FtrComputer::FtrComputer() {}
FtrHeadwear::FtrHeadwear() {}
FtrKind25::FtrKind25() {}
FtrComputer::~FtrComputer() {}
FtrHeadwear::~FtrHeadwear() {}
FtrKind25::~FtrKind25() {}
FtrSingingInsect::~FtrSingingInsect() {}

// ---- part 12: from unk_0220b1e4.cpp
namespace p12 {
extern "C" {
BOOL FtrActor_StepAnims(void *self);
void FtrActor_PlayAnimsFromLastFrame(void *self, s32 a, s32 b, s32 c);
}
}

// The 0x5d0 sub-object and 0x590 field are inside the opaque range; use these helpers.
#define BASE_U8(o) (*(u8 *)((u8 *)this + (o)))
#define BASE_S32(o) (*(s32 *)((u8 *)this + (o)))
#define PT(o) ((void *)((u8 *)this + (o)))

struct Unk_020cbb18_G {
    u8 pad_00[0x68];
    s32 unk_68;
};

namespace p12 {
extern "C" {
extern Unk_020cbb18_G *gCommManager;
extern u8 data_ov004_02240064[];
extern u8 data_ov004_0224bb60[];

void _ZN9FtrSwitch3setEji(void *p, s32 a, s32 b);
BOOL _ZN9FtrSwitch10isChangingEv(void *p);
BOOL _ZN9FtrSwitch4isOnEv(void *p);
void _ZN15FtrSoundEmitter8playOnceEjj(void *p, s32 a, void *q);
void _ZN15FtrSoundEmitter8setPitchEj(void *p, s32 a);
BOOL FtrMgr_IsShopScene();
void *FtrPreviewer_GetInstance();
void *_ZN12FtrPreviewer14getSampleIndexEv(void *o);
void *_ZN12FtrPreviewer13getWallBufferEv(void *o);
void Wallpaper_LoadTexture(void *o, u16 *p);
u32 Wallpaper_GetTex(void *o);
BOOL _ZN14MatTexVramTask7requestEPvjS0_jj(void *o, void *a, u32 b, void *c, u32 d, u32 e);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *o, u32 a);
s32 FtrSync_RequestAct(void *o, s32 a, u8 c, u8 d);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData12getInventoryEv(void *o);
s32 _ZN15PlayerInventory13getTotalBellsEi(void *o, s32 a);
void func_02097ac4(void *o, s32 a, s32 b);
}
}

// ---------------------------------------------------------------------------
// Class LampLights (vtable 0x0224981c, secondary 0x022498c8), size 0x86c

FtrCarpetSample::~FtrCarpetSample() {}

FtrCarpetSample::FtrCarpetSample() {}

extern "C" void FtrCarpetSample_Create() {
    new FtrCarpetSample;
}

// ---------------------------------------------------------------------------
// Class LightLevel (vtable 0x02249ba0), size 0x86c

class FtrWallpaperSample : public FtrActor {
public:
    FtrWallpaperSample();
    virtual ~FtrWallpaperSample();
    virtual BOOL vfunc_0c();
    virtual BOOL initModel();
    virtual BOOL updateActive();
    virtual BOOL isVisible();

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u8 unk_842;
    /* 0x843 */ u8 pad_843;
    /* 0x844 */ MatTexVramTask unk_844;
};

BOOL FtrWallpaperSample::isVisible() {
    if (unk_842 >= 2) return 1;
    return 0;
}

BOOL FtrWallpaperSample::vfunc_0c() {
    return TRUE;
}

BOOL FtrWallpaperSample::updateActive() {
    if (unk_842 < 2) unk_842++;
    return TRUE;
}

BOOL FtrWallpaperSample::initModel() {
    u16 v;
    u16 tmp;
    u32 s;
    u32 t;
    unk_840 = (u16)p12::_ZN12FtrPreviewer14getSampleIndexEv(p12::FtrPreviewer_GetInstance());
    unk_842 = 0;
    if (unk_840 < 0x44) {
        v = unk_840 + 0x1100;
    } else {
        v = 0x1100;
    }
    tmp = v;
    p12::Wallpaper_LoadTexture(p12::_ZN12FtrPreviewer13getWallBufferEv(p12::FtrPreviewer_GetInstance()), &tmp);
    s = BASE_S32(0x590);
    t = p12::Wallpaper_GetTex(p12::_ZN12FtrPreviewer13getWallBufferEv(p12::FtrPreviewer_GetInstance()));
    if (p12::_ZN14MatTexVramTask7requestEPvjS0_jj(&unk_844, (void *)s, (u32)p12::data_ov004_0224bb60, (void *)t, 0, 0) != 0) return TRUE;
    return FALSE;
}

FtrWallpaperSample::~FtrWallpaperSample() {}

FtrWallpaperSample::FtrWallpaperSample() {}

extern "C" void FtrWallpaperSample_Create() {
    new FtrWallpaperSample;
}

// ---------------------------------------------------------------------------
// Class C (vtable 0x02249ccc), size 0x844

class FtrMetronome;
typedef void (FtrMetronome::*Unk_ov004_0220b73c_Fn)();
typedef BOOL (FtrMetronome::*Unk_ov004_0220b7d4_Fn)();

class FtrMetronome : public FtrActor {
public:
    FtrMetronome();
    virtual ~FtrMetronome();
    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 a, u8 b);
    virtual u8 getActSwitchState(u32 a);
    virtual BOOL initModel();
    virtual BOOL updateActive();
    virtual BOOL updateAppearRemove();

    void execFtrAct04();
    BOOL enterFtrAct04();
    void execFtrAct03();
    BOOL enterFtrAct03();
    void execFtrAct02();
    BOOL enterFtrAct02();
    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 unk_841;
    /* 0x842 */ u8 unk_842;
    /* 0x843 */ u8 unk_843;
};

void FtrMetronome::execFtrAct04() {
    if (isPreview() == 0) {
        p12::_ZN15FtrSoundEmitter8playOnceEjj(PT(0x794), 0x42a, PT(0x7b4));
        if (unk_842 != 0) {
            p12::_ZN15FtrSoundEmitter8setPitchEj(PT(0x794), 1);
            unk_842 = 0;
        }
    }
    p12::_ZN9FtrSwitch3setEji(PT(0x73c), 0, 0);
    if (p12::FtrActor_StepAnims(this) != 0) {
        changeAct(0, 0xff);
    }
}

BOOL FtrMetronome::enterFtrAct04() {
    p12::_ZN9FtrSwitch3setEji(PT(0x73c), 0, 0);
    p12::FtrActor_PlayAnimsFromLastFrame(this, 0, 3, 0x1000);
    unk_842 = 1;
    return TRUE;
}

void FtrMetronome::execFtrAct03() {
    if (isPreview() == 0) {
        p12::_ZN15FtrSoundEmitter8playOnceEjj(PT(0x794), 0x42a, PT(0x7b4));
    }
    p12::_ZN9FtrSwitch3setEji(PT(0x73c), 0, 0);
    if (isPreview() == 0) {
        if (p12::_ZN13AnimFrameCtrl14hasPassedFrameEi(PT(0x5d0), 0) != 0) {
            p12::_ZN15FtrSoundEmitter8setPitchEj(PT(0x794), 1);
        } else if (p12::_ZN13AnimFrameCtrl14hasPassedFrameEi(PT(0x5d0), 0x14) != 0) {
            if ((unk_841 & 1) != 0) {
                p12::_ZN15FtrSoundEmitter8setPitchEj(PT(0x794), 2);
            } else {
                p12::_ZN15FtrSoundEmitter8setPitchEj(PT(0x794), 1);
            }
            unk_841++;
        }
    }
    if (p12::FtrActor_StepAnims(this) != 0) {
        changeAct(4, 0xff);
    }
}

BOOL FtrMetronome::enterFtrAct03() {
    p12::_ZN9FtrSwitch3setEji(PT(0x73c), 0, 0);
    playSound2();
    playAnim(1, 1, 0x1000, 0xffff);
    return TRUE;
}

void FtrMetronome::execFtrAct02() {
    if (isPreview() == 0) {
        p12::_ZN15FtrSoundEmitter8playOnceEjj(PT(0x794), 0x42a, PT(0x7b4));
    }
    p12::FtrActor_StepAnims(this);
    if (isPreview() == 0) {
        if (p12::_ZN13AnimFrameCtrl14hasPassedFrameEi(PT(0x5d0), 0) != 0) {
            p12::_ZN15FtrSoundEmitter8setPitchEj(PT(0x794), 1);
        } else if (p12::_ZN13AnimFrameCtrl14hasPassedFrameEi(PT(0x5d0), 0x14) != 0) {
            if ((unk_841 & 1) != 0) {
                p12::_ZN15FtrSoundEmitter8setPitchEj(PT(0x794), 2);
            } else {
                p12::_ZN15FtrSoundEmitter8setPitchEj(PT(0x794), 1);
            }
            unk_841++;
        }
    }
    if (p12::_ZN9FtrSwitch10isChangingEv(PT(0x73c)) != 0) {
        p12::FtrSync_RequestAct(this, 3, 0xff, 1);
    }
}

BOOL FtrMetronome::enterFtrAct02() {
    p12::_ZN9FtrSwitch3setEji(PT(0x73c), 1, 0);
    p12::FtrActor_PlayAnimsFromLastFrame(this, 1, 0, 0x1000);
    return TRUE;
}

void FtrMetronome::execFtrAct01() {
    if (isPreview() == 0) {
        p12::_ZN15FtrSoundEmitter8playOnceEjj(PT(0x794), 0x42a, PT(0x7b4));
    }
    p12::_ZN9FtrSwitch3setEji(PT(0x73c), 1, 0);
    if (p12::FtrActor_StepAnims(this) != 0) {
        changeAct(2, 0xff);
    }
}

BOOL FtrMetronome::enterFtrAct01() {
    p12::_ZN9FtrSwitch3setEji(PT(0x73c), 1, 0);
    playAnim(0, 1, 0x1000, 0);
    playSound1();
    return TRUE;
}

void FtrMetronome::execFtrAct00() {
    if (p12::_ZN9FtrSwitch10isChangingEv(PT(0x73c)) != 0) {
        p12::FtrSync_RequestAct(this, 1, 0xff, 1);
    }
}

BOOL FtrMetronome::enterFtrAct00() {
    p12::_ZN9FtrSwitch3setEji(PT(0x73c), 0, 0);
    playAnim(0, 3, 0x1000, 0);
    return TRUE;
}

void FtrMetronome::execFtrAct() {
    static Unk_ov004_0220b73c_Fn tbl[5] = {&FtrMetronome::execFtrAct00, &FtrMetronome::execFtrAct01,
                                           &FtrMetronome::execFtrAct02, &FtrMetronome::execFtrAct03,
                                           &FtrMetronome::execFtrAct04};
    u32 i = unk_843;
    if (i < 5) {
        (this->*tbl[i])();
    }
}

BOOL FtrMetronome::changeAct(u32 idx, u8 b) {
    FtrActor::changeAct(idx, b);
    static Unk_ov004_0220b7d4_Fn tbl[5] = {&FtrMetronome::enterFtrAct00, &FtrMetronome::enterFtrAct01,
                                           &FtrMetronome::enterFtrAct02, &FtrMetronome::enterFtrAct03,
                                           &FtrMetronome::enterFtrAct04};
    if (idx < 5) {
        if ((this->*tbl[idx])() != 0) {
            unk_843 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrMetronome::getActSwitchState(u32 idx) {
    if (idx < 5) return p12::data_ov004_02240064[idx];
    return 0;
}

BOOL FtrMetronome::vfunc_0c() {
    return TRUE;
}

BOOL FtrMetronome::updateAppearRemove() {
    if (isPreview() == 0) {
        if (isRemoving() == 0) {
            p12::_ZN15FtrSoundEmitter8playOnceEjj(PT(0x794), 0x42a, PT(0x7b4));
        }
    }
    return TRUE;
}

BOOL FtrMetronome::updateActive() {
    execFtrAct();
    return TRUE;
}

BOOL FtrMetronome::initModel() {
    unk_840 = 0;
    initAnims(0, 1, 0x1000, 0);
    if (p12::_ZN9FtrSwitch4isOnEv(PT(0x73c)) != 0 && p12::FtrMgr_IsShopScene() == 0) {
        changeAct(2, 0xff);
    } else {
        changeAct(0, 0xff);
    }
    return TRUE;
}

FtrMetronome::~FtrMetronome() {}

FtrMetronome::FtrMetronome() {}

extern "C" void FtrMetronome_Create() {
    new FtrMetronome;
}

// ------------------------------------------------------------------ class FtrPiggyBank (vtable 0x02249f24)
class FtrPiggyBank : public FtrActor {
public:
    FtrPiggyBank();
    virtual ~FtrPiggyBank();
    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 a, u8 v);
    virtual BOOL initModel();
    virtual BOOL updateActive();

    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
};
typedef void (FtrPiggyBank::*Unk_ov004_0220ba88_Fn)();

void FtrPiggyBank::execFtrAct01() {
    execFtrAct00();
}

BOOL FtrPiggyBank::enterFtrAct01() {
    void *r5;
    playSound1();
    if (b12_unk_778 == p12::gCommManager->unk_68) {
        r5 = p12::PlayerData_GetCurrent();
        if (r5 != 0) {
            if (p12::_ZN15PlayerInventory13getTotalBellsEi(p12::_ZN10PlayerData12getInventoryEv(r5), 0) > 0) {
                void *r4 = p12::_ZN10PlayerData12getInventoryEv(r5);
                p12::func_02097ac4(r4, p12::_ZN15PlayerInventory13getTotalBellsEi(p12::_ZN10PlayerData12getInventoryEv(r5), 0) - 1, 0);
            }
        }
    }
    return TRUE;
}

void FtrPiggyBank::execFtrAct00() {
    if (p12::_ZN9FtrSwitch10isChangingEv(PT(0x73c)) != 0) {
        p12::FtrSync_RequestAct(this, 1, p12::gCommManager->unk_68, 1);
    } else if (isPreview() != 0) {
        changeAct(1, 0xff);
    }
}

BOOL FtrPiggyBank::enterFtrAct00() {
    return TRUE;
}

void FtrPiggyBank::execFtrAct() {
    static Unk_ov004_0220ba88_Fn tbl[2] = {&FtrPiggyBank::execFtrAct00, &FtrPiggyBank::execFtrAct01};
    u32 i = unk_840;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

// ---- part 13: from unk_0220baf4.cpp

struct Unk_ov004_0220bdbc_P {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_ov004_0220c0bc_Mtx {
    s32 m[9];
};

struct Unk_ov004_0220c0bc_B {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u8 pad_04[0x24];
    /* 0x28 */ s32 unk_28[9];
};

struct Unk_ov004_0220c0bc_Obj {
    u8 pad_00[0xb4];
    /* 0xb4 */ Unk_ov004_0220c0bc_B *unk_b4;
};

struct Unk_ov004_0220c0bc_Actor {
    u8 pad_00[0x8e];
    /* 0x8e */ s16 unk_8e;
};
namespace p13 {
extern "C" {
u32 FtrActor_GetFtrIndex(void *self);
Unk_ov004_0220c0bc_Actor *FtrActor_GetParent(void *self);
}
}

namespace p13 {
extern "C" {
extern u16 gFtrSoundNone;
extern char data_ov004_0224bb70[];
extern char data_ov004_0224bb80[];
extern char data_ov004_0224bb88[];
extern s16 data_02135f44[];

u32 FtrSound_GetSe1(u32 a);
BOOL _ZN9FtrSwitch10isChangingEv(void *p);
s32 _ZN12FtrStackLink11getRelAngleEv(void *p);
u32 Item_MakeFurniture(u32 a, s32 b);
void Snd_MelodyBeatStart(void *p, u32 c);
void Snd_MelodyBeatStop(void *p);
void Snd_MelodyBeatUpdate(void *p, void *v);
void Snd_MelodyBeatInit(void *p);
void FtrSync_RequestAct(void *p, s32 a, s32 b, s32 c);
void _ZN9Character13func_0203e47cEi(void *p, TalkMsgRequest *q);
void _ZN9Character13func_0203e488Ei(void *p, TalkMsgRequest *q);
s32 TalkRequest_SetTargetDone(void *p);
s32 TalkRequest_AddPlayerTalk6(void *p, s32 a);
s32 FX_Div(s32 a, s32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void MTX_RotY33_(void *out, s32 a, s32 b);
void MTX_Concat33(void *a, void *b, void *c);
s32 func_020e761c(s32 *p, s32 target, s32 step);
s32 _ZN12G3dResAccess13func_02056fccEi(u32 a, const char *s);
void _ZN12Unk_02003c3013func_02003e50Ev(void *p);
void func_02003e70(void *p, s32 a, s32 b, s32 c);
void _ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(void *p, void *v);
void _ZN12Unk_02003c3013func_02003eccEv(void *p);
u32 PatternTexCache_Get(void);
u32 _ZN15PatternTexCache13getAbleTexKeyEi(u32 a, u32 b);
s32 _ZN15PatternTexCache21testAndClearAbleDirtyEi(u32 a, u32 b);
void Model_BindMatTexByIdx(u32 a, const char *s, u32 c, s32 d, s32 e);
void func_020f5010(void *p);
void func_020f5014(void *p);
}
}

// ------------------------------------------------------------------ class LampLights (vtable 0x02249f24)

typedef BOOL (FtrPiggyBank::*Unk_ov004_0220baf4_Fn)();

BOOL FtrPiggyBank::changeAct(u32 a, u8 v) {
    FtrActor::changeAct(a, v);
    static Unk_ov004_0220baf4_Fn tbl[2] = {
        &FtrPiggyBank::enterFtrAct00,
        &FtrPiggyBank::enterFtrAct01,
    };
    if ((u32)a < 2) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL FtrPiggyBank::vfunc_0c() {
    return TRUE;
}

BOOL FtrPiggyBank::updateActive() {
    execFtrAct();
    return TRUE;
}

BOOL FtrPiggyBank::initModel() {
    changeAct(0, 0xff);
    return TRUE;
}

FtrPiggyBank::~FtrPiggyBank() {}

FtrPiggyBank::FtrPiggyBank() {}

extern "C" void FtrPiggyBank_Create() {
    new FtrPiggyBank;
}

// ------------------------------------------------------------------ class LightLevel (vtable 0x0224a050)

class FtrInstrument : public FtrActor {
public:
    FtrInstrument();
    virtual ~FtrInstrument();
    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 a, u8 v);
    virtual BOOL initModel();
    virtual BOOL updateActive();
    virtual BOOL updateAppearRemove();

    /* 0x840 */ u32 unk_840[3];
};

BOOL FtrInstrument::changeAct(u32 a, u8 v) {
    FtrActor::changeAct(a, v);
    u32 c = p13::FtrSound_GetSe1(p13::FtrActor_GetFtrIndex(this));
    if (c != p13::gFtrSoundNone) {
        p13::Snd_MelodyBeatStart(unk_840, c);
    }
    return TRUE;
}

BOOL FtrInstrument::vfunc_0c() {
    p13::Snd_MelodyBeatStop(unk_840);
    return TRUE;
}

BOOL FtrInstrument::updateAppearRemove() {
    Unk_ov004_0220bc80_V3 v;
    v.x = b13_unk_7b4.x;
    v.y = b13_unk_7b4.y;
    v.z = b13_unk_7b4.z;
    p13::Snd_MelodyBeatUpdate(unk_840, &v);
    return TRUE;
}

BOOL FtrInstrument::updateActive() {
    if (p13::_ZN9FtrSwitch10isChangingEv(b13_f_73c)) {
        p13::FtrSync_RequestAct(this, 0, 0xff, 1);
    }
    updateAppearRemove();
    return TRUE;
}

BOOL FtrInstrument::initModel() {
    p13::Snd_MelodyBeatInit(unk_840);
    return TRUE;
}

FtrInstrument::~FtrInstrument() {
    p13::func_020f5010(unk_840);
}

FtrInstrument::FtrInstrument() {
    p13::func_020f5014(unk_840);
}

extern "C" void FtrInstrument_Create() {
    new FtrInstrument;
}

// ------------------------------------------------------------------ class C (vtable 0x0224a500)
class FtrVillagerPic : public FtrActor {
public:
    FtrVillagerPic();
    virtual ~FtrVillagerPic();
    virtual BOOL vfunc_0c();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL initModel();
    virtual BOOL updateActive();

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

    /* 0x840 */ s32 unk_840;
};

typedef BOOL (FtrVillagerPic::*Unk_ov004_0224a500_Fn)();
typedef void (FtrVillagerPic::*Unk_ov004_0220bec8_Fn)();

void FtrVillagerPic::execTalkAct03() {
    if (((Unk_ov004_0220bdbc_P *)unk_3c)) {
        if (((Unk_ov004_0220bdbc_P *)unk_3c)->unk_04 == 0) {
            p13::_ZN9Character13func_0203e47cEi(this, this);
            p13::TalkRequest_SetTargetDone(this);
        }
    }
}

BOOL FtrVillagerPic::enterTalkAct03() {
    return TRUE;
}

void FtrVillagerPic::execTalkAct02() {
    if (((Unk_ov004_0220bdbc_P *)unk_3c)) {
        if (((Unk_ov004_0220bdbc_P *)unk_3c)->unk_04) {
            setTalkAct(3);
        }
    }
}

struct Unk_ov004_0220be14_Chk {
    static inline BOOL RV(volatile u16 *p, u32 lo, u32 hi) {
        BOOL r = FALSE;
        if (*p >= lo && *p <= hi) r = TRUE;
        return r;
    }
    static inline BOOL R(u16 *p, u32 lo, u32 hi) {
        BOOL r = FALSE;
        if (*p >= lo && *p <= hi) r = TRUE;
        return r;
    }
};

BOOL FtrVillagerPic::enterTalkAct02() {
    volatile u16 va[2];
    s32 idx;
    p13::_ZN9Character13func_0203e488Ei(this, this);
    ((Unk_ov004_0220bdbc_P *)unk_3c)->unk_08 = 1;
    va[1] = p13::Item_MakeFurniture(p13::FtrActor_GetFtrIndex(this), 0);
    BOOL r = FALSE;
    u32 t = va[1];
    if (t >= 0x47d8 && t <= 0x4a47) r = TRUE;
    if (r) idx = (s32)(t - 0x47d8) >> 2;
    else idx = -1;
    MsgRequest::setFileName(p13::data_ov004_0224bb70);
    unk_1e = idx;
    return TRUE;
}

void FtrVillagerPic::execTalkAct01() {
    setTalkAct(2);
}

BOOL FtrVillagerPic::enterTalkAct01() {
    return TRUE;
}

void FtrVillagerPic::execTalkAct00() {
    if (p13::_ZN9FtrSwitch10isChangingEv(b13_f_73c)) {
        p13::TalkRequest_AddPlayerTalk6(this, 0);
    }
}

BOOL FtrVillagerPic::enterTalkAct00() {
    return TRUE;
}

void FtrVillagerPic::execTalkAct() {
    static Unk_ov004_0220bec8_Fn tbl[4] = {
        &FtrVillagerPic::execTalkAct00,
        &FtrVillagerPic::execTalkAct01,
        &FtrVillagerPic::execTalkAct02,
        &FtrVillagerPic::execTalkAct03,
    };
    if (unk_840 < 4) {
        (this->*tbl[unk_840])();
    }
}

BOOL FtrVillagerPic::setTalkAct(s32 idx) {
    static Unk_ov004_0224a500_Fn tbl[4] = {
        &FtrVillagerPic::enterTalkAct00,
        &FtrVillagerPic::enterTalkAct01,
        &FtrVillagerPic::enterTalkAct02,
        &FtrVillagerPic::enterTalkAct03,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            unk_840 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void FtrVillagerPic::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 1:
        setTalkAct(1);
        break;
    case 8:
        setTalkAct(0);
        break;
    }
}

BOOL FtrVillagerPic::vfunc_0c() {
    return TRUE;
}

BOOL FtrVillagerPic::updateActive() {
    execTalkAct();
    return TRUE;
}

BOOL FtrVillagerPic::initModel() {
    return TRUE;
}

FtrVillagerPic::~FtrVillagerPic() {}

FtrVillagerPic::FtrVillagerPic() {}

extern "C" void FtrVillagerPic_Create() {
    new FtrVillagerPic;
}

// ------------------------------------------------------------------ class WindowLight (vtable 0x0224a62c)
class FtrCompass : public FtrActor {
public:
    FtrCompass();
    virtual ~FtrCompass();
    virtual BOOL vfunc_0c();
    virtual void vfunc_6c(s32 a, void *b);
    virtual BOOL initModel();
    virtual BOOL updateActive();
    virtual void onRotateStart();
    virtual void onRotateUpdate();

    /* 0x840 */ s16 unk_840;
    /* 0x842 */ volatile s16 unk_842;
    /* 0x844 */ volatile s16 unk_844;
    /* 0x846 */ s16 pad_846;
    /* 0x848 */ volatile s32 unk_848;
    /* 0x84c */ s32 unk_84c;
};

void FtrCompass::vfunc_6c(s32 a, void *b) {
    Unk_ov004_0220c0bc_Obj *p = (Unk_ov004_0220c0bc_Obj *)b;
    if (unk_840 == a) {
        s32 *dst = &p->unk_b4->unk_28[0];
        s32 t = p13::func_01ffcb0c(p13::FX_Div(unk_84c, 0x168000), 0x10000000);
        s32 r = (t << 4) >> 16;
        s32 ang;
        Unk_ov004_0220c0bc_Actor *act = p13::FtrActor_GetParent(this);
        if (act) {
            s32 e = act->unk_8e;
            ang = (s16)(r - (e + p13::_ZN12FtrStackLink11getRelAngleEv(b13_f_178)));
        } else {
            ang = (s16)(r - *(s16 *)((u8 *)this + 0x8e));
        }
        s32 idx = ((u16)ang >> 4) * 2;
        Unk_ov004_0220c0bc_Mtx mtx;
        p13::MTX_RotY33_(&mtx, p13::data_02135f44[idx], p13::data_02135f44[idx + 1]);
        if (p->unk_b4->unk_00 & 2) {
            *(Unk_ov004_0220c0bc_Mtx *)dst = mtx;
        } else {
            p13::MTX_Concat33(dst, &mtx, dst);
        }
        p->unk_b4->unk_00 &= ~2;
    }
}

extern "C" void _ZN10FtrCompass14onRotateUpdateEv(FtrCompass *self, BOOL v) {
    if (++self->unk_842 == 8) {
        self->unk_844 = 0;
        if (v) {
            self->unk_848 = p13::func_01ffcb0c(self->unk_848, p13::data_02135f44[((u16)self->unk_844 >> 4) * 2]) + 0x2d000;
            if (self->unk_848 > 0x2d000) self->unk_848 = 0x2d000;
        } else {
            self->unk_848 = p13::func_01ffcb0c(self->unk_848, p13::data_02135f44[((u16)self->unk_844 >> 4) * 2]) - 0x2d000;
            if (self->unk_848 < -0x2d000) self->unk_848 = -0x2d000;
        }
    }
}

void FtrCompass::onRotateStart() {
    unk_842 = 0;
}

BOOL FtrCompass::vfunc_0c() {
    return TRUE;
}

BOOL FtrCompass::updateActive() {
    p13::func_020e761c((s32 *)&unk_848, 0, 0x5a00);
    if (unk_848 == 0) {
        unk_844 = 0;
    } else {
        unk_844 = unk_844 + 0x960;
    }
    p13::func_020e761c(&unk_84c, p13::func_01ffcb0c(unk_848, unk_844), 0x5a00);
    return TRUE;
}

BOOL FtrCompass::initModel() {
    unk_840 = p13::_ZN12G3dResAccess13func_02056fccEi(b13_unk_590, p13::data_ov004_0224bb80);
    return TRUE;
}

FtrCompass::~FtrCompass() {}

FtrCompass::FtrCompass() {
    unk_840 = -1;
}

extern "C" void FtrCompass_Create() {
    new FtrCompass;
}

// ------------------------------------------------------------------ class F (vtable 0x0224a884)
class FtrDesignDisplay : public FtrActor {
public:
    FtrDesignDisplay();
    virtual ~FtrDesignDisplay();
    virtual BOOL vfunc_0c();
    virtual BOOL initModel();
    virtual BOOL updateActive();

    /* 0x840 */ s32 unk_840;
    /* 0x844 */ u32 unk_844[0x40 / 4];
    /* 0x884 */ u8 unk_884;
};

BOOL FtrDesignDisplay::vfunc_0c() {
    if (unk_884) {
        p13::_ZN12Unk_02003c3013func_02003e50Ev(&unk_844);
    }
    return TRUE;
}

BOOL FtrDesignDisplay::updateActive() {
    if (unk_884) {
        Unk_ov004_0220bc80_V3 v = b13_unk_7b4;
        if (p13::_ZN15PatternTexCache21testAndClearAbleDirtyEi(p13::PatternTexCache_Get(), unk_840)) {
            p13::func_02003e70(&unk_844, 0x50, 0x7f, 0);
        }
        p13::_ZN12Unk_02003c4013func_02003e80EP16Unk_02003a6c_Vec(&unk_844, &v);
    }
    return TRUE;
}

BOOL FtrDesignDisplay::initModel() {
    volatile u16 va[2];
    va[0] = p13::Item_MakeFurniture(p13::FtrActor_GetFtrIndex(this), 0);
    unk_840 = 0;
    BOOL r = FALSE;
    u32 t = va[0];
    if (t >= 0x3e04 && t <= 0x3e23) r = TRUE;
    if (r) {
        s32 x;
        if (t >= 0x3e04 && t <= 0x3e23) {
            x = (s32)(t - 0x3e04) >> 2;
        } else {
            x = -1;
        }
        unk_840 = x & 7;
        u32 o = p13::PatternTexCache_Get();
        u32 q = p13::_ZN15PatternTexCache13getAbleTexKeyEi(o, (u8)unk_840);
        if (q != 0) {
            p13::Model_BindMatTexByIdx(b13_unk_590, p13::data_ov004_0224bb88, q, 0, 0);
            if (unk_884 == 0) {
                p13::_ZN12Unk_02003c3013func_02003eccEv(&unk_844);
                unk_884 = 1;
            }
            return TRUE;
        }
    }
    return FALSE;
}

// ---- part 14: from unk_0220c47c.cpp
namespace p14 {
extern "C" {
u32 FtrActor_GetHeap(void *self);
u32 FtrActor_GetFtrIndex(void *self);
}
}

// Shared parent of the three/four classes below; slots 0x64/0x6c/0x70/0x74 take parameters in the overrides here.

struct Unk_ov004_0220cca4_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0220cca4_Src {
    /* 0x00 */ u8 pad_00[0x4c];
    /* 0x4c */ Unk_ov004_0220cca4_Vec unk_4c;
};

struct Unk_ov004_0220cca4_Arg {
    /* 0x00 */ u8 pad_00[0xb4];
    /* 0xb4 */ Unk_ov004_0220cca4_Src *unk_b4;
};

struct Unk_ov004_0220cca4_Copy {
    s64 v[6];
};

namespace p14 {
extern "C" {
void _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(void *, void *, s32, s32);
}
}
namespace p14 {
extern "C" {
void GroundInfo_Destruct(void *);
}
}
namespace p14 {
extern "C" {
s32 _ZN14GroundInfoBase9getHeightEi(void *, s32);
}
}

struct Unk_ov004_0220c534_Arg {
    /* 0x00 */ u8 pad_00[0xb8];
    /* 0xb8 */ s32 *unk_b8;
};

// vtable 0x0224a884, size 0x888

// vtable 0x0224a9b0, size 0x844
class FtrMyDesign : public FtrActor {
public:
    FtrMyDesign();
    virtual ~FtrMyDesign();

    virtual BOOL vfunc_0c();
    virtual void vfunc_64(s32 a, Unk_ov004_02206ec8_Ctx *b);
    virtual BOOL initModel();
    virtual BOOL updateActive();

    /* 0x840 */ s32 unk_840;
};

// vtable 0x0224ad34, size 0x874
class FtrShirt : public FtrActor {
public:
    FtrShirt();
    virtual ~FtrShirt();

    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 a, u8 b);
    virtual u8 getActSwitchState(u32 a);
    virtual BOOL initModel();
    virtual BOOL updateActive();
    virtual BOOL needsTexCopy();

    BOOL execFtrAct01();
    BOOL enterFtrAct01();
    BOOL execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();
    s32 syncAct0();
    s32 syncAct1();

    /* 0x840 */ s32 unk_840;
    /* 0x844 */ u8 f_844[0x28];
    /* 0x86c */ u8 unk_86c;
    /* 0x86d */ u8 unk_86d;
    /* 0x86e */ u8 pad_86e;
    /* 0x86f */ u8 unk_86f;
    /* 0x870 */ u8 unk_870;
    /* 0x871 */ u8 pad_871[3];
};

// vtable 0x0224ae60
class FtrCannon : public FtrActor {
public:
    FtrCannon();
    virtual ~FtrCannon();
    virtual BOOL vfunc_0c();
    virtual void vfunc_6c(s32 a, void *b);
    virtual BOOL changeAct(u32 a, u8 b);
    virtual BOOL initModel();
    virtual BOOL updateActive();
    virtual void onRemove();

    BOOL execFtrAct01();
    BOOL enterFtrAct01();
    BOOL execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();

    /* 0x840 */ u8 unk_840;
};

namespace p14 {
extern "C" {
extern u8 data_ov004_0224bb88[];
extern u8 data_ov004_0224bb8c[];
extern u8 data_ov004_0224bb90[];
extern u8 data_ov004_0224bb94[];
extern u8 data_ov004_0224002c[];
extern u8 data_021f47e0[];

void func_020f43fc(void *);
void func_020f440c(void *);
void _ZN14MatTexVramTaskC1Ev(void *);
s32 _ZN8FtrActornwEm(u32);
u16 Item_MakeFurniture(u32, s32);
u32 _ZN12G3dResAccess13func_02056fccEi(u32, void *);
s32 PlayerData_Get(s32);
s32 _ZN10PlayerData11getPlayerIdEv(...);
s32 _ZN8PlayerId9getGenderEv();
void *PatternTexCache_Get();
s32 _ZN15PatternTexCache15getPlayerTexKeyEii(void *, u8, u8);
s32 Model_BindMatTexByIdx(u32, void *, s32, s32, s32);
BOOL _ZN9FtrSwitch3setEji(void *, s32, s32);
void *_ZN11FtrModelRes10getAnimSetEv(void *);
s32 _ZN10FtrAnimSet10getTexCopyEv(void *);
s32 _ZN12G3dResAccess10findTexIdxEi(s32, void *);
s32 _ZN12G3dResAccess11findPlttIdxEi(s32, void *);
s32 _ZN14MatTexVramTask7requestEPvjS0_jj(void *, u32, void *, s32, s32, s32);
s32 ClothTex_GetTex(s32);
s32 FtrSync_RequestAct(void *, s32, s32, s32);
s32 FtrSync_ChangeAct(void *, s32, s32, s32);
void Item_FromPlacedForm(u16 *, u16 *);
s32 _ZN12Unk_0209c2f413func_0209c348Ev();
void *Heap_Alloc(s32, s32);
void ClothTex_LoadItem(s32, u16 *, s32);
BOOL _ZN9FtrSwitch4isOnEv(void *);
void _ZN14MatTexVramTaskC1Ev(void *);
void _ZN14BlendAnimModel9stepBlendEv(void *);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void *);
void _ZN11FtrVisNodes10setVisibleEj(void *, s32);
BOOL _ZN9FtrSwitch10isChangingEv(void *);
BOOL _ZN11FtrVisNodes7hasNodeEi(void *);
void MTX_MultVec43(void *, void *, void *);
void _ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(void *, void *, s32, s32);
s32 _ZN14GroundInfoBase9getHeightEi(void *, s32);
void GroundInfo_Destruct(void *);
}
}

static inline BOOL Unk_ov004_0220c554_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 v = *p;
    if (v >= lo && v <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_ov004_0220c554_R(u32 v, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (v >= lo && v <= hi) r = TRUE;
    return r;
}

static inline s32 Unk_ov004_0220c554_Idx(u32 v, u32 lo, u32 hi) {
    if (v >= lo && v <= hi) {
        return (s32)(v - lo) >> 2;
    }
    return -1;
}

// ---- LampLights ----
FtrDesignDisplay::~FtrDesignDisplay() {
    p14::func_020f43fc(unk_844);
}

FtrDesignDisplay::FtrDesignDisplay() {
    p14::func_020f440c(unk_844);
}

extern "C" FtrDesignDisplay *FtrDesignDisplay_Create() {
    return new FtrDesignDisplay;
}

// ---- LightLevel ----
void FtrMyDesign::vfunc_64(s32 a, Unk_ov004_02206ec8_Ctx *b) {
    if (a == unk_840) {
        *((Unk_ov004_0220c534_Arg *)b)->unk_b8 = 0;
    }
}

BOOL FtrMyDesign::vfunc_0c() {
    return TRUE;
}

BOOL FtrMyDesign::updateActive() {
    return TRUE;
}

BOOL FtrMyDesign::initModel() {
    volatile u16 v;
    s32 t;
    s32 hi;
    v = p14::Item_MakeFurniture(p14::FtrActor_GetFtrIndex(this), 0);
    BOOL f = FALSE;
    t = -1;
    unk_840 = t;
    u32 x = v;
    if (x >= 0x3d84 && x <= 0x3e03) f = TRUE;
    if (f) {
        if (x >= 0x3d84 && x <= 0x3e03) {
            t = (s32)(x - 0x3d84) >> 2;
        } else {
            t = -1;
        }
    } else if (x >= 0x3ea4 && x <= 0x3f23) {
        t = Unk_ov004_0220c554_Idx(x, 0x3ea4, 0x3f23);
    } else if (x >= 0x4224 && x <= 0x42a3) {
        t = Unk_ov004_0220c554_Idx(x, 0x4224, 0x42a3);
    } else if (x >= 0x3f24 && x <= 0x3fa3) {
        t = Unk_ov004_0220c554_Idx(x, 0x3f24, 0x3fa3);
    }
    if (t == -1) t = 0;
    hi = (t >> 3) & 3;
    s32 lo = t & 7;
    if (p14::PlayerData_Get(hi)) {
        p14::_ZN10PlayerData11getPlayerIdEv();
        if (p14::_ZN8PlayerId9getGenderEv() == 0) {
            unk_840 = p14::_ZN12G3dResAccess13func_02056fccEi(b14_unk_590, p14::data_ov004_0224bb8c);
        } else {
            unk_840 = p14::_ZN12G3dResAccess13func_02056fccEi(b14_unk_590, p14::data_ov004_0224bb90);
        }
    }
    u32 o = b14_unk_590;
    p14::Model_BindMatTexByIdx(o, p14::data_ov004_0224bb88, p14::_ZN15PatternTexCache15getPlayerTexKeyEii(p14::PatternTexCache_Get(), hi, lo), 0, 0);
    return TRUE;
}

FtrMyDesign::~FtrMyDesign() {
}

FtrMyDesign::FtrMyDesign() {
}

extern "C" FtrMyDesign *FtrMyDesign_Create() {
    return new FtrMyDesign;
}

// ---- C ----
BOOL FtrShirt::execFtrAct01() {
    return p14::_ZN9FtrSwitch3setEji(b14_f_73c, 0, 0);
}

BOOL FtrShirt::enterFtrAct01() {
    s32 a, b;
    u32 c;
    s32 d;
    p14::_ZN9FtrSwitch3setEji(b14_f_73c, 0, 0);
    a = p14::_ZN12G3dResAccess10findTexIdxEi(p14::_ZN10FtrAnimSet10getTexCopyEv(p14::_ZN11FtrModelRes10getAnimSetEv(b14_f_6c8)), p14::data_ov004_0224bb94);
    b = p14::_ZN12G3dResAccess11findPlttIdxEi(p14::_ZN10FtrAnimSet10getTexCopyEv(p14::_ZN11FtrModelRes10getAnimSetEv(b14_f_6c8)), p14::data_ov004_0224bb94);
    c = b14_unk_590;
    d = p14::_ZN10FtrAnimSet10getTexCopyEv(p14::_ZN11FtrModelRes10getAnimSetEv(b14_f_6c8));
    if (p14::_ZN14MatTexVramTask7requestEPvjS0_jj(f_844, c, p14::data_ov004_0224bb88, d, a, b)) {
        unk_86c = 0;
    }
    return TRUE;
}

BOOL FtrShirt::execFtrAct00() {
    return p14::_ZN9FtrSwitch3setEji(b14_f_73c, 1, 0);
}

BOOL FtrShirt::enterFtrAct00() {
    p14::_ZN9FtrSwitch3setEji(b14_f_73c, 1, 0);
    u32 o = b14_unk_590;
    p14::_ZN14MatTexVramTask7requestEPvjS0_jj(f_844, o, p14::data_ov004_0224bb88, p14::ClothTex_GetTex(unk_840), 0, 0);
    return TRUE;
}

typedef BOOL (FtrShirt::*Unk_ov004_0224ad34_Fn)();

void FtrShirt::execFtrAct() {
    static Unk_ov004_0224ad34_Fn tbl[2] = { &FtrShirt::execFtrAct00, &FtrShirt::execFtrAct01 };
    u32 i = unk_870;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

BOOL FtrShirt::changeAct(u32 a, u8 b) {
    FtrActor::changeAct(a, b);
    static Unk_ov004_0224ad34_Fn tbl[2] = { &FtrShirt::enterFtrAct00, &FtrShirt::enterFtrAct01 };
    if (a < 2) {
        if ((this->*tbl[a])()) {
            unk_870 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrShirt::getActSwitchState(u32 a) {
    if (a < 2) {
        return p14::data_ov004_0224002c[a];
    }
    return 0;
}

s32 FtrShirt::syncAct0() {
    return p14::FtrSync_RequestAct(this, 0, 0xff, 1);
}

s32 FtrShirt::syncAct1() {
    return p14::FtrSync_RequestAct(this, 1, 0xff, 1);
}

BOOL FtrShirt::needsTexCopy() {
    return 1;
}

BOOL FtrShirt::vfunc_0c() {
    return TRUE;
}

BOOL FtrShirt::updateActive() {
    execFtrAct();
    return TRUE;
}

BOOL FtrShirt::initModel() {
    u16 v, w;
    unk_86f = 1;
    v = p14::Item_MakeFurniture(p14::FtrActor_GetFtrIndex(this), 0);
    BOOL r = FALSE;
    if (v >= 0x3984 && v <= 0x3d83) r = TRUE;
    if (r) {
        p14::Item_FromPlacedForm(&w, &v);
        p14::FtrActor_GetHeap(this);
        unk_840 = (s32)p14::Heap_Alloc(p14::_ZN12Unk_0209c2f413func_0209c348Ev(), 0x2c4);
        p14::ClothTex_LoadItem(unk_840, &w, 0);
        if (p14::_ZN9FtrSwitch4isOnEv(b14_f_73c)) {
            changeAct(0, 0xff);
        } else {
            changeAct(1, 0xff);
        }
    }
    changeAct(0, 0xff);
    unk_86f = 0;
    return TRUE;
}

FtrShirt::~FtrShirt() {
}

FtrShirt::FtrShirt() {
    p14::_ZN14MatTexVramTaskC1Ev(f_844);
    unk_840 = 0;
    unk_86c = unk_86d = 0;
}

extern "C" FtrShirt *FtrShirt_Create() {
    return new FtrShirt;
}

// ---- WindowLight ----
BOOL FtrCannon::execFtrAct01() {
    p14::_ZN14BlendAnimModel9stepBlendEv(b14_f_534);
    BOOL r = p14::_ZN13AnimFrameCtrl10isFinishedEv(b14_f_5d0);
    if (r) {
        return p14::FtrSync_ChangeAct(this, 0, 0xff, 1);
    }
    return r;
}

BOOL FtrCannon::enterFtrAct01() {
    p14::_ZN11FtrVisNodes10setVisibleEj(b14_f_760, 1);
    playAnim(0, 1, 0x1000, 0);
    playSound1();
    return TRUE;
}

BOOL FtrCannon::execFtrAct00() {
    BOOL r = p14::_ZN9FtrSwitch10isChangingEv(b14_f_73c);
    if (r) {
        return p14::FtrSync_ChangeAct(this, 1, 0xff, 1);
    }
    return r;
}

BOOL FtrCannon::enterFtrAct00() {
    p14::_ZN11FtrVisNodes10setVisibleEj(b14_f_760, 0);
    playAnim(0, 1, 0x1000, 0);
    return TRUE;
}

typedef BOOL (FtrCannon::*Unk_ov004_0224ae60_Fn)();

void FtrCannon::execFtrAct() {
    static Unk_ov004_0224ae60_Fn tbl[2] = { &FtrCannon::execFtrAct00, &FtrCannon::execFtrAct01 };
    u32 i = unk_840;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

BOOL FtrCannon::changeAct(u32 a, u8 b) {
    FtrActor::changeAct(a, b);
    static Unk_ov004_0224ae60_Fn tbl[2] = { &FtrCannon::enterFtrAct00, &FtrCannon::enterFtrAct01 };
    if (a < 2) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

void FtrCannon::vfunc_6c(s32 a, void *b) {
    Unk_ov004_0220cca4_Vec v;
    Unk_ov004_0220cca4_Vec o;
    if (p14::_ZN11FtrVisNodes7hasNodeEi(b14_f_760) && unk_840 == 1) {
        Unk_ov004_0220cca4_Vec *pv = &((Unk_ov004_0220cca4_Arg *)b)->unk_b4->unk_4c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        *(Unk_ov004_0220cca4_Copy *)p14::data_021f47e0 = *(Unk_ov004_0220cca4_Copy *)b14_f_598;
        p14::MTX_MultVec43(&v, p14::data_021f47e0, &o);
        u8 obj[0x44];
        p14::_ZN10GroundInfo9initAtPosEP16Unk_0203389c_Vecii(obj, &o, 0, 0);
        if (p14::_ZN14GroundInfoBase9getHeightEi(obj, 0) > 0) {
            p14::FtrSync_ChangeAct(this, 0, 0xff, 1);
        }
        p14::GroundInfo_Destruct(obj);
    }
}

void FtrCannon::onRemove() {
    playAnim(0, 1, 0x1000, 0);
}

BOOL FtrCannon::vfunc_0c() {
    p14::_ZN9FtrSwitch3setEji(b14_f_73c, 0, 0);
    return TRUE;
}

BOOL FtrCannon::updateActive() {
    execFtrAct();
    return TRUE;
}

// ---- part 15: from unk_0220cd7c.cpp
namespace p15 {
extern "C" {
u32 FtrActor_GetHeap(void *self);
u32 FtrActor_GetLayer(void *self);
}
}

struct Unk_ov004_02208ba8_Rec {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u16 unk_04;
};

class FtrKind19 : public FtrActor {
public:
    FtrKind19();
    virtual ~FtrKind19();
    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 a, u8 b);
    virtual u8 getActSwitchState(u32 a);
    virtual BOOL initModel();
    virtual BOOL updateActive();

    void execFtrAct03();
    BOOL enterFtrAct03();
    void execFtrAct02();
    BOOL enterFtrAct02();
    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
};

namespace p15 {
extern "C" {
extern u8 data_ov004_02240058[];

BOOL _ZN9FtrSwitch3setEji(void *, s32, s32);
BOOL _ZN9FtrSwitch10isChangingEv(void *);
BOOL _ZN9FtrSwitch4isOnEv(void *);
BOOL _ZN12FtrModelAnim9getAnmObjEv(void *);
void *_ZN11FtrModelRes10getAnimSetEv(void *);
Unk_ov004_02208ba8_Rec *_ZN10FtrAnimSet6getBvaEj(void *, u32);
Unk_ov004_02208ba8_Rec *_ZN10FtrAnimSet6getBmaEj(void *, u32);
Unk_ov004_02208ba8_Rec *_ZN10FtrAnimSet6getBtaEj(void *, u32);
Unk_ov004_02208ba8_Rec *_ZN10FtrAnimSet6getBtpEj(void *, u32);
Unk_ov004_02208ba8_Rec *_ZN10FtrAnimSet6getBcaEj(void *, u32);
void *_ZN11FtrModelRes10getTextureEv(void *);
BOOL FtrMgr_IsShopScene(void);

void *_ZN5Model12getRenderObjEv(void *);
void _ZN9ModelAnim7replaceEiiiit(void *, void *, void *, s32, s32, u32);
void _ZN9ModelAnim4initEiiit(void *, void *, s32, s32, s32);
void _ZN9ModelAnim11initWithTexEiiiit(void *, void *, void *, s32, s32, s32);
void _ZN9ModelAnim14addToRenderObjEj(void *, void *);
BOOL _ZN9ModelAnim13allocJointAnmEjPv(void *, u32, u32);
BOOL _ZN9ModelAnim11allocMatAnmEjPv(void *, u32, u32);
void _ZN13AnimFrameCtrl4stepEv(void *);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void *);
void FtrSync_RequestAct(void *, s32, s32, s32);
BOOL _ZN14BlendAnimModel9getAnmObjEv(void *);
void _ZN14BlendAnimModel9stepBlendEv(void *);
void _ZN14BlendAnimModel8initAnimEiiitt(void *, void *, s32, s32, s32, s32);
void _ZN9AnimModel10attachAnimEv(void *);
BOOL _ZN9AnimModel11allocAnmObjEPv(void *, u32);
u32 _ZN12Unk_0209c2f413func_0209c348Ev(u32);
u32 Scene_GetCurrent(void);
void FtrSync_RequestToggleGyroid(u32, void *, u32);
}
}

BOOL FtrCannon::initModel() {
    initAnims(0, 1, 0x1000, 0);
    changeAct(0, 0xff);
    return TRUE;
}

FtrCannon::~FtrCannon() {
}

FtrCannon::FtrCannon() {
}

extern "C" void FtrCannon_Create() {
    new FtrCannon;
}

void FtrKind19::execFtrAct03() {
    p15::_ZN9FtrSwitch3setEji(b15_f_73c, 0, 0);
    if (p15::_ZN12FtrModelAnim9getAnmObjEv(&b15_unk_7c0[0])) {
        p15::_ZN13AnimFrameCtrl4stepEv(&b15_unk_7c0[0]);
        *b15_unk_7c0[0].unk_18 = b15_unk_7c0[0].unk_08;
        if (p15::_ZN13AnimFrameCtrl10isFinishedEv(&b15_unk_7c0[0])) {
            changeAct(0, 0xff);
        }
    } else {
        changeAct(0, 0xff);
    }
}

BOOL FtrKind19::enterFtrAct03() {
    p15::_ZN9FtrSwitch3setEji(b15_f_73c, 0, 0);
    if (p15::_ZN10FtrAnimSet6getBmaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0) != NULL) {
        Unk_ov004_02208ba8_Rec *r = p15::_ZN10FtrAnimSet6getBmaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0);
        if (p15::_ZN12FtrModelAnim9getAnmObjEv(&b15_unk_7c0[0])) {
            p15::_ZN9ModelAnim7replaceEiiiit(&b15_unk_7c0[0], p15::_ZN5Model12getRenderObjEv(b15_f_534), r, 3, 0x1000, (u16)(r->unk_04 - 1));
        }
    }
    playSound2();
    return TRUE;
}

void FtrKind19::execFtrAct02() {
    hasIndoorFlag6();
    playSound0();
    if (p15::_ZN9FtrSwitch10isChangingEv(b15_f_73c)) {
        p15::FtrSync_RequestAct(this, 3, 0xff, 1);
    }
}

BOOL FtrKind19::enterFtrAct02() {
    p15::_ZN9FtrSwitch3setEji(b15_f_73c, 1, 0);
    if (p15::_ZN10FtrAnimSet6getBmaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0) != NULL) {
        Unk_ov004_02208ba8_Rec *r = p15::_ZN10FtrAnimSet6getBmaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0);
        p15::_ZN9ModelAnim7replaceEiiiit(&b15_unk_7c0[0], p15::_ZN5Model12getRenderObjEv(b15_f_534), r, 1, 0x1000, (u16)(r->unk_04 - 1));
    }
    return TRUE;
}

void FtrKind19::execFtrAct01() {
    p15::_ZN9FtrSwitch3setEji(b15_f_73c, 1, 0);
    playSound0();
    if (p15::_ZN12FtrModelAnim9getAnmObjEv(&b15_unk_7c0[0])) {
        p15::_ZN13AnimFrameCtrl4stepEv(&b15_unk_7c0[0]);
        *b15_unk_7c0[0].unk_18 = b15_unk_7c0[0].unk_08;
        if (p15::_ZN13AnimFrameCtrl10isFinishedEv(&b15_unk_7c0[0])) {
            changeAct(2, 0xff);
        }
    } else {
        changeAct(2, 0xff);
    }
}

BOOL FtrKind19::enterFtrAct01() {
    p15::_ZN9FtrSwitch3setEji(b15_f_73c, 1, 0);
    if (p15::_ZN10FtrAnimSet6getBmaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0) != NULL) {
        Unk_ov004_02208ba8_Rec *r = p15::_ZN10FtrAnimSet6getBmaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0);
        if (p15::_ZN12FtrModelAnim9getAnmObjEv(&b15_unk_7c0[0])) {
            p15::_ZN9ModelAnim7replaceEiiiit(&b15_unk_7c0[0], p15::_ZN5Model12getRenderObjEv(b15_f_534), r, 1, 0x1000, 0);
        }
    }
    playSound1();
    return TRUE;
}

void FtrKind19::execFtrAct00() {
    if (p15::_ZN9FtrSwitch10isChangingEv(b15_f_73c)) {
        p15::FtrSync_RequestAct(this, 1, 0xff, 1);
    }
}

BOOL FtrKind19::enterFtrAct00() {
    p15::_ZN9FtrSwitch3setEji(b15_f_73c, 0, 0);
    if (p15::_ZN10FtrAnimSet6getBmaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0) != NULL) {
        Unk_ov004_02208ba8_Rec *r = p15::_ZN10FtrAnimSet6getBmaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0);
        p15::_ZN9ModelAnim7replaceEiiiit(&b15_unk_7c0[0], p15::_ZN5Model12getRenderObjEv(b15_f_534), r, 3, 0x1000, 0);
    }
    return TRUE;
}

void FtrKind19::execFtrAct() {
    typedef void (FtrKind19::*Fn)();
    static Fn tbl[4] = {
        &FtrKind19::execFtrAct00,
        &FtrKind19::execFtrAct01,
        &FtrKind19::execFtrAct02,
        &FtrKind19::execFtrAct03,
    };
    u32 i = unk_840;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL FtrKind19::changeAct(u32 a, u8 b) {
    typedef BOOL (FtrKind19::*Fn)();
    FtrActor::changeAct(a, b);
    static Fn tbl[4] = {
        &FtrKind19::enterFtrAct00,
        &FtrKind19::enterFtrAct01,
        &FtrKind19::enterFtrAct02,
        &FtrKind19::enterFtrAct03,
    };
    if ((u32)a < 4) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrKind19::getActSwitchState(u32 a) {
    if (a < 4) {
        return p15::data_ov004_02240058[a];
    }
    return 0;
}

BOOL FtrKind19::vfunc_0c() {
    return TRUE;
}

BOOL FtrKind19::updateActive() {
    execFtrAct();
    if (p15::_ZN14BlendAnimModel9getAnmObjEv(b15_f_534)) {
        p15::_ZN14BlendAnimModel9stepBlendEv(b15_f_534);
    }
    if (p15::_ZN12FtrModelAnim9getAnmObjEv(&b15_unk_7c0[1])) {
        p15::_ZN13AnimFrameCtrl4stepEv(&b15_unk_7c0[1]);
        *b15_unk_7c0[1].unk_18 = b15_unk_7c0[1].unk_08;
    }
    if (p15::_ZN12FtrModelAnim9getAnmObjEv(&b15_unk_7c0[2])) {
        p15::_ZN13AnimFrameCtrl4stepEv(&b15_unk_7c0[2]);
        *b15_unk_7c0[2].unk_18 = b15_unk_7c0[2].unk_08;
    }
    if (p15::_ZN12FtrModelAnim9getAnmObjEv(&b15_unk_7c0[3])) {
        p15::_ZN13AnimFrameCtrl4stepEv(&b15_unk_7c0[3]);
        *b15_unk_7c0[3].unk_18 = b15_unk_7c0[3].unk_08;
    }
    return TRUE;
}

BOOL FtrKind19::initModel() {
    u32 r4 = p15::FtrActor_GetHeap(this);
    if (p15::_ZN10FtrAnimSet6getBvaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0) != NULL) {
        u32 t = b15_unk_590;
        if (p15::_ZN9ModelAnim13allocJointAnmEjPv(&b15_unk_7c0[3], t, p15::_ZN12Unk_0209c2f413func_0209c348Ev(r4))) {
            p15::_ZN9ModelAnim4initEiiit(&b15_unk_7c0[3], p15::_ZN10FtrAnimSet6getBvaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0), 0, 0x1000, 0);
            p15::_ZN9ModelAnim14addToRenderObjEj(&b15_unk_7c0[3], p15::_ZN5Model12getRenderObjEv(b15_f_534));
        }
    }
    if (p15::_ZN10FtrAnimSet6getBtaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0) != NULL) {
        u32 t = b15_unk_590;
        if (p15::_ZN9ModelAnim11allocMatAnmEjPv(&b15_unk_7c0[1], t, p15::_ZN12Unk_0209c2f413func_0209c348Ev(r4))) {
            p15::_ZN9ModelAnim4initEiiit(&b15_unk_7c0[1], p15::_ZN10FtrAnimSet6getBtaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0), 0, 0x1000, 0);
            p15::_ZN9ModelAnim14addToRenderObjEj(&b15_unk_7c0[1], p15::_ZN5Model12getRenderObjEv(b15_f_534));
        }
    }
    if (p15::_ZN10FtrAnimSet6getBcaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0) != NULL) {
        if (p15::_ZN9AnimModel11allocAnmObjEPv(b15_f_534, p15::_ZN12Unk_0209c2f413func_0209c348Ev(r4))) {
            p15::_ZN14BlendAnimModel8initAnimEiiitt(b15_f_534, p15::_ZN10FtrAnimSet6getBcaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0), 0, 0x1000, 0, 0);
            p15::_ZN9AnimModel10attachAnimEv(b15_f_534);
        }
    }
    if (p15::_ZN10FtrAnimSet6getBtpEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0) != NULL) {
        u32 t = b15_unk_590;
        if (p15::_ZN9ModelAnim11allocMatAnmEjPv(&b15_unk_7c0[2], t, p15::_ZN12Unk_0209c2f413func_0209c348Ev(r4))) {
            Unk_ov004_02208ba8_Rec *r = p15::_ZN10FtrAnimSet6getBtpEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0);
            p15::_ZN9ModelAnim11initWithTexEiiiit(&b15_unk_7c0[2], r, p15::_ZN11FtrModelRes10getTextureEv(b15_f_6c8), 0, 0x1000, 0);
            p15::_ZN9ModelAnim14addToRenderObjEj(&b15_unk_7c0[2], p15::_ZN5Model12getRenderObjEv(b15_f_534));
        }
    }
    if (p15::_ZN10FtrAnimSet6getBmaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0) != NULL) {
        u32 t = b15_unk_590;
        if (p15::_ZN9ModelAnim11allocMatAnmEjPv(&b15_unk_7c0[0], t, p15::_ZN12Unk_0209c2f413func_0209c348Ev(r4))) {
            p15::_ZN9ModelAnim4initEiiit(&b15_unk_7c0[0], p15::_ZN10FtrAnimSet6getBmaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0), 3, 0x1000, 0);
            p15::_ZN9ModelAnim14addToRenderObjEj(&b15_unk_7c0[0], p15::_ZN5Model12getRenderObjEv(b15_f_534));
        }
    }
    if (p15::_ZN9FtrSwitch4isOnEv(b15_f_73c) != 0 && p15::FtrMgr_IsShopScene() == 0) {
        changeAct(2, 0xff);
    } else {
        changeAct(0, 0xff);
    }
    return TRUE;
}

FtrKind19::~FtrKind19() {
}

FtrKind19::FtrKind19() {
}

extern "C" void FtrKind19_Create() {
    new FtrKind19;
}


// ---- part 16: from unk_0220d69c.cpp
struct Unk_ov004_0220d69c_Vec {
    s32 x, y, z;
};

class FtrGyroid;

namespace p16 {
extern "C" {
extern u8 data_ov004_02240040[];
extern void *gCommManager;

s32 _ZN9FtrSwitch3setEji(void *, s32, s32);
s32 _ZN9FtrSwitch10isChangingEv(void *);
s32 _ZN9FtrSwitch4isOnEv(void *);
s32 _ZN11FtrModelRes10getAnimSetEv(void *);
u16 *_ZN10FtrAnimSet6getBcaEj(s32, s32);
s32 _ZN8FtrActor9isPreviewEv(void *);
s32 FtrActor_GetDragSe(void *);
s32 FtrActor_GetLayer(void *);
s32 FtrActor_GetFtrIndex(void *);
s32 FtrActor_GetHeap(void *);
s32 _ZN8FtrActor8playAnimEiiij(void *, s32, s32, s32, u16);
s32 _ZN8FtrActor9initAnimsEiiii(void *, s32, s32, s32, s32);
s32 _ZN8FtrActor10playSound2Ev(void *);
s32 _ZN8FtrActor10playSound1Ev(void *);
s32 FtrSound_GetSe3(void);
s32 FurnitureManager_GetMoveAnim(void);
s32 FtrMoveAnim_GetHaniwaAnim(s32);
s32 _ZN13FtrContactSet11findContactEPv(s32, void *);
s32 FtrContactSet_GetInstance(void);
s32 _ZN10FtrContact7getSideEv(s32);

s32 Snd_BgmSyncPollStarted(void *);
s32 Snd_BgmSyncReadBeat(void *);
s32 Snd_BgmSyncSetStartBeat(void *, s32);
s32 Snd_BgmSyncRelease(void *);
s32 Snd_BgmSyncUpdate(void *, Unk_ov004_0220d69c_Vec *);
s32 Snd_BgmSyncSetState(void *, s32);
s32 Snd_BgmSyncInit(void *);
s32 FieldPos_ToUnit(s32 *, s32 *, void *);
s32 FtrSync_RequestToggleGyroid(s32, void *, s32);
s32 RoomFtrState_SetGyroidBeat(s32, s32, u32, s32);
s32 RoomFtrState_RemoveGyroidBeat(s32, s32, s32);
s32 RoomFtrState_GetGyroidBeat(s32, s32, s32);
s32 _ZN14BlendAnimModel9playBlendEiiiitt(void *, s32, u16, s32, s32, s32, s32);
s32 _ZN14BlendAnimModel9stepBlendEv(void *);
s32 _ZN14BlendAnimModel15onJointCalcPostEPS_(void *, void *);
s32 _ZN14BlendAnimModel14onJointCalcPreEPS_(void *, void *);
s32 _ZN14BlendAnimModel8initAnimEiiitt(void *, s32, s32, s32, s32, s32);
s32 _ZN11CachedModel16allocJointRecordEPv(void *, s32);
s32 _ZN11CommManager8isOnlineEv(void *);
s32 func_020943dc(void);
s32 _ZN12Unk_0209c2f413func_0209c348Ev(void);
s32 Scene_GetCurrent(void);
s32 Scene_InVillagerHouse(void);
}
}

struct Unk_ov004_0220dcbc_Obj {
    u8 pad_00[0xb4];
    u8 *unk_b4;
    u8 pad_b8[0xd4 - 0xb8];
    u8 *unk_d4;
};

class FtrGyroid : public FtrActor {
public:
    FtrGyroid();
    virtual ~FtrGyroid();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_68();
    virtual void vfunc_6c(s32 idx, void *b);
    virtual BOOL changeAct(u32 idx, u8 x);
    virtual u8 getActSwitchState(u32 idx);
    virtual BOOL initModel();
    virtual BOOL updateActive();
    virtual BOOL updateAppearRemove();

    void execFtrAct02();
    BOOL enterFtrAct02();
    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();
    s32 pollSyncStarted();
    u32 readSyncBeat();
    void setSyncStartBeat(u32 v);
    void setSyncState(u32 v);
    void releaseSync();
    s32 updateSync(Unk_ov004_0220d69c_Vec *v);
    void initSync(u32 v);

    /* 0x840 */ u8 unk_840[0x854 - 0x840];
    /* 0x854 */ u8 unk_854;
    /* 0x855 */ u8 pad_855[3];
    /* 0x858 */ s32 unk_858;
    /* 0x85c */ u16 unk_85c;
    /* 0x85e */ u8 unk_85e;
    /* 0x85f */ u8 pad_85f;
};

typedef void (FtrGyroid::*Unk_ov004_0220da7c_Fn)();
typedef BOOL (FtrGyroid::*Unk_ov004_0220daf8_Fn)();

BOOL FtrGyroid::enterFtrAct02() {
    p16::_ZN9FtrSwitch3setEji(b16_unk_73c, 1, 0);
    p16::_ZN8FtrActor8playAnimEiiij(this, 0, 0, 0x1000, 0);
    u16 *r = p16::_ZN10FtrAnimSet6getBcaEj(p16::_ZN11FtrModelRes10getAnimSetEv(b16_unk_6c8), 0);
    p16::_ZN14BlendAnimModel8initAnimEiiitt(b16_unk_534, (s32)r, 0, 0, 0, 0);
    return TRUE;
}

void FtrGyroid::execFtrAct01() {
    updateSync((Unk_ov004_0220d69c_Vec *)unk_5c);
    if (unk_85c != 0) {
        p16::_ZN14BlendAnimModel9stepBlendEv(b16_unk_534);
        unk_85c--;
    }
    if (unk_85c == 0) {
        changeAct(2, getActAid());
    } else {
        s32 r = pollSyncStarted();
        if (r >= 0) {
            unk_85c = r;
            u16 *q = p16::_ZN10FtrAnimSet6getBcaEj(p16::_ZN11FtrModelRes10getAnimSetEv(b16_unk_6c8), 0);
            p16::_ZN14BlendAnimModel9playBlendEiiiitt(b16_unk_534, (s32)q, (u16)r, 0, 0, 0, 0);
        }
    }
    if (p16::_ZN9FtrSwitch10isChangingEv(b16_unk_73c)) {
        p16::_ZN9FtrSwitch3setEji(b16_unk_73c, 1, 0);
        s32 s = p16::Scene_GetCurrent();
        p16::FtrSync_RequestToggleGyroid(s, unk_5c, p16::FtrActor_GetLayer(this));
    }
}

BOOL FtrGyroid::enterFtrAct01() {
    s32 a, b;
    p16::_ZN8FtrActor10playSound1Ev(this);
    p16::_ZN9FtrSwitch3setEji(b16_unk_73c, 1, 0);
    unk_85c = 0xffff;
    p16::FieldPos_ToUnit(&a, &b, unk_5c);
    if (b16_unk_77a != 0) {
        if (b16_unk_768 != 0 || p16::Scene_InVillagerHouse() != 0) {
            p16::Snd_BgmSyncSetState(unk_840, 1);
            u32 r5 = p16::Snd_BgmSyncReadBeat(unk_840) & 0xf;
            p16::RoomFtrState_SetGyroidBeat(a, b, (u8)r5, p16::Scene_GetCurrent());
            b16_unk_778 = r5;
            u16 *q = p16::_ZN10FtrAnimSet6getBcaEj(p16::_ZN11FtrModelRes10getAnimSetEv(b16_unk_6c8), 0);
            p16::_ZN14BlendAnimModel8initAnimEiiitt(b16_unk_534, (s32)q, 0, 0, 0, 0);
            p16::_ZN14BlendAnimModel9stepBlendEv(b16_unk_534);
            unk_85c = 0;
        } else {
            setSyncState(2);
            u32 r5 = p16::RoomFtrState_GetGyroidBeat(a, b, p16::Scene_GetCurrent()) & 0xf;
            setSyncStartBeat((u8)r5);
            b16_unk_778 = r5;
            s32 q = p16::FtrMoveAnim_GetHaniwaAnim(p16::FurnitureManager_GetMoveAnim());
            p16::_ZN14BlendAnimModel8initAnimEiiitt(b16_unk_534, q, 0, 0, 0, 0);
            p16::_ZN14BlendAnimModel9stepBlendEv(b16_unk_534);
        }
    } else if (p16::_ZN11CommManager8isOnlineEv(p16::gCommManager) != 0 && getActAid() != 0xff) {
        setSyncState(1);
        u32 r5 = getActAid();
        u32 t = r5 & 0xf;
        p16::RoomFtrState_SetGyroidBeat(a, b, (u8)t, p16::Scene_GetCurrent());
        s32 q = p16::FtrMoveAnim_GetHaniwaAnim(p16::FurnitureManager_GetMoveAnim());
        p16::_ZN14BlendAnimModel8initAnimEiiitt(b16_unk_534, q, 0, 0, 0, 0);
        p16::_ZN14BlendAnimModel9stepBlendEv(b16_unk_534);
    } else {
        setSyncState(1);
        u32 r5 = readSyncBeat() & 0xf;
        p16::RoomFtrState_SetGyroidBeat(a, b, (u8)r5, p16::Scene_GetCurrent());
        b16_unk_778 = r5;
        s32 q = p16::FtrMoveAnim_GetHaniwaAnim(p16::FurnitureManager_GetMoveAnim());
        p16::_ZN14BlendAnimModel8initAnimEiiitt(b16_unk_534, q, 0, 0, 0, 0);
        p16::_ZN14BlendAnimModel9stepBlendEv(b16_unk_534);
    }
    return TRUE;
}

void FtrGyroid::execFtrAct00() {
    updateSync((Unk_ov004_0220d69c_Vec *)unk_5c);
    p16::_ZN14BlendAnimModel9stepBlendEv(b16_unk_534);
    if (p16::_ZN9FtrSwitch10isChangingEv(b16_unk_73c)) {
        p16::_ZN9FtrSwitch3setEji(b16_unk_73c, 0, 0);
        s32 s = p16::Scene_GetCurrent();
        p16::FtrSync_RequestToggleGyroid(s, unk_5c, p16::FtrActor_GetLayer(this));
    }
}

BOOL FtrGyroid::enterFtrAct00() {
    s32 a, b;
    p16::FieldPos_ToUnit(&a, &b, unk_5c);
    b16_unk_778 = 0xff;
    p16::RoomFtrState_RemoveGyroidBeat(a, b, p16::Scene_GetCurrent());
    setSyncState(0);
    p16::_ZN8FtrActor10playSound2Ev(this);
    p16::_ZN9FtrSwitch3setEji(b16_unk_73c, 0, 0);
    if (p16::FurnitureManager_GetMoveAnim() != 0) {
        s32 q = p16::FtrMoveAnim_GetHaniwaAnim(p16::FurnitureManager_GetMoveAnim());
        if (b16_unk_77a != 0) {
            p16::_ZN14BlendAnimModel8initAnimEiiitt(b16_unk_534, q, 0, 0, 0, 0);
        } else {
            p16::_ZN14BlendAnimModel9playBlendEiiiitt(b16_unk_534, q, 0x20, 0, 0, 0, 0);
        }
    }
    return TRUE;
}

void FtrGyroid::execFtrAct() {
    static Unk_ov004_0220da7c_Fn tbl[3] = {
        &FtrGyroid::execFtrAct00,
        &FtrGyroid::execFtrAct01,
        &FtrGyroid::execFtrAct02,
    };
    u32 i = unk_85e;
    if (i < 3) {
        (this->*tbl[i])();
    }
}

BOOL FtrGyroid::changeAct(u32 idx, u8 x) {
    FtrActor::changeAct(idx, x);
    static Unk_ov004_0220daf8_Fn tbl[3] = {
        &FtrGyroid::enterFtrAct00,
        &FtrGyroid::enterFtrAct01,
        &FtrGyroid::enterFtrAct02,
    };
    if (idx < 3) {
        if ((this->*tbl[idx])()) {
            unk_85e = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrGyroid::getActSwitchState(u32 idx) {
    if (idx < 3) {
        return p16::data_ov004_02240040[idx];
    }
    return 0;
}

s32 FtrGyroid::pollSyncStarted() {
    if (unk_854 != 0) {
        return p16::Snd_BgmSyncPollStarted(unk_840);
    }
    return -1;
}

u32 FtrGyroid::readSyncBeat() {
    if (unk_854 != 0) {
        return p16::Snd_BgmSyncReadBeat(unk_840);
    }
    return 0;
}

void FtrGyroid::setSyncStartBeat(u32 v) {
    if (unk_854 != 0) {
        p16::Snd_BgmSyncSetStartBeat(unk_840, v);
    }
}

void FtrGyroid::setSyncState(u32 v) {
    if (unk_854 != 0) {
        p16::Snd_BgmSyncSetState(unk_840, v);
    }
}

void FtrGyroid::releaseSync() {
    if (unk_854 != 0) {
        p16::Snd_BgmSyncRelease(unk_840);
        unk_854 = 0;
    }
}

s32 FtrGyroid::updateSync(Unk_ov004_0220d69c_Vec *v) {
    if (unk_854 != 0) {
        Unk_ov004_0220d69c_Vec t;
        t.x = v->x;
        t.y = v->y;
        t.z = v->z;
        return p16::Snd_BgmSyncUpdate(unk_840, &t);
    }
    return -1;
}

void FtrGyroid::initSync(u32 v) {
    if (unk_854 == 0) {
        p16::Snd_BgmSyncInit(unk_840);
        unk_854 = 1;
    }
}

void FtrGyroid::vfunc_6c(s32 idx, void *b) {
    Unk_ov004_0220dcbc_Obj *o = (Unk_ov004_0220dcbc_Obj *)b;
    u8 *d = o->unk_d4;
    u32 off = *(u16 *)(d + 6);
    u8 *tbl = d + off;
    u32 esz = *(u16 *)tbl;
    u8 *rec = d + *(u32 *)(tbl + esz * idx + 4);
    s32 *v = (s32 *)(rec + 4);
    u8 *m = o->unk_b4;
    *(s32 *)(m + 0x4c) = v[0];
    *(s32 *)(m + 0x50) = v[1];
    *(s32 *)(m + 0x54) = v[2];
    p16::_ZN14BlendAnimModel15onJointCalcPostEPS_(b16_unk_534, o);
}

extern "C" BOOL _ZN9FtrGyroid8vfunc_68Ev(FtrGyroid *self, u32 a, void *o) {
    p16::_ZN14BlendAnimModel14onJointCalcPreEPS_(self->b16_unk_534, o);
}

BOOL FtrGyroid::vfunc_0c() {
    releaseSync();
    return TRUE;
}

BOOL FtrGyroid::updateAppearRemove() {
    updateActive();
    return TRUE;
}

BOOL FtrGyroid::updateActive() {
    execFtrAct();
    unk_858++;
    return TRUE;
}

BOOL FtrGyroid::initModel() {
    unk_858 = 0;
    b16_unk_778 = 0xff;
    p16::FtrActor_GetFtrIndex(this);
    initSync(p16::FtrSound_GetSe3());
    p16::_ZN8FtrActor9initAnimsEiiii(this, 0, 1, 0x1000, 0);
    p16::FtrActor_GetHeap(this);
    p16::_ZN11CachedModel16allocJointRecordEPv(b16_unk_534, p16::_ZN12Unk_0209c2f413func_0209c348Ev());
    if (b16_unk_768 == 1) {
        p16::_ZN9FtrSwitch3setEji(b16_unk_73c, 0, 0);
        s32 s = p16::Scene_GetCurrent();
        p16::FtrSync_RequestToggleGyroid(s, unk_5c, p16::FtrActor_GetLayer(this));
    } else if (p16::_ZN8FtrActor9isPreviewEv(this) != 0) {
        changeAct(0, 0xff);
    } else if (p16::_ZN9FtrSwitch4isOnEv(b16_unk_73c) != 0) {
        changeAct(1, 0xff);
    } else {
        changeAct(0, 0xff);
    }
    return TRUE;
}

FtrGyroid::~FtrGyroid() {
}

FtrGyroid::FtrGyroid() {
    b16_unk_778 = 0xff;
}

extern "C" void FtrGyroid_Create() {
    new FtrGyroid;
}


// ---- part 17: from unk_0220e060.cpp
namespace p17 {
extern "C" {
BOOL FtrActor_StepAnims(void *self);
void FtrActor_PlayAnimsFromLastFrame(void *self, u32 a, s32 b, s32 c);
}
}

// Secondary base at +0xec of the ov004 actors (ctor func_0206606c).

// Element at +0x844 of the 0x864-byte actors (ctor func_ov004_02205c2c, dtor func_ov004_02205c1c).

// Container at +0x844 of the class FtrStereo

namespace p17 {
extern "C" {
extern u8 data_ov004_0224005c[];
extern u8 data_ov004_0224003c[];
extern u8 data_ov004_0224bb98[];
extern u8 data_ov004_0224bba0[];
extern u8 data_ov004_0224bba8[];
BOOL FtrMgr_IsShopScene();
void *FurnitureManager_GetTvTex();
void *_ZN11FtrModelRes10getTextureEv(void *);
void _ZN15FtrSoundEmitter6setPanEj(void *, void *);
void Model_BindMatTexByIdx(void *, void *, void *, s32, s32);
void Model_BindMatTexByName(void *, void *, void *, void *, void *);
void FtrSync_RequestAct(void *, s32, s32, s32);
void TalkRequest_AddPlayerTalk6(void *, s32);
void func_02094f20();
}
}

// ---------------------------------------------------------------- FtrCart (no extra fields)
class FtrCart : public FtrActor {
public:
    FtrCart();
    virtual ~FtrCart();
    virtual BOOL vfunc_0c();
    virtual BOOL initModel();
    virtual BOOL updateActive();
    virtual void onMoveStart();
};

// ---------------------------------------------------------------- FtrTv (2-state)
class FtrTv : public FtrActor {
public:
    FtrTv();
    virtual ~FtrTv();
    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 idx, u8 v);
    virtual u8 getActSwitchState(u32 idx);
    virtual BOOL initModel();
    virtual BOOL updateActive();

    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();
    void func_ov004_0220e738();

    /* 0x840 */ u8 unk_840;
    /* 0x844 */ FtrGlowMat unk_844;
    /* 0x860 */ u8 unk_860;
};

// ---------------------------------------------------------------- FtrTvVcr (4-state, derives from FtrTv)
class FtrTvVcr : public FtrTv {
public:
    FtrTvVcr();
    virtual ~FtrTvVcr();
    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 idx, u8 v);
    virtual u8 getActSwitchState(u32 idx);
    virtual BOOL initModel();
    virtual BOOL updateActive();

    void execVcrAct03();
    BOOL enterVcrAct03();
    void execVcrAct02();
    BOOL enterVcrAct02();
    void execVcrAct01();
    BOOL enterVcrAct01();
    void execVcrAct00();
    BOOL enterVcrAct00();
    void execVcrAct();

    /* 0x861 */ u8 unk_861;
};

// ---------------------------------------------------------------- FtrStereo (only one method here)

// ================================================================ FtrCart
BOOL FtrCart::vfunc_0c() {
    return TRUE;
}

BOOL FtrCart::updateActive() {
    p17::FtrActor_StepAnims(this);
    return TRUE;
}

BOOL FtrCart::initModel() {
    initAnims(0, 0, 0, 0);
    return TRUE;
}

FtrCart::~FtrCart() {
}

FtrCart::FtrCart() {
}

extern "C" FtrActor *FtrCart_Create() {
    return new FtrCart;
}

// ================================================================ FtrTvVcr
void FtrTvVcr::execVcrAct03() {
    ((FtrSwitch *)b17_unk_73c)->set(0, 0);
    if (p17::FtrActor_StepAnims(this)) {
        changeAct(0, 0xff);
    }
}

BOOL FtrTvVcr::enterVcrAct03() {
    ((FtrSwitch *)b17_unk_73c)->set(0, 0);
    unk_844.setLit(0, 1, 0);
    bindTvScreenTex(0);
    p17::FtrActor_PlayAnimsFromLastFrame(this, 0, 3, 0x1000);
    playSound2();
    return TRUE;
}

void FtrTvVcr::execVcrAct02() {
    if (((FtrSwitch *)b17_unk_73c)->isChanging()) {
        p17::FtrSync_RequestAct(this, 3, 0xff, 1);
    }
}

BOOL FtrTvVcr::enterVcrAct02() {
    ((FtrSwitch *)b17_unk_73c)->set(1, 0);
    unk_844.setLit(1, 1, 0);
    bindTvScreenTex(1);
    p17::FtrActor_PlayAnimsFromLastFrame(this, 0, 1, 0x1000);
    return TRUE;
}

void FtrTvVcr::execVcrAct01() {
    ((FtrSwitch *)b17_unk_73c)->set(1, 0);
    if (p17::FtrActor_StepAnims(this)) {
        changeAct(2, 0xff);
    }
}

BOOL FtrTvVcr::enterVcrAct01() {
    ((FtrSwitch *)b17_unk_73c)->set(1, 0);
    unk_844.setLit(1, 1, 0);
    bindTvScreenTex(1);
    playAnim(0, 1, 0x1000, 0);
    playSound1();
    return TRUE;
}

void FtrTvVcr::execVcrAct00() {
    if (((FtrSwitch *)b17_unk_73c)->isChanging()) {
        p17::FtrSync_RequestAct(this, 1, 0xff, 1);
    }
}

BOOL FtrTvVcr::enterVcrAct00() {
    ((FtrSwitch *)b17_unk_73c)->set(0, 0);
    unk_844.setLit(0, 1, 0);
    bindTvScreenTex(0);
    playAnim(0, 3, 0x1000, 0);
    return TRUE;
}

void FtrTvVcr::execVcrAct() {
    static void (FtrTvVcr::*tbl[4])() = {
        &FtrTvVcr::execVcrAct00,
        &FtrTvVcr::execVcrAct01,
        &FtrTvVcr::execVcrAct02,
        &FtrTvVcr::execVcrAct03,
    };
    u32 i = unk_861;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL FtrTvVcr::changeAct(u32 idx, u8 v) {
    FtrActor::changeAct(idx, v);
    static BOOL (FtrTvVcr::*tbl[4])() = {
        &FtrTvVcr::enterVcrAct00,
        &FtrTvVcr::enterVcrAct01,
        &FtrTvVcr::enterVcrAct02,
        &FtrTvVcr::enterVcrAct03,
    };
    if (idx < 4) {
        if ((this->*tbl[idx])()) {
            unk_861 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrTvVcr::getActSwitchState(u32 idx) {
    if (idx < 4) {
        return p17::data_ov004_0224005c[idx];
    }
    return 0;
}

BOOL FtrTvVcr::vfunc_0c() {
    return TRUE;
}

BOOL FtrTvVcr::updateActive() {
    ((Unk_ov004_02205b14 *)&unk_844)->updateEmission();
    execVcrAct();
    return TRUE;
}

BOOL FtrTvVcr::initModel() {
    initAnims(0, 1, 0x1000, 0);
    void *res = b17_unk_590;
    u8 t = ((FtrSwitch *)b17_unk_73c)->isOn();
    unk_844.bindMaterial((G3dResAccess *)res, (s32)p17::data_ov004_0224bb98, t);
    if (((FtrSwitch *)b17_unk_73c)->isOn() != 0 && p17::FtrMgr_IsShopScene() == 0) {
        changeAct(2, 0xff);
    } else {
        changeAct(0, 0xff);
    }
    return TRUE;
}

FtrTvVcr::~FtrTvVcr() {
}

FtrTvVcr::FtrTvVcr() {
}

extern "C" FtrActor *FtrTvVcr_Create() {
    return new FtrTvVcr;
}

// ================================================================ FtrTv
void FtrTv::execFtrAct01() {
    if (((FtrSwitch *)b17_unk_73c)->isChanging()) {
        p17::FtrSync_RequestAct(this, 0, 0xff, 1);
    }
}

BOOL FtrTv::enterFtrAct01() {
    playSound1();
    unk_844.setLit(1, 1, 0);
    ((FtrSwitch *)b17_unk_73c)->set(1, 0);
    bindTvScreenTex(1);
    return TRUE;
}

void FtrTv::execFtrAct00() {
    if (((FtrSwitch *)b17_unk_73c)->isChanging()) {
        p17::FtrSync_RequestAct(this, 1, 0xff, 1);
    }
}

BOOL FtrTv::enterFtrAct00() {
    playSound2();
    unk_844.setLit(0, 1, 0);
    ((FtrSwitch *)b17_unk_73c)->set(0, 0);
    bindTvScreenTex(0);
    return TRUE;
}

void FtrTv::execFtrAct() {
    static void (FtrTv::*tbl[2])() = {
        &FtrTv::execFtrAct00,
        &FtrTv::execFtrAct01,
    };
    u32 i = unk_840;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

BOOL FtrTv::changeAct(u32 idx, u8 v) {
    FtrActor::changeAct(idx, v);
    static BOOL (FtrTv::*tbl[2])() = {
        &FtrTv::enterFtrAct00,
        &FtrTv::enterFtrAct01,
    };
    if (idx < 2) {
        if ((this->*tbl[idx])()) {
            unk_840 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrTv::getActSwitchState(u32 idx) {
    if (idx < 2) {
        return p17::data_ov004_0224003c[idx];
    }
    return 0;
}

void FtrTv::func_ov004_0220e738() {
    unk_860 = 1;
}

BOOL FtrTv::vfunc_0c() {
    return TRUE;
}

BOOL FtrTv::updateActive() {
    ((Unk_ov004_02205b14 *)&unk_844)->updateEmission();
    execFtrAct();
    unk_860 = 0;
    return TRUE;
}

BOOL FtrTv::initModel() {
    void *res = b17_unk_590;
    u8 t = ((FtrSwitch *)b17_unk_73c)->isOn();
    unk_844.bindMaterial((G3dResAccess *)res, (s32)p17::data_ov004_0224bb98, t);
    if (((FtrSwitch *)b17_unk_73c)->isOn() != 0 && p17::FtrMgr_IsShopScene() == 0) {
        changeAct(1, 0xff);
    } else {
        changeAct(0, 0xff);
    }
    return TRUE;
}

FtrTv::~FtrTv() {
}

FtrTv::FtrTv() {
}

extern "C" FtrActor *FtrTv_Create() {
    return new FtrTv;
}

// ================================================================ FtrStereo

// ================================================================ FtrActor
BOOL FtrActor::bindTvScreenTex(BOOL a) {
    if (a != 0) {
        void *r = b17_unk_590;
        void *t = p17::FurnitureManager_GetTvTex();
        p17::Model_BindMatTexByIdx(r, p17::data_ov004_0224bb98, t, 0, 0);
    } else {
        void *r = b17_unk_590;
        void *t = p17::_ZN11FtrModelRes10getTextureEv(b17_sub_6c8);
        p17::Model_BindMatTexByName(r, p17::data_ov004_0224bb98, t, p17::data_ov004_0224bba0, p17::data_ov004_0224bba8);
    }
    return TRUE;
}

// ---- part 18: from unk_0220e9b4.cpp
namespace p18 {
extern "C" {
BOOL FtrActor_StepAnims(void *self);
}
}

// Element of the 3-element container (0x1c bytes)

struct Unk_ov004_0220ebd8_Ptr {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
};

class FtrStereo : public FtrActor {
public:
    FtrStereo();
    virtual ~FtrStereo();

    virtual BOOL vfunc_0c();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL changeAct(u32 a, u8 b);
    virtual u8 getActSwitchState(u32 a);
    virtual BOOL initModel();
    virtual BOOL updateActive();
    virtual BOOL updateAppearRemove();

    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();
    void execTalkAct05();
    BOOL enterTalkAct05();
    BOOL execTalkAct04();
    BOOL enterTalkAct04();
    BOOL execTalkAct03();
    BOOL enterTalkAct03();
    void execTalkAct02();
    BOOL enterTalkAct02();
    BOOL execTalkAct01();
    BOOL enterTalkAct01();
    void execTalkAct00();
    BOOL enterTalkAct00();
    void execTalkAct();
    BOOL setTalkAct(s32 a);
    void stopSong(u32 a, BOOL b);
    void startSong(u32 a);
    void func_ov004_0220f29c();
    void func_ov004_0220f2a8();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 unk_841;
    /* 0x842 */ u8 pad_842[2];
    /* 0x844 */ FtrGlowMatSet unk_844;
    /* 0x89c */ u8 unk_89c;
    /* 0x89d */ u8 pad_89d[3];
    /* 0x8a0 */ s32 unk_8a0;
};

namespace p18 {
extern "C" {
extern u8 data_ov004_02240028[];
extern u16 sStereoSong;
extern u8 gSaveVillagers[];
extern u8 data_ov004_0224bbb0[];
void _ZN9Character13func_0203e47cEi(void *self, TalkMsgRequest *sec);
void _ZN9Character13func_0203e488Ei(void *self, TalkMsgRequest *sec);
s32 TalkRequest_SetTargetDone(void *self);
s32 TalkRequest_AddPlayerTalk6(void *self, s32 a);
s32 func_02094f20();
void _ZN10MsgRequest11setFileNameEPKc(void *p, void *q);
s32 Scene_InVillagerHouse();
u32 Scene_GetVillagerHouse();
s32 Scene_InHouseRoom();
s32 SaveVillagers_Get(void *p, u32 a);
u32 Villager_GetInfo4d();
void _ZN8ItemNameC1EPt(void *out, u16 *in);
void _ZN8ItemNameD1Ev(void *p);
void _ZN15TalkWindowState12setNamedSlotEiPvj(void *a, s32 b, void *c, s32 d);
u16 *HouseRoom_GetCurrentSong();
s32 HouseRoom_ClearCurrentSong();
void HouseRoom_SetCurrentSong(u16 *p);
s32 MenuCtrl_IsFinished();
s32 MenuCtrl_IsResultOk();
u16 MenuCtrl_GetSongItem();
s32 MenuCtrl_OpenLauncher(s32 a);
void FtrSync_RequestAct(void *self, s32 a, u8 b, s32 c);
void FtrSync_ChangeAct(void *self, s32 a, u8 b, s32 c);
void Bgm_Release(u16 a);
void Bgm_Request(s32 a, u16 b, s32 c, s32 d);
void _ZN9FtrSwitch3setEji(void *p, s32 a, s32 b);
BOOL _ZN9FtrSwitch10isChangingEv(void *p);
u8 _ZN9FtrSwitch4isOnEv(void *p);
s32 FtrActor_TestPlayerUnk();
s32 FtrMgr_IsShopScene();
void _ZN8FtrActor10isStereoOnEv(void *self);
void FtrMgr_SetSwitchAll(s32 a, void (*f)(void *), s32 c);
}
}

typedef void (FtrStereo::*Unk_ov004_0220ead4_Fn)();
typedef BOOL (FtrStereo::*Unk_ov004_0220eb40_Fn)();

static inline BOOL Unk_ov004_0220eff4_InRange(volatile u16 *p) {
    u32 hi = *p;
    u32 lo = *p;
    BOOL r = FALSE;
    if (lo >= 0x1323 && hi <= 0x1368) r = TRUE;
    return r;
}

static inline u16 Unk_ov004_0220ec30_Val(u32 t) {
    if (t < 0x46) {
        return t + 0x1323;
    }
    return 0x1323;
}

BOOL FtrStereo::enterFtrAct01() {
    playSound1();
    p18::FtrMgr_SetSwitchAll(0, p18::_ZN8FtrActor10isStereoOnEv, 0);
    p18::_ZN9FtrSwitch3setEji(b18_f_73c, 1, 0);
    u8 *p = &b18_unk_778;
    unk_841 = *p;
    startSong(*p);
    if (b18_unk_77c == 0x29) {
        playAnim(1, 0, 0x1000, 0);
    }
    return TRUE;
}

void FtrStereo::execFtrAct00() {
    if (b18_unk_77c == 0x29) {
        p18::FtrActor_StepAnims(this);
    }
    unk_844.setLit(0, 1, 0);
    if (p18::_ZN9FtrSwitch10isChangingEv(b18_f_73c)) {
        p18::_ZN9FtrSwitch3setEji(b18_f_73c, 0, 0);
        p18::TalkRequest_AddPlayerTalk6(this, 0);
        p18::func_02094f20();
    }
}

BOOL FtrStereo::enterFtrAct00() {
    playSound2();
    p18::_ZN9FtrSwitch3setEji(b18_f_73c, 0, 0);
    if (b18_unk_77a == 0) {
        stopSong(unk_841, 1);
    }
    if (b18_unk_77c == 0x29) {
        playAnim(0, 1, 0x1000, 0);
    }
    return TRUE;
}

void FtrStereo::execFtrAct() {
    static Unk_ov004_0220ead4_Fn tbl[2] = {
        &FtrStereo::execFtrAct00,
        &FtrStereo::execFtrAct01,
    };
    if (unk_89c < 2) {
        (this->*tbl[unk_89c])();
    }
}

BOOL FtrStereo::changeAct(u32 a, u8 b) {
    FtrActor::changeAct(a, b);
    static Unk_ov004_0220eb40_Fn tbl[2] = {
        &FtrStereo::enterFtrAct00,
        &FtrStereo::enterFtrAct01,
    };
    if (a < 2) {
        if ((this->*tbl[a])()) {
            unk_89c = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrStereo::getActSwitchState(u32 a) {
    if (a < 2) {
        return p18::data_ov004_02240028[a];
    }
    return 0;
}

void FtrStereo::execTalkAct05() {
    if (((Unk_ov004_0220ebd8_Ptr *)unk_3c) != NULL) {
        if (((Unk_ov004_0220ebd8_Ptr *)unk_3c)->unk_04 == 0) {
            p18::_ZN9Character13func_0203e47cEi(this, this);
            p18::TalkRequest_SetTargetDone(this);
        }
    }
}

BOOL FtrStereo::enterTalkAct05() {
    return TRUE;
}

BOOL FtrStereo::execTalkAct04() {
    if (((Unk_ov004_0220ebd8_Ptr *)unk_3c) != NULL) {
        if (((Unk_ov004_0220ebd8_Ptr *)unk_3c)->unk_04 != 0) {
            setTalkAct(5);
        }
    }
}

BOOL FtrStereo::enterTalkAct04() {
    p18::_ZN9Character13func_0203e488Ei(this, this);
    ((Unk_ov004_0220ebd8_Ptr *)unk_3c)->unk_08 = 1;
    {
        TalkMsgRequest &sec = *this;
        p18::_ZN10MsgRequest11setFileNameEPKc(&sec, p18::data_ov004_0224bbb0);
    }
    struct { u32 pad; u16 v; } l;
    u32 buf1[9];
    u32 buf2[9];
    if (p18::Scene_InVillagerHouse()) {
        u32 t = 0;
        u32 r = p18::Scene_GetVillagerHouse();
        if (p18::SaveVillagers_Get(p18::gSaveVillagers, r)) {
            t = p18::Villager_GetInfo4d();
        }
        l.v = Unk_ov004_0220ec30_Val(t);
        p18::_ZN8ItemNameC1EPt(buf1, &l.v);
        unk_1e = 5;
        p18::_ZN15TalkWindowState12setNamedSlotEiPvj(((Unk_ov004_0220ebd8_Ptr *)unk_3c), 0, buf1, 7);
        p18::_ZN8ItemNameD1Ev(buf1);
    } else {
        u16 *p = p18::HouseRoom_GetCurrentSong();
        BOOL ok = FALSE;
        if (*p >= 0x1323 && *p <= 0x1368) ok = TRUE;
        if (ok) {
            p18::_ZN8ItemNameC1EPt(buf2, p);
            unk_1e = 5;
            p18::_ZN15TalkWindowState12setNamedSlotEiPvj(((Unk_ov004_0220ebd8_Ptr *)unk_3c), 0, buf2, 7);
            p18::_ZN8ItemNameD1Ev(buf2);
        } else {
            unk_1e = 6;
        }
    }
    return TRUE;
}

BOOL FtrStereo::execTalkAct03() {
    return setTalkAct(4);
}

BOOL FtrStereo::enterTalkAct03() {
    return TRUE;
}

void FtrStereo::execTalkAct02() {
    if (p18::MenuCtrl_IsFinished()) {
        if (p18::MenuCtrl_IsResultOk()) {
            volatile u16 vv;
            vv = p18::MenuCtrl_GetSongItem();
            BOOL ok = FALSE;
            u32 v = vv;
            if (v < 0x1323 || v > 0x1368) {
            } else {
                ok = TRUE;
            }
            s32 t;
            if (ok) {
                t = v - 0x1323;
            } else {
                t = -1;
            }
            p18::FtrSync_RequestAct(this, 1, t, 1);
        }
        p18::TalkRequest_SetTargetDone(this);
    }
}

BOOL FtrStereo::enterTalkAct02() {
    if (p18::MenuCtrl_OpenLauncher(0x40)) {
        return TRUE;
    }
    return FALSE;
}

BOOL FtrStereo::execTalkAct01() {
    return setTalkAct(2);
}

BOOL FtrStereo::enterTalkAct01() {
    return TRUE;
}

void FtrStereo::execTalkAct00() {
}

BOOL FtrStereo::enterTalkAct00() {
    return TRUE;
}

void FtrStereo::execTalkAct() {
    static Unk_ov004_0220ead4_Fn tbl[6] = {
        &FtrStereo::execTalkAct00,
        (Unk_ov004_0220ead4_Fn)&FtrStereo::execTalkAct01,
        &FtrStereo::execTalkAct02,
        (Unk_ov004_0220ead4_Fn)&FtrStereo::execTalkAct03,
        (Unk_ov004_0220ead4_Fn)&FtrStereo::execTalkAct04,
        &FtrStereo::execTalkAct05,
    };
    if (unk_8a0 < 6) {
        (this->*tbl[unk_8a0])();
    }
}

BOOL FtrStereo::setTalkAct(s32 a) {
    static Unk_ov004_0220eb40_Fn tbl[6] = {
        &FtrStereo::enterTalkAct00,
        &FtrStereo::enterTalkAct01,
        &FtrStereo::enterTalkAct02,
        &FtrStereo::enterTalkAct03,
        &FtrStereo::enterTalkAct04,
        &FtrStereo::enterTalkAct05,
    };
    if (a < 6) {
        if ((this->*tbl[a])()) {
            unk_8a0 = a;
            return TRUE;
        }
    }
    return FALSE;
}

void FtrStereo::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 1:
        if (p18::Scene_InHouseRoom() && p18::FtrActor_TestPlayerUnk()) {
            setTalkAct(1);
        } else {
            setTalkAct(3);
        }
        break;
    case 8:
        setTalkAct(0);
        break;
    }
}

void FtrStereo::stopSong(u32 a, BOOL b) {
    if (unk_840 != 0) {
        if (a < 0x46) {
            p18::Bgm_Release(a + 0xb0);
            if (b) {
                u16 v = 0xfff1;
                p18::HouseRoom_SetCurrentSong(&v);
            }
            unk_840 = 0;
        }
    }
}

void FtrStereo::startSong(u32 a) {
    if (unk_840 == 0) {
        if (a < 0x46) {
            p18::Bgm_Request(0x11, a + 0xb0, 0x7f, 0);
            u16 v = Unk_ov004_0220ec30_Val(a);
            p18::HouseRoom_SetCurrentSong(&v);
            unk_840 = 1;
        }
    }
}

BOOL FtrStereo::vfunc_0c() {
    BOOL t = isRemoving();
    stopSong(unk_841, t);
    BOOL r = FALSE;
    volatile u16 *pg = &p18::sStereoSong;
    u32 hi = *pg;
    u32 lo = *pg;
    if (lo >= 0x1323 && hi <= 0x1368) r = TRUE;
    if (r) {
        p18::sStereoSong = 0xfff1;
    }
    return TRUE;
}

BOOL FtrStereo::updateAppearRemove() {
    updateActive();
}

BOOL FtrStereo::updateActive() {
    execFtrAct();
    execTalkAct();
    unk_844.update();
    return TRUE;
}

BOOL FtrStereo::initModel() {
    if (b18_unk_77c == 0x29 || b18_unk_77c == 0x13) {
        initAnims(0, 0, 0x1000, 0);
    }
    u32 r4 = b18_unk_590;
    u32 c = p18::_ZN9FtrSwitch4isOnEv(b18_f_73c);
    unk_844.init(r4, c);
    if (b18_unk_768 == 1) {
        p18::FtrSync_ChangeAct(this, 0, 0xff, 1);
    } else if (p18::_ZN9FtrSwitch4isOnEv(b18_f_73c) != 0 && p18::FtrMgr_IsShopScene() == 0) {
        if (p18::Scene_InVillagerHouse()) {
            u32 t = 0;
            u32 r = p18::Scene_GetVillagerHouse();
            if (p18::SaveVillagers_Get(p18::gSaveVillagers, r)) {
                t = p18::Villager_GetInfo4d();
            }
            BOOL f = FALSE;
            volatile u16 *pg = &p18::sStereoSong;
            u32 hi = *pg;
            u32 lo = *pg;
            if (lo >= 0x1323 && hi <= 0x1368) f = TRUE;
            if (f) {
                changeAct(0, 0xff);
            } else if (changeAct(1, t)) {
                p18::sStereoSong = Unk_ov004_0220ec30_Val(t);
            }
        } else {
            volatile u16 v;
            v = *p18::HouseRoom_GetCurrentSong();
            BOOL f = FALSE;
            u32 hi = v;
            u32 lo = v;
            if (lo >= 0x1323 && hi <= 0x1368) f = TRUE;
            if (f) {
                s32 x;
                if (hi >= 0x1323 && hi <= 0x1368) {
                    x = hi - 0x1323;
                } else {
                    x = -1;
                }
                changeAct(1, x);
            } else {
                p18::HouseRoom_ClearCurrentSong();
                changeAct(0, 0xff);
            }
        }
    } else {
        changeAct(0, 0xff);
    }
    return TRUE;
}

FtrStereo::~FtrStereo() {}

FtrStereo::FtrStereo() {}

extern "C" void FtrStereo_Create() {
    new FtrStereo;
}

void FtrStereo::func_ov004_0220f29c() {
    *((u8 *)this + 0x847) = 1;
}

void FtrStereo::func_ov004_0220f2a8() {
    *((u8 *)this + 0x846) = 1;
}


// ---- part 19: from unk_0220f2bc.cpp
namespace p19 {
extern "C" {
void _ZN18Unk_ov004_022077a48getTilesEP23Unk_ov004_02207854_ListPvi(void *self, FtrTileList *l, s32 a, s32 b);
u32 FtrActor_GetFtrIndex(void *self);
u32 FtrActor_GetHeap(void *self);
void FtrActor_StepAnims(void *self);
}
}

// list of up to 4 tile positions (ctor/dtor/methods are defined elsewhere)

struct Unk_ov004_0220f6e0_Rec {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
};

union Unk_ov004_0220f2c0_Pad {
    u16 h;
    u8 b[2];
};

class FtrClock : public FtrActor {
public:
    FtrClock();
    virtual ~FtrClock();
    virtual BOOL vfunc_0c();
    virtual void vfunc_6c(s32 a, void *b);
    virtual BOOL initModel();
    virtual BOOL updateActive();

    /* 0x840 */ s8 unk_840;
    /* 0x841 */ s8 unk_841;
    /* 0x842 */ Unk_ov004_0220f2c0_Pad unk_842;
    /* 0x844 */ Unk_ov004_0220f2c0_Pad unk_844;
    /* 0x846 */ u8 unk_846;
    /* 0x847 */ u8 unk_847;
};

namespace p19 {
extern "C" {
extern u8 *gSceneBlockMap;
extern u8 data_ov004_0224bbc0[];

void Clock_GetMinuteHour(void *);
void _ZN9AnimModel8setFrameEi(void *, u32);
void _ZN14BlendAnimModel9stepBlendEv(void *);
void _ZN14BlendAnimModel8initAnimEiiitt(void *, void *, s32, s32, s32, s32);
void _ZN9AnimModel10attachAnimEv(void *);
BOOL _ZN9AnimModel11allocAnmObjEPv(void *, u32);
BOOL _ZN13AnimFrameCtrl10isFinishedEv(void *);
u32 _ZN12Unk_0209c2f413func_0209c348Ev(u32);
u32 Scene_GetCurrent(void);
s32 _ZN11FtrModelRes10getAnimSetEv(void *);
void *_ZN10FtrAnimSet6getBcaEj(void *, u32);
void _ZN15FtrSoundEmitter8setPitchEj(void *, s32);
void _ZN15FtrSoundEmitter8playOnceEjj(void *, s32, void *);
void _ZN15FtrSoundEmitter4playEjj(void *, s32, void *);
s32 FtrMgr_IsShopScene(void);
s32 FtrMgr_GetCycleCounter(void);
void *FtrContactSet_GetInstance(void);
void *_ZN13FtrContactSet11findContactEPv(void *, void *);
u16 _ZN10FtrContact12getPushAngleEv(void *);
void *_ZN10FtrContact22getClampedContactPointEv(void *);
BOOL PlayerActor_LocalRequestStorageClose(s32 *);
BOOL PlayerActor_TestLocalFlag02(s32);
BOOL PlayerActor_LocalRequestStorageOpen(s32 *, void *, void *, u16 *);
void _ZN9Character13func_0203e47cEi(void *, TalkMsgRequest *);
void _ZN9Character13func_0203e488Ei(void *, TalkMsgRequest *);
void TalkRequest_SetTargetDone(void *);
void _ZN10MsgRequest11setFileNameEPKc(TalkMsgRequest &, void *);
BOOL FtrSync_ChangeAct(void *, s32, s32, s32);
BOOL MenuCtrl_IsFinished(void);
BOOL MenuCtrl_OpenLauncher(s32);
void *BlockMap_GetItemPtr(void *, s32, s32, s32, s32, u32);
BOOL Item_IsFurniture(void *);
}
}

BOOL FtrClock::vfunc_0c() {
    return TRUE;
}

BOOL FtrClock::updateActive() {
    unk_844.h = unk_842.h;
    p19::Clock_GetMinuteHour(&unk_842);
    if (b19_unk_77c == 0x10) {
        if (!isPreview() && unk_840 >= 0 && unk_840 != unk_841 && unk_847 != 0) {
            p19::_ZN15FtrSoundEmitter8setPitchEj(b19_f_794, 1);
        }
        unk_841 = unk_840;
        if (unk_840 == -1) {
            if (isPreview()) {
                unk_840 = 1;
            } else if (!p19::FtrMgr_IsShopScene() && unk_844.b[1] != unk_842.b[1]) {
                s32 t = unk_842.b[1];
                unk_840 = t % 12;
                if (unk_840 == 0) {
                    unk_840 = 12;
                }
                if (!isPreview()) {
                    p19::_ZN15FtrSoundEmitter8playOnceEjj(b19_f_794, 0x42d, b19_f_7b4);
                }
                p19::_ZN14BlendAnimModel8initAnimEiiitt(b19_f_534, p19::_ZN10FtrAnimSet6getBcaEj((void *)p19::_ZN11FtrModelRes10getAnimSetEv(b19_f_6c8), 0), 1, 0x1000, 0, 0);
            }
        } else if (unk_840 > 0) {
            if (!isPreview()) {
                p19::_ZN15FtrSoundEmitter8playOnceEjj(b19_f_794, 0x42d, b19_f_7b4);
            }
            p19::_ZN14BlendAnimModel9stepBlendEv(b19_f_534);
            if (p19::_ZN13AnimFrameCtrl10isFinishedEv(b19_f_5d0)) {
                p19::_ZN14BlendAnimModel8initAnimEiiitt(b19_f_534, p19::_ZN10FtrAnimSet6getBcaEj((void *)p19::_ZN11FtrModelRes10getAnimSetEv(b19_f_6c8), 0), 1, 0x1000, 0, 0);
                if (!isPreview()) {
                    unk_840 = unk_840 - 1;
                }
                if (unk_840 == 0) {
                    unk_840 = -1;
                }
            }
        }
    } else if (b19_unk_77c == 0x2b) {
        p19::FtrActor_StepAnims(this);
    }
    s32 s = p19::FtrMgr_GetCycleCounter();
    if (b19_unk_77c == 0x11) {
        p19::_ZN9AnimModel8setFrameEi(b19_f_534, s);
    }
    if (unk_846 != 0 && (s == 9 || s == 0x1d)) {
        if (b19_unk_77c == 0x10) {
            p19::_ZN15FtrSoundEmitter4playEjj(b19_f_794, 0x4d0, b19_f_7b4);
        } else {
            playSound3();
        }
    }
    unk_846 = 0;
    unk_847 = 0;
    return TRUE;
}

BOOL FtrClock::initModel() {
    u32 r4 = p19::FtrActor_GetHeap(this);
    p19::Clock_GetMinuteHour(&unk_844);
    unk_842.h = unk_844.h;
    unk_840 = -1;
    if (b19_unk_77c == 0x10) {
        if (p19::_ZN9AnimModel11allocAnmObjEPv(b19_f_534, p19::_ZN12Unk_0209c2f413func_0209c348Ev(r4))) {
            p19::_ZN14BlendAnimModel8initAnimEiiitt(b19_f_534, p19::_ZN10FtrAnimSet6getBcaEj((void *)p19::_ZN11FtrModelRes10getAnimSetEv(b19_f_6c8), 0), 1, 0x1000, 0, 0);
            p19::_ZN9AnimModel10attachAnimEv(b19_f_534);
        }
    } else if (b19_unk_77c == 0x11) {
        if (p19::_ZN9AnimModel11allocAnmObjEPv(b19_f_534, p19::_ZN12Unk_0209c2f413func_0209c348Ev(r4))) {
            p19::_ZN14BlendAnimModel8initAnimEiiitt(b19_f_534, p19::_ZN10FtrAnimSet6getBcaEj((void *)p19::_ZN11FtrModelRes10getAnimSetEv(b19_f_6c8), 0), 0, 0x1000, 0, 0);
            p19::_ZN9AnimModel10attachAnimEv(b19_f_534);
        }
    } else if (b19_unk_77c == 0x2b) {
        initAnims(0, 0, 0x1000, 0);
    }
    return TRUE;
}

FtrClock::~FtrClock() {
}

FtrClock::FtrClock() {
}

extern "C" void FtrClock_Create() {
    new FtrClock;
}



























// ---- part 20: from unk_0220fbf4.cpp
namespace p20 {
extern "C" {
void FtrActor_PlayAnimsFromLastFrame(void *self, s32 a, s32 b, s32 c);
}
}
namespace p20 {
extern "C" {
BOOL FtrActor_StepAnims(void *self);
u32 FtrActor_GetFtrIndex(void *self);
void _ZN18Unk_ov004_022077a48getTilesEP23Unk_ov004_02207854_ListPvi(void *self, void *a, s32 b, s32 c);
}
}

struct Unk_ov004_0220fde4_Vec {
    s32 x, y, z;
};

struct Unk_ov004_0220fde4_Pos {
    s32 x, y;
};

class FtrStorage : public FtrActor {
public:
    FtrStorage();
    virtual ~FtrStorage();

    virtual BOOL vfunc_0c();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL changeAct(u32 a, u8 b);
    virtual u8 getActSwitchState(u32 a);
    virtual BOOL initModel();
    virtual BOOL updateActive();
    virtual BOOL isReady();

    void execTalkAct0B();
    BOOL enterTalkAct0B();
    BOOL execTalkAct0A();
    BOOL enterTalkAct0A();
    BOOL execTalkAct09();
    BOOL enterTalkAct09();
    BOOL execTalkAct08();
    BOOL enterTalkAct08();
    BOOL execTalkAct07();
    BOOL enterTalkAct07();
    BOOL execTalkAct06();
    BOOL enterTalkAct06();
    BOOL execTalkAct05();
    BOOL enterTalkAct05();
    BOOL execTalkAct04();
    BOOL enterTalkAct04();
    BOOL execTalkAct03();
    BOOL enterTalkAct03();
    BOOL execTalkAct02();
    BOOL enterTalkAct02();
    BOOL execTalkAct01();
    BOOL enterTalkAct01();
    BOOL execTalkAct00();
    BOOL enterTalkAct00();
    void execTalkAct();
    BOOL setTalkAct(s32 s);
    s32 getStorageType();
    void execFtrAct03();
    BOOL enterFtrAct03();
    void execFtrAct02();
    BOOL enterFtrAct02();
    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();

    /* 0x840 */ FtrGlowMat unk_840;
    /* 0x85c */ u8 unk_85c;
    /* 0x85d */ u8 pad_85d[3];
    /* 0x860 */ u32 unk_860;
};

namespace p20 {
extern "C" {
extern u32 sFtrStorageKinds[];
extern u8 data_ov004_02240048[];
extern u8 gTalkMsgIndexEnd[];

BOOL _ZN9FtrSwitch3setEji(void *, s32, s32);
BOOL _ZN9FtrSwitch10isChangingEv(void *);
BOOL _ZN9FtrSwitch4isOnEv(void *);
void _ZN11FtrVisNodes10setVisibleEj(void *, s32);
void _ZN10FtrGlowMatD1Ev(void *);
void _ZN10FtrGlowMatC1Ev(void *);
void *_ZN11FtrModelRes10getAnimSetEv(void *);
void _ZN10FtrAnimSet6getBcaEj(void *, u32);
BOOL FtrMgr_IsShopScene(void);
BOOL FtrActor_TestPlayerUnk(void);
BOOL Scene_InHouseRoom(void);
void *FtrContactSet_GetInstance(void);
void *_ZN13FtrContactSet11findContactEPv(void *, void *);
BOOL _ZN10FtrContact7getSideEv(void *);
BOOL FtrMgr_GetSurfaceHeight(s32, s32);
s32 Ground_GetExitAt(s32, s32);
void _ZN11FtrTileListC1Ev(void *);
void _ZN11FtrTileList7releaseEv(void *);
void TalkRequest_AddPlayerTalk6(void *, s32);
void func_02094f20(void);
void func_020e93a0(void *, s32);
void _ZN8FtrActorC2Ev(void *);
void _ZN8FtrActorD2Ev(void *);
void _ZN8FtrActordlEPv(void *);
void *_ZN8FtrActornwEm(u32);
u32 _ZN15TalkWindowState13getChoiceListEv(u32);
u32 _ZN10ChoiceList9getResultEv(u32);
void _ZN15TalkWindowState14setNextMessageEPhPv(u32, void *, u32);
void _ZN10ChoiceList5resetEii(u32, s32, s32);
void _ZN10ChoiceList8setEntryEiPKhiS1_PKci(u32, s32, void *, s32, void *, s32, s32);
void _ZN10ChoiceList9loadTextsEv(u32);
void _ZN15TalkWindowState11openChoicesEi(u32, s32);
void _ZN9Character13func_0203e47cEi(void *, void *);
void TalkRequest_SetTargetDone(void *);
void ProcBase_RequestDelete(void *);
u32 FtrActor_MakeSpawnArg(u32, u32, u32, u32, u8, u32);
BOOL FtrMgr_SpawnFromArg(void);
u32 Ftr_GetUnk05(void *);
u32 Item_GetFurnitureIndex(void *);
BOOL MenuCtrl_IsFinished(void);
BOOL MenuCtrl_IsResultOk(void);
u32 MenuCtrl_GetIndex(void);
u16 Pocket_GetItem(void);
void *PlayerData_GetCurrent(void);
void _ZN10PlayerData6setBedEPt(void *, void *);
u16 Item_MakeFurniture(u32, u32);
void Pocket_SetItem(void *, u32, u32);
}
}

typedef void (FtrStorage::*Unk_ov004_0220ff44_Fn)();
typedef BOOL (FtrStorage::*Unk_ov004_0220ffd0_Fn)();

s32 FtrStorage::getStorageType() {
    u32 i;
    for (i = 0; i < 3; i++) {
        if (b20_unk_77c == p20::sFtrStorageKinds[i]) {
            return i;
        }
    }
    return -1;
}

void FtrStorage::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 1:
        if (p20::Scene_InHouseRoom()) {
            if (p20::FtrActor_TestPlayerUnk()) {
                setTalkAct(1);
            } else {
                setTalkAct(6);
            }
        } else {
            setTalkAct(6);
        }
        break;
    case 8:
        setTalkAct(0);
        break;
    }
}

void FtrStorage::execFtrAct03() {
    p20::_ZN11FtrVisNodes10setVisibleEj(b20_f_760, 1);
    if (p20::FtrActor_StepAnims(this)) {
        changeAct(0, 0xff);
    }
}

BOOL FtrStorage::enterFtrAct03() {
    p20::_ZN9FtrSwitch3setEji(b20_f_73c, 1, 0);
    playSound2();
    if (b20_unk_77c == 0xf) {
        playAnim(1, 1, 0x1000, 0);
    } else {
        p20::FtrActor_PlayAnimsFromLastFrame(this, 0, 3, 0x1000);
    }
    return TRUE;
}

void FtrStorage::execFtrAct02() {
    p20::_ZN11FtrVisNodes10setVisibleEj(b20_f_760, 1);
    if (isPreview()) {
        changeAct(3, 0xff);
    }
}

BOOL FtrStorage::enterFtrAct02() {
    p20::_ZN9FtrSwitch3setEji(b20_f_73c, 0, 0);
    if (b20_unk_77c == 0xf) {
        p20::_ZN10FtrAnimSet6getBcaEj(p20::_ZN11FtrModelRes10getAnimSetEv(b20_f_6c8), 0);
        p20::FtrActor_PlayAnimsFromLastFrame(this, 0, 1, 0x1000);
    } else {
        p20::FtrActor_PlayAnimsFromLastFrame(this, 0, 1, 0x1000);
    }
    return TRUE;
}

void FtrStorage::execFtrAct01() {
    p20::_ZN11FtrVisNodes10setVisibleEj(b20_f_760, 1);
    if (p20::FtrActor_StepAnims(this)) {
        changeAct(2, 0xff);
    }
}

BOOL FtrStorage::enterFtrAct01() {
    p20::_ZN9FtrSwitch3setEji(b20_f_73c, 0, 0);
    playSound1();
    playAnim(0, 1, 0x1000, 0);
    return TRUE;
}

void FtrStorage::execFtrAct00() {
    s32 t;
    u32 i;
    p20::_ZN11FtrVisNodes10setVisibleEj(b20_f_760, 0);
    void *e = p20::_ZN13FtrContactSet11findContactEPv(p20::FtrContactSet_GetInstance(), this);
    if (p20::_ZN9FtrSwitch10isChangingEv(b20_f_73c) && e != NULL && p20::_ZN10FtrContact7getSideEv(e) == 0) {
        if (b20_unk_77c == 0xb) {
            FtrTileList arr;
            Unk_ov004_0220fde4_Vec v;
            p20::_ZN18Unk_ov004_022077a48getTilesEP23Unk_ov004_02207854_ListPvi(this, &arr, 0, 0);
            v.x = 0;
            v.y = 0;
            v.z = 0x2000;
            p20::func_020e93a0(&v, *(s16 *)((u8 *)this + 0x8e));
            volatile Unk_ov004_0220fde4_Pos p;
            p.x = 0;
            p.y = 0;
            p.x = v.x >> 13;
            p.y = v.z >> 13;
            for (i = 0; i < arr.getCount(); i++) {
                s32 a = p.x + arr.get(i)->x;
                t = p.y + arr.get(i)->y;
                if (p20::FtrMgr_GetSurfaceHeight(a, t) != 0 || p20::Ground_GetExitAt(a, t) != -1) {
                    p20::_ZN9FtrSwitch3setEji(b20_f_73c, 1, 0);
                    arr.release();
                    return;
                }
            }
            arr.release();
        }
        p20::TalkRequest_AddPlayerTalk6(this, 0);
        p20::func_02094f20();
    } else {
        if (isPreview()) {
            changeAct(1, 0xff);
        }
    }
}

BOOL FtrStorage::enterFtrAct00() {
    p20::_ZN9FtrSwitch3setEji(b20_f_73c, 1, 0);
    if (b20_unk_77c == 0xf) {
        p20::FtrActor_PlayAnimsFromLastFrame(this, 1, 1, 0x1000);
    } else {
        playAnim(0, 3, 0x1000, 0);
    }
    return TRUE;
}

void FtrStorage::execFtrAct() {
    static Unk_ov004_0220ff44_Fn tbl[4] = {
        &FtrStorage::execFtrAct00,
        &FtrStorage::execFtrAct01,
        &FtrStorage::execFtrAct02,
        &FtrStorage::execFtrAct03,
    };
    if (unk_85c < 4) {
        (this->*tbl[unk_85c])();
    }
}

BOOL FtrStorage::changeAct(u32 a, u8 b) {
    FtrActor::changeAct(a, b);
    static Unk_ov004_0220ffd0_Fn tbl[4] = {
        &FtrStorage::enterFtrAct00,
        &FtrStorage::enterFtrAct01,
        &FtrStorage::enterFtrAct02,
        &FtrStorage::enterFtrAct03,
    };
    if ((u32)a < 4) {
        if ((this->*tbl[a])()) {
            unk_85c = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrStorage::getActSwitchState(u32 a) {
    if (a < 4) {
        return p20::data_ov004_02240048[a];
    }
    return 0;
}

BOOL FtrStorage::isReady() {
    if (FtrActor::isReady()) {
        if (unk_860 == 0) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL FtrStorage::vfunc_0c() {
    return TRUE;
}

BOOL FtrStorage::updateActive() {
    execTalkAct();
    execFtrAct();
    return TRUE;
}

BOOL FtrStorage::initModel() {
    p20::_ZN11FtrVisNodes10setVisibleEj(b20_f_760, 0);
    if (b20_unk_768 == 1) {
        p20::_ZN9FtrSwitch3setEji(b20_f_73c, 1, 0);
    }
    if (b20_unk_77c == 0xf) {
        initAnims(0, 1, 0x1000, 0);
    } else {
        initAnims(0, 3, 0x1000, 0);
    }
    if (p20::_ZN9FtrSwitch4isOnEv(b20_f_73c) || p20::FtrMgr_IsShopScene()) {
        changeAct(0, 0xff);
    } else {
        changeAct(2, 0xff);
    }
    setTalkAct(0);
    return TRUE;
}

FtrStorage::~FtrStorage() {
}

FtrStorage::FtrStorage() {
    unk_85c = 0;
}

extern "C" void FtrStorage_Create() {
    new FtrStorage;
}









// ---- part 21: from unk_02210534.cpp
namespace p21 {
extern "C" {
u32 FtrActor_GetFtrIndex(void *self);
}
}

struct Unk_ov004_0221076c_R {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

namespace p21 {
extern "C" {
void FieldPos_FromUnitCenter(void *out, s32 x, s32 y);
void FieldPos_ToUnit(s32 *x, s32 *y, void *v);
s32 func_020e9650(void *a, void *b);
void func_020e93a0(void *v, s32 a);
void VEC_Add(void *a, void *b, void *c);
void *func_02095204(s32 i);
BOOL FtrMgr_IsFurnitureUsable(void);
BOOL FtrActor_IsPosClearOfCharacters(void *v, s32 a, s32 b, s32 c, s32 d);
BOOL FtrMgr_GetSurfaceHeight(s32 a, s32 b);
BOOL FtrMgr_GetSurfaceHeightAtPos(void *p);
s32 Ground_GetExitAt(s32 a, s32 b);
s32 Ground_GetExitAtPos(void *p);
void *FtrActorGrid_GetInstance(void);
FtrActor *_ZN12FtrActorGrid8getActorEiii(void *mgr, s32 x, s32 y, s32 z);
u32 FtrInfo_TestIndoorFlag2(u32 a);
extern char data_ov004_0224bbb0[];
extern char data_ov004_0224bbd0[];
extern char data_ov004_0224bbe4[];
extern s32 data_020c8cbc;
extern void *gCommManager;

s32 MenuCtrl_BuildPocketMask(BOOL (*cb)(void *, s32));
s32 MenuCtrl_OpenPocketSelect(s32 a, s32 b);
BOOL Item_IsFurniture(void);
s32 Ftr_GetUnk06(void *p);
void _ZN9Character13func_0203e47cEi(void *p, TalkMsgRequest *q);
void _ZN9Character13func_0203e488Ei(void *p, TalkMsgRequest *q);
s32 TalkRequest_SetTargetDone(void *p);
s32 TalkRequest_AddPlayerTalk6(void *p, s32 a);
s32 Scene_GetWarpRequest(void);
void SceneWarp_RequestFade(s32 a, s32 b, s32 c, s32 d);
void SaveManager_RequestAct01(void);
BOOL GameStart_IsNewTown(void);
BOOL GameStart_IsNewResident(void);
s32 PlayerData_GetCurrentIndex(void);
u32 Room_CountOccupants(void);
s32 _ZN11CommManager8isOnlineEv(void *p);
void PlayerActor_LocalRequestGetOutOfBed(u32 a, u32 b);
BOOL PlayerActor_LocalRequestBedApproach(Unk_ov004_0221076c_R *a, s32 *b, u16 *c, s16 d, s32 e);
void *FtrContactSet_GetInstance(void);
void *_ZN13FtrContactSet11findContactEPv(void *a, void *b);
u16 _ZN10FtrContact12getPushAngleEv(void *o);
Unk_ov004_0221076c_R *_ZN10FtrContact15getContactPointEv(void *o);
s32 _ZN10FtrContact7getSideEv(void *o);
s32 _ZN10FtrContact15getStepDistanceEv(void *o);
}
}

struct Unk_ov004_02210d58_P {
    s32 x, y;
    Unk_ov004_02210d58_P() {
        x = 0;
        y = 0;
    }
};

extern "C" {
BOOL FtrBed_IsTileFree(Unk_ov004_02210d58_P *p);
}


class FtrTilePair {
public:
    FtrTilePair();
    ~FtrTilePair();
    Unk_ov004_02210d58_P *get(u32 i);

    Unk_ov004_02210d58_P v[2];
};

class Unk_ov004_02210d28 : public FtrTilePair {
public:
    Unk_ov004_02210d28();
    ~Unk_ov004_02210d28();
};

class Unk_ov004_02210d48 : public FtrTilePair {
public:
    Unk_ov004_02210d48();
    ~Unk_ov004_02210d48();
};

struct Unk_ov004_022108f0_V {
    s32 x, y, z;
};

struct Unk_ov004_02210d7c_V {
    s32 x, y, z;
    Unk_ov004_02210d7c_V() {}
    ~Unk_ov004_02210d7c_V() {}
};

struct Unk_ov004_02210dd8_Chk {
    static inline BOOL R(u16 v) {
        return v == 0x37 ? TRUE : FALSE;
    }
};

struct Unk_ov004_022108f0_Pl {
    u8 pad_00[0x5c];
    s32 x, y, z;
};

struct Unk_ov004_022105d8_Pad {
    s32 v[2];
    Unk_ov004_022105d8_Pad() {}
    ~Unk_ov004_022105d8_Pad() {}
};

class FtrBed : public FtrActor {
public:
    FtrBed();
    virtual ~FtrBed();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL vfunc_48(void *a);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL changeAct(u32 a, u8 v);
    virtual BOOL initModel();
    virtual BOOL updateActive();
    // overrides of slots 0x14 / 0x18 of the secondary base TalkMsgRequest (new slots at the end of the vtable + thunks)
    virtual void vfunc_14();
    virtual void vfunc_s18();

    void execFtrAct0D();
    BOOL enterFtrAct0D();
    void execFtrAct0C();
    BOOL enterFtrAct0C();
    void execFtrAct0B();
    BOOL enterFtrAct0B();
    void execFtrAct0A();
    BOOL enterFtrAct0A();
    void execFtrAct09();
    BOOL enterFtrAct09();
    void execFtrAct08();
    BOOL enterFtrAct08();
    void execFtrAct07();
    BOOL enterFtrAct07();
    void execFtrAct06();
    BOOL enterFtrAct06();
    void execFtrAct05();
    BOOL enterFtrAct05();
    void execFtrAct04();
    BOOL enterFtrAct04();
    void execFtrAct03();
    BOOL enterFtrAct03();
    void execFtrAct02();
    BOOL enterFtrAct02();
    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();
    void calcStepPos(Unk_ov004_022108f0_V *out, Unk_ov004_022108f0_V *in, s32 ang, Unk_ov004_022108f0_V *opt);
    s32 checkStepTile(Unk_ov004_022108f0_V *a, s32 b, Unk_ov004_022108f0_V *c);
    u32 getLieTiles(void *o);
    u32 getSideTiles(void *o);
    BOOL isInUse();

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u8 unk_842;
    /* 0x843 */ u8 unk_843;
    /* 0x844 */ u8 unk_844;
    /* 0x845 */ u8 pad_845;
    /* 0x846 */ u16 unk_846;
    /* 0x848 */ u16 unk_848;
    /* 0x84a */ u16 pad_84a;
    /* 0x84c */ s32 unk_84c;
    /* 0x850 */ s32 unk_850;
    /* 0x854 */ s32 unk_854;
    /* 0x858 */ u16 unk_858;
    /* 0x85a */ u8 unk_85a;
    /* 0x85b */ u8 pad_85b;
    /* 0x85c */ FtrGlowMatSet unk_85c;
};

extern "C" BOOL FtrBed_IsDma06Is5(void *p, s32 b) {
    if (b == 0) {
        if (p21::Item_IsFurniture()) {
            if (p21::Ftr_GetUnk06(p) == 5) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL FtrBed::enterFtrAct0B() {
    return TRUE;
}

void FtrBed::execFtrAct0A() {
    if (((Unk_ov004_0220bdbc_P *)unk_3c)) {
        if (((Unk_ov004_0220bdbc_P *)unk_3c)->unk_04 == 0) {
            if (p21::MenuCtrl_OpenPocketSelect(p21::MenuCtrl_BuildPocketMask(FtrBed_IsDma06Is5), 0x28)) {
                changeAct(0xb, 0xff);
            }
        }
    }
}

BOOL FtrBed::enterFtrAct0A() {
    return TRUE;
}

void FtrBed::execFtrAct09() {
    if (((Unk_ov004_0220bdbc_P *)unk_3c)) {
        if (((Unk_ov004_0220bdbc_P *)unk_3c)->unk_04 == 0) {
            p21::_ZN9Character13func_0203e47cEi(this, this);
            p21::TalkRequest_SetTargetDone(this);
        }
    }
}

BOOL FtrBed::enterFtrAct09() {
    return TRUE;
}

void FtrBed::execFtrAct08() {
}

BOOL FtrBed::enterFtrAct08() {
    Unk_ov004_022105d8_Pad pad;
    p21::_ZN9Character13func_0203e488Ei(this, this);
    ((Unk_ov004_0220bdbc_P *)unk_3c)->unk_08 = 1;
    MsgRequest::setFileName(p21::data_ov004_0224bbb0);
    unk_1e = 4;
    return TRUE;
}

void FtrBed::execFtrAct07() {
    changeAct(8, 0xff);
}

BOOL FtrBed::enterFtrAct07() {
    return TRUE;
}

void FtrBed::execFtrAct06() {
    if (((Unk_ov004_0220bdbc_P *)unk_3c)) {
        if (((Unk_ov004_0220bdbc_P *)unk_3c)->unk_04 == 0) {
            p21::_ZN9Character13func_0203e47cEi(this, this);
            p21::TalkRequest_SetTargetDone(this);
            p21::SceneWarp_RequestFade(p21::Scene_GetWarpRequest(), 0x2e, 2, 0);
            p21::SaveManager_RequestAct01();
        }
    }
}

BOOL FtrBed::enterFtrAct06() {
    return TRUE;
}

void FtrBed::execFtrAct05() {
    if (((Unk_ov004_0220bdbc_P *)unk_3c)) {
        if (((Unk_ov004_0220bdbc_P *)unk_3c)->unk_04 == 0) {
            p21::PlayerActor_LocalRequestGetOutOfBed(unk_842, 0);
            p21::_ZN9Character13func_0203e47cEi(this, this);
            p21::TalkRequest_SetTargetDone(this);
        }
    }
}

BOOL FtrBed::enterFtrAct05() {
    return TRUE;
}

void FtrBed::execFtrAct04() {
}

BOOL FtrBed::enterFtrAct04() {
    Unk_ov004_022105d8_Pad pad;
    p21::_ZN9Character13func_0203e488Ei(this, this);
    ((Unk_ov004_0220bdbc_P *)unk_3c)->unk_08 = 1;
    if (p21::GameStart_IsNewTown() || p21::GameStart_IsNewResident()) {
        MsgRequest::setFileName(p21::data_ov004_0224bbd0);
        unk_1e = 0x19;
    } else {
        MsgRequest::setFileName(p21::data_ov004_0224bbe4);
        unk_1e = 0;
    }
    return TRUE;
}

void FtrBed::execFtrAct03() {
    if (unk_846 < 0x18) {
        unk_846++;
    }
    if (unk_846 == 0x18) {
        changeAct(4, 0xff);
    }
}

BOOL FtrBed::enterFtrAct03() {
    unk_846 = 0;
    return TRUE;
}

void FtrBed::execFtrAct02() {
    void *o = p21::_ZN13FtrContactSet11findContactEPv(p21::FtrContactSet_GetInstance(), this);
    u16 v = p21::_ZN10FtrContact12getPushAngleEv(o);
    Unk_ov004_0221076c_R *a = p21::_ZN10FtrContact15getContactPointEv(o);
    Unk_ov004_0221076c_R *b = p21::_ZN10FtrContact15getContactPointEv(o);
    if (p21::PlayerActor_LocalRequestBedApproach(a, &b->unk_08, &v, (s16)(unk_8e - 0x4000), 1)) {
        changeAct(3, 0xff);
    }
}

BOOL FtrBed::enterFtrAct02() {
    return TRUE;
}

void FtrBed::execFtrAct01() {
    BOOL r4 = FALSE;
    unk_854 = 0;
    void *o = p21::_ZN13FtrContactSet11findContactEPv(p21::FtrContactSet_GetInstance(), this);
    if (o) {
        if (unk_844 == p21::PlayerData_GetCurrentIndex()) {
            if (p21::_ZN10FtrContact7getSideEv(o) == 2 || p21::_ZN10FtrContact7getSideEv(o) == 0) {
                unk_854 = 1;
                if (unk_840 < 7) {
                    r4 = TRUE;
                    unk_840++;
                }
                if (p21::_ZN10FtrContact15getStepDistanceEv(o) > 0x200) {
                    if (unk_840 >= 7) {
                        if (p21::_ZN11CommManager8isOnlineEv(p21::gCommManager) == 0) {
                            p21::TalkRequest_AddPlayerTalk6(this, 0);
                        }
                    }
                }
            } else {
                if (p21::Room_CountOccupants() <= 1) {
                    unk_854 = 2;
                }
            }
        }
    }
    if (r4 == 0) {
        unk_840 = 0;
    }
}

BOOL FtrBed::enterFtrAct01() {
    unk_842 = (unk_5c[0] < (p21::data_020c8cbc >> 1)) ? 1 : 0;
    unk_843 = (unk_5c[2] < 0x16000) ? 1 : 0;
    if (unk_842) {
        if (unk_843) {
            unk_844 = 0;
        } else {
            unk_844 = 2;
        }
    } else {
        if (unk_843) {
            unk_844 = 1;
        } else {
            unk_844 = 3;
        }
    }
    return TRUE;
}

BOOL FtrBed::enterFtrAct00() {
    unk_840 = 0;
    return TRUE;
}

void FtrBed::execFtrAct00() {
    u16 v;
    BOOL r7 = FALSE;
    void *o = p21::_ZN13FtrContactSet11findContactEPv(p21::FtrContactSet_GetInstance(), this);
    Unk_ov004_022108f0_Pl *pl = (Unk_ov004_022108f0_Pl *)p21::func_02095204(4);
    if (o != 0) {
        if (pl != 0) {
            if (p21::FtrMgr_IsFurnitureUsable() != 0) {
                if (p21::_ZN10FtrContact7getSideEv(o) == 2 || p21::_ZN10FtrContact7getSideEv(o) == 0) {
                    Unk_ov004_02210d48 q;
                    Unk_ov004_022108f0_V a, b, c, e, f;
                    getSideTiles(&q);
                    Unk_ov004_02210d58_P *p0 = q.get(0);
                    p21::FieldPos_FromUnitCenter(&a, p0->x, p0->y);
                    Unk_ov004_02210d58_P *p1 = q.get(1);
                    p21::FieldPos_FromUnitCenter(&b, p1->x, p1->y);
                    s32 *pv = &pl->x;
                    c.x = pl->x;
                    c.y = pv[1];
                    c.z = pv[2];
                    s32 d0 = p21::func_020e9650(&c, &a);
                    s32 d1 = p21::func_020e9650(&c, &b);
                    Unk_ov004_02210d58_P sel;
                    if (d0 < d1) {
                        Unk_ov004_02210d58_P *t = q.get(0);
                        sel.x = t->x;
                        sel.y = t->y;
                    } else {
                        Unk_ov004_02210d58_P *t = q.get(1);
                        sel.x = t->x;
                        sel.y = t->y;
                    }
                    if (FtrBed_IsTileFree(&sel)) {
                        e.x = 0;
                        e.y = 0;
                        e.z = 0x2000;
                        p21::func_020e93a0(&e, p21::_ZN10FtrContact12getPushAngleEv(o));
                        s32 z = e.z + p21::_ZN10FtrContact15getContactPointEv(o)->unk_08;
                        f.x = e.x + p21::_ZN10FtrContact15getContactPointEv(o)->unk_00;
                        f.y = 0;
                        f.z = z;
                        if (p21::FtrActor_IsPosClearOfCharacters(&f, 0x800, 0x2000, 0x800, 0)) {
                            if (unk_840 < 7) {
                                r7 = TRUE;
                                unk_840++;
                            }
                            if (p21::_ZN10FtrContact15getStepDistanceEv(o) > 0x200) {
                                if (unk_840 >= 7) {
                                    v = p21::_ZN10FtrContact12getPushAngleEv(o);
                                    Unk_ov004_0221076c_R *ra = p21::_ZN10FtrContact15getContactPointEv(o);
                                    Unk_ov004_0221076c_R *rb = p21::_ZN10FtrContact15getContactPointEv(o);
                                    p21::PlayerActor_LocalRequestBedApproach(ra, &rb->unk_08, &v, (s16)(unk_8e - 0x4000), 0);
                                    unk_840 = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (r7 == 0) {
        unk_840 = 0;
    }
}

s32 FtrBed::checkStepTile(Unk_ov004_022108f0_V *a, s32 b, Unk_ov004_022108f0_V *c) {
    Unk_ov004_022108f0_V out;
    s32 x, y;
    calcStepPos(&out, a, b, c);
    p21::FieldPos_ToUnit(&x, &y, &out);
    FtrActor *obj = p21::_ZN12FtrActorGrid8getActorEiii(p21::FtrActorGrid_GetInstance(), x, y, 0);
    if (p21::FtrActor_IsPosClearOfCharacters(&out, 0x800, 0x2000, 0x800, 0) == 0) {
        return 0;
    }
    if (obj != 0) {
        if (obj == this) {
            return 1;
        }
        if (p21::FtrInfo_TestIndoorFlag2(p21::FtrActor_GetFtrIndex(obj)) != 0) {
            return 2;
        }
        if (unk_8e == obj->unk_8e) {
            if (Unk_ov004_02210dd8_Chk::R(*(u16 *)((u8 *)obj + 0xc))) {
                Unk_ov004_02210d28 q1, q2;
                u32 n1 = getLieTiles(&q1);
                u32 n2 = ((FtrBed *)obj)->getLieTiles(&q2);
                u32 i, j;
                for (i = 0; i < n1; i++) {
                    Unk_ov004_02210d58_P *p = q1.get(i);
                    s32 px = p->x;
                    s32 py = p->y;
                    for (j = 0; j < n2; j++) {
                        Unk_ov004_02210d58_P *q = q2.get(j);
                        s32 qy = q->y;
                        s32 qx = q->x;
                        qx = px - qx;
                        if (qx < 0) qx = -qx;
                        qy = py - qy;
                        if (qy < 0) qy = -qy;
                        if (qx + qy == 1) {
                            return 1;
                        }
                    }
                }
            }
        }
    } else {
        if (p21::FtrMgr_GetSurfaceHeightAtPos(&out) == 0) {
            if (p21::Ground_GetExitAtPos(&out) == -1) {
                return 2;
            }
        }
    }
    return 0;
}

extern "C" BOOL FtrBed_IsTileFree(Unk_ov004_02210d58_P *p) {
    if (p21::FtrMgr_GetSurfaceHeight(p->x, p->y) == 0) {
        if (p21::Ground_GetExitAt(p->x, p->y) == -1) {
            return TRUE;
        }
    }
    return FALSE;
}

typedef void (FtrBed::*Unk_ov004_02210ad4_Fn)();
typedef BOOL (FtrBed::*Unk_ov004_02210bec_Fn)();

void FtrBed::execFtrAct() {
    static Unk_ov004_02210ad4_Fn tbl[14] = {
        &FtrBed::execFtrAct00,
        &FtrBed::execFtrAct01,
        &FtrBed::execFtrAct02,
        &FtrBed::execFtrAct03,
        &FtrBed::execFtrAct04,
        &FtrBed::execFtrAct05,
        &FtrBed::execFtrAct06,
        &FtrBed::execFtrAct07,
        &FtrBed::execFtrAct08,
        &FtrBed::execFtrAct09,
        &FtrBed::execFtrAct0A,
        &FtrBed::execFtrAct0B,
        &FtrBed::execFtrAct0C,
        &FtrBed::execFtrAct0D,
    };
    if (unk_85a < 14) {
        (this->*tbl[unk_85a])();
    }
}

BOOL FtrBed::changeAct(u32 a, u8 v) {
    FtrActor::changeAct(a, v);
    static Unk_ov004_02210bec_Fn tbl[14] = {
        &FtrBed::enterFtrAct00,
        &FtrBed::enterFtrAct01,
        &FtrBed::enterFtrAct02,
        &FtrBed::enterFtrAct03,
        &FtrBed::enterFtrAct04,
        &FtrBed::enterFtrAct05,
        &FtrBed::enterFtrAct06,
        &FtrBed::enterFtrAct07,
        &FtrBed::enterFtrAct08,
        &FtrBed::enterFtrAct09,
        &FtrBed::enterFtrAct0A,
        &FtrBed::enterFtrAct0B,
        &FtrBed::enterFtrAct0C,
        &FtrBed::enterFtrAct0D,
    };
    if ((u32)a < 14) {
        if ((this->*tbl[a])()) {
            unk_85a = a;
            return TRUE;
        }
    }
    return FALSE;
}

void FtrBed::calcStepPos(Unk_ov004_022108f0_V *out, Unk_ov004_022108f0_V *in, s32 ang, Unk_ov004_022108f0_V *opt) {
    out->x = in->x;
    out->y = in->y;
    out->z = in->z;
    Unk_ov004_02210d7c_V t;
    t.x = 0;
    t.y = 0;
    t.z = 0;
    if (opt) {
        t.x = opt->x;
        t.y = opt->y;
        t.z = opt->z;
    }
    Unk_ov004_02210d7c_V w;
    w.x = t.x;
    w.y = t.y;
    w.z = t.z + 0x1000;
    p21::func_020e93a0(&w, ang);
    p21::VEC_Add(out, &w, out);
}

Unk_ov004_02210d58_P *FtrTilePair::get(u32 i) {
    return &v[i & 1];
}

FtrTilePair::FtrTilePair() {
}

FtrTilePair::~FtrTilePair() {
}

Unk_ov004_02210d28::Unk_ov004_02210d28() {
}

Unk_ov004_02210d28::~Unk_ov004_02210d28() {
}

Unk_ov004_02210d48::Unk_ov004_02210d48() {
}

Unk_ov004_02210d48::~Unk_ov004_02210d48() {
}

// ---- part 22: from unk_02210f0c.cpp

struct Unk_ov004_02210f0c_V3 {
    s32 x, y, z;
};

// list of up to 4 tile positions (ctor/dtor/methods are defined elsewhere)

struct Unk_ov004_02210f0c_Row {
    Unk_ov004_02210f0c_V3 *unk_00;
    u32 unk_04;
};

namespace p22 {
extern "C" {
extern Unk_ov004_02210f0c_Row sFtrBedLieOffsets[];
extern Unk_ov004_02210f0c_V3 *data_ov004_02249028[];
extern u8 data_ov004_02240050[];
extern void *gCommManager;

void FtrActor_LocalToWorld(FtrActor *self, void *out, void *src);
void _ZN11FtrVisNodes10setVisibleEj(void *p, s32 v);
void _ZN13FtrGlowMatSet6updateEv(void *p);
void _ZN13FtrGlowMatSet4initEjj(void *p, u32 a, s32 b);
void _ZN9FtrSwitch3setEji(void *p, s32 a, s32 b);
BOOL _ZN9FtrSwitch10isChangingEv(void *p);
BOOL _ZN9FtrSwitch4isOnEv(void *p);
BOOL PlayerActor_GetPosIfInBed(void *out, u32 i);
BOOL PlayerActor_GetPosIfSitting(void *out, u32 i);
void PlayerActor_LocalRequestSeatApproach(void *a, void *b, void *c, void *d);
void _ZN18Unk_ov004_022077a48getTilesEP23Unk_ov004_02207854_ListPvi(FtrActor *o, FtrTileList *l, s32 a, s32 b);
BOOL FtrActor_StepAnims(FtrActor *o);
BOOL _ZN8FtrActor10playSound0Ev(FtrActor *o);
BOOL _ZN8FtrActor10playSound2Ev(FtrActor *o);
BOOL _ZN8FtrActor10playSound1Ev(FtrActor *o);
BOOL _ZN8FtrActor14hasIndoorFlag6Ev(FtrActor *o);
BOOL _ZN8FtrActor9isPreviewEv(FtrActor *o);
void _ZN8FtrActor9initAnimsEiiii(FtrActor *o, s32 a, s32 b, s32 c, s32 d);
void FtrActor_PlayAnimsFromLastFrame(FtrActor *o, s32 a, s32 b, s32 c);
void _ZN8FtrActor8playAnimEiiij(FtrActor *o, s32 a, s32 b, s32 c, s32 d);
BOOL FtrActor_IsPosClearOfCharacters(void *v, s32 a, s32 b, s32 c, s32 d);
void FieldPos_ToUnit(s32 *a, s32 *b, void *v);
void FtrSync_RequestAct(void *o, s32 a, s32 b, s32 c);
BOOL _ZN11CommManager8isOnlineEv(void *p);
BOOL Scene_InUnk6To8(void);
void *_ZN10FtrContact22getClampedContactPointEv(void *o);
u32 _ZN10FtrContact8getDepthEv(void *o);
u32 _ZN10FtrContact12getPushAngleEv(void *o);
void func_020e93a0(void *v, u32 a);
void VEC_Add(void *a, void *b, void *c);
void *FtrContactSet_GetInstance(void);
void *_ZN13FtrContactSet11findContactEPv(void *mgr, void *o);
BOOL FtrMgr_IsFurnitureUsable(void *o);
s32 _ZN10FtrContact7getSideEv(void *o);
s32 _ZN10FtrContact15getStepDistanceEv(void *o);
BOOL FtrMgr_IsShopScene(void);
}
}

// ---------------------------------------------------------------- class FtrSeat
class FtrSeat : public FtrActor {
public:
    FtrSeat();
    virtual ~FtrSeat();
    virtual BOOL vfunc_0c();
    virtual BOOL initModel();
    virtual BOOL updateActive();

    void getSitterPos(Unk_ov004_02210f0c_V3 *out, void *o);

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u16 pad_842;
};

// ---------------------------------------------------------------- class FtrBed

// ---------------------------------------------------------------- class FtrKind07
class FtrKind07 : public FtrActor {
public:
    FtrKind07();
    virtual ~FtrKind07();
    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 a, u8 b);
    virtual u8 getActSwitchState(u32 a);
    virtual BOOL initModel();
    virtual BOOL updateActive();

    void execFtrAct03();
    BOOL enterFtrAct03();
    void execFtrAct02();
    BOOL enterFtrAct02();
    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 unk_841;
    /* 0x842 */ u8 pad_842[2];
};

typedef void (FtrKind07::*Unk_ov004_022116ac_Fn)();
typedef BOOL (FtrKind07::*Unk_ov004_02211738_Fn)();

// ================================================================ FtrBed ==========
u32 FtrBed::getLieTiles(void *o) {
    Unk_ov004_02210f0c_V3 *p = p22::sFtrBedLieOffsets[b22_unk_780].unk_00;
    if (p) {
        u32 i;
        for (i = 0; i < p22::sFtrBedLieOffsets[b22_unk_780].unk_04; i++) {
            Unk_ov004_02210f0c_V3 v;
            p22::FtrActor_LocalToWorld(this, &v, &p[i]);
            s32 *q = (s32 *)((FtrTilePair *)o)->get(i);
            p22::FieldPos_ToUnit(q, q + 1, &v);
        }
        return *(u32 *)((u8 *)p22::sFtrBedLieOffsets + 4 + (b22_unk_780 << 3));
    }
    return 0;
}

u32 FtrBed::getSideTiles(void *o) {
    Unk_ov004_02210f0c_V3 *p = p22::data_ov004_02249028[b22_unk_780];
    if (p) {
        u32 i;
        for (i = 0; i < 2; i++) {
            Unk_ov004_02210f0c_V3 v;
            p22::FtrActor_LocalToWorld(this, &v, &p[i]);
            s32 *q = (s32 *)((FtrTilePair *)o)->get(i);
            p22::FieldPos_ToUnit(q, q + 1, &v);
        }
        return 2;
    }
    return 0;
}

BOOL FtrBed::vfunc_0c() {
    return TRUE;
}

BOOL FtrBed::onDraw() {
    return TRUE;
}

BOOL FtrBed::updateActive() {
    if (b22_unk_77c == 0x2a) {
        p22::_ZN11FtrVisNodes10setVisibleEj(b22_f_760, 0);
        s32 z = 0;
        u32 i;
        u32 j;
        for (i = 0; i < 4; i++) {
            Unk_ov004_02210f0c_V3 v;
            s32 x, y;
            if (p22::PlayerActor_GetPosIfInBed(&v, i)) {
                p22::FieldPos_ToUnit(&x, &y, &v);
                FtrTileList list;
                p22::_ZN18Unk_ov004_022077a48getTilesEP23Unk_ov004_02207854_ListPvi(this, &list, z, z);
                for (j = 0; j < list.getCount(); j++) {
                    if (x == list.get(j)->x && y == list.get(j)->y) {
                        p22::_ZN11FtrVisNodes10setVisibleEj(b22_f_760, 1);
                        p22::_ZN13FtrGlowMatSet6updateEv(&unk_85c);
                        p22::FtrActor_StepAnims(this);
                        p22::_ZN8FtrActor10playSound0Ev(this);
                        break;
                    }
                }
                list.release();
            }
        }
    }
    execFtrAct();
    return TRUE;
}

BOOL FtrBed::initModel() {
    p22::_ZN11FtrVisNodes10setVisibleEj(b22_f_760, 0);
    if (b22_unk_77c == 0x2a) {
        p22::_ZN8FtrActor9initAnimsEiiii(this, 0, 0, 0x1000, 0);
        p22::_ZN13FtrGlowMatSet4initEjj(&unk_85c, b22_unk_590, 1);
    }
    if (p22::Scene_InUnk6To8()) {
        changeAct(1, 0xff);
    }
    return TRUE;
}

BOOL FtrBed::vfunc_48(void *a) {
    if (!p22::_ZN11CommManager8isOnlineEv(p22::gCommManager) && isInUse() && unk_854 != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL FtrBed::isInUse() {
    if (unk_85a >= 1) {
        return TRUE;
    }
    return FALSE;
}

FtrBed::~FtrBed() {
}

FtrBed::FtrBed() : unk_858(0xfff1) {
}

extern "C" void FtrBed_Create() {
    new FtrBed;
}

// ================================================================ FtrSeat ==========
void FtrSeat::getSitterPos(Unk_ov004_02210f0c_V3 *out, void *o) {
    if (b22_unk_780 == 0) {
        out->x = unk_5c[0];
        out->y = unk_5c[1];
        out->z = unk_5c[2];
    } else {
        s32 *p = (s32 *)p22::_ZN10FtrContact22getClampedContactPointEv(o);
        out->x = p[0];
        out->y = p[1];
        out->z = p[2];
        Unk_ov004_02210f0c_V3 v;
        s32 t = p22::_ZN10FtrContact8getDepthEv(o) + 0x1000;
        v.x = 0;
        v.y = 0;
        v.z = t;
        p22::func_020e93a0(&v, p22::_ZN10FtrContact12getPushAngleEv(o));
        p22::VEC_Add(out, &v, out);
    }
}

BOOL FtrSeat::vfunc_0c() {
    return TRUE;
}

BOOL FtrSeat::updateActive() {
    s32 x, y;
    if (b22_unk_77c == 0x2c) {
        p22::_ZN11FtrVisNodes10setVisibleEj(b22_f_760, 0);
        s32 z = 0;
        u32 i;
        u32 j;
        for (i = 0; i < 4; i++) {
            Unk_ov004_02210f0c_V3 v;
            if (p22::PlayerActor_GetPosIfSitting(&v, i)) {
                p22::FieldPos_ToUnit(&x, &y, &v);
                FtrTileList list;
                p22::_ZN18Unk_ov004_022077a48getTilesEP23Unk_ov004_02207854_ListPvi(this, &list, z, z);
                for (j = 0; j < list.getCount(); j++) {
                    if (x == list.get(j)->x && y == list.get(j)->y) {
                        p22::_ZN11FtrVisNodes10setVisibleEj(b22_f_760, 1);
                        p22::FtrActor_StepAnims(this);
                        p22::_ZN8FtrActor10playSound0Ev(this);
                        break;
                    }
                }
                list.release();
            }
        }
    } else if (b22_unk_77c == 9) {
        p22::FtrActor_StepAnims(this);
        p22::_ZN8FtrActor10playSound0Ev(this);
    }
    BOOL hit = FALSE;
    void *r6 = p22::_ZN13FtrContactSet11findContactEPv(p22::FtrContactSet_GetInstance(), this);
    if (r6 && p22::FtrMgr_IsFurnitureUsable(r6)) {
        BOOL ok = FALSE;
        u8 mode = 0;
        if (b22_unk_77c != 0x26) {
            if (p22::_ZN10FtrContact7getSideEv(r6) == 0) {
                ok = TRUE;
                mode = 0;
            }
        } else {
            s32 t = p22::_ZN10FtrContact7getSideEv(r6);
            if (t == 0) {
                ok = TRUE;
                mode = 0;
            } else if (p22::_ZN10FtrContact7getSideEv(r6) == 3) {
                ok = TRUE;
                mode = 1;
            } else if (p22::_ZN10FtrContact7getSideEv(r6) == 1) {
                ok = TRUE;
                mode = 2;
            }
        }
        if (ok) {
            Unk_ov004_02210f0c_V3 pos;
            getSitterPos(&pos, r6);
            if (p22::FtrActor_IsPosClearOfCharacters(&pos, 0x800, 0x2000, 0x800, 0)) {
                if (unk_840 < 7) {
                    hit = TRUE;
                    unk_840++;
                }
                if (p22::_ZN10FtrContact15getStepDistanceEv(r6) > 0x200) {
                    if (unk_840 >= 7) {
                        p22::PlayerActor_LocalRequestSeatApproach(&pos, &pos.z, (u8 *)this + 0x8e, &mode);
                        unk_840 = 0;
                    }
                }
            }
        }
    }
    if (!hit) {
        unk_840 = 0;
    }
    return TRUE;
}

BOOL FtrSeat::initModel() {
    p22::_ZN11FtrVisNodes10setVisibleEj(b22_f_760, 0);
    if (b22_unk_77c == 9 || b22_unk_77c == 0x2c) {
        p22::_ZN8FtrActor9initAnimsEiiii(this, 0, 0, 0x1000, 0);
    }
    return TRUE;
}

FtrSeat::~FtrSeat() {
}

FtrSeat::FtrSeat() {
}

extern "C" void FtrSeat_Create() {
    new FtrSeat;
}

// ================================================================ FtrKind07 ==========
void FtrKind07::execFtrAct03() {
    p22::_ZN9FtrSwitch3setEji(b22_f_73c, 0, 0);
    if (p22::FtrActor_StepAnims(this)) {
        changeAct(0, 0xff);
    }
}

BOOL FtrKind07::enterFtrAct03() {
    p22::_ZN9FtrSwitch3setEji(b22_f_73c, 0, 0);
    p22::_ZN8FtrActor10playSound2Ev(this);
    p22::FtrActor_PlayAnimsFromLastFrame(this, 0, 3, 0x1000);
    return TRUE;
}

void FtrKind07::execFtrAct02() {
    p22::FtrActor_StepAnims(this);
    p22::_ZN8FtrActor14hasIndoorFlag6Ev(this);
    p22::_ZN8FtrActor10playSound0Ev(this);
    if (p22::_ZN9FtrSwitch10isChangingEv(b22_f_73c)) {
        p22::FtrSync_RequestAct(this, 3, 0xff, 1);
    } else if (p22::_ZN8FtrActor9isPreviewEv(this)) {
        changeAct(3, 0xff);
    }
}

BOOL FtrKind07::enterFtrAct02() {
    p22::_ZN9FtrSwitch3setEji(b22_f_73c, 1, 0);
    p22::FtrActor_PlayAnimsFromLastFrame(this, 1, 0, 0x1000);
    return TRUE;
}

void FtrKind07::execFtrAct01() {
    p22::_ZN9FtrSwitch3setEji(b22_f_73c, 1, 0);
    if (p22::FtrActor_StepAnims(this)) {
        changeAct(2, 0xff);
    }
}

BOOL FtrKind07::enterFtrAct01() {
    p22::_ZN9FtrSwitch3setEji(b22_f_73c, 1, 0);
    p22::_ZN8FtrActor10playSound1Ev(this);
    p22::_ZN8FtrActor8playAnimEiiij(this, 0, 1, 0x1000, 0);
    return TRUE;
}

void FtrKind07::execFtrAct00() {
    if (p22::_ZN9FtrSwitch10isChangingEv(b22_f_73c)) {
        p22::FtrSync_RequestAct(this, 1, 0xff, 1);
    } else if (p22::_ZN8FtrActor9isPreviewEv(this)) {
        changeAct(1, 0xff);
    }
}

BOOL FtrKind07::enterFtrAct00() {
    p22::_ZN9FtrSwitch3setEji(b22_f_73c, 0, 0);
    p22::_ZN8FtrActor8playAnimEiiij(this, 0, 3, 0x1000, 0);
    return TRUE;
}

void FtrKind07::execFtrAct() {
    static Unk_ov004_022116ac_Fn tbl[4] = {
        &FtrKind07::execFtrAct00,
        &FtrKind07::execFtrAct01,
        &FtrKind07::execFtrAct02,
        &FtrKind07::execFtrAct03,
    };
    u32 i = unk_841;
    if (i < 4) {
        (this->*tbl[i])();
    }
}

BOOL FtrKind07::changeAct(u32 a, u8 b) {
    FtrActor::changeAct(a, b);
    static Unk_ov004_02211738_Fn tbl[4] = {
        &FtrKind07::enterFtrAct00,
        &FtrKind07::enterFtrAct01,
        &FtrKind07::enterFtrAct02,
        &FtrKind07::enterFtrAct03,
    };
    if ((u32)a < 4) {
        if ((this->*tbl[a])()) {
            unk_841 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrKind07::getActSwitchState(u32 a) {
    if (a < 4) {
        return p22::data_ov004_02240050[a];
    }
    return 0;
}

BOOL FtrKind07::vfunc_0c() {
    return TRUE;
}

BOOL FtrKind07::updateActive() {
    execFtrAct();
    return TRUE;
}

BOOL FtrKind07::initModel() {
    unk_840 = 0;
    p22::_ZN8FtrActor9initAnimsEiiii(this, 0, 1, 0x1000, 0);
    if (p22::_ZN9FtrSwitch4isOnEv(b22_f_73c) && !p22::FtrMgr_IsShopScene()) {
        changeAct(2, 0xff);
    } else {
        changeAct(0, 0xff);
    }
    return TRUE;
}

// ---- part 23: from unk_0221185c.cpp
namespace p23 {
extern "C" {
BOOL FtrActor_StepAnims(void *self);
void FtrActor_PlayAnimsFromLastFrame(void *self, s32 a, s32 b, s32 c);
}
}

class FtrKind06 : public FtrActor {
public:
    FtrKind06();
    virtual ~FtrKind06();
    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 a, u8 b);
    virtual u8 getActSwitchState(u32 a);
    virtual BOOL initModel();
    virtual BOOL updateActive();

    void execFtrAct03();
    BOOL enterFtrAct03();
    void execFtrAct02();
    BOOL enterFtrAct02();
    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();
    /* 0x840 */ u8 pad_840;
    /* 0x841 */ u8 unk_841;
    /* 0x842 */ u8 pad_842[2];
};

class FtrKind05 : public FtrActor {
public:
    FtrKind05();
    virtual ~FtrKind05();
    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 a, u8 b);
    virtual u8 getActSwitchState(u32 a);
    virtual BOOL initModel();
    virtual BOOL updateActive();

    void execFtrAct03();
    BOOL enterFtrAct03();
    void execFtrAct02();
    BOOL enterFtrAct02();
    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();
    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
};

class FtrKind04 : public FtrActor {
public:
    FtrKind04();
    virtual ~FtrKind04();
    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 idx, u8 v);
    virtual u8 getActSwitchState(u32 idx);
    virtual BOOL initModel();
    virtual BOOL updateActive();

    void execFtrAct02();
    BOOL enterFtrAct02();
    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
    /* 0x844 */ u32 unk_844;
    /* 0x848 */ FtrGlowMatSet unk_848;
};

namespace p23 {
extern "C" {
BOOL _ZN9FtrSwitch3setEji(void *, s32, s32);
BOOL _ZN9FtrSwitch10isChangingEv(void *);
BOOL _ZN9FtrSwitch4isOnEv(void *);
void _ZN11FtrVisNodes10setVisibleEj(void *, s32);
void _ZN13FtrGlowMatSet6setLitEjjj(void *, s32, s32, s32);
BOOL FtrMgr_IsShopScene(void);
void _ZN8FtrActorC2Ev(void *);
void _ZN8FtrActorD2Ev(void *);
void _ZN8FtrActordlEPv(void *);
void *_ZN8FtrActornwEm(u32);
void FtrSync_RequestAct(void *, s32, s32, s32);
void func_020e761c(void *, u32, u32);
extern u8 data_ov004_02240060[];
extern u8 data_ov004_02240054[];
}
}

typedef void (FtrKind06::*Unk_ov004_02211af4_Fn)();
typedef BOOL (FtrKind06::*Unk_ov004_02211b80_Fn)();
typedef void (FtrKind05::*Unk_ov004_02211ed8_Fn)();
typedef BOOL (FtrKind05::*Unk_ov004_02211f64_Fn)();

// ---- class LampLights (0x02249a74) ----
FtrKind07::~FtrKind07() {
}

FtrKind07::FtrKind07() {
}

extern "C" void FtrKind07_Create() {
    new FtrKind07;
}

// ---- class LightLevel (0x0224a2a8) ----
void FtrKind06::execFtrAct03() {
    p23::_ZN11FtrVisNodes10setVisibleEj(b23_f_760, 1);
    playSound0();
    p23::_ZN9FtrSwitch3setEji(b23_f_73c, 0, 0);
    if (p23::FtrActor_StepAnims(this)) {
        changeAct(0, 0xff);
    }
}

BOOL FtrKind06::enterFtrAct03() {
    p23::_ZN9FtrSwitch3setEji(b23_f_73c, 0, 0);
    p23::_ZN11FtrVisNodes10setVisibleEj(b23_f_760, 1);
    playAnim(1, 1, 0x1000, 0);
    playSound2();
    return TRUE;
}

void FtrKind06::execFtrAct02() {
    playSound0();
    if (p23::_ZN9FtrSwitch10isChangingEv(b23_f_73c)) {
        p23::FtrSync_RequestAct(this, 3, 0xff, 1);
    } else if (isPreview()) {
        changeAct(3, 0xff);
    }
}

BOOL FtrKind06::enterFtrAct02() {
    p23::_ZN9FtrSwitch3setEji(b23_f_73c, 1, 0);
    p23::FtrActor_PlayAnimsFromLastFrame(this, 0, 1, 0x1000);
    p23::_ZN11FtrVisNodes10setVisibleEj(b23_f_760, 1);
    return TRUE;
}

void FtrKind06::execFtrAct01() {
    p23::_ZN9FtrSwitch3setEji(b23_f_73c, 1, 0);
    playSound0();
    if (p23::FtrActor_StepAnims(this)) {
        changeAct(2, 0xff);
    }
}

BOOL FtrKind06::enterFtrAct01() {
    p23::_ZN9FtrSwitch3setEji(b23_f_73c, 1, 0);
    p23::_ZN11FtrVisNodes10setVisibleEj(b23_f_760, 1);
    playAnim(0, 1, 0x1000, 0);
    playSound1();
    return TRUE;
}

void FtrKind06::execFtrAct00() {
    if (p23::_ZN9FtrSwitch10isChangingEv(b23_f_73c)) {
        p23::FtrSync_RequestAct(this, 1, 0xff, 1);
    } else if (isPreview()) {
        changeAct(1, 0xff);
    }
}

BOOL FtrKind06::enterFtrAct00() {
    p23::_ZN9FtrSwitch3setEji(b23_f_73c, 0, 0);
    p23::FtrActor_PlayAnimsFromLastFrame(this, 1, 1, 0x1000);
    p23::_ZN11FtrVisNodes10setVisibleEj(b23_f_760, 0);
    return TRUE;
}

void FtrKind06::execFtrAct() {
    static Unk_ov004_02211af4_Fn tbl[4] = {
        &FtrKind06::execFtrAct00,
        &FtrKind06::execFtrAct01,
        &FtrKind06::execFtrAct02,
        &FtrKind06::execFtrAct03,
    };
    if (unk_841 < 4) {
        (this->*tbl[unk_841])();
    }
}

BOOL FtrKind06::changeAct(u32 a, u8 b) {
    FtrActor::changeAct(a, b);
    static Unk_ov004_02211b80_Fn tbl[4] = {
        &FtrKind06::enterFtrAct00,
        &FtrKind06::enterFtrAct01,
        &FtrKind06::enterFtrAct02,
        &FtrKind06::enterFtrAct03,
    };
    if ((u32)a < 4) {
        if ((this->*tbl[a])()) {
            unk_841 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrKind06::getActSwitchState(u32 a) {
    if (a < 4) {
        return p23::data_ov004_02240060[a];
    }
    return 0;
}

BOOL FtrKind06::vfunc_0c() {
    return TRUE;
}

BOOL FtrKind06::updateActive() {
    execFtrAct();
    return TRUE;
}

BOOL FtrKind06::initModel() {
    initAnims(0, 1, 0x1000, 0);
    if (!p23::_ZN9FtrSwitch4isOnEv(b23_f_73c) || p23::FtrMgr_IsShopScene()) {
        changeAct(0, 0xff);
    } else {
        changeAct(2, 0xff);
    }
    return TRUE;
}

FtrKind06::~FtrKind06() {
}

FtrKind06::FtrKind06() {
}

extern "C" void FtrKind06_Create() {
    new FtrKind06;
}

// ---- class C (0x0224ac08) ----
void FtrKind05::execFtrAct03() {
    p23::_ZN9FtrSwitch3setEji(b23_f_73c, 0, 0);
    if (p23::FtrActor_StepAnims(this)) {
        changeAct(0, 0xff);
    }
}

BOOL FtrKind05::enterFtrAct03() {
    p23::_ZN9FtrSwitch3setEji(b23_f_73c, 0, 0);
    p23::FtrActor_PlayAnimsFromLastFrame(this, 0, 3, 0x1000);
    playSound2();
    return TRUE;
}

void FtrKind05::execFtrAct02() {
    if (p23::_ZN9FtrSwitch10isChangingEv(b23_f_73c)) {
        p23::FtrSync_RequestAct(this, 3, 0xff, 1);
    } else if (isPreview()) {
        changeAct(3, 0xff);
    }
}

BOOL FtrKind05::enterFtrAct02() {
    p23::_ZN9FtrSwitch3setEji(b23_f_73c, 1, 0);
    p23::FtrActor_PlayAnimsFromLastFrame(this, 0, 1, 0x1000);
    return TRUE;
}

void FtrKind05::execFtrAct01() {
    p23::_ZN9FtrSwitch3setEji(b23_f_73c, 1, 0);
    if (p23::FtrActor_StepAnims(this)) {
        changeAct(2, 0xff);
    }
}

BOOL FtrKind05::enterFtrAct01() {
    p23::_ZN9FtrSwitch3setEji(b23_f_73c, 1, 0);
    playAnim(0, 1, 0x1000, 0);
    playSound1();
    return TRUE;
}

void FtrKind05::execFtrAct00() {
    if (p23::_ZN9FtrSwitch10isChangingEv(b23_f_73c)) {
        p23::FtrSync_RequestAct(this, 1, 0xff, 1);
    } else if (isPreview()) {
        changeAct(1, 0xff);
    }
}

BOOL FtrKind05::enterFtrAct00() {
    p23::_ZN9FtrSwitch3setEji(b23_f_73c, 0, 0);
    playAnim(0, 3, 0x1000, 0);
    return TRUE;
}

void FtrKind05::execFtrAct() {
    static Unk_ov004_02211ed8_Fn tbl[4] = {
        &FtrKind05::execFtrAct00,
        &FtrKind05::execFtrAct01,
        &FtrKind05::execFtrAct02,
        &FtrKind05::execFtrAct03,
    };
    if (unk_840 < 4) {
        (this->*tbl[unk_840])();
    }
}

BOOL FtrKind05::changeAct(u32 a, u8 b) {
    FtrActor::changeAct(a, b);
    static Unk_ov004_02211f64_Fn tbl[4] = {
        &FtrKind05::enterFtrAct00,
        &FtrKind05::enterFtrAct01,
        &FtrKind05::enterFtrAct02,
        &FtrKind05::enterFtrAct03,
    };
    if ((u32)a < 4) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrKind05::getActSwitchState(u32 a) {
    if (a < 4) {
        return p23::data_ov004_02240054[a];
    }
    return 0;
}

BOOL FtrKind05::vfunc_0c() {
    return TRUE;
}

BOOL FtrKind05::updateActive() {
    execFtrAct();
    return TRUE;
}

BOOL FtrKind05::initModel() {
    initAnims(0, 1, 0x1000, 0);
    if (p23::_ZN9FtrSwitch4isOnEv(b23_f_73c) && !p23::FtrMgr_IsShopScene()) {
        changeAct(2, 0xff);
    } else {
        changeAct(0, 0xff);
    }
    return TRUE;
}

FtrKind05::~FtrKind05() {
}

FtrKind05::FtrKind05() {
}

extern "C" void FtrKind05_Create() {
    new FtrKind05;
}

// ---- class WindowLight (0x0224af8c) ----
void FtrKind04::execFtrAct02() {
    p23::func_020e761c(&unk_844, 0, 0xcc);
    if (unk_844 == 0) {
        changeAct(0, 0xff);
    }
}

BOOL FtrKind04::enterFtrAct02() {
    p23::_ZN9FtrSwitch3setEji(b23_f_73c, 0, 0);
    playSound2();
    p23::_ZN13FtrGlowMatSet6setLitEjjj(&unk_848, 1, 1, 0);
    return TRUE;
}

// ---- part 24: from unk_02212174.cpp
namespace p24 {
extern "C" {
u32 FtrActor_GetFtrIndex(void *self);
BOOL FtrActor_StepAnims(void *self);
void FtrActor_PlayAnimsFromLastFrame(void *self, u32 a, s32 b, s32 c);
}
}

// Secondary base at +0xec of the ov004 actors (ctor func_0206606c).

// Container of three animation slots (ctor func_ov004_02205ad4, dtor func_ov004_02205ab8).

namespace p24 {
extern "C" {
extern u8 data_ov004_02240044[];
extern u8 data_ov004_02240030[];
BOOL FtrMgr_IsShopScene();
void FtrSync_RequestAct(void *, s32, s32, s32);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *, u32);
}
}

// ---------------------------------------------------------------- FtrKind02 (2-state, vtable 0x0224b7c8)
class FtrKind02 : public FtrActor {
public:
    FtrKind02();
    virtual ~FtrKind02();
    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 idx, u8 v);
    virtual BOOL initModel();
    virtual BOOL updateActive();

    BOOL execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();

    /* 0x840 */ u8 unk_840;
};

// ---------------------------------------------------------------- FtrKind03 (2-state, container at 0x844)
class FtrKind03 : public FtrActor {
public:
    FtrKind03();
    virtual ~FtrKind03();
    virtual BOOL vfunc_0c();
    virtual BOOL changeAct(u32 idx, u8 v);
    virtual u8 getActSwitchState(u32 idx);
    virtual BOOL initModel();
    virtual BOOL updateActive();

    void execFtrAct01();
    BOOL enterFtrAct01();
    void execFtrAct00();
    BOOL enterFtrAct00();
    void execFtrAct();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
    /* 0x844 */ FtrGlowMatSet unk_844;
};

// ---------------------------------------------------------------- FtrKind04 (3-state, value at 0x844, container at 0x848)

// ================================================================ FtrKind04
void FtrKind04::execFtrAct01() {
    hasIndoorFlag6();
    playSound0();
    if (((FtrSwitch *)b24_unk_73c)->isChanging()) {
        p24::FtrSync_RequestAct(this, 2, 0xff, 1);
    }
}

BOOL FtrKind04::enterFtrAct01() {
    unk_844 = 0x1000;
    ((FtrSwitch *)b24_unk_73c)->set(1, 0);
    playSound1();
    unk_848.setLit(1, 1, 0);
    return TRUE;
}

void FtrKind04::execFtrAct00() {
    if (((FtrSwitch *)b24_unk_73c)->isChanging()) {
        p24::FtrSync_RequestAct(this, 1, 0xff, 1);
    }
}

BOOL FtrKind04::enterFtrAct00() {
    unk_844 = 0;
    ((FtrSwitch *)b24_unk_73c)->set(0, 0);
    unk_848.setLit(0, 1, 0);
    return TRUE;
}

void FtrKind04::execFtrAct() {
    static void (FtrKind04::*tbl[3])() = {
        &FtrKind04::execFtrAct00,
        &FtrKind04::execFtrAct01,
        &FtrKind04::execFtrAct02,
    };
    u32 i = unk_840;
    if (i < 3) {
        (this->*tbl[i])();
    }
}

BOOL FtrKind04::changeAct(u32 idx, u8 v) {
    FtrActor::changeAct(idx, v);
    static BOOL (FtrKind04::*tbl[3])() = {
        &FtrKind04::enterFtrAct00,
        &FtrKind04::enterFtrAct01,
        &FtrKind04::enterFtrAct02,
    };
    if (idx < 3) {
        if ((this->*tbl[idx])()) {
            unk_840 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrKind04::getActSwitchState(u32 idx) {
    if (idx < 3) {
        return p24::data_ov004_02240044[idx];
    }
    return 0;
}

BOOL FtrKind04::vfunc_0c() {
    return TRUE;
}

BOOL FtrKind04::updateActive() {
    u32 i;
    unk_848.update();
    execFtrAct();
    b24_unk_5e0 = unk_844;
    for (i = 0; i < 4; i++) {
        if (((FtrModelAnim *)&b24_unk_7c0[i])->getAnmObj()) {
            b24_unk_7c0[i].unk_10 = unk_844;
        }
    }
    p24::FtrActor_StepAnims(this);
    return TRUE;
}

BOOL FtrKind04::initModel() {
    initAnims(0, 0, 0x1000, 0);
    void *res = b24_unk_590;
    u8 t = ((FtrSwitch *)b24_unk_73c)->isOn();
    unk_848.init((u32)res, t);
    if (((FtrSwitch *)b24_unk_73c)->isOn() != 0 && p24::FtrMgr_IsShopScene() == 0) {
        changeAct(1, 0xff);
    } else {
        changeAct(0, 0xff);
    }
    return TRUE;
}

FtrKind04::~FtrKind04() {
}

FtrKind04::FtrKind04() {
}

extern "C" FtrActor *FtrKind04_Create() {
    return new FtrKind04;
}

// ================================================================ FtrKind03
void FtrKind03::execFtrAct01() {
    p24::FtrActor_StepAnims(this);
    hasIndoorFlag6();
    playSound0();
    if (((FtrSwitch *)b24_unk_73c)->isChanging()) {
        p24::FtrSync_RequestAct(this, 0, 0xff, 1);
    }
}

BOOL FtrKind03::enterFtrAct01() {
    ((FtrSwitch *)b24_unk_73c)->set(1, 0);
    playSound1();
    unk_844.setLit(1, 1, 0);
    return TRUE;
}

void FtrKind03::execFtrAct00() {
    if (((FtrSwitch *)b24_unk_73c)->isChanging()) {
        p24::FtrSync_RequestAct(this, 1, 0xff, 1);
    }
}

BOOL FtrKind03::enterFtrAct00() {
    ((FtrSwitch *)b24_unk_73c)->set(0, 0);
    playSound2();
    unk_844.setLit(0, 1, 0);
    return TRUE;
}

void FtrKind03::execFtrAct() {
    static void (FtrKind03::*tbl[2])() = {
        &FtrKind03::execFtrAct00,
        &FtrKind03::execFtrAct01,
    };
    u32 i = unk_840;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

BOOL FtrKind03::changeAct(u32 idx, u8 v) {
    FtrActor::changeAct(idx, v);
    static BOOL (FtrKind03::*tbl[2])() = {
        &FtrKind03::enterFtrAct00,
        &FtrKind03::enterFtrAct01,
    };
    if (idx < 2) {
        if ((this->*tbl[idx])()) {
            unk_840 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrKind03::getActSwitchState(u32 idx) {
    if (idx < 2) {
        return p24::data_ov004_02240030[idx];
    }
    return 0;
}

BOOL FtrKind03::vfunc_0c() {
    return TRUE;
}

BOOL FtrKind03::updateActive() {
    unk_844.update();
    execFtrAct();
    return TRUE;
}

BOOL FtrKind03::initModel() {
    initAnims(0, 0, 0x1000, 0);
    void *res = b24_unk_590;
    u8 t = ((FtrSwitch *)b24_unk_73c)->isOn();
    unk_844.init((u32)res, t);
    if (((FtrSwitch *)b24_unk_73c)->isOn() == 0 || p24::FtrMgr_IsShopScene() != 0) {
        changeAct(0, 0xff);
    } else {
        changeAct(1, 0xff);
    }
    return TRUE;
}

FtrKind03::~FtrKind03() {
}

FtrKind03::FtrKind03() {
}

extern "C" FtrActor *FtrKind03_Create() {
    return new FtrKind03;
}

// ================================================================ FtrKind02
BOOL FtrKind02::execFtrAct01() {
    u32 t = p24::FtrActor_GetFtrIndex(this);
    if (t != 0xb9 && t != 0xba) goto rest;
    if (((FtrSwitch *)b24_unk_73c)->isChanging()) {
        p24::FtrSync_RequestAct(this, 1, 0xff, 1);
        goto end;
    }
rest:
    ((FtrSwitch *)b24_unk_73c)->toggle(0);
    if (p24::FtrActor_StepAnims(this)) {
        p24::FtrSync_RequestAct(this, 0, 0xff, 1);
    } else {
        playSound0();
    }
    if (p24::FtrActor_GetFtrIndex(this) == 0x207) {
        if (p24::_ZN13AnimFrameCtrl14hasPassedFrameEi(b24_unk_5d0, 0x30)) {
            playSound2();
        }
    }
end:;
}

BOOL FtrKind02::enterFtrAct01() {
    playAnim(0, 1, 0x1000, 0);
    playSound1();
    return TRUE;
}

void FtrKind02::execFtrAct00() {
    if (((FtrSwitch *)b24_unk_73c)->isChanging()) {
        p24::FtrSync_RequestAct(this, 1, 0xff, 1);
    }
}

BOOL FtrKind02::enterFtrAct00() {
    p24::FtrActor_PlayAnimsFromLastFrame(this, 0, 1, 0x1000);
    if (p24::FtrActor_GetFtrIndex(this) != 0x207) {
        playSound2();
    }
    return TRUE;
}

void FtrKind02::execFtrAct() {
    static BOOL (FtrKind02::*tbl[2])() = {
        (BOOL (FtrKind02::*)())&FtrKind02::execFtrAct00,
        &FtrKind02::execFtrAct01,
    };
    u32 i = unk_840;
    if (i < 2) {
        (this->*tbl[i])();
    }
}

BOOL FtrKind02::changeAct(u32 idx, u8 v) {
    FtrActor::changeAct(idx, v);
    static BOOL (FtrKind02::*tbl[2])() = {
        &FtrKind02::enterFtrAct00,
        &FtrKind02::enterFtrAct01,
    };
    if (idx < 2) {
        if ((this->*tbl[idx])()) {
            unk_840 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL FtrKind02::vfunc_0c() {
    ((FtrSwitch *)b24_unk_73c)->set(0, 0);
    return TRUE;
}

BOOL FtrKind02::updateActive() {
    execFtrAct();
    return TRUE;
}

BOOL FtrKind02::initModel() {
    ((FtrSwitch *)b24_unk_73c)->set(0, 0);
    initAnims(0, 1, 0x1000, 0);
    p24::FtrActor_PlayAnimsFromLastFrame(this, 0, 1, 0x1000);
    changeAct(0, 0xff);
    return TRUE;
}

// ---- part 25: from unk_02212a84.cpp
namespace p25 {
extern "C" {
BOOL FtrActor_StepAnims(void *self);
u32 FtrActor_GetFtrIndex(void *self);
}
}

class FtrBasic : public FtrActor {
public:
    FtrBasic();
    virtual ~FtrBasic();
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

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 pad_841[3];
    /* 0x844 */ FtrGlowMatSet unk_844;
};

// Classes below exist only so their adjuster thunks are emitted.

namespace p25 {
extern "C" {
BOOL _ZN9FtrSwitch3setEji(void *, s32, s32);
BOOL _ZN9FtrSwitch10isChangingEv(void *);
BOOL _ZN9FtrSwitch4isOnEv(void *);
void _ZN15FtrSoundEmitter8playOnceEjj(void *, u32, void *);
void _ZN15FtrSoundEmitter8setPitchEj(void *, s32);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *, s32);
u32 func_02063b8c(s32 n);
void FtrSync_RequestAct(void *, u8, s32, s32);
void _ZN8FtrActorC2Ev(void *);
void _ZN8FtrActorD2Ev(void *);
void _ZN8FtrActordlEPv(void *);
void *_ZN8FtrActornwEm(u32);
extern u8 data_ov004_02240034[];
}
}

typedef void (FtrBasic::*Unk_ov004_02212b98_Fn)();
typedef BOOL (FtrBasic::*Unk_ov004_02212c04_Fn)();

// ---- class FtrKind02 ----
FtrKind02::~FtrKind02() {
}

FtrKind02::FtrKind02() {
}

extern "C" void FtrKind02_Create() {
    new FtrKind02;
}

// ---- class FtrBasic ----
void FtrBasic::execFtrAct01() {
    execFtrAct00();
}

BOOL FtrBasic::enterFtrAct01() {
    p25::_ZN9FtrSwitch3setEji(b25_f_73c, 1, 0);
    playSound1();
    return TRUE;
}

void FtrBasic::execFtrAct00() {
    if (p25::_ZN9FtrSwitch10isChangingEv(b25_f_73c)) {
        p25::FtrSync_RequestAct(this, (unk_840 + 1) & 1, 0xff, 1);
    }
}

BOOL FtrBasic::enterFtrAct00() {
    p25::_ZN9FtrSwitch3setEji(b25_f_73c, 0, 0);
    playSound2();
    return TRUE;
}

void FtrBasic::execFtrAct() {
    static Unk_ov004_02212b98_Fn tbl[2] = {
        &FtrBasic::execFtrAct00,
        &FtrBasic::execFtrAct01,
    };
    if (unk_840 < 2) {
        (this->*tbl[unk_840])();
    }
}

BOOL FtrBasic::changeAct(u32 a, u8 b) {
    FtrActor::changeAct(a, b);
    static Unk_ov004_02212c04_Fn tbl[2] = {
        &FtrBasic::enterFtrAct00,
        &FtrBasic::enterFtrAct01,
    };
    if ((u32)a < 2) {
        if ((this->*tbl[a])()) {
            unk_840 = a;
            return TRUE;
        }
    }
    return FALSE;
}

u8 FtrBasic::getActSwitchState(u32 a) {
    if (a < 2) {
        return p25::data_ov004_02240034[a];
    }
    return 0;
}

BOOL FtrBasic::vfunc_0c() {
    return TRUE;
}

BOOL FtrBasic::updateActive() {
    if (b25_unk_77c == 1) {
        p25::FtrActor_StepAnims(this);
    }
    unk_844.update();
    unk_844.setLit(1, 0, 0);
    hasIndoorFlag6();
    execFtrAct();
    switch (p25::FtrActor_GetFtrIndex(this)) {
    case 0x123:
        if (!isPreview()) {
            p25::_ZN15FtrSoundEmitter8playOnceEjj(b25_f_794, 0x429, b25_f_7b4);
            if (p25::_ZN13AnimFrameCtrl14hasPassedFrameEi(b25_f_5d0, 0x43)) {
                p25::_ZN15FtrSoundEmitter8setPitchEj(b25_f_794, 1);
            }
        }
        break;
    case 0x1fb:
        if (!isPreview()) {
            p25::_ZN15FtrSoundEmitter8playOnceEjj(b25_f_794, 0x42b, b25_f_7b4);
            if (p25::_ZN13AnimFrameCtrl14hasPassedFrameEi(b25_f_5d0, 4)) {
                p25::_ZN15FtrSoundEmitter8setPitchEj(b25_f_794, 1);
            } else if (p25::_ZN13AnimFrameCtrl14hasPassedFrameEi(b25_f_5d0, 0x16)) {
                p25::_ZN15FtrSoundEmitter8setPitchEj(b25_f_794, 2);
            }
        }
        break;
    case 0x1fc:
        if (!isPreview()) {
            p25::_ZN15FtrSoundEmitter8playOnceEjj(b25_f_794, 0x42c, b25_f_7b4);
            if (p25::_ZN13AnimFrameCtrl14hasPassedFrameEi(b25_f_5d0, 5) || p25::_ZN13AnimFrameCtrl14hasPassedFrameEi(b25_f_5d0, 0x12)) {
                p25::_ZN15FtrSoundEmitter8setPitchEj(b25_f_794, 1);
            }
        }
        break;
    default:
        playSound0();
        break;
    }
    return TRUE;
}

BOOL FtrBasic::initModel() {
    if (b25_unk_77c == 1) {
        s32 k = getAnimFrameCount(0);
        u32 t = (b25_unk_768 == 1) ? 0 : p25::func_02063b8c(k);
        initAnims(0, 0, 0x1000, (u16)t);
        unk_844.init(b25_unk_590, 1);
    }
    if (p25::_ZN9FtrSwitch4isOnEv(b25_f_73c)) {
        changeAct(1, 0xff);
    } else {
        changeAct(0, 0xff);
    }
    return TRUE;
}

FtrBasic::~FtrBasic() {
}

FtrBasic::FtrBasic() {
}

extern "C" void FtrBasic_Create() {
    new FtrBasic;
}


// ---- functions of classes declared by a later part than the one that holds them
void FtrGyroid::execFtrAct02() {
    s32 v = updateSync((Unk_ov004_0220d69c_Vec *)&unk_5c[0]);
    if (v >= 0) {
        s32 i = v >> 12;
        p15::_ZN14BlendAnimModel8initAnimEiiitt(b15_f_534, p15::_ZN10FtrAnimSet6getBcaEj(p15::_ZN11FtrModelRes10getAnimSetEv(b15_f_6c8), 0), 0, v - (i << 12), (u16)i, 0);
        p15::_ZN14BlendAnimModel9stepBlendEv(b15_f_534);
    }
    if (p15::_ZN9FtrSwitch10isChangingEv(b15_f_73c)) {
        p15::_ZN9FtrSwitch3setEji(b15_f_73c, 1, 0);
        u32 r4 = p15::Scene_GetCurrent();
        p15::FtrSync_RequestToggleGyroid(r4, &unk_5c[0], p15::FtrActor_GetLayer(this));
    }
}

extern "C" void _ZN7FtrCart11onMoveStartEv(FtrCart *self, BOOL b) {
    s32 p = p16::_ZN13FtrContactSet11findContactEPv(p16::FtrContactSet_GetInstance(), self);
    BOOL c = FALSE;
    if (p != 0) {
        u16 *rec = p16::_ZN10FtrAnimSet6getBcaEj(p16::_ZN11FtrModelRes10getAnimSetEv(self->b16_unk_6c8), c);
        if (self->b16_unk_77c == 0x16) {
            if (p16::_ZN10FtrContact7getSideEv(p) == 2) {
                if (b) {
                    if (p16::_ZN8FtrActor10playSound1Ev(self) != 0) c = TRUE;
                    p16::_ZN8FtrActor8playAnimEiiij(self, 0, 1, 0x1000, 0);
                } else {
                    if (p16::_ZN8FtrActor10playSound1Ev(self) != 0) c = TRUE;
                    p16::_ZN8FtrActor8playAnimEiiij(self, 0, 3, 0x1000, rec[2] - 1);
                }
            } else if (p16::_ZN10FtrContact7getSideEv(p) == 0) {
                if (b) {
                    if (p16::_ZN8FtrActor10playSound1Ev(self) != 0) c = TRUE;
                    p16::_ZN8FtrActor8playAnimEiiij(self, 0, 3, 0x1000, rec[2] - 1);
                } else {
                    if (p16::_ZN8FtrActor10playSound1Ev(self) != 0) c = TRUE;
                    p16::_ZN8FtrActor8playAnimEiiij(self, 0, 1, 0x1000, 0);
                }
            }
        } else {
            if (p16::_ZN10FtrContact7getSideEv(p) == 3) {
                if (b) {
                    if (p16::_ZN8FtrActor10playSound1Ev(self) != 0) c = TRUE;
                    p16::_ZN8FtrActor8playAnimEiiij(self, 0, 1, 0x1000, 0);
                } else {
                    if (p16::_ZN8FtrActor10playSound1Ev(self) != 0) c = TRUE;
                    p16::_ZN8FtrActor8playAnimEiiij(self, 0, 3, 0x1000, rec[2] - 1);
                }
            } else if (p16::_ZN10FtrContact7getSideEv(p) == 1) {
                if (b) {
                    if (p16::_ZN8FtrActor10playSound1Ev(self) != 0) c = TRUE;
                    p16::_ZN8FtrActor8playAnimEiiij(self, 0, 3, 0x1000, rec[2] - 1);
                } else {
                    if (p16::_ZN8FtrActor10playSound1Ev(self) != 0) c = TRUE;
                    p16::_ZN8FtrActor8playAnimEiiij(self, 0, 1, 0x1000, 0);
                }
            }
        }
    }
    if (c == 0) {
        if (p16::FtrActor_GetDragSe(self) != 0xffff) {
            p16::func_020943dc();
        }
    }
}

void FtrStereo::execFtrAct01() {
    p17::FtrActor_StepAnims(this);
    playSound0();
    unk_844.setLit(1, 1, 0);
    p17::_ZN15FtrSoundEmitter6setPanEj(b17_sub_794, b17_unk_7b4);
    if (((FtrSwitch *)b17_unk_73c)->isChanging()) {
        ((FtrSwitch *)b17_unk_73c)->set(1, 0);
        p17::TalkRequest_AddPlayerTalk6(this, 0);
        p17::func_02094f20();
    }
}

void FtrClock::vfunc_6c(s32 a, void *b) {
    FtrActor::vfunc_6c(a, b);
}

void FtrStorage::execTalkAct0B() {
    u32 f = unk_85c;
    if (f == 0) {
        p19::_ZN9Character13func_0203e47cEi(this, this);
        p19::TalkRequest_SetTargetDone(this);
    }
}

BOOL FtrStorage::enterTalkAct0B() {
    s32 v = getStorageType();
    if (v != -1) {
        if (p19::PlayerActor_LocalRequestStorageClose(&v)) {
            return p19::FtrSync_ChangeAct(this, 3, 0xff, 1);
        }
        return FALSE;
    }
    return p19::FtrSync_ChangeAct(this, 3, 0xff, 1);
}

BOOL FtrStorage::execTalkAct0A() {
    if (((Unk_ov004_0220f6e0_Rec *)unk_3c) && ((Unk_ov004_0220f6e0_Rec *)unk_3c)->unk_04 == 0) {
        setTalkAct(11);
    }
}

BOOL FtrStorage::enterTalkAct0A() {
    return TRUE;
}

BOOL FtrStorage::execTalkAct09() {
    if (((Unk_ov004_0220f6e0_Rec *)unk_3c) && ((Unk_ov004_0220f6e0_Rec *)unk_3c)->unk_04 != 0) {
        setTalkAct(10);
    }
}

BOOL FtrStorage::enterTalkAct09() {
    s32 y, x;
    p19::_ZN9Character13func_0203e488Ei(this, this);
    ((Unk_ov004_0220f6e0_Rec *)unk_3c)->unk_08 = 1;
    p19::_ZN10MsgRequest11setFileNameEPKc(*this, p19::data_ov004_0224bbc0);
    u32 t = p19::FtrActor_GetFtrIndex(this);
    u32 r5 = t + p19::Scene_GetCurrent();
    r5 &= 0xf;
    struct {
        u32 pad;
        FtrTileList list;
    } l;
    FtrTileList &list = l.list;
    p19::_ZN18Unk_ov004_022077a48getTilesEP23Unk_ov004_02207854_ListPvi(this, &list, 0, 0);
    u8 *grid = p19::gSceneBlockMap;
    if (grid != NULL) {
        u32 i;
        for (i = 0; i < list.getCount(); i++) {
            x = list.get(i)->x;
            y = list.get(i)->y;
            s32 hx = x >> 4;
            s32 hy = y >> 4;
            void *cell = p19::BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), 0);
            if (cell != NULL && p19::Item_IsFurniture(cell)) {
                r5 = (r5 + (x + (y << 4))) & 0xf;
                break;
            }
        }
    }
    unk_1e = r5;
    list.release();
    return TRUE;
}

BOOL FtrStorage::execTalkAct08() {
    if (unk_85c == 2) {
        setTalkAct(9);
    }
}

BOOL FtrStorage::enterTalkAct08() {
    return p19::FtrSync_ChangeAct(this, 1, 0xff, 1);
}

BOOL FtrStorage::execTalkAct07() {
    s32 v = getStorageType();
    if (v == -1) {
        setTalkAct(8);
    } else if (p19::PlayerActor_TestLocalFlag02(v)) {
        setTalkAct(8);
    }
}

BOOL FtrStorage::enterTalkAct07() {
    void *r4 = p19::_ZN13FtrContactSet11findContactEPv(p19::FtrContactSet_GetInstance(), this);
    s32 v = getStorageType();
    if (v != -1) {
        u16 h = p19::_ZN10FtrContact12getPushAngleEv(r4);
        void *a = p19::_ZN10FtrContact22getClampedContactPointEv(r4);
        p19::PlayerActor_LocalRequestStorageOpen(&v, a, (u8 *)p19::_ZN10FtrContact22getClampedContactPointEv(r4) + 8, &h);
        return TRUE;
    }
    return TRUE;
}

BOOL FtrStorage::execTalkAct06() {
    return setTalkAct(7);
}

BOOL FtrStorage::enterTalkAct06() {
    return TRUE;
}

BOOL FtrStorage::execTalkAct05() {
    if (unk_85c == 0) {
        p19::TalkRequest_SetTargetDone(this);
    }
}

BOOL FtrStorage::enterTalkAct05() {
    s32 v = getStorageType();
    if (v != -1) {
        if (p19::PlayerActor_LocalRequestStorageClose(&v)) {
            return p19::FtrSync_ChangeAct(this, 3, 0xff, 1);
        }
        return FALSE;
    }
    return p19::FtrSync_ChangeAct(this, 3, 0xff, 1);
}

BOOL FtrStorage::execTalkAct04() {
    if (p19::MenuCtrl_IsFinished()) {
        setTalkAct(5);
    }
}

BOOL FtrStorage::enterTalkAct04() {
    if (p19::MenuCtrl_OpenLauncher(0x22)) {
        return TRUE;
    }
    return FALSE;
}

BOOL FtrStorage::execTalkAct03() {
    if (unk_85c == 2) {
        setTalkAct(4);
    }
}

BOOL FtrStorage::enterTalkAct03() {
    return p19::FtrSync_ChangeAct(this, 1, 0xff, 1);
}

BOOL FtrStorage::execTalkAct02() {
    s32 v = getStorageType();
    if (v == -1) {
        setTalkAct(3);
    } else if (p19::PlayerActor_TestLocalFlag02(v)) {
        setTalkAct(3);
    }
}

BOOL FtrStorage::enterTalkAct02() {
    void *r4 = p19::_ZN13FtrContactSet11findContactEPv(p19::FtrContactSet_GetInstance(), this);
    s32 v = getStorageType();
    if (v != -1) {
        u16 h = p19::_ZN10FtrContact12getPushAngleEv(r4);
        void *a = p19::_ZN10FtrContact22getClampedContactPointEv(r4);
        if (p19::PlayerActor_LocalRequestStorageOpen(&v, a, (u8 *)p19::_ZN10FtrContact22getClampedContactPointEv(r4) + 8, &h)) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

BOOL FtrStorage::execTalkAct01() {
    return setTalkAct(2);
}

BOOL FtrStorage::enterTalkAct01() {
    return TRUE;
}

BOOL FtrStorage::execTalkAct00() {
}

BOOL FtrStorage::enterTalkAct00() {
    return TRUE;
}

void FtrStorage::execTalkAct() {
    typedef BOOL (FtrStorage::*Fn)();
    static Fn tbl[12] = {
        &FtrStorage::execTalkAct00,
        &FtrStorage::execTalkAct01,
        &FtrStorage::execTalkAct02,
        &FtrStorage::execTalkAct03,
        &FtrStorage::execTalkAct04,
        &FtrStorage::execTalkAct05,
        &FtrStorage::execTalkAct06,
        &FtrStorage::execTalkAct07,
        &FtrStorage::execTalkAct08,
        &FtrStorage::execTalkAct09,
        &FtrStorage::execTalkAct0A,
        (Fn)&FtrStorage::execTalkAct0B,
    };
    s32 s = unk_860;
    if (s < 12) {
        (this->*tbl[s])();
    }
}

BOOL FtrStorage::setTalkAct(s32 s) {
    typedef BOOL (FtrStorage::*Fn)();
    static Fn tbl[12] = {
        &FtrStorage::enterTalkAct00,
        &FtrStorage::enterTalkAct01,
        &FtrStorage::enterTalkAct02,
        &FtrStorage::enterTalkAct03,
        &FtrStorage::enterTalkAct04,
        &FtrStorage::enterTalkAct05,
        &FtrStorage::enterTalkAct06,
        &FtrStorage::enterTalkAct07,
        &FtrStorage::enterTalkAct08,
        &FtrStorage::enterTalkAct09,
        &FtrStorage::enterTalkAct0A,
        &FtrStorage::enterTalkAct0B,
    };
    if (s < 12) {
        if ((this->*tbl[s])()) {
            unk_860 = s;
            return TRUE;
        }
    }
    return FALSE;
}

void FtrBed::vfunc_s18() {
    u32 r = p20::_ZN10ChoiceList9getResultEv(p20::_ZN15TalkWindowState13getChoiceListEv(((u32)unk_3c)));
    if (unk_854 == 1) {
        switch (r) {
        case 0:
            p20::_ZN15TalkWindowState14setNextMessageEPhPv(((u32)unk_3c), p20::gTalkMsgIndexEnd, 0);
            changeAct(6, 0xff);
            break;
        case 1:
            changeAct(5, 0xff);
            break;
        }
    } else {
        switch (r) {
        case 0:
            p20::_ZN15TalkWindowState14setNextMessageEPhPv(((u32)unk_3c), p20::gTalkMsgIndexEnd, 0);
            changeAct(0xa, 0xff);
            break;
        case 1:
            p20::_ZN15TalkWindowState14setNextMessageEPhPv(((u32)unk_3c), p20::gTalkMsgIndexEnd, 0);
            changeAct(9, 0xff);
            break;
        }
    }
}

void FtrBed::vfunc_14() {
    if (unk_1e == 0) {
        u32 o = ((u32)unk_3c);
        u32 h = p20::_ZN15TalkWindowState13getChoiceListEv(o);
        p20::_ZN10ChoiceList5resetEii(h, 2, 1);
        u8 buf[4];
        buf[0] = 0xc;
        buf[1] = p20::gTalkMsgIndexEnd[0];
        p20::_ZN10ChoiceList8setEntryEiPKhiS1_PKci(h, 0, &buf[0], 1, &buf[1], 0, 2);
        buf[2] = 0xd;
        buf[3] = p20::gTalkMsgIndexEnd[0];
        p20::_ZN10ChoiceList8setEntryEiPKhiS1_PKci(h, 1, &buf[2], 1, &buf[3], 0, 0);
        p20::_ZN10ChoiceList9loadTextsEv(h);
        p20::_ZN15TalkWindowState11openChoicesEi(o, 1);
    }
    if (unk_1e == 0x19) {
        changeAct(5, 0xff);
    }
}

void FtrBed::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
    case 1:
        if (unk_854 == 1) {
            changeAct(2, 0xff);
        } else {
            changeAct(7, 0xff);
        }
        break;
    case 8:
        changeAct(1, 0xff);
        break;
    }
}

void FtrBed::execFtrAct0D() {
    if (unk_848 < 0x16) {
        unk_848++;
    }
    if (unk_848 == 0x16) {
        p20::_ZN9Character13func_0203e47cEi(this, static_cast<TalkMsgRequest *>(this));
        p20::TalkRequest_SetTargetDone(this);
        p20::ProcBase_RequestDelete(this);
    }
}

BOOL FtrBed::enterFtrAct0D() {
    unk_848 = 0;
    return TRUE;
}

void FtrBed::execFtrAct0C() {
    if (isHidden()) {
        s32 r4 = unk_84c;
        s32 r6 = unk_850;
        if (b20_unk_780 == 2) {
            if (unk_842 != 0) {
                r4++;
            }
        }
        u32 t = p20::Ftr_GetUnk05(&unk_858);
        if (unk_842 != 0) {
            if (t == 2) {
                r4--;
            }
        }
        u32 c = p20::Item_GetFurnitureIndex(&unk_858);
        p20::FtrActor_MakeSpawnArg(r4, r6, c, 3, 0, 1);
        if (p20::FtrMgr_SpawnFromArg()) {
            changeAct(0xd, 0xff);
        }
    }
}

BOOL FtrBed::enterFtrAct0C() {
    findOwnTile(&unk_84c, &unk_850, 0, 0);
    startHide();
    return TRUE;
}

void FtrBed::execFtrAct0B() {
    if (p20::MenuCtrl_IsFinished()) {
        if (p20::MenuCtrl_IsResultOk() == 0) {
            p20::_ZN9Character13func_0203e47cEi(this, static_cast<TalkMsgRequest *>(this));
            p20::TalkRequest_SetTargetDone(this);
        } else {
            u32 r4 = p20::MenuCtrl_GetIndex();
            unk_858 = p20::Pocket_GetItem();
            void *p = p20::PlayerData_GetCurrent();
            if (p) {
                p20::_ZN10PlayerData6setBedEPt(p, &unk_858);
            }
            u16 v = p20::Item_MakeFurniture(p20::FtrActor_GetFtrIndex(this), 0);
            p20::Pocket_SetItem(&v, 0, r4);
            changeAct(0xc, 0xff);
        }
    }
}

// ================================================================ named data of the unit (generated by t_mkdata.py from the original image)
// ---- .rodata 0x02240024-0x02240090: state tables returned by the vfunc_74 overrides (index = state), a type list, a row table
extern "C" {
extern const u8 data_ov004_02240024[2];
extern const u8 data_ov004_02240028[2];
extern const u8 data_ov004_0224002c[2];
extern const u8 data_ov004_02240030[2];
extern const u8 data_ov004_02240034[2];
extern const u8 data_ov004_02240038[2];
extern const u8 data_ov004_0224003c[2];
extern const u8 data_ov004_02240040[3];
extern const u8 data_ov004_02240044[3];
extern const u8 data_ov004_02240048[4];
extern const u8 data_ov004_0224004c[4];
extern const u8 data_ov004_02240050[4];
extern const u8 data_ov004_02240054[4];
extern const u8 data_ov004_02240058[4];
extern const u8 data_ov004_0224005c[4];
extern const u8 data_ov004_02240060[4];
extern const u8 data_ov004_02240064[5];
extern const u32 sFtrStorageKinds[3];
}
const u8 data_ov004_02240024[2] = {0, 1};
const u8 data_ov004_02240028[2] = {0, 1};
const u8 data_ov004_0224002c[2] = {1, 0};
const u8 data_ov004_02240030[2] = {0, 1};
const u8 data_ov004_02240034[2] = {0, 1};
const u8 data_ov004_02240038[2] = {0, 1};
const u8 data_ov004_0224003c[2] = {0, 1};
const u8 data_ov004_02240040[3] = {0, 1, 1};
const u8 data_ov004_02240044[3] = {0, 1, 0};
const u8 data_ov004_02240048[4] = {1, 0, 0, 1};
const u8 data_ov004_0224004c[4] = {0, 1, 1, 0};
const u8 data_ov004_02240050[4] = {0, 1, 1, 0};
const u8 data_ov004_02240054[4] = {0, 1, 1, 0};
const u8 data_ov004_02240058[4] = {0, 1, 1, 0};
const u8 data_ov004_0224005c[4] = {0, 1, 1, 0};
const u8 data_ov004_02240060[4] = {0, 1, 1, 0};
const u8 data_ov004_02240064[5] = {0, 1, 1, 0, 0};
const u32 sFtrStorageKinds[3] = {0xb, 0xc, 0xd};

// ---- .bss: position tables (FxVec3 = main's 3-word vector class with a registered destructor), filled by __sinit
// (symbols.txt labels 0x0224fc90 / 0x0224fca8 / 0x0224fcc0 are the second elements of the arrays)
FxVec3 data_ov004_0224fc84[2] = {FxVec3(0x2000, 0, 0x2000), FxVec3(0x2000, 0, -0x2000)};
FxVec3 data_ov004_0224fc9c[2] = {FxVec3(0x1000, 0, 0x3000), FxVec3(0x1000, 0, -0x3000)};
FxVec3 data_ov004_0224fac0[1] = {FxVec3(0, 0, 0)};
FxVec3 data_ov004_0224fcb4[2] = {FxVec3(-0x1000, 0, -0x1000), FxVec3(-0x1000, 0, 0x1000)};
// item id shared by the FtrStereo objects (main class ItemId: u16, constructor stores 0xfff1)
ItemId sStereoSong;

// ---- .rodata: rows {positions, count} indexed by the object's unk_780 (func_ov004_02210f0c)
struct Unk_ov004_02240078_Row {
    FxVec3 *unk_00;
    u32 unk_04;
};
extern "C" {
extern const Unk_ov004_02240078_Row sFtrBedLieOffsets[3];
}
const Unk_ov004_02240078_Row sFtrBedLieOffsets[3] = {{0, 0}, {data_ov004_0224fac0, 1}, {data_ov004_0224fcb4, 2}};

// ---- .data: positions indexed by unk_780 (func_ov004_02210f74)
FxVec3 *data_ov004_02249028[3] = {0, data_ov004_0224fc84, data_ov004_0224fc9c};

// ---- .data: the 34 registration entries {factory, id range, 0, 0xc8000, 0x12c000, 0x258000}; main refers to them by address only
typedef void (*Unk_ov004_Factory)();
struct Unk_ov004_SceneEntry {
    Unk_ov004_Factory unk_00;
    u16 unk_04;
    u16 unk_06;
    u32 unk_08[4];
};
extern "C" {
Unk_ov004_SceneEntry sFtrCompassProfile = {(Unk_ov004_Factory)FtrCompass_Create, 0x44, 0x4b, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrVillagerPicProfile = {(Unk_ov004_Factory)FtrVillagerPic_Create, 0x45, 0x4c, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrPhoneProfile = {(Unk_ov004_Factory)FtrPhone_Create, 0x4f, 0x56, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrClockProfile = {(Unk_ov004_Factory)FtrClock_Create, 0x39, 0x40, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrStereoProfile = {(Unk_ov004_Factory)FtrStereo_Create, 0x3a, 0x41, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrInstrumentProfile = {(Unk_ov004_Factory)FtrInstrument_Create, 0x46, 0x4d, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrPiggyBankProfile = {(Unk_ov004_Factory)FtrPiggyBank_Create, 0x47, 0x4e, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrMetronomeProfile = {(Unk_ov004_Factory)FtrMetronome_Create, 0x48, 0x4f, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrBasicProfile = {(Unk_ov004_Factory)FtrBasic_Create, 0x2f, 0x36, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrTvProfile = {(Unk_ov004_Factory)FtrTv_Create, 0x3b, 0x42, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrKind02Profile = {(Unk_ov004_Factory)FtrKind02_Create, 0x30, 0x37, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrKind03Profile = {(Unk_ov004_Factory)FtrKind03_Create, 0x31, 0x38, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrTvVcrProfile = {(Unk_ov004_Factory)FtrTvVcr_Create, 0x3c, 0x43, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrKind04Profile = {(Unk_ov004_Factory)FtrKind04_Create, 0x32, 0x39, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrKind05Profile = {(Unk_ov004_Factory)FtrKind05_Create, 0x33, 0x3a, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrCartProfile = {(Unk_ov004_Factory)FtrCart_Create, 0x3d, 0x44, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrGyroidProfile = {(Unk_ov004_Factory)FtrGyroid_Create, 0x3e, 0x45, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrWallpaperSampleProfile = {(Unk_ov004_Factory)FtrWallpaperSample_Create, 0x49, 0x50, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrKind06Profile = {(Unk_ov004_Factory)FtrKind06_Create, 0x34, 0x3b, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrCarpetSampleProfile = {(Unk_ov004_Factory)FtrCarpetSample_Create, 0x4a, 0x51, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrKind25Profile = {(Unk_ov004_Factory)FtrKind25_Create, 0x4b, 0x52, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrHeadwearProfile = {(Unk_ov004_Factory)FtrHeadwear_Create, 0x4c, 0x53, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrKind07Profile = {(Unk_ov004_Factory)FtrKind07_Create, 0x35, 0x3c, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrKind19Profile = {(Unk_ov004_Factory)FtrKind19_Create, 0x3f, 0x46, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrSeatProfile = {(Unk_ov004_Factory)FtrSeat_Create, 0x36, 0x3d, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrBedProfile = {(Unk_ov004_Factory)FtrBed_Create, 0x37, 0x3e, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrCannonProfile = {(Unk_ov004_Factory)FtrCannon_Create, 0x40, 0x47, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrComputerProfile = {(Unk_ov004_Factory)FtrComputer_Create, 0x4d, 0x54, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrNookwayProfile = {(Unk_ov004_Factory)FtrNookway_Create, 0x50, 0x57, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrShirtProfile = {(Unk_ov004_Factory)FtrShirt_Create, 0x41, 0x48, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrStorageProfile = {(Unk_ov004_Factory)FtrStorage_Create, 0x38, 0x3f, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrMyDesignProfile = {(Unk_ov004_Factory)FtrMyDesign_Create, 0x42, 0x49, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrSingingInsectProfile = {(Unk_ov004_Factory)FtrSingingInsect_Create, 0x4e, 0x55, {0x0, 0xc8000, 0x12c000, 0x258000}};
Unk_ov004_SceneEntry sFtrDesignDisplayProfile = {(Unk_ov004_Factory)FtrDesignDisplay_Create, 0x43, 0x4a, {0x0, 0xc8000, 0x12c000, 0x258000}};
}

// ---- .data: names (model / animation / sound resource names used by the classes above)
extern "C" {
char data_ov004_0224bb44[12] = "obj_etc_tel";
char data_ov004_0224bb50[14] = "m_dummy_floor";
char data_ov004_0224bb60[13] = "m_dummy_wall";
char data_ov004_0224bb70[16] = "obj_etc_bromide";
char data_ov004_0224bb80[8] = "compass";
char data_ov004_0224bb88[2] = "w";
char data_ov004_0224bb8c[2] = "g";
char data_ov004_0224bb90[2] = "b";
char data_ov004_0224bb94[4] = "myD";
char data_ov004_0224bb98[5] = "tv_m";
char data_ov004_0224bba0[5] = "tv.0";
char data_ov004_0224bba8[6] = "tv_pl";
char data_ov004_0224bbb0[15] = "obj_etc_player";
char data_ov004_0224bbc0[15] = "obj_etc_nchest";
char data_ov004_0224bbd0[17] = "sp_etc_sequence4";
char data_ov004_0224bbe4[17] = "sp_etc_sequence2";
}
