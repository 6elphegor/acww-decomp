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
class SpNpcTortimerFireworks;
class SpNpcTortimerFireworksTalk;
struct TalkStartMsg;

struct Unk_ov084_Vec {
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
void _ZN12Unk_020d771015requestGiveItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_0201442015requestTakeItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN16ActorTalkRequest15setItemNameSlotEjjj(void *p, u16 *q, s32 a, s32 b);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
u32 func_02063b8c(u32 n);
BOOL _ZN12Unk_020d77a410getAngleToEPS_(void *p, void *q);
void TalkRequest_EndTalkWith(void *p);
void NookShop_PickFlowerBag(u16 *p);
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
void _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(void *p, void *owner, s32 a, s32 b, s32 s0, s32 s1, s32 s2, s32 s3);
extern u16 data_020c6cc8;
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, u32 a, u32 b, u32 c);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
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
    virtual void vfunc_78(TalkStartMsg *out);
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
struct TalkStartMsg {
    u8 *a;
    u8 b;
};

class SpNpcTortimerFireworksTalk : public SpNpcTalkRequest {
public:
    SpNpcTortimerFireworksTalk();
    virtual ~SpNpcTortimerFireworksTalk();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(TalkStartMsg *out);

    void attachOwner(SpNpcTortimerFireworks *owner);

