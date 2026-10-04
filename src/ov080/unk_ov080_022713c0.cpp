// mwcc-flags: -str reuse
#include "types.h"
#include "Unk_020d8c7c.h"
#include "actor/Unk_02088d00.h"
#include "talk/TalkStartMsg.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ad18.h"
#include "npc/Unk_020135e4.h"
#include "npc/NpcActionCtrl.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/Unk_02014254.h"
#include "npc/Unk_0201a13c.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/ThreeLayerAnimModel.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "actor/NpcActor.h"
#include "actor/SpNpcActor.h"
#include "talk/Unk_020d7710.h"
#include "talk/SpNpcTalkRequest.h"

// Real (mangled) names of other modules' functions that the unit calls as plain functions taking the object first.
#define NpcAnimCtrl_playAnim _ZN11NpcAnimCtrl8playAnimEP16Unk_02015fe0_Objiiiiti
#define ChoiceList_getResult _ZN10ChoiceList9getResultEv
#define Unk_02097ff4_testFlag _ZN12Unk_02097ff48testFlagEj
#define Unk_02097ff4_setFlag _ZN12Unk_02097ff47setFlagEj
#define PlayerData_isUsed _ZN10PlayerData6isUsedEv
#define Unk_02014420_requestTakeItem _ZN12Unk_0201442015requestTakeItemEPtjjj
#define unk_618_func_020141b4 _ZN11NpcTalkCtrl18requestTurnAndTalkEssh
#define unk_618_func_02014220 _ZN11NpcTalkCtrl6isBusyEv
#define unk_564_func_020196b4 _ZN13NpcActionCtrl13requestActionEjiiissiitt

class SpNpcTortimer;
class SpNpcTortimerTalk;

extern "C" {
void *PlayerData_GetCurrent();
u32 Random_GlobalBelow(u32 n);
BOOL TalkRequest_SetTargetDone(void *p);
void TalkRequestFlags_SetEventWarpBlock();
BOOL Catalog_HasAllFish();
BOOL Catalog_HasAllInsects();
void ThreeLayerAnimModel_AssignJointsToLayer2(void *self, s32 a, s32 b);
void NpcAnimCtrl_playAnim(void *self, void *owner, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void Unk_02014420_requestTakeItem(void *self, u16 *p, u32 a, u32 b, u32 c);
BOOL unk_618_func_02014220(void *self);
void unk_618_func_020141b4(void *self, u32 a, u32 b, u32 c);
void unk_564_func_020196b4(void *self, u32 a, u32 b, u32 c, u32 s0, u32 s1, u32 s2, u32 s3, u32 s4, u32 s5, u32 s6);
s32 ChoiceList_getResult();
s32 Unk_02097ff4_testFlag(void *p, u32 a);
void Unk_02097ff4_setFlag(void *p, u32 a);
BOOL Pocket_AddItem(u16 *p, u32 a);
void Pocket_RemoveItem(s32 a);
s32 Pocket_FindItem(u16 *p);
s32 Pocket_FindEmpty();
void *PlayerData_GetResident(void *tbl, s32 i);
BOOL PlayerData_isUsed(void *p);
extern u16 data_020c6cc8;
extern u8 gSavePlayers[];
extern u8 sSpNpcTortimerModelPath[];
extern u8 sSpNpcTortimerTexturePath[];
}


struct TalkStartMsg;






class SpNpcTortimerTalk : public SpNpcTalkRequest {
public:
    SpNpcTortimerTalk();
    virtual ~SpNpcTortimerTalk();
    virtual void onMessageEnd(u32 attr);
    virtual void onChoice(u32 attr);
    virtual void start(TalkStartMsg *out);

    void attachOwner(SpNpcTortimer *owner);

    SpNpcTortimer *ownerNpc;
    s32 massageChairSlot;
};



struct Unk_020d77a4_Vec3;
struct Unk_0201bc1c;





class SpNpcTortimer : public SpNpcActor {
public:
    SpNpcTortimer() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_04();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_48(void *other);
    virtual void vfunc_4c(u32 a, u8 b);
    virtual BOOL updateAct();
    virtual u8 *getTexturePath();
    virtual u8 *getModelPath();

    BOOL mainAct02();
    BOOL mainAct01();
    BOOL setupAct01();
    BOOL mainAct00();
    BOOL setupAct00();
    void changeAct(s32 state);

    s32 unk_654;
    SpNpcTortimerTalk talk;
};

struct Unk_ov080_022718c0_Ent {
    BOOL (SpNpcTortimer::*enter)();
    BOOL (SpNpcTortimer::*exit)();
};

Unk_ov080_022718c0_Ent sSpNpcTortimerActTable[3] = {
    {&SpNpcTortimer::setupAct00, &SpNpcTortimer::mainAct00},
    {&SpNpcTortimer::setupAct01, &SpNpcTortimer::mainAct01},
    {NULL, &SpNpcTortimer::mainAct02},
};

struct Unk_ov080_SceneEntry {
    SpNpcTortimer *(*factory)();
    u16 a;
    u16 b;
    s32 c;
    s32 d;
    s32 e;
    s32 f;
};

extern "C" SpNpcTortimer *SpNpcTortimer_Create();

extern "C" {
u8 sSpNpcTortimerTexturePath[27] = "npc_sp/model/ttl_tex.nsbtx";
u8 sSpNpcTortimerModelPath[23] = "npc_sp/model/ttl.nsbmd";
Unk_ov080_SceneEntry sSpNpcTortimerProfile = {SpNpcTortimer_Create, 0x56, 0x5d, 2, 0x5000, 0x5000, 0x3e800};
}



struct Unk_ov080_02271648_Buf {
    u8 t[2];
    u16 v[8];
};

struct Unk_ov080_02271478_Buf {
    u8 t;
    u8 pad_01;
    u16 v;
};

extern "C" SpNpcTortimer *SpNpcTortimer_Create() {
    return new SpNpcTortimer();
}

BOOL SpNpcTortimer::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    setTalkRequest((Unk_0201bc1c *)&talk);
    talk.attachOwner(this);
    return TRUE;
}

