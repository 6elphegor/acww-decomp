#include "types.h"

class Unk_02097d1c;
class Unk_02097ff4;

extern "C" {
s32 func_0204be70(u16 *p);
BOOL func_02065578(void *p);
void func_02065c94(void *p);
void func_02065388(void *p);
void func_02097ac4(void *p, s32 a, s32 b);
}

struct Unk_020981f8_Pos { u8 a, b, c, d; };

extern "C" {
void *func_0209750c();
void *func_0209cf88(void *p);
s32 func_0209cd00(void *a, void *b);
void func_02097318(s32 v);
void func_02097214(s32 v);
void func_02097110(s32 v);
void func_02087888(void *p);
void func_02087a20(void *p);
void func_02087870(void *p);
void func_02087b40(void *p);
void func_02087368(void *p);
void func_0209e120(void *p, s32 v);
extern u8 data_021d7350[];
extern u8 data_020e1e20[];
extern u8 data_021d735c[];
void *func_02094030(void *p);
void func_02094018(void *p);
void *func_02063888(void *p);
void func_02063870(void *p);
void *func_020a71d0(void *p);
void func_020a71b8(void *p);
BOOL func_02094218();
BOOL func_02098e0c(void *p);
void *func_0209888c(...);
void func_02098e30(void *p);
void func_020940d0(void *a, void *b);
void func_0203ce4c(s32 a, void *b);
void func_020a7c3c(void *p);
void func_02002fc8(void *a, void *b);
s32 func_0209b570(s32 *p, s32 i);
void func_020b35ac(void *a, u8 *b, s32 c);
void func_020638d0(void *a, void *b);
s32 func_0207c47c(void *a, s32 b, s32 c, void *d, void *e, void *f);
s32 func_02094048();
s32 func_020977d0(void *a, void *b);
void *func_02099db4(void *a, s32 b);
void func_0209a588(void *p);
void func_02099f1c(void *p);
void func_0203c42c(void *a, void *b, s32 c, s32 d);
void *func_02099864(void *p);
void func_0209a254(void *p);
BOOL func_0204b2d4(void *p);
s32 func_0204b25c(void *p);

void func_02062ad4(void *a, s32 b, s32 c, s32 d, s32 e, void *f, s32 g, s32 h, s32 i, s32 j);
void func_0206338c(void *a, s32 b, s32 c);
void func_02063388(void *a);
void func_02062f94(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g);
}

class Unk_02097d1c {
public:
    u8 unk_00[0x988];
    u8 unk_988[0x52];
    u16 unk_9da[15];
    u32 unk_9f8;
    u32 unk_9fc;

    s32 func_02097d1c(BOOL flag);
    s32 func_02097d38(s32 n);
    s32 func_02097da8();
    void *func_02097e00();
    void *func_02097e0c();
    s32 func_02097e34();
    void *func_02097e68(s32 idx);
    BOOL func_02097e98(s32 idx);
    u32 func_02097eb0(s32 idx);
    s32 func_02097edc();
    void func_02097f0c(s32 idx, u32 val);
    BOOL func_02097f30(u16 *p, s32 idx, u32 val);
    u16 *func_02097f6c(s32 idx);
    void func_02097fa4();
};

class Unk_02097ff4 {
public:
    u8 unk_00[0x21e4];
    u8 unk_21e4[8];
    u8 unk_21ec[0x10];
    u32 unk_21fc[2];
    u8 unk_2204[0x10];
    u16 unk_2214;
    u8 unk_2216[2];
    u8 unk_2218;
    u8 unk_2219;
    u8 unk_221a[0x37];
    u8 unk_2251;
    u8 unk_2252;
    u8 unk_2253;
    u8 unk_2254[8];
    u8 unk_225c[10];
    u8 unk_2266[12];
    u16 unk_2272;

    void func_02097ff4(u32 bit);
    void func_0209801c(u32 bit);
    BOOL func_02098044(u32 bit);
    void func_02098074();
    void *func_0209817c();
    void func_02098188(u32 idx, u32 v);
    u32 func_02098198(u32 idx);
    void func_020981ac(u32 v);
    u32 func_020981b8();
    void func_020981c4();
    u32 func_020981ec();
    u32 func_020982d0();
    void func_020982dc(u32 v);
    void func_020982e8();
    void func_020982f4(u32 a, u32 b);
    void *func_02098308();
    void *func_02098314();
    void *func_02098320();
    u8 *func_0209832c();
    s32 func_02098338(s32 n);
    BOOL func_0209836c(void *p);
    s32 func_020983a4();
    void func_020983c0(u16 *p);
    void *func_020983cc();
    void func_020983d8();
    void func_020984a8();

