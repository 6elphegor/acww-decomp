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

// Grid (unk_0204e858.cpp): cells are 0x28 bytes
struct Unk_02071a58_Grid {
    u8 *cells;
    u32 w, h;
};

struct Unk_ov072_02272234_Ent {
    const char *unk_00;
    u8 unk_04;
};

struct TalkStartMsg {
    const char *unk_00;
    u8 unk_04;
};

struct Unk_ov072_02271a58_Obj {
    u32 v[2];
};

class SpNpcGulliver;
class SpNpcGulliverTalk;

struct Unk_ov072_022718d0_Ent {
    void (SpNpcGulliverTalk::*f)();
    u8 flag;
};

struct Unk_ov072_ColorCtor {
    u8 a, b, c, d;
    Unk_ov072_ColorCtor(u8 a, u8 b, u8 c, u8 d) : a(a), b(b), c(c), d(d) {}
};

struct ChoiceList {
    s32 getResult();
};

extern "C" {
extern u8 data_021e58a6;
extern u8 gVec3Zero[];
extern u32 data_020c6d1c;
extern u16 data_020c6cc8;

BOOL _ZN13GulliverQuest9isStartedEv(void *self);
s32 _ZN13GulliverQuest12getPartCountEv(void *self);
void _ZN13GulliverQuest7addPartEv(void *self);
void _ZN13GulliverQuest5startEv(void *self);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
void TalkRequest_SetTargetDone(void *p);
void EventWeekSlots_MarkPlayer(s32 a);
void _ZN12Unk_0201442015requestTakeItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
void _ZN12Unk_020d771015requestGiveItemEPtjjj(void *p, u16 *q, s32 a, s32 b, s32 c);
s32 _ZN12Unk_02015b8c9getAnimIdEj(void *self, u32 a);
void _ZN14NpcMoveAnimSet12setStandAnimEi(void *self, s32 a);
s32 Pocket_FindItem(u16 *p);
void Pocket_RemoveItem(s32 a);
void Pocket_AddItem(u16 *p, s32 a);
u32 func_02063b8c(u32 n);
void _ZN12ItemPickSpec3setEii(Unk_ov072_02271a58_Obj *o, s32 a, s32 b);
void func_02063388(Unk_ov072_02271a58_Obj *o);
void ItemPick_One(u16 *out, Unk_ov072_02271a58_Obj *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void *TownBlockMap_Get();
void *MapBlock_GetItemPtr(void *cell, s32 a, s32 b, s32 c);
void MapBlock_SetItem(void *cell, u16 *h, s32 a, s32 b, s32 c);
BOOL _ZN8BlockMap13func_0204e440Eiiii(void *self, s32 x, s32 y, s32 z, s32 w);
void FieldUnit_FromBlockUnit(s32 *a, s32 *b, s32 c, s32 d, s32 e, s32 f);
u16 *BlockMap_GetItemPtr(void *g, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
BOOL Item_IsMarker(void *p);
BOOL Item_IsTreeStage0(void *p);
void MI_CpuFill8(void *dst, s32 v, s32 n);
BOOL _ZN8NpcActor10getAngleToEPS_(void *p, void *q);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *self);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *self, u32 a, u32 b, u32 c);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
void _ZN11NpcTalkCtrl11requestTalkEhh(void *self, u32 a, u32 b);
void _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(void *self, u32 a, u32 b, u32 c, u32 *d, u32 e, u32 f, u32 g);
void SpNpcGulliver_ScatterShipParts();
BOOL SpNpcGulliver_PlaceShipPart(u8 *cnt, s32 *pe, void *g);
BOOL SpNpcGulliver_IsSpotClear(s32 *a, s32 *b, void *g);
}

