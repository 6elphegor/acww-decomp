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
class Unk_ov079_02272ac4;
class Unk_ov079_02272a34;

struct ChoiceList {
    s32 getResult();
};

struct Unk_0202368c_Obj {
    u32 v[2];
};

struct Unk_020e1c64 {
    u32 v[8];
    Unk_020e1c64();
    ~Unk_020e1c64();
};

struct Unk_ov079_0227160c_Out {
    u8 *a;
    u8 b;
};

extern "C" {
void _ZN12Unk_0201442013func_02014a4cEv(void *p);
void _ZN12Unk_020d771013func_02014e60EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_0201442013func_02014ce4EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN16ActorTalkRequest13func_0201578cEjjj(void *p, u16 *q, s32 a, s32 b);
void _ZN12Unk_020d771013func_0201517cEjjj(void *p, BOOL (*cb)(u16 *, s32), u32 a, u32 b);
void _ZN12Unk_020d771013func_020151d0Ei(void *p, s32 v);
void _ZN12Unk_020d771013func_02014f74Ev(void *p);
void _ZN16ActorTalkRequest13func_02015958Eijiii(void *p, s32 a, u32 b, s32 c, s32 d, s32 e);
void _ZN16ActorTalkRequest13func_020157e8Ejj(void *p, void *q, u32 a);
BOOL _ZN12Unk_020d77a410getAngleToEPS_(void *p, void *q);
s32 _ZN8PlayerId13func_02094218Ev(void *p);
s32 _ZN8PlayerId13func_020941e8EPS_(void *p, void *q);
s32 _ZN10VillagerId7isValidEv(void *p);
void _ZN10VillagerId7getNameEj(void *p, void *q);
void *_ZN12Unk_0208581013func_020858acEv(void *p);
void *_ZN12Unk_0208581013func_0208586cEv(void *p);
s32 _ZN12Unk_0208581013func_02085810Ev(void *p);
void func_02085818(u16 *out, void *p);
void func_02085820(void *p, u16 *q);
void _ZN12Unk_0208581013func_02085814Ei(void *p, s32 v);
void _ZN12Unk_0208581013func_020858b0EP17Unk_02085810_Base(void *p, void *q);
void _ZN12Unk_0208581013func_02085900Ej(void *p, s32 v);
void _ZN12Unk_02087ad813func_02087b94Ei(void *p, s32 v);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData13func_0209865cEv(void *p);
void *_ZN10PlayerData13func_0209868cEv(void *p);
void *_ZN10PlayerData11getPlayerIdEv(void *p);
void _ZN8SaveData7setFlagEj(void *p, s32 v);
void _ZN12ItemPickSpec3setEii(Unk_0202368c_Obj *o, s32 a, s32 b);
void ItemPick_One(u16 *out, Unk_0202368c_Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02063388(Unk_0202368c_Obj *o);
void TalkRequest_EndTalkWith(void *p);
void func_020947c0(u16 *out, void *p);
void *func_02094348();
void func_0209d498(void *p);
s32 func_02098eb0(u16 *p);
s32 func_02098ffc();
void func_02099064(s32 v);
BOOL func_0202e1cc(s32 a, s32 b);
BOOL func_0206ed18();
s32 func_0206ed38();
s32 func_02085618(u16 *p);
s32 memcmp(void *a, void *b, u32 n);
u32 func_02063b8c(u32 n);
void func_02085784(void *g, u32 a);
u32 func_02060e24(u32 v);
s32 func_0202c908(u16 *a, s32 *b, s32 *c, s32 d, void *tbl, s32 *arr, s32 cnt);
s32 SaveVillagers_PickRandomExcept(void *p, u32 a, u32 b);
void *_ZN12VillagerData13getVillagerIdEv();
void _ZN12Unk_0208581013func_02085870EP16Unk_02085810_Rec(void *g, void *p);
void func_02053848(void *p, s32 a, s32 b);
void _ZN12Unk_0201635013func_0201610cEP16Unk_02015fe0_Objiiiiti(void *p, void *owner, s32 a, s32 b, s32 s0, s32 s1, s32 s2, s32 s3);
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *self);
void _ZN12Unk_02013b1013func_020141b4Essh(void *self, u32 a, u32 b, u32 c);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
extern u16 data_020c6cc8;
extern u8 data_021ed24c[];
extern u8 gSaveData[];
extern u8 data_021dfd8c[];
extern u32 __ptmf_null[];
}

struct TalkWindowState {
    s32 setNextMessage(u8 *a, void *b);
    s32 setSlot(s32 idx, void *p);
    void setNamedSlot(s32 idx, void *p, u32 val);
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
    virtual void vfunc_78(Unk_ov079_0227160c_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
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
};

class SpNpcTalkRequest : public Unk_020d7710 {
public:
    SpNpcTalkRequest();
    virtual ~SpNpcTalkRequest();
};

class Unk_ov079_02272a34 : public SpNpcTalkRequest {
public:
    typedef void (Unk_ov079_02272a34::*Fn)();