    SpNpcTortimerFireworks *unk_ac;
    s32 unk_b0;
    u16 unk_b4;
    u8 pad_b6[2];
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
MEMBER(NpcFaceAnim, 0x334 - 0x2ac);
MEMBER(NpcAnimCtrl, 0x1c);
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
MEMBER(NpcSpeechState, 8);
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
struct NpcActionCtrl {
    NpcActionCtrl();
    ~NpcActionCtrl();
    void requestAction(u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
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
    virtual void onJoinTalk();
    virtual void onLeaveTalk();
    virtual void getAct0BAnimA();
    virtual void getAct0BAnimB();
    virtual void vfunc_9c();
    virtual void getTeachableEmotion();
    virtual void addMood();
    virtual s32 vfunc_a8();

    void setTalkRequest(Unk_0201bc1c *p);
    void *getPlayerActor(u32 v);

    u16 unk_ea;
    ThreeLayerAnimModel unk_ec;
    Unk_0201ad3c unk_2a0;
    NpcFaceAnim unk_2ac;
    NpcAnimCtrl unk_334;
    Unk_0201accc unk_350;
    Unk_0201a8bc unk_3a8;
    Unk_0201ad18 unk_3aa;
    Unk_0201a794 unk_3b0;
    NpcSpeechState unk_418;
    Unk_0201a13c unk_420;
    Unk_02032238 unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    NpcActionCtrl unk_564;
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

class SpNpcTortimerFireworks : public Unk_020d8bc8 {
public:
    SpNpcTortimerFireworks() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 v);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    u8 unk_651;
    u8 pad_652[2];
    s32 unk_654;
    SpNpcTortimerFireworksTalk unk_658;
    u8 unk_710;
};

struct Unk_ov084_02271a40_Ent {
    BOOL (SpNpcTortimerFireworks::*enter)();
    BOOL (SpNpcTortimerFireworks::*exit)();
};

struct Unk_ov084_02271478_Ent {
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
u32 _ZN12Unk_02087ad813func_02087b8cEv(void *p);
void _ZN12Unk_02087ad813func_02087b4cEv(void *p);
s32 _ZN8PlayerId9getGenderEv(void *p);
u32 Net_GetJoiningAid();
void func_020947c0(u16 *out, u32 v);
s32 Date_GetNthWeekdayDay(u32 a, u32 b, s32 c, s32 d);
BOOL func_0202e3a4(void *p);
BOOL func_0202e514(void *p);
void func_02085784(void *p, s32 a);
void Clock_GetDate(u8 *p);
void *func_020991e4();
s32 func_020991fc();
void func_020656dc(void *obj, u8 *c, void *str, void *d44, void *d40, void *x);
extern u8 sSpNpcTortimerFireworksModelPath[];
extern u8 sSpNpcTortimerFireworksTexturePath[];
extern u32 data_ov084_02271d40;
extern u32 data_ov084_02271d44;
extern const Unk_ov084_02271478_Ent sSpNpcTortimerFireworksFortuneLines[4];
extern Unk_ov084_02271a40_Ent sSpNpcTortimerFireworksActTable[3];
}

struct Unk_ov084_SceneEntry {
    SpNpcTortimerFireworks *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};
extern "C" SpNpcTortimerFireworks *SpNpcTortimerFireworks_Create();
extern "C" char sSpNpcTortimerFireworksFortuneStrKey[];
extern "C" char sSpNpcTortimerFireworksFortuneStr2Key[];
extern "C" u32 data_ov084_02271d44 = 0xe;
extern "C" u8 sSpNpcTortimerFireworksTexturePath[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','t','t','l','_','t','e','x','.','n','s','b','t','x',0};
extern "C" Unk_ov084_SceneEntry sSpNpcTortimerFireworksProfile = {SpNpcTortimerFireworks_Create, 0x5a, 0x61, 2, 0x5000, 0x5000, 0x3e800};
extern "C" char sSpNpcTortimerFireworksFortuneStrKey[] = "st_fortune";
extern "C" const Unk_ov084_02271478_Ent sSpNpcTortimerFireworksFortuneLines[4] = {
    {sSpNpcTortimerFireworksFortuneStrKey, 0}, {sSpNpcTortimerFireworksFortuneStr2Key, 1}, {sSpNpcTortimerFireworksFortuneStr2Key, 2}, {sSpNpcTortimerFireworksFortuneStr2Key, 3},
};
Unk_ov084_02271a40_Ent sSpNpcTortimerFireworksActTable[3] = {
    {&SpNpcTortimerFireworks::setupAct00, &SpNpcTortimerFireworks::mainAct00},
    {&SpNpcTortimerFireworks::setupAct01, &SpNpcTortimerFireworks::mainAct01},
    {NULL, &SpNpcTortimerFireworks::mainAct02},
};
extern "C" u8 sSpNpcTortimerFireworksModelPath[] = {'n','p','c','_','s','p','/','m','o','d','e','l','/','t','t','l','.','n','s','b','m','d',0};
extern "C" char sSpNpcTortimerFireworksFortuneStr2Key[] = "st_fortune2";
extern "C" u32 data_ov084_02271d40 = 0x1d;

static inline BOOL Unk_ov084_022717ac_Rng(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" SpNpcTortimerFireworks *SpNpcTortimerFireworks_Create() {
    return new SpNpcTortimerFireworks();
}

BOOL SpNpcTortimerFireworks::vfunc_04() {
    if (!Unk_020d8bc8::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.attachOwner(this);
    return TRUE;
}

BOOL SpNpcTortimerFireworks::vfunc_00() {
    if (!Unk_020d8bc8::vfunc_00()) {
        return FALSE;
    }
    changeAct(0);
    func_02085784(data_021ed24c, 0);
    _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti(&unk_334, this, 0x140, 0, 0, 0x1000, 0, 1);
    ThreeLayerAnimModel_AssignJointsToLayer2(&unk_ec, 0xc, 0xe);
    unk_4cc.unk_1c |= 2;
    u8 buf[8];
    Clock_GetDate(buf);
    s32 n = buf[0] - 1;
    u8 *q = &unk_710;
    *q = n / 7;
    *q = *q + 1;
    return TRUE;
}

u8 *SpNpcTortimerFireworks::getTexturePath() { return sSpNpcTortimerFireworksTexturePath; }

u8 *SpNpcTortimerFireworks::getModelPath() { return sSpNpcTortimerFireworksModelPath; }

BOOL SpNpcTortimerFireworks::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcTortimerFireworksActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcTortimerFireworksActTable[unk_654].exit)();
    }
    return result;
}

void SpNpcTortimerFireworks::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcTortimerFireworksActTable[state].enter != NULL) {
        ok = (this->*sSpNpcTortimerFireworksActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcTortimerFireworks::setupAct00() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcTortimerFireworks::mainAct00() { return TRUE; }

BOOL SpNpcTortimerFireworks::setupAct01() {
    void *p = unk_658.func_02015aac();
    s32 x = 0;
    if (p != NULL) {
        x = _ZN12Unk_020d77a410getAngleToEPS_(this, p);
    }
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&unk_618, 0, x, 0);
    return TRUE;
}

BOOL SpNpcTortimerFireworks::mainAct01() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&unk_618) == 0) {
        TalkRequest_EndTalkWith(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcTortimerFireworks::mainAct02() { return TRUE; }

SpNpcTortimerFireworksTalk::SpNpcTortimerFireworksTalk() {
    unk_b4 = 0xfff1;
}

SpNpcTortimerFireworksTalk::~SpNpcTortimerFireworksTalk() {}

void SpNpcTortimerFireworksTalk::attachOwner(SpNpcTortimerFireworks *owner) {
    vfunc_08();
    unk_ac = owner;
    unk_b0 = -1;
}

void SpNpcTortimerFireworksTalk::vfunc_78(TalkStartMsg *out) {
    u16 h[4];
    u32 loc[2];
    _ZN10PlayerData13func_0209865cEv(PlayerData_GetCurrent());
    out->a = (u8 *)"sp_npc_turtle4";
    if (unk_b0 == -1) {
        h[1] = 0x37e0;
        unk_b0 = func_02098eb0(&h[1]);
        if (unk_b0 >= 0) {
            out->a = (u8 *)"sp_npc_turtle";
            out->b = 0;
            return;
        }
    }
    if (Talk_CheckAndSetPlayerFlag(0x1e, 1)) {
        func_020947c0(&h[0], Net_GetJoiningAid());
        h[2] = 0x137e;
        s32 t1 = func_02098eb0(&h[2]);
        BOOL f1 = FALSE;
        if (t1 == -1) f1 = TRUE;
        if (!f1) {
            h[3] = 0x137f;
            s32 t2 = func_02098eb0(&h[3]);
            BOOL f2 = FALSE;
            if (t2 == -1) f2 = TRUE;
            if (!f2) goto skip;
        }
        if (!Unk_ov084_022717ac_Rng(&h[0], 0x137e, 0x137f)) {
            out->b = 6;
            return;
        }
    skip:
        if (func_020851bc(func_020850e0(), 3) == 0) {
            out->b = 7;
        } else {
            out->b = func_02063b8c(4) + 0xd;
        }
    } else {
        if (func_020851bc(func_020850e0(), 2) == 0) {
            func_020851a4(func_020850e0(), 2);
            if (unk_ac->unk_710 == 1) {
                out->b = 0;
            } else {
                loc[0] = 0;
                loc[1] = 0;
                Clock_GetDateTime(&loc[0]);
                s32 r = Date_GetNthWeekdayDay(((u8 *)loc)[5], ((u8 *)loc)[4], 6, 5);
                if (r == -1) {
                    if (unk_ac->unk_710 <= 3) {
                        out->b = 1;
                    } else {
                        out->b = 2;
                    }
                } else {
                    if (unk_ac->unk_710 <= 4) {
                        out->b = 1;
                    } else {
                        out->b = 2;
                    }
                }
            }
        }
    }
}

void SpNpcTortimerFireworksTalk::vfunc_14() {
    u8 b;
    u8 b2;
    u16 h[7];
    u8 *s = (u8 *)"sp_npc_turtle4";
    u8 msg = 0xff;
    if (unk_b0 >= 0) {
        if (unk_1e == 1 || unk_1e == 4) {
            unk_b0 = -2;
        }
        if (unk_1e == 2) {
            h[1] = 0x1559;
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &h[1], 0, 5, 0);
            h[2] = 0x1559;
            func_02099014(&h[2], 0);
            b = 4;
            unk_3c->setNextMessage(&b, (u8 *)"sp_npc_turtle");
        }
    } else {
        switch (unk_1e) {
        case 0:
        case 1:
        case 2:
        case 6: {
            s32 r5 = func_02098ffc();
            h[0] = 0xfff1;
            h[3] = 0x137e;
            s32 t1 = func_02098eb0(&h[3]);
            BOOL f1 = FALSE;
            if (t1 == -1) f1 = TRUE;
            if (f1) {
                h[4] = 0x137f;
                s32 t2 = func_02098eb0(&h[4]);
                BOOL f2 = FALSE;
                if (t2 == -1) f2 = TRUE;
                if (f2) {
                    h[0] = 0x137e;
                    if (func_02063b8c(2) == 0) {
                        h[0] = 0x137f;
                    }
                    goto after;
                }
            }
            h[5] = 0x137e;
            {
                s32 t3 = func_02098eb0(&h[5]);
                BOOL f3 = FALSE;
                if (t3 == -1) f3 = TRUE;
                if (f3) {
                    h[0] = 0x137e;
                } else {
                    h[0] = 0x137f;
                }
            }
        after:
            if (r5 >= 0) {
                void *g2 = _ZN10PlayerData13func_0209868cEv(PlayerData_GetCurrent());
                if (_ZN12Unk_02087ad813func_02087b8cEv(g2) < 10) {
                    _ZN12Unk_02087ad813func_02087b4cEv(g2);
                    s32 r = _ZN8PlayerId9getGenderEv(_ZN10PlayerData11getPlayerIdEv(PlayerData_GetCurrent()));
                    _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &h[0], 0, 5, 0);
                    func_02099014(&h[0], 0);
                    _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &h[0], 0, 7);
                    if (r == 0) {
                        msg = 3;
                    } else {
                        msg = 4;
                    }
                } else {
                    msg = 0xb;
                }
            } else {
                _ZN16ActorTalkRequest15setItemNameSlotEjjj(this, &h[0], 0, 7);
                msg = 5;
            }
            break;
        }
        case 9:
            h[6] = 0x1565;
            _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &h[6], 0, 5, 0);
            msg = 0xa;
            break;
        }
        if (msg != 0xff) {
            b2 = msg;
            unk_3c->setNextMessage(&b2, s);
        }
    }
}

