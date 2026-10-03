#include "types.h"

struct Unk_02006d14_Vec { s32 x, y, z; };
typedef Unk_02006d14_Vec Unk_02006d14_V3;
struct Unk_02006d14_Blk { u32 w[12]; };

// An enum-typed local keeps the constant in a callee-saved register across the call.
// _ZN12Unk_0200804012requestAct79Ejj is declared with the enum parameter (real type u32) so the argument is
// passed with `movs r1, r5` instead of `adds r1, r5, #0`.
enum Unk_02094a08_Limit { Unk_02094a08_LIMIT_5 = 5 };
enum Unk_02094d60_Limit { Unk_02094d60_LIMIT_5 = 5, Unk_02094d60_LIMIT_6 = 6 };

struct CommManager {
    u8 pad_00[0x64];
    s32 unk_64;
    s32 unk_68;
};

struct Unk_02006d14 {
    u8 pad_00[0x08];
    u32 unk_08;
    u8 pad_0c[0x5c - 0x0c];
    Unk_02006d14_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[0x2d4 - 0x90];
    s32 unk_2d4;
    u8 pad_2d8[0x44c - 0x2d8];
    s32 unk_44c;
    s32 unk_450;
    s32 unk_454;
    u8 pad_458[4];
    u16 unk_45c;
    u16 unk_45e;
    u8 pad_460[0x59c - 0x460];
    u8 unk_59c[4];
    u8 pad_5a0[0x5c8 - 0x5a0];
    s32 unk_5c8;
    u8 pad_5cc[0x694 - 0x5cc];
    Unk_02006d14_Blk unk_694;
    u8 pad_6c4[0x6f0 - 0x6c4];
    u8 unk_6f0[0x10];
    s32 unk_700;
    u8 pad_704[0x709 - 0x704];
    u8 unk_709[0x7ec - 0x709];
    s32 unk_7ec;
    u8 pad_7f0[0x7f8 - 0x7f0];
    u32 unk_7f8;
    u8 pad_7fc[4];
    s32 unk_800;
    s32 unk_804;
    u8 pad_808[0x8e7 - 0x808];
    s8 unk_8e7;
    u8 pad_8e8[0xc80 - 0x8e8];
    s16 unk_c80;
};

struct Unk_02095338_E { u32 a, b, c; };
struct Unk_02095338_D { u16 a : 7; u16 b : 4; u16 c : 5; };

struct PlayerSessionTable {
    u32 unk_00[4];
    u8 unk_10[4];
    u8 unk_14[4];
    Unk_02095338_D unk_18;
    u16 unk_1a;
    u8 unk_1c;
    u8 pad_1d[3];
    u32 unk_20[4];
    u8 unk_30[4];
    Unk_02095338_E unk_34[4];
    u16 unk_64[4];
    PlayerSessionTable();
    ~PlayerSessionTable();
};

struct Unk_020954f8_L { u32 out; u8 t[12]; };

extern "C" {
extern u8 gFieldSceneKind;
extern const u8 data_020d0408[];
extern const u32 data_020d03d8[];
extern const u32 data_020d03e8[];
extern const u32 data_020d03f8[];
extern const s32 data_020d0428;
extern CommManager *gCommManager;
}
extern PlayerSessionTable gPlayerSessionTable;

