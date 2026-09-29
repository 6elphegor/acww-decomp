#include "types.h"

struct Unk_02083314_V3 {
    s32 x;
    s32 y;
    s32 z;
};

struct Unk_02083314_K {
    u16 a;
    s16 b;
    u16 c;
};

struct Unk_02083314_Ent {
    u32 a;
    u16 b;
    u16 c;
};

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
};

struct Unk_02083c08 {
    u8 pad_00[0x70];
    u8 unk_70;
    u8 pad_71[3];
    u32 unk_74;

    void func_02083c08();
    void func_02083e38();
};

extern u8 data_020e416c;
extern Unk_020cbb18 *data_020cbb18;
extern u8 data_021ed315;
extern void *data_021c47c4;
extern s32 data_020cf1c8;
extern u8 data_020e0a78[];
extern u8 data_020e0874[];
extern u8 data_020e0870[];
extern Unk_02083314_Ent data_020cf228[];
extern s32 data_020cf1e8[];

extern "C" {
s32 func_020b50e8();
s32 func_020b50dc();
s32 func_02040c70();
s32 func_020b530c(s32);
s32 func_020b0f0c();
s32 func_020b0f30();
void *func_0209750c();
void *func_0209865c(void *);
void *func_02099db4(void *, s32);
void *func_0209a4f0(void *);
s32 func_0209ad68(void *);
s32 func_0209abcc(void *);
s32 func_02098044(void *, s32);
void func_0209d498(void *);
void *func_0209ea50(void *);
BOOL func_02072e88(Unk_020cbb18 *g, s32 i);
BOOL func_02072e44(Unk_020cbb18 *g);
s32 func_020850e0();
s32 func_02085178(s32);
s32 func_0208517c(s32);
s32 func_020851bc(s32, s32);
s32 func_02086fb8(s32, void *);
s32 func_02086fa8(s32);
s32 func_02086f18(s32);
s32 func_02087444();
s32 func_02084de0(u32, void *);
s32 func_0204ed8c(void *, s32, s32);
s32 func_0204ea88(void *, s32 *, s32 *, s32 *, s32 *, u16 *, u16 *, s32, s32);
void func_0204eda4(void *, s32, s32, s32, s32);
void func_0204ed70(void *, s32, s32, s32, s32);
void func_0204edf8(s32 *, s32 *, s32, s32, s32, s32);
s32 func_02063b8c(s32);
void func_0204eee4(u32);
void *func_02083e10(u16 *, void *, s32);
void *func_02083de8(void *, void *, s32);

BOOL func_02083314(s32 a, Unk_02083314_V3 *p);
BOOL func_02083360(s32 a, s32 b, s32 c);
BOOL func_0208336c(s32 flag);
BOOL func_02083430(s32 a, s32 b, s32 c);
BOOL func_0208343c(s32 flag);
BOOL func_020834cc(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL func_0208356c(s32 a, s32 b, s32 c);
BOOL func_02083578(s32 flag);
BOOL func_02083608(s32 a, Unk_02083314_V3 *p);
BOOL func_02083614(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL func_02083644(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL func_0208364c(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL func_020836e4(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL func_02083774(s32 a, s32 b, s32 c);
BOOL func_02083780(s32 flag);
BOOL func_02083898();
BOOL func_020838e8(s32 a, s32 b, s32 c);
BOOL func_020838f4(s32 flag);
BOOL func_02083944();
BOOL func_02083984(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q);
BOOL func_02083a20();
BOOL func_02083a9c(s32 a, Unk_02083314_V3 *p);
BOOL func_02083b2c();
BOOL func_02083b84();
BOOL func_02083ba4();
s32 func_02083bc8(Unk_02083314_Ent *p, s32 n);
}

extern "C" {

BOOL func_02083314(s32 a, Unk_02083314_V3 *p)
{
    BOOL c = data_020e416c == 0 ? TRUE : FALSE;
    if (c) {
        func_02086fb8(func_02085178(func_020850e0()), p);
        return TRUE;
    }
    func_0204ed8c(p, 6, 0x11);
    p->x = p->x + 0x1000;
    return TRUE;
}

BOOL func_02083360(s32 a, s32 b, s32 c)
{
    return func_0208336c(1);
}

BOOL func_0208336c(s32 flag)
{
    u16 k;
    if (func_02083ba4() == 0 && func_02083b84() == 0) {
        if (func_02087444() != 0) {
            if (flag == 0)
                goto a8;
            {
                BOOL c = data_020e416c == 0 ? TRUE : FALSE;
                if (c) {
                    if (func_020b50e8() != 0x2c)
                        goto a8;
                }
            }
            goto c2;
        a8:
            if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
                if (func_02084de0(0x3d, 0) == 0)
                    goto fe;
            }
        }
    c2:
        if (func_02086fa8(func_02085178(func_020850e0())) != 0) {
            if (func_020b50e8() == 0xb) {
                if (func_02072e44(data_020cbb18) == 0)
                    goto fe;
            }
        }
        if (func_02086fa8(func_02085178(func_020850e0())) != 0) {
            if (func_020b50e8() == 0xc) {
            fe:
                k = 0xd022;
                return (BOOL)func_02083e10(&k, data_020e0a78, data_020cf1c8);
            }
        }
    }
    return FALSE;
}

BOOL func_02083430(s32 a, s32 b, s32 c)
{
    return func_0208343c(1);
}

BOOL func_0208343c(s32 flag)
{
    u16 k;
    void *r4 = func_0209ea50(&data_021ed315);
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
        if (flag != 0) {
            BOOL c = data_020e416c == 0 ? TRUE : FALSE;
            if (!c)
                goto fail1;
            if (func_020b50e8() == 0x2c)
                goto fail1;
        }
        {
            if (r4 == 0 && func_02083ba4() == 0 && func_02083b84() == 0 && func_02084de0(0x3b, 0) != 0) {
                k = 0xd002;
                return (BOOL)func_02083e10(&k, data_020e0a78, data_020cf1c8);
            }
        }
    }
  fail1:
    return FALSE;
}

BOOL func_020834cc(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
{
    u16 k[2];
    BOOL c = data_020e416c == 0 ? TRUE : FALSE;
    if (c) {
        void *g = data_021c47c4;
        s32 x = 0, y = 0, z = 0, w = 0;
        if (g != 0) {
            k[0] = 0x5014;
            k[1] = 0x501a;
            if (func_0204ea88(g, &x, &y, &z, &w, &k[0], &k[1], 1, 0) != 0) {
                func_0204eda4(p, x, y, z, w);
                p->x = p->x + 0x4000;
                p->z = p->z + 0x4000;
                q->b = -0x4000;
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL func_0208356c(s32 a, s32 b, s32 c)
{
    return func_02083578(1);
}

BOOL func_02083578(s32 flag)
{
    u16 k;
    void *r4 = func_0209ea50(&data_021ed315);
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
        if (flag != 0) {
            BOOL c = data_020e416c == 0 ? TRUE : FALSE;
            if (!c)
                goto fail2;
            if (func_020b50e8() == 0x2c)
                goto fail2;
        }
        {
            if (r4 == 0 && func_02083ba4() == 0 && func_02083b84() == 0 && func_02084de0(0x3c, 0) != 0) {
                k = 0xd00d;
                return (BOOL)func_02083e10(&k, data_020e0a78, data_020cf1c8);
            }
        }
    }
  fail2:
    return FALSE;
}

BOOL func_02083608(s32 a, Unk_02083314_V3 *p)
{
    p->x = 0;
    p->y = 0;
    p->z = 0;
    return TRUE;
}

BOOL func_02083614(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
{
    func_0209750c();
    if (func_02083ba4() != 0)
        return func_020836e4(a, p, q);
    return func_0208364c(a, p, q);
}

BOOL func_02083644(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
{
    return func_020836e4(a, p, q);
}

BOOL func_0208364c(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
{
    u16 k[2];
    void *g = data_021c47c4;
    if (g != 0) {
        s32 x = 0, y = 0, z = 0, w = 0;
        s32 bx, bz;
        k[0] = 0x5014;
        k[1] = 0x501a;
        if (func_0204ea88(g, &x, &y, &z, &w, &k[0], &k[1], 1, 0) != 0) {
            bx = 0;
            bz = 0;
            func_0204edf8(&bx, &bz, x, y, z, w);
            bx += 2;
            bz += 2;
            func_0204ed8c(p, bx, bz);
            q->b = func_02063b8c(0xffff);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL func_020836e4(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
{
    void *g = data_021c47c4;
    if (g != 0) {
        s32 x = 0, y = 0, z = 0, w = 0;
        u16 k;
        s32 bx, bz;
        k = 0x5000;
        if (func_0204ea88(g, &x, &y, &z, &w, &k, &k, 0x200, 0) != 0) {
            bx = 0;
            bz = 0;
            func_0204edf8(&bx, &bz, x, y, z, w);
            bx -= 2;
            bz += 3;
            func_0204ed8c(p, bx, bz);
            q->b = func_02063b8c(0xffff);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL func_02083774(s32 a, s32 b, s32 c)
{
    return func_02083780(1);
}

BOOL func_02083780(s32 flag)
{
    s32 pass; s32 idx; s32 ok; s32 r6;
    u16 k1, k2;
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
        ok = TRUE;
        if (flag != 0) {
            pass = FALSE;
            if ((data_020e416c == 0 ? ok : pass) != 0) {
                if (func_020b50e8() != 0x2c)
                    pass = TRUE;
            }
            if (pass == 0)
                ok = FALSE;
        }
        if (func_02083898() != 0) {
            if (ok == 0)
                goto fail;
            return (BOOL)func_02083de8(data_020e0874, data_020e0a78, data_020cf1c8);
        }
        idx = -1;
        if (func_02083b84() == 0)
            idx = func_02083bc8(data_020cf228, 8);
        if (idx != -1) {
            r6 = data_020cf1e8[idx];
            if (r6 != func_02040c70() && r6 != 0x13)
                idx = -1;
        }
        if (idx != -1) {
            if (ok == 0)
                goto fail;
            return (BOOL)func_02083de8(&data_020cf228[idx].b, data_020e0a78, data_020cf1c8);
        }
        if (func_02083944() == 0 && func_020b50e8() == 9) {
            k1 = 0xd025;
            return (BOOL)func_02083e10(&k1, data_020e0a78, data_020cf1c8);
        }
    } else if (func_020b50e8() == 9) {
        k2 = 0xd025;
        return (BOOL)func_02083e10(&k2, data_020e0a78, data_020cf1c8);
    }
  fail:
    return FALSE;
}

BOOL func_02083898()
{
    void *r4;
    void *r = func_0209750c();
    if (r != 0)
        r4 = func_02099db4(func_0209865c(r), 0);
    else
        r4 = 0;
    if (r4 != 0) {
        if (func_0209ad68(func_0209a4f0(r4)) != 0) {
            if (func_0209abcc(func_0209a4f0(r4)) == 1) {
                if (func_02083b84() == 0)
                    return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL func_020838e8(s32 a, s32 b, s32 c)
{
    return func_020838f4(1);
}

BOOL func_020838f4(s32 flag)
{
    if (func_02083944() != 0) {
        if (flag != 0) {
            BOOL c = data_020e416c == 0 ? TRUE : FALSE;
            if (!c)
                goto fail;
            if (func_020b50e8() == 0x2c)
                goto fail;
        }
        return (BOOL)func_02083de8(data_020e0870, data_020e0a78, data_020cf1c8);
    }
  fail:
    return FALSE;
}

BOOL func_02083944()
{
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
        if (func_020851bc(func_020850e0(), 8) != 0 && func_02083b84() == 0 && func_02083ba4() == 0)
            return TRUE;
    }
    return FALSE;
}

BOOL func_02083984(s32 a, Unk_02083314_V3 *p, Unk_02083314_K *q)
{
    u16 k[2];
    void *g = data_021c47c4;
    s32 x = 0, y = 0, z = 0, w = 0;
    if (g != 0) {
        k[0] = 0x5014;
        k[1] = 0x501a;
        if (func_0204ea88(g, &x, &y, &z, &w, &k[0], &k[1], 1, 0) != 0) {
            q->a = 0;
            q->b = 0x4000;
            q->c = 0;
            func_0204ed70(p, x, y, z, w);
            p->x = p->x - 0x8000;
            p->z = p->z + 0x6000;
            p->y = 0;
            return TRUE;
        }
    }
    return FALSE;
}

BOOL func_02083a20()
{
    u16 k;
    void *r4 = func_0209750c();
    if (func_020b50e8() == 0 && func_02083b84() == 0 && func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0 && r4 != 0 && func_02098044(r4, 0x23) != 0) {
        if (func_020b530c(func_020b50dc()) != 0 || func_020b50dc() == 6) {
            k = 0xd019;
            return (BOOL)func_02083e10(&k, data_020e0a78, data_020cf1c8);
        }
    }
    return FALSE;
}

BOOL func_02083a9c(s32 a, Unk_02083314_V3 *p)
{
    u16 k[2];
    BOOL c = data_020e416c == 0 ? TRUE : FALSE;
    if (c) {
        void *g = data_021c47c4;
        s32 x = 0, y = 0, z = 0, w = 0;
        if (g != 0) {
                k[0] = 0x5014;
            k[1] = 0x501a;
            if (func_0204ea88(g, &x, &y, &z, &w, &k[0], &k[1], 1, 0) != 0) {
                func_0204eda4(p, x, y, z, w);
                p->z = p->z + 0x4000;
                return TRUE;
            }
        }
    }
    return FALSE;
}

BOOL func_02083b2c()
{
    u16 k;
    if (func_020b50e8() == 0 && func_02086f18(func_0208517c(func_020850e0())) != 0 && func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
        k = 0xd011;
        return (BOOL)func_02083e10(&k, data_020e0a78, data_020cf1c8);
    }
    return FALSE;
}

BOOL func_02083b84()
{
    if (func_020b0f0c() != 0 || func_020b0f30() != 0)
        return TRUE;
    return FALSE;
}

BOOL func_02083ba4()
{
    void *r = func_0209750c();
    if (r != 0 && func_02098044(r, 1) != 0)
        return TRUE;
    return FALSE;
}

s32 func_02083bc8(Unk_02083314_Ent *p, s32 n)
{
    u32 buf[3];
    s32 i;
    buf[0] = 0;
    buf[1] = 0;
    func_0209d498(buf);
    for (i = 0; i < n; p++, i++) {
        if (func_02084de0(p->a, buf) != 0)
            return i;
    }
    return -1;
}
}

void Unk_02083c08::func_02083c08()
{
    if (unk_70 != 0) {
        func_0204eee4(unk_74);
        func_02083e38();
    }
}
