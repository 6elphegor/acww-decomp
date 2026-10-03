#include "types.h"

typedef volatile u16 vu16;
typedef volatile u32 vu32;

struct Unk_02000fc0_Col {
    u16 unk_00;
    u16 unk_02;
};

struct Unk_02000fc0_Node {
    u8 pad_00[0x68];
    Unk_02000fc0_Node *unk_68;
    u32 unk_6c;
};

struct Unk_02000fc0_Cfg {
    u8 pad_00[0x0c];
    u16 unk_0c;
};

struct Unk_02000fc0_Ptr {
    u8 pad_00[8];
    Unk_02000fc0_Cfg *unk_08;
};

struct Unk_02000fc0_Ctx {
    u8 pad_00[0x38];
    u32 unk_38;
};

struct Unk_02000fc0_Thr {
    u8 pad_00[0x6c];
    u32 unk_6c;
    u8 pad_70[0x20];
    u32 unk_90;
    u32 unk_94;
    u32 unk_98;
};

extern "C" {

extern u32 data_0213c6c8;
extern u32 data_0213c6cc;
extern u32 data_0213c6d4;
extern u32 data_0213c6d8;
extern u32 data_0213c6e8;
extern u32 data_0213b1a4;
extern u32 data_021f4824;
extern u32 data_021f482c;
extern u32 data_021f4818;
extern Unk_02000fc0_Ptr *data_021f5994;
extern u16 data_021f597c;
extern u8 data_021f5974;
extern Unk_02000fc0_Thr *data_021fcc2c[3];
extern u32 data_021fce88;
extern char data_02135f44[];
extern char data_021c21e4[];
extern u16 data_020de408[], data_020e0408[];
extern u8 data_021fccfc[];
extern const char data_020c6108[55];

// The definition order below gives the original .bss order (inverted heapsort); do not reorder.
u32 data_0213c6e8;
const char data_020c6108[55] = "CPSR00R01R02R03R04R05R06R07R08R09R10R11R12SP LR PC4SPs";
const char *data_0213c6e0;
u32 *data_0213c6dc;
u8 data_0213c6c0;
u32 data_0213c6d4;
u32 data_0213c6d0;
u32 data_0213c6e4;
u32 data_0213c6c8;
u32 data_0213c6c4;
u32 data_0213c6cc;
u32 data_0213c6d8;

void OS_InitTick(void);
void OS_InitAlarm(void);
void OS_InitThread(void);
void func_02114cd8(void (*fn)(void), void *p);
void func_0206d774(void);
void func_01ffa314(void);
void func_0206d5c8(void);
void func_0206d514(void);
void OS_ResetSystem(u32 a);
void func_020b0b90(void);
s32 func_0206d610(void);

void func_02000cd4(void);
void func_02000fac(u32 a, u32 b, u32 c);
void func_02000e4c(void);
void func_02000e64(void);
void func_02000f78(void);
void func_02000fc0(void);
void func_020011fc(void);
BOOL func_020012c0(u32 addr, u32 len);
void func_02001264(u8 *dst, u32 src, u32 size);
void func_02001338(const char *a, u32 b, const char *c, void *d);

u64 OS_GetTick(void);
u32 OS_GetProcMode(void);
void OS_DisableInterrupts(void);
void func_020535e0(void);
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
void func_020b82b8(Unk_02000fc0_Col *c, u8 *dst, const char *fmt, ...);
void func_020b82d8(Unk_02000fc0_Col *c, u8 *dst, const char *fmt);
u32 func_020ed754(u32 a);
u32 func_021122b0(void);
u32 func_02113438(Unk_02000fc0_Node *a);
void func_020e8b38(u32 a);
void func_0204eeb0(void);
u8 *OS_GetDTCMAddress(void);
void OS_VSNPrintf(const char *a, u32 b, const char *c, void *d);
s32 func_0206d49c(void);

void func_02001338(const char *a, u32 b, const char *c, void *d) {
    OS_DisableInterrupts();
    data_0213c6e8 = (u32)a;
    data_0213c6e4 = b;
    data_0213c6e0 = data_02135f44;
    OS_VSNPrintf(data_02135f44, 0x80, c, d);
    func_0206d49c();
}

void func_02001314(const char *fmt, ...) {
    u32 *ap = (u32 *)(((u32)&fmt) & ~3) + 1;
    func_02001338("", 0, fmt, ap);
}

BOOL func_020012c0(u32 addr, u32 len) {
    u32 end = addr + len;
    u8 *base = OS_GetDTCMAddress();
    u32 lim2 = (u32)base + 0x4000;
    u32 lim1 = data_021fce88 != 0 ? 0x27e0000 : 0x23ff000;
    if ((addr >= 0x2000000 && end <= lim1) || ((u32)base <= addr && end <= lim2)) {
        return TRUE;
    }
    return FALSE;
}

void func_02001264(u8 *dst, u32 src, u32 size) {
    u16 color = 0xd000;
    Unk_02000fc0_Col col;
    u32 *p;
    u32 end;
    col.unk_00 = color;
    col.unk_02 = color;
    p = (u32 *)(src & ~3);
    size &= ~3;
    end = src + size;
    while ((u32)p < end) {
        if (!func_020012c0((u32)p, 4)) {
            break;
        }
        col.unk_02 = color;
        func_020b82b8(&col, dst, "%08x", *p);
        dst += 0x10;
        color ^= 0x3000;
        p++;
    }
}

void func_020011fc(void) {
    u8 *buf = (u8 *)data_0213c6d8;
    Unk_02000fc0_Col col;
    Unk_02000fc0_Ctx *ctx;
    u32 v;
    col.unk_00 = 0xd000;
    col.unk_02 = 0xd000;
    ctx = (Unk_02000fc0_Ctx *)data_0213c6dc;
    if (ctx != NULL) {
        v = ctx->unk_38;
    } else {
        v = data_0213c6d4;
    }
    func_020b82b8(&col, buf + 0x40, "SP = %08X", v);
    if (func_020012c0(v, 4)) {
        func_02001264(buf + 0x80, v, 0x160);
    }
}

void func_02000fc0(void) {
    u8 *buf = (u8 *)data_0213c6cc;
    Unk_02000fc0_Col col;
    u32 n;
    u32 v;
    Unk_02000fc0_Ptr *pp;
    u32 *p6;
    s32 i;
    u32 *q;
    Unk_02000fc0_Thr *thr;
    Unk_02000fc0_Node *node;
    u32 r;
    col.unk_00 = 0xd000;
    col.unk_02 = 0xd000;
    func_020b82b8(&col, buf + 0x40, "%10ums", data_0213c6d0);
    func_020b82d8(&col, buf, data_021c21e4);
    n = data_0213b1a4;
    if (n != 0 && (s32)n < 6) {
        func_020b82b8(&col, buf + 0x180, "LoopProc %1u:%s", n, func_020ed754(n));
    }
    v = 0xffff;
    pp = data_021f5994;
    if (pp != NULL) {
        Unk_02000fc0_Cfg *cfg = pp->unk_08;
        if (cfg != NULL) {
            v = cfg->unk_0c;
        }
    } else {
        v = data_021f597c;
    }
    if (v != 0xffff) {
        func_020b82b8(&col, buf + 0x1c0, "ProfName[%d]Step[%u]", v, data_021f5974);
    }
    p6 = data_0213c6dc;
    if (p6 != NULL) {
        for (i = 0; (u32)i < 0x12; i++) {
            func_020b82b8(&col, buf + ((i + 2) << 6) + 0x28, "%.3s:%08X", data_020c6108 + i * 3, p6[i]);
        }
        p6 = data_0213c6dc;
        q = &p6[0x19];
        func_020b82b8(&col, buf + 0x528, "SPSR%08X", p6[0x19]);
        func_020b82b8(&col, buf + 0x568, "CP15%08X", q[1]);
    } else {
        func_020b82b8(&col, buf + 0x428, "SP  %08X", data_0213c6d4);
        func_020b82b8(&col, buf + 0x4a8, "PC4 %08X", data_0213c6c8);
    }
    r = data_0213c6e8;
    if (r != 0) {
        func_020b82b8(&col, buf + 0x480, "%s:%u", r, data_0213c6e4);
        func_020b82d8(&col, buf + 0x4c0, data_0213c6e0);
    }
    r = OS_GetProcMode();
    thr = data_021fcc2c[1];
    func_020b82b8(&col, buf + 0x80, "ID:%u mode:%02x", thr->unk_6c, r);
    func_020b82b8(&col, buf + 0xc0, "S:%08x-%08x", thr->unk_90, thr->unk_94);
    r = func_021122b0();
    if (r != 0) {
        func_020b82b8(&col, buf + 0x100, "IrqStkErr%u", r);
    } else {
        node = (Unk_02000fc0_Node *)data_021fcc2c[2];
        r = 0;
        while (node != NULL) {
            r = func_02113438(node);
            if (r != 0) {
                break;
            }
            node = node->unk_68;
        }
        if (node != NULL) {
            func_020b82b8(&col, buf + 0x100, "StkErr%u:%u:%x", r, node->unk_6c, ((Unk_02000fc0_Thr *)node)->unk_98);
        }
    }
}

void func_02000fac(u32 a, u32 b, u32 c) {
    volatile u32 v = a;
    MIi_CpuClearFast(v);
}

void func_02000f78(void) {
    u32 t = data_0213c6d8;
    func_02000fac(0x7f007f, data_0213c6cc, 0x800);
    func_02000fac(0x7f007f, t, 0x800);
}

void func_02000e64(void) {
    func_020535e0();
    *(vu16 *)0x4000304 |= 1;
    *(vu16 *)0x4000050 = 0;
    *(vu16 *)0x4001050 = 0;
    GX_SetBankForBG(0x40);
    GX_SetBankForSubBG(0x80);
    *(vu32 *)0x4000000 = (*(vu32 *)0x4000000 & 0xffffe0ff) | 0x200;
    *(vu32 *)0x4001000 = (*(vu32 *)0x4001000 & 0xffffe0ff) | 0x200;
    *(vu16 *)0x400000a = (*(vu16 *)0x400000a & 0x43) | 0x400;
    *(vu16 *)0x400100a = (*(vu16 *)0x400100a & 0x43) | 0x400;
    GX_LoadBG1Char(data_020de408, 0, 0x1000);
    GXS_LoadBG1Char(data_020de408, 0, 0x1000);
    GX_LoadBGPltt(data_020e0408, 0x1a0, 0x60);
    GXS_LoadBGPltt(data_020e0408, 0x1a0, 0x60);
    *(vu16 *)0x5000000 = 0x7c00;
    *(vu16 *)0x5000018 = 0x7c00;
    *(vu16 *)0x5000400 = 0x7c00;
    *(vu16 *)0x5000418 = 0x7c00;
    data_0213c6cc = G2_GetBG1ScrPtr();
    data_0213c6d8 = G2S_GetBG1ScrPtr();
    func_02000f78();
    GX_DispOn();
    *(vu32 *)0x4001000 |= 0x10000;
}

void func_02000e4c(void) {
    while ((s32)*(vu16 *)0x4000006 >= 0xc0) {
    }
    while ((s32)*(vu16 *)0x4000006 < 0xc0) {
    }
}

void func_02000cd4(void) {
    u32 state = data_0213c6c0;
    u32 keys = (*(vu16 *)0x4000130 | *(vu16 *)0x27fffa8);
    u32 trig, prev, held;
    keys = (keys ^ 0x2fff) & 0x2fff;
    keys = (u16)keys & 0x3ff;
    prev = data_0213c6c4;
    trig = keys & (prev ^ keys);
    data_0213c6c4 = keys;
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
        func_02000e64();
        func_02000fc0();
        state = (u8)(state + 1);
    case 6:
        func_02000fc0();
        func_020011fc();
        held = keys & 4;
        if (held != 0) {
            if ((trig & 1) != 0 && held != 0) {
                if (OS_GetProcMode() == 0x1f) {
                    u32 a = data_021f4824;
                    u32 b = data_021f482c;
                    u32 c = data_021f4818;
                    if ((keys & 0x20) != 0) {
                        func_020e8b38(a);
                    } else if ((keys & 0x10) != 0) {
                        func_020e8b38(c);
                    } else if ((keys & 0x40) != 0) {
                        func_020e8b38(b);
                    }
                }
            }
            if ((trig & 2) != 0 && held != 0) {
                func_0204eeb0();
            }
        }
        break;
    }
    func_02000e4c();
    data_0213c6c0 = state;
}

void func_02000c9c(void) {
    vu16 *ime = (vu16 *)0x4000208;
    u64 t;
    (void)*ime;
    *ime = 0;
    t = OS_GetTick();
    data_0213c6d0 = (u32)((t << 6) / 0x82ea);
    for (;;) {
        func_02000cd4();
    }
}



void func_02000c98(void) {}

void func_02000c90(u32 *p) {
    p[0] = 0;
    p[1] = 0;
}

// shared empty destructor (other units call it by this name and by the labels on it)
void _ZN12Unk_02000c8cD1Ev(void *) {}

// the game's entry point, called by crt0 (symbols.txt: `main`; see renames.txt)
void NitroMain(void) {
    vu16 *ime;
    OS_InitTick();
    OS_InitAlarm();
    OS_InitThread();
    func_02114cd8(func_0206d774, data_021fccfc);
    ime = (vu16 *)0x4000208;
    (void)*ime;
    *ime = 1;
    func_01ffa314();
    func_0206d5c8();
    if (*(u32 *)0x27ffc20 == 1) {
        func_0206d514();
        ime = (vu16 *)0x4000208;
        (void)*ime;
        *ime = 1;
        OS_ResetSystem(2);
    }
    func_020b0b90();
    func_0206d610();
}
}