extern "C" {
Unk_02006d14 *PlayerActor_Get(s32 id);

u32 _ZN12Unk_0200769421getActionDonePriorityEj(Unk_02006d14 *o, u32 a);
s32 _ZN12Unk_02006d1414requestEmotionEhhjs(Unk_02006d14 *o, u32 a, u32 b, u32 c, s32 d);
s32 _ZN12Unk_02006d1412requestAct13Ejj(Unk_02006d14 *o, u32 a, s32 b);
s32 _ZN12Unk_02006d1412requestAct10Esji(Unk_02006d14 *o, u32 a, u32 b, s32 c);
s32 _ZN12Unk_02006d1415getHeldToolKindEv(Unk_02006d14 *o);
s32 _ZN12Unk_02006d1420getHeldHoldableIndexEv(Unk_02006d14 *o);
s32 _ZN11PlayerActor19getRequiredPriorityEv(Unk_02006d14 *o);
s32 _ZN12Unk_0200804012requestAct79Ejj(Unk_02006d14 *o, Unk_02094a08_Limit a, s32 b);
s32 _ZN12Unk_02006d1412requestAct32Ejj(Unk_02006d14 *o, u32 a, s32 b);
s32 _ZN12Unk_02006d1412requestAct30EPtjjjjjs(Unk_02006d14 *o, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, s32 g);
s32 _ZN12Unk_02006d1413requestTurnToEsjj(Unk_02006d14 *o, s32 a, u32 b, s32 c);
s32 _ZN12Unk_02006d1413requestWalkToEP16Unk_02006d14_Vecjjs(Unk_02006d14 *o, Unk_02006d14_Vec *v, u32 a, u32 b, s32 c);
s32 _ZN12Unk_0200804017requestHoldUpItemEPtjj(Unk_02006d14 *o, u16 *p, u32 a, s32 b);
s32 _ZN12Unk_02006d1421requestChangeHeldItemEtjj(Unk_02006d14 *o, u32 a, u32 b, s32 c);
s32 _ZN12Unk_0200769420requestChangeClothesEtjjjs(Unk_02006d14 *o, u32 a, u32 b, u32 c, u32 d, s32 e);
s32 _ZN12Unk_02006d1412requestAct76Ehhhjs(Unk_02006d14 *o, u32 a, u32 b, u32 c, u32 d, s32 e);
s32 _ZN11PlayerActor11requestWaitEjjj(Unk_02006d14 *o, u32 a, u32 b, s32 c);
s32 PlayerActor_RequestExitWalkOut(Unk_02006d14 *o, Unk_02006d14_Vec *v, u32 a, s32 b);
s32 _ZN12Unk_0200769412requestAct05Etjj(Unk_02006d14 *o, s32 a, s32 b, s32 c);
s32 _ZN11PlayerActor20getEffectivePriorityEv(Unk_02006d14 *o);
BOOL _ZN12Unk_02006d1414testActionFlagEj(Unk_02006d14 *o, s32 id);
void _ZN12Unk_02006d1415clearActionFlagEj(Unk_02006d14 *o, s32 id);
void _ZN12Unk_02006d1413setActionFlagEj(Unk_02006d14 *o, s32 id);
s32 _ZN12Unk_02006d1413canAcceptTalkEj(Unk_02006d14 *o, s32 v);

s32 Scene_InHouseRoom();
BOOL TalkRequestFlags_IsResetti();
s32 TalkRequest_IsSaveMenuRunning();
void PlayerActor_GetHeldItem(void *out, Unk_02006d14 *o);
s32 Item_IsFurniture(void *p);
s32 Item_GetFurnitureIndex(void *p);
s32 func_02063c18(s32 v);
void *Scene_GetWarpRequest();
void SceneExit_GetDoor(void *a, s32 b, void *c, void *d);
s32 PlayerActor_RequestStowItem(Unk_02006d14 *o, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, s32 g);
s32 PlayerActor_RequestFishReelIn(Unk_02006d14 *o, u32 a, u32 b, s32 c);
void PlayerActor_EndStandUpFront(Unk_02006d14 *o, s32 a);
void PlayerActor_EndStandUpSide1(Unk_02006d14 *o, s32 a);
void PlayerActor_EndStandUpSide2(Unk_02006d14 *o, s32 a);
void PlayerActor_EndGetOutOfBed(Unk_02006d14 *o, s32 a);
void PlayerActor_EndGetIntoBed(Unk_02006d14 *o, s32 a);
void PlayerActor_EndBedRoll(Unk_02006d14 *o, s32 a);
void PlayerActor_OffsetByAngle(Unk_02006d14_V3 *out, Unk_02006d14 *o, Unk_02006d14_V3 *in, u16 *ang, s32 *p);
void __cxa_vec_ctor(void *p, s32 n, s32 size, void *ctor, void *dtor);
void __cxa_vec_cleanup(void *p, s32 n, s32 size, void *dtor);
void _ZN6FxVec3D1Ev(void *p);
void func_02000c98(void *p);
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
u32 func_02095720(s32 v);
u32 func_0209573c(s32 v);
u32 func_02095758(s32 v);
BOOL PlayerActor_GetSlotAction(u32 *out, s32 a, s32 idx);

BOOL PlayerActor_SetSlotFlag(s32 a, s32 b);
BOOL PlayerActor_ClearSlotFlag(s32 a, s32 b);
BOOL PlayerActor_IsInAction(s32 v, s32 id);
BOOL PlayerActor_TestSlotFlag(s32 a, s32 b);
u8 func_02095430(PlayerSessionTable *p, s32 i);
void func_02095440(PlayerSessionTable *p, s32 i);
void func_0209544c(PlayerSessionTable *p, s32 i, s32 v);
u8 func_02095454(PlayerSessionTable *p, s32 i);
void func_02095464(PlayerSessionTable *p, s32 i);
void func_02095470(PlayerSessionTable *p, s32 i, s32 v);
u32 func_02095478(PlayerSessionTable *p, s32 i);
void func_02095488(PlayerSessionTable *p, s32 i);
void func_02095494(PlayerSessionTable *p, s32 i, u32 v);
u32 func_020953f4(PlayerSessionTable *p);
u16 *func_02095294(s32 i);
Unk_02095338_E *func_020952a0(s32 i);
u8 *func_020952b0(s32 i);
u32 *func_020952bc(s32 i);
s32 PlayerActor_RequestChangeClothes(u16 *p, s32 a, s32 b);
void func_02095200();
void func_02095218();
}

