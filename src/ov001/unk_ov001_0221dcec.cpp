// mwcc-flags: -O4,p -str reuse
#include "types.h"

struct Unk_ov001_0221dd9c_Bits {
    u8 unk_a : 2;
    u8 unk_b : 6;
};

struct Unk_ov001_0221dd9c_Body {
    u8 v[0xf0];
};

// 0x100 byte save slot
struct Unk_ov001_0221dd9c_Slot {
    u8 unk_00[0x40];
    u8 unk_40[0x20];
    u8 unk_60[0x20];
    u8 unk_80[0x40];
    u8 unk_c0[4];
    u8 unk_c4[4];
    u8 unk_c8[8];
    u8 unk_d0;
    u8 unk_d1[0x15];
    Unk_ov001_0221dd9c_Bits unk_e6;
    u8 unk_e7;
    u8 unk_e8[7];
    u8 unk_ef;
    u8 unk_f0[4];
    u8 unk_f4;
    u8 unk_f5;
    u8 unk_f6;
    u8 unk_f7;
    u8 unk_f8[6];
    u16 unk_fe;
};

struct Unk_ov001_0221dd9c_Data {
    Unk_ov001_0221dd9c_Slot unk_000[4];
    Unk_ov001_0221dd9c_Slot unk_400;
};

#pragma thumb on
extern "C" {
s32 func_020fefb0(void *);
}
#pragma thumb off

extern "C" {
extern u32 func_0211f800();
extern void func_ov001_02225d58(void *);
extern void *func_ov001_02225db0(s32, s32);
extern void *func_ov001_02225dd8(s32, s32);
extern void func_02115fb4(void *, s32, u32);
extern void func_02116048(void *, void *, u32);
extern void func_02115e30(u32, void *, u32);
extern s32 func_0212b770(void *);
extern u32 func_021274dc(void *, void *, u32);
extern void func_020fef40(void *, void *, void *);
extern void func_020ff770(void *);
extern void *func_020fe850(void *);
extern u32 func_020fee84(void *);
extern void func_020fee5c(u32, void *);
extern s32 func_02128930(void *, const void *, u32);
extern void func_021130d0(void *, const char *, u32, u32, u32, u32);
extern s32 func_ov001_02226c24(void *, u32);
extern void func_02127614(void *, u32);

u32 func_ov001_0221dcec(u32 c);
void func_ov001_0221dd08(u8 *s, u8 *out);
void func_ov001_0221dd9c(s32 idx);
void func_ov001_0221df10();
void func_ov001_0221dfcc(s32 idx);
Unk_ov001_0221dd9c_Data *func_ov001_0221e014();
void func_ov001_0221e024(u8 *src);
void func_ov001_0221e140(u8 *src);
void func_ov001_0221e25c();
void func_ov001_0221e348(s32 idx);
u32 func_ov001_0221e434(s32 idx);
void func_ov001_0221e44c(void *p);
void func_ov001_0221e49c(void *p);
void func_ov001_0221e4ec(void *p);
void func_ov001_0221e53c(void *p);
void func_ov001_0221e584(s32 a);
void func_ov001_0221e5cc(void *src);
void func_ov001_0221e5f0(s32 a);
void func_ov001_0221e614(s32 a);
void func_ov001_0221e638(s32 a);
void func_ov001_0221e65c(s32 a);
void func_ov001_0221e678(s32 a);
void func_ov001_0221e694(u8 *s);
void func_ov001_0221e850(void *a);
void func_ov001_0221e88c(u32 v);
void func_ov001_0221e8a0(u32 v);
u8 *func_ov001_0221e8b4();
void func_ov001_0221e8c8();
void func_ov001_0221e8dc();
}

extern "C" const u8 data_ov001_0222a2fc[4] = { 0, 0, 0, 0 };
Unk_ov001_0221dd9c_Data *data_ov001_0222def0;

#pragma thumb off

void func_ov001_0221e8dc()
{
    u8 *g = (u8 *)func_ov001_02225dd8(0x6f8, 0x20);
    data_ov001_0222def0 = (Unk_ov001_0221dd9c_Data *)g;
    func_02127614(g + 0x4f8, 0xa001);
    func_020fefb0(data_ov001_0222def0);
}

void func_ov001_0221e8c8() { func_ov001_02225d58(&data_ov001_0222def0); }

