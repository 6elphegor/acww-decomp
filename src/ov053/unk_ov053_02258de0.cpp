#include "types.h"

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

struct ChoiceList {
    s32 getResult();
};

struct Unk_0201bc1c;
class Unk_ov053_0225a558;
class Unk_ov053_0225a4c8;

struct Unk_ov053_Vec {
    s32 x, y, z;
};

struct Unk_ov053_02258e7c_Loc : Unk_ov053_Vec {
    Unk_ov053_02258e7c_Loc() {}
};

struct Unk_ov053_02259428_Out {
    const void *unk_00;
    u8 unk_04;
};

struct Unk_ov053_02259428_Ent {
    const void *p;
    u8 v;
};

struct TalkWindowState {
    void setNextMessage(u8 *a, void *b);
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
    virtual void vfunc_78(Unk_ov053_02259428_Out *out);
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
MEMBER(Unk_02019858, 0x618 - 0x564);
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

struct ItemId {
    u16 unk_00;
    ItemId();
    ~ItemId();
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
    virtual void vfunc_4c(u32 cmd, u8 arg);
    virtual void getInteractionPos();
    virtual void acceptsInteractionOutOfRange(void *p);
    virtual BOOL vfunc_58();
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
    BOOL func_0201b9bc();
    s32 getPlayerActor(u32 v);
    s32 getAngleToPlayer(u32 v);
    s32 getAngleTo(Unk_020d77a4 *other);
    void func_0201bd9c(s32 v);
    s32 getDistanceToPlayer(u32 v);

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

class Unk_ov053_0225a4c8 : public SpNpcTalkRequest {
public:
    Unk_ov053_0225a4c8();
    virtual ~Unk_ov053_0225a4c8();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(Unk_ov053_02259428_Out *out);