BOOL SpNpcTortimer::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    changeAct(0);
    NpcAnimCtrl_playAnim(&animCtrl, this, 0x140, 0, 0, 0x1000, 0, 1);
    ThreeLayerAnimModel_AssignJointsToLayer2(&model, 0xc, 0xe);
    collider.groups |= 2;
    if (Unk_02097ff4_testFlag(PlayerData_GetCurrent(), 1) == 0) {
        TalkRequestFlags_SetEventWarpBlock();
    }
    return TRUE;
}

BOOL SpNpcTortimer::vfunc_0c() {
    if (SpNpcActor::vfunc_0c()) {
        return TRUE;
    }
    return FALSE;
}

u8 *SpNpcTortimer::getTexturePath() { return sSpNpcTortimerTexturePath; }

u8 *SpNpcTortimer::getModelPath() { return sSpNpcTortimerModelPath; }

BOOL SpNpcTortimer::updateAct() {
    BOOL result = FALSE;
    if (sSpNpcTortimerActTable[unk_654].exit != NULL) {
        result = (this->*sSpNpcTortimerActTable[unk_654].exit)();
    }
    return result;
}

void SpNpcTortimer::changeAct(s32 state) {
    BOOL ok = TRUE;
    if (sSpNpcTortimerActTable[state].enter != NULL) {
        ok = (this->*sSpNpcTortimerActTable[state].enter)();
    }
    if (ok) {
        unk_654 = state;
    }
}

