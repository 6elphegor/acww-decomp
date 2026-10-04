#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"
#include "sys/PrioListNode.h"
#include "talk/MsgStringBase.h"
#include "gfx/BgTransfer.h"
#include "gfx/SpriteAnim.h"
#include "ui/UiWidget.h"
#include "snd/BgmVolumeMixer.h"
#include "gfx/VramTask.h"
#include "talk/LabelBalloonText.h"
#include "menu/MenuSlide.h"
#include "menu/MenuProc.h"
#include "ui/LabelBalloon.h"
#include "gfx/BgVramTask.h"
#include "snd/BgmManager.h"
#include "ui/TouchPromptBalloon.h"
#include "menu/MenuErrorMessage.h"
#include "menu/MenuTabBar.h"
#include "sys/ProcProfile.h"

extern "C" {
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

extern void *gMenuHeap;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];
}









class MenuProc;
typedef void (MenuProc::*Unk_ov002_02200a68_Fn)();


// ---------------------------------------------------------------- ov090 declarations
extern "C" {
void Gfx2d_SetSubBgModeState(u32 a);
s32 Gfx2d_LoadPaletteFile(u32 p0, u32 p1, u32 p2, s32 p3, u8 e, u8 f);
void func_020639e8(char *buf, const char *fmt, ...);
BOOL File_LoadToBuffer(const void *a, void *b, s32 c);
BOOL MenuCtrl_RequestOpenNested(u32 v);
void MenuCtrl_SetMode(u8 v);
u32 MenuCtrl_GetMode();
void MenuScreen_BeginClose();
void MenuCtrl_ClearSavedSlot();
void MenuScreen_ReleaseCloseHold();
BOOL Save_WritePlayerFriendList();
void MenuScreen_Reset();
void Snd_EndMenuDuck();
void MenuCtrl_ClearSyncMsgMenu();
void MenuCtrl_SetSyncMsgMenu();
void MenuScreen_BeginOpen();
void Snd_BeginMenuDuck();
void MenuCtrl_SyncFromInputMode();
void ProcBase_RequestDelete();
s32 Oam_DrawObj(s32 mode, u32 *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);

extern u32 gCurrentHeap;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 gFieldSceneKind;
}

class Unk_02083b0_dummy;








extern "C" BgmManager *data_021c1b3c;

class MenuTabBar;
typedef void (MenuTabBar::*Unk_ov090_022921e0_Fn)();


extern "C" {
MenuTabBar *MenuTabBar_Create();
s32 MenuTabBar_TabFromX(s32 a);
u8 MenuTabBar_NextTab(u8 a);
u8 MenuTabBar_PrevTab(u8 a);
s32 MenuTabBar_GetTabX(s32 a);
s32 MenuTabBar_HitTestTouch();
}

extern "C" u8 sTabSwitchCooldown;
extern "C" u32 sTabBarOamCells[32];

static inline BOOL Unk_ov090_02291aa0_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" MenuTabBar *MenuTabBar_Create() { return new MenuTabBar(); }

BOOL MenuTabBar::onCreate() {
    justOpened = 1;
    MenuCtrl_SetSyncMsgMenu();
    initTabBar();
    MenuScreen_BeginOpen();
    loadedTab = 0xff;
    sTabSwitchCooldown = 0;
    saveState = 0;
    mainState = 1;
    transitionState = 0;
    setPhase(0);
    MenuCtrl_ClearSavedSlot();
    Snd_BeginMenuDuck();
    MenuCtrl_SyncFromInputMode();
    return TRUE;
}

BOOL MenuTabBar::onDelete() {
    MenuScreen_Reset();
    releaseResources();
    Snd_EndMenuDuck();
    MenuCtrl_ClearSyncMsgMenu();
    return TRUE;
}