u8 *func_ov001_0221e8b4() { return (u8 *)data_ov001_0222def0 + 0x400; }

void func_ov001_0221e8a0(u32 v) { ((u8 *)data_ov001_0222def0)[0x4f5] = v; }

void func_ov001_0221e88c(u32 v) { ((u8 *)data_ov001_0222def0)[0x4f6] = v; }

void func_ov001_0221e850(void *a)
{
    func_02116048(a, (u8 *)data_ov001_0222def0 + 0x440, 0x20);
    ((u8 *)data_ov001_0222def0)[0x4e7] = 0;
}

void func_ov001_0221e694(u8 *s)
{
    s32 i;
    s32 n;
    u8 *d;
    func_02115fb4((u8 *)data_ov001_0222def0 + 0x480, 0, 0x10);
    n = func_ov001_02226c24(s, 0x20);
    switch (n) {
    case 0:
    case 10:
    case 0x1a:
    case 0x20:
        ((u8 *)data_ov001_0222def0)[0x4e6] = ((u8 *)data_ov001_0222def0)[0x4e6] & ~0xfc;
        d = (u8 *)data_ov001_0222def0 + 0x480;
        for (i = 0; i < n; i += 2, d++) {
            s32 hi = func_ov001_0221dcec(s[i]);
            *d = func_ov001_0221dcec(s[i + 1]) + (hi << 4);
        }
        break;
    default: {
        u8 *g = (u8 *)data_ov001_0222def0;
        g[0x4e6] = (g[0x4e6] & ~0xfc) | 4;
        func_02116048(s, (u8 *)data_ov001_0222def0 + 0x480, 0x10);
        break;
    }
    }
    switch (n) {
    case 0: {
        u8 *g = (u8 *)data_ov001_0222def0;
        g[0x4e6] = g[0x4e6] & ~3;
        return;
    }
    case 5:
    case 10: {
        u8 *g = (u8 *)data_ov001_0222def0;
        g[0x4e6] = (g[0x4e6] & ~3) | 1;
        return;
    }
    case 0xd:
    case 0x1a: {
        u8 *g = (u8 *)data_ov001_0222def0;
        g[0x4e6] = (g[0x4e6] & ~3) | 2;
        return;
    }
    default: {
        u8 *g = (u8 *)data_ov001_0222def0;
        g[0x4e6] = (g[0x4e6] & ~3) | 3;
        return;
    }
    }
}

void func_ov001_0221e678(s32 a) { func_ov001_0221dd08((u8 *)a, (u8 *)data_ov001_0222def0 + 0x4c0); }

void func_ov001_0221e65c(s32 a) { func_ov001_0221dd08((u8 *)a, (u8 *)data_ov001_0222def0 + 0x4f0); }

void func_ov001_0221e638(s32 a) { func_ov001_0221dd08((u8 *)a, (u8 *)data_ov001_0222def0 + 0x4c4); }

void func_ov001_0221e614(s32 a) { func_ov001_0221dd08((u8 *)a, (u8 *)data_ov001_0222def0 + 0x4c8); }

void func_ov001_0221e5f0(s32 a) { func_ov001_0221dd08((u8 *)a, (u8 *)data_ov001_0222def0 + 0x4cc); }

void func_ov001_0221e5cc(void *src)
{
    func_02116048((u8 *)data_ov001_0222def0 + 0x440, src, 0x20);
}

void func_ov001_0221e584(s32 a)
{
    u8 *g = (u8 *)data_ov001_0222def0;
    u8 *p = g + 0x4c0;
    func_021130d0((void *)a, "%3d%3d%3d%3d", p[0], p[1], p[2], p[3]);
}

void func_ov001_0221e53c(void *p) {
    u8 *ip = data_ov001_0222def0->unk_400.unk_f0;
    func_021130d0(p, "%3d%3d%3d%3d", ip[0], ip[1], ip[2], ip[3]);
}

void func_ov001_0221e4ec(void *p) {
    u8 *ip = (u8 *)data_ov001_0222def0 + 0x4c4;
    func_021130d0(p, "%3d%3d%3d%3d", ip[0], ip[1], ip[2], ip[3]);
}

void func_ov001_0221e49c(void *p) {
    u8 *ip = (u8 *)data_ov001_0222def0 + 0x4c8;
    func_021130d0(p, "%3d%3d%3d%3d", ip[0], ip[1], ip[2], ip[3]);
}

