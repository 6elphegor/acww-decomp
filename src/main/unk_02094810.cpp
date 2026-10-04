#include "types.h"
#include "net/CommManager.h"
#include "player/Unk_02006d14_Vec.h"
#include "gfx/Mtx43.h"
#include "player/PlayerActor.h"

typedef Unk_02006d14_Vec Unk_02006d14_V3;

// An enum-typed local keeps the constant in a callee-saved register across the call.
// _ZN11PlayerActor12requestAct79Ejj is declared with the enum parameter (real type u32) so the argument is
// passed with `movs r1, r5` instead of `adds r1, r5, #0`.
enum Unk_02094a08_Limit { Unk_02094a08_LIMIT_5 = 5 };
enum Unk_02094d60_Limit { Unk_02094d60_LIMIT_5 = 5, Unk_02094d60_LIMIT_6 = 6 };



struct Unk_02095338_E { u32 a, b, c; };
struct Unk_02095338_D { u16 a : 7; u16 b : 4; u16 c : 5; };

struct PlayerSessionTable {
    u32 actors[4];
    u8 dataIndices[4];
    u8 gfxSlots[4];
    Unk_02095338_D lastPlayDate;
    u16 tanTimer;
    u8 sessionFlags;
    u8 pad_1d[3];
    u32 lastActions[4];
    u8 lastScenes[4];
    Unk_02095338_E lastPositions[4];
    u16 lastAngles[4];
    PlayerSessionTable();
    ~PlayerSessionTable();
};

struct Unk_020954f8_L { u32 out; u8 t[12]; };

extern "C" {
extern u8 gFieldSceneKind;
extern const u8 sEmotionHoldFrames[];
extern const u32 sPlayerPosSyncVars[];
extern const u32 sPlayerAngleSyncVars[];
extern const u32 sPlayerStateSyncVars[];
extern const s32 data_020d0428;
extern CommManager *gCommManager;
}
extern PlayerSessionTable gPlayerSessionTable;