    s32 func_ov053_0225911c();
    s32 func_ov053_02259568();
    void func_ov053_02259570(s32 v);
    void func_ov053_02259578(Unk_ov053_0225a558 *o);
    u8 func_ov053_02259ed4();
    u8 func_ov053_02259edc();

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ Unk_ov053_0225a558 *unk_b0;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
    /* 0xb6 */ u8 unk_b6;
    /* 0xb7 */ u8 unk_b7;
    /* 0xb8 */ u8 unk_b8;
    /* 0xb9 */ u8 unk_b9;
    /* 0xba */ u8 pad_ba[2];
};

class Unk_ov053_0225a558 : public Unk_020d8bc8 {
public:
    Unk_ov053_0225a558() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u8 arg);
    virtual BOOL vfunc_58();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    s32 func_ov053_02258e34();
    BOOL func_ov053_02258e48();
    BOOL func_ov053_02258e7c();
    BOOL func_ov053_02258ec4();
    BOOL func_ov053_02258f18();
    BOOL func_ov053_022595ec();
    BOOL func_ov053_022595f0();
    BOOL func_ov053_022595f4();
    BOOL func_ov053_022596b0();
    BOOL func_ov053_022596c0();
    BOOL func_ov053_02259784();
    BOOL func_ov053_022597bc();
    BOOL func_ov053_022598e0();
    BOOL func_ov053_02259954();
    BOOL func_ov053_02259a50();
    BOOL func_ov053_02259ab0();
    BOOL func_ov053_02259bac();
    BOOL func_ov053_02259bf0();
    BOOL func_ov053_02259c20();
    BOOL func_ov053_02259c5c();
    BOOL func_ov053_02259c60();
    BOOL func_ov053_02259c64();
    BOOL func_ov053_02259d70();
    BOOL func_ov053_02259e44();
    BOOL func_ov053_02259e70();
    BOOL func_ov053_02259ea4();
    BOOL func_ov053_02259eb8();
    void func_ov053_02259ee4(s32 state);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov053_0225a4c8 unk_658;
    /* 0x714 */ u8 unk_714;
    /* 0x715 */ u8 unk_715;
    /* 0x716 */ u8 unk_716;
    /* 0x717 */ u8 unk_717;
    /* 0x718 */ s16 unk_718;
};

struct Unk_ov053_02259ee4_Ent {
    BOOL (Unk_ov053_0225a558::*enter)();
    BOOL (Unk_ov053_0225a558::*exit)();
};

struct Unk_ov053_SceneEntry {
    Unk_ov053_0225a558 *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" {
extern const u8 data_ov053_0225a180[];
extern const u8 data_ov053_0225a184[];
extern const Unk_ov053_Vec data_ov053_0225a188;
extern const Unk_ov053_Vec data_ov053_0225a194;
extern const Unk_ov053_Vec data_ov053_0225a1a0;
extern const u8 data_ov053_0225a1ac[];
extern const Unk_ov053_Vec data_ov053_0225a1bc[2];
extern const Unk_ov053_Vec data_ov053_0225a1d4[2];
#define data_ov053_0225a1c4 ((const s32 *)((const u8 *)data_ov053_0225a1bc + 8))
#define data_ov053_0225a1dc ((const s32 *)((const u8 *)data_ov053_0225a1d4 + 8))
extern const void *data_ov053_0225a340;
extern char data_ov053_0225a3f4[];
extern u8 data_ov053_0225a404[];
extern u8 data_ov053_0225a434[];
extern Unk_ov053_SceneEntry data_ov053_0225a41c;
extern Unk_ov053_02259ee4_Ent data_ov053_0225a624[11];
#define data_ov053_0225a62c ((Unk_ov053_02259ee4_Ent *)((u8 *)data_ov053_0225a624 + 8))
Unk_ov053_0225a558 *func_ov053_0225a068();

extern volatile u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern u8 gVec3Zero[];
extern void *gCommManager;
extern u8 gTalkMsgIndexEnd[];

s32 _ZN12Unk_0201985813func_020195c8Eiijtt(void *, s32, s32, s32, u32, s32);
s32 _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *, s32, s32, s32, s32, s32, s32, s32, s32, u32, s32);
s32 _ZN12Unk_0201985813func_020197a8Ev(void *);
BOOL _ZN12Unk_0201985813func_02019790Ev(void *);
void _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3(void *self, Unk_ov053_Vec *v);
void _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(void *self, u8 a, s32 b, s32 c, void *v, s32 d, s32 e, u8 f);
void _ZN12Unk_0201a8c413func_0201a8d0Eiiii(void *self, s32 a, s32 b, s32 c, s32 d);
s32 Math_AngleXZ(void *a, void *b);
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *self);
void _ZN12Unk_02013b1013func_020141b4Essh(void *p, s32 a, s32 b, s32 c);
Unk_020d77a4 *func_02015aac(void *self);
s32 func_020e7518(void *);
void func_02034d70(u32);
void Hud_Show();
BOOL PlayerActor_IsInAction(s32 a, s32 b);
BOOL func_ov004_02224a38(s32 a);
BOOL func_ov004_0223fb64(Unk_ov053_Vec *v);
void TalkRequest_EndTalkWith(void *self);
void TalkRequest_AddPlayerTalk6(void *self, s32 a);
void *func_020b4934();
s32 func_020b4bbc(void *, s32);
void Camera_SetModeDefault();
BOOL _ZN11CommManager8isOnlineEv(void *g);
void func_0202ffb0(s32 a);
s32 func_020b50dc();
void *func_020947f0(s32 a);
s32 func_0202ff64(void *p);
BOOL TalkRequest_IsTalking(void);
s32 TalkRequest_AddPlayerTalk7(void *p, s32 a);
void FieldPos_ToUnit(s32 *bx, s32 *by, void *pos);
void *PlayerData_GetCurrent();
void *func_020850e0();
s32 func_020851bc(void *p, s32 a);
u16 *_ZN10PlayerData11getFaceItemEv(void *p);
u16 *_ZN10PlayerData6getHatEv(void *p);
void *_ZN10PlayerData13func_0209868cEv(void *p);
u32 _ZN12Unk_02087ad813func_02087c38Ev(void *p);
void *_ZN10PlayerData11getPlayerIdEv(void *p);
s32 _ZN8PlayerId9getGenderEv(void *p);
s32 func_020aa514(void *p);
s32 Hud_Hide();
s32 func_0201ade4(void *o, s32 a);
void func_0201adc8(void *o, s32 v);
void func_020851a4(void *p, s32 v);
void func_02085188(void *p, s32 v);
s32 _ZN10PlayerData12getHairStyleEv(void *p);
s32 _ZN10PlayerData12getHairColorEv(void *p);
void func_ov004_02224b78(s32 v);
void Snd_PlaySe(s32 v);
s32 func_0202e1cc(s32 a, s32 b);
s32 func_02034dd0(s32 a, s32 b, s32 c);
s32 _ZN12Unk_02097ff413func_02098044Ej(void *h, s32 v);
void _ZN12Unk_02097ff413func_0209801cEj(void *h, s32 v);
s32 func_02063b8c(s32 n);
void func_ov004_0222487c();
void _ZN12Unk_02087ad813func_02087c24Ej(void *p, u32 v);
void PlayerActor_RequestAct6F(void *v, s32 a, s32 b);
s32 func_020951b8(s32 a);
void func_ov004_022248e8(u8 *a, u8 *b);
void func_ov004_02225290();
void func_02003ddc(void *a, u32 b, u32 c, u32 d);
BOOL _ZN12Unk_0201635013func_0201622cEiPv(void *self, s32 a, void *b);
}

