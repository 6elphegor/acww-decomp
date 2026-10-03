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
class Unk_ov081_0227217c;
class Unk_ov081_022720ec;

struct ChoiceList {
    s32 getResult();
};

struct Unk_0202368c_Obj {
    u32 v[2];
};

struct Unk_020e1c64 {
    u32 v[7];
    Unk_020e1c64();
    ~Unk_020e1c64();
};

struct Unk_ov081_0227186c_Out {
    u32 a;
    u8 b;
};

struct Unk_0209d498_Obj {
    u32 w[2];
};

struct Unk_ov081_02271d40_Loc {
    u16 a;
    u16 b;
    s32 x;
    s32 y;
    s32 z;
    s32 w;
    Unk_ov081_02271d40_Loc() {}
};

extern "C" {
void _ZN16ActorTalkRequest13func_020158a8Eiji(void *p, s32 a, s32 b, s32 c, s32 d);
void _ZN12Unk_02087ad813func_02087bb0Ei(void *p, s32 a);
s32 func_0202c404(void *a, void *b, void *c, u32 d, u32 e);
u32 func_0204f0f4(u32 a);
u32 func_0204f234(u32 a, u32 b);
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
void func_020947c0(u16 *out, s32 v);
s32 func_02094348(u16 *p);
void func_0209d498(void *p);
s32 func_02098eb0(u16 *p);
s32 func_02098ffc();
void func_02099064(s32 v);
void func_02099014(u16 *p, s32 v);
BOOL func_0202e1cc(s32 a, s32 b);
BOOL func_0206ed18();
s32 func_0206ed38();
s32 func_02099048();
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
    virtual void vfunc_78(Unk_ov081_0227186c_Out *out);
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

class Unk_ov081_022720ec : public SpNpcTalkRequest {
public:
    typedef void (Unk_ov081_022720ec::*Fn)();

    Unk_ov081_022720ec();
    virtual ~Unk_ov081_022720ec();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov081_0227186c_Out *out);
    virtual void vfunc_84();

    s32 func_ov081_02271768();
    void func_ov081_02271998(Unk_ov081_0227217c *owner);
    void func_ov081_02271a20();
    void func_ov081_02271a28();
    void func_ov081_02271b0c(s32 i);
    void func_ov081_02271b1c(s32 i);
    void func_ov081_02271b2c(Fn *slot, s32 i);

    Unk_ov081_0227217c *unk_ac;
    Fn unk_b0;
    Fn unk_b8;
    u16 unk_c0;
    u8 unk_c2;
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

class Unk_ov081_0227217c : public Unk_020d8bc8 {
public:
    Unk_ov081_0227217c() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL func_ov081_02271c00();
    BOOL func_ov081_02271c04();
    BOOL func_ov081_02271c30();
    BOOL func_ov081_02271c68();
    BOOL func_ov081_02271c6c();
    void func_ov081_02271ca0(s32 state);

    u8 unk_651;
    u8 pad_652[2];
    s32 unk_654;
    Unk_ov081_022720ec unk_658;
    s32 unk_720;
};

struct Unk_ov081_02271ca0_Ent {
    BOOL (Unk_ov081_0227217c::*enter)();
    BOOL (Unk_ov081_0227217c::*exit)();
};

static inline BOOL Unk_ov081_InRange(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 h = *p;
    u32 l = *p;
    if (l >= lo && h <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov081_Neg(s32 v) {
    if (v < 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" {
extern Unk_ov081_02271ca0_Ent data_ov081_02272274[3];
extern u8 data_ov081_022720c8[];
extern u8 data_ov081_02272098[];
BOOL func_ov081_02271ae4(u16 *p, s32 x);
}

struct Unk_ov081_SceneEntry {
    Unk_ov081_0227217c *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};
extern "C" Unk_ov081_0227217c *func_ov081_02271ec8();

extern "C" {
void _ZN18Unk_ov081_0227217c19func_ov081_02271c6cEv();
void _ZN18Unk_ov081_0227217c19func_ov081_02271c68Ev();
void _ZN18Unk_ov081_0227217c19func_ov081_02271c30Ev();
void _ZN18Unk_ov081_0227217c19func_ov081_02271c04Ev();
void _ZN18Unk_ov081_0227217c19func_ov081_02271c00Ev();
void _ZN18Unk_ov081_022720ec19func_ov081_02271a28Ev();
void _ZN18Unk_ov081_022720ec19func_ov081_02271a20Ev();
}
typedef BOOL (Unk_ov081_0227217c::*Unk_ov081_StateFn)();

extern "C" void *data_ov081_02272060[2];
extern "C" void *data_ov081_02272068[2];
extern "C" void *data_ov081_02272070[2];
extern "C" void *data_ov081_02272078[2];
extern "C" void *data_ov081_02272080[2];
extern "C" void *data_ov081_02272088[2];
extern "C" void *data_ov081_02272090[2];
extern "C" Unk_ov081_SceneEntry data_ov081_022720b0;

// ---------------------------------------------------------------------------------------------------------------------
Unk_ov081_0227217c *func_ov081_02271ec8() {
    return new Unk_ov081_0227217c();
}

BOOL Unk_ov081_0227217c::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov081_02271998(this);
    return TRUE;
}

BOOL Unk_ov081_0227217c::vfunc_00() {
    Unk_ov081_02271d40_Loc l;
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov081_02271ca0(0);
    void *g = data_021ed24c;
    func_02085784(g, 1);
    func_02085818(&l.b, g);
    if (!Unk_ov081_InRange(&l.b, 0x12e8, 0x131f)) {
        _ZN12Unk_0208581013func_020858acEv(g);
        s32 r6 = func_02063b8c(2);
        l.x = 0;
        l.y = 0;
        l.z = 0;
        l.w = 0;
        l.a = 0xfff1;
        func_0209d498(&l.z);
        u32 b4 = ((u8 *)&l.w)[0];
        u32 b3 = ((u8 *)&l.z)[3];
        u32 t = func_0204f234(b4, func_0204f0f4(b3));
        if (t != 0) {
            if (func_0202c404(&l, &l.x, &l.y, r6, t) == 0) {
                func_0202c404(&l, &l.x, &l.y, (r6 + 1) & 1, t);
            }
        }
        func_02085820(g, &l.a);
        unk_720 = func_02085618(&l.a);
        _ZN12Unk_0208581013func_02085814Ei(g, *(volatile s32 *)&unk_720);
        if (SaveVillagers_PickRandomExcept(data_021dfd8c, 0, 0) != 0) {
            _ZN12Unk_0208581013func_02085870EP16Unk_02085810_Rec(g, _ZN12VillagerData13getVillagerIdEv());
            _ZN12Unk_0208581013func_02085900Ej(g, 1);
            _ZN8SaveData7setFlagEj(gSaveData, 0xf);
        }
    }
    _ZN12Unk_0201635013func_0201610cEP16Unk_02015fe0_Objiiiiti(&unk_334, this, 0x140, 0, 0, 0x1000, 0, 1);
    func_02053848(&unk_ec, 0xc, 0xe);
    unk_4cc.unk_1c |= 2;
    return TRUE;
}

u8 *Unk_ov081_0227217c::getTexturePath() { return data_ov081_022720c8; }

u8 *Unk_ov081_0227217c::getModelPath() { return data_ov081_02272098; }

BOOL Unk_ov081_0227217c::updateAct() {
    BOOL result = FALSE;
    if (data_ov081_02272274[unk_654].exit != NULL) {
        result = (this->*data_ov081_02272274[unk_654].exit)();
    }
    return result;
}

void Unk_ov081_0227217c::func_ov081_02271ca0(s32 state) {
    BOOL ok = TRUE;
    if (data_ov081_02272274[state].enter != NULL) {
        ok = (this->*data_ov081_02272274[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov081_0227217c::func_ov081_02271c6c() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov081_0227217c::func_ov081_02271c68() { return TRUE; }

BOOL Unk_ov081_0227217c::func_ov081_02271c30() {
    void *p = unk_658.func_02015aac();
    s32 x = 0;
    if (p != NULL) {
        x = _ZN12Unk_020d77a410getAngleToEPS_(this, p);
    }
    _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, x, 0);
    return TRUE;
}

BOOL Unk_ov081_0227217c::func_ov081_02271c04() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        TalkRequest_EndTalkWith(this);
        func_ov081_02271ca0(2);
    }
    return TRUE;
}

BOOL Unk_ov081_0227217c::func_ov081_02271c00() { return TRUE; }

void Unk_ov081_022720ec::vfunc_84() {
    if (unk_b0) {
        (this->*unk_b0)();
        Fn t = *(Fn *)__ptmf_null;
        unk_b0 = t;
        if (unk_b8) {
            unk_b0 = unk_b8;
            unk_b8 = t;
        }
    }
}

extern "C" Unk_ov081_SceneEntry data_ov081_022720b0;



extern "C" void *data_ov081_02272088[2] = {(void *)_ZN18Unk_ov081_0227217c19func_ov081_02271c04Ev, 0};

extern "C" void *data_ov081_02272078[2] = {(void *)_ZN18Unk_ov081_0227217c19func_ov081_02271c68Ev, 0};

extern "C" void *data_ov081_02272070[2] = {(void *)_ZN18Unk_ov081_022720ec19func_ov081_02271a28Ev, 0};

extern "C" Unk_ov081_SceneEntry data_ov081_022720b0 = {func_ov081_02271ec8, 0x57, 0x5e, 2, 0x5000, 0x5000, 0x3e800};

void Unk_ov081_022720ec::func_ov081_02271b2c(Fn *slot, s32 i) {
    static Fn tbl[2] = {*(Fn *)data_ov081_02272070, *(Fn *)data_ov081_02272068};
    *slot = tbl[i];
}

extern "C" void *data_ov081_02272090[2] = {(void *)_ZN18Unk_ov081_0227217c19func_ov081_02271c30Ev, 0};

extern "C" u8 data_ov081_022720c8[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 't', 't', 'l', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};

Unk_ov081_02271ca0_Ent data_ov081_02272274[3] = {
    {*(Unk_ov081_StateFn *)data_ov081_02272060, *(Unk_ov081_StateFn *)data_ov081_02272078},
    {*(Unk_ov081_StateFn *)data_ov081_02272090, *(Unk_ov081_StateFn *)data_ov081_02272088},
    {NULL, *(Unk_ov081_StateFn *)data_ov081_02272080},
};

extern "C" u8 data_ov081_02272098[] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 't', 't', 'l', '.', 'n', 's', 'b', 'm', 'd', 0};

extern "C" void *data_ov081_02272060[2] = {(void *)_ZN18Unk_ov081_0227217c19func_ov081_02271c6cEv, 0};

extern "C" void *data_ov081_02272068[2] = {(void *)_ZN18Unk_ov081_022720ec19func_ov081_02271a20Ev, 0};

extern "C" void *data_ov081_02272080[2] = {(void *)_ZN18Unk_ov081_0227217c19func_ov081_02271c00Ev, 0};


void Unk_ov081_022720ec::func_ov081_02271b1c(s32 i) {
    func_ov081_02271b2c(&unk_b0, i);
}

void Unk_ov081_022720ec::func_ov081_02271b0c(s32 i) {
    func_ov081_02271b2c(&unk_b8, i);
}

extern "C" BOOL func_ov081_02271ae4(u16 *p, s32 x) {
    if (x == 0) {
        BOOL r = FALSE;
        u32 v = *p;
        if (v >= 0x12e8 && v <= 0x131f) {
            r = TRUE;
        }
        return r;
    }
    return FALSE;
}

void Unk_ov081_022720ec::func_ov081_02271a28() {
    TalkWindowState *p = unk_3c;
    u8 m;
    unk_c0 = 0xfff1;
    unk_ac->unk_720 = 0;
    m = 0xc;
    if (func_0206ed18() != 0) {
        s32 r4 = func_0206ed38();
        unk_c0 = func_02099048();
        unk_ac->unk_720 = func_02085618(&unk_c0);
        _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &unk_c0, 0, 4, 0);
        func_ov081_02271b0c(1);
        _ZN16ActorTalkRequest13func_0201578cEjjj(this, &unk_c0, 2, 7);
        _ZN16ActorTalkRequest13func_020158a8Eiji(this, unk_ac->unk_720, 4, 1, 3);
        if (r4 >= 0) {
            func_02099064(r4);
        }
        m = 0xd;
    } else {
        _ZN12Unk_020d771013func_02014f74Ev(this);
    }
    p->setNextMessage(&m, (void *)"sp_npc_turtle1");
}

void Unk_ov081_022720ec::func_ov081_02271a20() {
    _ZN12Unk_020d771013func_02014f74Ev(this);
}

Unk_ov081_022720ec::Unk_ov081_022720ec() {
    unk_c0 = 0xfff1;
}

Unk_ov081_022720ec::~Unk_ov081_022720ec() {}

void Unk_ov081_022720ec::func_ov081_02271998(Unk_ov081_0227217c *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_c2 = 0;
    unk_c4 = -1;
}

void Unk_ov081_022720ec::vfunc_78(Unk_ov081_0227186c_Out *out) {
    struct {
        u16 h[5];
        Unk_0209d498_Obj o;
    } l;
    _ZN10PlayerData13func_0209865cEv(PlayerData_GetCurrent());
    out->a = (u32)"sp_npc_turtle1";
    l.o.w[0] = 0;
    l.o.w[1] = 0;
    func_0209d498(&l.o);
    if (unk_c4 == -1) {
        l.h[2] = 0x37e0;
        unk_c4 = func_02098eb0(&l.h[2]);
        if (unk_c4 >= 0) {
            out->a = (u32)"sp_npc_turtle";
            out->b = 0;
            return;
        }
    }
    u32 a = (u32)&l;
    {
        u32 v = *(u8 *)(a + 14);
        if (v < 0xc || v >= 0x12) {
            out->b = 2;
            return;
        }
    }
    *(u16 *)a = 0x1374;
    func_020947c0(&l.h[1], func_02094348((u16 *)a));
    out->b = 3;
    if (func_0202e1cc(0x1b, 0) == 0) {
        l.h[3] = 0x1374;
        BOOL n1 = func_02098eb0(&l.h[3]) < 0 ? TRUE : FALSE;
        if (n1 != 0) {
            BOOL f1 = FALSE;
            volatile u16 *pv = l.h;
            u32 a = pv[1];
            u32 b = pv[1];
            if (b >= 0x1374 && a <= 0x1374) {
                f1 = TRUE;
            }
            if (f1 == 0) {
                l.h[4] = 0x1375;
                BOOL n2 = func_02098eb0(&l.h[4]) < 0 ? TRUE : FALSE;
                if (n2 != 0) {
                    BOOL f2 = FALSE;
                    volatile u16 *pw = l.h;
                    u32 c = pw[1];
                    u32 d = pw[1];
                    if (d >= 0x1375 && c <= 0x1375) {
                        f2 = TRUE;
                    }
                    if (f2 == 0) {
                        if (func_02098ffc() >= 0) {
                            out->b = 1;
                        } else {
                            out->b = 0;
                        }
                        return;
                    }
                }
            }
        }
    }
    if (func_0202e1cc(0x1b, 1) != 0) {
        out->b = 8;
    }
}

s32 Unk_ov081_022720ec::func_ov081_02271768() {
    u16 h[2];
    void *g = data_021ed24c;
    void *r4;
    void *r6;
    u16 *p5;
    u16 *p4;
    func_02085818(&h[0], g);
    {
        BOOL r = FALSE;
        volatile u16 *pv = &h[0];
        u32 a = *pv;
        u32 b = *pv;
        if (b >= 0x12e8 && a <= 0x131f) {
            r = TRUE;
        }
        if (r != 0) {
            r6 = _ZN12Unk_0208581013func_020858acEv(g);
            r4 = _ZN12Unk_0208581013func_0208586cEv(g);
            func_02085818(&h[1], g);
            _ZN16ActorTalkRequest13func_0201578cEjjj(this, &h[1], 1, 7);
            _ZN16ActorTalkRequest13func_020158a8Eiji(this, _ZN12Unk_0208581013func_02085810Ev(g), 0, 1, 3);
            if (_ZN8PlayerId13func_02094218Ev(r6) != 0) {
                _ZN16ActorTalkRequest13func_020157e8Ejj(this, _ZN12Unk_0208581013func_020858acEv(g), 1);
                p4 = (u16 *)_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent());
                p5 = (u16 *)_ZN12Unk_0208581013func_020858acEv(g);
                if (p5[0] == p4[0] && memcmp(p5 + 1, p4 + 1, 8) == 0 && _ZN8PlayerId13func_020941e8EPS_(p5, p4) != 0) {
                    goto ret0;
                }
                return 1;
            ret0:
                return 0;
            } else if (_ZN10VillagerId7isValidEv(r4) != 0) {
                Unk_020e1c64 o;
                _ZN10VillagerId7getNameEj(r4, &o);
                unk_3c->setSlot(1, &o);
                return 2;
            }
        }
    }
    return -1;
}

void Unk_ov081_022720ec::vfunc_14() {
    u8 m1;
    u8 m2;
    u16 h0, h1, h2, h3, h4, h5;
    Unk_0202368c_Obj o;
    void *g;
    u8 *s;
    u8 msg;
    s = (u8 *)"sp_npc_turtle1";
    msg = 0xff;
    if (unk_c4 >= 0) {
        if (unk_1e == 1 || unk_1e == 4) {
            unk_c4 = -2;
        }
        if (unk_1e == 2) {
            h1 = 0x1559;
            _ZN12Unk_020d771013func_02014e60EPtjjj(this, &h1, 0, 5, 0);
            h2 = 0x1559;
            func_02099014(&h2, 0);
            m1 = 4;
            unk_3c->setNextMessage(&m1, (void *)"sp_npc_turtle");
        }
    } else {
        switch (unk_1e) {
        case 0xd:
        case 0x10:
        case 0x13:
            h0 = 0xfff1;
            g = data_021ed24c;
            switch (unk_1e) {
            case 0xd:
                _ZN12Unk_0201442013func_02014a4cEv(this);
                _ZN12Unk_02087ad813func_02087bb0Ei(_ZN10PlayerData13func_0209868cEv(PlayerData_GetCurrent()), 1);
                if (((unk_ac->unk_720 * 10) >> 12) > ((_ZN12Unk_0208581013func_02085810Ev(g) * 10) >> 12)) {
                    msg = 0x10;
                } else if (func_ov081_02271768() == 0) {
                    msg = 0x16;
                } else if (func_ov081_02271768() > 0) {
                    msg = 0xe;
                }
                break;
            case 0x10:
                if (func_ov081_02271768() == 0) {
                    msg = 0x11;
                    unk_c2 = 1;
                } else if (func_ov081_02271768() > 0) {
                    msg = 0x12;
                    unk_c2 = 0;
                }
                break;
            case 0x13:
                if (unk_c2 != 0) {
                    msg = 0x14;
                } else {
                    msg = 0x15;
                }
                func_02085820(g, &unk_c0);
                _ZN12Unk_0208581013func_02085814Ei(g, unk_ac->unk_720);
                _ZN12Unk_0208581013func_020858b0EP17Unk_02085810_Base(g, _ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
                _ZN12Unk_0208581013func_02085900Ej(g, 1);
                _ZN8SaveData7setFlagEj(gSaveData, 0xf);
                _ZN12ItemPickSpec3setEii(&o, 0, 0);
                ItemPick_One(&h3, &o, 0, 0, 1, 1, 0);
                h0 = h3;
                func_02063388(&o);
                _ZN12Unk_020d771013func_02014e60EPtjjj(this, &h0, 0, 5, 0);
                _ZN16ActorTalkRequest13func_0201578cEjjj(this, &h0, 0, 7);
                func_02099014(&h0, 0);
                break;
            }
            break;
        }
        switch (unk_1e) {
        case 1:
            h4 = 0x1374;
            _ZN12Unk_020d771013func_02014e60EPtjjj(this, &h4, 0, 5, 0);
            h5 = 0x1374;
            func_02099014(&h5, 0);
            msg = 4;
            func_0202e1cc(0x1b, 1);
            break;
        case 0xb:
            _ZN12Unk_020d771013func_0201517cEjjj(this, func_ov081_02271ae4, 0xd, 1);
            _ZN12Unk_020d771013func_020151d0Ei(this, 0);
            func_ov081_02271b1c(0);
            break;
        }
        if (msg != 0xff) {
            m2 = msg;
            unk_3c->setNextMessage(&m2, s);
        }
    }
}

void Unk_ov081_022720ec::vfunc_18() {
    u8 b1;
    u8 b2;
    u16 h;
    s32 t = getChoiceList()->getResult();
    u8 msg;
    u8 *s;
    s = (u8 *)"sp_npc_turtle1";
    msg = 0xff;
    if (unk_c4 >= 0) {
        s = (u8 *)"sp_npc_turtle";
        if (unk_1e == 0 && t == 0) {
            if (unk_c4 >= 0) {
                func_02099064(unk_c4);
                h = 0x37e0;
                _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &h, 0, 5, 0);
            }
            msg = 2;
        }
        if (msg != 0xff) {
            b1 = msg;
            unk_3c->setNextMessage(&b1, s);
        }
    } else {
        if (unk_1e == 8) {
            if (t != 0) {
                if (func_ov081_02271768() == 0) {
                    msg = 9;
                } else if (func_ov081_02271768() > 0) {
                    msg = 0xa;
                }
            } else {
                msg = 0xb;
            }
        }
        if (msg != 0xff) {
            b2 = msg;
            unk_3c->setNextMessage(&b2, s);
        }
    }
}

BOOL Unk_ov081_0227217c::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

void Unk_ov081_0227217c::vfunc_4c(s32 v) {
    switch (v) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)getPlayerActor(4));
        func_ov081_02271ca0(1);
        break;
    case 8:
        func_ov081_02271ca0(0);
        break;
    }
}

