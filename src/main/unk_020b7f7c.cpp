#include "types.h"

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

extern u32 sPlttVramUsed, data_021ef60c, data_021ef610, data_021ef614, data_021ef618, data_021ef61c, data_021ef620;
extern u32 data_021ef624, data_021ef628, sPlttVramSize;

struct Unk_020b82b8_Str {
    u16 unk_00;
    u16 unk_02;
};

extern "C" void DebugText_PutChar(u16 *dst, u32 base, s32 c);
extern "C" void DebugText_PutString(u16 *dst, u32 base, const char *s);
extern "C" void DebugText_VPrintf(u16 *a, u32 b, const char *fmt, char *ap);
extern "C" void DebugText_Print(Unk_020b82b8_Str *self, u16 *dst, const char *s);
extern "C" void DebugText_Printf(Unk_020b82b8_Str *self, u16 *a, const char *fmt, ...);
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

extern "C" void DebugText_Print(Unk_020b82b8_Str *self, u16 *dst, const char *s) {
    DebugText_PutString(dst, self->unk_02, s);
}

extern "C" void DebugText_Printf(Unk_020b82b8_Str *self, u16 *a, const char *fmt, ...) {
    char *ap = (char *)(((u32)&fmt) & ~3) + 4;
    DebugText_VPrintf(a, self->unk_02, fmt, ap);
}

extern "C" void TexVram_Alloc4x4(u32 *o0, u32 *o1, u32 size) {
    u32 v = data_021ef628;
    if (v + size <= data_021ef618 && data_021ef624 + (size >> 1) <= data_021ef614) {
        *o0 = v;
        *o1 = data_021ef624;
        data_021ef628 = data_021ef628 + size;
        data_021ef624 = data_021ef624 + (size >> 1);
    } else {
        v = data_021ef61c;
        u32 e = v + size;
        if (e <= data_021ef60c && e <= 0x60000 && data_021ef620 + (size >> 1) <= data_021ef610) {
            *o0 = v;
            *o1 = data_021ef620;
            data_021ef61c = data_021ef61c + size;
            data_021ef620 = data_021ef620 + (size >> 1);
        } else {
            TexVram_OnAllocFail();
            Fatal_Trap();
            *o0 = 0;
            *o1 = 0x20000;
        }
    }
}

extern "C" void TexVram_AllocNormal(u32 *o, u32 size) {
    u32 a = data_021ef60c;
    u32 avail1 = a - data_021ef61c;
    u32 c = data_021ef610;
    u32 avail2 = c - data_021ef620;
    if (avail1 >= size) {
        if (avail2 >= size) {
            if ((avail2 - size) * 2 > avail1 - size) {
                *o = c - size;
                data_021ef610 = *o;
                return;
            }
        }
        *o = a - size;
        data_021ef60c = *o;
        return;
    }
    if (avail2 >= size) {
        *o = c - size;
        data_021ef610 = *o;
        return;
    }
    a = data_021ef618;
    avail1 = a - data_021ef628;
    c = data_021ef614;
    avail2 = c - data_021ef624;
    if (avail1 >= size) {
        if (avail2 >= size) {
            if ((avail2 - size) * 2 > avail1 - size) {
                *o = c - size;
                data_021ef614 = *o;
                return;
            }
        }
        *o = a - size;
        data_021ef618 = *o;
        return;
    }
    if (avail2 >= size) {
        *o = c - size;
        data_021ef614 = *o;
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
    data_021ef61c = 0;
    data_021ef620 = 0;
    data_021ef624 = 0;
    data_021ef628 = 0;
    data_021ef60c = 0;
    data_021ef610 = 0;
    data_021ef614 = 0;
    data_021ef618 = 0;
    u32 r = GX_GetBankForTex();
    switch (r) {
    case 0xf:
        data_021ef628 = 0;
        data_021ef624 = 0x20000;
        data_021ef620 = 0x30000;
        data_021ef61c = 0x40000;
        data_021ef618 = 0x20000;
        data_021ef614 = 0x30000;
        data_021ef610 = 0x40000;
        data_021ef60c = 0x80000;
        break;
    case 7:
        data_021ef628 = 0;
        data_021ef624 = 0x20000;
        data_021ef620 = 0x30000;
        data_021ef61c = 0x40000;
        data_021ef618 = 0x20000;
        data_021ef614 = 0x30000;
        data_021ef610 = 0x40000;
        data_021ef60c = 0x60000;
        break;
    default:
        Fatal_Trap();
        break;
    }
}

extern "C" void TexVram_OnAllocFail(void) {
}

// Declarations for data defined further down (definition order sets the data layout)
extern u32 data_021ef628;
extern u32 data_021ef624;
extern u32 data_021ef620;
extern u32 data_021ef61c;
extern u32 data_021ef618;
extern u32 data_021ef614;
extern u32 data_021ef610;
extern u32 data_021ef60c;
extern u32 sPlttVramUsed;
extern u32 sPlttVramSize;

u32 data_021ef628;

u32 data_021ef624;

u32 data_021ef620;

u32 data_021ef61c;

u32 data_021ef618;

u32 data_021ef614;

u32 data_021ef610;

u32 data_021ef60c;

u32 sPlttVramUsed;

u32 sPlttVramSize;
