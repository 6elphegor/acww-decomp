#include "types.h"

struct Unk_ov004_0221b6d4_Out {
    u32 unk_00;
    u8 unk_04;
};

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

struct ChoiceList {
    s32 ChoiceList_getResult();
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
    virtual void vfunc_78(Unk_ov004_0221b6d4_Out *out);
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
    u8 pad_00[0xa0];
    s32 unk_a0;
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
MEMBER(CollisionState, 0x30);
struct Unk_02088d00 {
    u8 pad_00[0x1c];
    u32 unk_1c;
    u8 pad_20[0x44 - 0x20];
    u8 unk_44;
    u8 pad_45[0x514 - 0x4cc - 0x45];
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
struct SpNpcAnimHeapHandle { u8 unk_00[8]; SpNpcAnimHeapHandle(); };

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
    virtual BOOL vfunc_48(void *p);
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
    virtual void vfunc_4c(s32 v);
    virtual void vfunc_5c(Unk_020d77a4_Vec3 *v);
    virtual void onToolHit();
    virtual void vfunc_64();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();
    virtual void getName(u32 v);
    virtual void getGender();
    virtual void canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
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
    virtual void canPlayTalkMelody();
    virtual void onTalkMelodyPlayed();
    virtual void getSpecies();
    virtual s32 vfunc_a8();

    SpNpcAnimHeapHandle unk_640;
    s32 unk_648;
    s32 unk_64c;
    u8 unk_650;
};

struct Unk_ov004_0221b954_Global {
    u8 pad_00[0x64];
    u32 unk_64;
};

class SpNpcTortimer2;

struct Unk_ov004_0221e56c_Ent {
    BOOL (SpNpcTortimer2::*enter)();
    BOOL (SpNpcTortimer2::*exit)();
};

#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define TalkWindowState_setNextMessage _ZN15TalkWindowState14setNextMessageEPhPv
#define func_02015aac _ZN16ActorTalkRequest13func_02015aacEv
#define func_02015ab0 _ZN16ActorTalkRequest13func_02015ab0Ej
#define ActorTalkRequest_getChoiceList _ZN16ActorTalkRequest13getChoiceListEv
#define NpcActionCtrl_requestAction _ZN13NpcActionCtrl13requestActionEjiiissiitt
#define NpcTalkCtrl_isBusy _ZN11NpcTalkCtrl6isBusyEv
#define NpcTalkCtrl_requestTurnAndTalk _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define NpcActor_setTalkRequest _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c
#define NpcActor_getPlayerActor _ZN8NpcActor14getPlayerActorEj
#define NpcMoveAnimSet_setStandAnim _ZN14NpcMoveAnimSet12setStandAnimEi
#define NpcAnimCtrl_isPlayingAnim _ZN11NpcAnimCtrl13isPlayingAnimEiPv
#define NpcActionCtrl_isActionDone _ZN13NpcActionCtrl12isActionDoneEv
#define NpcActionCtrl_requestPlayAnim _ZN13NpcActionCtrl15requestPlayAnimEiijtt

extern "C" {
extern s32 data_020c6d1c;
extern u16 data_020c6cc8;
extern Unk_ov004_0221e56c_Ent sSpNpcTortimer2ActTable[];
// 0x02250bcc is a label inside the 0x20-byte table (second ptmf of entry 0)
#define data_ov004_02250bcc ((Unk_ov004_0221e56c_Ent *)((u8 *)sSpNpcTortimer2ActTable + 8))
extern SpNpcTortimer2 *volatile sSpNpcTortimer2;
extern u8 sSpNpcTortimer2ModelPath[];
extern u8 sSpNpcTortimer2TexturePath[];

void NpcMoveAnimSet_setStandAnim(void *self, s32 a);
s32 NpcAnimCtrl_isPlayingAnim(void *self, s32 a, void *b);
s32 NpcActionCtrl_isActionDone(void *self);
void NpcActionCtrl_requestAction(void *self, u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
void NpcActionCtrl_requestPlayAnim(void *self, s32 a, s32 b, u32 c, u16 d, u16 e);
s32 func_020e7518(void *self);
s32 SaveManager_IsIdle();
}

class SpNpcTortimer2 : public SpNpcActor {
public:
    SpNpcTortimer2() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    /* 0x654 */ s32 unk_654;
    /* 0x658 */ u8 unk_658;
};

struct Unk_ov004_SceneEntry {
    SpNpcTortimer2 *(*factory)();
    u16 a, b;
    s32 c, d, e, f;
};

extern "C" SpNpcTortimer2 *SpNpcTortimer2_Create() { return new SpNpcTortimer2; }

BOOL SpNpcTortimer2::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    NpcMoveAnimSet_setStandAnim(&unk_2a0, 0xff);
    return TRUE;
}

BOOL SpNpcTortimer2::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    sSpNpcTortimer2 = this;
    changeAct(0);
    unk_4cc.unk_1c |= 2;
    unk_4cc.unk_44 = 0;
    return TRUE;
}

