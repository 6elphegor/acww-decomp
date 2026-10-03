#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#include "text/Unk_02050288.h"
#undef postCreate
#undef vfunc_14

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

extern void *data_021c6210;
extern u8 gTouchHeld;
extern u8 gTouchChanged;
extern u16 gPad[];
}

class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    u8 unk_00[0x14];
};

class MsgStringBase {
public:
    virtual ~MsgStringBase() {}
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020e0d80 : public MsgStringBase {
public:
    Unk_020e0d80();
    virtual ~Unk_020e0d80();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x04 */ u8 unk_04[0x24];
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

class LabelBalloon : public UiWidget {
public:
    LabelBalloon(s32 flag);
    virtual ~LabelBalloon();
    virtual void draw();
    virtual void vfunc_0c();

    s32 getState();
    BOOL requestClose();
    BOOL requestOpen();
    void setClampToScreen(u8 v);
    void enableCenterText();

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ SpriteAnim unk_20;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ s32 unk_48;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ s32 unk_50;
    /* 0x54 */ u8 unk_54[9];
    /* 0x60 */ Unk_020e0d80 unk_60;
    /* 0x88 */ Unk_020e0d80 unk_88;
    /* 0xb0 */ TextLabel *unk_b0;
    /* 0xb4 */ TextLabel *unk_b4;
    /* 0xb8 */ s32 unk_b8;
};

// Vtable 0x02204468
class TouchPromptBalloon : public LabelBalloon {
public:
    TouchPromptBalloon();
    virtual ~TouchPromptBalloon();

    BOOL isOpenOrOpening();
    void setAutoCloseTimer(u8 v);
    void func_ov002_022006ac(s32 v);
    void cancelQueuedOpen();
    void queueOpen();
    void commitOpen();
    BOOL hide(s32 a);
    s32 updatePrompt();

    /* 0xbc */ u8 unk_bc;
    /* 0xbd */ u8 unk_bd;
    /* 0xbe */ volatile u8 unk_be;
};

// Sub-object at +0x70 of MenuProc (window / mask helper)
class MenuSlideView {
public:
    MenuSlideView();
    ~MenuSlideView();

    void setExtent(s32 v);
    void applyWindow(s32 a);
    void applyLayerOffset(s32 a, s32 b, s32 c);
    void initSlideOut(s32 a, s32 mode, s32 dist);
    void initSlideIn(s32 a, s32 mode, s32 dist);
    void beginMainSlideOut(s32 a, s32 b, s32 mode, s32 dist);
    void beginMainSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideOut(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    BOOL stepSlideOut(s32 a);
    void func_ov002_022011ec();
    BOOL func_ov002_022011cc();
    void func_ov002_02200fa8(s32 a);
    void func_ov002_02200fe0(s32 a);
    BOOL func_ov002_0220102c(s32 a);
    s32 func_ov002_02201124();
    s32 func_ov002_02201140();

    /* 0x00 */ u8 unk_00[0xc];
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 unk_18;
};

// Sub-object at +0x50 of MenuProc (pad input)
class Unk_ov002_022013a0 {
public:
    Unk_ov002_022013a0();
    ~Unk_ov002_022013a0();

    void func_ov002_02201240(s32 a, s32 b, s32 c);
    BOOL func_ov002_0220129c();
    BOOL func_ov002_022012b0();
    BOOL func_ov002_022012c4();
    BOOL func_ov002_022012d8();
    u32 func_ov002_022012ec();
    void func_ov002_022012f8();

    /* 0x00 */ u8 unk_00[0x14];
};

class MenuProc;
typedef void (MenuProc::*Unk_ov002_02200a68_Fn)();

// Vtable 0x022044e4
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
    void setSlideExtent(s32 v);
    void initSlideOut(s32 a, s32 mode);
    void initSlideIn(s32 a, s32 mode);
    void beginMainSlideOut(s32 a, s32 b, s32 mode, s32 dist);
    void beginMainSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideOut(s32 a, s32 b, s32 mode, s32 dist);
    void beginSubSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    BOOL stepSlideOut(s32 a);
    BOOL stepSlideIn(s32 a);
    s32 getSlideOffsetX();
    s32 getSlideOffsetY();
    BOOL checkSwitchToTouch();
    BOOL checkSwitchToButtons(s32 a);
    void setTransitionState(u8 v);
    void setMainState(u8 v);
    void setPhase(u8 v);
    void initKeyRepeat(s32 a, s32 b, s32 c);
    void restartKeyRepeat();
    BOOL isRepeatRight();
    BOOL isRepeatLeft();
    BOOL isRepeatDown();
    BOOL isRepeatUp();
    u32 takeRepeatedKeys();

    /* 0x50 */ Unk_ov002_022013a0 unk_50;
    /* 0x64 */ u32 unk_64;
    /* 0x68 */ u32 unk_68;
    /* 0x6c */ MenuProc *unk_6c;
    /* 0x70 */ MenuSlideView unk_70;
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 unk_8f;
    /* 0x90 */ u8 unk_90;
};

// ---------------------------------------------------------------- ov090 declarations
extern "C" {
void Gfx2d_SetSubBgModeState(u32 a);
s32 Gfx2d_LoadPaletteFile(u32 p0, u32 p1, u32 p2, s32 p3, u8 e, u8 f);
void func_020639e8(char *buf, const char *fmt, ...);
BOOL File_LoadToBuffer(const void *a, void *b, s32 c);
BOOL MenuCtrl_RequestOpenNested(u32 v);
void func_0206ed44(u8 v);
u32 func_0206ed50();
void MenuScreen_BeginClose();
void func_0206ec60();
void func_0206e03c();
BOOL Save_WritePlayerFriendList();
void MenuScreen_Reset();
void Snd_EndMenuDuck();
void func_0206e5fc();
void func_0206e60c();
void MenuScreen_BeginOpen();
void Snd_BeginMenuDuck();
void MenuCtrl_SyncFromInputMode();
void ProcBase_RequestDelete();
s32 func_02088730(s32 mode, u32 *info, s32 x, s32 y, s32 pal, s32 pri, s32 *rect);

extern u32 gCurrentHeap;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 data_020e416c;
}

class Unk_02083b0_dummy;
class Unk_020b83b0 {
public:
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;

    Unk_020b83b0() : unk_04(0), unk_08(0), unk_0c(0xff) {}
};

class VramTask : public Unk_020b83b0 {
public:
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;

    VramTask();
    virtual BOOL execute() = 0;
};

struct BgTransfer {
    u32 unk_00;
    u8 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
};

class BgVramTask : public VramTask {
public:
    BgTransfer unk_10;

    BgVramTask();
    virtual BOOL execute();
    virtual void clear();
    BOOL requestPalette(u32 a, u8 b, u32 c);
    BOOL requestChars(u32 a, u8 b, u32 c, u32 d, u32 e);
    void cancel(void);
};

class BgVramTaskPair : public BgVramTask {
public:
    BgTransfer unk_24;

    BgVramTaskPair();
    virtual BOOL execute();
    virtual void clear();
    BOOL requestCharPair(u32 a, u32 b, u8 c, u32 d, u32 e, u32 f, u32 g);
};

class MenuErrorMessage {
public:
    MenuErrorMessage();
    ~MenuErrorMessage();
    void update(s32 a);
    void open(u8 *p, s32 a, u32 b);

    u32 unk_00[0x42];
};

class Unk_02035758 {
public:
    void func_02035bb4();
    void func_02035bbc(s32 i);
    u32 unk_00;
};

class Unk_02034518 {
public:
    u32 unk_00[0x71];
    Unk_02035758 unk_1c4;
};

extern "C" Unk_02034518 *data_021c1b3c;

class MenuTabBar;
typedef void (MenuTabBar::*Unk_ov090_022921e0_Fn)();

// Vtable 0x022921e0
class MenuTabBar : public MenuProc {
public:
    inline MenuTabBar() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    BOOL isJustOpened();
    void requestSaveOnClose();
    void showTab(u32 idx);
    void cancelVramTasks();
    void hideTabs();
    void showTabs();
    void releaseResources();
    void initTabBar();
    void stateSlideOut();
    void stateSlideIn();
    void stateLoad();
    void updateSaving();
    void updateOpenTabMenu();
    void updateIdle();
    void beginClose();
    u8 onTabMenuClosed();
    void selectTab(u32 idx);

    /* 0x91 */ u8 unk_91;
    /* 0x92 */ u8 unk_92;
    /* 0x93 */ u8 unk_93;
    /* 0x94 */ u8 unk_94;
    /* 0x95 */ u8 unk_95;
    /* 0x96 */ u8 unk_96;
    /* 0x97 */ u8 unk_97;
    /* 0x98 */ u8 unk_98;
    /* 0x9c */ BgVramTaskPair unk_9c[3];
    /* 0x144 */ u32 unk_144[0x200];
    /* 0x944 */ u32 unk_944[0x200];
    /* 0x1144 */ u32 unk_1144[8];
    /* 0x1164 */ MenuErrorMessage unk_1164;
};

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
struct Unk_ov090_SceneEntry {
    void *factory;
    u16 a;
    u16 b;
};

static inline BOOL Unk_ov090_02291aa0_Both() {
    if (gTouchHeld != 0 && gTouchChanged != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" MenuTabBar *MenuTabBar_Create() { return new MenuTabBar(); }

BOOL MenuTabBar::vfunc_00() {
    unk_98 = 1;
    func_0206e60c();
    initTabBar();
    MenuScreen_BeginOpen();
    unk_96 = 0xff;
    sTabSwitchCooldown = 0;
    unk_97 = 0;
    unk_8d = 1;
    unk_8c = 0;
    setPhase(0);
    func_0206ec60();
    Snd_BeginMenuDuck();
    MenuCtrl_SyncFromInputMode();
    return TRUE;
}

BOOL MenuTabBar::vfunc_0c() {
    MenuScreen_Reset();
    releaseResources();
    Snd_EndMenuDuck();
    func_0206e5fc();
    return TRUE;
}

BOOL MenuTabBar::onDraw() {
    if (unk_91 == 0) {
        return FALSE;
    }
    s32 i;
    s32 j = 0;
    i = j;
    for (; i <= 7; i++, j += 2) {
        func_02088730(1, &sTabBarOamCells[j * 2], 0x80, unk_92 + 0x50, -1, 2, 0);
        func_02088730(1, &sTabBarOamCells[(j + 1) * 2], 0x80, unk_92 + 0x50, -1, 2, 0);
    }
    return TRUE;
}// Declarations for data defined further down (definition order sets the data layout)
extern "C" Unk_ov090_SceneEntry sMenuTabBarProfile;
extern "C" u32 sTabBarOamCells[32];

extern "C" Unk_ov090_SceneEntry sMenuTabBarProfile = {(void *)MenuTabBar_Create, 0x8f, 0x93};

extern "C" u32 sTabBarOamCells[32] = {
    0x404900a1, 0x0000f092, 0x005980a1, 0x0000f094, 0x41b300a1, 0x0000f080, 0x01c380a1, 0x0000f082, 0x41cc00a1, 0x0000f083, 0x01dc80a1, 0x0000f085, 0x41e500a1, 0x0000f086, 0x01f580a1, 0x0000f088, 0x41fe00a1, 0x0000f089, 0x000e80a1, 0x0000f08b, 0x401700a1, 0x0000f08c, 0x002780a1, 0x0000f08e, 0x403000a1, 0x0000f08f, 0x004080a1, 0x0000f091, 0x406700a1, 0x0000f095, 0x007780a1, 0xfffff097
};

BOOL MenuTabBar::execTransition() {
    static Unk_ov090_022921e0_Fn tbl[3] = {&MenuTabBar::stateLoad, &MenuTabBar::stateSlideIn,
                                           &MenuTabBar::stateSlideOut};
    cancelVramTasks();
    (this->*tbl[unk_8c])();
    return TRUE;
}

BOOL MenuTabBar::execMain() {
    static Unk_ov090_022921e0_Fn tbl[3] = {&MenuTabBar::updateIdle, &MenuTabBar::updateOpenTabMenu,
                                           &MenuTabBar::updateSaving};
    cancelVramTasks();
    if (unk_97 == 2) {
        if (Save_WritePlayerFriendList()) {
            u8 c;
            unk_8d = 2;
            c = 0x1f;
            unk_1164.open(&c, 1, 1);
            unk_97 = 3;
        } else {
            unk_97 = 0;
            MenuScreen_BeginClose();
        }
    }
    if (sTabSwitchCooldown != 0) {
        sTabSwitchCooldown = sTabSwitchCooldown - 1;
    }
    (this->*tbl[unk_8d])();
    if (unk_94 != 0) {
        if (unk_92 != 0x10) {
            if (unk_92 >= 0xe) {
                unk_92 = 0x10;
            } else {
                unk_92 = *(volatile u8 *)&unk_92 + 2;
            }
        }
    } else if (unk_92 != 0) {
        if (unk_92 <= 4) {
            unk_91 = 0;
            unk_92 = 0;
        } else {
            unk_92 = *(volatile u8 *)&unk_92 - 4;
        }
    }
    if (unk_95 != 0) {
        if ((gPad[1] & 0x100) != 0) {
            showTab(MenuTabBar_NextTab(unk_93));
            Snd_PlaySe(3);
        }
        if ((gPad[1] & 0x200) != 0) {
            showTab(MenuTabBar_PrevTab(unk_93));
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
    unk_98 = 0;
    u32 old = unk_93;
    showTab(idx);
    if (idx == 7) {
        unk_94 = 0;
        if (unk_97 == 1) {
            unk_97 = 2;
        }
        if (unk_97 == 0) {
            MenuScreen_BeginClose();
        }
        Snd_PlaySe(2);
        data_021c1b3c->unk_1c4.func_02035bb4();
    } else {
        if (idx <= 6 && old <= 6) {
            Snd_PlaySe(3);
        }
    }
    if (idx == 0) {
        func_0206ec60();
    }
    if (old <= 6 && idx <= 6) {
        unk_95 = 1;
    }
}

u8 MenuTabBar::onTabMenuClosed() {
    switch (unk_93) {
    case 7:
        if (unk_97 == 0) {
            func_0206e03c();
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
        unk_8d = 1;
        break;
    }
    return unk_93;
}

void MenuTabBar::beginClose() {
    unk_8c = 2;
    setPhase(1);
    Gfx2d_SetSubBgModeState(1);
}

void MenuTabBar::updateIdle() {}

void MenuTabBar::updateOpenTabMenu() {
    if (sTabSwitchCooldown == 0) {
        unk_95 = 0;
        switch (unk_93) {
        case 0: {
            BOOL r = FALSE;
            if (data_020e416c == 0) {
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
            func_0206ed44(unk_93 + 0xf);
            break;
        case 13:
        case 14:
            MenuCtrl_RequestOpenNested(0x2b);
            func_0206ed44(unk_93);
            break;
        case 7:
            break;
        }
        unk_8d = 0;
    }
}

void MenuTabBar::updateSaving() { unk_1164.update(0); }

void MenuTabBar::stateLoad() {
    Gfx2d_LoadPaletteFile((u32)"menu/tag/obj.bpl", gCurrentHeap, 8, 0xf, 0xf, 0xf);
    File_LoadToBuffer("menu/tag/obj1.bch", unk_144, 0x800);
    File_LoadToBuffer("menu/tag/obj2.bch", unk_944, 0x800);
    showTab(func_0206ed50());
    unk_91 = 1;
    unk_92 = 0;
    unk_8c = 1;
    Gfx2d_SetSubBgModeState(0);
}

void MenuTabBar::stateSlideIn() {
    unk_94 = 1;
    setPhase(2);
}

void MenuTabBar::stateSlideOut() {
    if (*(volatile u8 *)&unk_92 <= 4) {
        unk_91 = 0;
        setPhase(0);
    } else {
        unk_92 = unk_92 - 4;
    }
}

void MenuTabBar::initTabBar() {
    unk_91 = 0;
    unk_92 = 0;
    unk_94 = 0;
    unk_95 = 0;
    Snd_PlaySe(1);
    data_021c1b3c->unk_1c4.func_02035bbc(0);
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
    unk_94 = 1;
    unk_91 = 1;
}

void MenuTabBar::hideTabs() { unk_94 = 0; }

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
        unk_9c[i].cancel();
    }
}

void MenuTabBar::showTab(u32 idx) {
    unk_93 = idx;
    if (idx <= 7) {
        if (idx != unk_96) {
            char buf[0x24];
            unk_9c[0].requestChars((u32)unk_144, 8, 0x80, 0x80, 0xbf);
            u32 a = (u32)unk_944 + idx * 0x60;
            u32 t = idx * 3 + 0x80;
            unk_9c[1].requestCharPair(a, a + 0x400, 8, t, t + 2, t + 0x20, t + 0x22);
            func_020639e8(buf, "menu/tag/obj%d.bpl", idx);
            File_LoadToBuffer(buf, unk_1144, 0x20);
            unk_9c[2].requestPalette((u32)unk_1144, 8, 0xf);
            unk_96 = idx;
        }
    }
}

void MenuTabBar::requestSaveOnClose() { unk_97 = 1; }

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
    if (unk_98 != 0) {
        return TRUE;
    }
    return FALSE;
}
u8 sTabSwitchCooldown;
