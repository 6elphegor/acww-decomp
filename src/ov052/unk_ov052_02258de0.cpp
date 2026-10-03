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
class Unk_ov052_0225a900;
class Unk_ov052_0225a870;

struct Unk_ov052_Vec {
    s32 x, y, z;
};

struct Unk_ov052_02259d6c_Vec {
    s32 x, y, z;
    Unk_ov052_02259d6c_Vec() {}
    ~Unk_ov052_02259d6c_Vec() {}
};

struct Unk_ov052_02258eac_Loc : Unk_ov052_Vec {
    Unk_ov052_02258eac_Loc() {}
};

struct Unk_ov052_022595dc_Out {
    char *unk_00;
    u8 unk_04;
};

struct ChoiceList {
    s32 getResult();
};

extern "C" {
void *PlayerData_GetCurrent();
void *_ZN10PlayerData11getPlayerIdEv(void *p);
s32 func_02098ffc();
s32 func_02098eb0(u16 *p);
void func_02099014(u16 *p, s32 v);
void func_02099064(s32 v);
void _ZN12Unk_020d771013func_02014e60EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_0201442013func_02014ce4EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN16ActorTalkRequest13func_0201578cEjjj(void *p, u16 *q, s32 a, s32 b);
void _ZN16ActorTalkRequest13func_020157e8Ejj(void *p, void *q, u32 a);
void _ZN16ActorTalkRequest13func_02015958Eijiii(void *p, s32 a, u32 b, s32 c, s32 d, s32 e);
BOOL func_0202e1cc(s32 a, s32 b);
u32 func_02063b8c(u32 n);
BOOL _ZN12Unk_020d77a410getAngleToEPS_(void *p, void *q);
void TalkRequest_EndTalkWith(void *p);
void TalkRequest_AddPlayerTalk6(void *p, s32 v);
void func_0209d498(void *p);
void func_02053848(void *p, s32 a, s32 b);
extern u16 data_020c6cc8;
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *self);
void _ZN12Unk_02013b1013func_020141b4Essh(void *self, u32 a, u32 b, u32 c);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
void _ZN12Unk_0201985813func_02019614Ejt(void *self, u32 a, u32 b);
s32 _ZN12Unk_0201985813func_02019790Ev(void *self);
s32 _ZN12Unk_0201985813func_020197a8Ev(void *self);
void _ZN12Unk_0201a8c413func_0201a8d0Eiiii(void *self, s32 a, s32 b, s32 c, s32 d);
void _ZN12Unk_0201a8c413func_0201a99cEs(void *self, s32 v);
void _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3(void *self, void *v);
void _ZN12Unk_0204e2f013func_0204e328EPv(void *g, void *v);
void *func_020947f0(s32 a);
s32 func_0202ff64(void *p);
void func_0202ff44();
void func_0202ffb0(s32 a);
void *func_02095204(s32 a);
s32 TalkRequest_IsActive();
s32 func_01ffcb0c(s32 a, s32 b);
void func_0204ee10(s32 *bx, s32 *by, void *pos);
void *func_ov004_02235718();
void *_ZN18Unk_ov004_0223570819func_ov004_022355d8Eiii(void *self, s32 a, s32 b, s32 c);
void *func_020b50b4();
void *func_020b6048(void *a, s32 b, s32 c);
void func_020b60b0(void *a, void *b);
u16 *func_ov004_0223ed40(s32 a, s32 b);
s32 Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
s32 Item_GetPrice(u16 *p);
s32 func_020b4934();
void func_020b4bbc(s32 a, s32 b);
BOOL func_020b50dc();
s32 _ZN12Unk_020cbb1813func_02072e44Ev(void *g);
void func_0201adc8(void *o, s32 v);
s32 func_0201ade4(void *o, s32 v);
void func_020ac894(s32 a, s32 b, s32 c);
BOOL func_020ac88c();
u16 *func_020acfa8(void *tbl, s32 a, s32 b);
void _ZN12Unk_0208632813func_020862a8EPKS_(void *a, void *b);
void _ZN12Unk_0208632813func_020862a0EPKS_(void *a, void *b);
void _ZN12Unk_0208632813func_02086298EPKS_(void *dst, void *src);
void *func_020862f4(void *p);
s32 _ZN8PlayerId13func_02094218Ev(void *p);
s32 _ZN8PlayerId13func_020941e8EPS_(void *a, void *b);
void func_0201ae00(void *out, void *self, void *v);
s32 func_020e7518(void *p);
s32 func_020e780c(s32 a, s32 b);
s32 func_020e96ec(void *a, void *b);
s32 func_020e972c(void *a, void *b);
void MI_CpuFill8(void *p, s32 v, s32 n);
s32 memcmp(void *a, void *b, s32 n);
s32 _ZN12Unk_02097ff413func_02098044Ej(void *h, u32 v);
void _ZN12Unk_02097ff413func_0209801cEj(void *h, u32 v);
void *__cxa_vec_ctor(void *, u32, u32, void (*)(void *), void (*)(void *));
extern u8 data_021ed284[];
extern u8 data_021ed2c0[];
extern u8 gTouchPrevHeld[];
extern u8 gTouchPrevChanged[];
extern u16 gPad[];
extern s16 data_02135f44[];
extern void *data_021c47c4;
extern void *data_020cbb18;
}

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
    virtual void vfunc_78(Unk_ov052_022595dc_Out *out);
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

