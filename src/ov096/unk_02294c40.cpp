#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

class PocketMenu;
typedef void (PocketMenu::*Unk_ov096_0229aea8_Fn)();

// plain-function view of the scene object (the free functions in 0x02297b14..0x02298d34 take it)
struct Unk_ov096_02294c40 {
    u8 unk_00[0x8d];
    u8 mainState;
    u8 unk_8e[0x9c - 0x8e];
    s32 grabOffsetX;
    s32 grabOffsetY;
    s32 handX;
    s32 handY;
    u16 handItem;
    u16 auxItem;
    u8 handItemFlags;
    u8 handKind;
    u8 touchedTarget;
    u8 balloonTarget;
    u8 handSource;
    u8 cursorTarget;
    u8 actionTarget;
    u8 unk_b7;
    u8 unk_b8;
    u8 swapTarget;
    u8 returnState;
    u8 chosenAction;
    u8 unk_bc;
    u8 addresseePage;
    u8 addressee;
    u8 bellsPanelMode;
    u8 useOnPlayerKind;
    volatile u8 removeBlinkTimer;
    u8 optionsOpenDelay;
    u8 unk_c3;
    s32 fieldRequest;
    u8 unk_c8[0x358 - 0xc8];
    u8 s_358[0x23c0 - 0x358];
    u8 s_23c0[0x2480 - 0x23c0];
    u8 s_2480[0x2498 - 0x2480];
    u8 s_2498[0x24fc - 0x2498];
    u8 s_24fc[0x27f0 - 0x24fc];
    u8 s_27f0[0x27fc - 0x27f0];
    u8 s_27fc[0x2b14 - 0x27fc];
    u8 s_2b14[0x2c8c - 0x2b14];
    u8 s_2c8c[8];
};
typedef Unk_ov096_02294c40 S;

struct Unk_ov096_02297fb8_Msg {
    u8 a;
    u8 b;
};

struct CommManager {
    u8 pad_00[0x64];
    s32 unk_64;
    BOOL isOnline();
};

class UiWidget {
public:
    UiWidget();
    virtual ~UiWidget();
    virtual void draw() = 0;
    virtual void vfunc_0c() = 0;
    virtual void setOrigin(s32 a, s32 b);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class Unk_ov096_0229a94c_Virt {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
};

class Unk_ov096_02299eec_Obj {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

static inline BOOL IsZero(u8 v)
{
    return v == 0 ? TRUE : FALSE;
}

static inline BOOL Unk_ov096_0229590c_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

static inline BOOL Unk_ov096_02295a44_Range(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_ov096_022968bc_InRange(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 x = *p;
    u32 y = *p;
    if (y >= lo && x <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" {
void _ZN10PocketMenu18withdrawFromWalletEt(void *self, s32 a);
s32 _ZN10PocketMenu10clearFlagsEj(S *s, u32 a);
s32 _ZN10PocketMenu8setFlagsEj(S *s, u32 a);
s32 _ZN10PocketMenu9testFlagsEj(S *s, u32 a);
void _ZN10PocketMenu13wearHeldShirtEv(S *s);
void _ZN10PocketMenu16requestCameraPopEv(S *s);
void _ZN10PocketMenu17requestCameraPushEv(S *s);
void _ZN10PocketMenu18writeLetterOnPaperEv(S *s);
void _ZN10PocketMenu19func_ov096_022956a0Ei(S *s, u32 a);
void _ZN10PocketMenu14addItemOptionsEi(S *s, u32 a);
void _ZN10PocketMenu15runChosenActionEv(S *s);
void _ZN10PocketMenu19placeCursorOnTargetEv(S *s);
void _ZN10PocketMenu19func_ov096_0229673cEv(S *s);
void _ZN10PocketMenu10hideCursorEv(S *s);
void _ZN10PocketMenu19func_ov096_02296910Ev(S *s);
void _ZN10PocketMenu19func_ov096_02296964Ev(S *s);
s32 _ZN10PocketMenu10mergeItemsEPtiS0_h(S *s, void *a, u32 b, u16 *c, s32 d);
void _ZN10PocketMenu15depositToWalletEt(S *s, u32 a);
s32 _ZN10PocketMenu14getWalletBellsEv(S *s);
s32 _ZN10PocketMenu14depositHeldBagEv(S *s);
void _ZN10PocketMenu17cancelUseOnPlayerEv(S *s);
s32 _ZN10PocketMenu17isUseOnPlayerBusyEi(S *s, u32 a);
s32 _ZN10PocketMenu18requestUseOnPlayerEit(S *s, u32 a, u32 b);
u32 _ZN10PocketMenu12swapEquippedEit(S *s, u32 a, u32 b);
void _ZN10PocketMenu16startUseOnPlayerEv(S *s);
void _ZN10PocketMenu9clearHandEv(S *s);
s32 _ZN10PocketMenu12dropHeldItemEv(S *s);
void _ZN10PocketMenu10returnHandEj(S *s, u32 a);
void _ZN10PocketMenu11putHandBackEjj(S *s, u32 a, u32 b);
void _ZN10PocketMenu10pickUpItemEj(S *s, u32 a);
void _ZN10PocketMenu6pickUpEj(S *s, u32 a);
void _ZN10PocketMenu11setHandItemEjj(S *s, u32 a, u32 b);
void _ZN10PocketMenu17syncHandFromMoverEv(S *s);
void _ZN10PocketMenu18syncHandFromCursorEv(S *s);
void _ZN10PocketMenu17syncHandFromTouchEv(S *s);
void _ZN10PocketMenu18updateLabelBalloonEv(S *s);
void _ZN10PocketMenu15highlightTargetEj(S *s, u32 a);
void _ZN10PocketMenu15clearHighlightsEv(S *s);
void _ZN10PocketMenu12selectTargetEj(S *s, u32 a);
void _ZN10PocketMenu14clearSelectionEv(S *s);
extern CommManager *gCommManager;
extern u8 gFieldSceneKind;
extern u8 gU8None;
extern u8 gTouchHoldFrames;
extern u8 gTouchCurY;
extern u8 gTouchCurX;
extern u8 gTouchPressY;
extern u8 gTouchPressX;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
void Gfx2d_SetLayerPriority(s32 a, s32 b);
s32 Snd_PlaySe(s32 a);
void Camera_PopView();
void Camera_PushView();
BOOL Camera_IsViewPushed();
void FieldAction_Release(s32 a);
s32 FieldAction_PollDrop(s32 a);
s32 FieldAction_RequestDrop(s32 a, s32 b);
s32 FieldAction_PollResult(s32 a);
s32 Item_MakePaper(s32 a, s32 b);
u32 Item_GetPaperCount(u16 *p);
s32 Item_GetPaperIndex(u16 *p);
u32 Item_FindMoneyBagForAmount(u32 v, s32 a, s32 *out);
BOOL func_0204bab8(u16 *p);
BOOL Item_IsHoldable(u16 *p);
u32 Item_GetPrice(u16 *p);
s32 _ZN10LetterView8getStateEv(void *obj);
void _ZN10LetterView10setPresentEtj(void *a, u32 b, u32 c);
s32 _ZN10LetterView15getPresentFlagsEv(void *a);
s32 _ZN10LetterView10getPresentEv(void *obj);
void Letter_MarkRead();
s32 Letter_InitBottleDraft();
void Letter_InitDraft(void *p, u8 v);
void _ZN6LetterC1Ev(void *p);
void *_ZN6LetterD1Ev(void *p);
void *_ZN15MenuLabelButtonD1Ev(void *p);
void *_ZN14LetterRendererD1Ev(void *p);
void *_ZN16MenuErrorMessageD1Ev(void *p);
void *_ZN15PopupChoiceMenuD1Ev(void *p);
void *_ZN14MenuCursorBuf0D1Ev(void *p);
void *_ZN12CursorMotionD1Ev(void *p);
void *_ZN18TouchPromptBalloonD1Ev(void *p);
void *_ZN11InventoryBgD1Ev(void *p);
void *_ZN10LetterGridD1Ev(void *p);
void *_ZN17InventoryItemGridD1Ev(void *p);
void Letter_Copy(void *dst, void *src);
void _ZN14LetterRenderer4showEP16Unk_0206d1d4_SrcPvS2_i(void *p, void *q, s32 a, s32 b, s32 c);
void _ZN14LetterRenderer7releaseEv(void *p);
void _ZN14LetterRenderer8setLayerEi(void *p, s32 a);
void _ZN14LetterRendererC1Ev(void *p);
void MenuScreen_UploadClothPattern(void *a, void *b, void *c, void *d);
BOOL MenuCtrl_IsForceCloseDue();
void MenuCtrl_TickForceClose();
s32 MenuCtrl_SetHandBells(s32 a);
s32 MenuCtrl_GetSavedSlot();
s32 MenuCtrl_SetSavedSlot(u32 a);
void MenuCtrl_SetArg(void *p);
s32 MenuCtrl_GetArg();
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
s32 HudCountdown_StartWithSe(s32 a);
s32 CommSub_Send(u8 a, s32 b);
s32 _ZN11CommManager12isSlotActiveEi(void *obj, u32 v);
void _ZN12LabelBalloon6setPosEii(void *p, s32 x, s32 y);
s32 Hud_GetCountdown();
s32 _ZN12HudCountdown9isStoppedEv(s32 a);
BOOL _ZN10HandCursor10isAnimDoneEv(void *p);
s32 _ZN10HandCursor7getAnimEv(void *p);
void _ZN10HandCursor16disableObjWindowEv(void *p);
void _ZN10HandCursor15enableObjWindowEv(void *p);
void _ZN11LabelButton6setPosEii(void *p, s32 a, s32 b);
s32 PlayerActor_RequestHoldUpItem(u16 *p);
s32 PlayerActor_RequestChangeHeldItem(u16 *p);
s32 PlayerActor_RequestFaceChange();
s32 PlayerActor_RequestWearHat(u16 *p);
s32 PlayerActor_RequestWearFaceItem(u16 *p);
s32 PlayerActor_RequestWearShirt(u16 *p);
s32 PlayerActor_IsChangingHeldItem();
s32 PlayerActor_IsChangingClothes();
s32 PlayerActor_IsInAct05();
void *PlayerData_GetCurrent();
s32 PlayerInventory_SetWallet(void *p, s32 a, s32 b);
s32 _ZN15PlayerInventory13getTotalBellsEi(void *p, s32 a);
void _ZN12Unk_02097ff47setFlagEj(void *p, u32 a);
u16 *_ZN12Unk_02097ff413func_020983ccEv(void *p);
void _ZN10PlayerData11setFaceItemEPt(void *o, u16 *p);
u16 *_ZN10PlayerData11getFaceItemEv(void *o);
void _ZN10PlayerData6setHatEPt(void *o, u16 *p);
u16 *_ZN10PlayerData6getHatEv(void *o);
void _ZN10PlayerData8setShirtEPt(void *o, u16 *p);
u16 *_ZN10PlayerData8getShirtEv(void *o);
u16 *_ZN10PlayerData11getHeldItemEv(void *o);
void *_ZN10PlayerData12getInventoryEv(void *p);
s32 Pocket_FindEmpty();
s32 Inventory_FindEmptyLetter();
s32 Scene_InHouseRoom();
void _ZN14BgVramTaskPairC1Ev(void *p);
void _ZN10BgVramTask6cancelEv(void *p);
void *ProcBase_GetParent(void *p);
void ProcBase_RequestDelete(void *p);
s32 _ZN18TouchPromptBalloon15isOpenOrOpeningEv(void *p);
void _ZN18TouchPromptBalloon17setAutoCloseTimerEh(void *p, s32 a);
void _ZN18TouchPromptBalloon19func_ov002_022006acEi(void *p, s32 a);
void _ZN18TouchPromptBalloon16cancelQueuedOpenEv(void *p);
void _ZN18TouchPromptBalloon9queueOpenEv(void *p);
void _ZN18TouchPromptBalloon10commitOpenEv(void *p);
void _ZN18TouchPromptBalloon4hideEi(void *self, s32 a);
s32 _ZN18TouchPromptBalloon12updatePromptEv(void *p);
void _ZN18TouchPromptBalloonC1Ev(void *p);
void _ZN8MenuProc16restartKeyRepeatEv(void *p);
BOOL MenuKeys_HasRight(void *pad);
BOOL MenuKeys_HasLeft(void *pad);
BOOL MenuKeys_HasDown(void *pad);
BOOL MenuKeys_HasUp(void *pad);
s32 _ZN19PopupChoiceMenuBody14applyAddresseeEPvj(void *self, void *p, u32 v);
s32 _ZN19PopupChoiceMenuBody16getAddresseeKindEj(void *p, u32 a);
s32 _ZN19PopupChoiceMenuBody13pickAddresseeEjj(void *p, u32 a, u32 b);
u32 _ZN19PopupChoiceMenuBody12getPageCountEv(void *p);
s32 _ZN19PopupChoiceMenuBody10hitTestRowEii(void *p, u32 a, u32 b);
s32 _ZN19PopupChoiceMenuBody16hitTestRowOrLastEii(void *p, u32 a, u32 b);
void _ZN19PopupChoiceMenuBody14setRowsFromIdsEP17PopupChoiceIdListi(void *self, void *r, u32 f);
s32 ChoiceIdList_Count(void *p);
void ChoiceIdList_Clear(void *p, u32 v);
s32 ChoiceIdList_Add(void *p, u32 a, u32 b);
s32 _ZN19PopupChoiceMenuBody8isClosedEv(void *p);
s32 _ZN19PopupChoiceMenuBody6isOpenEv(void *p);
void _ZN19PopupChoiceMenuBody18buildAddresseeListEv(void *p);
s32 PopupChoice_MoveCursor(void *p, s32 a, void *b, u32 c);
s32 PopupChoice_TickDecideDelay(void *p);
void PopupChoice_DecideAddressee(void *p, s32 a);
u8 PopupChoice_DecideCancel(void *self, s32 x);
void PopupChoice_DecideRow(void *p, s32 a, s32 b);
void PopupChoice_ForceClose(void *p);
void PopupChoice_Draw(void *p);
void PopupChoice_Update(void *p);
void PopupChoice_Close(void *self, s32 x);
void PopupChoice_Open(void *self, s32 x);
void PopupChoice_OpenAddresseePage(void *self, u32 a, s32 x);
void _ZN15PopupChoiceMenu17placeAboveBalloonEP12LabelBalloon(void *self, void *p, s32 c);
void _ZN15PopupChoiceMenu10placeAboveEii(void *self, s32 a, s32 b);
void _ZN15PopupChoiceMenu14placeNearPointEii(void *self, s32 a, s32 c);
void _ZN15PopupChoiceMenu4initEiiPKc(void *p, s32 a, s32 b, s32 c);
void _ZN15PopupChoiceMenuC1Ev(void *p);
void _ZN14MenuCursorBuf0C1Ev(void *p);
void _ZN12CursorMotion11startLinearEiii(void *p, s32 a, s32 b, u32 c);
void _ZN12CursorMotion6setPosEii(void *p, s32 a, s32 b);
s32 _ZN12CursorMotion4getYEv(void *p);
s32 _ZN12CursorMotion4getXEv(void *p);
s32 _ZN12CursorMotion6updateEv(void *p);
void _ZN12CursorMotion5resetEv(void *p);
void _ZN12CursorMotionC1Ev(void *p);
void _ZN14MenuCursorBase11drawWrappedEv(void *p);
void _ZN14MenuCursorBase10getScreenXEv(void *p);
s32 _ZN14MenuCursorBase15getFrameScreenYEv(void *p);
s32 _ZN14MenuCursorBase15getFrameScreenXEv(void *p);
BOOL _ZN14MenuCursorBase8isMovingEv(void *p);
BOOL _ZN14MenuCursorBase19func_ov002_022028fcEv(void *p);
BOOL _ZN14MenuCursorBase19func_ov002_02202928Ev(void *p);
void _ZN14MenuCursorBase6warpToEii(void *p, s32 a, s32 b);
void _ZN10MenuCursor12setPosePressEv(void *p);
void _ZN10MenuCursor14switchToAnim0DEv(void *self);
void _ZN10MenuCursor14switchToAnim01Ev(void *self);
void _ZN10MenuCursor16setAnimIfChangedEi(void *p, s32 a);
void _ZN15MenuLabelButtonC1Ev(void *p);
s32 _ZN15MenuLabelButton9isTouchedEv(void *p);
void _ZN15MenuLabelButton11showDefaultEi(void *p, s32 a);
s32 _ZN15MenuLabelButton8stepAnimEv(void *p);
s32 _ZN15MenuLabelButton10getAnchorYEi(void *p, s32 a);
s32 _ZN15MenuLabelButton10getAnchorXEi(void *p, s32 a);
s32 _ZN16MenuErrorMessage6updateEi(void *p, s32 a);
void _ZN16MenuErrorMessage4openEPhij(void *p, void *q, u32 a, u32 b);
void _ZN16MenuErrorMessageC1Ev(void *p);
s32 _ZN10MenuTabBar12isJustOpenedEv();
s32 MenuTabBar_TabFromX();
s32 MenuTabBar_NextTab(s32 a);
s32 MenuTabBar_PrevTab(s32 a);
s32 MenuTabBar_GetTabX(s32 a);
void _ZN10MenuTabBar8hideTabsEv(void *p);
void _ZN10MenuTabBar8showTabsEv(void *p);
s32 MenuTabBar_HitTestTouch();
void _ZN10MenuTabBar15onTabMenuClosedEv();
void _ZN10MenuTabBar9selectTabEj(void *p, u32 idx);
void Inventory_PlayPickUpSe();
void Inventory_PlayTouchSe();
void Inventory_PlayPutDownSe();
BOOL func_ov094_02292414(u32 a);
s32 InvItem_IsDeliveryItem(s32 a);
void InventoryBg_ResetHighlight(void *p);
void InventoryBg_SetHighlight(void *p, s32 a);
BOOL InvItem_IsTurnipFishOrInsect(u32 a);
void InventoryBg_SetBellsPanelMode(void *p, u32 a);
void InventoryBg_StartBellRoll(void *o, u32 v);
void InventoryBg_StopBlink(void *p);
s32 InventoryBg_UpdateBlink(void *p);
void InventoryBg_StartBlink(void *p, s32 a);
void InventoryBg_DrawSprite(void *p, s32 a);
void InventoryBg_LoadPictureForHeldItem(void *p);
void InventoryBg_Exit(void *p);
void InventoryBg_Update(void *p);
void InventoryBg_PreUpdate(void *p);
void InventoryBg_LoadObjGraphics(void *p);
void InventoryBg_LoadGraphics(void *p);
void InventoryBg_LoadBg(void *p, s32 a);
void InventoryBg_Init(void *p, s32 a);
void _ZN11InventoryBgC1Ev(void *p);
s32 InventoryItemGrid_UpdatePresentAnim(void *p);
s32 InventoryItemGrid_StartPresentAnim(void *p, u16 a, u8 b);
s32 InventoryItemGrid_IsSlotEmpty(void *p, u32 a);
void InventoryItemGrid_DrawHeldItem(void *p, s32 a, s32 b);
void InventoryItemGrid_DrawExtraMarks(void *p, s32 a, s32 b);
void InventoryItemGrid_DrawPockets(void *p, s32 a, s32 b);
s32 InventoryItemGrid_IsSlotDisabled(void *p, u32 a);
void InventoryItemGrid_SetHeldItem(void *p, u32 a, u32 b);
void InventoryItemGrid_RefreshSlot(void *p, u32 a);
void InventoryItemGrid_SetSlotItem(void *p, u32 a, u32 b, u32 c);
s32 InventoryItemGrid_ClearSlot(void *p, s32 a);
s32 InventoryItemGrid_GetSlotFlags(void *p, u32 a);
s32 InventoryItemGrid_GetSlotItem(void *p, u32 a);
void InventoryItemGrid_MarkSlot(void *p, s32 a);
void InventoryItemGrid_ClearMarks(void *p);
void InventoryItemGrid_SetCursorSlot(void *p, s32 a);
void InventoryItemGrid_ClearCursorSlot(void *p);
s32 InventoryItemGrid_GetSlotY(void *p, u32 a);
s32 InventoryItemGrid_GetSlotX(void *p, u32 a);
void InventoryItemGrid_ShowSlotName(void *p, void *q, s32 a);
void InventoryItemGrid_LoadPockets(void *p);
s32 InventoryItemGrid_HitTestSlot21(void *p, s32 x, s32 y);
s32 InventoryItemGrid_FindPocketSlotAt(void *p);
void InventoryItemGrid_Exit(void *p);
void InventoryItemGrid_PreUpdate(void *p);
void InventoryItemGrid_Init(void *p, s32 a);
void _ZN17InventoryItemGridC1Ev(void *p);
s32 LetterGrid_UpdatePopAnim(void *p);
s32 LetterGrid_StartPopAnim(void *p);
void LetterGrid_LoadPocketLetters(void *p);
s32 LetterGrid_IsSlotEmpty(void *p, u32 a);
s32 LetterGrid_GetSlotY(void *p, u32 a);
s32 LetterGrid_GetSlotX(void *p, u32 a);
void _ZN10LetterGrid14drawHeldLetterEiiPv(void *p, s32 a, s32 b, void *c);
void _ZN10LetterGrid17drawPocketLettersEii(void *p, s32 a, s32 b);
s32 _ZN10LetterGrid13isHighlightedEi(void *p, u32 a);
s32 _ZN10LetterGrid11clearLetterEi(void *p, s32 a);
void _ZN10LetterGrid19func_ov094_02294318Eii(void *p, u32 a, void *q);
void *_ZN10LetterGrid9getLetterEi(void *p, s32 a);
void _ZN10LetterGrid8markSlotEi(void *p, s32 a);
void _ZN10LetterGrid10clearMarksEv(void *p);
void _ZN10LetterGrid13setCursorSlotEj(void *p, s32 a);
void _ZN10LetterGrid15clearCursorSlotEv(void *p);
void _ZN10LetterGrid14showLetterNameEPvi(void *p, void *q, s32 a);
s32 _ZN10LetterGrid18findPocketLetterAtEii(void *p);
void _ZN10LetterGrid16updateCursorLiftEv(void *p);
void _ZN10LetterGrid4initEi(void *p, s32 a);
void _ZN10LetterGridC1Ev(void *p);
void *PocketMenu_GetLetter(S *s, u32 id);
s32 PocketMenu_GetItemFlags(S *s, u32 id);
u32 PocketMenu_GetItem(S *s, u32 id);
s32 PocketMenu_IsSlotEmpty(S *s, u32 id);
s32 func_ov096_02297c68(S *s, u32 id);
s32 PocketMenu_GetTargetY(S *s, u32 id);
s32 PocketMenu_GetTargetX(S *s, u32 id);
s32 PocketMenu_HitWalletAmount(S *s, s32 x, s32 y);
BOOL PocketMenu_HitWalletIcon(S *s, s32 x, s32 y);
BOOL PocketMenu_HitPlayer(S *s, s32 x, s32 y);
s32 PocketMenu_HitSpecialTarget(S *s, s32 x, s32 y);
BOOL PocketMenu_HitShirtBox(S *s, s32 x, s32 y);
void PocketMenu_SetLetter(S *s, u32 id, void *p);
s32 PocketMenu_DropLetterAt(S *s, u32 id);
u32 PocketMenu_HitLetter(S *s, s32 a, s32 b, s32 c);
u32 PocketMenu_LetterIndexToTarget(S *s, u32 id);
u32 PocketMenu_TargetToLetterIndex(S *s, u32 id);
u32 PocketMenu_FindEmptyPocket(S *s);
void PocketMenu_ClearLetter(S *s, u32 id);
void PocketMenu_ClearSlotItem(S *s, u32 id);
void PocketMenu_SetSlotItem(S *s, u32 id, u32 a, u32 b);
s32 PocketMenu_DropItemAt(S *s, u32 id);
u32 PocketMenu_HitPocket(S *s, s32 a, s32 b, s32 c);
u32 PocketMenu_PocketIndexToTarget(S *s, u32 id);
u32 PocketMenu_TargetToGridIndex(S *s, u32 id);
void PocketMenu_MoveCursorToTab(S *s);
u32 PocketMenu_IsSpecialTarget(S *s, u32 id);
u32 PocketMenu_IsTabTarget(S *s, u32 id);
u32 PocketMenu_IsLetterTarget(S *s, u32 id);
u32 PocketMenu_IsPocketTarget(S *s, u32 id);
void PocketMenu_CancelVramTasks(S *s);
void func_ov096_02298320(S *s);
void PocketMenu_ShowMessage(S *s, u32 a, u32 b, u32 c);
void PocketMenu_FlyItemTo(S *s, u32 a, u32 b, u32 c, u8 d);
void PocketMenu_FlyHandTo(S *s, u32 a, u32 b);
void func_ov096_022985b8(S *s);
void func_ov096_0229862c(S *s);
void func_ov096_02298644(S *s);
void PocketMenu_ReturnToIdle(S *s);
void PocketMenu_EnterButtonIdle(S *s);
void PocketMenu_EnterTouchIdle(S *s);
void _ZN10PocketMenu9mainAct2FEv(S *s);
void _ZN10PocketMenu9mainAct27Ev(S *s);
s32 func_ov096_02298c4c(S *s);
void _ZN10PocketMenu9mainAct1CEv(S *s);
s32 PocketMenu_CanEditRoom(void *self);
s32 PocketMenu_RequestDropIndoor(void *self, s32 a);
void PocketMenu_AddRoomItemOptions(void *scene, s32 a);
void _ZN10PocketMenu15addBottleOptionEv(void *scene);
void _ZN10PocketMenu15addFieldOptionsEt(void *scene, s32 a);
s32 PocketMenu_CanDropOutdoor(void *self, s32 a);
void PocketMenu_StartButtonDrag(S *s, u32 a);
void PocketMenu_StartTouchDrag(S *s, u32 a);
void PocketMenu_BeginTouchOnTarget(S *s, u32 a);
void func_ov096_0229860c(S *s);
void _ZN10PocketMenu9mainAct29Ev(S *s);
void _ZN10PocketMenu9mainAct28Ev(S *s);
void _ZN10PocketMenu9mainAct32Ev(S *s);
void _ZN10PocketMenu9mainAct31Ev(S *s);
void _ZN10PocketMenu9mainAct2BEv(S *s);
void _ZN10PocketMenu9mainAct2AEv(S *s);
void _ZN10PocketMenu9mainAct26Ev(S *s);
void _ZN10PocketMenu9mainAct25Ev(S *s);
void _ZN10PocketMenu9mainAct24Ev(S *s);
void _ZN10PocketMenu9mainAct23Ev(S *s);
void _ZN10PocketMenu9mainAct22Ev(S *s);
void _ZN10PocketMenu9mainAct21Ev(S *s);
void _ZN10PocketMenu9mainAct20Ev(S *s);
void _ZN10PocketMenu9mainAct1FEv(S *s);
void _ZN10PocketMenu9mainAct1EEv(S *s);
void _ZN10PocketMenu9mainAct1DEv(S *s);
void _ZN10PocketMenu9mainAct1BEv(S *s);
s32 _ZN10HandCursor12setAnimAtEndEi(void *self, s32);
void _ZN11LabelButton8setStateEi(void *self, s32);
u32 _ZN19PopupChoiceMenuBody11getRowCountEv(void *self);
s32 _ZN19PopupChoiceMenuBody7getRowYEi(void *self, s32);
s32 _ZN19PopupChoiceMenuBody7getRowXEv(void *self);
void _ZN14MenuCursorBase10moveToEaseEiiii(void *self, s32, s32, s32, s32);
void _ZN14MenuCursorBase12moveToLinearEiii(void *self, s32, s32, s32);
void _ZN14MenuCursorBase11setPoseIdleEv(void *self);
void _ZN14MenuCursorBase14setPoseReleaseEv(void *self);
void _ZN8MenuProc18setTransitionStateEh(void *self, u8);
void _ZN8MenuProc12setMainStateEh(void *self, u8);
void _ZN8MenuProc8setPhaseEh(void *self, u8);
}

static inline BOOL Unk_ov096_02299778_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) return TRUE;
    return FALSE;
}

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

