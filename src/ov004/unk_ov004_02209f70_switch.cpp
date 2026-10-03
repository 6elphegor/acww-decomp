// mwcc-version: 1.2/base
#include "types.h"
// The two functions of the ov004 translation unit 0x02209f70-0x022136d0 that need mwcc 1.2/base (signed-halfword
// switch tables): Unk_ov004_0224b43c::vfunc_80 and vfunc_7c. Same declarations as the main file of the unit;
// nothing else is emitted here (see config/usa/arm9/overlays/ov004/object_order.txt).
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

struct Unk_02056fd8 {
    s32 func_02057110(s32 a);
};

// ---- 0x02206520: list of up to 4 tile positions
struct Unk_ov004_02206520_Ent {
    s32 x, y;
    Unk_ov004_02206520_Ent() {
        x = 0;
        y = 0;
    }
};

struct Unk_ov004_02206520 {
    u32 unk_00;
    Unk_ov004_02206520_Ent unk_04[4];
    Unk_ov004_02206520_Ent *func_ov004_02206520(s32 i);
    u32 func_ov004_0220652c();
    BOOL func_ov004_02206530(u32 a, u32 b);
    void func_ov004_02206554();
    Unk_ov004_02206520();
};

struct Unk_ov004_0220650c {
    u32 unk_00;
    u32 unk_04[4];
    void func_ov004_0220650c();
};

// ---- 0x02205994: 4 ids + count (member at 0x760)
class Unk_ov004_02205994 {
public:
    u8 func_ov004_02205994();
    BOOL func_ov004_02205998(s32 v);
    void func_ov004_022059b0(u32 v);
    void func_ov004_022059b4(void *p, u32 v);

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

struct Unk_ov004_02205bcc : public LightLevel {
    Unk_ov004_02205bcc();
    ~Unk_ov004_02205bcc();
    BOOL func_ov004_02205bcc(BOOL on, s32 a, s32 b);
    BOOL func_ov004_02205be4(Unk_02056fd8 *res, s32 idx, BOOL on);
    s8 unk_14;
    Unk_02056fd8 *unk_18;
};

// ---- 0x02205b14: element view used by the 3-element container (same object as 0x02205bcc)
struct Unk_ov004_02205b14_Obj {
    u8 pad[0x18];
    u8 unk_18;
};

class Unk_ov004_02205b14 {
public:
    void func_ov004_02205b14();

    /* 0x00 */ u8 pad_00[0x14];
    /* 0x14 */ s8 unk_14;
    /* 0x15 */ u8 pad_15[3];
    /* 0x18 */ Unk_ov004_02205b14_Obj *unk_18;
};

class Unk_ov004_022059f4 {
public:
    Unk_ov004_022059f4();
    ~Unk_ov004_022059f4();
    void func_ov004_022059f4();
    u32 func_ov004_02205a1c(u32 a, u32 b, u32 c);
    u32 func_ov004_02205a64(u32 a, u32 b);

