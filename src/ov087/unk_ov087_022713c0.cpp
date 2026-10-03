// mwcc-flags: -str reuse
#include "types.h"

#pragma opt_loop_invariants off

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
class Unk_ov087_02271eac;
class Unk_ov087_02271e1c;
struct Unk_ov087_022718ec_Out;

struct Unk_ov087_Vec {
    s32 x, y, z;
};

struct ChoiceList {
    s32 getResult();
};

extern "C" {
void *PlayerData_GetCurrent();
void *_ZN10PlayerData13func_0209865cEv(void *p);
void *_ZN10PlayerData13func_0209868cEv(void *p);
void _ZN12Unk_02087ad813func_02087b24Ev(void *p);
s32 func_02098ffc();
s32 func_02098eb0(u16 *p);
BOOL func_02099014(u16 *p, s32 v);
void func_02099064(s32 v);
void _ZN12Unk_020d771013func_02014e60EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_0201442013func_02014ce4EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN16ActorTalkRequest13func_0201578cEjjj(void *p, u16 *q, s32 a, s32 b);
BOOL func_0202e1cc(s32 a, s32 b);
u32 func_02063b8c(u32 n);
BOOL _ZN12Unk_020d77a410getAngleToEPS_(void *p, void *q);
void TalkRequest_EndTalkWith(void *p);
void func_020ac7cc(u16 *p);
void func_0209d498(void *p);
void *func_020850e0();
BOOL func_020851bc(void *p, s32 v);
void func_020851a4(void *p, s32 v);
void func_02085290(void *p);
void _ZN12Unk_0208581013func_02085900Ej(void *p, s32 v);
void _ZN8SaveData7setFlagEj(void *p, s32 v);
void func_020856a4(void *p, s32 v);
u32 func_0203f42c(s32 v);
void func_02053848(void *p, s32 a, s32 b);
void _ZN12Unk_0201635013func_0201610cEP16Unk_02015fe0_Objiiiiti(void *p, void *owner, s32 a, s32 b, s32 s0, s32 s1, s32 s2, s32 s3);
extern u16 data_020c6cc8;
BOOL _ZN12Unk_02013b1013func_02014220Ev(void *self);
void _ZN12Unk_02013b1013func_020141b4Essh(void *self, u32 a, u32 b, u32 c);
void _ZN12Unk_0201985813func_020196b4Ejiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
extern u8 data_021ed24c[];
extern u8 gSaveData[];
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
    virtual void vfunc_78(Unk_ov087_022718ec_Out *out);
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
struct Unk_ov087_022718ec_Out {
    u8 *a;
    u8 b;
};

class Unk_ov087_02271e1c : public SpNpcTalkRequest {
public:
    Unk_ov087_02271e1c();
    virtual ~Unk_ov087_02271e1c();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov087_022718ec_Out *out);

    void func_ov087_02271960(Unk_ov087_02271eac *owner);

    Unk_ov087_02271eac *unk_ac;
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

class Unk_ov087_02271eac : public Unk_020d8bc8 {
public:
    Unk_ov087_02271eac() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(u32 a, u32 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL func_ov087_02271a34();
    BOOL func_ov087_02271a38();
    BOOL func_ov087_022719fc();
    BOOL func_ov087_022719d0();
    BOOL func_ov087_022719cc();
    void func_ov087_02271a6c(s32 state);

    s32 unk_654;
    Unk_ov087_02271e1c unk_658;
};

struct Unk_ov087_02271a6c_Ent {
    BOOL (Unk_ov087_02271eac::*enter)();
    BOOL (Unk_ov087_02271eac::*exit)();
};

struct Unk_ov087_02271cc4_Ent {
    const char *a;
    s32 b;
};

struct MsgString33 {
    u32 unk_00[0xd];
    MsgString33();
    ~MsgString33();
};

extern "C" {
void *_ZN10PlayerData11getPlayerIdEv(void *p);
void String_Load(void *o, u8 *c, s32 a);
void MailText_SetSlot(void *p, void *o);
void func_020656dc(void *obj, u8 *c, void *str, void *d44, void *d40, void *x);
u32 Item_MakePaper(u32 a, u32 b);
void *_ZN10PlayerData10getCatalogEv(void *p);
void func_0203c41c(void *p, u16 *q, s32 a);
u32 func_02099048(s32 i);
BOOL Item_IsFurniture(u16 *p);
s32 Item_GetFurnitureIndex(u16 *p);
BOOL func_0206ea84(u32 cb);
BOOL _ZN12Unk_02097ff413func_02098044Ej(void *p, u32 n);
void _ZN12Unk_02097ff413func_0209801cEj(void *p, u32 n);
u32 _ZN12Unk_02087ad813func_02087c0cEv(void *p);
u32 _ZN12Unk_02087ad813func_02087c20Ev(void *p);
void _ZN12Unk_02087ad813func_02087c10Ei(void *p, s32 n);
void _ZN12Unk_02087ad813func_02087bf8Ev(void *p);
void _ZN16ActorTalkRequest13func_02015958Eijiii(void *p, s32 a, u32 b, s32 c, s32 d, s32 e);
BOOL func_ov087_022718c4(u16 *p, u32 m);
s32 func_020991fc();
void *func_020991e4();
extern const u8 data_ov087_02271ce4[];
extern u8 data_ov087_02271dc8[];
extern u8 data_ov087_02271df8[];
extern u32 data_ov087_02271d80;
extern u32 data_ov087_02271d84;
extern const Unk_ov087_02271cc4_Ent data_ov087_02271cc4[4];
extern Unk_ov087_02271a6c_Ent data_ov087_02271f80[3];
}

struct Unk_ov087_SceneEntry {
    Unk_ov087_02271eac *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};
extern "C" Unk_ov087_02271eac *func_ov087_02271bac();
extern "C" char data_ov087_02271db0[];
extern "C" char data_ov087_02271dbc[];
extern "C" u32 data_ov087_02271d84 = 0xe;
extern "C" u8 data_ov087_02271df8[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','d','n','k','_','t','e','x','.','n','s','b','t','x',0};
extern "C" Unk_ov087_SceneEntry data_ov087_02271de0 = {func_ov087_02271bac, 0x5f, 0x66, 2, 0x5000, 0x5000, 0x3e800};
extern "C" char data_ov087_02271db0[] = "st_fortune";
extern "C" const Unk_ov087_02271cc4_Ent data_ov087_02271cc4[4] = {
    {data_ov087_02271db0, 0}, {data_ov087_02271dbc, 1}, {data_ov087_02271dbc, 2}, {data_ov087_02271dbc, 3},
};
extern "C" const u8 data_ov087_02271ce4[0x30] = {24,50,5,0,32,50,10,0,36,50,25,0,20,50,40,0,12,50,60,0,16,50,80,0,40,50,100,0,28,50,120,0,44,50,140,0,8,50,170,0,13,17,200,0,81,17,230,0};
extern "C" void _ZN18Unk_ov087_02271eac19func_ov087_02271a38Ev();
extern "C" void _ZN18Unk_ov087_02271eac19func_ov087_02271a34Ev();
extern "C" void _ZN18Unk_ov087_02271eac19func_ov087_022719fcEv();
extern "C" void _ZN18Unk_ov087_02271eac19func_ov087_022719d0Ev();
extern "C" void _ZN18Unk_ov087_02271eac19func_ov087_022719ccEv();
extern "C" void *data_ov087_02271da8[2] = {(void *)_ZN18Unk_ov087_02271eac19func_ov087_022719fcEv, 0};
extern "C" void *data_ov087_02271d90[2] = {(void *)_ZN18Unk_ov087_02271eac19func_ov087_022719ccEv, 0};
extern "C" void *data_ov087_02271d88[2] = {(void *)_ZN18Unk_ov087_02271eac19func_ov087_02271a38Ev, 0};
extern "C" void *data_ov087_02271da0[2] = {(void *)_ZN18Unk_ov087_02271eac19func_ov087_02271a34Ev, 0};
extern "C" void *data_ov087_02271d98[2] = {(void *)_ZN18Unk_ov087_02271eac19func_ov087_022719d0Ev, 0};
typedef BOOL (Unk_ov087_02271eac::*Unk_ov087_Fn)();
Unk_ov087_02271a6c_Ent data_ov087_02271f80[3] = {
    {*(Unk_ov087_Fn *)data_ov087_02271d88, *(Unk_ov087_Fn *)data_ov087_02271da0},
    {*(Unk_ov087_Fn *)data_ov087_02271da8, *(Unk_ov087_Fn *)data_ov087_02271d98},
    {NULL, *(Unk_ov087_Fn *)data_ov087_02271d90},
};
extern "C" u8 data_ov087_02271dc8[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','d','n','k','.','n','s','b','m','d',0};
extern "C" char data_ov087_02271dbc[] = "st_fortune2";
extern "C" u32 data_ov087_02271d80 = 0x1d;

static inline BOOL Unk_ov087_02271478_Rng(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 h = *p;
    u32 l = *p;
    if (l >= lo && h <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov087_02271478_Chk(u16 *c, u16 *slot, u16 val) {
    BOOL r;
    if (Item_IsFurniture(c)) {
        *slot = val;
        r = (Item_GetFurnitureIndex(c) == Item_GetFurnitureIndex(slot)) ? TRUE : FALSE;
    } else {
        if (*c == val) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

struct Unk_ov087_02271478_Buf {
    u8 a;
    u8 pad_01[2];
    u8 v;
    u16 s[4];
};

// 001
#pragma opt_loop_invariants off

static inline BOOL Unk_ov087_02271670_Z(BOOL x) {
    if (x == 0) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov087_02271670_Buf {
    u8 t;
    u8 pad_01;
    u16 v[6];
};

extern "C" Unk_ov087_02271eac *func_ov087_02271bac() {
    return new Unk_ov087_02271eac();
}

BOOL Unk_ov087_02271eac::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov087_02271960(this);
    return TRUE;
}

BOOL Unk_ov087_02271eac::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov087_02271a6c(0);
    _ZN12Unk_0201635013func_0201610cEP16Unk_02015fe0_Objiiiiti(&unk_334, this, 0x140, 0, 0, 0x1000, 0, 1);
    func_02053848(&unk_ec, 0xc, 0xe);
    unk_4cc.unk_1c |= 2;
    func_020856a4(data_021ed24c, 2);
    return TRUE;
}

u8 *Unk_ov087_02271eac::getTexturePath() { return data_ov087_02271df8; }

u8 *Unk_ov087_02271eac::getModelPath() { return data_ov087_02271dc8; }

BOOL Unk_ov087_02271eac::updateAct() {
    BOOL result = FALSE;
    if (data_ov087_02271f80[unk_654].exit != NULL) {
        result = (this->*data_ov087_02271f80[unk_654].exit)();
    }
    return result;
}

void Unk_ov087_02271eac::func_ov087_02271a6c(s32 state) {
    BOOL ok = TRUE;
    if (data_ov087_02271f80[state].enter != NULL) {
        ok = (this->*data_ov087_02271f80[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov087_02271eac::func_ov087_02271a38() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov087_02271eac::func_ov087_02271a34() { return TRUE; }

BOOL Unk_ov087_02271eac::func_ov087_022719fc() {
    void *p = unk_658.func_02015aac();
    u32 x = 0;
    if (p != NULL) {
        x = _ZN12Unk_020d77a410getAngleToEPS_(this, p);
    }
    _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, x, 0);
    return TRUE;
}

BOOL Unk_ov087_02271eac::func_ov087_022719d0() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        TalkRequest_EndTalkWith(this);
        func_ov087_02271a6c(2);
    }
    return TRUE;
}

BOOL Unk_ov087_02271eac::func_ov087_022719cc() { return TRUE; }

Unk_ov087_02271e1c::Unk_ov087_02271e1c() {}

Unk_ov087_02271e1c::~Unk_ov087_02271e1c() {}

void Unk_ov087_02271e1c::func_ov087_02271960(Unk_ov087_02271eac *owner) {
    vfunc_08();
    unk_ac = owner;
}

void Unk_ov087_02271e1c::vfunc_78(Unk_ov087_022718ec_Out *out) {
    void *g = PlayerData_GetCurrent();
    _ZN10PlayerData13func_0209865cEv(g);
    out->a = (u8 *)"sp_npc_acorn";
    if (_ZN12Unk_02097ff413func_02098044Ej(g, 0xf) == 0) {
        out->b = 0;
        _ZN12Unk_02097ff413func_0209801cEj(g, 0xf);
        func_0202e1cc(0x19, 1);
    } else if (func_0202e1cc(0x19, 1) == 0) {
        out->b = 2;
    } else if (func_02063b8c(2) == 0 || func_0202e1cc(0x1a, 0) != 0) {
        out->b = 3;
    } else {
        out->b = 0x10;
    }
}

extern "C" BOOL func_ov087_022718c4(u16 *p, u32 m) {
    BOOL r;
    if (m == 0) {
        r = FALSE;
        if (*p >= 0x1542 && *p <= 0x1546) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}

void Unk_ov087_02271e1c::vfunc_14() {
    Unk_ov087_02271670_Buf buf;
    void *g = _ZN10PlayerData13func_0209868cEv(PlayerData_GetCurrent());
    u32 k;
    buf.v[0] = 0xfff1;
    k = 0xff;
    switch (unk_1e) {
    case 2:
    case 3:
        if (func_0206ea84((u32)func_ov087_022718c4)) {
            s32 i = 0;
            u32 cnt = 0;
            while (i < 15) {
                buf.v[0] = func_02099048(i);
                if (Unk_ov087_02271478_Rng(&buf.v[0], 0x1542, 0x1546)) {
                    cnt++;
                }
                i++;
            }
            _ZN16ActorTalkRequest13func_02015958Eijiii(this, cnt, 2, 3, 0, 0);
            k = 5;
        } else if (_ZN12Unk_02087ad813func_02087c0cEv(g) >= 12) {
            k = 0x17;
        } else {
            u32 a = _ZN12Unk_02087ad813func_02087c0cEv(g);
            u32 b = _ZN12Unk_02087ad813func_02087c20Ev(g);
            s32 d = (data_ov087_02271ce4 + 2)[a * 4] - b;
            if (d > 0) {
                _ZN16ActorTalkRequest13func_02015958Eijiii(this, d, 1, 3, 0, 0);
                k = 4;
            } else {
                k = 0x16;
            }
        }
        break;
    case 7:
    case 8:
    case 9:
        _ZN16ActorTalkRequest13func_02015958Eijiii(this, _ZN12Unk_02087ad813func_02087c20Ev(g), 0, 3, 0, 0);
        if (_ZN12Unk_02087ad813func_02087c0cEv(g) >= 12) {
            k = 0x16;
        } else {
            k = 0xa;
        }
        break;
    case 10: {
        u32 t = _ZN12Unk_02087ad813func_02087c20Ev(g);
        if (t >= (data_ov087_02271ce4 + 2)[_ZN12Unk_02087ad813func_02087c0cEv(g) * 4]) {
            buf.v[1] = *(u16 *)&data_ov087_02271ce4[_ZN12Unk_02087ad813func_02087c0cEv(g) * 4];
            _ZN16ActorTalkRequest13func_0201578cEjjj(this, &buf.v[1], 0, 7);
            k = 0xb;
        } else {
            u32 a = _ZN12Unk_02087ad813func_02087c0cEv(g);
            u32 b = _ZN12Unk_02087ad813func_02087c20Ev(g);
            s32 d = (data_ov087_02271ce4 + 2)[a * 4];
            d -= b;
            _ZN16ActorTalkRequest13func_02015958Eijiii(this, d, 1, 3, 0, 0);
            k = 0xf;
        }
        break;
    }
    case 11:
    case 13:
        buf.v[2] = *(u16 *)&data_ov087_02271ce4[_ZN12Unk_02087ad813func_02087c0cEv(g) * 4];
        if (Unk_ov087_02271670_Z(func_02099014(&buf.v[2], 0))) {
            k = 0xc;
        } else {
            _ZN12Unk_02087ad813func_02087bf8Ev(g);
            buf.v[3] = *(u16 *)&data_ov087_02271ce4[_ZN12Unk_02087ad813func_02087c0cEv(g) * 4];
            _ZN12Unk_020d771013func_02014e60EPtjjj(this, &buf.v[3], 0, 5, 0);
            if (_ZN12Unk_02087ad813func_02087c0cEv(g) < 12) {
                u32 b = _ZN12Unk_02087ad813func_02087c20Ev(g);
                if (b >= (data_ov087_02271ce4 + 2)[_ZN12Unk_02087ad813func_02087c0cEv(g) * 4]) {
                    buf.v[4] = *(u16 *)&data_ov087_02271ce4[_ZN12Unk_02087ad813func_02087c0cEv(g) * 4];
                    _ZN16ActorTalkRequest13func_0201578cEjjj(this, &buf.v[4], 0, 7);
                    k = 0xd;
                    break;
                }
            }
            k = 0xe;
        }
        break;
    case 20:
        buf.v[5] = 0x1565;
        _ZN12Unk_020d771013func_02014e60EPtjjj(this, &buf.v[5], 0, 5, 0);
        k = 0x15;
        break;
    }
    if (k != 0xff) {
        buf.t = k;
        unk_3c->setNextMessage(&buf.t, (u8 *)"sp_npc_acorn");
    }
}

void Unk_ov087_02271e1c::vfunc_18() {
    Unk_ov087_02271478_Buf buf;
    u8 *sa = (u8 *)"sp_npc_acorn";
    s32 t5 = getChoiceList()->getResult();
    void *g8 = PlayerData_GetCurrent();
    s32 k = 0xff;
    switch (unk_1e) {
    case 5:
        if (t5 == 0) {
            void *g = _ZN10PlayerData13func_0209868cEv(g8);
            s32 cntB;
            s32 cntA;
            buf.s[0] = 0xfff1;
            k = 0;
            cntB = 0;
            cntA = 0;
            for (; k < 15; k++) {
                buf.s[0] = func_02099048(k);
                if (Unk_ov087_02271478_Rng(&buf.s[0], 0x1542, 0x1546)) {
                    if (Unk_ov087_02271478_Chk(&buf.s[0], &buf.s[2], 0x1546)) {
                        cntA++;
                    } else {
                        cntB++;
                    }
                    func_02099064(k);
                }
            }
            buf.s[0] = 0x1542;
            if (cntA == 0) {
                k = (u8)(func_02063b8c(3) + 7);
                cntA = 1;
                while (cntB > 0) {
                    _ZN12Unk_02087ad813func_02087c10Ei(g, cntA);
                    cntB--;
                }
            } else if (cntB != 0) {
                buf.s[0] = 0x1546;
                k = 0x18;
            } else {
                k = 0x19;
            }
            _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &buf.s[0], 0, 5, 0);
        }
        break;
    case 16:
        if (t5 == 0) {
            k = 0x12;
            if (func_020991fc() != -1) {
                void *obj = func_020991e4();
                if (obj != NULL) {
                    k = 0x13;
                    buf.a = 2;
                    MsgString33 o;
                    u32 n = func_02063b8c(4) + 4;
                    s32 i = 0;
                    u32 r6 = n;
                    const Unk_ov087_02271cc4_Ent *ent;
                loop16:
                    buf.a = (u8)r6;
                    ent = &data_ov087_02271cc4[i];
                    String_Load(&o, &buf.a, (s32)data_ov087_02271cc4[i].a);
                    MailText_SetSlot((void *)ent->b, &o);
                    r6 = (n - 4) * 4;
                    r6 += func_02063b8c(4);
                    r6 += i * 16;
                    i++;
                    if (i < 4) goto loop16;
                    buf.a = 2;
                    func_020656dc(obj, &buf.a, (u8 *)"ev_fortune", &data_ov087_02271d84, &data_ov087_02271d80,
                                  _ZN10PlayerData11getPlayerIdEv(g8));
                    if (g8 != NULL) {
                        buf.s[1] = Item_MakePaper(0x1d, 4);
                        func_0203c41c(_ZN10PlayerData10getCatalogEv(g8), &buf.s[1], 0);
                    }
                    func_0202e1cc(0x1a, 1);
                }
            }
        }
        break;
    }
    if (k != 0xff) {
        buf.v = k;
        unk_3c->setNextMessage(&buf.v, sa);
    }
}

BOOL Unk_ov087_02271eac::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov087_02271eac::vfunc_4c(u32 a, u32 b) {
    switch (a) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)getPlayerActor(4));
        func_ov087_02271a6c(1);
        break;
    case 8:
        func_ov087_02271a6c(0);
        break;
    }
}