BOOL SpNpcTortimer2::vfunc_0c() {
    if (!SpNpcActor::vfunc_0c()) {
        return FALSE;
    }
    sSpNpcTortimer2 = 0;
    return TRUE;
}

u8 *SpNpcTortimer2::getTexturePath() { return sSpNpcTortimer2TexturePath; }

u8 *SpNpcTortimer2::getModelPath() { return sSpNpcTortimer2ModelPath; }

BOOL SpNpcTortimer2::updateAct() {
    BOOL r = FALSE;
    if (data_ov004_02250bcc[unk_654].enter) {
        r = (this->*sSpNpcTortimer2ActTable[unk_654].exit)();
    }
    return r;
}

void SpNpcTortimer2::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcTortimer2ActTable[state].enter) {
        ok = (this->*sSpNpcTortimer2ActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcTortimer2::setupAct00() {
    NpcActionCtrl_requestAction(&unk_564, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    unk_658 = 0xa;
    return TRUE;
}

BOOL SpNpcTortimer2::mainAct00() {
    if (((u32)unk_ec.unk_a4 << 4) >> 16 == (((u32)unk_ec.unk_a0 << 4) >> 16) - 1) {
        if (func_020e7518(&unk_658) == 0 && SaveManager_IsIdle()) {
            changeAct(1);
        }
    }
    return TRUE;
}

BOOL SpNpcTortimer2::setupAct01() {
    NpcActionCtrl_requestPlayAnim(&unk_564, 1, 0x100, 1, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcTortimer2::mainAct01() {
    if (NpcAnimCtrl_isPlayingAnim(&unk_334, 0x100, &unk_2a0) && NpcActionCtrl_isActionDone(&unk_564)) {
        NpcActionCtrl_requestPlayAnim(&unk_564, 1, 0x101, 1, data_020c6cc8, 0);
    }
    if (NpcAnimCtrl_isPlayingAnim(&unk_334, 0x101, &unk_2a0) && NpcActionCtrl_isActionDone(&unk_564)) {
        changeAct(0);
    }
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------
// SpNpcTortimer2

extern "C" BOOL SpNpcTortimer2_IsIdle() {
    SpNpcTortimer2 *y = sSpNpcTortimer2;
    if (y) {
        if (NpcAnimCtrl_isPlayingAnim(&y->unk_334, 0xff, &y->unk_2a0) && sSpNpcTortimer2->unk_654 == 0) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

extern "C" void _ZN14SpNpcTortimer210setupAct00Ev();
extern "C" void _ZN14SpNpcTortimer29mainAct00Ev();
extern "C" void _ZN14SpNpcTortimer210setupAct01Ev();
extern "C" void _ZN14SpNpcTortimer29mainAct01Ev();
extern "C" u8 sSpNpcTortimer2ModelPath[23] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 't', 't', 'i', '.', 'n', 's', 'b', 'm', 'd', 0};
extern "C" u8 sSpNpcTortimer2TexturePath[27] = {'n', 'p', 'c', '_', 's', 'p', '/', 'm', 'o', 'd', 'e', 'l', '/', 't', 't', 'i', '_', 't', 'e', 'x', '.', 'n', 's', 'b', 't', 'x', 0};
extern "C" Unk_ov004_SceneEntry sSpNpcTortimer2Profile = {SpNpcTortimer2_Create, 0x5d, 0x64, 2, 0x5000, 0x5000, 0x3e800};
extern "C" void *data_ov004_0224d394[2] = {(void *)_ZN14SpNpcTortimer210setupAct01Ev, 0};
extern "C" void *data_ov004_0224d39c[2] = {(void *)_ZN14SpNpcTortimer29mainAct01Ev, 0};
extern "C" void *data_ov004_0224d384[2] = {(void *)_ZN14SpNpcTortimer210setupAct00Ev, 0};
extern "C" void *data_ov004_0224d38c[2] = {(void *)_ZN14SpNpcTortimer29mainAct00Ev, 0};
typedef BOOL (SpNpcTortimer2::*Unk_ov004_O_Fn)();
extern "C" Unk_ov004_0221e56c_Ent sSpNpcTortimer2ActTable[2] = {
    {*(Unk_ov004_O_Fn *)data_ov004_0224d384, *(Unk_ov004_O_Fn *)data_ov004_0224d38c},
    {*(Unk_ov004_O_Fn *)data_ov004_0224d394, *(Unk_ov004_O_Fn *)data_ov004_0224d39c},
};
extern "C" SpNpcTortimer2 *volatile sSpNpcTortimer2 = 0;