BOOL MenuTabBar::onDraw() {
    if (visible == 0) {
        return FALSE;
    }
    s32 i;
    s32 j = 0;
    i = j;
    for (; i <= 7; i++, j += 2) {
        Oam_DrawObj(1, &sTabBarOamCells[j * 2], 0x80, slideY + 0x50, -1, 2, 0);
        Oam_DrawObj(1, &sTabBarOamCells[(j + 1) * 2], 0x80, slideY + 0x50, -1, 2, 0);
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" ProcProfile sMenuTabBarProfile;
extern "C" u32 sTabBarOamCells[32];

extern "C" ProcProfile sMenuTabBarProfile = {(void *(*)())MenuTabBar_Create, 0x8f, 0x93};

extern "C" u32 sTabBarOamCells[32] = {
    0x404900a1, 0x0000f092, 0x005980a1, 0x0000f094, 0x41b300a1, 0x0000f080, 0x01c380a1, 0x0000f082, 0x41cc00a1, 0x0000f083, 0x01dc80a1, 0x0000f085, 0x41e500a1, 0x0000f086, 0x01f580a1, 0x0000f088, 0x41fe00a1, 0x0000f089, 0x000e80a1, 0x0000f08b, 0x401700a1, 0x0000f08c, 0x002780a1, 0x0000f08e, 0x403000a1, 0x0000f08f, 0x004080a1, 0x0000f091, 0x406700a1, 0x0000f095, 0x007780a1, 0xfffff097
};

BOOL MenuTabBar::execTransition() {
    static Unk_ov090_022921e0_Fn tbl[3] = {&MenuTabBar::stateLoad, &MenuTabBar::stateSlideIn,
                                           &MenuTabBar::stateSlideOut};
    cancelVramTasks();
    (this->*tbl[transitionState])();
    return TRUE;
}

BOOL MenuTabBar::execMain() {
    static Unk_ov090_022921e0_Fn tbl[3] = {&MenuTabBar::updateIdle, &MenuTabBar::updateOpenTabMenu,
                                           &MenuTabBar::updateSaving};
    cancelVramTasks();
    if (saveState == 2) {
        if (Save_WritePlayerFriendList()) {
            u8 c;
            mainState = 2;
            c = 0x1f;
            errorMessage.open(&c, 1, 1);
            saveState = 3;
        } else {
            saveState = 0;
            MenuScreen_BeginClose();
        }
    }
    if (sTabSwitchCooldown != 0) {
        sTabSwitchCooldown = sTabSwitchCooldown - 1;
    }
    (this->*tbl[mainState])();
    if (tabsShown != 0) {
        if (slideY != 0x10) {
            if (slideY >= 0xe) {
                slideY = 0x10;
            } else {
                slideY = *(volatile u8 *)&slideY + 2;
            }
        }
    } else if (slideY != 0) {
        if (slideY <= 4) {
            visible = 0;
            slideY = 0;
        } else {
            slideY = *(volatile u8 *)&slideY - 4;
        }
    }
    if (lrSwitchEnabled != 0) {
        if ((gPad[1] & 0x100) != 0) {
            showTab(MenuTabBar_NextTab(curTab));
            Snd_PlaySe(3);
        }
        if ((gPad[1] & 0x200) != 0) {
            showTab(MenuTabBar_PrevTab(curTab));
            Snd_PlaySe(3);
        }
    }
    return TRUE;
}

BOOL MenuTabBar::execPhase3() { return TRUE; }

BOOL MenuTabBar::execPhase4() { return TRUE; }

BOOL MenuTabBar::execClosed() {
    ProcBase_RequestDelete();
    return TRUE;
}

void MenuTabBar::selectTab(u32 idx) {
    justOpened = 0;
    u32 old = curTab;
    showTab(idx);
    if (idx == 7) {
        tabsShown = 0;
        if (saveState == 1) {
            saveState = 2;
        }
        if (saveState == 0) {
            MenuScreen_BeginClose();
        }
        Snd_PlaySe(2);
        data_021c1b3c->mixer.endMenuDuck();
    } else {
        if (idx <= 6 && old <= 6) {
            Snd_PlaySe(3);
        }
    }
    if (idx == 0) {
        MenuCtrl_ClearSavedSlot();
    }
    if (old <= 6 && idx <= 6) {
        lrSwitchEnabled = 1;
    }
}

u8 MenuTabBar::onTabMenuClosed() {
    switch (curTab) {
    case 7:
        if (saveState == 0) {
            MenuScreen_ReleaseCloseHold();
            beginClose();
        }
        break;
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
        mainState = 1;
        break;
    }
    return curTab;
}

void MenuTabBar::beginClose() {
    transitionState = 2;
    setPhase(1);
    Gfx2d_SetSubBgModeState(1);
}

void MenuTabBar::updateIdle() {}

void MenuTabBar::updateOpenTabMenu() {
    if (sTabSwitchCooldown == 0) {
        lrSwitchEnabled = 0;
        switch (curTab) {
        case 0: {
            BOOL r = FALSE;
            if (gFieldSceneKind == 0) {
                r = TRUE;
            }
            if (r) {
                MenuCtrl_RequestOpenNested(2);
            } else {
                MenuCtrl_RequestOpenNested(1);
            }
            break;
        }
        case 1:
            MenuCtrl_RequestOpenNested(3);
            break;
        case 2:
            MenuCtrl_RequestOpenNested(4);
            break;
        case 3:
            MenuCtrl_RequestOpenNested(5);
            break;
        case 4:
            MenuCtrl_RequestOpenNested(6);
            break;
        case 5:
            MenuCtrl_RequestOpenNested(7);
            break;
        case 8:
            MenuCtrl_RequestOpenNested(8);
            break;
        case 6:
            MenuCtrl_RequestOpenNested(0x24);
            break;
        case 9:
        case 10:
        case 11:
        case 12:
            MenuCtrl_RequestOpenNested(0xf);
            MenuCtrl_SetMode(curTab + 0xf);
            break;
        case 13:
        case 14:
            MenuCtrl_RequestOpenNested(0x2b);
            MenuCtrl_SetMode(curTab);
            break;
        case 7:
            break;
        }
        mainState = 0;
    }
}

void MenuTabBar::updateSaving() { errorMessage.update(0); }

void MenuTabBar::stateLoad() {
    Gfx2d_LoadPaletteFile((u32)"menu/tag/obj.bpl", gCurrentHeap, 8, 0xf, 0xf, 0xf);
    File_LoadToBuffer("menu/tag/obj1.bch", commonObjChars, 0x800);
    File_LoadToBuffer("menu/tag/obj2.bch", tabObjChars, 0x800);
    showTab(MenuCtrl_GetMode());
    visible = 1;
    slideY = 0;
    transitionState = 1;
    Gfx2d_SetSubBgModeState(0);
}

void MenuTabBar::stateSlideIn() {
    tabsShown = 1;
    setPhase(2);
}

void MenuTabBar::stateSlideOut() {
    if (*(volatile u8 *)&slideY <= 4) {
        visible = 0;
        setPhase(0);
    } else {
        slideY = slideY - 4;
    }
}

void MenuTabBar::initTabBar() {
    visible = 0;
    slideY = 0;
    tabsShown = 0;
    lrSwitchEnabled = 0;
    Snd_PlaySe(1);
    data_021c1b3c->mixer.setMenuDuck(0);
}

void MenuTabBar::releaseResources() { cancelVramTasks(); }

extern "C" s32 MenuTabBar_HitTestTouch() {
    if (!Unk_ov090_02291aa0_Both()) {
        return -1;
    }
    s32 v = gTouchCurX;
    s32 lim = gTouchCurY;
    if (lim > 0x10) {
        return -1;
    }
    if (v < 0x35) {
        return -1;
    }
    if (v >= 0x100) {
        return -1;
    }
    s32 r = (v - 0x35) / 0x19;
    if (r >= 7) {
        r = 7;
    }
    return r;
}

void MenuTabBar::showTabs() {
    tabsShown = 1;
    visible = 1;
}

void MenuTabBar::hideTabs() { tabsShown = 0; }

extern "C" s32 MenuTabBar_GetTabX(s32 a) {
    if (a == 7) {
        return 0xf3;
    }
    return a * 0x19 + 0x3f;
}

extern "C" u8 MenuTabBar_PrevTab(u8 a) {
    if (a <= 6) {
        sTabSwitchCooldown = 10;
        if (a == 0) {
            return 6;
        }
        return a - 1;
    }
    return a;
}

extern "C" u8 MenuTabBar_NextTab(u8 a) {
    sTabSwitchCooldown = 10;
    if (a <= 6) {
        if (a == 6) {
            return 0;
        }
        return a + 1;
    }
    return a;
}

void MenuTabBar::cancelVramTasks() {
    s32 i;
    for (i = 0; i < 3; i++) {
        vramTasks[i].cancel();
    }
}

void MenuTabBar::showTab(u32 idx) {
    curTab = idx;
    if (idx <= 7) {
        if (idx != loadedTab) {
            char buf[0x24];
            vramTasks[0].requestChars((u32)commonObjChars, 8, 0x80, 0x80, 0xbf);
            u32 a = (u32)tabObjChars + idx * 0x60;
            u32 t = idx * 3 + 0x80;
            vramTasks[1].requestCharPair(a, a + 0x400, 8, t, t + 2, t + 0x20, t + 0x22);
            func_020639e8(buf, "menu/tag/obj%d.bpl", idx);
            File_LoadToBuffer(buf, tabPalette, 0x20);
            vramTasks[2].requestPalette((u32)tabPalette, 8, 0xf);
            loadedTab = idx;
        }
    }
}

void MenuTabBar::requestSaveOnClose() { saveState = 1; }

extern "C" s32 MenuTabBar_TabFromX(s32 a) {
    s32 r = (a - 0x33) / 0x19;
    if (r < 0) {
        r = 0;
    }
    if (r > 7) {
        r = 7;
    }
    return r;
}

// ---------------------------------------------------------------- MenuTabBar

BOOL MenuTabBar::isJustOpened() {
    if (justOpened != 0) {
        return TRUE;
    }
    return FALSE;
}
u8 sTabSwitchCooldown;
