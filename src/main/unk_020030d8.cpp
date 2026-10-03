#include "types.h"

// ---------------------------------------------------------------------------------------------------------------------
// 12-byte record with a base class at 0x020639xx (functions VillagerId_Copy..VillagerId_CopyFrom are still free functions)

struct Unk_020030d8 {
    /* 0x00 */ u8 unk_00[10];
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

extern "C" {
void MI_CpuCopy8(void *src, void *dst, u32 size);
void func_020639a0(Unk_020030d8 *p);
void func_020639b8(Unk_020030d8 *p);
void func_020639bc(Unk_020030d8 *p);
void func_02063968(Unk_020030d8 *p, Unk_020030d8 *other);
void func_0206397c(Unk_020030d8 *p, Unk_020030d8 *other);
void HudObjGfx_LoadSlideIcon(u32 a);
void HudObjGfx_LoadLinkIcon(u32 v);
BOOL MenuCtrl_IsTransitionActive();
s32 MenuCtrl_GetTransitionProgressOrFull();
s32 Net_GetMode();
s32 Net_GetLinkLevel();
void Oam_DrawCell(u32 a, void *h, s32 x, s32 y, s32 s0, s32 s1, s32 s2, s32 s3, s32 s4, s32 s5, s32 s6, s32 s7);
}

extern const s8 sHudIconSlideOffsets[8];
const s8 sHudIconSlideOffsets[8] = {-18, -12, -2, -1, 0, 0, 0, 0};
extern u8 data_020d47a4[];

struct SpriteAnimSeq;

// Sub-object at +0xc of HudUnkSlideIcon (ctor 0x02089270, dtor 0x0208926c)
class SpriteAnim {
public:
    SpriteAnim();
    ~SpriteAnim();
    void update();
    void restart();
    void pause();
    s32 getFrameY(s32 v);
    s32 getFrameX(s32 v);
    void *getCell();
    void setFrame(s32 a, s32 b);
    void setPlayOnce(s32 v);
    void setSeq(SpriteAnimSeq *v);

    /* 0x00 */ u8 unk_00[0x14];
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

// Vtable at 0x020d5e0c
class HudUnkSlideIcon : public UiWidget {
public:
    HudUnkSlideIcon();
    virtual ~HudUnkSlideIcon();
    virtual void draw();
    virtual void vfunc_0c();

    void applyVariantRequest();
    void updateSlide();
    void trackMenuTransition();
    BOOL canShow();
    void setAnimFrozen(BOOL flag);
    void callDraw();
    void callUpdate();
    void exit();
    void reset();

    /* 0x0c */ SpriteAnim unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ u8 unk_30;
    /* 0x31 */ u8 unk_31;
    /* 0x32 */ u8 unk_32;
    /* 0x33 */ u8 unk_33;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
};

// HudLinkIcon: state object at sHudLinkIcon
struct HudLinkIcon {
    HudLinkIcon();
    ~HudLinkIcon();
    void func_02003574();
    void updateSlide();
    void trackMenuTransition();
    BOOL isWifiGfxCurrent();
    BOOL canShow();
    void draw();
    void update();
    void exit();
    void reset();

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15;
};

struct Unk_020d467c {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 (*unk_08)[3];
};
extern Unk_020d467c data_020d467c;

// Base of the objects created in TvSound_Create (vtable data_0213bac4, in autoload_2)
class TvSound {
public:
    virtual void reset();
    virtual void release();
    virtual void vfunc_08(s32 a, void *b);
    virtual void turnOn(s32 a);
    virtual void turnOff();