void func_ov001_0221e44c(void *p) {
    u8 *ip = (u8 *)data_ov001_0222def0 + 0x4cc;
    func_021130d0(p, "%3d%3d%3d%3d", ip[0], ip[1], ip[2], ip[3]);
}

u32 func_ov001_0221e434(s32 idx) {
    return data_ov001_0222def0->unk_000[idx].unk_e7;
}

void func_ov001_0221e348(s32 idx) {
    Unk_ov001_0221dd9c_Data *d = data_ov001_0222def0;
    Unk_ov001_0221dd9c_Slot *s = &d->unk_000[idx];
    *(Unk_ov001_0221dd9c_Body *)&d->unk_400 = *(Unk_ov001_0221dd9c_Body *)s;
    d->unk_400.unk_f4 = idx;
    if (func_02128930(s->unk_c0, data_ov001_0222a2fc, 4) != 0) {
        data_ov001_0222def0->unk_400.unk_f5 = 0;
    } else {
        data_ov001_0222def0->unk_400.unk_f5 = 1;
    }
    if (func_02128930(s->unk_c8, data_ov001_0222a2fc, 4) != 0 ||
        func_02128930(&s->unk_c8[4], data_ov001_0222a2fc, 4) != 0) {
        data_ov001_0222def0->unk_400.unk_f6 = 0;
    } else {
        data_ov001_0222def0->unk_400.unk_f6 = 1;
    }
    func_020fee5c(s->unk_d0, data_ov001_0222def0->unk_400.unk_f0);
}

void func_ov001_0221e25c() {
    Unk_ov001_0221dd9c_Data *d = data_ov001_0222def0;
    Unk_ov001_0221dd9c_Slot *b = &d->unk_400;
    Unk_ov001_0221dd9c_Slot *s = &d->unk_000[b->unk_f4];
    *(Unk_ov001_0221dd9c_Body *)s = *(Unk_ov001_0221dd9c_Body *)b;
    if (b->unk_f5 != 0) {
        func_02115fb4(s->unk_c0, 0, 4);
        func_02115fb4(s->unk_c4, 0, 4);
        s->unk_d0 = 0;
    } else {
        func_02116048(b->unk_c0, s->unk_c0, 4);
        func_02116048(b->unk_c4, s->unk_c4, 4);
        s->unk_d0 = func_020fee84(b->unk_f0);
    }
    if (b->unk_f6 != 0) {
        func_02115fb4(s->unk_c8, 0, 8);
    } else {
        func_02116048(b->unk_c8, s->unk_c8, 8);
    }
    func_ov001_0221dd9c(b->unk_f4);
}

void func_ov001_0221e140(u8 *src) {
    Unk_ov001_0221dd9c_Slot *b = &data_ov001_0222def0->unk_400;
    u32 n;
    s32 i;
    u8 *d;
    func_02115fb4(b, 0, 0xef);
    func_02116048(src, b->unk_40, 0x20);
    switch (*(s32 *)(src + 0x20)) {
    case 1:
        n = 5;
        b->unk_e6.unk_a = 1;
        break;
    case 2:
        n = 0xd;
        b->unk_e6.unk_a = 2;
        break;
    case 3:
        n = 0x10;
        b->unk_e6.unk_a = 3;
        break;
    default:
        n = 0;
        b->unk_e6.unk_a = 0;
        break;
    }
    b->unk_e6.unk_b = 0;
    d = b->unk_80;
    src += 0x28;
    for (i = 0; i < 4; i++, d += 0x10, src += 0x20) {
        func_02116048(src, d, n);
    }
    b->unk_e7 = 2;
    func_02115fb4(b->unk_f0, 0, 4);
    b->unk_f5 = 1;
    b->unk_f6 = 1;
    func_ov001_0221e25c();
}