extern "C" Unk_02006d14 *PlayerActor_Get(s32 idx) {
    if (idx == 4) {
        idx = gCommManager->unk_68;
    }
    return (Unk_02006d14 *)func_02095478(&gPlayerSessionTable, idx);
}

extern "C" u32 func_02095758(s32 idx) { return _ZN11CommManager10getSyncVarEj(gCommManager, data_020d03d8[idx]); }

extern "C" u32 func_0209573c(s32 idx) { return _ZN11CommManager10getSyncVarEj(gCommManager, data_020d03e8[idx]); }

extern "C" u32 func_02095720(s32 idx) { return _ZN11CommManager10getSyncVarEj(gCommManager, data_020d03f8[idx]); }

// ---------------------------------------------------------------- functions (file unk_02095670)
extern "C" BOOL PlayerActor_GetSlotPosXZ(u8 *outb, s32 *x, s32 *y, s32 mode, s32 idx) {
    if (idx == 4) {
        idx = gCommManager->unk_68;
    }
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, idx)) {
        Unk_02006d14 *e = PlayerActor_Get(4);
        if (e != NULL) {
            s32 *p = (s32 *)&e->unk_5c;
            *outb = Scene_GetCurrent();
            *x = p[0];
            *y = p[2];
            return TRUE;
        }
        return FALSE;
    }
    u32 t = func_02095720(idx);
    if (t == 0) return FALSE;
    s32 v;
    if (!PlayerActor_GetSlotAction((u32 *)&v, mode, idx)) return FALSE;
    if (v >= 0x93) return FALSE;
    u32 t2 = func_02095758(idx);
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
        idx = gCommManager->unk_68;
    }
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, idx)) {
        Unk_02006d14 *o = PlayerActor_Get(4);
        if (o) {
            *out = o->unk_8e;
            return TRUE;
        }
        return FALSE;
    }
    if (!func_02095720(idx)) {
        return FALSE;
    }
    if (!PlayerActor_GetSlotAction(&st, a, idx)) {
        return FALSE;
    }
    if ((s32)st >= 0x93) {
        return FALSE;
    }
    u8 *q = (u8 *)func_0209573c(idx);
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
        idx = gCommManager->unk_68;
    }
    if (_ZN11CommManager11isLocalSlotEj(gCommManager, idx)) {
        Unk_02006d14 *o = PlayerActor_Get(4);
        if (o) {
            *out = o->unk_7ec;
            return TRUE;
        }
        return FALSE;
    }
    u8 *p = (u8 *)func_02095720(idx);
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

extern "C" void func_020954f8(void *dst, s32 x)
{
    Unk_020954f8_L l;
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        CommRecord_PackSource(l.t, Scene_GetCurrent(), 0);
        if (PlayerActor_GetSlotAction(&l.out, -1, 4)) {
            l.t[1] = l.out + 1;
        }
        NetBuf_WriteS16(l.t + 2, o->unk_c80);
        MI_CpuCopy8((u8 *)o + 0x8ec, l.t + 4, 8);
    } else {
        l.t[1] = 0x94;
    }
    MI_CpuCopy8(l.t, dst, CommSyncVar_GetVarSize(x));
}

extern "C" void func_020954e0(u8 *p, u16 h, u8 v)
{
    NetBuf_WriteU16(p, h);
    p[2] = v;
}

extern "C" void func_020954c8(u8 *p, u16 *a, u32 *b)
{
    *a = NetBuf_ReadU16(p);
    *b = p[2];
}