    /* 0x00 */ Unk_ov004_02205bcc unk_00[3];
    /* 0x54 */ u8 unk_54;
};

// ---- 0x02205c44 (member at 0x73c)
struct Unk_ov004_02205c44 {
    ~Unk_ov004_02205c44();
    void func_ov004_02205c44(u32 v, s32 flag);
    void func_ov004_02205c54(s32 flag);
    BOOL func_ov004_02205c6c();
    u8 func_ov004_02205c7c();
    void func_ov004_02205c80(Unk_ov004_02205c80_Obj *o);
    void func_ov004_02205cc4(Unk_ov004_02205c80_Obj *o);
    void func_ov004_02205cdc(Unk_ov004_02205c80_Obj *o);
    void func_ov004_02205d50();
    u8 unk_00;
    u8 unk_01;
};

// ---- 0x02205d5c (member at 0x73e)
struct Unk_ov004_02205d5c {
    ~Unk_ov004_02205d5c();
    void func_ov004_02205d5c(s32 a, s32 b);
    void func_ov004_02205d7c();
    s8 unk_00;
    s8 unk_01;
    u8 unk_02;
};

// ---- 0x02205e58 (member at 0x178)
struct Unk_ov004_02205e58 {
    ~Unk_ov004_02205e58();
    BOOL func_ov004_02205e20(s32 x, s32 y, s16 z);
    BOOL func_ov004_02205e58(s32 idx, Unk_ov004_02205d8c_Vec *pos, s32 ang);
    s32 func_ov004_02205e78();
    Unk_ov004_02205d8c_Vec *func_ov004_02205e80();
    s32 func_ov004_02205e84();
    BOOL func_ov004_02205e8c();
    void func_ov004_02205ea0();
    s16 unk_00;
    s16 unk_02;
    Unk_ov004_02205d8c_Vec unk_04;
};

// ---- 0x022062f4 (element of 0x022061b4)
struct Unk_ov004_022062f4 {
    Unk_ov004_022062f4();
    ~Unk_ov004_022062f4();
    BOOL func_ov004_022062c8(u16 *id, Unk_ov004_02205d8c_Vec *pos);
    u16 *func_ov004_022062f4();
    Unk_ov004_02205d8c_Vec *func_ov004_022062f8();
    void func_ov004_022062fc();
    BOOL func_ov004_02206310();
    void func_ov004_02206234(Unk_ov004_02205c80_Obj *o);
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
struct Unk_ov004_022061b4 {
    Unk_ov004_022061b4();
    ~Unk_ov004_022061b4();
    void func_ov004_02205eb0(Unk_ov004_02205c80_Obj *o);
    BOOL func_ov004_02205f58(Unk_ov004_02205c80_Obj *o);
    BOOL func_ov004_0220607c(Unk_ov004_02205c80_Obj *o);
    BOOL func_ov004_0220614c(u16 *id, Unk_ov004_02205d8c_Vec *pos);
    void func_ov004_02206190(Unk_ov004_02205c80_Obj *o);
    Unk_ov004_022062f4 *func_ov004_022061b4(u32 i);
    void func_ov004_022061c4();
    u32 unk_00;
    Unk_ov004_022062f4 unk_04[4];
};

// ---- 0x02206398 (member at 0x44 of 0x02206e38; 5 pairs of resource pointers)
struct Unk_ov004_02208a18_Rec {
    u32 unk_00;
    u16 unk_04;
};

struct Unk_ov004_02206398 {
    inline Unk_ov004_02206398() { func_ov004_02206418(); }
    ~Unk_ov004_02206398();
    s32 func_ov004_02206380();
    Unk_ov004_02208a18_Rec *func_ov004_02206398(u32 i);
    Unk_ov004_02208a18_Rec *func_ov004_022063a4(u32 i);
    Unk_ov004_02208a18_Rec *func_ov004_022063b0(u32 i);
    Unk_ov004_02208a18_Rec *func_ov004_022063bc(u32 i);
    Unk_ov004_02208a18_Rec *func_ov004_022063c8(u32 i);
    void func_ov004_022063d4(s32 v);
    void func_ov004_022063d8(void *v, u32 i);
    void func_ov004_022063e4(void *v, u32 i);
    void func_ov004_022063f0(void *v, u32 i);
    void func_ov004_022063fc(void *v, u32 i);
    void func_ov004_02206408(void *v, u32 i);
    void func_ov004_02206418();
    void *unk_00[2];
    void *unk_08[2];
    void *unk_10[2];
    void *unk_18[2];
    void *unk_20[2];
    s32 unk_28;
};

// ---- 0x02206434 (set of up to 4 neighbour objects)
struct Unk_ov004_02206434 {
    Unk_ov004_02206434();
    Unk_ov004_02206434(Unk_ov004_02206520 *l, s32 flag);
    BOOL func_ov004_02206434(Unk_ov004_02205c80_Obj *o);
    Unk_ov004_02205c80_Obj *func_ov004_02206474(u32 i);
    u32 func_ov004_02206480();
    void func_ov004_022064b4(Unk_ov004_02206520 *l, s32 flag);
    u32 unk_00;
    Unk_ov004_02205c80_Obj *unk_04[4];
};

// ---- 0x022487cc : Unk_020d8cf4 (member at 0x628)
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

struct Unk_020d8cf4 {
    virtual void vfunc_00(Unk_020d8ce4 *a, Unk_ov004_02206570_Act *b, s32 c);
    u8 pad_04[0x98];
    Unk_020d8cf4();
    ~Unk_020d8cf4();
};

struct Unk_ov004_022487cc : Unk_020d8cf4 {
    void *unk_9c;
    Unk_ov004_022487cc();
    void vfunc_00(Unk_020d8ce4 *a, Unk_ov004_02206570_Act *b, s32 c);
    void func_ov004_02206570(Unk_ov004_02206570_Act *b);
    void func_ov004_022069a4();
    void func_ov004_022069ac(void *p);
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
    u32 func_02055014(void *a, TexVramSlot *b, void *c);
    void func_0205516c(void);
    void *func_0205500c(void);
};

struct Unk_ov004_02206be8_Blk {
    u32 pad[26];
};

struct Unk_ov004_022069ec {
    void *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    ModelResource unk_10;
    Unk_ov004_02206398 unk_44;
    u16 unk_70;
    u8 unk_72;

