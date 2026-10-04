#include "types.h"
#include "sys/DebugText.h"

extern "C" {
void NNS_GfdInitFrmTexVramManager(u32 a, u32 b);
void NNS_GfdInitFrmPlttVramManager(u32 a, u32 b);
u32 func_0210f460(void);
u32 GX_GetBankForTex(void);
void Fatal_Trap(void);
void OS_VSNPrintf(char *buf, u32 size, const char *fmt, char *ap);
}

extern "C" {
extern u32 (*data_0213bc10)(u32, u32);
extern u32 (*data_0213bc18)(u32);
}

extern u32 sPlttVramUsed, sTexVramTexelBHi, sTexVramIdxBHi, sTexVramIdxAHi, sTexVramTexelAHi, sTexVramTexelBLo, sTexVramIdxBLo;
extern u32 sTexVramIdxALo, sTexVramTexelALo, sPlttVramSize;

extern "C" void DebugText_PutChar(u16 *dst, u32 base, s32 c);
extern "C" void DebugText_PutString(u16 *dst, u32 base, const char *s);
extern "C" void DebugText_VPrintf(u16 *a, u32 b, const char *fmt, char *ap);
extern "C" void DebugText_Print(DebugText *self, u16 *dst, const char *s);
extern "C" void DebugText_Printf(DebugText *self, u16 *a, const char *fmt, ...);
extern "C" void TexVram_Alloc4x4(u32 *o0, u32 *o1, u32 size);
extern "C" void TexVram_AllocNormal(u32 *o, u32 size);
extern "C" u32 PlttVram_AllocRaw(u32 a);
extern "C" u32 TexVram_Alloc(u32 a, u32 b);
extern "C" u32 PlttVram_Alloc(u32 a);
extern "C" void TexVram_InitManagers(void);
extern "C" void TexVram_OnAllocFail(void);

extern "C" void DebugText_PutChar(u16 *dst, u32 base, s32 c) {
    *dst = base + c;
}

extern "C" void DebugText_PutString(u16 *dst, u32 base, const char *s) {
    s32 i = 0;
    while (s[i] != 0) {
        DebugText_PutChar(dst, base, (s++)[i]);
        dst++;
    }
}

extern "C" void DebugText_VPrintf(u16 *a, u32 b, const char *fmt, char *ap) {
    char buf[0x81];
    OS_VSNPrintf(buf, 0x81, fmt, ap);
    DebugText_PutString(a, b, buf);
}

extern "C" void DebugText_Print(DebugText *self, u16 *dst, const char *s) {
    DebugText_PutString(dst, self->charBase, s);
}

extern "C" void DebugText_Printf(DebugText *self, u16 *a, const char *fmt, ...) {
    char *ap = (char *)(((u32)&fmt) & ~3) + 4;
    DebugText_VPrintf(a, self->charBase, fmt, ap);
}

extern "C" void TexVram_Alloc4x4(u32 *o0, u32 *o1, u32 size) {
    u32 v = sTexVramTexelALo;
    if (v + size <= sTexVramTexelAHi && sTexVramIdxALo + (size >> 1) <= sTexVramIdxAHi) {
        *o0 = v;
        *o1 = sTexVramIdxALo;
        sTexVramTexelALo = sTexVramTexelALo + size;
        sTexVramIdxALo = sTexVramIdxALo + (size >> 1);
    } else {
        v = sTexVramTexelBLo;
        u32 e = v + size;
        if (e <= sTexVramTexelBHi && e <= 0x60000 && sTexVramIdxBLo + (size >> 1) <= sTexVramIdxBHi) {
            *o0 = v;
            *o1 = sTexVramIdxBLo;
            sTexVramTexelBLo = sTexVramTexelBLo + size;
            sTexVramIdxBLo = sTexVramIdxBLo + (size >> 1);
        } else {
            TexVram_OnAllocFail();
            Fatal_Trap();
            *o0 = 0;
            *o1 = 0x20000;
        }
    }
}

