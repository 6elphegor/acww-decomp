#include "types.h"
#include "net/CommManager.h"
#include "gfx/Unk_020bfe30_Vec.h"
#include "npc/Unk_020c0538_Out.h"
#include "game/Unk_020d77a4_Vec3.h"
#include "npc/Unk_0201a13c.h"
#include "npc/NpcAnimCtrl.h"
#include "npc/NpcSpeechState.h"
#include "npc/NpcResHandleView.h"
#include "npc/NpcObstacleProbe.h"
#include "npc/Unk_0201ad18.h"
#include "npc/Unk_020135e4.h"
#include "sys/ProcBase.h"
#include "actor/Actor.h"
#include "actor/Character.h"
#include "gfx/ThreeLayerAnimModel.h"
#include "talk/TalkMsgRequest.h"
#include "talk/ActorTalkRequest.h"
#include "talk/TalkWindowState.h"
#include "snd/SndSeEmitterKind1.h"
#include "actor/NpcActor.h"
#include "actor/ActorFollowCollider.h"
#include "actor/SpNpcActor.h"
#include "talk/SpNpcTalkRequest.h"
#include "talk/SpNpcKatieTalk.h"
#include "npc/SpNpcKatie.h"

typedef Unk_020bfe30_Vec Unk_020c0acc_Vec;


class SpNpcKatie;