// Constants and tables (definition order sets the data layout)
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_02259ea4Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_022595f4Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_02259e70Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_022595f0Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_02259bacEv();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_02259c5cEv();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_022596b0Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_022596c0Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_02259784Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_022595ecEv();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_02259a50Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_02259954Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_022598e0Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_022597bcEv();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_02259ab0Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_02259bf0Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_02259c20Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_02259eb8Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_02259c60Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_02259c64Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_02259d70Ev();
extern "C" void _ZN18Unk_ov053_0225a55819func_ov053_02259e44Ev();
typedef BOOL (Unk_ov053_0225a558::*Unk_ov053_Fn)();
extern "C" void *data_ov053_0225a344[2];
extern "C" void *data_ov053_0225a34c[2];
extern "C" void *data_ov053_0225a354[2];
extern "C" void *data_ov053_0225a35c[2];
extern "C" void *data_ov053_0225a364[2];
extern "C" void *data_ov053_0225a36c[2];
extern "C" void *data_ov053_0225a374[2];
extern "C" void *data_ov053_0225a37c[2];
extern "C" void *data_ov053_0225a384[2];
extern "C" void *data_ov053_0225a38c[2];
extern "C" void *data_ov053_0225a394[2];
extern "C" void *data_ov053_0225a39c[2];
extern "C" void *data_ov053_0225a3a4[2];
extern "C" void *data_ov053_0225a3ac[2];
extern "C" void *data_ov053_0225a3b4[2];
extern "C" void *data_ov053_0225a3bc[2];
extern "C" void *data_ov053_0225a3c4[2];
extern "C" void *data_ov053_0225a3cc[2];
extern "C" void *data_ov053_0225a3d4[2];
extern "C" void *data_ov053_0225a3dc[2];
extern "C" void *data_ov053_0225a3e4[2];
extern "C" void *data_ov053_0225a3ec[2];

