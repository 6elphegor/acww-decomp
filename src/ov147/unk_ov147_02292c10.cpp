// ov147 second translation unit (0x02292c10..0x022930bc): the object at scene+0xac and its helpers.
#include "types.h"

extern "C" {
extern s16 data_02135f44[];

void G2x_SetBlendAlpha_(u32 a, s32 b, s32 c, s32 d, s32 e);
s32 _s32_div_f(s32 a, s32 b);
s32 Gfx2d_HideMainPlanes(s32 a);
u32 Gfx2d_GetMainPlanes(s32 a);
void Gfx2d_ShowMainPlanes(s32 a);
void Gfx2d_SetMainBg3Offset(s32 a, s32 b);
void DC_FlushRange(void *p, u32 size);
void GX_LoadBG3Scr(void *p, u32 a, u32 size);
void GX_LoadBGPltt(void *p, u32 a, u32 size);
void GX_LoadBG3Char(void *p, u32 a, u32 size);
void FS_OpenFile();
void FS_ReadFile(void *a, void *b, u32 size);
void FS_CloseFile(void *a);
void FS_InitFile(void *a);
void *Mem_AllocTail(u32 size);
s32 Mem_Free(void *p);
void TitleBlinkText_SetupBg3();
void TitleBlinkText_LoadGraphics(s32 a);
void TitleBlinkText_HideBg3();
void TitleBlinkText_ShowBg3();
void TitleBlinkText_ReadScreen(void *a, void *b, void *c);
void TitleBlinkText_ReadPalette(void *a, void *b, void *c);
void TitleBlinkText_ReadChars(void *a, void *b, void *c);
void TitleBlinkText_UploadScreen(void *p);
void TitleBlinkText_UploadPalette(void *p);
void TitleBlinkText_UploadChars(void *p);
void *TitleBlinkText_Alloc(u32 size);
s32 TitleBlinkText_Free(void *p);
}

class TitleBlinkText {
public:
    TitleBlinkText();
    virtual ~TitleBlinkText();
    s32 state;
    s32 variant;
    s32 requestedVariant;
    s32 alpha;
    s32 holdCount;
    s32 showDelay;
    u8 fadingOut;

    void updateShown();
    void show();
    void updateDelay();
    void startDelay();
    void updateIdle();
    void setIdle();
    void clearBlend();
    void applyBlendAlpha();
    BOOL stepBlink();
    void resetBlink();
    BOOL isHidden();
    void requestHide();
    void requestVariant(s32 v);
    void update();
    void shutdown();
    void init();
};

TitleBlinkText::TitleBlinkText() {
}

TitleBlinkText::~TitleBlinkText() {
}

void TitleBlinkText::init() {
    state = 0;
    variant = 2;
    showDelay = 0;
    requestedVariant = 2;
    resetBlink();
    setIdle();
}

void TitleBlinkText::shutdown() {
}

void TitleBlinkText::update() {
    typedef void (TitleBlinkText::*Fn)();
    static Fn tbl[3] = { &TitleBlinkText::updateIdle, &TitleBlinkText::updateDelay, &TitleBlinkText::updateShown };
    (this->*tbl[state])();
}

void TitleBlinkText::requestVariant(s32 v) {
    requestedVariant = v;
}

void TitleBlinkText::requestHide() {
    requestedVariant = 2;
}

BOOL TitleBlinkText::isHidden() {
    if (variant == 2 && state == 0) {
        return TRUE;
    }
    return FALSE;
}

void TitleBlinkText::resetBlink() {
    s32 z = 0;
    alpha = z;
    holdCount = z;
    fadingOut = z;
}

BOOL TitleBlinkText::stepBlink() {
    BOOL same = (requestedVariant == 2) ? TRUE : FALSE;
    if (same) {
        fadingOut = 1;
        holdCount = 0;
    }
    if (fadingOut) {
        alpha = alpha - 1;
        if (alpha <= 0) {
            fadingOut = 0;
        }
    } else {
        alpha = alpha + 1;
        if (alpha >= 10) {
            alpha = 10;
            holdCount = holdCount + 1;
            if (holdCount > 5) {
                fadingOut = 1;
                holdCount = 0;
            }
        }
    }
    BOOL r0 = FALSE;
    if (alpha > 0) {
    } else if (same) {
        r0 = TRUE;
    } else if (variant != requestedVariant) {
        r0 = TRUE;
    }
    return r0;
}

extern "C" void *TitleBlinkText_Alloc(u32 size) {
    return Mem_AllocTail(size);
}

extern "C" s32 TitleBlinkText_Free(void *p) {
    if (p) {
        Mem_Free(p);
    }
}

