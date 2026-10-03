// mwcc-flags: -str reuse
#include "types.h"

// Library base class (same as GameProc.h, but vfunc_08 takes the s32 the vtable symbol names).
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

struct Unk_0201bc1c;
class Unk_ov078_022724ec;
class Unk_ov078_0227245c;
struct Unk_020868cc;
struct Unk_0201bc1c;

struct Unk_ov078_Vec {
    s32 x, y, z;
};

struct Unk_0202368c_Obj {
    u32 v[2];
};

struct Unk_020e1c64 {
    u32 v[7];
    Unk_020e1c64();
    ~Unk_020e1c64();
};

struct ChoiceList {
    s32 getResult();
};

struct Unk_ov078_022717d8_Out {
    u32 a;
    u8 b;
};

extern "C" {
void _ZN12Unk_0201347413func_020135bcEv(void *self);
void _ZN12Unk_0201347413func_020135c4Ev(void *self);
void _ZN12Unk_02013b1013func_020141b4Essh(void *self, u32 a, u32 b, u32 c);
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *self);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
void _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(void *self, s32 a, s32 b, s32 c, Unk_ov078_Vec *d, s32 e, s32 f, s32 g);
s32 _ZN12Unk_0201a33413func_0201a7e8Ev(void *self);
void _ZN12Unk_0201a8c413func_0201a8f0Ev(void *self);
BOOL _ZN12Unk_0201a8c413func_0201a968Ev(void *self);
Unk_ov078_Vec * _ZN12Unk_0201a8c413func_0201a978Ev(void *self);
void _ZN12Unk_0201a8c413func_0201a97cEP17Unk_0201a334_Vec3(void *self, Unk_ov078_Vec *v);
BOOL _ZN12Unk_0201a8c413func_0201a9a0EP18Unk_0201a334_Scenei(void *self, void *owner, s32 v);
s32 _ZN12Unk_0201acf813func_0201acfcEv(void *self);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData13func_0209865cEv(void *p);
void *_ZN12Unk_020994cc13func_02099864Ev(void *p);
void *func_0209a108(void *p);
void func_0209a10c(void *p);
u16 *_ZN12Unk_0209ada413func_0209ab94Ev(void *p);
s32 _ZN12Unk_0209ada413func_0209ad68Ev(void *p);
s32 _ZN12Unk_0209ada413func_0209abc4Ev(void *p);
s32 func_0209a05c(void *p);
s32 func_0209a0dc(void *p, void *q);
void _ZN12Unk_0209ada413func_0209abb4Eh(void *p, s32 v);
s32 func_02098ffc();
s32 func_02098eb0(u16 *p);
void func_02099014(u16 *p, s32 v);
void func_02099064(s32 v);
s32 Item_IsFurniture(u16 *p);
u32 Item_GetFurnitureIndex(u16 *p);
void _ZN12Unk_020d771013func_02014e60EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_0201442013func_02014ce4EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN16ActorTalkRequest13func_0201578cEjjj(void *p, u16 *q, s32 a, s32 b);
void _ZN12ItemPickSpec3setEii(Unk_0202368c_Obj *o, s32 a, s32 b);
void func_02063388(Unk_0202368c_Obj *o);
void ItemPick_One(u16 *out, Unk_0202368c_Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void EventWeekSlots_MarkPlayer(s32 v);
BOOL func_0202e1cc(s32 a, s32 b);
u32 func_02063b8c(u32 n);
s32 Math_AngleXZ(void *p, void *q);
BOOL NpcActor_IsFrontAngle(s32 v);
void func_020e7518(void *p);
BOOL _ZN12Unk_020d77a410getAngleToEPS_(void *p, void *q);
u32 Random_Next(void *p);
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u32 gCamera;
extern Unk_ov078_Vec gCameraLookAt;
extern s16 data_02135f44[];
s32 func_01ffcb0c(s32 a, s32 b);
void FieldPos_SnapToUnitCenter(Unk_ov078_Vec *a, Unk_ov078_Vec *b);
BOOL func_02077f40(Unk_ov078_Vec *a, s32 b);
BOOL func_0201a834(void *p);
void func_0201a900(void *out, Unk_ov078_Vec *a, Unk_ov078_Vec *b, s32 c);
void TalkRequest_EndTalkWith(void *p);
void *func_020850e0();
Unk_020868cc *func_0208516c(void *p);

extern u32 gRandom[];
extern Unk_ov078_Vec gVec3Zero;
}

