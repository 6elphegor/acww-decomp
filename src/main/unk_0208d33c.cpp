#include "types.h"

extern "C" {
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

extern "C" {
void GX_LoadOBJPltt(void *a, u32 b, u32 c);
}

extern "C" {
void Snd_SetPanIfChanged(u8 v);
}

extern u8 data_020cf650[];
extern s32 data_020cf63c[];
extern s32 data_020cf67c[];
extern u8 data_020cf668[];
extern u8 data_020cf654[];
extern s32 data_020cf6d8[];
extern s32 data_020cf6c8[];
extern u8 data_020d5b0c[];
extern u8 data_020d467c[];

struct Unk_02089240_Rec {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
};

// Sub-object (ctor 0x02089270, dtor 0x0208926c)
class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    void update();
    void restart();
    BOOL isFinished();
    s32 getFrameY(s32 v);
    s32 getFrameX(s32 v);
    Unk_02089240_Rec *getSeq();
    void *getCell();
    void setFrame(s32 a, s32 b);
    void setSpeed(s32 v);
    void setPlayOnce(s32 v);
    void setSeq(void *v);

    /* 0x00 */ u8 unk_00[0x14];
};

// Sub-object at +0x38 of Unk_020e0ff0 (0x34 bytes, ctor 0x02039b04, dtor 0x02039aec)
class ChatBalloonText {
public:
    ChatBalloonText();
    ~ChatBalloonText();
    void func_020a7bd8(void *p);

    /* 0x00 */ u32 unk_00[13];
};

// Base class with vtable at 0x020e0db4 (ctor 0x02089fa8, D2 0x02089f78)
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

class Unk_0208d154_Sub {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual s32 vfunc_0c();

    /* 0x04 */ u8 unk_04[0x2c];
    /* 0x30 */ s32 unk_30;
};

class Unk_020e0ff0 : public UiWidget {
public:
    typedef void (Unk_020e0ff0::*Fn)();

    Unk_020e0ff0();
    virtual ~Unk_020e0ff0();
    virtual void draw();
    virtual void vfunc_0c();

    void func_0208d0bc();
    void func_0208d0d4();
    void func_0208d154();
    void func_0208d1bc();
    void func_0208d1ec();
    void func_0208d214();
    void func_0208d220();
    void func_0208d234();
    void func_0208d244();
    void func_0208d278();
    void func_0208d28c();
    void func_0208d2b8();
    static void func_0208d2c4();
    BOOL func_0208d2d8();
    BOOL func_0208d2f0();
    void func_0208d308(void *p);
    void func_0208d314(s32 a, s32 b);
    void func_0208d31c();
    void func_0208d324(s32 a);

    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ SpriteAnim unk_14;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ ChatBalloonText unk_38;
    /* 0x6c */ Unk_0208d154_Sub *unk_6c;
    /* 0x70 */ s32 unk_70;
    /* 0x74 */ s32 unk_74;
    /* 0x78 */ s32 unk_78;
    /* 0x7c */ u8 unk_7c;
};

// ---------------------------------------------------------------------------------------------------------------------

class HandCursor : public UiWidget {
public:
    HandCursor(BOOL flag);
    virtual ~HandCursor();
    virtual void draw();
    virtual void vfunc_0c();

    void func_0208d4fc_dummy();
    BOOL isAnimDone();
    s32 getAnim();
    void setAnimAtEnd(s32 idx);
    void setAnim(s32 idx);
    void setPos(s32 a, s32 b);
    void disableObjWindow();
    void enableObjWindow();

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ SpriteAnim unk_2c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ s32 unk_44;
    /* 0x48 */ u8 unk_48;
    /* 0x49 */ u8 unk_49;
    /* 0x4a */ u8 unk_4a;
};

s32 HandCursor::getAnim() {
    return unk_40;
}

BOOL HandCursor::isAnimDone() {
    BOOL r = FALSE;
    if (unk_0c.isFinished()) {
        BOOL t;
        if (unk_49 != 0) {
            t = unk_2c.isFinished();
        } else {
            t = TRUE;
        }
        if (t) {
            r = TRUE;
        }
    }
    return r;
}

Unk_020e0ff0::Unk_020e0ff0() : unk_0c(0), unk_10(10), unk_28(0), unk_2c(0), unk_30(0), unk_34(0) {
    unk_6c = 0;
    unk_70 = 0;
    unk_74 = 0;
    unk_78 = 0;
    unk_7c = 0;
}

Unk_020e0ff0::~Unk_020e0ff0() {
    func_0208d31c();
}

void Unk_020e0ff0::draw() {
    if (unk_7c != 0) {
        void *h = unk_14.getCell();
        s32 a = getOriginX();
        s32 b = unk_14.getFrameX(-1);
        s32 x = unk_34 + (unk_28 + a);
        x += b;
        s32 c = getOriginY();
        s32 d = unk_14.getFrameY(-1);
        s32 y = unk_30 + (unk_2c + c);
        y += d;
        Oam_DrawCell(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

void Unk_020e0ff0::vfunc_0c() {
    Fn p0 = &Unk_020e0ff0::func_0208d220;
    static Fn tbl[4] = {&Unk_020e0ff0::func_0208d28c, &Unk_020e0ff0::func_0208d244, &Unk_020e0ff0::func_0208d220, &Unk_020e0ff0::func_0208d1ec};
    Fn q0 = &Unk_020e0ff0::func_0208d220;
    Fn q1 = &Unk_020e0ff0::func_0208d220;
    Fn q2 = &Unk_020e0ff0::func_0208d220;
    (this->*tbl[unk_70])();
    if (unk_70 != 0) {
        unk_14.update();
    }
}

// ---------------------------------------------------------------------------------------------------------------------