class Unk_ov052_0225a870 : public SpNpcTalkRequest {
public:
    Unk_ov052_0225a870();
    virtual ~Unk_ov052_0225a870();
    virtual void vfunc_08();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov052_022595dc_Out *out);

    s32 func_ov052_02259a88();
    void func_ov052_02259a90(s32 v);
    void func_ov052_02259a98(s32 v);
    void func_ov052_02259274();

    s32 unk_ac;
    Unk_ov052_0225a900 *unk_b0;
    s32 unk_b4;
    s32 unk_b8;
    u8 unk_bc;
    u8 pad_bd[3];
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
    virtual void vfunc_4c(u32 cmd, u32 arg);
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
    s32 getDistanceToPlayer(u32 v);

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

class Unk_ov052_0225a900 : public Unk_020d8bc8 {
public:
    Unk_ov052_0225a900() : unk_71a(0xfff1), unk_724(0), unk_728(0) {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 cmd, u32 arg);
    virtual BOOL vfunc_58();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL func_ov052_02258e60();
    BOOL func_ov052_02258eac();
    BOOL func_ov052_02258f14();
    BOOL func_ov052_02258f34();
    BOOL func_ov052_02259b70();
    BOOL func_ov052_02259bb4();
    BOOL func_ov052_02259c04();
    BOOL func_ov052_02259d1c();
    BOOL func_ov052_02259d5c();
    BOOL func_ov052_02259d60();
    BOOL func_ov052_02259d64();
    BOOL func_ov052_02259d68();
    BOOL func_ov052_02259d6c();
    BOOL func_ov052_02259db0();
    BOOL func_ov052_02259de8();
    BOOL func_ov052_02259e30();
    BOOL func_ov052_02259e68();
    BOOL func_ov052_02259f68();
    BOOL func_ov052_02259f9c();
    BOOL func_ov052_0225a09c();
    BOOL func_ov052_0225a0d0();
    BOOL func_ov052_0225a198();
    BOOL func_ov052_0225a1cc();
    BOOL func_ov052_0225a26c();
    BOOL func_ov052_0225a29c();
    BOOL func_ov052_0225a2b0();
    void func_ov052_0225a2cc(s32 state);

    s32 unk_654;
    Unk_ov052_0225a870 unk_658;
    u16 unk_718;
    u16 unk_71a;
    ItemId unk_71c[3];
    s32 unk_724;
    s32 unk_728;
    u8 unk_72c;
    u8 unk_72d;
    u8 unk_72e;
    u8 unk_72f[5];
    u8 unk_734[5];
};

struct Unk_ov052_0225a2cc_Ent {
    BOOL (Unk_ov052_0225a900::*enter)();
    BOOL (Unk_ov052_0225a900::*exit)();
};

