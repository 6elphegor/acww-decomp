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
class Unk_020d77a4;
class Unk_ov047_0225b664;
class Unk_ov047_0225b5d4;

struct Unk_ov047_02258e34_Global {
    u8 pad_00[0x64];
    s32 unk_64;
};

struct Unk_ov047_0225a074_Out {
    const void *unk_00;
    u8 unk_04;
};

struct Unk_ov047_0225a074_Buf {
    u8 lo : 2;
    u8 b : 3;
    u8 c : 3;
    u8 pad_01;
    u16 unk_02;
};

struct Unk_020e1c64 {
    u8 pad_00[0x20];
    Unk_020e1c64();
    ~Unk_020e1c64();
};

struct Unk_ov047_0225a3e4_Msg {
    u8 unk_00;
    u8 pad_01;
    u16 unk_02;
    u16 unk_04;
};

struct Unk_ov047_0225a5e8_Msg {
    u8 unk_00;
    u8 pad_01;
    u16 unk_02;
};

struct Unk_ov046_0225a11c_Vec {
    s32 x, y, z;
};

typedef BOOL (*Unk_ov047_Cb)(u16 *p, s32 m);
typedef BOOL (Unk_ov047_0225b664::*Unk_ov047_0225aeb4_Fn)();

extern "C" {
extern Unk_ov047_02258e34_Global *data_020cbb18;
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern Unk_ov046_0225a11c_Vec gVec3Zero;
extern u8 gSaveData[];
extern u8 data_021ed0a0[];
extern u8 __ptmf_null[];

// plain functions
BOOL func_0202e148();
void func_0202e174(void *self, void *out);
BOOL func_0202e18c(void *self, void *out, s32 x);
void TalkRequest_EndTalkWith(void *self);
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 Item_GetFossilGroup(u16 *p);
s32 Fossil_CountInGroup(s32 id);
s32 ItemPick_FromRange(u16 *a, u32 b, u32 c, void *d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j);
s32 func_02063b8c(s32 n);
BOOL func_0206ea84(Unk_ov047_Cb cb);
BOOL func_0206ed18();
s32 func_0206ed38();
s32 func_0206fe34(void *g, s32 id);
void *func_020850e0();
s32 func_020851bc(void *p, s32 a);
void func_020851a4(void *p, s32 a);
void func_020902f8(s32 h);
s32 func_02090330(s32 a, void *b, void *c, s32 d);
void func_020902d4(s32 h, void *b, void *c);
void *PlayerData_GetCurrent();
u16 func_02099048(s32 a);
void func_02099064(s32 a);
void func_0209909c(u16 *p, s32 a, s32 b);
BOOL func_02099f98(u32 a, u16 *p);
u32 func_0209a108(u32 a);
s16 *func_0209c37c(s32 a, s32 b);
s32 func_0209ccd0();
BOOL func_020a032c();
BOOL func_020a62a0();
s32 func_020e7500(void *p);
s32 strncmp(const char *a, const char *b, u32 n);
u32 func_0212a438(const char *s);

// methods of other modules, called as free functions with the object first (mangled-name trick)
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(void *g);
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *self);
void _ZN12Unk_02013b1013func_020141b4Essh(void *self, s32 a, s32 b, s32 c);
void _ZN12Unk_0201442013func_02014918Ev(void *self);
void _ZN12Unk_0201442013func_02014a4cEv(void *self);
void _ZN12Unk_0201442013func_02014ce4EPtjjj(void *self, u16 *p, s32 a, s32 b, s32 c);
void _ZN12Unk_020d771013func_02014f74Ev(void *self);
void _ZN12Unk_020d771013func_02015170Ejj(void *self, u32 a, u32 b);
void _ZN12Unk_020d771013func_0201517cEjjj(void *self, Unk_ov047_Cb cb, u32 a, u32 b);
void _ZN12Unk_020d771013func_020151d0Ei(void *self, s32 a);
void _ZN16ActorTalkRequest13func_0201578cEjjj(void *self, u16 *p, s32 a, s32 b);
void _ZN16ActorTalkRequest13getChoiceListEv(void *self);
Unk_020d77a4 *_ZN16ActorTalkRequest13func_02015aacEv(void *self);
void _ZN16ActorTalkRequest13func_02015ab0Ej(void *self, u32 v);
void _ZN12Unk_0201985813func_020195c8Eiijtt(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
void _ZN12Unk_0201985813func_02019614Ejt(void *self, s32 a, u16 b);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
BOOL _ZN12Unk_0201985813func_02019790Ev(void *self);
s32 _ZN12Unk_0201985813func_020197a8Ev(void *self);
void _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih(void *self, u8 a, s32 b, s32 c, Unk_ov046_0225a11c_Vec *v, s32 d, s32 e, u8 f);
BOOL _ZN12Unk_0206fe8013func_0206ff58Ev(void *g);
BOOL _ZN12Unk_0206fe8013func_0206ff9cEv(void *g);
BOOL _ZN12Unk_0206fe8013func_0206ffdcEv(void *g);
BOOL _ZN12Unk_0206fe8013func_0207001cEv(void *g);
BOOL _ZN12Unk_0206fe8013func_02070060Ev(void *g);
s32 _ZN12Unk_0206fe8013func_0206fe80Ev(void *g);
BOOL _ZN12Unk_0206fe8013func_020700a4EiPt(void *g, void *obj, u16 *p);
void _ZN12Unk_0206fe8013func_020701d0EPt(void *g, u16 *p);
s32 _ZN12Unk_0206fe8013func_02070358EPt(void *g, u16 *p);
s32 _ZN12Unk_0206fe8013func_02070370EPt(void *g, u16 *p);
s32 _ZN15TalkWindowState14setNextMessageEPhPv(void *self, void *buf, void *name);
void _ZN15TalkWindowState7setSlotEiPv(void *self, s32 a, void *obj);
u32 _ZN10ChoiceList9getResultEv();
void _ZN12Unk_02097ff413func_0209801cEj(void *p, u32 v);
BOOL _ZN12Unk_02097ff413func_02098044Ej(u32 a, u32 b);
u32 _ZN10PlayerData13func_0209865cEv(...);
u32 _ZN12Unk_020994cc13func_02099864Ev(u32 a);
void _ZN12Unk_0209ada413func_0209abb4Eh(u32 a, s32 b);
void _ZN8SaveData7setFlagEj(void *g, u32 n);
BOOL _ZN8SaveData8testFlagEj(void *g, u32 n);
BOOL _ZN12Unk_020d77a413func_0201b9e8Eii(void *self, s32 *a, s32 *b);
}
#define func_0201b9e8(a, b) _ZN12Unk_020d77a413func_0201b9e8Eii(this, a, b)
#define func_02072e44 _ZN12Unk_020cbb1813func_02072e44Ev
#define func_02014220 _ZN12Unk_02013b1013func_02014220Ev
#define func_020141b4 _ZN12Unk_02013b1013func_020141b4Essh
#define func_02014918 _ZN12Unk_0201442013func_02014918Ev
#define func_02014a4c _ZN12Unk_0201442013func_02014a4cEv
#define func_02014ce4 _ZN12Unk_0201442013func_02014ce4EPtjjj
#define func_02014f74 _ZN12Unk_020d771013func_02014f74Ev
#define func_02015170 _ZN12Unk_020d771013func_02015170Ejj
#define func_0201517c _ZN12Unk_020d771013func_0201517cEjjj
#define func_020151d0 _ZN12Unk_020d771013func_020151d0Ei
#define func_0201578c _ZN16ActorTalkRequest13func_0201578cEjjj
#define ActorTalkRequest_getChoiceList _ZN16ActorTalkRequest13getChoiceListEv
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define func_020195c8 _ZN12Unk_0201985813func_020195c8Eiijtt
#define func_02019614 _ZN12Unk_0201985813func_02019614Ejt
#define func_020196b4 _ZN12Unk_0201985813func_020196b4Ejiiissiitt
#define func_02019790 _ZN12Unk_0201985813func_02019790Ev
#define func_020197a8 _ZN12Unk_0201985813func_020197a8Ev
#define func_0201a6c0 _ZN12Unk_0201a33413func_0201a6c0EhiiP17Unk_0201a334_Vec3iih
#define func_0206ff58 _ZN12Unk_0206fe8013func_0206ff58Ev
#define func_0206ff9c _ZN12Unk_0206fe8013func_0206ff9cEv
#define func_0206ffdc _ZN12Unk_0206fe8013func_0206ffdcEv
#define func_0207001c _ZN12Unk_0206fe8013func_0207001cEv
#define func_02070060 _ZN12Unk_0206fe8013func_02070060Ev
#define func_0206fe80 _ZN12Unk_0206fe8013func_0206fe80Ev
#define func_020700a4 _ZN12Unk_0206fe8013func_020700a4EiPt
#define func_020701d0 _ZN12Unk_0206fe8013func_020701d0EPt
#define func_02070358 _ZN12Unk_0206fe8013func_02070358EPt
#define func_02070370 _ZN12Unk_0206fe8013func_02070370EPt
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define TalkWindowState_setSlot _ZN15TalkWindowState7setSlotEiPv
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define func_0209801c _ZN12Unk_02097ff413func_0209801cEj
#define func_02098044 _ZN12Unk_02097ff413func_02098044Ej
#define func_0209865c _ZN10PlayerData13func_0209865cEv
#define func_02099864 _ZN12Unk_020994cc13func_02099864Ev
#define func_0209abb4 _ZN12Unk_0209ada413func_0209abb4Eh
#define SaveData_setFlag _ZN8SaveData7setFlagEj
#define SaveData_testFlag _ZN8SaveData8testFlagEj