void SpNpcTortimerFireworksTalk::vfunc_18() {
    u8 *t4 = (u8 *)"sp_npc_turtle4";
    s32 t = getChoiceList()->getResult();
    u8 buf[6];
    u16 h[2];
    u8 msg = 0xff;
    if (unk_b0 >= 0) {
        u8 *s = (u8 *)"sp_npc_turtle";
        switch (unk_1e) {
        case 0:
            if (t == 0) {
                if (unk_b0 >= 0) {
                    func_02099064(unk_b0);
                    h[0] = 0x37e0;
                    _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &h[0], 0, 5, 0);
                }
                msg = 2;
            }
            break;
        }
        if (msg != 0xff) {
            buf[1] = msg;
            unk_3c->setNextMessage(&buf[1], s);
        }
    } else {
        if (unk_1e == 7 && t == 0) {
            msg = 0xc;
            if (func_020991fc() != -1) {
                void *obj = func_020991e4();
                if (obj != NULL) {
                    msg = 9;
                    void *g = PlayerData_GetCurrent();
                    buf[0] = 2;
                    MsgString33 o;
                    u32 base = func_02063b8c(4) + 8;
                    s32 i = 0;
                    u32 v = base;
                loop0:
                    buf[0] = v;
                    v = (u32)&((Unk_ov084_02271478_Ent *)sSpNpcTortimerFireworksFortuneLines)[i];
                    String_Load(&o, &buf[0], (s32)((Unk_ov084_02271478_Ent *)sSpNpcTortimerFireworksFortuneLines)[i].a);
                    MailText_SetSlot((void *)((Unk_ov084_02271478_Ent *)v)->b, &o);
                    v = (base - 8) * 4;
                    v = v + func_02063b8c(4);
                    v = v + i * 16;
                    i++;
                    if (i < 4) goto loop0;
                    buf[0] = 1;
                    func_020656dc(obj, &buf[0], (u8 *)"ev_fortune", &data_ov084_02271d44, &data_ov084_02271d40,
                                  _ZN10PlayerData11getPlayerIdEv(g));
                    if (g != NULL) {
                        h[1] = Item_MakePaper(0x1d, 4);
                        func_0203c41c(_ZN10PlayerData10getCatalogEv(g), &h[1], 0);
                    }
                    func_020851a4(func_020850e0(), 3);
                }
            }
        }
        if (msg != 0xff) {
            buf[4] = msg;
            unk_3c->setNextMessage(&buf[4], t4);
        }
    }
}

BOOL SpNpcTortimerFireworks::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
void SpNpcTortimerFireworks::vfunc_4c(s32 v) {
    switch (v) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)getPlayerActor(4));
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}

