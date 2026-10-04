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
#include "menu/MenuTextButton.h"
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

extern "C" void Menu_PlayScrollTickSe() { Snd_PlaySe(0x19); }

extern "C" void Menu_PlayScrollGrabSe() { Snd_PlaySe(0x33); }

extern "C" void Menu_LoadPaperBg(s32 a, void *b) {
    void *h = gCurrentHeap;
    char buf[0x20];
    func_020639e8(buf, "menu/paper/chr/%03d.bch", a);
    Gfx2d_LoadCharFile(buf, h, (s32)b, 0x10, 0x10, 0x74);
    func_020639e8(buf, "menu/paper/scr/%03d.bsc", a);
    Gfx2d_LoadScreenFile(buf, h, (s32)b);
    func_020639e8(buf, "menu/paper/plt/%03d.bpl", a, a);
    Gfx2d_LoadPaletteFile(buf, h, (s32)b, 0xc, 0xc, 0xe);
}

extern "C" void *_ZN10MenuCursorC1Ei(MenuCursor *self, BOOL flag) {
    _ZN10HandCursorC2Ei(self, flag);
    *(void **)self = &_ZTV10MenuCursor[2];
    _ZN12CursorMotionC1Ev(&self->motion);
    self->setAnim(0);
    self->motion.reset();
    self->priority = 0;
    self->enableObjWindow();
    return self;
}

extern "C" void *_ZN10MenuCursorD1Ev(MenuCursor *self) {
    *(void **)self = &_ZTV10MenuCursor[2];
    _ZN12CursorMotionD1Ev(&self->motion);
    _ZN10HandCursorD2Ev(self);
    return self;
}

extern "C" void *_ZN10MenuCursorD0Ev(MenuCursor *self) {
    *(void **)self = &_ZTV10MenuCursor[2];
    _ZN12CursorMotionD1Ev(&self->motion);
    _ZN10HandCursorD2Ev(self);
    operator delete(self);
    return self;
}

extern "C" void *_ZN10MenuCursorD2Ev(MenuCursor *self) {
    *(void **)self = &_ZTV10MenuCursor[2];
    _ZN12CursorMotionD1Ev(&self->motion);
    _ZN10HandCursorD2Ev(self);
    return self;
}

void MenuCursor::setAnimIfChanged(s32 idx) {
    if (idx != getAnim() || idx == 6 || idx == 0xc) {
        setAnim(idx);
    }
}

void MenuCursor::switchToAnim07() {
    if (getAnim() == 1) {
        s32 a = getFrameScreenX();
        s32 b = getFrameScreenY();
        warpTo(a + 0x10, b);
    } else if (getAnim() == 0xd) {
        s32 a = getFrameScreenX();
        s32 b = getFrameScreenY();
        warpTo(a + 4, b + 0x18);
    }
    setAnimIfChanged(7);
}

void MenuCursor::switchToAnim01() {
    if (getAnim() == 7) {
        s32 a = getFrameScreenX();
        s32 b = getFrameScreenY();
        warpTo(a - 0x10, b);
    } else if (getAnim() == 0xd) {
        s32 a = getFrameScreenX();
        s32 b = getFrameScreenY();
        warpTo(a - 0xc, b + 0x18);
    }
    setAnimIfChanged(1);
}

void MenuCursor::switchToAnim0D() {
    if (getAnim() == 1) {
        s32 a = getFrameScreenX();
        s32 b = getFrameScreenY();
        warpTo(a + 0xc, b - 0x18);
    } else if (getAnim() == 7) {
        s32 a = getFrameScreenX();
        s32 b = getFrameScreenY();
        warpTo(a - 4, b - 0x18);
    }
    setAnimIfChanged(0xd);
}

// ------------------------------------------------------------------------------------
void MenuCursor::setPosePress() {
    switch (getAnim()) {
    case 0:
        break;
    case 1:
    case 2:
    case 3:
        setAnim(2);
        break;
    case 7:
    case 8:
    case 9:
        setAnim(8);
        break;
    case 13:
    case 14:
    case 15:
        setAnim(0xe);
        break;
    case 16:
    case 17:
    case 18:
        setAnim(0x11);
        break;
    case 4:
    case 5:
    case 6:
    case 10:
    case 11:
    case 12:
    default:
        setAnim(8);
        break;
    }
}

