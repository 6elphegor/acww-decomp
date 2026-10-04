#include "types.h"
#include "player/Unk_02006d14_Vec.h"
#include "player/Unk_02006d14_Blk.h"
#include "net/CommManager.h"


// An enum-typed local keeps the constant in a callee-saved register across the call.
// func_020085f0 is declared with the enum parameter (real type u32) so the argument is
// passed with `movs r1, r5` instead of `adds r1, r5, #0`.
enum Unk_02094a08_Limit { Unk_02094a08_LIMIT_5 = 5 };

struct Unk_02006d14 {
    u8 pad_00[0x5c];
    Unk_02006d14_Vec position;
    u8 pad_68[0x8e - 0x68];
    s16 rotY;
    u8 pad_90[0x44c - 0x90];
    s32 headPosX;
    s32 headPosY;
    s32 headPosZ;
    u8 pad_458[4];
    u16 headPitchTarget;
    u16 headYawTarget;
    u8 pad_460[0x59c - 0x460];
    u8 heldItemModel[4];
    u8 pad_5a0[0x5c8 - 0x5a0];
    s32 fishBobberState;
    u8 pad_5cc[0x694 - 0x5cc];
    Unk_02006d14_Blk itemHandMtx;
    u8 pad_6c4[0x6f0 - 0x6c4];
    u8 bodyPos[0x10];
    s32 animId;
    u8 pad_704[0x709 - 0x704];
    u8 faceTex[0x7ec - 0x709];
    s32 action;
    u8 pad_7f0[0x7f8 - 0x7f0];
    u32 actionPriority;
    u8 pad_7fc[4];
    s32 exitIndex;
    s32 exitMode;
    u8 pad_808[0x8e7 - 0x808];
    s8 pendingAct76Kind;

    void playSe(u32 a);
    void setActionFlag(u32 a);
    BOOL testActionFlag(u32 a);
    u32 func_02007c08(u32 a);
    s32 requestEmotion(u32 a, u32 b, u32 c, s32 d);
    s32 requestAct13(u32 a, s32 b);
    s32 requestAct10(u32 a, u32 b, s32 c);
    s32 requestFaceItemChange(u16 *p);
    s32 getHeldToolKind();
    s32 getHeldHoldableIndex();
    s32 func_0200e1ac();
    s32 func_020085f0(Unk_02094a08_Limit a, s32 b);
    s32 requestAct32(u32 a, s32 b);
    s32 requestAct30(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, s32 g);
    s32 requestTurnTo(s32 a, u32 b, s32 c);
    s32 requestWalkTo(Unk_02006d14_Vec *v, u32 a, u32 b, s32 c);
    s32 func_02008100(u16 *p, u32 a, s32 b);
    s32 requestChangeHeldItem(u32 a, u32 b, s32 c);
    s32 func_0200c2b4(u32 a, u32 b, u32 c, u32 d, s32 e);
    s32 requestAct76(u32 a, u32 b, u32 c, u32 d, s32 e);
    s32 func_0200ce98(u32 a, u32 b, s32 c);
    s32 PlayerActor_RequestExitWalkOut(Unk_02006d14_Vec *v, u32 a, s32 b);
};

extern "C" {
extern u8 gFieldSceneKind;
}

extern "C" {
extern u8 sEmotionHoldFrames[];
}

extern "C" {
extern u32 sPlayerFrontItemDist;
}

extern "C" {
extern CommManager *gCommManager;
}

extern "C" {
extern void *gSceneBlockMap;
}

extern "C" {
Unk_02006d14 *PlayerActor_Get(u32 idx);
}

extern "C" {
void *PlayerData_GetBySessionSlot(u32 idx);
}

extern "C" {
void _ZN10PlayerData6setTanEh(void *p, u32 v);
}

extern "C" {
void PlayerData_SetStungFace(void *p, s32 v);
}

extern "C" {
u8 *_ZN10PlayerData11getFaceTypeEv(void *p);
}

extern "C" {
void _ZN10PlayerData8setShirtEPt(void *p, u16 *v);
}

extern "C" {
void _ZN10PlayerData11setFaceItemEPt(void *p, u16 *v);
}

extern "C" {
void _ZN10PlayerData6setHatEPt(void *p, u16 *v);
}

extern "C" {
void _ZN10PlayerData11setHeldItemEPt(void *p, u16 *v);
}

extern "C" {
void _ZN16PlayerFaceTexRef4loadEj(u8 *p, u8 *v);
}

extern "C" {
void WorldCurve_FromCurved(Unk_02006d14_Vec *a, Unk_02006d14_Vec *b);
}

extern "C" {
void PlayerActor_OffsetByAngle(void *out, void *a, void *b, void *c, void *d);
}

extern "C" {
s32 Scene_InHouseRoom();
}