struct Unk_020868cc {
    void func_020868dc(s32 a, s32 b);
};

struct TalkWindowState {
    void setNextMessage(u8 *a, void *b);
    s32 setSlot(s32 idx, void *p);
};

class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
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
    virtual void onActionTag4();
    virtual void vfunc_34();
    virtual void vfunc_38(u32 v);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov078_022717d8_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_88();
    void *func_02015aac();
    void func_02015ab0(u32 p);
    ChoiceList *getChoiceList();
    u8 pad_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    TalkWindowState *unk_3c;
    u8 pad_40[0xac - 0x40];
};

class TalkMsgRequest : public ActorTalkRequest {
public:
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void onActionTag4();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_70();
    virtual void vfunc_74();
};

class Unk_020d7710 : public TalkMsgRequest {
public:
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64_alt();
    virtual void vfunc_88();
};

class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

struct ItemId {
    u16 unk_00;
    ItemId();
    ~ItemId();
};

class Unk_ov078_0227245c : public SpNpcTalkRequest {
public:
    Unk_ov078_0227245c();
    virtual ~Unk_ov078_0227245c();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov078_022717d8_Out *out);

    void func_ov078_02271934(Unk_ov078_022724ec *owner);

    Unk_ov078_022724ec *unk_ac;
    s32 unk_b0;
    ItemId unk_b4[2];
};

#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct ThreeLayerAnimModel {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    ThreeLayerAnimModel();
    ~ThreeLayerAnimModel();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
    Unk_ov078_Vec *func_0201a978();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
};
struct Unk_0201a794 {
    u8 unk_00[0x418 - 0x3b0];
    Unk_0201a794();
    ~Unk_0201a794();
};
MEMBER(Unk_0201a194, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(Unk_02032238, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x514 - 0x4cc - 0x20];
    Unk_02088d00();
    ~Unk_02088d00();
};
struct Unk_020135e4 {
    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09[2];
    u8 unk_0b;
    Unk_020135e4();
    ~Unk_020135e4();
};
struct Unk_02019858 {
    Unk_02019858();
    ~Unk_02019858();
    BOOL func_02019790();
    s32 func_020197a8();
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    u8 unk_00[0x28];
};
struct Unk_020e06dc { u8 unk_00[8]; Unk_020e06dc(); };

struct Unk_020f4080 {
    u8 unk_00[0x558 - 0x514];
    Unk_020f4080();
    ~Unk_020f4080();
};

class Actor : public ProcBase {
public:
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_20();
    virtual BOOL preDraw();
    virtual BOOL postDraw();
};

struct Unk_020d77a4_Vec3;

class Character : public Actor {
public:
    Character();
    virtual ~Character();
    virtual BOOL preExecute();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual void vfunc_58(void *p);
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[2];
    s32 unk_98;
    u8 pad_9c[0xea - 0x9c];
};

class Unk_020d77a4 : public Character {
public:
    Unk_020d77a4() : unk_ea(0xfff1) {}
    virtual ~Unk_020d77a4();
    virtual void postCreate(s32 v);
    virtual BOOL onExecute();
    virtual BOOL onDraw();
    virtual BOOL vfunc_30();
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void getSpecies();
    virtual void setShirt();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void addMood();
    virtual s32 vfunc_a8();

