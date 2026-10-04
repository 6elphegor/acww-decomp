#include "types.h"
#include "text/Unk_02050288.h"
#include "gfx/SpriteAnim.h"
#include "ui/UiWidget.h"
#include "ui/ScrollKnob.h"
#include "ui/LabelButton.h"
#include "ui/HudUnkIcon.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

extern "C" {
s32 TalkRequest_IsActive();
}

extern "C" {
s32 Scene_GetCurrent();
}

extern "C" {
s32 PlayerActor_GetAction(s32 v);
}

extern "C" {
void DC_FlushRange(void *p, u32 size);
}

extern "C" {
void GX_LoadOBJPltt(void *p, u32 src, u32 size);
}

extern "C" {
void GXS_LoadOBJPltt(void *p, u32 src, u32 size);
}

extern "C" {
TextLabel *MsgTextLabel_CreateVram(u32 a, s32 b, s32 c);
}

extern "C" {
void MsgTextLabel_Destroy(TextLabel *obj);
}

extern "C" {
void func_020a7bd8(void *p);
}

extern s32 gGfxMainOnTop;
extern u8 data_020d4694[];
extern u8 data_020d468c[];
extern SpriteAnimSeq data_020d5b0c[];
extern u16 sLabelButtonColorCache[];
extern u8 sLabelButtonKindTextColors[];
extern u32 sLabelButtonKindLabelVram[];
extern u8 sLabelButtonKindSeqOffsets[];
extern s32 sLabelButtonStateSeqIds[];
extern s32 sLabelButtonStatePlayOnce[];





HudUnkIcon sHudUnkIcon;

// forward declarations
extern "C" void HudUnkIcon_Reset();
extern "C" void HudUnkIcon_Exit();
extern "C" void HudUnkIcon_Update();
extern "C" void HudUnkIcon_Draw();

HudUnkIcon::HudUnkIcon() {
    state = 0;
}

HudUnkIcon::~HudUnkIcon() {
}

void HudUnkIcon::draw() {
    if (state != 0) {
        void *h = anim.getCell();
        s32 x = getOriginX() + anim.getFrameX(-1);
        s32 y = getOriginY() + anim.getFrameY(-1);
        Oam_DrawCell(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

void HudUnkIcon::update() {
    typedef void (HudUnkIcon::*Fn)();
    static Fn tbl[4] = {&HudUnkIcon::updateHidden, &HudUnkIcon::updateAppearing, &HudUnkIcon::updateShown, &HudUnkIcon::updateHiding};
    (this->*tbl[state])();
}

extern "C" void HudUnkIcon_Reset() { sHudUnkIcon.state = 0; }

extern "C" void HudUnkIcon_Exit() {}

extern "C" void HudUnkIcon_Update() { sHudUnkIcon.update(); }

extern "C" void HudUnkIcon_Draw() { sHudUnkIcon.draw(); }

