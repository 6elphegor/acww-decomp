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

// Real (mangled) names of other modules' functions that the unit calls as plain functions taking the object first.
#define func_02098044 _ZN12Unk_02097ff413func_02098044Ej
#define func_0209801c _ZN12Unk_02097ff413func_0209801cEj
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define func_02014f38 _ZN12Unk_020d771013func_02014f38Ej
#define func_02014f74 _ZN12Unk_020d771013func_02014f74Ev
#define func_02014198 _ZN12Unk_02013b1013func_02014198Ehh
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_020195c8 _ZN12Unk_0201985813func_020195c8Eiijtt
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_0201ad34 _ZN12Unk_0201ad2013func_0201ad34Ei
#define func_02015e48 _ZN12Unk_02015b8c13func_02015e48Ej
#define func_0201a6c0 _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih
#define func_0201a7e8 _ZN12Unk_0201a33413func_0201a7e8Ev
#define func_0201acfc _ZN12Unk_0201acf813func_0201acfcEv
#define func_0201a9a0 _ZN12Unk_0201a8c413func_0201a9a0EP18Unk_0201a334_Scenei
#define func_0201a968 _ZN12Unk_0201a8c413func_0201a968Ev
#define func_0201a8f0 _ZN12Unk_0201a8c413func_0201a8f0Ev
#define func_0201a97c _ZN12Unk_0201a8c413func_0201a97cEP17Unk_0201a334_Vec3
#define func_0201a978 _ZN12Unk_0201a8c413func_0201a978Ev
#define func_020135c4 _ZN12Unk_0201347413func_020135c4Ev
#define func_02086eb0 _ZN12Unk_02086c0413func_02086eb0Ev
#define func_02086ec4 _ZN12Unk_02086c0413func_02086ec4EP17Unk_02086ec4_Vec3
#define func_02086edc _ZN12Unk_02086c0413func_02086edcEv
#define Unk_020d77a4_getPlayerActor _ZN12Unk_020d77a414getPlayerActorEj
#define Unk_020d77a4_getAngleToPlayer _ZN12Unk_020d77a416getAngleToPlayerEj
#define Unk_ov075_0227188c_CallA() func_020196b4(r4, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0)
#define Unk_020d77a4_getAngleTo _ZN12Unk_020d77a410getAngleToEPS_

class Unk_ov075_022723bc;
class Unk_ov075_0227232c;
struct Unk_ov075_022714e4_Out;

struct Unk_ov075_Vec3 {
    s32 x, y, z;
};

struct Unk_ov075_Vec4 {
    s32 v[4];
};

struct Unk_ov075_022714e4_Out {
    const char *unk_00;
    u8 unk_04;
};

