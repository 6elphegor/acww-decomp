// ov002: shared library overlay (menu / cursor / slider helpers used by the scene overlays).
#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"
#include "ui/CursorMotion.h"
#include "sys/KeyRepeat.h"
#include "menu/MenuTween.h"
#include "menu/PopupChoiceIdList.h"
#include "ui/AddresseePageArg.h"
#include "ui/OamCellEntry.h"
#include "talk/TalkWindowState.h"
#include "gfx/SpriteAnim.h"
#include "ui/UiWidget.h"
#include "talk/LabelBalloonText.h"
#include "menu/MenuSlide.h"
#include "talk/MsgString.h"
#include "talk/MsgRequest.h"
#include "menu/MenuProc.h"
#include "ui/HandCursor.h"
#include "ui/ScrollKnob.h"
#include "ui/LabelButton.h"
#include "ui/LabelString.h"
#include "ui/LabelBalloon.h"
#include "ui/TouchPromptBalloon.h"
#include "menu/MenuTitleBalloon.h"
#include "menu/MenuLabelButton.h"
#include "menu/MenuCursor.h"
#include "menu/MenuScrollKnob.h"
#include "menu/PopupChoiceRow.h"
#include "menu/MenuBottomButtons.h"
#include "menu/PopupChoiceMenu.h"
#include "talk/TalkMsgRequest.h"
#include "menu/MenuErrorMessage.h"

// ---------------------------------------------------------------------------------------------------------------------
// Real names of functions of other modules (plain names that are really methods / ctors / dtors)
#define VillagerId_getName _ZN10VillagerId7getNameEj
#define VillagerData_getVillagerId _ZN12VillagerData13getVillagerIdEv
#define func_02094018 _ZN11MsgString9BD1Ev
#define func_02094030 _ZN11MsgString9BC1Ev
#define PlayerId_getNameString _ZN8PlayerId13getNameStringEP9MsgString
#define PlayerData_getPlayerId _ZN10PlayerData11getPlayerIdEv
#define func_0206fcc8 _ZN11LabelStringC1Ev
#define func_0206fca8 _ZN11LabelStringD1Ev
#define MsgString_copy _ZN9MsgString4copyEPS_
#define MsgString_append _ZN9MsgString6appendEPh
#define MsgString_appendString _ZN9MsgString12appendStringEPS_
#define LabelButton_setLabelText _ZN11LabelButton12setLabelTextEv

extern "C" {
BOOL _ZN8ProcBase10postDeleteEv(void *self, s32 a);
void _ZN8GameProc10postCreateEv(void *self, s32 a);
void _ZN16MenuTitleBalloon8showTextEhii(void *self, s32 x, s32 a, s32 b);
void VillagerId_getName(s32 a, void *buf);
s32 VillagerData_getVillagerId(void *self);
void func_02094018(void *p);
void func_02094030(void *p);
void PlayerId_getNameString(s32 a, void *buf);
s32 PlayerData_getPlayerId(void *self);
void func_0206fcc8(void *p);
void func_0206fca8(void *p);
void MsgString_copy(void *self, void *src);
void MsgString_append(void *self, const void *s);
void MsgString_appendString(void *self, void *src);
void LabelButton_setLabelText(void *self, void *src);

void Gfx2d_SetWindowRect(s32 a, s32 x0, s32 y0, s32 x1, s32 y1);
void Gfx2d_SetLayerOffset(s32 a, s32 b, s32 c);
void Snd_PlaySe(s32 a);
void MenuScreen_ClearState();
BOOL MenuScreen_IsClosed();
BOOL MenuScreen_IsOpen();
void MenuCtrl_SetButtons();
void MenuCtrl_SetTouch();
void MenuCtrl_RemoveOpenMenu(void *p);
void MenuCtrl_AddOpenMenu(void *p);
void Gfx2d_EnableMainWindows(s32 a);
void Gfx2d_SetMainWin0Planes(s32 a);
s32 Gfx2d_GetMainWindows();
void Gfx2d_RemoveMainWinOutPlanes(s32 a);
void Gfx2d_SetMainWinOutPlanes(s32 a);
void Gfx2d_EnableSubWindows(s32 a);
void Gfx2d_SetSubWin0Planes(s32 a, s32 b);
void Gfx2d_SetSubWinOutPlanes(s32 a);
void Gfx2d_DisableSubWindows(s32 a);
void Gfx2d_DisableMainWindows(s32 a);
void *Heap_AllocTail(void *heap, u32 size);
void Heap_Free(void *heap, void *p);
void *func_0212899c(void *p, s32 v, u32 n);
void *ProcBase_GetParent(void *p);
void ProcBase_SetExecutePriority(void *p, u32 v);
void ProcBase_SetDrawPriority(void *p, u32 v);
s32 func_01ffcb0c(s32 a, s32 b);
void Letter_SetRecipientFutureSelf(void *p);
void Letter_SetRecipientResident(void *p, s32 a);
void Letter_SetRecipientVillager(void *p, s32 a);
void String_Load2d(void *buf, u8 *c, s32 z);
void String_FromEncodedBytes(void *dst, const void *s, s32 len);
void String_Load2dMenu(void *a, s32 v);
void *PlayerData_GetCurrent();
s32 PlayerDataArray_FindById(void *a, s32 b);
s32 PlayerDataArray_IsUsed(void *a, s32 b);
void *PlayerData_GetResident(void *a, s32 b);
s32 SaveVillagers_IsOccupied(void *a, s32 b);
void *SaveVillagers_Get(void *a, s32 b);
s32 Villager_FindMemory(void *a, s32 b);
BOOL MenuCtrl_IsButtons();
void Gfx2d_HideLayer(s32 a);
s32 Gfx2d_GetLayerPlaneMask(s32 a);
s32 Gfx2d_EndSubObjWinBrightness();
s32 Gfx2d_BeginSubObjWinBrightness();
void Gfx2d_GetLayerBlendMask(s32 a);
void Gfx2d_ExcludeSubBrightnessPlanes();
s32 Gfx2d_SetSubBrightness(s32 a);
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_SetLayerPriority(s32 a, u32 b);
void Gfx2d_SetLayerControl(s32 a, s32 b, s32 c, s32 d);
u8 *File_LoadAlloc(const char *path, void *heap, s32 a, s32 b);
void MIi_CpuCopy16(void *dst, void *src, s32 n);
void MIi_CpuClear16(s32 v, void *dst, s32 n);
void Gfx2d_LoadScreen(void *buf, s32 a, s32 b, s32 c);
void Gfx2d_LoadPaletteFile(const char *buf, void *h, s32 x, s32 a, s32 b, s32 c);
void Gfx2d_LoadCharFile(const char *buf, void *h, s32 x, s32 a, s32 b, s32 c);
void Gfx2d_LoadScreenFile(char *buf, void *h, s32 x);
s32 func_020639e8(char *buf, const char *fmt, ...);
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
void GXS_LoadOBJPltt(const void *p, u32 a, u32 b);
s32 MenuCtrl_IsForceCloseDue();

extern void *gMenuHeap;
extern void *gCurrentHeap;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern volatile u16 gPad[];
extern u8 gSavePlayers[];
extern u8 gSaveVillagers[];
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchPressX;
extern u8 gTouchPressY;
extern u8 gTalkMsgIndexEnd[];
}