    void func_ov004_022069ec();
    void *func_ov004_02206a14();
    void *func_ov004_02206a2c();
    BOOL func_ov004_02206a44(void *obj, s32 a, s32 flag);
    BOOL func_ov004_02206b64(void *obj, s32 a, s32 flag);
    void func_ov004_02206bcc();
    Unk_ov004_02206398 *func_ov004_02206be4();
    BOOL func_ov004_02206be8(void *obj, s32 id);
    char *func_ov004_02206db4(s32 id);
    char *func_ov004_02206de0(s32 id);
    BOOL func_ov004_02206e0c();
};

struct Unk_ov004_02206e38 {
    Unk_ov004_02206e38();
    ~Unk_ov004_02206e38();
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    ModelResource unk_10;
    Unk_ov004_02206398 unk_44;
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

class Unk_ov004_02248804 : public ModelAnim {
public:
    Unk_ov004_02248804();
    virtual ~Unk_ov004_02248804();
    u32 func_ov004_02206e74();
};

// ================================================================ Unk_ov004_0224882c
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
    /* 0x178 */ u8 unk_178[0x10];   // Unk_ov004_02205e58
    /* 0x188 */ u8 unk_188[0x44];   // Unk_ov004_022061b4
    /* 0x1cc */ u8 unk_1cc[0x80];   // 4 x Unk_020b6a0c (0x20)
    /* 0x24c */ u8 unk_24c[0x34];
    /* 0x280 */ u32 unk_280;
    /* 0x284 */ u8 unk_284;
    /* 0x285 */ u8 pad_285[3];
    /* 0x288 */ u8 unk_288[0x2a8];  // Unk_020b6e10
    /* 0x530 */ s32 unk_530;
    /* 0x534 */ u8 unk_534[0x590 - 0x534]; // Unk_0205454c
    /* 0x590 */ u32 unk_590;
    /* 0x594 */ u8 pad_594[4];
    /* 0x598 */ Unk_ov004_Mtx unk_598;
    /* 0x5c8 */ u8 pad_5c8[0x5d0 - 0x5c8];
    /* 0x5d0 */ u8 unk_5d0[4];
    /* 0x5d4 */ u32 unk_5d4;
    /* 0x5d8 */ u32 unk_5d8;
    /* 0x5dc */ u8 pad_5dc[0x628 - 0x5dc];
    /* 0x628 */ u8 unk_628[0xa0];   // Unk_ov004_022487cc
    /* 0x6c8 */ u8 unk_6c8[0x74];   // Unk_ov004_02206e38
    /* 0x73c */ u8 unk_73c[2];      // Unk_ov004_02205c44
    /* 0x73e */ s8 unk_73e;         // Unk_ov004_02205d5c (3 bytes)
    /* 0x73f */ s8 unk_73f;
    /* 0x740 */ u8 unk_740;
    /* 0x741 */ u8 pad_741[3];
    /* 0x744 */ u8 unk_744[0x1c];   // Unk_ov004_02205bcc
    /* 0x760 */ u8 unk_760[8];      // Unk_ov004_02205994
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
    /* 0x7c0 */ Unk_ov004_02208980_E unk_7c0[4];   // 4 x Unk_ov004_02248804
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

class Unk_ov004_0224882c;

class Unk_ov004_0224882c : public Character, public TalkMsgRequest {
public:
    Unk_ov004_0224882c();
    virtual ~Unk_ov004_0224882c();
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
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual u8 vfunc_78();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_84();
    virtual BOOL vfunc_88();
    virtual BOOL vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual BOOL vfunc_a0();