    void applySlideOffset(s32 a, s32 b, s32 c);
    void beginSubSlideOut(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    BOOL stepSlideOut(s32 a);
    BOOL stepSlideIn(s32 a);
    s32 getSlideOffsetY();
    s32 takeRepeatedKeys();
    BOOL checkSwitchToTouch();
    BOOL checkSwitchToButtons(s32 a);
    void setTransitionState(u8 v);
    void setMainState(u8 v);
    void setPhase(u8 v);

    /* 0x50 */ u8 unk_50[0x14];
    /* 0x64 */ u32 openMenuPrev;
    /* 0x68 */ u32 openMenuNext;
    /* 0x6c */ MenuProc *openMenuOwner;
    /* 0x70 */ u8 unk_70[0x1c];
    /* 0x8c */ u8 transitionState;
    /* 0x8d */ u8 mainState;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 phase;
    /* 0x90 */ u8 menuId;
};

class InventoryItemGrid { public: ~InventoryItemGrid(); u8 pad[0xa60]; };
class LetterGrid { public: ~LetterGrid(); u8 pad[0x28]; };
class InventoryBg { public: ~InventoryBg(); u8 pad[0x160]; };
class TouchPromptBalloon { public: ~TouchPromptBalloon(); u8 pad[0xc0]; };
class CursorMotion { public: ~CursorMotion(); u8 pad[0x18]; };
class MenuCursorBuf0 { public: ~MenuCursorBuf0(); u8 pad[0x64]; };
class PopupChoiceMenu { public: ~PopupChoiceMenu(); u8 pad[0x2f4]; };
class MenuErrorMessage { public: ~MenuErrorMessage(); u8 pad[0x108]; };
class LetterRenderer { public: ~LetterRenderer(); u8 pad[0x210]; };
class MenuLabelButton { public: ~MenuLabelButton(); u8 pad[0x70]; };
class Letter { public: ~Letter(); u8 pad[0x18]; };

// Vtable 0x0229aea8, size 0x2d80
class PocketMenu : public MenuProc {
public:
    inline PocketMenu();

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    void clearFlags(u32);
    void setFlags(u32);
    BOOL testFlags(u32);
    BOOL isHoldingShirt();
    void wearHeldShirt();
    void updateCameraView();
    void requestCameraPop();
    void requestCameraPush();
    void writeLetterOnPaper();
    void * getActionLetter();
    void closeLetterViewAndMenu();
    void closeLetterView();
    void actionReadLetter();
    BOOL moveCursorByPad(void *, s32);
    void moveCursorInPlayerArea(void *, s32);
    void moveCursorInTabs(void *, s32);
    void moveCursorInLetters(void *, s32);
    void moveCursorInPockets(void *, s32);
    void func_ov096_022956a0(s32);
    void func_ov096_022956d0();
    void openConfirmList();
    void openTargetOptions(u32, s32);
    void addTakeOffOptions();
    void addTakeOutBellsOptions();
    void addLetterOptions(s32);
    void addItemOptions(s32);
    s32 playActionSe();
    void func_ov096_02295c2c();
    void cancelOptions();
    void showOptionList(s32);
    void runChosenAction();
    void actionStartCountdown();
    void actionStopCountdown();
    void setCountdown(s32);
    void actionOpenCountdownMenu();
    void actionAct1A();
    void actionAct0A();
    void actionAct09();
    void actionUnwrapItem();
    void actionTakeOff();
    void actionTakeOutBells();
    void actionAct08();
    void actionWriteLetter();
    BOOL allocLetterSlot();
    void actionTakeAttachment();
    void actionEditLetter();
    void actionAct04();
    void actionDropItem();
    s32 requestDropItem(s32);
    BOOL canDropItem(s32);
    void func_ov096_022965f0(u32);
    void func_ov096_02296638(u32);
    void actionAct00();
    void func_ov096_022966a8();
    void func_ov096_022966c8();
    void func_ov096_022966e8();
    void placeCursorOnTarget();
    void func_ov096_0229673c();
    void func_ov096_022967a0();
    void func_ov096_02296804();
    void func_ov096_02296854();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void func_ov096_02296910();
    void func_ov096_02296964();
    s32 mergeItems(u16 *, s32, u16 *, u8);
    u32 depositToWallet(u16);
    void withdrawFromWallet(u16);
    void setWalletBells(s32);
    s32 getWalletBells();
    BOOL isHoldingMoneyBag(s32);
    BOOL depositHeldBag();
    void updateHandPrice();
    void cancelUseOnPlayer();
    BOOL isUseOnPlayerBusy(s32);
    BOOL requestUseOnPlayer(s32, u16);
    u16 swapEquipped(s32, u16);
    u16 getEquipped(s32);
    s32 getUseOnPlayerKind();
    void startUseOnPlayer();
    void clearHand();
    BOOL canDropHeldItem();
    s32 dropHeldItem();
    s32 placeHandAt(u32);
    void swapHandWith(u32);
    void returnHand(u32);
    void putHandBack(u32, u32);
    void pickUpItem(u32);
    void pickUp(u32);
    void pickUpLetter(u32);
    void pickUpItemFrom(u32);
    void setHandItem(u32, u32);
    void syncHandFromMover();
    void syncHandFromCursor();
    void syncHandFromTouch();
    void drawHand();
    void updateLabelBalloon();
    void positionLabelBalloon();
    BOOL isTouchHeldFor(s32);
    BOOL hasTouchMoved();
    void highlightTarget(u32);
    void clearHighlights();
    void selectTarget(u32);
    void clearSelection();
    s32 canNavToWallet(u32);
    s32 canNavToDropArea(u32);
    s32 canNavToPlayer(u32);
    s32 checkPlaceHand(u32);
    s32 checkSwap(u32, u32);
    s32 checkPlace(u32, u32, u32);
    void mainAct1A();
    void mainAct19();
    void mainAct18();
    void mainAct17();
    void mainAct16();
    void mainAct15();
    void mainAct14();
    void mainAct13();
    void mainAct12();
    void mainAct11();
    void mainAct10();
    void mainAct0F();
    void mainAct0E();
    void mainAct0D();
    void mainAct0C();
    void mainAct0B();
    void mainAct0A();
    void mainAct09();
    void mainAct08();
    void mainAct07();
    void mainAct06();
    void mainAct05();
    void mainAct04();
    void mainAct03();
    void mainAct02();
    void mainAct01();
    void mainAct00();
    void loadObjGraphics();
    void setupBgLayer();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initPocketMenu();
    void hideTabBar();
    void stateWaitCloseLetterView();
    void stateCloseLetterView();
    void stateWaitLetterView();
    void stateOpenLetterView();
    void stateWaitSlideOut();
    void stateSlideOut();
    void stateWaitSlideIn();
    void stateSlideIn();
    void stateLoadObj();
    void stateLoadBgChars();
    void stateLoadBg();
    BOOL requestTab(s32);
    BOOL handleTabSwitch();
    void runMainState();
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
    void findBuryHole();
    void getDirOffset(s16);
    void sendInsectReleasePacket(u8, u32);
    void mainAct2C();
    void actionReleaseInsect();
    void sendFishReleasePacket(u8);
    void sendReleasePacket(u8, u8);
    void mainAct30();
    void actionReleaseFish();
    void findWaterNearPlayer(s32);
    void addBottleOption();
    void addFieldOptions(u16);
    void actionUseWallpaper();
    void actionUseCarpet();
    void mainAct29();
    void mainAct28();
    void mainAct32();
    void mainAct31();
    void mainAct2F();
    void mainAct2B();
    void mainAct2A();
    void mainAct27();
    void mainAct26();
    void mainAct25();
    void mainAct24();
    void mainAct23();
    void mainAct22();
    void mainAct21();
    void mainAct20();
    void mainAct1F();
    void mainAct1E();
    void mainAct1D();
    void mainAct1C();
    void mainAct1B();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ u32 stateFlags;
    /* 0x098 */ u32 slideY;
    /* 0x09c */ s32 grabOffsetX;
    /* 0x0a0 */ s32 grabOffsetY;
    /* 0x0a4 */ s32 handX;
    /* 0x0a8 */ s32 handY;
    /* 0x0ac */ u16 handItem;
    /* 0x0ae */ u16 auxItem;
    /* 0x0b0 */ u8 handItemFlags;
    /* 0x0b1 */ u8 handKind;
    /* 0x0b2 */ u8 touchedTarget;
    /* 0x0b3 */ u8 balloonTarget;
    /* 0x0b4 */ u8 handSource;
    /* 0x0b5 */ u8 cursorTarget;
    /* 0x0b6 */ u8 actionTarget;
    /* 0x0b7 */ u8 placeTarget;
    /* 0x0b8 */ u8 paperTarget;
    /* 0x0b9 */ u8 swapTarget;
    /* 0x0ba */ u8 returnState;
    /* 0x0bb */ u8 chosenAction;
    /* 0x0bc */ u8 popupRow;
    /* 0x0bd */ u8 addresseePage;
    /* 0x0be */ u8 addressee;
    /* 0x0bf */ u8 bellsPanelMode;
    /* 0x0c0 */ u8 useOnPlayerKind;
    /* 0x0c1 */ u8 removeBlinkTimer;
    /* 0x0c2 */ volatile u8 optionsOpenDelay;
    /* 0x0c3 */ u8 unk_c3;
    /* 0x0c4 */ s32 fieldRequest;
    /* 0x0c8 */ u8 unk_c8[0x20];
    /* 0x0e8 */ u8 unk_e8[0x200];
    /* 0x2e8 */ u8 unk_2e8[0x38];
    /* 0x320 */ u8 unk_320[0x38];
    /* 0x358 */ InventoryItemGrid m_358;
    /* 0xdb8 */ LetterGrid m_db8;
    /* 0xde0 */ InventoryBg m_de0;
    /* 0xf40 */ u8 unk_f40[0x1480];
    /* 0x23c0 */ TouchPromptBalloon m_23c0;
    /* 0x2480 */ CursorMotion m_2480;
    /* 0x2498 */ MenuCursorBuf0 m_2498;
    /* 0x24fc */ PopupChoiceMenu m_24fc;
    /* 0x27f0 */ u8 unk_27f0[0xc];
    /* 0x27fc */ MenuErrorMessage m_27fc;
    /* 0x2904 */ LetterRenderer m_2904;
    /* 0x2b14 */ MenuLabelButton m_2b14;
    /* 0x2b84 */ u8 unk_2b84[0xc];
    /* 0x2b90 */ u32 digUnitX;
    /* 0x2b94 */ u32 digUnitY;
    /* 0x2b98 */ Letter m_2b98;
    /* 0x2bb0 */ u8 unk_2bb0[0xdc];
    /* 0x2c8c */ Letter m_2c8c;
    /* 0x2ca4 */ u8 unk_2ca4[0xdc];
};

#define unk_358 ((u8 *)&m_358)
#define unk_db8 ((u8 *)&m_db8)
#define unk_de0 ((u8 *)&m_de0)
#define unk_23c0 ((u8 *)&m_23c0)
#define unk_2480 ((u8 *)&m_2480)
#define unk_2498 ((u8 *)&m_2498)
#define unk_24fc ((u8 *)&m_24fc)
#define unk_2904 ((u8 *)&m_2904)
#define unk_2b14 ((u8 *)&m_2b14)
#define unk_2b98 ((u8 *)&m_2b98)
#define unk_2c8c ((u8 *)&m_2c8c)
#define unk_27fc ((u8 *)&m_27fc)

struct Unk_ov096_SceneEntry {
    PocketMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" PocketMenu *PocketMenu_Create();
extern "C" Unk_ov096_SceneEntry sPocketMenuProfile = {PocketMenu_Create, 0x91, 0x95};

static inline BOOL Unk_ov096_0229619c_Range(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 b = *p;
    u32 a = *p;
    if (a >= lo && b <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov096_0229652c_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

static inline s32 Unk_ov096_022969bc_Idx(u32 v) {
    if (v >= 0x1531 && v <= 0x153a) {
        return v - 0x1531;
    }
    return -1;
}

static inline u16 Unk_ov096_022969bc_Ch(s32 n) {
    if ((u32)n < 10) {
        return n + 0x1531;
    }
    return 0x1531;
}

// ===== unit 022971dc =====
static inline BOOL Unk_ov096_022979f0_InRange(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 x = *p;
    u32 y = *p;
    if (y >= lo && x <= hi) {
        r = TRUE;
    }
    return r;
}

inline PocketMenu::PocketMenu() {
    u8 *e = unk_2e8;
    do {
        _ZN14BgVramTaskPairC1Ev(e);
        e += 0x38;
    } while (e != unk_358);
    _ZN17InventoryItemGridC1Ev(unk_358);
    _ZN10LetterGridC1Ev(unk_db8);
    _ZN11InventoryBgC1Ev(unk_de0);
    _ZN18TouchPromptBalloonC1Ev(unk_23c0);
    _ZN12CursorMotionC1Ev(unk_2480);
    _ZN14MenuCursorBuf0C1Ev(unk_2498);
    _ZN15PopupChoiceMenuC1Ev(unk_24fc);
    _ZN16MenuErrorMessageC1Ev(unk_27fc);
    _ZN14LetterRendererC1Ev(unk_2904);
    _ZN15MenuLabelButtonC1Ev(unk_2b14);
    digUnitX = 0;
    digUnitY = 0;
    _ZN6LetterC1Ev(unk_2b98);
    _ZN6LetterC1Ev(unk_2c8c);
}

extern "C" PocketMenu *PocketMenu_Create() {
    return new PocketMenu;
}

BOOL PocketMenu::vfunc_00() {
    initPocketMenu();
    setTransitionState(0);
    setPhase(1);
    return TRUE;
}

BOOL PocketMenu::vfunc_0c() {
    ProcBase_GetParent(this);
    _ZN10MenuTabBar15onTabMenuClosedEv();
    releaseResources();
    MenuCtrl_SetHandBells(0);
    return TRUE;
}

// ===== unit 0229a94c =====
BOOL PocketMenu::onDraw() {
    PopupChoice_Draw(unk_24fc);
    if (!testFlags(1)) {
        return TRUE;
    }
    ((Unk_ov096_0229a94c_Virt *)unk_23c0)->vfunc_08();
    if (MenuCtrl_IsButtons()) {
        _ZN14MenuCursorBase11drawWrappedEv(unk_2498);
    }
    drawHand();
    if (testFlags(2)) {
        InventoryItemGrid_DrawPockets(unk_358, 0, slideY);
        InventoryItemGrid_DrawExtraMarks(unk_358, 0, slideY);
        _ZN10LetterGrid17drawPocketLettersEii(unk_db8, 0, slideY);
        InventoryBg_DrawSprite(unk_de0, slideY);
    }
    if (testFlags(0x100)) {
        _ZN11LabelButton6setPosEii(unk_2b14, 0, getSlideOffsetY());
        ((Unk_ov096_0229a94c_Virt *)unk_2b14)->vfunc_08();
    }
    return TRUE;
}

BOOL PocketMenu::execTransition() {
    static Unk_ov096_0229aea8_Fn tbl[11] = {
        &PocketMenu::stateLoadBg,
        &PocketMenu::stateLoadBgChars,
        &PocketMenu::stateLoadObj,
        &PocketMenu::stateSlideIn,
        &PocketMenu::stateWaitSlideIn,
        &PocketMenu::stateSlideOut,
        &PocketMenu::stateWaitSlideOut,
        &PocketMenu::stateOpenLetterView,
        &PocketMenu::stateWaitLetterView,
        &PocketMenu::stateCloseLetterView,
        &PocketMenu::stateWaitCloseLetterView};
    preStateUpdate();
    (this->*tbl[transitionState])();
    postStateUpdate();
    return TRUE;
}

void PocketMenu::runMainState() {
    static Unk_ov096_0229aea8_Fn tbl[58] = {
        &PocketMenu::mainAct00,
        &PocketMenu::mainAct01,
        &PocketMenu::mainAct02,
        &PocketMenu::mainAct03,
        &PocketMenu::mainAct04,
        &PocketMenu::mainAct05,
        &PocketMenu::mainAct06,
        &PocketMenu::mainAct07,
        &PocketMenu::mainAct08,
        &PocketMenu::mainAct09,
        &PocketMenu::mainAct0A,
        &PocketMenu::mainAct0B,
        &PocketMenu::mainAct0C,
        &PocketMenu::mainAct0D,
        &PocketMenu::mainAct0E,
        &PocketMenu::mainAct0F,
        &PocketMenu::mainAct10,
        &PocketMenu::mainAct11,
        &PocketMenu::mainAct12,
        &PocketMenu::mainAct13,
        &PocketMenu::mainAct14,
        &PocketMenu::mainAct15,
        &PocketMenu::mainAct16,
        &PocketMenu::mainAct17,
        &PocketMenu::mainAct18,
        &PocketMenu::mainAct19,
        &PocketMenu::mainAct1A,
        &PocketMenu::mainAct1B,
        &PocketMenu::mainAct1C,
        &PocketMenu::mainAct1D,
        &PocketMenu::mainAct1E,
        &PocketMenu::mainAct1F,
        &PocketMenu::mainAct20,
        &PocketMenu::mainAct21,
        &PocketMenu::mainAct22,
        &PocketMenu::mainAct23,
        &PocketMenu::mainAct24,
        &PocketMenu::mainAct25,
        &PocketMenu::mainAct26,
        &PocketMenu::mainAct27,
        &PocketMenu::mainAct28,
        &PocketMenu::mainAct29,
        &PocketMenu::mainAct2A,
        &PocketMenu::mainAct2B,
        &PocketMenu::mainAct2C,
        &PocketMenu::mainAct2D,
        &PocketMenu::mainAct2E,
        &PocketMenu::mainAct2F,
        &PocketMenu::mainAct30,
        &PocketMenu::mainAct31,
        &PocketMenu::mainAct32,
        &PocketMenu::mainAct33,
        &PocketMenu::mainAct34,
        &PocketMenu::mainAct35,
        &PocketMenu::mainAct36,
        &PocketMenu::mainAct37,
        &PocketMenu::mainAct38,
        &PocketMenu::mainAct39};
    (this->*tbl[mainState])();
}

BOOL PocketMenu::execMain() {
    if (handleTabSwitch()) {
        return TRUE;
    }
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL PocketMenu::execPhase3() { return TRUE; }

BOOL PocketMenu::execPhase4() { return TRUE; }

BOOL PocketMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

BOOL PocketMenu::handleTabSwitch() {
    MenuCtrl_TickForceClose();
    if (MenuCtrl_IsForceCloseDue()) {
        if (mainState == 0 || mainState == 1 || mainState == 0xa) {
            return requestTab(7);
        }
    }
    if (mainState != 0 && mainState != 0xa) {
        return FALSE;
    }
    s32 t = -1;
    if (MenuCtrl_IsTouch()) {
        t = MenuTabBar_HitTestTouch();
    } else {
        u16 v = gPad[1];
        if (v & 0x800) {
            t = 7;
        } else if (v & 0x400) {
            t = 5;
        } else if (v & 4) {
            t = 4;
        }
    }
    return requestTab(t);
}

BOOL PocketMenu::requestTab(s32 a) {
    void *o = ProcBase_GetParent(this);
    if (a != -1) {
        if (a != 0) {
            _ZN10MenuTabBar9selectTabEj(o, (u8)a);
            transitionState = 5;
            setPhase(1);
            if (a != 7) {
                requestCameraPop();
            }
            clearFlags(0x80);
            return TRUE;
        }
    }
    return FALSE;
}

void PocketMenu::stateLoadBg() {
    setupBgLayer();
    InventoryBg_LoadBg(unk_de0, 1);
    setTransitionState(1);
    if (testFlags(0x80000) == 0) {
        stateLoadBgChars();
    }
}

void PocketMenu::stateLoadBgChars() {
    InventoryBg_LoadGraphics(unk_de0);
    setTransitionState(2);
    if (testFlags(0x80000) == 0) {
        stateLoadObj();
    }
}

void PocketMenu::stateLoadObj() {
    loadObjGraphics();
    setTransitionState(3);
    if (testFlags(0x80000) == 0) {
        stateSlideIn();
        clearFlags(0x80000);
    }
}

void PocketMenu::stateSlideIn() {
    InventoryItemGrid_LoadPockets(unk_358);
    LetterGrid_LoadPocketLetters(unk_db8);
    beginSubSlideIn(8, 3, 0, 0x30);
    Gfx2d_ShowLayer(6);
    applySlideOffset(6, 0, 0);
    setTransitionState(4);
    setFlags(1);
    setFlags(2);
    slideY = getSlideOffsetY();
}

void PocketMenu::stateWaitSlideIn() {
    if (stepSlideIn(0)) {
        setPhase(2);
        PocketMenu_ReturnToIdle((S *)this);
    }
    applySlideOffset(6, 0, 0);
    slideY = getSlideOffsetY();
}

void PocketMenu::stateSlideOut() {
    _ZN18TouchPromptBalloon4hideEi(unk_23c0, 1);
    hideCursor();
    beginSubSlideOut(8, 0, 0, 0x30);
    applySlideOffset(6, 0, 0);
    setTransitionState(6);
    slideY = getSlideOffsetY();
}

void PocketMenu::stateWaitSlideOut() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        clearFlags(2);
        if (testFlags(0x80)) {
            setTransitionState(7);
        } else {
            setPhase(5);
            clearFlags(1);
        }
    } else {
        applySlideOffset(6, 0, 0);
    }
    slideY = getSlideOffsetY();
}

void PocketMenu::stateOpenLetterView() {
    void *r4 = getActionLetter();
    Letter_MarkRead();
    _ZN14LetterRenderer4showEP16Unk_0206d1d4_SrcPvS2_i(unk_2904, r4, 3, 4, 1);
    beginSubSlideIn(3, 0, 0, 0x30);
    Gfx2d_ShowLayer(3);
    applySlideOffset(3, 0, 0);
    Gfx2d_ShowLayer(4);
    applySlideOffset(4, 0, 0);
    setTransitionState(8);
    _ZN15MenuLabelButton11showDefaultEi(unk_2b14, 0x88);
    setFlags(0x100);
}

void PocketMenu::stateWaitLetterView() {
    if (stepSlideIn(0)) {
        setPhase(2);
        if (MenuCtrl_IsTouch()) {
            setMainState(7);
        } else {
            setMainState(0x17);
        }
    } else {
        applySlideOffset(3, 0, 0);
        applySlideOffset(4, 0, 0);
    }
}

void PocketMenu::stateCloseLetterView() {
    beginSubSlideOut(3, 0, 0, 0x30);
    applySlideOffset(3, 0, 0);
    applySlideOffset(4, 0, 0);
    setTransitionState(0xa);
}

void PocketMenu::stateWaitCloseLetterView() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(3);
        Gfx2d_ResetLayer(4);
        clearFlags(0x100);
        void *r4 = ProcBase_GetParent(this);
        if (testFlags(0x20000)) {
            setPhase(5);
            clearFlags(1);
        } else {
            _ZN10MenuTabBar8showTabsEv(r4);
            stateLoadBg();
        }
    } else {
        applySlideOffset(3, 0, 0);
        applySlideOffset(4, 0, 0);
    }
}

// ===== unit 0229a000 =====

void PocketMenu::hideTabBar() {
    _ZN10MenuTabBar8hideTabsEv(ProcBase_GetParent(this));
}

void PocketMenu::initPocketMenu() {
    stateFlags = 0;
    InventoryItemGrid_Init(unk_358, 2);
    _ZN10LetterGrid4initEi(unk_db8, 2);
    InventoryBg_Init(unk_de0, 6);
    balloonTarget = 0x26;
    _ZN18TouchPromptBalloon19func_ov002_022006acEi(unk_23c0, 2);
    _ZN12CursorMotion5resetEv(unk_2480);
    clearHand();
    cursorTarget = MenuCtrl_GetSavedSlot();
    _ZN15PopupChoiceMenu4initEiiPKc(unk_24fc, 3, 1, 0);
    _ZN19PopupChoiceMenuBody18buildAddresseeListEv(unk_24fc);
    _ZN14LetterRenderer8setLayerEi(unk_2904, 3);
    optionsOpenDelay = 0;
    ProcBase_GetParent(this);
    if (_ZN10MenuTabBar12isJustOpenedEv()) {
        setFlags(0x80000);
    }
}

void PocketMenu::releaseResources() {
    PocketMenu_CancelVramTasks((S *)this);
    InventoryBg_Exit(unk_de0);
    InventoryItemGrid_Exit(unk_358);
    PopupChoice_ForceClose(unk_24fc);
    _ZN14LetterRenderer7releaseEv(unk_2904);
}

void PocketMenu::preInputUpdate() {
    preStateUpdate();
    ((Unk_ov096_02299eec_Obj *)unk_2498)->vfunc_0c();
}

void PocketMenu::postInputUpdate() {
    postStateUpdate();
}

void PocketMenu::preStateUpdate() {
    PocketMenu_CancelVramTasks((S *)this);
    InventoryBg_PreUpdate(unk_de0);
    InventoryItemGrid_PreUpdate(unk_358);
    _ZN10LetterGrid16updateCursorLiftEv(unk_db8);
}

void PocketMenu::postStateUpdate() {
    updateCameraView();
    PopupChoice_Update(unk_24fc);
    InventoryBg_Update(unk_de0);
    if (_ZN18TouchPromptBalloon12updatePromptEv(unk_23c0)) {
        positionLabelBalloon();
    }
}

void PocketMenu::setupBgLayer() {
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
}

void PocketMenu::loadObjGraphics() {
    InventoryBg_LoadObjGraphics(unk_de0);
}

void PocketMenu::mainAct00() {
    if (checkSwitchToButtons(1)) {
        cursorTarget = 0;
        PocketMenu_EnterButtonIdle((S *)this);
    } else if (Unk_ov096_02299778_Both()) {
        u8 a = gTouchCurX;
        u8 b = gTouchCurY;
        s32 t = PocketMenu_HitPocket((S *)this, a, b, 1);
        if (t != 0x26) {
            PocketMenu_BeginTouchOnTarget((S *)this, t);
            return;
        }
        t = PocketMenu_HitLetter((S *)this, a, b, 1);
        if (t != 0x26) {
            PocketMenu_BeginTouchOnTarget((S *)this, t);
            return;
        }
        if (PocketMenu_HitWalletIcon((S *)this, a, b)) {
            openTargetOptions(0x25, 0);
            return;
        }
        switch (PocketMenu_HitWalletAmount((S *)this, a, b)) {
        case 1:
            openTargetOptions(0x27, 0);
            break;
        case 2:
            setMainState(9);
            InventoryBg_SetBellsPanelMode(unk_de0, bellsPanelMode);
            break;
        default:
            if (PocketMenu_HitPlayer((S *)this, a, b)) {
                openTargetOptions(0x24, 0);
            }
            break;
        }
    }
}

void PocketMenu::mainAct01() {
    if (gTouchHeld == 0) {
        if (testFlags(0x10000)) {
            setMainState(0);
            _ZN18TouchPromptBalloon17setAutoCloseTimerEh(unk_23c0, 0x3c);
        } else {
            setMainState(3);
            runMainState();
        }
        return;
    }
    if (testFlags(4) == 0) goto stop;
    if (hasTouchMoved()) {
        PocketMenu_StartTouchDrag((S *)this, touchedTarget);
        return;
    }
    if (testFlags(0x10000) != 0) goto stop;
    if (_ZN18TouchPromptBalloon15isOpenOrOpeningEv(unk_23c0) == 0) goto stop;
    if (optionsOpenDelay != 0) {
        optionsOpenDelay = optionsOpenDelay - 1;
    } else {
        openTargetOptions(touchedTarget, 1);
        setMainState(2);
    }
    return;
stop:
    _ZN18TouchPromptBalloon10commitOpenEv(unk_23c0);
}

void PocketMenu::mainAct02() {
    if (MenuCtrl_IsForceCloseDue()) {
        setMainState(4);
    } else if (gTouchHeld == 0) {
        setMainState(4);
    } else if (testFlags(4)) {
        if (hasTouchMoved()) {
            PocketMenu_StartTouchDrag((S *)this, touchedTarget);
            PopupChoice_Close(unk_24fc, 0);
            _ZN18TouchPromptBalloon4hideEi(unk_23c0, 1);
        }
    }
}

void PocketMenu::mainAct03() {
    if (_ZN18TouchPromptBalloon15isOpenOrOpeningEv(unk_23c0)) {
        if (optionsOpenDelay != 0) {
            optionsOpenDelay = optionsOpenDelay - 1;
        } else {
            openTargetOptions(touchedTarget, 1);
            setMainState(2);
        }
    }
}

void PocketMenu::mainAct04() {
    if (_ZN19PopupChoiceMenuBody6isOpenEv(unk_24fc)) {
        if (MenuCtrl_IsForceCloseDue()) {
            cancelOptions();
        } else if (checkSwitchToButtons(1)) {
            cancelOptions();
        } else if (Unk_ov096_02299778_Both()) {
            s32 t = _ZN19PopupChoiceMenuBody16hitTestRowOrLastEii(unk_24fc, gTouchCurX, gTouchCurY);
            if (t >= 0) {
                if (testFlags(0x40000) == 0 || t != 0) {
                    chosenAction = *((u8 *)this + t + 0x27f5);
                    s32 u = playActionSe();
                    PopupChoice_DecideRow(unk_24fc, t, u);
                    setMainState(0x1e);
                }
            }
        }
    }
}

void PocketMenu::mainAct05() {
    if (MenuCtrl_IsForceCloseDue()) {
        putHandBack(handSource, 1);
        requestTab(7);
        return;
    }
    syncHandFromTouch();
    clearHighlights();
    s32 x = handX + 8;
    s32 y = handY + 8;
    s32 t = PocketMenu_HitPocket((S *)this, x, y, 0);
    if (t == 0x26) {
        t = PocketMenu_HitLetter((S *)this, x, y, 0);
    }
    if (t != 0x26) {
        if (gTouchHeld == 0) {
            if (checkSwap(t, handSource) == 0) {
                if (PocketMenu_IsLetterTarget((S *)this, t)) {
                    requestCameraPop();
                }
                PocketMenu_DropItemAt((S *)this, t);
                if (mainState == 5) {
                    PocketMenu_ReturnToIdle((S *)this);
                }
                if (PocketMenu_IsPocketTarget((S *)this, t) == 0 && PocketMenu_IsLetterTarget((S *)this, t) == 0) {
                    return;
                }
                Inventory_PlayPutDownSe();
            } else {
                PocketMenu_FlyHandTo((S *)this, handSource, 4);
            }
        } else {
            highlightTarget(t);
        }
    } else {
        t = PocketMenu_HitSpecialTarget((S *)this, x, y);
        if (t != 0x26) {
            if (gTouchHeld == 0) {
                if ((u8)(t + 0xde) <= 1) {
                    if (canDropHeldItem() == 0) {
                        PocketMenu_FlyHandTo((S *)this, handSource, 4);
                    } else if (dropHeldItem()) {
                        PocketMenu_ReturnToIdle((S *)this);
                    }
                } else if (t == 0x24) {
                    useOnPlayerKind = getUseOnPlayerKind();
                    u32 v = useOnPlayerKind;
                    if (v < 1) {
                        cancelUseOnPlayer();
                    } else if (v == 1) {
                        PocketMenu_FlyHandTo((S *)this, handSource, 4);
                    } else {
                        startUseOnPlayer();
                    }
                } else if (t == 0x25) {
                    if (isHoldingMoneyBag(0)) {
                        depositHeldBag();
                    } else {
                        PocketMenu_FlyHandTo((S *)this, handSource, 4);
                    }
                } else {
                    PocketMenu_FlyHandTo((S *)this, handSource, 4);
                }
            } else {
                highlightTarget(t);
            }
        } else if (PocketMenu_HitShirtBox((S *)this, x, y)) {
            if (gTouchHeld == 0) {
                if (isHoldingShirt()) {
                    wearHeldShirt();
                    PocketMenu_ReturnToIdle((S *)this);
                } else {
                    PocketMenu_FlyHandTo((S *)this, handSource, 4);
                }
            } else {
                highlightTarget(0x21);
            }
        } else if (gTouchHeld == 0) {
            PocketMenu_FlyHandTo((S *)this, handSource, 4);
        }
    }
}

void PocketMenu::mainAct06() {
    if (MenuCtrl_IsForceCloseDue()) {
        putHandBack(handSource, 1);
        requestTab(7);
    } else {
        syncHandFromTouch();
        clearHighlights();
        s32 t = PocketMenu_HitLetter((S *)this, handX + 8, handY + 8, 0);
        if (t != 0x26) {
            if (gTouchHeld == 0) {
                if (((s32 (*)(S *))PocketMenu_DropLetterAt)((S *)this) == 0) {
                    PocketMenu_FlyHandTo((S *)this, handSource, 4);
                }
                Inventory_PlayPutDownSe();
                PocketMenu_ReturnToIdle((S *)this);
            } else {
                highlightTarget(t);
            }
        } else if (gTouchHeld == 0) {
            PocketMenu_FlyHandTo((S *)this, handSource, 4);
        }
    }
}

void PocketMenu::mainAct07() {
    if (MenuCtrl_IsForceCloseDue()) {
        closeLetterViewAndMenu();
    } else if (checkSwitchToButtons(1)) {
        setMainState(0x17);
    } else if (_ZN15MenuLabelButton9isTouchedEv(unk_2b14)) {
        closeLetterView();
    }
}

void PocketMenu::mainAct08() {
    if (MenuCtrl_IsForceCloseDue()) {
        func_ov096_02295c2c();
    } else if (checkSwitchToButtons(1)) {
        func_ov096_0229862c((S *)this);
    } else if (Unk_ov096_02299778_Both()) {
        s32 t = _ZN19PopupChoiceMenuBody10hitTestRowEii(unk_24fc, gTouchCurX, gTouchCurY);
        if (t >= 0) {
            PopupChoice_DecideAddressee(unk_24fc, t);
            addressee = _ZN19PopupChoiceMenuBody13pickAddresseeEjj(unk_24fc, addresseePage, (u8)t);
            setMainState(0x23);
        } else {
            func_ov096_02295c2c();
        }
    }
}

// ===== unit 022996e8 =====

void PocketMenu::mainAct09() {
    if (MenuCtrl_IsForceCloseDue()) {
        requestTab(7);
        InventoryBg_SetBellsPanelMode(unk_de0, 0);
    } else if (gTouchHeld == 0) {
        setMainState(0);
        InventoryBg_SetBellsPanelMode(unk_de0, 0);
    } else if (isTouchHeldFor(4)) {
        PocketMenu_BeginTouchOnTarget((S *)this, 0x25);
        grabOffsetX = -8;
        grabOffsetY = -8;
        PocketMenu_StartTouchDrag((S *)this, 0x25);
        setFlags(0x4000);
        InventoryBg_SetBellsPanelMode(unk_de0, bellsPanelMode);
    }
}

void PocketMenu::mainAct0A() {
    if (checkSwitchToTouch()) {
        PocketMenu_EnterTouchIdle((S *)this);
        _ZN18TouchPromptBalloon4hideEi(unk_23c0, 1);
    } else {
        s32 t = takeRepeatedKeys();
        if (moveCursorByPad((void *)t, 0)) {
            updateLabelBalloon();
            func_ov096_02296854();
            _ZN18TouchPromptBalloon4hideEi(unk_23c0, 0);
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                if (PocketMenu_IsPocketTarget((S *)this, cursorTarget) || PocketMenu_IsLetterTarget((S *)this, cursorTarget)) {
                    if (PocketMenu_IsSlotEmpty((S *)this, cursorTarget) == 0) {
                        openTargetOptions(cursorTarget, 0);
                    }
                } else if (PocketMenu_IsTabTarget((S *)this, cursorTarget)) {
                    func_ov096_022966c8();
                } else if (cursorTarget == 0x25) {
                    openTargetOptions(0x25, 0);
                } else if (cursorTarget == 0x24) {
                    openTargetOptions(0x24, 0);
                }
            } else if (k & 0x100) {
                requestTab(MenuTabBar_NextTab(0));
            } else if (k & 0x200) {
                requestTab(MenuTabBar_PrevTab(0));
            } else if (k & 2) {
                requestTab(7);
            } else {
                _ZN18TouchPromptBalloon10commitOpenEv(unk_23c0);
            }
        }
    }
}

void PocketMenu::mainAct0B() {
    if (MenuCtrl_IsForceCloseDue()) {
        putHandBack(handSource, 1);
        requestTab(7);
    } else {
        s32 t = takeRepeatedKeys();
        if (moveCursorByPad((void *)t, 1)) {
            updateLabelBalloon();
            func_ov096_02296854();
            _ZN18TouchPromptBalloon4hideEi(unk_23c0, 0);
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                if (cursorTarget == 0x21) {
                    if (isHoldingShirt() == 0) {
                        return;
                    }
                    requestCameraPop();
                    func_ov096_02296638(cursorTarget);
                } else if (PocketMenu_IsSpecialTarget((S *)this, cursorTarget)) {
                    u32 b = cursorTarget;
                    if (b == 0x24) {
                        useOnPlayerKind = getUseOnPlayerKind();
                        func_ov096_02296638(cursorTarget);
                    } else if (b == 0x22) {
                        requestCameraPop();
                        func_ov096_02296638(cursorTarget);
                    } else if (b == 0x25) {
                        if (isHoldingMoneyBag(1) == 0 && handSource == 0x25) {
                            Snd_PlaySe(0x2a);
                        } else {
                            requestCameraPop();
                            func_ov096_02296638(cursorTarget);
                        }
                    }
                } else if (checkPlace(cursorTarget, handItem, handItemFlags) == 0) {
                    if (PocketMenu_IsLetterTarget((S *)this, cursorTarget)) {
                        requestCameraPop();
                    }
                    if (PocketMenu_IsPocketTarget((S *)this, cursorTarget)) {
                        u16 v;
                        u32 w;
                        v = PocketMenu_GetItem((S *)this, cursorTarget);
                        w = PocketMenu_GetItemFlags((S *)this, cursorTarget);
                        if (_ZN10PocketMenu10mergeItemsEPtiS0_h((S *)this, &handItem, handItemFlags, &v, w) == 0) {
                            InventoryItemGrid_SetSlotItem(unk_358, PocketMenu_TargetToGridIndex((S *)this, cursorTarget), v, w);
                        }
                    }
                    if (PocketMenu_GetItem((S *)this, cursorTarget) == 0xfff1) {
                        func_ov096_02296638(cursorTarget);
                    } else {
                        if (swapTarget != 0x26 && isHoldingMoneyBag(1)) {
                            swapTarget = cursorTarget;
                            auxItem = handItem;
                        }
                        func_ov096_022965f0(cursorTarget);
                    }
                }
            } else {
                if (k & 2) {
                    if (checkPlaceHand(handSource) == 0) {
                        func_ov096_02296638(handSource);
                    } else {
                        u32 v = swapTarget;
                        if (v != 0x26) {
                            u32 o = handSource;
                            handSource = v;
                            func_ov096_02296638(handSource);
                            swapTarget = o;
                            setFlags(0x2000);
                        }
                    }
                }
                syncHandFromCursor();
                _ZN18TouchPromptBalloon10commitOpenEv(unk_23c0);
            }
        }
    }
}

