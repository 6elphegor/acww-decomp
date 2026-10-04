// ov125: scene overlay (class PatternSelectMenu, vtable 0x02298478, 0x6bc bytes).
#include "types.h"
#include "Unk_020d8c7c.h"
#include "menu/MenuProc.h"
#include "ui/HandCursor.h"

struct PopupChoiceIdList;

extern "C" {
extern volatile u16 gPad[];
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern void *gCurrentHeap;
void PatternSelect_LoadPatternIcons();
void PatternSelect_SetupBgLayers();
void ProcBase_RequestDelete(void *p);
void *ProcBase_GetParent(void *p);
void *Heap_AllocTail(void *heap, u32 size);
void Heap_Free(void *heap, void *p);
void *PlayerData_GetCurrent();
void *_ZN10PlayerData11getPatternsEv(void *a);
void *_ZN14PlayerPatterns17getPatternByOrderEj(void *o, u32 i);
void *_ZN11PatternInfo15getTitleEncodedEP18EncodedString16Buf(void *a, void *b);
void *_ZN7Pattern9getPixelsEv(void *o);
void *_ZN7Pattern7getInfoEv(void *o);
void *_ZN11PatternInfo14getPaletteDataEv(void *o);
void Gfx2d_LinearToTilesInRow32(void *a, void *b, u32 c, u32 d, u32 e);
void Gfx2d_LoadCharRange(void *a, u32 b, u32 c, u32 d, u32 e);
void Gfx2d_LoadPaletteRange(void *a, u32 b, u32 c, u32 d, u32 e);
void MIi_CpuCopy16(void *a, void *b, u32 n);
void Gfx2d_ResetLayer(u32 x);
void Gfx2d_ShowLayer(u32 x);
void Gfx2d_SetSubBgModeState(u32 x);
void Gfx2d_SetLayerPriority(u32 a, u32 b);
void Gfx2d_SetLayerControl(u32 a, u32 b, u32 c, u32 d);
void Oam_DrawObj(s32 mode, void *info, s32 x, s32 y, s32 pal, s32 pri, s32 rect);
s32 Snd_PlaySe(s32 a);
void MenuCtrl_SetIndex(u32 a);
void MenuCtrl_SetResult(u32 v);
s32 MenuCtrl_GetMode();
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void StrBuf_GameToAscii(void *p, void *q);

void _ZN18EncodedString16BufC1Ev(void *p);
void _ZN18EncodedString16BufD1Ev(void *p);
void _ZN16LabelBalloonTextC1Ev(void *p);
void _ZN16LabelBalloonTextD1Ev(void *p);
void _ZN12LabelBalloon6setPosEii(void *self, s32 x, s32 y);
void _ZN12LabelBalloon7setTextEP6StrBuf(void *self, void *b);

BOOL MenuKeys_HasRight(void *pad);
BOOL MenuKeys_HasLeft(void *pad);
BOOL MenuKeys_HasDown(void *pad);
BOOL MenuKeys_HasUp(void *pad);
void ChoiceIdList_Clear(void *p, u32 v);
void ChoiceIdList_Add(void *p, u32 a, u32 b);
BOOL PopupChoice_MoveCursor(void *p, s32 a, void *b, s32 c);
BOOL PopupChoice_TickDecideDelay(void *p);
u32 PopupChoice_DecideCancel(void *p);
void PopupChoice_DecideRow(void *p, s32 a, s32 b);
void PopupChoice_ForceClose(void *p);
void PopupChoice_Update(void *p);
void PopupChoice_Close(void *p, u32 v);
void PopupChoice_Open(void *p, u32 v);
void PopupChoice_LoadChoiceBg(void *p);
void MenuButtons_LoadTextColors(void *p);

extern const u8 sPatternSelectSlotX[9];
extern const u8 sPatternSelectSlotY[9];
}

// ---------------------------------------------------------------------------------------------
// Classes of other modules (minimal declarations)


class MenuCursorBase : public HandCursor {
public:
    void drawWrapped();
    BOOL isMoving();
    void moveToEase(s32 a, s32 b, s32 c, s32 d);
    void moveToLinear(s32 a, s32 b, s32 c);
    void warpTo(s32 a, s32 b);
    void setPoseIdle();
};