    Unk_ov079_02272a34();
    virtual ~Unk_ov079_02272a34();
    virtual void vfunc_08();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov079_0227160c_Out *out);
    virtual void vfunc_84();

    void func_ov079_0227163c(Unk_ov079_02272ac4 *owner);
    void func_ov079_02271718();
    void func_ov079_02271d2c();
    void func_ov079_02271d34();
    void func_ov079_02271ec8(s32 idx);
    void func_ov079_02271ed8(s32 idx);
    void func_ov079_02271ee8(Fn *dst, s32 idx);

    Unk_ov079_02272ac4 *unk_ac;
    Fn unk_b0;
    Fn unk_b8;
    u16 unk_c0;
    u8 pad_c2[2];
    s32 unk_c4;
};
#define MEMBER(name, size) \
    struct name { \
        u8 unk_00[size]; \
        name(); \
        ~name(); \
    }
struct Unk_020dbd74 {
    u8 pad_00[0xa4];
    s32 unk_a4;
    u8 pad_a8[0x2a0 - 0xec - 0xa8];
    Unk_020dbd74();
    ~Unk_020dbd74();
};
MEMBER(Unk_0201ad3c, 0xc);
MEMBER(Unk_02019dd8, 0x334 - 0x2ac);
MEMBER(Unk_02016350, 0x1c);
struct Unk_0201accc {
    u8 unk_00[0x3a8 - 0x350];
    Unk_0201accc();
    ~Unk_0201accc();
};
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 {
    u8 unk_00[6];
    Unk_0201ad18();
};
MEMBER(Unk_0201a794, 0x418 - 0x3b0);
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
    void func_020196b4(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
    u8 unk_00[0x618 - 0x564];
};
struct Unk_02014254 {
    Unk_02014254();
    ~Unk_02014254();
    BOOL func_02014220();
    void func_020141b4(u32 a, u32 b, u32 c);
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
    Unk_020dbd74 unk_ec;
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

struct Unk_ov079_Vec3 {
    s32 x, y, z;
};

struct Unk_ov079_Rgba {
    u8 r, g, b, a;
    Unk_ov079_Rgba(u8 r_, u8 g_, u8 b_, u8 a_) {
        r = r_;
        g = g_;
        b = b_;
        a = a_;
    }
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

class Unk_ov079_02272ac4 : public Unk_020d8bc8 {
public:
    Unk_ov079_02272ac4() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual s32 vfunc_a8();

    BOOL func_ov079_02271fcc();
    BOOL func_ov079_02271fd0();
    BOOL func_ov079_02271ffc();
    BOOL func_ov079_02272000();
    BOOL func_ov079_02272004();
    BOOL func_ov079_02272040();
    BOOL func_ov079_0227205c();
    BOOL func_ov079_022720ac();
    BOOL func_ov079_022722f4();
    BOOL func_ov079_02272318();
    BOOL func_ov079_02272418(Unk_ov079_Vec3 *out, void *in);
    BOOL func_ov079_02272454(s32 *x, s32 *z);
    BOOL func_ov079_022724e4();
    BOOL func_ov079_0227251c(Unk_ov079_Vec3 *a, Unk_ov079_Vec3 *b);
    BOOL func_ov079_02272574();
    void func_ov079_022725f4(s32 state);