extern "C" {
PlayerActor *PlayerActor_Get(s32 id);

u32 _ZN12Unk_0200769421getActionDonePriorityEj(PlayerActor *o, u32 a);
s32 _ZN11PlayerActor14requestEmotionEhhjs(PlayerActor *o, u32 a, u32 b, u32 c, s32 d);
s32 _ZN11PlayerActor12requestAct13Ejj(PlayerActor *o, u32 a, s32 b);
s32 _ZN11PlayerActor12requestAct10Esji(PlayerActor *o, u32 a, u32 b, s32 c);
s32 _ZN11PlayerActor15getHeldToolKindEv(PlayerActor *o);
s32 _ZN11PlayerActor20getHeldHoldableIndexEv(PlayerActor *o);
s32 _ZN11PlayerActor19getRequiredPriorityEv(PlayerActor *o);
s32 _ZN11PlayerActor12requestAct79Ejj(PlayerActor *o, Unk_02094a08_Limit a, s32 b);
s32 _ZN11PlayerActor12requestAct32Ejj(PlayerActor *o, u32 a, s32 b);
s32 _ZN11PlayerActor12requestAct30EPtjjjjjs(PlayerActor *o, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, s32 g);
s32 _ZN11PlayerActor13requestTurnToEsjj(PlayerActor *o, s32 a, u32 b, s32 c);
s32 _ZN11PlayerActor13requestWalkToEP16Unk_02006d14_Vecjjs(PlayerActor *o, Unk_02006d14_Vec *v, u32 a, u32 b, s32 c);
s32 _ZN11PlayerActor17requestHoldUpItemEPtjj(PlayerActor *o, u16 *p, u32 a, s32 b);
s32 _ZN11PlayerActor21requestChangeHeldItemEtjj(PlayerActor *o, u32 a, u32 b, s32 c);
s32 _ZN12Unk_0200769420requestChangeClothesEtjjjs(PlayerActor *o, u32 a, u32 b, u32 c, u32 d, s32 e);
s32 _ZN11PlayerActor12requestAct76Ehhhjs(PlayerActor *o, u32 a, u32 b, u32 c, u32 d, s32 e);
s32 _ZN11PlayerActor11requestWaitEjjj(PlayerActor *o, u32 a, u32 b, s32 c);
s32 PlayerActor_RequestExitWalkOut(PlayerActor *o, Unk_02006d14_Vec *v, u32 a, s32 b);
s32 _ZN12Unk_0200769412requestAct05Etjj(PlayerActor *o, s32 a, s32 b, s32 c);
s32 _ZN11PlayerActor20getEffectivePriorityEv(PlayerActor *o);
BOOL _ZN11PlayerActor14testActionFlagEj(PlayerActor *o, s32 id);
void _ZN11PlayerActor15clearActionFlagEj(PlayerActor *o, s32 id);
void _ZN11PlayerActor13setActionFlagEj(PlayerActor *o, s32 id);
s32 _ZN11PlayerActor13canAcceptTalkEj(PlayerActor *o, s32 v);

s32 Scene_InHouseRoom();
BOOL TalkRequestFlags_IsResetti();
s32 TalkRequest_IsSaveMenuRunning();
void PlayerActor_GetHeldItem(void *out, PlayerActor *o);
s32 Item_IsFurniture(void *p);
s32 Item_GetFurnitureIndex(void *p);
s32 Math_AngleToDir4(s32 v);
void *Scene_GetWarpRequest();
void SceneExit_GetDoor(void *a, s32 b, void *c, void *d);
s32 PlayerActor_RequestStowItem(PlayerActor *o, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, s32 g);
s32 PlayerActor_RequestFishReelIn(PlayerActor *o, u32 a, u32 b, s32 c);
void PlayerActor_EndStandUpFront(PlayerActor *o, s32 a);
void PlayerActor_EndStandUpSide1(PlayerActor *o, s32 a);
void PlayerActor_EndStandUpSide2(PlayerActor *o, s32 a);
void PlayerActor_EndGetOutOfBed(PlayerActor *o, s32 a);
void PlayerActor_EndGetIntoBed(PlayerActor *o, s32 a);
void PlayerActor_EndBedRoll(PlayerActor *o, s32 a);
void PlayerActor_OffsetByAngle(Unk_02006d14_V3 *out, PlayerActor *o, Unk_02006d14_V3 *in, u16 *ang, s32 *p);
void __cxa_vec_ctor(void *p, s32 n, s32 size, void *ctor, void *dtor);
void __cxa_vec_cleanup(void *p, s32 n, s32 size, void *dtor);
void _ZN6FxVec3D1Ev(void *p);
void FxVec3_Construct(void *p);
u16 NetBuf_ReadU16(u8 *p);
void NetBuf_WriteU16(u8 *p, u16 h);
void NetBuf_WriteS16(u8 *p, s32 v);
void CommRecord_PackSource(void *p, s32 a, s32 b);
s32 CommSyncVar_GetVarSize(s32 v);
u16 NetBuf_ReadS16B(void *p);
s32 Scene_GetCurrent();
void MI_CpuCopy8(const void *src, void *dst, s32 n);
BOOL _ZN11CommManager11isLocalSlotEj(CommManager *g, s32 v);
u32 _ZN11CommManager10getSyncVarEj(CommManager *g, u32 v);
void NetBuf_UnpackPair20(u32 a, s32 *x, s32 *y);
void CommRecord_UnpackSource(u32 a, u8 *b, s32 c);
u32 PlayerActor_GetNetStateVar(s32 v);
u32 PlayerActor_GetNetAngleVar(s32 v);
u32 PlayerActor_GetNetPosVar(s32 v);
BOOL PlayerActor_GetSlotAction(u32 *out, s32 a, s32 idx);

BOOL PlayerActor_SetSlotFlag(s32 a, s32 b);
BOOL PlayerActor_ClearSlotFlag(s32 a, s32 b);
BOOL PlayerActor_IsInAction(s32 v, s32 id);
BOOL PlayerActor_TestSlotFlag(s32 a, s32 b);
u8 PlayerSessionTable_GetGfxSlot(PlayerSessionTable *p, s32 i);
void PlayerSessionTable_ClearGfxSlot(PlayerSessionTable *p, s32 i);
void PlayerSessionTable_SetGfxSlot(PlayerSessionTable *p, s32 i, s32 v);
u8 PlayerSessionTable_GetDataIndex(PlayerSessionTable *p, s32 i);
void PlayerSessionTable_ClearDataIndex(PlayerSessionTable *p, s32 i);
void PlayerSessionTable_SetDataIndex(PlayerSessionTable *p, s32 i, s32 v);
u32 PlayerSessionTable_GetActor(PlayerSessionTable *p, s32 i);
void PlayerSessionTable_ClearActor(PlayerSessionTable *p, s32 i);
void PlayerSessionTable_SetActor(PlayerSessionTable *p, s32 i, u32 v);
u32 PlayerSessionTable_FindFreeGfxSlot(PlayerSessionTable *p);
u16 *PlayerSession_GetLastAngle(s32 i);
Unk_02095338_E *PlayerSession_GetLastPos(s32 i);
u8 *PlayerSession_GetLastScene(s32 i);
u32 *PlayerSession_GetLastAction(s32 i);
s32 PlayerActor_RequestChangeClothes(u16 *p, s32 a, s32 b);
void func_02095200();
void func_02095218();
}

