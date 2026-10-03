// mwcc-flags: -nothumb -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

typedef struct { u32 a, b, c; } T12;
void OS_EnableIrqMask(u32 mask);                                   // OS_EnableIrqMask
typedef struct { u32 func, enable, arg; } IrqCb;
extern IrqCb data_027e0088[]; // OSi_IrqCallbackInfo

// clears two words at 0x027e0450 (DTCM), probably an OS_Init* helper
void func_021123ac(void) {
    T12 *p = (T12 *)0x027e0450;
    p->b = 0;
    p->a = 0;
}

// OSi_EnterTimerCallback (arg 0 = timer index; OSi_IrqCallbackInfo[index] = {func, enable, arg})
void OSi_EnterTimerCallback(u32 n, u32 func, u32 arg) {
    data_027e0088[n].func = func;
    data_027e0088[n].arg = arg;
    OS_EnableIrqMask(1 << (n + 3));
    data_027e0088[n].enable = 1;
}