extern "C" {
s32 FtrMgr_FindFurnitureFacingPlayer(s32 *a, s32 *b, s32 c, s32 d);
}

extern "C" {
u16 *BlockMap_GetItemPtrAtPos(void *g, void *v, s32 z);
}

extern "C" {
s32 BlockMap_IsBuriedAtPos(void *g, void *v);
}

extern "C" {
void _ZN12Unk_02006d1415setShirtTextureEPv(Unk_02006d14 *o, u16 *p);
}

extern "C" {
void _ZN12Unk_02006d1421requestShirtTexUploadEv(Unk_02006d14 *o);
}

extern "C" {
s32 ItemInfo_GetHoldableCount();
}

extern "C" {
void ItemInfo_GetNthHoldable(u16 *out, u32 v);
}

extern "C" {
void HeldItemModel_SetItem(u8 *p, u16 *v, void *z);
}

extern "C" {
void HeldItemModel_Update(u8 *p);
}

extern "C" {
s32 TalkRequest_IsSaveMenuRunning();
}

extern "C" {
void PlayerActor_GetHeldItem(void *out, Unk_02006d14 *o);
}

extern "C" {
s32 Item_IsFurniture(void *p);
}

extern "C" {
s32 Item_GetFurnitureIndex(void *p);
}

extern "C" {
s32 Math_AngleToDir4(s32 v);
}

extern "C" {
void *Scene_GetWarpRequest();
}

extern "C" {
void SceneExit_GetDoor(void *a, s32 b, void *c, void *d);
}

extern "C" {
s32 PlayerActor_RequestStowItem(Unk_02006d14 *o, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, s32 g);
}

extern "C" {
s32 PlayerActor_RequestFishReelIn(Unk_02006d14 *o, u32 a, u32 b, s32 c);
}

extern "C" {
s32 PlayerActor_RequestChangeClothes(u16 *p, s32 a, s32 b);
}

// members of Unk_02006d14 whose symbols.txt names do not fit the method declarations (taken `this` first)
extern "C" {
s32 _ZN12Unk_02006d1416requestHatChangeEPthhh(Unk_02006d14 *o, u16 *p, u32 a, u32 b, u32 c);
void _ZN12Unk_020102ec10replayAnimEv(Unk_02006d14 *o);
s32 PlayerActor_GetHairStyle(Unk_02006d14 *o);
s32 PlayerActor_GetHairColor(Unk_02006d14 *o);
}

u32 sPlayerFrontItemDist = 0xccd;

extern "C" u8 *PlayerActor_GetBodyPos(u32 idx) {
    Unk_02006d14 *o = PlayerActor_Get(idx);
    if (o) return o->bodyPos;
    return 0;
}

extern "C" void PlayerActor_GetSlotHeldItem(u16 *out, u32 idx) {
    Unk_02006d14 *o = PlayerActor_Get(idx);
    u16 v[4];
    *out = 0xfff1;
    if (o) {
        PlayerActor_GetHeldItem(v, o);
        *out = v[0];
    }
}

extern "C" BOOL PlayerActor_SetHoldableItem(u32 a, u32 idx) {
    Unk_02006d14 *o = PlayerActor_Get(idx);
    u16 v[8];
    if (!o) return FALSE;
    void *p = PlayerData_GetBySessionSlot(idx);
    if (o->animId >= 0xa1) {
        if (a == 0 || ItemInfo_GetHoldableCount() < a) {
            v[1] = 0xfff1;
            _ZN10PlayerData11setHeldItemEPt(p, &v[1]);
        } else {
            ItemInfo_GetNthHoldable(&v[2], a - 1);
            _ZN10PlayerData11setHeldItemEPt(p, &v[2]);
        }
        return FALSE;
    }
    if (a == 0 || ItemInfo_GetHoldableCount() < a) {
        v[3] = 0xfff1;
        _ZN10PlayerData11setHeldItemEPt(p, &v[3]);
        v[4] = 0xfff1;
        HeldItemModel_SetItem(o->heldItemModel, &v[4], 0);
        _ZN12Unk_020102ec10replayAnimEv(o);
    } else {
        ItemInfo_GetNthHoldable(&v[0], a - 1);
        _ZN10PlayerData11setHeldItemEPt(p, &v[0]);
        HeldItemModel_SetItem(o->heldItemModel, &v[0], p);
        _ZN12Unk_020102ec10replayAnimEv(o);
        HeldItemModel_Update(o->heldItemModel);
    }
    return TRUE;
}

