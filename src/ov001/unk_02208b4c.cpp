// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_02208b4c_Reg { u32 w0; u16 h4; };
struct Unk_ov001_02208b4c_Obj { Unk_ov001_02208b4c_Reg *reg; u32 unk_04; s8 unk_08; };

struct Unk_ov001_0222dddc {
    void *unk_000[3][4];
    void *unk_030[0x2f];
    void *unk_0ec[4];
    void *unk_0fc[2];
    void *unk_104[4];
    void *unk_114;
    u8 pad_118[5];
    u8 unk_11d;
    u8 pad_11e[2];
    s8 unk_120;
    s8 unk_121;
};

struct Unk_ov001_0220943c_Pair { u16 a; u16 b; };

extern "C" {
extern Unk_ov001_02208b4c_Obj *data_ov001_0222ddd8;
extern u8 data_ov001_02229bd0[][4];
extern u16 data_ov001_02229bcc[];
extern void *func_ov001_02225dd8(s32, s32);
extern Unk_ov001_02208b4c_Reg *func_ov001_02224b60(s32, s32);
extern u32 func_ov001_02227094(s32, void *, s32, s32);
void func_ov001_02208a24();
extern Unk_ov001_0222dddc *data_ov001_0222dddc;
extern s8 data_ov001_02229db8[][4];
extern Unk_ov001_0220943c_Pair data_ov001_02229ce4[];
void func_ov001_02225718(void *);
void func_ov001_022247e0(void *);
void func_ov001_022267c8(void *);
void func_ov001_02225d58(void *);
void func_ov001_02226fdc(s32, s32);
void func_ov001_02226ffc(s32, void *);
void func_ov001_02209698(u32, s32, s32);

void func_ov001_02208d10(s32);
void func_ov001_02208d94(s32);
void func_ov001_02208e18(s32);
void func_ov001_02208e9c(s32);
u32 *func_ov001_022247d4(void *, s32);
void func_ov001_02224b9c(s32, s32, void *);
void func_ov001_022244d8(void *, s32, s32);
void func_ov001_02224558(void *, s32, u32, u32);
void func_ov001_0221e9a0(s32);
void func_ov001_0220943c();

void func_ov001_02208b4c(s32 a) {
    if (data_ov001_0222ddd8 != NULL) {
        return;
    }
    data_ov001_0222ddd8 = (Unk_ov001_02208b4c_Obj *)func_ov001_02225dd8(0xc, 4);
    data_ov001_0222ddd8->unk_08 = a;
    data_ov001_0222ddd8->reg = func_ov001_02224b60(0, data_ov001_02229bd0[a][0]);
    data_ov001_0222ddd8->reg->w0 = (data_ov001_0222ddd8->reg->w0 & 0xfe00ff00) | (data_ov001_02229bcc[1] & 0xff) | ((data_ov001_02229bcc[0] & 0x1ff) << 16);
    data_ov001_0222ddd8->reg->h4 = (data_ov001_0222ddd8->reg->h4 & ~0xc00) | 0x800;
    data_ov001_0222ddd8->unk_04 = func_ov001_02227094(0, (void *)func_ov001_02208a24, 0, 0x78);
}

void func_ov001_02208c2c(s32 a) {
    s32 i, j;
    func_ov001_02226fdc(0, a);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            func_ov001_02225718(data_ov001_0222dddc->unk_000[i][j]);
            if (i == 0) {
                func_ov001_022247e0(data_ov001_0222dddc->unk_104[j]);
            }
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov001_022247e0(data_ov001_0222dddc->unk_0fc[i]);
    }
    for (i = 0; i < 4; i++) {
        func_ov001_022267c8(data_ov001_0222dddc->unk_0ec[i]);
    }
    for (i = 0; i < 0x2f; i++) {
        func_ov001_022267c8(data_ov001_0222dddc->unk_030[i]);
    }
    func_ov001_02225d58(&data_ov001_0222dddc);
}

#define STATE_FN(NAME, OFF, IDX, NEXT) \
void NAME(s32 a) { \
    volatile s32 xy[2]; \
    Unk_ov001_0222dddc *g = data_ov001_0222dddc; \
    u32 *reg = (u32 *)g->unk_030[OFF]; \
    s32 t; \
    xy[0] = (*(volatile u32 *)reg & 0x1ff0000) >> 16; \
    t = *(volatile u32 *)reg & 0xff; \
    xy[1] = t; \
    t += 0xc; \
    xy[1] = t; \
    func_ov001_02209698(g->unk_11d, IDX, t); \
    if (xy[1] < 0xc0) { \
        return; \
    } \
    func_ov001_02226ffc(a, (void *)NEXT); \
}

STATE_FN(func_ov001_02208d10, 0, 0, func_ov001_02208c2c)
STATE_FN(func_ov001_02208d94, 0xc, 1, func_ov001_02208d10)
STATE_FN(func_ov001_02208e18, 0x18, 2, func_ov001_02208d94)
STATE_FN(func_ov001_02208e9c, 0x24, 3, func_ov001_02208e18)

