// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_0222de94 {
    u8 pad_00[0x14];
    void *unk_14;
    u32 *volatile unk_18[5];
    u32 *volatile unk_2c;
    u32 *volatile unk_30;
    u32 *volatile unk_34;
    u32 unk_38;
    u8 pad_3c[8];
    u8 unk_44;
};

extern "C" {
extern u16 data_ov001_0222de90;
extern Unk_ov001_0222de94 *data_ov001_0222de94;
extern u16 data_ov001_0222a0b4[];
extern u16 data_ov001_0222a0c4[];
extern u16 data_ov001_0222a0bc[];
extern u8 data_ov001_0222a0cc[];
extern u8 data_ov001_0222a0f0[];
extern u8 data_ov001_0222a114[];
extern u8 data_ov001_0222a460[];
extern u8 data_ov001_0222b0a8[];

s32 func_01ffc2c4(s32, s32);
s32 func_01ffc31c(s32, s32);
s32 func_ov001_0221d5b8();
s32 func_ov001_0220864c();
s32 func_ov001_0221d5e8(u32);
s32 func_ov001_0221d5d0();
s32 func_ov001_02215d48();
void func_ov001_02216d8c();
void func_ov001_02216474();
void func_ov001_02226fdc(s32, s32);
s32 func_ov001_022260ac(void *);
s32 func_ov001_02225f88(void *);
void func_ov001_02224b9c(s32, u32, void *);
void func_0212c234(void *, s32, void *, ...);
void func_ov001_02225290(void *a, u32 b, u32 c, u32 d, u32 e, void *f, u32 g);
void *func_02115fb4(void *, s32, u32);
s32 func_ov001_02226c24(void *, u32);
s32 func_ov001_02216150(s32);

void func_ov001_02215fa8(s32 a) {
    func_ov001_0221d5b8();
    func_ov001_0220864c();
    data_ov001_0222de90 += 6;
    s32 n = func_01ffc2c4(data_ov001_0222de90, 0x1d);
    if (n >= 6) {
        func_ov001_02216474();
        return;
    }
    data_ov001_0222de90 = data_ov001_0222de90 - n;
    func_ov001_02216d8c();
    func_ov001_0221d5e8((data_ov001_0222de90 * 0x37) / 0x91);
    func_ov001_0221d5d0();
    func_ov001_02215d48();
    data_ov001_0222de94->unk_38 = 0;
    func_ov001_02226fdc(0, a);
}

void func_ov001_0221605c(s32 a) {
    func_ov001_0221d5b8();
    func_ov001_0220864c();
    if (data_ov001_0222de90 > 6) data_ov001_0222de90 = data_ov001_0222de90 - 6;
    else data_ov001_0222de90 = 0;
    s32 n = func_01ffc2c4(data_ov001_0222de90, 0x1d);
    if (n == 0x17) {
        func_ov001_02216d8c();
        return;
    }
    if (n > 0x17) {
        data_ov001_0222de90 = data_ov001_0222de90 + (0x1d - n);
        n = 0;
    }
    func_ov001_02216474();
    if (n != 0) return;
    func_ov001_0221d5e8((data_ov001_0222de90 * 0x37) / 0x91);
    func_ov001_0221d5d0();
    func_ov001_02215d48();
    data_ov001_0222de94->unk_38 = 0;
    func_ov001_02226fdc(0, a);
}

s32 func_ov001_02216150(s32 a) {
    s32 r = func_01ffc31c(data_ov001_0222de90, 0x1d);
    r += a;
    return r;
}

s32 func_ov001_02216178(s32 a) {
    s32 base = func_01ffc31c(data_ov001_0222de90, 0x1d);
    s32 i;
    for (i = 0; i < 4; i++, base++) {
        if (base == a) return i;
    }
    return -1;
}

s32 func_ov001_022161c4() {
    u16 v[4];
    s32 i;
    s32 n;
    s32 r;
    u16 *vp;
    u8 *p;
    if (func_ov001_022260ac(data_ov001_0222a460) == 0) return 0xe;
    r = func_01ffc31c(data_ov001_0222de90, 0x1d);
    vp = v;
    v[0] = data_ov001_0222a0b4[0];
    v[1] = data_ov001_0222a0b4[1];
    v[2] = data_ov001_0222a0b4[2];
    v[3] = data_ov001_0222a0b4[3];
    for (i = 0; i < 4; i++, r++) {
        if (r != 2 && r != 6) {
            if (func_ov001_02225f88(vp) != 0) return data_ov001_0222a0cc[r];
        }
        v[1] = v[1] + 0x1d;
    }
    n = func_01ffc31c(data_ov001_0222de90, 0x1d);
    for (i = 0; i < 4; i++, n++) {
        if (n == 2) {
            s32 off = i * 0x1d;
            v[1] = data_ov001_0222a0c4[1];
            v[0] = data_ov001_0222a0c4[0];
            v[2] = data_ov001_0222a0c4[2];
            v[3] = data_ov001_0222a0c4[3];
            v[1] = v[1] + off;
            if (func_ov001_02225f88(v) != 0) return 2;
            v[1] = data_ov001_0222a0bc[1];
            v[0] = data_ov001_0222a0bc[0];
            v[2] = data_ov001_0222a0bc[2];
            v[3] = data_ov001_0222a0bc[3];
            v[1] = v[1] + off;
            if (func_ov001_02225f88(v) != 0) return 3;
            break;
        }
    }
    n = func_01ffc31c(data_ov001_0222de90, 0x1d);
    for (i = 0; i < 4; i++, n++) {
        if (n == 6) {
            s32 off = i * 0x1d;
            v[1] = data_ov001_0222a0c4[1];
            v[0] = data_ov001_0222a0c4[0];
            v[2] = data_ov001_0222a0c4[2];
            v[3] = data_ov001_0222a0c4[3];
            v[1] = v[1] + off;
            if (func_ov001_02225f88(v) != 0) return 7;
            v[1] = data_ov001_0222a0bc[1];
            v[0] = data_ov001_0222a0bc[0];
            v[2] = data_ov001_0222a0bc[2];
            v[3] = data_ov001_0222a0bc[3];
            v[1] = v[1] + off;
            if (func_ov001_02225f88(v) != 0) return 8;
            break;
        }
    }
    p = data_ov001_0222a114;
    for (i = 0; i < 3; i++, p += 8) {
        if (func_ov001_022260ac(p) != 0) return i + 0xb;
    }
    return 0xe;
}

static inline s32 Unk_ov001_02216474_Get(u32 *p, volatile u32 *x, volatile u32 *y) {
    u32 t = *(volatile u32 *)p & 0x1ff0000;
    *x = t >> 16;
    *y = *(volatile u32 *)p & 0xff;
    return t >> 16;
}

static inline void Unk_ov001_02216474_Set(u32 *p, s32 x, u32 y) {
    *p = (*p & 0xfe00ff00) | (y & 0xff) | ((x & 0x1ff) << 16);
}

static inline void Unk_ov001_02216474_Hide(u32 *p) {
    *p = (*p & 0xfe00ff00) | 0x1000000;
}

void func_ov001_02216474() {
    volatile u32 x;
    volatile u32 y;
    s32 n = func_01ffc31c(data_ov001_0222de90, 0x1d);
    s32 ip = 0x34 - func_01ffc2c4(data_ov001_0222de90, 0x1d);
    s32 i;
    if (data_ov001_0222de94->unk_34 != 0) {
        if (n == 0) x = 0x26;
        else x = 0x100;
        u32 *p = data_ov001_0222de94->unk_34;
        Unk_ov001_02216474_Set(p, x, ip);
    }
    s32 yy = ip;
    for (i = 0; i < 5; i++) {
        s32 t = Unk_ov001_02216474_Get(data_ov001_0222de94->unk_18[i], &x, &y);
        Unk_ov001_02216474_Set(data_ov001_0222de94->unk_18[i], t, yy);
        yy += 0x1d;
    }
    if (n <= 2) {
        u32 *p = data_ov001_0222de94->unk_2c;
        s32 t = Unk_ov001_02216474_Get(p, &x, &y);
        p = data_ov001_0222de94->unk_2c;
        Unk_ov001_02216474_Set(p, t, (2 - n) * 0x1d + ip);
    } else {
        Unk_ov001_02216474_Hide(data_ov001_0222de94->unk_2c);
    }
    if (n >= 2 && n <= 6) {
        u32 *p = data_ov001_0222de94->unk_30;
        s32 t = Unk_ov001_02216474_Get(p, &x, &y);
        p = data_ov001_0222de94->unk_30;
        Unk_ov001_02216474_Set(p, t, (6 - n) * 0x1d + ip);
    } else {
        Unk_ov001_02216474_Hide(data_ov001_0222de94->unk_30);
    }
    data_ov001_0222de94->unk_44 = 1;
}

void func_ov001_022166b0(u8 *a, s32 b) {
    u16 buf[17];
    func_0212c234(buf, 0x10, data_ov001_0222b0a8, a[0], a[1], a[2], a[3]);
    func_ov001_02225290(data_ov001_0222de94->unk_14, 0x5f, b * 0x1d + 8, 2, 7, buf, 1);
}

void func_ov001_0221673c(u8 *a, s32 b) {
    u16 buf[17];
    s32 n;
    u32 r4;
    s32 i;
    s32 cnt;
    func_02115fb4(buf, 0, 0x22);
    n = func_ov001_02226c24(a, 0x20);
    cnt = n <= 0x10 ? n : 0x10;
    for (i = 0; i < cnt; i++) {
        u32 c = a[i];
        if (c == 0x20) buf[i] = 0xe01d;
        else buf[i] = c;
    }
    r4 = b * 0x1d + 2;
    if (n <= 0x10) r4 += 5;
    func_ov001_02225290(data_ov001_0222de94->unk_14, 0x48, r4, 2, 8, buf, 1);
    if (n <= 0x10) return;
    func_02115fb4(buf, 0, 0x22);
    s32 rem = n - 0x10;
    for (n = 0; n < rem; n++) {
        u32 c = a[n + 0x10];
        if (c == 0x20) buf[n] = 0xe01d;
        else buf[n] = c;
    }
    func_ov001_02225290(data_ov001_0222de94->unk_14, 0x48, r4 + 0xc, 2, 8, buf, 1);
}

void func_ov001_022168a0(s32 a, s32 b, s32 c) {
    u16 v[5];
    u32 **q;
    v[0] = data_ov001_0222a0b4[0];
    v[1] = data_ov001_0222a0c4[0];
    v[2] = data_ov001_0222a0c4[0];
    v[3] = data_ov001_0222a0bc[0];
    v[4] = data_ov001_0222a0bc[0];
    q = (u32 **)&data_ov001_0222de94->unk_18[c];
    if ((u32)(a - 1) <= 1) {
        if (func_ov001_02216150(c) == 2) q = (u32 **)&data_ov001_0222de94->unk_2c;
        else q = (u32 **)&data_ov001_0222de94->unk_30;
    }
    u8 *row = data_ov001_0222a0f0 + a * 3;
    u8 f = row[b];
    if (f != 0) {
        func_ov001_02224b9c(0, f, *q);
        u32 *p = *q;
        u32 t = (v[a] & 0x1ff) << 16;
        *p = t | (*p & 0xfe00ff00);
        u16 *h = (u16 *)*q;
        h[2] = (h[2] & ~0xc00) | 0xc00;
    } else {
        Unk_ov001_02216474_Hide(*q);
    }
}
}
#pragma thumb reset