// Same object as MenuCursorBase under the name used by its other methods
class MenuCursor : public HandCursor {
public:
    void setPosePress();
    void switchToAnim01();
    void switchToAnim07();
    void setAnimIfChanged(s32 a);
};

class MenuCursorBuf0 : public MenuCursorBase {
public:
    MenuCursorBuf0();
    virtual ~MenuCursorBuf0();
    u8 unk_4c[0x64 - 0x4c];
};

// Same object as PopupChoiceMenu under the name used by its other methods
class PopupChoiceMenuBody {
public:
    s32 getRowY(s32 a);
    s32 getRowX();
    s32 hitTestRowOrLast(s32 a, s32 b);
    void setRowsFromIds(PopupChoiceIdList *r, s32 a);
    BOOL isClosed();
    BOOL isOpen();
};

class PopupChoiceMenu {
public:
    PopupChoiceMenu();
    ~PopupChoiceMenu();
    void placeAbove(s32 a, s32 b);
    void init(s32 a, s32 b, const char *c);
    u32 unk_00[0x300 / 4];
};

class TouchPromptBalloon {
public:
    TouchPromptBalloon();
    virtual ~TouchPromptBalloon();
    virtual void vfunc_08();
    void func_ov002_022006ac(s32 a);
    void queueOpen();
    void commitOpen();
    void hide(s32 a);
    BOOL updatePrompt();
    u32 unk_04[(0xc0 - 4) / 4];
};

class MenuBottomButtonsBody {
public:
    u32 unk_00[0x164 / 4];
    s32 getPressOffset();
    BOOL stepPress();
    void setSelected(u8 v);
    s32 getTargetY(s32 i);
    s32 getTargetX(s32 i);
    BOOL isTouched(s32 i);
};

class MenuBottomButtons : public MenuBottomButtonsBody {
public:
    MenuBottomButtons();
    ~MenuBottomButtons();
    void setLayoutSingle05(s32 a);
    void drawAt(s32 a);
    void freeTexts();
};

// ov092 singleton returned by ProcBase_GetParent
class MenuLauncher {
public:
    void onChildClosed();
    void setNextRequest(s32 a, s32 b);
};

// ov124 library object (menu/han text + sprite), size 0x94
class GeneralMenuHeader {
public:
    GeneralMenuHeader();
    ~GeneralMenuHeader();
    void resetFrame();
    void drawPlain(s32 x, s32 y);
    void loadObjGfx(s32 v);
    void loadTitleBg(s32 a, s32 b);
    u32 titleLabel[0x94 / 4];
};


class PatternSelectMenu;
typedef void (PatternSelectMenu::*Unk_ov125_02298478_Fn)();

// Vtable 0x02298478, size 0x6bc (scene overlay on MenuProc; ov124 library object embedded at +0x94)
class PatternSelectMenu : public MenuProc {
public:
    PatternSelectMenu() : header(), popup(), nameBalloon(), cursor(), bottomButtons() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    void clearFlags(u32 mask);
    void setFlags(u32 mask);
    BOOL testFlags(u32 mask);
    BOOL moveCursorByPad(void *pad);
    BOOL cursorRowDown(u32 lo, u32 hi, u32 to);
    BOOL cursorRowUp(u32 lo, u32 hi, u32 to);
    BOOL stepCursorLeft(u32 lo, u32 hi);
    BOOL stepCursorRight(u32 lo, u32 hi);
    void refreshCursor();
    void cursorToPopupTop();
    void showCursorAtSlot();
    void cancelPopup();
    void moveCursorToPopupRow();
    void moveCursorToTarget();
    void hideCursor();
    s32 getCursorTargetY();
    s32 getCursorTargetX();
    void showCursor();
    void onPopupChoice();
    void openPopup();
    u32 getPopupRowValue(u32 i);
    void setPopupChoices();
    void updateNameLabel();
    void refreshNameLabel();
    u32 findTouchedSlot();
    s32 getSlotY(u32 i);
    s32 getSlotX(u32 i);
    void closeWithoutChoice();
    void resumeInput();
    void startButtonInput();
    void startTouchInput();
    void updateBarTransition();
    void updatePopupDone();
    void updatePopupClose();
    void updatePopupOpen();
    void updateQuitPress();
    void updateCursorMove();
    void updatePopupPress();
    void updatePopupButtons();
    void updateButtons();
    void updatePopupTouch();
    void updateTouch();
    void loadPatternIcons();
    void loadHeaderBg();
    void postStateUpdate();
    void preStateUpdate();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initPatternSelect();
    void updateLayerSlide();
    void stateClosing();
    void stateClose();
    void stateOpening();
    void stateOpen();
    void stateLoad();
    void runMainState();