struct Unk_ov052_SceneEntry {
    Unk_ov052_0225a900 *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

struct Unk_ov052_MsgRow {
    const char *name;
    u8 id;
    u8 pad[3];
};

extern "C" {
extern char data_ov052_0225a810[];
extern const Unk_ov052_MsgRow data_ov052_0225a5a4[13];
extern Unk_ov052_0225a2cc_Ent data_ov052_0225a9c0[11];
#define MSG_ID(i) (((u8 (*)[8])((u8 *)data_ov052_0225a5a4 + 4))[i][0])
extern u8 data_ov052_0225a81c[];
extern u8 data_ov052_0225a84c[];
extern Unk_ov052_SceneEntry data_ov052_0225a834;
Unk_ov052_0225a900 *func_ov052_0225a450();
BOOL func_ov052_02259a18(void *self);
s32 func_ov052_02259b1c(void *self, u8 *buf, s32 n);
s32 func_ov052_02259b50(void *self, u8 *buf, s32 n);
}

static inline BOOL Unk_ov052_022595dc_Eq(u16 *p, u16 *k) {
    if (Item_IsFurniture(p)) {
        *k = 0xfff1;
        s32 a = Item_GetFurnitureIndex(p);
        if (a == Item_GetFurnitureIndex(k)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

static inline BOOL Unk_ov052_022595dc_Eq2(u16 *p, u16 *q) {
    if (Item_IsFurniture(p)) {
        s32 a = Item_GetFurnitureIndex(p);
        return a == Item_GetFurnitureIndex(q) ? TRUE : FALSE;
    }
    return *p == *q ? TRUE : FALSE;
}

static inline BOOL Unk_ov052_022595dc_EqK(u16 *p, u16 *k) {
    if (Item_IsFurniture(p)) {
        *k = 0xfff1;
        s32 a = Item_GetFurnitureIndex(p);
        return a == Item_GetFurnitureIndex(k) ? TRUE : FALSE;
    }
    return *p == 0xfff1 ? TRUE : FALSE;
}

static inline BOOL Unk_ov052_02258f34_Flags() {
    if (gTouchPrevHeld[0] && gTouchPrevChanged[0]) {
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_ov052_02258f34_Eq(u16 *p, u16 *k) {
    if (Item_IsFurniture(p)) {
        *k = 0xfff1;
        s32 a = Item_GetFurnitureIndex(p);
        if (a == Item_GetFurnitureIndex(k)) return TRUE;
        return FALSE;
    }
    if (*p == 0xfff1) return TRUE;
    return FALSE;
}

// ---------------------------------------------------------------------------------------------------------------------

Unk_ov052_0225a900 *func_ov052_0225a450() {
    return new Unk_ov052_0225a900();
}

BOOL Unk_ov052_0225a900::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov052_02259a98((s32)this);
    unk_718 = data_020c6cc8;
    MI_CpuFill8(unk_72f, 0, 5);
    MI_CpuFill8(unk_734, 0, 5);
    _ZN12Unk_0201a8c413func_0201a8d0Eiiii(&unk_350, 2, 0x400, 0x133, 0x199);
    return TRUE;
}

BOOL Unk_ov052_0225a900::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    if (func_020b50dc()) {
        func_ov052_0225a2cc(1);
    } else {
        func_ov052_0225a2cc(0);
    }
    func_0202ffb0(0);
    unk_71a = 0xfff1;
    for (s32 i = 0; i < 3; i++) {
        unk_71c[i].unk_00 = 0xfff1;
    }
    return TRUE;
}

u8 *Unk_ov052_0225a900::getTexturePath() { return data_ov052_0225a84c; }

u8 *Unk_ov052_0225a900::getModelPath() { return data_ov052_0225a81c; }

BOOL Unk_ov052_0225a900::updateAct() {
    BOOL r = FALSE;
    if (data_ov052_0225a9c0[unk_654].exit != NULL) {
        r = (this->*data_ov052_0225a9c0[unk_654].exit)();
    }
    return r;
}

void Unk_ov052_0225a900::func_ov052_0225a2cc(s32 state) {
    BOOL ok = TRUE;
    if (data_ov052_0225a9c0[state].enter) {
        ok = (this->*data_ov052_0225a9c0[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov052_0225a900::func_ov052_0225a2b0() {
    unk_658.func_ov052_02259a90(0);
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_0225a29c() {
    TalkRequest_AddPlayerTalk6(this, 0);
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_0225a26c() {
    _ZN12Unk_0201985813func_02019614Ejt(&unk_564, 1, unk_718);
    unk_718 = data_020c6cc8;
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_0225a1cc() {
    Unk_ov052_Vec *pv = (Unk_ov052_Vec *)func_020947f0(4);
    Unk_ov052_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 r6 = getDistanceToPlayer(4);
    s32 t = getAngleToPlayer(4);
    s32 r4 = func_020e780c(unk_8e, t);
    Unk_ov052_Vec out;
    func_0201ae00(&out, this, &v);
    if (r6 > 0x3000 && func_020e96ec(&out, &unk_5c)) {
        func_ov052_0225a2cc(3);
    } else if (r4 > 0x2000) {
        func_ov052_0225a2cc(2);
    }
    if (func_ov052_02258eac()) {
        return TRUE;
    }
    if (func_ov052_02258e60()) {
        return TRUE;
    }
    func_ov052_02258f14();
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_0225a198() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_0225a0d0() {
    if (func_ov052_02258eac()) {
        return TRUE;
    }
    if (func_ov052_02258e60()) {
        return TRUE;
    }
    if (func_ov052_02258f14()) {
        return TRUE;
    }
    Unk_ov052_Vec *pv = (Unk_ov052_Vec *)func_020947f0(4);
    Unk_ov052_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 r6 = getDistanceToPlayer(4);
    s32 r4 = getAngleToPlayer(4);
    func_020e780c(unk_8e, r4);
    Unk_ov052_Vec out;
    func_0201ae00(&out, this, &v);
    if (r6 > 0x3000) {
        if (func_020e96ec(&out, &unk_5c)) {
            func_ov052_0225a2cc(3);
            return TRUE;
        }
    }
    _ZN12Unk_0201a8c413func_0201a99cEs(&unk_350, r4);
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 3) {
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            func_ov052_0225a2cc(1);
        }
    }
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_0225a09c() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_02259f9c() {
    if (func_ov052_02258eac()) {
        return TRUE;
    }
    if (func_ov052_02258e60()) {
        return TRUE;
    }
    if (func_ov052_02258f14()) {
        return TRUE;
    }
    Unk_ov052_Vec *pv = (Unk_ov052_Vec *)func_020947f0(4);
    Unk_ov052_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 t = getDistanceToPlayer(4);
    Unk_ov052_Vec out;
    func_0201ae00(&out, this, &v);
    if (t > 0x4000) {
        if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 1) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 2) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3(&unk_350, &out);
    if (t <= 0x3000 || func_020e972c(&out, &unk_5c) != 0) {
        func_ov052_0225a2cc(1);
    }
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_02259f68() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_02259e68() {
    if (func_ov052_02258eac()) {
        return TRUE;
    }
    if (func_ov052_02258e60()) {
        return TRUE;
    }
    if (func_ov052_02258f14()) {
        return TRUE;
    }
    Unk_ov052_Vec *pv = (Unk_ov052_Vec *)func_020947f0(4);
    Unk_ov052_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 t = getDistanceToPlayer(4);
    Unk_ov052_Vec out;
    func_0201ae00(&out, this, &v);
    if (t > 0x4000) {
        if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 1) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 2) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3(&unk_350, &out);
    if (t <= 0x3000 || func_020e972c(&out, &unk_5c) != 0) {
        func_ov052_0225a2cc(1);
    }
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_02259e30() {
    void *p = unk_658.func_02015aac();
    s32 r = 0;
    if (p) {
        r = _ZN12Unk_020d77a410getAngleToEPS_(this, p);
    }
    _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, r, 0);
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_02259de8() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618)) {
        return TRUE;
    }
    if (unk_72c != 0 && func_020ac88c() == 0) {
        return TRUE;
    }
    TalkRequest_EndTalkWith(this);
    func_ov052_0225a2cc(7);
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_02259db0() {
    void *p = unk_658.func_02015aac();
    s32 r = 0;
    if (p) {
        r = _ZN12Unk_020d77a410getAngleToEPS_(this, p);
    }
    _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, r, 1);
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_02259d6c() {
    Unk_ov052_02259d6c_Vec *pv = (Unk_ov052_02259d6c_Vec *)func_020947f0(4);
    Unk_ov052_02259d6c_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        func_020b4bbc(func_020b4934(), 0);
        func_ov052_0225a2cc(7);
    }
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_02259d68() { return TRUE; }

BOOL Unk_ov052_0225a900::func_ov052_02259d64() { return TRUE; }

BOOL Unk_ov052_0225a900::func_ov052_02259d60() { return TRUE; }

BOOL Unk_ov052_0225a900::func_ov052_02259d5c() { return TRUE; }

BOOL Unk_ov052_0225a900::func_ov052_02259d1c() {
    unk_72d = 0x32;
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_02259c04() {
    Unk_ov052_Vec *pv = (Unk_ov052_Vec *)func_020947f0(4);
    Unk_ov052_Vec v;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    Unk_ov052_Vec out;
    func_0201ae00(&out, this, &v);
    s32 t = getDistanceToPlayer(4);
    _ZN12Unk_0204e2f013func_0204e328EPv(data_021c47c4, &unk_5c);
    if (t > 0x4000) {
        if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 1) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 2, 1, 0, 0, 0x800, 0, 0, 0, data_020c6cc8, 0);
        }
    } else {
        if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 2) {
            _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 1, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
    }
    _ZN12Unk_0201a8c413func_0201a9ecEP17Unk_0201a334_Vec3(&unk_350, &out);
    if (t <= 0x3000 || func_020e972c(&out, &unk_5c) != 0 || func_020e7518(&unk_72d) == 0) {
        unk_658.vfunc_08();
        unk_658.func_02015ab0(getPlayerActor(4));
        func_ov052_0225a2cc(5);
    }
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_02259bb4() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN12Unk_0201a8c413func_0201a99cEs(&unk_350, getAngleToPlayer(4));
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_02259b70() {
    if (_ZN12Unk_0201985813func_020197a8Ev(&unk_564) == 3) {
        if (_ZN12Unk_0201985813func_02019790Ev(&unk_564)) {
            _ZN12Unk_0201985813func_02019614Ejt(&unk_564, 1, unk_718);
        }
    }
    TalkRequest_AddPlayerTalk6(this, 0);
    return TRUE;
}

extern "C" s32 func_ov052_02259b50(void *self, u8 *buf, s32 n) {
    s32 c = 0;
    s32 i;
    for (i = 0; i < n; buf++, i++) {
        if (*buf == 0) {
            c++;
        }
    }
    return c;
}

extern "C" s32 func_ov052_02259b1c(void *self, u8 *buf, s32 n) {
    s32 k, i;
    s32 cnt = func_ov052_02259b50(self, buf, n);
    s32 r = 0;
    k = func_02063b8c(cnt);
    for (i = r; i < n; buf++, i++) {
        if (*buf == 0) {
            if (k == 0) {
                r = i;
                break;
            }
            k--;
        }
    }
    return r;
}

Unk_ov052_0225a870::Unk_ov052_0225a870() {}

Unk_ov052_0225a870::~Unk_ov052_0225a870() {}

void Unk_ov052_0225a870::vfunc_08() { ActorTalkRequest::vfunc_08(); }

void Unk_ov052_0225a870::func_ov052_02259a98(s32 v) {
    vfunc_08();
    unk_b0 = (Unk_ov052_0225a900 *)v;
    unk_b8 = -1;
    unk_bc = 0;
}

void Unk_ov052_0225a870::func_ov052_02259a90(s32 v) { unk_ac = v; }

s32 Unk_ov052_0225a870::func_ov052_02259a88() { return unk_ac; }

extern "C" BOOL func_ov052_02259a18(void *self) {
    s32 i;
    for (i = 0; (u32)i < 3; i++) {
        u16 *p = func_020acfa8(data_021ed2c0, i, 0);
        BOOL r;
        if (Item_IsFurniture(p)) {
            u16 t = 0x1547;
            r = (Item_GetFurnitureIndex(p) == Item_GetFurnitureIndex(&t)) ? TRUE : FALSE;
        } else {
            r = (*p == 0x1547) ? TRUE : FALSE;
        }
        if (!r) {
            return FALSE;
        }
    }
    return TRUE;
}

void Unk_ov052_0225a870::vfunc_78(Unk_ov052_022595dc_Out *out) {
    u16 x, b, c, k1, k4, k2, k3;
    void *h = PlayerData_GetCurrent();
    if (unk_ac == 0xc) {
        out->unk_04 = MSG_ID(unk_ac);
        out->unk_00 = (char *)data_ov052_0225a5a4[unk_ac].name;
        return;
    }
    if (unk_ac != 0 && unk_ac != 1 && unk_ac != 2) {
        u16 *pp = &unk_b0->unk_71a;
        if (Unk_ov052_022595dc_Eq(pp, &k1)) {
            if (_ZN12Unk_02097ff413func_02098044Ej(h, 0xc) != 0) {
                if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) == 0 && unk_b8 == -1) {
                    x = 0x34a8;
                    unk_b8 = func_02098eb0(&x);
                }
                if (unk_b8 >= 0) {
                    unk_ac = 5;
                } else if (func_ov052_02259a18(this)) {
                    unk_ac = 6;
                } else if (func_0202e1cc(1, 1) == 0) {
                    unk_ac = 7;
                } else {
                    if (_ZN8PlayerId13func_02094218Ev(func_020862f4(data_021ed284)) != 0 &&
                        (_ZN12Unk_0208632813func_02086298EPKS_(&b, data_021ed284), !Unk_ov052_022595dc_Eq(&b, &k2))) {
                        _ZN12Unk_0208632813func_02086298EPKS_(&c, data_021ed284);
                        _ZN16ActorTalkRequest13func_0201578cEjjj(this, &c, 0, 7);
                        u16 *r6 = (u16 *)_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent());
                        u16 *r7 = (u16 *)func_020862f4(data_021ed284);
                        if (!(r7[0] == r6[0] && memcmp(r7 + 1, r6 + 1, 8) == 0 && _ZN8PlayerId13func_020941e8EPS_(r7, r6) != 0)) {
                            _ZN16ActorTalkRequest13func_020157e8Ejj(this, func_020862f4(data_021ed284), 1);
                            unk_ac = 8;
                        } else {
                            _ZN16ActorTalkRequest13func_020157e8Ejj(this, _ZN10PlayerData11getPlayerIdEv(h), 1);
                            unk_ac = 9;
                        }
                    } else {
                        unk_ac = 0xa;
                    }
                }
            }
        }
    }
    if (unk_ac < 0 || unk_ac >= 0xd) {
        return;
    }
    out->unk_04 = MSG_ID(unk_ac);
    if (_ZN12Unk_02097ff413func_02098044Ej(h, 0xc) != 0) {
        if (unk_ac == 0xa) {
            out->unk_04 = func_02063b8c(4) + 0x17;
            if (out->unk_04 == 0x1a) {
                out->unk_04 = 0x30;
            }
        }
        s32 hit = 0;
        if (!Unk_ov052_022595dc_Eq(&unk_b0->unk_71a, &k3)) {
            unk_b4 = Item_GetPrice(&unk_b0->unk_71a) * 2;
            _ZN16ActorTalkRequest13func_0201578cEjjj(this, &unk_b0->unk_71a, 1, 7);
            _ZN16ActorTalkRequest13func_02015958Eijiii(this, unk_b4, 2, 10, 1, 0);
            s32 i;
            for (i = 0; i < 3; i++) {
                u16 *p, *q1;
                q1 = &unk_b0->unk_71c[i].unk_00;
                p = &unk_b0->unk_71a;
                if (Unk_ov052_022595dc_Eq2(p, q1)) {
                    out->unk_04 = 0x1d;
                    break;
                }
                u16 *q = &unk_b0->unk_71c[i].unk_00;
                if (Unk_ov052_022595dc_EqK(q, &k4)) {
                    hit = i;
                }
            }
            if (out->unk_04 != 0x1d) {
                s32 idx = func_ov052_02259b1c(unk_b0, unk_b0->unk_72f, 5);
                if (unk_b0->unk_72f[idx] == 0) {
                    unk_b0->unk_72f[idx] = 1;
                    *(u16 *)((u8 *)unk_b0 + 0x71c + hit * 2) = unk_b0->unk_71a;
                }
                if (func_ov052_02259b50(unk_b0, unk_b0->unk_72f, 5) == 0) {
                    MI_CpuFill8(unk_b0->unk_72f, 0, 5);
                    unk_b0->unk_72f[idx] = 1;
                    *(u16 *)((u8 *)unk_b0 + 0x71c + hit * 2) = unk_b0->unk_71a;
                }
                out->unk_04 = idx + 0x1e;
            }
        }
    }
    out->unk_00 = (char *)data_ov052_0225a5a4[unk_ac].name;
}

void Unk_ov052_0225a870::vfunc_14() {
    char *tbl = data_ov052_0225a810;
    u32 msg = 0xff;
    u16 v[4];
    void *h = PlayerData_GetCurrent();
    switch (unk_1e) {
    case 0x2e:
        v[1] = 0x36fc;
        _ZN12Unk_020d771013func_02014e60EPtjjj(this, &v[1], 0, 5, 0);
        v[2] = 0x36fc;
        func_02099014(&v[2], 0);
        msg = 0x2f;
    case 0x2d:
        unk_b8 = -2;
        break;
    case 6:
        if (_ZN12Unk_02097ff413func_02098044Ej(h, 0xc) == 0) {
            func_ov052_02259a90(3);
        } else {
            func_ov052_02259a90(10);
        }
        break;
    case 7:
        func_ov052_02259a90(4);
        break;
    case 0x10:
        v[3] = 0x149d;
        _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &v[3], 0, 5, 0);
        unk_b0->unk_71a = 0xfff1;
        msg = 0x11;
        func_0201adc8(unk_b0, 0xbb8);
        func_ov052_02259a90(7);
        _ZN12Unk_02097ff413func_0209801cEj(h, 0xc);
        func_0202e1cc(1, 1);
        break;
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
        func_ov052_02259274();
        break;
    }
    if (msg != 0xff) {
        *(u8 *)v = msg;
        unk_3c->setNextMessage((u8 *)v, tbl);
    }
}

void Unk_ov052_0225a870::vfunc_18() {
    s32 t = getChoiceList()->getResult();
    char *tbl = data_ov052_0225a810;
    u32 msg = 0xff;
    u16 v[2];
    switch (unk_1e) {
    case 0x2c:
        if (t == 0) {
            if (unk_b8 >= 0) {
                func_02099064(unk_b8);
                v[1] = 0x34a8;
                _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &v[1], 0, 5, 0);
            }
            msg = 0x2e;
        }
        break;
    case 7:
    case 0x12:
        if (t != 0) {
            if (func_0201ade4(unk_b0, 0xbb8) == 0) {
                msg = 0xa;
            } else if (unk_bc == 0) {
                msg = 8;
            } else {
                msg = 0xc;
            }
        }
        break;
    case 9:
        unk_bc = 1;
        if (t == 0) {
            msg = 0xc;
        }
        break;
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
        if (t == 0) {
            if (func_0201ade4(unk_b0, unk_b4) != 0) {
                if (func_02098ffc() >= 0) {
                    s32 idx = func_ov052_02259b1c(unk_b0, unk_b0->unk_734, 5);
                    unk_b0->unk_734[idx] = 1;
                    if (func_ov052_02259b50(unk_b0, unk_b0->unk_734, 5) == 0) {
                        MI_CpuFill8(unk_b0->unk_734, 0, 5);
                        unk_b0->unk_734[idx] = 1;
                    }
                    msg = (u8)(idx + 0x24);
                    break;
                }
                msg = 0x2a;
            } else {
                msg = 0x29;
            }
        }
        unk_b0->unk_71a = 0xfff1;
        break;
    }
    if (msg != 0xff) {
        *(u8 *)v = msg;
        unk_3c->setNextMessage((u8 *)v, tbl);
    }
}

void Unk_ov052_0225a870::func_ov052_02259274() {
    func_0201adc8(unk_b0, unk_b4);
    func_02099014(&unk_b0->unk_71a, 0);
    func_020ac894(unk_b0->unk_724, unk_b0->unk_728, 0xf);
    u8 *const g = data_021ed284;
    _ZN12Unk_0208632813func_020862a8EPKS_(g, _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
    _ZN12Unk_0208632813func_020862a0EPKS_(g, &unk_b0->unk_71a);
    _ZN16ActorTalkRequest13func_02015958Eijiii(this, unk_b4, 2, 10, 1, 0);
    unk_b0->unk_71a = 0xfff1;
    unk_b0->unk_72e = 1;
}

BOOL Unk_ov052_0225a900::vfunc_48() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) != 0 || func_0201b9bc() != 0 || func_ov052_02258f14() != 0) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_ov052_0225a900::vfunc_58() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) != 0 || func_0201b9bc() != 0) {
        return FALSE;
    }
    return TRUE;
}

