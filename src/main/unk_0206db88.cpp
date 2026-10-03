// mwcc-flags: -str reuse
#include "types.h"

class BgVramTaskPair {
public:
    BOOL requestCharsAndPalette(u32 a, u8 b, u32 c, u32 d, u32 e, u32 f, u8 g);
};

extern "C" {
extern u8 gMelodyPlayer[];
extern u8 data_021ed2f8[];
extern u8 gMelodyEditPattern[];
extern s32 sMelodyTimer;
extern s32 gGfxMainOnTop;
extern u8 data_020e416c;
extern u8 gCurrentHeap[];
extern u8 sMenuWipeEdge[24];
extern u8 sMenuWipeLine;

u8 *Snd_MelodyGetDefaultPattern(void *);
u8 *Snd_MelodyApplyRandomPattern(void *);
void Snd_MelodyPlayRandom(void *, u32);
BOOL Snd_MelodyIsPlaying(void *);
void Snd_MelodyPlayNote(void *, u32);
void Snd_MelodyStartTrackA(void *);
void Snd_MelodyPlay(void *, u32);
void Snd_MelodyPlayAt(void *, u32, u32);
void Snd_MelodyPlayPattern(void *, u32, void *);
void Snd_MelodySetPattern(void *, void *);
s64 func_02133540(u32, u32, u32);
void *func_020f5b84(void *);
void Gfx2d_DisableMainWindows(u32);
void Gfx2d_ResetLayer(u32);
void func_0206ed74();
void Gfx2d_EnableMainWindows(u32);
void Gfx2d_SetMainWin1Planes(u32);
void Gfx2d_SetMainWinOutPlanes(u32);
void Gfx2d_HideMainPlanes(u32);
BOOL Camera_RestorePrevMode();
void Gfx2d_SetLayerPriority(u32, u32);
void func_0206ed98();
void Gfx2d_ShowLayer(u32);
void func_02011940();
void Sky_SetEngine(u32);
void func_0206ef68();
void func_0203d4c4(u32);
s32 func_01ffcb0c(s32, s32);
void func_0206ee00(s32);
BOOL Camera_IsViewPushed();
void Camera_PopView();
void func_0203d4c8(u32);
void Sky_Disable();
void Gfx2d_SetMainBgModeState(u32);
void Gfx2d_HideSubPlanes(u32);
void func_0206ef5c();
BOOL Camera_SetMode1();
void func_0206eda4();
void Gfx2d_SetMainWin1Rect(s32, s32, s32, s32);
BOOL func_0203d4d4();
void func_0206ed80();
u32 PlayerData_GetCurrent();
u16 *_ZN12Unk_02097ff413func_020983ccEv();
void *Heap_AllocTail(void *, u32);
void Heap_Free(void *, void *);
void func_0203c764(void *, void *, u32);
void *func_0203c6d0(void *);
void *func_0203c6e4(void *);
s32 _ZN12Unk_02097ff413func_020983c0EPt(u32 a, u16 *p);
s32 Gfx2d_LoadPaletteRange(void *, u32, u32, u32, u32);
void Gfx2d_LinearToTiles4bppBytes(void *, void *, u32, u32);
s32 Gfx2d_LoadCharRange(void *, u32, u32, u32, u32);
s32 Gfx2d_LoadScreenFile(const char *, void *, u32);
void func_020639e8(char *, const void *, ...);
s32 Gfx2d_LoadPaletteFile(void *, void *, u32, u32, u32, u32);
s32 Gfx2d_LoadCharFile(void *, void *, u32, u32, u32, u32);
void Gfx2d_SetLayerControl(u32, u32, u32, u32);
BOOL HBlank_Add(void *, void (*)(void), void (*)(void), s32);
void HBlank_Remove(void *);
void MenuScreen_WipeHBlank(void);
s32 Gfx2d_SetLayerOffset(u32, u32, u32);

BOOL MenuScreen_StepAct00();
BOOL MenuScreen_StepAct01();
BOOL MenuScreen_StepAct02();
BOOL MenuScreen_StepAct03();
BOOL MenuScreen_StepAct04();
BOOL MenuScreen_StepAct05();
BOOL MenuScreen_StepAct06();
BOOL MenuScreen_StepNop();
BOOL MenuScreen_StepAct08();
BOOL MenuScreen_StepAct09();
BOOL MenuScreen_StepAct0A();
BOOL MenuScreen_StepAct0B();

void MenuScreen_WipeOutVBlank(void);
void MenuScreen_WipeInVBlank(void);
BOOL MenuScreen_IsWiping();
void MenuScreen_StartWipeOut();
void MenuScreen_StartWipeIn();
void MenuScreen_StopWipe();
void MenuScreen_SetupSubBg();
void MenuScreen_SetupMainBg();
void MenuScreen_ClearState();
BOOL MenuScreen_LoadBackground(u32);
BOOL MenuScreen_LoadStdBackground(u32);
BOOL MenuScreen_HasFlags(u32);
void func_0206dbac(u32);
void func_0206dbbc(u32);
void Gfx_LightenPalette16(u16 *, u16 *);
}