extern "C" PlayerActor *PlayerActor_Get(s32 idx) {
    if (idx == 4) {
        idx = gCommManager->localSlot;
    }
    return (PlayerActor *)PlayerSessionTable_GetActor(&gPlayerSessionTable, idx);
}

extern "C" u32 PlayerActor_GetNetPosVar(s32 idx) { return _ZN11CommManager10getSyncVarEj(gCommManager, sPlayerPosSyncVars[idx]); }

extern "C" u32 PlayerActor_GetNetAngleVar(s32 idx) { return _ZN11CommManager10getSyncVarEj(gCommManager, sPlayerAngleSyncVars[idx]); }

extern "C" u32 PlayerActor_GetNetStateVar(s32 idx) { return _ZN11CommManager10getSyncVarEj(gCommManager, sPlayerStateSyncVars[idx]); }

// ---------------------------------------------------------------- functions (file unk_02095670)
extern "C" BOOL PlayerActor_GetSlotPosXZ(u8 *outb, s32 *x, s32 *y, s32 mode, s32 idx) {
    if (idx == 4) {
        idx = gCommManager->localSlot;
    }
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, idx)) {
        PlayerActor *e = PlayerActor_Get(4);
        if (e != NULL) {
            s32 *p = (s32 *)&e->position;
            *outb = Scene_GetCurrent();
            *x = p[0];
            *y = p[2];
            return TRUE;
        }
        return FALSE;
    }
    u32 t = PlayerActor_GetNetStateVar(idx);
    if (t == 0) return FALSE;
    s32 v;
    if (!PlayerActor_GetSlotAction((u32 *)&v, mode, idx)) return FALSE;
    if (v >= 0x93) return FALSE;
    u32 t2 = PlayerActor_GetNetPosVar(idx);
    if (t2 == 0) return FALSE;
    s32 a, b;
    NetBuf_UnpackPair20(t2, &a, &b);
    *x = a;
    *y = b;
    CommRecord_UnpackSource(t, outb, 0);
    return TRUE;
}

extern "C" BOOL PlayerActor_GetSlotAngle(s16 *out, s32 a, s32 idx)
{
    u32 st;
    if (idx == 4) {
        idx = gCommManager->localSlot;
    }
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, idx)) {
        PlayerActor *o = PlayerActor_Get(4);
        if (o) {
            *out = o->rotY;
            return TRUE;
        }
        return FALSE;
    }
    if (!PlayerActor_GetNetStateVar(idx)) {
        return FALSE;
    }
    if (!PlayerActor_GetSlotAction(&st, a, idx)) {
        return FALSE;
    }
    if ((s32)st >= 0x93) {
        return FALSE;
    }
    u8 *q = (u8 *)PlayerActor_GetNetAngleVar(idx);
    if (!q) {
        return FALSE;
    }
    *out = NetBuf_ReadS16B(q);
    return TRUE;
}

extern "C" BOOL PlayerActor_GetSlotAction(u32 *out, s32 a, s32 idx)
{
    u8 buf;
    if (idx == 4) {
        idx = gCommManager->localSlot;
    }
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, idx)) {
        PlayerActor *o = PlayerActor_Get(4);
        if (o) {
            *out = o->action;
            return TRUE;
        }
        return FALSE;
    }
    u8 *p = (u8 *)PlayerActor_GetNetStateVar(idx);
    if (!p) {
        return FALSE;
    }
    MI_CpuCopy8(p + 1, &buf, 1);
    if (buf == 0) {
        return FALSE;
    }
    *out = buf - 1;
    return TRUE;
}

extern "C" void PlayerActor_PackNetState(void *dst, s32 x)
{
    Unk_020954f8_L l;
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        CommRecord_PackSource(l.t, Scene_GetCurrent(), 0);
        if (PlayerActor_GetSlotAction(&l.out, -1, 4)) {
            l.t[1] = l.out + 1;
        }
        NetBuf_WriteS16(l.t + 2, o->netSeq);
        MI_CpuCopy8((u8 *)o + 0x8ec, l.t + 4, 8);
    } else {
        l.t[1] = 0x94;
    }
    MI_CpuCopy8(l.t, dst, CommSyncVar_GetVarSize(x));
}

extern "C" void PlayerActor_PackClothesChange(u8 *p, u16 h, u8 v)
{
    NetBuf_WriteU16(p, h);
    p[2] = v;
}

extern "C" void PlayerActor_UnpackClothesChange(u8 *p, u16 *a, u32 *b)
{
    *a = NetBuf_ReadU16(p);
    *b = p[2];
}