    void setTalkRequest(Unk_0201bc1c *p);
    void *getPlayerActor(u32 v);

    u16 unk_ea;
    ThreeLayerAnimModel unk_ec;
    Unk_0201ad3c unk_2a0;
    Unk_02019dd8 unk_2ac;
    Unk_02016350 unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    Unk_0201a194 unk_418;
    Unk_0201a13c unk_420;
    Unk_02032238 unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    Unk_02019858 unk_564;
    Unk_02014254 unk_618;
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8() {}
    virtual ~Unk_020d8bc8();
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL preDelete();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void getSpecies();
    virtual s32 vfunc_a8();

    Unk_020e06dc unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

class Unk_ov078_022724ec : public Unk_020d8bc8 {
public:
    Unk_ov078_022724ec() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual s32 vfunc_a8();

    BOOL func_ov078_02271a08();
    BOOL func_ov078_02271a0c();
    BOOL func_ov078_02271a48();
    BOOL func_ov078_02271a64();
    BOOL func_ov078_02271ab4();
    BOOL func_ov078_02271cfc();
    BOOL func_ov078_02271eec();
    BOOL func_ov078_02271e5c(s32 *a, s32 *b);
    void func_ov078_02272030(s32 state);
    BOOL func_ov078_02271d20();
    BOOL func_ov078_02271e20(Unk_ov078_Vec *out, Unk_ov078_Vec *p);
    BOOL func_ov078_02271f24(Unk_ov078_Vec *a, Unk_ov078_Vec *b);
    BOOL func_ov078_02271f7c();
    BOOL func_ov078_02272000();
    BOOL func_ov078_02271ffc();
    BOOL func_ov078_0227202c();

