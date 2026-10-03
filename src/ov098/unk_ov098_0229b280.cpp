#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
s32 Snd_PlaySe(s32 a);
s32 PlayerActor_IsInAction(s32 a, s32 b);
u8 *func_02095204(s32 a);
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
BOOL func_02030d78(void *a, void *b, s32 c, s32 d, s32 e, s32 f);
void NetBuf_PackPair20(void *out, s32 a, s32 b);
u32 func_02063b8c(u32 a);
void *Heap_AllocTail(void *heap, u32 size);
void Heap_Free(void *heap, void *p);
void MI_CpuCopy8(void *src, void *dst, s32 n);
void *func_0208f158(void *p);
void func_02065e70(void *a, void *b);

extern void *data_021c6210;
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
void PlayerActor_LocalRequestAct89();
BOOL HeldInsect_GetStage(void *p);
void HeldInsect_Start(u32 a, void *p);
void HeldInsect_Release(void *p, s32 a);
void PlayerActor_LocalReleaseCatch(s32 a);
BOOL FishCatch_StartRelease(void *p, s32 a, void *q);
BOOL PlayerActor_LocalRequestBuryItem(void *a, void *b);
BOOL ChoiceIdList_Add(u8 *p, u32 a, u32 b);
}

struct CommManager {
    u8 pad_00[0x64];
    s32 unk_64;
    BOOL isOnline();
    void beginRecord();
    void writeRecord(u8 *buf, u32 n);
    void endRecord(u32 cmd, u32 arg);
};
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
struct Unk_0208f238 {
    void func_0208f168();
    void func_0208f1a8(u32 v);
};
struct Unk_02097ff4 {
    s32 func_02098044(u32 v);
};
struct PlayerData {
    u16 *getHeldItem();
};

// +0x27fc sub-object (0x108 bytes, opaque here)
class MenuErrorMessage {
public:
    void undim();
    void hidePromptBalloon();
    void updatePromptBalloon();
    void showPromptOnly();
    u8 unk_00[0x108];
};

// Vtable 0x022044e4 (declaration copied from src/ov002/unk_ov002_02200680.cpp; sub-objects opaque)
class MenuProc : public GameProc {
public:
    MenuProc();
    virtual ~MenuProc();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL vfunc_04();
    virtual void postCreate(s32 a);
    virtual BOOL preDelete();
    virtual BOOL vfunc_14(s32 a);
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL vfunc_20();
    virtual BOOL execWaitScreen();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    void setTransitionState(u8 v);
    void setMainState(u8 v);
    void setPhase(u8 v);

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ MenuProc *unk_6c;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

// Vtable 0x0229aea8, size 0x2d80
class PocketMenu : public MenuProc {
public:
    virtual ~PocketMenu();

    // this group (ov098_000)
    void mainAct39();
    void mainAct38();
    void mainAct37();
    void mainAct36();
    void mainAct35();
    void actionAct21();
    void sendBottleLetter();
    void mainAct34();
    void mainAct33();
    void actionThrowBottle();
    void actionPlantItem();
    void mainAct2E();
    void mainAct2D();
    void actionBuryItem();
    BOOL findBuryHole();
    s32 *getDirOffset(s16 a);
    void sendInsectReleasePacket(u8 a, u32 b);
    void mainAct2C();
    void actionReleaseInsect();
    void sendFishReleasePacket(u8 a);
    void sendReleasePacket(u8 a, u8 b);
    void mainAct30();
    void actionReleaseFish();
    BOOL findWaterNearPlayer(s32 flag);
    void addBottleOption();
    void addFieldOptions(u16 v);

    // other groups of this overlay (declarations only)
    s32 requestCameraPop();
    s32 hideCursor();
    s32 clearFlags(u32 a);
    s32 setFlags(u32 a);

