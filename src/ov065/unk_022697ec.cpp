// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov065_0226990c_Ev {
    s16 unk_00;
    s16 unk_02;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

typedef void (*Unk_ov065_0226990c_Cb)(Unk_ov065_0226990c_Ev *);

struct Unk_ov065_022697ec_G {
    u8 pad_0000[0x2140];
    u8 unk_2140[0x2e];
    u16 unk_216e;
    u16 unk_2170;
    u8 pad_2172[0x2200 - 0x2172];
    u8 unk_2200[0x50];
    u8 unk_2250;
    u8 unk_2251;
    u8 pad_2252[0x2260 - 0x2252];
    s32 unk_2260;
    u32 unk_2264;
    u16 unk_2268;
    u8 pad_226a;
    u8 unk_226b;
    u32 unk_226c;
    u32 unk_2270;
    u32 unk_2274;
    u32 unk_2278;
    Unk_ov065_0226990c_Cb unk_227c;
    s16 unk_2280;
    u8 pad_2282[2];
    u32 unk_2284;
    void *unk_2288;
    u16 unk_228c;
    u16 unk_228e;
    u16 unk_2290;
    u8 unk_2292[6];
    u16 unk_2298;
    u16 unk_229a;
    u8 unk_229c[0x20];
    u8 unk_22bc[0x10];
    u8 unk_22cc[0x20];
};

typedef Unk_ov065_022697ec_G G;

struct Unk_ov065_02269b18_In {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
};

extern "C" {
extern G *data_ov065_022905a8;
extern u8 data_ov065_0228b2a4[];
extern u8 data_ov065_0228b2ac[];

// main module
u32 func_01ffa2ec();
void func_01ffa3d4(u32);
void func_02115094(void *);
void func_0211512c(void *, u32, u32, void *, u32);
void func_02115fb4(void *, u32, u32);
void func_02116048(void *, void *, u32);
s32 func_021202b4(void *);
u32 func_0211f5f4();
u16 *func_0211eb00();
void func_02114594(void *, u32);
s32 func_0211f188();
s32 func_021203ec(void *);
s32 func_0212035c(void *);
s32 func_02120834(void *);
s32 func_02121948(void *, u32, u32, u32, u32);
s32 func_02133150(s32, s32);

// same overlay, out of range
void func_ov065_02268c64();
void func_ov065_02268ec8();
void func_ov065_02269550();
void func_ov065_0226abf4();

// in range
void func_ov065_022697ec();
void func_ov065_02269834();
void func_ov065_02269848();
void func_ov065_0226989c(s32);
void func_ov065_0226990c(s32, s32, s32, s32, s32);
void func_ov065_02269944(s32, s32, s32, s32);
u32 func_ov065_0226997c(s32);
void func_ov065_022699d0();
void func_ov065_022699e8(u8 *, u8 *, u32);
void func_ov065_02269b18(Unk_ov065_02269b18_In *, u32);
u32 func_ov065_02269bd0();
u32 func_ov065_02269bdc(u32);
u32 func_ov065_02269c9c();
s32 func_ov065_02269cc4();
s32 func_ov065_02269e50();
s32 func_ov065_02269f24(u8 *, u8 *, u32);
s32 func_ov065_0226a0c4();
}

void func_ov065_022697ec() {
    G *g = data_ov065_022905a8;
    if (g->unk_226b == 0) {
        g->unk_226b = 1;
        if (func_021202b4((void *)func_ov065_02268c64) != 2) {
            func_ov065_0226989c(0xb);
            func_ov065_02269944(7, 0, 0, 0x611);
        }
    }
}

void func_ov065_02269834() {
    func_ov065_0226abf4();
    func_ov065_02269848();
}

void func_ov065_02269848() {
    u32 irq = func_01ffa2ec();
    G *g = data_ov065_022905a8;
    func_02115094(g->unk_22cc);
    g = data_ov065_022905a8;
    if (g->unk_2260 == 9) {
        func_0211512c(g->unk_22cc, 0x22f5341, 0, (void *)func_ov065_02269834, 0);
    }
    func_01ffa3d4(irq);
}