void PocketMenu::mainAct0C() {
    if (MenuCtrl_IsForceCloseDue()) {
        putHandBack(handSource, 1);
        requestTab(7);
    } else {
        s32 t = takeRepeatedKeys();
        if (moveCursorByPad((void *)t, 2)) {
            updateLabelBalloon();
            func_ov096_02296854();
            _ZN18TouchPromptBalloon4hideEi(unk_23c0, 0);
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                if (PocketMenu_IsSlotEmpty((S *)this, cursorTarget)) {
                    func_ov096_02296638(cursorTarget);
                } else {
                    func_ov096_022965f0(cursorTarget);
                }
            } else if (k & 2) {
                func_ov096_02296638(handSource);
            } else {
                syncHandFromCursor();
                _ZN18TouchPromptBalloon10commitOpenEv(unk_23c0);
            }
        }
    }
}

void PocketMenu::mainAct0D() {
    if (MenuCtrl_IsForceCloseDue()) {
        cancelOptions();
    } else if (checkSwitchToTouch()) {
        cancelOptions();
    } else {
        s32 t = takeRepeatedKeys();
        u8 f = testFlags(0x40000);
        if (PopupChoice_MoveCursor(unk_24fc, t, &popupRow, f)) {
            func_ov096_02296804();
        } else {
            u32 k = gPad[1];
            if (k & 1) {
                _ZN10MenuCursor12setPosePressEv(unk_2498);
                setMainState(0xe);
            } else if (k & 2) {
                func_ov096_022967a0();
            }
        }
    }
}