extern "C" void TexVram_AllocNormal(u32 *o, u32 size) {
    u32 a = sTexVramTexelBHi;
    u32 avail1 = a - sTexVramTexelBLo;
    u32 c = sTexVramIdxBHi;
    u32 avail2 = c - sTexVramIdxBLo;
    if (avail1 >= size) {
        if (avail2 >= size) {
            if ((avail2 - size) * 2 > avail1 - size) {
                *o = c - size;
                sTexVramIdxBHi = *o;
                return;
            }
        }
        *o = a - size;
        sTexVramTexelBHi = *o;
        return;
    }
    if (avail2 >= size) {
        *o = c - size;
        sTexVramIdxBHi = *o;
        return;
    }
    a = sTexVramTexelAHi;
    avail1 = a - sTexVramTexelALo;
    c = sTexVramIdxAHi;
    avail2 = c - sTexVramIdxALo;
    if (avail1 >= size) {
        if (avail2 >= size) {
            if ((avail2 - size) * 2 > avail1 - size) {
                *o = c - size;
                sTexVramIdxAHi = *o;
                return;
            }
        }
        *o = a - size;
        sTexVramTexelAHi = *o;
        return;
    }
    if (avail2 >= size) {
        *o = c - size;
        sTexVramIdxAHi = *o;
        return;
    }
    TexVram_OnAllocFail();
    Fatal_Trap();
    *o = 0;
}

extern "C" u32 PlttVram_AllocRaw(u32 a) {
    u32 p = sPlttVramUsed;
    a = (a + 0xf) & 0xfff0;
    u32 n = p + a;
    sPlttVramUsed = n;
    if (n >= sPlttVramSize) {
        sPlttVramUsed = p;
        Fatal_Trap();
        return 0;
    }
    return p;
}

extern "C" u32 TexVram_Alloc(u32 a, u32 b) {
    u32 x, y;
    if (b != 0) {
        TexVram_Alloc4x4(&x, &y, a);
    } else {
        TexVram_AllocNormal(&x, a);
    }
    return (b << 31) | (((a >> 4) << 16) | ((x >> 3) & 0xffff));
}

extern "C" u32 PlttVram_Alloc(u32 a) {
    a = (a + 7) & ~7;
    u32 r = PlttVram_AllocRaw(a);
    return ((a >> 3) << 16) | ((r >> 3) & 0xffff);
}

extern "C" void TexVram_InitManagers(void) {
    NNS_GfdInitFrmTexVramManager(4, 1);
    NNS_GfdInitFrmPlttVramManager(0x8000, 1);
    data_0213bc10 = TexVram_Alloc;
    data_0213bc18 = PlttVram_Alloc;
    sPlttVramUsed = 0;
    sPlttVramSize = func_0210f460();
    sTexVramTexelBLo = 0;
    sTexVramIdxBLo = 0;
    sTexVramIdxALo = 0;
    sTexVramTexelALo = 0;
    sTexVramTexelBHi = 0;
    sTexVramIdxBHi = 0;
    sTexVramIdxAHi = 0;
    sTexVramTexelAHi = 0;
    u32 r = GX_GetBankForTex();
    switch (r) {
    case 0xf:
        sTexVramTexelALo = 0;
        sTexVramIdxALo = 0x20000;
        sTexVramIdxBLo = 0x30000;
        sTexVramTexelBLo = 0x40000;
        sTexVramTexelAHi = 0x20000;
        sTexVramIdxAHi = 0x30000;
        sTexVramIdxBHi = 0x40000;
        sTexVramTexelBHi = 0x80000;
        break;
    case 7:
        sTexVramTexelALo = 0;
        sTexVramIdxALo = 0x20000;
        sTexVramIdxBLo = 0x30000;
        sTexVramTexelBLo = 0x40000;
        sTexVramTexelAHi = 0x20000;
        sTexVramIdxAHi = 0x30000;
        sTexVramIdxBHi = 0x40000;
        sTexVramTexelBHi = 0x60000;
        break;
    default:
        Fatal_Trap();
        break;
    }
}

extern "C" void TexVram_OnAllocFail(void) {
}

// Declarations for data defined further down (definition order sets the data layout)
extern u32 sTexVramTexelALo;
extern u32 sTexVramIdxALo;
extern u32 sTexVramIdxBLo;
extern u32 sTexVramTexelBLo;
extern u32 sTexVramTexelAHi;
extern u32 sTexVramIdxAHi;
extern u32 sTexVramIdxBHi;
extern u32 sTexVramTexelBHi;
extern u32 sPlttVramUsed;
extern u32 sPlttVramSize;

u32 sTexVramTexelALo;

u32 sTexVramIdxALo;

u32 sTexVramIdxBLo;

u32 sTexVramTexelBLo;

u32 sTexVramTexelAHi;

u32 sTexVramIdxAHi;

u32 sTexVramIdxBHi;

u32 sTexVramTexelBHi;

u32 sPlttVramUsed;

u32 sPlttVramSize;