extern "C" void TitleBlinkText_LoadGraphics(s32 idx) {
    char ncg[28] = "/a_mes/a_mes_ttl_bg_ncg.bin";
    const char *paths[2] = { "/a_mes/a_mes_ttl_a0_bg_nsc.bin", "/a_mes/a_mes_ttl_b0_bg_nsc.bin" };
    char ncl[28] = "/a_mes/a_mes_ttl_bg_ncl.bin";
    u32 file[19];
    void *m;
    FS_InitFile(file);
    m = TitleBlinkText_Alloc(0x9e0);
    if (m) {
        TitleBlinkText_ReadChars(file, ncg, m);
        TitleBlinkText_UploadChars(m);
        TitleBlinkText_Free(m);
    }
    m = TitleBlinkText_Alloc(0x20);
    if (m) {
        TitleBlinkText_ReadPalette(file, ncl, m);
        TitleBlinkText_UploadPalette(m);
        TitleBlinkText_Free(m);
    }
    m = TitleBlinkText_Alloc(0x800);
    if (m) {
        TitleBlinkText_ReadScreen(file, (void *)paths[idx], m);
        TitleBlinkText_UploadScreen(m);
        TitleBlinkText_Free(m);
    }
}

extern "C" void TitleBlinkText_ReadChars(void *a, void *b, void *c) {
    FS_OpenFile();
    FS_ReadFile(a, c, 0x9e0);
    FS_CloseFile(a);
}

extern "C" void TitleBlinkText_ReadPalette(void *a, void *b, void *c) {
    FS_OpenFile();
    FS_ReadFile(a, c, 0x20);
    FS_CloseFile(a);
}

extern "C" void TitleBlinkText_ReadScreen(void *a, void *b, void *c) {
    FS_OpenFile();
    FS_ReadFile(a, c, 0x800);
    FS_CloseFile(a);
}

extern "C" void TitleBlinkText_UploadChars(void *p) {
    DC_FlushRange(p, 0x9e0);
    GX_LoadBG3Char(p, 0, 0x9e0);
}

extern "C" void TitleBlinkText_UploadPalette(void *p) {
    DC_FlushRange(p, 0x20);
    GX_LoadBGPltt(p, 0x20, 0x20);
}

extern "C" void TitleBlinkText_UploadScreen(void *p) {
    DC_FlushRange(p, 0x800);
    GX_LoadBG3Scr(p, 0, 0x800);
}

extern "C" void TitleBlinkText_SetupBg3() {
    volatile u16 *r = (volatile u16 *)0x400000e;
    *r = (*r & ~3) | 1;
    *r = (*r & 0x43) | 0x700;
    *r = *r & ~0x40;
    Gfx2d_SetMainBg3Offset(0, 0);
}

extern "C" void TitleBlinkText_ShowBg3() { Gfx2d_ShowMainPlanes(8); }

extern "C" void TitleBlinkText_HideBg3() {
    volatile u32 *r = (volatile u32 *)0x4000000;
    u32 v = Gfx2d_GetMainPlanes(Gfx2d_HideMainPlanes(8));
    *r = (*r & 0xffffe0ff) | (v << 8);
}

void TitleBlinkText::applyBlendAlpha() {
    s32 t = _s32_div_f(alpha << 12, 10);
    s32 a = (s16)(t << 2);
    u32 i = ((u16)a >> 4) * 2;
    s32 v = data_02135f44[i];
    s32 b = (v * 16 + 0x800) >> 12;
    if (b < 0) {
        b = 0;
    } else if (b > 16) {
        b = 16;
    }
    G2x_SetBlendAlpha_(0x4000050, 8, 0x21, b, 16 - b);
}

void TitleBlinkText::clearBlend() { G2x_SetBlendAlpha_(0x4000050, 0, 0x20, 0x10, 0); }

void TitleBlinkText::setIdle() {
    state = 0;
    variant = 2;
}

void TitleBlinkText::updateIdle() {
    s32 t = requestedVariant;
    if (t != 2) {
        variant = t;
        startDelay();
    }
}

void TitleBlinkText::startDelay() {
    state = 1;
    showDelay = 5;
}

void TitleBlinkText::updateDelay() {
    if (variant != requestedVariant) {
        setIdle();
    } else {
        showDelay = showDelay - 1;
        if (showDelay > 0) {
        } else {
            show();
        }
    }
}

void TitleBlinkText::show() {
    state = 2;
    resetBlink();
    TitleBlinkText_SetupBg3();
    TitleBlinkText_LoadGraphics(variant);
    TitleBlinkText_ShowBg3();
    applyBlendAlpha();
}

void TitleBlinkText::updateShown() {
    s32 r = stepBlink();
    applyBlendAlpha();
    if (r != 0) {
        clearBlend();
        TitleBlinkText_HideBg3();
        setIdle();
    }
}

