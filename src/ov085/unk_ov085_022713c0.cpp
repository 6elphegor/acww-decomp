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
class Unk_ov085_02271eb0;
class Unk_ov085_02271e1c;
struct Unk_ov085_02271728_Out;

struct Unk_ov085_Vec {
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
    void setSlot(s32 idx, void *p);
    void *getChoiceList();
    void openChoices(s32 v);
};

struct Unk_020e1c64 {
    u32 v[7];
    Unk_020e1c64();
    ~Unk_020e1c64();
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
    virtual void vfunc_78(Unk_ov085_02271728_Out *out);
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
struct Unk_ov085_02271728_Out {
    u32 a;
    u8 b;
};

class Unk_ov085_02271e1c : public SpNpcTalkRequest {
public:
    Unk_ov085_02271e1c();
    virtual ~Unk_ov085_02271e1c();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(Unk_ov085_02271728_Out *out);
    virtual void vfunc_8c();

    void func_ov085_02271878(Unk_ov085_02271eb0 *owner);

    Unk_ov085_02271eb0 *unk_ac;
    s32 unk_b0;
    u8 unk_b4;
    u8 pad_b5[3];
    s32 unk_b8[5];
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

class Unk_ov085_02271eb0 : public Unk_020d8bc8 {
public:
    Unk_ov085_02271eb0() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL func_ov085_02271a0c();
    BOOL func_ov085_02271a10();
    BOOL func_ov085_02271a3c();
    BOOL func_ov085_02271a74();
    BOOL func_ov085_02271a78();
    void func_ov085_02271aac(s32 state);

