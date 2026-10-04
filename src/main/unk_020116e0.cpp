#include "types.h"

// TU014-TU017 (one original file): 0x020116e0-0x020119cc. The file owns the global HudObjGfx object
// (.bss, autoload_3 0x021bdb74-0x021bddd8: registration record + object), which __sinit constructs, and a
// lookup table in .rodata (0x020c6c88-0x020c6cbc).

struct HudObjGfx {
    u8 unk_00[0x48];
    s32 paletteBuf;
    s32 charBuf;
    u8 cameraButtonChars[0x200];
    s32 pendingCameraButtonScreens;
    u8 msgUiActive;
    u8 countdownVariant;

    HudObjGfx();
    ~HudObjGfx();
    BOOL loadChars();
    BOOL loadPalette(s32 mode);
    const char *getCharPath(s32 mode);
    const char *getPalettePath(s32 mode);
    void loadSlideIcon(u32 v);
    void loadLinkIcon(u32 v);
    void loadCameraButton(u32 a, u32 b, u32 c);
    void loadKind(u32 a, u32 b);
    void loadForScene(u32 a);
};

// Methods of the same object under the class name of an earlier unit (0x0201106c-0x020116e0); called by
// their symbols.txt names.
extern "C" {
void FS_InitFile(void *p);
void *_ZN11HudObjGfxIo11freePaletteEv(void *p);
void *_ZN11HudObjGfxIo9freeCharsEv(void *p);
void _ZN11HudObjGfxIo21releaseSlideIconCharsEv(void *p);
void _ZN11HudObjGfxIo20uploadSlideIconCharsEv(void *p);
s32 _ZN11HudObjGfxIo18loadSlideIconCharsEi(void *p, u32 v);
void _ZN11HudObjGfxIo20releaseLinkIconCharsEv(void *p);
void _ZN11HudObjGfxIo19uploadLinkIconCharsEv(void *p);
s32 _ZN11HudObjGfxIo17loadLinkIconCharsEi(void *p, u32 v);
void _ZN11HudObjGfxIo23uploadCameraButtonCharsEi(void *p, u32 v);
s32 _ZN11HudObjGfxIo21loadCameraButtonCharsEi(void *p, u32 v);
void _ZN11HudObjGfxIo13uploadPaletteEi(void *p, u32 v);
void _ZN11HudObjGfxIo11uploadCharsEi(void *p, u32 v);
s32 _ZN11HudObjGfxIo13loadKindCharsEi(void *p, u32 v);
void _ZN11HudObjGfxIo15uploadKindCharsEi(void *p, u32 v);
void _ZN11HudObjGfxIo16releaseKindCharsEv(void *p);
s32 InputMode_IsTouch(void);
s32 Scene_GetCurrent(void);
s32 ChatBalloon_RefreshLabelsUnk(void);
void MI_CpuFill8(void *dst, u32 v, u32 n);
s32 Hud_GetSceneHudKind(void);
void HudObjGfx_InitFile(void *p);

extern const u8 sSceneHudKinds[0x34];
}

HudObjGfx sHudObjGfx;

extern "C" const u8 sSceneHudKinds[0x34] = {
    1, 2, 2, 2, 2, 2, 0, 1, 1, 3, 3, 1, 0, 0, 0, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2,
    3, 3, 3, 3, 3, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2,
};

HudObjGfx::HudObjGfx() {
    paletteBuf = 0;
    charBuf = 0;
    pendingCameraButtonScreens = 3;
    msgUiActive = 0;
    countdownVariant = 0;
    MI_CpuFill8(&cameraButtonChars, 0, 0x200);
}

HudObjGfx::~HudObjGfx() {
    _ZN11HudObjGfxIo11freePaletteEv(this);
    _ZN11HudObjGfxIo9freeCharsEv(this);
}

extern "C" void HudObjGfx_LoadForScene(void) {
    sHudObjGfx.loadForScene(0);
    ChatBalloon_RefreshLabelsUnk();
}

extern "C" void HudObjGfx_LoadForSceneSub(void) {
    sHudObjGfx.loadForScene(2);
    ChatBalloon_RefreshLabelsUnk();
}

extern "C" void HudObjGfx_LoadKind(u32 a, u32 b) { sHudObjGfx.loadKind(a, b); }