struct TalkWindowState {
    u32 unk_00;
    u32 unk_04;
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
    void setNumberSlot(s32 a, u32 b, s32 c, s32 d, s32 e);
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
    void requestCloseWindow(u32 a);
    s32 requestReopenWindow();
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

// Sub-object at +0x658 (vtable 0x02272438)
class SpNpcGulliverTalk : public SpNpcTalkRequest {
public:
    SpNpcGulliverTalk();
    virtual ~SpNpcGulliverTalk();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(TalkStartMsg *out);
    virtual void vfunc_80();
    virtual void vfunc_88();

    void attachOwner(SpNpcGulliver *owner);
    void scriptWakeUp();
    void setScript(s32 s);

    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ u8 unk_b0;
    /* 0xb4 */ s32 unk_b4;
    /* 0xb8 */ SpNpcGulliver *unk_b8;
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
struct Unk_0201a794 {
    u8 unk_00[0x418 - 0x3b0];
    Unk_0201a794();
    ~Unk_0201a794();
};
MEMBER(NpcSpeechState, 8);
MEMBER(Unk_0201a13c, 0x49c - 0x420);
MEMBER(CollisionState, 0x30);
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
    BOOL isActionDone();
    s32 getAction();
    void requestPlayAnim(s32 a, s32 b, u32 c, u16 d, u16 e);
    void requestEmotion(s32 a, u8 b, u16 c);
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

class NpcActor : public Character {
public:
    NpcActor() : unk_ea(0xfff1) {}
    virtual ~NpcActor();
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
    u32 getAngleToPlayer(u32 n);

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
    CollisionState unk_49c;
    Unk_02088d00 unk_4cc;
    Unk_020f4080 unk_514;
    Unk_020135e4 unk_558;
    NpcActionCtrl unk_564;
    Unk_02014254 unk_618;
};

class SpNpcActor : public NpcActor {
public:
    SpNpcActor() {}
    virtual ~SpNpcActor();
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

class SpNpcGulliver : public SpNpcActor {
public:
    SpNpcGulliver() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct03();
    BOOL mainAct02();
    BOOL setupAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 s);