    u8 unk_651;
    u8 pad_652[2];
    s32 unk_654;
    Unk_ov085_02271e1c unk_658;
    u8 unk_724;
};

struct Unk_ov085_02271aac_Ent {
    BOOL (Unk_ov085_02271eb0::*enter)();
    BOOL (Unk_ov085_02271eb0::*exit)();
};

struct Unk_ov085_SceneEntry {
    Unk_ov085_02271eb0 *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" {
void *PlayerData_GetCurrent();
void TalkRequest_EndTalkWith(void *p);
u32 func_02063b8c(u32 n);
BOOL func_0202e1cc(s32 a, s32 b);
s32 func_02098eb0(u16 *p);
void func_02099014(u16 *p, s32 v);
void func_02099064(s32 v);
void func_020856a4(void *p, s32 v);
void _ZN12Unk_0208581013func_02085860Ev(void *p);
void *SaveVillagers_Get(void *tbl, s32 idx);
void *_ZN12VillagerData13getVillagerIdEv(void *p);
BOOL _ZN10VillagerId7isValidEv(void *p);
void _ZN10VillagerId7getNameEj(void *p, Unk_020e1c64 *o);
void _ZN12Unk_0208581013func_02085870EP16Unk_02085810_Rec(void *a, void *b);
void _ZN12Unk_0208581013func_0208582cEP16Unk_02085810_Rec(void *a, void *b);
void *_ZN12Unk_0208581013func_0208586cEv(void *a);
void *_ZN12Unk_0208581013func_02085828Ev(void *a);
void *func_0204bdb8();
s32 _ZN10PlayerData11getPlayerIdEv(...);
void *SaveVillagers_FindBestFriendOf(void *p, s32 v);
void MailText_SetSlot(s32 a, Unk_020e1c64 *o);
void func_02076fc8(u32 a, u8 *b);
void func_020794f4(void *p);
BOOL _ZN8SaveData8testFlagEj(void *p, s32 v);
void *_ZN10ChoiceList5clearEv(void *p);
void *_ZN10ChoiceList8getEntryEi(void *p, s32 i);
void *_ZN11ChoiceEntry7getTextEv(void *p);
void _ZN9MsgString4copyEPS_(void *p, Unk_020e1c64 *o);
void _ZN11ChoiceEntry11setMsgIndexEPKh(void *p, u8 *b);
void *Choice_GetBmgName(s32 v);
void _ZN11ChoiceEntry10setBmgNameEPKv(void *p, void *q);
void _ZN11ChoiceEntry8loadTextEv(void *p);
void _ZN10ChoiceList8setCountEi(void *p, s32 i);
void _ZN10ChoiceList15setCancelToLastEv(void *p);
s32 SaveVillagers_Count(void *p);
extern u8 data_021dfd8c[];
extern u8 data_ov085_02271dc8[];
extern u8 data_ov085_02271df8[];
extern Unk_ov085_02271aac_Ent data_ov085_02271fa0[3];
}

extern "C" Unk_ov085_02271eb0 *func_ov085_02271c10();
Unk_ov085_02271aac_Ent data_ov085_02271fa0[3] = {
    {&Unk_ov085_02271eb0::func_ov085_02271a78, &Unk_ov085_02271eb0::func_ov085_02271a74},
    {&Unk_ov085_02271eb0::func_ov085_02271a3c, &Unk_ov085_02271eb0::func_ov085_02271a10},
    {NULL, &Unk_ov085_02271eb0::func_ov085_02271a0c},
};
extern "C" u8 data_ov085_02271df8[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','t','t','l','_','t','e','x','.','n','s','b','t','x',0};
extern "C" u8 data_ov085_02271dc8[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','t','t','l','.','n','s','b','m','d',0};
extern "C" Unk_ov085_SceneEntry data_ov085_02271de0 = {func_ov085_02271c10, 0x5b, 0x62, 2, 0x5000, 0x5000, 0x3e800};

extern "C" Unk_ov085_02271eb0 *func_ov085_02271c10() {
    return new Unk_ov085_02271eb0();
}

BOOL Unk_ov085_02271eb0::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.func_ov085_02271878(this);
    return TRUE;
}

BOOL Unk_ov085_02271eb0::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    func_ov085_02271aac(0);
    _ZN12Unk_0201635013func_0201610cEP16Unk_02015fe0_Objiiiiti(&unk_334, this, 0x140, 0, 0, 0x1000, 0, 1);
    func_02053848(&unk_ec, 0xc, 0xe);
    unk_4cc.unk_1c |= 2;
    unk_724 = func_0203f42c(0x11);
    u8 *const g = data_021ed24c;
    func_020856a4(g, 1);
    if (!func_0202e1cc(0x1f, 0)) {
        _ZN12Unk_0208581013func_02085860Ev(g);
    }
    return TRUE;
}

u8 *Unk_ov085_02271eb0::getTexturePath() { return data_ov085_02271df8; }

u8 *Unk_ov085_02271eb0::getModelPath() { return data_ov085_02271dc8; }

BOOL Unk_ov085_02271eb0::updateAct() {
    BOOL result = FALSE;
    if (data_ov085_02271fa0[unk_654].exit != NULL) {
        result = (this->*data_ov085_02271fa0[unk_654].exit)();
    }
    return result;
}

void Unk_ov085_02271eb0::func_ov085_02271aac(s32 state) {
    BOOL ok = TRUE;
    if (data_ov085_02271fa0[state].enter != NULL) {
        ok = (this->*data_ov085_02271fa0[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL Unk_ov085_02271eb0::func_ov085_02271a78() {
    _ZN12Unk_0201985813func_020196b4Ejiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL Unk_ov085_02271eb0::func_ov085_02271a74() { return TRUE; }

BOOL Unk_ov085_02271eb0::func_ov085_02271a3c() {
    void *p = unk_658.func_02015aac();
    s32 x = 0;
    if (p != NULL) {
        x = _ZN12Unk_020d77a410getAngleToEPS_(this, p);
    }
    _ZN12Unk_02013b1013func_020141b4Essh(&unk_618, 0, x, 0);
    return TRUE;
}

BOOL Unk_ov085_02271eb0::func_ov085_02271a10() {
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        TalkRequest_EndTalkWith(this);
        func_ov085_02271aac(2);
    }
    return TRUE;
}

BOOL Unk_ov085_02271eb0::func_ov085_02271a0c() { return TRUE; }

void Unk_ov085_02271e1c::vfunc_8c() {
    u8 b;
    void *r7 = unk_3c->getChoiceList();
    s32 i, n, r6;
    b = 0x3d;
    Unk_020e1c64 o;
    _ZN10ChoiceList5clearEv(r7);
    for (i = 0; i < 5; i++) {
        unk_b8[i] = -1;
    }
    if (!_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(SaveVillagers_Get(data_021dfd8c, unk_b4)))) {
        unk_b4 = 0;
    }
    r6 = unk_b4;
    n = 0;
    for (; r6 < 8 && n < 4; r6++) {
        void *g = SaveVillagers_Get(data_021dfd8c, r6);
        if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(g))) {
            _ZN10VillagerId7getNameEj(_ZN12VillagerData13getVillagerIdEv(g), &o);
            _ZN9MsgString4copyEPS_(_ZN11ChoiceEntry7getTextEv(_ZN10ChoiceList8getEntryEi(r7, n)), &o);
            unk_b8[n] = r6;
            n++;
        }
    }
    unk_b4 = r6;
    if (unk_b4 >= 8) {
        unk_b4 = 0;
    }
    if (SaveVillagers_Count(data_021dfd8c) > 4) {
        void *p = _ZN10ChoiceList8getEntryEi(r7, n);
        _ZN11ChoiceEntry11setMsgIndexEPKh(p, &b);
        _ZN11ChoiceEntry10setBmgNameEPKv(p, Choice_GetBmgName(0));
        _ZN11ChoiceEntry8loadTextEv(p);
        n++;
    }
    _ZN10ChoiceList8setCountEi(r7, n);
    if (SaveVillagers_Count(data_021dfd8c) > 4) {
        _ZN10ChoiceList15setCancelToLastEv(r7);
    }
    unk_3c->openChoices(1);
}

Unk_ov085_02271e1c::Unk_ov085_02271e1c() {}

Unk_ov085_02271e1c::~Unk_ov085_02271e1c() {}

void Unk_ov085_02271e1c::func_ov085_02271878(Unk_ov085_02271eb0 *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_b0 = -1;
}

void Unk_ov085_02271e1c::vfunc_78(Unk_ov085_02271728_Out *out) {
    u16 h;
    _ZN10PlayerData13func_0209865cEv(PlayerData_GetCurrent());
    out->a = (u32)"sp_npc_turtle5";
    if (unk_b0 == -1) {
        h = 0x37e0;
        unk_b0 = func_02098eb0(&h);
        if (unk_b0 >= 0) {
            out->a = (u32)"sp_npc_turtle";
            out->b = 0;
            return;
        }
    }
    if (unk_ac->unk_724 == 6) {
        if (_ZN8SaveData8testFlagEj(gSaveData, 0x11)) {
            void *g = _ZN12Unk_0208581013func_0208586cEv(data_021ed24c);
            if (_ZN10VillagerId7isValidEv(g)) {
                Unk_020e1c64 o;
                _ZN10VillagerId7getNameEj(g, &o);
                unk_3c->setSlot(1, &o);
            }
            out->b = func_02063b8c(3) + 0x11;
        } else {
            out->b = 0xf;
            _ZN8SaveData7setFlagEj(gSaveData, 0x11);
        }
    } else {
        void *g = _ZN12Unk_0208581013func_02085828Ev(data_021ed24c);
        if (_ZN10VillagerId7isValidEv(g)) {
            Unk_020e1c64 o;
            _ZN10VillagerId7getNameEj(g, &o);
            unk_3c->setSlot(0, &o);
            out->b = func_02063b8c(4) + 0xb;
        } else {
            out->b = 4;
            if (!func_0202e1cc(0x1f, 1)) {
                switch (unk_ac->unk_724) {
                case 0:
                    out->b = 0;
                    break;
                case 1:
                case 2:
                    out->b = 1;
                    break;
                case 3:
                case 4:
                    out->b = 2;
                    break;
                case 5:
                    out->b = 3;
                    break;
                }
            }
        }
    }
}

void Unk_ov085_02271e1c::vfunc_14() {
    u8 b0, b1;
    u16 h0, h1;
    u8 *s = (u8 *)"sp_npc_turtle5";
    u32 msg = 0xff;
    if (unk_b0 >= 0) {
        if (unk_1e == 1 || unk_1e == 4) {
            unk_b0 = -2;
        }
        switch (unk_1e) {
        case 2:
            h0 = 0x1559;
            _ZN12Unk_020d771013func_02014e60EPtjjj(this, &h0, 0, 5, 0);
            h1 = 0x1559;
            func_02099014(&h1, 0);
            b0 = 4;
            unk_3c->setNextMessage(&b0, (u8 *)"sp_npc_turtle");
            break;
        }
    } else {
        if (unk_1e == 0xf) {
            void *r = _ZN12Unk_0208581013func_0208586cEv(data_021ed24c);
            Unk_020e1c64 o;
            if (_ZN10VillagerId7isValidEv(r) == 0) {
                void *b = func_0204bdb8();
                PlayerData_GetCurrent();
                void *q = SaveVillagers_FindBestFriendOf((u8 *)b + 0x8a3c, _ZN10PlayerData11getPlayerIdEv());
                if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(q))) {
                    _ZN12Unk_0208581013func_02085870EP16Unk_02085810_Rec(data_021ed24c, _ZN12VillagerData13getVillagerIdEv(q));
                    r = _ZN12Unk_0208581013func_0208586cEv(data_021ed24c);
                }
            }
            _ZN10VillagerId7getNameEj(r, &o);
            MailText_SetSlot(0, &o);
            unk_3c->setSlot(1, &o);
            func_02076fc8(func_02063b8c(2), (u8 *)"bbs_snowfes");
            func_020794f4(data_021dfd8c);
            msg = 0x10;
        }
        switch (unk_1e) {
        case 7:
        case 8:
        case 0x14:
        case 0x15:
            vfunc_8c();
            break;
        }
        if (msg != 0xff) {
            b1 = msg;
            unk_3c->setNextMessage(&b1, s);
        }
    }
}

void Unk_ov085_02271e1c::vfunc_18() {
    u8 b0, b1;
    u16 h;
    s32 t = getChoiceList()->getResult();
    u8 *s = (u8 *)"sp_npc_turtle5";
    u32 msg = 0xff;
    s32 c = unk_b0;
    if (c >= 0) {
        s = (u8 *)"sp_npc_turtle";
        if (unk_1e == 0 && t == 0) {
            if (c >= 0) {
                func_02099064(c);
                h = 0x37e0;
                _ZN12Unk_0201442013func_02014ce4EPtjjj(this, &h, 0, 5, 0);
            }
            msg = 2;
        }
        if (msg != 0xff) {
            b0 = msg;
            unk_3c->setNextMessage(&b0, s);
        }
    } else {
        s32 k = unk_1e;
        switch (k) {
        case 4:
            if (t == 0) {
                msg = (u8)(func_02063b8c(2) + 7);
            } else {
                msg = (u8)(func_02063b8c(2) + 5);
            }
            break;
        case 7:
        case 8:
        case 0x14:
        case 0x15: {
            s32 *p = &unk_b8[t];
            if (*p >= 0) {
                u8 *g = data_021ed24c;
                Unk_020e1c64 o;
                void *e = SaveVillagers_Get(data_021dfd8c, *p);
                if (_ZN10VillagerId7isValidEv(_ZN12VillagerData13getVillagerIdEv(e))) {
                    _ZN10VillagerId7getNameEj(_ZN12VillagerData13getVillagerIdEv(e), &o);
                    unk_3c->setSlot(0, &o);
                }
                if (func_02063b8c(2) == 0) {
                    _ZN12Unk_0208581013func_02085870EP16Unk_02085810_Rec(g, _ZN12VillagerData13getVillagerIdEv(e));
                }
                _ZN12Unk_0208581013func_0208582cEP16Unk_02085810_Rec(g, _ZN12VillagerData13getVillagerIdEv(e));
                msg = (u8)(func_02063b8c(2) + 9);
            } else if (k != 0x14) {
                msg = 0x14;
            } else {
                msg = 0x15;
            }
            break;
        }
        }
        if (msg != 0xff) {
            b1 = msg;
            unk_3c->setNextMessage(&b1, s);
        }
    }
}

BOOL Unk_ov085_02271eb0::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN12Unk_02013b1013func_02014220Ev(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
void Unk_ov085_02271eb0::vfunc_4c(s32 v) {
    switch (v) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)getPlayerActor(4));
        func_ov085_02271aac(1);
        break;
    case 8:
        func_ov085_02271aac(0);
        break;
    }
}

