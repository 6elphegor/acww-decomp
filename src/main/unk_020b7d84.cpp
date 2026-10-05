#include "types.h"

extern "C" {
void TouchPanel_Update(void);
void TouchPanel_Init(void);
s32 Snd_SetPan(u32 a);
}

extern "C" {
extern u8 gTouchHoldFrames, gTouchPrevChanged, gTouchPrevHeld;
extern u8 gTouchHeld, gTouchChanged;
extern u16 gTouchX, gTouchY;
}

extern u8 sTouchPrevReleaseFrames, sTouchPrevHoldFrames, sTouchPrevCurY, sTouchPrevCurX, sTouchPrevPressY, sTouchPrevPressX;
extern u8 gTouchCurY, gTouchCurX, gTouchPressY, gTouchPressX, sTouchReleaseFrames;
extern u16 sTouchPrevRawX, sTouchPrevRawY;

extern "C" void Touch_Init(void) {
    TouchPanel_Init();
    gTouchHoldFrames = 0;
    sTouchReleaseFrames = 0xc8;
    sTouchPrevHoldFrames = 0;
    sTouchPrevReleaseFrames = 0xc8;
}

extern "C" void Touch_Update(void) {
    sTouchPrevPressX = gTouchPressX;
    sTouchPrevPressY = gTouchPressY;
    sTouchPrevCurX = gTouchCurX;
    sTouchPrevCurY = gTouchCurY;
    sTouchPrevHoldFrames = gTouchHoldFrames;
    sTouchPrevReleaseFrames = sTouchReleaseFrames;
    u8 t = gTouchHeld;
    gTouchPrevHeld = t;
    gTouchPrevChanged = gTouchChanged ? 1 : 0;
    sTouchPrevRawX = (u8)gTouchX;
    sTouchPrevRawY = (u8)gTouchY;
    if ((s32)(*(volatile u16 *)0x27fffa8 & 0x8000) >> 15) {
        gTouchChanged = t;
        gTouchHeld = 0;
        gTouchX = 0;
        gTouchY = 0;
    } else {
        TouchPanel_Update();
    }
    if (gTouchHeld != 0) {
        BOOL p = (gTouchHeld != 0 && gTouchChanged != 0) ? TRUE : FALSE;
        if (p) {
            gTouchPressX = gTouchX;
            gTouchPressY = gTouchY;
            gTouchHoldFrames = 0;
        }
        if (gTouchHoldFrames < 0xc8) {
            gTouchHoldFrames++;
        }
        u8 v = gTouchX;
        gTouchCurX = v;
        gTouchCurY = gTouchY;
        Snd_SetPan(v);
    } else {
        BOOL p = (gTouchHeld == 0 && gTouchChanged != 0) ? TRUE : FALSE;
        if (p) {
            sTouchReleaseFrames = 0;
        }
        if (sTouchReleaseFrames < 0xc8) {
            sTouchReleaseFrames++;
        }
    }
}

// Declarations for data defined further down (definition order sets the data layout)
extern u8 sTouchPrevHoldFrames;
extern u8 sTouchReleaseFrames;
extern u8 gTouchPressX;
extern u8 gTouchPressY;
extern u8 gTouchCurX;
extern u8 gTouchCurY;
extern u8 sTouchPrevPressX;
extern u8 sTouchPrevPressY;
extern u8 sTouchPrevCurX;
extern u16 sTouchPrevRawY;
extern u16 sTouchPrevRawX;
extern u8 sTouchPrevCurY;
extern u8 sTouchPrevReleaseFrames;

u8 sTouchPrevHoldFrames;

u8 sTouchReleaseFrames;

u8 gTouchPressX;

u8 gTouchPressY;

u8 gTouchCurX;

u8 gTouchCurY;

u8 sTouchPrevPressX;

u8 sTouchPrevPressY;

u8 sTouchPrevCurX;

u16 sTouchPrevRawY;

u16 sTouchPrevRawX;

u8 sTouchPrevCurY;

u8 sTouchPrevReleaseFrames;