void operator delete(void *p);

// Constructors / destructors that the symbols name differently from what the compiler generates (base-object C2 without
// the unused C1, ctor/dtor of the 0x0220464c family) are defined as extern "C" functions with their real mangled names.
extern "C" {
extern char _ZTV9MenuTween[];
extern char _ZTV8MenuProc[];
extern char _ZTV19MenuLabelButtonBase[];
extern void *_ZTV10MenuCursor[7];
extern void *_ZTV14MenuCursorBuf0[7];
extern void *_ZTV14MenuCursorBuf1[7];
extern char _ZTV8GameProc[];
void *_ZN8ProcBaseC2Ev(void *self);
void *_ZN11LabelButtonC2Ehi(void *self, u8 a, s32 b);
void *_ZN10HandCursorC2Ei(void *self, s32 flag);
void *_ZN10HandCursorD2Ev(void *self);
void *_ZN9KeyRepeatC1Ev(void *self);
void *_ZN9MenuSlideC1Ev(void *self);
void *_ZN12CursorMotionC1Ev(void *self);
void *_ZN12CursorMotionD1Ev(void *self);
void _ZN10HandCursor4drawEv();
void _ZN14MenuCursorBase6updateEv();
void _ZN8UiWidget9setOriginEii();
}

// ---------------------------------------------------------------------------------------------------------------------
// Classes of the main module














extern "C" TalkWindowState *TalkWindow_Get(s32 a);

// ---------------------------------------------------------------------------------------------------------------------
// Overlay 2 classes


extern "C" {
extern const u8 sTextButtonPressOffsets[];
extern const u8 sMenuButtonTextColors[];
extern const u8 sBottomButtonTargetX[];
extern const u8 sBottomButtonTargetY[];
extern const u8 sBottomButtonOfTarget[];
extern s32 sPopupChoicePopOffsets[];
extern OamCellEntry sButtonCellsW4A[];
extern OamCellEntry sButtonCellsW4B[];
extern OamCellEntry sButtonCellsW6Single[];
extern OamCellEntry sButtonCellsW8[];
extern OamCellEntry sButtonCellsW6A[];
extern OamCellEntry sButtonCellsW6B[];
extern OamCellEntry sButtonCellsW12[];
}







class MenuProc;
typedef void (MenuProc::*Unk_ov002_02200a68_Fn)();


#include "menu/MenuTextButton.h"


















typedef PopupChoiceMenuBody Self;