    /* 0x091 */ u8 unk_91[3];
    /* 0x094 */ GeneralMenuHeader header;
    /* 0x128 */ PopupChoiceMenu popup;
    /* 0x428 */ TouchPromptBalloon nameBalloon;
    /* 0x4e8 */ MenuCursorBuf0 cursor;
    /* 0x54c */ MenuBottomButtons bottomButtons;
    /* 0x6b0 */ s32 slideY;
    /* 0x6b4 */ u16 flags;
    /* 0x6b6 */ u8 balloonSlot;
    /* 0x6b7 */ u8 selectedSlot;
    /* 0x6b8 */ u8 cursorSlot;
    /* 0x6b9 */ u8 popupChoice;
    /* 0x6ba */ u8 popupRow;
    /* 0x6bb */ u8 returnState;
};

extern "C" u16 sPatternSelectIconCell[4];
struct Unk_ov125_SceneEntry {
    PatternSelectMenu *(*create)();
    u16 a;
    u16 b;
};
extern "C" PatternSelectMenu *PatternSelectMenu_Create();
extern "C" Unk_ov125_SceneEntry sPatternSelectMenuProfile = {PatternSelectMenu_Create, 0xaa, 0xae};
u16 sPatternSelectIconCell[4] = {0x00f0, 0x81f0, 0x40c0, 0xffff};
// Data order: this unit is placed object by object (see object_order.txt).

static inline BOOL Unk_ov125_02297bd4_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" PatternSelectMenu *PatternSelectMenu_Create() { return new PatternSelectMenu(); }

BOOL PatternSelectMenu::vfunc_00() {
    initPatternSelect();
    transitionState = 0;
    setPhase(0);
    return TRUE;
}

BOOL PatternSelectMenu::vfunc_0c() {
    ((MenuLauncher *)ProcBase_GetParent(this))->onChildClosed();
    releaseResources();
    return TRUE;
}

BOOL PatternSelectMenu::onDraw() {
    s32 r7 = slideY;
    if (!testFlags(1)) {
        return FALSE;
    }
    TouchPromptBalloon *p = &nameBalloon;
    p->vfunc_08();
    if (MenuCtrl_IsButtons()) {
        cursor.drawWrapped();
    }
    bottomButtons.drawAt(getSlideOffsetY());
    header.drawPlain(0, r7);
    u8 i = 0;
    s32 j = 0;
    s32 z = 0;
    do {
        sPatternSelectIconCell[2] = (sPatternSelectIconCell[2] & 0xfffffc00) | ((u16)(j * 4 + 0xc0) & 0x3ff);
        s32 y = r7 + getSlotY(i);
        Oam_DrawObj(1, sPatternSelectIconCell, getSlotX(i), y, j + 5, 2, z);
        i++;
        j++;
    } while (j < 8);
    return TRUE;
}

BOOL PatternSelectMenu::execTransition() {
    static Unk_ov125_02298478_Fn tbl[5] = {
        &PatternSelectMenu::stateLoad,
        &PatternSelectMenu::stateOpen,
        &PatternSelectMenu::stateOpening,
        &PatternSelectMenu::stateClose,
        &PatternSelectMenu::stateClosing};
    preStateUpdate();
    (this->*tbl[transitionState])();
    postStateUpdate();
    return TRUE;
}