extern "C" {
void *PlayerData_GetCurrent();
s32 ChoiceList_getResult();
s32 func_02098044(void *p, s32 a);
s32 func_0209801c(void *p, s32 a);
s32 func_02063b8c(s32 a);
BOOL func_0202e1cc(s32 a, s32 b);
void func_02014f38(void *self, s32 a);
s32 func_02014f74(void *self);
BOOL func_02014220(void *self);
void func_02014198(void *self, s32 a, s32 b);
void func_020141b4(void *self, s32 a, s32 b, s32 c);
void TalkRequest_EndTalkWith(void *self);
void func_020195c8(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_020196b4(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j);
void func_0201ad34(void *p, s32 v);
s32 func_02015e48(void *p, s32 a);
s32 func_02019790(void *p);
s32 func_020197a8(void *p);
void func_0201a6c0(void *self, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
s32 func_0201acfc(void *p);
s32 func_0201a7e8(void *p);
s32 func_0201a9a0(void *p, void *q, s32 a);
s32 func_0201a968(void *p);
void func_0201a8f0(void *p);
void func_0201a97c(void *p, void *q);
Unk_ov075_Vec3 *func_0201a978(void *p);
void func_0201a900(void *out, void *a, void *b, s32 c);
s32 func_0201a834(void *p);
s32 Math_AngleXZ(void *a, void *b);
BOOL NpcActor_IsFrontAngle(s16 a);
u32 Unk_020d77a4_getPlayerActor(void *p, s32 n);
u32 Unk_020d77a4_getAngleToPlayer(void *p, s32 n);
s32 Unk_020d77a4_getAngleTo(void *self, void *a);
void func_020e7518(void *p);
s32 Random_Next(void *p);
s32 func_01ffcb0c(s32 a, s32 b);
void func_0204edd8(void *out, void *in);
s32 func_02077f40(void *v, s32 a);
void func_020135c4(void *p);
void *func_020850e0();
void *func_02085174(void *p);
s32 func_02086eb0(void *p);
void func_02086ec4(void *p, void *q);
void func_02086edc(void *p);
s32 func_02040c88();
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern s32 data_020c6cf0;
extern u8 gVec3Zero[];
extern u8 gRandom[];
extern void *gCamera;
extern Unk_ov075_Vec3 gCameraLookAt;
extern s16 data_02135f44[];

void func_ov075_02271e78(void *self, s32 state);
s32 func_ov075_02271ccc(void *self, void *a, void *b);
}

struct TalkWindowState {
    u32 unk_00;
    s32 unk_04;
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
    virtual void vfunc_78(Unk_ov075_022714e4_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    void *func_02015aac();
    void func_02015ab0(u32 p);
    void getChoiceList();
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

class Unk_ov075_0227232c : public SpNpcTalkRequest {
public:
    Unk_ov075_0227232c();
    virtual ~Unk_ov075_0227232c();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov075_022714e4_Out *out);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov075_02271524(void *owner);
    void func_ov075_02271590();
    void func_ov075_02271704(s32 v);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb4 */ u8 *unk_b4;
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
MEMBER(Unk_0201accc, 0x3a8 - 0x350);
struct Unk_0201a8bc { u8 unk_00[2]; Unk_0201a8bc(); };
struct Unk_0201ad18 { u8 unk_00[6]; Unk_0201ad18(); };
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
    u8 pad_00[9];
    u8 unk_09;
    u8 pad_0a[2];
    Unk_020135e4();
    ~Unk_020135e4();
};
struct Unk_02019858 {
    Unk_02019858();
    ~Unk_02019858();
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
struct Unk_0201bc1c;

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
    s32 unk_68, unk_6c, unk_70;
    u8 pad_74[0x8e - 0x74];
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

class Unk_ov075_022723bc : public Unk_020d8bc8 {
public:
    Unk_ov075_022723bc() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual s32 vfunc_a8();

    BOOL func_ov075_022717a8();
    BOOL func_ov075_02271800();
    BOOL func_ov075_022717ac();
    BOOL func_ov075_022717d8();
    BOOL func_ov075_02271804();
    BOOL func_ov075_0227188c();
    BOOL func_ov075_02271aa4();
    BOOL func_ov075_02271ac8();
    BOOL func_ov075_02271bc8(Unk_ov075_Vec3 *out, void *p);
    BOOL func_ov075_02271c04(s32 *px, s32 *pz);
    s32 func_ov075_02271c94();
    BOOL func_ov075_02271d24();
    BOOL func_ov075_02271da4();
    BOOL func_ov075_02271df8();
    BOOL func_ov075_02271e08();
    BOOL func_ov075_02271e0c();

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ Unk_ov075_0227232c unk_658;
    /* 0x710 */ u32 unk_710;
    /* 0x714 */ u8 unk_714;
    /* 0x715 */ u8 unk_715;
};

struct Unk_ov075_02271e78_Ent {
    BOOL (Unk_ov075_022723bc::*enter)();
    BOOL (Unk_ov075_022723bc::*exit)();
};

struct Unk_ov075_022722f0_Ent {
    void (Unk_ov075_0227232c::*fn)();
    u8 kind;
};

struct Unk_ov075_SceneEntry {
    Unk_ov075_022723bc *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

struct Unk_ov075_Col {
    u8 r, g, b, a;
    Unk_ov075_Col(u8 r_, u8 g_, u8 b_, u8 a_) {
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

extern "C" {
Unk_ov075_022723bc *func_ov075_02271fcc();
void _ZN18Unk_ov075_0227232c19func_ov075_02271590Ev();
extern void *data_ov075_02272280[2];
void _ZN18Unk_ov075_022723bc19func_ov075_02271e0cEv();
extern void *data_ov075_02272298[2];
void _ZN18Unk_ov075_022723bc19func_ov075_02271e08Ev();
extern void *data_ov075_022722a0[2];
void _ZN18Unk_ov075_022723bc19func_ov075_02271804Ev();
extern void *data_ov075_022722b0[2];
void _ZN18Unk_ov075_022723bc19func_ov075_02271800Ev();
extern void *data_ov075_022722b8[2];
void _ZN18Unk_ov075_022723bc19func_ov075_022717d8Ev();
extern void *data_ov075_02272288[2];
void _ZN18Unk_ov075_022723bc19func_ov075_022717acEv();
extern void *data_ov075_02272260[2];
void _ZN18Unk_ov075_022723bc19func_ov075_022717a8Ev();
extern void *data_ov075_02272268[2];
void _ZN18Unk_ov075_022723bc19func_ov075_02271df8Ev();
extern void *data_ov075_02272270[2];
void _ZN18Unk_ov075_022723bc19func_ov075_02271da4Ev();
extern void *data_ov075_02272278[2];
void _ZN18Unk_ov075_022723bc19func_ov075_02271d24Ev();
extern void *data_ov075_02272290[2];
void _ZN18Unk_ov075_022723bc19func_ov075_0227188cEv();
extern void *data_ov075_022722a8[2];
extern u8 data_ov075_022722c0[];
extern u8 data_ov075_02272308[];
extern Unk_ov075_Col data_ov075_0227248c;
extern Unk_ov075_Col data_ov075_02272494;
extern Unk_ov075_Col data_ov075_02272490;
extern Unk_ov075_Col data_ov075_02272484;
extern Unk_ov075_Col data_ov075_02272488;
extern Unk_ov075_Col data_ov075_02272480;
extern Unk_ov075_022722f0_Ent data_ov075_022722f0[2];
extern u8 data_ov075_022722f8[];
extern Unk_ov075_02271e78_Ent data_ov075_022724c8[6];
extern FxVec3 data_ov075_022724b0[2];
extern Unk_ov075_SceneEntry data_ov075_022722d8;
}

typedef BOOL (Unk_ov075_022723bc::*Unk_ov075_Fn)();
typedef void (Unk_ov075_0227232c::*Unk_ov075_InnerFn)();
#define PM(i) (*(Unk_ov075_Fn *)data_ov075_##i)

void *data_ov075_02272278[2] = {(void *)_ZN18Unk_ov075_022723bc19func_ov075_02271da4Ev, 0};
u8 data_ov075_02272308[] = "npc_sp/model/plb_tex.nsbtx";
void *data_ov075_02272270[2] = {(void *)_ZN18Unk_ov075_022723bc19func_ov075_02271df8Ev, 0};
Unk_ov075_SceneEntry data_ov075_022722d8 = {func_ov075_02271fcc, 0x54, 0x5b, 2, 0x5000, 0x5000, 0x3e800};
void *data_ov075_02272260[2] = {(void *)_ZN18Unk_ov075_022723bc19func_ov075_022717acEv, 0};
Unk_ov075_Col data_ov075_0227248c(31, 20, 20, 31);
Unk_ov075_Col data_ov075_02272494(20, 20, 31, 31);
u8 data_ov075_022722c0[] = "npc_sp/model/plb.nsbmd";
Unk_ov075_Col data_ov075_02272490(31, 31, 20, 31);
Unk_ov075_Col data_ov075_02272484(20, 31, 20, 31);
Unk_ov075_Col data_ov075_02272488(20, 31, 31, 31);
void *data_ov075_022722a8[2] = {(void *)_ZN18Unk_ov075_022723bc19func_ov075_0227188cEv, 0};
void *data_ov075_022722b0[2] = {(void *)_ZN18Unk_ov075_022723bc19func_ov075_02271804Ev, 0};
void *data_ov075_02272298[2] = {(void *)_ZN18Unk_ov075_022723bc19func_ov075_02271e0cEv, 0};
void *data_ov075_02272290[2] = {(void *)_ZN18Unk_ov075_022723bc19func_ov075_02271d24Ev, 0};
void *data_ov075_022722a0[2] = {(void *)_ZN18Unk_ov075_022723bc19func_ov075_02271e08Ev, 0};
Unk_ov075_Col data_ov075_02272480(20, 24, 24, 31);
Unk_ov075_022722f0_Ent data_ov075_022722f0[2] = {
    {NULL, 0},
    {*(Unk_ov075_InnerFn *)data_ov075_02272280, 1},
};
Unk_ov075_02271e78_Ent data_ov075_022724c8[6] = {
    {PM(02272298), PM(022722a0)},
    {PM(022722b0), PM(022722b8)},
    {PM(02272288), PM(02272260)},
    {NULL, PM(02272268)},
    {PM(02272270), PM(02272278)},
    {PM(02272290), PM(022722a8)},
};
FxVec3 data_ov075_022724b0[2] = {FxVec3(0x800, 0, 0x1000), FxVec3(-0x800, 0, 0x1000)};
void *data_ov075_02272288[2] = {(void *)_ZN18Unk_ov075_022723bc19func_ov075_022717d8Ev, 0};
void *data_ov075_02272280[2] = {(void *)_ZN18Unk_ov075_0227232c19func_ov075_02271590Ev, 0};
void *data_ov075_022722b8[2] = {(void *)_ZN18Unk_ov075_022723bc19func_ov075_02271800Ev, 0};
void *data_ov075_02272268[2] = {(void *)_ZN18Unk_ov075_022723bc19func_ov075_022717a8Ev, 0};

extern "C" Unk_ov075_022723bc *func_ov075_02271fcc() {
    return new Unk_ov075_022723bc();
}

BOOL Unk_ov075_022723bc::vfunc_04() {
    if (Unk_020d8bc8::vfunc_04() == 0) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov075_02271524(this);
    return TRUE;
}

BOOL Unk_ov075_022723bc::vfunc_00() {
    if (Unk_020d8bc8::vfunc_00() == 0) {
        return FALSE;
    }
    if (func_02086eb0(func_02085174(func_020850e0())) != 0) {
        func_ov075_02271e78(this, 0);
    } else {
        func_ov075_02271e78(this, 4);
    }
    unk_4cc.unk_1c |= 2;
    return TRUE;
}

s32 Unk_ov075_022723bc::vfunc_a8() { return data_020c6cf0; }

BOOL Unk_ov075_022723bc::vfunc_0c() {
    if (Unk_020d8bc8::vfunc_0c() == 0) {
        return FALSE;
    }
    if (func_02040c88() == 0) {
        func_02086edc(func_02085174(func_020850e0()));
    }
    return TRUE;
}

u8 *Unk_ov075_022723bc::getTexturePath() { return data_ov075_02272308; }

u8 *Unk_ov075_022723bc::getModelPath() { return data_ov075_022722c0; }

BOOL Unk_ov075_022723bc::updateAct() {
    BOOL result = FALSE;
    if (data_ov075_022724c8[unk_654].exit != NULL) {
        result = (this->*data_ov075_022724c8[unk_654].exit)();
    }
    return result;
}

extern "C" void func_ov075_02271e78(void *self, s32 state) {
    Unk_ov075_022723bc *o = (Unk_ov075_022723bc *)self;
    BOOL ok = TRUE;
    if (data_ov075_022724c8[state].enter != NULL) {
        ok = (o->*data_ov075_022724c8[state].enter)();
    }
    if (ok) {
        o->unk_654 = state;
    }
}

BOOL Unk_ov075_022723bc::func_ov075_02271e0c() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
    func_020195c8(&unk_564, 1, 0xef, 1, data_020c6cc8, 0);
    func_0201ad34(&unk_2a0, 0xef);
    return TRUE;
}

BOOL Unk_ov075_022723bc::func_ov075_02271e08() {
    return TRUE;
}

BOOL Unk_ov075_022723bc::func_ov075_02271df8() {
    unk_558.unk_09 = 0;
    return TRUE;
}

BOOL Unk_ov075_022723bc::func_ov075_02271da4() {
    void *r5 = func_02085174(func_020850e0());
    if (func_02086eb0(r5) != 0) {
        func_02086ec4(r5, &unk_5c);
        Unk_ov075_Vec3 *s = (Unk_ov075_Vec3 *)&unk_5c;
        Unk_ov075_Vec3 *d = (Unk_ov075_Vec3 *)&unk_68;
        d->x = unk_5c;
        d->y = s->y;
        d->z = s->z;
        unk_558.unk_09 = 1;
        func_ov075_02271e78(this, 0);
    }
    return TRUE;
}

BOOL Unk_ov075_022723bc::func_ov075_02271d24() {
    unk_715 = 0;
    func_020196b4(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    func_020135c4(&unk_558);
    func_020135c4(&unk_558);
    func_0201a6c0(&unk_3b0, 1, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

extern "C" s32 func_ov075_02271ccc(void *self, void *a, void *b) {
    Unk_ov075_Vec3 *pa = (Unk_ov075_Vec3 *)a;
    Unk_ov075_Vec3 *pb = (Unk_ov075_Vec3 *)b;
    s32 r = 0;
    BOOL f2 = FALSE;
    BOOL f1 = FALSE;
    s32 ax = pa->x;
    s32 bx = pb->x;
    if (bx > ax - 0x10000 && bx < ax + 0x10000) {
        f1 = TRUE;
    }
    if (f1) {
        s32 bz = pb->z;
        s32 az = pa->z;
        if (bz > az - 0x1a000) {
            f2 = TRUE;
        }
    }
    if (f2) {
        s32 bz = pb->z;
        s32 az = pa->z;
        if (bz < az + 0xa000) {
            r = 1;
        }
    }
    return r;
}

s32 Unk_ov075_022723bc::func_ov075_02271c94() {
    Unk_ov075_Vec3 *p = (Unk_ov075_Vec3 *)&unk_5c;
    s32 r = 0;
    if (gCamera != 0) {
        Unk_ov075_Vec3 v;
        v.x = gCameraLookAt.x;
        v.y = gCameraLookAt.y;
        v.z = gCameraLookAt.z;
        r = func_ov075_02271ccc(this, &v, p);
    }
    return r;
}

BOOL Unk_ov075_022723bc::func_ov075_02271c04(s32 *px, s32 *pz) {
    BOOL r = FALSE;
    Unk_ov075_Vec3 v;
    s32 i;
    v.x = 0;
    v.y = 0;
    v.z = 0;
    for (i = 0; i < 6; i++) {
        s32 idx = ((u16)(s16)Random_Next(gRandom) >> 4) * 2;
        s32 t = func_01ffcb0c(0xc000, data_02135f44[idx]);
        v.x = t + unk_5c;
        t = func_01ffcb0c(0xc000, data_02135f44[idx + 1]);
        v.z = t + unk_64;
        func_0204edd8(&v, &v);
        if (func_02077f40(&v, r) != 0) {
            *px = v.x;
            *pz = v.z;
            r = TRUE;
            break;
        }
    }
    return r;
}

BOOL Unk_ov075_022723bc::func_ov075_02271bc8(Unk_ov075_Vec3 *out, void *p) {
    BOOL r = FALSE;
    Unk_ov075_Vec4 t;
    func_0201a900(&t, &unk_5c, p, unk_94);
    if (func_0201a834(&t) != 1) {
        out->x = t.v[0];
        out->y = t.v[1];
        out->z = t.v[2];
        r = TRUE;
    }
    return r;
}

BOOL Unk_ov075_022723bc::func_ov075_02271ac8() {
    void *a = &unk_564;
    void *b = &unk_350;
    s32 r6 = func_0201a7e8(&unk_3a8);
    BOOL r = FALSE;
    Unk_ov075_Vec3 t;
    if (func_0201a9a0(b, this, 1) == 0) {
        switch (r6) {
        case 3:
            func_020196b4(a, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            r = TRUE;
            break;
        case 1:
            if (func_ov075_02271bc8(&t, &data_ov075_022724b0[1])) {
                func_0201a97c(b, &t);
            } else {
                func_020196b4(a, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        case 2:
            if (func_ov075_02271bc8(&t, &data_ov075_022724b0[0])) {
                func_0201a97c(b, &t);
            } else {
                func_020196b4(a, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            }
            r = TRUE;
            break;
        }
    } else {
        if (func_0201a968(b)) {
            func_0201a8f0(b);
        }
    }
    return r;
}

BOOL Unk_ov075_022723bc::func_ov075_02271aa4() {
    if (unk_98 != 0) {
        if (func_ov075_02271ac8()) {
            return TRUE;
        }
    }
    return FALSE;
}


BOOL Unk_ov075_022723bc::func_ov075_0227188c() {
    void *r4 = &unk_564;
    s32 r6 = func_ov075_02271c94();
    func_020e7518(&unk_715);
    if (r6 != 0) {
        if (func_ov075_02271aa4() == 0) {
            if (func_02019790(r4) != 0) {
                if (func_0201acfc(&unk_3aa) == 2) {
                    Unk_ov075_0227188c_CallA();
                } else if ((Random_Next(gRandom) & 7) == 0) {
                    Unk_ov075_Vec3 a;
                    a.x = ((Unk_ov075_Vec3 *)gVec3Zero)->x;
                    a.y = ((Unk_ov075_Vec3 *)gVec3Zero)->y;
                    a.z = ((Unk_ov075_Vec3 *)gVec3Zero)->z;
                    if (func_ov075_02271c04(&a.x, &a.z) != 0) {
                        r6 = Math_AngleXZ(&unk_5c, &a);
                        if (NpcActor_IsFrontAngle((s16)(r6 - unk_8e)) != 0) {
                            r6 = 1;
                            if (func_02063b8c(4) == 0) {
                                r6 = 2;
                            }
                            func_020196b4(r4, r6, 1, a.x, a.z, 0, 0, 0, 0, data_020c6cc8, 0);
                            unk_715 = 100;
                        } else {
                            func_020196b4(r4, 4, 1, a.x, a.z, 0, r6, 0, 0, data_020c6cc8, 0);
                            unk_715 = 80;
                        }
                    } else {
                        Unk_ov075_0227188c_CallA();
                    }
                } else {
                    Unk_ov075_0227188c_CallA();
                }
            } else {
                if (unk_98 != 0) {
                    if (func_020197a8(&unk_564) == 1 || func_020197a8(&unk_564) == 2 || func_020197a8(&unk_564) == 4) {
                        if (unk_715 == 0) {
                            Unk_ov075_0227188c_CallA();
                        } else {
                            Unk_ov075_Vec3 b;
                            Unk_ov075_Vec3 *q = func_0201a978(&unk_350);
                            b.x = q->x;
                            b.y = q->y;
                            b.z = q->z;
                            if (NpcActor_IsFrontAngle((s16)(Math_AngleXZ(&unk_5c, &b) - unk_8e)) == 0) {
                                Unk_ov075_0227188c_CallA();
                            }
                        }
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_ov075_022723bc::func_ov075_02271804() {
    void *r4 = unk_658.func_02015aac();
    s32 r6 = unk_8e;
    if (unk_714 != 0) {
        func_0201a6c0(&unk_3b0, 1, 0, 0, (s32)gVec3Zero, 4, data_020c6d1c, 1);
        unk_4cc.unk_1c &= ~2;
    }
    if (r4 != 0) {
        r6 = Unk_020d77a4_getAngleTo(this, r4);
    }
    func_020141b4(&unk_618, 0, r6, 0);
    return TRUE;
}

BOOL Unk_ov075_022723bc::func_ov075_02271800() {
    return TRUE;
}

BOOL Unk_ov075_022723bc::func_ov075_022717d8() {
    if (unk_714 == 0) {
        func_02014198(&unk_618, 0, 0);
    }
    return TRUE;
}

BOOL Unk_ov075_022723bc::func_ov075_022717ac() {
    if (func_02014220(&unk_618) == 0) {
        TalkRequest_EndTalkWith(this);
        func_ov075_02271e78(this, 3);
    }
    return TRUE;
}

BOOL Unk_ov075_022723bc::func_ov075_022717a8() {
    return TRUE;
}

void Unk_ov075_0227232c::vfunc_80() {
    s32 i = unk_ac * 12;
    if (((u8 *)&data_ov075_022722f0[0].kind)[i] != 0) {
        Unk_ov075_022722f0_Ent *e = (Unk_ov075_022722f0_Ent *)((u8 *)data_ov075_022722f0 + i);
        if (e->fn != 0) {
            (this->*e->fn)();
        }
    }
}

void Unk_ov075_0227232c::vfunc_84() {
    s32 i = unk_ac * 12;
    if (((u8 *)&data_ov075_022722f0[0].kind)[i] == 0) {
        Unk_ov075_022722f0_Ent *e = (Unk_ov075_022722f0_Ent *)((u8 *)data_ov075_022722f0 + i);
        if (e->fn != 0) {
            (this->*e->fn)();
            func_ov075_02271704(0);
        }
    }
}

void Unk_ov075_0227232c::func_ov075_02271704(s32 v) {
    unk_ac = v;
    unk_b0 = 0;
}

void Unk_ov075_0227232c::func_ov075_02271590() {
    u8 *o;
    switch (unk_b0) {
    case 0:
        if (unk_3c->unk_04 == 5) {
            func_020195c8(unk_b4 + 0x564, 2, 0xd5, 1, data_020c6cc8, 0);
            func_0201ad34(unk_b4 + 0x2a0, 0);
            unk_b0 = unk_b0 + 1;
        }
        break;
    case 1:
        if (func_02015e48(unk_b4 + 0x334, 0) == 0xd5) {
            if (func_02019790(unk_b4 + 0x564) != 0) {
                u32 r = Unk_020d77a4_getAngleToPlayer(unk_b4, 4);
                func_020196b4(unk_b4 + 0x564, 3, 2, 0, 0, 0, r, 0, 0, data_020c6cc8, 0);
                unk_b0 = unk_b0 + 1;
            }
        }
        break;
    case 2:
        if (func_020197a8(unk_b4 + 0x564) == 3) {
            if (func_02019790(unk_b4 + 0x564) != 0) {
                void *p = PlayerData_GetCurrent();
                u8 buf[2];
                unk_b4[0x714] = 1;
                func_02014f74(this);
                if (func_02098044(p, 6) == 0) {
                    func_0209801c(p, 6);
                    func_0202e1cc(0x12, 1);
                    buf[0] = 0x10;
                    unk_3c->setNextMessage(buf, (void *)"sp_npc_mpelican");
                } else {
                    func_0202e1cc(0x12, 1);
                    buf[1] = func_02063b8c(12);
                    unk_3c->setNextMessage(&buf[1], (void *)"sp_npc_mpelican");
                }
                func_ov075_02271704(0);
            }
        }
        break;
    }
}

Unk_ov075_0227232c::Unk_ov075_0227232c() {}

Unk_ov075_0227232c::~Unk_ov075_0227232c() {}

void Unk_ov075_0227232c::func_ov075_02271524(void *owner) {
    vfunc_08();
    unk_b4 = (u8 *)owner;
}

void Unk_ov075_0227232c::vfunc_78(Unk_ov075_022714e4_Out *out) {
    out->unk_04 = 0x1a;
    if (unk_b4[0x714] != 0) {
        if (func_02098044(PlayerData_GetCurrent(), 6) != 0) {
            out->unk_04 = func_02063b8c(4) + 12;
        }
    }
    out->unk_00 = "sp_npc_mpelican";
}

void Unk_ov075_0227232c::vfunc_14() {
    PlayerData_GetCurrent();
    if (unk_1e == 0x1a) {
        func_02014f38(this, 0);
        func_ov075_02271704(1);
    }
}

void Unk_ov075_0227232c::vfunc_18() {
    getChoiceList();
    s32 r = ChoiceList_getResult();
}

BOOL Unk_ov075_022723bc::vfunc_48() {
    BOOL r = FALSE;
    if (unk_558.unk_09 != 0) {
        if (func_02014220(&unk_618) == 0) {
            r = TRUE;
        }
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov075_022723bc::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        func_ov075_02271e78(this, 2);
        break;
    case 3:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(Unk_020d77a4_getPlayerActor(this, 4));
        if (unk_714 != 0) {
            func_ov075_02271e78(this, 1);
        }
        break;
    case 8:
        if (unk_714 == 0) {
            func_ov075_02271e78(this, 0);
        } else {
            func_ov075_02271e78(this, 5);
        }
        break;
    }
}

