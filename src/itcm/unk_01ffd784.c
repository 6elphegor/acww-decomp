// mwcc-flags: -nothumb -O4,p
// I004e: itcm 0x01ffd784-0x01ffdae0, NitroSDK OS reset / card ROM read + MI DMA parameter setters (6 functions). ARM, mwcc 1.2/base, -O4,p.
// NitroSDK types: s32/u32 are long
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed long s32;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

extern u32 func_01ffa2ec(void);       // OS_DisableInterrupts
extern u32 func_01ffa3d4(u32 enabled); // OS_RestoreInterrupts
extern void func_02114534(void);
extern void func_02114528(void);
extern void func_021145fc(void);
extern void func_021145f0(void);
extern void func_01ffd6c0(void);      // OSi_DoBoot (assembly)
extern vu16 data_021fcf50;
void func_01ffd784(u32 src, void *dst, s32 len);
void func_01ffd8b4(void);

// MIi_DmaSetParams_wait
void func_01ffda6c(u32 dmaNo, u32 src, u32 dest, u32 ctrl) {
    u32 enabled = func_01ffa2ec();
    vu32 *p = (vu32 *)(0x040000b0 + dmaNo * 12);
    *p = src;
    *(p + 1) = dest;
    *(p + 2) = ctrl;
    (void)*(vu32 *)0x040000b0;
    (void)*(vu32 *)0x040000b0;
    if (dmaNo == 0) {
        *p = 0;
        *(p + 1) = 0;
        *(p + 2) = 0x81400001;
    }
    (void)func_01ffa3d4(enabled);
}

// MIi_DmaSetParams_noInt
void func_01ffda34(u32 dmaNo, u32 src, u32 dest, u32 ctrl) {
    vu32 *p = (vu32 *)(0x040000b0 + dmaNo * 12);
    *p = src;
    *(p + 1) = dest;
    *(p + 2) = ctrl;
}

// MIi_DmaSetParams_wait_noInt
void func_01ffd9d4(u32 dmaNo, u32 src, u32 dest, u32 ctrl) {
    vu32 *p = (vu32 *)(0x040000b0 + dmaNo * 12);
    *p = src;
    *(p + 1) = dest;
    *(p + 2) = ctrl;
    (void)*(vu32 *)0x040000b0;
    (void)*(vu32 *)0x040000b0;
    if (dmaNo == 0) {
        *p = 0;
        *(p + 1) = 0;
        *(p + 2) = 0x81400001;
    }
    (void)*(vu32 *)0x040000b0;
    (void)*(vu32 *)0x040000b0;
}

// OSi_DoResetSystem
void func_01ffd994(void) {
    while (data_021fcf50 == 0) {
    }
    *(vu16 *)0x04000208 = 0;
    func_01ffd8b4();
    func_01ffd6c0();
}

// OSi_ReloadRomData
void func_01ffd8b4(void) {
    u32 base = *(u32 *)0x027ffc2c;
    u32 a, b, c, d, e, f;
    BOOL en;
    if (base >= 0x8000) {
        func_01ffd784(base, (void *)0x027ffe00, 0x160);
    }
    a = *(u32 *)0x027ffe20;
    b = *(u32 *)0x027ffe28;
    c = *(u32 *)0x027ffe2c;
    d = *(u32 *)0x027ffe30;
    e = *(u32 *)0x027ffe38;
    f = *(u32 *)0x027ffe3c;
    en = func_01ffa2ec();
    func_02114534();
    func_02114528();
    func_01ffa3d4(en);
    func_021145fc();
    func_021145f0();
    a += base;
    d += base;
    if (a < 0x8000) {
        u32 diff = 0x8000 - a;
        b += diff;
        c -= diff;
        a = 0x8000;
    }
    func_01ffd784(a, (void *)b, c);
    func_01ffd784(d, (void *)e, f);
}

// OSi_ReadCardRom32
void func_01ffd784(u32 src, void *dst, s32 len) {
    u32 ctrl = (*(vu32 *)0x027ffe60 & ~0x07000000) | 0xa1000000;
    s32 i = -(s32)(src & 0x1ff);
    while (*(vu32 *)0x040001a4 & 0x80000000) {
    }
    *(vu8 *)0x040001a1 = 0x80;
    src += i;
    if (i >= len) {
        return;
    }
    do {
        u32 w;
        *(vu8 *)0x040001a8 = 0xb7;
        *(vu8 *)0x040001a9 = (u8)(src >> 24);
        *(vu8 *)0x040001aa = (u8)(src >> 16);
        *(vu8 *)0x040001ab = (u8)(src >> 8);
        *(vu8 *)0x040001ac = (u8)src;
        *(vu8 *)0x040001ad = 0;
        *(vu8 *)0x040001ae = 0;
        *(vu8 *)0x040001af = 0;
        *(vu32 *)0x040001a4 = ctrl;
        do {
            w = *(vu32 *)0x040001a4;
            if (w & 0x00800000) {
                u32 d = *(vu32 *)0x04100010;
                if (i >= 0 && i < len) {
                    *(u32 *)((u32)dst + i) = d;
                }
                i += 4;
            }
        } while (w & 0x80000000);
        src += 0x200;
    } while (i < len);
}