extern "C" {
void _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c(void *a, void *b);
void _ZN11NpcMoveCtrl14setSpeedPresetEiiii(void *self, s32 a, s32 b, s32 c, s32 d);
s32 Scene_GetCurrent(void);
s32 Scene_GetPrevious(void);
void _ZN13NpcActionCtrl13requestActionEjiiissiitt(void *self, s32 a, s32 b, s32 c, s32 d0, s32 d1, s32 d2, s32 d3, s32 d4, s32 d5, s32 d6);
void _ZN13NpcActionCtrl15requestPlayAnimEiijtt(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
s32 _ZN13NpcActionCtrl12isActionDoneEv(void *self);
s32 _ZN13NpcActionCtrl9getActionEv(void *self);
s32 _ZN9NpcLookAt15getObstacleBitsEv(void *self);
void _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(void *a, s32 b, s32 c, s32 d, u8 *e, s32 f, s32 g, s32 h);
void _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(void *a, void *b);
void _ZN14NpcMoveAnimSet12setStandAnimEi(void *a, s32 b);
void _ZN14NpcMoveAnimSet11setWalkAnimEi(void *a, s32 b);
s32 _ZN8NpcActor19getDistanceToPlayerEj(void *a, s32 b);
u32 _ZN8NpcActor14getPlayerActorEj(void *p, s32 n);
s32 _ZN8NpcActor10getAngleToEPS_(void *a, s32 b);
s32 _ZN16ActorTalkRequest13func_02015aacEv(void *a);
void _ZN16ActorTalkRequest13func_02015ab0Ej(void *a, s32 b);
s32 _ZN16ActorTalkRequest10onEventTagEj(void *p, void *q);
void _ZN16ActorTalkRequest15setPartnerActorEP18Unk_02015b8c_Scene(void *p, s32 a);
void _ZN16ActorTalkRequest15setTownNameSlotEjj(void *self, s32 a, s32 b);
BOOL _ZN11NpcAnimCtrl13isPlayingAnimEiPv(void *a, s32 b, void *c);
s32 Effect_Create(s32 a, void *b, void *c, s32 d);
void Effect_SetPosition(s32 a, void *b, void *c, s32 d);
void Effect_End(s32 a);
void _ZN12Unk_02086f8414clearFollowingEv(void *a);
void _ZN12Unk_02086f8412setFollowingEv(void *a);
s32 _ZN12Unk_02086f8411isFollowingEv(void *a);
void _ZN12Unk_02086f846getPosEP17Unk_02086ec4_Vec3(void *a, void *b);
void _ZN12Unk_02086f846setPosEP17Unk_02086ec4_Vec3(void *a, void *b);
void func_02003e70(void *a, s32 b, s32 c, s32 d);
void *PlayerData_GetCurrent(void);
void *TownSessionState_Get(void);
void *TownSessionState_GetKatieState(void *a);
void *PlayerActor_GetBodyPos(s32 a);
void *TownBlockMap_Get(void);
void Town_FindGateHouse(void *a, Unk_020c0acc_Vec *b, s32 c, s32 d);
void FieldPos_SnapToUnitCenter(Unk_020c0acc_Vec *a, Unk_020c0acc_Vec *b);
void FieldPos_FromUnitCenter(Unk_020c0acc_Vec *a, s32 b, s32 c);
s32 _ZN10PlayerData18getLostChildRecordEv(void *a);
BOOL _ZN15LostChildRecord11isEscortingEv(s32 a);
BOOL _ZN12Unk_02097ff48testFlagEj(void *a, s32 b);
s32 _ZN12Unk_02097ff47setFlagEj(void *a, s32 b);
BOOL Talk_CheckAndSetPlayerFlag(s32 a, s32 b);
void TalkRequest_SetTargetDone(void *a);
void TalkRequestFlags_ClearSceneHold(void);
void TalkRequestFlags_SetSceneHold(void);
BOOL _ZN11NpcTalkCtrl6isBusyEv(void *a);
void _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(void *a, s32 b, s32 c, s32 d);
BOOL TownMap_FindBuildingAbovePos(Unk_020c0acc_Vec *a, s32 b, s32 c, s32 d);
void TownMap_IsPosWalkable(Unk_020c0acc_Vec *a, s32 b);
s32 Vec_DistXZ(void *a, void *b);
BOOL Math_CountDownU16(void *a);
s32 _ZN11NpcFaceAnim12getMouthAnimEv(void *p);
s32 _ZN15TalkWindowState13getChoiceListEv(void *p);
s32 _ZN10ChoiceList9getResultEv(void);
void _ZN15TalkWindowState14setNextMessageEPhPv(void *a, void *b, u32 c);
void _ZN15TalkWindowState11lockAdvanceEv(void *p);
void _ZN15TalkWindowState13unlockAdvanceEv(void *p);
s32 Math_AngleXZ(void *a, void *b);
void PlayerActor_RequestTurnTo(s32 a, s32 b);
void PlayerActor_RequestWalkTo(void *v, s32 a, s32 b);
BOOL PlayerActor_SetNetFollowPaused(s32 a, s32 b);
BOOL PlayerActor_IsScriptedWalking(s32 a);
s32 Net_GetJoiningAid(void);
s32 PlayerData_GetBySessionSlot(s32 a);
BOOL func_020a03c4(void);
void FieldInfoBalloon_ShowPleaseWait(void);
BOOL _ZN11CommManager7isMyAidEj(CommManager *p, s32 a);
s32 _ZN15LostChildRecord13isKaitlinRoleEv(void);
void _ZN15LostChildRecord5clearEv(s32 a);
void _ZN15KatieVisitState5clearEv(void *a);
s32 Scene_GetWarpRequest(void);
void SceneWarp_RequestExit(s32 a, s32 b);
s32 NpcRegistry_FindSpNpc(s32 a);
void Camera_SetMode19(void);
void _ZN11NpcTalkCtrl11requestTalkEhh(void *p, s32 a, s32 b);
s32 _ZN15LostChildRecord9getTownIdEv(void *p);
s32 Random_GlobalBelow(u32 n);
extern u8 gScreenTransition;
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 gVec3Zero[];
extern CommManager *gCommManager;
}
void SpNpcKaitlin_ChangeAct04(void);
void SpNpcKaitlin_ChangeAct06(void);
static inline BOOL Unk_020c06a0_IsMode2() {
    return gScreenTransition == 2;
}


// ---- SpNpcKatieTalk and its bases (vtable 0x020ddcf0 chain) ----






// ---- SpNpcKatie and its bases (scene object derived from NpcActor) ----







typedef BOOL (SpNpcKatie::*Unk_020c11b8_Fn)();
struct Unk_020c11b8_Ent {
    Unk_020c11b8_Fn a;
    Unk_020c11b8_Fn b;
};


extern Unk_020c11b8_Ent sSpNpcKatieActTable[9];
extern SpNpcKatie *sSpNpcKatieInstance;
extern char sSpNpcKatieKey[16];
extern char sSpNpcKatieModelPath[23];
extern char sSpNpcKatieTexPath[27];
extern char *sSpNpcKatieMsgKey;
extern const Unk_020bfe30_Vec sSpNpcKatieReunionWalkPos;
extern "C" SpNpcKatie *SpNpcKatie_Create(void);

extern "C" SpNpcKatie *SpNpcKatie_Create(void) {
    return new SpNpcKatie();
}

BOOL SpNpcKatie::preCreate() {
    if (!SpNpcActor::preCreate()) {
        return FALSE;
    }
    _ZN8NpcActor14setTalkRequestEP12Unk_0201bc1c(this, &talk);
    talk.attachOwner(this);
    _ZN11NpcMoveCtrl14setSpeedPresetEiiii(&moveCtrl, 2, 0x333, 0xcc, 0x133);
    _ZN11NpcMoveCtrl14setSpeedPresetEiiii(&moveCtrl, 1, 0x1b3, 0xcc, 0x133);
    if (Scene_GetCurrent() == 0xb) {
        rotY = -0x8000;
        moveAngleY = -0x8000;
    }
    if (Scene_GetCurrent() == 0xc) {
        rotY = -0x8000;
        moveAngleY = -0x8000;
    }
    if (Scene_GetCurrent() == 0x2f) {
        rotY = 0;
        moveAngleY = 0;
        position.x = 0xe000;
        position.z = 0x4000;
        _ZN11NpcMoveCtrl14setSpeedPresetEiiii(&moveCtrl, 1, 0x280, 0xcc, 0x133);
    }
    netSyncOff = 1;
    return TRUE;
}

BOOL SpNpcKatie::onCreate() {
    void *p;
    if (!SpNpcActor::onCreate()) {
        return FALSE;
    }
    sSpNpcKatieInstance = this;
    effectHandle = -1;
    p = PlayerData_GetCurrent();
    if (Scene_GetCurrent() == 0) {
        FieldPos_SnapToUnitCenter((Unk_020bfe30_Vec *)&position, (Unk_020bfe30_Vec *)&position);
        if (TownMap_FindBuildingAbovePos((Unk_020bfe30_Vec *)&position, 1, 0, 0)) {
            TownMap_IsPosWalkable((Unk_020bfe30_Vec *)&position, 0);
            position.x += 0x2000;
            position.z += 0x2000;
        }
        if (_ZN12Unk_02086f8411isFollowingEv(TownSessionState_GetKatieState(TownSessionState_Get())) != 0) {
            if (Scene_GetPrevious() == 0xb) {
                Town_FindGateHouse(TownBlockMap_Get(), (Unk_020bfe30_Vec *)&position, 0, 0);
                position.z -= 0x2000;
                talk.setTopic(3);
                changeAct(5);
                collisionEnabled = 0;
            } else {
                talk.setTopic(5);
                changeAct(1);
            }
        } else if (_ZN12Unk_02097ff48testFlagEj(p, 0x33) == 0) {
            if (_ZN12Unk_02097ff48testFlagEj(p, 0x31) == 0) {
                talk.setTopic(0);
            } else {
                talk.setTopic(1);
            }
            changeAct(1);
        } else {
            if (Talk_CheckAndSetPlayerFlag(0x29, 0) == 0) {
                talk.setTopic(2);
            } else {
                talk.setTopic(3);
            }
            changeAct(1);
        }
    } else if (Scene_GetCurrent() == 0xb) {
        talk.setTopic(3);
        changeAct(5);
        collisionEnabled = 0;
    } else if (Scene_GetCurrent() == 0xc) {
        _ZN12Unk_02086f846getPosEP17Unk_02086ec4_Vec3(TownSessionState_GetKatieState(TownSessionState_Get()), &position);
        talk.setTopic(3);
        changeAct(5);
    } else if (Scene_GetCurrent() == 0x2f) {
        collisionEnabled = 0;
        TalkRequestFlags_SetSceneHold();
        changeAct(8);
    }
    return TRUE;
}

BOOL SpNpcKatie::onDelete() {
    if (!SpNpcActor::onDelete()) {
        return FALSE;
    }
    sSpNpcKatieInstance = NULL;
    if (Scene_GetCurrent() == 0x2f) {
        TalkRequestFlags_ClearSceneHold();
    }
    return TRUE;
}

u8 *SpNpcKatie::getTexturePath() {
    return (u8 *)sSpNpcKatieTexPath;
}

u8 *SpNpcKatie::getModelPath() {
    return (u8 *)sSpNpcKatieModelPath;
}

BOOL SpNpcKatie::updateAct() {
    s32 r = 0;
    if (sSpNpcKatieActTable[act].b != 0) {
        r = (this->*(sSpNpcKatieActTable[act].b))();
    }
    if (Scene_GetCurrent() == 0) {
        _ZN12Unk_02086f846setPosEP17Unk_02086ec4_Vec3(TownSessionState_GetKatieState(TownSessionState_Get()), &position);
    }
    if (Scene_GetCurrent() == 0xb) {
        if (_ZN15LostChildRecord11isEscortingEv(_ZN10PlayerData18getLostChildRecordEv(PlayerData_GetCurrent()))) {
            _ZN12Unk_02086f846setPosEP17Unk_02086ec4_Vec3(TownSessionState_GetKatieState(TownSessionState_Get()), &position);
        }
    }
    return r;
}

BOOL SpNpcKatie::acceptsInteraction(void *) {
    return _ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0;
}

void SpNpcKatie::onInteractionEvent(u32 state, u8) {
    switch (state) {
    case 0:
    case 1:
        talk.resetMsg();
        _ZN16ActorTalkRequest13func_02015ab0Ej(&talk, _ZN8NpcActor14getPlayerActorEj(this, 4));
        if (talk.getTopic() != 6) {
            changeAct(3);
        }
        break;
    case 8:
        talk.setTopic(3);
        if (_ZN12Unk_02086f8411isFollowingEv(TownSessionState_GetKatieState(TownSessionState_Get())) != 0) {
            changeAct(5);
        } else if (escortDeclined != 0) {
            changeAct(2);
        } else {
            changeAct(0);
        }
        break;
    }
}

void SpNpcKatie::changeAct(s32 state) {
    BOOL result = TRUE;
    Unk_020c11b8_Ent *e = &sSpNpcKatieActTable[state];
    if (e->a != 0) {
        result = (this->*(e->a))();
    }
    if (result) {
        if (state != 1 && effectHandle != -1) {
            Effect_End(effectHandle);
            effectHandle = -1;
        }
        act = state;
    }
}

BOOL SpNpcKatie::setupAct00() {
    collider.groups |= 2;
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&lookAt, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcKatie::mainAct00() {
    return TRUE;
}

BOOL SpNpcKatie::setupAct01() {
    Unk_020c0acc_Vec a, b;
    collider.groups |= 2;
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&lookAt, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    _ZN13NpcActionCtrl15requestPlayAnimEiijtt(&actionCtrl, 1, 0x53, 1, data_020c6cc8, 0);
    Town_FindGateHouse(TownBlockMap_Get(), &a, 0, 0);
    FieldPos_SnapToUnitCenter(&b, (Unk_020bfe30_Vec *)&position);
    if (b.z < a.z) {
        if (b.x >= a.x - 0x4000 && b.x <= a.x + 0x4000) {
            position.z = a.z + 0x1000;
        }
    }
    collisionEnabled = 1;
    return TRUE;
}

BOOL SpNpcKatie::mainAct01() {
    if (_ZN11NpcAnimCtrl13isPlayingAnimEiPv(&animCtrl, 0x53, &moveAnimSet) && _ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
        _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        _ZN14NpcMoveAnimSet12setStandAnimEi(&moveAnimSet, 0x54);
        _ZN14NpcMoveAnimSet11setWalkAnimEi(&moveAnimSet, 0x54);
    }
    if (effectHandle == -1) {
        effectHandle = Effect_Create(0x54, &jointPos[0], &rotY, 0);
    }
    if (effectHandle != -1) {
        Effect_SetPosition(effectHandle, &jointPos[0], &rotY, 0);
    }
    return TRUE;
}

BOOL SpNpcKatie::setupAct02() {
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&lookAt, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    _ZN13NpcActionCtrl15requestPlayAnimEiijtt(&actionCtrl, 1, 0xab, 1, data_020c6cc8, 0);
    return TRUE;
}

BOOL SpNpcKatie::mainAct02() {
    collider.groups |= 2;
    if (_ZN11NpcAnimCtrl13isPlayingAnimEiPv(&animCtrl, 0xab, &moveAnimSet) && _ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
        _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        _ZN14NpcMoveAnimSet12setStandAnimEi(&moveAnimSet, 0xac);
        _ZN14NpcMoveAnimSet11setWalkAnimEi(&moveAnimSet, 0xac);
    }
    return TRUE;
}

BOOL SpNpcKatie::setupAct03() {
    s32 p, r4;
    _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&lookAt, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
    p = _ZN16ActorTalkRequest13func_02015aacEv(&talk);
    r4 = 0;
    if (p != 0) {
        r4 = _ZN8NpcActor10getAngleToEPS_(this, p);
    }
    _ZN14NpcMoveAnimSet12setStandAnimEi(&moveAnimSet, 0xac);
    _ZN14NpcMoveAnimSet11setWalkAnimEi(&moveAnimSet, 0xac);
    _ZN11NpcTalkCtrl18requestTurnAndTalkEssh(&talkCtrl, 0, r4, 0);
    return TRUE;
}

BOOL SpNpcKatie::mainAct03() {
    if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
        TalkRequest_SetTargetDone(this);
        changeAct(7);
    }
    return TRUE;
}

BOOL SpNpcKatie::setupAct07() {
    return TRUE;
}

BOOL SpNpcKatie::mainAct07() {
    return TRUE;
}

BOOL SpNpcKatie::setupAct04() {
    collider.groups &= ~2;
    waitTimer = 0x28;
    return TRUE;
}

BOOL SpNpcKatie::mainAct04() {
    if (Math_CountDownU16(&waitTimer) == 0) {
        changeAct(5);
    }
    return TRUE;
}

BOOL SpNpcKatie::setupAct05() {
    collider.groups &= ~2;
    stuckTimer = 0x28;
    prevPos = *(Unk_020bfe30_Vec *)&position;
    return TRUE;
}

BOOL SpNpcKatie::mainAct05() {
    Unk_020c0acc_Vec a, b, c, d;
    void *p = PlayerData_GetCurrent();
    void *q;
    s32 t;
    if (p == NULL) {
        return TRUE;
    }
    if (collisionEnabled == 0 && Scene_GetCurrent() == 0) {
        Town_FindGateHouse(TownBlockMap_Get(), &a, 0, 0);
        FieldPos_SnapToUnitCenter(&b, (Unk_020bfe30_Vec *)&position);
        if (b.z > a.z) {
            collisionEnabled = 1;
        }
    }
    if (collisionEnabled == 0 && Scene_GetCurrent() == 0xb) {
        FieldPos_SnapToUnitCenter(&d, (Unk_020bfe30_Vec *)&position);
        FieldPos_FromUnitCenter(&c, 6, 15);
        if (d.z < c.z) {
            collisionEnabled = 1;
        }
    }
    q = PlayerActor_GetBodyPos(4);
    if (q == NULL) {
        return TRUE;
    }
    t = _ZN8NpcActor19getDistanceToPlayerEj(this, 4);
    if ((Scene_GetCurrent() == 0 || (Scene_GetCurrent() == 0xc && _ZN15LostChildRecord11isEscortingEv(_ZN10PlayerData18getLostChildRecordEv(p)) == 0)) && _ZN13NpcActionCtrl9getActionEv(&actionCtrl) == 2) {
        s32 v, d2;
        if (t > 0x6000) {
            changeAct(6);
            return TRUE;
        }
        v = _ZN9NpcLookAt15getObstacleBitsEv(&obstacleProbe);
        d2 = Vec_DistXZ(&prevPos, &position);
        prevPos = *(Unk_020bfe30_Vec *)&position;
        if (d2 <= 0x29 || v != 0) {
            if (Math_CountDownU16(&stuckTimer) == 0) {
                changeAct(1);
                return TRUE;
            }
        } else {
            stuckTimer = 0x28;
        }
    }
    if (t > 0x2800) {
        if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) != 2) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 2, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
        }
        _ZN11NpcMoveCtrl11setWaypointEP17Unk_0201a334_Vec3(&moveCtrl, q);
    } else if (_ZN13NpcActionCtrl9getActionEv(&actionCtrl) != 0) {
        _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
    }
    return TRUE;
}

