#define postCreate() postCreate(s32 a)
#define vfunc_14() vfunc_14(s32 a)
#include "types.h"
#include "Unk_020d8c7c.h"
#undef postCreate
#undef vfunc_14

extern "C" {
void Snd_PlaySe(s32 a);
void Gfx2d_ResetLayer(s32 a);
void Gfx2d_ShowLayer(s32 a);
void Gfx2d_SetLayerControl(u32 n, u32 a, u32 b, u32 c);
void Gfx2d_SetMainBgModeState(u32 a);
void *MenuCtrl_GetArg();
BOOL MenuCtrl_IsButtons();
BOOL MenuCtrl_IsTouch();
void Snd_EndMenuDuck();
void Snd_BeginMenuDuck();
void ProcBase_RequestDelete();
extern u8 *data_021c1b3c;
extern u16 gPad[];
}

class LetterViewMenu;

struct Unk_0206d1d4_Src;

class LetterRenderer {
public:
    LetterRenderer();
    ~LetterRenderer();
    void func_0206d2e0(Unk_0206d1d4_Src *src, void *a, void *b, s32 c);
    void func_0206d394();
    void func_0206d39c(s32 v);

    u32 unk_00[0x210 / 4];
};

class BgmVolumeMixer {
public:
    void endMenuDuck();
    void setMenuDuck(s32 v);
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

class LabelButton : public UiWidget {
public:
    LabelButton(u32 flag);
    virtual ~LabelButton();
    virtual void draw();
    virtual void vfunc_0c();

    void setState(s32 v);
    void setPos(s32 x, s32 y);

    /* 0x0c */ u8 unk_0c[0x64];
};

class HandCursor : public UiWidget {
public:
    HandCursor(BOOL flag);
    virtual ~HandCursor();
    virtual void draw();
    virtual void vfunc_0c();

    BOOL isAnimDone();
    s32 getAnim();

    /* 0x0c */ u8 unk_0c[0x3f];
};

// +0x2a4 sub-object (0x70 bytes)
class MenuLabelButtonStyle1 : public LabelButton {
public:
    MenuLabelButtonStyle1();
    virtual ~MenuLabelButtonStyle1();
};

class MenuLabelButton {
public:
    BOOL isTouched();
    void showDefault(s32 v);
    BOOL stepAnim();
    s32 getAnchorY(s32 k);
    s32 getAnchorX(s32 k);
};

// +0x314 sub-object (0x64 bytes)
class MenuCursorBuf1 : public HandCursor {
public:
    MenuCursorBuf1();
    virtual ~MenuCursorBuf1();

    u8 unk_4b[0x64 - 0x4b];
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

    void applySlideOffset(s32 a, s32 b, s32 c);
    void beginMainSlideOut(s32 a, s32 b, s32 mode, s32 dist);
    void beginMainSlideIn(s32 a, s32 b, s32 mode, s32 dist);
    BOOL stepSlideOut(s32 a);
    BOOL stepSlideIn(s32 a);
    s32 getSlideOffsetY();
    BOOL checkSwitchToTouch();
    BOOL checkSwitchToButtons(s32 a);
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

class MenuCursorBase {
public:
    void drawWrapped();
    void warpTo(s32 x, s32 y);
};

class MenuCursor {
public:
    void setPosePress();
    void setAnimIfChanged(s32 idx);
};

typedef void (LetterViewMenu::*Unk_ov091_02291ef0_Fn)();

class LetterViewMenu : public MenuProc {
public:
    LetterViewMenu()
        : unk_94(), unk_2a4(), unk_314() {}

    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    void updateButtons();
    void updateTouch();
    void stateWaitSlideOut();
    void stateSlideOut();
    void stateWaitButton();
    void statePressButton();
    void stateWaitSlideIn();
    void stateLoad();
    void startButtonInput();
    void startTouchInput();
    void postInputUpdate();
    void preInputUpdate();
    void releaseResources();
    void initLetterView();