    s32 unk_654;
    SpNpcGulliverTalk unk_658;
    u8 unk_714;
    u8 pad_715[0x718 - 0x715];
    s32 unk_718;
    s32 unk_71c;
};

struct Unk_ov072_02271fe8_Ent {
    BOOL (SpNpcGulliver::*enter)();
    BOOL (SpNpcGulliver::*exit)();
};

struct Unk_ov072_SceneEntry {
    SpNpcGulliver *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" {
extern u8 sSpNpcGulliverKey[12];
extern u8 sSpNpcGulliverModelPath[23];
extern u8 sSpNpcGulliverTexturePath[27];
extern const Unk_ov072_02272234_Ent sSpNpcGulliverTopicMsgs[8];
extern Unk_ov072_022718d0_Ent sSpNpcGulliverTalkScripts[2];
extern Unk_ov072_02271fe8_Ent sSpNpcGulliverActTable[4];
s32 SpNpcGulliver_TickTimer(void *self, s32 *p);
SpNpcGulliver *SpNpcGulliver_Create();
}

Unk_ov072_ColorCtor data_ov072_02272590(31, 20, 20, 31);
Unk_ov072_ColorCtor data_ov072_02272580(20, 20, 31, 31);
Unk_ov072_ColorCtor data_ov072_0227258c(31, 31, 20, 31);
Unk_ov072_ColorCtor data_ov072_02272594(20, 31, 20, 31);
Unk_ov072_ColorCtor data_ov072_02272584(20, 31, 31, 31);
Unk_ov072_ColorCtor data_ov072_02272588(20, 24, 24, 31);

extern "C" {
u8 sSpNpcGulliverKey[12] = {'s', 'p', '_', 'n', 'p', 'c', '_', 'g', 'u', 'l', 'l', 0};
u8 sSpNpcGulliverTexturePath[27] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 's', 'e', 'g', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
u8 sSpNpcGulliverModelPath[23] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 's', 'e', 'g', '.', 'n', 's', 'b', 'm', 'd', 0};
}

Unk_ov072_022718d0_Ent sSpNpcGulliverTalkScripts[2] = {
    {NULL, 0},
    {&SpNpcGulliverTalk::scriptWakeUp, 1},
};

Unk_ov072_02271fe8_Ent sSpNpcGulliverActTable[4] = {
    {&SpNpcGulliver::setupAct00, &SpNpcGulliver::mainAct00},
    {&SpNpcGulliver::setupAct01, &SpNpcGulliver::mainAct01},
    {&SpNpcGulliver::setupAct02, &SpNpcGulliver::mainAct02},
    {NULL, &SpNpcGulliver::mainAct03},
};

extern "C" Unk_ov072_SceneEntry sSpNpcGulliverProfile = {SpNpcGulliver_Create, 0x60, 0x67, 2, 0x5000, 0x5000, 0x3e800};
extern "C" {
const Unk_ov072_02272234_Ent sSpNpcGulliverTopicMsgs[8] = {
    {(const char *)sSpNpcGulliverKey, 0},
    {(const char *)sSpNpcGulliverKey, 5},
    {(const char *)sSpNpcGulliverKey, 0x1e},
    {(const char *)sSpNpcGulliverKey, 0xd},
    {(const char *)sSpNpcGulliverKey, 0x12},
    {(const char *)sSpNpcGulliverKey, 0x13},
    {(const char *)sSpNpcGulliverKey, 0x14},
    {(const char *)sSpNpcGulliverKey, 0x15},
};
}

static inline void *Unk_ov072_02271a58_Cell(Unk_02071a58_Grid *g, u32 x, u32 y) {
    if (x < g->w && y < g->h && g->cells != NULL) {
        return g->cells + (y * g->w + x) * 0x28;
    }
    return NULL;
}

static inline BOOL Unk_ov072_02271ca4_R(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov072_02271ca4_Chk(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) {
        f1 = TRUE;
    }
    if (!f1) {
        if (v < 0x5d || v > 0x61) {
            f2 = FALSE;
        }
    }
    if (!f2) {
        if (v < 0x2f || v > 0x56) {
            f3 = FALSE;
        }
    }
    if (!f3) {
        if (v < 0x57 || v > 0x5b) {
            f4 = FALSE;
        }
    }
    if (!f4) {
        if (v < 0x66 || v > 0x68) {
            f5 = FALSE;
        }
    }
    if (!f5) {
        if (v != 0x69) {
            f6 = FALSE;
        }
    }
    if (!f6) {
        if (v < 0x6a || v > 0x6c) {
            f7 = FALSE;
        }
    }
    if (!f7) {
        if (v != 0x6d) {
            f8 = FALSE;
        }
    }
    if (!f8) {
        if (v < 0xc8 || v > 0xcf) {
            f9 = FALSE;
        }
    }
    return f9;
}

extern "C" SpNpcGulliver *SpNpcGulliver_Create() {
    return new SpNpcGulliver();
}

BOOL SpNpcGulliver::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&unk_658);
    unk_658.attachOwner(this);
    return TRUE;
}

BOOL SpNpcGulliver::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    u8 *const g = &data_021e58a6;
    if (_ZN13GulliverQuest9isStartedEv(g)) {
        if (_ZN13GulliverQuest12getPartCountEv(g) >= 5) {
            unk_714 = 1;
        }
        changeAct(1);
    } else {
        changeAct(0);
    }
    unk_4cc.unk_1c |= 2;
    return TRUE;
}

u8 *SpNpcGulliver::getTexturePath() {
    return sSpNpcGulliverTexturePath;
}

u8 *SpNpcGulliver::getModelPath() {
    return sSpNpcGulliverModelPath;
}

BOOL SpNpcGulliver::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcGulliverActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcGulliverActTable[unk_654].exit)();
    }
    return result;
}