void PatternSelectMenu::runMainState() {
    static Unk_ov125_02298478_Fn tbl[11] = {
        &PatternSelectMenu::updateTouch,
        &PatternSelectMenu::updatePopupTouch,
        &PatternSelectMenu::updateButtons,
        &PatternSelectMenu::updatePopupButtons,
        &PatternSelectMenu::updatePopupPress,
        &PatternSelectMenu::updateCursorMove,
        &PatternSelectMenu::updateQuitPress,
        &PatternSelectMenu::updatePopupOpen,
        &PatternSelectMenu::updatePopupClose,
        &PatternSelectMenu::updatePopupDone,
        &PatternSelectMenu::updateBarTransition};
    (this->*tbl[mainState])();
}

BOOL PatternSelectMenu::execMain() {
    preInputUpdate();
    runMainState();
    postInputUpdate();
    return TRUE;
}

BOOL PatternSelectMenu::execPhase3() { return TRUE; }

BOOL PatternSelectMenu::execPhase4() { return TRUE; }

BOOL PatternSelectMenu::execClosed() {
    ProcBase_RequestDelete(this);
    return TRUE;
}

void PatternSelectMenu::stateLoad() {
    PatternSelect_SetupBgLayers();
    loadHeaderBg();
    setTransitionState(1);
}

void PatternSelectMenu::stateOpen() {
    PopupChoice_LoadChoiceBg(&popup);
    loadPatternIcons();
    beginSubSlideIn(0xa, 4, 0, 0x30);
    Gfx2d_ShowLayer(6);
    Gfx2d_ShowLayer(4);
    updateLayerSlide();
    bottomButtons.setLayoutSingle05(0x65);
    setFlags(1);
    setTransitionState(2);
}

void PatternSelectMenu::stateOpening() {
    if (stepSlideIn(0)) {
        setPhase(2);
        resumeInput();
    }
    updateLayerSlide();
}

void PatternSelectMenu::stateClose() {
    hideCursor();
    MenuLauncher *r4 = (MenuLauncher *)ProcBase_GetParent(this);
    s32 r6 = MenuCtrl_GetMode();
    if (testFlags(0x10)) {
        r4->setNextRequest(0x44, 1);
    } else if (r6 == 4) {
        r4->setNextRequest(2, 1);
    } else {
        r4->setNextRequest(0x44, 1);
    }
    beginSubSlideOut(0xa, 0, 0, 0x30);
    updateLayerSlide();
    setTransitionState(4);
}

void PatternSelectMenu::stateClosing() {
    if (stepSlideOut(0)) {
        Gfx2d_ResetLayer(6);
        Gfx2d_ResetLayer(4);
        clearFlags(1);
        setPhase(5);
    } else {
        updateLayerSlide();
    }
}

void PatternSelectMenu::updateLayerSlide() {
    applySlideOffset(6, 0, 0);
    applySlideOffset(4, 0, 0);
    slideY = getSlideOffsetY();
}

void PatternSelectMenu::initPatternSelect() {
    flags = 0;
    popup.init(3, 1, 0);
    balloonSlot = 9;
    selectedSlot = 9;
    u32 z = 0;
    cursorSlot = z;
    MenuCtrl_SetResult(z);
    nameBalloon.func_ov002_022006ac(2);
}

void PatternSelectMenu::releaseResources() {
    PopupChoice_ForceClose(&popup);
    header.resetFrame();
    bottomButtons.freeTexts();
}

void PatternSelectMenu::preInputUpdate() {
    preStateUpdate();
    MenuCursorBuf0 *p = &cursor;
    p->vfunc_0c();
}

void PatternSelectMenu::postInputUpdate() {
    postStateUpdate();
}

void PatternSelectMenu::preStateUpdate() {
    bottomButtons.freeTexts();
    header.resetFrame();
}

void PatternSelectMenu::postStateUpdate() {
    PopupChoice_Update(&popup);
    if (nameBalloon.updatePrompt()) {
        refreshNameLabel();
    }
}

