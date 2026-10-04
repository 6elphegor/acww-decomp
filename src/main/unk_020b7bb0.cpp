#include "types.h"
#include "gfx/SpriteAnim.h"
#include "ui/UiWidget.h"
#include "ui/LabelBalloon.h"
#include "ui/FieldInfoLabelBalloon.h"

extern "C" {
// Other files
void *_ZN12LabelBalloon7getAnimEv(void *p);
void _ZN12LabelBalloon8vfunc_0cEv(void *p);
s32 _ZN12LabelBalloon4drawEv(void *p);
void *_ZN10SpriteAnim7getCellEv(void *p);
s32 _ZN12LabelBalloon8getDrawXEv(void *p);
s32 _ZN12LabelBalloon8getDrawYEv(void *p);
s32 _ZN10SpriteAnim9getFrameXEi(void *p, s32 v);
s32 _ZN10SpriteAnim9getFrameYEi(void *p, s32 v);
void Oam_DrawCell(s32 a, u32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
void _ZN21FieldInfoLabelBalloon11updateBlinkEv(void *p);
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
            void *a = _ZN10SpriteAnim7getCellEv(&markerAnim);
            r7 = (s32)_ZN12LabelBalloon7getAnimEv(this);
            r4 = _ZN12LabelBalloon8getDrawXEv(this);
            s32 b = _ZN12LabelBalloon8getDrawYEv(this);
            r4 = r4 + _ZN10SpriteAnim9getFrameXEi((void *)r7, -1) + _ZN10SpriteAnim9getFrameXEi(&markerAnim, -1);
            y = b + _ZN10SpriteAnim9getFrameYEi((void *)r7, -1) + _ZN10SpriteAnim9getFrameYEi(&markerAnim, -1);
            Oam_DrawCell(0, (u32)a, r4, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            r4 = 1;
        }
        _ZN12LabelBalloon4drawEv(this);
    }
    markerDrawn = r4;
}

void FieldInfoLabelBalloon::vfunc_0c() {
    markerDrawnPrev = markerDrawn;
    _ZN12LabelBalloon8vfunc_0cEv(this);
    _ZN21FieldInfoLabelBalloon11updateBlinkEv(this);
}