void PocketMenu::mainAct0E() {
    if (_ZN10HandCursor10isAnimDoneEv(unk_2498)) {
        chosenAction = *((u8 *)this + popupRow + 0x27f5);
        s32 u = playActionSe();
        PopupChoice_DecideRow(unk_24fc, popupRow, u);
        setMainState(0x1e);
    }
}

void PocketMenu::mainAct0F() {
    if (_ZN14MenuCursorBase8isMovingEv(unk_2498) == 0) {
        setMainState(returnState);
        if ((u8)(returnState + 0xf6) <= 2) {
            selectTarget(cursorTarget);
        }
        runMainState();
    }
    syncHandFromCursor();
}

void PocketMenu::mainAct10() {
    if (_ZN10HandCursor10isAnimDoneEv(unk_2498)) {
        if (requestTab(cursorTarget - 0x19) == 0) {
            func_ov096_022966a8();
        }
    }
}

void PocketMenu::mainAct11() {
    if (_ZN10HandCursor10isAnimDoneEv(unk_2498)) {
        func_ov096_022966e8();
        setMainState(0xa);
    }
}

void PocketMenu::mainAct12() {
    if (_ZN14MenuCursorBase19func_ov002_02202928Ev(unk_2498)) {
        PocketMenu_StartButtonDrag((S *)this, cursorTarget);
        setMainState(0x13);
    }
}

void PocketMenu::mainAct13() {
    if (_ZN10HandCursor10isAnimDoneEv(unk_2498)) {
        setMainState(returnState);
    }
    syncHandFromCursor();
}

void PocketMenu::mainAct14() {
    if (_ZN14MenuCursorBase19func_ov002_02202928Ev(unk_2498) == 0) {
        u32 a = placeTarget;
        u32 b = cursorTarget;
        if (b == a) {
            placeHandAt(a);
            if (testFlags(0x2000)) {
                setHandItem(auxItem, 0);
                PocketMenu_FlyHandTo((S *)this, swapTarget, 4);
                clearFlags(0x2000);
            }
        } else {
            PocketMenu_FlyHandTo((S *)this, a, 4);
        }
        if (mainState == 0x14) {
            updateLabelBalloon();
            setMainState(0xa);
            Inventory_PlayPutDownSe();
        }
    } else {
        syncHandFromCursor();
    }
}

void PocketMenu::mainAct15() {
    if (_ZN14MenuCursorBase19func_ov002_022028fcEv(unk_2498) == 0) {
        swapHandWith(placeTarget);
        setFlags(0x40);
        setMainState(0x16);
        updateLabelBalloon();
    } else {
        setMainState(0xa);
    }
}

void PocketMenu::mainAct16() {
    if (_ZN10HandCursor10isAnimDoneEv(unk_2498)) {
        setMainState(returnState);
    }
    if (_ZN14MenuCursorBase19func_ov002_02202928Ev(unk_2498)) {
        if (testFlags(0x40)) {
            clearFlags(0x40);
            Inventory_PlayPickUpSe();
        }
        syncHandFromCursor();
    }
}

void PocketMenu::mainAct17() {
    if (MenuCtrl_IsForceCloseDue()) {
        closeLetterViewAndMenu();
    } else if (MenuCtrl_IsForceCloseDue()) {
        closeLetterView();
        setFlags(0x20000);
    } else {
        if (_ZN10HandCursor7getAnimEv(unk_2498) == 0) {
            s32 a = _ZN15MenuLabelButton10getAnchorXEi(unk_2b14, 1);
            s32 b = _ZN15MenuLabelButton10getAnchorYEi(unk_2b14, 1);
            _ZN14MenuCursorBase6warpToEii(unk_2498, a, b);
            _ZN10MenuCursor16setAnimIfChangedEi(unk_2498, 1);
        }
        if (checkSwitchToTouch()) {
            hideCursor();
            setMainState(7);
        } else {
            u32 k = gPad[1];
            if ((k & 1) || (k & 2)) {
                _ZN10MenuCursor12setPosePressEv(unk_2498);
                setMainState(0x18);
            }
        }
    }
}

void PocketMenu::mainAct18() {
    if (_ZN10HandCursor10isAnimDoneEv(unk_2498)) {
        closeLetterView();
    }
}

void PocketMenu::mainAct19() {
    if (MenuCtrl_IsForceCloseDue()) {
        func_ov096_02295c2c();
    } else if (checkSwitchToTouch()) {
        func_ov096_02298644((S *)this);
    } else {
        s32 t = takeRepeatedKeys();
        if (PopupChoice_MoveCursor(unk_24fc, t, &popupRow, 0)) {
            func_ov096_02296804();
        }
        u32 k = gPad[1];
        if (k & 1) {
            _ZN10MenuCursor12setPosePressEv(unk_2498);
            setMainState(0x1a);
        } else if (k & 2) {
            func_ov096_02295c2c();
        }
    }
}

// ===== unit 02298dac =====

void PocketMenu::mainAct1A() {
    if (_ZN10HandCursor10isAnimDoneEv(unk_2498)) {
        PopupChoice_DecideAddressee(unk_24fc, popupRow);
        addressee = _ZN19PopupChoiceMenuBody13pickAddresseeEjj(unk_24fc, addresseePage, popupRow);
        setMainState(0x23);
    }
}

extern "C" void _ZN10PocketMenu9mainAct1BEv(S *s)
{
    if (_ZN12CursorMotion6updateEv((u8 *)s + 0x2480)) {
        if (PocketMenu_IsSpecialTarget(s, s->handSource) || _ZN10PocketMenu9testFlagsEj(s, 0x2000)) {
            s->handX = PocketMenu_GetTargetX(s, s->handSource);
            s->handY = PocketMenu_GetTargetY(s, s->handSource);
            _ZN8MenuProc12setMainStateEh(s, 0x1c);
        } else {
            _ZN10PocketMenu9mainAct1CEv(s);
        }
    } else {
        _ZN10PocketMenu17syncHandFromMoverEv(s);
    }
}

extern "C" void _ZN10PocketMenu9mainAct1CEv(S *s)
{
    _ZN10PocketMenu11putHandBackEjj(s, s->handSource, 1);
    if (_ZN10PocketMenu9testFlagsEj(s, 0x2000)) {
        PocketMenu_FlyItemTo(s, s->handSource, s->swapTarget, s->auxItem, 0);
        _ZN10PocketMenu10clearFlagsEj(s, 0x2000);
    } else {
        Inventory_PlayPutDownSe();
        PocketMenu_ReturnToIdle(s);
    }
}

extern "C" void _ZN10PocketMenu9mainAct1DEv(S *s)
{
    if (_ZN19PopupChoiceMenuBody6isOpenEv((u8 *)s + 0x24fc)) {
        if (MenuCtrl_IsButtons()) {
            _ZN10PocketMenu19func_ov096_0229673cEv(s);
            _ZN8MenuProc12setMainStateEh(s, 0xd);
        } else {
            _ZN8MenuProc12setMainStateEh(s, 4);
        }
    }
}

extern "C" s32 func_ov096_02298c4c(S *s)
{
    if (PopupChoice_TickDecideDelay(s->s_24fc)) {
        PopupChoice_Close(s->s_24fc, 0);
        _ZN18TouchPromptBalloon4hideEi(s->s_23c0, 1);
        if (_ZN10HandCursor7getAnimEv(s->s_2498)) {
            _ZN10PocketMenu19placeCursorOnTargetEv(s);
        }
        return 1;
    }
    return 0;
}

extern "C" void _ZN10PocketMenu9mainAct1EEv(S *s)
{
    if (func_ov096_02298c4c(s)) {
        _ZN8MenuProc12setMainStateEh(s, 0x1f);
    }
}

extern "C" void _ZN10PocketMenu9mainAct1FEv(S *s)
{
    if (_ZN19PopupChoiceMenuBody8isClosedEv((u8 *)s + 0x24fc)) {
        _ZN10PocketMenu15runChosenActionEv(s);
    }
}

extern "C" void _ZN10PocketMenu9mainAct20Ev(S *s)
{
    if (_ZN16MenuErrorMessage6updateEi((u8 *)s + 0x27fc, 1)) {
        _ZN8MenuProc12setMainStateEh(s, s->returnState);
        _ZN10HandCursor15enableObjWindowEv((u8 *)s + 0x2498);
    }
}

extern "C" void _ZN10PocketMenu9mainAct21Ev(S *s)
{
    if (_ZN15MenuLabelButton8stepAnimEv(s->s_2b14)) {
        if (_ZN10HandCursor7getAnimEv(s->s_2498)) {
            s32 r4 = _ZN15MenuLabelButton10getAnchorXEi(s->s_2b14, 1);
            _ZN14MenuCursorBase6warpToEii(s->s_2498, r4, _ZN15MenuLabelButton10getAnchorYEi(s->s_2b14, 1));
        }
    } else {
        _ZN10PocketMenu10hideCursorEv(s);
        _ZN8MenuProc18setTransitionStateEh(s, 9);
        _ZN8MenuProc8setPhaseEh(s, 1);
    }
}

extern "C" void _ZN10PocketMenu9mainAct22Ev(S *s)
{
    if (_ZN19PopupChoiceMenuBody6isOpenEv((u8 *)s + 0x24fc)) {
        func_ov096_0229860c(s);
    }
}

extern "C" void _ZN10PocketMenu9mainAct23Ev(S *s)
{
    if (func_ov096_02298c4c(s)) {
        _ZN10PocketMenu10hideCursorEv(s);
        _ZN8MenuProc12setMainStateEh(s, 0x24);
    }
}

extern "C" void _ZN10PocketMenu9mainAct24Ev(S *s)
{
    if (_ZN19PopupChoiceMenuBody8isClosedEv(s->s_24fc)) {
        if (_ZN10PocketMenu9testFlagsEj(s, 0x200)) {
            if (_ZN19PopupChoiceMenuBody16getAddresseeKindEj(s->s_24fc, s->addressee) == 1) {
                _ZN10PocketMenu18writeLetterOnPaperEv(s);
                return;
            }
        }
        if (_ZN19PopupChoiceMenuBody14applyAddresseeEPvj(s->s_24fc, (void *)MenuCtrl_GetArg(), s->addressee) == 2) {
            s->addresseePage = s->addresseePage + 1;
            if (s->addresseePage >= _ZN19PopupChoiceMenuBody12getPageCountEv(s->s_24fc)) {
                s->addresseePage = 0;
            }
            _ZN10PocketMenu19func_ov096_022956a0Ei(s, 0);
        } else {
            PocketMenu_ReturnToIdle(s);
        }
    }
}

extern "C" void _ZN10PocketMenu9mainAct25Ev(S *s)
{
    u32 r4;
    s->handX = PocketMenu_GetTargetX(s, 0x24);
    s->handY = PocketMenu_GetTargetY(s, 0x24);
    r4 = s->useOnPlayerKind;
    if (r4 != 5 || IsZero(gFieldSceneKind)) {
        _ZN10PocketMenu17requestCameraPushEv(s);
    }
    if (_ZN10PocketMenu18requestUseOnPlayerEit(s, r4, s->handItem)) {
        _ZN8MenuProc12setMainStateEh(s, 0x26);
        s->handItem = _ZN10PocketMenu12swapEquippedEit(s, r4, s->handItem);
        InventoryBg_StartBlink((u8 *)s + 0xde0, 1);
    }
}

extern "C" void _ZN10PocketMenu9mainAct26Ev(S *s)
{
    if (InventoryBg_UpdateBlink((u8 *)s + 0xde0)) {
        _ZN10PocketMenu9clearHandEv(s);
        InventoryBg_LoadPictureForHeldItem((u8 *)s + 0xde0);
        if (s->handItem != 0xfff1) {
            if (_ZN10PocketMenu9testFlagsEj(s, 0x8000)) {
                PocketMenu_FlyItemTo(s, 0x24, s->handSource, s->handItem, 0);
                return;
            }
            _ZN10PocketMenu11setHandItemEjj(s, s->handItem, 0);
            _ZN10PocketMenu10returnHandEj(s, 1);
        }
        _ZN8MenuProc12setMainStateEh(s, 0x27);
        _ZN10PocketMenu9mainAct27Ev(s);
    }
}

extern "C" void _ZN10PocketMenu9mainAct27Ev(S *s)
{
    if (_ZN10PocketMenu17isUseOnPlayerBusyEi(s, s->useOnPlayerKind) == 0) {
        _ZN10PocketMenu9clearHandEv(s);
        InventoryBg_StopBlink((u8 *)s + 0xde0);
        PocketMenu_ReturnToIdle(s);
    }
}

extern "C" void _ZN10PocketMenu9mainAct2AEv(S *s)
{
    if (LetterGrid_UpdatePopAnim((u8 *)s + 0xdb8)) {
        _ZN10PocketMenu9clearHandEv(s);
        PocketMenu_ReturnToIdle(s);
    }
}

extern "C" void _ZN10PocketMenu9mainAct2BEv(S *s)
{
    if (InventoryItemGrid_UpdatePresentAnim((u8 *)s + 0x358)) {
        void *p = PlayerData_GetCurrent();
        u32 v = s->handItem;
        if (v == 0x136a) {
            _ZN12Unk_02097ff47setFlagEj(p, 0x27);
        } else if (v == 0x137b) {
            _ZN12Unk_02097ff47setFlagEj(p, 0x28);
        }
        s->handItemFlags = 0;
        _ZN10PocketMenu11putHandBackEjj(s, s->actionTarget, 1);
        PocketMenu_ReturnToIdle(s);
    }
}

extern "C" void _ZN10PocketMenu9mainAct2FEv(S *s)
{
    if (PlayerActor_IsInAct05()) {
        PocketMenu_ReturnToIdle(s);
    }
}