extern "C" void PatternSelect_SetupBgLayers() {
    Gfx2d_SetSubBgModeState(0);
    Gfx2d_SetLayerPriority(6, 2);
    Gfx2d_SetLayerControl(6, 0, 0, 0);
    Gfx2d_SetLayerPriority(4, 2);
    Gfx2d_SetLayerControl(4, 0, 0, 0);
    Gfx2d_SetLayerPriority(3, 1);
    Gfx2d_SetLayerControl(3, 0, 0, 0);
}

void PatternSelectMenu::loadHeaderBg() {
    header.loadTitleBg(6, 4);
}

extern "C" void PatternSelect_LoadPatternIcons() {
    void *heap = gCurrentHeap;
    void *buf = Heap_AllocTail(heap, 0x1000);
    void *obj = _ZN10PlayerData11getPatternsEv(PlayerData_GetCurrent());
    u8 i = 0;
    do {
        void *t = _ZN14PlayerPatterns17getPatternByOrderEj(obj, i);
        t = _ZN7Pattern9getPixelsEv(t);
        Gfx2d_LinearToTilesInRow32(t, buf, i * 4, 4, 4);
        i++;
    } while (i < 8);
    Gfx2d_LoadCharRange(buf, 8, 0xc0, 0xc0, 0x13f);
    Heap_Free(heap, buf);
    void *buf2 = Heap_AllocTail(heap, 0x100);
    s32 off = 0;
    u8 k = 0;
    do {
        void *t = _ZN14PlayerPatterns17getPatternByOrderEj(obj, k);
        t = _ZN7Pattern7getInfoEv(t);
        t = _ZN11PatternInfo14getPaletteDataEv(t);
        MIi_CpuCopy16(t, (u8 *)buf2 + off * 2, 0x20);
        off += 0x10;
        k++;
    } while (k < 8);
    Gfx2d_LoadPaletteRange(buf2, 8, 5, 5, 0xc);
    Heap_Free(heap, buf2);
}

void PatternSelectMenu::loadPatternIcons() {
    PatternSelect_LoadPatternIcons();
    header.loadObjGfx(4);
    MenuButtons_LoadTextColors(&bottomButtons);
}

void PatternSelectMenu::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else if (Unk_ov125_02297bd4_Both()) {
        s32 r = findTouchedSlot();
        if (r == 8) {
            bottomButtons.setSelected(9);
            setMainState(10);
        } else if (r != 9) {
            setPopupChoices();
            selectedSlot = r;
            openPopup();
        }
    }
}

void PatternSelectMenu::updatePopupTouch() {
    if (checkSwitchToButtons(1)) {
        cursorToPopupTop();
        setMainState(3);
        cursorSlot = selectedSlot;
    } else if (Unk_ov125_02297bd4_Both()) {
        s32 r = ((PopupChoiceMenuBody *)&popup)->hitTestRowOrLast(gTouchCurX, gTouchCurY);
        if (r >= 0) {
            PopupChoice_DecideRow(&popup, r, 1);
            popupChoice = getPopupRowValue(r);
            setMainState(8);
        }
    }
}

void PatternSelectMenu::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
        nameBalloon.hide(1);
    } else {
        if (moveCursorByPad((void *)takeRepeatedKeys())) {
            updateNameLabel();
            moveCursorToTarget();
            nameBalloon.hide(0);
        } else {
            u32 t = gPad[1];
            if (t & 1) {
                if (cursorSlot == 8) {
                    ((MenuCursor *)&cursor)->setPosePress();
                    setMainState(6);
                } else {
                    nameBalloon.hide(1);
                    setPopupChoices();
                    selectedSlot = cursorSlot;
                    openPopup();
                    hideCursor();
                }
            } else if (t & 2) {
                hideCursor();
                bottomButtons.setSelected(9);
                setMainState(10);
                nameBalloon.hide(1);
            } else {
                nameBalloon.commitOpen();
            }
        }
    }
}

