// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_02206248_Mac { u8 b0, b1, b2, b3, b4, b5; Unk_ov001_02206248_Mac &operator=(const Unk_ov001_02206248_Mac &o) { b0=o.b0; b1=o.b1; b2=o.b2; b3=o.b3; b4=o.b4; b5=o.b5; return *this; } };
struct Unk_ov001_02206248_Quad { u8 b0, b1, b2, b3; Unk_ov001_02206248_Quad &operator=(const Unk_ov001_02206248_Quad &o) { b0=o.b0; b1=o.b1; b2=o.b2; b3=o.b3; return *this; } };

struct Unk_ov001_02206248_Out {
    Unk_ov001_02206248_Mac a;
    Unk_ov001_02206248_Mac b;
    Unk_ov001_02206248_Quad c;
};

static inline void Unk_ov001_02206248_Cp6(Unk_ov001_02206248_Mac *d, Unk_ov001_02206248_Mac *s)
{
    *d = *s;
}

extern "C" {
extern Unk_ov001_02206248_Quad data_ov001_0222a5f4;
extern Unk_ov001_02206248_Mac data_ov001_0222c8dc;
extern Unk_ov001_02206248_Mac data_ov001_0222c8d4;
extern s32 data_ov001_0222a530;
s32 func_02128930(void *, void *, s32);
void func_ov001_02206364(void *);
s32 func_ov001_02203d7c(char *, void *);

s32 func_ov001_02206248(Unk_ov001_02206248_Out *out, void *unused)
{
    Unk_ov001_02206248_Mac m0;
    Unk_ov001_02206248_Mac m1;
    char s0[0x20];
    char s1[0x20];
    Unk_ov001_02206248_Quad *q = &out->c;
    *q = data_ov001_0222a5f4;
    m0 = data_ov001_0222c8dc;
    m0.b0 &= 0xfd;
    func_ov001_02206364(&m1);
    data_ov001_0222c8d4 = m1;
    if (func_02128930(&m0, &m1, 6) <= 0) {
        out->a = m1;
        out->b = m0;
    } else {
        out->a = m0;
        out->b = m1;
    }
    if (data_ov001_0222a530 != 0) {
        func_ov001_02203d7c(s0, &m1);
        func_ov001_02203d7c(s1, &m0);
    }
    return 1;
}

struct Unk_ov001_02205e18_B5 { u8 v[5]; };
struct Unk_ov001_02205e18_B13 { u8 v[13]; };
struct Unk_ov001_02205e18_B16 { u8 v[16]; };
struct Unk_ov001_02205e18_B64 { s64 v[8]; };
static inline void Unk_ov001_02205e18_Cp(Unk_ov001_02205e18_B64 *d, Unk_ov001_02205e18_B64 *s) { *d = *s; }
struct Unk_ov001_02205e18_A { u8 pad[0x20]; s32 unk_20; s32 unk_24; };
struct Unk_ov001_02205e18_B { u8 pad[0x2c]; s32 unk_2c; s32 unk_30; u8 pad2[0x28]; s32 unk_5c; };
extern Unk_ov001_02205e18_A data_ov001_0222ca48;
extern Unk_ov001_02205e18_B data_ov001_0222cc30;
extern u8 data_ov001_0222cc94[];
extern u8 data_ov001_0222ca70[];
extern Unk_ov001_02205e18_B64 data_ov001_0222caf0;
extern Unk_ov001_02205e18_B64 data_ov001_0222cd2c;
void func_0212a360(void *, void *);
void func_02128a00(void *, void *, s32);
u32 func_0212a438(void *);
s32 func_ov001_02205fac(u8 *dst, s8 *src, s32 n);

s32 func_ov001_02205e18()
{
    s32 ret = 1;

    func_0212a360(&data_ov001_0222ca48, &data_ov001_0222cc30);
    switch (data_ov001_0222cc30.unk_2c) {
    case 0:
        data_ov001_0222ca48.unk_20 = 0;
        break;
    case 1: {
        if (data_ov001_0222cc30.unk_30 == 0) {
            ret = -7;
            break;
        }
        Unk_ov001_02205e18_A *a = &data_ov001_0222ca48;
        a->unk_24 = data_ov001_0222cc30.unk_30;
        s32 i = 0;
        {
            struct { u8 buf[0x20]; volatile u8 tmp; } l;
            u8 *bp = l.buf;
            u8 *src = data_ov001_0222cc94;
            u8 *dst = data_ov001_0222ca70;
            s32 err = -7;
            s32 j = i;
            for (; i < 4; i++) {
                func_02128a00(bp, src, 0x20);
                l.tmp = j;
                switch (func_0212a438(bp)) {
                case 5:
                    a->unk_20 = 1;
                    *(Unk_ov001_02205e18_B5 *)dst = *(Unk_ov001_02205e18_B5 *)bp;
                    break;
                case 10:
                    a->unk_20 = 1;
                    func_ov001_02205fac(dst, (s8 *)bp, 10);
                    break;
                case 13:
                    a->unk_20 = 2;
                    *(Unk_ov001_02205e18_B13 *)dst = *(Unk_ov001_02205e18_B13 *)bp;
                    break;
                case 26:
                    a->unk_20 = 2;
                    func_ov001_02205fac(dst, (s8 *)bp, 26);
                    break;
                case 16:
                    a->unk_20 = 3;
                    *(Unk_ov001_02205e18_B16 *)dst = *(Unk_ov001_02205e18_B16 *)bp;
                    break;
                case 32:
                    a->unk_20 = 3;
                    func_ov001_02205fac(dst, (s8 *)bp, 32);
                    break;
                case 0:
                    break;
                default:
                    ret = err;
                    break;
                }
                src += 0x28;
                dst += 0x20;
            }
        }
        break;
    }
    case 2:
        data_ov001_0222ca48.unk_20 = 4;
        Unk_ov001_02205e18_Cp(&data_ov001_0222caf0, &data_ov001_0222cd2c);
        break;
    case 3:
        data_ov001_0222ca48.unk_20 = 5;
        Unk_ov001_02205e18_Cp(&data_ov001_0222caf0, &data_ov001_0222cd2c);
        break;
    default:
        ret = -7;
        break;
    }
    return ret;
}

s32 func_ov001_02205fac(u8 *dst, s8 *src, s32 n)
{
    s32 acc = 0;
    s32 i;
    for (i = 0; i < n; i++) {
        s32 c = src[i];
        switch (c) {
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            acc += c - '0';
            break;
        case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
            acc += c - 'a' + 10;
            break;
        case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
            acc += c - 'A' + 10;
            break;
        default:
            return 0;
        }
        if (i % 2 == 0) {
            acc <<= 4;
        } else {
            dst[i / 2] = acc;
            acc = 0;
        }
    }
    return 1;
}

struct Unk_ov001_0220607c_Z32 { s32 v[8]; };
struct Unk_ov001_0220607c_Z72 { s32 v[18]; };
extern u8 data_ov001_0222cb30[];
extern u8 data_ov001_0222cc94[];
void func_0212899c(void *, s32, s32);
s32 func_ov001_022066e8(u8 **, u8 *, u32 *, u32 *);
s32 func_ov001_02203db8(u8 *, s32);

static inline u32 Unk_ov001_0220607c_Swap(u8 *p)
{
    u16 v = *(u16 *)p;
    return (u16)(((v >> 8) & 0xff) | ((v << 8) & 0xff00));
}

s32 func_ov001_0220607c(u8 *p)
{
    u8 *end;
    s32 res;
    u8 *cur;
    u32 type, len;
    u8 *r;
    s32 i;
    cur = p + 8;
    res = 0;
    end = cur + Unk_ov001_0220607c_Swap(p);
    r = (u8 *)func_ov001_022066e8(&cur, end, &type, &len);
    for (; r != 0; r = (u8 *)func_ov001_022066e8(&cur, end, &type, &len)) {
        s32 z = 0;
        switch (type) {
        case 0x201:
            { s32 *q = (s32 *)&data_ov001_0222cc30; for (i = 0; i < 8; i++) q[i] = z; }
            func_02128a00(&data_ov001_0222cc30, r, len);
            res = 1;
            break;
        case 0x202:
            data_ov001_0222cc30.unk_2c = Unk_ov001_0220607c_Swap(r);
            break;
        case 0x203: {
            u32 v = Unk_ov001_0220607c_Swap(r);
            u8 *q = data_ov001_0222cb30;
            for (i = z; i < 4; i++, q += 0x28) *(u32 *)(q + 0x15c) = v;
            break;
        }
        case 0x204: {
            u32 v = Unk_ov001_0220607c_Swap(r);
            u8 *q = data_ov001_0222cb30;
            for (i = z; i < 4; i++, q += 0x28) *(u32 *)(q + 0x160) = v;
            break;
        }
        case 0x205:
            data_ov001_0222cc30.unk_30 = Unk_ov001_0220607c_Swap(r);
            break;
        case 0x206: case 0x207: case 0x208: case 0x209: {
            u8 *d = data_ov001_0222cc94 + (type - 0x206) * 0x28;
            func_0212899c(d, z, 0x20);
            if (data_ov001_0222cc30.unk_5c == 1) {
                u8 *dd = data_ov001_0222cc94 + (type - 0x206) * 0x28;
                for (i = z; i < (s32)len; i++) {
                    dd += func_ov001_02203db8(dd, ((s8 *)r)[z]);
                    r++;
                }
            } else {
                func_02128a00(data_ov001_0222cc94 + (type - 0x206) * 0x28, r, len);
            }
            break;
        }
        case 0x20a:
            { s32 *q = (s32 *)&data_ov001_0222cd2c; for (i = 0; i < 18; i++) q[i] = z; }
            func_02128a00(&data_ov001_0222cd2c, r, len);
            break;
        }
    }
    return res;
}

struct Unk_ov001_022059fc_Req { u8 a; u8 b; u16 c; s32 d; };
struct Unk_ov001_022059fc_L { Unk_ov001_022059fc_Req req; u8 buf[8]; u32 w54; u32 w58; };
struct Unk_ov001_022059fc_Q { u8 pad[0x10]; };
struct Unk_ov001_022059fc_B8 { u8 v[8]; };
extern s32 data_ov001_0222c86c;
extern s32 data_ov001_0222c860;
extern s32 data_ov001_0222c888;
extern u32 data_ov001_0222a538;
extern u8 data_ov001_0222c8fc[];
extern u8 data_ov001_0222d584[];
extern u8 data_ov001_0222c8a0[];
extern u32 data_ov001_0222c864;
extern u8 data_ov001_0222cd84[];
extern u8 data_ov001_0222c92c[];
extern Unk_ov001_022059fc_B8 data_ov001_0222c924;
extern u32 data_ov001_0222c884;
extern u8 data_ov001_0222c850;
extern u8 data_ov001_0222cb30[];
extern s8 data_ov001_0222cc30_b[];
struct Unk_ov001_022059fc_B8_cpy { u8 v[8]; };
s32 func_021132e0(s32);
s32 func_ov001_0220681c();
s32 func_ov001_02203b1c();
s32 func_ov001_02206d44();
s32 func_ov065_02261610(s32, s32, s32);
s32 func_ov065_022615f0(s32, void *);
s32 func_ov065_0226148c(s32);
s32 func_ov065_02261524(s32, void *, s32, s32, void *);
u32 func_ov001_02203e34();
s32 func_ov001_02206478(void *, void *);
u32 func_ov001_02206374(void *);
void func_ov001_022067ac(s32, void *, void *, u32);
s32 func_ov001_02206418(void *, s32, void *, void *);
u8 *func_ov001_022066b0(void *, u32 *, u32 *);
void func_ov001_02203e58(void *, void *, s32);
u32 func_ov001_02206558(void *, s32, void *, s32);
u32 func_ov001_022065ec(void *, s32, void *, u32, void *);
s32 func_ov001_022070e4();

s32 func_ov001_022059fc()
{
    s32 h = 0;
    s32 result = -5;
    volatile u32 t40 = 0;
    s32 retries = 0;
    s32 done = 0;
    s32 z10 = 0;
    s32 z18 = 0;
    s32 z2c = 0;
    s32 z34 = 0;
    s32 e14 = -2;
    s32 z38 = 0;
    s32 z24 = 0;
    s32 m28 = -1;
    s32 e20 = -4;
    s32 e1c = -3;
    s32 z3c = 0;
    Unk_ov001_022059fc_L l;
    u32 w5c;
    data_ov001_0222c86c = 1;
    while (done == 0 && data_ov001_0222c860 == 0) {
        func_021132e0(500);
        switch (data_ov001_0222c86c) {
        case 0:
            break;
        case 1:
            result = func_ov001_0220681c();
            if (result != 1) {
                done = 1;
                break;
            }
            data_ov001_0222c888 = 3;
            func_ov001_02203b1c();
            data_ov001_0222c86c = 2;
            break;
        case 2:
            result = func_ov001_02206d44();
            if (result != 1) {
                done = 1;
                break;
            }
            data_ov001_0222c86c = 3;
            break;
        case 3:
            h = func_ov065_02261610(2, 2, z10);
            if (h < 0) {
                result = e14;
                done = 1;
                break;
            }
            l.req.d = z18;
            l.req.a = 8;
            l.req.b = 2;
            l.req.c = 0x1e6;
            result = func_ov065_022615f0(h, &l.req);
            if (result < 0) {
                result = e14;
                done = 1;
                break;
            }
            data_ov001_0222c86c = 4;
            break;
        case 4:
            if (func_ov001_02203e34() >= data_ov001_0222a538) {
                func_ov065_0226148c(h);
                result = e1c;
                done = 1;
                break;
            }
            l.buf[0] = 8;
            func_ov001_02206248((Unk_ov001_02206248_Out *)data_ov001_0222c8fc, l.buf);
            if (func_ov065_02261524(h, data_ov001_0222d584, 0x800, 4, l.buf) > 0) {
                if (func_ov001_02206478(data_ov001_0222d584, data_ov001_0222c8a0) != 0) {
                    data_ov001_0222a538 = func_ov001_02203e34() + 30000;
                    data_ov001_0222c86c = 5;
                    data_ov001_0222c888 = 4;
                    func_ov001_02203b1c();
                }
            }
            break;
        case 5:
            data_ov001_0222c864 = func_ov001_02206374(data_ov001_0222d584);
            func_ov001_022067ac(h, l.buf, data_ov001_0222d584, data_ov001_0222c864);
            t40 = func_ov001_02203e34();
            data_ov001_0222c86c = 6;
            break;
        case 6:
            if (func_ov001_02203e34() >= data_ov001_0222a538) {
                func_ov065_0226148c(h);
                result = e20;
                done = 1;
                break;
            }
            if (func_ov065_02261524(h, data_ov001_0222d584, 0x800, 4, l.buf) > 0
                && func_ov001_02206418(data_ov001_0222d584, 3, data_ov001_0222cd84, data_ov001_0222c8fc) != 0) {
                u8 *q = func_ov001_022066b0(data_ov001_0222cd84, &l.w54, &l.w58);
                if (l.w54 != 0x101) break;
                w5c = func_ov001_02203e34();
                data_ov001_0222c924 = *(Unk_ov001_022059fc_B8 *)q;
                func_ov001_02203e58(data_ov001_0222c92c, &w5c, 4);
                retries = z24;
                data_ov001_0222c86c = 7;
                data_ov001_0222c888 = 5;
                data_ov001_0222a538 = m28;
                func_ov001_02203b1c();
                break;
            }
            if (func_ov001_02203e34() >= t40 + 1000) data_ov001_0222c86c = 5;
            break;
        case 7:
            data_ov001_0222c884 = func_ov001_02206558(data_ov001_0222cd84, 0x102, data_ov001_0222c92c, 8);
            data_ov001_0222c864 = func_ov001_022065ec(data_ov001_0222d584, 4, data_ov001_0222cd84, data_ov001_0222c884, data_ov001_0222c8fc);
            func_ov001_022067ac(h, l.buf, data_ov001_0222d584, data_ov001_0222c864);
            t40 = func_ov001_02203e34();
            {
                s32 *zp = (s32 *)data_ov001_0222cb30;
                s32 k;
                for (k = 0; k < 149; k++) zp[k] = z2c;
            }
            data_ov001_0222c86c = 8;
            break;
        case 8:
            if (func_ov065_02261524(h, data_ov001_0222d584, 0x800, 4, l.buf) > 0) {
                data_ov001_0222c884 = func_ov001_02206418(data_ov001_0222d584, 5, data_ov001_0222cd84, data_ov001_0222c924.v);
                if (data_ov001_0222c884 != 0 && func_ov001_0220607c(data_ov001_0222cd84) != 0) {
                    if (data_ov001_0222cc30_b[z3c] != 0) data_ov001_0222c850 = 1;
                    else data_ov001_0222c850 = z34;
                    retries = z38;
                    data_ov001_0222c86c = 9;
                    break;
                }
            }
            if (func_ov001_02203e34() >= t40 + 1000) {
                retries++;
                if (retries >= 10) {
                    func_ov065_0226148c(h);
                    result = e14;
                    done = 1;
                } else {
                    data_ov001_0222c86c = 7;
                }
            }
            break;
        case 9:
            data_ov001_0222c884 = func_ov001_02206558(data_ov001_0222cd84, 0x301, &data_ov001_0222c850, 1);
            data_ov001_0222c864 = func_ov001_022065ec(data_ov001_0222d584, 6, data_ov001_0222cd84, data_ov001_0222c884, data_ov001_0222c924.v);
            if (func_ov001_022070e4() != 7) {
                t40 = func_ov001_02203e34() + 1000;
                retries = 10;
                data_ov001_0222c86c = 10;
            } else {
                func_ov001_022067ac(h, l.buf, data_ov001_0222d584, data_ov001_0222c864);
                t40 = func_ov001_02203e34();
                data_ov001_0222c86c = 10;
            }
            break;
        case 10:
            if (func_ov001_02203e34() >= t40 + 1000) {
                retries++;
                if (retries >= 10) {
                    done = 1;
                    result = func_ov001_02205e18();
                } else {
                    data_ov001_0222c86c = 9;
                }
            }
            break;
        }
    }
    if (h != 0) func_ov065_0226148c(h);
    if (data_ov001_0222c860 != 0) result = -8;
    return result;
}
}