BOOL SpNpcTortimer::setupAct00() {
    unk_564_func_020196b4(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcTortimer::mainAct00() { return TRUE; }

BOOL SpNpcTortimer::setupAct01() {
    void *p = talk.func_02015aac();
    u32 x = 0;
    if (p != NULL) {
        x = getAngleTo((NpcActor *)p);
    }
    unk_618_func_020141b4(&talkCtrl, 0, x, 0);
    return TRUE;
}

BOOL SpNpcTortimer::mainAct01() {
    if (unk_618_func_02014220(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(2);
    }
    return TRUE;
}

BOOL SpNpcTortimer::mainAct02() { return TRUE; }

SpNpcTortimerTalk::SpNpcTortimerTalk() {}

SpNpcTortimerTalk::~SpNpcTortimerTalk() {}

void SpNpcTortimerTalk::attachOwner(SpNpcTortimer *owner) {
    vfunc_08();
    ownerNpc = owner;
    massageChairSlot = -1;
}

void SpNpcTortimerTalk::start(TalkStartMsg *out) {
    void *g = PlayerData_GetCurrent();
    if (Unk_02097ff4_testFlag(g, 1)) {
        out->msgKey = "sp_etc_sequence5_2";
        if (Unk_02097ff4_testFlag(g, 0xd) == 0) {
            out->msgIndex = 0;
            Unk_02097ff4_setFlag(g, 0xd);
        } else {
            out->msgIndex = Random_GlobalBelow(4) + 3;
        }
        Unk_02097ff4_setFlag(g, 0xa);
    } else {
        if (massageChairSlot == -1) {
            u16 v = 0x37e0;
            massageChairSlot = Pocket_FindItem(&v);
            if (massageChairSlot >= 0) {
                out->msgKey = "sp_npc_turtle";
                out->msgIndex = 0;
                return;
            }
        }
        out->msgKey = "sp_npc_turtle7";
        if (Unk_02097ff4_testFlag(g, 0x21) == 0 && Catalog_HasAllFish()) {
            out->msgIndex = 0;
            if (Pocket_FindEmpty() < 0) {
                out->msgIndex = 9;
            } else {
                s32 i;
                for (i = 0; i < 4; i++) {
                    void *p = PlayerData_GetResident(gSavePlayers, i);
                    if (p != NULL && PlayerData_isUsed(p) && p != g && Unk_02097ff4_testFlag(p, 0x21)) {
                        out->msgIndex = 2;
                        break;
                    }
                }
            }
        } else if (Unk_02097ff4_testFlag(g, 0x22) == 0 && Catalog_HasAllInsects()) {
            out->msgIndex = 3;
            if (Pocket_FindEmpty() < 0) {
                out->msgIndex = 0xa;
            } else {
                s32 i;
                for (i = 0; i < 4; i++) {
                    void *p = PlayerData_GetResident(gSavePlayers, i);
                    if (p != NULL && PlayerData_isUsed(p) && p != g && Unk_02097ff4_testFlag(p, 0x22)) {
                        out->msgIndex = 5;
                        break;
                    }
                }
            }
        } else {
            out->msgIndex = Random_GlobalBelow(3) + 6;
        }
    }
}

void SpNpcTortimerTalk::onMessageEnd(u32) {
    Unk_ov080_02271648_Buf buf;
    u32 r = 0xff;
    if (massageChairSlot >= 0) {
        if (msgIndex == 1 || msgIndex == 4) {
            massageChairSlot = -2;
        }
        if (msgIndex == 2) {
            buf.v[0] = 0x1559;
            this->requestGiveItem(&buf.v[0], 0, 5, 0);
            buf.v[1] = 0x1559;
            Pocket_AddItem(&buf.v[1], 0);
            buf.t[0] = 4;
            unk_3c->setNextMessage(&buf.t[0], (u8 *)"sp_npc_turtle");
        }
    } else {
        void *g = PlayerData_GetCurrent();
        u8 *str;
        if (Unk_02097ff4_testFlag(g, 1)) {
            str = (u8 *)"sp_etc_sequence5_2";
        } else {
            str = (u8 *)"sp_npc_turtle7";
            switch (msgIndex) {
            case 0:
            case 2:
                buf.v[2] = 0x1375;
                if (Pocket_AddItem(&buf.v[2], 0)) {
                    buf.v[3] = 0x1375;
                    this->requestGiveItem(&buf.v[3], 0, 5, 0);
                    Unk_02097ff4_setFlag(g, 0x21);
                    buf.v[4] = 0x1375;
                    this->setItemNameSlot((u32)&buf.v[4], 0, 7);
                    r = 1;
                }
                break;
            case 3:
            case 5:
                buf.v[5] = 0x1377;
                if (Pocket_AddItem(&buf.v[5], 0)) {
                    buf.v[6] = 0x1377;
                    this->requestGiveItem(&buf.v[6], 0, 5, 0);
                    Unk_02097ff4_setFlag(g, 0x22);
                    buf.v[7] = 0x1377;
                    this->setItemNameSlot((u32)&buf.v[7], 0, 7);
                    r = 4;
                }
                break;
            }
        }
        if (r != 0xff) {
            buf.t[1] = r;
            unk_3c->setNextMessage(&buf.t[1], str);
        }
    }
}

void SpNpcTortimerTalk::onChoice(u32) {
    Unk_ov080_02271478_Buf buf;
    getChoiceList();
    s32 t = ChoiceList_getResult();
    void *g = PlayerData_GetCurrent();
    u8 r = 0xff;
    if (massageChairSlot >= 0) {
        u8 *const str = (u8 *)"sp_npc_turtle";
        if (msgIndex == 0 && t == 0) {
            if (massageChairSlot >= 0) {
                Pocket_RemoveItem(massageChairSlot);
                buf.v = 0x37e0;
                Unk_02014420_requestTakeItem(this, &buf.v, 0, 5, 0);
            }
            r = 2;
        }
        if (r != 0xff) {
            buf.t = r;
            unk_3c->setNextMessage(&buf.t, str);
        }
    } else {
        Unk_02097ff4_testFlag(g, 1);
    }
}

BOOL SpNpcTortimer::vfunc_48(void *) {
    BOOL r = FALSE;
    if (unk_618_func_02014220(&talkCtrl) == 0) {
        r = TRUE;
    }
    return r;
}

void SpNpcTortimer::vfunc_4c(u32 a, u8 b) {
    switch (a) {
    case 0:
        talk.vfunc_08();
        talk.func_02015ab0(getPlayerActor(4));
        changeAct(1);
        break;
    case 8:
        changeAct(0);
        break;
    }
}

// ---------------------------------------------------------------------------------------------------------------------