void PatternSelectMenu::updatePopupButtons() {
    if (checkSwitchToTouch()) {
        hideCursor();
        setMainState(1);
    } else {
        if (PopupChoice_MoveCursor(&popup, takeRepeatedKeys(), &popupRow, 0)) {
            moveCursorToPopupRow();
        }
        u32 t = gPad[1];
        if (t & 1) {
            ((MenuCursor *)&cursor)->setPosePress();
            setMainState(4);
        } else if (t & 2) {
            cancelPopup();
        }
    }
}

void PatternSelectMenu::updatePopupPress() {
    if (cursor.isAnimDone()) {
        PopupChoice_DecideRow(&popup, popupRow, 1);
        popupChoice = getPopupRowValue(popupRow);
        setMainState(8);
    }
}

void PatternSelectMenu::updateCursorMove() {
    if (cursor.isMoving() == 0) {
        setMainState(returnState);
        runMainState();
    }
}

void PatternSelectMenu::updateQuitPress() {
    if (cursor.isAnimDone()) {
        bottomButtons.setSelected(9);
        setMainState(10);
    }
}

void PatternSelectMenu::updatePopupOpen() {
    if (((PopupChoiceMenuBody *)&popup)->isOpen()) {
        if (MenuCtrl_IsButtons()) {
            cursorToPopupTop();
            setMainState(3);
        } else {
            setMainState(1);
        }
    }
}

void PatternSelectMenu::updatePopupClose() {
    if (PopupChoice_TickDecideDelay(&popup)) {
        PopupChoice_Close(&popup, 0);
        if (cursor.getAnim()) {
            showCursorAtSlot();
        }
        setMainState(9);
    }
}

void PatternSelectMenu::updatePopupDone() {
    if (((PopupChoiceMenuBody *)&popup)->isClosed()) {
        onPopupChoice();
    }
}

void PatternSelectMenu::updateBarTransition() {
    if (bottomButtons.stepPress()) {
        if (cursor.getAnim()) {
            s32 a = bottomButtons.getPressOffset();
            s32 b = bottomButtons.getTargetX(-1);
            s32 c = bottomButtons.getTargetY(-1);
            cursor.warpTo(a + b, a + c);
        }
    } else {
        closeWithoutChoice();
    }
}

void PatternSelectMenu::startTouchInput() {
    hideCursor();
    setMainState(0);
}

void PatternSelectMenu::startButtonInput() {
    balloonSlot = 9;
    showCursor();
    restartKeyRepeat();
    updateNameLabel();
    setMainState(2);
}

void PatternSelectMenu::resumeInput() {
    if (MenuCtrl_IsTouch()) {
        startTouchInput();
    } else {
        startButtonInput();
    }
}

void PatternSelectMenu::closeWithoutChoice() {
    hideCursor();
    nameBalloon.hide(1);
    setFlags(0x10);
    transitionState = 3;
    MenuCtrl_SetResult(0);
    setPhase(1);
    Snd_PlaySe(0x28);
}

s32 PatternSelectMenu::getSlotX(u32 i) { return sPatternSelectSlotX[i]; }

s32 PatternSelectMenu::getSlotY(u32 i) { return sPatternSelectSlotY[i] - 0x10; }

u32 PatternSelectMenu::findTouchedSlot() {
    u8 i;
    if (bottomButtons.isTouched(9)) {
        return 8;
    }
    s32 x = gTouchCurX;
    s32 y = gTouchCurY;
    s32 xlo = x - 0x10;
    s32 xhi = x + 0x10;
    s32 ylo = y - 0x10;
    s32 yhi = y + 0x10;
    for (i = 0; i < 8; i++) {
        s32 a = getSlotX(i);
        if (xlo < a && a < xhi) {
            s32 b = getSlotY(i);
            if (ylo < b && b < yhi) {
                return i;
            }
        }
    }
    return 9;
}