// Plain functions of the menu (they take the menu object first)
extern "C" {
void PopupChoice_SetAddresseeName(s32 unused, s32 x, u32 id);
void PopupChoice_CopyVillagerName(s32 x, s32 y);
void PopupChoice_CopyVillagerIdName(s32 a, s32 b);
void PopupChoice_CopyResidentName(s32 x, s32 y);
void PopupChoice_CopyPlayerIdName(s32 a, s32 b);
BOOL PopupChoice_MoveCursor(Self *self, s32 p, u8 *pos, u32 n);
BOOL PopupChoice_TickDecideDelay(Self *self);
void PopupChoice_DecideAddressee(Self *self, u32 x);
u8 PopupChoice_DecideCancel(Self *self, s32 x);
void PopupChoice_DecideRow(Self *self, s32 a, s32 b);
void PopupChoice_StartDecide(Self *self, s32 x);
void PopupChoice_ForceClose(Self *self);
void PopupChoice_Draw(Self *self);
void PopupChoice_Update(Self *self);
void PopupChoice_FitWidth(Self *self);
s32 PopupChoice_GetHeight(Self *self);
s32 PopupChoice_GetWidth(Self *self);
void PopupChoice_StepSlideClose(Self *self);
void PopupChoice_StepSlideOpen(Self *self);
void PopupChoice_ApplySlide(Self *self);
void PopupChoice_StepPopClose(Self *self);
void PopupChoice_StepPopOpen(Self *self);
void PopupChoice_BuildScreen(Self *self);
void PopupChoice_SetState(Self *self, u32 x);
void PopupChoice_Close(Self *self, s32 x);
void PopupChoice_Open(Self *self, s32 x);
void PopupChoice_OpenAddresseePage(Self *self, AddresseePageArg a, s32 x);
void PopupChoice_LoadFriendBg(Self *self);
void PopupChoice_LoadChoiceBg(Self *self);
void PopupChoice_SetPosClamped(Self *self, s32 x, s32 y);
void PopupChoice_SetPos(Self *self, s32 x, s32 y);
void PopupChoice_ApplyScroll(Self *self, s32 x, s32 y);
BOOL MenuKeys_HasRight(u32 v);
BOOL MenuKeys_HasLeft(u32 v);
BOOL MenuKeys_HasDown(u32 v);
BOOL MenuKeys_HasUp(u32 v);
s32 ChoiceIdList_Count(u8 *p);
void ChoiceIdList_Clear(u8 *p, u8 v);
BOOL ChoiceIdList_Add(u8 *p, u32 a, u32 b);
void Menu_LoadPaperBg(s32 a, void *b);
void Menu_PlayScrollGrabSe();
void Menu_PlayScrollTickSe();
void MenuButtons_LoadTextColors();
}

static inline BOOL Unk_ov002_022009d4_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

// ---- .rodata
extern "C" OamCellEntry sButtonCellsW8[5] = {
    {0x81f440a0, 0x14c, 0, 0xc, 0x0},
    {0x801440a0, 0x150, 0, 0xc, 0x0},
    {0x800440a0, 0xd0, 0, 0xb, 0x0},
    {0x901c40a0, 0xcf, 0, 0xb, 0x0},
    {0x81ec40a0, 0xcf, 0, 0xb, 0xffff},
};
extern "C" const u8 sBottomButtonTargetY[12] = {0xb6, 0x9e, 0xb2, 0xa9, 0xa9, 0xb6, 0xb6, 0xb6, 0xb6, 0xb6, 0x00, 0x00};
extern "C" OamCellEntry sButtonCellsW4A[3] = {
    {0x80204044, 0x146, 0, 0xc, 0x0},
    {0x90284044, 0xcf, 0, 0xb, 0x0},
    {0x80184044, 0xcf, 0, 0xb, 0xffff},
};
extern "C" OamCellEntry sButtonCellsW6A[6] = {
    {0x80084000, 0x14, 1, 0x0, 0x0},
    {0x40280000, 0x18, 1, 0x0, 0x0},
    {0x90204000, 0x5b, 1, 0x0, 0x0},
    {0x80004000, 0x5b, 1, 0x0, 0xffff},
    {0x90244004, 0x5b, 1, 0x1, 0x0},
    {0x80044004, 0x5b, 1, 0x1, 0xffff},
};
extern "C" const u8 sBottomButtonOfTarget[12] = {0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00};
extern "C" OamCellEntry sButtonCellsW6B[6] = {
    {0x80084000, 0x1a, 1, 0x0, 0x0},
    {0x40280000, 0x1e, 1, 0x0, 0x0},
    {0x90204000, 0x5b, 1, 0x0, 0x0},
    {0x80004000, 0x5b, 1, 0x0, 0xffff},
    {0x90244004, 0x5b, 1, 0x1, 0x0},
    {0x80044004, 0x5b, 1, 0x1, 0xffff},
};
extern "C" const u8 sTextButtonPressOffsets[4] = {0x00, 0x02, 0x03, 0x00};
extern "C" const u8 sBottomButtonTargetX[12] = {0x58, 0xca, 0xca, 0x62, 0xc2, 0x3e, 0xc4, 0x7c, 0x74, 0xc4, 0x00, 0x00};
extern "C" OamCellEntry sButtonCellsW12[7] = {
    {0x81d440a0, 0x14c, 0, 0xc, 0x0},
    {0x81f440a0, 0x150, 0, 0xc, 0x0},
    {0x801440a0, 0x154, 0, 0xc, 0x0},
    {0x800040a0, 0xd0, 0, 0xb, 0x0},
    {0x81e840a0, 0xd0, 0, 0xb, 0x0},
    {0x901c40a0, 0xcf, 0, 0xb, 0x0},
    {0x81cc40a0, 0xcf, 0, 0xb, 0xffff},
};
extern "C" OamCellEntry sButtonCellsW6Single[4] = {
    {0x804840a0, 0x140, 0, 0xc, 0x0},
    {0x406800a0, 0x144, 0, 0xc, 0x0},
    {0x905e40a0, 0xcf, 0, 0xb, 0x0},
    {0x804040a0, 0xcf, 0, 0xb, 0xffff},
};
extern "C" OamCellEntry sButtonCellsW4B[3] = {
    {0x81c04044, 0x142, 0, 0xc, 0x0},
    {0x91c84044, 0xcf, 0, 0xb, 0x0},
    {0x81b84044, 0xcf, 0, 0xb, 0xffff},
};
extern "C" const u8 sMenuButtonTextColors[4] = {0x5f, 0x7d, 0xc0, 0x50};












