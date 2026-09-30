#include "types.h"

class Unk_ov134_02291f60_Sub18 {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
};

class Unk_020e0488 {
public:
    void func_0206fa74(s32 a, s32 b);
    void func_0206fab4(s32 a, s32 b);
    void func_0206fb9c(u32 id, u32 a, u32 b, u8 x, u8 y, s32 flag);
    void func_0206fc44();
    u8 pad[0x40];
};

struct Unk_ov134_02291f60 {
    u8 pad_00[0x18];
    Unk_ov134_02291f60_Sub18 unk_18;
    u8 pad_1c[0x70 - 0x1c];
    u32 unk_70;
    void *unk_74;
    u32 unk_78;
    u8 *unk_7c;
    u32 unk_80;
    u8 pad_84[0x90 - 0x84];
    u16 unk_90;
    u16 unk_92;
    u16 unk_94;
    u16 unk_96;
    u8 pad_98[0x9e - 0x98];
    u8 unk_9e;
    u8 unk_9f;
    u8 unk_a0;
    u8 unk_a1;
    u8 pad_a2;
    u8 unk_a3;
    u8 pad_a4;
    u8 unk_a5;
    u8 pad_a6[0xad - 0xa6];
    u8 unk_ad;
    u8 pad_ae[0xb1 - 0xae];
    u8 unk_b1;
    u8 pad_b2[0xb5 - 0xb2];
    u8 unk_b5;
    u8 unk_b6;
    u8 pad_b7;
    u8 unk_b8[8];
};

typedef Unk_ov134_02291f60 S;

extern u8 data_ov134_02294e84[];
extern u8 data_ov134_02294e8c[];
extern u8 data_ov134_02294e94[];
extern u8 data_ov134_02294d44[];
extern u8 data_ov134_02294d74[];
extern u8 data_ov134_02294db4[];
extern u8 data_ov134_02294f44[];
extern void *data_ov134_02294e9c[];
extern u8 data_ov134_02295104[];
extern u8 data_ov134_02295034[];
extern u8 data_ov134_02294d54[];
extern u8 data_ov134_02295204[];
extern u8 data_ov134_022950d4[];
extern u8 data_ov134_02295014[];
extern u8 data_ov134_02295274[];
extern u8 data_ov134_02295280[];