void Unk_ov052_0225a900::vfunc_4c(u32 cmd, u32 arg) {
    unk_558.unk_08 = arg;
    switch (cmd) {
    case 3:
        func_ov052_0225a2cc(8);
        break;
    case 1:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(getPlayerActor(4));
        if (unk_658.func_ov052_02259a88() == 0) {
            func_ov052_0225a2cc(5);
        } else if (unk_658.func_ov052_02259a88() == 1 || unk_658.func_ov052_02259a88() == 2 ||
                   unk_658.func_ov052_02259a88() == 0xc) {
            func_ov052_0225a2cc(6);
        } else {
            func_ov052_0225a2cc(9);
        }
        break;
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0(getPlayerActor(4));
        func_ov052_0225a2cc(5);
        break;
    case 8:
        if (unk_658.func_ov052_02259a88() == 1 || unk_658.func_ov052_02259a88() == 2) {
            Unk_ov052_Vec v;
            Unk_ov052_Vec *src = (Unk_ov052_Vec *)func_020947f0(4);
            v = *src;
            if (func_0202ff64(&v)) {
                func_0202ff44();
            } else {
                func_ov052_0225a2cc(1);
            }
        } else if (unk_658.func_ov052_02259a88() == 0xc) {
            func_020b4bbc(func_020b4934(), 0);
        } else {
            func_ov052_0225a2cc(1);
        }
        break;
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
        break;
    }
}