extern "C" void _ZN10PocketMenu9mainAct31Ev(S *s)
{
    u16 t;
    Snd_PlaySe(0x40);
    _ZN10PocketMenu17requestCameraPushEv(s);
    t = PocketMenu_GetItem(s, s->actionTarget);
    if (PlayerActor_RequestHoldUpItem(&t)) {
        PocketMenu_ClearSlotItem(s, s->actionTarget);
        _ZN8MenuProc12setMainStateEh(s, 0x2f);
    }
}

extern "C" void _ZN10PocketMenu9mainAct32Ev(S *s)
{
    if (s->removeBlinkTimer != 0) {
        s32 r;
        s->removeBlinkTimer = s->removeBlinkTimer - 1;
        r = s->removeBlinkTimer % 5;
        if (r != 0) {
            if (r == 3) {
                _ZN10PocketMenu15highlightTargetEj(s, s->actionTarget);
            }
        } else {
            _ZN10PocketMenu15clearHighlightsEv(s);
        }
        if (s->removeBlinkTimer == 0) {
            PocketMenu_ClearSlotItem(s, s->actionTarget);
        }
    } else {
        _ZN8MenuProc12setMainStateEh(s, 0x2f);
        _ZN10PocketMenu9mainAct2FEv(s);
    }
}

extern "C" void _ZN10PocketMenu9mainAct28Ev(S *s)
{
    switch (FieldAction_PollDrop(s->fieldRequest)) {
    case 1:
        if (_ZN10PocketMenu9testFlagsEj(s, 0x1000)) {
            InventoryItemGrid_ClearSlot((u8 *)s + 0x358, PocketMenu_TargetToGridIndex(s, s->actionTarget));
            PocketMenu_ReturnToIdle(s);
        } else {
            _ZN10PocketMenu9clearHandEv(s);
            PocketMenu_ReturnToIdle(s);
        }
        break;
    case 2:
        if (_ZN10PocketMenu9testFlagsEj(s, 0x1000) == 0) {
            _ZN10PocketMenu10returnHandEj(s, 1);
        }
        PocketMenu_ReturnToIdle(s);
        PocketMenu_ShowMessage(s, 3, 0xff, 0);
        Snd_PlaySe(0x73);
        break;
    default:
        return;
    }
    FieldAction_Release(s->fieldRequest);
    s->fieldRequest = -1;
}

extern "C" void _ZN10PocketMenu9mainAct29Ev(S *s)
{
    switch (FieldAction_PollResult(s->fieldRequest)) {
    case 1:
        if (_ZN10PocketMenu9testFlagsEj(s, 0x1000)) {
            InventoryItemGrid_ClearSlot((u8 *)s + 0x358, PocketMenu_TargetToGridIndex(s, s->actionTarget));
            PocketMenu_ReturnToIdle(s);
        } else {
            _ZN10PocketMenu9clearHandEv(s);
            PocketMenu_ReturnToIdle(s);
        }
        break;
    case 2:
        if (_ZN10PocketMenu9testFlagsEj(s, 0x1000) == 0) {
            _ZN10PocketMenu10returnHandEj(s, 1);
        }
        PocketMenu_ReturnToIdle(s);
        PocketMenu_ShowMessage(s, 8, 0xff, 0);
        Snd_PlaySe(0x73);
        break;
    default:
        return;
    }
    FieldAction_Release(s->fieldRequest);
    s->fieldRequest = -1;
}

extern "C" void PocketMenu_EnterTouchIdle(S *s)
{
    _ZN10PocketMenu10hideCursorEv(s);
    _ZN10PocketMenu14clearSelectionEv(s);
    _ZN8MenuProc12setMainStateEh(s, 0);
}

extern "C" void PocketMenu_EnterButtonIdle(S *s)
{
    s->balloonTarget = 0x26;
    _ZN10PocketMenu19func_ov096_02296964Ev(s);
    _ZN8MenuProc16restartKeyRepeatEv(s);
    _ZN10PocketMenu18updateLabelBalloonEv(s);
    _ZN8MenuProc12setMainStateEh(s, 0xa);
    _ZN10PocketMenu12selectTargetEj(s, s->cursorTarget);
}

extern "C" void PocketMenu_ReturnToIdle(S *s)
{
    if (MenuCtrl_IsTouch()) {
        PocketMenu_EnterTouchIdle(s);
    } else {
        PocketMenu_EnterButtonIdle(s);
    }
}

extern "C" void func_ov096_02298644(S *s)
{
    _ZN10PocketMenu10hideCursorEv(s);
    _ZN8MenuProc12setMainStateEh(s, 8);
}

extern "C" void func_ov096_0229862c(S *s)
{
    _ZN10PocketMenu19func_ov096_02296910Ev(s);
    _ZN8MenuProc12setMainStateEh(s, 0x19);
}

extern "C" void func_ov096_0229860c(S *s)
{
    if (MenuCtrl_IsTouch()) {
        func_ov096_02298644(s);
    } else {
        func_ov096_0229862c(s);
    }
}

extern "C" void func_ov096_022985b8(S *s)
{
    _ZN10PocketMenu10clearFlagsEj(s, 0x10000);
    if (PocketMenu_IsPocketTarget(s, s->touchedTarget)) {
        ChoiceIdList_Clear(s->s_27f0, 0x22);
        _ZN10PocketMenu14addItemOptionsEi(s, s->touchedTarget);
        if (ChoiceIdList_Count(s->s_27f0) == 0) {
            _ZN10PocketMenu8setFlagsEj(s, 0x10000);
        }
    }
}

extern "C" void PocketMenu_BeginTouchOnTarget(S *s, u32 a)
{
    s32 r6, r7;
    s->touchedTarget = a;
    _ZN8MenuProc12setMainStateEh(s, 1);
    r6 = gTouchCurX;
    r7 = gTouchCurY;
    s->grabOffsetX = PocketMenu_GetTargetX(s, s->touchedTarget) - r6;
    s->grabOffsetY = PocketMenu_GetTargetY(s, s->touchedTarget) - r7;
    s->balloonTarget = a;
    _ZN18TouchPromptBalloon9queueOpenEv(s->s_23c0);
    _ZN18TouchPromptBalloon10commitOpenEv(s->s_23c0);
    s->optionsOpenDelay = 2;
    func_ov096_022985b8(s);
    if (func_ov096_02297c68(s, a)) {
        _ZN10PocketMenu10clearFlagsEj(s, 4);
    } else {
        _ZN10PocketMenu8setFlagsEj(s, 4);
    }
    if (PocketMenu_IsPocketTarget(s, a) == 0 && a != 0x24) {
        _ZN10PocketMenu16requestCameraPopEv(s);
    }
    Inventory_PlayTouchSe();
}

extern "C" void PocketMenu_StartTouchDrag(S *s, u32 a)
{
    s->handSource = a;
    _ZN18TouchPromptBalloon4hideEi((u8 *)s + 0x23c0, 1);
    _ZN10PocketMenu6pickUpEj(s, a);
    switch (s->handKind) {
    case 1:
        _ZN8MenuProc12setMainStateEh(s, 6);
        break;
    case 2:
        _ZN8MenuProc12setMainStateEh(s, 5);
        break;
    }
    _ZN10PocketMenu17syncHandFromTouchEv(s);
    _ZN10PocketMenu10clearFlagsEj(s, 0x4000);
    Inventory_PlayPickUpSe();
    s->swapTarget = 0x26;
}

// ===== unit 02298430 =====
extern "C" void PocketMenu_StartButtonDrag(S *s, u32 a)
{
    s->handSource = a;
    _ZN18TouchPromptBalloon4hideEi((u8 *)s + 0x23c0, 1);
    if (s->chosenAction == 0) {
        _ZN10PocketMenu10pickUpItemEj(s, a);
    } else {
        _ZN10PocketMenu6pickUpEj(s, a);
    }
    switch (s->handKind) {
    case 1:
        s->returnState = 0xc;
        break;
    case 2:
        s->returnState = 0xb;
        break;
    }
    _ZN10PocketMenu18syncHandFromCursorEv(s);
    Inventory_PlayPickUpSe();
}

extern "C" void PocketMenu_FlyHandTo(S *s, u32 a, u32 b)
{
    s32 t;
    s32 u;

    s->handSource = a;
    _ZN12CursorMotion6setPosEii(s->s_2480, s->handX, s->handY);
    t = PocketMenu_GetTargetX(s, a);
    u = PocketMenu_GetTargetY(s, a);
    _ZN12CursorMotion11startLinearEiii(s->s_2480, t, u, b);
    _ZN12CursorMotion6updateEv(s->s_2480);
    _ZN10PocketMenu17syncHandFromMoverEv(s);
    _ZN8MenuProc12setMainStateEh(s, 0x1b);
}

extern "C" void PocketMenu_FlyItemTo(S *s, u32 a, u32 b, u32 c, u8 d)
{
    _ZN10PocketMenu11setHandItemEjj(s, c, d);
    s->handX = PocketMenu_GetTargetX(s, a);
    s->handY = PocketMenu_GetTargetY(s, a);
    PocketMenu_FlyHandTo(s, b, 4);
}

extern "C" void PocketMenu_ShowMessage(S *s, u32 a, u32 b, u32 c)
{
    Unk_ov096_02297fb8_Msg m;

    if (b == 0xff) {
        s->returnState = s->mainState;
    } else {
        s->returnState = b;
    }
    m.a = gU8None;
    m.a = a;
    _ZN16MenuErrorMessage4openEPhij((u8 *)s + 0x27fc, &m, (u32)c, 0);
    _ZN8MenuProc12setMainStateEh(s, 0x20);
    _ZN10HandCursor16disableObjWindowEv((u8 *)s + 0x2498);
}

extern "C" void func_ov096_02298320(S *s)
{
    s->removeBlinkTimer = 0xe;
    _ZN8MenuProc12setMainStateEh(s, 0x32);
}

extern "C" void PocketMenu_CancelVramTasks(S *s)
{
    s32 i = 0;
    u8 *p = (u8 *)s + 0x2e8;
    for (; i < 2; i++) {
        _ZN10BgVramTask6cancelEv(p + i * 0x38);
    }
}

extern "C" u32 PocketMenu_IsPocketTarget(S *s, u32 id)
{
    if (id <= 0xe) {
        return 1;
    }
    return 0;
}

extern "C" u32 PocketMenu_IsLetterTarget(S *s, u32 id)
{
    if (id >= 0xf && id <= 0x18) {
        return 1;
    }
    return 0;
}

extern "C" u32 PocketMenu_IsTabTarget(S *s, u32 id)
{
    if (id >= 0x19 && id <= 0x20) {
        return 1;
    }
    return 0;
}

extern "C" u32 PocketMenu_IsSpecialTarget(S *s, u32 id)
{
    if (id >= 0x22 && id <= 0x25) {
        return 1;
    }
    return 0;
}

extern "C" void PocketMenu_MoveCursorToTab(S *s)
{
    _ZN14MenuCursorBase10getScreenXEv((u8 *)s + 0x2498);
    s->cursorTarget = MenuTabBar_TabFromX() + 0x19;
}

extern "C" u32 PocketMenu_TargetToGridIndex(S *s, u32 id)
{
    if (PocketMenu_IsPocketTarget(s, id)) {
        return (u8)id;
    }
    if (PocketMenu_IsSpecialTarget(s, id)) {
        return (u8)(id - 4);
    }
    return 0;
}

extern "C" u32 PocketMenu_PocketIndexToTarget(S *s, u32 id)
{
    if (id <= 0xe) {
        return (u8)id;
    }
    return 0x26;
}

extern "C" u32 PocketMenu_HitPocket(S *s, s32 a, s32 b, s32 c)
{
    s32 r = InventoryItemGrid_FindPocketSlotAt((u8 *)s + 0x358);
    if (r != 0x23) {
        if (c && InventoryItemGrid_IsSlotEmpty((u8 *)s + 0x358, r)) {
            return 0x26;
        }
        return PocketMenu_PocketIndexToTarget(s, r);
    }
    return 0x26;
}

extern "C" s32 PocketMenu_DropItemAt(S *s, u32 id)
{
    u16 v;

    if (PocketMenu_IsLetterTarget(s, id) && PocketMenu_IsSlotEmpty(s, id)) {
        return 0;
    }
    if (PocketMenu_IsPocketTarget(s, id) || PocketMenu_IsLetterTarget(s, id)) {
        v = PocketMenu_GetItem(s, id);
        _ZN10PocketMenu10mergeItemsEPtiS0_h(s, &s->handItem, s->handItemFlags, &v, PocketMenu_GetItemFlags(s, id));
        if (v != 0xfff1) {
            PocketMenu_SetSlotItem(s, s->handSource, v, PocketMenu_GetItemFlags(s, id));
        }
        _ZN10PocketMenu11putHandBackEjj(s, id, 1);
        return 1;
    }
    if ((u8)(id + 0xde) <= 1) {
        if (_ZN10PocketMenu12dropHeldItemEv(s)) {
            return 1;
        }
        return 0;
    }
    if (id == 0x24) {
        if (s->useOnPlayerKind < 1) {
            _ZN10PocketMenu17cancelUseOnPlayerEv(s);
            return 0;
        }
        _ZN10PocketMenu16startUseOnPlayerEv(s);
        return 1;
    }
    if (id == 0x25) {
        if (!_ZN10PocketMenu14depositHeldBagEv(s)) {
            _ZN10PocketMenu11putHandBackEjj(s, s->handSource, 1);
        }
        return 1;
    }
    if (id == 0x21) {
        _ZN10PocketMenu13wearHeldShirtEv(s);
        return 1;
    }
    return 0;
}

extern "C" void PocketMenu_SetSlotItem(S *s, u32 id, u32 a, u32 b)
{
    if (PocketMenu_IsPocketTarget(s, id)) {
        u32 t = PocketMenu_TargetToGridIndex(s, id);
        InventoryItemGrid_SetSlotItem((u8 *)s + 0x358, t, a, b);
        InventoryItemGrid_RefreshSlot((u8 *)s + 0x358, t);
    } else if (PocketMenu_IsLetterTarget(s, id)) {
        _ZN10LetterView10setPresentEtj(PocketMenu_GetLetter(s, id), a, b);
    } else if (id == 0x25) {
        _ZN10PocketMenu15depositToWalletEt(s, a);
    }
}

extern "C" void PocketMenu_ClearSlotItem(S *s, u32 id)
{
    if (PocketMenu_IsPocketTarget(s, id) || PocketMenu_IsLetterTarget(s, id)) {
        PocketMenu_SetSlotItem(s, id, 0xfff1, 0);
    }
}

extern "C" void PocketMenu_ClearLetter(S *s, u32 id)
{
    if (PocketMenu_IsLetterTarget(s, id)) {
        _ZN10LetterGrid11clearLetterEi((u8 *)s + 0xdb8, PocketMenu_TargetToLetterIndex(s, id));
    }
}

extern "C" u32 PocketMenu_FindEmptyPocket(S *s)
{
    s32 r = Pocket_FindEmpty();
    if (r == -1) {
        return 0x26;
    }
    return (u8)r;
}

extern "C" u32 PocketMenu_TargetToLetterIndex(S *s, u32 id)
{
    if (id >= 0xf && id <= 0x18) {
        return (u8)(id - 0xf);
    }
    return 0;
}

extern "C" u32 PocketMenu_LetterIndexToTarget(S *s, u32 id)
{
    if (id <= 9) {
        return (u8)(id + 0xf);
    }
    return 0x26;
}

extern "C" u32 PocketMenu_HitLetter(S *s, s32 a, s32 b, s32 c)
{
    s32 r = _ZN10LetterGrid18findPocketLetterAtEii((u8 *)s + 0xdb8);
    if (r != 0x37) {
        if (c && LetterGrid_IsSlotEmpty((u8 *)s + 0xdb8, r)) {
            return 0x26;
        }
        return PocketMenu_LetterIndexToTarget(s, r);
    }
    return 0x26;
}

extern "C" s32 PocketMenu_DropLetterAt(S *s, u32 id)
{
    if (!PocketMenu_IsSlotEmpty(s, id)) {
        Letter_Copy(s->s_2c8c, PocketMenu_GetLetter(s, id));
        PocketMenu_SetLetter(s, s->handSource, s->s_2c8c);
    }
    _ZN10PocketMenu11putHandBackEjj(s, id, 1);
    return 1;
}

extern "C" void PocketMenu_SetLetter(S *s, u32 id, void *p)
{
    if (PocketMenu_IsLetterTarget(s, id)) {
        _ZN10LetterGrid19func_ov094_02294318Eii((u8 *)s + 0xdb8, PocketMenu_TargetToLetterIndex(s, id), p);
    }
}

extern "C" BOOL PocketMenu_HitShirtBox(S *s, s32 x, s32 y)
{
    if (x < 4 || x >= 0x1c) {
        return FALSE;
    }
    if (y < 0xac || y >= 0xc4) {
        return FALSE;
    }
    return TRUE;
}

extern "C" s32 PocketMenu_HitSpecialTarget(S *s, s32 x, s32 y)
{
    if (PocketMenu_HitPlayer(s, x, y)) {
        return 0x24;
    }
    if (x > 0x6c && x < 0xc4 && y > 0x50 && y < 0x68) {
        if (x < 0x98) {
            return 0x22;
        }
        return 0x23;
    }
    if (PocketMenu_HitWalletIcon(s, x, y)) {
        if (_ZN10PocketMenu9testFlagsEj(s, 0x4000)) {
            return 0x26;
        }
        return 0x25;
    }
    if (x > 0x30 && x < 0x60 && y > 0x50 && y < 0x60) {
        if (_ZN10PocketMenu9testFlagsEj(s, 0x4000)) {
            return 0x26;
        }
        return 0x25;
    }
    _ZN10PocketMenu10clearFlagsEj(s, 0x4000);
    return 0x26;
}