BOOL SpNpcKatie::setupAct06() {
    if (Scene_GetCurrent() == 0) {
        _ZN12Unk_02086f8414clearFollowingEv(TownSessionState_GetKatieState(TownSessionState_Get()));
    }
    _ZN13NpcActionCtrl15requestPlayAnimEiijtt(&actionCtrl, 1, 0x122, 1, data_020c6cc8, 0);
    talk.setTopic(4);
    func_02003e70(&seEmitter, 0x7db, 0x7f, 0);
    return TRUE;
}

BOOL SpNpcKatie::mainAct06() {
    Unk_020c0acc_Vec v;
    s16 a;
    if (_ZN11NpcAnimCtrl13isPlayingAnimEiPv(&animCtrl, 0x122, &moveAnimSet)) {
        a = rotY;
        Unk_020c0acc_Vec *src = (Unk_020c0acc_Vec *)&position;
        v = *src;
        if ((((u32)model.curFrame << 4) >> 16) == 7) {
            Effect_Create(0x39, &v, &a, 0);
        }
        if ((((u32)model.curFrame << 4) >> 16) == 9) {
            Effect_Create(0x38, &v, &a, 0);
        }
        if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
            _ZN13NpcActionCtrl15requestPlayAnimEiijtt(&actionCtrl, 1, 0x123, 1, data_020c6cc8, 0);
        }
    }
    if (_ZN11NpcAnimCtrl13isPlayingAnimEiPv(&animCtrl, 0x123, &moveAnimSet)) {
        if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
            changeAct(1);
        }
    }
    return TRUE;
}

