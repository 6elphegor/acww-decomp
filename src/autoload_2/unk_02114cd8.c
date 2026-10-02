// mwcc-flags: -nothumb -O4,p
// NitroSDK OS exception init / OS tick (os_exception.c, os_tick.c): autoload_2 0x02114cd8-0x02114ee4. ARM code, mwcc 1.2/base.
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
void func_02112360(s32 n, void *callback, void *arg);  // OS_SetIrqFunction-like (OSi_Entry)
void func_01ffa404(u32 mask, void *func);              // OS_SetIrqFunction
void func_01ff8128(u32 mask);                          // OS_EnableIrqMask
void func_02114b54(void);                              // OSi_ExceptionHandler (original asm, outside all units)
void func_02114db0(void);
void func_02114d84(s32 n);

#define reg_OS_TM0CNT_L (*(volatile u16 *)0x04000100)
#define reg_OS_TM0CNT_H (*(volatile u16 *)0x04000102)

// OS_InitTick
void func_02114e48(void) {
    if (data_021fcf1c) return;
    data_021fcf1c = 1;
    func_02114d84(0);
    data_021fcf24 = 0;
    reg_OS_TM0CNT_H = 0;
    reg_OS_TM0CNT_L = 0;
    reg_OS_TM0CNT_H = 0xc1;
    func_01ffa404(8, func_02114db0);
    func_01ff8128(8);
    data_021fcf20 = 0;
}

// OS_IsTickAvailable
u16 func_02114e38(void) {
    return data_021fcf1c;
}

// OSi_CountUpTick
void func_02114db0(void) {
    data_021fcf24++;
    if (data_021fcf20) {
        reg_OS_TM0CNT_H = 0;
        reg_OS_TM0CNT_L = 0;
        reg_OS_TM0CNT_H = 0xc1;
        data_021fcf20 = 0;
    }
    func_02112360(0, func_02114db0, 0);
}

// OS_GetTick (low 16 bits)
u16 func_02114da0(void) {
    return reg_OS_TM0CNT_L;
}

// OSi_SetTimerReserved
void func_02114d84(s32 n) {
    data_021fcf18 |= 1 << n;
}

// OS_InitException
void func_02114cf4(void) {
    void *buf = *(void **)0x027ffd9c;
    if ((u32)buf >= 0x02600000 && (u32)buf < 0x02800000) {
        data_021fce94 = buf;
    } else {
        data_021fce94 = 0;
    }
    if (data_021fce94 == 0 || (func_02113fd8() & 0x40000000) == 0) {
        u32 *vec = (u32 *)0x027e3000;
        *(void **)0x027ffd9c = (void *)func_02114b54;
        vec[0xfdc / 4] = (u32)func_02114b54;
    }
    data_021fce8c = 0;
}

// OS_SetUserExceptionHandler
void func_02114cd8(void *handler, void *arg) {
    data_021fce8c = handler;
    data_021fce90 = arg;
}