// 4-byte bss slots accessed as u8/u16/s16
union Slot8 { u8 v; u32 pad; };
union Slot16 { u16 v; u32 pad; };
union SlotS16 { s16 v; u32 pad; };

Slot8 data_021cb460;
s32 data_021cb47c;
s32 data_021cb478;
Slot16 sMenuScreenState;
SlotS16 sMenuWipePos;
Slot16 data_021cb46c;
Slot8 data_021cb468;
Slot8 data_021cb464;
u32 sMenuWipeHBlankTask[7];

BOOL (*sMenuScreenSteps[])() = {
    MenuScreen_StepAct00, MenuScreen_StepAct01, MenuScreen_StepAct02, MenuScreen_StepAct03, MenuScreen_StepAct04,
    MenuScreen_StepAct05, MenuScreen_StepAct06, MenuScreen_StepNop, MenuScreen_StepAct08, MenuScreen_StepAct09,
    MenuScreen_StepAct0A, MenuScreen_StepAct0B, MenuScreen_StepNop,
};

static inline BOOL Unk_0206dc9c_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

extern "C" void MenuScreen_WipeInVBlank(void) {
    s32 i, b, t;
    if (sMenuWipePos.v > 20) {
        sMenuWipePos.v -= 20;
    } else {
        HBlank_Remove(sMenuWipeHBlankTask);
        data_021cb468.v &= ~1;
        Gfx2d_SetMainWin1Rect(0, 0, 255, 192);
        *(volatile u16 *)0x4000042 = 0xff;
        sMenuWipePos.v = 0;
    }
    i = 0;
    b = sMenuWipePos.v;
    for (; i < 24; i++) {
        t = b - i;
        if (t < 0) {
            sMenuWipeEdge[i] = 0;
        } else if (t > 0xfe) {
            sMenuWipeEdge[i] = 0xfe;
        } else {
            sMenuWipeEdge[i] = t;
        }
    }
    *(volatile u16 *)0x4000042 = ((sMenuWipeEdge[0] << 8) & 0xff00) | 0xff;
}

extern "C" void MenuScreen_WipeOutVBlank(void) {
    s32 i, b, t;
    if (sMenuWipePos.v < 0x103) {
        sMenuWipePos.v += 20;
    } else {
        HBlank_Remove(sMenuWipeHBlankTask);
        data_021cb468.v &= ~1;
        sMenuWipePos.v = 0xfe;
        *(volatile u16 *)0x4000042 = 0xfeff;
    }
    i = 0;
    b = sMenuWipePos.v;
    for (; i < 24; i++) {
        t = b - i;
        if (t < 0) {
            sMenuWipeEdge[i] = 0;
        } else if (t > 0xfe) {
            sMenuWipeEdge[i] = 0xfe;
        } else {
            sMenuWipeEdge[i] = t;
        }
    }
}

extern "C" void MenuScreen_StopWipe(void) {
    if (data_021cb468.v & 1) {
        HBlank_Remove(sMenuWipeHBlankTask);
        data_021cb468.v &= ~1;
    }
}