BOOL SpNpcKatie::setupAct08() {
    reunionStep = 0;
    return TRUE;
}

BOOL SpNpcKatie::mainAct08() {
    u8 buf;
    Unk_020bfe30_Vec vec24;
    Unk_020bfe30_Vec vec30;
    s32 r5 = Net_GetJoiningAid();
    CommManager *r7 = gCommManager;
    s32 r6 = r7->localSlot;
    s32 s = PlayerData_GetBySessionSlot(r5);
    switch (reunionStep) {
    case 0:
        if (Unk_020c06a0_IsMode2()) {
            if (PlayerActor_SetNetFollowPaused(1, r5)) {
                reunionStep = 1;
            }
        }
        break;
    case 1:
        vec30 = sSpNpcKatieReunionWalkPos;
        PlayerActor_RequestWalkTo(&vec30, 0x35c, r5);
        _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 1, 1, 0xe000, 0x10800, 0, 0, 0, 0, data_020c6cc8, 0);
        reunionStep = 2;
        break;
    case 2:
        if (PlayerActor_IsScriptedWalking(r5)) {
            break;
        }
        if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
            reunionStep = 3;
            talk.setTopic(6);
            _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&lookAt, 0, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            _ZN11NpcTalkCtrl11requestTalkEhh(&talkCtrl, 0, 1);
        }
        break;
    case 3:
        if (talk.unk_3c->state == 5) {
            _ZN15TalkWindowState11lockAdvanceEv(talk.unk_3c);
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 2, 2, 0xea00, 0x12e00, 0, 0, 0, 0, data_020c6cc8, 0);
            SpNpcKaitlin_ChangeAct04();
            Camera_SetMode19();
            reunionStep = 4;
        }
        break;
    case 4:
        if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 0, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            _ZN9NpcLookAt9setTargetEhiiP17Unk_0201a334_Vec3iih(&lookAt, 1, 0, 0, gVec3Zero, 4, data_020c6d1c, 1);
            s32 t = NpcRegistry_FindSpNpc(0x23);
            if (t) {
                _ZN16ActorTalkRequest15setPartnerActorEP18Unk_02015b8c_Scene(&talk, t);
            }
            buf = 10;
            _ZN15TalkWindowState14setNextMessageEPhPv(talk.unk_3c, &buf, (u32)sSpNpcKatieMsgKey);
            talk.unk_3c->nextState = 1;
            _ZN15TalkWindowState13unlockAdvanceEv(talk.unk_3c);
            reunionStep = 5;
        }
        break;
    case 5:
        if (_ZN11NpcTalkCtrl6isBusyEv(&talkCtrl) == 0) {
            vec24.x = 0xde00;
            vec24.y = 0;
            vec24.z = 0x13a00;
            s32 t = Math_AngleXZ(&position, &vec24);
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 3, 1, 0, 0, 0, t, 0, 0, data_020c6cc8, 0);
            reunionStep = 6;
        }
        break;
    case 6:
        if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 1, 1, 0xde00, 0x13a00, 0, 0, 0, 0, data_020c6cc8, 0);
            PlayerActor_RequestTurnTo(0, r5);
            SpNpcKaitlin_ChangeAct06();
            reunionStep = 7;
        }
        break;
    case 7:
        if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            reunionStep = 8;
        }
        break;
    case 8:
        if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
            _ZN13NpcActionCtrl13requestActionEjiiissiitt(&actionCtrl, 1, 1, 0xf000, 0x1d000, 0, 0, 0, 0, data_020c6cc8, 0);
            reunionStep = 9;
        }
        break;
    case 9:
        if (_ZN13NpcActionCtrl12isActionDoneEv(&actionCtrl)) {
            if (r5 != r6 && !func_020a03c4()) {
                FieldInfoBalloon_ShowPleaseWait();
                break;
            }
            reunionStep = 10;
        }
        break;
    case 10:
        if (_ZN11CommManager7isMyAidEj(r7, 0)) {
            s32 x = _ZN10PlayerData18getLostChildRecordEv(PlayerData_GetCurrent());
            if (_ZN15LostChildRecord13isKaitlinRoleEv() == 1) {
                _ZN15LostChildRecord5clearEv(x);
            }
            _ZN12Unk_02097ff47setFlagEj(PlayerData_GetCurrent(), 0x39);
            _ZN15LostChildRecord5clearEv(_ZN10PlayerData18getLostChildRecordEv((void *)s));
            _ZN15KatieVisitState5clearEv(TownSessionState_GetKatieState(TownSessionState_Get()));
            SceneWarp_RequestExit(Scene_GetWarpRequest(), 1);
        }
        if (r5 == r6) {
            _ZN15LostChildRecord5clearEv(_ZN10PlayerData18getLostChildRecordEv(PlayerData_GetCurrent()));
            _ZN15KatieVisitState5clearEv(TownSessionState_GetKatieState(TownSessionState_Get()));
            _ZN12Unk_02097ff47setFlagEj(PlayerData_GetCurrent(), 0x31);
            SceneWarp_RequestExit(Scene_GetWarpRequest(), 0);
        } else {
            SceneWarp_RequestExit(Scene_GetWarpRequest(), 1);
        }
        reunionStep = 11;
        break;
    }
    return TRUE;
}