void func_ov001_0221e024(u8 *src) {
    Unk_ov001_0221dd9c_Slot *b = &data_ov001_0222def0->unk_400;
    func_02115fb4(b, 0, 0xef);
    func_02116048(src, &b->unk_d1[0], 5);
    func_02116048(src + 0x6, &b->unk_d1[5], 5);
    func_02116048(src + 0xc, &b->unk_d1[10], 5);
    func_02116048(src + 0x12, &b->unk_d1[15], 5);
    func_02116048(src + 0x18, b->unk_60, 0x20);
    func_02116048(src + 0x39, &b->unk_80[0], 0xd);
    func_02116048(src + 0x47, &b->unk_80[0x10], 0xd);
    func_02116048(src + 0x55, &b->unk_80[0x20], 0xd);
    func_02116048(src + 0x63, &b->unk_80[0x30], 0xd);
    func_02116048(src + 0x71, b->unk_40, 0x20);
    b->unk_e6.unk_a = 2;
    b->unk_e6.unk_b = 0;
    b->unk_e7 = 1;
    func_02115fb4(b->unk_f0, 0, 4);
    b->unk_f5 = 1;
    b->unk_f6 = 1;
    func_ov001_0221e25c();
}

Unk_ov001_0221dd9c_Data *func_ov001_0221e014() {
    return data_ov001_0222def0;
}

void func_ov001_0221dfcc(s32 idx) {
    Unk_ov001_0221dd9c_Slot *s = &data_ov001_0222def0->unk_000[idx];
    func_02115fb4(s, 0, 0xef);
    s->unk_e7 = 0xff;
    func_ov001_0221dd9c(idx);
}

void func_ov001_0221df10() {
    volatile u16 z = 0;
    u32 rtc[5];
    void *r8;
    s32 i;
    s32 off;
    func_02115e30(z, data_ov001_0222def0, 0x400);
    for (i = 0; i < 3; i++) {
        data_ov001_0222def0->unk_000[i].unk_e7 = 0xff;
    }
    func_020ff770(rtc);
    r8 = func_020fe850(rtc);
    i = 0;
    off = i;
    for (; i < 2; i++, off += 0x100) {
        func_02116048(r8, (u8 *)data_ov001_0222def0 + off + 0xf0, 0xe);
    }
    for (i = 0; i < 4; i++) {
        func_ov001_0221dd9c(i);
    }
}

void func_ov001_0221dd9c(s32 idx) {
    s32 flags[4];
    u32 st;
    u32 bit;
    BOOL on;
    s32 i;
    s32 off;
    void *p;
    st = data_ov001_0222def0->unk_000[idx].unk_e7;
    on = FALSE;
    bit = 1 << idx;
    func_02115fb4(flags, on, 0x10);
    flags[idx] = 1;
    if (idx <= 2) {
        Unk_ov001_0221dd9c_Data *d = data_ov001_0222def0;
        if ((d->unk_000[0].unk_ef & bit) != 0) on = TRUE;
        if (st == 0xff && on) {
            d->unk_000[0].unk_ef &= ~bit;
            data_ov001_0222def0->unk_000[1].unk_ef &= ~bit;
            flags[1] = 1;
            flags[0] = 1;
        } else if (st != 0xff && !on) {
            d->unk_000[0].unk_ef |= bit;
            data_ov001_0222def0->unk_000[1].unk_ef |= bit;
            flags[1] = 1;
            flags[0] = 1;
        }
    }
    i = 0;
    off = i;
    for (; i < 4; i++, off += 0x100) {
        if (flags[i] != 0) {
            Unk_ov001_0221dd9c_Data *d = data_ov001_0222def0;
            u32 r = func_021274dc(&d->unk_400.unk_f8, (u8 *)d + off, 0xfe);
            data_ov001_0222def0->unk_000[i].unk_fe = r;
        }
    }
    p = func_ov001_02225dd8(0x100, 0x20);
    func_020fef40(data_ov001_0222def0, flags, p);
    func_ov001_02225d58(&p);
}

void func_ov001_0221dd08(u8 *s, u8 *out) {
    u32 tmp;
    s32 i;
    s32 off;
    func_02115fb4(&tmp, 0, 4);
    i = 0;
    off = i;
    for (; i < 4; i++, off += 3) {
        s32 j;
        u8 *p;
        func_02116048(s + off, &tmp, 3);
        j = 0;
        p = (u8 *)&tmp;
        do {
            if (*p != 0) break;
            j++;
            *p++ = 0x20;
        } while (j < 3);
        out[i] = func_0212b770(&tmp);
    }
}

u32 func_ov001_0221dcec(u32 c) {
    if (c <= 0x39) return c - 0x30;
    if (c <= 0x46) return c - 0x37;
    return c - 0x57;
}

