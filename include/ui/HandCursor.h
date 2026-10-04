#ifndef UI_HANDCURSOR_H
#define UI_HANDCURSOR_H

#include "types.h"
#include "ui/UiWidget.h"
#include "gfx/SpriteAnim.h"

// 0x4c-byte pointing-hand cursor widget (vtable _ZTV10HandCursor 0x020e1004): one or two animated sprite layers.
// Defined in main, unk_0208d33c.cpp / unk_0208d538.cpp / unk_0208d64c.cpp (0x0208d4fc..0x0208d9a8).
class HandCursor : public UiWidget {
public:
    HandCursor(BOOL flag);              // C1 0x0208d8f0, C2 0x0208d94c
    virtual ~HandCursor();              // D2 0x0208d868, D0 0x0208d894, D1 0x0208d8c4
    virtual void draw();                // 0x0208d678
    virtual void update();            // 0x0208d64c

    BOOL isAnimDone();                  // 0x0208d4fc
    s32 getAnim();                      // 0x0208d534
    void setAnimAtEnd(s32 idx);         // 0x0208d538
    void setAnim(s32 idx);              // 0x0208d580
    void setPos(s32 a, s32 b);          // 0x0208d60c
    void disableObjWindow();            // 0x0208d63c
    void enableObjWindow();             // 0x0208d644

    /* 0x0c */ SpriteAnim layer1;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 priority;
    /* 0x2c */ SpriteAnim layer2;
    /* 0x40 */ s32 anim;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 onBufferA;
    /* 0x49 */ u8 hasLayer2;
    /* 0x4a */ u8 objWindow;
};

#endif