    BOOL func_02098a48();
    Unk_02097d1c *func_02098750();
    void *func_0209865c();
    void *func_0209868c();
    void *func_02098698();
    void *func_020986a4();
    void *func_020986c8();
    void func_02098784(s32 v);
    };

extern "C" {
BOOL func_02097e88(s32 i);
BOOL func_02097f94(s32 i);
}

s32 Unk_02097d1c::func_02097d1c(BOOL flag)
{
    s32 r = unk_9f8;
    if (flag) {
        r += func_02097da8();
    }
    return r;
}

s32 Unk_02097d1c::func_02097d38(s32 n)
{
    u16 v;
    u16 *p = func_02097f6c(0);
    v = 0x14fd;
    s32 w = func_0204be70(&v);
    s32 s = n * w;
    s32 i;
    for (i = 0; i < 15; p++, i++) {
        u32 c = *p;
        if (c == 0xfff1) {
            s += w;
        } else if (c >= 0x1492 && c <= 0x14fd) {
            if (func_02097eb0(i) == 0) {
                s += w - func_0204be70(p);
            }
        }
    }
    return s;
}

s32 Unk_02097d1c::func_02097da8()
{
    u16 *p = func_02097f6c(0);
    s32 r = 0;
    s32 i;
    u32 z = 0;
    BOOL zz = z;
    for (i = 0; i < 15; p++, i++) {
        BOOL ok = zz;
        u32 c = *p;
        if (c >= 0x1492 && c <= 0x14fd) ok = TRUE;
        if (ok) {
            if (func_02097eb0(i) == 0) {
                r += func_0204be70(p);
            }
        }
    }
    return r;
}

void *Unk_02097d1c::func_02097e00()
{
    return unk_988;
}

void *Unk_02097d1c::func_02097e0c()
{
    s32 i = func_02097e34();
    if (func_02097e88(i) == 1) {
        return func_02097e68(i);
    }
    return 0;
}

s32 Unk_02097d1c::func_02097e34()
{
    u8 *p = (u8 *)func_02097e68(0);
    s32 i;
    for (i = 0; i < 10; i++) {
        if (!func_02065578(p)) {
            return i;
        }
        p += 0xf4;
    }
    return -1;
}

void *Unk_02097d1c::func_02097e68(s32 idx)
{
    u8 *r = 0;
    if (func_02097e88(idx) == 1) {
        r = unk_00 + idx * 0xf4;
    }
    return r;
}

