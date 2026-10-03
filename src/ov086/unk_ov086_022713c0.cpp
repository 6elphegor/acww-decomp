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
class Unk_ov086_02271d4c;
class Unk_ov086_02271cbc;
struct Unk_ov086_022716b0_Out;

struct Unk_ov086_Vec {
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
void func_02099014(u16 *p, s32 v);
void func_02099064(s32 v);
void _ZN12Unk_020d771013func_02014e60EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_0201442013func_02014ce4EPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN16ActorTalkRequest13func_0201578cEjjj(void *p, u16 *q, s32 a, s32 b);
BOOL func_0202e1cc(s32 a, s32 b);
u32 func_02063b8c(u32 n);
BOOL _ZN12Unk_020d77a410getAngleToEPS_(void *p, void *q);
void TalkRequest_EndTalkWith(void *p);
void func_020ac7cc(u16 *p);
void Clock_GetDateTime(void *p);
void *func_020850e0();
BOOL func_020851bc(void *p, s32 v);
void func_020851a4(void *p, s32 v);
void func_02085290(void *p);
void _ZN12Unk_0208581013func_02085900Ej(void *p, s32 v);
void _ZN8SaveData7setFlagEj(void *p, s32 v);
void func_020856a4(void *p, s32 v);
u32 Event_GetDaysSinceStart(s32 v);
void ThreeLayerAnimModel_AssignJointsToLayer2(void *p, s32 a, s32 b);
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
    virtual void vfunc_78(Unk_ov086_022716b0_Out *out);
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
struct Unk_ov086_022716b0_Out {
    u32 a;
    u8 b;
};

class Unk_ov086_02271cbc : public SpNpcTalkRequest {
public:
    Unk_ov086_02271cbc();
    virtual ~Unk_ov086_02271cbc();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov086_022716b0_Out *out);

    void func_ov086_0227182c(Unk_ov086_02271d4c *owner);

    Unk_ov086_02271d4c *unk_ac;
    s32 unk_b0;
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

class Unk_ov086_02271d4c : public Unk_020d8bc8 {
public:
    Unk_ov086_02271d4c() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL func_ov086_022718a0();
    BOOL func_ov086_022718a4();
    BOOL func_ov086_022718d0();
    BOOL func_ov086_02271908();
    BOOL func_ov086_0227190c();
    void func_ov086_02271940(s32 state);