SpNpcKatieTalk::SpNpcKatieTalk() {}

SpNpcKatieTalk::~SpNpcKatieTalk() {}

void SpNpcKatieTalk::attachOwner(SpNpcKatie *owner) {
    resetMsg();
    katie = owner;
}

void SpNpcKatieTalk::setTopic(s32 v) {
    topic = v;
}

s32 SpNpcKatieTalk::getTopic() {
    return topic;
}

void SpNpcKatieTalk::onEventTag(u32 p_) {
    void *p = (void *)p_;
    _ZN14NpcMoveAnimSet12setStandAnimEi(&katie->moveAnimSet, 0);
    _ZN14NpcMoveAnimSet11setWalkAnimEi(&katie->moveAnimSet, 1);
    _ZN16ActorTalkRequest10onEventTagEj(this, p);
}

void SpNpcKatieTalk::start(TalkStartMsg *out_) {
    Unk_020c0538_Out *out = (Unk_020c0538_Out *)out_;
    void *t = PlayerData_GetCurrent();
    out->msgKey = (u32)sSpNpcKatieMsgKey;
    switch (getTopic()) {
    case 0:
        _ZN12Unk_02097ff47setFlagEj(t, 0x33);
        out->msgIndex = 0;
        break;
    case 1:
        _ZN12Unk_02097ff47setFlagEj(t, 0x33);
        out->msgIndex = Random_GlobalBelow(3) + 1;
        break;
    case 2:
        out->msgIndex = Random_GlobalBelow(3) + 4;
        Talk_CheckAndSetPlayerFlag(0x29, 1);
        break;
    case 3:
        out->msgIndex = Random_GlobalBelow(3) + 7;
        break;
    case 4:
        out->msgIndex = Random_GlobalBelow(3) + 0x19;
        break;
    case 5:
        out->msgIndex = Random_GlobalBelow(3) + 0x22;
        break;
    case 6:
        out->msgIndex = 0x14;
        break;
    }
    katie->escortDeclined = 0;
}

