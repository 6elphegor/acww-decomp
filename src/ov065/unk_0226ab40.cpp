// mwcc-flags: -O4,p
#include "types.h"

// ov065_019: network library, connection/event state (0x0226ab40..0x0226b3c4)

struct Unk_ov065_0226ab5c_Conn {
    u8 unk_0000[0xf00];
    u8 unk_0f00[0x1244];
    u8 unk_2144[6];
    u16 unk_214a;
    u8 unk_214c[0x114];
    s32 unk_2260;
    u8 unk_2264[7];
    u8 unk_226b;
};

typedef void (*Unk_ov065_0226ac54_Cb)(void *, void *, void *, u32);

struct Unk_ov065_0226ab40_Glb {
    u8 unk_00;
    u8 unk_01[3];
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c[0x18];
    u32 unk_24;
    Unk_ov065_0226ac54_Cb unk_28;
};

struct Unk_ov065_0226aed4_Fc {
    void *(*unk_00)(u32, u32);
    void (*unk_04)(u32, void *, u32);
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u32 unk_0c;
    u8 unk_10[4];
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17;
};

struct Unk_ov065_0226b27c_Cfg {
    void *(*unk_00)(u32, u32);
    void (*unk_04)(u32, void *, u32);
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
};

struct Unk_ov065_0226b27c_F8 {
    void *(*unk_00)(u32, u32);
    void (*unk_04)(u32, void *, u32);
    u32 unk_08;
};

struct Unk_ov065_0226b27c_B0b {
    u8 lo : 2;
};

struct Unk_ov065_0226b27c_B0c {
    u8 lo : 4;
    u8 mid : 2;
};

struct Unk_ov065_0226b3c4_Key {
    u8 unk_00[4];
};

struct Unk_ov065_0226b3c4_Rec {
    u8 unk_00[0xc0];
};