extern "C" void func_020954b8(u8 *p, u32 a, u32 b)
{
    *p = ((b << 4) & 0x70) | (a & 0xf);
}

extern "C" void func_0209549c(u8 *src, u8 *a, u8 *b)
{
    *a = src[0] & 0xf;
    *b = (src[0] >> 4) & 7;
}

extern "C" void func_02095494(PlayerSessionTable *p, s32 i, u32 v)
{
    p->unk_00[i] = v;
}

extern "C" void func_02095488(PlayerSessionTable *p, s32 i)
{
    func_02095494(p, i, 0);
}

extern "C" u32 func_02095478(PlayerSessionTable *p, s32 i)
{
    if (i < 4) {
        return p->unk_00[i];
    }
    return 0;
}

extern "C" void func_02095470(PlayerSessionTable *p, s32 i, s32 v)
{
    p->unk_10[i] = v;
}

extern "C" void func_02095464(PlayerSessionTable *p, s32 i)
{
    func_02095470(p, i, 7);
}

extern "C" u8 func_02095454(PlayerSessionTable *p, s32 i)
{
    if (i < 4) {
        return p->unk_10[i];
    }
    return 7;
}

extern "C" void func_0209544c(PlayerSessionTable *p, s32 i, s32 v)
{
    p->unk_14[i] = v;
}

extern "C" void func_02095440(PlayerSessionTable *p, s32 i)
{
    func_0209544c(p, i, 4);
}

extern "C" u8 func_02095430(PlayerSessionTable *p, s32 i)
{
    if (i < 4) {
        return p->unk_14[i];
    }
    return 4;
}

extern "C" u32 func_020953f4(PlayerSessionTable *p)
{
    u32 i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == func_02095430(p, j)) {
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
    __cxa_vec_ctor(unk_34, 4, 12, (void *)func_02000c98, (void *)_ZN6FxVec3D1Ev);
    for (i = 0; i < 4; i++) {
        func_02095464(&gPlayerSessionTable, i);
        func_02095440(&gPlayerSessionTable, i);
        unk_20[i] = 0x93;
        unk_30[i] = 0x33;
        unk_34[i].a = 0;
        unk_34[i].b = 0;
        unk_34[i].c = 0;
        unk_64[i] = 0;
    }
    unk_18.a = 0;
    unk_18.b = 1;
    unk_18.c = 1;
    unk_1a = 0;
    unk_1c = 0;
}

PlayerSessionTable::~PlayerSessionTable()
{
    __cxa_vec_cleanup(unk_34, 4, 12, (void *)_ZN6FxVec3D1Ev);
}

extern "C" void PlayerSession_SetActor(s32 i, u32 v)
{
    func_02095494(&gPlayerSessionTable, i, v);
}

extern "C" void PlayerSession_ClearActor(s32 i)
{
    func_02095488(&gPlayerSessionTable, i);
}

extern "C" void PlayerSession_SetDataIndex(s32 i, s32 v)
{
    func_02095470(&gPlayerSessionTable, i, v);
}

extern "C" void PlayerSession_ClearDataIndex(s32 i)
{
    func_02095464(&gPlayerSessionTable, i);
}

extern "C" u8 PlayerSession_GetDataIndex(s32 i)
{
    return func_02095454(&gPlayerSessionTable, i);
}

extern "C" Unk_02095338_D *func_020952d8()
{
    return &gPlayerSessionTable.unk_18;
}

extern "C" u16 *func_020952d0()
{
    return &gPlayerSessionTable.unk_1a;
}

extern "C" u8 *func_020952c8()
{
    return &gPlayerSessionTable.unk_1c;
}

extern "C" u32 *func_020952bc(s32 i)
{
    return &gPlayerSessionTable.unk_20[i];
}

extern "C" u8 *func_020952b0(s32 i)
{
    return &gPlayerSessionTable.unk_30[i];
}

extern "C" Unk_02095338_E *func_020952a0(s32 i)
{
    return &gPlayerSessionTable.unk_34[i];
}

extern "C" u16 *func_02095294(s32 i)
{
    return &gPlayerSessionTable.unk_64[i];
}

extern "C" void func_02095260(s32 i)
{
    *func_020952bc(i) = 0x93;
    *func_020952b0(i) = 0x33;
    Unk_02095338_E *e = func_020952a0(i);
    e->a = 0;
    e->b = 0;
    e->c = 0;
    *func_02095294(i) = 0;
}