void PatternSelectMenu::refreshNameLabel() {
    u8 a[0x20];
    u8 b[0x28];
    s32 x = getSlotY(balloonSlot);
    x -= 0x84;
    if (MenuCtrl_IsButtons()) {
        x -= 0xa;
    }
    _ZN12LabelBalloon6setPosEii(&nameBalloon, getSlotX(balloonSlot) - 0x78, x);
    _ZN18EncodedString16BufC1Ev(a);
    _ZN11PatternInfo15getTitleEncodedEP18EncodedString16Buf(_ZN7Pattern7getInfoEv(_ZN14PlayerPatterns17getPatternByOrderEj(_ZN10PlayerData11getPatternsEv(PlayerData_GetCurrent()), balloonSlot)), a);
    _ZN16LabelBalloonTextC1Ev(b);
    StrBuf_GameToAscii(b, a);
    _ZN12LabelBalloon7setTextEP6StrBuf(&nameBalloon, b);
    _ZN16LabelBalloonTextD1Ev(b);
    _ZN18EncodedString16BufD1Ev(a);
}

void PatternSelectMenu::updateNameLabel() {
    u32 v = cursorSlot;
    if (v <= 7) {
        balloonSlot = v;
        nameBalloon.queueOpen();
    } else {
        nameBalloon.hide(1);
    }
}

void PatternSelectMenu::setPopupChoices() {
    ChoiceIdList_Clear((u8 *)this + 0x41c, 1);
    switch (MenuCtrl_GetMode()) {
    case 5:
    case 8:
    case 9:
        ChoiceIdList_Add((u8 *)this + 0x41c, 0x91, 0);
        break;
    case 4:
    case 7:
    case 10:
        ChoiceIdList_Add((u8 *)this + 0x41c, 0x72, 0);
        break;
    default:
        ChoiceIdList_Add((u8 *)this + 0x41c, 0x28, 0);
        break;
    }
    ChoiceIdList_Add((u8 *)this + 0x41c, 2, 1);
}

u32 PatternSelectMenu::getPopupRowValue(u32 i) { return *((u8 *)this + i + 0x421); }

void PatternSelectMenu::openPopup() {
    ((PopupChoiceMenuBody *)&popup)->setRowsFromIds((PopupChoiceIdList *)((u8 *)this + 0x41c), 0);
    s32 a = getSlotX(selectedSlot) - 0x18;
    s32 b = getSlotY(selectedSlot) - 0x10;
    popup.placeAbove(a, b);
    PopupChoice_Open(&popup, 0);
    setMainState(7);
}

void PatternSelectMenu::onPopupChoice() {
    switch (popupChoice) {
    case 0:
        MenuCtrl_SetIndex(selectedSlot);
        MenuCtrl_SetResult(1);
        transitionState = 3;
        nameBalloon.hide(1);
        setPhase(1);
        break;
    case 1:
    default:
        resumeInput();
        break;
    }
}

void PatternSelectMenu::showCursor() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    cursor.warpTo(a, b);
    if (cursorSlot == 8) {
        ((MenuCursor *)&cursor)->setAnimIfChanged(7);
    } else {
        ((MenuCursor *)&cursor)->setAnimIfChanged(1);
    }
    refreshCursor();
}

s32 PatternSelectMenu::getCursorTargetX() {
    s32 t = getSlotX(cursorSlot);
    if (testFlags(8)) {
        t += 0x100;
    } else if (testFlags(4)) {
        t -= 0x100;
    }
    t += 0xb;
    return t;
}

s32 PatternSelectMenu::getCursorTargetY() { return getSlotY(cursorSlot) - 0xb; }

void PatternSelectMenu::hideCursor() {
    ((MenuCursor *)&cursor)->setAnimIfChanged(0);
    cursor.vfunc_0c();
}

void PatternSelectMenu::moveCursorToTarget() {
    if (testFlags(2)) {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        cursor.warpTo(a, b);
        clearFlags(2);
    } else {
        s32 a = getCursorTargetX();
        s32 b = getCursorTargetY();
        cursor.moveToEase(a, b, 3, 1);
        returnState = mainState;
        setMainState(5);
    }
}

void PatternSelectMenu::moveCursorToPopupRow() {
    s32 a = ((PopupChoiceMenuBody *)&popup)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&popup)->getRowY(popupRow);
    cursor.moveToLinear(a, b, 2);
    returnState = mainState;
    setMainState(5);
}

