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

struct Unk_0213c790 {
    u8 pad_00[0x12];
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
    u8 unk_15;
};

struct Unk_0213c770 {
    u8 pad_00[0x14];
    u8 unk_14;
    u8 unk_15;
    u8 pad_16[2];
    u8 unk_18;
    u8 unk_19;
};

extern "C" {
extern Unk_0213c790 data_0213c790;
extern Unk_0213c770 data_0213c770;

extern u8 data_0213c6c0;
extern u32 data_0213c6c4;
extern u32 data_0213c6c8;
extern u32 data_0213c6cc;
extern u32 data_0213c6d0;
extern u32 data_0213c6d4;
extern u32 data_0213c6d8;
extern u32 *data_0213c6dc;
extern const char *data_0213c6e0;
extern u32 data_0213c6e4;
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
extern char data_020d1f60[], data_020d1f68[], data_020d1f78[], data_020d1f90[], data_020d1f9c[], data_020d1fa8[],
    data_020d1fb4[], data_020d1fc0[], data_020d1fcc[], data_020d1fd4[], data_020d1fe4[], data_020d1ff0[],
    data_020d1ffc[], data_020d200c[], data_020d2018[], data_020d2020[], data_021c21e4[], data_020c6108[];
extern u16 data_020de408[], data_020e0408[];

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
void func_020013f8(void);
void func_0200151c(u32 a);
void func_0200152c(u32 a);
void func_02001698(u32 a);
void func_020016b0(u32 a);

u64 func_01ffa6b4(void);
u32 func_01ffa3b4(void);
void func_01ffa2ec(void);
void func_020535e0(void);
void func_021101f4(u32 a);
void func_0210f900(u32 a);
void func_021117fc(void *a, u32 b, u32 c);
void func_02111794(void *a, u32 b, u32 c);
void func_02111ec8(void *a, u32 b, u32 c);
void func_02111e60(void *a, u32 b, u32 c);
u32 func_02110994(void);
u32 func_02110974(void);
void func_0210f154(void);
void func_02115ea8(u32 a);
void func_020b82b8(Unk_02000fc0_Col *c, u8 *dst, const char *fmt, ...);
void func_020b82d8(Unk_02000fc0_Col *c, u8 *dst, const char *fmt);
u32 func_020ed754(u32 a);
u32 func_021122b0(void);
u32 func_02113438(Unk_02000fc0_Node *a);
void func_020e8b38(u32 a);
void func_0204eeb0(void);
u8 *func_02114b10(void);
void func_02110abc(u32 a, u32 b, u32 c);
void func_02110a64(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_021127c0(const char *a, u32 b, const char *c, void *d);
s32 func_0206d49c(void);
u32 func_02132ef8(u64 a, u64 b);

void func_02000c8c(void) {}

void func_02000c90(u32 *p) {
    p[0] = 0;
    p[1] = 0;
}

void func_02000c98(void) {}

void func_02000c9c(void) {
    vu16 *ime = (vu16 *)0x4000208;
    u64 t;
    (void)*ime;
    *ime = 0;
    t = func_01ffa6b4();
    data_0213c6d0 = func_02132ef8(t << 6, 0x82ea);
    for (;;) {
        func_02000cd4();
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
                if (func_01ffa3b4() == 0x1f) {
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

void func_02000e4c(void) {
    while ((s32)*(vu16 *)0x4000006 >= 0xc0) {
    }
    while ((s32)*(vu16 *)0x4000006 < 0xc0) {
    }
}

void func_02000e64(void) {
    func_020535e0();
    *(vu16 *)0x4000304 |= 1;
    *(vu16 *)0x4000050 = 0;
    *(vu16 *)0x4001050 = 0;
    func_021101f4(0x40);
    func_0210f900(0x80);
    *(vu32 *)0x4000000 = (*(vu32 *)0x4000000 & 0xffffe0ff) | 0x200;
    *(vu32 *)0x4001000 = (*(vu32 *)0x4001000 & 0xffffe0ff) | 0x200;
    *(vu16 *)0x400000a = (*(vu16 *)0x400000a & 0x43) | 0x400;
    *(vu16 *)0x400100a = (*(vu16 *)0x400100a & 0x43) | 0x400;
    func_021117fc(data_020de408, 0, 0x1000);
    func_02111794(data_020de408, 0, 0x1000);
    func_02111ec8(data_020e0408, 0x1a0, 0x60);
    func_02111e60(data_020e0408, 0x1a0, 0x60);
    *(vu16 *)0x5000000 = 0x7c00;
    *(vu16 *)0x5000018 = 0x7c00;
    *(vu16 *)0x5000400 = 0x7c00;
    *(vu16 *)0x5000418 = 0x7c00;
    data_0213c6cc = func_02110994();
    data_0213c6d8 = func_02110974();
    func_02000f78();
    func_0210f154();
    *(vu32 *)0x4001000 |= 0x10000;
}

void func_02000f78(void) {
    u32 t = data_0213c6d8;
    func_02000fac(0x7f007f, data_0213c6cc, 0x800);
    func_02000fac(0x7f007f, t, 0x800);
}

void func_02000fac(u32 a, u32 b, u32 c) {
    volatile u32 v = a;
    func_02115ea8(v);
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
    func_020b82b8(&col, buf + 0x40, data_020d1f60, data_0213c6d0);
    func_020b82d8(&col, buf, data_021c21e4);
    n = data_0213b1a4;
    if (n != 0 && (s32)n < 6) {
        func_020b82b8(&col, buf + 0x180, data_020d1f68, n, func_020ed754(n));
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
        func_020b82b8(&col, buf + 0x1c0, data_020d1f78, v, data_021f5974);
    }
    p6 = data_0213c6dc;
    if (p6 != NULL) {
        for (i = 0; (u32)i < 0x12; i++) {
            func_020b82b8(&col, buf + ((i + 2) << 6) + 0x28, data_020d1f90, data_020c6108 + i * 3, p6[i]);
        }
        p6 = data_0213c6dc;
        q = &p6[0x19];
        func_020b82b8(&col, buf + 0x528, data_020d1f9c, p6[0x19]);
        func_020b82b8(&col, buf + 0x568, data_020d1fa8, q[1]);
    } else {
        func_020b82b8(&col, buf + 0x428, data_020d1fb4, data_0213c6d4);
        func_020b82b8(&col, buf + 0x4a8, data_020d1fc0, data_0213c6c8);
    }
    r = data_0213c6e8;
    if (r != 0) {
        func_020b82b8(&col, buf + 0x480, data_020d1fcc, r, data_0213c6e4);
        func_020b82d8(&col, buf + 0x4c0, data_0213c6e0);
    }
    r = func_01ffa3b4();
    thr = data_021fcc2c[1];
    func_020b82b8(&col, buf + 0x80, data_020d1fd4, thr->unk_6c, r);
    func_020b82b8(&col, buf + 0xc0, data_020d1fe4, thr->unk_90, thr->unk_94);
    r = func_021122b0();
    if (r != 0) {
        func_020b82b8(&col, buf + 0x100, data_020d1ff0, r);
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
            func_020b82b8(&col, buf + 0x100, data_020d1ffc, r, node->unk_6c, ((Unk_02000fc0_Thr *)node)->unk_98);
        }
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
    func_020b82b8(&col, buf + 0x40, data_020d200c, v);
    if (func_020012c0(v, 4)) {
        func_02001264(buf + 0x80, v, 0x160);
    }
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
        func_020b82b8(&col, dst, data_020d2018, *p);
        dst += 0x10;
        color ^= 0x3000;
        p++;
    }
}

BOOL func_020012c0(u32 addr, u32 len) {
    u32 end = addr + len;
    u8 *base = func_02114b10();
    u32 lim2 = (u32)base + 0x4000;
    u32 lim1 = data_021fce88 != 0 ? 0x27e0000 : 0x23ff000;
    if ((addr >= 0x2000000 && end <= lim1) || ((u32)base <= addr && end <= lim2)) {
        return TRUE;
    }
    return FALSE;
}

void func_02001314(const char *fmt, ...) {
    u32 *ap = (u32 *)(((u32)&fmt) & ~3) + 1;
    func_02001338(data_020d2020, 0, fmt, ap);
}

void func_02001338(const char *a, u32 b, const char *c, void *d) {
    func_01ffa2ec();
    data_0213c6e8 = (u32)a;
    data_0213c6e4 = b;
    data_0213c6e0 = data_02135f44;
    func_021127c0(data_02135f44, 0x80, c, d);
    func_0206d49c();
}

void func_0200137c(void) { data_0213c790.unk_12 |= 0x20; }

void func_0200138c(u8 a, u8 b, u8 c) {
    data_0213c790.unk_13 = a;
    data_0213c790.unk_14 = b;
    data_0213c790.unk_15 = c;
    data_0213c790.unk_12 |= 0x10;
}

void func_020013a4(void) { data_0213c790.unk_12 |= 2; }

void func_020013b4(u8 a, u8 b, u8 c) {
    data_0213c790.unk_13 = a;
    data_0213c790.unk_14 = b;
    data_0213c790.unk_15 = c;
    data_0213c790.unk_12 |= 8;
}

void func_020013cc(u8 a) {
    data_0213c790.unk_14 = a;
    data_0213c790.unk_12 |= 4;
}

void func_020013e0(u8 a) {
    data_0213c790.unk_13 &= ~a;
    data_0213c790.unk_12 |= 4;
}

void func_020013f8(void) {
    data_0213c790.unk_13 = 0x1f;
    data_0213c790.unk_12 |= 4;
}

void func_0200140c(void) {
    func_0200151c(4);
    data_0213c790.unk_12 |= 2;
}

void func_0200142c(void) {
    func_020013f8();
    func_020016b0(0x1f);
    func_02001698(0x10);
    func_0200152c(4);
    data_0213c790.unk_12 |= 1;
}

void func_0200145c(u32 a) {
    if (a != 0) {
        func_02110abc(0x4000050, 0x3f, a);
        func_02110abc(0x4001050, 0x3f, a);
    } else {
        func_02110a64(0x4000050, 0x1f, 0x20, 0x10, 0x10, a);
        func_02110a64(0x4001050, 0x1f, 0x20, 0x10, 0x10, a);
    }
}

void func_020014ac(u8 a) { data_0213c770.unk_15 &= ~a; }
void func_020014bc(u8 a) { data_0213c770.unk_15 |= a; }
void func_020014cc(u8 a) { data_0213c770.unk_15 = a; }
u8 func_020014d8(void) { return data_0213c770.unk_15; }
void func_020014e4(u8 a) { data_0213c770.unk_14 &= ~a; }
void func_020014f4(u8 a) { data_0213c770.unk_14 |= a; }
void func_02001504(u8 a) { data_0213c770.unk_14 = a; }
u8 func_02001510(void) { return data_0213c770.unk_14; }
void func_0200151c(u32 a) { data_0213c770.unk_19 &= ~a; }
void func_0200152c(u32 a) { data_0213c770.unk_19 |= a; }
}