extern "C" void *data_ov053_0225a374[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_022596b0Ev, 0};
extern "C" Unk_ov053_SceneEntry data_ov053_0225a41c = {func_ov053_0225a068, 0x61, 0x68, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov053_0225a39c[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_02259954Ev, 0};
extern "C" void *data_ov053_0225a38c[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_022595ecEv, 0};
extern "C" const void *data_ov053_0225a340 = data_ov053_0225a3f4;
extern "C" const Unk_ov053_Vec data_ov053_0225a1a0 = {0x300, 0x199, 0x199};
extern "C" void *data_ov053_0225a3a4[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_022598e0Ev, 0};
extern "C" void *data_ov053_0225a344[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_02259ea4Ev, 0};
extern "C" const Unk_ov053_Vec data_ov053_0225a1d4[2] = {{0xe800, 0, 0x15800}, {0xc000, 0, 0x15000}};
extern "C" const u8 data_ov053_0225a184[] = {1, 4, 2, 6};
extern "C" const Unk_ov053_Vec data_ov053_0225a188 = {0xb000, 0, 0x1d000};
extern "C" void *data_ov053_0225a34c[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_022595f4Ev, 0};
extern "C" void *data_ov053_0225a354[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_02259e70Ev, 0};
extern "C" u8 data_ov053_0225a434[] = "npc_sp/model/poo_tex.nsbtx";
extern "C" void *data_ov053_0225a3e4[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_02259d70Ev, 0};
extern "C" void *data_ov053_0225a3dc[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_02259c64Ev, 0};
extern "C" char data_ov053_0225a3f4[] = "sp_npc_barber";
extern "C" const u8 data_ov053_0225a180[] = {0, 3, 5, 7};
extern "C" void *data_ov053_0225a3c4[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_02259c20Ev, 0};
extern "C" void *data_ov053_0225a3bc[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_02259bf0Ev, 0};
extern "C" void *data_ov053_0225a3b4[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_02259ab0Ev, 0};
extern "C" void *data_ov053_0225a35c[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_022595f0Ev, 0};
extern "C" void *data_ov053_0225a394[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_02259a50Ev, 0};
extern "C" void *data_ov053_0225a364[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_02259bacEv, 0};
extern "C" void *data_ov053_0225a3cc[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_02259eb8Ev, 0};
extern "C" u8 data_ov053_0225a404[] = "npc_sp/model/poo.nsbmd";
extern "C" const Unk_ov053_Vec data_ov053_0225a1bc[2] = {{0xe000, 0, 0x15000}, {0xf000, 0, 0x17000}};
extern "C" void *data_ov053_0225a3ec[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_02259e44Ev, 0};
extern "C" Unk_ov053_02259ee4_Ent data_ov053_0225a624[11] = {
    {*(Unk_ov053_Fn *)data_ov053_0225a3cc, *(Unk_ov053_Fn *)data_ov053_0225a344},
    {*(Unk_ov053_Fn *)data_ov053_0225a354, *(Unk_ov053_Fn *)data_ov053_0225a3ec},
    {*(Unk_ov053_Fn *)data_ov053_0225a3e4, *(Unk_ov053_Fn *)data_ov053_0225a3dc},
    {*(Unk_ov053_Fn *)data_ov053_0225a3d4, *(Unk_ov053_Fn *)data_ov053_0225a36c},
    {*(Unk_ov053_Fn *)data_ov053_0225a3c4, *(Unk_ov053_Fn *)data_ov053_0225a3bc},
    {*(Unk_ov053_Fn *)data_ov053_0225a364, *(Unk_ov053_Fn *)data_ov053_0225a3b4},
    {*(Unk_ov053_Fn *)data_ov053_0225a394, *(Unk_ov053_Fn *)data_ov053_0225a39c},
    {*(Unk_ov053_Fn *)data_ov053_0225a3a4, *(Unk_ov053_Fn *)data_ov053_0225a3ac},
    {*(Unk_ov053_Fn *)data_ov053_0225a384, *(Unk_ov053_Fn *)data_ov053_0225a37c},
    {*(Unk_ov053_Fn *)data_ov053_0225a374, *(Unk_ov053_Fn *)data_ov053_0225a34c},
    {*(Unk_ov053_Fn *)data_ov053_0225a35c, *(Unk_ov053_Fn *)data_ov053_0225a38c},
};
extern "C" void *data_ov053_0225a36c[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_02259c5cEv, 0};
extern "C" const u8 data_ov053_0225a1ac[] = {3, 0xb, 2, 0xa, 6, 0xe, 4, 0xc, 7, 0xf, 0, 8, 1, 9, 5, 0xd};
extern "C" void *data_ov053_0225a3ac[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_022597bcEv, 0};
extern "C" void *data_ov053_0225a3d4[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_02259c60Ev, 0};
extern "C" void *data_ov053_0225a384[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_02259784Ev, 0};
extern "C" const Unk_ov053_Vec data_ov053_0225a194 = {0x10000, 0, 0x1b000};

Unk_ov053_0225a558 *func_ov053_0225a068() { return new Unk_ov053_0225a558; }

BOOL Unk_ov053_0225a558::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov053_02259578(this);
    func_0201bd9c(0x100);
    const Unk_ov053_Vec *d = &data_ov053_0225a1a0;
    _ZN12Unk_0201a8c413func_0201a8d0Eiiii(&unk_350, 2, d->x, d->y, d->z);
    return TRUE;
}

BOOL Unk_ov053_0225a558::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    void *g = gCommManager;
    if (_ZN11CommManager8isOnlineEv(g) == 0) {
        func_0202ffb0(0);
    }
    unk_718 = 0;
    unk_4cc.unk_1c |= 2;
    unk_715 = 0;
    if (_ZN11CommManager8isOnlineEv(g)) {
        func_ov053_02259ee4(1);
        return TRUE;
    }
    if (func_020b50dc() == 0x1d) {
        func_ov053_02259ee4(0);
    } else {
        func_ov053_02259ee4(1);
    }
    return TRUE;
}

u8 *Unk_ov053_0225a558::getTexturePath() { return data_ov053_0225a434; }

u8 *Unk_ov053_0225a558::getModelPath() { return data_ov053_0225a404; }

BOOL Unk_ov053_0225a558::updateAct() {
    BOOL r = FALSE;
    if (data_ov053_0225a62c[unk_654].enter) {
        r = (this->*data_ov053_0225a624[unk_654].exit)();
    }
    return r;
}