    void func_ov004_02204f24();
    BOOL func_ov004_02204f8c();
    void func_ov004_02204f90();
    BOOL func_ov004_02205004();
    void func_ov004_0220500c();
    BOOL func_ov004_0220507c();
    void func_ov004_022050b8();
    BOOL func_ov004_022050c0();
    void func_ov004_02205138();
    BOOL func_ov004_022051a4();

    BOOL func_ov004_0220521c();
    BOOL func_ov004_022052f4();
    BOOL func_ov004_022053b8();
    BOOL func_ov004_022053bc();
    void func_ov004_022053c0();
    BOOL func_ov004_0220552c();
    void func_ov004_022055ec();
    BOOL func_ov004_022056bc(s32 idx);
    BOOL func_ov004_0220579c(s32 s);
    BOOL func_ov004_022057b0();
    BOOL func_ov004_022057bc();
    BOOL func_ov004_022057c8();
    BOOL func_ov004_022057f0();
    BOOL func_ov004_02205808();
    BOOL func_ov004_02205814();
    BOOL func_ov004_02205820(s16 a);
    BOOL func_ov004_022058c0(s16 a);
    BOOL func_ov004_02205954(s32 a);

    BOOL func_ov004_02206f8c();
    void func_ov004_02206fa0(s32 a);
    void func_ov004_02206fe0(Unk_0203e4f0_Vec *v);
    void func_ov004_02207004();
    void func_ov004_02207038(s32 a);
    BOOL func_ov004_0220711c(s32 *ox, s32 *oy, s32 a, s32 b);
    u16 func_ov004_022071cc(s32 a, s32 b);
    BOOL func_ov004_022072b4(s32 a, s32 b);
    BOOL func_ov004_02207598(s32 a);
    BOOL func_ov004_022075a4(s32 a);
    BOOL func_ov004_022075b0();
    void func_ov004_022076b0();
    void func_ov004_02207704();

