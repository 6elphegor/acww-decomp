#include "types.h"

struct Unk_020b96b8_Ent {
    s32 a;
    s32 b;
    s16 c;
    u8 pad[0x900 - 10];
};

extern "C" {
struct Unk_020b96b8_Cfg {
    u8 pad0[0x1c];
    s32 idx;
    u8 pad1[0x1c];
    u16 h3c;
    u16 h3e;
};
extern Unk_020b96b8_Cfg data_021f1448;
extern s32 data_021f145c[];
extern volatile u16 data_021efc08[];
extern Unk_020b96b8_Ent data_021eff50[];
extern s32 data_021eff48[];
extern u8 data_021f4420[];
void func_0209cf18(u8 *out);
struct Unk_020b9964_Src {
    u32 w0;
    u32 pad[1];
    s32 pos;
};
struct Unk_020b9964_Obj {
    u8 pad[0x5c];
    Unk_020b9964_Src src;
};
Unk_020b9964_Obj *func_02095204(u32 x);
s32 func_02064c84(u32 x);
extern u16 data_021f1158[];
extern s32 data_021f14dc;
extern s32 data_021f1150;
extern u8 data_021ef654;
extern s32 data_021ef680[];
extern s32 data_021ef678[];
extern u16 data_020e4640[];
extern s32 data_021ef908;
extern u16 data_021ef90c[];
struct Unk_020b9b94_Src {
    u16 h0, h2, h4, h6;
    s32 s0, s1;
};
void func_020014e4(u32 x);
void func_020014ac(u32 x);
void func_020014bc(u32 x);
s32 func_0206ef50();
void func_020014f4(u32 x);
void func_02001564(u32 x);
void func_02001750(u32 x);
void func_020016cc(u32 x);
void func_02001674(u32 a, u32 b, u32 c, u32 d);
}

#define REG16(a) (*(volatile u16 *)(a))
#define REG32(a) (*(volatile u32 *)(a))

extern "C" void func_020b96b8()
{
    u8 t[2];
    volatile u16 v1, v2;
    s32 y = data_021f145c[data_021f1448.idx];
    v1 = data_021efc08[2];
    REG16(0x5000400) = v1;
    v2 = data_021efc08[2];
    REG16(0x5000000) = v2;
    Unk_020b96b8_Ent *e = &data_021eff50[data_021eff48[1]];
    REG16(0x4000030) = e->c;
    REG32(0x4000038) = e->a;
    REG32(0x400003c) = e->b;
    func_0209cf18(t);
    if (t[1] >= 6 && t[1] < 0x12) {
        REG32(0x4000000) = REG32(0x4000000) & 0xfffffdff;
        func_020014e4(2);
    } else {
        REG32(0x4000000) |= 0x200;
        func_020014f4(2);
    }
    s32 r;
    if (y > 0xa8) {
        REG32(0x4000000) = REG32(0x4000000) & 0xfffff5ff;
        func_020014e4(0xa);
        REG16(0x4000050) = 0x2040;
    } else {
        REG32(0x4000000) |= 0x800;
        func_020014f4(8);
        if (y > 0x97) {
            REG32(0x4000000) = REG32(0x4000000) & 0xfffffdff;
            func_020014e4(2);
            REG16(0x4000050) = 0x2048;
        } else if (data_021f4420[0x11] != 0) {
            REG16(0x4000050) = 0x2040;
        } else {
            REG16(0x4000050) = 0x2042;
        }
    }
    r = 0xc0 - y;
    if (r < 0) r = 0;
    else if (r > 0xc0) r = 0xc0;
    u16 s = y + data_021f1448.h3e;
    if (s > 0x100) s = 0x100;
    REG16(0x4000016) = s;
    REG16(0x4000014) = data_021f1448.h3c;
    func_02001564(1);
    func_02001750(0x15);
    func_020016cc(0x1f);
    func_02001674(0, r, 0xff, 0xc0);
}

extern "C" void func_020b9848()
{
    u8 t[2];
    volatile u16 v1, v2;
    s32 y = data_021f145c[data_021f1448.idx];
    v1 = data_021efc08[2];
    REG16(0x5000400) = v1;
    v2 = data_021efc08[3];
    REG16(0x5000000) = v2;
    Unk_020b96b8_Ent *e = &data_021eff50[data_021eff48[1]];
    REG16(0x4001030) = e->c;
    REG32(0x4001038) = e->a;
    REG32(0x400103c) = e->b;
    func_0209cf18(t);
    if (t[1] >= 6 && t[1] < 0x12) {
        REG32(0x4001000) = REG32(0x4001000) & 0xfffffdff;
        if (func_0206ef50() == 0) func_020014ac(2);
    } else {
        REG32(0x4001000) |= 0x200;
        if (func_0206ef50() == 0) func_020014bc(2);
    }
    if (data_021f4420[0x11] != 0) {
        REG16(0x4001050) = 0x2040;
    } else {
        REG16(0x4001050) = 0x2042;
    }
    u16 s = y + data_021f1448.h3e;
    if (s > 0x100) s = 0x100;
    REG16(0x4001016) = s;
    REG16(0x4001014) = data_021f1448.h3c;
}

