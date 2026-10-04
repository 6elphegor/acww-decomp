#ifndef MENU_MENUPROC_H
#define MENU_MENUPROC_H

#include "types.h"
#include "sys/ProcBase.h"
#include "sys/KeyRepeat.h"
#include "menu/MenuSlide.h"

// Library base class of the menu overlays ov090-ov150 (vtable 0x022044e4, size 0x94). Defined in
// src/ov002/unk_ov002_02200840.cpp. onExecute runs the exec* hook of the current phase (slots 0x44-0x58).
class MenuProc : public GameProc {
public:
    MenuProc();
    virtual ~MenuProc();
    static void *operator new(unsigned long size);
    static void operator delete(void *p);

    virtual BOOL preCreate();
    virtual void postCreate(s32 a);
    virtual BOOL preDelete();
    virtual BOOL postDelete(s32 a);
    virtual BOOL onExecute();
    virtual BOOL preExecute();
    virtual BOOL postExecute(u32 status);
    virtual BOOL execWaitScreen();          // 0x44 phase 0
    virtual BOOL execTransition();          // 0x48 phase 1
    virtual BOOL execMain();                // 0x4c phase 2
    virtual BOOL execPhase3();              // 0x50
    virtual BOOL execPhase4();              // 0x54
    virtual BOOL execClosed();              // 0x58 phase 5

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
    u8 takeRepeatedKeys();

    /* 0x50 */ KeyRepeat keyRepeat;         // vptr; the repeat state (KeyRepeatView) continues to 0x64
    /* 0x54 */ u8 unk_54[0x10];
    /* 0x64 */ u32 openMenuPrev;
    /* 0x68 */ u32 openMenuNext;
    /* 0x6c */ MenuProc *openMenuOwner;
    /* 0x70 */ MenuSlide slide;
    /* 0x8c */ u8 transitionState;
    /* 0x8d */ u8 mainState;
    /* 0x8e */ u8 unk_8e;
    /* 0x8f */ u8 phase;
    /* 0x90 */ u8 menuId;
};

#endif // MENU_MENUPROC_H