extern "C" void PlayerActor_PackHair(u8 *p, u32 a, u32 b)
{
    *p = ((b << 4) & 0x70) | (a & 0xf);
}

extern "C" void PlayerActor_UnpackHair(u8 *src, u8 *a, u8 *b)
{
    *a = src[0] & 0xf;
    *b = (src[0] >> 4) & 7;
}

extern "C" void PlayerSessionTable_SetActor(PlayerSessionTable *p, s32 i, u32 v)
{
    p->actors[i] = v;
}

extern "C" void PlayerSessionTable_ClearActor(PlayerSessionTable *p, s32 i)
{
    PlayerSessionTable_SetActor(p, i, 0);
}

extern "C" u32 PlayerSessionTable_GetActor(PlayerSessionTable *p, s32 i)
{
    if (i < 4) {
        return p->actors[i];
    }
    return 0;
}

extern "C" void PlayerSessionTable_SetDataIndex(PlayerSessionTable *p, s32 i, s32 v)
{
    p->dataIndices[i] = v;
}

extern "C" void PlayerSessionTable_ClearDataIndex(PlayerSessionTable *p, s32 i)
{
    PlayerSessionTable_SetDataIndex(p, i, 7);
}

extern "C" u8 PlayerSessionTable_GetDataIndex(PlayerSessionTable *p, s32 i)
{
    if (i < 4) {
        return p->dataIndices[i];
    }
    return 7;
}

extern "C" void PlayerSessionTable_SetGfxSlot(PlayerSessionTable *p, s32 i, s32 v)
{
    p->gfxSlots[i] = v;
}

extern "C" void PlayerSessionTable_ClearGfxSlot(PlayerSessionTable *p, s32 i)
{
    PlayerSessionTable_SetGfxSlot(p, i, 4);
}

extern "C" u8 PlayerSessionTable_GetGfxSlot(PlayerSessionTable *p, s32 i)
{
    if (i < 4) {
        return p->gfxSlots[i];
    }
    return 4;
}

extern "C" u32 PlayerSessionTable_FindFreeGfxSlot(PlayerSessionTable *p)
{
    u32 i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == PlayerSessionTable_GetGfxSlot(p, j)) {
                break;
            }
        }
        if (j >= 4) {
            return i;
        }
    }
    return 4;
}

PlayerSessionTable::PlayerSessionTable()
{
    u32 i;
    __cxa_vec_ctor(lastPositions, 4, 12, (void *)FxVec3_Construct, (void *)_ZN6FxVec3D1Ev);
    for (i = 0; i < 4; i++) {
        PlayerSessionTable_ClearDataIndex(&gPlayerSessionTable, i);
        PlayerSessionTable_ClearGfxSlot(&gPlayerSessionTable, i);
        lastActions[i] = 0x93;
        lastScenes[i] = 0x33;
        lastPositions[i].a = 0;
        lastPositions[i].b = 0;
        lastPositions[i].c = 0;
        lastAngles[i] = 0;
    }
    lastPlayDate.a = 0;
    lastPlayDate.b = 1;
    lastPlayDate.c = 1;
    tanTimer = 0;
    sessionFlags = 0;
}

PlayerSessionTable::~PlayerSessionTable()
{
    __cxa_vec_cleanup(lastPositions, 4, 12, (void *)_ZN6FxVec3D1Ev);
}

extern "C" void PlayerSession_SetActor(s32 i, u32 v)
{
    PlayerSessionTable_SetActor(&gPlayerSessionTable, i, v);
}

extern "C" void PlayerSession_ClearActor(s32 i)
{
    PlayerSessionTable_ClearActor(&gPlayerSessionTable, i);
}

extern "C" void PlayerSession_SetDataIndex(s32 i, s32 v)
{
    PlayerSessionTable_SetDataIndex(&gPlayerSessionTable, i, v);
}

extern "C" void PlayerSession_ClearDataIndex(s32 i)
{
    PlayerSessionTable_ClearDataIndex(&gPlayerSessionTable, i);
}

extern "C" u8 PlayerSession_GetDataIndex(s32 i)
{
    return PlayerSessionTable_GetDataIndex(&gPlayerSessionTable, i);
}

extern "C" Unk_02095338_D *PlayerSession_GetLastPlayDate()
{
    return &gPlayerSessionTable.lastPlayDate;
}

extern "C" u16 *PlayerSession_GetTanTimer()
{
    return &gPlayerSessionTable.tanTimer;
}

extern "C" u8 *PlayerSession_GetSessionFlags()
{
    return &gPlayerSessionTable.sessionFlags;
}

