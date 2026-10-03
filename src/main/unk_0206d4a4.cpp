#include "types.h"

extern u32 OVERLAY_1_ID[];
extern u32 OVERLAY_65_ID[];

extern "C" {
extern u8 data_021fccfc[];
extern u8 gOverlayHandle[];
extern u8 sFatalEntered;
u32 OS_DisableInterrupts(void);
void func_01ffa3c0(void);
void OS_RestoreInterrupts(u32 v);
void OS_DisableIrqMask(s32 v);
void OS_ResetRequestIrqMask(s32 v);
void OverlayHandle_Load(void *p, s32 v);
void OverlayHandle_Unload(void *p);
void func_ov065_02277ba4(void *(*alloc)(u32, void *, u32), void (*free)(u32, void *));
void OverlayMgr_Acquire(u32 id);
void OverlayMgr_Release(u32 id);
void *Mem_AllocAligned(u32 size, u32 align);
void Mem_Free(void *p);
void func_ov001_0220cb30(void *p, s32 a, s32 b);
s32 PXI_SendWordByFifo(s32 a, s32 b, s32 c);
void WaitByLoop(s32 n);
void Fatal_ExceptionCallback(void *arg, void *p);
void Random_SetSeed(void *st, u32 v);
}

// 4-byte colour constants (constructed by __sinit)
struct Unk_021cb3c4_Col {
    u8 r, g, b, a;
    Unk_021cb3c4_Col(u8 r_, u8 g_, u8 b_, u8 a_) : r(r_), g(g_), b(b_), a(a_) {}
};

// 4-byte object seeded with Random_SetSeed(this, 1); its destructor is the empty func_02060b98 (alias)
class Random {
public:
    Random() { Random_SetSeed(this, 1); }
    ~Random();
    u32 unk_00;
};

extern "C" void *Main_DwcAlloc(u32 a, void *p, u32 n);
extern "C" void Main_DwcFree(u32 a, void *p);
extern "C" void Main_RunWifiUtility(void);
extern "C" void func_0206d4e8(s32 a, s32 b);
extern "C" void Fatal_Handler(void *arg);

extern "C" void *Main_DwcAlloc(u32 a, void *p, u32 n) {
    return Mem_AllocAligned((u32)p, n);
}

extern "C" void Main_DwcFree(u32 a, void *p) {
    Mem_Free(p);
}

extern "C" void Main_RunWifiUtility(void) {
    u32 ime = OS_DisableInterrupts();
    volatile u16 *reg = (volatile u16 *)0x4000208;
    u16 old = *reg;
    *reg = 0;
    OS_DisableIrqMask(7);
    OS_ResetRequestIrqMask(7);
    OverlayHandle_Load(gOverlayHandle, (s32)OVERLAY_65_ID);
    func_ov065_02277ba4(Main_DwcAlloc, Main_DwcFree);
    OverlayMgr_Acquire((u32)OVERLAY_1_ID);
    void *p = Mem_AllocAligned(0x40000, 0x20);
    func_ov001_0220cb30(p, 1, 0x20);
    Mem_Free(p);
    OverlayMgr_Release((u32)OVERLAY_1_ID);
    OverlayHandle_Unload(gOverlayHandle);
    *reg;
    *reg = old;
    OS_RestoreInterrupts(ime);
}

extern "C" void func_0206d4e8(s32 a, s32 b) {
    while (PXI_SendWordByFifo(0xe, a, 0) != 0) {
        WaitByLoop(b);
    }
}

extern "C" void Fatal_Handler(void *arg) {
    OS_DisableInterrupts();
    func_0206d4e8(1, 1);
    if (sFatalEntered == 0) {
        sFatalEntered = 1;
        Fatal_ExceptionCallback(arg, data_021fccfc);
    }
    while (sFatalEntered != 0) {
        OS_DisableInterrupts();
        func_01ffa3c0();
    }
}

Unk_021cb3c4_Col data_021cb3d8(31, 20, 20, 31);
u8 sFatalEntered;
Unk_021cb3c4_Col data_021cb3e0(20, 20, 31, 31);
s32 sVBlankCount;
Unk_021cb3c4_Col data_021cb3c8(31, 31, 20, 31);
u32 gFrameWaitQueue[2];
Unk_021cb3c4_Col data_021cb3c4(20, 31, 20, 31);
Unk_021cb3c4_Col data_021cb3cc(20, 31, 31, 31);
Unk_021cb3c4_Col data_021cb3d0(20, 24, 24, 31);
u32 gVBlankQueue[2];
Random data_021cb3d4;
u8 sVBlankReady;
u16 gMainWaitingFrame;
