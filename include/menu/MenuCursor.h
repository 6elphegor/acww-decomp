#ifndef MENU_MENUCURSOR_H
#define MENU_MENUCURSOR_H

// Menu hand cursor (0x64 bytes): MenuCursorBase adds a CursorMotion to HandCursor, MenuCursor adds pose/anim helpers
// and MenuCursorBuf0/1 are the instances (vtables 0x02204614 / 0x02204630 / 0x0220464c).
// Defined in ov002, unk_ov002_022025cc.cpp (0x022027dc..0x02202d98).
#include "types.h"
#include "ui/HandCursor.h"
#include "ui/CursorMotion.h"

class MenuCursorBase : public HandCursor {
public:
    MenuCursorBase(BOOL flag);
    ~MenuCursorBase();
    virtual void update();                    // 0x022027dc

    void drawWrapped();                         // 0x02202844
    s32 getScreenY();                           // 0x02202878
    s32 getScreenX();                           // 0x0220288c
    s32 getFrameScreenY();                      // 0x022028a0
    s32 getFrameScreenX();                      // 0x022028c8
    BOOL isMoving();                            // 0x022028f0
    BOOL func_ov002_022028fc();                 // 0x022028fc
    BOOL func_ov002_02202928();                 // 0x02202928
    void moveToNear(s32 x, s32 y, s32 n, u8 e); // 0x0220298c
    void moveToEase(s32 x, s32 y, s32 n, s32 f); // 0x022029e8
    void moveToLinear(s32 x, s32 y, s32 n);     // 0x02202a18
    void warpTo(s32 x, s32 y);                  // 0x02202a40
    void setScreenPos(s32 x, s32 y);            // 0x02202a6c
    void setPoseIdle();                         // 0x02202a78
    void setPoseRelease();                      // 0x02202af0

    /* 0x4c */ CursorMotion motion;
};

class MenuCursor : public MenuCursorBase {
public:
    MenuCursor(BOOL flag);                      // C1 0x02202d98
    virtual ~MenuCursor();                      // D2 0x02202d28, D0 0x02202d4c, D1 0x02202d74

    void setPosePress();                        // 0x02202b68
    void switchToAnim0D();                      // 0x02202be0
    void switchToAnim01();                      // 0x02202c40
    void switchToAnim07();                      // 0x02202ca0
    void setAnimIfChanged(s32 idx);             // 0x02202d00
};

// The two cursor instances of the menus (vtables _ZTV14MenuCursorBuf0 / _ZTV14MenuCursorBuf1, 7 words each).
class MenuCursorBuf0 : public MenuCursor {
public:
    MenuCursorBuf0();                           // C1 0x02202658
    virtual ~MenuCursorBuf0();                  // D0 0x02202620, D1 0x02202640
};

class MenuCursorBuf1 : public MenuCursor {
public:
    MenuCursorBuf1();                           // C1 0x02202604
    virtual ~MenuCursorBuf1();                  // D0 0x022025cc, D1 0x022025ec
};

#endif
