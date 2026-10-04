#include "types.h"


#include "types.h"
#include "actor/Unk_ov004_SceneEntry.h"
#include "actor/Unk_02088d00.h"
#include "talk/Unk_ov004_0221b6d4_Out.h"
#include "net/Unk_ov004_0221b954_Global.h"
#include "talk/TalkWindowState.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ac88.h"
#include "npc/Unk_0201ad18.h"
#include "npc/Unk_020135e4.h"
#include "sys/ProcBase.h"
#include "npc/NpcActionCtrl.h"
#include "snd/SndSeEmitterKind1.h"
#include "npc/Unk_02014254.h"
#include "npc/Unk_0201a13c.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "talk/ChoiceList.h"
#include "gfx/ThreeLayerAnimModel.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "actor/NpcActor.h"
#include "actor/SpNpcActor.h"
#include "talk/Unk_020d7710.h"
#include "talk/SpNpcTalkRequest.h"


struct Unk_0201bc1c;










struct Unk_020d77a4_Vec3;





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
    /* 0x658 */ u8 idleLoops;
};


extern "C" SpNpcTortimer2 *SpNpcTortimer2_Create() { return new SpNpcTortimer2; }

BOOL SpNpcTortimer2::vfunc_04() {
    if (!SpNpcActor::vfunc_04()) {
        return FALSE;
    }
    NpcMoveAnimSet_setStandAnim(&moveAnimSet, 0xff);
    return TRUE;
}

BOOL SpNpcTortimer2::vfunc_00() {
    if (!SpNpcActor::vfunc_00()) {
        return FALSE;
    }
    sSpNpcTortimer2 = this;
    changeAct(0);
    collider.groups |= 2;
    collisionEnabled = 0;
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
    NpcActionCtrl_requestAction(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    idleLoops = 0xa;
    return TRUE;
}

BOOL SpNpcTortimer2::mainAct00() {
    if (((u32)model.curFrame << 4) >> 16 == (((u32)model.numFrames << 4) >> 16) - 1) {
        if (func_020e7518(&idleLoops) == 0 && SaveManager_IsIdle()) {
            changeAct(1);
        }
    }
    return TRUE;
}

BOOL SpNpcTortimer2::setupAct01() {
    NpcActionCtrl_requestPlayAnim(&actionCtrl, 1, 0x100, 1, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcTortimer2::mainAct01() {
    if (NpcAnimCtrl_isPlayingAnim(&animCtrl, 0x100, &moveAnimSet) && NpcActionCtrl_isActionDone(&actionCtrl)) {
        NpcActionCtrl_requestPlayAnim(&actionCtrl, 1, 0x101, 1, data_020c6cc8, 0);
    }
    if (NpcAnimCtrl_isPlayingAnim(&animCtrl, 0x101, &moveAnimSet) && NpcActionCtrl_isActionDone(&actionCtrl)) {
        changeAct(0);
    }
    return TRUE;
}

// ---------------------------------------------------------------------------------------------------------------------
// SpNpcTortimer2

extern "C" BOOL SpNpcTortimer2_IsIdle() {
    SpNpcTortimer2 *y = sSpNpcTortimer2;
    if (y) {
        if (NpcAnimCtrl_isPlayingAnim(&y->animCtrl, 0xff, &y->moveAnimSet) && sSpNpcTortimer2->unk_654 == 0) {
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
extern "C" Unk_ov004_SceneEntry sSpNpcTortimer2Profile = {(void *(*)())SpNpcTortimer2_Create, 0x5d, 0x64, 2, 0x5000, 0x5000, 0x3e800};
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