extern "C" void PlayerSession_SetGfxSlot(s32 i, s32 v)
{
    func_0209544c(&gPlayerSessionTable, i, v);
}

extern "C" void PlayerSession_ClearGfxSlot(s32 i)
{
    func_02095440(&gPlayerSessionTable, i);
}

extern "C" u8 PlayerSession_GetGfxSlot(s32 i)
{
    return func_02095430(&gPlayerSessionTable, i);
}

extern "C" u32 PlayerSession_FindFreeGfxSlot()
{
    return func_020953f4(&gPlayerSessionTable);
}

extern "C" void func_02095218() {}

extern "C" void func_02095204(s32 id)
{
    PlayerActor_Get(id);
    func_02095218();
}

extern "C" void func_02095200() {}

extern "C" void func_020951ec(s32 id)
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

extern "C" BOOL func_020951d0()
{
    return PlayerActor_TestSlotFlag(1, 4);
}

extern "C" BOOL func_020951c4()
{
    return PlayerActor_TestSlotFlag(4, 4);
}

extern "C" BOOL func_020951b8(s32 a)
{
    return PlayerActor_TestSlotFlag(5, a);
}

extern "C" BOOL func_020951ac()
{
    return PlayerActor_IsInAction(5, 4);
}

extern "C" BOOL func_020951a0()
{
    return PlayerActor_IsInAction(0x90, 4);
}

extern "C" BOOL PlayerActor_TestSlotFlag(s32 a, s32 b)
{
    Unk_02006d14 *o = PlayerActor_Get(b);
    if (o) {
        return _ZN12Unk_02006d1414testActionFlagEj(o, a);
    }
    return FALSE;
}

extern "C" BOOL PlayerActor_IsInAction(s32 v, s32 id)
{
    Unk_02006d14 *o = PlayerActor_Get(id);
    if (o) {
        if (o->unk_7ec == v) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" s32 PlayerActor_GetAction(s32 id)
{
    Unk_02006d14 *o = PlayerActor_Get(id);
    if (o) {
        return o->unk_7ec;
    }
    return 0x93;
}

extern "C" s32 func_0209501c(Unk_02006d14_V3 *out, s16 *outAng)
{
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        Unk_02006d14_V3 saved;
        Unk_02006d14_V3 tmp;
        s16 ang;
        s32 st;
        {
            Unk_02006d14_V3 *pv = &o->unk_5c;
            saved = *pv;
        }
        ang = o->unk_8e;
        st = o->unk_7ec;
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
            PlayerActor_OffsetByAngle(&tmp, o, &saved, (u16 *)&o->unk_8e, (s32 *)&data_020d0428);
            {
                Unk_02006d14_V3 *pv = &o->unk_5c;
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
            Unk_02006d14_V3 *pv = &o->unk_5c;
            *out = *pv;
            *outAng = o->unk_8e;
            *pv = saved;
        }
        o->unk_8e = ang;
        return st;
    }
    return 0x93;
}

extern "C" s32 func_02094fec()
{
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        s32 v = o->unk_7ec;
        if (v == 0) {
            v = (o->unk_08 >> 22) & 0xff;
        }
        return v;
    }
    return 0x93;
}

extern "C" BOOL func_02094fb4()
{
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o && o->unk_7ec == 7 && o->unk_2d4 < 0x13000) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02094fa8()
{
    return PlayerActor_IsInAction(0x3f, 4);
}

extern "C" s32 func_02094f84()
{
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        return _ZN12Unk_02006d1413canAcceptTalkEj(o, o->unk_7ec);
    }
    return 0;
}

extern "C" BOOL func_02094f64(s32 c)
{
    if (c) {
        return PlayerActor_SetSlotFlag(0xb, 4);
    }
    return PlayerActor_ClearSlotFlag(0xb, 4);
}

extern "C" BOOL func_02094f48(s32 c, s32 b)
{
    if (c) {
        return PlayerActor_SetSlotFlag(0xe, b);
    }
    return PlayerActor_ClearSlotFlag(0xe, b);
}

extern "C" BOOL func_02094f2c(s32 c, s32 b)
{
    if (c) {
        return PlayerActor_SetSlotFlag(0x10, b);
    }
    return PlayerActor_ClearSlotFlag(0x10, b);
}

extern "C" BOOL func_02094f20()
{
    return PlayerActor_SetSlotFlag(0x17, 4);
}