extern "C" BOOL func_02097e88(s32 i)
{
    if (i >= 0 && i < 10) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02097d1c::func_02097e98(s32 idx)
{
    if (func_02097eb0(idx) == 0) {
        return TRUE;
    }
    return FALSE;
}

u32 Unk_02097d1c::func_02097eb0(s32 idx)
{
    s32 sh = idx << 1;
    if (func_02097f94(idx) == 1) {
        return (unk_9fc >> sh) & 3;
    }
    return 0;
}

s32 Unk_02097d1c::func_02097edc()
{
    u16 *p = func_02097f6c(0);
    s32 i;
    for (i = 0; i < 15; i++) {
        if (p[i] == 0xfff1) {
            return i;
        }
    }
    return -1;
}

void Unk_02097d1c::func_02097f0c(s32 idx, u32 val)
{
    s32 sh = idx << 1;
    u32 *p = &unk_9fc;
    *p = *p & ~(3 << sh);
    *p = *p | (val << sh);
}

BOOL Unk_02097d1c::func_02097f30(u16 *p, s32 idx, u32 val)
{
    BOOL r = FALSE;
    if (func_02097f94(idx) == 1) {
        unk_9da[idx] = *p;
        func_02097f0c(idx, val);
        r = TRUE;
    }
    return r;
}

u16 *Unk_02097d1c::func_02097f6c(s32 idx)
{
    u16 *r = 0;
    if (func_02097f94(idx) == 1) {
        r = &unk_9da[idx];
    }
    return r;
}

extern "C" BOOL func_02097f94(s32 i)
{
    if (i >= 0 && i < 15) {
        return TRUE;
    }
    return FALSE;
}

void Unk_02097d1c::func_02097fa4()
{
    s32 i;
    for (i = 0; i < 10; i++) {
        func_02065c94(unk_00 + i * 0xf4);
    }
    func_02065388(unk_988);
    for (i = 0; i < 15; i++) {
        unk_9da[i] = 0xfff1;
    }
    func_02097ac4(this, 0, 1);
}

void Unk_02097ff4::func_02097ff4(u32 bit)
{
    s32 idx = bit >> 5;
    u32 b = bit & 31;
    if (idx < 2) {
        u32 *q = unk_21fc;
        u32 m = ~(1 << b);
        u32 v = q[idx];
        q[idx] = m & v;
    }
}

void Unk_02097ff4::func_0209801c(u32 bit)
{
    s32 idx = bit >> 5;
    u32 b = bit & 31;
    if (idx < 2) {
        u32 *q = unk_21fc;
        u32 m = 1 << b;
        u32 v = q[idx];
        q[idx] = m | v;
    }
}

BOOL Unk_02097ff4::func_02098044(u32 bit)
{
    s32 idx = bit >> 5;
    u32 b = bit & 31;
    BOOL r;
    if (idx < 2) {
        r = TRUE;
        if (((1 << b) & unk_21fc[idx]) != 0) {
            goto end;
        }
    }
    r = FALSE;
end:
    return r;
}

void Unk_02097ff4::func_02098074()
{
    void *r8 = func_0209888c(this);
    if (func_02094218()) {
        if (func_02098e0c(unk_225c)) {
            u8 *r7 = unk_2266;
            s32 a;
            u8 *l10 = (u8 *)&unk_2272;
            u8 o20[0x1c];
            u8 o3c[0x1c];
            u8 o58[0x34];
            s32 b, t;
            u8 c;
            func_02094030(o20);
            func_02063888(o3c);
            func_020a71d0(o58);
            a = 0;
            b = 10;
            t = 0;
            if (unk_2272 != 0xfff1) {
                a = 10;
                b = 5;
            }
            func_020940d0(r8, o20);
            func_0203ce4c(0, o20);
            func_020a7c3c(o20);
            func_02002fc8(r7, o20);
            func_0203ce4c(1, o20);
            s32 i;
            for (i = 0; i < 6; i++) {
                s32 r = func_0209b570(&t, i);
                func_020a7c3c(o58);
                c = t;
                func_020b35ac(o58, &c, r);
                func_0203ce4c(i + 2, o58);
            }
            func_020638d0(unk_225c, o3c);
            func_0203ce4c(8, o3c);
            if (func_0207c47c(data_020e1e20, a, b, r8, r7, l10)) {
                func_02098e30(unk_225c);
            }
            func_020a71b8(o58);
            func_02063870(o3c);
            func_02094018(o20);
        }
    }
}

void *Unk_02097ff4::func_0209817c()
{
    return unk_225c;
}

void Unk_02097ff4::func_02098188(u32 idx, u32 v)
{
    if (idx < 8) {
        unk_2254[idx] = v;
    }
}

u32 Unk_02097ff4::func_02098198(u32 idx)
{
    if (idx < 8) {
        return unk_2254[idx];
    }
    return 0xff;
}

void Unk_02097ff4::func_020981ac(u32 v)
{
    unk_2252 = v;
}

u32 Unk_02097ff4::func_020981b8()
{
    return unk_2252;
}

void Unk_02097ff4::func_020981c4()
{
    unk_2251 += 1;
    if (unk_2251 == 1) {
        unk_2251 = 2;
    }
    if (unk_2251 > 10) {
        unk_2251 = 10;
    }
}

u32 Unk_02097ff4::func_020981ec()
{
    return unk_2251;
}

extern "C" void func_020981f8()
{
    u8 *g = data_021d7350;
    Unk_02097ff4 *p = (Unk_02097ff4 *)func_0209750c();
    if (p) {
        Unk_020981f8_Pos loc;
        func_0209cf88(&loc);
        u8 *q = p->func_0209832c();
        s32 r4 = func_0209cd00(&loc, q);
        s32 t = (loc.b - q[1]) + (loc.c - q[2]) * 12;
        func_02097318(t);
        func_02097214(r4);
        func_02097110(r4);
        func_02087888(p->func_0209868c());
        func_02087a20(p->func_0209868c());
        if (r4) {
            p->func_020984a8();
        }
        if (loc.c != p->func_020982d0()) {
            p->func_020982dc(0xff);
        }
        if (r4) {
            func_02087870(p->func_02098698());
            p->func_02098784(0);
            func_02087b40(p->func_0209868c());
            func_0209e120(data_021d7350, 16);
        }
        if (r4 < 0) {
            func_02087368(p->func_020986a4());
            func_02087368(g + 0x15fca);
        }
        func_0209cf88(p->func_0209832c());
    }
}

u32 Unk_02097ff4::func_020982d0()
{
    return unk_2253;
}

void Unk_02097ff4::func_020982dc(u32 v)
{
    unk_2253 = v;
}

void Unk_02097ff4::func_020982e8()
{
    *(u16 *)&unk_2218 = 0;
}

void Unk_02097ff4::func_020982f4(u32 a, u32 b)
{
    unk_2219 = a;
    unk_2218 = b;
}

void *Unk_02097ff4::func_02098308()
{
    return &unk_2218;
}

void *Unk_02097ff4::func_02098314()
{
    return unk_21ec;
}

void *Unk_02097ff4::func_02098320()
{
    return unk_21e4;
}

u8 *Unk_02097ff4::func_0209832c()
{
    return unk_2204;
}

s32 Unk_02097ff4::func_02098338(s32 n)
{
    Unk_02097ff4 *p = this;
    s32 i = 0;
    s32 r = -1;
    for (; i < n; i++) {
        if (!p->func_02098a48()) {
            r = i;
            break;
        }
        p = (Unk_02097ff4 *)((u8 *)p + 0x228c);
    }
    return r;
}

BOOL Unk_02097ff4::func_0209836c(void *q)
{
    func_0209888c(this);
    BOOL r = FALSE;
    if (func_02094048() != -1) {
        if (func_020983a4()) {
            func_020940d0(func_0209888c(), q);
            r = TRUE;
        }
    }
    return r;
}

s32 Unk_02097ff4::func_020983a4()
{
    return func_020977d0(data_021d735c, func_0209888c(this));
}

void Unk_02097ff4::func_020983c0(u16 *p)
{
    unk_2214 = *p;
}

void *Unk_02097ff4::func_020983cc()
{
    return &unk_2214;
}

void Unk_02097ff4::func_020983d8()
{
    if (func_02098a48()) {
        Unk_02097d1c *r7 = func_02098750();
        u16 *r5 = r7->func_02097f6c(0);
        func_0209a588(func_02099db4(func_0209865c(), 0));
        func_0209a588(func_02099db4(func_0209865c(), 1));
        func_02099f1c((u8 *)func_0209865c() + 0x88);
        s32 i = 0;
        s32 z = i;
        BOOL zz = i;
        for (; i < 15; r5++, i++) {
            if (r7->func_02097eb0(i) == 2) {
                BOOL ok = zz;
                u32 c = *r5;
                if (c >= 0x11a8 && c <= 0x12a7) ok = TRUE;
                if (ok) {
                    r7->func_02097f30(r5, i, 1);
                    func_0203c42c(func_020986c8(), r5, z, 1);
                }
            }
        }
        u8 *e = (u8 *)r7->func_02097e68(0);
        for (i = 0; i < 10; i++) {
            if ((u8)(func_02065578(e) + 0xf9) <= 1) {
                func_02065c94(e);
            }
            e += 0xf4;
        }
    }
}

struct Unk_020984a8_Obj { u32 pad[2]; Unk_020984a8_Obj(){} ~Unk_020984a8_Obj(){} };

void Unk_02097ff4::func_020984a8()
{
    if (func_02098a48()) {
        u16 v0, v1, v2, v3, v4, v5;
        Unk_02097d1c *in;
        u16 *p;
        s32 i;
        s32 r;
        BOOL t;
        u32 k = 1;
        s32 z28 = 0, z2c = 0, z40 = 0, z44 = 0, z3c = 0, z34 = 0, z38 = 0, z30 = 0, z4c = 0, z48 = 0, z20 = 0;
        v0 = 0xfff1;
        func_0209a254(func_02099864(func_0209865c()));
        in = func_02098750();
        p = in->func_02097f6c(0);
        i = 0;
        z28 = 0;
        for (; i < 15; p++, i++) {
            BOOL ok = z20;
            u32 c = *p;
            if (c >= 0x155f && c <= 0x1560) ok = TRUE;
            if (ok && in->func_02097eb0(i) == 2) {
                v0 = 0xfff1;
                if (func_0204b2d4(p)) {
                    v5 = 0x1560;
                    s32 a = func_0204b25c(p);
                    s32 b = func_0204b25c(&v5);
                    r = (a == b) ? k : z28;
                } else {
                    r = (*p == 0x1560) ? k : z2c;
                }
                if (r) {
                    func_02062ad4(&v1, 0x1100, 0x44, z30, z30, this, k, 10, z30, k);
                    v0 = v1;
                    if (v0 == 0xfff1) {
                        Unk_020984a8_Obj o5c;
                        func_0206338c(&o5c, 4, z34);
                        func_02062f94(&v2, &o5c, z38, z38, k, k, z38);
                        v0 = v2;
                        func_02063388(&o5c);
                    }
                } else {
                    func_02062ad4(&v3, 0x1144, 0x44, z3c, z3c, this, k, 10, z3c, k);
                    v0 = v3;
                    if (v0 == 0xfff1) {
                        Unk_020984a8_Obj o64;
                        func_0206338c(&o64, 3, z40);
                        func_02062f94(&v4, &o64, z44, z44, k, k, z44);
                        v0 = v4;
                        func_02063388(&o64);
                    }
                }
                in->func_02097f30(&v0, i, z48);
                if (v0 != 0xfff1) {
                    func_0203c42c(func_020986c8(), &v0, z4c, k);
                }
            }
        }
    }
}
