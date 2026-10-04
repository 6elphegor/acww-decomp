// mwcc-flags: -nothumb -O4,p
// NitroSDK OS timer reservation and tick (os_tick.c), autoload_2 0x02114d84-0x02114ee4 (split from unk_02114cd8.c by
// the files' bss). ARM code, mwcc 1.2/base.
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef int s32;

extern void *data_021fce8c; // OSi_UserExceptionHandler
extern void *data_021fce90; // OSi_UserExceptionHandlerArg
extern void *data_021fce94; // OSi_ExceptionHandlerBuf
extern u16 data_021fcf18;   // OSi_UseTimerFlags
extern u16 data_021fcf1c;   // OSi_UseTick
extern s32 data_021fcf20;   // OSi_NeedResetTimer
extern volatile u64 data_021fcf24;   // OSi_TickCounter

u32 func_02113fd8(void);                               // OS_GetConsoleType
void OSi_EnterTimerCallback(s32 n, void *callback, void *arg);  // OS_SetIrqFunction-like (OSi_Entry)
void OS_SetIrqFunction(u32 mask, void *func);              // OS_SetIrqFunction
void OS_EnableIrqMask(u32 mask);                          // OS_EnableIrqMask
void OSi_ExceptionHandler(void);                              // OSi_ExceptionHandler (original asm, outside all units)
void OSi_CountUpTick(void);
void OSi_SetTimerReserved(s32 n);

#define reg_OS_TM0CNT_L (*(volatile u16 *)0x04000100)
#define reg_OS_TM0CNT_H (*(volatile u16 *)0x04000102)
// OS_InitTick
void OS_InitTick(void) {
    if (data_021fcf1c) return;
    data_021fcf1c = 1;
    OSi_SetTimerReserved(0);
    data_021fcf24 = 0;
    reg_OS_TM0CNT_H = 0;
    reg_OS_TM0CNT_L = 0;
    reg_OS_TM0CNT_H = 0xc1;
    OS_SetIrqFunction(8, OSi_CountUpTick);
    OS_EnableIrqMask(8);
    data_021fcf20 = 0;
}

// OS_IsTickAvailable
u16 OS_IsTickAvailable(void) {
    return data_021fcf1c;
}

// OSi_CountUpTick
void OSi_CountUpTick(void) {
    data_021fcf24++;
    if (data_021fcf20) {
        reg_OS_TM0CNT_H = 0;
        reg_OS_TM0CNT_L = 0;
        reg_OS_TM0CNT_H = 0xc1;
        data_021fcf20 = 0;
    }
    OSi_EnterTimerCallback(0, OSi_CountUpTick, 0);
}

// OS_GetTick (low 16 bits)
u16 OS_GetTickLo(void) {
    return reg_OS_TM0CNT_L;
}

// OSi_SetTimerReserved
void OSi_SetTimerReserved(s32 n) {
    data_021fcf18 |= 1 << n;
}

// ---- file-scope objects (autoload_3 .bss 0x021fcf18-0x021fcf2c; this definition order gives the original order after mwcc's size
// sort)
u16 data_021fcf18;   // OSi_UseTimerFlags
u16 data_021fcf1c;   // OSi_UseTick
s32 data_021fcf20;   // OSi_NeedResetTimer
volatile u64 data_021fcf24;   // OSi_TickCounter
