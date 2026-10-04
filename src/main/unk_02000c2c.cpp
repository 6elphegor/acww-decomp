#include "types.h"
#include "sys/DebugText.h"
#include "sys/ProcBase.h"
#include "sys/QNode.h"
#include "sys/OSThread.h"

typedef volatile u16 vu16;
typedef volatile u32 vu32;







extern "C" {

extern u32 sCrashPC;
extern u32 sCrashScreenMain;
extern u32 sCrashSP;
extern u32 sCrashScreenSub;
extern u32 sPanicFile;
extern u32 gTaskPhase;
extern u32 gRootHeap;
extern u32 gCurrentHeap;
extern u32 gProcHeap;
extern QNode *gTaskCurrentNode;
extern u16 gProcCreateProfile;
extern u8 gProcCreateStep;
extern OSThread *data_021fcc2c[3];
extern u32 data_021fce88;
extern char data_02135f44[];
extern char gBuildTime[];
extern u16 sCrashFontChars[], sCrashFontPalette[];
extern u8 data_021fccfc[];
extern const char sCrashRegNames[55];

// The definition order below gives the original .bss order (inverted heapsort); do not reorder.
u32 sPanicFile;
const char sCrashRegNames[55] = "CPSR00R01R02R03R04R05R06R07R08R09R10R11R12SP LR PC4SPs";
const char *sPanicMessage;
u32 *sCrashContext;
u8 sCrashScreenState;
u32 sCrashSP;
u32 sCrashTimeMs;
u32 sPanicLine;
u32 sCrashPC;
u32 sCrashPrevKeys;
u32 sCrashScreenMain;
u32 sCrashScreenSub;

void OS_InitTick(void);
void OS_InitAlarm(void);
void OS_InitThread(void);
void func_02114cd8(void (*fn)(void), void *p);
void Fatal_ExceptionCallback(void);
void OS_EnableInterrupts(void);
void Main_InitDwc(void);
void Main_RunWifiUtility(void);
void OS_ResetSystem(u32 a);
void Main_Init(void);
s32 Main_Loop(void);

void CrashScreen_Frame(void);
void CrashScreen_Fill(u32 a, u32 b, u32 c);
void CrashScreen_WaitVBlank(void);
void CrashScreen_InitDisplay(void);
void CrashScreen_Clear(void);
void CrashScreen_DrawMain(void);
void CrashScreen_DrawStack(void);
BOOL CrashScreen_IsValidAddress(u32 addr, u32 len);
void CrashScreen_DumpWords(u8 *dst, u32 src, u32 size);
void Fatal_PanicV(const char *a, u32 b, const char *c, void *d);

u64 OS_GetTick(void);
u32 OS_GetProcMode(void);
void OS_DisableInterrupts(void);
void Gfx_ResetDisplayRegs(void);
void GX_SetBankForBG(u32 a);
void GX_SetBankForSubBG(u32 a);
void GX_LoadBG1Char(void *a, u32 b, u32 c);
void GXS_LoadBG1Char(void *a, u32 b, u32 c);
void GX_LoadBGPltt(void *a, u32 b, u32 c);
void GXS_LoadBGPltt(void *a, u32 b, u32 c);
u32 G2_GetBG1ScrPtr(void);
u32 G2S_GetBG1ScrPtr(void);
void GX_DispOn(void);
void MIi_CpuClearFast(u32 a);
void DebugText_Printf(DebugText *c, u8 *dst, const char *fmt, ...);
void DebugText_Print(DebugText *c, u8 *dst, const char *fmt);
u32 Task_GetPhaseName(u32 a);
u32 func_021122b0(void);
u32 func_02113438(OSThread *a);
#define Heap_dump _ZN4Heap4dumpEv
void Heap_dump(u32 a);
void BlockMap_DebugStub(void);
u8 *OS_GetDTCMAddress(void);
void OS_VSNPrintf(const char *a, u32 b, const char *c, void *d);
s32 Fatal_Trap(void);

void Fatal_PanicV(const char *a, u32 b, const char *c, void *d) {
    OS_DisableInterrupts();
    sPanicFile = (u32)a;
    sPanicLine = b;
    sPanicMessage = data_02135f44;
    OS_VSNPrintf(data_02135f44, 0x80, c, d);
    Fatal_Trap();
}

void Fatal_Panic(const char *fmt, ...) {
    u32 *ap = (u32 *)(((u32)&fmt) & ~3) + 1;
    Fatal_PanicV("", 0, fmt, ap);
}

BOOL CrashScreen_IsValidAddress(u32 addr, u32 len) {
    u32 end = addr + len;
    u8 *base = OS_GetDTCMAddress();
    u32 lim2 = (u32)base + 0x4000;
    u32 lim1 = data_021fce88 != 0 ? 0x27e0000 : 0x23ff000;
    if ((addr >= 0x2000000 && end <= lim1) || ((u32)base <= addr && end <= lim2)) {
        return TRUE;
    }
    return FALSE;
}

void CrashScreen_DumpWords(u8 *dst, u32 src, u32 size) {
    u16 color = 0xd000;
    DebugText col;
    u32 *p;
    u32 end;
    col.unk_00 = color;
    col.charBase = color;
    p = (u32 *)(src & ~3);
    size &= ~3;
    end = src + size;
    while ((u32)p < end) {
        if (!CrashScreen_IsValidAddress((u32)p, 4)) {
            break;
        }
        col.charBase = color;
        DebugText_Printf(&col, dst, "%08x", *p);
        dst += 0x10;
        color ^= 0x3000;
        p++;
    }
}

void CrashScreen_DrawStack(void) {
    u8 *buf = (u8 *)sCrashScreenSub;
    DebugText col;
    OSContext *ctx;
    u32 v;
    col.unk_00 = 0xd000;
    col.charBase = 0xd000;
    ctx = (OSContext *)sCrashContext;
    if (ctx != NULL) {
        v = ctx->r[13];
    } else {
        v = sCrashSP;
    }
    DebugText_Printf(&col, buf + 0x40, "SP = %08X", v);
    if (CrashScreen_IsValidAddress(v, 4)) {
        CrashScreen_DumpWords(buf + 0x80, v, 0x160);
    }
}

void CrashScreen_DrawMain(void) {
    u8 *buf = (u8 *)sCrashScreenMain;
    DebugText col;
    u32 n;
    u32 v;
    QNode *pp;
    u32 *p6;
    s32 i;
    u32 *q;
    OSThread *thr;
    OSThread *node;
    u32 r;
    col.unk_00 = 0xd000;
    col.charBase = 0xd000;
    DebugText_Printf(&col, buf + 0x40, "%10ums", sCrashTimeMs);
    DebugText_Print(&col, buf, gBuildTime);
    n = gTaskPhase;
    if (n != 0 && (s32)n < 6) {
        DebugText_Printf(&col, buf + 0x180, "LoopProc %1u:%s", n, Task_GetPhaseName(n));
    }
    v = 0xffff;
    pp = gTaskCurrentNode;
    if (pp != NULL) {
        ProcBase *cfg = (ProcBase *)pp->owner;
        if (cfg != NULL) {
            v = cfg->profile;
        }
    } else {
        v = gProcCreateProfile;
    }
    if (v != 0xffff) {
        DebugText_Printf(&col, buf + 0x1c0, "ProfName[%d]Step[%u]", v, gProcCreateStep);
    }
    p6 = sCrashContext;
    if (p6 != NULL) {
        for (i = 0; (u32)i < 0x12; i++) {
            DebugText_Printf(&col, buf + ((i + 2) << 6) + 0x28, "%.3s:%08X", sCrashRegNames + i * 3, p6[i]);
        }
        p6 = sCrashContext;
        q = &p6[0x19];
        DebugText_Printf(&col, buf + 0x528, "SPSR%08X", p6[0x19]);
        DebugText_Printf(&col, buf + 0x568, "CP15%08X", q[1]);
    } else {
        DebugText_Printf(&col, buf + 0x428, "SP  %08X", sCrashSP);
        DebugText_Printf(&col, buf + 0x4a8, "PC4 %08X", sCrashPC);
    }
    r = sPanicFile;
    if (r != 0) {
        DebugText_Printf(&col, buf + 0x480, "%s:%u", r, sPanicLine);
        DebugText_Print(&col, buf + 0x4c0, sPanicMessage);
    }
    r = OS_GetProcMode();
    thr = data_021fcc2c[1];
    DebugText_Printf(&col, buf + 0x80, "ID:%u mode:%02x", thr->id, r);
    DebugText_Printf(&col, buf + 0xc0, "S:%08x-%08x", thr->stackTop, thr->stackBottom);
    r = func_021122b0();
    if (r != 0) {
        DebugText_Printf(&col, buf + 0x100, "IrqStkErr%u", r);
    } else {
        node = data_021fcc2c[2];
        r = 0;
        while (node != NULL) {
            r = func_02113438(node);
            if (r != 0) {
                break;
            }
            node = node->next;
        }
        if (node != NULL) {
            DebugText_Printf(&col, buf + 0x100, "StkErr%u:%u:%x", r, node->id, node->stackWarningOffset);
        }
    }
}

void CrashScreen_Fill(u32 a, u32 b, u32 c) {
    volatile u32 v = a;
    MIi_CpuClearFast(v);
}

void CrashScreen_Clear(void) {
    u32 t = sCrashScreenSub;
    CrashScreen_Fill(0x7f007f, sCrashScreenMain, 0x800);
    CrashScreen_Fill(0x7f007f, t, 0x800);
}

void CrashScreen_InitDisplay(void) {
    Gfx_ResetDisplayRegs();
    *(vu16 *)0x4000304 |= 1;
    *(vu16 *)0x4000050 = 0;
    *(vu16 *)0x4001050 = 0;
    GX_SetBankForBG(0x40);
    GX_SetBankForSubBG(0x80);
    *(vu32 *)0x4000000 = (*(vu32 *)0x4000000 & 0xffffe0ff) | 0x200;
    *(vu32 *)0x4001000 = (*(vu32 *)0x4001000 & 0xffffe0ff) | 0x200;
    *(vu16 *)0x400000a = (*(vu16 *)0x400000a & 0x43) | 0x400;
    *(vu16 *)0x400100a = (*(vu16 *)0x400100a & 0x43) | 0x400;
    GX_LoadBG1Char(sCrashFontChars, 0, 0x1000);
    GXS_LoadBG1Char(sCrashFontChars, 0, 0x1000);
    GX_LoadBGPltt(sCrashFontPalette, 0x1a0, 0x60);
    GXS_LoadBGPltt(sCrashFontPalette, 0x1a0, 0x60);
    *(vu16 *)0x5000000 = 0x7c00;
    *(vu16 *)0x5000018 = 0x7c00;
    *(vu16 *)0x5000400 = 0x7c00;
    *(vu16 *)0x5000418 = 0x7c00;
    sCrashScreenMain = G2_GetBG1ScrPtr();
    sCrashScreenSub = G2S_GetBG1ScrPtr();
    CrashScreen_Clear();
    GX_DispOn();
    *(vu32 *)0x4001000 |= 0x10000;
}

void CrashScreen_WaitVBlank(void) {
    while ((s32)*(vu16 *)0x4000006 >= 0xc0) {
    }
    while ((s32)*(vu16 *)0x4000006 < 0xc0) {
    }
}

void CrashScreen_Frame(void) {
    u32 state = sCrashScreenState;
    u32 keys = (*(vu16 *)0x4000130 | *(vu16 *)0x27fffa8);
    u32 trig, prev, held;
    keys = (keys ^ 0x2fff) & 0x2fff;
    keys = (u16)keys & 0x3ff;
    prev = sCrashPrevKeys;
    trig = keys & (prev ^ keys);
    sCrashPrevKeys = keys;
    switch (state) {
    case 0:
        trig &= 0x2000;
        if (trig != 0) {
            state = 5;
        }
        if (keys == 0x321) {
            state = (u8)(state + 1);
        }
        break;
    case 1:
        if (keys == 0) {
            state = (u8)(state + 1);
        }
        break;
    case 2:
        if ((keys & ~0x82) != 0) {
            state = 0;
        } else if (keys == 0x82) {
            state = (u8)(state + 1);
        }
        break;
    case 3:
        if (keys == 0) {
            state = (u8)(state + 1);
        }
        break;
    case 4:
        if ((keys & ~0xc) != 0) {
            state = 0;
        } else if (keys == 0xc) {
            state = (u8)(state + 1);
        }
        break;
    case 5:
        CrashScreen_InitDisplay();
        CrashScreen_DrawMain();
        state = (u8)(state + 1);
    case 6:
        CrashScreen_DrawMain();
        CrashScreen_DrawStack();
        held = keys & 4;
        if (held != 0) {
            if ((trig & 1) != 0 && held != 0) {
                if (OS_GetProcMode() == 0x1f) {
                    u32 a = gRootHeap;
                    u32 b = gCurrentHeap;
                    u32 c = gProcHeap;
                    if ((keys & 0x20) != 0) {
                        Heap_dump(a);
                    } else if ((keys & 0x10) != 0) {
                        Heap_dump(c);
                    } else if ((keys & 0x40) != 0) {
                        Heap_dump(b);
                    }
                }
            }
            if ((trig & 2) != 0 && held != 0) {
                BlockMap_DebugStub();
            }
        }
        break;
    }
    CrashScreen_WaitVBlank();
    sCrashScreenState = state;
}

void CrashScreen_Run(void) {
    vu16 *ime = (vu16 *)0x4000208;
    u64 t;
    (void)*ime;
    *ime = 0;
    t = OS_GetTick();
    sCrashTimeMs = (u32)((t << 6) / 0x82ea);
    for (;;) {
        CrashScreen_Frame();
    }
}



void FxVec3_Construct(void) {}

void LitCedarPos_Construct(u32 *p) {
    p[0] = 0;
    p[1] = 0;
}

// shared empty destructor (other units call it by this name and by the labels on it)
void _ZN6FxVec3D1Ev(void *) {}

// the game's entry point, called by crt0 (symbols.txt: `main`; see renames.txt)
void NitroMain(void) {
    vu16 *ime;
    OS_InitTick();
    OS_InitAlarm();
    OS_InitThread();
    func_02114cd8(Fatal_ExceptionCallback, data_021fccfc);
    ime = (vu16 *)0x4000208;
    (void)*ime;
    *ime = 1;
    OS_EnableInterrupts();
    Main_InitDwc();
    if (*(u32 *)0x27ffc20 == 1) {
        Main_RunWifiUtility();
        ime = (vu16 *)0x4000208;
        (void)*ime;
        *ime = 1;
        OS_ResetSystem(2);
    }
    Main_Init();
    Main_Loop();
}
}
