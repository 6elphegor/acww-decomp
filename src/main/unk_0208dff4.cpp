#include "types.h"
#include "text/Unk_02050288.h"

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

class MsgString {
public:
    static void copy(MsgString *p);
};

extern s32 gGfxMainOnTop;
extern u8 data_020d4694[];
extern u8 data_020d468c[];
struct SpriteAnimSeq { u32 unk_00; u32 unk_04; };
extern SpriteAnimSeq data_020d5b0c[];
extern u16 sLabelButtonColorCache[2];
extern const u8 sLabelButtonKindTextColors[4];
extern const u32 sLabelButtonKindLabelVram[2];
extern const u8 sLabelButtonKindSeqOffsets[4];
extern const s32 sLabelButtonStateSeqIds[4];
extern const s32 sLabelButtonStatePlayOnce[4];

class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    void update();
    void restart();
    BOOL isFinished();
    s32 getFrameY(s32 v);
    s32 getFrameX(s32 v);
    void *getCell();
    void setSpeed(s32 v);
    void setPlayOnce(s32 v);
    void setSeq(SpriteAnimSeq *v);

    /* 0x00 */ u8 unk_00[0x14];
};

class UiWidget {
public:
    UiWidget();
    virtual ~UiWidget();
    virtual void draw() = 0;
    virtual void vfunc_0c() = 0;
    virtual void setOrigin(s32 a, s32 b);
    s32 getOriginY();
    s32 getOriginX();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
};

class ScrollKnob : public UiWidget {
public:
    ScrollKnob(u32 flag);
    virtual ~ScrollKnob();
    virtual void draw();
    virtual void vfunc_0c();

    void setState();
    void setPriority(s32 v);
    void moveTo(s32 x, s32 y);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ SpriteAnim unk_14;
    /* 0x28 */ SpriteAnim unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u8 unk_40;
    /* 0x44 */ s32 unk_44;
};

class HudUnkIcon : public UiWidget {
public:
    HudUnkIcon();
    virtual ~HudUnkIcon();
    virtual void draw();
    virtual void vfunc_0c();

    void updateHiding();
    void updateShown();
    void updateAppearing();
    void updateHidden();

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ s32 unk_20;
};

extern HudUnkIcon sHudUnkIcon;

class LabelButton : public UiWidget {
public:
    LabelButton(u32 flag);
    virtual ~LabelButton();
    virtual void draw();
    virtual void vfunc_0c();

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

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ s32 unk_18;
    /* 0x1c */ SpriteAnim unk_1c;
    /* 0x30 */ SpriteAnim unk_30;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ TextLabel *unk_48;
    /* 0x4c */ StrBuf unk_4c;
    /* 0x50 */ u32 unk_50[6];
    /* 0x68 */ u16 unk_68;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
    /* 0x6c */ u8 unk_6c;
    /* 0x6d */ u8 unk_6d;
};

void LabelButton::enableObjWindow() { unk_6b = 1; }

void LabelButton::hideLayer2() { unk_6c = 1; }

void LabelButton::showLayer2() { unk_6c = 0; }

void LabelButton::setLabelText() {
    MsgString::copy((MsgString *)&unk_4c);
    TextLabel *o = unk_48;
    if (o != NULL) {
        o->unk_10 = (u32)unk_4c.data();
        unk_48->alignCenter();
        unk_48->requestRedraw();
        unk_6d = 1;
    }
}

void LabelButton::setPos(s32 x, s32 y) { unk_0c = x; unk_10 = y; }

void LabelButton::getAnimOffset(s32 *outx, s32 *outy) {
    s32 x = 0;
    s32 y = x;
    if (unk_44 == 2) {
        x = unk_1c.getFrameX(-1) - unk_1c.getFrameX(0);
        y = unk_1c.getFrameY(-1) - unk_1c.getFrameY(0);
    } else if (unk_44 == 3) {
        x = unk_1c.getFrameX(0) - unk_1c.getFrameX(-1);
        y = unk_1c.getFrameY(0) - unk_1c.getFrameY(-1);
    }
    *outx = x;
    *outy = y;
}

void LabelButton::setState(s32 v) {
    s32 i = sLabelButtonKindSeqOffsets[unk_18] + sLabelButtonStateSeqIds[v];
    s32 j = i + 1;
    s32 k = sLabelButtonStatePlayOnce[v];
    unk_44 = v;
    unk_1c.setSeq(&data_020d5b0c[i]);
    unk_1c.setPlayOnce(k);
    unk_1c.restart();
    unk_30.setSeq(&data_020d5b0c[v ? j : j]);
    unk_30.setPlayOnce(k);
    unk_30.restart();
    if (v == 1) {
        unk_1c.setSpeed(0);
        unk_30.setSpeed(0);
    }
    if (v == 0) {
        freeLabel();
    } else {
        createLabel();
        unk_68 = unk_44 == 2 ? 0x7d5f : 0x50c0;
        unk_6d = 1;
    }
}

s32 LabelButton::getState() { return unk_44; }

BOOL LabelButton::isAnimDone() {
    if (unk_1c.isFinished() && unk_30.isFinished()) {
        return TRUE;
    }
    return FALSE;
}

void LabelButton::createLabel() {
    if (unk_48 == NULL) {
        unk_48 = MsgTextLabel_CreateVram(sLabelButtonKindLabelVram[unk_18], 6, 2);
        if (unk_48 != NULL) {
            unk_48->unk_2c = 4;
            TextLabel *t = unk_48;
            t->unk_10 = (u32)unk_4c.data();
            if (unk_6a != 0) {
                unk_48->unk_50 = 2;
            }
            unk_48->unk_55 = 1;
            unk_48->alignCenter();
            unk_48->unk_39 = 0;
            unk_48->unk_38 = sLabelButtonKindTextColors[unk_18];
            unk_48->requestRedraw();
            unk_6d = 1;
        }
    }
}

void LabelButton::freeLabel() {
    if (unk_48 != NULL) {
        MsgTextLabel_Destroy(unk_48);
        unk_48 = NULL;
    }
}

// ---------------------------------------------------------------------------------------------------------------------
// LabelButton

void LabelButton::syncTextColor() {
    if (unk_6d == 0) {
        if (unk_68 != sLabelButtonColorCache[unk_18]) {
            unk_6d = 1;
        }
    }
    if (unk_6d != 0) {
        u32 n = sLabelButtonKindTextColors[unk_18] * 2;
        DC_FlushRange(&unk_68, 2);
        GX_LoadOBJPltt(&unk_68, n, 2);
        GXS_LoadOBJPltt(&unk_68, n, 2);
        sLabelButtonColorCache[unk_18] = unk_68;
        unk_6d = 0;
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