BOOL Unk_ov052_0225a900::func_ov052_02258f34() {
    u16 t[2];
    s32 bx, by;
    Unk_ov052_Vec v;
    Character *p = (Character *)func_02095204(4);
    BOOL f = Unk_ov052_02258f34_Flags() ? TRUE : FALSE;
    if (p == 0 || TalkRequest_IsActive() != 0 || _ZN12Unk_02013b1013func_02014220Ev(&unk_618) != 0 || ((gPad[1] & 1) == 0 && f == 0)) {
        return FALSE;
    }
    Unk_ov052_Vec *pv = (Unk_ov052_Vec *)&p->unk_5c;
    v.x = p->unk_5c;
    v.y = pv->y;
    v.z = pv->z;
    u32 ang = p->unk_8e;
    bx = 0;
    by = 0;
    s32 idx = ((u16)ang >> 4) * 2;
    v.x += func_01ffcb0c(0x2000, data_02135f44[idx]);
    v.z += func_01ffcb0c(0x2000, data_02135f44[idx + 1]);
    func_0204ee10(&bx, &by, &v);
    if (f) {
        void *o = _ZN18Unk_ov004_0223570819func_ov004_022355d8Eiii(func_ov004_02235718(), bx, by, 0);
        if (o != 0) {
            if (o != func_020b6048(func_020b50b4(), 0, 0)) {
                return FALSE;
            }
        } else {
            s32 bx2 = 0, by2 = 0;
            Unk_ov052_Vec v2;
            func_020b60b0(func_020b50b4(), &v2);
            func_0204ee10(&bx2, &by2, &v2);
            if (bx2 != bx || by2 != by) {
                return FALSE;
            }
        }
    }
    t[0] = *func_ov004_0223ed40(bx, by);
    if (Unk_ov052_02258f34_Eq(&t[0], &t[1])) {
        return FALSE;
    }
    unk_71a = t[0];
    unk_724 = bx;
    unk_728 = by;
    unk_72c = 0;
    return TRUE;
}

