#include "types.h"
#include "Unk_020d8c7c.h"
#include "net/CommManager.h"
#include "player/Unk_02097ff4.h"
#include "save/TownExchangeRecord.h"
#include "menu/MenuProc.h"
#include "player/PlayerData.h"
#include "menu/MenuErrorMessage.h"
#include "menu/PocketMenu.h"

extern "C" {
s32 Snd_PlaySe(s32 a);
s32 PlayerActor_IsInAction(s32 a, s32 b);
u8 *PlayerActor_GetActor(s32 a);
void *PlayerData_GetCurrent();
s32 MenuCtrl_IsForceCloseDue();
s32 FieldAction_RequestTool(s32 a, void *b, s32 c, s32 d, s32 e);
s32 FieldAction_RequestAtFreeUnit(s32 a, s32 b, s32 c);
s32 FieldAction_PollResult(s32 a);
void FieldAction_Release(s32 a);
void FieldPos_FromUnitCenter(void *out, s32 x, s32 z);
void FieldPos_ToUnit(s32 *x, s32 *z, void *p);
void *TownBlockMap_Get();
u16 *BlockMap_GetItemPtr(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, s32 layer);
u32 BlockMap_GetBlockAttr(void *grid, s32 x, s32 z);
BOOL Ground_FindWaterAhead(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void NetBuf_PackPair20(void *out, s32 a, s32 b);
u32 Random_GlobalBelow(u32 a);
void *Heap_AllocTail(void *heap, u32 size);
void Heap_Free(void *heap, void *p);
void MI_CpuCopy8(void *src, void *dst, s32 n);
void *TownExchange_GetLetter(void *p);
void Letter_Copy(void *a, void *b);

extern void *gMenuHeap;
extern void *gSceneBlockMap;
extern u8 data_021e7f8c[];
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];
extern "C" s16 sBuryHoleAngles[16] = {0, 0x1800, -0x1800, 0};

// other overlays
BOOL PlayerActor_ConfirmReleaseCreature();
BOOL PlayerActor_IsLocalReleaseWaiting();
BOOL PlayerActor_LocalRequestReleaseCreature();
BOOL BottleThrow_IsActive(void *p);
void BottleThrow_SetTarget(void *p, void *q);
void PlayerActor_LocalRequestThrowBottle();
BOOL HeldInsect_GetStage(void *p);
void HeldInsect_Start(u32 a, void *p);
void HeldInsect_Release(void *p, s32 a);
void PlayerActor_LocalReleaseCatch(s32 a);
BOOL FishCatch_StartRelease(void *p, s32 a, void *q);
BOOL PlayerActor_LocalRequestBuryItem(void *a, void *b);
BOOL ChoiceIdList_Add(u8 *p, u32 a, u32 b);
}

extern "C" CommManager *gCommManager;

class PocketMenu;
extern "C" {
void *PocketMenu_GetPlayerSlot(PocketMenu *self);
s32 PocketMenu_GetLetter(PocketMenu *self, u32 a);
s32 PocketMenu_GetItem(PocketMenu *self, u32 a);
s32 PocketMenu_ClearLetter(PocketMenu *self, u32 a);
s32 PocketMenu_ClearSlotItem(PocketMenu *self, u32 a);
s32 func_ov096_02298320(PocketMenu *self);
s32 PocketMenu_ShowMessage(PocketMenu *self, s32 a, s32 b, s32 c);
s32 PocketMenu_ReturnToIdle(PocketMenu *self);
}




// ---------------------------------------------------------------------------------------------