class ActorTalkRequest {
public:
    ActorTalkRequest();
    virtual ~ActorTalkRequest();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18(u32 a);
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
    virtual void vfunc_78(Unk_ov047_0225a074_Out *out);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    char unk_04[0x1a];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    void *unk_3c;
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
    void func_02015158(u32 a, u32 b, u32 c);
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
    virtual void vfunc_4c(u32 a, u32 b);
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

    BOOL func_0201b9bc();
    void func_0201b964(void *dst, s32 n);
    BOOL func_0201b980(u8 *src, u32 n);
    void func_0201b9fc(u32 a, u32 b, u32 c, ...);
    BOOL func_0201ba88();
    void setTalkRequest(Unk_0201bc1c *p);
    s32 getPlayerActor(u32 id);
    s32 getAngleTo(Unk_020d77a4 *other);
    void func_0201bd9c(s32 v);

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

// Sub object (vtable 0x0225b5d4), a member of the scene at +0x658; size 0xd0.
class Unk_ov047_0225b5d4 : public SpNpcTalkRequest {
public:
    typedef void (Unk_ov047_0225b5d4::*Fn)();
    typedef void (Unk_ov047_0225b5d4::*Fn1)(u32);
    typedef void (Unk_ov047_0225b5d4::*Fni)(s32);

    Unk_ov047_0225b5d4();
    virtual ~Unk_ov047_0225b5d4();
    virtual void vfunc_08();
    virtual void vfunc_14();
    virtual void vfunc_18(u32 a);
    virtual void vfunc_78(Unk_ov047_0225a074_Out *out);
    virtual void vfunc_84();

    void func_ov047_02258ffc(u32 a);
    void func_ov047_02259048(u32 a);
    void func_ov047_0225905c(u32 a);
    void func_ov047_022590b0(u32 a);
    void func_ov047_022590e4(u32 a);
    void func_ov047_02259118(u32 a);
    void func_ov047_0225912c(u32 a);
    void func_ov047_02259140(u32 a);
    void func_ov047_0225914c(s32 a);
    void func_ov047_022592b8(u32 a);
    void func_ov047_02259448(s32 a);
    void func_ov047_0225955c();
    void func_ov047_02259580();
    void func_ov047_022595a0();
    void func_ov047_0225965c();
    void func_ov047_022596e8();
    void func_ov047_0225977c();
    void func_ov047_022597b0();
    void func_ov047_022597d8();
    void func_ov047_02259804();
    void func_ov047_02259818();
    void func_ov047_02259880();
    void func_ov047_022598e4();
    void func_ov047_022599cc();
    void func_ov047_022599ec();
    void func_ov047_02259a14();
    void func_ov047_02259a28();
    void func_ov047_02259a3c();
    void func_ov047_02259a64();
    void func_ov047_02259fd8();
    void func_ov047_0225a28c(Unk_ov047_0225b664 *owner);
    void func_ov047_0225a3e4();
    void func_ov047_0225a4d0();
    void func_ov047_0225a548();
    void func_ov047_0225a5e0();
    void func_ov047_0225a5e8();
    void func_ov047_0225a934(s32 idx);
    void func_ov047_0225a944(s32 idx);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ Unk_ov047_0225b664 *unk_b0;
    /* 0xb4 */ Fn unk_b4;
    /* 0xbc */ Fn unk_bc;
    /* 0xc4 */ s32 unk_c4;
    /* 0xc8 */ u8 unk_c8;
    /* 0xc9 */ u8 pad_c9;
    /* 0xca */ u16 unk_ca;
    /* 0xcc */ s32 unk_cc;
};

class Unk_ov047_0225b664 : public Unk_020d8bc8 {
public:
    Unk_ov047_0225b664() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL func_ov047_0225a374();
    BOOL func_ov047_0225a3b0();
    BOOL func_ov047_0225aa54();
    BOOL func_ov047_0225aa58();
    BOOL func_ov047_0225aa5c();
    BOOL func_ov047_0225aab4();
    BOOL func_ov047_0225aaec();
    BOOL func_ov047_0225ab88();
    BOOL func_ov047_0225abc0();
    BOOL func_ov047_0225abc4();
    BOOL func_ov047_0225abf8();
    BOOL func_ov047_0225ac7c();
    BOOL func_ov047_0225acbc();
    BOOL func_ov047_0225ad20();
    BOOL func_ov047_0225ad50();
    BOOL func_ov047_0225ad8c();
    BOOL func_ov047_0225ae10();
    void func_ov047_0225aeb4(s32 state);