void SpNpcKatieTalk::onMessageStart(u32) {
    s32 a = _ZN10PlayerData18getLostChildRecordEv(PlayerData_GetCurrent());
    _ZN16ActorTalkRequest15setTownNameSlotEjj(this, _ZN15LostChildRecord9getTownIdEv((void *)a), 0);
    _ZN16ActorTalkRequest15setTownNameSlotEjj(this, _ZN15LostChildRecord9getTownIdEv((void *)a), 1);
}

void SpNpcKatieTalk::onMessageEnd(u32) {
    if (msgIndex == 0x14) {
        unk_3c->openMode = 0;
    }
}

void SpNpcKatieTalk::onChoice(u32) {
    switch (msgIndex) {
    case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
    case 25: case 26: case 27:
    case 34: case 35: case 36: {
        u8 v[2];
        _ZN15TalkWindowState13getChoiceListEv(unk_3c);
        switch (_ZN10ChoiceList9getResultEv()) {
        case 0:
            v[0] = Random_GlobalBelow(3) + 0x1c;
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v[0], (u32)sSpNpcKatieMsgKey);
            _ZN12Unk_02086f8412setFollowingEv(TownSessionState_GetKatieState(TownSessionState_Get()));
            break;
        case 1:
            v[1] = Random_GlobalBelow(3) + 0x1f;
            _ZN15TalkWindowState14setNextMessageEPhPv(unk_3c, &v[1], (u32)sSpNpcKatieMsgKey);
            if (Scene_GetCurrent() == 0) {
                _ZN12Unk_02086f8414clearFollowingEv(TownSessionState_GetKatieState(TownSessionState_Get()));
            }
            katie->escortDeclined = 1;
            break;
        }
        break;
    }
    case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21:
    case 22: case 23: case 24: case 28: case 29: case 30: case 31: case 32: case 33:
        break;
    }
}