static inline BOOL Unk_ov098_RangeCheck(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov098_0229b2d8_Both() {
    if (gTouchHeld && gTouchChanged) {
        return TRUE;
    }
    return FALSE;
}

struct Unk_ov098_0229b790_Pt {
    s32 x, y;
    Unk_ov098_0229b790_Pt(s32 a, s32 b) {
        x = a;
        y = b;
    }
};

struct Unk_0229bc90_Pad {
    s32 v[2];
    Unk_0229bc90_Pad() {}
    ~Unk_0229bc90_Pad() {}
};

extern "C" {
void *PlayerData_GetCurrent();
s32 InvItem_IsNotFishInsectOrFlower(u32);
}

extern "C" s32 PocketMenu_CanDropOutdoor(s32 a, u32 b) {
    Unk_0229bc90_Pad pad;
    if (((Unk_02097ff4 *)PlayerData_GetCurrent())->testFlag(1) != 0) {
        if ((b >= 0x14fe && b <= 0x1517) || (b >= 0x151d && b <= 0x151e)) {
            return 0;
        }
    }
    return InvItem_IsNotFishInsectOrFlower(b);
}

void PocketMenu::addFieldOptions(u16 v) {
    struct {
        u16 a;
    } l;
    l.a = v;
    BOOL f1 = FALSE;
    u16 a = *(volatile u16 *)&l.a;
    u16 b = *(volatile u16 *)&l.a;
    if (b >= 0x12b0 && a <= 0x12e7) {
        f1 = TRUE;
    }
    if (f1 || (a >= 0x12e8 && a <= 0x131f)) {
        ChoiceIdList_Add(optionList, 0x1b, 0x21);
    }
    BOOL f2 = FALSE;
    u16 c = *(volatile u16 *)&l.a;
    u16 d = *(volatile u16 *)&l.a;
    if (d >= 0x12b0 && c <= 0x12e7) {
        f2 = TRUE;
    }
    if (f2) {
        ChoiceIdList_Add(optionList, 8, 0x15);
    } else if (c >= 0x12e8 && c <= 0x131f) {
        if (findWaterNearPlayer(0)) {
            ChoiceIdList_Add(optionList, 8, 0x18);
        }
    } else if ((c >= 0x137c && c <= 0x137c) || (c >= 0x1408 && c <= 0x1428) || (c >= 0x1471 && c <= 0x1491) ||
               (c >= 0x14fe && c <= 0x1517) || (c >= 0x151d && c <= 0x151e) || (c >= 0x1567 && c <= 0x1567)) {
        ChoiceIdList_Add(optionList, 6, 0x17);
    } else if (findBuryHole()) {
        ChoiceIdList_Add(optionList, 7, 0x16);
    }
}

void PocketMenu::addBottleOption() {
    clearFlags(8);
    if (!gCommManager->isOnline()) {
        if (findWaterNearPlayer(1)) {
            ChoiceIdList_Add(optionList, 0x11, 0x19);
            setFlags(8);
        }
    }
}

BOOL PocketMenu::findWaterNearPlayer(s32 flag) {
    u8 *p = PlayerActor_GetActor(4);
    s32 base;
    u8 *q;
    q = p + 0x5c;
    base = 0xa00;
    u32 f = BlockMap_GetBlockAttr(gSceneBlockMap, *(s32 *)(p + 0x5c) >> 17, *(s32 *)(q + 8) >> 17);
    if (flag) {
        if ((f & 0x7f000) == 0 && (f & 8) == 0) {
            return FALSE;
        }
        base = 0x1b58;
    } else {
        if ((f & 0x7f000) != 0 || (f & 8) != 0) {
            base += 0xe10;
        } else {
            base += 0x3e8;
        }
    }
    return Ground_FindWaterAhead(&waterPos, q, *(s16 *)(p + 0x8e), 0x7800, base, 0xc);
}

void PocketMenu::actionReleaseFish() {
    setMainState(0x30);
    mainAct30();
}

void PocketMenu::mainAct30() {
    void *r6 = PocketMenu_GetPlayerSlot(this);
    s32 a = PocketMenu_GetItem(this, actionTarget);
    if (FishCatch_StartRelease(r6, a, &waterPos)) {
        struct {
            u16 a;
        } l;
        l.a = a;
        BOOL ok = FALSE;
        volatile u16 *pv = &l.a;
        u16 v = *pv;
        u16 w = *pv;
        if (w >= 0x12e8 && v <= 0x131f) {
            ok = TRUE;
        }
        s32 r1;
        if (ok) {
            r1 = v - 0x12e8;
        } else {
            r1 = -1;
        }
        sendFishReleasePacket((u8)r1);
        PlayerActor_LocalReleaseCatch(1);
        func_ov096_02298320(this);
    }
}

void PocketMenu::sendReleasePacket(u8 a, u8 b) {
    if (gCommManager->isOnline()) {
        u8 pkt[12];
        pkt[0] = b;
        pkt[1] = a;
        NetBuf_PackPair20(&pkt[7], waterPos, waterPosZ);
        MI_CpuCopy8(&pkt[7], &pkt[2], 5);
        CommManager *g = gCommManager;
        g->beginRecord();
        g->writeRecord(pkt, 7);
        g->endRecord(0x16, 4);
    }
}

void PocketMenu::sendFishReleasePacket(u8 a) {
    sendReleasePacket(a, 2);
}

void PocketMenu::actionReleaseInsect() {
    setMainState(0x2c);
    mainAct2C();
}

void PocketMenu::mainAct2C() {
    void *r7 = PocketMenu_GetPlayerSlot(this);
    if (HeldInsect_GetStage(r7) == 0) {
        struct { u16 a; } l;
        l.a = PocketMenu_GetItem(this, actionTarget);
        BOOL ok = FALSE;
        volatile u16 *pv = &l.a;
        u16 a = *pv;
        u16 b = *pv;
        if (b >= 0x12b0 && a <= 0x12e7) {
            ok = TRUE;
        }
        s32 r5 = ok ? a - 0x12b0 : -1;
        u32 t = (u8)Random_GlobalBelow(0x3c);
        s16 x = (t - 0x1e) * 0xb6;
        x += *(s16 *)(PlayerActor_GetActor(4) + 0x8e);
        HeldInsect_Start((u8)r5, r7);
        HeldInsect_Release(r7, x);
        PlayerActor_LocalReleaseCatch(0);
        sendInsectReleasePacket((u8)r5, t);
        func_ov096_02298320(this);
    }
}

void PocketMenu::sendInsectReleasePacket(u8 a, u32 b) {
    if (gCommManager->isOnline()) {
        u8 buf[3];
        buf[0] = 1;
        buf[1] = a;
        buf[2] = b;
        CommManager *g = gCommManager;
        g->beginRecord();
        g->writeRecord(buf, 3);
        g->endRecord(0x16, 4);
    }
}

s32 *PocketMenu::getDirOffset(s16 a) {
    static Unk_ov098_0229b790_Pt tbl[16] = {
        Unk_ov098_0229b790_Pt(0, 1),   Unk_ov098_0229b790_Pt(1, 1),   Unk_ov098_0229b790_Pt(1, 1),
        Unk_ov098_0229b790_Pt(1, 0),   Unk_ov098_0229b790_Pt(1, 0),   Unk_ov098_0229b790_Pt(1, -1),
        Unk_ov098_0229b790_Pt(1, -1),  Unk_ov098_0229b790_Pt(0, -1),  Unk_ov098_0229b790_Pt(0, -1),
        Unk_ov098_0229b790_Pt(-1, -1), Unk_ov098_0229b790_Pt(-1, -1), Unk_ov098_0229b790_Pt(-1, 0),
        Unk_ov098_0229b790_Pt(-1, 0),  Unk_ov098_0229b790_Pt(-1, 1),  Unk_ov098_0229b790_Pt(-1, 1),
        Unk_ov098_0229b790_Pt(0, 1),
    };
    return &tbl[(a >> 12) & 15].x;
}

BOOL PocketMenu::findBuryHole() {
    u16 *pv = ((PlayerData *)PlayerData_GetCurrent())->getHeldItem();
    BOOL r = FALSE;
    u32 v = *pv;
    if (v >= 0x1369 && v <= 0x1369) {
        r = TRUE;
    }
    if (!r) {
        if (v >= 0x136a && v <= 0x136a) {
        } else {
            return FALSE;
        }
    }
    u8 *q = PlayerActor_GetActor(4);
    s32 px = 0, py = 0;
    void *grid = TownBlockMap_Get();
    FieldPos_ToUnit(&px, &py, q + 0x5c);
    s32 zero1 = 0, zero2 = 0;
    s16 base = *(s16 *)(q + 0x8e);
    for (s32 i = 0; i < 3; i++) {
        s32 *p = getDirOffset(base + sBuryHoleAngles[i]);
        s32 x = px + p[0];
        s32 y = py + p[1];
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *c = BlockMap_GetItemPtr(grid, hx, hy, x - (hx << 4), y - (hy << 4), zero1);
        if (c) {
            BOOL ok = zero2;
            if (*c >= 0xfc && *c <= 0xfd) {
                ok = TRUE;
            }
            if (ok) {
                digUnitX = x;
                digUnitY = y;
                return TRUE;
            }
        }
    }
    return FALSE;
}

void PocketMenu::actionBuryItem() {
    if (findBuryHole() == 0) {
        PocketMenu_ReturnToIdle(this);
        PocketMenu_ShowMessage(this, 0xd, 0xff, 1);
    } else {
        s32 a = PocketMenu_GetItem(this, actionTarget);
        s32 pair[2];
        pair[0] = digUnitX;
        pair[1] = digUnitY;
        fieldRequest = FieldAction_RequestTool(gCommManager->myAid, pair, 2, 0, a);
        if (fieldRequest == -1) {
            PocketMenu_ReturnToIdle(this);
            PocketMenu_ShowMessage(this, 0xd, 0xff, 1);
        } else {
            setMainState(0x2d);
        }
    }
}

void PocketMenu::mainAct2D() {
    switch (FieldAction_PollResult(fieldRequest)) {
    case 1:
        setMainState(0x2e);
        mainAct2E();
        goto done;
    case 2:
        PocketMenu_ReturnToIdle(this);
        PocketMenu_ShowMessage(this, 3, 0xff, 1);
    done:
        FieldAction_Release(fieldRequest);
        fieldRequest = -1;
    }
}

void PocketMenu::mainAct2E() {
    u16 v;
    s32 out[3];
    FieldPos_FromUnitCenter(out, digUnitX, digUnitY);
    v = PocketMenu_GetItem(this, actionTarget);
    if (PlayerActor_LocalRequestBuryItem(out, &v)) {
        PocketMenu_ClearSlotItem(this, actionTarget);
        setMainState(0x2f);
    }
}

void PocketMenu::actionPlantItem() {
    s32 a = PocketMenu_GetItem(this, actionTarget);
    if (findBuryHole()) {
        s32 pair[2];
        pair[0] = digUnitX;
        pair[1] = digUnitY;
        fieldRequest = FieldAction_RequestTool(gCommManager->myAid, pair, 2, 0, a);
        if (fieldRequest != -1) {
            setMainState(0x2d);
            return;
        }
    }
    fieldRequest = FieldAction_RequestAtFreeUnit(gCommManager->myAid, 0x18, a);
    if (fieldRequest == -1) {
        PocketMenu_ReturnToIdle(this);
        PocketMenu_ShowMessage(this, 8, 0xff, 0);
        Snd_PlaySe(0x73);
    } else {
        setMainState(0x29);
        setFlags(0x1000);
    }
}

void PocketMenu::actionThrowBottle() {
    sendBottleLetter();
    PlayerActor_LocalRequestThrowBottle();
    BottleThrow_SetTarget(&waterPos, PocketMenu_GetPlayerSlot(this));
    PocketMenu_ClearLetter(this, actionTarget);
    setMainState(0x33);
}

void PocketMenu::mainAct33() {
    if (BottleThrow_IsActive(PocketMenu_GetPlayerSlot(this)) == 1) {
        setMainState(0x34);
    }
}

void PocketMenu::mainAct34() {
    if (BottleThrow_IsActive(PocketMenu_GetPlayerSlot(this)) == 0) {
        PocketMenu_ReturnToIdle(this);
    }
}

void PocketMenu::sendBottleLetter() {
    sendReleasePacket(0, 5);
    s32 p = PocketMenu_GetLetter(this, actionTarget);
    CommManager *g = gCommManager;
    if (!g->isOnline() || g->myAid == 0) {
        u8 *const d = data_021e7f8c;
        Letter_Copy(TownExchange_GetLetter(d), (void *)p);
        ((TownExchangeRecord *)d)->resetCounter();
        ((TownExchangeRecord *)d)->setUnkFlag(0);
    } else {
        void *heap = gMenuHeap;
        u8 *buf = (u8 *)Heap_AllocTail(heap, 0xf5);
        buf[0] = 6;
        MI_CpuCopy8((void *)p, buf + 1, 0xf4);
        CommManager *g2 = gCommManager;
        g2->beginRecord();
        g2->writeRecord(buf, 0xf5);
        g2->endRecord(0x16, 0);
        Heap_Free(heap, buf);
    }
}

void PocketMenu::actionAct21() {
    setMainState(0x35);
    requestCameraPop();
    hideCursor();
}

void PocketMenu::mainAct35() {
    PocketMenu_GetItem(this, actionTarget);
    if (PlayerActor_LocalRequestReleaseCreature()) {
        setMainState(0x36);
    }
}

void PocketMenu::mainAct36() {
    if (PlayerActor_IsLocalReleaseWaiting()) {
        setMainState(0x37);
        errorMessage.showPromptOnly();
    }
}

void PocketMenu::mainAct37() {
    errorMessage.updatePromptBalloon();
    if (MenuCtrl_IsForceCloseDue() != 0 || Unk_ov098_0229b2d8_Both() || (gPad[1] & 1) || (gPad[1] & 2)) {
        setMainState(0x38);
        errorMessage.hidePromptBalloon();
    }
}

void PocketMenu::mainAct38() {
    errorMessage.updatePromptBalloon();
    if (PlayerActor_ConfirmReleaseCreature()) {
        setMainState(0x39);
    }
}

void PocketMenu::mainAct39() {
    errorMessage.updatePromptBalloon();
    if (PlayerActor_IsInAction(6, 4) == 0) {
        errorMessage.undim();
        PocketMenu_ReturnToIdle(this);
    }
}