extern "C" void func_020b9964()
{
    u16 *pal;
    s32 a = 0, b = 0;
    s32 idx = (data_021eff48[1] + 1) % 2;
    s32 j, i;
    pal = (u16 *)((u8 *)data_021f1158 + idx * 0x180);
    Unk_020b9964_Obj *o = func_02095204(4);
    if (o) {
        Unk_020b9964_Src *p = &o->src;
        if (p) {
            a = (s32)p->w0 >> 3;
            s32 *g = &data_021f14dc;
            s32 pos = p->pos;
            s32 d = (pos - *g) >> 4;
            if (d < 0) {
                b = (d * -176) >> 8;
            } else {
                b = -(d << 7) >> 8;
            }
            *g = pos;
        }
    }
    s32 *gp = &data_021f1150;
    s32 c = b; b = *gp; b += 0x60; b += c;
    if (b >= 0x10000) b -= 0x10000;
    *gp = b;
    if (data_021ef654 == 0) {
        data_021ef654 = 1;
        for (i = 0; i < 2; i++) {
            data_021ef680[i] = a;
            data_021ef678[i] = b;
            Unk_020b96b8_Ent *q = (Unk_020b96b8_Ent *)((u8 *)data_021eff50 + i * 0x900);
            for (j = 0; j < 0xc0; j++) {
                s32 t = -(j << 8) / 0xc0;
                q->c = 0x10000 / (t + 0x200);
                s32 n = (q->c - 0x100) << 7;
                n = -n;
                q->a = a + n;
                s32 u = (j * 0xc000 / 0xc0 + 0x3000) / 0xc0;
                q->b = b + (u * u >> 8) * 0xc0;
                q = (Unk_020b96b8_Ent *)((u8 *)q + 0xc);
            }
        }
    }
    s32 da = a - data_021ef680[idx];
    s32 db = b - data_021ef678[idx];
    if (da != 0 || db != 0) {
        data_021ef680[idx] = a;
        data_021ef678[idx] = b;
        s32 *end, *q;
        q = (s32 *)((u8 *)data_021eff50 + idx * 0x900);
        end = (s32 *)((u8 *)q + 0x900);
        if (db == 0) {
            for (; q < end; q += 3) q[0] += da;
        } else if (da == 0) {
            for (; q < end; q += 3) q[1] += db;
        } else {
            for (; q < end; q += 3) {
                q[0] += da;
                q[1] += db;
            }
        }
    }
    i = 0;
    u32 w = func_02064c84(1);
    if (w != data_020e4640[idx]) {
        data_020e4640[idx] = w;
        u16 c = w | 0x1000;
        for (; i < 0x77; i++) *pal++ = c;
        for (; i < 0x97; i++) *pal++ = (w - (w * (i - 0x77) >> 5)) | 0x1000;
        for (; i < 0x98; i++) *pal++ = 0x10;
        for (; i < 0xa8; i++) {
            u32 t = (u32)((i - 0x98) << 4) >> 4;
            u32 v = 0x10 - t;
            *pal++ = v | ((0x10 - v) << 8);
        }
        for (; i < 0xc0; i++) *pal++ = 0x1000;
    }
    data_021eff48[1] = idx;
}

struct Unk_020b9b94_Col {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 pad : 1;
};

extern "C" void func_020b9b94()
{
    s32 idx = (data_021ef908 + 1) % 2;
    volatile u16 out;
    Unk_020b9b94_Col c1, c2;
    volatile u16 in1, in2;
    in1 = data_021efc08[2];
    c1 = *(Unk_020b9b94_Col *)&in1;
    in2 = data_021efc08[3];
    c2 = *(Unk_020b9b94_Col *)&in2;
    u16 *dst = (u16 *)((u8 *)data_021ef90c + idx * 0x180);
    s32 s0 = ((volatile s32 *)data_021efc08)[2];
    s32 s1 = ((volatile s32 *)data_021efc08)[3];
    s32 i = 0;
    s32 span = s1 - s0;
    s32 c2g = c2.g;
    s32 c1g = c1.g;
    s32 c2r = c2.r;
    s32 c1r = c1.r;
    s32 c2b = c2.b;
    s32 c1b = c1.b;
    do {
        if (i <= s0) {
            out = in1;
        } else if (i >= s1) {
            out = in2;
        } else {
            s32 t = ((i - s0) << 8) / span;
            s32 u = 0x100 - t;
            u32 col = (u16)((c1b * u + c2b * t) >> 8) << 10;
            col |= (u16)((c1r * u + c2r * t) >> 8) | (u16)((c1g * u + c2g * t) >> 8) << 5;
            out = col;
        }
        *dst++ = out;
        i++;
    } while (i < 0xc0);
    data_021ef908 = idx;
}