extern "C" BOOL PocketMenu_HitPlayer(S *s, s32 x, s32 y)
{
    if (x > 0x88 && x < 0xa8 && y > 0x20 && y < 0x50) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL PocketMenu_HitWalletIcon(S *s, s32 x, s32 y)
{
    if (InventoryItemGrid_HitTestSlot21(s->s_358, x, y)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" s32 PocketMenu_HitWalletAmount(S *s, s32 x, s32 y)
{
    s32 v;

    if (y < 0x50 || y > 0x60) {
        return 0;
    }
    s->bellsPanelMode = 0;
    if (x < 0x30) {
        return 0;
    }
    if (x < 0x40) {
        v = 10000;
        s->bellsPanelMode = 3;
    } else if (x < 0x48) {
        v = 1000;
        s->bellsPanelMode = 2;
    } else if (x < 0x60) {
        v = 100;
        s->bellsPanelMode = 1;
    } else {
        return 0;
    }
    if (v > _ZN10PocketMenu14getWalletBellsEv(s)) {
        return 1;
    }
    s->auxItem = Item_FindMoneyBagForAmount(v, 0, 0);
    return 2;
}

extern "C" s32 PocketMenu_GetTargetX(S *s, u32 id)
{
    if (PocketMenu_IsPocketTarget(s, id)) {
        return InventoryItemGrid_GetSlotX((u8 *)s + 0x358, PocketMenu_TargetToGridIndex(s, id));
    }
    if (PocketMenu_IsLetterTarget(s, id)) {
        return LetterGrid_GetSlotX((u8 *)s + 0xdb8, PocketMenu_TargetToLetterIndex(s, id));
    }
    if (PocketMenu_IsTabTarget(s, id)) {
        return MenuTabBar_GetTabX(id - 0x19) - 8;
    }
    if (PocketMenu_IsSpecialTarget(s, id)) {
        return InventoryItemGrid_GetSlotX((u8 *)s + 0x358, PocketMenu_TargetToGridIndex(s, id));
    }
    return 0;
}

extern "C" s32 PocketMenu_GetTargetY(S *s, u32 id)
{
    if (PocketMenu_IsPocketTarget(s, id)) {
        return InventoryItemGrid_GetSlotY((u8 *)s + 0x358, PocketMenu_TargetToGridIndex(s, id));
    }
    if (PocketMenu_IsLetterTarget(s, id)) {
        return LetterGrid_GetSlotY((u8 *)s + 0xdb8, PocketMenu_TargetToLetterIndex(s, id));
    }
    if (PocketMenu_IsTabTarget(s, id)) {
        return 8;
    }
    if (PocketMenu_IsSpecialTarget(s, id)) {
        return InventoryItemGrid_GetSlotY((u8 *)s + 0x358, PocketMenu_TargetToGridIndex(s, id));
    }
    if (id == 0x21) {
        return 0xb0;
    }
    return 0;
}

extern "C" s32 func_ov096_02297c68(S *s, u32 id)
{
    if (PocketMenu_IsPocketTarget(s, id)) {
        return InventoryItemGrid_IsSlotDisabled((u8 *)s + 0x358, PocketMenu_TargetToGridIndex(s, id));
    }
    if (PocketMenu_IsLetterTarget(s, id)) {
        return _ZN10LetterGrid13isHighlightedEi((u8 *)s + 0xdb8, PocketMenu_TargetToLetterIndex(s, id));
    }
    return 0;
}

extern "C" s32 PocketMenu_IsSlotEmpty(S *s, u32 id)
{
    if (PocketMenu_IsPocketTarget(s, id)) {
        return InventoryItemGrid_IsSlotEmpty((u8 *)s + 0x358, PocketMenu_TargetToGridIndex(s, id));
    }
    if (PocketMenu_IsLetterTarget(s, id)) {
        return LetterGrid_IsSlotEmpty((u8 *)s + 0xdb8, PocketMenu_TargetToLetterIndex(s, id));
    }
    return 1;
}

extern "C" u32 PocketMenu_GetItem(S *s, u32 id)
{
    if (PocketMenu_IsPocketTarget(s, id)) {
        return InventoryItemGrid_GetSlotItem((u8 *)s + 0x358, PocketMenu_TargetToGridIndex(s, id));
    }
    if (PocketMenu_IsLetterTarget(s, id)) {
        if (PocketMenu_IsSlotEmpty(s, id)) {
            return 0xfff1;
        }
        return _ZN10LetterView10getPresentEv(PocketMenu_GetLetter(s, id));
    }
    if (PocketMenu_IsSpecialTarget(s, id)) {
        return s->auxItem;
    }
    return 0xfff1;
}

extern "C" s32 PocketMenu_GetItemFlags(S *s, u32 id)
{
    if (PocketMenu_IsPocketTarget(s, id)) {
        return InventoryItemGrid_GetSlotFlags((u8 *)s + 0x358, PocketMenu_TargetToGridIndex(s, id));
    }
    if (PocketMenu_IsLetterTarget(s, id)) {
        return _ZN10LetterView15getPresentFlagsEv(PocketMenu_GetLetter(s, id));
    }
    PocketMenu_IsSpecialTarget(s, id);
    return 0;
}

// ===== unit 02297b14 =====
extern "C" void *PocketMenu_GetLetter(S *s, u32 id)
{
    if (PocketMenu_IsLetterTarget(s, id)) {
    } else {
        return 0;
    }
    return _ZN10LetterGrid9getLetterEi((u8 *)s + 0xdb8, PocketMenu_TargetToLetterIndex(s, id));
}

s32 PocketMenu::checkPlace(u32 a, u32 b, u32 c) {
    u16 tmp = 0xfff1;
    if (PocketMenu_IsPocketTarget((S *)this, a)) {
        return 0;
    }
    if (PocketMenu_IsLetterTarget((S *)this, a)) {
        if (PocketMenu_IsSlotEmpty((S *)this, a)) {
            return 6;
        }
        if (c == 1) {
            return 5;
        }
        if (c == 2) {
            return 1;
        }
        void *p = PocketMenu_GetLetter((S *)this, a);
        if (_ZN10LetterView10getPresentEv(p) != 0xfff1) {
            return 3;
        }
        s32 s = _ZN10LetterView8getStateEv(p);
        if (s == 7 || s == 8 || func_ov094_02292414(b)) {
            return 2;
        }
        if (InvItem_IsTurnipFishOrInsect(b)) {
            return 4;
        }
        tmp = b;
        if (Unk_ov096_022979f0_InRange(&tmp, 0x1492, 0x14fd) && handSource == 0x25) {
            return 5;
        }
        return 0;
    }
    if (a == 0x25) {
        if (c != 0) {
            return 6;
        }
        tmp = b;
        if (!Unk_ov096_022979f0_InRange(&tmp, 0x1492, 0x14fd)) {
            return 6;
        }
        s32 t = 0x1869f - getWalletBells();
        if (t < (s32)Item_GetPrice(&tmp)) {
            return 6;
        }
        return 0;
    }
    switch (a) {
    case 0x24:
        return 6;
    }
    return 6;
}

s32 PocketMenu::checkSwap(u32 a, u32 b) {
    s32 r = checkPlace(a, handItem, handItemFlags);
    if (r == 0) {
        u16 t = PocketMenu_GetItem((S *)this, a);
        if (t == 0xfff1) {
            return 0;
        }
        u32 v = PocketMenu_GetItemFlags((S *)this, a);
        if (b == 0x25) {
            u16 t2 = handItem;
            r = _ZN10PocketMenu10mergeItemsEPtiS0_h((S *)this, &t2, handItemFlags, &t, v);
            if ((u32)(r - 2) <= 1) {
                return 6;
            }
            if (t == 0xfff1) {
                return 0;
            }
        }
        r = checkPlace(b, t, v);
    }
    return r;
}

s32 PocketMenu::checkPlaceHand(u32 a) {
    return checkPlace(a, handItem, handItemFlags);
}

s32 PocketMenu::canNavToPlayer(u32 a) {
    if (a == 0) {
        return 1;
    }
    if (a == 2) {
        return 0;
    }
    if (a == 1) {
        if (getUseOnPlayerKind() != 1) {
            return 1;
        }
        return 0;
    }
    return 0;
}

s32 PocketMenu::canNavToDropArea(u32 a) {
    if (a == 1) {
        return canDropHeldItem();
    }
    return 0;
}

s32 PocketMenu::canNavToWallet(u32 a) {
    if (a == 2) {
        return 0;
    }
    if (a == 0) {
        return 1;
    }
    if (a == 1) {
        return isHoldingMoneyBag(0);
    }
    return 0;
}

void PocketMenu::clearSelection() {
    InventoryItemGrid_ClearCursorSlot(unk_358);
    _ZN10LetterGrid15clearCursorSlotEv(unk_db8);
}

void PocketMenu::selectTarget(u32 a) {
    if (PocketMenu_IsPocketTarget((S *)this, a)) {
        s32 s = PocketMenu_TargetToGridIndex((S *)this, a);
        _ZN10LetterGrid15clearCursorSlotEv(unk_db8);
        InventoryItemGrid_SetCursorSlot(unk_358, s);
    } else if (PocketMenu_IsLetterTarget((S *)this, a)) {
        s32 s = PocketMenu_TargetToLetterIndex((S *)this, a);
        InventoryItemGrid_ClearCursorSlot(unk_358);
        _ZN10LetterGrid13setCursorSlotEj(unk_db8, s);
    } else {
        InventoryItemGrid_ClearCursorSlot(unk_358);
        _ZN10LetterGrid15clearCursorSlotEv(unk_db8);
    }
}

void PocketMenu::clearHighlights() {
    InventoryItemGrid_ClearMarks(unk_358);
    _ZN10LetterGrid10clearMarksEv(unk_db8);
    InventoryBg_ResetHighlight(unk_de0);
}

void PocketMenu::highlightTarget(u32 a) {
    if (PocketMenu_IsPocketTarget((S *)this, a)) {
        InventoryItemGrid_MarkSlot(unk_358, PocketMenu_TargetToGridIndex((S *)this, a));
    } else if (PocketMenu_IsLetterTarget((S *)this, a)) {
        _ZN10LetterGrid8markSlotEi(unk_db8, PocketMenu_TargetToLetterIndex((S *)this, a));
    } else if (PocketMenu_IsSpecialTarget((S *)this, a)) {
        switch (a) {
        case 0x25:
            InventoryItemGrid_MarkSlot(unk_358, 0x21);
            break;
        case 0x22:
        case 0x23:
            InventoryBg_SetHighlight(unk_de0, 0);
            break;
        case 0x24:
            InventoryBg_SetHighlight(unk_de0, 1);
            break;
        }
    } else if (a == 0x21) {
        InventoryItemGrid_MarkSlot(unk_358, 0x22);
    }
}

BOOL PocketMenu::hasTouchMoved() {
    s32 d = gTouchPressX - gTouchCurX;
    if (d < 0) {
        d = -d;
    }
    if (d > 8) {
        return TRUE;
    }
    d = gTouchPressY - gTouchCurY;
    if (d < 0) {
        d = -d;
    }
    if (d > 8) {
        return TRUE;
    }
    return FALSE;
}

BOOL PocketMenu::isTouchHeldFor(s32 v) {
    if (gTouchHoldFrames >= v) {
        return TRUE;
    }
    return FALSE;
}

void PocketMenu::positionLabelBalloon() {
    s32 x = PocketMenu_GetTargetX((S *)this, balloonTarget) - 0x6d;
    s32 y = PocketMenu_GetTargetY((S *)this, balloonTarget) - 0x78;
    if (MenuCtrl_IsButtons()) {
        y -= 8;
    }
    _ZN12LabelBalloon6setPosEii(unk_23c0, x, y);
    if (PocketMenu_IsPocketTarget((S *)this, balloonTarget)) {
        s32 s = PocketMenu_TargetToGridIndex((S *)this, balloonTarget);
        InventoryItemGrid_ShowSlotName(unk_358, unk_23c0, s);
    } else if (PocketMenu_IsLetterTarget((S *)this, balloonTarget)) {
        s32 s = PocketMenu_TargetToLetterIndex((S *)this, balloonTarget);
        _ZN10LetterGrid14showLetterNameEPvi(unk_db8, unk_23c0, s);
    }
}

void PocketMenu::updateLabelBalloon() {
    if (PocketMenu_IsPocketTarget((S *)this, cursorTarget) || PocketMenu_IsLetterTarget((S *)this, cursorTarget)) {
        if (PocketMenu_IsSlotEmpty((S *)this, cursorTarget)) {
            _ZN18TouchPromptBalloon16cancelQueuedOpenEv(unk_23c0);
        } else {
            balloonTarget = cursorTarget;
            _ZN18TouchPromptBalloon9queueOpenEv(unk_23c0);
        }
    }
    if (PocketMenu_IsTabTarget((S *)this, cursorTarget) || PocketMenu_IsSpecialTarget((S *)this, cursorTarget)) {
        _ZN18TouchPromptBalloon16cancelQueuedOpenEv(unk_23c0);
    }
}

void PocketMenu::drawHand() {
    if (testFlags(0x40) == 0) {
        if (handKind != 0) {
            if (handKind == 2) {
                InventoryItemGrid_DrawHeldItem(unk_358, handX, handY);
            } else if (handKind == 1) {
                _ZN10LetterGrid14drawHeldLetterEiiPv(unk_db8, handX, handY, unk_2b98);
            }
        }
    }
}

void PocketMenu::syncHandFromTouch() {
    handX = grabOffsetX + gTouchCurX;
    handY = grabOffsetY + gTouchCurY;
}

void PocketMenu::syncHandFromCursor() {
    handX = _ZN14MenuCursorBase15getFrameScreenXEv(unk_2498) - 2;
    handY = _ZN14MenuCursorBase15getFrameScreenYEv(unk_2498) - 4;
}

void PocketMenu::syncHandFromMover() {
    handX = _ZN12CursorMotion4getXEv(unk_2480);
    handY = _ZN12CursorMotion4getYEv(unk_2480);
}

void PocketMenu::setHandItem(u32 a, u32 b) {
    handKind = 2;
    handItem = a;
    handItemFlags = b;
    InventoryItemGrid_SetHeldItem(unk_358, handItem, handItemFlags);
    updateHandPrice();
}

void PocketMenu::pickUpItemFrom(u32 a) {
    handKind = 2;
    handItem = PocketMenu_GetItem((S *)this, a);
    handItemFlags = PocketMenu_GetItemFlags((S *)this, a);
    PocketMenu_ClearSlotItem((S *)this, a);
    InventoryItemGrid_SetHeldItem(unk_358, handItem, handItemFlags);
    updateHandPrice();
}

void PocketMenu::pickUpLetter(u32 a) {
    s32 r = PocketMenu_TargetToLetterIndex((S *)this, a);
    handKind = 1;
    void *p = _ZN10LetterGrid9getLetterEi(unk_db8, r);
    Letter_Copy(unk_2b98, p);
    _ZN10LetterGrid11clearLetterEi(unk_db8, r);
}

void PocketMenu::pickUp(u32 a) {
    if (PocketMenu_IsPocketTarget((S *)this, a)) {
        pickUpItemFrom(a);
    } else if (PocketMenu_IsLetterTarget((S *)this, a)) {
        pickUpLetter(a);
    } else if (a == 0x25) {
        pickUpItemFrom(a);
        _ZN10PocketMenu18withdrawFromWalletEt(this, handItem);
    }
}

void PocketMenu::pickUpItem(u32 a) {
    if (PocketMenu_IsPocketTarget((S *)this, a) || PocketMenu_IsLetterTarget((S *)this, a)) {
        pickUpItemFrom(a);
    }
}

void PocketMenu::putHandBack(u32 k, u32 f) {
    switch (handKind) {
    case 1:
        PocketMenu_SetLetter((S *)this, k, unk_2b98);
        break;
    case 2:
        PocketMenu_SetSlotItem((S *)this, k, handItem, handItemFlags);
        break;
    }
    if (f != 0) {
        clearHand();
    }
}

void PocketMenu::returnHand(u32 f) {
    if (checkPlaceHand(handSource) == 0) {
        putHandBack(handSource, f);
    } else if (swapTarget != 0x26) {
        u32 a = PocketMenu_GetItem((S *)this, swapTarget);
        u32 b = PocketMenu_GetItemFlags((S *)this, swapTarget);
        putHandBack(swapTarget, 1);
        PocketMenu_SetSlotItem((S *)this, handSource, a, b);
        swapTarget = 0x26;
    }
}

void PocketMenu::swapHandWith(u32 a) {
    switch (handKind) {
    case 1:
        Letter_Copy(unk_2c8c, unk_2b98);
        pickUp(a);
        PocketMenu_SetLetter((S *)this, a, unk_2c8c);
        break;
    case 2: {
        u32 x = handItem;
        u32 y = handItemFlags;
        pickUpItem(a);
        PocketMenu_SetSlotItem((S *)this, a, x, y);
        break;
    }
    }
}

s32 PocketMenu::placeHandAt(u32 a) {
    s32 r;
    switch (handKind) {
    case 2:
        r = PocketMenu_DropItemAt((S *)this, a);
        break;
    case 1:
        r = PocketMenu_DropLetterAt((S *)this, a);
        break;
    default:
        r = 0;
        break;
    }
    return r;
}

s32 PocketMenu::dropHeldItem() {
    if (!canDropHeldItem()) {
        PocketMenu_ReturnToIdle((S *)this);
        PocketMenu_ShowMessage((S *)this, 9, 0xff, 1);
        returnHand(1);
        return 0;
    }
    s32 r = requestDropItem(handItem);
    if (r == 0) {
        returnHand(1);
        return 0;
    }
    if (r == 1) {
        clearHand();
        return 1;
    }
    if (r == 2) {
        setMainState(0x28);
        clearFlags(0x1000);
        return 0;
    }
    returnHand(1);
    return 0;
}

BOOL PocketMenu::canDropHeldItem() {
    if (handKind != 2) {
        return FALSE;
    }
    if (handItemFlags != 0) {
        return FALSE;
    }
    volatile u16 t = handItem;
    if (Unk_ov096_022968bc_InRange(&t, 0x1492, 0x14fd) && handSource == 0x25) {
        return FALSE;
    }
    return canDropItem(*(volatile u16 *)&handItem);
}

void PocketMenu::clearHand() {
    handKind = 0;
    MenuCtrl_SetHandBells(0);
}

void PocketMenu::startUseOnPlayer() {
    setMainState(0x25);
    _ZN10PocketMenu9mainAct25Ev((S *)this);
    clearFlags(0x8000);
}

s32 PocketMenu::getUseOnPlayerKind() {
    if (handKind != 2) {
        return 1;
    }
    if (handItemFlags != 0) {
        return 1;
    }
    volatile u16 t = handItem;
    BOOL r = FALSE;
    u32 v = t;
    u32 w = t;
    if (w >= 0x11a8 && v <= 0x12a7) {
        r = TRUE;
    }
    if (r) {
        return 2;
    }
    if ((v >= 0x1431 && v <= 0x1470) || (v >= 0x1471 && v <= 0x1491)) {
        t = getEquipped(4);
        u32 b = t;
        u32 a = t;
        if (a != 0xfff1 && b >= 0x13a8 && b <= 0x13c7 && !func_0204bab8((u16 *)&t)) {
            return 6;
        }
        return 3;
    }
    if (v >= 0x13a8 && v <= 0x13c7) {
        if (getEquipped(3) != 0xfff1 && !func_0204bab8((u16 *)&t)) {
            return 0;
        }
        return 4;
    }
    if ((v >= 0x13c8 && v <= 0x1407) || (v >= 0x1408 && v <= 0x1428)) {
        return 4;
    }
    if (Item_IsHoldable((u16 *)&t)) {
        return 5;
    }
    BOOL q = FALSE;
    u32 x = t;
    u32 y = t;
    if (y >= 0x1518 && x <= 0x151c) {
        q = TRUE;
    }
    if (q || (x >= 0x1531 && x <= 0x153a) || (x >= 0x153b && x <= 0x1541)) {
        return 7;
    }
    if (x >= 0x155e && x <= 0x155e) {
        return 8;
    }
    return 1;
}

u16 PocketMenu::getEquipped(s32 k) {
    void *o = PlayerData_GetCurrent();
    switch (k) {
    case 2:
        return *_ZN10PlayerData8getShirtEv(o);
    case 3:
        return *_ZN10PlayerData11getFaceItemEv(o);
    case 4:
        return *_ZN10PlayerData6getHatEv(o);
    case 5:
        return *_ZN10PlayerData11getHeldItemEv(o);
    }
    return 0xfff1;
}

u16 PocketMenu::swapEquipped(s32 k, u16 v) {
    u16 r = getEquipped(k);
    void *o = PlayerData_GetCurrent();
    volatile u16 t = v;
    switch (k) {
    case 2:
        _ZN10PlayerData8setShirtEPt(o, (u16 *)&t);
        t = r;
        if (!Unk_ov096_022968bc_InRange(&t, 0x11a8, 0x12a7)) {
            r = 0xfff1;
        }
        break;
    case 3:
        _ZN10PlayerData11setFaceItemEPt(o, (u16 *)&t);
        break;
    case 6:
        _ZN10PlayerData11setFaceItemEPt(o, (u16 *)&t);
        r = getEquipped(4);
        t = 0xfff1;
        _ZN10PlayerData6setHatEPt(o, (u16 *)&t);
        break;
    case 4:
        _ZN10PlayerData6setHatEPt(o, (u16 *)&t);
        t = r;
        if (Unk_ov096_022968bc_InRange(&t, 0x1429, 0x1430)) {
            r = 0xfff1;
        }
        break;
    case 5:
        t = r;
        if (Unk_ov096_022968bc_InRange(&t, 0x13a0, 0x13a7)) {
            r = 0xfff1;
        }
        break;
    case 7:
    case 8:
        break;
    }
    return r;
}

BOOL PocketMenu::requestUseOnPlayer(s32 k, u16 v) {
    u16 t = v;
    switch (k) {
    case 2:
        if (PlayerActor_RequestWearShirt(&t)) {
            return TRUE;
        }
        break;
    case 3:
        if (PlayerActor_RequestWearFaceItem(&t)) {
            return TRUE;
        }
        break;
    case 6:
        if (PlayerActor_RequestWearFaceItem(&t)) {
            t = 0xfff1;
            PlayerActor_RequestWearHat(&t);
            return TRUE;
        }
        break;
    case 4:
        if (PlayerActor_RequestWearHat(&t)) {
            return TRUE;
        }
        break;
    case 5:
        if (PlayerActor_RequestChangeHeldItem(&t)) {
            return TRUE;
        }
        break;
    case 7:
        if (PlayerActor_RequestHoldUpItem(&t)) {
            if (!Camera_IsViewPushed()) {
                Snd_PlaySe(0x40);
            }
            return TRUE;
        }
        break;
    case 8:
        if (PlayerActor_RequestFaceChange()) {
            return TRUE;
        }
        break;
    }
    return FALSE;
}

BOOL PocketMenu::isUseOnPlayerBusy(s32 k) {
    switch (k) {
    case 5:
        return PlayerActor_IsChangingHeldItem();
    case 7:
    case 8:
        if (PlayerActor_IsInAct05()) {
            return FALSE;
        }
        return TRUE;
    default:
        return PlayerActor_IsChangingClothes();
    }
}

void PocketMenu::cancelUseOnPlayer() {
    PocketMenu_ReturnToIdle((S *)this);
    returnHand(1);
    if (useOnPlayerKind == 0) {
        PocketMenu_ShowMessage((S *)this, 7, 0xff, 1);
    }
}

void PocketMenu::updateHandPrice() {
    volatile u16 t = handItem;
    if (Unk_ov096_022968bc_InRange(&t, 0x1492, 0x14fd)) {
        MenuCtrl_SetHandBells(Item_GetPrice((u16 *)&t));
    } else {
        MenuCtrl_SetHandBells(0);
    }
}

BOOL PocketMenu::depositHeldBag() {
    u16 t = handItem;
    Item_GetPrice(&t);
    u32 r = depositToWallet(handItem);
    if (r == 0xfff1) {
        clearHand();
        PocketMenu_ReturnToIdle((S *)this);
    } else {
        handItem = r;
        InventoryItemGrid_SetHeldItem(unk_358 + 0, handItem, handItemFlags);
        PocketMenu_FlyHandTo((S *)this, handSource, 4);
    }
    return TRUE;
}

BOOL PocketMenu::isHoldingMoneyBag(s32 flag) {
    if (handKind != 2) {
        return FALSE;
    }
    if (handItemFlags != 0) {
        return FALSE;
    }
    volatile u16 t = handItem;
    if (Unk_ov096_022968bc_InRange(&t, 0x1492, 0x14fd)) {
        if (flag) {
            if (Item_GetPrice((u16 *)&t) + getWalletBells() > 0x1869f) {
                return FALSE;
            }
        }
        return TRUE;
    }
    return FALSE;
}

s32 PocketMenu::getWalletBells() {
    return _ZN15PlayerInventory13getTotalBellsEi(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()), 0);
}

void PocketMenu::setWalletBells(s32 v) {
    PlayerInventory_SetWallet(_ZN10PlayerData12getInventoryEv(PlayerData_GetCurrent()), v, 0);
    InventoryBg_StartBellRoll(unk_de0 + 0, 0);
}

void PocketMenu::withdrawFromWallet(u16 v) {
    u16 t = v;
    u32 a = Item_GetPrice(&t);
    getWalletBells();
    u32 b = getWalletBells();
    setWalletBells(b - a);
}

u32 PocketMenu::depositToWallet(u16 v) {
    u16 t = v;
    u32 e;
    u32 a = Item_GetPrice(&t);
    s32 x;
    a += getWalletBells();
    u32 r = 0xfff1;
    if (a > 0x1869f) {
        e = a - 0x1869f;
        r = Item_FindMoneyBagForAmount(e, 1, &x);
        a -= e + x;
    }
    setWalletBells(a);
    return r;
}

s32 PocketMenu::mergeItems(u16 *a, s32 f, u16 *b, u8 g) {
    u16 loc[3];
    u32 a4, b4, lim;
    BOOL ok;
    BOOL ok2;
    s32 d0;
    if (f != 0 || g != 0) {
        return 1;
    }
    loc[0] = *a;
    loc[1] = *b;
    ok = FALSE;
    u32 x0 = *(volatile u16 *)&loc[0];
    u32 y0 = *(volatile u16 *)&loc[0];
    if (y0 >= 0x1531 && x0 <= 0x153a) {
        ok = TRUE;
    }
    if (ok) {
        ok2 = FALSE;
        u32 x1 = *(volatile u16 *)&loc[1];
        u32 y1 = *(volatile u16 *)&loc[1];
        if (y1 >= 0x1531 && x1 <= 0x153a) {
            ok2 = TRUE;
        }
        if (ok2) {
            d0 = Unk_ov096_022969bc_Idx(x0) + 1;
            s32 d1 = Unk_ov096_022969bc_Idx(x1) + 1;
            d0 += d1;
            s32 rem;
            if (d0 > 10) {
                rem = d0 - 10;
                d0 = 10;
            } else {
                rem = 0;
            }
            s32 n1 = d0 - 1;
            *a = Unk_ov096_022969bc_Ch(n1);
            if (rem > 0) {
                s32 n2 = rem - 1;
                *b = Unk_ov096_022969bc_Ch(n2);
            } else {
                *b = 0xfff1;
            }
            return 0;
        }
    }
    BOOL q;
    if (x0 >= 0x1492 && x0 <= 0x14fd) {
        q = TRUE;
    } else {
        q = FALSE;
    }
    if (q) {
        BOOL q2 = FALSE;
        u32 x2 = *(volatile u16 *)&loc[1];
        u32 y2 = *(volatile u16 *)&loc[1];
        if (y2 >= 0x1492 && x2 <= 0x14fd) {
            q2 = TRUE;
        }
        if (q2) {
            goto go;
        }
    }
    return 1;
go:
    a4 = Item_GetPrice(&loc[0]);
    b4 = Item_GetPrice(&loc[1]);
    loc[2] = 0x14fd;
    lim = Item_GetPrice(&loc[2]);
    {
        s32 out;
        BOOL n4 = (s32)a4 < 1000 ? TRUE : FALSE;
        BOOL n6 = (s32)b4 < 1000 ? TRUE : FALSE;
        if (n4 != n6) {
            return 2;
        }
        if (a4 == lim || b4 == lim) {
            return 3;
        }
        if ((s32)a4 < 1000) {
            a4 += b4;
            if ((s32)a4 > 1000) {
                b4 = a4 - 1000;
                a4 = 1000;
            } else {
                b4 = 0;
            }
        } else {
            a4 += b4;
            if ((s32)a4 <= (s32)lim) {
                b4 = 0;
            } else {
                b4 = a4 - lim;
                a4 = lim;
            }
        }
        *a = Item_FindMoneyBagForAmount(a4, 1, &out);
        if (b4 == 0) {
            *b = 0xfff1;
        } else {
            *b = Item_FindMoneyBagForAmount(b4, 1, &out);
        }
    }
    return 0;
}

void PocketMenu::func_ov096_02296964() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    _ZN14MenuCursorBase6warpToEii(unk_2498, a, b);
    if (PocketMenu_IsTabTarget((S *)this, cursorTarget)) {
        _ZN10MenuCursor16setAnimIfChangedEi(unk_2498, 0xd);
    } else {
        _ZN10MenuCursor16setAnimIfChangedEi(unk_2498, 1);
    }
    func_ov096_022966e8();
}

void PocketMenu::func_ov096_02296910() {
    popupRow = _ZN19PopupChoiceMenuBody11getRowCountEv(unk_24fc) - 1;
    s32 a = _ZN19PopupChoiceMenuBody7getRowXEv(unk_24fc);
    s32 b = _ZN19PopupChoiceMenuBody7getRowYEi(unk_24fc, popupRow);
    _ZN14MenuCursorBase6warpToEii(unk_2498, a, b);
    _ZN10MenuCursor16setAnimIfChangedEi(unk_2498, 7);
}

s32 PocketMenu::getCursorTargetX() {
    s32 t = PocketMenu_GetTargetX((S *)this, cursorTarget);
    if (testFlags(0x20)) {
        t += 0x100;
    } else if (testFlags(0x10)) {
        t -= 0x100;
    }
    return t + 8;
}

// ===== unit 022968bc =====

s32 PocketMenu::getCursorTargetY() {
    return PocketMenu_GetTargetY((S *)this, cursorTarget);
}

void PocketMenu::hideCursor() {
    _ZN10MenuCursor16setAnimIfChangedEi(unk_2498, 0);
    ((UiWidget *)unk_2498)->vfunc_0c();
}

void PocketMenu::func_ov096_02296854() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    _ZN14MenuCursorBase10moveToEaseEiiii(unk_2498, a, b, 3, 1);
    returnState = mainState;
    setMainState(0xf);
}