BOOL Unk_ov052_0225a900::func_ov052_02258f14() {
    if (func_ov052_02258f34()) {
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov052_0225a900::func_ov052_02258eac() {
    Unk_ov052_02258eac_Loc v;
    Unk_ov052_Vec *src = (Unk_ov052_Vec *)func_020947f0(4);
    *(Unk_ov052_Vec *)&v = *src;
    if (func_0202ff64(&v)) {
        if (unk_72e == 0) {
            unk_658.func_ov052_02259a90(1);
        } else {
            unk_658.func_ov052_02259a90(2);
        }
        TalkRequest_AddPlayerTalk6(this, 0);
        func_ov052_0225a2cc(0xa);
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov052_0225a900::func_ov052_02258e60() {
    if (TalkRequest_IsActive()) {
        return FALSE;
    }
    u32 buf[2];
    buf[0] = 0;
    buf[1] = 0;
    func_0209d498(buf);
    if (((u8 *)buf)[2] < 6) {
        unk_658.func_ov052_02259a90(0xc);
        TalkRequest_AddPlayerTalk6(this, 0);
        return TRUE;
    }
    return FALSE;
}

// Data
extern "C" char data_ov052_0225a810[] = "sp_npc_fox";
extern "C" u8 data_ov052_0225a81c[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'f', 'o', 'x', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" u8 data_ov052_0225a84c[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 'f', 'o', 'x', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" Unk_ov052_SceneEntry data_ov052_0225a834 = {func_ov052_0225a450, 0x55, 0x5c, 2, 0x5000, 0x5000, 0x3e800};

extern "C" const Unk_ov052_MsgRow data_ov052_0225a5a4[13] = {
    {data_ov052_0225a810, 0x06, {0, 0, 0}}, {data_ov052_0225a810, 0x1c, {0, 0, 0}}, {data_ov052_0225a810, 0x1b, {0, 0, 0}},
    {data_ov052_0225a810, 0x07, {0, 0, 0}}, {data_ov052_0225a810, 0x12, {0, 0, 0}}, {data_ov052_0225a810, 0x2c, {0, 0, 0}},
    {data_ov052_0225a810, 0x1a, {0, 0, 0}}, {data_ov052_0225a810, 0x14, {0, 0, 0}}, {data_ov052_0225a810, 0x16, {0, 0, 0}},
    {data_ov052_0225a810, 0x15, {0, 0, 0}}, {data_ov052_0225a810, 0x17, {0, 0, 0}}, {data_ov052_0225a810, 0x1e, {0, 0, 0}},
    {data_ov052_0225a810, 0x33, {0, 0, 0}},
};

extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_02259b70Ev();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_02259bb4Ev();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_02259c04Ev();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_02259d1cEv();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_02259d5cEv();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_02259d60Ev();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_02259d64Ev();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_02259d68Ev();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_02259d6cEv();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_02259db0Ev();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_02259de8Ev();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_02259e30Ev();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_02259e68Ev();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_02259f68Ev();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_02259f9cEv();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_0225a09cEv();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_0225a0d0Ev();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_0225a198Ev();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_0225a1ccEv();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_0225a26cEv();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_0225a29cEv();
extern "C" void _ZN18Unk_ov052_0225a90019func_ov052_0225a2b0Ev();
extern "C" void *data_ov052_0225a788[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_02259db0Ev, 0};
extern "C" void *data_ov052_0225a768[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_0225a29cEv, 0};
extern "C" void *data_ov052_0225a808[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_0225a198Ev, 0};
extern "C" void *data_ov052_0225a800[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_0225a1ccEv, 0};
extern "C" void *data_ov052_0225a7f8[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_0225a09cEv, 0};
extern "C" void *data_ov052_0225a7f0[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_02259f9cEv, 0};
extern "C" void *data_ov052_0225a7e8[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_02259f68Ev, 0};
extern "C" void *data_ov052_0225a7e0[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_02259e68Ev, 0};
extern "C" void *data_ov052_0225a7d8[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_02259e30Ev, 0};
extern "C" void *data_ov052_0225a7d0[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_02259de8Ev, 0};
extern "C" void *data_ov052_0225a7b8[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_02259d68Ev, 0};
extern "C" void *data_ov052_0225a7c0[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_02259b70Ev, 0};
extern "C" void *data_ov052_0225a7c8[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_0225a26cEv, 0};
extern "C" void *data_ov052_0225a7b0[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_02259d64Ev, 0};
extern "C" void *data_ov052_0225a7a8[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_02259d60Ev, 0};
extern "C" void *data_ov052_0225a7a0[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_0225a0d0Ev, 0};
extern "C" void *data_ov052_0225a798[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_02259d1cEv, 0};
extern "C" void *data_ov052_0225a790[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_02259c04Ev, 0};
extern "C" void *data_ov052_0225a760[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_0225a2b0Ev, 0};
extern "C" void *data_ov052_0225a780[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_02259bb4Ev, 0};
extern "C" void *data_ov052_0225a778[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_02259d6cEv, 0};
extern "C" void *data_ov052_0225a770[2] = {(void *)_ZN18Unk_ov052_0225a90019func_ov052_02259d5cEv, 0};
typedef BOOL (Unk_ov052_0225a900::*Unk_ov052_Fn)();
extern "C" Unk_ov052_0225a2cc_Ent data_ov052_0225a9c0[11] = {
    {*(Unk_ov052_Fn *)data_ov052_0225a760, *(Unk_ov052_Fn *)data_ov052_0225a768},
    {*(Unk_ov052_Fn *)data_ov052_0225a7c8, *(Unk_ov052_Fn *)data_ov052_0225a800},
    {*(Unk_ov052_Fn *)data_ov052_0225a808, *(Unk_ov052_Fn *)data_ov052_0225a7a0},
    {*(Unk_ov052_Fn *)data_ov052_0225a7f8, *(Unk_ov052_Fn *)data_ov052_0225a7f0},
    {*(Unk_ov052_Fn *)data_ov052_0225a7e8, *(Unk_ov052_Fn *)data_ov052_0225a7e0},
    {*(Unk_ov052_Fn *)data_ov052_0225a7d8, *(Unk_ov052_Fn *)data_ov052_0225a7d0},
    {*(Unk_ov052_Fn *)data_ov052_0225a788, *(Unk_ov052_Fn *)data_ov052_0225a778},
    {*(Unk_ov052_Fn *)data_ov052_0225a7b8, *(Unk_ov052_Fn *)data_ov052_0225a7b0},
    {*(Unk_ov052_Fn *)data_ov052_0225a7a8, *(Unk_ov052_Fn *)data_ov052_0225a770},
    {*(Unk_ov052_Fn *)data_ov052_0225a798, *(Unk_ov052_Fn *)data_ov052_0225a790},
    {*(Unk_ov052_Fn *)data_ov052_0225a780, *(Unk_ov052_Fn *)data_ov052_0225a7c0},
};
