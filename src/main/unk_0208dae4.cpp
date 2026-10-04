#include "types.h"
#include "gfx/SpriteAnim.h"
#include "ui/UiWidget.h"
#include "ui/ScrollKnob.h"
#include "ui/HudUnkIcon.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
s32 TalkRequest_IsActive();
s32 Scene_GetCurrent();
s32 PlayerActor_GetAction(s32 v);
}

extern s32 gGfxMainOnTop;
extern u8 data_020d4694[];
extern u8 data_020d468c[];

struct SpriteAnimSeq;





extern "C" BOOL HudUnkIcon_CanShow();

void HudUnkIcon::updateHidden() {
    if (HudUnkIcon_CanShow() != 0) {
        state = 1;
        anim.setSeq((SpriteAnimSeq *)data_020d468c);
        anim.setPlayOnce(1);
        anim.restart();
    }
}

void HudUnkIcon::updateAppearing() {
    anim.update();
    if (anim.isFinished()) {
        state = 2;
    }
}

void HudUnkIcon::updateShown() {
    if (HudUnkIcon_CanShow() == 0) {
        state = 3;
        anim.setSeq((SpriteAnimSeq *)data_020d4694);
        anim.setPlayOnce(1);
        anim.restart();
    }
}

void HudUnkIcon::updateHiding() {
    anim.update();
    if (anim.isFinished()) {
        state = 0;
    }
}

extern "C" BOOL HudUnkIcon_CanShow() {
    BOOL a, b, c;
    long d, e;
    s32 v;
    a = gGfxMainOnTop == 0 ? TRUE : FALSE;
    b = TalkRequest_IsActive() == 0 ? TRUE : FALSE;
    c = Scene_GetCurrent() == 6 ? TRUE : FALSE;
    v = PlayerActor_GetAction(4);
    d = (u32)(v - 8) <= 7 ? TRUE : FALSE;
    e = (u32)(v - 0x24) <= 8 ? TRUE : FALSE;
    if (a && b && !c && !d && !e) {
        return TRUE;
    }
    return FALSE;
}

ScrollKnob::ScrollKnob(u32 flag) : layer1(0), posY(0) {
    state = 0;
    anim = flag;
    unk_44 = -1;
    setState(0);
}

ScrollKnob::~ScrollKnob() {
}

void ScrollKnob::draw() {
    if (state != 0) {
        void *h0 = layerAnim1.getCell();
        void *h1 = priority.getCell();
        s32 a = layerAnim1.getFrameX(-1);
        s32 b = layerAnim1.getFrameY(-1);
        s32 c = priority.getFrameX(-1);
        s32 d = priority.getFrameY(-1);
        s32 bx = layer1 + getOriginX();
        s32 by = posY + getOriginY();
        if (anim != 0) {
            Oam_DrawCell(0, h0, bx + a, by + b, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            Oam_DrawCell(0, h1, bx + c, by + d, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
        } else {
            Oam_DrawCell(1, h0, bx + a, by + b, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
            Oam_DrawCell(1, h1, bx + c, by + d, -1, unk_44, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void ScrollKnob::vfunc_0c() {
    if (state != 0) {
        layerAnim1.update();
        priority.update();
    }
}

void ScrollKnob::moveTo(s32 x, s32 y) { layer1 = x; posY = y; }

void ScrollKnob::setPriority(s32 v) { unk_44 = v; }