void SpNpcGulliver::changeAct(s32 s) {
    BOOL ok = TRUE;
    if (sSpNpcGulliverActTable[s].enter != NULL) {
        ok = (this->*sSpNpcGulliverActTable[s].enter)();
    }
    if (ok) {
        unk_654 = s;
    }
}

extern "C" s32 SpNpcGulliver_TickTimer(void *self, s32 *p) {
    if (*p != 0) {
        *p = *p - 1;
    }
    return *p;
}

BOOL SpNpcGulliver::setupAct00() {
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 0, 0, 0, (u32 *)gVec3Zero, 4, data_020c6d1c, 1);
    unk_564.requestPlayAnim(1, 0xef, 1, data_020c6cc8, 0);
    _ZN14NpcMoveAnimSet12setStandAnimEi(&unk_2a0, 0xef);
    return TRUE;
}

BOOL SpNpcGulliver::mainAct00() {
    return TRUE;
}

BOOL SpNpcGulliver::setupAct01() {
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&unk_3b0, 1, 0, 0, (u32 *)gVec3Zero, 4, data_020c6d1c, 1);
    if (unk_714 != 0) {
        unk_718 = 0x190;
        unk_718 += func_02063b8c(0x258);
    }
    return TRUE;
}

BOOL SpNpcGulliver::mainAct01() {
    if (unk_714 != 0) {
        if (SpNpcGulliver_TickTimer(this, &unk_71c) == 2) {
            unk_564.requestEmotion(1, 0, data_020c6cc8);
            return TRUE;
        }
        if (unk_71c == 1) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            return TRUE;
        }
        if (SpNpcGulliver_TickTimer(this, &unk_718) == 0) {
            switch (func_02063b8c(3)) {
            case 0:
                unk_564.requestEmotion(1, 0xc, data_020c6cc8);
                break;
            case 1:
                unk_564.requestEmotion(1, 0xd, data_020c6cc8);
                break;
            case 2:
                unk_564.requestEmotion(1, 0xe, data_020c6cc8);
                break;
            }
            unk_718 = 0x190;
            unk_718 += func_02063b8c(0x258);
            unk_71c = 0x7a;
        }
    }
    return TRUE;
}

extern "C" BOOL SpNpcGulliver_IsSpotClear(s32 *a, s32 *b, void *g) {
    s32 x = 0, y = 0;
    s32 i;
    for (i = 1; i <= 2; i++) {
        s32 hx, hy, xx, yy;
        u16 *cell;
        FieldUnit_FromBlockUnit(&x, &y, a[0], a[1], b[0], b[1] + i);
        xx = *(volatile s32 *)&x;
        yy = *(volatile s32 *)&y;
        hx = xx >> 4;
        hy = yy >> 4;
        cell = BlockMap_GetItemPtr(g, hx, hy, xx - (hx << 4), yy - (hy << 4), 0);
        if (cell == NULL) {
            goto fail;
        }
        if (Unk_ov072_02271ca4_R(cell, 0x5000, 0x5021)) {
            goto fail;
        }
        if (Item_IsMarker(cell)) {
            goto fail;
        }
        if (Item_IsTreeStage0(cell)) {
            continue;
        }
        if (Unk_ov072_02271ca4_Chk(cell)) {
        fail:
            return FALSE;
        }
    }
    return TRUE;
}