    u8 unk_651;
    s32 unk_654;
    Unk_ov078_0227245c unk_658;
};

struct Unk_ov078_02272030_Ent {
    BOOL (Unk_ov078_022724ec::*enter)();
    BOOL (Unk_ov078_022724ec::*exit)();
};
typedef BOOL (Unk_ov078_022724ec::*Unk_ov078_Fn)();

struct Unk_ov078_SceneEntry {
    Unk_ov078_022724ec *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

struct FxVec3 {
    s32 x, y, z;
    FxVec3(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
    ~FxVec3();
};
struct Unk_ov078_Col {
    u8 a, b, c, d;
    Unk_ov078_Col(u8 a_, u8 b_, u8 c_, u8 d_) {
        a = a_;
        b = b_;
        c = c_;
        d = d_;
    }
};

extern "C" {
void _ZN18Unk_ov078_022724ec19func_ov078_0227202cEv();
extern void *data_ov078_022723f8[2];
void _ZN18Unk_ov078_022724ec19func_ov078_02272000Ev();
extern void *data_ov078_02272400[2];
void _ZN18Unk_ov078_022724ec19func_ov078_02271ffcEv();
extern void *data_ov078_022723e0[2];
void _ZN18Unk_ov078_022724ec19func_ov078_02271f7cEv();
extern void *data_ov078_022723c0[2];
void _ZN18Unk_ov078_022724ec19func_ov078_02271ab4Ev();
extern void *data_ov078_022723c8[2];
void _ZN18Unk_ov078_022724ec19func_ov078_02271a64Ev();
extern void *data_ov078_022723d0[2];
void _ZN18Unk_ov078_022724ec19func_ov078_02271a48Ev();
extern void *data_ov078_022723d8[2];
void _ZN18Unk_ov078_022724ec19func_ov078_02271a0cEv();
extern void *data_ov078_022723e8[2];
void _ZN18Unk_ov078_022724ec19func_ov078_02271a08Ev();
extern void *data_ov078_022723f0[2];
extern Unk_ov078_02272030_Ent data_ov078_02272608[5];
extern Unk_ov078_Col data_ov078_022725c4;
extern Unk_ov078_Col data_ov078_022725d0;
extern Unk_ov078_Col data_ov078_022725d4;
extern Unk_ov078_Col data_ov078_022725c8;
extern Unk_ov078_Col data_ov078_022725cc;
extern Unk_ov078_Col data_ov078_022725c0;
extern FxVec3 data_ov078_022725f0[2];
extern u8 data_ov078_02272408[];
extern u8 data_ov078_02272438[];
extern Unk_ov078_SceneEntry data_ov078_02272420;
Unk_ov078_022724ec *func_ov078_02272154();
}

Unk_ov078_Col data_ov078_022725c4(0x1f, 0x14, 0x14, 0x1f);
extern "C" void *data_ov078_022723e0[2] = {(void *)_ZN18Unk_ov078_022724ec19func_ov078_02271ffcEv, 0};
extern "C" void *data_ov078_022723d8[2] = {(void *)_ZN18Unk_ov078_022724ec19func_ov078_02271a48Ev, 0};
extern "C" Unk_ov078_SceneEntry data_ov078_02272420 = {func_ov078_02272154, 0x6a, 0x70, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov078_022723c0[2] = {(void *)_ZN18Unk_ov078_022724ec19func_ov078_02271f7cEv, 0};
extern "C" void *data_ov078_022723d0[2] = {(void *)_ZN18Unk_ov078_022724ec19func_ov078_02271a64Ev, 0};
Unk_ov078_Col data_ov078_022725d0(0x14, 0x14, 0x1f, 0x1f);
Unk_ov078_Col data_ov078_022725d4(0x1f, 0x1f, 0x14, 0x1f);
Unk_ov078_Col data_ov078_022725c8(0x14, 0x1f, 0x14, 0x1f);
extern "C" u8 data_ov078_02272408[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'c', 'm', 'l', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" u8 data_ov078_02272438[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'c', 'm', 'l', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" void *data_ov078_022723e8[2] = {(void *)_ZN18Unk_ov078_022724ec19func_ov078_02271a0cEv, 0};
Unk_ov078_Col data_ov078_022725cc(0x14, 0x1f, 0x1f, 0x1f);
Unk_ov078_Col data_ov078_022725c0(0x14, 0x18, 0x18, 0x1f);
Unk_ov078_02272030_Ent data_ov078_02272608[5] = {
    {*(Unk_ov078_Fn *)data_ov078_022723f8, *(Unk_ov078_Fn *)data_ov078_02272400},
    {NULL, *(Unk_ov078_Fn *)data_ov078_022723e0},
    {*(Unk_ov078_Fn *)data_ov078_022723c0, *(Unk_ov078_Fn *)data_ov078_022723c8},
    {*(Unk_ov078_Fn *)data_ov078_022723d0, *(Unk_ov078_Fn *)data_ov078_022723d8},
    {*(Unk_ov078_Fn *)data_ov078_022723e8, *(Unk_ov078_Fn *)data_ov078_022723f0},
};
extern "C" void *data_ov078_022723f8[2] = {(void *)_ZN18Unk_ov078_022724ec19func_ov078_0227202cEv, 0};
extern "C" void *data_ov078_02272400[2] = {(void *)_ZN18Unk_ov078_022724ec19func_ov078_02272000Ev, 0};
extern "C" void *data_ov078_022723f0[2] = {(void *)_ZN18Unk_ov078_022724ec19func_ov078_02271a08Ev, 0};
extern "C" void *data_ov078_022723c8[2] = {(void *)_ZN18Unk_ov078_022724ec19func_ov078_02271ab4Ev, 0};
FxVec3 data_ov078_022725f0[2] = {FxVec3(0x800, 0, 0x1000), FxVec3(-0x800, 0, 0x1000)};

extern "C" Unk_ov078_022724ec *func_ov078_02272154() {
    return new Unk_ov078_022724ec();
}

s32 Unk_ov078_022724ec::vfunc_a8() { return data_020c6cf0; }

BOOL Unk_ov078_022724ec::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov078_02271934(this);
    return TRUE;
}

BOOL Unk_ov078_022724ec::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov078_02272030(3);
    return TRUE;
}

BOOL Unk_ov078_022724ec::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    func_0208516c(func_020850e0())->func_020868dc(unk_5c, unk_64);
    return TRUE;
}

u8 *Unk_ov078_022724ec::getTexturePath() { return data_ov078_02272438; }

u8 *Unk_ov078_022724ec::getModelPath() { return data_ov078_02272408; }

BOOL Unk_ov078_022724ec::updateAct() {
    BOOL result = FALSE;
    if (data_ov078_02272608[unk_654].exit != NULL) {
        result = (this->*data_ov078_02272608[unk_654].exit)();
    }
    return result;
}

void Unk_ov078_022724ec::func_ov078_02272030(s32 state) {
    BOOL ok = TRUE;
    if (data_ov078_02272608[state].enter != NULL) {
        ok = (this->*data_ov078_02272608[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov078_022724ec::func_ov078_0227202c() { return TRUE; }

BOOL Unk_ov078_022724ec::func_ov078_02272000() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        TalkRequest_EndTalkWith(this);
        func_ov078_02272030(1);
    }
    return TRUE;
}

BOOL Unk_ov078_022724ec::func_ov078_02271ffc() { return TRUE; }

BOOL Unk_ov078_022724ec::func_ov078_02271f7c() {
    unk_651 = 0;
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN12Unk_0201347413func_020135c4Ev(&unk_558);
    _ZN12Unk_0201347413func_020135c4Ev(&unk_558);
    _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov078_022724ec::func_ov078_02271f24(Unk_ov078_Vec *a, Unk_ov078_Vec *b) {
    BOOL r = FALSE;
    BOOL f1 = FALSE;
    BOOL f2 = FALSE;
    s32 ax = a->x;
    s32 bx = b->x;
    if (bx > ax - 0x10000) {
        if (bx < ax + 0x10000) {
            f2 = TRUE;
        }
    }
    if (f2) {
        s32 bz = b->z;
        s32 az = a->z;
        if (bz > az - 0x1a000) {
            f1 = TRUE;
        }
    }
    if (f1) {
        s32 bz = b->z;
        s32 az = a->z;
        if (bz < az + 0xa000) {
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_ov078_022724ec::func_ov078_02271eec() {
    Unk_ov078_Vec *pos = (Unk_ov078_Vec *)&unk_5c;
    BOOL r = FALSE;
    if (gCamera != 0) {
        Unk_ov078_Vec v;
        v.x = gCameraLookAt.x;
        v.y = gCameraLookAt.y;
        v.z = gCameraLookAt.z;
        r = func_ov078_02271f24(&v, pos);
    }
    return r;
}

BOOL Unk_ov078_022724ec::func_ov078_02271e5c(s32 *a, s32 *b) {
    BOOL r = FALSE;
    Unk_ov078_Vec v;
    s32 i;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = 0; i < 6; i++) {
        s32 idx = ((u16)(s16)Random_Next(gRandom) >> 4) * 2;
        s32 g = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = g + unk_5c;
        g = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = g + unk_64;
        FieldPos_SnapToUnitCenter(&v, &v);
        if (func_02077f40(&v, r)) {
            *a = v.x;
            *b = v.z;
            r = TRUE;
            break;
        }
    }
    return r;
}

BOOL Unk_ov078_022724ec::func_ov078_02271e20(Unk_ov078_Vec *out, Unk_ov078_Vec *p) {
    BOOL r = FALSE;
    struct { s32 x, y, z, w; } t;
    func_0201a900(&t, (Unk_ov078_Vec *)&unk_5c, p, unk_94);
    if (func_0201a834(&t) != 1) {
        out->x = t.x;
        out->y = t.y;
        out->z = t.z;
        r = TRUE;
    }
    return r;
}

BOOL Unk_ov078_022724ec::func_ov078_02271d20() {
    Unk_02019858 *p = &unk_564;
    Unk_0201accc *q = &unk_350;
    s32 r6 = _ZN12Unk_0201a33413func_0201a7e8Ev(&unk_3a8);
    BOOL r = FALSE;
    Unk_ov078_Vec v;
    if (_ZN12Unk_0201a8c413func_0201a9a0EP18Unk_0201a334_Scenei(q, this, 1) == 0) {
        switch (r6) {
        case 3:
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r = TRUE;
            break;
        case 1:
            if (func_ov078_02271e20(&v, (Unk_ov078_Vec *)&data_ov078_022725f0[1])) {
                _ZN12Unk_0201a8c413func_0201a97cEP17Unk_0201a334_Vec3(q, &v);
            } else {
                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        case 2:
            if (func_ov078_02271e20(&v, (Unk_ov078_Vec *)&data_ov078_022725f0[0])) {
                _ZN12Unk_0201a8c413func_0201a97cEP17Unk_0201a334_Vec3(q, &v);
            } else {
                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        }
    } else {
        if (_ZN12Unk_0201a8c413func_0201a968Ev(q)) {
            _ZN12Unk_0201a8c413func_0201a8f0Ev(q);
        }
    }
    return r;
}

BOOL Unk_ov078_022724ec::func_ov078_02271cfc() {
    if (unk_98 != 0) {
        if (func_ov078_02271d20()) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov078_022724ec::func_ov078_02271ab4() {
    Unk_02019858 *p = &unk_564;
    Unk_ov078_Vec v, w;
    s32 r6 = func_ov078_02271eec();
    func_020e7518(&unk_651);
    if (r6 != 0) {
        if (func_ov078_02271cfc() == 0) {
            if (p->func_02019790() != 0) {
                if (_ZN12Unk_0201acf813func_0201acfcEv(&unk_3aa) == 2) {
                    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((Random_Next(gRandom) & 7) == 0) {
                    v.x = gVec3Zero.x;
                    v.y = gVec3Zero.y;
                    v.z = gVec3Zero.z;
                    if (func_ov078_02271e5c(&v.x, &v.z)) {
                        r6 = Math_AngleXZ(&unk_5c, &v);
                        if (NpcActor_IsFrontAngle((s16)(r6 - unk_8e))) {
                            r6 = 1;
                            if (func_02063b8c(4) == 0) {
                                r6 = 2;
                            }
                            if (r6 != unk_564.func_020197a8()) {
                                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, r6, 1, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                unk_651 = 0x64;
                            }
                        } else if (unk_564.func_020197a8() != 4) {
                            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 4, 1, v.x, v.z, 0, r6, 0, 0, data_020c6cc8, 0);
                            unk_651 = 0x50;
                        }
                    } else {
                        _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else if (unk_98 != 0) {
                if (unk_564.func_020197a8() == 1 || unk_564.func_020197a8() == 2 || unk_564.func_020197a8() == 4) {
                    if (unk_651 == 0) {
                        _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    } else {
                        Unk_ov078_Vec *q = _ZN12Unk_0201a8c413func_0201a978Ev(&unk_350);
                        w.x = q->x;
                        w.y = q->y;
                        w.z = q->z;
                        if (NpcActor_IsFrontAngle((s16)(Math_AngleXZ(&unk_5c, &w) - unk_8e)) == 0) {
                            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                        }
                    }
                }
            }
        }
    } else if (unk_98 != 0) {
        func_ov078_02272030(3);
    }
    return FALSE;
}

BOOL Unk_ov078_022724ec::func_ov078_02271a64() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_651 = 0;
    _ZN12Unk_0201347413func_020135bcEv(&unk_558);
    return TRUE;
}

BOOL Unk_ov078_022724ec::func_ov078_02271a48() {
    if (func_ov078_02271eec()) {
        func_ov078_02272030(2);
    }
    return TRUE;
}

BOOL Unk_ov078_022724ec::func_ov078_02271a0c() {
    void *p = unk_658.func_02015aac();
    s32 x = unk_8e;
    if (p != NULL) {
        x = _ZN12Unk_020d77a410getAngleToEPS_(this, p);
    }
    _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, x, 0);
    return TRUE;
}

BOOL Unk_ov078_022724ec::func_ov078_02271a08() { return TRUE; }

Unk_ov078_0227245c::Unk_ov078_0227245c() {}

Unk_ov078_0227245c::~Unk_ov078_0227245c() {}

void Unk_ov078_0227245c::func_ov078_02271934(Unk_ov078_022724ec *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_b0 = -1;
    for (s32 i = 0; i < 2; i++) {
        unk_b4[i].unk_00 = 0xfff1;
    }
}

void Unk_ov078_0227245c::vfunc_78(Unk_ov078_022717d8_Out *out) {
    u16 h;
    void *g = _ZN12Unk_020994cc13func_02099864Ev(_ZN10PlayerData13func_0209865cEv(PlayerData_GetCurrent()));
    Unk_020e1c64 o;
    out->a = (u32)"sp_npc_camel";
    if (unk_b0 == -1) {
        h = 0x13ac;
        unk_b0 = func_02098eb0(&h);
    }
    if (unk_b0 >= 0) {
        out->b = 0x14;
        return;
    }
    if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a108(g)) != 0 && _ZN12Unk_0209ada413func_0209abc4Ev(func_0209a108(g)) == 3) {
        out->b = 0;
        return;
    }
    if (!func_0202e1cc(0xb, 1)) {
        out->b = 1;
        return;
    }
    if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a108(g)) == 0) {
        out->b = 4;
        return;
    }
    if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a108(g)) != 0 && _ZN12Unk_0209ada413func_0209abc4Ev(func_0209a108(g)) == 0) {
        if (func_0209a0dc(g, &o)) {
            unk_3c->setSlot(0, &o);
        }
        out->b = 9;
        return;
    }
    if (func_02098ffc() < 0) {
        out->b = 0x12;
        return;
    }
    if (func_0209a05c(g)) {
        if (func_0209a0dc(g, &o)) {
            unk_3c->setSlot(0, &o);
        }
        out->b = 0xa;
    } else if (_ZN12Unk_0209ada413func_0209abc4Ev(func_0209a108(g)) == 1) {
        _ZN12Unk_0209ada413func_0209abb4Eh(func_0209a108(g), 2);
        out->b = 0xc;
    }
}

void Unk_ov078_0227245c::vfunc_14() {
    u8 b;
    u16 h[4];
    Unk_0202368c_Obj o1, o2;
    void *g;
    u16 *p;
    u8 msg;
    u8 *s;
    h[0] = 0xfff1;
    Unk_020e1c64 o3;
    g = _ZN12Unk_020994cc13func_02099864Ev(_ZN10PlayerData13func_0209865cEv(PlayerData_GetCurrent()));
    s = (u8 *)"sp_npc_camel";
    msg = 0;
    switch (unk_1e) {
    case 5:
    case 10:
        if (func_02098ffc() < 0) {
            msg = 0x1d;
            break;
        }
        if (unk_1e == 5) {
            func_0209a10c(g);
        }
        p = _ZN12Unk_0209ada413func_0209ab94Ev(func_0209a108(g));
        {
            BOOL r;
            if (Item_IsFurniture(p)) {
                h[3] = 0x155f;
                if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&h[3])) {
                    r = TRUE;
                } else {
                    r = FALSE;
                }
            } else {
                if (*p == 0x155f) {
                    r = TRUE;
                } else {
                    r = FALSE;
                }
            }
            if (r) {
                msg = 6;
            } else {
                msg = 7;
            }
        }
        if (unk_1e != 10) {
            break;
        }
    case 6:
    case 7:
        func_02099014(_ZN12Unk_0209ada413func_0209ab94Ev(func_0209a108(g)), 2);
        _ZN12Unk_020d771013func_02014e60EPtjjj(this, _ZN12Unk_0209ada413func_0209ab94Ev(func_0209a108(g)), 2, 5, 0);
        if (func_0209a0dc(g, &o3)) {
            unk_3c->setSlot(0, &o3);
        }
        if (unk_1e != 10) {
            msg = 8;
        } else {
            msg = 0xb;
        }
        break;
    case 0xc:
        _ZN12ItemPickSpec3setEii(&o1, 4, 0x23);
        ItemPick_One(&h[1], &o1, msg, msg, 1, 1, msg);
        unk_b4[0].unk_00 = h[1];
        func_02063388(&o1);
        _ZN16ActorTalkRequest13func_0201578cEjjj(this, &unk_b4[0].unk_00, 1, 7);
        _ZN12ItemPickSpec3setEii(&o2, 3, 0x23);
        ItemPick_One(&h[2], &o2, msg, msg, 1, 1, msg);
        unk_b4[1].unk_00 = h[2];
        func_02063388(&o2);
        _ZN16ActorTalkRequest13func_0201578cEjjj(this, &unk_b4[1].unk_00, 2, 7);
        msg = 0xd;
        break;
    case 0xe:
        _ZN12Unk_0209ada413func_0209abb4Eh(func_0209a108(g), 3);
        EventWeekSlots_MarkPlayer(0x3e);
        break;
    case 0x15:
        unk_b0 = -2;
        break;
    case 0x16:
        h[0] = 0x37e0;
        msg = 0x17;
        if (func_02063b8c(2) == 0) {
            h[0] = 0x34a8;
            msg = 0x18;
        }
        unk_b0 = -2;
        _ZN16ActorTalkRequest13func_0201578cEjjj(this, &h[0], 0, 7);
        _ZN12Unk_020d771013func_02014e60EPtjjj(this, &h[0], 0, 5, 0);
        func_02099014(&h[0], 0);
        break;
    }
    if (msg != 0) {
        b = msg;
        unk_3c->setNextMessage(&b, s);
    }
}

void Unk_ov078_0227245c::vfunc_18() {
    u8 b;
    u16 h[2];
    s32 t = getChoiceList()->getResult();
    u8 msg;
    u8 *s;
    h[0] = 0xfff1;
    s = (u8 *)"sp_npc_camel";
    msg = 0;
    switch (unk_1e) {
    case 2:
    case 4:
        if (t == 0) {
            if (func_02098ffc() < 0) {
                msg = 0x1d;
            } else {
                msg = 5;
            }
        }
        break;
    case 0xd:
    case 0x13:
        if (t == 0) {
            h[0] = unk_b4[0].unk_00;
        } else {
            h[0] = unk_b4[1].unk_00;
        }
        _ZN12Unk_020d771013func_02014e60EPtjjj(this, &h[0], 0, 5, 0);
        func_02099014(&h[0], 0);
        msg = 0xe;
        break;
    case 0x14:
        if (t == 0) {
            if (unk_b0 >= 0) {
                func_02099064(unk_b0);
                h[1] = 0x13ac;
                _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &h[1], 0, 5, 0);
            }
            msg = 0x16;
        }
        break;
    }
    if (msg != 0) {
        b = msg;
        unk_3c->setNextMessage(&b, s);
    }
}

BOOL Unk_ov078_022724ec::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov078_022724ec::vfunc_4c(s32 v) {
    switch (v) {
    case 1:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)getPlayerActor(4));
        func_ov078_02272030(0);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)getPlayerActor(4));
        func_ov078_02272030(4);
        break;
    case 0:
        func_ov078_02272030(0);
        break;
    case 8:
        func_ov078_02272030(2);
        break;
    }
}