    u8 unk_651;
    s32 unk_654;
    Unk_ov086_02271cbc unk_658;
};

struct Unk_ov086_02271940_Ent {
    BOOL (Unk_ov086_02271d4c::*enter)();
    BOOL (Unk_ov086_02271d4c::*exit)();
};

struct Unk_ov086_022714e4_Ent {
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
void Clock_GetDate(void *p);
s32 Clock_GetTimeOfDay();
void *func_020991e4();
s32 func_020991fc();
extern u32 data_ov086_02271c20;
extern u32 data_ov086_02271c24;
extern const Unk_ov086_022714e4_Ent data_ov086_02271b90[4];
extern Unk_ov086_02271940_Ent data_ov086_02271e40[3];
}

extern "C" char data_ov086_02271c50[];
extern "C" char data_ov086_02271c5c[];
struct Unk_ov086_SceneEntry {
    Unk_ov086_02271d4c *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};
extern "C" Unk_ov086_02271d4c *func_ov086_02271a78();
extern "C" u32 data_ov086_02271c24 = 0x1d;
extern "C" u32 data_ov086_02271c20 = 0xe;
extern "C" char data_ov086_02271c50[] = "st_fortune";
extern "C" const Unk_ov086_022714e4_Ent data_ov086_02271b90[4] = {
    {data_ov086_02271c50, 0}, {data_ov086_02271c5c, 1}, {data_ov086_02271c5c, 2}, {data_ov086_02271c5c, 3},
};
extern "C" void _ZN18Unk_ov086_02271d4c19func_ov086_0227190cEv();
extern "C" void _ZN18Unk_ov086_02271d4c19func_ov086_022718a0Ev();
extern "C" void _ZN18Unk_ov086_02271d4c19func_ov086_022718a4Ev();
extern "C" void _ZN18Unk_ov086_02271d4c19func_ov086_02271908Ev();
extern "C" void _ZN18Unk_ov086_02271d4c19func_ov086_022718d0Ev();
extern "C" void *data_ov086_02271c38[2] = {(void *)_ZN18Unk_ov086_02271d4c19func_ov086_022718a4Ev, 0};
extern "C" void *data_ov086_02271c48[2] = {(void *)_ZN18Unk_ov086_02271d4c19func_ov086_022718d0Ev, 0};
extern "C" void *data_ov086_02271c30[2] = {(void *)_ZN18Unk_ov086_02271d4c19func_ov086_022718a0Ev, 0};
extern "C" void *data_ov086_02271c28[2] = {(void *)_ZN18Unk_ov086_02271d4c19func_ov086_0227190cEv, 0};
extern "C" void *data_ov086_02271c40[2] = {(void *)_ZN18Unk_ov086_02271d4c19func_ov086_02271908Ev, 0};
typedef BOOL (Unk_ov086_02271d4c::*Unk_ov086_Fn)();
Unk_ov086_02271940_Ent data_ov086_02271e40[3] = {
    {*(Unk_ov086_Fn *)data_ov086_02271c28, *(Unk_ov086_Fn *)data_ov086_02271c40},
    {*(Unk_ov086_Fn *)data_ov086_02271c48, *(Unk_ov086_Fn *)data_ov086_02271c38},
    {NULL, *(Unk_ov086_Fn *)data_ov086_02271c30},
};
extern "C" char data_ov086_02271c5c[] = "st_fortune2";
extern "C" u8 data_ov086_02271c68[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','t','t','l','.','n','s','b','m','d',0};
extern "C" Unk_ov086_SceneEntry data_ov086_02271c80 = {func_ov086_02271a78, 0x5c, 0x63, 2, 0x5000, 0x5000, 0x3e800};
extern "C" u8 data_ov086_02271c98[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','t','t','l','_','t','e','x','.','n','s','b','t','x',0};

struct Unk_ov086_022716b0_A {
    u8 b0, b1;
    u8 pad[4];
};
struct Unk_ov086_022716b0_B {
    u8 b0, b1, b2, b3;
    u32 w;
};

extern "C" Unk_ov086_02271d4c *func_ov086_02271a78() {
    return new Unk_ov086_02271d4c();
}

BOOL Unk_ov086_02271d4c::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov086_0227182c(this);
    return TRUE;
}

BOOL Unk_ov086_02271d4c::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov086_02271940(0);
    _ZN12Unk_0201635013func_0201610cEP16Unk_02015fe0_Objiiiiti(&unk_334, this, 0x140, 0, 0, 0x1000, 0, 1);
    ThreeLayerAnimModel_AssignJointsToLayer2(&unk_ec, 0xc, 0xe);
    unk_4cc.unk_1c |= 2;
    return TRUE;
}

u8 *Unk_ov086_02271d4c::getTexturePath() { return data_ov086_02271c98; }

u8 *Unk_ov086_02271d4c::getModelPath() { return data_ov086_02271c68; }

BOOL Unk_ov086_02271d4c::updateAct() {
    BOOL result = FALSE;
    if (data_ov086_02271e40[unk_654].exit != NULL) {
        result = (this->*data_ov086_02271e40[unk_654].exit)();
    }
    return result;
}

void Unk_ov086_02271d4c::func_ov086_02271940(s32 state) {
    BOOL ok = TRUE;
    if (data_ov086_02271e40[state].enter != NULL) {
        ok = (this->*data_ov086_02271e40[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov086_02271d4c::func_ov086_0227190c() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov086_02271d4c::func_ov086_02271908() { return TRUE; }

BOOL Unk_ov086_02271d4c::func_ov086_022718d0() {
    void *p = unk_658.func_02015aac();
    s32 x = 0;
    if (p != NULL) {
        x = _ZN12Unk_020d77a410getAngleToEPS_(this, p);
    }
    _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, x, 0);
    return TRUE;
}

BOOL Unk_ov086_02271d4c::func_ov086_022718a4() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        TalkRequest_EndTalkWith(this);
        func_ov086_02271940(2);
    }
    return TRUE;
}

BOOL Unk_ov086_02271d4c::func_ov086_022718a0() { return TRUE; }

Unk_ov086_02271cbc::Unk_ov086_02271cbc() {}

Unk_ov086_02271cbc::~Unk_ov086_02271cbc() {}

void Unk_ov086_02271cbc::func_ov086_0227182c(Unk_ov086_02271d4c *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_b0 = -1;
}

void Unk_ov086_02271cbc::vfunc_78(Unk_ov086_022716b0_Out *out) {
    u16 h;
    Unk_ov086_022716b0_A a;
    Unk_ov086_022716b0_B t;
    BOOL f;
    _ZN10PlayerData13func_0209865cEv(PlayerData_GetCurrent());
    out->a = (u32)"sp_npc_turtle6";
    if (unk_b0 == -1) {
        h = 0x37e0;
        unk_b0 = func_02098eb0(&h);
        if (unk_b0 >= 0) {
            out->a = (u32)"sp_npc_turtle";
            out->b = 0;
            return;
        }
    }
    Clock_GetDate(&a);
    *(u32 *)&t = 0;
    t.w = 0;
    Clock_GetDateTime(&t);
    f = FALSE;
    if (a.b1 == 0xc) {
        if (Clock_GetTimeOfDay() == 0) {
            out->b = func_02063b8c(3);
        } else if (Clock_GetTimeOfDay() == 1) {
            out->b = func_02063b8c(3);
            if (out->b != 0) {
                out->b += 2;
            }
        } else if (t.b2 < 0x17) {
            out->b = func_02063b8c(3);
            if (out->b != 0) {
                out->b += 4;
            }
        } else if (t.b2 == 0x17 && t.b1 < 0x1e) {
            out->b = func_02063b8c(3);
            if (out->b != 0) {
                out->b += 6;
            }
        } else if (t.b2 == 0x17 && t.b1 < 0x37) {
            out->b = func_02063b8c(3) + 9;
        } else if (t.b2 == 0x17 && t.b1 < 0x3b) {
            out->b = func_02063b8c(2) + 0xc;
            f = TRUE;
        } else {
            out->b = func_02063b8c(2) + 0xe;
            f = TRUE;
        }
    } else if (t.b2 < 6) {
        out->b = func_02063b8c(3) + 0x10;
        f = TRUE;
    } else if (func_020851bc(func_020850e0(), 4) != 0) {
        out->b = func_02063b8c(3) + 0x16;
        f = TRUE;
    } else {
        out->b = 0x13;
        f = TRUE;
    }
    if (!f) {
        if (func_02098ffc() != -1) {
            if (func_02063b8c(2) == 0) {
                out->b = func_02063b8c(3) + 0x19;
            }
        }
    }
}

void Unk_ov086_02271cbc::vfunc_14() {
    struct {
        u8 bb[6];
        u16 h1, h2, h3, h4, h5, h6;
    } l;
    const Unk_ov086_022714e4_Ent *e;
    u8 *s6 = (u8 *)"sp_npc_turtle6";
    u8 msg = 0xff;
    void *p;
    void *g;
    u32 v, base;
    s32 i;
    if (unk_b0 >= 0) {
        if (unk_1e == 1 || unk_1e == 4) {
            unk_b0 = -2;
        }
        if (unk_1e == 2) {
            l.h1 = 0x1559;
            _ZN12Unk_020d771013func_02014e60EPtjjj(this, &l.h1, 0, 5, 0);
            l.h2 = 0x1559;
            func_02099014(&l.h2, 0);
            l.bb[1] = 4;
            unk_3c->setNextMessage(&l.bb[1], (u8 *)"sp_npc_turtle");
        }
    } else {
        s32 r = func_020991fc();
        switch (unk_1e) {
        case 0x13:
            msg = 0x14;
            if (r != -1) {
                p = func_020991e4();
                if (p != NULL) {
                    g = PlayerData_GetCurrent();
                    l.bb[0] = 2;
                    MsgString33 obj;
                    v = func_02063b8c(4);
                    i = 0;
                    base = v << 2;
                    do {
                        l.bb[0] = v;
                        e = &data_ov086_02271b90[i];
                        String_Load(&obj, &l.bb[0], (s32)data_ov086_02271b90[i].a);
                        MailText_SetSlot((void *)e->b, &obj);
                        v = base + func_02063b8c(4);
                        v = v + (i << 4);
                        i++;
                    } while (i < 4);
                    l.bb[0] = 0;
                    func_020656dc(p, &l.bb[0], (u8 *)"ev_fortune", &data_ov086_02271c20, &data_ov086_02271c24, _ZN10PlayerData11getPlayerIdEv(g));
                    if (g != NULL) {
                        l.h3 = Item_MakePaper(0x1d, 4);
                        func_0203c41c(_ZN10PlayerData10getCatalogEv(g), &l.h3, 0);
                    }
                    func_020851a4(func_020850e0(), 4);
                    l.h4 = 0x1565;
                    _ZN12Unk_020d771013func_02014e60EPtjjj(this, &l.h4, 0, 5, 0);
                    msg = 0x15;
                }
            }
            break;
        case 0x19:
        case 0x1a:
        case 0x1b:
            l.h5 = 0x137d;
            _ZN12Unk_020d771013func_02014e60EPtjjj(this, &l.h5, 0, 5, 0);
            l.h6 = 0x137d;
            func_02099014(&l.h6, 0);
            msg = 0x1c + func_02063b8c(3);
            break;
        }
        if (msg != 0xff) {
            l.bb[4] = msg;
            unk_3c->setNextMessage(&l.bb[4], s6);
        }
    }
}

void Unk_ov086_02271cbc::vfunc_18() {
    u8 b;
    u16 h;
    u8 *s;
    s32 t = getChoiceList()->getResult();
    u8 msg = 0xff;
    if (unk_b0 >= 0) {
        s = (u8 *)"sp_npc_turtle";
        if (unk_1e == 0 && t == 0) {
            if (unk_b0 >= 0) {
                func_02099064(unk_b0);
                h = 0x37e0;
                _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &h, 0, 5, 0);
            }
            msg = 2;
        }
        if (msg != 0xff) {
            b = msg;
            unk_3c->setNextMessage(&b, s);
        }
    }
}

BOOL Unk_ov086_02271d4c::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov086_02271d4c::vfunc_4c(s32 v) {
    switch (v) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)getPlayerActor(4));
        func_ov086_02271940(1);
        break;
    case 8:
        func_ov086_02271940(0);
        break;
    }
}