void Unk_ov053_0225a558::func_ov053_02259ee4(s32 state) {
    BOOL ok = TRUE;
    if (data_ov053_0225a624[state].enter) {
        ok = (this->*data_ov053_0225a624[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

u8 Unk_ov053_0225a4c8::func_ov053_02259edc() {
    return ((u8 *)this)[0xb6];
}

u8 Unk_ov053_0225a4c8::func_ov053_02259ed4() {
    return ((u8 *)this)[0xb7];
}

BOOL Unk_ov053_0225a558::func_ov053_02259eb8() {
    unk_658.func_ov053_02259570(0);
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259ea4() {
    TalkRequest_AddPlayerTalk6(this, 0);
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259e70() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259e44() {
    if (func_ov053_02258f18()) {
        return TRUE;
    }
    if (func_ov053_02258ec4()) {
        return TRUE;
    }
    func_ov053_02258e7c();
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259d70() {
    _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    Unk_020d77a4 *p = (Unk_020d77a4 *)unk_658.func_02015aac();
    s32 r4 = 0;
    if (p) {
        r4 = getAngleTo(p);
    }
    if (unk_658.func_ov053_02259568() == 5) {
        Unk_ov053_Vec v;
        Unk_ov053_Vec *pv = (Unk_ov053_Vec *)&unk_5c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        v.y += 0x2000;
        func_ov004_0223fb64(&v);
        unk_717 = 0x1f;
    }
    if (unk_658.func_ov053_02259568() == 5 || unk_658.func_ov053_02259568() == 8 || unk_658.func_ov053_02259568() == 10) {
        _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, r4, 1);
        return TRUE;
    } else {
        _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, r4, 0);
        return TRUE;
    }
}

BOOL Unk_ov053_0225a558::func_ov053_02259c64() {
    if (func_020e7518(&unk_717) == 1) {
        func_02034d70(0xe);
    }
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        s32 prev = unk_654;
        Hud_Show();
        if (unk_658.func_ov053_02259568() == 4 || unk_658.func_ov053_02259568() == 3) {
            func_ov053_02259ee4(7);
        } else if (unk_658.func_ov053_02259568() == 5 && func_ov053_02258e48()) {
            unk_658.func_ov053_02259570(9);
            func_ov053_02259ee4(6);
            return TRUE;
        } else {
            if (PlayerActor_IsInAction(0x28, 4)) {
                if (func_ov004_02224a38(0)) {
                    TalkRequest_EndTalkWith(this);
                    func_ov053_02259ee4(3);
                }
            } else if (unk_658.func_ov053_02259568() == 10) {
                if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
                    func_020b4bbc(func_020b4934(), 0);
                    func_ov053_02259ee4(3);
                }
            } else {
                TalkRequest_EndTalkWith(this);
                func_ov053_02259ee4(3);
            }
        }
        if (prev != unk_654) {
            if (unk_658.func_ov053_02259568() == 5) {
                Camera_SetModeDefault();
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259c60() { return TRUE; }

BOOL Unk_ov053_0225a558::func_ov053_02259c5c() { return TRUE; }

BOOL Unk_ov053_0225a558::func_ov053_02259c20() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 3, 1, 0, 0, 0, unk_718, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259bf0() {
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 3) {
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            func_ov053_02259ee4(1);
        }
    }
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259bac() {
    unk_715 = 0;
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 3, 1, 0, 0, 0, 0x4000, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259ab0() {
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 6) {
        const Unk_ov053_Vec *r = &data_ov053_0225a1bc[unk_715];
        Unk_ov053_Vec v;
        v.x = r->x;
        v.y = r->y;
        v.z = r->z;
        _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3(&unk_350, &v);
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            unk_715++;
            u32 off = *(volatile u8 *)&unk_715 * 0xc;
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 6, 1, *(s32 *)((u8 *)data_ov053_0225a1bc + off), *(s32 *)((u8 *)data_ov053_0225a1c4 + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
            if (unk_715 >= 2) {
                func_ov053_02259ee4(4);
            }
        }
    }
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 3) {
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            u32 off = unk_715;
            off = off * 0xc;
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 6, 1, *(s32 *)((u8 *)data_ov053_0225a1bc + off), *(s32 *)((u8 *)data_ov053_0225a1c4 + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259a50() {
    unk_715 = 0;
    Unk_ov053_Vec v;
    const Unk_ov053_Vec *p = data_ov053_0225a1d4;
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    s32 r = Math_AngleXZ(&unk_5c, &v);
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 3, 1, 0, 0, 0, r, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259954() {
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 6) {
        const Unk_ov053_Vec *r = &data_ov053_0225a1d4[unk_715];
        Unk_ov053_Vec v;
        v.x = r->x;
        v.y = r->y;
        v.z = r->z;
        _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3(&unk_350, &v);
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            unk_715++;
            u32 off = *(volatile u8 *)&unk_715 * 0xc;
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 6, 1, *(s32 *)((u8 *)data_ov053_0225a1d4 + off), *(s32 *)((u8 *)data_ov053_0225a1dc + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
            if (unk_715 >= 2) {
                func_ov053_02259ee4(2);
            }
        }
    }
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 3) {
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            u32 off = unk_715;
            off = off * 0xc;
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 6, 1, *(s32 *)((u8 *)data_ov053_0225a1d4 + off), *(s32 *)((u8 *)data_ov053_0225a1dc + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_022598e0() {
    _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    unk_715 = 0;
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 3, 1, 0, 0, 0, 0x4000, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_022597bc() {
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 6) {
        const Unk_ov053_Vec *r = &data_ov053_0225a1bc[unk_715];
        Unk_ov053_Vec v;
        v.x = r->x;
        v.y = r->y;
        v.z = r->z;
        _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3(&unk_350, &v);
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            unk_715++;
            u32 t = data_020c6cc8;
            u32 off = *(volatile u8 *)&unk_715 * 0xc;
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 6, 1, *(s32 *)((u8 *)data_ov053_0225a1bc + off), *(s32 *)((u8 *)data_ov053_0225a1c4 + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
            if (unk_715 >= 2) {
                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 3, 1, 0, 0, 0, -0x4000, 0, 0, t, 0);
            }
        }
    }
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 3) {
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            u32 off = unk_715;
            if (off >= 2) {
                func_ov053_02259ee4(8);
            } else {
                off = off * 0xc;
                _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 6, 1, *(s32 *)((u8 *)data_ov053_0225a1bc + off), *(s32 *)((u8 *)data_ov053_0225a1c4 + off), 0x800, 0, 0, 0, data_020c6cc8, 0);
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_02259784() {
    unk_716 = 0x64;
    _ZN12Unk_0201985813func_020195c8Eiijtt(&unk_564, 1, 0xf1, 1, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_022596c0() {
    if (func_020e7518(&unk_716) == 0) {
        unk_658.func_ov053_02259570(5);
        func_ov053_02259ee4(2);
    }
    if (unk_716 == 0x55) {
        u8 out[2];
        out[1] = unk_658.func_ov053_02259ed4();
        out[0] = unk_658.func_ov053_02259edc();
        func_ov004_022248e8(&out[0], &out[1]);
        func_ov004_02225290();
        func_02003ddc(&unk_514, 0x41, 0x7f, 0);
    }
    if (_ZN12Unk_0201635013func_0201622cEiPv(&unk_334, 0xf1, &unk_2a0)) {
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_022596b0() {
    unk_714 = 0;
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_022595f4() {
    PlayerData_GetCurrent();
    Unk_ov053_02258e7c_Loc v;
    Unk_ov053_Vec *src = (Unk_ov053_Vec *)func_020947f0(4);
    *(Unk_ov053_Vec *)&v = *src;
    s32 bx1 = 0, by1 = 0, bx2 = 0, by2 = 0;
    Unk_ov053_02258e7c_Loc w;
    *(Unk_ov053_Vec *)&w = data_ov053_0225a194;
    s32 dx = w.x, dy = w.y, dz = w.z;
    FieldPos_ToUnit(&bx2, &by2, &w);
    FieldPos_ToUnit(&bx1, &by1, &v);
    switch (unk_714) {
    case 0:
        if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
            Camera_SetModeDefault();
            unk_714 = 1;
        }
        break;
    case 1: {
        Unk_ov053_02258e7c_Loc u;
        u.x = dx;
        u.y = dy;
        u.z = dz;
        PlayerActor_RequestAct6F(&u, 0x266, 4);
        unk_714 = 2;
        break;
    }
    case 2:
        if (func_020951b8(4) == 0) {
            TalkRequest_EndTalkWith(this);
            func_ov053_02259ee4(4);
        }
        break;
    }
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_022595f0() {
    return TRUE;
}

BOOL Unk_ov053_0225a558::func_ov053_022595ec() {
    return TRUE;
}

Unk_ov053_0225a4c8::Unk_ov053_0225a4c8() {}

Unk_ov053_0225a4c8::~Unk_ov053_0225a4c8() {}

void Unk_ov053_0225a4c8::func_ov053_02259578(Unk_ov053_0225a558 *o) {
    vfunc_08();
    unk_b0 = o;
    unk_ac = 0xe;
}

void Unk_ov053_0225a4c8::func_ov053_02259570(s32 v) {
    unk_ac = v;
}

// ---- member small functions (defined late so callers keep bl) ----

s32 Unk_ov053_0225a4c8::func_ov053_02259568() {
    return unk_ac;
}

void Unk_ov053_0225a4c8::vfunc_78(Unk_ov053_02259428_Out *out) {
    void *p = PlayerData_GetCurrent();
    static Unk_ov053_02259428_Ent tbl[14] = {
        {data_ov053_0225a340, 0x43}, {data_ov053_0225a340, 0},    {data_ov053_0225a340, 2},
        {data_ov053_0225a340, 0x40}, {data_ov053_0225a340, 0x3e}, {data_ov053_0225a340, 0xd},
        {data_ov053_0225a340, 0x3d}, {data_ov053_0225a340, 0x45}, {data_ov053_0225a340, 0x42},
        {data_ov053_0225a340, 0x41}, {data_ov053_0225a340, 0x46}, {data_ov053_0225a340, 5},
        {data_ov053_0225a340, 6},    {data_ov053_0225a340, 7},
    };
    if (func_ov053_02259568() == 4) {
        out->unk_00 = tbl[unk_ac].p;
        out->unk_04 = func_ov053_0225911c();
    } else {
        if (func_ov053_02259568() != 0 && func_ov053_02259568() != 3 && func_ov053_02259568() != 5 &&
            func_ov053_02259568() != 7 && func_ov053_02259568() != 8 && func_ov053_02259568() != 9 &&
            func_ov053_02259568() != 10) {
            if (unk_b0->func_ov053_02258e34() == 0) {
                if (func_0202e1cc(0x13, 0) == 0) {
                    if (_ZN12Unk_02097ff413func_02098044Ej(p, 0xb) == 0) {
                        func_ov053_02259570(1);
                        _ZN12Unk_02097ff413func_0209801cEj(p, 0xb);
                    } else {
                        func_ov053_02259570(2);
                    }
                } else {
                    func_ov053_02259570(func_02063b8c(3) + 0xb);
                }
            } else {
                func_ov053_02259570(6);
            }
        }
        if (unk_ac >= 0 && unk_ac < 0xe) {
            out->unk_04 = tbl[unk_ac].v;
            out->unk_00 = tbl[unk_ac].p;
        }
    }
}

void Unk_ov053_0225a4c8::vfunc_74() {
    u32 t = unk_1e;
    if (t == 0xe || t == 0x37) {
        if ((t == 0xe && unk_b5 == 1) || (t == 0x37 && unk_b5 == 2)) {
            func_ov004_0222487c();
            _ZN12Unk_02087ad813func_02087c24Ej(_ZN10PlayerData13func_0209868cEv(PlayerData_GetCurrent()), 1);
        }
        unk_b5 = unk_b5 + 1;
    }
}

void Unk_ov053_0225a4c8::vfunc_70() {
    if (unk_1e == 0xc) {
        func_02034dd0(0xe, 0x46, 0);
    }
}

void Unk_ov053_0225a4c8::vfunc_14() {
    void *p = PlayerData_GetCurrent();
    const void *tbl = data_ov053_0225a340;
    u32 msg = 0xff;
    switch (unk_1e) {
    case 0xd:
        if (unk_b6 == unk_b8 && unk_b7 == unk_b9) {
            msg = 0x37;
        } else {
            msg = 0xe;
        }
        unk_b5 = 0;
        break;
    case 0x17:
        unk_b4 = 1;
        break;
    case 0x18:
        unk_b4 = 0;
        break;
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36: {
        s32 r = _ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(p));
        if (unk_b4 != 0) {
            if (r == 0) {
                r = 1;
            } else {
                r = 0;
            }
        }
        const u8 *q = &data_ov053_0225a1ac[(unk_1e - 0x2f) * 2];
        unk_b6 = q[r];
        break;
    }
    case 0x40:
        func_ov004_02224b78(0);
        Snd_PlaySe(0x43);
        msg = func_ov053_0225911c();
        break;
    case 0x42:
        unk_b0->func_ov053_02259ee4(9);
        break;
    case 0xe:
    case 0x37:
        func_0202e1cc(0x13, 1);
        func_02085188(func_020850e0(), 7);
        unk_3c->setNextMessage(gTalkMsgIndexEnd, 0);
        break;
    case 0x41:
        func_ov004_02224b78(1);
        Snd_PlaySe(0x44);
        break;
    case 0x45:
        break;
    }
    if (msg != 0xff) {
        u8 m = msg;
        unk_3c->setNextMessage(&m, (void *)tbl);
    }
}

void Unk_ov053_0225a4c8::vfunc_18() {
    void *p = PlayerData_GetCurrent();
    s32 arg = getChoiceList()->getResult();
    const void *tbl = data_ov053_0225a340;
    u32 msg = 0xff;
    switch (unk_1e) {
    case 1:
    case 2:
    case 4:
        if (arg == 0) {
            Hud_Hide();
            msg = 8;
        }
        break;
    case 8:
        if (arg == 0) {
            if (func_0201ade4(unk_b0, 0xbb8)) {
                func_0201adc8(unk_b0, 0xbb8);
                msg = 0x3c;
                func_020851a4(func_020850e0(), 7);
                unk_b6 = 0;
                unk_b7 = 0;
                unk_b8 = _ZN10PlayerData12getHairStyleEv(p);
                unk_b9 = _ZN10PlayerData12getHairColorEv(p);
            } else {
                msg = 0x3f;
            }
        }
        break;
    case 9:
    case 10:
        if (arg != 4) {
            unk_b7 = data_ov053_0225a184[arg];
            msg = 0xc;
        }
        break;
    case 11:
    case 0x38:
        if (arg != 4) {
            unk_b7 = data_ov053_0225a180[arg];
            msg = 0xc;
        }
        break;
    }
    if (msg != 0xff) {
        u8 m = msg;
        unk_3c->setNextMessage(&m, (void *)tbl);
    }
}

s32 Unk_ov053_0225a4c8::func_ov053_0225911c() {
    void *p = PlayerData_GetCurrent();
    if (_ZN12Unk_02087ad813func_02087c38Ev(_ZN10PlayerData13func_0209868cEv(p)) >= 0x10) {
        if (_ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(p)) == 0) {
            return 0x15;
        }
        return 0x16;
    }
    return 0x3e;
}

BOOL Unk_ov053_0225a558::vfunc_48() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov053_0225a558::vfunc_58() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov053_0225a558::vfunc_4c(u32 cmd, u8 arg) {
    PlayerData_GetCurrent();
    unk_558.unk_08 = arg;
    switch (cmd) {
    case 3:
        func_ov053_02259ee4(10);
        break;
    case 1:
        unk_558.unk_08 = arg;
        unk_658.vfunc_08();
        unk_658.func_02015ab0(getPlayerActor(4));
        if (unk_658.func_ov053_02259568() == 4 || unk_658.func_ov053_02259568() == 3) {
            func_ov053_02259ee4(6);
        } else {
            func_ov053_02259ee4(2);
        }
        break;
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(getPlayerActor(4));
        func_ov053_02259ee4(2);
        break;
    case 8:
        if (unk_658.func_ov053_02259568() == 9) {
            unk_658.func_ov053_02259570(14);
            func_ov053_02259ee4(5);
        } else if (unk_658.func_ov053_02259568() != 10) {
            unk_658.func_ov053_02259570(14);
            func_ov053_02259ee4(4);
        }
        break;
    }
}

BOOL Unk_ov053_0225a558::func_ov053_02258f18() {
    if (TalkRequest_IsTalking()) {
        return FALSE;
    }
    if (func_ov053_02258e34() == 0) {
        return FALSE;
    }
    PlayerData_GetCurrent();
    Unk_ov053_02258e7c_Loc v;
    Unk_ov053_Vec *src = (Unk_ov053_Vec *)func_020947f0(4);
    *(Unk_ov053_Vec *)&v = *src;
    s32 bx = 0, by = 0;
    FieldPos_ToUnit(&bx, &by, &v);
    if ((PlayerActor_IsInAction(0x25, 4) || PlayerActor_IsInAction(0x28, 4)) && TalkRequest_AddPlayerTalk7(this, 0)) {
        s32 f = 0;
        s32 x = bx;
        if (*(volatile s32 *)&bx == 4 && by == 0xb) {
            f = 1;
        }
        if (f != 0 || (x == 5 && by == 0xb)) {
            if (func_ov053_02258e48()) {
                unk_658.func_ov053_02259570(3);
            } else {
                unk_658.func_ov053_02259570(4);
            }
        } else {
            unk_658.func_ov053_02259570(7);
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov053_0225a558::func_ov053_02258ec4() {
    if (func_ov053_02258e34() == 0) {
        return FALSE;
    }
    Unk_ov053_02258e7c_Loc v;
    Unk_ov053_Vec *src = (Unk_ov053_Vec *)func_020947f0(4);
    *(Unk_ov053_Vec *)&v = *src;
    if (v.z > data_ov053_0225a188.z) {
        unk_658.func_ov053_02259570(8);
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov053_0225a558::func_ov053_02258e7c() {
    Unk_ov053_02258e7c_Loc v;
    Unk_ov053_Vec *src = (Unk_ov053_Vec *)func_020947f0(4);
    *(Unk_ov053_Vec *)&v = *src;
    if (func_0202ff64(&v)) {
        unk_658.func_ov053_02259570(10);
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov053_0225a558::func_ov053_02258e48() {
    void *p = PlayerData_GetCurrent();
    if (*_ZN10PlayerData11getFaceItemEv(p) != 0xfff1 || *_ZN10PlayerData6getHatEv(p) != 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

s32 Unk_ov053_0225a558::func_ov053_02258e34() {
    return func_020851bc(func_020850e0(), 7);
}


extern "C" void *data_ov053_0225a37c[2] = {(void *)_ZN18Unk_ov053_0225a55819func_ov053_022596c0Ev, 0};