struct Unk_020b9c90 {
    u16 unk_000[0x304 / 2];
    u16 unk_304[1];
    u8 pad0[0x1208 - 0x306];
    s32 unk_1208;
    s32 unk_120c;
    u8 pad1[0x1520 - 0x1210];
    s32 unk_1520;
    s32 unk_1524;
    s32 unk_1528;
    s32 unk_152c;
    s32 unk_1530;
    u8 pad2[0x1578 - 0x1534];
    s32 unk_1578;
    u8 *unk_157c;
    s32 unk_1580;
    u8 pad3[0x158c - 0x1584];
    s32 unk_158c;
    s32 unk_1590;

    void func_020b9c90(s32 idx, u16 a, s32 b);
    void func_020b9d44();
    void func_020b9d94();
    void func_020b9df0();
    void func_020b9e10();
    void func_020b9e60();
    void func_020b9ea8();
    void func_020b9ef8();
    void func_020b9f84();
    void func_020ba2e4(s32 a, s32 b);
    void func_020ba06c();
    void func_020b9fe4();
    s32 func_020ba170(s32 a, s32 b);
    s32 func_020ba10c(s32 *a, s32 *b, s32 c, s32 d);
};

extern "C" s32 func_020024f0(void *p, u32 a, u32 b, u32 off);

void Unk_020b9c90::func_020b9c90(s32 idx, u16 a, s32 b)
{
    *(u16 *)((u8 *)this + idx * 2 + 0x304) = a;
    *(s32 *)((u8 *)this + idx * 4 + 0x308) = b;
}

void Unk_020b9c90::func_020b9d44()
{
    if (unk_1520 != 0) {
        switch (unk_158c) {
        case 1:
            func_020b9e60();
            break;
        case 2:
            func_020b9e10();
            break;
        case 3:
            func_020b9df0();
            break;
        case 4:
            func_020b9d94();
            break;
        }
    }
}

void Unk_020b9c90::func_020b9d94()
{
    unk_1590++;
    if (unk_1590 >= 0x2a8) {
        if (unk_152c == unk_1524) {
            unk_158c = 0;
            unk_152c = -1;
            unk_1530 = 2;
            unk_1520 = 0;
        } else {
            unk_158c = 1;
        }
    }
}

void Unk_020b9c90::func_020b9df0()
{
    unk_120c = 0x20;
    unk_158c = 4;
    unk_1590 = 0;
}

void Unk_020b9c90::func_020b9e10()
{
    unk_1590++;
    if (unk_1590 >= 0x2a8) {
        func_020ba2e4(unk_1528, unk_1528);
        unk_158c = 3;
    }
    unk_120c = (unk_1590 << 5) / 0x2a8;
}

void Unk_020b9c90::func_020b9e60()
{
    s32 cur = unk_1524;
    s32 next;
    if (unk_152c > cur) {
        next = cur + 1;
    } else {
        next = cur - 1;
    }
    func_020ba2e4(cur, next);
    unk_120c = 0;
    unk_158c = 2;
    unk_1590 = 0;
}

void Unk_020b9c90::func_020b9ea8()
{
    if (unk_1520 != 0) {
        switch (unk_158c) {
        case 1:
            func_020ba06c();
            break;
        case 2:
            func_020b9fe4();
            break;
        case 3:
            func_020b9f84();
            break;
        case 4:
            func_020b9ef8();
            break;
        }
    }
}

void Unk_020b9c90::func_020b9ef8()
{
    s32 cur = unk_1578;
    s32 k = (((unk_1208 >> 8) - 8) & 0xff) >> 3;
    if (k == cur) {
        if (func_020024f0((u8 *)unk_157c + (k << 5), 6, 0x20, k << 5) != 0) {
            cur++;
            if (cur >= 0x20) {
                cur = -1;
                if (unk_152c == unk_1524) {
                    unk_158c = 0;
                    unk_152c = cur;
                    unk_1530 = 2;
                    unk_1520 = 0;
                } else {
                    unk_158c = 1;
                }
            }
            unk_1578 = cur;
        }
    }
}

void Unk_020b9c90::func_020b9f84()
{
    s32 cur = unk_1524;
    if (func_020ba170(cur, 6) != 0) {
        if (func_020ba10c((s32 *)&unk_157c, &unk_1580, 0, cur) != 0) {
            unk_1578 = 0;
            unk_120c = 0x20;
            unk_158c = 4;
        }
    }
}

extern "C" {
void func_0209d498(void *p);
s32 func_0209d3a4(void *a, void *b);
u32 func_020b9cd8(u32 unused, u8 *d);

u32 func_020b9cb4(u32 x)
{
    u8 d[8];
    ((u32 *)d)[0] = 0;
    ((u32 *)d)[1] = 0;
    func_0209d498(d);
    return func_020b9cd8(x, d);
}

u32 func_020b9cd8(u32 unused, u8 *d)
{
    s32 m = (d[2] + 6) % 0x18;
    if (m >= 0xc) return 0x100;
    s32 t = m * 0x3c;
    t += d[1];
    return (u32)((t * 0x68000) / 0x2d0 << 4) >> 16;
}

u16 func_020b9d18(u32 unused, void *unused2)
{
    u64 d = 0;
    u64 t = 0x100000000ULL | 0x1000000;
    d = t;
    return (u16)((func_0209d3a4(&d, unused2) % 0x40) << 3);
}
}
