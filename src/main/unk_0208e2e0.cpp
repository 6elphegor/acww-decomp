#include "types.h"
#include "talk/MsgStringBase.h"
#include "talk/MsgStringAttr.h"
#include "gfx/SpriteAnim.h"
#include "ui/UiWidget.h"
#include "talk/MsgString.h"
#include "ui/LabelButton.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}








LabelButtonText::LabelButtonText() { clear(); }

LabelButtonText::~LabelButtonText() {}

// ---- LabelButtonText ----
u32 LabelButtonText::capacity() { return 9; }

u8 *LabelButtonText::data() { return (u8 *)this + 0x12; }

LabelButton::LabelButton(u8 a, s32 b) : unk_0c(0), unk_10(0), palette(-1), kind(b), state(0), label(0) {
    textColor = 0x50c0;
    onBufferA = a;
    objWindow = 0;
    layer2Hidden = 0;
    textColorDirty = 0;
    setState(0);
}

LabelButton::~LabelButton() {
    freeLabel();
}

void LabelButton::draw() {
    if (state != 0) {
        void *h0 = layer1.getCell();
        void *h1 = layer2.getCell();
        s32 a = layer1.getFrameX(-1);
        s32 b = layer1.getFrameY(-1);
        s32 c = layer2.getFrameX(-1);
        s32 d = layer2.getFrameY(-1);
        s32 bx = unk_0c + getOriginX();
        s32 by = unk_10 + getOriginY();
        s32 x0 = bx + a;
        s32 y0 = by + b;
        s32 x1 = bx + c;
        s32 y1 = by + d;
        BOOL show = layer2Hidden == 0 ? TRUE : FALSE;
        if (onBufferA != 0) {
            Oam_DrawCell(0, h0, x0, y0, palette, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            if (show) {
                Oam_DrawCell(0, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (objWindow != 0) {
                Oam_DrawCell(0, h0, x0, y0, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                if (show) {
                    Oam_DrawCell(0, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        } else {
            Oam_DrawCell(1, h0, x0, y0, palette, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            if (show) {
                Oam_DrawCell(1, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            }
            if (objWindow != 0) {
                Oam_DrawCell(1, h0, x0, y0, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                if (show) {
                    Oam_DrawCell(1, h1, x1, y1, -1, -1, 0x1000, 0x1000, 0, 2, 0, 0);
                }
            }
        }
    }
    syncTextColor();
}

// ---- LabelButton ----
void LabelButton::vfunc_0c() {
    if (state != 0) {
        layer1.update();
        layer2.update();
    }
}

