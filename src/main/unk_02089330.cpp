#include "types.h"
#include "gfx/SpriteAnim.h"
#include "ui/UiWidget.h"
#include "ui/TalkArrow.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}






TalkArrow::TalkArrow(u8 flag) {
    state = 0;
    offsetX = 0;
    offsetY = 0;
    useAltStyle = 0;
    unk_41 = flag;
    setState(0);
}

TalkArrow::~TalkArrow() {}

void TalkArrow::draw() {
    if (state != 0) {
        void *a = anim.getCell();
        void *b = subAnim.getCell();
        s32 ox0 = anim.getFrameX(-1);
        s32 oy0 = anim.getFrameY(-1);
        s32 ox1 = subAnim.getFrameX(-1);
        s32 oy1 = subAnim.getFrameY(-1);
        s32 x = offsetX + getOriginX();
        s32 y = offsetY + getOriginY();
        if (unk_41 != 0) {
            Oam_DrawCell(0, a, x + ox0, y + oy0, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            Oam_DrawCell(0, b, x + ox1, y + oy1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            Oam_DrawCell(1, a, x + ox0, y + oy0, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            Oam_DrawCell(1, b, x + ox1, y + oy1, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void TalkArrow::vfunc_0c() {
    if (state != 0) {
        anim.update();
        subAnim.update();
    }
}