void PatternSelectMenu::cancelPopup() {
    popupChoice = 1;
    popupRow = PopupChoice_DecideCancel(&popup);
    s32 a = ((PopupChoiceMenuBody *)&popup)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&popup)->getRowY(popupRow);
    cursor.warpTo(a, b);
    cursor.setAnimAtEnd(8);
    setMainState(8);
}

void PatternSelectMenu::showCursorAtSlot() {
    s32 a = getCursorTargetX();
    s32 b = getCursorTargetY();
    cursor.warpTo(a, b);
    ((MenuCursor *)&cursor)->setAnimIfChanged(1);
}

void PatternSelectMenu::cursorToPopupTop() {
    popupRow = 0;
    s32 a = ((PopupChoiceMenuBody *)&popup)->getRowX();
    s32 b = ((PopupChoiceMenuBody *)&popup)->getRowY(popupRow);
    cursor.warpTo(a, b);
    ((MenuCursor *)&cursor)->setAnimIfChanged(7);
}

void PatternSelectMenu::refreshCursor() {
    cursor.setPoseIdle();
    cursor.vfunc_0c();
}

BOOL PatternSelectMenu::stepCursorRight(u32 lo, u32 hi) {
    u32 v = cursorSlot;
    if (v >= lo && v <= hi) {
        if (v == hi) {
            setFlags(8);
            cursorSlot = lo;
        } else {
            cursorSlot = v + 1;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL PatternSelectMenu::stepCursorLeft(u32 lo, u32 hi) {
    u32 v = cursorSlot;
    if (v >= lo && v <= hi) {
        if (v == lo) {
            cursorSlot = hi;
            setFlags(4);
        } else {
            cursorSlot = v - 1;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL PatternSelectMenu::cursorRowUp(u32 lo, u32 hi, u32 to) {
    u32 v = cursorSlot;
    if (v >= lo && v <= hi) {
        cursorSlot = v + (to - lo);
        return TRUE;
    }
    return FALSE;
}

BOOL PatternSelectMenu::cursorRowDown(u32 lo, u32 hi, u32 to) {
    u32 v = cursorSlot;
    if (v >= lo && v <= hi) {
        cursorSlot = v + (to - lo);
        return TRUE;
    }
    return FALSE;
}

BOOL PatternSelectMenu::moveCursorByPad(void *pad) {
    u32 prev = cursorSlot;
    clearFlags(0xc);
    if (MenuKeys_HasLeft(pad)) {
        if (!stepCursorLeft(0, 3)) {
            stepCursorLeft(4, 7);
        }
    } else if (MenuKeys_HasRight(pad)) {
        if (!stepCursorRight(0, 3)) {
            stepCursorRight(4, 7);
        }
    }
    if (!testFlags(0xc)) {
        if (MenuKeys_HasUp(pad)) {
            if (!cursorRowUp(4, 7, 0)) {
                if (cursorSlot == 8) {
                    cursorSlot = 7;
                    ((MenuCursor *)&cursor)->switchToAnim01();
                }
            }
        } else if (MenuKeys_HasDown(pad)) {
            if (!cursorRowDown(0, 3, 4)) {
                u32 t = cursorSlot;
                if (t >= 4 && t <= 7) {
                    cursorSlot = 8;
                    ((MenuCursor *)&cursor)->switchToAnim07();
                }
            }
        }
    }
    if (prev != cursorSlot) {
        return TRUE;
    }
    return FALSE;
}

BOOL PatternSelectMenu::testFlags(u32 mask) {
    if (flags & mask) {
        return TRUE;
    }
    return FALSE;
}

void PatternSelectMenu::setFlags(u32 mask) { flags = flags | mask; }

void PatternSelectMenu::clearFlags(u32 mask) { flags = flags & ~mask; }

extern "C" const u8 sPatternSelectSlotX[9] = {0x28, 0x60, 0x98, 0xd0, 0x38, 0x70, 0xa8, 0xe0, 0xb9};
extern "C" const u8 sPatternSelectSlotY[9] = {0x7c, 0x7c, 0x7c, 0x7c, 0xa4, 0xa4, 0xa4, 0xa4, 0xd1};