extern "C" {
s32 func_ov134_022938a0(S *s, u32 a, u32 b, u32 c);
s32 func_ov134_02293928(S *s, u32 a, u32 b);
s32 func_ov134_022938c4(S *s, s32 a, u32 b);
void func_ov134_022932a0(S *s, u32 a);
void func_ov134_02291f60(S *s, u32 m);
BOOL func_ov134_02291f80(S *s, u32 m);
u32 func_ov134_022934a4(S *s, u32 a);
void func_02116048(void *dst, void *src, u32 n);
void func_02088730(u32 a, const void *b, void *c, void *d, s32 e, s32 f, s32 g);
void func_02088378(u32 a, const void *b, void *c, void *d, s32 e, s32 f, s32 g, u32 h, s32 i);
void func_02087e70(u32 a, const void *b, void *c, u32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
void func_0206f9c8(void *o, s32 a, s32 b, s32 c, s32 d, u8 e);
void func_0206f9e4(void *a, const void *c, u32 v);
void func_0206f9fc(void *a, u32 v);

void *func_ov134_02294300(S *s);
u32 func_ov134_0229452c(S *s, u32 a);
u32 func_ov134_02294570(S *s, u32 a);
void func_ov134_0229400c(S *s, u32 a, u32 b, u32 c, u32 d, u32 e, u8 f, u8 g);
void func_ov134_0229405c(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f);
void func_ov134_022940a8(S *s, u32 a, u32 b, u32 c, u32 d, u32 e, u8 f, u8 g);
void func_ov134_022941ec(S *s, u32 a, u32 b, u32 c, const void *d, u32 e, u8 f, u8 g, s32 h, s32 i);
void func_ov134_02294230(S *s, u32 a, u32 b, u32 c, const void *d, u32 e, u8 f, u8 g);

s32 func_ov134_02293b90(S *s, u32 a, u32 b)
{
    s32 r6, r0;
    s32 r4;
    if (!func_ov134_022938a0(s, a, b, 0x28)) {
        return FALSE;
    }
    r6 = func_ov134_02293928(s, a, b);
    r0 = func_ov134_022938c4(s, r6, s->unk_92);
    r4 = 0;
    if (r0 >= -0x800 && r0 < 0x800) {
        s->unk_9e = r4;
        r4 = 1;
        s->unk_96 = s->unk_92;
    } else {
        r0 = func_ov134_022938c4(s, r6, s->unk_94);
        if (r0 >= -0x800 && r0 < 0x800) {
            r4 = 1;
            s->unk_9e = r4;
            s->unk_96 = s->unk_94;
        }
    }
    if (r4) {
        func_ov134_022932a0(s, 6);
        func_02116048(s->unk_b8, (u8 *)s + 0xc0, 8);
        func_ov134_02291f60(s, 0x30);
        return TRUE;
    }
    return FALSE;
}

void func_ov134_02293c48(S *s, u8 *a, u8 *b)
{
    u8 *r6 = a + 0x80;
    u8 *r7 = b + 0x60;
    if (s->unk_a1 == 0) {
        void *p = a + 0x38;
        u8 *q = b + 0x34;
        func_02088730(1, data_ov134_02294e84, p, q, -1, 2, 0);
        func_02088378(1, data_ov134_02294e8c, p, q, -1, 2, 0x1000, s->unk_92, 0);
        func_02088378(1, data_ov134_02294e94, p, q, -1, 2, 0x1000, s->unk_94, 0);
    }
    func_02087e70(1, data_ov134_02294d44, r6, (u32)r7, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    if (func_ov134_02291f80(s, 4)) {
        s->unk_18.vfunc_08();
    }
    if (s->unk_74 != 0) {
        func_02087e70(1, data_ov134_02294d74, s->unk_7c - 8, s->unk_b5, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
        func_02087e70(1, s->unk_74, s->unk_7c - 8, s->unk_b5, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    if (s->unk_78 != 0) {
        func_02087e70(1, (void *)s->unk_78, s->unk_7c - 8, s->unk_b6, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    if (s->unk_70 != 0) {
        func_02087e70(1, (void *)s->unk_70, s->unk_7c, s->unk_80, -1, 1, 0x1000, 0x1000, 0, -1, 0, 0);
    }
    switch (s->unk_a0) {
    case 0:
        func_02087e70(1, data_ov134_02294db4, r6, (u32)r7, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
    case 3: {
        s32 i;
        func_02087e70(1, data_ov134_02294f44, r6, (u32)r7, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        for (i = 0; i < 5; i++) {
            if (s->unk_a0 == 3) {
                if (i == 3) continue;
                if (i == 4) continue;
            }
            func_02087e70(1, data_ov134_02294e9c[i], r6, (u32)r7, i == s->unk_b1 ? 7 : -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        }
        func_02087e70(1, data_ov134_02294e9c[5], r6, (u32)r7, func_ov134_02291f80(s, 8) ? 10 : 9, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        break;
    }
    case 2: {
        s32 v1, v2;
        u32 b1 = s->unk_b1;
        if (b1 == 1) {
            v1 = 7;
            v2 = 6;
        } else if (b1 == 2) {
            v2 = 7;
            v1 = 6;
        } else {
            v1 = 6;
            v2 = 6;
        }
        func_02087e70(1, data_ov134_02295104, r6, (u32)r7, v1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        func_02087e70(1, data_ov134_02295034, r6, (u32)r7, v2, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        break;
    }
    case 1: {
        s32 v1, v2;
        u32 b1;
        func_02087e70(1, data_ov134_02294d54, r6, (u32)r7, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        func_02087e70(1, data_ov134_02295204, r6, (u32)r7, -1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        b1 = s->unk_b1;
        if (b1 == 3) {
            v1 = 7;
            v2 = 6;
        } else if (b1 == 4) {
            v2 = 7;
            v1 = 6;
        } else {
            v1 = 6;
            v2 = 6;
        }
        func_02087e70(1, data_ov134_022950d4, r6, (u32)r7, v1, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        func_02087e70(1, data_ov134_02295014, r6, (u32)r7, v2, 2, 0x1000, 0x1000, 0, -1, 0, 0);
        break;
    }
    }
}

void func_ov134_0229400c(S *s, u32 a, u32 b, u32 c, u32 d, u32 e, u8 f, u8 g)
{
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9c8(p, d, 4, 0, 0, 0);
    p->func_0206fb9c(a, b, c, f, g, 0);
    p->func_0206fa74(1, (c - e) * 4);
}

void func_ov134_0229405c(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f)
{
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9c8(p, d, 4, 0, 0, 0);
    p->func_0206fb9c(a, b, c, e, f, 0);
    p->func_0206fab4(1, 0);
}

void func_ov134_022940a8(S *s, u32 a, u32 b, u32 c, u32 d, u32 e, u8 f, u8 g)
{
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9c8(p, d, 2, 6, 0, 0);
    p->func_0206fb9c(a, b, c, f, g, 0);
    if (e != 0) {
        p->func_0206fa74(1, (c - e) * 4);
    } else {
        p->func_0206fab4(1, 0);
    }
}

void func_ov134_02294108(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f)
{
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9e4(p, data_ov134_02295274, d + 0x1e);
    p->func_0206fb9c(a, b, c, e, f, 0);
    p->func_0206fa74(0, (c - 6) * 8 + 6);
}

void func_ov134_02294158(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f)
{
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9e4(p, data_ov134_02295280, func_ov134_0229452c(s, d));
    p->func_0206fb9c(a, b, c, e, f, 0);
    p->func_0206fa74(1, (c - 5) * 4);
}

void func_ov134_022941b0(S *s, u32 a, u32 b, u32 c, u32 d, u8 e, u8 f)
{
    func_ov134_02294230(s, a, b, c, data_ov134_02295280, func_ov134_02294570(s, d), e, f);
}

void func_ov134_022941ec(S *s, u32 a, u32 b, u32 c, const void *d, u32 e, u8 f, u8 g, s32 h, s32 i)
{
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9e4(p, d, e);
    p->func_0206fb9c(a, b, c, f, g, 0);
    p->func_0206fa74(h, i);
}

void func_ov134_02294230(S *s, u32 a, u32 b, u32 c, const void *d, u32 e, u8 f, u8 g)
{
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9e4(p, d, e);
    p->func_0206fb9c(a, b, c, f, g, 0);
    p->func_0206fab4(1, 0);
}

void func_ov134_02294274(S *s, u32 a, u32 b, u32 c, u8 d, u32 e)
{
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9fc(p, d);
    p->func_0206fb9c(a, b, c, 0xf, 0, 0);
    p->func_0206fa74(1, -((c - e) * 4));
}

void func_ov134_022942bc(S *s, u32 a, u32 b, u32 c, u8 d, s32 e, u8 f, u8 g)
{
    Unk_020e0488 *p = (Unk_020e0488 *)func_ov134_02294300(s);
    func_0206f9fc(p, d);
    p->func_0206fb9c(a, b, c, f, g, 0);
    p->func_0206fab4(e, 0);
}

void func_ov134_02294334(S *s)
{
    s32 i;
    s->unk_9f = 0;
    for (i = 0; i < 0x11; i++) {
        ((Unk_020e0488 *)((u8 *)s + 0xd8))[i].func_0206fc44();
    }
}

void func_ov134_0229435c(S *s)
{
    u32 r5 = func_ov134_022934a4(s, s->unk_a5);
    u32 r1 = s->unk_ad;
    u32 r2 = s->unk_a5;
    switch (r2) {
    case 0:
        r1 += 0x7d0;
        break;
    case 1:
    case 2:
        r1 += 1;
        break;
    }
    switch (r2) {
    case 1:
        func_ov134_02294230(s, 8, 0xcb, r5, data_ov134_02295280, func_ov134_02294570(s, r1), 0xf, 0);
        break;
    case 2:
        func_ov134_02294230(s, 8, 0xcb, r5, data_ov134_02295280, func_ov134_0229452c(s, r1), 0xf, 0);
        break;
    case 3:
        func_ov134_022941ec(s, 8, 0xcb, r5, data_ov134_02295274, r1 + 0x1e, 0xf, 0, 0, 6);
        break;
    case 4:
        func_ov134_022940a8(s, 8, 0xcb, r5, r1, 0, 0xf, 0);
        break;
    case 0:
    default:
        func_ov134_0229405c(s, 8, 0xcb, r5, r1, 0xf, 0);
        break;
    }
}

void func_ov134_02294458(S *s)
{
    func_ov134_022940a8(s, s->unk_a3, 0x1c2, 6, *((u8 *)s + 0xb9), 0, 0xf, 0);
}

void func_ov134_02294488(S *s)
{
    u32 r4 = *((u8 *)s + 0xba);
    u32 r1 = 0x37;
    if ((s32)r4 >= 0xc) {
        r1 = 0x38;
    }
    func_ov134_02294230(s, s->unk_a3, 0x1ce, 4, data_ov134_02295274, r1, 0xf, 0);
    if ((s32)r4 > 0xc) {
        r4 -= 0xc;
    }
    if (r4 == 0) {
        r4 = 0xc;
    }
    func_ov134_0229405c(s, s->unk_a3, 0x1b6, 6, r4, 0xf, 0);
}

void *func_ov134_02294300(S *s)
{
    if (*(volatile u8 *)&s->unk_9f >= 0x11) {
        return (u8 *)s + 0x4d8;
    }
    s->unk_9f = s->unk_9f + 1;
    return (u8 *)s + 0xd8 + (s->unk_9f - 1) * 0x40;
}
}
