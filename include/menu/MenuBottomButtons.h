#ifndef MENU_MENUBOTTOMBUTTONS_H
#define MENU_MENUBOTTOMBUTTONS_H

// Bottom-screen button bar of the menus (0x164 bytes, vtable 0x022046cc): two text buttons plus a title balloon.
// Defined in ov002, unk_ov002_02202fac.cpp (0x02202fac..0x022039d8). MenuBottomButtonsBody is not a separate object:
// it is the class name the symbols give the other half of the methods; callers cast a MenuBottomButtons to it.
#include "types.h"
#include "menu/MenuTextButton.h"
#include "menu/MenuTitleBalloon.h"

class MenuBottomButtons {
public:
    MenuBottomButtons();
    virtual ~MenuBottomButtons();

    void setLayoutConfirmAnd06(u8 v);
    void setLayoutSingle05(s32 v);
    void setLayoutConfirmQuit04();
    void setLayoutConfirmQuit03();
    void setLayoutConfirm();
    void setLayoutChangeAddressee();
    void setLayoutNeverMindConfirm();
    void hide();
    void drawAt(s32 a);
    void freeTexts();

    /* 0x004 */ MenuTextButton buttons[2];
    /* 0x0a4 */ MenuTitleBalloon title;
    /* 0x160 */ u8 layout;
    /* 0x161 */ u8 selectedTarget;
};

// Methods of the same object that the symbols list under another class name (no fields, no ctor, no vtable).
class MenuBottomButtonsBody : public MenuBottomButtons {
public:
    BOOL isButtonDisabled(s32 idx);
    void enableButton(s32 idx);
    void disableButton(s32 idx);
    s32 getButtonOfTarget(s32 idx);
    void disableObjWindow();
    void enableObjWindow();
    s32 getPressOffset();
    BOOL stepPress();
    void setSelected(u8 v);
    s32 getTargetY(s32 idx);
    s32 getTargetX(s32 idx);
    BOOL isTouched(s32 idx);
    BOOL hitTest(s32 idx, s32 x, s32 y);
    void showTitleLayer2();
    void setLayoutYesNo0D(s32 x);
    void setLayoutYesNo0C(s32 x);
    void setLayoutYesNo0B(s32 x);
    void setLayoutTossKeep();
    void setLayoutYesNo09(s32 x);
    void setYesNoButtons();
    void setLayoutYesNo08(s32 x);
    void setLayoutYesNo07(s32 x);
};

#endif