extern "C" {

extern Unk_ov065_0226ab40_Glb data_ov065_022905ac;
extern u8 data_ov065_022905b8[];
extern volatile u8 data_ov065_022905d8;
extern u8 data_ov065_022905dc[];
extern u8 *data_ov065_022905ec;
extern void *data_ov065_022905f0;
extern void *data_ov065_022905f4;
extern Unk_ov065_0226b27c_F8 *data_ov065_022905f8;
extern Unk_ov065_0226aed4_Fc *data_ov065_022905fc;

u32 func_01ffa2ec();
void func_01ffa3d4(u32);
s32 func_02133150(s32, s32);
void func_0211450c(void *);
s32 func_0211acbc();
s32 func_0211ad80();
s32 func_0211ae74();
void func_02115e64(u32, void *, u32);
void func_02115e78(void *, void *, u32);
s32 func_0212a15c(void *, void *, u32);
s32 func_021208bc(void *, void *, void *, u32);
void func_020ff154();

Unk_ov065_0226ab5c_Conn *func_ov065_02269bd0();
s32 func_ov065_0226a510(void *, u32);
s32 func_ov065_0226a97c(void *);
s32 func_ov065_0226a9a8(void *);
void func_ov065_0226a9d4();
s32 func_ov065_0226bd18(u8 *);
s32 func_ov065_0226be9c();
u8 func_ov065_0226bee4();
u8 func_ov065_0226bc40();
u8 func_ov065_0226c1e0();
u8 func_ov065_0226c8a4();
u8 func_ov065_0226c924();
u8 func_ov065_0226ccc8();

u8 func_ov065_0226ad30();

void func_ov065_0226ab40(Unk_ov065_0226ac54_Cb cb) {
    u32 irq = func_01ffa2ec();
    data_ov065_022905ac.unk_28 = cb;
    func_01ffa3d4(irq);
}

u8 *func_ov065_0226ab5c(u16 *out) {
    u8 *r7 = 0;
    u32 r6 = 0;
    Unk_ov065_0226ab5c_Conn *c = func_ov065_02269bd0();
    u32 irq = func_01ffa2ec();
    if (c != 0 && c->unk_2260 == 9 && c->unk_226b == 0) {
        r7 = c->unk_214c;
        r6 = c->unk_214a;
    }
    func_01ffa3d4(irq);
    if (out != 0) {
        *out = r6;
    }
    return r7;
}

u8 *func_ov065_0226abb0() {
    u8 *r5 = 0;
    Unk_ov065_0226ab5c_Conn *c = func_ov065_02269bd0();
    u32 irq = func_01ffa2ec();
    if (c != 0 && c->unk_2260 == 9 && c->unk_226b == 0) {
        r5 = c->unk_2144;
    }
    func_01ffa3d4(irq);
    return r5;
}

void func_ov065_0226abf4() {
    Unk_ov065_0226ab5c_Conn *c = func_ov065_02269bd0();
    if (c != 0 && c->unk_2260 == 9 && c->unk_226b != 1) {
        if (func_ov065_0226a9a8(data_ov065_022905b8) != 0) {
            if (func_021208bc((void *)func_ov065_0226a9d4, c->unk_2144, c->unk_0f00, 0) != 2) {
                func_ov065_0226a97c(data_ov065_022905b8);
            }
        }
    }
}

void func_ov065_0226ac54(u8 *p) {
    Unk_ov065_0226ac54_Cb cb = data_ov065_022905ac.unk_28;
    if (cb != 0) {
        cb(p + 0x1e, p + 0x18, p + 0x2c, *(u16 *)(p + 6));
    }
}

void func_ov065_0226ac7c() {
    if (data_ov065_022905ac.unk_00 == 0) {
        data_ov065_022905ac.unk_00 = 1;
        data_ov065_022905ac.unk_24 = 0;
        data_ov065_022905ac.unk_08 = 0;
        data_ov065_022905ac.unk_04 = 0;
        func_0211450c(data_ov065_022905b8);
    }
}

void func_ov065_0226aca8(s32 v) {
    u32 c;
    u8 idx;
    if ((v & 2) != 0) {
        c = ((u32)v << 22) >> 24;
    } else {
        c = (u8)((v >> 2) + 0x19);
    }
    idx = data_ov065_022905d8;
    data_ov065_022905dc[idx % 16] = c;
    if (idx >= 16) {
        data_ov065_022905d8 = (idx + 1) % 16 + 16;
    } else {
        data_ov065_022905d8 = data_ov065_022905d8 + 1;
    }
}

u32 func_ov065_0226ad08() {
    u32 n = func_ov065_0226ad30();
    u32 r = 0;
    if (n >= 0x1c) {
        r = 3;
    } else if (n >= 0x16) {
        r = 2;
    } else if (n >= 0x10) {
        r = 1;
    }
    return r;
}

u8 func_ov065_0226ad30() {
    u32 sum = 0;
    u8 cnt = data_ov065_022905d8;
    s32 i;
    if (cnt > 16) {
        u8 *p;
        i = sum;
        p = data_ov065_022905dc;
        for (; i < 16; p++, i++) {
            sum += *p;
        }
        sum = func_02133150(sum, 16);
    } else if (cnt != 0) {
        for (i = sum; i < cnt; i++) {
            sum += data_ov065_022905dc[i];
        }
        sum = func_02133150(sum, cnt);
    }
    return sum;
}

s32 func_ov065_0226ad84() {
    u32 irq = func_01ffa2ec();
    Unk_ov065_0226ab5c_Conn *c = func_ov065_02269bd0();
    s32 r = 0;
    if (c != 0 && c->unk_2260 == 9) {
        r = func_ov065_0226ad08();
    }
    func_01ffa3d4(irq);
    return r;
}

BOOL func_ov065_0226adbc(u8 *a, u8 *b) {
    s32 i;
    for (i = 0; i < 6; i++) {
        if (a[i] != b[i]) {
            return FALSE;
        }
    }
    return TRUE;
}

s32 func_ov065_0226ade0() {
    return func_0211acbc();
}

s32 func_ov065_0226ade8() {
    return func_0211ad80();
}

s32 func_ov065_0226adf0() {
    return func_0211ae74();
}

s32 func_ov065_0226adf8() {
    u8 *e = data_ov065_022905ec;
    u8 *cur = e + 0x474;
    u8 idx = e[0xd13];
    cur += idx * 0xc0;
    u32 i;
    u32 n;
    if (e[0xd0d] >= 6) {
        return 1;
    }
    i = 0;
    n = e[0xd12];
    for (; i < n; i = (u8)(i + 1)) {
        if (i != (u32)idx && (e + i * 4)[0x445] < 6) {
            if (func_0212a15c(cur, e + 0x474 + i * 0xc0, *(u16 *)(e + i * 0xc0 + 0x47a)) == 0) {
                return 2;
            }
        }
    }
    return 1;
}

void func_ov065_0226b084(u32, void *, u32);

void func_ov065_0226ae98() {
    func_ov065_0226b084(8, data_ov065_022905f8, 0xc);
    func_ov065_0226b084(0x10, data_ov065_022905ec, 0xd18);
}

u32 func_ov065_0226aec8(u32 x) {
    if (x > 2) {
        x = (u8)(x - 3);
    }
    return x;
}

u8 func_ov065_0226af18();
void *func_ov065_0226af74(u32);

void func_ov065_0226aed4(u32 v) {
    data_ov065_022905fc->unk_17 = func_ov065_0226aec8(v);
}

u32 func_ov065_0226aeec() {
    return data_ov065_022905fc->unk_0c;
}

void func_ov065_0226aef8(u32 v) {
    Unk_ov065_0226aed4_Fc *f = (Unk_ov065_0226aed4_Fc *)func_ov065_0226af74(1);
    f->unk_0c = v;
    f->unk_0a = func_ov065_0226af18();
}

u8 func_ov065_0226af18() {
    return data_ov065_022905fc->unk_09;
}

void func_ov065_0226af24(u8 v) {
    Unk_ov065_0226aed4_Fc *f = (Unk_ov065_0226aed4_Fc *)func_ov065_0226af74(1);
    u8 *e = (u8 *)func_ov065_0226af74(0x10);
    f->unk_09 = v;
    if (v < 0x10 && v > f->unk_16) {
        f->unk_16 = v;
        if (v > 7) {
            f->unk_15 = func_ov065_0226aec8(e[0xd0d]);
            f->unk_14 = (e + e[0xd13] * 4)[0x444];
        }
    }
}

void *func_ov065_0226af74(u32 m) {
    if ((m & 1) != 0) {
        return data_ov065_022905fc;
    }
    if ((m & 2) != 0) {
        return data_ov065_022905f0;
    }
    if ((m & 4) != 0) {
        return data_ov065_022905f4;
    }
    if ((m & 8) != 0) {
        return data_ov065_022905f8;
    }
    if ((m & 0x10) != 0) {
        return data_ov065_022905ec;
    }
    return 0;
}

void func_ov065_0226afdc() {
    Unk_ov065_0226aed4_Fc *f = (Unk_ov065_0226aed4_Fc *)func_ov065_0226af74(1);
    if ((f->unk_08 & 0x10) != 0) {
        void *o = func_ov065_0226af74(0x10);
        f->unk_08 &= ~0x10;
        f->unk_04(0x10, o, 0xd18);
    }
    if ((f->unk_08 & 8) != 0) {
        void *o = func_ov065_0226af74(8);
        f->unk_08 &= ~8;
        f->unk_04(8, o, 0xc);
    }
    if ((f->unk_08 & 4) != 0) {
        void *o = func_ov065_0226af74(4);
        f->unk_08 &= ~4;
        f->unk_04(4, o, 0x58);
    }
    if ((f->unk_08 & 2) != 0) {
        void *o = func_ov065_0226af74(2);
        f->unk_08 &= ~2;
        f->unk_04(2, o, 0x2300);
    }
    if ((f->unk_08 & 1) != 0) {
        f->unk_08 &= ~1;
        f->unk_04(1, f, 0x18);
    }
}

void func_ov065_0226b084(u32 m, void *a, u32 b) {
    Unk_ov065_0226aed4_Fc *f = (Unk_ov065_0226aed4_Fc *)func_ov065_0226af74(1);
    if ((f->unk_08 & m) != 0) {
        f->unk_08 &= ~m;
        f->unk_04(m, a, b);
    }
}

void *func_ov065_0226b0b4(u32 m, u32 a) {
    Unk_ov065_0226aed4_Fc *f = (Unk_ov065_0226aed4_Fc *)func_ov065_0226af74(1);
    if ((f->unk_08 & m) == 0) {
        f->unk_08 |= m;
        return f->unk_00(m, a);
    }
    return 0;
}

void func_ov065_0226b0ec(u32 idx, void *dst) {
    u8 *p = (u8 *)func_ov065_0226af74(0x10);
    func_02115e78(dst, p + (idx << 8), 0xf0);
}

s32 func_ov065_0226b110() {
    u8 st = func_ov065_0226af18();
    if (st == 0 || st == 0x12) {
        func_ov065_0226afdc();
        return 1;
    }
    func_ov065_0226bd18(&st);
    func_ov065_0226af24(st);
    return 0;
}

u32 func_ov065_0226b148() {
    u32 r = 0xff;
    u32 n = func_ov065_0226af18();
    if (n >= 0xa && n <= 0x10) {
        r = data_ov065_022905fc->unk_17;
    }
    return r;
}

s32 func_ov065_0226b16c() {
    u32 n = func_ov065_0226af18();
    if (n <= 1) {
        return 0;
    }
    if (n < 7) {
        return 1;
    }
    if (n == 9) {
        return 4;
    }
    if (n < 10) {
        return 2;
    }
    if (n == 11) {
        return 4;
    }
    if (n < 16) {
        return 3;
    }
    if (n == 16) {
        return 5;
    }
    if (n == 17) {
        return 4;
    }
    return func_ov065_0226be9c();
}

s32 func_ov065_0226b1e0() {
    u8 st = func_ov065_0226af18();
    u8 r = st;
    if (st == 1) {
        r = func_ov065_0226c924();
    } else if (st < 7) {
        u32 irq = func_01ffa2ec();
        r = func_ov065_0226c8a4();
        func_ov065_0226af24(r);
        func_01ffa3d4(irq);
    } else if (st < 9) {
        r = func_ov065_0226bc40();
    } else if (st < 10) {
        r = func_ov065_0226c1e0();
    } else if (st < 16) {
        r = func_ov065_0226ccc8();
    } else if (st == 17) {
        r = func_ov065_0226bee4();
    }
    func_ov065_0226af24(r);
    if (r == 16) {
        s32 t = func_ov065_0226adf8();
        func_ov065_0226ae98();
        return t;
    }
    if (r == 18) {
        func_ov065_0226ae98();
        return -1;
    }
    return 0;
}

s32 func_ov065_0226b27c(Unk_ov065_0226b27c_Cfg *cfg) {
    u8 *ec;
    Unk_ov065_0226b27c_F8 *f8;
    Unk_ov065_0226aed4_Fc *fc;
    s32 r;
    fc = (Unk_ov065_0226aed4_Fc *)cfg->unk_00(1, 0x18);
    data_ov065_022905fc = fc;
    { volatile u32 z = 0; func_02115e64(z, data_ov065_022905fc, 0x18); }
    fc = data_ov065_022905fc;
    fc->unk_00 = cfg->unk_00;
    fc->unk_04 = cfg->unk_04;
    fc->unk_09 = 1;
    fc->unk_16 = 1;
    fc->unk_08 = 1;
    data_ov065_022905ec = (u8 *)func_ov065_0226b0b4(0x10, 0xd18);
    data_ov065_022905f0 = func_ov065_0226b0b4(2, 0x2300);
    data_ov065_022905f4 = func_ov065_0226b0b4(4, 0x58);
    data_ov065_022905f8 = (Unk_ov065_0226b27c_F8 *)func_ov065_0226b0b4(8, 0xc);
    { volatile u32 z = 0; func_02115e64(z, data_ov065_022905ec, 0xd18); }
    { volatile u32 z = 0; func_02115e64(z, data_ov065_022905f0, 0x2300); }
    { volatile u32 z = 0; func_02115e64(z, data_ov065_022905f4, 0x58); }
    { volatile u32 z = 0; func_02115e64(z, data_ov065_022905f8, 0xc); }
    ec = data_ov065_022905ec;
    ec[0xd0a] = cfg->unk_08;
    ((Unk_ov065_0226b27c_B0b *)(ec + 0xd0b))->lo = cfg->unk_09;
    f8 = data_ov065_022905f8;
    f8->unk_00 = cfg->unk_00;
    f8->unk_04 = cfg->unk_04;
    f8->unk_08 = 0;
    {
        Unk_ov065_0226b27c_B0c *b = (Unk_ov065_0226b27c_B0c *)(ec + 0xd0c);
        b->lo = cfg->unk_0a;
        b->mid = cfg->unk_0b;
    }
    func_020ff154();
    r = func_ov065_0226a510(data_ov065_022905f0, 0x2300);
    if (r == 1 || r >= 4) {
        func_ov065_0226afdc();
        return 0;
    }
    return 1;
}

void func_ov065_0226b3c4(u32 n, u8 *base) {
    Unk_ov065_0226b3c4_Key *keys = (Unk_ov065_0226b3c4_Key *)(base + 0x444);
    Unk_ov065_0226b3c4_Rec *recs = (Unk_ov065_0226b3c4_Rec *)(base + 0x470);
    s32 j = n - 1;
    if (j >= 0) {
        Unk_ov065_0226b3c4_Key *p4 = &keys[j];
        Unk_ov065_0226b3c4_Rec *p6 = &recs[j];
        do {
            Unk_ov065_0226b3c4_Key tk;
            Unk_ov065_0226b3c4_Rec tr;
            if (keys[n].unk_00[2] < p4->unk_00[2]) {
                break;
            }
            func_02115e78(p4, &tk, 4);
            func_02115e78(&keys[n], p4, 4);
            func_02115e78(&tk, &keys[n], 4);
            func_02115e78(p6, &tr, 0xc0);
            func_02115e78(&recs[n], p6, 0xc0);
            func_02115e78(&tr, &recs[n], 0xc0);
            n = j;
            p4--;
            p6--;
            j--;
        } while (j >= 0);
    }
    { volatile u32 z = 0; keys += 10; func_02115e64(z, keys, 4); }
    { volatile u32 z = 0; func_02115e64(z, recs + 10, 0xc0); }
}

}