    /* 0x094 */ u32 unk_94;
    /* 0x098 */ u32 unk_98;
    /* 0x09c */ u8 unk_9c[8];
    /* 0x0a4 */ s32 unk_a4;
    /* 0x0a8 */ s32 unk_a8;
    /* 0x0ac */ u16 unk_ac;
    /* 0x0ae */ u8 unk_ae[2];
    /* 0x0b0 */ u8 unk_b0;
    /* 0x0b1 */ u8 unk_b1[3];
    /* 0x0b4 */ u8 unk_b4;
    /* 0x0b5 */ u8 unk_b5;
    /* 0x0b6 */ u8 unk_b6;
    /* 0x0b7 */ u8 unk_b7;
    /* 0x0b8 */ u8 unk_b8;
    /* 0x0b9 */ u8 unk_b9;
    /* 0x0ba */ u8 unk_ba;
    /* 0x0bb */ u8 unk_bb;
    /* 0x0bc */ u8 unk_bc;
    /* 0x0bd */ u8 unk_bd[3];
    /* 0x0c0 */ u8 unk_c0;
    /* 0x0c1 */ u8 unk_c1[3];
    /* 0x0c4 */ s32 unk_c4;
    /* 0x0c8 */ u8 unk_c8[0x27f0 - 0xc8];
    /* 0x27f0 */ u8 unk_27f0[0xc];
    /* 0x27fc */ MenuErrorMessage unk_27fc;
    /* 0x2904 */ u8 unk_2904[0x2b84 - 0x2904];
    /* 0x2b84 */ s32 unk_2b84;
    /* 0x2b88 */ s32 unk_2b88;
    /* 0x2b8c */ s32 unk_2b8c;
    /* 0x2b90 */ s32 unk_2b90;
    /* 0x2b94 */ s32 unk_2b94;
    /* 0x2b98 */ u8 unk_2b98[0x2d80 - 0x2b98];
};

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
    if (((Unk_02097ff4 *)PlayerData_GetCurrent())->func_02098044(1) != 0) {
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
        ChoiceIdList_Add(unk_27f0, 0x1b, 0x21);
    }
    BOOL f2 = FALSE;
    u16 c = *(volatile u16 *)&l.a;
    u16 d = *(volatile u16 *)&l.a;
    if (d >= 0x12b0 && c <= 0x12e7) {
        f2 = TRUE;
    }
    if (f2) {
        ChoiceIdList_Add(unk_27f0, 8, 0x15);
    } else if (c >= 0x12e8 && c <= 0x131f) {
        if (findWaterNearPlayer(0)) {
            ChoiceIdList_Add(unk_27f0, 8, 0x18);
        }
    } else if ((c >= 0x137c && c <= 0x137c) || (c >= 0x1408 && c <= 0x1428) || (c >= 0x1471 && c <= 0x1491) ||
               (c >= 0x14fe && c <= 0x1517) || (c >= 0x151d && c <= 0x151e) || (c >= 0x1567 && c <= 0x1567)) {
        ChoiceIdList_Add(unk_27f0, 6, 0x17);
    } else if (findBuryHole()) {
        ChoiceIdList_Add(unk_27f0, 7, 0x16);
    }
}

void PocketMenu::addBottleOption() {
    clearFlags(8);
    if (!gCommManager->isOnline()) {
        if (findWaterNearPlayer(1)) {
            ChoiceIdList_Add(unk_27f0, 0x11, 0x19);
            setFlags(8);
        }
    }
}

BOOL PocketMenu::findWaterNearPlayer(s32 flag) {
    u8 *p = func_02095204(4);
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
    return func_02030d78(&unk_2b84, q, *(s16 *)(p + 0x8e), 0x7800, base, 0xc);
}

void PocketMenu::actionReleaseFish() {
    setMainState(0x30);
    mainAct30();
}

