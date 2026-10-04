#include "types.h"
#include "snd/TvSound.h"
#include "gfx/SpriteAnim.h"
#include "ui/UiWidget.h"

// ---------------------------------------------------------------------------------------------------------------------
// 12-byte record with a base class at 0x020639xx (functions VillagerId_Copy..VillagerId_CopyFrom are still free functions)

struct Unk_020030d8 {
    /* 0x00 */ u8 townId[10];
    /* 0x0a */ u8 personality;
    /* 0x0b */ u8 species;
};

extern "C" {
void MI_CpuCopy8(void *src, void *dst, u32 size);
void TownId_Clear(Unk_020030d8 *p);
void TownId_Destruct(Unk_020030d8 *p);
void TownId_Construct(Unk_020030d8 *p);
void TownId_CopyTo(Unk_020030d8 *p, Unk_020030d8 *other);
void TownId_CopyFrom(Unk_020030d8 *p, Unk_020030d8 *other);
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



// Vtable at 0x020d5e0c
class HudUnkSlideIcon : public UiWidget {
public:
    HudUnkSlideIcon();
    virtual ~HudUnkSlideIcon();
    virtual void draw();
    virtual void update();

    void applyVariantRequest();
    void updateSlide();
    void trackMenuTransition();
    BOOL canShow();
    void setAnimFrozen(BOOL flag);
    void callDraw();
    void callUpdate();
    void exit();
    void reset();

    /* 0x0c */ SpriteAnim anim;
    /* 0x20 */ s32 slideOffset;
    /* 0x24 */ s32 slideStep;
    /* 0x28 */ s32 lastTransitionProgress;
    /* 0x2c */ s32 holdTimer;
    /* 0x30 */ u8 transitionActive;
    /* 0x31 */ u8 enabled;
    /* 0x32 */ u8 centered;
    /* 0x33 */ u8 unfreezeRequest;
    /* 0x34 */ s32 variant;
    /* 0x38 */ s32 requestedVariant;
    /* 0x3c */ s32 showTimer;
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

    /* 0x00 */ s32 level;
    /* 0x04 */ s32 slideOffset;
    /* 0x08 */ s32 slideStep;
    /* 0x0c */ s32 lastTransitionProgress;
    /* 0x10 */ s32 holdTimer;
    /* 0x14 */ u8 transitionActive;
    /* 0x15 */ u8 wifiGfx;
};

struct Unk_020d467c {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 (*unk_08)[3];
};
extern Unk_020d467c data_020d467c;


struct Unk_02003878_Vec {
    s32 x;
    s32 y;
    s32 z;
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
            v.x = v.x - gCameraEye.x;
            v.y = v.y - gCameraEye.y;
            v.z = v.z - gCameraEye.z;
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
    level = 3;
    slideOffset = 0;
    slideStep = 0;
    lastTransitionProgress = 0;
    holdTimer = 0;
    transitionActive = 0;
    wifiGfx = 0;
}

HudLinkIcon::~HudLinkIcon() {}

void HudLinkIcon::reset() {
    level = 3;
    slideStep = 0;
    slideOffset = sHudIconSlideOffsets[0];
    lastTransitionProgress = 0;
    holdTimer = 0;
    transitionActive = 0;
    wifiGfx = 0;
}

void HudLinkIcon::exit() {}

void HudLinkIcon::update() {
    if (canShow()) {
        s32 v = Net_GetLinkLevel();
        if (v == 1) {
            level = 2;
        } else if (v == 2) {
            level = 1;
        } else if (v == 3) {
            level = 0;
        } else {
            level = 3;
        }
    }
    trackMenuTransition();
    updateSlide();
    func_02003574();
}

void HudLinkIcon::draw() {
    if (slideStep != 0) {
        Oam_DrawCell(0, (void *)data_020d467c.unk_08[level][0], slideOffset + 0x80, 0x60, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
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
    if (r && holdTimer == 0) {
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
    if (wifiGfx == b) {
        return TRUE;
    }
    return FALSE;
}

void HudLinkIcon::trackMenuTransition() {
    BOOL a = MenuCtrl_IsTransitionActive() ? TRUE : FALSE;
    s32 b = MenuCtrl_GetTransitionProgressOrFull();
    if (holdTimer > 0) {
        holdTimer--;
    }
    if (transitionActive != 0) {
        if (lastTransitionProgress == 0x1000 && b < 0x1000) {
            holdTimer = 0x17;
        }
    } else if (a) {
        slideStep = 0;
        slideOffset = sHudIconSlideOffsets[0];
        holdTimer = 0xe;
    }
    transitionActive = a;
    lastTransitionProgress = b;
}

void HudLinkIcon::updateSlide() {
    BOOL a = canShow();
    BOOL b = isWifiGfxCurrent();
    if (a && b) {
        if ((u32)slideStep < 4) {
            slideStep++;
            slideOffset = sHudIconSlideOffsets[slideStep];
        }
    } else if (slideStep != 0) {
        slideStep--;
        slideOffset = sHudIconSlideOffsets[slideStep];
    }
    if (a && !b && slideStep == 0) {
        wifiGfx = wifiGfx == 0 ? 1 : 0;
        HudObjGfx_LoadLinkIcon(wifiGfx);
    }
}

void HudLinkIcon::func_02003574() {}

HudUnkSlideIcon::HudUnkSlideIcon() {
    slideOffset = 0;
    slideStep = 0;
    lastTransitionProgress = 0;
    holdTimer = 0;
    transitionActive = 0;
    enabled = 0;
    centered = 1;
    unfreezeRequest = 0;
    variant = 0;
    requestedVariant = 5;
    showTimer = 0;
}

HudUnkSlideIcon::~HudUnkSlideIcon() {
    exit();
}

void HudUnkSlideIcon::draw() {
    if (slideStep != 0) {
        void *h = anim.getCell();
        if (h != 0) {
            s32 x = getOriginX() + anim.getFrameX(-1);
            s32 y = getOriginY() + anim.getFrameY(-1);
            if (centered != 0) {
                x += 0x78;
                y += 0x48;
            } else {
                x += slideOffset;
                y += transitionActive != 0 ? 0x8c : 0;
            }
            Oam_DrawCell(0, h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

void HudUnkSlideIcon::update() {
    trackMenuTransition();
    updateSlide();
    applyVariantRequest();
}

extern "C" void HudUnkSlideIcon_Reset() { sHudUnkSlideIcon.reset(); }

extern "C" void HudUnkSlideIcon_Exit() { sHudUnkSlideIcon.exit(); }

extern "C" void HudUnkSlideIcon_Update() { sHudUnkSlideIcon.callUpdate(); }

extern "C" void HudUnkSlideIcon_Draw() { sHudUnkSlideIcon.callDraw(); }

void HudUnkSlideIcon::reset() {
    enabled = 0;
    slideOffset = sHudIconSlideOffsets[0];
    slideStep = 0;
    lastTransitionProgress = 0;
    holdTimer = 0;
    transitionActive = 0;
    centered = 1;
    setAnimFrozen(FALSE);
    unfreezeRequest = 0;
    variant = 0;
    requestedVariant = 5;
    showTimer = 0;
}

void HudUnkSlideIcon::exit() {
    anim.restart();
}

void HudUnkSlideIcon::callUpdate() {
    update();
}

void HudUnkSlideIcon::callDraw() {
    draw();
}

void HudUnkSlideIcon::setAnimFrozen(BOOL flag) {
    anim.setSeq((SpriteAnimSeq *)data_020d47a4);
    if (flag) {
        anim.setPlayOnce(1);
        anim.setFrame(1, 0);
        anim.pause();
    } else {
        anim.setPlayOnce(0);
        anim.restart();
    }
    unfreezeRequest = 0;
}

BOOL HudUnkSlideIcon::canShow() {
    BOOL r;
    if (enabled != 0 && holdTimer == 0 && showTimer > 0) {
        r = TRUE;
    } else {
        r = FALSE;
    }
    if (r) {
        if (requestedVariant != 5 && requestedVariant != variant) {
            r = FALSE;
        }
    }
    return r;
}

void HudUnkSlideIcon::trackMenuTransition() {
    BOOL a = MenuCtrl_IsTransitionActive() ? TRUE : FALSE;
    s32 b = MenuCtrl_GetTransitionProgressOrFull();
    if (holdTimer > 0) {
        holdTimer--;
        if (holdTimer == 0) {
            unfreezeRequest = 1;
        }
    }
    if (transitionActive != 0) {
        if (lastTransitionProgress == 0x1000 && b < 0x1000) {
            holdTimer = 0x17;
        }
    } else if (a) {
        slideStep = 0;
        slideOffset = sHudIconSlideOffsets[0];
        setAnimFrozen(TRUE);
        holdTimer = 0xe;
    }
    transitionActive = a;
    lastTransitionProgress = b;
}

void HudUnkSlideIcon::updateSlide() {
    if (unfreezeRequest != 0) {
        setAnimFrozen(FALSE);
    }
    if (centered != 0) {
        if (canShow()) {
            slideStep = 4;
            slideOffset = sHudIconSlideOffsets[4];
        } else {
            slideStep = 0;
            slideOffset = sHudIconSlideOffsets[0];
        }
    } else if (canShow()) {
        if ((u32)slideStep < 4) {
            slideStep++;
            slideOffset = sHudIconSlideOffsets[slideStep];
            if (slideStep == 4) {
                setAnimFrozen(FALSE);
            }
        }
    } else if (slideStep != 0) {
        if (slideStep == 4) {
            setAnimFrozen(TRUE);
        }
        slideStep--;
        slideOffset = sHudIconSlideOffsets[slideStep];
    }
    if (showTimer > 0) {
        showTimer--;
    }
    anim.update();
}

void HudUnkSlideIcon::applyVariantRequest() {
    if (slideStep == 0) {
        s32 t = requestedVariant;
        if (t != 5 && t != variant) {
            HudObjGfx_LoadSlideIcon(t);
            variant = requestedVariant;
            requestedVariant = 5;
            BOOL b = FALSE;
            if ((u32)variant <= 4 && ((1 << variant) & 0x19) != 0) {
                b = TRUE;
            }
            centered = b;
            unfreezeRequest = 1;
        }
    }
}

extern "C" void VillagerId_CopyFrom(Unk_020030d8 *p, Unk_020030d8 *other) {
    TownId_CopyFrom(p, other);
    p->species = other->species;
    p->personality = other->personality;
}

extern "C" void VillagerId_CopyTo(Unk_020030d8 *p, Unk_020030d8 *other) {
    TownId_CopyTo(p, other);
    other->species = p->species;
    other->personality = p->personality;
}

extern "C" Unk_020030d8 *VillagerId_Construct(Unk_020030d8 *p) {
    TownId_Construct(p);
    return p;
}

extern "C" Unk_020030d8 *VillagerId_ConstructCopy(Unk_020030d8 *p, Unk_020030d8 *other) {
    TownId_Construct(p);
    VillagerId_CopyFrom(p, other);
    return p;
}

extern "C" Unk_020030d8 *VillagerId_Destruct(Unk_020030d8 *p) {
    TownId_Destruct(p);
    return p;
}

extern "C" void VillagerId_Clear(Unk_020030d8 *p) {
    TownId_Clear(p);
    p->species = 0xff;
    p->personality = 6;
}

extern "C" void VillagerId_Copy(Unk_020030d8 *dst, Unk_020030d8 *src) {
    MI_CpuCopy8(src, dst, 0xc);
}