extern "C" BOOL SpNpcGulliver_PlaceShipPart(u8 *cnt, s32 *pe, void *g0) {
    Unk_02071a58_Grid *g = (Unk_02071a58_Grid *)g0;
    u8 *t;
    s32 k, k2;
    void *cell;
    u16 h;
    volatile s32 v[4];
    k = func_02063b8c(*pe);
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
    for (v[1] = 1; v[1] < 5; v[1]++) {
        for (v[0] = 1; v[0] < 5; cnt++, v[0]++) {
            if (*cnt != 0) {
                if (k == 0) {
                    cell = Unk_ov072_02271a58_Cell(g, *(volatile s32 *)&v[0], *(volatile s32 *)&v[1]);
                    if (cell != NULL) {
                        t = (u8 *)MapBlock_GetItemPtr(cell, 0, 0, 0);
                        if (t != NULL) {
                            k2 = func_02063b8c(*cnt);
                            for (v[3] = 0; v[3] < 16; v[3]++) {
                                for (v[2] = 0; v[2] < 16; t += 2, v[2]++) {
                                    if (*(u16 *)t == 0xfff1) {
                                        if (_ZN8BlockMap13func_0204e440Eiiii(g, v[0], v[1], *(volatile s32 *)&v[2], v[3])) {
                                            if (SpNpcGulliver_IsSpotClear((s32 *)&v[0], (s32 *)&v[2], g)) {
                                                if (k2 == 0) {
                                                    h = 0x1568;
                                                    MapBlock_SetItem(cell, &h, v[2], v[3], 0);
                                                    (*cnt)--;
                                                    if (*cnt == 0) {
                                                        (*pe)--;
                                                    }
                                                    return TRUE;
                                                }
                                                k2--;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                k--;
            }
        }
    }
    return FALSE;
}

extern "C" void SpNpcGulliver_ScatterShipParts() {
    Unk_02071a58_Grid *g = (Unk_02071a58_Grid *)TownBlockMap_Get();
    s32 total, i;
    u8 *cnt, *t;
    s32 v[5];
    u8 arr[16];
    if (g != NULL) {
        total = 0;
        v[0] = total;
        v[1] = total;
        v[2] = total;
        v[3] = total;
        v[4] = total;
        cnt = arr;
        MI_CpuFill8(cnt, total, 16);
        for (v[1] = 1; v[1] < 5; v[1]++) {
            for (v[0] = 1; v[0] < 5; cnt++, v[0]++) {
                void *cell = Unk_ov072_02271a58_Cell(g, *(volatile s32 *)&v[0], *(volatile s32 *)&v[1]);
                if (cell != NULL) {
                    t = (u8 *)MapBlock_GetItemPtr(cell, 0, 0, 0);
                    if (t != NULL) {
                        for (v[3] = 0; v[3] < 16; v[3]++) {
                            for (v[2] = 0; v[2] < 16; t += 2, v[2]++) {
                                if (*(u16 *)t == 0xfff1) {
                                    if (_ZN8BlockMap13func_0204e440Eiiii(g, v[0], v[1], *(volatile s32 *)&v[2], v[3])) {
                                        if (SpNpcGulliver_IsSpotClear(&v[0], &v[2], g)) {
                                            (*cnt)++;
                                        }
                                    }
                                }
                            }
                        }
                        if (*cnt != 0) {
                            total += *cnt;
                            v[4]++;
                        }
                    }
                }
            }
        }
        if (total >= 5) {
            total = 5;
        }
        for (i = 0, t = arr; i < total; i++) {
            SpNpcGulliver_PlaceShipPart(t, &v[4], g);
            if (v[4] <= 0) {
                break;
            }
        }
    }
}

BOOL SpNpcGulliver::setupAct02() {
    unk_714 = 0;
    if (_ZN13GulliverQuest9isStartedEv(&data_021e58a6)) {
        if (unk_71c == 0) {
            void *p = unk_658.func_02015aac();
            s32 x = unk_8e;
            if (p != NULL) {
                x = _ZN8NpcActor10getAngleToEPS_(this, p);
            }
            _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&unk_618, 0, x, 0);
        } else {
            unk_564.requestEmotion(1, 0, data_020c6cc8);
        }
    } else {
        _ZN11NpcTalkCtrl11requestTalkEhh(&unk_618, 0, 0);
    }
    return TRUE;
}

BOOL SpNpcGulliver::mainAct02() {
    if (unk_71c != 0) {
        void *p = unk_658.func_02015aac();
        s32 x = unk_8e;
        if (p != NULL) {
            x = _ZN8NpcActor10getAngleToEPS_(this, p);
        }
        _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&unk_618, 0, x, 0);
        unk_71c = 0;
    }
    if (_ZN11NpcTalkCtrl6isBusyEv(&unk_618) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(3);
    }
    return TRUE;
}

BOOL SpNpcGulliver::mainAct03() {
    return TRUE;
}

void SpNpcGulliverTalk::vfunc_80() {
    if (sSpNpcGulliverTalkScripts[unk_ac].flag != 0) {
        if (sSpNpcGulliverTalkScripts[unk_ac].f) {
            (this->*sSpNpcGulliverTalkScripts[unk_ac].f)();
        }
    }
}

void SpNpcGulliverTalk::vfunc_88() {
    if (sSpNpcGulliverTalkScripts[unk_ac].flag == 0) {
        if (sSpNpcGulliverTalkScripts[unk_ac].f) {
            (this->*sSpNpcGulliverTalkScripts[unk_ac].f)();
            setScript(0);
        }
    }
}

void SpNpcGulliverTalk::setScript(s32 s) {
    unk_ac = s;
    unk_b0 = 0;
}

void SpNpcGulliverTalk::scriptWakeUp() {
    switch (unk_b0) {
    case 0:
        if (unk_3c->unk_04 == 5) {
            unk_b8->unk_564.requestPlayAnim(2, 0xd5, 1, data_020c6cc8, 0);
            _ZN14NpcMoveAnimSet12setStandAnimEi(&unk_b8->unk_2a0, 0);
            unk_b0 = unk_b0 + 1;
        }
        break;
    case 1:
        if (_ZN12Unk_02015b8c9getAnimIdEj(&unk_b8->unk_334, 0) == 0xd5) {
            if (unk_b8->unk_564.isActionDone()) {
                _ZN13NpcActionCtrl13requestActionEjiiissiitt(&unk_b8->unk_564, 3, 2, 0, 0, 0, unk_b8->getAngleToPlayer(4), 0, 0, data_020c6cc8, 0);
                unk_b0 = unk_b0 + 1;
            }
        }
        break;
    case 2:
        if (unk_b8->unk_564.getAction() == 3) {
            if (unk_b8->unk_564.isActionDone()) {
                u8 b;
                _ZN13GulliverQuest5startEv(&data_021e58a6);
                requestReopenWindow();
                Talk_CheckAndSetPlayerFlag(0x14, 1);
                b = func_02063b8c(5) + 5;
                unk_3c->setNextMessage(&b, sSpNpcGulliverKey);
                setScript(0);
            }
        }
        break;
    }
}

SpNpcGulliverTalk::SpNpcGulliverTalk() {}

// Member (SpNpcGulliverTalk) ctor/dtor
SpNpcGulliverTalk::~SpNpcGulliverTalk() {}

void SpNpcGulliverTalk::attachOwner(SpNpcGulliver *owner) {
    vfunc_08();
    unk_b8 = owner;
    unk_b4 = 0;
}

void SpNpcGulliverTalk::vfunc_78(TalkStartMsg *out) {
    u16 h;
    s32 t;
    h = 0x1568;
    t = Pocket_FindItem(&h);
    if (Talk_CheckAndSetPlayerFlag(0x14, 0) == 0) {
        if (_ZN13GulliverQuest9isStartedEv(&data_021e58a6)) {
            unk_b4 = 2;
            Talk_CheckAndSetPlayerFlag(0x14, 1);
        } else {
            unk_b4 = 0;
        }
    } else if (_ZN13GulliverQuest12getPartCountEv(&data_021e58a6) >= 5) {
        unk_b4 = 3;
    } else if (t < 0) {
        if (_ZN13GulliverQuest12getPartCountEv(&data_021e58a6) == 0) {
            unk_b4 = 4;
        } else {
            s32 v;
            unk_b4 = 5;
            v = 5 - _ZN13GulliverQuest12getPartCountEv(&data_021e58a6);
            if (v < 0) {
                v = 0;
            }
            setNumberSlot(v, 0, 2, 0, 0);
        }
    } else {
        s32 i;
        u16 h2;
        if (Talk_CheckAndSetPlayerFlag(0x15, 1)) {
            unk_b4 = 6;
        } else {
            unk_b4 = 7;
        }
        for (i = 1; i <= 15; i++) {
            Pocket_RemoveItem(t);
            if (_ZN13GulliverQuest12getPartCountEv(&data_021e58a6) < 5) {
                _ZN13GulliverQuest7addPartEv(&data_021e58a6);
            }
            h2 = 0x1568;
            t = Pocket_FindItem(&h2);
            if (t < 0) {
                break;
            }
        }
        setNumberSlot(i, 1, 2, 0, 0);
    }
    s32 s = unk_b4;
    if (s >= 0 && s < 8) {
        out->unk_00 = sSpNpcGulliverTopicMsgs[s].unk_00;
        if (unk_b4 == 0) {
            out->unk_04 = func_02063b8c(5);
        } else if (unk_b4 == 3) {
            out->unk_04 = func_02063b8c(5) + 13;
        } else {
            out->unk_04 = *(u8 *)((u8 *)sSpNpcGulliverTopicMsgs + 4 + unk_b4 * 8);
        }
    }
}

void SpNpcGulliverTalk::vfunc_14() {
    u8 b;
    u16 h0;
    u16 h1;
    u16 h2;
    Unk_ov072_02271a58_Obj o;
    u8 *const g = &data_021e58a6;
    h0 = 0xfff1;
    u8 *const m = sSpNpcGulliverKey;
    u32 r = 0xff;
    switch (unk_1e) {
    case 0:
        requestCloseWindow(0);
        setScript(1);
        break;
    case 0xb:
        SpNpcGulliver_ScatterShipParts();
        break;
    case 0x14:
    case 0x15:
        h1 = 0x1568;
        _ZN12Unk_0201442015requestTakeItemEPtjjj(this, &h1, 0, 5, 0);
        r = 0x16;
        break;
    case 0x16:
        if (_ZN13GulliverQuest12getPartCountEv(g) >= 5) {
            r = 0x17;
        } else {
            r = (u8)(_ZN13GulliverQuest12getPartCountEv(g) + 0x19);
        }
        break;
    case 0x17:
        break;
    case 0x18:
        _ZN12ItemPickSpec3setEii(&o, 0, 0x13);
        ItemPick_One(&h2, &o, 0, 0, 1, 1, 0);
        h0 = h2;
        func_02063388(&o);
        _ZN12Unk_020d771015requestGiveItemEPtjjj(this, &h0, 0, 5, 0);
        Pocket_AddItem(&h0, 0);
        r = 0x19;
        break;
    case 0x19:
        EventWeekSlots_MarkPlayer(0x44);
        break;
    }
    if (r != 0xff) {
        b = r;
        unk_3c->setNextMessage(&b, m);
    }
}

void SpNpcGulliverTalk::vfunc_18() {
    getChoiceList()->getResult();
}

BOOL SpNpcGulliver::vfunc_48() {
    BOOL r = FALSE;
    if (_ZN11NpcTalkCtrl6isBusyEv(&unk_618) == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcGulliver::vfunc_4c(s32 a) {
    switch (a) {
    case 0:
        unk_658.vfunc_08();
        unk_658.func_02015ab0((u32)getPlayerActor(4));
        changeAct(2);
        break;
    case 8:
        if (_ZN13GulliverQuest9isStartedEv(&data_021e58a6)) {
            changeAct(1);
        } else {
            changeAct(0);
        }
        break;
    }
}