void PocketMenu::mainAct30() {
    void *r6 = PocketMenu_GetPlayerSlot(this);
    s32 a = PocketMenu_GetItem(this, unk_b6);
    if (FishCatch_StartRelease(r6, a, &unk_2b84)) {
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
        NetBuf_PackPair20(&pkt[7], unk_2b84, unk_2b8c);
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
        l.a = PocketMenu_GetItem(this, unk_b6);
        BOOL ok = FALSE;
        volatile u16 *pv = &l.a;
        u16 a = *pv;
        u16 b = *pv;
        if (b >= 0x12b0 && a <= 0x12e7) {
            ok = TRUE;
        }
        s32 r5 = ok ? a - 0x12b0 : -1;
        u32 t = (u8)func_02063b8c(0x3c);
        s16 x = (t - 0x1e) * 0xb6;
        x += *(s16 *)(func_02095204(4) + 0x8e);
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
    u8 *q = func_02095204(4);
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
                unk_2b90 = x;
                unk_2b94 = y;
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
        s32 a = PocketMenu_GetItem(this, unk_b6);
        s32 pair[2];
        pair[0] = unk_2b90;
        pair[1] = unk_2b94;
        unk_c4 = FieldAction_RequestTool(gCommManager->unk_64, pair, 2, 0, a);
        if (unk_c4 == -1) {
            PocketMenu_ReturnToIdle(this);
            PocketMenu_ShowMessage(this, 0xd, 0xff, 1);
        } else {
            setMainState(0x2d);
        }
    }
}

void PocketMenu::mainAct2D() {
    switch (FieldAction_PollResult(unk_c4)) {
    case 1:
        setMainState(0x2e);
        mainAct2E();
        goto done;
    case 2:
        PocketMenu_ReturnToIdle(this);
        PocketMenu_ShowMessage(this, 3, 0xff, 1);
    done:
        FieldAction_Release(unk_c4);
        unk_c4 = -1;
    }
}

void PocketMenu::mainAct2E() {
    u16 v;
    s32 out[3];
    FieldPos_FromUnitCenter(out, unk_2b90, unk_2b94);
    v = PocketMenu_GetItem(this, unk_b6);
    if (PlayerActor_LocalRequestBuryItem(out, &v)) {
        PocketMenu_ClearSlotItem(this, unk_b6);
        setMainState(0x2f);
    }
}

void PocketMenu::actionPlantItem() {
    s32 a = PocketMenu_GetItem(this, unk_b6);
    if (findBuryHole()) {
        s32 pair[2];
        pair[0] = unk_2b90;
        pair[1] = unk_2b94;
        unk_c4 = FieldAction_RequestTool(gCommManager->unk_64, pair, 2, 0, a);
        if (unk_c4 != -1) {
            setMainState(0x2d);
            return;
        }
    }
    unk_c4 = FieldAction_RequestAtFreeUnit(gCommManager->unk_64, 0x18, a);
    if (unk_c4 == -1) {
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
    PlayerActor_LocalRequestAct89();
    BottleThrow_SetTarget(&unk_2b84, PocketMenu_GetPlayerSlot(this));
    PocketMenu_ClearLetter(this, unk_b6);
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
    s32 p = PocketMenu_GetLetter(this, unk_b6);
    CommManager *g = gCommManager;
    if (!g->isOnline() || g->unk_64 == 0) {
        u8 *const d = data_021e7f8c;
        func_02065e70(func_0208f158(d), (void *)p);
        ((Unk_0208f238 *)d)->func_0208f168();
        ((Unk_0208f238 *)d)->func_0208f1a8(0);
    } else {
        void *heap = data_021c6210;
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
    PocketMenu_GetItem(this, unk_b6);
    if (PlayerActor_LocalRequestReleaseCreature()) {
        setMainState(0x36);
    }
}

void PocketMenu::mainAct36() {
    if (PlayerActor_IsLocalReleaseWaiting()) {
        setMainState(0x37);
        unk_27fc.showPromptOnly();
    }
}

void PocketMenu::mainAct37() {
    unk_27fc.updatePromptBalloon();
    if (MenuCtrl_IsForceCloseDue() != 0 || Unk_ov098_0229b2d8_Both() || (gPad[1] & 1) || (gPad[1] & 2)) {
        setMainState(0x38);
        unk_27fc.hidePromptBalloon();
    }
}

void PocketMenu::mainAct38() {
    unk_27fc.updatePromptBalloon();
    if (PlayerActor_ConfirmReleaseCreature()) {
        setMainState(0x39);
    }
}

void PocketMenu::mainAct39() {
    unk_27fc.updatePromptBalloon();
    if (PlayerActor_IsInAction(6, 4) == 0) {
        unk_27fc.undim();
        PocketMenu_ReturnToIdle(this);
    }
}