extern "C" BOOL SpNpcKatie_IsIdle() {
    SpNpcKatie *p = sSpNpcKatieInstance;
    if (p) {
        if (_ZN11NpcFaceAnim12getMouthAnimEv(&p->faceAnim) == 0xba && sSpNpcKatieInstance->act == 0) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

extern "C" void SpNpcKatie_ResetAct() {
    SpNpcKatie *p = sSpNpcKatieInstance;
    if (p) {
        if (p->act != 0) {
            p->changeAct(0);
        }
    }
}

extern "C" void SpNpcKatie_ChangeAct05() {
    SpNpcKatie *p = sSpNpcKatieInstance;
    if (p) {
        if (p->act != 5) {
            p->changeAct(5);
        }
    }
}

struct Unk_021f458c_Color {
    u8 v[4];
    Unk_021f458c_Color(u8 a, u8 b, u8 c, u8 d) {
        v[0] = a;
        v[1] = b;
        v[2] = c;
        v[3] = d;
    }
};
Unk_021f458c_Color data_021f458c(31, 20, 20, 31);
Unk_021f458c_Color data_021f4580(20, 20, 31, 31);
Unk_021f458c_Color data_021f4584(31, 31, 20, 31);
Unk_021f458c_Color data_021f457c(20, 31, 20, 31);
Unk_021f458c_Color data_021f4590(20, 31, 31, 31);
Unk_021f458c_Color data_021f4588(20, 24, 24, 31);
const Unk_020bfe30_Vec sSpNpcKatieReunionWalkPos = { 0x10000, 0, 0x11800 };
Unk_020c11b8_Ent sSpNpcKatieActTable[9] = {
    { &SpNpcKatie::setupAct00, &SpNpcKatie::mainAct00 },
    { &SpNpcKatie::setupAct01, &SpNpcKatie::mainAct01 },
    { &SpNpcKatie::setupAct02, &SpNpcKatie::mainAct02 },
    { &SpNpcKatie::setupAct03, &SpNpcKatie::mainAct03 },
    { &SpNpcKatie::setupAct04, &SpNpcKatie::mainAct04 },
    { &SpNpcKatie::setupAct05, &SpNpcKatie::mainAct05 },
    { &SpNpcKatie::setupAct06, &SpNpcKatie::mainAct06 },
    { &SpNpcKatie::setupAct07, &SpNpcKatie::mainAct07 },
    { &SpNpcKatie::setupAct08, &SpNpcKatie::mainAct08 },
};
SpNpcKatie *sSpNpcKatieInstance;
char sSpNpcKatieKey[] = "sp_npc_missing1";
char *sSpNpcKatieMsgKey = sSpNpcKatieKey;
char sSpNpcKatieTexPath[] = "npc_sp/model/los_tex.nsbtx";
char sSpNpcKatieModelPath[] = "npc_sp/model/los.nsbmd";
struct Unk_020e6858_Rec {
    SpNpcKatie *(*fn)();
    u32 w[5];
};
Unk_020e6858_Rec sSpNpcKatieProfile = { SpNpcKatie_Create, { 0x0082007e, 2, 0x5000, 0x5000, 0x3e800 } };