    u8 unk_651;
    u8 pad_652[2];
    s32 unk_654;
    Unk_ov079_02272a34 unk_658;
};

struct Unk_ov079_022725f4_Ent {
    BOOL (Unk_ov079_02272ac4::*enter)();
    BOOL (Unk_ov079_02272ac4::*exit)();
};

struct Unk_ov079_SceneEntry {
    Unk_ov079_02272ac4 *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" {
extern Unk_ov079_022725f4_Ent data_ov079_02272be4[5];
extern u8 data_ov079_022729e0[];
extern u8 data_ov079_02272a10[];
extern Unk_ov079_SceneEntry data_ov079_022729f8;
Unk_ov079_02272ac4 *func_ov079_0227271c();
BOOL func_ov079_02271ebc(u16 *p, s32 x);
}

extern "C" {
void func_0203ffa4(u32 a);
u32 func_02099048(s32 v);
BOOL func_02099014(u16 *p, u32 a);
void *_ZN10PlayerData13func_020986d4Ev(void *p);
void *_ZN14PlayerPatterns13func_02071c5cEv(void *p);
u32 _ZN12Unk_02071c1c13func_02071c1cEj(void *p, u32 v);
void *_ZN14PlayerPatterns13func_02071c88Eh(void *p, u32 v);
void *_ZN7Pattern13func_02071e04Ev(void *p);
void _ZN12Unk_02071ed013func_02071f70EPv(void *p, void *q);
u16 *_ZN10PlayerData6getHatEv(void *p);
u16 *_ZN10PlayerData8getShirtEv(void *p);
u16 *_ZN10PlayerData11getHeldItemEv(void *p);
void PlayerActor_RequestWearShirtAlt(u16 *p);
void PlayerActor_RequestWearHatAlt(u16 *p);
void PlayerActor_RequestAct3F(u16 *p);
void func_02070e4c(u32 a, u32 b, u32 c, u32 d, u32 e);
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 func_0204b9e8(u16 *p);
void _ZN8ItemNameC1Ev(void *p);
void _ZN8ItemNameD1Ev(void *p);
void _ZN12Unk_0201347413func_020135bcEv(void *p);
void _ZN12Unk_0201347413func_020135c4Ev(void *p);
void func_020e7518(void *p);
s32 Random_Next(void *p);
s32 func_01ffcb0c(s32 a, s32 b);
BOOL _ZN12Unk_0201985813func_02019790Ev(void *p);
s32 _ZN12Unk_0201985813func_020197a8Ev(void *p);
s32 _ZN12Unk_0201acf813func_0201acfcEv(void *p);
BOOL NpcActor_IsFrontAngle(s16 a);
s32 Math_AngleXZ(void *a, void *b);
void *_ZN12Unk_0201a8c413func_0201a978Ev(void *p);
BOOL _ZN12Unk_0201a8c413func_0201a9a0EP18Unk_0201a334_Scenei(void *a, void *b, u32 c);
s32 _ZN12Unk_0201a33413func_0201a7e8Ev(void *p);
void _ZN12Unk_0201a8c413func_0201a97cEP17Unk_0201a334_Vec3(void *a, void *b);
BOOL _ZN12Unk_0201a8c413func_0201a968Ev(void *a);
void _ZN12Unk_0201a8c413func_0201a8f0Ev(void *a);
void func_0201a900(void *out, void *base, void *off, s32 ang);
BOOL func_0201a834(void *pos);
void func_0204edd8(void *a, void *b);
BOOL func_02077f40(void *v, s32 a);
void _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(void *p, u32 a, u32 b, void *c, void *d, u32 e, u32 f, u32 g);
BOOL func_02040c88();
void *func_020850e0();
void func_0208516c(void *p);
void _ZN12Unk_020868cc13func_020868e4Ev();
void _ZN12Unk_0201442013func_020146bcEv(void *p);
void _ZN12Unk_0201442013func_02014918Ev(void *p);
void _ZN12Unk_020d771013func_02015170Ejj(void *p, u32 a, u32 b);
extern u32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u8 gRandom[];
extern u8 gVec3Zero[];
extern u32 gCamera;
extern u8 gCameraLookAt[];
extern s16 data_02135f44[];
extern FxVec3 data_ov079_02272bb4[2];
}

struct Unk_ov079_02271718_Buf {
    u8 t;
    u8 pad_01;
    u16 v[16];
};

static inline BOOL Unk_ov079_Rng(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov079_02271718_Chk(Unk_ov079_02272a34 *o, u16 *slot, u16 val) {
    BOOL r;
    if (Item_IsFurniture(&o->unk_c0)) {
        *slot = val;
        if (Item_GetFurnitureIndex(&o->unk_c0) == Item_GetFurnitureIndex(slot)) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        if (o->unk_c0 == val) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov079_02272ac4 *func_ov079_0227271c() {
    return new Unk_ov079_02272ac4();
}

s32 Unk_ov079_02272ac4::vfunc_a8() { return data_020c6cf0; }

BOOL Unk_ov079_02272ac4::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov079_0227163c(this);
    return TRUE;
}

BOOL Unk_ov079_02272ac4::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov079_022725f4(3);
    return TRUE;
}

BOOL Unk_ov079_02272ac4::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    if (func_02040c88() == 0) {
        func_0208516c(func_020850e0());
        _ZN12Unk_020868cc13func_020868e4Ev();
    }
    return TRUE;
}

u8 *Unk_ov079_02272ac4::getTexturePath() { return data_ov079_02272a10; }

u8 *Unk_ov079_02272ac4::getModelPath() { return data_ov079_022729e0; }

BOOL Unk_ov079_02272ac4::updateAct() {
    BOOL result = FALSE;
    if (data_ov079_02272be4[unk_654].exit != NULL) {
        result = (this->*data_ov079_02272be4[unk_654].exit)();
    }
    return result;
}

void Unk_ov079_02272ac4::func_ov079_022725f4(s32 state) {
    BOOL ok = TRUE;
    if (data_ov079_02272be4[state].enter != NULL) {
        ok = (this->*data_ov079_02272be4[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov079_02272ac4::func_ov079_02272574() {
    unk_651 = 0;
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN12Unk_0201347413func_020135c4Ev(&unk_558);
    _ZN12Unk_0201347413func_020135c4Ev(&unk_558);
    _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, NULL, gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov079_02272ac4::func_ov079_0227251c(Unk_ov079_Vec3 *a, Unk_ov079_Vec3 *b) {
    BOOL r = FALSE;
    BOOL f2 = FALSE;
    BOOL f1 = FALSE;
    s32 ax = a->x;
    s32 bx = b->x;
    if (bx > ax - 0x10000) {
        if (bx < ax + 0x10000) {
            f1 = TRUE;
        }
    }
    if (f1) {
        if (b->z > a->z - 0x1a000) {
            f2 = TRUE;
        }
    }
    if (f2) {
        if (b->z < a->z + 0xa000) {
            r = TRUE;
        }
    }
    return r;
}

BOOL Unk_ov079_02272ac4::func_ov079_022724e4() {
    Unk_ov079_Vec3 *b = (Unk_ov079_Vec3 *)&unk_5c;
    BOOL r = FALSE;
    Unk_ov079_Vec3 v;
    if (gCamera != 0) {
        v.x = ((Unk_ov079_Vec3 *)gCameraLookAt)->x;
        v.y = ((Unk_ov079_Vec3 *)gCameraLookAt)->y;
        v.z = ((Unk_ov079_Vec3 *)gCameraLookAt)->z;
        r = func_ov079_0227251c(&v, b);
    }
    return r;
}

BOOL Unk_ov079_02272ac4::func_ov079_02272454(s32 *px, s32 *pz) {
    Unk_ov079_Vec3 v;
    BOOL r = FALSE;
    s32 i;
    v.x = r;
    v.y = r;
    v.z = r;
    for (i = 0; i < 6; i++) {
        s32 idx = ((u16)(s16)Random_Next(gRandom) >> 4) * 2;
        s32 t = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = t + unk_5c;
        t = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = t + unk_64;
        func_0204edd8(&v, &v);
        if (func_02077f40(&v, r)) {
            *px = v.x;
            *pz = v.z;
            r = TRUE;
            break;
        }
    }
    return r;
}

BOOL Unk_ov079_02272ac4::func_ov079_02272418(Unk_ov079_Vec3 *out, void *in) {
    BOOL r = FALSE;
    Unk_ov079_Vec3 v;
    func_0201a900(&v, &unk_5c, in, unk_94);
    if (func_0201a834(&v) != 1) {
        out->x = v.x;
        out->y = v.y;
        out->z = v.z;
        r = TRUE;
    }
    return r;
}

BOOL Unk_ov079_02272ac4::func_ov079_02272318() {
    void *p564 = &unk_564;
    void *p350 = &unk_350;
    s32 k = _ZN12Unk_0201a33413func_0201a7e8Ev(&unk_3a8);
    BOOL r = FALSE;
    Unk_ov079_Vec3 v;
    if (!_ZN12Unk_0201a8c413func_0201a9a0EP18Unk_0201a334_Scenei(p350, this, 1)) {
        switch (k) {
        case 3:
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p564, r, 1, r, r, r, r, r, r, data_020c6cc8, r);
            r = TRUE;
            break;
        case 1:
            if (func_ov079_02272418(&v, &data_ov079_02272bb4[1])) {
                _ZN12Unk_0201a8c413func_0201a97cEP17Unk_0201a334_Vec3(p350, &v);
            } else {
                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p564, r, 1, r, r, r, r, r, r, data_020c6cc8, r);
            }
            r = TRUE;
            break;
        case 2:
            if (func_ov079_02272418(&v, data_ov079_02272bb4)) {
                _ZN12Unk_0201a8c413func_0201a97cEP17Unk_0201a334_Vec3(p350, &v);
            } else {
                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p564, r, 1, r, r, r, r, r, r, data_020c6cc8, r);
            }
            r = TRUE;
            break;
        }
    } else if (_ZN12Unk_0201a8c413func_0201a968Ev(p350)) {
        _ZN12Unk_0201a8c413func_0201a8f0Ev(p350);
    }
    return r;
}

BOOL Unk_ov079_02272ac4::func_ov079_022722f4() {
    if (unk_98 != 0) {
        if (func_ov079_02272318()) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL Unk_ov079_02272ac4::func_ov079_022720ac() {
    void *p = &unk_564;
    BOOL a = func_ov079_022724e4();
    func_020e7518(&unk_651);
    if (a) {
        if (func_ov079_022722f4() == 0) {
            if (_ZN12Unk_0201985813func_02019790Ev(p)) {
                if (_ZN12Unk_0201acf813func_0201acfcEv(&unk_3aa) == 2) {
                    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                } else if ((Random_Next(gRandom) & 7) == 0) {
                    Unk_ov079_Vec3 v;
                    v.x = ((Unk_ov079_Vec3 *)gVec3Zero)->x;
                    v.y = ((Unk_ov079_Vec3 *)gVec3Zero)->y;
                    v.z = ((Unk_ov079_Vec3 *)gVec3Zero)->z;
                    if (func_ov079_02272454(&v.x, &v.z)) {
                        s32 t = Math_AngleXZ(&unk_5c, &v);
                        if (NpcActor_IsFrontAngle((s16)(t - unk_8e))) {
                            t = 1;
                            if (func_02063b8c(4) == 0) {
                                t = 2;
                            }
                            if (t != _ZN12Unk_0201985813func_020197a8Ev(&unk_564)) {
                                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, t, 1, v.x, v.z, 0, 0, 0, 0, data_020c6cc8, 0);
                                unk_651 = 0x64;
                            }
                        } else if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) != 4) {
                            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 4, 1, v.x, v.z, 0, t, 0, 0, data_020c6cc8, 0);
                            unk_651 = 0x50;
                        }
                    } else {
                        _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    }
                } else {
                    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                }
            } else if (unk_98 != 0) {
                if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 1 || _ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 2 || _ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 4) {
                    if (unk_651 == 0) {
                        _ZN12Unk_0201985813func_020196b4Ejiiissiitt(p, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
                    } else {
                        Unk_ov079_Vec3 *q = (Unk_ov079_Vec3 *)_ZN12Unk_0201a8c413func_0201a978Ev(&unk_350);
                        Unk_ov079_Vec3 w;
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
        func_ov079_022725f4(3);
    }
    return FALSE;
}

BOOL Unk_ov079_02272ac4::func_ov079_0227205c() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_651 = 0;
    _ZN12Unk_0201347413func_020135bcEv(&unk_558);
    return TRUE;
}

BOOL Unk_ov079_02272ac4::func_ov079_02272040() {
    if (func_ov079_022724e4()) {
        func_ov079_022725f4(2);
    }
    return TRUE;
}

BOOL Unk_ov079_02272ac4::func_ov079_02272004() {
    void *p = unk_658.func_02015aac();
    s32 x = unk_8e;
    if (p != NULL) {
        x = _ZN12Unk_020d77a410getAngleToEPS_(this, p);
    }
    _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, x, 0);
    return TRUE;
}

BOOL Unk_ov079_02272ac4::func_ov079_02272000() { return TRUE; }

BOOL Unk_ov079_02272ac4::func_ov079_02271ffc() { return TRUE; }

BOOL Unk_ov079_02272ac4::func_ov079_02271fd0() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        TalkRequest_EndTalkWith(this);
        func_ov079_022725f4(1);
    }
    return TRUE;
}

BOOL Unk_ov079_02272ac4::func_ov079_02271fcc() { return TRUE; }

void Unk_ov079_02272a34::vfunc_84() {
    if (unk_b0 != NULL) {
        (this->*unk_b0)();
        Fn t = *(Fn *)__ptmf_null;
        unk_b0 = t;
        if (unk_b8 != NULL) {
            unk_b0 = unk_b8;
            unk_b8 = t;
        }
    }
}


// Named pointer-to-member constants of the static tables (definition order sets the data layout)
extern "C" {
void _ZN18Unk_ov079_02272a3419func_ov079_02271d34Ev();
extern void *data_ov079_02272980[2];
void _ZN18Unk_ov079_02272a3419func_ov079_02271d2cEv();
extern void *data_ov079_02272988[2];
void _ZN18Unk_ov079_02272ac419func_ov079_02272000Ev();
extern void *data_ov079_02272990[2];
void _ZN18Unk_ov079_02272ac419func_ov079_02272004Ev();
extern void *data_ov079_02272998[2];
void _ZN18Unk_ov079_02272a3419func_ov079_02271718Ev();
extern void *data_ov079_022729a0[2];
void _ZN18Unk_ov079_02272ac419func_ov079_02271fd0Ev();
extern void *data_ov079_022729a8[2];
void _ZN18Unk_ov079_02272ac419func_ov079_02271fccEv();
extern void *data_ov079_022729b0[2];
void _ZN18Unk_ov079_02272ac419func_ov079_02272574Ev();
extern void *data_ov079_022729b8[2];
void _ZN18Unk_ov079_02272ac419func_ov079_022720acEv();
extern void *data_ov079_022729c0[2];
void _ZN18Unk_ov079_02272ac419func_ov079_0227205cEv();
extern void *data_ov079_022729c8[2];
void _ZN18Unk_ov079_02272ac419func_ov079_02271ffcEv();
extern void *data_ov079_022729d0[2];
void _ZN18Unk_ov079_02272ac419func_ov079_02272040Ev();
extern void *data_ov079_022729d8[2];
}
typedef BOOL (Unk_ov079_02272ac4::*Unk_ov079_02272ac4_Fn)();

extern "C" void *data_ov079_022729a0[2] = {(void *)_ZN18Unk_ov079_02272a3419func_ov079_02271718Ev, 0};

extern "C" void *data_ov079_02272990[2] = {(void *)_ZN18Unk_ov079_02272ac419func_ov079_02272000Ev, 0};

extern "C" void *data_ov079_02272988[2] = {(void *)_ZN18Unk_ov079_02272a3419func_ov079_02271d2cEv, 0};

extern "C" u8 data_ov079_02272a10[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'w', 'r', 'l', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};

extern "C" Unk_ov079_SceneEntry data_ov079_022729f8 = {func_ov079_0227271c, 0x6b, 0x71, 2, 0x5000, 0x5000, 0x3e800};

extern "C" Unk_ov079_Rgba data_ov079_02272b80(31, 20, 20, 31);

extern "C" Unk_ov079_Rgba data_ov079_02272b8c(20, 20, 31, 31);

extern "C" void *data_ov079_022729b8[2] = {(void *)_ZN18Unk_ov079_02272ac419func_ov079_02272574Ev, 0};

extern "C" void *data_ov079_022729d8[2] = {(void *)_ZN18Unk_ov079_02272ac419func_ov079_02272040Ev, 0};

extern "C" Unk_ov079_Rgba data_ov079_02272b94(31, 31, 20, 31);

extern "C" Unk_ov079_Rgba data_ov079_02272b98(20, 31, 20, 31);

extern "C" Unk_ov079_Rgba data_ov079_02272b88(20, 31, 31, 31);

extern "C" void *data_ov079_022729c0[2] = {(void *)_ZN18Unk_ov079_02272ac419func_ov079_022720acEv, 0};

extern "C" Unk_ov079_Rgba data_ov079_02272b90(20, 24, 24, 31);

extern "C" Unk_ov079_022725f4_Ent data_ov079_02272be4[5] = {
    {*(Unk_ov079_02272ac4_Fn *)data_ov079_022729d0, *(Unk_ov079_02272ac4_Fn *)data_ov079_022729a8},
    {NULL, *(Unk_ov079_02272ac4_Fn *)data_ov079_022729b0},
    {*(Unk_ov079_02272ac4_Fn *)data_ov079_022729b8, *(Unk_ov079_02272ac4_Fn *)data_ov079_022729c0},
    {*(Unk_ov079_02272ac4_Fn *)data_ov079_022729c8, *(Unk_ov079_02272ac4_Fn *)data_ov079_022729d8},
    {*(Unk_ov079_02272ac4_Fn *)data_ov079_02272998, *(Unk_ov079_02272ac4_Fn *)data_ov079_02272990},
};

extern "C" void *data_ov079_022729a8[2] = {(void *)_ZN18Unk_ov079_02272ac419func_ov079_02271fd0Ev, 0};

extern "C" u8 data_ov079_022729e0[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'w', 'r', 'l', '.', 'n', 's', 'b', 'm', 'd', 0};

extern "C" void *data_ov079_02272980[2] = {(void *)_ZN18Unk_ov079_02272a3419func_ov079_02271d34Ev, 0};

extern "C" void *data_ov079_02272998[2] = {(void *)_ZN18Unk_ov079_02272ac419func_ov079_02272004Ev, 0};


void Unk_ov079_02272a34::func_ov079_02271ee8(Fn *dst, s32 idx) {
    static Fn tbl[3] = {*(Fn *)data_ov079_02272980, *(Fn *)data_ov079_02272988, *(Fn *)data_ov079_022729a0};
    *dst = tbl[idx];
}

extern "C" void *data_ov079_022729c8[2] = {(void *)_ZN18Unk_ov079_02272ac419func_ov079_0227205cEv, 0};

extern "C" void *data_ov079_022729b0[2] = {(void *)_ZN18Unk_ov079_02272ac419func_ov079_02271fccEv, 0};

extern "C" void *data_ov079_022729d0[2] = {(void *)_ZN18Unk_ov079_02272ac419func_ov079_02271ffcEv, 0};

extern "C" FxVec3 data_ov079_02272bb4[2] = {FxVec3(0x800, 0, 0x1000), FxVec3(-0x800, 0, 0x1000)};


void Unk_ov079_02272a34::func_ov079_02271ed8(s32 idx) {
    func_ov079_02271ee8(&unk_b0, idx);
}

void Unk_ov079_02272a34::func_ov079_02271ec8(s32 idx) {
    func_ov079_02271ee8(&unk_b8, idx);
}

BOOL func_ov079_02271ebc(u16 *p, s32 x) {
    if (x == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov079_02272a34::func_ov079_02271d34() {
    TalkWindowState *m = unk_3c;
    u8 v = 1;
    unk_c4 = -1;
    if (func_0206ed18()) {
        unk_c4 = func_0206ed38();
        unk_c0 = func_02099048(unk_c4);
        v = 2;
        BOOL f = FALSE;
        u16 c = unk_c0;
        if (c >= 0x12e8 && c <= 0x131f) {
            f = TRUE;
        }
        if (f || (c >= 0x1531 && c <= 0x153a) || (c >= 0x1518 && c <= 0x151c) || (c >= 0x1542 && c <= 0x1546) ||
            (c >= 0x1548 && c <= 0x1548) || (c >= 0x153b && c <= 0x1541)) {
            v = 3;
        }
        BOOL g = FALSE;
        c = unk_c0;
        if (c >= 0x136a && c <= 0x136a) {
            g = TRUE;
        }
        if (g || (c >= 0x1373 && c <= 0x1373) || (c >= 0x1375 && c <= 0x1375) || (c >= 0x1377 && c <= 0x1377) ||
            (c >= 0x1379 && c <= 0x1379) || (c >= 0x137b && c <= 0x137b)) {
            v = 0xb;
            unk_c4 = -1;
        }
        if (unk_c4 >= 0) {
            func_02099064(unk_c4);
            unk_c4 = -1;
        }
        _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &unk_c0, 0, 4, 0);
        func_ov079_02271ec8(1);
    } else {
        _ZN12Unk_020d771013func_02014f74Ev(this);
    }
    m->setNextMessage(&v, (u8 *)"sp_npc_walrus");
}

void Unk_ov079_02272a34::func_ov079_02271d2c() {
    _ZN12Unk_020d771013func_02014f74Ev(this);
}

void Unk_ov079_02272a34::func_ov079_02271718() {
    TalkWindowState *m = unk_3c;
    Unk_ov079_02271718_Buf buf;
    u32 r4;
    buf.t = 0xd;
    if (func_0206ed18()) {
        void *g = PlayerData_GetCurrent();
        u32 a0 = func_0206ed38();
        u32 r6 = _ZN12Unk_02071c1c13func_02071c1cEj(_ZN14PlayerPatterns13func_02071c5cEv(_ZN10PlayerData13func_020986d4Ev(g)), a0);
        r4 = 0;
        if (Unk_ov079_02271718_Chk(this, &buf.v[4], 0x131f)) {
            r4 = 0x15;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[5], 0x12ff)) {
            r4 = 0x16;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[6], 0x12f6)) {
            r4 = 0x17;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[7], 0x12f8)) {
            r4 = 0x18;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[8], 0x12fc)) {
            r4 = 0x19;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[9], 0x1309)) {
            r4 = 0x1a;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[10], 0x1312)) {
            r4 = 0x1b;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[11], 0x131c) ||
                   Unk_ov079_02271718_Chk(this, &buf.v[12], 0x131d) ||
                   Unk_ov079_02271718_Chk(this, &buf.v[13], 0x131e)) {
            r4 = 0x1d;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[14], 0x1302)) {
            r4 = 0x1e;
        } else if (Unk_ov079_02271718_Chk(this, &buf.v[15], 0x1303)) {
            r4 = 0x1f;
        } else {
            BOOL f = FALSE;
            u32 v = unk_c0;
            if (v >= 0x1548 && v <= 0x1548) {
                f = TRUE;
            }
            if (f) {
                r4 = 0xb;
            } else if (v >= 0x1542 && v <= 0x1546) {
                r4 = 8;
            } else if (v >= 0x1531 && v <= 0x153a) {
                r4 = 0xa;
            } else if (func_0204b9e8(&unk_c0) == 0) {
                r4 = (u8)func_02063b8c(8);
            } else if (func_0204b9e8(&unk_c0) == 1) {
                r4 = (u8)(func_02063b8c(9) + 0xc);
            } else if (func_0204b9e8(&unk_c0) == 2) {
                r4 = 0x1c;
            } else if (Unk_ov079_Rng(&unk_c0, 0x1518, 0x151c)) {
                r4 = 9;
            }
        }
        func_02070e4c(7, r4, 9, r6, 1);
        buf.t = 5;
        buf.v[0] = 0x3530;
        _ZN12Unk_020d771013func_02014e60EPtjjj(this, &buf.v[0], 0, 5, 0);
        u32 a, b, c;
        if (r6 < 8) {
            a = (u16)(r6 + 0x12a8);
        } else {
            a = 0x12a8;
        }
        if (r6 < 8) {
            b = (u16)(r6 + 0x1429);
        } else {
            b = 0x1429;
        }
        if (r6 < 8) {
            c = (u16)(r6 + 0x13a0);
        } else {
            c = 0x13a0;
        }
        u32 x = *_ZN10PlayerData8getShirtEv(g);
        u32 y = *_ZN10PlayerData6getHatEv(g);
        u32 z = *_ZN10PlayerData11getHeldItemEv(g);
        if (a == x) {
            if (Unk_ov079_Rng(_ZN10PlayerData8getShirtEv(g), 0x12a8, 0x12af)) {
                buf.v[1] = a;
                PlayerActor_RequestWearShirtAlt(&buf.v[1]);
            }
        }
        if (b == y) {
            if (Unk_ov079_Rng(_ZN10PlayerData6getHatEv(g), 0x1429, 0x1430)) {
                buf.v[2] = b;
                PlayerActor_RequestWearHatAlt(&buf.v[2]);
            }
        }
        if (c == z) {
            if (Unk_ov079_Rng(_ZN10PlayerData11getHeldItemEv(g), 0x13a0, 0x13a7)) {
                buf.v[3] = c;
                PlayerActor_RequestAct3F(&buf.v[3]);
            }
        }
        void *h = _ZN14PlayerPatterns13func_02071c88Eh(_ZN10PlayerData13func_020986d4Ev(g), r6);
        u32 obj[9];
        _ZN8ItemNameC1Ev(obj);
        _ZN12Unk_02071ed013func_02071f70EPv(_ZN7Pattern13func_02071e04Ev(h), obj);
        unk_3c->setNamedSlot(1, obj, 7);
        _ZN8ItemNameD1Ev(obj);
    }
    m->setNextMessage(&buf.t, (u8 *)"sp_npc_walrus");
}