void func_ov065_0226989c(s32 st) {
    u32 irq = func_01ffa2ec();
    G *g = data_ov065_022905a8;
    if (g->unk_2260 == 9 && st != 9) {
        func_02115094(g->unk_22cc);
    }
    g = data_ov065_022905a8;
    if (g->unk_2260 != 0xb) {
        g->unk_2260 = st;
    }
    if (st == 9) {
        g = data_ov065_022905a8;
        func_0211512c(g->unk_22cc, 0x22f5341, 0, (void *)func_ov065_02269834, 0);
    }
    func_01ffa3d4(irq);
}

void func_ov065_0226990c(s32 a, s32 b, s32 c, s32 d, s32 e) {
    G *g = data_ov065_022905a8;
    Unk_ov065_0226990c_Cb *cb = &g->unk_227c;
    if (*cb != 0) {
        Unk_ov065_0226990c_Ev ev;
        ev.unk_00 = a;
        ev.unk_02 = b;
        ev.unk_04 = c;
        ev.unk_08 = d;
        ev.unk_0c = e;
        (*cb)(&ev);
    }
}

void func_ov065_02269944(s32 a, s32 b, s32 c, s32 d) {
    G *g = data_ov065_022905a8;
    s32 old = g->unk_2280;
    g->unk_2280 = 0;
    func_ov065_0226990c(old, a, b, c, d);
}

u32 func_ov065_0226997c(s32 a) {
    s32 i = 0;
    s32 c = a;
    u32 mask = data_ov065_022905a8->unk_2264;
    do {
        if ((mask & (1 << (c % 13 + 1))) != 0) break;
        c++;
        i++;
    } while (i < 13);
    return (u16)((a + i) % 13 + 1);
}

void func_ov065_022699d0() {
    data_ov065_022905a8->unk_2264 = 0xaaa082;
}

void func_ov065_022699e8(u8 *a, u8 *b, u32 c) {
    G *g;
    u32 t;
    func_ov065_02269bdc(c);
    g = data_ov065_022905a8;
    g->unk_2288 = (u8 *)g + 0x1500;
    data_ov065_022905a8->unk_228c = 0x400;
    data_ov065_022905a8->unk_228e = (1 << func_ov065_0226997c(0)) >> 1;
    t = data_ov065_022905a8->unk_2268;
    if (t == 0) t = func_0211f5f4();
    g = data_ov065_022905a8;
    g->unk_2290 = t;
    g = data_ov065_022905a8;
    g->unk_2298 = (g->unk_2264 & 0x300000) != 0x300000 ? 1 : 0;
    if (a == 0) {
        func_02116048(data_ov065_0228b2a4, data_ov065_022905a8->unk_2292, 6);
    } else {
        func_02116048(a, data_ov065_022905a8->unk_2292, 6);
    }
    if (b == 0 || b == data_ov065_0228b2ac) {
        func_02116048(data_ov065_0228b2ac, data_ov065_022905a8->unk_229c, 0x20);
        data_ov065_022905a8->unk_229a = 0;
    } else {
        s32 n;
        func_02116048(b, data_ov065_022905a8->unk_229c, 0x20);
        n = 0;
        for (;;) {
            if (*b == 0) break;
            b++;
            n++;
            if (n >= 0x20) break;
        }
        data_ov065_022905a8->unk_229a = n;
    }
    data_ov065_022905a8->unk_2284 = 0;
}