void PocketMenu::func_ov096_02296804() {
    s32 a = _ZN19PopupChoiceMenuBody7getRowXEv(unk_24fc);
    s32 b = _ZN19PopupChoiceMenuBody7getRowYEi(unk_24fc, popupRow);
    _ZN14MenuCursorBase12moveToLinearEiii(unk_2498, a, b, 2);
    returnState = mainState;
    setMainState(0xf);
}

void PocketMenu::func_ov096_022967a0() {
    chosenAction = 0x22;
    popupRow = PopupChoice_DecideCancel(unk_24fc, 1);
    s32 a = _ZN19PopupChoiceMenuBody7getRowXEv(unk_24fc);
    s32 b = _ZN19PopupChoiceMenuBody7getRowYEi(unk_24fc, popupRow);
    _ZN14MenuCursorBase6warpToEii(unk_2498, a, b);
    _ZN10HandCursor12setAnimAtEndEi(unk_2498, 8);
    setMainState(0x1e);
}

void PocketMenu::func_ov096_0229673c() {
    if (testFlags(0x40000)) {
        popupRow = 1;
    } else {
        popupRow = 0;
    }
    s32 a = _ZN19PopupChoiceMenuBody7getRowXEv(unk_24fc);
    s32 b = _ZN19PopupChoiceMenuBody7getRowYEi(unk_24fc, popupRow);
    _ZN14MenuCursorBase6warpToEii(unk_2498, a, b);
    _ZN10MenuCursor16setAnimIfChangedEi(unk_2498, 7);
}

void PocketMenu::placeCursorOnTarget() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    _ZN14MenuCursorBase6warpToEii(unk_2498, a, b);
    _ZN10MenuCursor16setAnimIfChangedEi(unk_2498, 1);
}

void PocketMenu::func_ov096_022966e8() {
    _ZN14MenuCursorBase11setPoseIdleEv(unk_2498);
    ((UiWidget *)unk_2498)->vfunc_0c();
}

void PocketMenu::func_ov096_022966c8() {
    _ZN10MenuCursor12setPosePressEv(unk_2498);
    setMainState(0x10);
}

void PocketMenu::func_ov096_022966a8() {
    _ZN14MenuCursorBase14setPoseReleaseEv(unk_2498);
    setMainState(0x11);
}

void PocketMenu::actionAct00() {
    _ZN10MenuCursor16setAnimIfChangedEi(unk_2498, 4);
    setMainState(0x12);
    swapTarget = 0x26;
}

void PocketMenu::func_ov096_02296638(u32 v) {
    _ZN18TouchPromptBalloon4hideEi(unk_23c0, 1);
    placeTarget = v;
    _ZN10MenuCursor16setAnimIfChangedEi(unk_2498, 5);
    setMainState(0x14);
    clearFlags(0x2000);
}

void PocketMenu::func_ov096_022965f0(u32 v) {
    _ZN18TouchPromptBalloon4hideEi(unk_23c0, 1);
    returnState = mainState;
    placeTarget = v;
    _ZN10MenuCursor16setAnimIfChangedEi(unk_2498, 6);
    setMainState(0x15);
}