    /* 0x094 */ LetterRenderer unk_94;
    /* 0x2a4 */ MenuLabelButtonStyle1 unk_2a4;
    /* 0x314 */ MenuCursorBuf1 unk_314;
};

extern "C" LetterViewMenu *LetterViewMenu_Create() { return new LetterViewMenu(); }

struct Unk_ov091_SceneEntry {
    LetterViewMenu *(*create)();
    u16 a;
    u16 b;
};

extern "C" Unk_ov091_SceneEntry sLetterViewMenuProfile = {LetterViewMenu_Create, 0xa8, 0xac};

BOOL LetterViewMenu::vfunc_00() {
    initLetterView();
    setTransitionState(0);
    setPhase(1);
    Snd_BeginMenuDuck();
    return TRUE;
}

BOOL LetterViewMenu::vfunc_0c() {
    releaseResources();
    Snd_EndMenuDuck();
    return TRUE;
}

BOOL LetterViewMenu::onDraw() {
    unk_314.vfunc_0c();
    s32 r = getSlideOffsetY();
    unk_2a4.setPos(0, r);
    unk_2a4.draw();
    if (MenuCtrl_IsButtons()) {
        ((MenuCursorBase *)&unk_314)->drawWrapped();
    }
    return TRUE;
}

BOOL LetterViewMenu::execTransition() {
    static Unk_ov091_02291ef0_Fn tbl[6] = {
        &LetterViewMenu::stateLoad, &LetterViewMenu::stateWaitSlideIn,
        &LetterViewMenu::statePressButton, &LetterViewMenu::stateWaitButton,
        &LetterViewMenu::stateSlideOut, &LetterViewMenu::stateWaitSlideOut};
    (this->*tbl[unk_8c])();
    return TRUE;
}

BOOL LetterViewMenu::execMain() {
    preInputUpdate();
    static Unk_ov091_02291ef0_Fn tbl[2] = {&LetterViewMenu::updateTouch,
                                           &LetterViewMenu::updateButtons};
    (this->*tbl[unk_8d])();
    postInputUpdate();
    return TRUE;
}

BOOL LetterViewMenu::execPhase3() { return TRUE; }

BOOL LetterViewMenu::execPhase4() { return TRUE; }

BOOL LetterViewMenu::execClosed() {
    ProcBase_RequestDelete();
    return TRUE;
}

void LetterViewMenu::stateLoad() {
    Snd_PlaySe(1);
    ((BgmVolumeMixer *)(data_021c1b3c + 0x1c4))->setMenuDuck(0);
    Gfx2d_SetMainBgModeState(0);
    unk_94.func_0206d2e0((Unk_0206d1d4_Src *)MenuCtrl_GetArg(), 0, (void *)2, 1);
    beginMainSlideIn(0xa, 0, 0, 0x30);
    Gfx2d_ShowLayer(0);
    applySlideOffset(0, 0, 0);
    Gfx2d_SetLayerControl(0, 0, 0, 0);
    Gfx2d_ShowLayer(2);
    applySlideOffset(2, 0, 0);
    Gfx2d_SetLayerControl(2, 0, 0, 0);
    setTransitionState(1);
}

void LetterViewMenu::stateWaitSlideIn() {
    if (stepSlideIn(1)) {
        setPhase(2);
        ((MenuCursor *)&unk_314)->setAnimIfChanged(1);
        if (MenuCtrl_IsTouch()) {
            setMainState(0);
        } else {
            setMainState(1);
        }
    }
    applySlideOffset(0, 0, 0);
    applySlideOffset(2, 0, 0);
}

void LetterViewMenu::statePressButton() {
    if (unk_314.isAnimDone()) {
        unk_2a4.setState(2);
        setTransitionState(3);
        Snd_PlaySe(0x27);
    }
}

void LetterViewMenu::stateWaitButton() {
    if (((MenuLabelButton *)&unk_2a4)->stepAnim()) {
        if (unk_314.getAnim()) {
            s32 a = ((MenuLabelButton *)&unk_2a4)->getAnchorX(1);
            s32 b = ((MenuLabelButton *)&unk_2a4)->getAnchorY(1);
            ((MenuCursorBase *)&unk_314)->warpTo(a, b);
        }
    } else {
        ((MenuCursor *)&unk_314)->setAnimIfChanged(0);
        setTransitionState(4);
    }
}

void LetterViewMenu::stateSlideOut() {
    Snd_PlaySe(2);
    ((BgmVolumeMixer *)(data_021c1b3c + 0x1c4))->endMenuDuck();
    beginMainSlideOut(0xa, 0, 0, 0x30);
    applySlideOffset(0, 0, 0);
    applySlideOffset(2, 0, 0);
    setTransitionState(5);
}

void LetterViewMenu::stateWaitSlideOut() {
    if (stepSlideOut(1)) {
        Gfx2d_ResetLayer(0);
        Gfx2d_ResetLayer(2);
        setPhase(5);
    } else {
        applySlideOffset(0, 0, 0);
        applySlideOffset(2, 0, 0);
    }
}

void LetterViewMenu::initLetterView() {
    unk_94.func_0206d39c(0);
    ((MenuLabelButton *)&unk_2a4)->showDefault(0x65);
    s32 a = ((MenuLabelButton *)&unk_2a4)->getAnchorX(1);
    s32 b = ((MenuLabelButton *)&unk_2a4)->getAnchorY(1);
    ((MenuCursorBase *)&unk_314)->warpTo(a, b);
}

void LetterViewMenu::releaseResources() { unk_94.func_0206d394(); }

void LetterViewMenu::preInputUpdate() {}

void LetterViewMenu::postInputUpdate() {}

void LetterViewMenu::updateTouch() {
    if (checkSwitchToButtons(1)) {
        startButtonInput();
    } else if (((MenuLabelButton *)&unk_2a4)->isTouched()) {
        unk_2a4.setState(2);
        unk_8c = 3;
        setPhase(1);
        Snd_PlaySe(0x27);
    }
}

void LetterViewMenu::updateButtons() {
    if (checkSwitchToTouch()) {
        startTouchInput();
    } else {
        u16 v = gPad[1];
        if ((v & 1) != 0 || (v & 2) != 0) {
            ((MenuCursor *)&unk_314)->setPosePress();
            unk_8c = 2;
            setPhase(1);
        }
    }
}

void LetterViewMenu::startTouchInput() { setMainState(0); }

void LetterViewMenu::startButtonInput() { setMainState(1); }

// ---------------------------------------------------------------------------------------------