void func_ov065_02269b18(Unk_ov065_02269b18_In *p, u32 arg) {
    if (p == 0) {
        data_ov065_022905a8->unk_226c = 3;
        data_ov065_022905a8->unk_2270 = 0;
        data_ov065_022905a8->unk_2274 = 0;
        data_ov065_022905a8->unk_2278 = 0;
    } else {
        u32 t4;
        data_ov065_022905a8->unk_226c = p->unk_00 & 3;
        t4 = p->unk_04;
        if (((4 - (t4 & 3)) & 3) + 0xc > p->unk_08) {
            data_ov065_022905a8->unk_2270 = 0;
            data_ov065_022905a8->unk_2274 = 0;
        } else {
            data_ov065_022905a8->unk_2270 = (t4 + 3) & ~3;
            data_ov065_022905a8->unk_2274 = p->unk_08 - ((4 - (p->unk_04 & 3)) & 3);
            func_02115fb4((void *)data_ov065_022905a8->unk_2270, 0, data_ov065_022905a8->unk_2274);
        }
        data_ov065_022905a8->unk_2278 = p->unk_0c;
    }
    data_ov065_022905a8->unk_227c = (Unk_ov065_0226990c_Cb)arg;
}

u32 func_ov065_02269bd0() {
    return (u32)data_ov065_022905a8;
}

u32 func_ov065_02269bdc(u32 v) {
    u32 irq = func_01ffa2ec();
    u32 m = 0;
    G *g = data_ov065_022905a8;
    u32 old = g->unk_2264;
    if (g == 0) {
        func_01ffa3d4(irq);
        return 0;
    }
    if ((v & 0x8000) != 0) {
        m |= 0x3ffe;
        if ((v & 0x3ffe) == 0) v |= 0xa082;
    }
    if ((v & 0x20000) != 0) m |= 0x10000;
    if ((v & 0x80000) != 0) m |= 0x40000;
    if ((v & 0x200000) != 0) m |= 0x100000;
    if ((v & 0x800000) != 0) m |= 0x400000;
    g->unk_2264 = v | (old & ~m);
    func_01ffa3d4(irq);
    return old;
}

u32 func_ov065_02269c9c() {
    u32 irq = func_01ffa2ec();
    u32 r = 0;
    G *g = data_ov065_022905a8;
    if (g != 0) {
        r = g->unk_2260;
    }
    func_01ffa3d4(irq);
    return r;
}

s32 func_ov065_02269cc4() {
    u32 irq = func_01ffa2ec();
    G *g = data_ov065_022905a8;
    s32 r;
    if (g == 0) {
        func_01ffa3d4(irq);
        return 1;
    }
    switch (g->unk_2260) {
    case 13:
        func_01ffa3d4(irq);
        return 2;
    case 1:
        func_01ffa3d4(irq);
        return 0;
    case 6:
        func_ov065_0226989c(0xd);
        data_ov065_022905a8->unk_2280 = 9;
        func_01ffa3d4(irq);
        return 3;
    default:
        func_01ffa3d4(irq);
        return 1;
    case 3:
    case 9:
    case 12:
        if (g->unk_226b == 1) {
            func_ov065_0226989c(0xd);
            data_ov065_022905a8->unk_2280 = 9;
            goto done;
        } else {
            u16 *p = func_0211eb00();
            func_02114594(p, 2);
            switch (*p) {
            case 0:
                r = func_0211f188();
                if (r == 0) {
                    func_ov065_0226989c(1);
                    data_ov065_022905a8->unk_2280 = 0;
                    func_01ffa3d4(irq);
                    return 0;
                }
                break;
            case 1:
                r = func_021203ec((void *)func_ov065_02269550);
                break;
            case 2:
                r = func_0212035c((void *)func_ov065_02269550);
                break;
            default:
                data_ov065_022905a8->unk_226b = 1;
                r = func_021202b4((void *)func_ov065_02268c64);
                break;
            }
            switch (r) {
            case 2:
                func_ov065_0226989c(0xd);
                data_ov065_022905a8->unk_2280 = 9;
                goto done;
            case 8:
                func_01ffa3d4(irq);
                return 4;
            case 3:
            default:
                func_ov065_0226989c(0xb);
                func_01ffa3d4(irq);
                return 7;
            }
        }
    }
done:
    func_01ffa3d4(irq);
    return 3;
}