extern "C" void HudObjGfx_LoadCameraButton(u32 a, u32 b, u32 c) { sHudObjGfx.loadCameraButton(a, b, c); }

extern "C" void HudObjGfx_SetCountdownVariant(u8 v) { sHudObjGfx.countdownVariant = v; }

extern "C" u8 HudObjGfx_GetCountdownVariant(void) { return sHudObjGfx.countdownVariant; }

extern "C" void HudObjGfx_LoadLinkIcon(u32 a) { sHudObjGfx.loadLinkIcon(a); }

extern "C" void HudObjGfx_LoadSlideIcon(u32 a) { sHudObjGfx.loadSlideIcon(a); }

extern "C" void HudObjGfx_FlushCameraButton(void) {
    HudObjGfx *p = &sHudObjGfx;
    if (sHudObjGfx.pendingCameraButtonScreens != 3) {
        _ZN11HudObjGfxIo23uploadCameraButtonCharsEi(p, p->pendingCameraButtonScreens);
        p->pendingCameraButtonScreens = 3;
    }
}

extern "C" s32 Hud_GetSceneHudKind(void) { return sSceneHudKinds[Scene_GetCurrent()]; }

extern "C" u8 HudObjGfx_IsMsgUiActive(void) { return sHudObjGfx.msgUiActive; }

extern "C" void HudObjGfx_SetMsgUiActive(void) { sHudObjGfx.msgUiActive = 1; }

extern "C" void HudObjGfx_ClearMsgUiActive(void) { sHudObjGfx.msgUiActive = 0; }

void HudObjGfx::loadForScene(u32 a) {
    HudObjGfx *p = &sHudObjGfx;
    HudObjGfx_InitFile(p);
    if (p->loadPalette(4)) _ZN11HudObjGfxIo13uploadPaletteEi(p, a);
    _ZN11HudObjGfxIo11freePaletteEv(p);
    if (p->loadChars()) _ZN11HudObjGfxIo11uploadCharsEi(p, a);
    _ZN11HudObjGfxIo9freeCharsEv(p);
    if (Hud_GetSceneHudKind() == 2) {
        if (InputMode_IsTouch()) loadCameraButton(1, 0, a);
    }
}

void HudObjGfx::loadKind(u32 a, u32 b) {
    HudObjGfx *p = &sHudObjGfx;
    HudObjGfx_InitFile(p);
    if (p->loadPalette(a)) _ZN11HudObjGfxIo13uploadPaletteEi(p, b);
    _ZN11HudObjGfxIo11freePaletteEv(p);
    if (_ZN11HudObjGfxIo13loadKindCharsEi(p, a)) _ZN11HudObjGfxIo15uploadKindCharsEi(p, b);
    _ZN11HudObjGfxIo16releaseKindCharsEv(p);
    if (a == 2 || (a == 4 && Hud_GetSceneHudKind() == 2)) {
        if (InputMode_IsTouch()) loadCameraButton(1, 0, b);
    }
}

void HudObjGfx::loadCameraButton(u32 a, u32 b, u32 c) {
    s32 r;
    HudObjGfx_InitFile(&sHudObjGfx);
    r = _ZN11HudObjGfxIo21loadCameraButtonCharsEi(&sHudObjGfx, a);
    if (b != 0) {
        pendingCameraButtonScreens = c;
    } else if (r != 0) {
        _ZN11HudObjGfxIo23uploadCameraButtonCharsEi(&sHudObjGfx, c);
    }
}

void HudObjGfx::loadLinkIcon(u32 v) {
    HudObjGfx *p = &sHudObjGfx;
    HudObjGfx_InitFile(p);
    if (_ZN11HudObjGfxIo17loadLinkIconCharsEi(p, v)) _ZN11HudObjGfxIo19uploadLinkIconCharsEv(p);
    _ZN11HudObjGfxIo20releaseLinkIconCharsEv(this);
}

void HudObjGfx::loadSlideIcon(u32 v) {
    HudObjGfx *p = &sHudObjGfx;
    HudObjGfx_InitFile(p);
    if (_ZN11HudObjGfxIo18loadSlideIconCharsEi(p, v)) _ZN11HudObjGfxIo20uploadSlideIconCharsEv(p);
    _ZN11HudObjGfxIo21releaseSlideIconCharsEv(this);
}

extern "C" void HudObjGfx_InitFile(void *p) { FS_InitFile(p); }