    void func_ov004_02208ba8(s32 a, s32 b, s32 c, u32 d);
    void func_ov004_02208de0(s32 a, s32 b, s32 c, s32 d);
    u16 func_ov004_02208ff0(s32 a);
    BOOL func_ov004_022090c0();
    BOOL func_ov004_02209108();
    BOOL func_ov004_02209150();
    BOOL func_ov004_02209198();
    u32 func_ov004_022091e0();
    BOOL func_ov004_02209bb4();
    BOOL func_ov004_02209c10();
    BOOL func_ov004_02209c44();
    BOOL func_ov004_02209c58();
    BOOL func_ov004_02209c88();
    BOOL func_ov004_02209ccc();
    BOOL func_ov004_0220e744(BOOL a);   // defined in TU03

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
            /* 0x178 */ u8 unk_178[0x10];   // Unk_ov004_02205e58
            /* 0x188 */ u8 unk_188[0x44];   // Unk_ov004_022061b4
            /* 0x1cc */ u8 unk_1cc[0x80];   // 4 x Unk_020b6a0c (0x20)
            /* 0x24c */ u8 unk_24c[0x34];
            /* 0x280 */ u32 unk_280;
            /* 0x284 */ u8 unk_284;
            /* 0x285 */ u8 pad_285[3];
            /* 0x288 */ u8 unk_288[0x2a8];  // Unk_020b6e10
            /* 0x530 */ s32 unk_530;
            /* 0x534 */ u8 unk_534[0x590 - 0x534]; // Unk_0205454c
            /* 0x590 */ u32 unk_590;
            /* 0x594 */ u8 pad_594[4];
            /* 0x598 */ Unk_ov004_Mtx unk_598;
            /* 0x5c8 */ u8 pad_5c8[0x5d0 - 0x5c8];
            /* 0x5d0 */ u8 unk_5d0[4];
            /* 0x5d4 */ u32 unk_5d4;
            /* 0x5d8 */ u32 unk_5d8;
            /* 0x5dc */ u8 pad_5dc[0x628 - 0x5dc];
            /* 0x628 */ u8 unk_628[0xa0];   // Unk_ov004_022487cc
            /* 0x6c8 */ u8 unk_6c8[0x74];   // Unk_ov004_02206e38
            /* 0x73c */ u8 unk_73c[2];      // Unk_ov004_02205c44
            /* 0x73e */ s8 unk_73e;         // Unk_ov004_02205d5c (3 bytes)
            /* 0x73f */ s8 unk_73f;
            /* 0x740 */ u8 unk_740;
            /* 0x741 */ u8 pad_741[3];
            /* 0x744 */ u8 unk_744[0x1c];   // Unk_ov004_02205bcc
            /* 0x760 */ u8 unk_760[8];      // Unk_ov004_02205994
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
            /* 0x7c0 */ Unk_ov004_02208980_E unk_7c0[4];   // 4 x Unk_ov004_02248804
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
class Unk_ov004_0224b0b8 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b0b8();
    virtual BOOL vfunc_0c();
    virtual ~Unk_ov004_0224b0b8();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    /* 0x840 */ u32 unk_840;
};

// 0x0224b310: size 0x858
class Unk_ov004_0224b310 : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b310();
    virtual BOOL vfunc_0c();
    virtual ~Unk_ov004_0224b310();
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_ov004_0220a040();
    BOOL func_ov004_0220a068();
    void func_ov004_0220a088();
    BOOL func_ov004_0220a0bc();
    void func_ov004_0220a0c0();
    BOOL func_ov004_0220a0e4();
    void func_ov004_0220a128();
    BOOL func_ov004_0220a154();
    void func_ov004_0220a174();
    BOOL func_ov004_0220a1e4();
    void func_ov004_0220a1e8();
    BOOL func_ov004_0220a280(s32 idx);
    void func_ov004_0220a328();
    BOOL func_ov004_0220a33c();
    void func_ov004_0220a360();
    BOOL func_ov004_0220a364();
    void func_ov004_0220a380();
    BOOL func_ov004_0220a394();
    void func_ov004_0220a3b8();
    BOOL func_ov004_0220a3bc();
    void func_ov004_0220a3d8();

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
class Unk_ov004_0224b43c : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224b43c();
    virtual ~Unk_ov004_0224b43c();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

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
extern u16 data_ov004_022486f8;
extern const u8 data_ov004_0224004c[];
extern const char data_ov004_0224bb44[];

void *func_ov004_022358d8(void);
void _ZN18Unk_ov004_022358c819func_ov004_02235854EPv(void *heap, void *p);
void *_ZN18Unk_ov004_022358c819func_ov004_02235860Ev(void *heap, u32 size);
void *func_0212899c(void *p, s32 v, u32 n);

void _ZN18Unk_ov004_0224882cC1Ev(void *);
void _ZN18Unk_ov004_0224882cC2Ev(void *);

void _ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(void *, s32, s32);
BOOL _ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(void *);
u8 _ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(void *);
void _ZN18Unk_ov004_02235cc019func_ov004_0223591cEjj(void *, u32, void *);
void *_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(void *);
void *_ZN18Unk_ov004_0220639819func_ov004_022063b0Ej(void *, u32);
u32 func_ov004_02208980(void *);
u32 func_ov004_022087a4(void *);
u32 func_ov004_02233128(u32);
void *func_ov004_022354d8(void);
void *_ZN18Unk_ov004_022351bc19func_ov004_02235464EPv(void *, void *);
s32 *_ZN18Unk_ov004_022355ac19func_ov004_022354ecEv(void);
u32 _ZN18Unk_ov004_022355ac19func_ov004_022354e0Ev(void *);

u32 ItemInfo_IsReady(void);
void TalkRequest_EndTalkWith(void *);
void TalkRequest_AddPlayerTalk6(void *, s32);
BOOL _ZN13AnimFrameCtrl14hasPassedFrameEi(void *, u32);
}
}

// ---------------------------------------------------------------- callbacks

// ---------------------------------------------------------------- 0x0224882c allocator

// ---------------------------------------------------------------- Unk_ov004_0224b0b8





// ---------------------------------------------------------------- Unk_ov004_0224b310





struct Unk_ov004_0220a0e4_Pad {
    s32 v[2];
    Unk_ov004_0220a0e4_Pad() {}
    ~Unk_ov004_0220a0e4_Pad() {}
};






typedef void (Unk_ov004_0224b310::*Unk_ov004_0220a1e8_Fn)();
typedef BOOL (Unk_ov004_0224b310::*Unk_ov004_0220a280_Fn)();





















// ---------------------------------------------------------------- Unk_ov004_0224b43c


BOOL Unk_ov004_0224b43c::vfunc_80() {
    u32 h = p10::func_ov004_02233128(p10::func_ov004_022087a4(this));
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
                if (h != p10::data_ov004_022486f8) {
                    p10::_ZN18Unk_ov004_02235cc019func_ov004_0223591cEjj(b10_sub_794, h, b10_sub_7b4);
                }
            }
            break;
        case 1: {
            unk_848++;
            u32 r = p10::func_ov004_02208980(this);
            if (unk_846 != 0 && r != 0) {
                unk_846 = 0;
                func_ov004_02208ba8(0, 1, 0x1000, 0);
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
                if (h != p10::data_ov004_022486f8) {
                    p10::_ZN18Unk_ov004_02235cc019func_ov004_0223591cEjj(b10_sub_794, h, b10_sub_7b4);
                }
            }
            break;
        case 1:
        case 2:
        case 3: {
            if (h == 0x3ff) {
                if (p10::_ZN13AnimFrameCtrl14hasPassedFrameEi(b10_pad_5d0, 0x14)) {
                    if (h != p10::data_ov004_022486f8) {
                        p10::_ZN18Unk_ov004_02235cc019func_ov004_0223591cEjj(b10_sub_794, h, b10_sub_7b4);
                    }
                }
            }
            u32 r = p10::func_ov004_02208980(this);
            if (unk_846 != 0 && r != 0) {
                unk_846 = 0;
                func_ov004_02208ba8(0, 1, 0x1000, 0);
                unk_844++;
                if (unk_844 >= unk_840) {
                    unk_845 = (unk_845 + 1) & 3;
                    unk_844 = 0;
                    if (unk_845 != 0) {
                        if (h != p10::data_ov004_022486f8) {
                            p10::_ZN18Unk_ov004_02235cc019func_ov004_0223591cEjj(b10_sub_794, h, b10_sub_7b4);
                        }
                    } else {
                        if (p10::_ZN18Unk_ov004_0220639819func_ov004_022063b0Ej(p10::_ZN18Unk_ov004_022069ec19func_ov004_02206be4Ev(b10_sub_6c8), 0) != 0) {
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

s32 func_02051cc8(s32 a, s32 b, u8 c, u8 d);
s32 func_02051da4(s32 a, s32 b, u8 c, u8 d);
s32 func_02063b8c(s32 a, ...);
s32 Item_MakeFurniture(s32 a, s32 b);
BOOL func_0203c23c(u32 a, u16 *p);
s32 func_0203c234(s32 a);
BOOL _ZN12Unk_020e45e013func_020b8840EPvjS0_jj(void *a, s32 b, char *c, s32 d, s32 e, s32 f);

s32 _ZN18Unk_ov004_0224882c19func_ov004_02208de0Eiiii(void *p, s32 a, s32 b, s32 c, s32 d);
s32 _ZN18Unk_ov004_0224882c19func_ov004_02208ba8Eiiij(void *p, s32 a, s32 b, s32 c, s32 d);
s32 func_ov004_022087a4(void *p);
s32 func_ov004_02233128(void);
s32 _ZN18Unk_ov004_0224882c19func_ov004_02208ff0Ei(void *p);
void func_ov004_02208980(void *p);
void _ZN18Unk_ov004_0224882c19func_ov004_02209198Ev(void *p);
void _ZN18Unk_ov004_0224882c19func_ov004_02209150Ev(void *p);
void _ZN18Unk_ov004_0224882c19func_ov004_02209108Ev(void *p);
void _ZN18Unk_ov004_022059f419func_ov004_02205a1cEjjj(void *p, s32 a, s32 b, s32 c);
s32 _ZN18Unk_ov004_02205c4419func_ov004_02205c6cEv(void *p);
void _ZN18Unk_ov004_02205c4419func_ov004_02205c44Eji(void *p, s32 a, s32 b);
void _ZN18Unk_ov004_022059f419func_ov004_022059f4Ev(void *p);
s32 _ZN18Unk_ov004_02205c4419func_ov004_02205c7cEv(void *p);
void _ZN18Unk_ov004_022059f419func_ov004_02205a64Ejj(void *p, s32 a, s32 b);
s32 func_ov004_02234ad4(void);
void _ZN18Unk_ov004_0220599419func_ov004_022059b0Ej(void *p, s32 a);
s32 func_ov004_02235a04(void);
s32 _ZN18Unk_ov004_02235a0c19func_ov004_02235a0cEv(s32 a);
s32 _ZN18Unk_ov004_02235a0c19func_ov004_02235c74Ev(s32 a);
}
}

// ---------------------------------------------------------------------------------------------------------------------
// Overlay 4 base class (vtable 0x0224882c, secondary vtable 0x022488d8 at +0xec)

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x0224b43c

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x0224936c

class Unk_ov004_0224936c : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224936c();
    virtual ~Unk_ov004_0224936c();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    void func_0220aa30();
    BOOL func_0220aa74();
    void func_0220aaac();
    BOOL func_0220aae8();
    void func_0220ab20();

    /* 0x840 */ Unk_ov004_022059f4 unk_840;
    /* 0x898 */ u8 unk_898;
};

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x02249498

class Unk_ov004_02249498 : public Unk_ov004_0224882c {
public:
    Unk_ov004_02249498();
    virtual ~Unk_ov004_02249498();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_70(u32 a, u8 b);
    virtual u8 vfunc_74(u32 a);
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_88();

    void func_0220ad88();
    BOOL func_0220adb0();
    void func_0220adcc();
    BOOL func_0220adf4();
    void func_0220ae10();
    void func_0220af14();
    void func_0220af28();

    /* 0x840 */ u8 unk_840;
    /* 0x841 */ u8 unk_841;
};

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x022496f0

class Unk_ov004_022496f0 : public Unk_ov004_0224882c {
public:
    Unk_ov004_022496f0();
    virtual ~Unk_ov004_022496f0();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();

    /* 0x840 */ u16 unk_840;
};

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x0224981c

struct Unk_020e45e0 {
    Unk_020e45e0();
    u32 pad[10];
};

class Unk_ov004_0224981c : public Unk_ov004_0224882c {
public:
    Unk_ov004_0224981c();
    virtual ~Unk_ov004_0224981c();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_7c();
    virtual BOOL vfunc_80();
    virtual BOOL vfunc_88();

    /* 0x840 */ u16 unk_840;
    /* 0x842 */ u8 unk_842;
    /* 0x843 */ u8 pad_843;
    /* 0x844 */ Unk_020e45e0 unk_844;
};

// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224b43c



// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224936c












// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_02249498
















// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_022496f0





// ---------------------------------------------------------------------------------------------------------------------
// Unk_ov004_0224981c





// Out-of-line constructors (defined after the factories so they are not inlined)

BOOL Unk_ov004_0224b43c::vfunc_7c() {
    p11::_ZN18Unk_ov004_0224882c19func_ov004_02208de0Eiiii(this, 0, 1, 0x1000, 0);
    p11::func_ov004_022087a4(this);
    s32 t = p11::func_ov004_02233128();
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
            unk_842 = p11::func_02063b8c(0x3c, 0);
        } else if ((u16)(t + 0xfc07) <= 2) {
            unk_842 = p11::func_02063b8c(0xc8, 0);
        } else {
            unk_842 = p11::func_02063b8c(unk_840 * p11::_ZN18Unk_ov004_0224882c19func_ov004_02208ff0Ei(this));
        }
    }
    return TRUE;
}

