// mwcc-flags: -nothumb -O4,p
// NitroSDK OS exception init (os_exception.c), autoload_2 0x02114cd8-0x02114d84 (the former unit 0x02114cd8-0x02114ee4
// split into its two files by their bss; os_tick.c is unk_02114d84.c). ARM code, mwcc 1.2/base.
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
// OS_InitException
void OS_InitException(void) {
    void *buf = *(void **)0x027ffd9c;
    if ((u32)buf >= 0x02600000 && (u32)buf < 0x02800000) {
        data_021fce94 = buf;
    } else {
        data_021fce94 = 0;
    }
    if (data_021fce94 == 0 || (func_02113fd8() & 0x40000000) == 0) {
        u32 *vec = (u32 *)0x027e3000;
        *(void **)0x027ffd9c = (void *)OSi_ExceptionHandler;
        vec[0xfdc / 4] = (u32)OSi_ExceptionHandler;
    }
    data_021fce8c = 0;
}

// OS_SetUserExceptionHandler
void func_02114cd8(void *handler, void *arg) {
    data_021fce8c = handler;
    data_021fce90 = arg;
}

// ---- file-scope objects (autoload_3 .bss 0x021fce8c-0x021fcf18; this definition order gives the original order after mwcc's size
// sort)
void *data_021fce8c; // OSi_UserExceptionHandler
void *data_021fce94; // OSi_ExceptionHandlerBuf
void *data_021fce90; // OSi_UserExceptionHandlerArg
u32 data_021fce98[32]; // exception context (used by the handler in unk_02114b54.s)