extern "C" void MenuScreen_StartWipeIn(void) {
    s32 i;
    sMenuWipePos.v = 0x117;
    if (HBlank_Add(sMenuWipeHBlankTask, MenuScreen_WipeHBlank, (void (*)(void))MenuScreen_WipeInVBlank, 0)) {
        data_021cb468.v |= 1;
    }
    for (i = 0; i < 24; i++) {
        sMenuWipeEdge[i] = 0xfe;
    }
    Gfx2d_SetMainWin1Rect(sMenuWipePos.v, 0, 255, 192);
    sMenuWipeLine = 0;
}

extern "C" void MenuScreen_StartWipeOut(void) {
    s32 i;
    sMenuWipePos.v = 0;
    if (HBlank_Add(sMenuWipeHBlankTask, MenuScreen_WipeHBlank, (void (*)(void))MenuScreen_WipeOutVBlank, 0)) {
        data_021cb468.v |= 1;
    }
    for (i = 0; i < 24; i++) {
        sMenuWipeEdge[i] = 0;
    }
    Gfx2d_SetMainWin1Rect(1, 0, 255, 192);
    sMenuWipeLine = 0;
}

extern "C" BOOL MenuScreen_IsWiping(void) {
    if (data_021cb468.v & 1) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL MenuScreen_IsOpen(void) {
    if ((u16)(sMenuScreenState.v + 0xfffb) <= 2) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL MenuScreen_IsClosed(void) {
    if (sMenuScreenState.v == 12) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void MenuScreen_UploadClothPattern(u16 *p, BgVramTaskPair *x, u8 *img, u16 *pal) {
    u32 r = PlayerData_GetCurrent();
    BOOL in1 = FALSE;
    u32 v = *p;
    if (v >= 0x11a8 && v <= 0x12a7) in1 = TRUE;
    if (in1 || (v >= 0x12a8 && v <= 0x12af)) {
        void *heap = *(void **)gCurrentHeap;
        void *o = Heap_AllocTail(heap, 0x2c4);
        if (o != NULL) {
            func_0203c764(o, p, r);
            Gfx_LightenPalette16((u16 *)func_0203c6d0(o), pal);
            Gfx2d_LinearToTiles4bppBytes(func_0203c6e4(o), img, 4, 4);
            Heap_Free(heap, o);
            if (x->requestCharsAndPalette((u32)img, 5, 0, 0, 0xf, (u32)pal, 0) != 0) {
                _ZN12Unk_02097ff413func_020983c0EPt(r, p);
            }
        }
    }
}

extern "C" void MenuScreen_SetupMainBg() {
    Gfx2d_SetLayerPriority(1, 1);
    Gfx2d_SetLayerControl(1, 0, 0, 0);
}

extern "C" void MenuScreen_SetupSubBg() {
    Gfx2d_SetLayerPriority(5, 3);
    Gfx2d_SetLayerControl(5, 0, 0, 0);
}

extern "C" BOOL MenuScreen_LoadStdBackground(u32 arg) {
    char buf[0x24];
    void *heap = *(void **)gCurrentHeap;
    if (!Gfx2d_LoadScreenFile("menu/inventory/b_itm_back.bsc", heap, arg)) {
        return FALSE;
    }
    func_020639e8(buf, "menu/bas/b_bas_%d.bpl", data_021cb464.v);
    if (!Gfx2d_LoadPaletteFile(buf, heap, arg, 0, 0, 0)) {
        return FALSE;
    }
    func_020639e8(buf, "menu/bas/b_bas_%d.bch", data_021cb464.v);
    Gfx2d_LoadCharFile(buf, heap, arg, 0, 0, 0xf);
    return TRUE;
}

extern "C" BOOL MenuScreen_LoadBackground(u32 arg) {
    if (data_021cb464.v != 4) {
        return MenuScreen_LoadStdBackground(arg);
    }
    BOOL ok;
    void *heap = *(void **)gCurrentHeap;
    s32 r = PlayerData_GetCurrent();
    u16 tmp = *_ZN12Unk_02097ff413func_020983ccEv();
    void *a = Heap_AllocTail(heap, 0x200);
    if (a == NULL) {
        return FALSE;
    }
    void *b = Heap_AllocTail(heap, 0x20);
    if (b == NULL) {
        Heap_Free(heap, a);
        return FALSE;
    }
    void *c = Heap_AllocTail(heap, 0x2c4);
    if (c == NULL) {
        Heap_Free(heap, a);
        Heap_Free(heap, b);
        return FALSE;
    }
    func_0203c764(c, &tmp, r);
    Gfx_LightenPalette16((u16 *)func_0203c6d0(c), (u16 *)b);
    ok = Gfx2d_LoadPaletteRange(b, arg, 0, 0, 0);
    Gfx2d_LinearToTiles4bppBytes(func_0203c6e4(c), a, 4, 4);
    ok &= Gfx2d_LoadCharRange(a, arg, 0, 0, 0xf);
    Heap_Free(heap, a);
    Heap_Free(heap, b);
    Heap_Free(heap, c);
    ok &= Gfx2d_LoadScreenFile("menu/inventory/b_itm_back.bsc", heap, arg);
    return ok;
}

extern "C" void MenuScreen_BeginClose() {
    sMenuScreenState.v = 8;
    func_0206ed80();
}

extern "C" void MenuScreen_BeginOpen() {
    MenuScreen_SetupMainBg();
    sMenuScreenState.v = 1;
    data_021cb464.v = 4;
    func_0206ed80();
}

extern "C" void func_0206e03c() { func_0206dbac(1); }

extern "C" void MenuScreen_ClearState() {
    data_021cb46c.v = 0;
    sMenuScreenState.v = 0;
    sMenuWipePos.v = 0;
}

extern "C" void MenuScreen_Reset() {
    if (!func_0203d4d4()) {
        Gfx2d_ResetLayer(1);
        Gfx2d_ResetLayer(5);
    }
    Gfx2d_DisableMainWindows(2);
    gGfxMainOnTop = 0;
    func_0206ed74();
    MenuScreen_ClearState();
    MenuScreen_StopWipe();
}// Declarations for data defined further down (definition order sets the data layout)




extern "C" void MenuScreen_Update() {
    if (sMenuScreenSteps[sMenuScreenState.v]()) {
        data_021cb46c.v = (data_021cb46c.v + 1) & 0x1ff;
        u16 s = sMenuScreenState.v;
        if (s == 2 || s == 4 || (u16)(s + 0xfff6) <= 1) {
            Gfx2d_SetLayerOffset(1, data_021cb46c.v, data_021cb46c.v);
        } else {
            Gfx2d_SetLayerOffset(5, data_021cb46c.v, data_021cb46c.v);
        }
    }
}

extern "C" BOOL MenuScreen_StepAct00() { return FALSE; }

extern "C" BOOL MenuScreen_StepNop() { return TRUE; }

extern "C" BOOL MenuScreen_StepAct01() {
    if (MenuScreen_LoadBackground(1)) {
        sMenuScreenState.v = 2;
        Gfx2d_ShowLayer(1);
        Gfx2d_EnableMainWindows(2);
        Gfx2d_SetMainWin1Planes(0x1f);
        Gfx2d_SetMainWinOutPlanes(0x1b);
        MenuScreen_StartWipeIn();
        return MenuScreen_StepAct02();
    }
    return TRUE;
}

extern "C" BOOL MenuScreen_StepAct02() {
    if (!MenuScreen_IsWiping()) {
        Gfx2d_SetMainWin1Rect(1, 0, 0xff, 0xc0);
        sMenuScreenState.v = 3;
        MenuScreen_SetupSubBg();
    }
    return TRUE;
}

extern "C" BOOL MenuScreen_StepAct03() {
    if (Camera_SetMode1()) {
        func_0206eda4();
        func_0206ee00(0);
        data_021cb47c = 0x1000;
        data_021cb478 = 0x200;
        sMenuScreenState.v = 4;
    }
    return TRUE;
}

extern "C" BOOL MenuScreen_StepAct04() {
    if (MenuScreen_LoadBackground(5)) {
        Gfx2d_DisableMainWindows(2);
        Gfx2d_HideSubPlanes(0xf);
        Gfx2d_ShowLayer(5);
        gGfxMainOnTop = 1;
        func_0206ed74();
        func_0206ef5c();
        Gfx2d_ResetLayer(1);
        sMenuScreenState.v = 5;
        if (Unk_0206dc9c_IsZero(data_020e416c)) {
            Sky_SetEngine(1);
        }
    }
    return TRUE;
}

extern "C" BOOL MenuScreen_StepAct05() {
    if (data_021cb47c == 0) {
        sMenuScreenState.v = 6;
        if (Unk_0206dc9c_IsZero(data_020e416c)) {
            Sky_Disable();
        }
        Gfx2d_SetMainBgModeState(0);
        return TRUE;
    }
    if (data_021cb47c > data_021cb478) {
        data_021cb47c -= data_021cb478;
    } else {
        data_021cb47c = 0;
    }
    func_0206ee00(0x1000 - func_01ffcb0c(data_021cb47c, data_021cb47c));
    return TRUE;
}

extern "C" BOOL MenuScreen_StepAct06() {
    Gfx2d_DisableMainWindows(1);
    Gfx2d_DisableMainWindows(2);
    Gfx2d_HideMainPlanes(0xe);
    sMenuScreenState.v = 7;
    return TRUE;
}

extern "C" BOOL MenuScreen_StepAct08() {
    if (Camera_IsViewPushed()) {
        Camera_PopView();
    }
    if (Unk_0206dc9c_IsZero(data_020e416c)) {
        func_0203d4c8(0);
        Sky_SetEngine(1);
        Gfx2d_HideMainPlanes(8);
    }
    sMenuScreenState.v = 9;
    data_021cb47c = 0x1000;
    data_021cb478 = 0x200;
    func_0206dbbc(1);
    return TRUE;
}

extern "C" BOOL MenuScreen_StepAct09() {
    if (data_021cb47c == 0) {
        if (!MenuScreen_HasFlags(1)) {
            Gfx2d_SetLayerPriority(5, 1);
            MenuScreen_LoadBackground(1);
            func_0206ed98();
            sMenuScreenState.v = 10;
            gGfxMainOnTop = 0;
            Gfx2d_HideMainPlanes(0xe);
            Gfx2d_ShowLayer(1);
            Gfx2d_ResetLayer(5);
            func_02011940();
            if (Unk_0206dc9c_IsZero(data_020e416c)) {
                Sky_SetEngine(0);
            }
            func_0206ef68();
            func_0203d4c4(0);
        }
    }
    if (data_021cb47c > data_021cb478) {
        data_021cb47c -= data_021cb478;
    } else {
        data_021cb47c = 0;
    }
    func_0206ee00(func_01ffcb0c(data_021cb47c, data_021cb47c));
    return TRUE;
}

extern "C" BOOL MenuScreen_StepAct0A() {
    Gfx2d_EnableMainWindows(2);
    Gfx2d_DisableMainWindows(1);
    Gfx2d_SetMainWin1Planes(0x1f);
    Gfx2d_SetMainWinOutPlanes(0x1b);
    Gfx2d_HideMainPlanes(10);
    MenuScreen_StartWipeOut();
    if (Camera_RestorePrevMode()) {
        sMenuScreenState.v = 0xb;
    }
    return TRUE;
}

extern "C" BOOL MenuScreen_StepAct0B() {
    if (!MenuScreen_IsWiping()) {
        sMenuScreenState.v = 0xc;
        Gfx2d_DisableMainWindows(2);
        Gfx2d_ResetLayer(1);
        func_0206ed74();
    }
    return TRUE;
}

extern "C" void Gfx_LightenPalette16(u16 *src, u16 *dst) {
    s32 i;
    src[0] = 0;
    for (i = 1; i < 16; i++) {
        u16 v = src[i];
        u16 r = v & 0x1f;
        u16 g = (v & 0x3e0) >> 5;
        u16 b = (v & 0x7c00) >> 10;
        r = (r + 0x1f) >> 1;
        g = (g + 0x1f) >> 1;
        b = (b + 0x1f) >> 1;
        dst[i] = r | (g << 5) | (b << 10);
    }
}

extern "C" void func_0206dbbc(u32 a) { data_021cb460.v |= a; }

extern "C" void func_0206dbac(u32 a) { data_021cb460.v &= ~a; }

extern "C" BOOL MenuScreen_HasFlags(u32 a) {
    if (a == (a & data_021cb460.v)) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_0206db88(u32 a) { data_021cb464.v = a; }






