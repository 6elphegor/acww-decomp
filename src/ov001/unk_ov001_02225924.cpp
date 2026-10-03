// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_02225924_Rect {
    u16 x;
    u16 y;
    u16 w;
    u16 h;
};

struct Unk_ov001_02225924_Pt {
    u16 x;
    u16 y;
};

typedef volatile u16 vu16;
typedef volatile u32 vu32;

extern "C" {
u32 OS_DisableIrqMask(u32 a);
void OS_EnableIrqMask(u32 a);
void NNS_FndFreeToExpHeap(void *heap, void *p);
void *NNS_FndAllocFromExpHeapEx(void *heap, u32 size, u32 b);
void NNS_FndDestroyExpHeap(void *heap);
void *NNS_FndCreateExpHeapEx(void *buf, u32 size, u32 b);
void MI_CpuFill8(void *p, u32 v, u32 size);
void Fatal_Trap();

void func_ov001_02225924(Unk_ov001_02225924_Pt *a, Unk_ov001_02225924_Pt *b, Unk_ov001_02225924_Rect *out);
void func_ov001_02225958(u32 a, u32 b, u32 c, u32 d, Unk_ov001_02225924_Rect *out);
void func_ov001_02225970(u32 a, u32 b, Unk_ov001_02225924_Pt *out);
void func_ov001_0222597c(u32 eng, u32 which, u32 v, u32 on);
void func_ov001_02225ae8(u32 eng, u32 which, Unk_ov001_02225924_Rect *r);
void func_ov001_02225c58(u32 eng, u32 m);
void func_ov001_02225cb4(u32 eng, u32 m);
void func_ov001_02225d08(void *p);
void func_ov001_02225d58(void **pp);
void *func_ov001_02225db0(u32 size, u32 b);
void *func_ov001_02225dd8(u32 size, u32 b);
void func_ov001_02225e28();
void func_ov001_02225e58(void *buf);

void *data_ov001_0222df48;
}

struct Unk_ov001_02225ae8_Pad {
    s32 v;
    Unk_ov001_02225ae8_Pad() {}
    ~Unk_ov001_02225ae8_Pad() {}
};

static inline void Unk_ov001_02225ae8_Set(u32 ha, u32 va, Unk_ov001_02225924_Rect *r) {
    u32 x1 = r->x;
    u32 x2 = r->w;
    u32 y1 = r->y;
    u32 y2 = r->h;
    *(vu16 *)ha = ((x1 << 8) & 0xff00) | (x2 & 0xff);
    *(vu16 *)va = ((y1 << 8) & 0xff00) | (y2 & 0xff);
}

void func_ov001_02225e58(void *buf) {
    MI_CpuFill8(buf, 0, 0x40000);
    data_ov001_0222df48 = NNS_FndCreateExpHeapEx(buf, 0x40000, 0);
    if (data_ov001_0222df48 == 0) Fatal_Trap();
}

void func_ov001_02225e28() {
    NNS_FndDestroyExpHeap(data_ov001_0222df48);
    data_ov001_0222df48 = 0;
}

void *func_ov001_02225dd8(u32 size, u32 b) {
    void *p;
    u32 irq = OS_DisableIrqMask(1);
    p = NNS_FndAllocFromExpHeapEx(data_ov001_0222df48, size, b);
    if (p == 0) Fatal_Trap();
    OS_EnableIrqMask(irq);
    return p;
}

void *func_ov001_02225db0(u32 size, u32 b) {
    void *p = func_ov001_02225dd8(size, b);
    MI_CpuFill8(p, 0, size);
    return p;
}

void func_ov001_02225d58(void **pp) {
    u32 irq = OS_DisableIrqMask(1);
    if (*pp == 0) return;
    NNS_FndFreeToExpHeap(data_ov001_0222df48, *pp);
    OS_EnableIrqMask(irq);
    *pp = 0;
}

void func_ov001_02225d08(void *p) {
    u32 irq = OS_DisableIrqMask(1);
    if (p == 0) return;
    NNS_FndFreeToExpHeap(data_ov001_0222df48, p);
    OS_EnableIrqMask(irq);
}