void MenuCursorBase::setPoseRelease() {
    switch (getAnim()) {
    case 0:
        break;
    case 1:
    case 2:
    case 3:
        setAnim(3);
        break;
    case 7:
    case 8:
    case 9:
        setAnim(9);
        break;
    case 13:
    case 14:
    case 15:
        setAnim(0xf);
        break;
    case 16:
    case 17:
    case 18:
        setAnim(0x12);
        break;
    default:
        setAnim(9);
        break;
    }
}

void MenuCursorBase::setPoseIdle() {
    switch (getAnim()) {
    case 0:
        break;
    case 1:
    case 2:
    case 3:
        setAnim(1);
        break;
    case 7:
    case 8:
    case 9:
        setAnim(7);
        break;
    case 13:
    case 14:
    case 15:
        setAnim(0xd);
        break;
    case 16:
    case 17:
    case 18:
        setAnim(0x10);
        break;
    default:
        setAnim(9);
        break;
    }
}

void MenuCursorBase::setScreenPos(s32 x, s32 y) {
    setPos(x - 0x80, y - 0x60);
}

void MenuCursorBase::warpTo(s32 x, s32 y) {
    motion.stop();
    motion.setPos(x, y);
    setScreenPos(x, y);
}

void MenuCursorBase::moveToLinear(s32 x, s32 y, s32 n) {
    Snd_PlaySe(0xb);
    motion.startLinear(x, y, n);
}

void MenuCursorBase::moveToEase(s32 x, s32 y, s32 n, s32 f) {
    if (f != 0) {
        Snd_PlaySe(0xb);
    }
    motion.startEase(x, y, n);
}

void MenuCursorBase::moveToNear(s32 x, s32 y, s32 n, u8 e) {
    s32 dx = x - (posX + getOriginX());
    Snd_PlaySe(0xb);
    if (dx >= -0x30 && dx <= 0x30) {
        s32 dy = y - (posY + getOriginY());
        if (dy >= -0x30 && dy <= 0x30) {
            n = e;
        }
    }
    motion.startEase(x, y, n);
}

BOOL MenuCursorBase::func_ov002_02202928() {
    switch (getAnim()) {
    case 4:
    case 10:
        if (layer1.getFrameIndex() >= 4) {
            return TRUE;
        }
        return FALSE;
    case 5:
    case 11:
        if (layer1.getFrameIndex() < 3) {
            return TRUE;
        }
        return FALSE;
    case 6:
    case 12:
        return TRUE;
    case 7:
    case 8:
    case 9:
    default:
        return FALSE;
    }
}

BOOL MenuCursorBase::func_ov002_022028fc() {
    s32 t = getAnim();
    if (t == 6 || t == 0xc) {
        if (layer1.getFrameIndex() == 2) {
            return TRUE;
        }
        return FALSE;
    }
    return TRUE;
}

BOOL MenuCursorBase::isMoving() {
    return motion.isMoving();
}

s32 MenuCursorBase::getFrameScreenX() {
    s32 t = layer1.getFrameX(-1);
    return t + (posX + getOriginX());
}

s32 MenuCursorBase::getFrameScreenY() {
    s32 t = layer1.getFrameY(-1);
    return t + (posY + getOriginY());
}

s32 MenuCursorBase::getScreenX() {
    return posX + getOriginX();
}

s32 MenuCursorBase::getScreenY() {
    return posY + getOriginY();
}

void MenuCursorBase::drawWrapped() {
    HandCursor::draw();
    s32 old = posX;
    if (old + getOriginX() > 0xe0) {
        posX -= 0x100;
        HandCursor::draw();
        posX = old;
    }
}

void MenuCursorBase::update() {
    motion.update();
    s32 x = motion.getX();
    s32 y = motion.getY();
    setScreenPos(x, y);
    if (isAnimDone()) {
        if (getAnim() == 5) {
            setAnim(1);
        } else if (getAnim() == 0xb) {
            setAnim(7);
        }
    }
    HandCursor::update();
}

CursorMotion::CursorMotion() {}

CursorMotion::~CursorMotion() {}

void CursorMotion::reset() {
    mode = 0;
}

