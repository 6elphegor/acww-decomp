#include "types.h"

extern "C" {
extern volatile u32 gGfxMainOnTop;
void Oam_FlushBuffers();
void Oam_LoadBuffers();
void ScreenTransition_VBlank();
void Gfx3d_ApplyClearColor();
void Gfx2d_ApplyDisplayControl();
void Gfx2d_FlushRegisters();
void ScreenTransition_Update();
void Oam_ResetBuffers();
void Gfx3d_BeginFrame();
void Gfx2d_BeginFrame();
void Gfx2d_ResetState();
void Gfx3d_InitEngine();
void Gfx_InitNop();
void ScreenTransition_Init();
void GX_SetBankForLCDC(s32);
void Gfx3d_Init();
void Gfx2d_LoadBackdropColor();
void VramQueue2d_Init();
void VramQueueTex_Init();
void GX_DisableBankForLCDC();
void MIi_CpuClearFast(u32, void *, u32);
void Gfx_ResetScene();
}

struct Unk_020536dc_Obj {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
};

extern "C" {
struct Unk_02053830_Obj {
    u8 pad[0x1ac];
    u32 f1ac;
    u32 f1b0;
};
}

extern "C" {
Unk_020536dc_Obj *gGfxFrameHooks;
}

extern "C" void ThreeLayerAnimModel_ClearLayer3Mask(Unk_02053830_Obj *o)
{
    o->f1b0 = 0;
    o->f1ac = o->f1b0;
}

extern "C" void Gfx_Init()
{
    volatile u32 b, a, c;
    Gfx_InitNop();
    Gfx_ResetScene();
    ScreenTransition_Init();
    u16 *p = (u16 *)0x4000304;
    *p = (*p & 0xfffffdf1) | 0x20e;
    GX_SetBankForLCDC(0x1f7);
    a = 0;
    MIi_CpuClearFast(a, (void *)0x6800000, 0x84000);
    GX_DisableBankForLCDC();
    b = 0xc0;
    MIi_CpuClearFast(b, (void *)0x7000000, 0x400);
    c = 0;
    MIi_CpuClearFast(c, (void *)0x5000000, 0x400);
    Gfx3d_Init();
    Gfx2d_LoadBackdropColor();
    VramQueue2d_Init();
    VramQueueTex_Init();
}

extern "C" void Gfx_ResetScene()
{
    gGfxFrameHooks = 0;
    gGfxMainOnTop = 0;
    Gfx2d_ResetState();
    Gfx3d_InitEngine();
}

extern "C" void GfxFrameHooks_PreTaskStub()
{
}

extern "C" void Gfx_PreTaskUpdate()
{
    Oam_ResetBuffers();
    if (gGfxFrameHooks) {
        gGfxFrameHooks->vfunc_00();
    }
    Gfx3d_BeginFrame();
    Gfx2d_BeginFrame();
}

extern "C" void GfxFrameHooks_PostTaskStub()
{
}

extern "C" void Gfx_PostTaskUpdate()
{
    if (gGfxFrameHooks) {
        gGfxFrameHooks->vfunc_04();
    }
    ScreenTransition_Update();
}

extern "C" void Gfx_VBlankFlush()
{
    u32 v = gGfxMainOnTop;
    u16 *p = (u16 *)0x4000304;
    *p = (*p & 0xffff7fff) | (v << 15);
    Oam_FlushBuffers();
    Oam_LoadBuffers();
    ScreenTransition_VBlank();
    Gfx3d_ApplyClearColor();
    Gfx2d_ApplyDisplayControl();
    if (gGfxFrameHooks) {
        gGfxFrameHooks->vfunc_08();
    }
    Gfx2d_FlushRegisters();
}