extern "C" BOOL PlayerActor_SetClothing(u16 *p, s32 kind, u32 idx) {
    void *q = PlayerData_GetBySessionSlot(idx);
    u16 v1, v2;
    if (!q) return FALSE;
    switch (kind) {
    case 0:
        _ZN10PlayerData8setShirtEPt(q, p);
        break;
    case 1:
        _ZN10PlayerData11setFaceItemEPt(q, p);
        break;
    case 2:
        _ZN10PlayerData6setHatEPt(q, p);
        break;
    }
    Unk_02006d14 *o = PlayerActor_Get(idx);
    if (!o) return FALSE;
    if (o->animId >= 0xa1) return FALSE;
    switch (kind) {
    case 0:
        _ZN12Unk_02006d1415setShirtTextureEPv(o, p);
        _ZN12Unk_02006d1421requestShirtTexUploadEv(o);
        break;
    case 1:
        v1 = *p;
        o->requestFaceItemChange(&v1);
        break;
    case 2: {
        v2 = *p;
        s32 r4 = PlayerActor_GetHairStyle(o);
        s32 r3 = PlayerActor_GetHairColor(o);
        _ZN12Unk_02006d1416requestHatChangeEPthhh(o, &v2, r4, r3, 0);
        break;
    }
    }
    return TRUE;
}

extern "C" BOOL PlayerActor_SetSwollenFace(s32 a, u32 idx) {
    void *p = PlayerData_GetBySessionSlot(idx);
    if (!p) return FALSE;
    PlayerData_SetStungFace(p, a);
    Unk_02006d14 *o = PlayerActor_Get(idx);
    if (!o) return FALSE;
    if (o->animId >= 0xa1) return FALSE;
    u8 *v;
    if (a) {
        v = _ZN10PlayerData11getFaceTypeEv(p) + 0x10;
    } else {
        v = _ZN10PlayerData11getFaceTypeEv(p);
    }
    _ZN16PlayerFaceTexRef4loadEj(&o->faceTex[0], v);
    return TRUE;
}

extern "C" BOOL PlayerActor_SetTan(u32 x, u32 idx) {
    void *p = PlayerData_GetBySessionSlot(idx);
    if (!p) return FALSE;
    _ZN10PlayerData6setTanEh(p, x);
    return TRUE;
}

extern "C" BOOL PlayerActor_SetHeadTilt(u32 a, u32 b, u32 idx) {
    Unk_02006d14 *o = PlayerActor_Get(idx);
    if (o) {
        if (!o->testActionFlag(0x15)) {
            o->setActionFlag(0x15);
        }
        o->headPitchTarget = a;
        o->headYawTarget = b;
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL PlayerActor_GetHeadPos(Unk_02006d14_Vec *out, u32 idx) {
    Unk_02006d14 *o = PlayerActor_Get(idx);
    if (o) {
        s32 a = o->headPosX;
        if (a == 0 && o->headPosY == 0 && o->headPosZ == 0) return FALSE;
        out->x = a;
        out->y = o->headPosY;
        out->z = o->headPosZ;
        WorldCurve_FromCurved(out, out);
        return TRUE;
    }
    return FALSE;
}

extern "C" void PlayerActor_GetHandMtx(Unk_02006d14_Blk *out, u32 idx) {
    Unk_02006d14 *o = PlayerActor_Get(idx);
    *out = o->itemHandMtx;
}

extern "C" u16 *PlayerActor_GetItemInFront() {
    Unk_02006d14 *o = PlayerActor_Get(4);
    u16 *r = 0;
    u32 buf[3];
    s32 a, b;
    if (!o) return 0;
    if (o->action != 2) return 0;
    PlayerActor_OffsetByAngle(buf, o, &o->position, (u8 *)o + 0x8e, &sPlayerFrontItemDist);
    BOOL t = gFieldSceneKind == 1 ? TRUE : FALSE;
    if (t) {
        if (Scene_InHouseRoom()) {
            if (gCommManager->localSlot == 0) {
                if (FtrMgr_FindFurnitureFacingPlayer(&a, &b, 0, 0) < 0) {
                    r = BlockMap_GetItemPtrAtPos(gSceneBlockMap, buf, 0);
                }
            }
        }
    } else {
        void *g = gSceneBlockMap;
        if (BlockMap_IsBuriedAtPos(g, buf)) return 0;
        r = BlockMap_GetItemPtrAtPos(g, buf, 0);
    }
    return r;
}

extern "C" void PlayerActor_SetLocalExitId(s32 *p) {
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        o->exitIndex = *p;
    }
}

extern "C" void PlayerActor_SetLocalExitKind(s32 *p) {
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        o->exitMode = *p;
    }
}

extern "C" void PlayerActor_OnChatOpenNop() {}

extern "C" void PlayerActor_OnChatCloseNop() {}

extern "C" void PlayerActor_PlayLocalSe(u32 x) {
    Unk_02006d14 *o = PlayerActor_Get(4);
    if (o) {
        o->playSe(x);
    }
}

