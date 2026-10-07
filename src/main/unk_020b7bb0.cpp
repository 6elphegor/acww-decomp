#include "types.h"
#include "gfx/SpriteAnim.h"
#include "ui/UiWidget.h"
#include "ui/LabelBalloon.h"
#include "ui/FieldInfoLabelBalloon.h"

extern "C" {
// Other files
void *_ZN12LabelBalloon7getAnimEv(void *p);
void Oam_DrawCell(s32 a, u32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
}





FieldInfoLabelBalloon::FieldInfoLabelBalloon() : LabelBalloon(1) {
    blinkFrame = 0;
    markerRequest = 0;
    markerShown = 0;
    markerDrawn = 0;
    markerDrawnPrev = 0;
    blinkEnabled = 0;
}

FieldInfoLabelBalloon::~FieldInfoLabelBalloon() {
}

void FieldInfoLabelBalloon::draw() {
    s32 r7, y;
    s32 r4 = 0;
    if (blinkFrame < 0x19) {
        if (markerShown != 0) {
            void *a = ((SpriteAnim *)(&markerAnim))->getCell();
            r7 = (s32)_ZN12LabelBalloon7getAnimEv(this);
            r4 = ((LabelBalloon *)(this))->getDrawX();
            s32 b = ((LabelBalloon *)(this))->getDrawY();
            r4 = r4 + ((SpriteAnim *)((void *)r7))->getFrameX(-1) + ((SpriteAnim *)(&markerAnim))->getFrameX(-1);
            y = b + ((SpriteAnim *)((void *)r7))->getFrameY(-1) + ((SpriteAnim *)(&markerAnim))->getFrameY(-1);
            Oam_DrawCell(0, (u32)a, r4, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            r4 = 1;
        }
        ((LabelBalloon *)(this))->LabelBalloon::draw();
    }
    markerDrawn = r4;
}

void FieldInfoLabelBalloon::update() {
    markerDrawnPrev = markerDrawn;
    ((LabelBalloon *)(this))->LabelBalloon::update();
    ((FieldInfoLabelBalloon *)(this))->updateBlink();
}