MenuErrorMessage::MenuErrorMessage() {
    state = 3;
    isFatal = 0;
}

MenuErrorMessage::~MenuErrorMessage() {}

void MenuErrorMessage::open(u8 *a, s32 b, u32 c) {
    isFatal = c;
    startTalk(a, b);
    LabelString s;
    String_Load2dMenu(&s, 0x64);
    prompt.setText((StrBuf *)&s);
    prompt.setPos(0, 0x40);
    prompt.queueOpen();
    prompt.enableObjWindow();
    prompt.func_ov002_022006ac(0);
}

void MenuErrorMessage::openHigh(u8 *a, s32 b, u32 c) {
    isFatal = c;
    startTalk(a, b);
    LabelString s;
    String_Load2dMenu(&s, 0x64);
    prompt.setText((StrBuf *)&s);
    prompt.setPos(0, 0x30);
    prompt.queueOpen();
    prompt.enableObjWindow();
    prompt.func_ov002_022006ac(0);
}

BOOL MenuErrorMessage::update(s32 a) {
    switch (state) {
    case 0:
        if (isTalkWaiting()) {
            state = 1;
            prompt.commitOpen();
            if (isFatal != 0) dimSubScreen();
        }
        break;
    case 1:
        if (isFatal != 0) for (;;) {}
        if (a == 0 || !MenuCtrl_IsForceCloseDue()) {
            BOOL k;
            if (gTouchHeld != 0 && gTouchChanged != 0) k = TRUE; else k = FALSE;
            if (!k) {
                u16 v = gPad[1];
                if ((v & 1) == 0 && (v & 2) == 0 && (v & 0x400) == 0 && (v & 0x800) == 0) break;
            }
        }
        advanceTalk();
        state = 2;
        prompt.hide(0);
        break;
    case 2:
        if (finishTalk()) {
            restoreBrightness();
            state = 3;
        }
        break;
    case 3:
        return TRUE;
    }
    prompt.updatePrompt();
    if (isFatal == 0) {
        TouchPromptBalloon *p = &prompt;
        p->draw();
    }
    return FALSE;
}

void MenuErrorMessage::startTalk(u8 *a, s32 b) {
    TalkWindowState *p = TalkWindow_Get(1);
    talk.resetMsg();
    talk.setFileName("obj_etc_error");
    talk.msgIndex = *a;
    p->attachRequest(&talk);
    p->disableInput();
    if (b == 0) p->setKeepSe();
    p->nextState = 1;
    p->lockAdvance();
    state = 0;
    if (isFatal == 0) dimSubScreen();
}