void func_ov001_02225cb4(u32 eng, u32 m) {
    if (eng == 1) {
        u32 t = (*(vu32 *)0x4001000 & 0x1f00) >> 8;
        *(vu32 *)0x4001000 = (*(vu32 *)0x4001000 & ~0x1f00) | ((m | t) << 8);
    } else {
        u32 t = (*(vu32 *)0x4000000 & 0x1f00) >> 8;
        *(vu32 *)0x4000000 = (*(vu32 *)0x4000000 & ~0x1f00) | ((m | t) << 8);
    }
}

void func_ov001_02225c58(u32 eng, u32 m) {
    if (eng == 1) {
        u32 t = (*(vu32 *)0x4001000 & 0x1f00) >> 8;
        *(vu32 *)0x4001000 = (*(vu32 *)0x4001000 & ~0x1f00) | ((~m & t) << 8);
    } else {
        u32 t = (*(vu32 *)0x4000000 & 0x1f00) >> 8;
        *(vu32 *)0x4000000 = (*(vu32 *)0x4000000 & ~0x1f00) | ((~m & t) << 8);
    }
}

void func_ov001_02225ae8(u32 eng, u32 which, Unk_ov001_02225924_Rect *r) {
    Unk_ov001_02225ae8_Pad pad;
    if (eng == 1) {
        if (which == 0) {
            Unk_ov001_02225ae8_Set(0x4001040, 0x4001044, r);
        } else {
            Unk_ov001_02225ae8_Set(0x4001042, 0x4001046, r);
        }
    } else {
        if (which == 0) {
            Unk_ov001_02225ae8_Set(0x4000040, 0x4000044, r);
        } else {
            Unk_ov001_02225ae8_Set(0x4000042, 0x4000046, r);
        }
    }
}

void func_ov001_0222597c(u32 eng, u32 which, u32 v, u32 on) {
    switch (which) {
    case 0:
        if (eng == 1) {
            vu16 *r = (vu16 *)0x4001048;
            u32 t = (*r & ~0x3f) | v;
            if (on != 0) t |= 0x20;
            *(vu16 *)0x4001048 = t;
        } else {
            u32 t = (*(vu16 *)0x4000048 & ~0x3f) | v;
            if (on != 0) t |= 0x20;
            *(vu16 *)0x4000048 = t;
        }
        break;
    case 1:
        if (eng == 1) {
            u32 t = (*(vu16 *)0x4001048 & ~0x3f00) | (v << 8);
            if (on != 0) t |= 0x2000;
            *(vu16 *)0x4001048 = t;
        } else {
            u32 t = (*(vu16 *)0x4000048 & ~0x3f00) | (v << 8);
            if (on != 0) t |= 0x2000;
            *(vu16 *)0x4000048 = t;
        }
        break;
    case 2:
        if (eng == 1) {
            u32 t = (*(vu16 *)0x400104a & ~0x3f00) | (v << 8);
            if (on != 0) t |= 0x2000;
            *(vu16 *)0x400104a = t;
        } else {
            u32 t = (*(vu16 *)0x400004a & ~0x3f00) | (v << 8);
            if (on != 0) t |= 0x2000;
            *(vu16 *)0x400004a = t;
        }
        break;
    case 3:
        if (eng == 1) {
            u32 t = (*(vu16 *)0x400104a & ~0x3f) | v;
            if (on != 0) t |= 0x20;
            *(vu16 *)0x400104a = t;
        } else {
            u32 t = (*(vu16 *)0x400004a & ~0x3f) | v;
            if (on != 0) t |= 0x20;
            *(vu16 *)0x400004a = t;
        }
        break;
    }
}

void func_ov001_02225970(u32 a, u32 b, Unk_ov001_02225924_Pt *out) {
    out->x = a;
    out->y = b;
}

void func_ov001_02225958(u32 a, u32 b, u32 c, u32 d, Unk_ov001_02225924_Rect *out) {
    out->x = a;
    out->y = b;
    out->w = c;
    out->h = d;
}

void func_ov001_02225924(Unk_ov001_02225924_Pt *a, Unk_ov001_02225924_Pt *b, Unk_ov001_02225924_Rect *out) {
    out->x = a->x;
    out->y = a->y;
    out->w = a->x + b->x;
    out->h = a->y + b->y;
}