BOOL PocketMenu::canDropItem(s32 a) {
    if (Unk_ov096_0229652c_IsZero(gFieldSceneKind)) {
        return PocketMenu_CanDropOutdoor(this, a);
    }
    if (Scene_InHouseRoom()) {
        if (PocketMenu_CanEditRoom(this)) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

s32 PocketMenu::requestDropItem(s32 a) {
    if (Unk_ov096_0229652c_IsZero(gFieldSceneKind)) {
        fieldRequest = FieldAction_RequestDrop(gCommManager->unk_64, a);
        if (fieldRequest == -1) {
            PocketMenu_ReturnToIdle((S *)this);
            PocketMenu_ShowMessage((S *)this, 3, 0xff, 0);
            Snd_PlaySe(0x73);
            return 0;
        }
        return 2;
    }
    if (Scene_InHouseRoom()) {
        return PocketMenu_RequestDropIndoor(this, a);
    }
    return 0;
}

void PocketMenu::actionDropItem() {
    u32 t = actionTarget;
    s32 r6 = PocketMenu_GetItem((S *)this, t);
    if (!canDropItem(r6)) {
        PocketMenu_ReturnToIdle((S *)this);
        PocketMenu_ShowMessage((S *)this, 9, 0xff, 1);
    } else {
        s32 r = requestDropItem(r6);
        if (r != 0) {
            if (r == 2) {
                setMainState(0x28);
                setFlags(0x1000);
            } else {
                s32 x = PocketMenu_TargetToGridIndex((S *)this, t);
                InventoryItemGrid_ClearSlot(unk_358, x);
                PocketMenu_ReturnToIdle((S *)this);
            }
        }
    }
}

void PocketMenu::actionAct04() {
    MenuCtrl_SetArg(getActionLetter());
    func_ov096_022956d0();
    clearFlags(0x200);
}

void PocketMenu::actionEditLetter() {
    MenuCtrl_SetSavedSlot(actionTarget);
    MenuCtrl_SetArg(getActionLetter());
    requestTab(8);
    hideTabBar();
}

void PocketMenu::actionTakeAttachment() {
    s32 r6 = PocketMenu_FindEmptyPocket((S *)this);
    if (r6 == 0x26) {
        PocketMenu_ReturnToIdle((S *)this);
        PocketMenu_ShowMessage((S *)this, 0xb, 0xff, 1);
    } else {
        s32 a = PocketMenu_GetItemFlags((S *)this, actionTarget);
        s32 b = PocketMenu_GetItem((S *)this, actionTarget);
        PocketMenu_ClearSlotItem((S *)this, actionTarget);
        ((void (*)(S *, u32, u32, u32, s32))PocketMenu_FlyItemTo)((S *)this, actionTarget, r6, b, a);
    }
}

BOOL PocketMenu::allocLetterSlot() {
    s32 t = Inventory_FindEmptyLetter();
    if (t == -1) {
        PocketMenu_ReturnToIdle((S *)this);
        PocketMenu_ShowMessage((S *)this, 2, 0xff, 1);
        return FALSE;
    }
    MenuCtrl_SetSavedSlot(actionTarget);
    paperTarget = actionTarget;
    actionTarget = t + 0xf;
    return TRUE;
}

void PocketMenu::actionWriteLetter() {
    if (allocLetterSlot()) {
        MenuCtrl_SetArg(getActionLetter());
        func_ov096_022956d0();
        setFlags(0x200);
    }
}

void PocketMenu::actionAct08() {
    if (allocLetterSlot()) {
        s32 t = (s32)getActionLetter();
        Letter_InitBottleDraft();
        MenuCtrl_SetArg((void *)t);
        PocketMenu_ClearSlotItem((S *)this, paperTarget);
        requestTab(8);
        hideTabBar();
    }
}

void PocketMenu::actionTakeOutBells() {
    s32 v;
    s32 r;
    switch (chosenAction) {
    case 0xb:
        v = Item_FindMoneyBagForAmount(getWalletBells(), 0, 0);
        break;
    case 0xc:
        v = Item_FindMoneyBagForAmount(0x64, 0, 0);
        break;
    case 0xd:
        v = Item_FindMoneyBagForAmount(0x3e8, 0, 0);
        break;
    case 0xe:
        v = Item_FindMoneyBagForAmount(0x2710, 0, 0);
        break;
    }
    r = PocketMenu_FindEmptyPocket((S *)this);
    if (r == 0x26) {
        PocketMenu_ReturnToIdle((S *)this);
        PocketMenu_ShowMessage((S *)this, 0xc, 0xff, 1);
    } else {
        _ZN10PocketMenu18withdrawFromWalletEt(this, v);
        ((void (*)(S *, u32, u32, u32, s32))PocketMenu_FlyItemTo)((S *)this, 0x25, r, v, 0);
    }
}

void PocketMenu::actionTakeOff() {
    BOOL ok = TRUE;
    volatile u16 v = 0xfff1;
    u32 k = chosenAction;
    switch (k) {
    case 0xf:
        useOnPlayerKind = 3;
        break;
    case 0x10:
        useOnPlayerKind = 4;
        v = getEquipped(4);
        if (Unk_ov096_0229619c_Range(&v, 0x1429, 0x1430)) {
            ok = FALSE;
        }
        break;
    case 0x11:
        useOnPlayerKind = 5;
        v = getEquipped(5);
        if (Unk_ov096_0229619c_Range(&v, 0x13a0, 0x13a7)) {
            ok = FALSE;
        }
        break;
    default:
        PocketMenu_ReturnToIdle((S *)this);
        return;
    }
    s32 r = PocketMenu_FindEmptyPocket((S *)this);
    if (ok && r == 0x26) {
        PocketMenu_ReturnToIdle((S *)this);
        PocketMenu_ShowMessage((S *)this, 0xa, 0xff, 0);
        Snd_PlaySe(0x73);
        return;
    }
    handSource = r;
    clearHand();
    handItem = 0xfff1;
    startUseOnPlayer();
    setFlags(0x8000);
}

void PocketMenu::actionUnwrapItem() {
    u32 t = actionTarget;
    pickUpItemFrom(t);
    handX = PocketMenu_GetTargetX((S *)this, t);
    handY = PocketMenu_GetTargetY((S *)this, t);
    if (MenuCtrl_IsButtons()) {
        handX = handX - 2;
        handY = handY - 2;
    }
    setMainState(0x2b);
    InventoryItemGrid_StartPresentAnim(unk_358, handItem, handItemFlags);
}

void PocketMenu::actionAct09() {
    u32 t = actionTarget;
    pickUpLetter(t);
    handX = PocketMenu_GetTargetX((S *)this, t);
    handY = PocketMenu_GetTargetY((S *)this, t);
    if (MenuCtrl_IsButtons()) {
        handX = handX - 2;
        handY = handY - 2;
    }
    setMainState(0x2a);
    LetterGrid_StartPopAnim(unk_db8);
}

void PocketMenu::actionAct0A() { openConfirmList(); }

void PocketMenu::actionAct1A() {
    setMainState(0x31);
    _ZN10PocketMenu9mainAct31Ev((S *)this);
}

void PocketMenu::actionOpenCountdownMenu() {
    ChoiceIdList_Clear(unk_27f0, 0x22);
    ChoiceIdList_Add(unk_27f0, 0xdd, 0x1d);
    ChoiceIdList_Add(unk_27f0, 0xde, 0x1e);
    ChoiceIdList_Add(unk_27f0, 0xdf, 0x1f);
    ChoiceIdList_Add(unk_27f0, 0xe0, 0x20);
    ChoiceIdList_Add(unk_27f0, 0x2, 0x22);
    hideCursor();
    showOptionList(0);
}

void PocketMenu::setCountdown(s32 n) {
    CommManager *g = gCommManager;
    if (g->isOnline()) {
        if (g->unk_64 == 0) {
            BOOL z;
            if (n == 0) {
                z = TRUE;
            } else {
                z = FALSE;
            }
            if (z != _ZN12HudCountdown9isStoppedEv(Hud_GetCountdown())) {
                CommSub_Send((u8)(n + 0x12), 4);
                HudCountdown_StartWithSe(n);
            }
        } else {
            CommSub_Send((u8)(n + 0xd), 0);
        }
    } else {
        HudCountdown_StartWithSe(n);
    }
}

void PocketMenu::actionStopCountdown() {
    setCountdown(0);
    PocketMenu_ReturnToIdle((S *)this);
}

// ===== unit 02295f94 =====

void PocketMenu::actionStartCountdown() {
    setCountdown(chosenAction - 0x1c);
    PocketMenu_ReturnToIdle((S *)this);
}

void PocketMenu::runChosenAction() {
    u32 c = chosenAction;
    if (c != 0x22 && c != 0 && c != 0xf && c != 0x10 && c != 0x11 && c != 0x1a) {
        requestCameraPop();
    }
    if (chosenAction == 0x22) {
        PocketMenu_ReturnToIdle((S *)this);
        return;
    }
    static Unk_ov096_0229aea8_Fn tbl[34] = {
        &PocketMenu::actionAct00, &PocketMenu::actionAct00,
        &PocketMenu::actionDropItem, &PocketMenu::actionReadLetter,
        &PocketMenu::actionAct04, &PocketMenu::actionEditLetter,
        &PocketMenu::actionTakeAttachment, &PocketMenu::actionWriteLetter,
        &PocketMenu::actionAct08, &PocketMenu::actionAct09,
        &PocketMenu::actionAct0A, &PocketMenu::actionTakeOutBells,
        &PocketMenu::actionTakeOutBells, &PocketMenu::actionTakeOutBells,
        &PocketMenu::actionTakeOutBells, &PocketMenu::actionTakeOff,
        &PocketMenu::actionTakeOff, &PocketMenu::actionTakeOff,
        &PocketMenu::actionUseWallpaper, &PocketMenu::actionUseCarpet,
        &PocketMenu::actionUnwrapItem, &PocketMenu::actionReleaseInsect,
        &PocketMenu::actionBuryItem, &PocketMenu::actionPlantItem,
        &PocketMenu::actionReleaseFish, &PocketMenu::actionThrowBottle,
        &PocketMenu::actionAct1A, &PocketMenu::actionOpenCountdownMenu,
        &PocketMenu::actionStopCountdown, &PocketMenu::actionStartCountdown,
        &PocketMenu::actionStartCountdown, &PocketMenu::actionStartCountdown,
        &PocketMenu::actionStartCountdown, &PocketMenu::actionAct21};
    (this->*tbl[chosenAction])();
}

void PocketMenu::showOptionList(s32 a) {
    u32 r6;
    s32 r2;
    _ZN19PopupChoiceMenuBody14setRowsFromIdsEP17PopupChoiceIdListi(unk_24fc, unk_27f0, testFlags(0x40000));
    r6 = PocketMenu_GetTargetX((S *)this, actionTarget);
    r2 = PocketMenu_GetTargetY((S *)this, actionTarget);
    if (actionTarget == 0x25) {
        _ZN15PopupChoiceMenu10placeAboveEii(unk_24fc, 0x68, 0x68);
    } else if (a != 0) {
        _ZN15PopupChoiceMenu17placeAboveBalloonEP12LabelBalloon(unk_24fc, unk_23c0, r2);
    } else {
        _ZN15PopupChoiceMenu14placeNearPointEii(unk_24fc, r6, r2);
    }
    PopupChoice_Open(unk_24fc, 0);
    setMainState(0x1d);
}

void PocketMenu::cancelOptions() {
    Snd_PlaySe(0x2a);
    chosenAction = 0x22;
    placeCursorOnTarget();
    PopupChoice_Close(unk_24fc, 0);
    setMainState(0x1f);
}

void PocketMenu::func_ov096_02295c2c() {
    Snd_PlaySe(0x28);
    addressee = 0xf;
    PopupChoice_Close(unk_24fc, 1);
    setMainState(0x24);
    hideCursor();
}

s32 PocketMenu::playActionSe() {
    switch (chosenAction) {
    case 0x12:
    case 0x13:
        Snd_PlaySe(0x50);
        break;
    case 0x14:
        Snd_PlaySe(0x71);
        break;
    case 9:
        Snd_PlaySe(0x24);
        return 0;
    case 2:
    case 0x16:
    case 0x17:
        Snd_PlaySe(0x25);
        return 0;
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
        return 0;
    default:
        break;
    }
    return 1;
}

void PocketMenu::addItemOptions(s32 a) {
    volatile u16 v;
    if (MenuCtrl_IsButtons()) {
        ChoiceIdList_Add(unk_27f0, 0, 0);
    }
    s32 r4 = PocketMenu_GetItemFlags((S *)this, a);
    a = PocketMenu_GetItem((S *)this, a);
    v = a;
    if (r4 == 0) {
        if (Unk_ov096_02295a44_Range(&v, 0x156c, 0x156c)) {
            if (_ZN12HudCountdown9isStoppedEv(Hud_GetCountdown())) {
                ChoiceIdList_Add(unk_27f0, 0xdc, 0x1b);
            } else {
                ChoiceIdList_Add(unk_27f0, 0xe1, 0x1c);
            }
        }
    }
    switch (r4) {
    case 0:
        if (canDropItem(a)) {
            ChoiceIdList_Add(unk_27f0, Unk_ov096_0229590c_IsZero(gFieldSceneKind) ? 1 : 0xa, 2);
        }
        if (Unk_ov096_0229590c_IsZero(gFieldSceneKind)) {
            _ZN10PocketMenu15addFieldOptionsEt(this, a);
        } else if (Scene_InHouseRoom()) {
            PocketMenu_AddRoomItemOptions(this, a);
        }
        {
            BOOL r = FALSE;
            u32 a = v;
            u32 b = v;
            if (b >= 0x1000 && a <= 0x10ff) r = TRUE;
            if (r) {
                ChoiceIdList_Add(unk_27f0, 0x1c, 7);
            } else if (a >= 0x151f && a <= 0x151f) {
                ChoiceIdList_Add(unk_27f0, 0x1c, 8);
            }
        }
        break;
    case 1:
        ChoiceIdList_Add(unk_27f0, 9, 0x14);
        break;
    case 2:
        if (InvItem_IsDeliveryItem(a) == 0) {
            ChoiceIdList_Add(unk_27f0, 0x17, 0x14);
        }
        break;
    }
}

void PocketMenu::addLetterOptions(s32 a) {
    void *o = PocketMenu_GetLetter((S *)this, a);
    if (MenuCtrl_IsButtons()) {
        ChoiceIdList_Add(unk_27f0, 0, 1);
    }
    s32 t = _ZN10LetterView8getStateEv(o);
    clearFlags(8);
    switch (t) {
    case 1:
        ChoiceIdList_Add(unk_27f0, 0x16, 5);
        ChoiceIdList_Add(unk_27f0, 0x20, 4);
        break;
    case 4:
        if (Unk_ov096_0229590c_IsZero(gFieldSceneKind)) {
            _ZN10PocketMenu15addBottleOptionEv(this);
        }
        ChoiceIdList_Add(unk_27f0, 0x16, 5);
        if (testFlags(8) == 0) {
            if (_ZN10LetterView10getPresentEv(o) == 0xfff1) {
                if (Unk_ov096_0229590c_IsZero(gFieldSceneKind)) {
                    ChoiceIdList_Add(unk_27f0, 0x15, 0xa);
                }
            }
        }
        break;
    case 7:
        ChoiceIdList_Add(unk_27f0, 0x17, 3);
        break;
    case 0:
        break;
    default:
        ChoiceIdList_Add(unk_27f0, 0x14, 3);
        break;
    }
    if (_ZN10LetterView10getPresentEv(o) != 0xfff1) {
        ChoiceIdList_Add(unk_27f0, 0x18, 6);
    } else if (t == 1 || t == 3 || t == 6) {
        if (Unk_ov096_0229590c_IsZero(gFieldSceneKind)) {
            ChoiceIdList_Add(unk_27f0, 0x15, 0xa);
        }
    }
}

void PocketMenu::addTakeOutBellsOptions() {
    s32 r = getWalletBells();
    if (r >= 0x64) {
        ChoiceIdList_Add(unk_27f0, 0x6e, 0xb);
        ChoiceIdList_Add(unk_27f0, 0x6f, 0xc);
    }
    if (r >= 0x3e8) {
        ChoiceIdList_Add(unk_27f0, 0x70, 0xd);
    }
    if (r >= 0x2710) {
        ChoiceIdList_Add(unk_27f0, 0x71, 0xe);
    }
}

void PocketMenu::addTakeOffOptions() {
    if (getEquipped(5) != 0xfff1) {
        ChoiceIdList_Add(unk_27f0, 0x75, 0x11);
    }
    if (getEquipped(4) != 0xfff1) {
        ChoiceIdList_Add(unk_27f0, 0x76, 0x10);
    }
    if (getEquipped(3) != 0xfff1) {
        ChoiceIdList_Add(unk_27f0, 0x77, 0xf);
    }
}

void PocketMenu::openTargetOptions(u32 a, s32 b) {
    clearFlags(0x40000);
    actionTarget = a;
    ChoiceIdList_Clear(unk_27f0, 0x22);
    if (PocketMenu_IsPocketTarget((S *)this, a)) {
        addItemOptions(a);
    } else if (PocketMenu_IsLetterTarget((S *)this, a)) {
        addLetterOptions(a);
    } else if (a == 0x25) {
        addTakeOutBellsOptions();
    } else if (a == 0x24) {
        addTakeOffOptions();
    } else if (a != 0x27) {
        return;
    }
    if (ChoiceIdList_Count(unk_27f0) == 0) {
        if (PocketMenu_IsPocketTarget((S *)this, a) || PocketMenu_IsLetterTarget((S *)this, a)) {
            ChoiceIdList_Add(unk_27f0, 0x7c, 0x22);
        } else if (a == 0x25 || a == 0x27) {
            ChoiceIdList_Add(unk_27f0, 0x7b, 0x22);
            actionTarget = 0x25;
        } else if (a == 0x24) {
            ChoiceIdList_Add(unk_27f0, 0x7a, 0x22);
        }
    } else {
        ChoiceIdList_Add(unk_27f0, 2, 0x22);
    }
    hideCursor();
    if (b == 0) {
        _ZN18TouchPromptBalloon4hideEi(unk_23c0, 1);
    }
    showOptionList(b);
    if (PocketMenu_IsPocketTarget((S *)this, a) == 0 && a != 0x24) {
        requestCameraPop();
    }
}

void PocketMenu::openConfirmList() {
    setFlags(0x40000);
    ChoiceIdList_Clear(unk_27f0, 0x22);
    ChoiceIdList_Add(unk_27f0, 0x1a, 0x22);
    ChoiceIdList_Add(unk_27f0, 0x15, 9);
    ChoiceIdList_Add(unk_27f0, 0x19, 0x22);
    showOptionList(0);
}

void PocketMenu::func_ov096_022956d0() {
    addresseePage = 0;
    func_ov096_022956a0(1);
}

void PocketMenu::func_ov096_022956a0(s32 x) {
    hideCursor();
    PopupChoice_OpenAddresseePage(unk_24fc, addresseePage, x);
    setMainState(0x22);
}

// ===== unit 0229567c =====

extern "C" u32 PocketMenu_GetPlayerSlot() {
    u8 *g = (u8 *)gCommManager;
    u32 v = *(u32 *)(g + 0x64);
    if (_ZN11CommManager12isSlotActiveEi(g, v)) {
        return (u8)v;
    }
    return 0;
}

void PocketMenu::moveCursorInPockets(void *pad, s32 mode) {
    s32 col = cursorTarget;
    s32 row = 0;
    while (col >= 5) {
        col -= 5;
        row++;
    }
    if (MenuKeys_HasLeft(pad)) {
        if (!MenuKeys_HasUp(pad) || row == 0) {
            if (col == 0) {
                if (row == 2 && isHoldingShirt()) {
                    cursorTarget = 0x21;
                    return;
                }
                cursorTarget = (row + 2) * 2 + 0x10;
                setFlags(0x10);
            } else {
                cursorTarget = cursorTarget - 1;
                col = col - 1;
            }
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (!MenuKeys_HasDown(pad)) {
            if (col == 4) {
                cursorTarget = (row + 2) * 2 + 0xf;
            } else {
                cursorTarget = cursorTarget + 1;
                col = col + 1;
            }
        }
    }
    if (PocketMenu_IsPocketTarget((S *)this, cursorTarget)) {
        if (!testFlags(0x30)) {
            if (MenuKeys_HasUp(pad)) {
                if (row > 0) {
                    cursorTarget = cursorTarget - 5;
                } else if (col <= 2 && canNavToWallet(mode)) {
                    cursorTarget = 0x25;
                } else if (canNavToDropArea(mode)) {
                    cursorTarget = 0x22;
                } else if (canNavToPlayer(mode)) {
                    cursorTarget = 0x24;
                }
            } else if (MenuKeys_HasDown(pad)) {
                if (row < 2) {
                    cursorTarget = cursorTarget + 5;
                }
            }
        }
    }
}

void PocketMenu::moveCursorInLetters(void *pad, s32 mode) {
    s32 t = cursorTarget - 0xf;
    s32 row = t >> 1;
    if (MenuKeys_HasLeft(pad)) {
        if ((t & 1) > 0) {
            cursorTarget = cursorTarget - 1;
        } else if (mode == 2) {
        } else if (row >= 2) {
            cursorTarget = (row - 2) * 5 + 4;
        } else {
            s32 a = canNavToDropArea(mode);
            s32 b = canNavToPlayer(mode);
            if (a & b) {
                if (row == 0) {
                    cursorTarget = 0x24;
                } else {
                    cursorTarget = 0x22;
                }
            } else if (a != 0) {
                cursorTarget = 0x22;
            } else if (b != 0) {
                cursorTarget = 0x24;
            } else if (canNavToWallet(mode)) {
                cursorTarget = 0x25;
            } else {
                cursorTarget = 4;
            }
        }
    } else if (MenuKeys_HasRight(pad)) {
        if ((t & 1) < 1) {
            cursorTarget = cursorTarget + 1;
        } else if (mode == 2) {
        } else {
            setFlags(0x20);
            if (row < 2) {
                if (canNavToWallet(mode)) {
                    cursorTarget = 0x25;
                } else {
                    s32 a = canNavToDropArea(mode);
                    s32 b = canNavToPlayer(mode);
                    if (a & b) {
                        if (row == 0) {
                            cursorTarget = 0x24;
                        } else {
                            cursorTarget = 0x22;
                        }
                    } else if (a != 0) {
                        cursorTarget = 0x22;
                    } else if (b != 0) {
                        cursorTarget = 0x24;
                    } else {
                        cursorTarget = 0;
                    }
                }
            } else {
                if (row == 4 && isHoldingShirt()) {
                    cursorTarget = 0x21;
                    return;
                }
                cursorTarget = (row - 2) * 5;
            }
        }
    }
    if (PocketMenu_IsLetterTarget((S *)this, cursorTarget)) {
        if (!testFlags(0x30)) {
            if (MenuKeys_HasUp(pad)) {
                if (row > 0) {
                    cursorTarget = cursorTarget - 2;
                } else if (mode == 0) {
                    PocketMenu_MoveCursorToTab((S *)this);
                    _ZN10MenuCursor14switchToAnim0DEv(unk_2498);
                }
            } else if (MenuKeys_HasDown(pad)) {
                if (row < 4) {
                    cursorTarget = cursorTarget + 2;
                }
            }
        }
    }
}

void PocketMenu::moveCursorInTabs(void *pad, s32 mode) {
    if (MenuKeys_HasLeft(pad)) {
        if (*(volatile u8 *)&cursorTarget > 0x19) {
            cursorTarget = cursorTarget - 1;
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (*(volatile u8 *)&cursorTarget < 0x20) {
            cursorTarget = cursorTarget + 1;
        }
    }
    if (MenuKeys_HasDown(pad)) {
        s32 d = cursorTarget - 0x19;
        if (d == 7) {
            cursorTarget = 0x10;
        } else if (d == 6) {
            cursorTarget = 0xf;
        } else if (d == 0) {
            cursorTarget = 0x25;
        } else {
            cursorTarget = 0x24;
        }
        _ZN10MenuCursor14switchToAnim01Ev(unk_2498);
    }
}

void PocketMenu::moveCursorInPlayerArea(void *pad, s32 mode) {
    u32 v = cursorTarget;
    if (v == 0x24) {
        if (MenuKeys_HasLeft(pad)) {
            if (canNavToWallet(mode)) {
                cursorTarget = 0x25;
            } else {
                setFlags(0x10);
                cursorTarget = 0x10;
            }
        } else if (MenuKeys_HasRight(pad)) {
            cursorTarget = 0xf;
        } else if (MenuKeys_HasUp(pad)) {
            if (mode == 0) {
                PocketMenu_MoveCursorToTab((S *)this);
                _ZN10MenuCursor14switchToAnim0DEv(unk_2498);
            }
        } else if (MenuKeys_HasDown(pad)) {
            if (canNavToDropArea(mode)) {
                cursorTarget = 0x22;
            } else {
                cursorTarget = 4;
            }
        }
    } else if ((u8)(v + 0xde) <= 1) {
        if (MenuKeys_HasLeft(pad)) {
            if (canNavToWallet(mode)) {
                cursorTarget = 0x25;
            } else {
                setFlags(0x10);
                cursorTarget = 0x12;
            }
        } else if (MenuKeys_HasRight(pad)) {
            cursorTarget = 0x11;
        } else if (MenuKeys_HasUp(pad)) {
            if (canNavToPlayer(mode)) {
                cursorTarget = 0x24;
            }
        } else if (MenuKeys_HasDown(pad)) {
            cursorTarget = 4;
        }
    } else if (v == 0x25) {
        if (MenuKeys_HasLeft(pad)) {
            setFlags(0x10);
            cursorTarget = 0x12;
        } else if (MenuKeys_HasRight(pad)) {
            if (canNavToDropArea(mode)) {
                cursorTarget = 0x22;
            } else if (canNavToPlayer(mode)) {
                cursorTarget = 0x24;
            } else {
                cursorTarget = 0x11;
            }
        } else if (MenuKeys_HasUp(pad)) {
            if (mode == 0) {
                PocketMenu_MoveCursorToTab((S *)this);
                _ZN10MenuCursor14switchToAnim0DEv(unk_2498);
            }
        } else if (MenuKeys_HasDown(pad)) {
            cursorTarget = 1;
        }
    }
}

BOOL PocketMenu::moveCursorByPad(void *pad, s32 mode) {
    u8 old = cursorTarget;
    clearFlags(0x30);
    if (pad == 0) {
        return FALSE;
    }
    if (PocketMenu_IsPocketTarget((S *)this, cursorTarget)) {
        moveCursorInPockets(pad, mode);
    } else if (PocketMenu_IsLetterTarget((S *)this, cursorTarget)) {
        moveCursorInLetters(pad, mode);
    } else if (PocketMenu_IsTabTarget((S *)this, cursorTarget)) {
        moveCursorInTabs(pad, mode);
    } else if (PocketMenu_IsSpecialTarget((S *)this, cursorTarget)) {
        moveCursorInPlayerArea(pad, mode);
    } else if (cursorTarget == 0x21) {
        if (MenuKeys_HasRight(pad)) {
            cursorTarget = 0xa;
        } else if (MenuKeys_HasLeft(pad)) {
            cursorTarget = 0x18;
            setFlags(0x10);
        }
    }
    if (old != cursorTarget) {
        return TRUE;
    }
    return FALSE;
}

void PocketMenu::actionReadLetter() {
    setTransitionState(5);
    setPhase(1);
    setFlags(0x80);
    hideTabBar();
}

void PocketMenu::closeLetterView() {
    setMainState(0x21);
    _ZN11LabelButton8setStateEi(unk_2b14, 2);
    Snd_PlaySe(0x29);
}

void PocketMenu::closeLetterViewAndMenu() {
    closeLetterView();
    _ZN10MenuTabBar9selectTabEj(ProcBase_GetParent(this), 7);
    setFlags(0x20000);
}

void *PocketMenu::getActionLetter() { return PocketMenu_GetLetter((S *)this, actionTarget); }

void PocketMenu::writeLetterOnPaper() {
    u16 v;
    void *r4 = getActionLetter();
    v = PocketMenu_GetItem((S *)this, paperTarget);
    s32 r6 = Item_GetPaperIndex(&v);
    Letter_InitDraft(r4, (u8)r6);
    _ZN19PopupChoiceMenuBody14applyAddresseeEPvj(unk_24fc, r4, addressee);
    MenuCtrl_SetArg(r4);
    requestTab(8);
    hideTabBar();
    u32 n = Item_GetPaperCount(&v);
    s32 r2;
    if (n <= 1) {
        r2 = 0xfff1;
    } else {
        r2 = Item_MakePaper(r6, n - 1);
    }
    PocketMenu_SetSlotItem((S *)this, paperTarget, r2, 0);
}

void PocketMenu::requestCameraPush() {
    setFlags(0x400);
    setFlags(0x800);
}

void PocketMenu::requestCameraPop() {
    clearFlags(0x400);
    setFlags(0x800);
}

void PocketMenu::updateCameraView() {
    if (testFlags(0x800)) {
        if (Camera_IsViewPushed()) {
            if (!testFlags(0x400)) {
                Camera_PopView();
            }
        } else {
            if (testFlags(0x400)) {
                Camera_PushView();
            }
        }
        clearFlags(0x800);
    }
}

void PocketMenu::wearHeldShirt() {
    struct {
        u16 a;
        u16 b;
    } l;
    l.a = *_ZN12Unk_02097ff413func_020983ccEv(PlayerData_GetCurrent());
    l.b = handItem;
    MenuScreen_UploadClothPattern(&l.b, &unk_320, &unk_e8, &unk_c8);
    BOOL ok = FALSE;
    volatile u16 *pv = &l.a;
    u16 a = *pv;
    u16 b = *pv;
    if (b >= 0x11a8 && a <= 0x12a7) {
        ok = TRUE;
    }
    if (ok) {
        handItem = a;
        returnHand(1);
    } else {
        clearHand();
    }
    Snd_PlaySe(0x6b);
}

BOOL PocketMenu::isHoldingShirt() {
    struct Pad {
        s32 v[2];
        Pad() {}
        ~Pad() {}
    } pad;
    BOOL r;
    if (handKind == 2 && handItemFlags == 0 && handItem >= 0x11a8 && handItem <= 0x12a7) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    return r;
}

BOOL PocketMenu::testFlags(u32 mask) {
    if (stateFlags & mask) {
        return TRUE;
    }
    return FALSE;
}

void PocketMenu::setFlags(u32 mask) { stateFlags = stateFlags | mask; }

void PocketMenu::clearFlags(u32 mask) { stateFlags = stateFlags & ~mask; }

// ===== unit 02294c40 =====

// destructor is implicit (member destructors run in reverse order)