Unk_ov079_02272a34::Unk_ov079_02272a34() {
    unk_c0 = 0xfff1;
}

Unk_ov079_02272a34::~Unk_ov079_02272a34() {}

void Unk_ov079_02272a34::vfunc_08() {
    ActorTalkRequest::vfunc_08();
    unk_c4 = -1;
    unk_c0 = 0xfff1;
    Fn t = *(Fn *)__ptmf_null;
    unk_b0 = t;
    unk_b8 = t;
}

void Unk_ov079_02272a34::func_ov079_0227163c(Unk_ov079_02272ac4 *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_c0 = 0xfff1;
    unk_c4 = -1;
}

void Unk_ov079_02272a34::vfunc_78(Unk_ov079_0227160c_Out *out) {
    out->a = (u8 *)"sp_npc_walrus";
    if (!func_0202e1cc(0xa, 0)) {
        out->b = 0;
    } else {
        out->b = func_02063b8c(3) + 6;
    }
}

void Unk_ov079_02272a34::vfunc_10() {
    if (unk_1e == 0xf) {
        _ZN12Unk_0201442013func_020146bcEv(this);
    }
}

void Unk_ov079_02272a34::vfunc_14() {
    u8 *const str = (u8 *)"sp_npc_walrus";
    u8 r = 0xff;
    u8 v;
    switch (unk_1e) {
    case 3:
        r = 0xf;
        break;
    case 2:
        _ZN12Unk_0201442013func_02014a4cEv(this);
        break;
    case 15:
        r = 4;
        if (Unk_ov079_Rng(&unk_c0, 0x153b, 0x1541)) {
            unk_c0 = 0x13ac;
            if (func_02063b8c(2)) {
                unk_c0 = 0x3530;
            }
            r = 9;
            _ZN16ActorTalkRequest13func_0201578cEjjj(this, &unk_c0, 0, 7);
        }
        func_0203ffa4(0x41);
        break;
    case 14:
        _ZN12Unk_020d771013func_02015170Ejj(this, 0xa, 0);
        _ZN12Unk_020d771013func_020151d0Ei(this, 2);
        func_ov079_02271ed8(2);
        break;
    case 11:
        _ZN12Unk_0201442013func_02014918Ev(this);
        break;
    case 9:
        if (func_02099014(&unk_c0, 0)) {
            _ZN12Unk_020d771013func_02014e60EPtjjj(this, &unk_c0, 0, 5, 0);
        }
        r = 0xa;
        break;
    case 5:
    case 10:
    case 13:
        func_0202e1cc(0xa, 1);
        break;
    }
    if (r != 0xff) {
        v = r;
        unk_3c->setNextMessage(&v, str);
    }
}

void Unk_ov079_02272a34::vfunc_18() {
    u8 v;
    s32 t = getChoiceList()->getResult();
    u8 *const str = (u8 *)"sp_npc_walrus";
    u8 r = 0xff;
    switch (unk_1e) {
    case 0:
        if (t == 0) {
            _ZN12Unk_020d771013func_0201517cEjjj(this, func_ov079_02271ebc, 0xd, 1);
            _ZN12Unk_020d771013func_020151d0Ei(this, 0);
            func_ov079_02271ed8(0);
        }
        break;
    case 4:
        if (t == 0) {
            r = 0xe;
        }
        break;
    }
    if (r != 0xff) {
        v = r;
        unk_3c->setNextMessage(&v, str);
    }
}

BOOL Unk_ov079_02272ac4::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov079_02272ac4::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        func_ov079_022725f4(0);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)getPlayerActor(4));
        func_ov079_022725f4(4);
        break;
    case 8:
        func_ov079_022725f4(2);
        break;
    }
}