BOOL MenuErrorMessage::stepOpen() {
    if (state == 0) {
        if (isTalkWaiting()) {
            state = 1;
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

void MenuErrorMessage::beginClose() {
    advanceTalk();
    state = 2;
}

BOOL MenuErrorMessage::stepClose() {
    if (state == 2) {
        if (finishTalk()) {
            restoreBrightness();
            state = 3;
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

void MenuErrorMessage::showPromptOnly() {
    LabelString s;
    String_Load2dMenu(&s, 0x64);
    prompt.setText((StrBuf *)&s);
    prompt.setPos(0, 0x40);
    prompt.queueOpen();
    prompt.enableObjWindow();
    prompt.func_ov002_022006ac(0);
    dimSubScreen();
    prompt.commitOpen();
}

void MenuErrorMessage::updatePromptBalloon() {
    prompt.updatePrompt();
    TouchPromptBalloon *p = &prompt;
    p->draw();
}

void MenuErrorMessage::hidePromptBalloon() { prompt.hide(0); }

void MenuErrorMessage::undim() { restoreBrightness(); }

BOOL MenuErrorMessage::isTalkWaiting() {
    TalkWindowState *p = TalkWindow_Get(1);
    if (p->state == 2) return TRUE;
    return FALSE;
}

void MenuErrorMessage::advanceTalk() {
    TalkWindowState *p = TalkWindow_Get(1);
    p->setNextMessageIfUnset(gTalkMsgIndexEnd, 0);
    p->setAdvancePending();
    p->unlockAdvance();
}

BOOL MenuErrorMessage::finishTalk() {
    TalkWindowState *o = talk.window;
    if (o->state == 0) {
        o->detachRequest();
        return TRUE;
    }
    return FALSE;
}

s32 MenuErrorMessage::dimSubScreen() {
    Gfx2d_BeginSubObjWinBrightness();
    Gfx2d_SetSubBrightness(-10);
}

BOOL MenuErrorMessage::restoreBrightness() { return Gfx2d_EndSubObjWinBrightness(); }

extern "C" void *_ZN19MenuLabelButtonBaseC2Ehi(MenuLabelButtonBase *self, u8 a, s32 b) {
    _ZN11LabelButtonC2Ehi(self, a, b);
    *(void **)self = _ZTV19MenuLabelButtonBase + 8;
    return self;
}

MenuLabelButtonBase::~MenuLabelButtonBase() {}

void MenuLabelButtonBase::setOrigin(s32 a, s32 b) { UiWidget::setOrigin(a - 0x80, b - 0x60); }

s32 MenuLabelButton::getAnchorX(s32 k) {
    s32 r = getOriginX();
    s32 x, y;
    if (getState() == 2) {
        getAnimOffset(&x, &y);
        r += x;
    }
    switch (k) {
    case 0:
    case 2:
        r += 0x10;
        break;
    case 1:
    case 3:
        r += 0x20;
    }
    return r;
}

s32 MenuLabelButton::getAnchorY(s32 k) {
    s32 r = getOriginY();
    s32 x, y;
    if (getState() == 2) {
        getAnimOffset(&x, &y);
        r += y;
    }
    switch (k) {
    case 0:
    case 1:
        r += 8;
        break;
    case 2:
        break;
    case 3:
        r += 8;
    }
    return r;
}

BOOL MenuLabelButton::stepAnim() {
    if (isAnimDone() == 0) {
        update();
        return TRUE;
    }
    return FALSE;
}

void MenuLabelButton::setLabel2d(s32 v) {
    LabelString s;
    String_Load2dMenu(&s, v);
    LabelButton_setLabelText(this, &s);
}

void MenuLabelButton::showDefault(s32 v) {
    showAt(v, 0x98, 0xac);
}

void MenuLabelButton::showAt(s32 v, s32 x, s32 y) {
    setLabel2d(v);
    setOrigin(x, y);
    setPos(0, 0);
    showLayer2();
    setState(1);
    update();
}

BOOL MenuLabelButton::isTouched() {
    BOOL c;
    if (gTouchHeld != 0 && gTouchChanged != 0) c = TRUE; else c = FALSE;
    if (c) {
        s32 a = gTouchPressX;
        s32 x = a - getOriginX();
        s32 b = gTouchPressY;
        s32 y = b - getOriginY();
        if (x >= 0 && x <= 0x40 && y >= 0 && y <= 0x18) return TRUE;
    }
    return FALSE;
}

MenuLabelButton::MenuLabelButton() : MenuLabelButtonBase(0, 0) {}

MenuLabelButton::~MenuLabelButton() {}

MenuLabelButtonStyle1::MenuLabelButtonStyle1() : MenuLabelButtonBase(1, 0) {}

MenuLabelButtonStyle1::~MenuLabelButtonStyle1() {}

MenuTextButton::MenuTextButton() {
    cells = 0;
    pressStep = 0;
    flags = 0;
}

MenuTextButton::~MenuTextButton() { caption.destroyLabel(); }

void MenuTextButton::setup(OamCellEntry *p, u8 a, u8 b) {
    cells = p;
    widthTiles = a;
    frameCellCount = b;
}

void MenuTextButton::setLabel(u8 v) {
    msgId = v;
    renderText(0xf, 0);
}

void MenuTextButton::setLabelWithShadow(u8 v) {
    setLabel(v);
    pressStep = 0;
    clearFlags(1);
}

void MenuTextButton::setLabelNoShadow(u8 v) {
    setLabel(v);
    pressStep = 0;
    setFlags(1);
}

void MenuTextButton::renderText(u8 a, u8 b) {
    String_Load2dMenu(&caption, msgId);
    caption.createLabel(8, cells->charName, widthTiles, a, b, 0);
    caption.redrawAligned(1, 0);
}

BOOL MenuTextButton::testFlags(u32 m) {
    if ((flags & m) != 0) {
        return TRUE;
    }
    return FALSE;
}

void MenuTextButton::setFlags(u32 m) { flags = flags | m; }

void MenuTextButton::clearFlags(u32 m) { flags = flags & ~m; }

void MenuTextButton::freeText() { caption.destroyLabel(); }

u32 MenuTextButton::getPressOffset() { return sTextButtonPressOffsets[pressStep]; }

void MenuTextButton::drawAt(s32 x, s32 y, s32 c) {
    u32 off = getPressOffset();
    s32 pal = -1;
    if (testFlags(4)) {
        pal = 2;
    }
    s32 yy = y + 0x60 + off;
    s32 xx = x + 0x80 + off;
    Oam_DrawCell(1, cells, xx, yy, pal, c, 0x1000, 0x1000, 0, -1, 0, 0);
    if (testFlags(2)) {
        Oam_DrawCell(1, cells, xx, yy, -1, c, 0x1000, 0x1000, 0, 2, 0, 0);
    }
    if (!testFlags(1)) {
        if (pressStep + 1 != 3) {
            x += 0x83;
            y += 0x63;
            Oam_DrawCell(1, cells + frameCellCount, x, y, 1, c, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

BOOL MenuTextButton::stepPress() {
    if (pressStep == 0) {
        renderText(0xe, 0);
    }
    if (pressStep + 1 < 3) {
        pressStep++;
        goto yes;
    }
    return FALSE;
yes:
    return TRUE;
}

void MenuTextButton::enableObjWindow() { setFlags(2); }

void MenuTextButton::disableObjWindow() { clearFlags(2); }

void MenuTextButton::setDisabled() { setFlags(4); }

void MenuTextButton::setEnabled() { clearFlags(4); }

BOOL MenuTextButton::isDisabled() { return testFlags(4); }

MenuTitleBalloon::MenuTitleBalloon() : LabelBalloon(0) { disablePopAnim(); }

MenuTitleBalloon::~MenuTitleBalloon() {}

void MenuTitleBalloon::setOrigin(s32 a, s32 b) { UiWidget::setOrigin(a - 0x80, b - 0x60); }

void MenuTitleBalloon::showText(u8 a, s32 b, s32 c) {
    setOrigin(b, c);
    setPos(0, 0);
    LabelString t;
    String_Load2dMenu(&t, a);
    setText((StrBuf *)&t);
    disablePopAnim();
    requestOpen();
    update();
    update();
}

void MenuTitleBalloon::hideNow() {
    requestClose();
    update();
    update();
}

MenuBottomButtons::MenuBottomButtons() { layout = 0; }

MenuBottomButtons::~MenuBottomButtons() {}

extern "C" void MenuButtons_LoadTextColors() { GXS_LoadOBJPltt(sMenuButtonTextColors, 0x1c, 4); }

void MenuBottomButtons::freeTexts() {
    for (s32 i = 0; i < 2; i++) {
        buttons[i].freeText();
    }
}

void MenuBottomButtons::drawAt(s32 a) {
    switch (layout) {
    case 0:
        break;
    case 1:
        buttons[1].drawAt(0, a + 0xac, -1);
        break;
    case 2:
        buttons[0].drawAt(0, a + 0xac, -1);
        buttons[1].drawAt(0, a + 0xac, -1);
        break;
    case 3:
        buttons[1].drawAt(0x3c, a + 0x35, -1);
        buttons[0].drawAt(0x3c, a + 0x48, -1);
        break;
    case 4:
        buttons[1].drawAt(0x3c, a + 0x4c, -1);
        buttons[0].drawAt(-0x7c, a + 0x4c, -1);
        break;
    case 5:
        buttons[1].drawAt(0x3c, a + 0x4c, -1);
        break;
    case 6:
        buttons[1].drawAt(0x3c, a + 0x4c, -1);
        buttons[0].drawAt(-0xc, a + 0x4c, -1);
        break;
    case 7:
    case 9:
    case 10: {
        if (layout != 10) {
            title.setPos(0, -(a >> 2));
            title.draw();
        }
        s32 b = a >> 2;
        if (layout == 7) {
            buttons[0].drawAt(0, b, -1);
            buttons[1].drawAt(0, b, -1);
        } else {
            buttons[0].drawAt(-0x50, b + 0x44, -1);
            buttons[1].drawAt(0x10, b + 0x44, -1);
        }
        break;
    }
    case 8: {
        s32 t = -(a >> 2);
        if (layout != 10) {
            title.setPos(0, t - 8);
            title.draw();
        }
        a = (a >> 1) - 0x1e;
        buttons[0].drawAt(0, a, -1);
        buttons[1].drawAt(0, a, -1);
        break;
    }
    case 11: {
        s32 b = a >> 1;
        title.setPos(0, -b);
        title.draw();
        buttons[0].drawAt(-0x50, b + 0x44, -1);
        buttons[1].drawAt(0x10, b + 0x44, -1);
        break;
    }
    case 12: {
        s32 b = a >> 1;
        title.setPos(0, -b);
        title.draw();
        buttons[0].drawAt(-0x50, b + 0x24, -1);
        buttons[1].drawAt(0x10, b + 0x24, -1);
        break;
    }
    case 13: {
        s32 b = a >> 1;
        title.setPos(0, -b);
        title.draw();
        buttons[0].drawAt(-0x50, b + 0x36, -1);
        buttons[1].drawAt(0x10, b + 0x36, -1);
        break;
    }
    }
}

void MenuBottomButtons::hide() { layout = 0; }

void MenuBottomButtons::setLayoutNeverMindConfirm() {
    buttons[0].setup(sButtonCellsW8, 8, 2);
    buttons[0].setLabelWithShadow(2);
    buttons[1].setup(sButtonCellsW6Single, 6, 1);
    buttons[1].setLabelWithShadow(0x21);
    layout = 2;
}

void MenuBottomButtons::setLayoutChangeAddressee() {
    buttons[0].setup(sButtonCellsW12, 0xc, 3);
    buttons[0].setLabelWithShadow(0x20);
    buttons[1].setup(sButtonCellsW6Single, 6, 1);
    buttons[1].setLabelWithShadow(0x21);
    layout = 2;
}

void MenuBottomButtons::setLayoutConfirm() {
    buttons[1].setup(sButtonCellsW6Single, 6, 1);
    buttons[1].setLabelWithShadow(0x21);
    layout = 1;
}

void MenuBottomButtons::setLayoutConfirmQuit03() {
    buttons[1].setup(sButtonCellsW6A, 6, 2);
    buttons[1].setLabelWithShadow(0x21);
    buttons[0].setup(sButtonCellsW6B, 6, 2);
    buttons[0].setLabelWithShadow(0x65);
    layout = 3;
}

void MenuBottomButtons::setLayoutConfirmQuit04() {
    buttons[1].setup(sButtonCellsW6A, 6, 2);
    buttons[1].setLabelWithShadow(0x21);
    buttons[0].setup(sButtonCellsW6B, 6, 2);
    buttons[0].setLabelWithShadow(0x65);
    layout = 4;
}

void MenuBottomButtons::setLayoutSingle05(s32 v) {
    buttons[1].setup(sButtonCellsW6A, 6, 2);
    buttons[1].setLabelWithShadow(v);
    layout = 5;
}

void MenuBottomButtons::setLayoutConfirmAnd06(u8 v) {
    buttons[1].setup(sButtonCellsW6A, 6, 2);
    buttons[1].setLabelWithShadow(0x21);
    buttons[0].setup(sButtonCellsW6B, 6, 2);
    buttons[0].setLabelWithShadow(v);
    layout = 6;
}

void MenuBottomButtonsBody::setLayoutYesNo07(s32 x) {
    title.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&title, x, 0x80, 4);
    title.hideLayer2();
    buttons[0].setup(sButtonCellsW4B, 4, 1);
    buttons[0].setLabelWithShadow(4);
    buttons[1].setup(sButtonCellsW4A, 4, 1);
    buttons[1].setLabelWithShadow(0x13);
    layout = 7;
}

void MenuBottomButtonsBody::setLayoutYesNo08(s32 x) {
    title.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&title, x, 0x80, 0x11);
    title.hideLayer2();
    buttons[0].setup(sButtonCellsW4B, 4, 1);
    buttons[0].setLabelWithShadow(4);
    buttons[1].setup(sButtonCellsW4A, 4, 1);
    buttons[1].setLabelWithShadow(0x13);
    layout = 8;
}

void MenuBottomButtonsBody::setYesNoButtons() {
    buttons[0].setup(sButtonCellsW6A, 6, 2);
    buttons[0].setLabelWithShadow(4);
    buttons[1].setup(sButtonCellsW6B, 6, 2);
    buttons[1].setLabelWithShadow(0x13);
}

void MenuBottomButtonsBody::setLayoutYesNo09(s32 x) {
    title.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&title, x, 0x80, 4);
    title.hideLayer2();
    setYesNoButtons();
    layout = 9;
}

void MenuBottomButtonsBody::setLayoutTossKeep() {
    buttons[0].setup(sButtonCellsW6A, 6, 2);
    buttons[0].setLabelWithShadow(0x15);
    buttons[1].setup(sButtonCellsW6B, 6, 2);
    buttons[1].setLabelWithShadow(0x19);
    layout = 0xa;
}

void MenuBottomButtonsBody::setLayoutYesNo0B(s32 x) {
    title.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&title, x, 0x80, 0x22);
    title.hideLayer2();
    setYesNoButtons();
    layout = 0xb;
}

void MenuBottomButtonsBody::setLayoutYesNo0C(s32 x) {
    title.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&title, x, 0x80, 0x2a);
    title.showLayer2();
    setYesNoButtons();
    layout = 0xc;
}

void MenuBottomButtonsBody::setLayoutYesNo0D(s32 x) {
    title.hideNow();
    _ZN16MenuTitleBalloon8showTextEhii(&title, x, 0x80, 0x12);
    title.showLayer2();
    setYesNoButtons();
    layout = 0xd;
}

void MenuBottomButtonsBody::showTitleLayer2() {
    title.showLayer2();
}

BOOL MenuBottomButtonsBody::hitTest(s32 idx, s32 x, s32 y) {
    switch (idx) {
    case 1:
        if (x >= 0xc0 && y >= 0x95 && y < 0xa5) {
            return TRUE;
        }
        return FALSE;
    case 2:
        if (x >= 0xc0 && y >= 0xa9 && y < 0xb9) {
            return TRUE;
        }
        return FALSE;
    case 0:
        if (x >= 0x52 && x <= 0xba && y >= 0xac && y <= 0xc0) {
            return TRUE;
        }
        return FALSE;
    case 3:
        if (y >= 0xa4 && y < 0xb4 && x >= 0x38 && x <= 0x68) {
            return TRUE;
        }
        return FALSE;
    case 4:
        if (y >= 0xa4 && y < 0xb4 && x >= 0x98 && x <= 0xc8) {
            return TRUE;
        }
        return FALSE;
    case 5:
        if (y >= 0xac && y <= 0xc0 && x >= 0 && x <= 0x40) {
            return TRUE;
        }
        return FALSE;
    case 6:
        if (y >= 0xac && y <= 0xc0 && x >= 0xc0 && x <= 0x100) {
            return TRUE;
        }
        return FALSE;
    case 7:
        if (y >= 0xac && y <= 0xc0 && x >= 0x78 && x <= 0xb8) {
            return TRUE;
        }
        return FALSE;
    case 8:
        if (x >= 0x6a && x <= 0xbc && y >= 0xac && y <= 0xc0) {
            return TRUE;
        }
        return FALSE;
    case 9:
        if (x >= 0xc0 && y >= 0 && y >= 0xac && y <= 0xc0) {
            return TRUE;
        }
        return FALSE;
    default:
        return FALSE;
    }
}

BOOL MenuBottomButtonsBody::isTouched(s32 idx) {
    s32 x = gTouchCurX;
    s32 y = gTouchCurY;
    switch (layout) {
    case 8:
        y += 0x1e;
        break;
    case 0xc:
        y += 0x20;
        break;
    case 0xd:
        y += 0xe;
        break;
    }
    return hitTest(idx, x, y);
}

s32 MenuBottomButtonsBody::getTargetX(s32 idx) {
    if (idx == -1) {
        idx = selectedTarget;
    }
    return sBottomButtonTargetX[idx];
}

s32 MenuBottomButtonsBody::getTargetY(s32 idx) {
    if (idx == -1) {
        idx = selectedTarget;
    }
    s32 v = sBottomButtonTargetY[idx];
    switch (layout) {
    case 8:
        v -= 0x1e;
        break;
    case 0xc:
        v -= 0x20;
        break;
    case 0xd:
        v -= 0xe;
        break;
    }
    return v;
}

void MenuBottomButtonsBody::setSelected(u8 v) {
    selectedTarget = v;
}

BOOL MenuBottomButtonsBody::stepPress() {
    return buttons[getButtonOfTarget(-1)].stepPress();
}

s32 MenuBottomButtonsBody::getPressOffset() {
    return buttons[getButtonOfTarget(-1)].getPressOffset();
}

void MenuBottomButtonsBody::enableObjWindow() {
    title.enableObjWindow();
    for (s32 i = 0; i < 2; i++) {
        buttons[i].enableObjWindow();
    }
}

void MenuBottomButtonsBody::disableObjWindow() {
    title.disableObjWindow();
    for (s32 i = 0; i < 2; i++) {
        buttons[i].disableObjWindow();
    }
}

s32 MenuBottomButtonsBody::getButtonOfTarget(s32 idx) {
    if (idx == -1) {
        idx = selectedTarget;
    }
    return sBottomButtonOfTarget[idx];
}

void MenuBottomButtonsBody::disableButton(s32 idx) {
    buttons[getButtonOfTarget(idx)].setDisabled();
}

void MenuBottomButtonsBody::enableButton(s32 idx) {
    buttons[getButtonOfTarget(idx)].setEnabled();
}

BOOL MenuBottomButtonsBody::isButtonDisabled(s32 idx) {
    return buttons[getButtonOfTarget(idx)].isDisabled();
}