    s32 unk_654;
    Unk_ov047_0225b5d4 unk_658;
    u8 unk_728;
    u8 pad_729;
    u16 unk_72a;
    u16 unk_72c;
    u16 unk_72e;
    s16 unk_730;
    u8 unk_732;
    u8 pad_733;
    u16 unk_734;
    s16 pad_736;
    s32 unk_738;
};

extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_02258ffcEj();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_02259048Ej();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_0225905cEj();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_022590b0Ej();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_022590e4Ej();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_02259118Ej();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_0225912cEj();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_02259140Ej();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_0225914cEi();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_022592b8Ej();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_02259448Ei();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_0225955cEv();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_02259580Ev();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_022595a0Ev();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_0225965cEv();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_022596e8Ev();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_0225977cEv();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_022597b0Ev();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_022597d8Ev();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_02259804Ev();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_02259818Ev();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_02259880Ev();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_022598e4Ev();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_022599ccEv();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_022599ecEv();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_02259a14Ev();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_02259a28Ev();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_02259a3cEv();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_02259a64Ev();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_0225a3e4Ev();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_0225a4d0Ev();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_0225a548Ev();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_0225a5e0Ev();
extern "C" void _ZN18Unk_ov047_0225b5d419func_ov047_0225a5e8Ev();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225a374Ev();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225a3b0Ev();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225aa54Ev();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225aa58Ev();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225aa5cEv();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225aab4Ev();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225aaecEv();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225ab88Ev();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225abc0Ev();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225abc4Ev();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225abf8Ev();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225ac7cEv();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225acbcEv();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225ad20Ev();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225ad50Ev();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225ad8cEv();
extern "C" void _ZN18Unk_ov047_0225b66419func_ov047_0225ae10Ev();
extern "C" void *data_ov047_0225b320[2];
extern "C" void *data_ov047_0225b328[2];
extern "C" void *data_ov047_0225b330[2];
extern "C" void *data_ov047_0225b338[2];
extern "C" void *data_ov047_0225b340[2];
extern "C" void *data_ov047_0225b348[2];
extern "C" void *data_ov047_0225b350[2];
extern "C" void *data_ov047_0225b358[2];
extern "C" void *data_ov047_0225b360[2];
extern "C" void *data_ov047_0225b368[2];
extern "C" void *data_ov047_0225b370[2];
extern "C" void *data_ov047_0225b378[2];
extern "C" void *data_ov047_0225b380[2];
extern "C" void *data_ov047_0225b388[2];
extern "C" void *data_ov047_0225b390[2];
extern "C" void *data_ov047_0225b398[2];
extern "C" void *data_ov047_0225b3a0[2];
extern "C" void *data_ov047_0225b3a8[2];
extern "C" void *data_ov047_0225b3b0[2];
extern "C" void *data_ov047_0225b3b8[2];
extern "C" void *data_ov047_0225b3c0[2];
extern "C" void *data_ov047_0225b3c8[2];
extern "C" void *data_ov047_0225b3d0[2];
extern "C" void *data_ov047_0225b3d8[2];
extern "C" void *data_ov047_0225b3e0[2];
extern "C" void *data_ov047_0225b3e8[2];
extern "C" void *data_ov047_0225b3f0[2];
extern "C" void *data_ov047_0225b3f8[2];
extern "C" void *data_ov047_0225b400[2];
extern "C" void *data_ov047_0225b408[2];
extern "C" void *data_ov047_0225b410[2];
extern "C" void *data_ov047_0225b418[2];
extern "C" void *data_ov047_0225b420[2];
extern "C" void *data_ov047_0225b428[2];
extern "C" void *data_ov047_0225b430[2];
extern "C" void *data_ov047_0225b438[2];
extern "C" void *data_ov047_0225b440[2];
extern "C" void *data_ov047_0225b448[2];
extern "C" void *data_ov047_0225b450[2];
extern "C" void *data_ov047_0225b458[2];
extern "C" void *data_ov047_0225b460[2];
extern "C" void *data_ov047_0225b468[2];
extern "C" void *data_ov047_0225b470[2];
extern "C" void *data_ov047_0225b478[2];
extern "C" void *data_ov047_0225b480[2];
extern "C" void *data_ov047_0225b488[2];
extern "C" void *data_ov047_0225b490[2];
extern "C" void *data_ov047_0225b498[2];
extern "C" void *data_ov047_0225b4a0[2];
extern "C" void *data_ov047_0225b4a8[2];
extern "C" void *data_ov047_0225b4b0[2];
extern "C" void *data_ov047_0225b4b8[2];
extern "C" void *data_ov047_0225b4c0[2];
extern "C" void *data_ov047_0225b4c8[2];
extern "C" void *data_ov047_0225b4d0[2];
extern "C" void *data_ov047_0225b4d8[2];
extern "C" void *data_ov047_0225b4e0[2];
extern "C" void *data_ov047_0225b4e8[2];
extern "C" void *data_ov047_0225b4f0[2];
extern "C" void *data_ov047_0225b4f8[2];
extern "C" void *data_ov047_0225b500[2];
extern "C" void *data_ov047_0225b508[2];
extern "C" void *data_ov047_0225b510[2];
extern "C" void *data_ov047_0225b518[2];
extern "C" void *data_ov047_0225b520[2];
extern "C" void *data_ov047_0225b528[2];
extern "C" void *data_ov047_0225b530[2];
extern "C" void *data_ov047_0225b538[2];
extern "C" void *data_ov047_0225b540[2];
extern "C" void *data_ov047_0225b548[2];
extern "C" void *data_ov047_0225b550[2];
extern "C" void *data_ov047_0225b558[2];
extern "C" void *data_ov047_0225b560[2];
extern "C" void *data_ov047_0225b568[2];
extern "C" void *data_ov047_0225b570[2];
extern "C" void *data_ov047_0225b578[2];

struct Unk_ov047_0225aeb4_Ent {
    BOOL (Unk_ov047_0225b664::*enter)();
    BOOL (Unk_ov047_0225b664::*exit)();
};

struct Unk_ov047_SceneEntry {
    void *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" void *func_ov047_0225b0c0();
extern "C" BOOL func_ov047_0225a4a8(u16 *p, s32 m);
extern "C" BOOL func_ov047_0225a5c0(u16 *p, s32 m);
extern "C" BOOL func_ov047_0225a864(u16 *p, s32 m);
extern "C" void func_ov047_0225a954(Unk_ov047_0225b5d4 *self, Unk_ov047_0225b5d4::Fn *out, s32 idx);
#define data_ov047_0225b980 ((char *)"sp_npc_owl")
#define data_ov047_0225b98c ((char *)"sp_etc_sequence4")
#define data_ov047_0225b9a0 ((char *)"sp_npc_drama1")
extern "C" u8 data_ov047_0225b580[];
extern "C" u8 data_ov047_0225b5b0[];
extern "C" const u8 data_ov047_0225b1d8[32];
extern "C" Unk_ov047_SceneEntry data_ov047_0225b598;
extern Unk_ov047_0225aeb4_Ent data_ov047_0225ba08[9];

struct Unk_ov047_022592b8_Byte {
    u8 v;
    Unk_ov047_022592b8_Byte() {}
};

struct Unk_ov047_022592b8_Ent {
    u32 id;
    void (Unk_ov047_0225b5d4::*fn)(u32);
};

// ---- unit 2
typedef void (Unk_ov047_0225b5d4::*Unk_ov047_02259a8c_Fn)();

struct Unk_ov047_02259a8c_Ent {
    u32 id;
    Unk_ov047_02259a8c_Fn fn;
};

static inline BOOL Unk_ov047_022596e8_IsNoneT(u16 *p, u16 &v) {
    BOOL ok;
    if (Item_IsFurniture(p)) {
        v = 0xfff1;
        if (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&v)) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    } else {
        if (*p == 0xfff1) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
    }
    return ok;
}

static inline BOOL Unk_ov047_022596e8_IsNone(u16 *p) {
    u16 v;
    return Unk_ov047_022596e8_IsNoneT(p, v);
}

// ---- unit 3
static inline BOOL Unk_ov047_0225a4a8_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov047_0225a3e4_Same(u16 *p, u16 *t) {
    if (Item_IsFurniture(p)) {
        *t = 0xfff1;
        s32 a = Item_GetFurnitureIndex(p);
        s32 b = Item_GetFurnitureIndex(t);
        if (a == b) {
            return TRUE;
        }
        return FALSE;
    }
    if (*p == 0xfff1) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov047_0225a864_R(u16 *p, u32 lo, u32 hi) {
    return (*p >= lo && *p <= hi) ? TRUE : FALSE;
}

static inline s32 Unk_ov047_0225a5e8_Idx(u32 v, u32 lo, u32 hi) {
    if (v >= lo && v <= hi) {
        return v - lo;
    }
    return -1;
}

extern "C" void *func_ov047_0225b0c0() {
    return new Unk_ov047_0225b664();
}

BOOL Unk_ov047_0225b664::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov047_0225a28c(this);
    unk_72c = data_020c6cc8;
    unk_738 = -1;
    return TRUE;
}

BOOL Unk_ov047_0225b664::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    u8 buf[8];
    unk_728 = 0;
    unk_730 = unk_8e;
    unk_72a = 0xff;
    unk_4cc.unk_1c |= 2;
    unk_734 = 0;
    if (func_02072e44(data_020cbb18) != 0 || *func_0209c37c(0, 0x4a) != 0) {
        unk_4cc.unk_1c |= 2;
        if (func_020a62a0()) {
            unk_5c = 0xf000;
            unk_64 = 0x15000;
            unk_8e = 0;
            unk_94 = 0;
            func_ov047_0225aeb4(0);
        } else {
            func_ov047_0225aeb4(6);
        }
        return TRUE;
    }
    if (func_0209ccd0() == 2 || func_0209ccd0() == 3 || func_0202e18c(this, buf, 1)) {
        func_ov047_0225aeb4(0);
    } else {
        func_ov047_0225aeb4(2);
    }
    return TRUE;
}

BOOL Unk_ov047_0225b664::vfunc_0c() {
    if (!Unk_020d8bc8::vfunc_0c()) {
        return FALSE;
    }
    if (unk_738 != -1) {
        func_020902f8(unk_738);
        unk_738 = -1;
    }
    return TRUE;
}

u8 *Unk_ov047_0225b664::getTexturePath() { return data_ov047_0225b5b0; }

// Getters at the end of the file so they are not inlined.
u8 *Unk_ov047_0225b664::getModelPath() { return data_ov047_0225b580; }

BOOL Unk_ov047_0225b664::updateAct() {
    BOOL r = FALSE;
    if (data_ov047_0225ba08[unk_654].exit) {
        r = (this->*data_ov047_0225ba08[unk_654].exit)();
    }
    return r;
}