BOOL CursorMotion::update() {
    if (mode != 2 && mode != 3) {
        return TRUE;
    }
    if (framesLeft != 0) {
        framesLeft--;
        switch (mode) {
        case 2:
            posX += stepX;
            posY += stepY;
            break;
        case 3:
            posX += stepX;
            posY += stepY;
            if (framesLeft > 1) {
                stepX >>= 1;
                stepY >>= 1;
            }
            break;
        }
        while (posX < 0) {
            posX += 0x1000;
        }
        while (posX > 0x1000) {
            posX -= 0x1000;
        }
    }
    if (framesLeft == 0) {
        return TRUE;
    }
    return FALSE;
}

s32 CursorMotion::getX() {
    return posX >> 4;
}

s32 CursorMotion::getY() {
    return posY >> 4;
}

void CursorMotion::stop() {
    mode = 1;
}

void CursorMotion::setPos(s32 x, s32 y) {
    posX = x << 4;
    posY = y << 4;
}

void CursorMotion::startLinear(s32 x, s32 y, s32 n) {
    mode = 2;
    x = x << 4;
    stepX = (x - posX) / n;
    y = y << 4;
    stepY = (y - posY) / n;
    framesLeft = n;
}

void CursorMotion::startEase(s32 x, s32 y, s32 n) {
    if (n == 1) {
        startLinear(x, y, 1);
    } else {
        mode = 3;
        s32 t = x << 4;
        stepX = (t - posX) >> 1;
        y = y << 4;
        stepY = (y - posY) >> 1;
        framesLeft = n;
    }
}

BOOL CursorMotion::isMoving() {
    BOOL r = FALSE;
    BOOL m = TRUE;
    if (mode != 2 && mode != 3) {
        m = FALSE;
    }
    if (m && framesLeft != 0) {
        r = TRUE;
    }
    return r;
}

// ---- MenuCursorBase and derived ----

extern "C" void *_ZN14MenuCursorBuf0C1Ev(MenuCursorBuf0 *self) {
    _ZN10MenuCursorC1Ei(self, 0);
    *(void **)self = &_ZTV14MenuCursorBuf0[2];
    return self;
}

extern "C" void *_ZN14MenuCursorBuf0D1Ev(MenuCursorBuf0 *self) {
    *(void **)self = &_ZTV14MenuCursorBuf0[2];
    _ZN10MenuCursorD2Ev(self);
    return self;
}

extern "C" void *_ZN14MenuCursorBuf0D0Ev(MenuCursorBuf0 *self) {
    *(void **)self = &_ZTV14MenuCursorBuf0[2];
    _ZN10MenuCursorD2Ev(self);
    operator delete(self);
    return self;
}

extern "C" void *_ZN14MenuCursorBuf1C1Ev(MenuCursorBuf1 *self) {
    _ZN10MenuCursorC1Ei(self, 1);
    *(void **)self = &_ZTV14MenuCursorBuf1[2];
    return self;
}

extern "C" void *_ZN14MenuCursorBuf1D1Ev(MenuCursorBuf1 *self) {
    *(void **)self = &_ZTV14MenuCursorBuf1[2];
    _ZN10MenuCursorD2Ev(self);
    return self;
}

extern "C" void *_ZN14MenuCursorBuf1D0Ev(MenuCursorBuf1 *self) {
    *(void **)self = &_ZTV14MenuCursorBuf1[2];
    _ZN10MenuCursorD2Ev(self);
    operator delete(self);
    return self;
}

extern "C" void *_ZTV14MenuCursorBuf1[7] = {
    0,
    0,
    (void *)_ZN14MenuCursorBuf1D1Ev,
    (void *)_ZN14MenuCursorBuf1D0Ev,
    (void *)_ZN10HandCursor4drawEv,
    (void *)_ZN14MenuCursorBase6updateEv,
    (void *)_ZN8UiWidget9setOriginEii,
};

extern "C" void *_ZTV14MenuCursorBuf0[7] = {
    0,
    0,
    (void *)_ZN14MenuCursorBuf0D1Ev,
    (void *)_ZN14MenuCursorBuf0D0Ev,
    (void *)_ZN10HandCursor4drawEv,
    (void *)_ZN14MenuCursorBase6updateEv,
    (void *)_ZN8UiWidget9setOriginEii,
};

extern "C" void *_ZTV10MenuCursor[7] = {
    0,
    0,
    (void *)_ZN10MenuCursorD1Ev,
    (void *)_ZN10MenuCursorD0Ev,
    (void *)_ZN10HandCursor4drawEv,
    (void *)_ZN14MenuCursorBase6updateEv,
    (void *)_ZN8UiWidget9setOriginEii,
};