extern "C" u32 *PlayerSession_GetLastAction(s32 i)
{
    return &gPlayerSessionTable.lastActions[i];
}

extern "C" u8 *PlayerSession_GetLastScene(s32 i)
{
    return &gPlayerSessionTable.lastScenes[i];
}

extern "C" Unk_02095338_E *PlayerSession_GetLastPos(s32 i)
{
    return &gPlayerSessionTable.lastPositions[i];
}

extern "C" u16 *PlayerSession_GetLastAngle(s32 i)
{
    return &gPlayerSessionTable.lastAngles[i];
}

extern "C" void PlayerSession_ResetLastState(s32 i)
{
    *PlayerSession_GetLastAction(i) = 0x93;
    *PlayerSession_GetLastScene(i) = 0x33;
    Unk_02095338_E *e = PlayerSession_GetLastPos(i);
    e->a = 0;
    e->b = 0;
    e->c = 0;
    *PlayerSession_GetLastAngle(i) = 0;
}

extern "C" void PlayerSession_SetGfxSlot(s32 i, s32 v)
{
    PlayerSessionTable_SetGfxSlot(&gPlayerSessionTable, i, v);
}

extern "C" void PlayerSession_ClearGfxSlot(s32 i)
{
    PlayerSessionTable_ClearGfxSlot(&gPlayerSessionTable, i);
}

extern "C" u8 PlayerSession_GetGfxSlot(s32 i)
{
    return PlayerSessionTable_GetGfxSlot(&gPlayerSessionTable, i);
}

extern "C" u32 PlayerSession_FindFreeGfxSlot()
{
    return PlayerSessionTable_FindFreeGfxSlot(&gPlayerSessionTable);
}

extern "C" void func_02095218() {}

extern "C" void PlayerActor_GetActor(s32 id)
{
    PlayerActor_Get(id);
    func_02095218();
}

extern "C" void func_02095200() {}

extern "C" void PlayerActor_GetCharacter(s32 id)
{
    PlayerActor_Get(id);
    func_02095200();
}

extern "C" u32 PlayerActor_ParamGetSlot(u32 v)
{
    return (v >> 30) & 3;
}

extern "C" u32 PlayerActor_ParamGetAction(u32 v)
{
    return (v >> 22) & 0xff;
}

extern "C" BOOL PlayerActor_IsStowFinished()
{
    return PlayerActor_TestSlotFlag(1, 4);
}

extern "C" BOOL PlayerActor_IsEnteringDoor()
{
    return PlayerActor_TestSlotFlag(4, 4);
}

extern "C" BOOL PlayerActor_IsScriptedWalking(s32 a)
{
    return PlayerActor_TestSlotFlag(5, a);
}

extern "C" BOOL PlayerActor_IsInAct05()
{
    return PlayerActor_IsInAction(5, 4);
}

extern "C" BOOL PlayerActor_IsInWaitMenu()
{
    return PlayerActor_IsInAction(0x90, 4);
}

extern "C" BOOL PlayerActor_TestSlotFlag(s32 a, s32 b)
{
    PlayerActor *o = PlayerActor_Get(b);
    if (o) {
        return _ZN11PlayerActor14testActionFlagEj(o, a);
    }
    return FALSE;
}

extern "C" BOOL PlayerActor_IsInAction(s32 v, s32 id)
{
    PlayerActor *o = PlayerActor_Get(id);
    if (o) {
        if (o->action == v) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" s32 PlayerActor_GetAction(s32 id)
{
    PlayerActor *o = PlayerActor_Get(id);
    if (o) {
        return o->action;
    }
    return 0x93;
}

extern "C" s32 PlayerActor_GetResumeTransform(Unk_02006d14_V3 *out, s16 *outAng)
{
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        Unk_02006d14_V3 saved;
        Unk_02006d14_V3 tmp;
        s16 ang;
        s32 st;
        {
            Unk_02006d14_V3 *pv = (Unk_02006d14_V3 *)&o->position;
            saved = *pv;
        }
        ang = o->rotY;
        st = o->action;
        switch (st) {
        case 16:
            st = 2;
            break;
        case 0x2c:
            st = 2;
            PlayerActor_EndStandUpFront(o, st);
            break;
        case 0x29:
        case 0x2a:
            if (st == 0x29) {
                PlayerActor_EndStandUpSide1(o, 0x2c);
            } else {
                PlayerActor_EndStandUpSide2(o, 0x2c);
            }
            st = 2;
            PlayerActor_OffsetByAngle(&tmp, o, &saved, (u16 *)&o->rotY, (s32 *)&data_020d0428);
            {
                Unk_02006d14_V3 *pv = (Unk_02006d14_V3 *)&o->position;
                *pv = tmp;
            }
            break;
        case 14:
            st = 2;
            break;
        case 9: case 11: case 12:
            st = 8;
            break;
        case 10:
            st = 2;
            PlayerActor_EndGetOutOfBed(o, st);
            break;
        case 15:
            st = 8;
            PlayerActor_EndGetIntoBed(o, st);
            break;
        case 13:
            st = 8;
            PlayerActor_EndBedRoll(o, st);
            break;
        }
        {
            Unk_02006d14_V3 *pv = (Unk_02006d14_V3 *)&o->position;
            *out = *pv;
            *outAng = o->rotY;
            *pv = saved;
        }
        o->rotY = ang;
        return st;
    }
    return 0x93;
}

extern "C" s32 PlayerActor_GetActionOrSpawnAction()
{
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        s32 v = o->action;
        if (v == 0) {
            v = (o->param >> 22) & 0xff;
        }
        return v;
    }
    return 0x93;
}