void Unk_ov047_0225b664::func_ov047_0225aeb4(s32 state) {
    BOOL ok = TRUE;
    if (data_ov047_0225ba08[state].enter) {
        ok = (this->*data_ov047_0225ba08[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov047_0225b664::func_ov047_0225ae10() {
    u8 buf[8];
    unk_72a = 0xff;
    func_02019614(&unk_564, 1, unk_72c);
    if (unk_728 == 0) {
        if (func_0202e18c(this, buf, 1)) {
            unk_72a = func_02063b8c(5) * 0x14 + 0x64;
        }
    }
    unk_732 = 0;
    unk_72c = data_020c6cc8;
    unk_72e = 0x78;
    func_0201a6c0(&unk_3b0, 1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225ad8c() {
    if (unk_72a != 0xff) {
        if (func_020e7500(&unk_72a) == 0) {
            func_ov047_0225aeb4(5);
        }
        return TRUE;
    }
    if (func_02072e44(data_020cbb18) != 0 || *func_0209c37c(0, 0x4a) != 0 || func_0209ccd0() == 2 ||
        func_0209ccd0() == 3) {
        return TRUE;
    }
    if (func_020e7500(&unk_72e) == 0) {
        unk_734 = 0x18;
        func_ov047_0225aeb4(2);
    }
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225ad50() {
    func_020196b4(&unk_564, 3, 1, 0, 0, 0, unk_730, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225ad20() {
    if (func_020197a8(&unk_564) == 3) {
        if (func_02019790(&unk_564)) {
            func_ov047_0225aeb4(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225acbc() {
    func_020195c8(&unk_564, 1, 0xf0, 0, unk_734, 0);
    unk_732 = 1;
    func_0201a6c0(&unk_3b0, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225ac7c() {
    if (unk_738 == -1) {
        unk_738 = func_02090330(0x3c, (u8 *)this + 0x478, &unk_8e, 0);
    } else {
        func_020902d4(unk_738, (u8 *)this + 0x478, &unk_8e);
    }
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225abf8() {
    Unk_020d77a4 *p = func_02015aac(&unk_658);
    s32 r = 0;
    if (p) {
        r = getAngleTo(p);
    }
    if (unk_738 != -1) {
        func_020902f8(unk_738);
        unk_738 = -1;
    }
    func_0201a6c0(&unk_3b0, 1, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    func_020141b4(&unk_618, 0, r, 0);
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225abc4() {
    if (func_02014220(&unk_618) == 0) {
        unk_732 = 0;
        TalkRequest_EndTalkWith(this);
        func_ov047_0225aeb4(4);
    }
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225abc0() { return TRUE; }

BOOL Unk_ov047_0225b664::func_ov047_0225ab88() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225aaec() {
    if (func_0201ba88()) {
        s32 a = 4;
        s32 b = 4;
        u32 x, t;
        if (func_0201b9e8(&a, &b) && ((x = a), x == (t = data_020cbb18->unk_64)) && x == b) {
            func_0201b9fc(1, t, t);
            unk_658.vfunc_08();
            func_02015ab0(&unk_658, getPlayerActor(4));
            func_ov047_0225aeb4(3);
        } else if (func_020a62a0() && b == 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, 4);
            func_ov047_0225aeb4(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225aab4() {
    func_0201a6c0(&unk_3b0, 0, 0, 0, &gVec3Zero, 4, data_020c6d1c, 1);
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225aa5c() {
    if (func_0201ba88()) {
        s32 a = 4;
        s32 b = 4;
        if (func_0201b9e8(&a, &b) && a == 4 && func_020a62a0()) {
            func_0201b9fc(1, data_020cbb18->unk_64, 4);
            func_ov047_0225aeb4(0);
        }
    }
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225aa58() { return TRUE; }

BOOL Unk_ov047_0225b664::func_ov047_0225aa54() { return TRUE; }

// ---- unit 4
// ---------------------------------------------------------------------------------------------------------------------

void Unk_ov047_0225b5d4::vfunc_84() {
    if (unk_b4) {
        (this->*unk_b4)();
        Fn n = *(Fn *)__ptmf_null;
        unk_b4 = n;
        if (unk_bc) {
            unk_b4 = unk_bc;
            unk_bc = n;
        }
    }
}

extern "C" void *data_ov047_0225b398[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225ae10Ev, 0};

extern "C" void func_ov047_0225a954(Unk_ov047_0225b5d4 *self, Unk_ov047_0225b5d4::Fn *out, s32 idx) {
    static Unk_ov047_0225b5d4::Fn tbl[5] = {
        *(Unk_ov047_0225b5d4::Fn *)data_ov047_0225b518,
        *(Unk_ov047_0225b5d4::Fn *)data_ov047_0225b510,
        *(Unk_ov047_0225b5d4::Fn *)data_ov047_0225b508,
        *(Unk_ov047_0225b5d4::Fn *)data_ov047_0225b500,
        *(Unk_ov047_0225b5d4::Fn *)data_ov047_0225b4f8,
    };
    *out = tbl[idx];
}

void Unk_ov047_0225b5d4::func_ov047_0225a944(s32 idx) {
    func_ov047_0225a954(this, &unk_b4, idx);
}

void Unk_ov047_0225b5d4::func_ov047_0225a934(s32 idx) {
    func_ov047_0225a954(this, &unk_bc, idx);
}

extern "C" BOOL func_ov047_0225a864(u16 *p, s32 m) {
    if (m == 0) {
        BOOL a = Unk_ov047_0225a4a8_R(p, 0x450c, 0x45db);
        BOOL b = Unk_ov047_0225a864_R(p, 0x3934, 0x3983);
        BOOL c = Unk_ov047_0225a864_R(p, 0x38e4, 0x3933);
        BOOL d = Unk_ov047_0225a864_R(p, 0x12e8, 0x131f);
        BOOL e = Unk_ov047_0225a864_R(p, 0x12b0, 0x12e7);
        BOOL f = Unk_ov047_0225a864_R(p, 0x3894, 0x38e3);
        BOOL g = Unk_ov047_0225a864_R(p, 0x1549, 0x1549);
        return b | (c | (d | (e | (f | (g | a)))));
    }
    return FALSE;
}

void Unk_ov047_0225b5d4::func_ov047_0225a5e8() {
    void *o = unk_3c;
    Unk_ov047_0225a5e8_Msg m;
    m.unk_00 = 0x22;
    if (func_0206ed18()) {
        Unk_020e1c64 ob;
        unk_c4 = -1;
        unk_c4 = func_0206ed38();
        unk_ca = func_02099048(unk_c4);
        if (!Unk_ov047_0225a3e4_Same(&unk_ca, &m.unk_02)) {
            func_0201578c(this, &unk_ca, 0, 7);
            if (Unk_ov047_0225a4a8_R(&unk_ca, 0x1549, 0x1549)) {
                m.unk_00 = 0x21;
            } else {
                void *g = data_021ed0a0;
                if (func_02070358(g, &unk_ca) == 0) {
                    if (Unk_ov047_0225a4a8_R(&unk_ca, 0x450c, 0x45db)) {
                        unk_c8 = 0;
                        m.unk_00 = 0x25;
                    } else if (unk_ca >= 0x3894 && unk_ca <= 0x38e3) {
                        m.unk_00 = func_02063b8c(3) + 0x2e;
                    } else if (unk_ca >= 0x12b0 && unk_ca <= 0x12e7) {
                        if (Unk_ov047_0225a5e8_Idx(unk_ca, 0x12b0, 0x12e7) != 0x34) {
                            m.unk_00 = 0x32;
                        } else {
                            m.unk_00 = 0x33;
                        }
                    } else if (unk_ca >= 0x12e8 && unk_ca <= 0x131f) {
                        m.unk_00 = 0x35;
                    } else if (unk_ca >= 0x38e4 && unk_ca <= 0x3933) {
                        s32 idx = unk_ca >= 0x38e4 && unk_ca <= 0x3933 ? (s32)(unk_ca - 0x38e4) >> 2 : -1;
                        unk_ca = (u32)idx < 0x14 ? idx * 4 + 0x3934 : 0x3934;
                        s32 t = unk_c4;
                        if (t >= 0) {
                            func_0209909c(&unk_ca, 0, t);
                        }
                        m.unk_00 = 0x42;
                    } else if (unk_ca >= 0x3934 && unk_ca <= 0x3983) {
                        m.unk_00 = 0x43;
                    }
                } else {
                    switch (func_02070370(g, &unk_ca)) {
                    case 0:
                        m.unk_00 = 0x39;
                        break;
                    case 1:
                        if (func_020700a4(g, &ob, &unk_ca)) {
                            TalkWindowState_setSlot(o, 0, &ob);
                        }
                        m.unk_00 = 0x38;
                        break;
                    case 2:
                        m.unk_00 = 0x37;
                        break;
                    }
                }
            }
            func_02014ce4(this, &unk_ca, 0, 10, 0);
            func_ov047_0225a934(4);
        }
    } else {
        unk_ca = 0xfff1;
        func_02014f74(this);
    }
    TalkWindowState_setNextMessage(o, &m, data_ov047_0225b980);
}

void Unk_ov047_0225b5d4::func_ov047_0225a5e0() {
    func_02014f74(this);
}

extern "C" BOOL func_ov047_0225a5c0(u16 *p, s32 m) {
    if (m == 0) {
        return Unk_ov047_0225a4a8_R(p, 0x1549, 0x1549);
    }
    return FALSE;
}

void Unk_ov047_0225b5d4::func_ov047_0225a548() {
    void *o = unk_3c;
    Unk_ov047_0225a5e8_Msg m;
    m.unk_00 = 0x22;
    if (func_0206ed18()) {
        unk_c4 = func_0206ed38();
        unk_ca = func_02099048(unk_c4);
        func_02014ce4(this, &unk_ca, 0, 10, 0);
        m.unk_00 = 0x19;
    } else {
        unk_ca = 0xfff1;
        func_02014f74(this);
    }
    func_ov047_0225a934(4);
    TalkWindowState_setNextMessage(o, &m, data_ov047_0225b980);
}

void Unk_ov047_0225b5d4::func_ov047_0225a4d0() {
    void *o = unk_3c;
    if (func_0206ed18()) {
        u8 cmd = 0x13;
        void *g = data_021ed0a0;
        s32 v = func_0206fe80(g);
        if (v == 0) {
            cmd = 0x10;
        } else if (v <= 0x1e000) {
            cmd = 0x11;
        } else if (v <= 0x46000) {
            cmd = 0x12;
        } else if (func_02070060(g)) {
            cmd = 0x49;
        }
        TalkWindowState_setNextMessage(o, &cmd, data_ov047_0225b980);
    }
}

extern "C" BOOL func_ov047_0225a4a8(u16 *p, s32 m) {
    if (m == 2) {
        return Unk_ov047_0225a4a8_R(p, 0x155f, 0x1560);
    }
    return FALSE;
}

void Unk_ov047_0225b5d4::func_ov047_0225a3e4() {
    void *o = unk_3c;
    Unk_ov047_0225a3e4_Msg m;
    m.unk_00 = 0xe8;
    u32 r7 = (u32)PlayerData_GetCurrent();
    if (func_0206ed18() && func_0202e148()) {
        s32 r5 = func_0206ed38();
        m.unk_02 = func_02099048(r5);
        if (r5 >= 0) {
            func_02099064(r5);
        }
        if (!Unk_ov047_0225a3e4_Same(&m.unk_02, &m.unk_04)) {
            func_02014ce4(this, &m.unk_02, 2, 5, 0);
        }
        func_0209abb4(func_0209a108(func_02099864(func_0209865c(r7))), 1);
        m.unk_00 = 0xe7;
    }
    TalkWindowState_setNextMessage(o, &m, data_ov047_0225b980);
}

BOOL Unk_ov047_0225b664::func_ov047_0225a3b0() {
    func_020196b4(&unk_564, 0xa, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov047_0225b664::func_ov047_0225a374() {
    if (func_020197a8(&unk_564) == 10) {
        if (func_02019790(&unk_564)) {
            unk_72c = 0x18;
            func_ov047_0225aeb4(0);
        }
    }
    return TRUE;
}

Unk_ov047_0225b5d4::Unk_ov047_0225b5d4() {
    unk_ca = 0xfff1;
}

Unk_ov047_0225b5d4::~Unk_ov047_0225b5d4() {}

void Unk_ov047_0225b5d4::vfunc_08() {
    ActorTalkRequest::vfunc_08();
    unk_c4 = -1;
    unk_ca = 0xfff1;
    Fn t = *(Fn *)__ptmf_null;
    unk_b4 = t;
    unk_bc = t;
}

void Unk_ov047_0225b5d4::func_ov047_0225a28c(Unk_ov047_0225b664 *owner) {
    vfunc_08();
    unk_b0 = owner;
    unk_ac = 0;
    unk_c4 = -1;
    unk_c8 = 0;
    unk_ca = 0xfff1;
}

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov047_0225b5d4::vfunc_78(Unk_ov047_0225a074_Out *out) {
    if (func_020a032c()) {
        out->unk_00 = data_ov047_0225b98c;
        out->unk_04 = 8;
        return;
    }
    out->unk_00 = data_ov047_0225b980;
    u32 r7 = func_02099864(func_0209865c(PlayerData_GetCurrent()));
    void *g = data_020cbb18;
    Unk_ov047_0225a074_Buf l;
    if (!func_02072e44(g) && *func_0209c37c(0, 0x4a) == 0) {
        l.unk_02 = 0xd00c;
        if (func_02099f98(r7, &l.unk_02)) {
            if (unk_b0->unk_732 == 0) {
                out->unk_04 = 0xe6;
            } else {
                out->unk_04 = 0xe5;
            }
            return;
        }
    }
    if (unk_b0->unk_728 == 0 && unk_ac != 1 && !func_02072e44(g) && *func_0209c37c(0, 0x4a) == 0) {
        if (func_0202e18c(unk_b0, &l, 1)) {
            out->unk_00 = data_ov047_0225b9a0;
            out->unk_04 = (data_ov047_0225b1d8 + l.b * 6)[l.c];
            unk_ac = 1;
            unk_b0->unk_728 = 1;
            return;
        }
    }
    unk_ac = 0;
    if (func_0202e148() == 0) {
        if (func_020851bc(func_020850e0(), 9) == 0) {
            if (unk_b0->unk_732 != 0) {
                out->unk_04 = 4;
            } else {
                out->unk_04 = 5;
            }
        } else {
            if (unk_b0->unk_732 != 0) {
                out->unk_04 = 6;
            } else {
                out->unk_04 = 7;
            }
        }
        func_020851a4(func_020850e0(), 9);
    } else if (func_020851bc(func_020850e0(), 9) == 0) {
        if (func_02070060(data_021ed0a0)) {
            if (unk_b0->unk_732 != 0) {
                out->unk_04 = 0;
            } else {
                out->unk_04 = 1;
            }
        } else {
            if (unk_b0->unk_732 != 0) {
                out->unk_04 = 8;
            } else {
                out->unk_04 = 9;
            }
        }
        unk_b0->unk_732 = 0;
        func_020851a4(func_020850e0(), 9);
    } else if (func_02070060(data_021ed0a0)) {
        if (unk_b0->unk_732 != 0) {
            out->unk_04 = 3;
            unk_b0->unk_732 = 0;
        } else {
            out->unk_04 = 2;
        }
    } else {
        if (unk_b0->unk_732 != 0) {
            out->unk_04 = 10;
            unk_b0->unk_732 = 0;
        } else {
            out->unk_04 = 11;
        }
    }
}

void Unk_ov047_0225b5d4::func_ov047_02259fd8() {
    if (!Unk_ov047_022596e8_IsNone(&unk_ca)) {
        void *p = PlayerData_GetCurrent();
        func_020701d0(data_021ed0a0, &unk_ca);
        SaveData_setFlag(gSaveData, 0xc);
        func_0209801c(p, 8);
        if (unk_c4 >= 0) {
            func_02099064(unk_c4);
            unk_c4 = -1;
        }
        unk_ca = 0xfff1;
    }
}

extern "C" void *data_ov047_0225b450[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022596e8Ev, 0};
extern "C" void *data_ov047_0225b340[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225914cEi, 0};
extern "C" void *data_ov047_0225b4f0[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225ac7cEv, 0};
extern "C" void *data_ov047_0225b328[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225914cEi, 0};
extern "C" void *data_ov047_0225b440[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022597b0Ev, 0};
extern "C" void *data_ov047_0225b570[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225abc4Ev, 0};
extern "C" void *data_ov047_0225b330[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225ad8cEv, 0};
extern "C" void *data_ov047_0225b578[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225abf8Ev, 0};
Unk_ov047_0225aeb4_Ent data_ov047_0225ba08[9] = {
    {*(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b398, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b330},
    {*(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b3a0, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b338},
    {*(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b368, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b4f0},
    {*(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b578, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b570},
    {NULL, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b568},
    {*(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b560, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b558},
    {*(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b550, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b548},
    {*(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b540, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b538},
    {*(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b530, *(Unk_ov047_0225aeb4_Fn *)data_ov047_0225b528},
};
extern "C" void *data_ov047_0225b568[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225abc0Ev, 0};
extern "C" void *data_ov047_0225b560[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225a3b0Ev, 0};
extern "C" void *data_ov047_0225b558[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225a374Ev, 0};
extern "C" void *data_ov047_0225b550[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225ab88Ev, 0};
extern "C" void *data_ov047_0225b548[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225aaecEv, 0};
extern "C" void *data_ov047_0225b540[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225aab4Ev, 0};
extern "C" void *data_ov047_0225b538[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225aa5cEv, 0};
extern "C" void *data_ov047_0225b530[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225aa58Ev, 0};
extern "C" void *data_ov047_0225b528[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225aa54Ev, 0};
extern "C" void *data_ov047_0225b520[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259580Ev, 0};
extern "C" void *data_ov047_0225b518[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225a5e8Ev, 0};
extern "C" void *data_ov047_0225b510[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225a548Ev, 0};
extern "C" void *data_ov047_0225b508[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225a3e4Ev, 0};
extern "C" Unk_ov047_SceneEntry data_ov047_0225b598 = {func_ov047_0225b0c0, 0x6e, 0x74, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov047_0225b4f8[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225a5e0Ev, 0};
extern "C" void *data_ov047_0225b400[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225955cEv, 0};

void Unk_ov047_0225b5d4::vfunc_14() {
    void *p;
    volatile u8 hdr[4];
    volatile u16 tt[3];
    if (func_020a032c()) {
        goto end;
    }
    if (strncmp((char *)&unk_04, data_ov047_0225b980, func_0212a438(data_ov047_0225b980)) != 0) {
        goto end;
    }
    if ((s32)unk_1e < 0xc) {
        if (SaveData_testFlag(gSaveData, 0xc)) {
            unk_cc = 0x44;
        } else {
            unk_cc = 0xc;
        }
        hdr[0] = unk_cc;
        TalkWindowState_setNextMessage(unk_3c, (u8 *)&hdr[0], data_ov047_0225b980);
        goto end;
    }
    if (unk_1e == 0x33 || ((s32)unk_1e >= 0x6e && (s32)unk_1e <= 0xa5)) {
        func_ov047_02259fd8();
        if (func_0207001c(data_021ed0a0)) {
            unk_cc = 0x34;
        } else {
            unk_cc = 0x27;
        }
        func_02014a4c(this);
        hdr[1] = unk_cc;
        TalkWindowState_setNextMessage(unk_3c, (u8 *)&hdr[1], data_ov047_0225b980);
        goto end;
    }
    if ((s32)unk_1e >= 0xaa && (s32)unk_1e <= 0xe1) {
        func_ov047_02259fd8();
        if (func_0206ff58(data_021ed0a0)) {
            unk_cc = 0x36;
        } else {
            unk_cc = 0x27;
        }
        func_02014a4c(this);
        hdr[2] = unk_cc;
        TalkWindowState_setNextMessage(unk_3c, (u8 *)&hdr[2], data_ov047_0225b980);
        goto end;
    }
    p = PlayerData_GetCurrent();
    unk_cc = 0xff;
    static Unk_ov047_02259a8c_Ent tbl[35] = {
        {0x14, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4d8}, {0x15, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4d0},
        {0x16, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4c8}, {0x17, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4c0},
        {0x18, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4b8}, {0x19, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4b0},
        {0x1a, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4a8}, {0x1b, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4a0},
        {0x1c, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b498}, {0x1d, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b490},
        {0x1f, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b3b8}, {0x26, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b480},
        {0x29, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b478}, {0x2e, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b470},
        {0x2f, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b3a8}, {0x30, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b460},
        {0x31, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4e8}, {0x32, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b450},
        {0x33, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b320}, {0x34, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b440},
        {0x35, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b438}, {0x36, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b430},
        {0x37, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b428}, {0x38, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b420},
        {0x39, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b418}, {0x3a, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b410},
        {0x3b, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b408}, {0x3c, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b520},
        {0x3d, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b3f0}, {0x3f, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b400},
        {0x40, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b468}, {0x41, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b4e0},
        {0x42, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b3d8}, {0x43, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b3d0},
        {0x6a, *(Unk_ov047_02259a8c_Fn *)data_ov047_0225b3c8},
    };
    u32 i = 0;
    u8 *pid = &unk_1e;
    Unk_ov047_02259a8c_Ent *tp = tbl;
    goto test;
loop:
    u32 ida = *(u32 *)((u8 *)tp + i * 12);
    u32 idb = *pid;
    if (ida == idb) {
        (this->*tp[i].fn)();
    }
    i++;
test:
    if (i < 0x23) goto loop;
    s32 v50 = *(volatile u8 *)&unk_1e;
    if (v50 >= 0x50 && v50 <= 0x67) {
        if (func_0206ffdc(data_021ed0a0)) {
            unk_cc = 0x29;
        } else if (unk_c8 == 0) {
            unk_cc = 0x27;
        } else {
            unk_cc = 0x20;
        }
        unk_ca = 0xfff1;
        func_02014a4c(this);
    }
    if (unk_1e == 0x25 || unk_1e == 0x2c || unk_1e == 0x2d || unk_1e == 0x69) {
        if (!Unk_ov047_022596e8_IsNoneT(&unk_ca, *(u16 *)&tt[0])) {
            void *g = data_021ed0a0;
            s32 a, b, r;
            func_020701d0(g, &unk_ca);
            SaveData_setFlag(gSaveData, 0xc);
            func_0209801c(p, 8);
            if (unk_c4 >= 0) {
                func_02099064(unk_c4);
                unk_c4 = -1;
            }
            a = Item_GetFossilGroup(&unk_ca);
            b = Fossil_CountInGroup(a);
            r = func_0206fe34(g, a);
            if (b == 1) {
                if (unk_1e == 0x2d) {
                    if (!Unk_ov047_022596e8_IsNoneT(&unk_ca, *(u16 *)&tt[1])) {
                        unk_cc = (u8)(a + 0x50);
                    }
                } else {
                    unk_cc = 0x2d;
                }
            } else if (b == r) {
                if (!Unk_ov047_022596e8_IsNoneT(&unk_ca, *(u16 *)&tt[2])) {
                    unk_cc = (u8)(a + 0x50);
                }
            } else {
                unk_cc = 0x26;
            }
        }
    }
    if (unk_cc != 0xff) {
        hdr[3] = unk_cc;
        TalkWindowState_setNextMessage(unk_3c, (u8 *)&hdr[3], data_ov047_0225b980);
    }
end:;
}

void Unk_ov047_0225b5d4::func_ov047_02259a64() {
    func_0201517c(this, func_ov047_0225a864, 0xd, 1);
    func_020151d0(this, 0);
    func_ov047_0225a944(0);
}

void Unk_ov047_0225b5d4::func_ov047_02259a3c() {
    func_0201517c(this, func_ov047_0225a5c0, 0xd, 1);
    func_020151d0(this, 0);
    func_ov047_0225a944(1);
}

void Unk_ov047_0225b5d4::func_ov047_02259a28() {
    func_02014918(this);
    func_ov047_022599ec();
}

void Unk_ov047_0225b5d4::func_ov047_02259a14() {
    func_02014918(this);
    unk_cc = 0x6b;
}

void Unk_ov047_0225b5d4::func_ov047_022599ec() {
    if (SaveData_testFlag(gSaveData, 0xc)) {
        unk_cc = 0x46;
    } else {
        unk_cc = 0x45;
    }
}

void Unk_ov047_0225b5d4::func_ov047_022599cc() {
    if (unk_ca != 0xfff1) {
        func_02014918(this);
    }
}

void Unk_ov047_0225b5d4::func_ov047_022598e4() {
    u16 bufa, bufb;
    if (!Unk_ov047_022596e8_IsNone(&unk_ca)) {
        void *p = PlayerData_GetCurrent();
        func_0209801c(p, 0x35);
        ItemPick_FromRange(&bufb, 0x450c, 0x34, 0, 0, 0, 1, 10, 0, 1);
        unk_ca = bufb;
        if (unk_c4 >= 0) {
            func_0209909c(&unk_ca, 0, unk_c4);
        }
        func_0201578c(this, &unk_ca, 0, 7);
        ItemPick_FromRange(&bufa, 0x450c, 0x34, &unk_ca, 1, 0, 1, 10, 0, 1);
        func_0201578c(this, &bufa, 1, 7);
    }
    unk_cc = (u8)(func_02063b8c(3) + 0x1a);
}

void Unk_ov047_0225b5d4::func_ov047_02259880() {
    if (unk_c8 == 0) {
        if (func_02072e44(data_020cbb18) == 0 && *func_0209c37c(0, 0x4a) == 0 && func_0202e148() != 0 &&
            func_02070358(data_021ed0a0, &unk_ca) == 0) {
            unk_cc = 0x69;
        } else {
            unk_cc = 0x6a;
        }
    } else {
        unk_cc = 0x1d;
    }
}

void Unk_ov047_0225b5d4::func_ov047_02259818() {
    if (func_02072e44(data_020cbb18) != 0 || *func_0209c37c(0, 0x4a) != 0) {
        func_02014918(this);
        unk_cc = 0x20;
    } else if (func_0202e148() != 0 && func_02070358(data_021ed0a0, &unk_ca) == 0) {
        unk_cc = 0x1e;
    } else {
        func_02014918(this);
        unk_cc = 0x20;
    }
}

void Unk_ov047_0225b5d4::func_ov047_02259804() {
    func_02014918(this);
    unk_cc = 0x20;
}

void Unk_ov047_0225b5d4::func_ov047_022597d8() {
    func_02014a4c(this);
    func_ov047_02259fd8();
    if (unk_c8 == 0) {
        unk_cc = 0x27;
    } else {
        unk_cc = 0x20;
    }
}

void Unk_ov047_0225b5d4::func_ov047_022597b0() {
    if (func_02070060(data_021ed0a0)) {
        unk_cc = 0x2a;
    } else {
        unk_cc = 0x2b;
    }
}

void Unk_ov047_0225b5d4::func_ov047_0225977c() {
    func_ov047_02259fd8();
    if (func_0206ff9c(data_021ed0a0)) {
        unk_cc = 0x31;
    } else {
        unk_cc = 0x27;
    }
    func_02014a4c(this);
}

void Unk_ov047_0225b5d4::func_ov047_022596e8() {
    if (unk_1e == 0x32) {
        if (!Unk_ov047_022596e8_IsNone(&unk_ca)) {
            BOOL f = FALSE;
            u32 v = unk_ca;
            if (v >= 0x12b0 && v <= 0x12e7) {
                f = TRUE;
            }
            s32 x;
            if (f) {
                x = v - 0x12b0;
            } else {
                x = -1;
            }
            unk_cc = (u8)(x + 0x6e);
        }
    }
}

void Unk_ov047_0225b5d4::func_ov047_0225965c() {
    BOOL eq;
    if (Item_IsFurniture(&unk_ca)) {
        u16 t = 0xfff1;
        s32 x = Item_GetFurnitureIndex(&unk_ca);
        if (x == Item_GetFurnitureIndex(&t)) {
            eq = TRUE;
        } else {
            eq = FALSE;
        }
    } else if (unk_ca == 0xfff1) {
        eq = TRUE;
    } else {
        eq = FALSE;
    }
    if (!eq) {
        BOOL f = FALSE;
        u32 v = unk_ca;
        if (v >= 0x12e8 && v <= 0x131f) {
            f = TRUE;
        }
        s32 t;
        if (f) {
            t = v - 0x12e8;
        } else {
            t = -1;
        }
        unk_cc = (u8)(t + 0xaa);
    }
}

void Unk_ov047_0225b5d4::func_ov047_022595a0() {
    BOOL eq;
    if (Item_IsFurniture(&unk_ca)) {
        u16 t = 0xfff1;
        s32 x = Item_GetFurnitureIndex(&unk_ca);
        if (x == Item_GetFurnitureIndex(&t)) {
            eq = TRUE;
        } else {
            eq = FALSE;
        }
    } else if (unk_ca == 0xfff1) {
        eq = TRUE;
    } else {
        eq = FALSE;
    }
    if (!eq) {
        BOOL f = FALSE;
        u32 v = unk_ca;
        if (v >= 0x450c && v <= 0x45db) {
            f = TRUE;
        }
        if (f) {
            unk_cc = 0x3a;
        } else if (v >= 0x12b0 && v <= 0x12e7) {
            unk_cc = 0x3b;
        } else if (v >= 0x12e8 && v <= 0x131f) {
            unk_cc = 0x3c;
        } else {
            unk_cc = 0x3d;
        }
    }
}

void Unk_ov047_0225b5d4::func_ov047_02259580() {
    func_02014918(this);
    unk_ca = 0xfff1;
    unk_cc = 0x23;
}

void Unk_ov047_0225b5d4::func_ov047_0225955c() {
    func_02015170(this, 0x41, 0);
    func_020151d0(this, 2);
    func_ov047_0225a944(3);
}

extern "C" void *data_ov047_0225b4d8[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259a64Ev, 0};
extern "C" void *data_ov047_0225b4d0[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022599ccEv, 0};

void Unk_ov047_0225b5d4::vfunc_18(u32 a) {
    if (!func_020a032c()) {
        static void (Unk_ov047_0225b5d4::*tbl[2])(u32) = {
            *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b3b0,
            *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b348,
        };
        u32 i = 0;
        PlayerData_GetCurrent();
        func_0209865c();
        if (unk_ac == 1) {
            i = 1;
        }
        (this->*tbl[i])(a);
    }
}

void Unk_ov047_0225b5d4::func_ov047_02259448(s32 a) {
    u8 buf[4];
    a = unk_1e;
    if (a <= 0x15) {
        ActorTalkRequest_getChoiceList(this);
        u32 r = ChoiceList_getResult();
        unk_cc = 0xff;
        if (r != 0) {
            if (SaveData_testFlag(gSaveData, 0xc)) {
                unk_cc = 0x47;
            } else {
                unk_cc = 0x48;
            }
            unk_ac = 0;
            buf[1] = unk_cc;
            TalkWindowState_setNextMessage(unk_3c, &buf[1], data_ov047_0225b980);
        } else {
            if (func_0202e18c(unk_b0, buf, 1)) {
                func_0202e174(unk_b0, buf);
            }
        }
    }
}

extern "C" void *data_ov047_0225b4b8[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022599ecEv, 0};
extern "C" void *data_ov047_0225b3d0[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259a28Ev, 0};
extern "C" void *data_ov047_0225b4a8[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259880Ev, 0};
extern "C" void *data_ov047_0225b4a0[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259880Ev, 0};
extern "C" void *data_ov047_0225b498[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259880Ev, 0};
extern "C" void *data_ov047_0225b490[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259818Ev, 0};
extern "C" void *data_ov047_0225b488[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225905cEj, 0};
extern "C" void *data_ov047_0225b480[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022597d8Ev, 0};
extern "C" void *data_ov047_0225b478[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022597b0Ev, 0};
extern "C" void *data_ov047_0225b470[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225977cEv, 0};
extern "C" void *data_ov047_0225b468[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022599ecEv, 0};
extern "C" void *data_ov047_0225b460[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225977cEv, 0};
extern "C" void *data_ov047_0225b348[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259448Ei, 0};
extern "C" void *data_ov047_0225b3a0[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225ad50Ev, 0};
extern "C" void *data_ov047_0225b448[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225914cEi, 0};
extern "C" u8 data_ov047_0225b580[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'o', 'w', 'l', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" void *data_ov047_0225b438[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225965cEv, 0};
extern "C" void *data_ov047_0225b430[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022597b0Ev, 0};
extern "C" void *data_ov047_0225b428[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022595a0Ev, 0};
extern "C" void *data_ov047_0225b420[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022595a0Ev, 0};
extern "C" void *data_ov047_0225b418[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022595a0Ev, 0};
extern "C" void *data_ov047_0225b410[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259580Ev, 0};
extern "C" void *data_ov047_0225b408[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259580Ev, 0};
extern "C" void *data_ov047_0225b380[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225912cEj, 0};
extern "C" void *data_ov047_0225b500[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225a4d0Ev, 0};
extern "C" void *data_ov047_0225b4b0[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022598e4Ev, 0};
extern "C" void *data_ov047_0225b4e8[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022597b0Ev, 0};
extern "C" void *data_ov047_0225b3e0[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259048Ej, 0};
extern "C" void *data_ov047_0225b4c8[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259a3cEv, 0};
extern "C" void *data_ov047_0225b360[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02258ffcEj, 0};
extern "C" void *data_ov047_0225b3c8[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259a14Ev, 0};
extern "C" void *data_ov047_0225b3c0[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225914cEi, 0};
extern "C" void *data_ov047_0225b3b8[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259804Ev, 0};
extern "C" void *data_ov047_0225b3b0[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022592b8Ej, 0};
extern "C" void *data_ov047_0225b3a8[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225977cEv, 0};

void Unk_ov047_0225b5d4::func_ov047_022592b8(u32 a) {
    ActorTalkRequest_getChoiceList(this);
    u32 arg = ChoiceList_getResult();
    unk_cc = 0xff;
    static Unk_ov047_022592b8_Ent tbl[17] = {
        {0xc, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b390},
        {0xe, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b388},
        {0x1e, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b370},
        {0x20, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b378},
        {0x21, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b3e8},
        {0x23, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b488},
        {0x27, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b3e0},
        {0x44, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b358},
        {0x45, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b3c0},
        {0x46, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b328},
        {0x47, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b448},
        {0x48, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b340},
        {0x6b, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b380},
        {0xe5, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b3f8},
        {0xe6, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b360},
        {0xe9, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b350},
        {0xea, *(Unk_ov047_0225b5d4::Fn1 *)data_ov047_0225b458},
    };
    u32 i = 0;
    u8 *idp = &unk_1e;
    goto test0;
loop0:
    u32 id = tbl[i].id;
    if (id == *idp) {
        (this->*((Unk_ov047_022592b8_Ent *)((u32)tbl + i * 12))->fn)(arg);
    }
    i++;
test0:
    if (i < 0x11) goto loop0;
    if (unk_cc != 0xff) {
        Unk_ov047_022592b8_Byte b;
        b.v = unk_cc;
        TalkWindowState_setNextMessage(unk_3c, &b, data_ov047_0225b980);
    }
}

extern "C" void *data_ov047_0225b390[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225914cEi, 0};
extern "C" void *data_ov047_0225b388[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259140Ej, 0};
extern "C" void *data_ov047_0225b370[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259118Ej, 0};
extern "C" void *data_ov047_0225b3f0[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259580Ev, 0};
extern "C" void *data_ov047_0225b3f8[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02258ffcEj, 0};
extern "C" void *data_ov047_0225b3e8[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022590b0Ej, 0};
extern "C" u8 data_ov047_0225b5b0[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'o', 'w', 'l', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" void *data_ov047_0225b358[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225914cEi, 0};
extern "C" void *data_ov047_0225b350[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225914cEi, 0};
extern "C" void *data_ov047_0225b458[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_0225914cEi, 0};
extern "C" void *data_ov047_0225b338[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225ad20Ev, 0};
extern "C" void *data_ov047_0225b378[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022590e4Ej, 0};
extern "C" void *data_ov047_0225b4c0[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259a3cEv, 0};
extern "C" void *data_ov047_0225b368[2] = {(void *)_ZN18Unk_ov047_0225b66419func_ov047_0225acbcEv, 0};
extern "C" void *data_ov047_0225b320[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022596e8Ev, 0};
extern "C" const u8 data_ov047_0225b1d8[32] = {0, 1, 2, 3, 0, 0, 4, 5, 6, 0, 0, 0, 7, 8, 9, 10, 0, 0, 11, 12, 13, 14, 15, 0, 16, 17, 18, 19, 20, 21, 0, 0};
extern "C" void *data_ov047_0225b4e0[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_022599ecEv, 0};
extern "C" void *data_ov047_0225b3d8[2] = {(void *)_ZN18Unk_ov047_0225b5d419func_ov047_02259a28Ev, 0};

void Unk_ov047_0225b5d4::func_ov047_0225914c(s32 a) {
    if (SaveData_testFlag(gSaveData, 0xc)) {
        if (a == 2) {
            a = 4;
        } else if (a > 2) {
            a--;
        }
    }
    switch (a) {
    case 0:
        unk_c8 = 0;
        if (func_0202e148()) {
            if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
                unk_cc = 0x41;
            } else {
                unk_cc = 0x14;
            }
        } else {
            unk_cc = 0x40;
        }
        break;
    case 1: {
        unk_c8 = 0;
        u32 r = (u32)PlayerData_GetCurrent();
        if (func_0206ea84(func_ov047_0225a5c0) == 0) {
            unk_cc = 0x18;
        } else if (func_02098044(r, 0x35) == 0) {
            unk_c8 = 1;
            unk_cc = 0x17;
        } else {
            unk_c8 = 1;
            unk_cc = 0x16;
        }
        break;
    }
    case 2:
        if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
            unk_cc = 0x4a;
        } else {
            unk_cc = 0xd;
        }
        break;
    case 3: {
        void *g = data_021ed0a0;
        s32 r = func_0206fe80(g);
        unk_cc = 0x13;
        if (r == 0) {
            unk_cc = 0x10;
        } else if (r <= 0x1e000) {
            unk_cc = 0x11;
        } else if (r <= 0x46000) {
            unk_cc = 0x12;
        } else if (func_02070060(g)) {
            unk_cc = 0x49;
        }
        break;
    }
    case 4:
        unk_cc = 0x3f;
        break;
    }
}

void Unk_ov047_0225b5d4::func_ov047_02259140(u32 a) {
    if (a == 0) {
        unk_cc = 0x14;
    }
}

void Unk_ov047_0225b5d4::func_ov047_0225912c(u32 a) {
    if (a == 0) {
        unk_cc = 0x14;
    } else {
        unk_cc = 0x28;
    }
}

void Unk_ov047_0225b5d4::func_ov047_02259118(u32 a) {
    if (a == 0) {
        unk_cc = 0x2c;
    } else {
        unk_cc = 0x1f;
    }
}

void Unk_ov047_0225b5d4::func_ov047_022590e4(u32 a) {
    if (a == 0) {
        if (func_0206ea84(func_ov047_0225a5c0) == 0) {
            unk_cc = 0x18;
        } else {
            unk_cc = 0x16;
        }
    } else {
        unk_cc = 0x3e;
    }
}

void Unk_ov047_0225b5d4::func_ov047_022590b0(u32 a) {
    if (a == 0) {
        if (func_02098044((u32)PlayerData_GetCurrent(), 0x35) == 0) {
            unk_cc = 0x4b;
        } else {
            unk_cc = 0x19;
        }
    } else {
        unk_cc = 0x15;
    }
}

void Unk_ov047_0225b5d4::func_ov047_0225905c(u32 a) {
    if (a == 0) {
        if (func_0202e148()) {
            if (func_02072e44(data_020cbb18) || *func_0209c37c(0, 0x4a) != 0) {
                unk_cc = 0x41;
            } else {
                unk_cc = 0x14;
            }
        } else {
            unk_cc = 0x40;
        }
    } else {
        unk_cc = 0x24;
    }
}

void Unk_ov047_0225b5d4::func_ov047_02259048(u32 a) {
    if (a == 0) {
        unk_cc = 0x14;
    } else {
        unk_cc = 0x28;
    }
}

void Unk_ov047_0225b5d4::func_ov047_02258ffc(u32 a) {
    if (a == 0) {
        func_0201517c(this, func_ov047_0225a4a8, 0xd, 0);
        func_020151d0(this, 0);
        func_ov047_0225a944(2);
    } else if (SaveData_testFlag(gSaveData, 0xc)) {
        unk_cc = 0xea;
    } else {
        unk_cc = 0xe9;
    }
}

// ---------------------------------------------------------------------------------------------------------------------
BOOL Unk_ov047_0225b664::vfunc_48() {
    if (func_02014220(&unk_618) || func_0201b9bc()) {
        return FALSE;
    }
    return TRUE;
}

void Unk_ov047_0225b664::vfunc_4c(u32 cmd, u32 arg) {
    s32 a, b;
    switch (cmd) {
    case 3:
        unk_558.unk_08 = arg;
        if (arg != 4) {
            func_0201b9fc(1, data_020cbb18->unk_64, arg);
            func_ov047_0225aeb4(8);
        } else if (func_0201ba88()) {
            s32 g = data_020cbb18->unk_64;
            func_0201b9fc(1, g, g);
            func_ov047_0225aeb4(8);
        }
        break;
    case 0:
        unk_558.unk_08 = arg;
        if (arg != 4 && arg != data_020cbb18->unk_64) {
            func_0201b9fc(1, arg, arg);
            func_ov047_0225aeb4(7);
        } else if (func_0201ba88()) {
            s32 g = data_020cbb18->unk_64;
            func_0201b9fc(1, g, g);
            ActorTalkRequest *p = &unk_658;
            p->vfunc_08();
            func_02015ab0(&unk_658, getPlayerActor(4));
            func_ov047_0225aeb4(3);
        }
        break;
    case 8:
        if (arg == 4) {
            if (func_020a62a0()) {
                Unk_ov047_02258e34_Global *gl = data_020cbb18;
                func_0201b9fc(1, gl->unk_64, 4);
                if (func_02072e44(gl) || *func_0209c37c(0, 0x4a) != 0) {
                    func_ov047_0225aeb4(0);
                } else {
                    func_ov047_0225aeb4(1);
                }
            } else {
                func_0201b9fc(1, 4, data_020cbb18->unk_64);
                func_ov047_0225aeb4(6);
            }
        }
        break;
    case 4:
        if (func_0201b9bc()) {
            if (func_0201ba88()) {
                a = 4;
                b = 4;
                if (func_0201b9e8(&a, &b)) {
                    if ((arg != 4 && (s32)arg == b) || arg == 4) {
                        func_0201b9fc(1, data_020cbb18->unk_64, 4);
                        func_ov047_0225aeb4(0);
                    }
                }
            }
        }
        break;
    case 1: case 2: case 5: case 6: case 7:
        break;
    }
}

// ---- data