    void callTurnOff();
    void callTurnOn(s32 a);
    void callUpdate(s32 a, void *b);
    void callRelease();
    void callReset();
};

struct Unk_02003878_Vec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};
extern s32 gCamera;
extern Unk_02003878_Vec gCameraEye;

// bss, in the order __sinit constructs them
HudLinkIcon sHudLinkIcon;
HudUnkSlideIcon sHudUnkSlideIcon;

// ---------------------------------------------------------------------------------------------------------------------

void TvSound::callReset() { reset(); }

void TvSound::callRelease() { release(); }

void TvSound::callUpdate(s32 a, void *b) {
    if (b != 0) {
        Unk_02003878_Vec v = *(Unk_02003878_Vec *)b;
        if (gCamera != 0) {
            v.unk_00 = v.unk_00 - gCameraEye.unk_00;
            v.unk_04 = v.unk_04 - gCameraEye.unk_04;
            v.unk_08 = v.unk_08 - gCameraEye.unk_08;
            vfunc_08(a, &v);
        }
    } else {
        vfunc_08(a, 0);
    }
}

void TvSound::callTurnOn(s32 a) { turnOn(a); }

void TvSound::callTurnOff() { turnOff(); }

extern "C" void HudLinkIcon_Reset() { sHudLinkIcon.reset(); }

extern "C" void HudLinkIcon_Exit() { sHudLinkIcon.exit(); }

extern "C" void HudLinkIcon_Update() { sHudLinkIcon.update(); }

extern "C" void HudLinkIcon_Draw() { sHudLinkIcon.draw(); }

HudLinkIcon::HudLinkIcon() {
    unk_00 = 3;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_15 = 0;
}

HudLinkIcon::~HudLinkIcon() {}

void HudLinkIcon::reset() {
    unk_00 = 3;
    unk_08 = 0;
    unk_04 = sHudIconSlideOffsets[0];
    unk_0c = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_15 = 0;
}

void HudLinkIcon::exit() {}

void HudLinkIcon::update() {
    if (canShow()) {
        s32 v = Net_GetLinkLevel();
        if (v == 1) {
            unk_00 = 2;
        } else if (v == 2) {
            unk_00 = 1;
        } else if (v == 3) {
            unk_00 = 0;
        } else {
            unk_00 = 3;
        }
    }
    trackMenuTransition();
    updateSlide();
    func_02003574();
}

void HudLinkIcon::draw() {
    if (unk_08 != 0) {
        Oam_DrawCell(0, (void *)data_020d467c.unk_08[unk_00][0], unk_04 + 0x80, 0x60, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
}

BOOL HudLinkIcon::canShow() {
    BOOL r = FALSE;
    if (Net_GetMode() != 0) {
        s32 v = Net_GetMode();
        if (v != 6) {
            r = TRUE;
        }
    }
    if (r && unk_10 == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL HudLinkIcon::isWifiGfxCurrent() {
    BOOL b;
    switch (Net_GetMode()) {
    case 3:
    case 4:
        b = TRUE;
        break;
    default:
        b = FALSE;
        break;
    }
    if (unk_15 == b) {
        return TRUE;
    }
    return FALSE;
}

void HudLinkIcon::trackMenuTransition() {
    BOOL a = MenuCtrl_IsTransitionActive() ? TRUE : FALSE;
    s32 b = MenuCtrl_GetTransitionProgressOrFull();
    if (unk_10 > 0) {
        unk_10--;
    }
    if (unk_14 != 0) {
        if (unk_0c == 0x1000 && b < 0x1000) {
            unk_10 = 0x17;
        }
    } else if (a) {
        unk_08 = 0;
        unk_04 = sHudIconSlideOffsets[0];
        unk_10 = 0xe;
    }
    unk_14 = a;
    unk_0c = b;
}

void HudLinkIcon::updateSlide() {
    BOOL a = canShow();
    BOOL b = isWifiGfxCurrent();
    if (a && b) {
        if ((u32)unk_08 < 4) {
            unk_08++;
            unk_04 = sHudIconSlideOffsets[unk_08];
        }
    } else if (unk_08 != 0) {
        unk_08--;
        unk_04 = sHudIconSlideOffsets[unk_08];
    }
    if (a && !b && unk_08 == 0) {
        unk_15 = unk_15 == 0 ? 1 : 0;
        HudObjGfx_LoadLinkIcon(unk_15);
    }
}

void HudLinkIcon::func_02003574() {}

HudUnkSlideIcon::HudUnkSlideIcon() {
    unk_20 = 0;
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_30 = 0;
    unk_31 = 0;
    unk_32 = 1;
    unk_33 = 0;
    unk_34 = 0;
    unk_38 = 5;
    unk_3c = 0;
}

HudUnkSlideIcon::~HudUnkSlideIcon() {
    exit();
}

void HudUnkSlideIcon::draw() {
    if (unk_24 != 0) {
        void *h = unk_0c.getCell();
        if (h != 0) {
            s32 x = getOriginX() + unk_0c.getFrameX(-1);
            s32 y = getOriginY() + unk_0c.getFrameY(-1);
            if (unk_32 != 0) {
                x += 0x78;
                y += 0x48;
            } else {
                x += unk_20;
                y += unk_30 != 0 ? 0x8c : 0;
            }
            Oam_DrawCell(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void HudUnkSlideIcon::vfunc_0c() {
    trackMenuTransition();
    updateSlide();
    applyVariantRequest();
}

extern "C" void HudUnkSlideIcon_Reset() { sHudUnkSlideIcon.reset(); }

extern "C" void HudUnkSlideIcon_Exit() { sHudUnkSlideIcon.exit(); }

extern "C" void HudUnkSlideIcon_Update() { sHudUnkSlideIcon.callUpdate(); }

extern "C" void HudUnkSlideIcon_Draw() { sHudUnkSlideIcon.callDraw(); }

void HudUnkSlideIcon::reset() {
    unk_31 = 0;
    unk_20 = sHudIconSlideOffsets[0];
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_30 = 0;
    unk_32 = 1;
    setAnimFrozen(FALSE);
    unk_33 = 0;
    unk_34 = 0;
    unk_38 = 5;
    unk_3c = 0;
}

void HudUnkSlideIcon::exit() {
    unk_0c.restart();
}

void HudUnkSlideIcon::callUpdate() {
    vfunc_0c();
}

void HudUnkSlideIcon::callDraw() {
    draw();
}

void HudUnkSlideIcon::setAnimFrozen(BOOL flag) {
    unk_0c.setSeq((SpriteAnimSeq *)data_020d47a4);
    if (flag) {
        unk_0c.setPlayOnce(1);
        unk_0c.setFrame(1, 0);
        unk_0c.pause();
    } else {
        unk_0c.setPlayOnce(0);
        unk_0c.restart();
    }
    unk_33 = 0;
}

BOOL HudUnkSlideIcon::canShow() {
    BOOL r;
    if (unk_31 != 0 && unk_2c == 0 && unk_3c > 0) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    if (r) {
        if (unk_38 != 5 && unk_38 != unk_34) {
            r = FALSE;
        }
    }
    return r;
}

void HudUnkSlideIcon::trackMenuTransition() {
    BOOL a = MenuCtrl_IsTransitionActive() ? TRUE : FALSE;
    s32 b = MenuCtrl_GetTransitionProgressOrFull();
    if (unk_2c > 0) {
        unk_2c--;
        if (unk_2c == 0) {
            unk_33 = 1;
        }
    }
    if (unk_30 != 0) {
        if (unk_28 == 0x1000 && b < 0x1000) {
            unk_2c = 0x17;
        }
    } else if (a) {
        unk_24 = 0;
        unk_20 = sHudIconSlideOffsets[0];
        setAnimFrozen(TRUE);
        unk_2c = 0xe;
    }
    unk_30 = a;
    unk_28 = b;
}

void HudUnkSlideIcon::updateSlide() {
    if (unk_33 != 0) {
        setAnimFrozen(FALSE);
    }
    if (unk_32 != 0) {
        if (canShow()) {
            unk_24 = 4;
            unk_20 = sHudIconSlideOffsets[4];
        } else {
            unk_24 = 0;
            unk_20 = sHudIconSlideOffsets[0];
        }
    } else if (canShow()) {
        if ((u32)unk_24 < 4) {
            unk_24++;
            unk_20 = sHudIconSlideOffsets[unk_24];
            if (unk_24 == 4) {
                setAnimFrozen(FALSE);
            }
        }
    } else if (unk_24 != 0) {
        if (unk_24 == 4) {
            setAnimFrozen(TRUE);
        }
        unk_24--;
        unk_20 = sHudIconSlideOffsets[unk_24];
    }
    if (unk_3c > 0) {
        unk_3c--;
    }
    unk_0c.update();
}

void HudUnkSlideIcon::applyVariantRequest() {
    if (unk_24 == 0) {
        s32 t = unk_38;
        if (t != 5 && t != unk_34) {
            HudObjGfx_LoadSlideIcon(t);
            unk_34 = unk_38;
            unk_38 = 5;
            BOOL b = FALSE;
            if ((u32)unk_34 <= 4 && ((1 << unk_34) & 0x19) != 0) {
                b = TRUE;
            }
            unk_32 = b;
            unk_33 = 1;
        }
    }
}

extern "C" void VillagerId_CopyFrom(Unk_020030d8 *p, Unk_020030d8 *other) {
    func_0206397c(p, other);
    p->unk_0b = other->unk_0b;
    p->unk_0a = other->unk_0a;
}

extern "C" void VillagerId_CopyTo(Unk_020030d8 *p, Unk_020030d8 *other) {
    func_02063968(p, other);
    other->unk_0b = p->unk_0b;
    other->unk_0a = p->unk_0a;
}

extern "C" Unk_020030d8 *VillagerId_Construct(Unk_020030d8 *p) {
    func_020639bc(p);
    return p;
}

extern "C" Unk_020030d8 *VillagerId_ConstructCopy(Unk_020030d8 *p, Unk_020030d8 *other) {
    func_020639bc(p);
    VillagerId_CopyFrom(p, other);
    return p;
}

extern "C" Unk_020030d8 *VillagerId_Destruct(Unk_020030d8 *p) {
    func_020639b8(p);
    return p;
}

extern "C" void VillagerId_Clear(Unk_020030d8 *p) {
    func_020639a0(p);
    p->unk_0b = 0xff;
    p->unk_0a = 6;
}

extern "C" void VillagerId_Copy(Unk_020030d8 *dst, Unk_020030d8 *src) {
    MI_CpuCopy8(src, dst, 0xc);
}