extern "C" BOOL PlayerActor_IsChangingClothes()
{
    PlayerActor *o = PlayerActor_Get(4);
    if (o && o->action == 7 && o->bodyModel.curFrame < 0x13000) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL PlayerActor_IsChangingHeldItem()
{
    return PlayerActor_IsInAction(0x3f, 4);
}

extern "C" s32 PlayerActor_CanAcceptTalk()
{
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        return _ZN11PlayerActor13canAcceptTalkEj(o, o->action);
    }
    return 0;
}

extern "C" BOOL PlayerActor_SetEventLock(s32 c)
{
    if (c) {
        return PlayerActor_SetSlotFlag(0xb, 4);
    }
    return PlayerActor_ClearSlotFlag(0xb, 4);
}

extern "C" BOOL PlayerActor_SetNoFaceTalkTarget(s32 c, s32 b)
{
    if (c) {
        return PlayerActor_SetSlotFlag(0xe, b);
    }
    return PlayerActor_ClearSlotFlag(0xe, b);
}

extern "C" BOOL PlayerActor_SetNetFollowPaused(s32 c, s32 b)
{
    if (c) {
        return PlayerActor_SetSlotFlag(0x10, b);
    }
    return PlayerActor_ClearSlotFlag(0x10, b);
}

extern "C" BOOL PlayerActor_KeepAnimForNextAction()
{
    return PlayerActor_SetSlotFlag(0x17, 4);
}

