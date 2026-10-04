#ifndef MENU_MENUTABBAR_H
#define MENU_MENUTABBAR_H

// Tab bar of the pause menu (vtable 0x022921e0, 0x126c bytes): parent proc of the tab menus (pockets, chat, map,
// insect/fish books ...). Defined in ov090, unk_ov090_022918e0.cpp.
#include "types.h"
#include "menu/MenuProc.h"
#include "gfx/BgVramTask.h"
#include "menu/MenuErrorMessage.h"

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
    /* 0x92 */ u8 slideY;
    /* 0x93 */ u8 curTab;
    /* 0x94 */ u8 tabsShown;
    /* 0x95 */ u8 lrSwitchEnabled;
    /* 0x96 */ u8 loadedTab;
    /* 0x97 */ u8 saveState;
    /* 0x98 */ u8 justOpened;
    /* 0x9c */ BgVramTaskPair unk_9c[3];
    /* 0x144 */ u32 unk_144[0x200];
    /* 0x944 */ u32 unk_944[0x200];
    /* 0x1144 */ u32 unk_1144[8];
    /* 0x1164 */ MenuErrorMessage errorMessage;
};

#endif
