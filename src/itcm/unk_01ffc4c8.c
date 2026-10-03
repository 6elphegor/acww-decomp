// mwcc-flags: -nothumb -O4,p
// NitroSDK types: s32/u32 are long (this matters: int and long operands are not folded together)
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed long s32;
typedef signed long long s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef int BOOL;
#define TRUE 1
#define FALSE 0
#define NULL 0

typedef s32 fx32;
typedef s16 fx16;
typedef s64 fx64;
typedef s64 fx64c;
typedef u16 REGType16;
typedef u32 REGType32;
typedef vu16 REGType16v;

// NitroSDK nitro/hw/ARM9/ioreg_CP.h
#define REG_SQRTCNT_ADDR       0x040002b0
#define REG_SQRT_RESULT_ADDR   0x040002b4
#define reg_CP_SQRTCNT         (*(REGType16v *)REG_SQRTCNT_ADDR)
#define REG_CP_SQRTCNT_BUSY_MASK 0x8000

// NitroSDK nitro/cp/sqrt.h: the Imm accessor reads through a NON-volatile REGType32 pointer
static inline s32 CP_IsSqrtBusy(void) {
    return (reg_CP_SQRTCNT & REG_CP_SQRTCNT_BUSY_MASK);
}

static inline void CP_WaitSqrt(void) {
    while (CP_IsSqrtBusy()) {
    }
}

static inline u32 CP_GetSqrtResultImm32(void) {
    return (u32)(*((REGType32 *)REG_SQRT_RESULT_ADDR));
}

static inline u32 CP_GetSqrtResult32(void) {
    CP_WaitSqrt();
    return CP_GetSqrtResultImm32();
}

void func_01ffc3d8(fx32 x);      // FX_SqrtAsync
void func_01ffc428(fx32 x);      // FX_InvAsync
fx64c func_01ffc4a0(void);       // FX_GetDivResultFx64c

// FX_InvSqrt (fx_cp.c)
fx32 func_01ffc4c8(fx32 x) {
    if (x > 0) {
        fx64c inv;
        fx64c sqrt;
        func_01ffc428(x);
        func_01ffc3d8(x);
        inv = func_01ffc4a0();
        sqrt = CP_GetSqrtResult32();
        return (fx32)((inv * sqrt + (1LL << 41)) >> 42);
    }
    return 0;
}
