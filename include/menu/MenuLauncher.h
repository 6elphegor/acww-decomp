#ifndef MENU_MENULAUNCHER_H
#define MENU_MENULAUNCHER_H

#include "types.h"
#include "menu/MenuProc.h"

// Menu launcher proc (ov092): opens the requested child menu and relaunches after it closes. Defined in
// src/ov092/unk_ov092_022918e0.cpp; the other menu overlays call onChildClosed / setNextRequest on it.
class MenuLauncher : public MenuProc {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onDraw();
    virtual BOOL execTransition();
    virtual BOOL execMain();
    virtual BOOL execPhase3();
    virtual BOOL execPhase4();
    virtual BOOL execClosed();

    void releaseResources();
    void initLauncher();
    void stateStart();
    void updateOpenRequested();
    void updateIdle();
    void onChildClosed();
    void setNextRequest(s32 a, s32 b);

    /* 0x91 */ u8 unk_91;
};

#endif