extern "C" BOOL PlayerActor_SetSlotFlag(s32 a, s32 b)
{
    Unk_02006d14 *o = PlayerActor_Get(b);
    if (o) {
        _ZN12Unk_02006d1413setActionFlagEj(o, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL PlayerActor_ClearSlotFlag(s32 a, s32 b)
{
    Unk_02006d14 *o = PlayerActor_Get(b);
    if (o) {
        _ZN12Unk_02006d1415clearActionFlagEj(o, a);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02094e64()
{
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        if (_ZN12Unk_02006d1414testActionFlagEj(o, 0xb)) {
            return FALSE;
        }
        if (TalkRequestFlags_IsResetti() || _ZN12Unk_02006d1414testActionFlagEj(o, 0x13)) {
            return FALSE;
        }
        if (o->unk_7ec == 0x3d || _ZN12Unk_02006d1414testActionFlagEj(o, 7) || _ZN12Unk_02006d1414testActionFlagEj(o, 8)) {
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

extern "C" BOOL func_02094e3c()
{
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        Unk_02094d60_Limit n = Unk_02094d60_LIMIT_6;
        if (n > _ZN11PlayerActor20getEffectivePriorityEv(o)) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_02094de0()
{
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        if (_ZN12Unk_02006d1414testActionFlagEj(o, 0xb)) {
            if (o->unk_7ec == 0x28 || o->unk_7ec == 0x7c) {
                return TRUE;
            }
        }
        if (_ZN12Unk_02006d1414testActionFlagEj(o, 0x13)) {
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

extern "C" BOOL func_02094d88()
{
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        s32 st = o->unk_7ec;
        if (TalkRequestFlags_IsResetti() || _ZN12Unk_02006d1414testActionFlagEj(o, 0x13)) {
            return FALSE;
        }
        if (_ZN12Unk_02006d1414testActionFlagEj(o, 0xb)) {
            if (st == 0x28 || st == 2 || st == 8) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

extern "C" BOOL func_02094d60()
{
    Unk_02006d14 *o = PlayerActor_Get(4);
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
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        return _ZN12Unk_0200769412requestAct05Etjj(o, 3, 5, -1);
    }
    return 0;
}

extern "C" s32 func_02094c38() {
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        s32 r4 = o->unk_7ec;
        s32 r6 = o->unk_8e7;
        o->unk_8e7 = 0;
        if (r4 == 0x2c || (u32)(r4 - 0x29) <= 1) return 1;
        o->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(o, r4);
        if (r6 > 0) {
            return _ZN12Unk_02006d1412requestAct76Ehhhjs(o, (u8)(r6 + 3), 0, 0, 6, -1);
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
            if (!c2 && !_ZN12Unk_02006d1420getHeldHoldableIndexEv(o) && r4 != 0x39) {
                return PlayerActor_RequestStowItem(o, 2, 2, 0, 0, 0, 6, -1);
            }
        }
        return _ZN11PlayerActor11requestWaitEjjj(o, 3, 5, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_RequestChangeClothes(u16 *p, s32 a, s32 b) {
    Unk_02006d14 *o = PlayerActor_Get(4);
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
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) return _ZN12Unk_02006d1421requestChangeHeldItemEtjj(o, *p, 6, -1);
    return 0;
}

extern "C" s32 PlayerActor_RequestHoldUpItem(u16 *p) {
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        u16 h = *p;
        return _ZN12Unk_0200804017requestHoldUpItemEPtjj(o, &h, 6, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_RequestWalkTo(Unk_02006d14_Vec *v, u32 b, u32 idx) {
    Unk_02006d14 *o = PlayerActor_Get(idx);
    if (o) {
        Unk_02006d14_Vec t;
        t.x = v->x;
        t.y = v->y;
        t.z = v->z;
        return _ZN12Unk_02006d1413requestWalkToEP16Unk_02006d14_Vecjjs(o, &t, b, 5, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_RequestTurnTo(s32 a, u32 idx) {
    Unk_02006d14 *o = PlayerActor_Get(idx);
    if (o) return _ZN12Unk_02006d1413requestTurnToEsjj(o, a, 5, -1);
    return 0;
}

extern "C" s32 PlayerActor_RequestAct30(u16 *a, u32 *b, u8 *c, u32 *d, u32 e) {
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        return _ZN12Unk_02006d1412requestAct30EPtjjjjjs(o, (u32)a, *b, *c, *d, e, 6, -1);
    }
    return 0;
}

extern "C" s32 PlayerActor_RequestAct32() {
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) return _ZN12Unk_02006d1412requestAct32Ejj(o, 6, -1);
    return 0;
}

extern "C" s32 PlayerActor_RequestAct79() {
    if (TalkRequest_IsSaveMenuRunning()) return 0;
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        if (_ZN12Unk_02006d1414testActionFlagEj(o, 0xb)) return 0;
        Unk_02094a08_Limit k = Unk_02094a08_LIMIT_5;
        if (!(k > _ZN11PlayerActor19getRequiredPriorityEv(o))) {
            if (o->unk_7ec == 0x4f && o->unk_5c8 != 5) {
                PlayerActor_RequestFishReelIn(o, 1, 6, -1);
                return 1;
            }
            return 0;
        }
        return _ZN12Unk_0200804012requestAct79Ejj(o, k, -1);
    }
    return 0;
}

extern "C" void func_020949a0(u32 a) {
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        s32 t = _ZN12Unk_02006d1415getHeldToolKindEv(o);
        if (t == 0) goto LampLights;
        if (t == 0xa) {
            if (a == 1) goto LampLights;
        }
        if (a < 2) goto LightLevel;
    LampLights:
        _ZN12Unk_02006d1413setActionFlagEj(o, 1);
        _ZN12Unk_02006d1412requestAct10Esji(o, 3, 5, -1);
        return;
    LightLevel:
        PlayerActor_RequestStowItem(o, 0x10, a, o->unk_5c.x, o->unk_5c.z, o->unk_8e, 6, -1);
    }
}

extern "C" s32 func_02094960() {
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        if (o->unk_7ec == 0x28) {
            if (_ZN12Unk_02006d1414testActionFlagEj(o, 0xb)) return 1;
        }
        return _ZN12Unk_02006d1412requestAct10Esji(o, 3, 5, -1);
    }
    return 0;
}

extern "C" s32 func_02094898() {
    Unk_02006d14 *o = PlayerActor_Get(4);
    s16 h;
    s32 pad;
    Unk_02006d14_Vec v;
    if (o) {
        o->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->unk_7ec);
        if (o->unk_804 == 3) {
            s32 r5 = o->unk_800;
            h = o->unk_8e;
            if (r5 != -1) {
                SceneExit_GetDoor(Scene_GetWarpRequest(), r5, &pad, &h);
            }
            s32 t = func_02063c18(h);
            Unk_02006d14_Vec *pv = &o->unk_5c;
            v.x = o->unk_5c.x;
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
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        o->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->unk_7ec);
        return _ZN12Unk_02006d1412requestAct13Ejj(o, 5, -1);
    }
    return 0;
}

// ---------------------------------------------------------------- functions (file unk_020943dc)
extern "C" s32 PlayerActor_RequestEmotion(u8 *p) {
    Unk_02006d14 *o = PlayerActor_Get(4);
    u32 v = *p;
    u8 t = data_020d0408[v - 1];
    if (o) {
        o->unk_7f8 = _ZN12Unk_0200769421getActionDonePriorityEj(o, o->unk_7ec);
        return _ZN12Unk_02006d1414requestEmotionEhhjs(o, *p, t, 5, -1);
    }
    return 0;
}

// Declarations for data defined further down (definition order sets the data layout)
extern const u32 data_020d03e8[4];
extern const u32 data_020d03f8[4];
extern const u8 data_020d0408[0x20];
extern const u32 data_020d03d8[4];
extern PlayerSessionTable gPlayerSessionTable;

const u32 data_020d03e8[4] = {4, 5, 6, 7};

const u32 data_020d03f8[4] = {8, 9, 10, 11};

const u8 data_020d0408[0x20] = {
    0x0f, 0x0f, 0x14, 0x0f, 0x22, 0x22, 0x19, 0x22, 0x22, 0x2c, 0x14, 0x14, 0x24, 0x2c, 0x1c, 0x18,
    0x1a, 0x26, 0x1e, 0x0f, 0x0f, 0x0f, 0x28, 0x0f, 0x1b, 0x14, 0x22, 0x28, 0x14, 0x00, 0x00, 0x00,
};

// ---------------------------------------------------------------- data
const u32 data_020d03d8[4] = {0, 1, 2, 3};

PlayerSessionTable gPlayerSessionTable;