void func_ov001_02208f20(s32 a) {
    volatile s32 xy[2];
    u32 *reg = func_ov001_022247d4(data_ov001_0222dddc->unk_0fc[0], 0);
    s32 t;
    xy[0] = (*(volatile u32 *)reg & 0x1ff0000) >> 16;
    t = *(volatile u32 *)reg & 0xff;
    xy[1] = t;
    t += 0xc;
    xy[1] = t;
    func_ov001_02209698(data_ov001_0222dddc->unk_11d, 4, t);
    if (xy[1] < 0xc0) {
        return;
    }
    func_ov001_02226ffc(a, (void *)func_ov001_02208e9c);
}

void func_ov001_02208fb4(s32 a) {
    Unk_ov001_0222dddc *g = data_ov001_0222dddc;
    s32 prev = g->unk_121;
    s32 cur;
    g->unk_121 = data_ov001_02229db8[prev][a];
    g = data_ov001_0222dddc;
    cur = g->unk_121;
    if (cur == 0x2e && a == 3) {
        g->unk_120 = prev;
        goto end;
    }
    if (cur == 0x33 && (a == 1 || a == 3)) {
        g->unk_120 = prev;
        goto end;
    }
    if (cur == 0x34 && (a == 1 || a == 3)) {
        if (prev != 0x2e) {
            g->unk_120 = prev;
        }
        goto end;
    }
    if (cur == -1) {
        s32 v = g->unk_120;
        if (v == 0x23 || v == 0x32) {
            g->unk_121 = 0x23;
        } else {
            g->unk_121 = 0x22;
        }
    } else if (cur == -2) {
        switch (g->unk_120) {
        case 0:
        case 0x31:
            g->unk_121 = 0x31;
            break;
        case 1:
        case 0x24:
            g->unk_121 = 0x24;
            break;
        case 3:
        case 0x26:
            g->unk_121 = 0x26;
            break;
        case 4:
        case 0x27:
            g->unk_121 = 0x27;
            break;
        case 5:
        case 0x28:
            g->unk_121 = 0x28;
            break;
        default:
            g->unk_121 = 0x25;
            break;
        }
    } else if (cur == -3) {
        switch (g->unk_120) {
        case 6:
        case 0x29:
            g->unk_121 = 0x29;
            break;
        case 7:
        case 0x2a:
            g->unk_121 = 0x2a;
            break;
        case 9:
        case 0x2c:
            g->unk_121 = 0x2c;
            break;
        case 10:
        case 0x2d:
            g->unk_121 = 0x2d;
            break;
        case 0xb:
        case 0x22:
        case 0x23:
        case 0x32:
            g->unk_121 = 0x2e;
            break;
        default:
            g->unk_121 = 0x2b;
            break;
        }
    } else if (cur == -4) {
        switch (g->unk_120) {
        case 0:
        case 0x31:
            g->unk_121 = 0;
            break;
        case 1:
        case 0x24:
            g->unk_121 = 1;
            break;
        case 3:
        case 0x26:
            g->unk_121 = 3;
            break;
        case 4:
        case 0x27:
            g->unk_121 = 4;
            break;
        case 5:
        case 0x28:
            g->unk_121 = 5;
            break;
        default:
            g->unk_121 = 2;
            break;
        }
    } else if (cur == -5) {
        switch (g->unk_120) {
        case 6:
        case 0x29:
            g->unk_121 = 6;
            break;
        case 7:
        case 0x2a:
            g->unk_121 = 7;
            break;
        case 9:
        case 0x2c:
            g->unk_121 = 9;
            break;
        case 10:
        case 0x2d:
            g->unk_121 = 10;
            break;
        case 0xb:
        case 0x22:
            g->unk_121 = 0xb;
            break;
        case 0x23:
        case 0x32:
            g->unk_121 = 0x32;
            break;
        default:
            g->unk_121 = 8;
            break;
        }
    }
end:
    func_ov001_0220943c();
    func_ov001_0221e9a0(8);
}

void func_ov001_0220943c() {
    Unk_ov001_0222dddc *g = data_ov001_0222dddc;
    s32 k;
    switch (g->unk_121) {
    case 0x2f:
        k = 0x42;
        break;
    case 0x30:
        k = 0x41;
        break;
    case 0x31:
        k = 0x43;
        break;
    case 0x32:
        k = 0x41;
        break;
    case 0x33:
    case 0x34:
        k = 0x45;
        break;
    default:
        k = 0x40;
        break;
    }
    func_ov001_02224b9c(0, k, func_ov001_022247d4(g->unk_114, 0));
    func_ov001_022244d8(data_ov001_0222dddc->unk_114, -1, 2);
    g = data_ov001_0222dddc;
    func_ov001_02224558(g->unk_114, -1, data_ov001_02229ce4[g->unk_121].a, data_ov001_02229ce4[g->unk_121].b);
}
}