s32 func_ov065_02269e50() {
    u32 irq = func_01ffa2ec();
    G *g = data_ov065_022905a8;
    s32 r;
    if (g == 0) {
        func_01ffa3d4(irq);
        return 1;
    }
    switch (g->unk_2260) {
    case 10:
        func_01ffa3d4(irq);
        return 2;
    case 3:
        func_01ffa3d4(irq);
        return 0;
    default:
        func_01ffa3d4(irq);
        return 1;
    case 9:
        if (g->unk_226b == 1) {
            func_ov065_0226989c(0xa);
            data_ov065_022905a8->unk_2280 = 6;
        } else {
            r = func_02120834((void *)func_ov065_02268ec8);
            switch (r) {
            case 2:
                func_ov065_0226989c(0xa);
                data_ov065_022905a8->unk_2280 = 6;
                break;
            case 8:
                func_01ffa3d4(irq);
                return 4;
            case 3:
            default:
                func_ov065_0226989c(0xb);
                func_01ffa3d4(irq);
                return 7;
            }
        }
        func_01ffa3d4(irq);
        return 3;
    }
}

s32 func_ov065_02269f24(u8 *a, u8 *b, u32 c) {
    u32 irq;
    G *g;
    s32 r;
    irq = func_01ffa2ec();
    g = data_ov065_022905a8;
    if (g == 0) {
        func_01ffa3d4(irq);
        return 1;
    }
    switch (g->unk_2260) {
    case 3:
        if (a == 0) {
            func_01ffa3d4(irq);
            return 1;
        }
        if (*(u16 *)(a + 0x3c) != 0) {
            func_01ffa3d4(irq);
            return 1;
        }
        if (b != 0) {
            u32 x = b[0];
            if (x >= 4 || b[1] >= 4) {
                func_01ffa3d4(irq);
                return 1;
            }
            g->unk_2250 = x;
            data_ov065_022905a8->unk_2251 = b[1];
            g = data_ov065_022905a8;
            if (g->unk_2250 == 0) {
                func_02115fb4(g->unk_2200, 0, 0x50);
            } else {
                func_02116048(b + 2, g->unk_2200, 0x50);
            }
        } else {
            func_02115fb4(g->unk_2200, 0, 0x52);
        }
        func_02116048(a, data_ov065_022905a8->unk_2140, 0xc0);
        g = data_ov065_022905a8;
        g->unk_2170 = g->unk_216e | 3;
        func_ov065_02269bdc(c);
        break;
    case 8:
        func_01ffa3d4(irq);
        return 2;
    case 9:
        func_01ffa3d4(irq);
        return 0;
    default:
        func_01ffa3d4(irq);
        return 1;
    }
    r = func_02121948((void *)func_ov065_02269550, 0xffff, 0x50, 0xffff, 0xffff);
    switch (r) {
    case 2:
        func_ov065_0226989c(8);
        data_ov065_022905a8->unk_2280 = 5;
        break;
    case 8:
        func_01ffa3d4(irq);
        return 4;
    case 3:
    default:
        func_ov065_0226989c(0xb);
        func_01ffa3d4(irq);
        return 7;
    }
    func_01ffa3d4(irq);
    return 3;
}

s32 func_ov065_0226a0c4() {
    u32 irq = func_01ffa2ec();
    G *g = data_ov065_022905a8;
    if (g == 0) {
        func_01ffa3d4(irq);
        return 1;
    }
    switch (g->unk_2260) {
    case 6:
        func_ov065_0226989c(7);
        data_ov065_022905a8->unk_2280 = 4;
        break;
    case 7:
        func_01ffa3d4(irq);
        return 2;
    case 3:
        func_01ffa3d4(irq);
        return 0;
    default:
        func_01ffa3d4(irq);
        return 1;
    }
    func_01ffa3d4(irq);
    return 3;
}