extern "C" BOOL PlayerActor_SetSlotFlag(s32 a, s32 b)
{
    PlayerActor *o = PlayerActor_Get(b);
    if (o) {
        _ZN11PlayerActor13setActionFlagEj(o, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL PlayerActor_ClearSlotFlag(s32 a, s32 b)
{
    PlayerActor *o = PlayerActor_Get(b);
    if (o) {
        _ZN11PlayerActor15clearActionFlagEj(o, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL PlayerActor_CanOpenMenu()
{
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        if (_ZN11PlayerActor14testActionFlagEj(o, 0xb)) {
            return FALSE;
        }
        if (TalkRequestFlags_IsResetti() || _ZN11PlayerActor14testActionFlagEj(o, 0x13)) {
            return FALSE;
        }
        if (o->action == 0x3d || _ZN11PlayerActor14testActionFlagEj(o, 7) || _ZN11PlayerActor14testActionFlagEj(o, 8)) {
            return FALSE;
        }
        Unk_02094d60_Limit n = Unk_02094d60_LIMIT_5;
        if (n > _ZN11PlayerActor20getEffectivePriorityEv(o)) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL PlayerActor_IsInterruptibleByMenu()
{
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        Unk_02094d60_Limit n = Unk_02094d60_LIMIT_6;
        if (n > _ZN11PlayerActor20getEffectivePriorityEv(o)) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL PlayerActor_CanStartTalk()
{
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        if (_ZN11PlayerActor14testActionFlagEj(o, 0xb)) {
            if (o->action == 0x28 || o->action == 0x7c) {
                return TRUE;
            }
        }
        if (_ZN11PlayerActor14testActionFlagEj(o, 0x13)) {
            return FALSE;
        }
        Unk_02094d60_Limit n = Unk_02094d60_LIMIT_5;
        if (n > _ZN11PlayerActor20getEffectivePriorityEv(o)) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL PlayerActor_IsEventIdle()
{
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        s32 st = o->action;
        if (TalkRequestFlags_IsResetti() || _ZN11PlayerActor14testActionFlagEj(o, 0x13)) {
            return FALSE;
        }
        if (_ZN11PlayerActor14testActionFlagEj(o, 0xb)) {
            if (st == 0x28 || st == 2 || st == 8) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" BOOL PlayerActor_IsInterruptible()
{
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        Unk_02094d60_Limit n = Unk_02094d60_LIMIT_5;
        if (n > _ZN11PlayerActor20getEffectivePriorityEv(o)) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

// ---------------------------------------------------------------- functions (file unk_02094d3c)
extern "C" s32 PlayerActor_RequestAct05()
{
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        return _ZN12Unk_0200769412requestAct05Etjj(o, 3, 5, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_RequestReturnToWait() {
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        s32 r4 = o->action;
        s32 r6 = o->pendingAct76Kind;
        o->pendingAct76Kind = 0;
        if (r4 == 0x2c || (u32)(r4 - 0x29) <= 1) return 1;
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, r4);
        if (r6 > 0) {
            return _ZN11PlayerActor12requestAct76Ehhhjs(o, (u8)(r6 + 3), 0, 0, 6, -1);
        }
        u16 buf[2];
        BOOL c = gFieldSceneKind == 0 ? TRUE : FALSE;
        if (c) {
            PlayerActor_GetHeldItem(buf, o);
            BOOL c2;
            if (Item_IsFurniture(buf)) {
                buf[1] = 0xfff1;
                c2 = Item_GetFurnitureIndex(buf) == Item_GetFurnitureIndex(&buf[1]) ? TRUE : FALSE;
            } else {
                c2 = buf[0] == 0xfff1 ? TRUE : FALSE;
            }
            if (!c2 && !_ZN11PlayerActor20getHeldHoldableIndexEv(o) && r4 != 0x39) {
                return PlayerActor_RequestStowItem(o, 2, 2, 0, 0, 0, 6, -1);
            }
        }
        return _ZN11PlayerActor11requestWaitEjjj(o, 3, 5, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_RequestChangeClothes(u16 *p, s32 a, s32 b) {
    PlayerActor *o = PlayerActor_Get(4);
    if (o) return _ZN12Unk_0200769420requestChangeClothesEtjjjs(o, *p, a, b, 6, -1);
    return 0;
}

extern "C" s32 PlayerActor_RequestWearShirt(u16 *p) { return PlayerActor_RequestChangeClothes(p, 0, 5); }

extern "C" s32 PlayerActor_RequestWearFaceItem(u16 *p) { return PlayerActor_RequestChangeClothes(p, 1, 5); }

extern "C" s32 PlayerActor_RequestWearHat(u16 *p) { return PlayerActor_RequestChangeClothes(p, 2, 5); }

extern "C" s32 PlayerActor_RequestFaceChange() {
    u16 v = 0xfff1;
    return PlayerActor_RequestChangeClothes(&v, 3, 5);
}

extern "C" s32 PlayerActor_RequestWearShirtAlt(u16 *p) { return PlayerActor_RequestChangeClothes(p, 0, 0x10); }

extern "C" s32 PlayerActor_RequestWearFaceItemAlt(u16 *p) { return PlayerActor_RequestChangeClothes(p, 1, 0x10); }

extern "C" s32 PlayerActor_RequestWearHatAlt(u16 *p) { return PlayerActor_RequestChangeClothes(p, 2, 0x10); }

extern "C" s32 PlayerActor_RequestChangeHeldItem(u16 *p) {
    PlayerActor *o = PlayerActor_Get(4);
    if (o) return _ZN11PlayerActor21requestChangeHeldItemEtjj(o, *p, 6, -1);
    return 0;
}

extern "C" s32 PlayerActor_RequestHoldUpItem(u16 *p) {
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        u16 h = *p;
        return _ZN11PlayerActor17requestHoldUpItemEPtjj(o, &h, 6, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_RequestWalkTo(Unk_02006d14_Vec *v, u32 b, u32 idx) {
    PlayerActor *o = PlayerActor_Get(idx);
    if (o) {
        Unk_02006d14_Vec t;
        t.x = v->x;
        t.y = v->y;
        t.z = v->z;
        return _ZN11PlayerActor13requestWalkToEP16Unk_02006d14_Vecjjs(o, &t, b, 5, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_RequestTurnTo(s32 a, u32 idx) {
    PlayerActor *o = PlayerActor_Get(idx);
    if (o) return _ZN11PlayerActor13requestTurnToEsjj(o, a, 5, -1);
    return 0;
}

extern "C" s32 PlayerActor_RequestAct30(u16 *a, u32 *b, u8 *c, u32 *d, u32 e) {
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        return _ZN11PlayerActor12requestAct30EPtjjjjjs(o, (u32)a, *b, *c, *d, e, 6, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_RequestAct32() {
    PlayerActor *o = PlayerActor_Get(4);
    if (o) return _ZN11PlayerActor12requestAct32Ejj(o, 6, -1);
    return 0;
}

extern "C" s32 PlayerActor_RequestAct79() {
    if (TalkRequest_IsSaveMenuRunning()) return 0;
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        if (_ZN11PlayerActor14testActionFlagEj(o, 0xb)) return 0;
        Unk_02094a08_Limit k = Unk_02094a08_LIMIT_5;
        if (!(k > _ZN11PlayerActor19getRequiredPriorityEv(o))) {
            if (o->action == 0x4f && o->heldItemModel.bobber.curState != 5) {
                PlayerActor_RequestFishReelIn(o, 1, 6, -1);
                return 1;
            }
            return 0;
        }
        return _ZN11PlayerActor12requestAct79Ejj(o, k, -1);
    }
    return 0;
}

extern "C" void PlayerActor_RequestStowThenAct10(u32 a) {
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        s32 t = _ZN11PlayerActor15getHeldToolKindEv(o);
        if (t == 0) goto A;
        if (t == 0xa) {
            if (a == 1) goto A;
        }
        if (a < 2) goto B;
    A:
        _ZN11PlayerActor13setActionFlagEj(o, 1);
        _ZN11PlayerActor12requestAct10Esji(o, 3, 5, -1);
        return;
    B:
        PlayerActor_RequestStowItem(o, 0x10, a, o->position.x, o->position.z, o->rotY, 6, -1);
    }
}

extern "C" s32 PlayerActor_RequestAct10() {
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        if (o->action == 0x28) {
            if (_ZN11PlayerActor14testActionFlagEj(o, 0xb)) return 1;
        }
        return _ZN11PlayerActor12requestAct10Esji(o, 3, 5, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_LocalRequestExitWalkOut() {
    PlayerActor *o = PlayerActor_Get(4);
    s16 h;
    s32 pad;
    Unk_02006d14_Vec v;
    if (o) {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        if (o->exitMode == 3) {
            s32 r5 = o->exitIndex;
            h = o->rotY;
            if (r5 != -1) {
                SceneExit_GetDoor(Scene_GetWarpRequest(), r5, &pad, &h);
            }
            s32 t = Math_AngleToDir4(h);
            Unk_02006d14_Vec *pv = (Unk_02006d14_Vec *)&o->position;
            v.x = o->position.x;
            v.y = pv->y;
            v.z = pv->z;
            switch (t) {
            case 2: v.z -= 0x6000; break;
            case 0: v.z += 0x6000; break;
            case 3: v.x -= 0x6000; break;
            case 1: v.x += 0x6000; break;
            }
            return PlayerActor_RequestExitWalkOut(o, &v, 6, -1);
        }
    }
    return 0;
}

extern "C" s32 PlayerActor_RequestAct13() {
    PlayerActor *o = PlayerActor_Get(4);
    if (o) {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        return _ZN11PlayerActor12requestAct13Ejj(o, 5, -1);
    }
    return 0;
}

// ---------------------------------------------------------------- functions (file unk_020943dc)
extern "C" s32 PlayerActor_RequestEmotion(u8 *p) {
    PlayerActor *o = PlayerActor_Get(4);
    u32 v = *p;
    u8 t = sEmotionHoldFrames[v - 1];
    if (o) {
        o->actionPriority = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->action);
        return _ZN11PlayerActor14requestEmotionEhhjs(o, *p, t, 5, -1);
    }
    return 0;
}

// Declarations for data defined further down (definition order sets the data layout)
extern const u32 sPlayerAngleSyncVars[4];
extern const u32 sPlayerStateSyncVars[4];
extern const u8 sEmotionHoldFrames[0x20];
extern const u32 sPlayerPosSyncVars[4];
extern PlayerSessionTable gPlayerSessionTable;

const u32 sPlayerAngleSyncVars[4] = {4, 5, 6, 7};

const u32 sPlayerStateSyncVars[4] = {8, 9, 10, 11};

const u8 sEmotionHoldFrames[0x20] = {
    0x0f, 0x0f, 0x14, 0x0f, 0x22, 0x22, 0x19, 0x22, 0x22, 0x2c, 0x14, 0x14, 0x24, 0x2c, 0x1c, 0x18,
    0x1a, 0x26, 0x1e, 0x0f, 0x0f, 0x0f, 0x28, 0x0f, 0x1b, 0x14, 0x22, 0x28, 0x14, 0x00, 0x00, 0x00,
};

// ---------------------------------------------------------------- data
const u32 sPlayerPosSyncVars[4] = {0, 1, 2, 3};

PlayerSessionTable gPlayerSessionTable;
