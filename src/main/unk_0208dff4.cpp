#include "types.h"
#include "text/Unk_02050288.h"
#include "gfx/SpriteAnim.h"
#include "ui/UiWidget.h"
#include "ui/ScrollKnob.h"
#include "ui/HudUnkIcon.h"
#include "talk/MsgString.h"

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
// MsgString::copy called with only `this`: the source string is the caller's second argument, still in r1
void _ZN9MsgString4copyEPS_(MsgString *self);
}


extern s32 gGfxMainOnTop;
extern u8 data_020d4694[];
extern u8 data_020d468c[];
extern SpriteAnimSeq data_020d5b0c[];
extern u16 sLabelButtonColorCache[2];
extern const u8 sLabelButtonKindTextColors[4];
extern const u32 sLabelButtonKindLabelVram[2];
extern const u8 sLabelButtonKindSeqOffsets[4];
extern const s32 sLabelButtonStateSeqIds[4];
extern const s32 sLabelButtonStatePlayOnce[4];





extern HudUnkIcon sHudUnkIcon;

class LabelButton : public UiWidget {
public:
    LabelButton(u32 flag);
    virtual ~LabelButton();
    virtual void draw();
    virtual void update();

    void syncTextColor();
    void freeLabel();
    void createLabel();
    BOOL isAnimDone();
    s32 getState();
    void setState(s32 v);
    void getAnimOffset(s32 *outx, s32 *outy);
    void setPos(s32 x, s32 y);
    void setLabelText();
    void showLayer2();
    void hideLayer2();
    void enableObjWindow();

    /* 0x0c */ s32 posX;
    /* 0x10 */ s32 posY;
    /* 0x14 */ s32 palette;
    /* 0x18 */ s32 kind;
    /* 0x1c */ SpriteAnim layer1;
    /* 0x30 */ SpriteAnim layer2;
    /* 0x44 */ s32 state;
    /* 0x48 */ TextLabel *label;
    /* 0x4c */ StrBuf text;
    /* 0x50 */ u32 unk_50[6];
    /* 0x68 */ u16 textColor;
    /* 0x6a */ u8 onBufferA;
    /* 0x6b */ u8 objWindow;
    /* 0x6c */ u8 layer2Hidden;
    /* 0x6d */ u8 textColorDirty;
};

void LabelButton::enableObjWindow() { objWindow = 1; }

void LabelButton::hideLayer2() { layer2Hidden = 1; }

void LabelButton::showLayer2() { layer2Hidden = 0; }

void LabelButton::setLabelText() {
    _ZN9MsgString4copyEPS_((MsgString *)&text);
    TextLabel *o = label;
    if (o != NULL) {
        o->textStart = (u32)text.data();
        label->alignCenter();
        label->requestRedraw();
        textColorDirty = 1;
    }
}

void LabelButton::setPos(s32 x, s32 y) { posX = x; posY = y; }

void LabelButton::getAnimOffset(s32 *outx, s32 *outy) {
    s32 x = 0;
    s32 y = x;
    if (state == 2) {
        x = layer1.getFrameX(-1) - layer1.getFrameX(0);
        y = layer1.getFrameY(-1) - layer1.getFrameY(0);
    } else if (state == 3) {
        x = layer1.getFrameX(0) - layer1.getFrameX(-1);
        y = layer1.getFrameY(0) - layer1.getFrameY(-1);
    }
    *outx = x;
    *outy = y;
}

void LabelButton::setState(s32 v) {
    s32 i = sLabelButtonKindSeqOffsets[kind] + sLabelButtonStateSeqIds[v];
    s32 j = i + 1;
    s32 k = sLabelButtonStatePlayOnce[v];
    state = v;
    layer1.setSeq(&data_020d5b0c[i]);
    layer1.setPlayOnce(k);
    layer1.restart();
    layer2.setSeq(&data_020d5b0c[v ? j : j]);
    layer2.setPlayOnce(k);
    layer2.restart();
    if (v == 1) {
        layer1.setSpeed(0);
        layer2.setSpeed(0);
    }
    if (v == 0) {
        freeLabel();
    } else {
        createLabel();
        textColor = state == 2 ? 0x7d5f : 0x50c0;
        textColorDirty = 1;
    }
}

s32 LabelButton::getState() { return state; }

BOOL LabelButton::isAnimDone() {
    if (layer1.isFinished() && layer2.isFinished()) {
        return TRUE;
    }
    return FALSE;
}

void LabelButton::createLabel() {
    if (label == NULL) {
        label = MsgTextLabel_CreateVram(sLabelButtonKindLabelVram[kind], 6, 2);
        if (label != NULL) {
            label->vramLoader = 4;
            TextLabel *t = label;
            t->textStart = (u32)text.data();
            if (onBufferA != 0) {
                label->copyMode = 2;
            }
            label->rowStride1K = 1;
            label->alignCenter();
            label->bgColor = 0;
            label->fgColor = sLabelButtonKindTextColors[kind];
            label->requestRedraw();
            textColorDirty = 1;
        }
    }
}

void LabelButton::freeLabel() {
    if (label != NULL) {
        MsgTextLabel_Destroy(label);
        label = NULL;
    }
}

// ---------------------------------------------------------------------------------------------------------------------
// LabelButton

void LabelButton::syncTextColor() {
    if (textColorDirty == 0) {
        if (textColor != sLabelButtonColorCache[kind]) {
            textColorDirty = 1;
        }
    }
    if (textColorDirty != 0) {
        u32 n = sLabelButtonKindTextColors[kind] * 2;
        DC_FlushRange(&textColor, 2);
        GX_LoadOBJPltt(&textColor, n, 2);
        GXS_LoadOBJPltt(&textColor, n, 2);
        sLabelButtonColorCache[kind] = textColor;
        textColorDirty = 0;
    }
}

// Declarations for data defined further down (definition order sets the data layout)
extern const s32 sLabelButtonStatePlayOnce[4];
extern const s32 sLabelButtonStateSeqIds[4];
extern const u32 sLabelButtonKindLabelVram[2];
extern const u8 sLabelButtonKindTextColors[4];
extern const u8 sLabelButtonKindSeqOffsets[4];
extern u16 sLabelButtonColorCache[2];

const s32 sLabelButtonStatePlayOnce[4] = {1, 1, 1, 1};

const s32 sLabelButtonStateSeqIds[4] = {0x33, 0x33, 0x33, 0x35};

const u32 sLabelButtonKindLabelVram[2] = {0x14, 0x1a};

const u8 sLabelButtonKindTextColors[4] = {0xe, 0xf, 0, 0};

const u8 sLabelButtonKindSeqOffsets[4] = {0, 4, 0, 0};

u16 sLabelButtonColorCache[2];
