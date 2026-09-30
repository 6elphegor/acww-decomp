// mwcc-flags: -O4,p
#include "types.h"

// ov065_059: GT2-like connection callbacks / state (0x02284240..0x02284a80)

struct Unk_ov065_02284240_Sock {
    u8 pad_00[8];
    u16 unk_08;
    u8 pad_0a[2];
    void *unk_0c;
    void *unk_10;
    s32 unk_14;
    u8 pad_18[4];
    s32 unk_1c;
    s32 (*unk_20)(Unk_ov065_02284240_Sock *, void *, s32, s32, s32, s32, s32);
    s32 (*unk_24)(Unk_ov065_02284240_Sock *);
};

struct Unk_ov065_02284240_Conn;

typedef s32 (*Unk_ov065_02284240_Filter)(Unk_ov065_02284240_Conn *, s32, u32, u32, u32);

struct Unk_ov065_02284240_Blob {
    s32 v[4];
};

struct Unk_ov065_02284240_Conn {
    s32 unk_00;
    u16 unk_04;
    u8 pad_06[2];
    Unk_ov065_02284240_Sock *unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    s32 unk_24;
    s32 (*unk_28)(Unk_ov065_02284240_Conn *, s32, s32, s32);
    s32 (*unk_2c)(Unk_ov065_02284240_Conn *, s32, s32, s32);
    s32 (*unk_30)(Unk_ov065_02284240_Conn *, s32);
    s32 (*unk_34)(Unk_ov065_02284240_Conn *, s32);
    void *unk_38;
    s32 unk_3c;
    s32 unk_40;
    void *unk_44;
    u8 pad_48[8];
    void *unk_50;
    s32 unk_54;
    s32 unk_58;
    void *unk_5c;
    void *unk_60;
    u8 pad_64[0x88 - 0x64];
    u32 unk_88;
    u8 pad_8c[4];
    s32 unk_90;
    u32 unk_94;
    void *unk_98;
    void *unk_9c;
};

struct Unk_ov065_02284908_Buf {
    u32 v[9];
};

namespace Unk_ov065_02284a80_Ns {
extern "C" s32 func_ov065_0228499c(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn **pc, u32 ip, u32 port);
}

extern "C" {
extern void *func_ov065_0227866c(void *, s32);
extern s32 func_ov065_02278684(void *);
extern void func_ov065_02278688(void *);
extern void func_ov065_02277ac8(void *);
extern void *func_ov065_02277af0(s32);
extern s32 func_ov065_02278810(void *, void *);
extern s32 func_ov065_02278658(void *, void *);
extern s32 func_ov065_02278790(s32, void *, s32);
extern s32 func_ov065_02279144();
extern void func_ov065_0227913c(s32);
extern void func_02128a00(void *, const void *, s32);

extern s32 func_ov065_02286564(void *);
extern s32 func_ov065_0228627c(void *, s32, u32, u32, u32);
extern s32 func_ov065_0228638c(void *);
extern s32 func_ov065_022863f8(void *, void *, u32, u32);
extern void func_ov065_02286788(void *, void *);
extern s32 func_ov065_022867c0(u32, u32 *, u16 *);

extern void func_ov065_02283f34(void *);
extern void func_ov065_02283e88(void *, void *);
extern void func_ov065_022850b0(void *, void *);
extern s32 func_ov065_02284ba4(void *);
extern s32 func_ov065_02284bf0(void *, s32, s32, s32);
extern s32 func_ov065_02284c0c(void *, void *);
extern void func_ov065_02284ca4(void *);
extern s32 func_ov065_02284cc0(Unk_ov065_02284240_Conn *);
extern s32 func_ov065_02284d94(void *);
extern s32 func_ov065_02284e90(void *);
extern void func_ov065_02284edc(void *);
extern void func_ov065_02284f28(void *, s32, s32);
extern void func_ov065_02284f84(void *);

s32 func_ov065_02284240(Unk_ov065_02284240_Conn *c, s32 a, u32 msg, u32 len, u32 rel);
s32 func_ov065_022842d0(Unk_ov065_02284240_Conn *c, s32 a, u32 msg, u32 len, u32 rel);
s32 func_ov065_022843c0(Unk_ov065_02284240_Conn *c, s32 a);
s32 func_ov065_02284498(Unk_ov065_02284240_Conn *c, s32 a, s32 b, s32 d);
void func_ov065_02284654(Unk_ov065_02284240_Conn *c, ...);
void func_ov065_02284688(Unk_ov065_02284240_Conn *c, s32 x);
s32 func_ov065_0228472c(Unk_ov065_02284240_Conn *c, u32 t);
s32 func_ov065_0228475c(Unk_ov065_02284240_Conn *c, u32 t);
s32 func_ov065_02284798(Unk_ov065_02284240_Conn *c, u32 t);
s32 func_ov065_022847ec(Unk_ov065_02284240_Conn *c, u32 t);
s32 func_ov065_02284854(Unk_ov065_02284240_Conn *c, u32 a, u32 b);
s32 func_ov065_02284908(Unk_ov065_02284240_Conn *c, s32 msg, s32 len, Unk_ov065_02284240_Blob *x);
s32 func_ov065_0228499c(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn **pc, u32 ip, u32 port);
void func_ov065_02284a0c(Unk_ov065_02284240_Conn **p);
void func_ov065_02284a18(Unk_ov065_02284240_Conn *c);

s32 func_ov065_02284240(Unk_ov065_02284240_Conn *c, s32 a, u32 msg, u32 len, u32 rel)
{
    Unk_ov065_02284240_Filter *f;
    if (c == NULL) {
        return TRUE;
    }
    f = (Unk_ov065_02284240_Filter *)func_ov065_0227866c(c->unk_9c, a);
    if (f == NULL) {
        return TRUE;
    }
    if (len == 0 || msg == 0) {
        msg = 0;
        len = msg;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    (*f)(c, a, msg, len, rel);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        func_ov065_02286564(c->unk_08);
        return FALSE;
    }
    return TRUE;
}

s32 func_ov065_022842d0(Unk_ov065_02284240_Conn *c, s32 a, u32 msg, u32 len, u32 rel)
{
    Unk_ov065_02284240_Filter *f;
    if (c == NULL) {
        return TRUE;
    }
    f = (Unk_ov065_02284240_Filter *)func_ov065_0227866c(c->unk_98, a);
    if (f == NULL) {
        return TRUE;
    }
    if (len == 0 || msg == 0) {
        msg = 0;
        len = msg;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    (*f)(c, a, msg, len, rel);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        func_ov065_02286564(c->unk_08);
        return FALSE;
    }
    return TRUE;
}

s32 func_ov065_02284360(Unk_ov065_02284240_Conn *c, s32 a)
{
    if (c == NULL) {
        return TRUE;
    }
    if (c->unk_34 == NULL) {
        return TRUE;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    c->unk_34(c, a);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        func_ov065_02286564(c->unk_08);
        return FALSE;
    }
    return TRUE;
}

s32 func_ov065_022843c0(Unk_ov065_02284240_Conn *c, s32 a)
{
    if (c == NULL) {
        return TRUE;
    }
    if (c->unk_30 == NULL) {
        return TRUE;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    c->unk_30(c, a);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        func_ov065_02286564(c->unk_08);
        return FALSE;
    }
    return TRUE;
}

s32 func_ov065_02284420(Unk_ov065_02284240_Conn *c, s32 a, s32 b, s32 d)
{
    if (c == NULL) {
        return TRUE;
    }
    if (c->unk_2c == NULL) {
        return TRUE;
    }
    if (b == 0 || a == 0) {
        a = 0;
        b = a;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    c->unk_2c(c, a, b, d);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        func_ov065_02286564(c->unk_08);
        return FALSE;
    }
    return TRUE;
}

s32 func_ov065_02284498(Unk_ov065_02284240_Conn *c, s32 a, s32 b, s32 d)
{
    if (c == NULL) {
        return TRUE;
    }
    c->unk_18 = a;
    if (c->unk_28 == NULL) {
        return TRUE;
    }
    if (d == 0 || b == 0) {
        b = 0;
        d = b;
    }
    c->unk_24++;
    c->unk_08->unk_1c++;
    c->unk_28(c, a, b, d);
    c->unk_24--;
    c->unk_08->unk_1c--;
    if (c->unk_08->unk_14 != 0 && c->unk_08->unk_1c == 0) {
        func_ov065_02286564(c->unk_08);
        return FALSE;
    }
    return TRUE;
}

s32 func_ov065_02284514(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn *c, s32 a, s32 b, s32 p4, s32 p5, s32 p6)
{
    if (s == NULL || c == NULL) {
        return TRUE;
    }
    if (s->unk_20 == NULL) {
        return TRUE;
    }
    if (p6 == 0 || p5 == 0) {
        p5 = 0;
        p6 = 0;
    }
    s->unk_1c++;
    c->unk_24++;
    s->unk_20(s, c, a, b, p4, p5, p6);
    s->unk_1c--;
    c->unk_24--;
    if (s->unk_14 != 0 && s->unk_1c == 0) {
        func_ov065_02286564(s);
        return FALSE;
    }
    return TRUE;
}

s32 func_ov065_022845a4(Unk_ov065_02284240_Sock *s)
{
    if (s == NULL) {
        return TRUE;
    }
    if (s->unk_24 == NULL) {
        return TRUE;
    }
    s->unk_1c++;
    s->unk_24(s);
    s->unk_1c--;
    if (s->unk_14 != 0 && s->unk_1c == 0) {
        func_ov065_02286564(s);
        return FALSE;
    }
    return TRUE;
}

void func_ov065_022845f4(Unk_ov065_02284240_Conn *c)
{
    if (c->unk_38 != NULL) {
        func_ov065_02277ac8(c->unk_38);
    }
    if (c->unk_44 != NULL) {
        func_ov065_02277ac8(c->unk_44);
    }
    if (c->unk_50 != NULL) {
        func_ov065_02277ac8(c->unk_50);
    }
    if (c->unk_5c != NULL) {
        func_ov065_02278688(c->unk_5c);
    }
    if (c->unk_60 != NULL) {
        func_ov065_02278688(c->unk_60);
    }
    if (c->unk_98 != NULL) {
        func_ov065_02278688(c->unk_98);
    }
    if (c->unk_9c != NULL) {
        func_ov065_02278688(c->unk_9c);
    }
    func_ov065_02277ac8(c);
}

void func_ov065_02284654(Unk_ov065_02284240_Conn *c, ...)
{
    if (c->unk_0c != 7) {
        c->unk_0c = 7;
        func_ov065_02278810(c->unk_08->unk_0c, &c);
        func_ov065_02278658(c->unk_08->unk_10, &c);
    }
}

void func_ov065_02284688(Unk_ov065_02284240_Conn *c, s32 x)
{
    if (x != 0) {
        if (c->unk_0c < 7) {
            func_ov065_02284654(c);
            func_ov065_02284ca4(c);
            func_ov065_022843c0(c, 0);
            func_ov065_0228638c(c);
        }
    } else {
        c->unk_0c = 6;
        func_ov065_02284edc(c);
    }
}

s32 func_ov065_022846c4(Unk_ov065_02284240_Conn *c, u32 t)
{
    if (func_ov065_022847ec(c, t) == 0) {
        return FALSE;
    }
    if (func_ov065_0228472c(c, t) == 0) {
        return FALSE;
    }
    if (func_ov065_02284798(c, t) == 0) {
        return FALSE;
    }
    if (func_ov065_0228475c(c, t) != 0) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov065_0228472c(Unk_ov065_02284240_Conn *c, u32 t)
{
    u32 d = t - c->unk_88;
    if (d > 30000) {
        if (func_ov065_02284e90(c) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

s32 func_ov065_0228475c(Unk_ov065_02284240_Conn *c, u32 t)
{
    if (c->unk_90 == 0) {
        return TRUE;
    }
    u32 d = t - c->unk_94;
    if (d > 100) {
        if (func_ov065_02284d94(c) == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

s32 func_ov065_02284798(Unk_ov065_02284240_Conn *c, u32 t)
{
    s32 n = func_ov065_02278684(c->unk_60);
    s32 i;
    for (i = 0; i < n; i++) {
        s32 *e = (s32 *)func_ov065_0227866c(c->unk_60, i);
        u32 d = t - e[3];
        if (d > 1000) {
            if (func_ov065_02284c0c(c, e) == 0) {
                return FALSE;
            }
        }
    }
    return TRUE;
}

s32 func_ov065_022847ec(Unk_ov065_02284240_Conn *c, u32 t)
{
    if (c->unk_0c < 5) {
        BOOL r = FALSE;
        if (c->unk_10 != 0) {
            u32 to = c->unk_20;
            if (to != 0) {
                if (t - c->unk_1c > to) {
                    r = TRUE;
                }
            }
        } else if (c->unk_0c < 4) {
            if (t - c->unk_1c > 60000) {
                r = TRUE;
            }
        }
        if (r != 0) {
            func_ov065_02284ca4(c);
            func_ov065_02284654(c);
            if (func_ov065_02284498(c, 6, 0, 0) == 0) {
                return FALSE;
            }
        }
    }
    return TRUE;
}

s32 func_ov065_02284854(Unk_ov065_02284240_Conn *c, u32 a, u32 b)
{
    if (func_ov065_0228627c(c->unk_08, c->unk_00, c->unk_04, a, b) == 0) {
        return FALSE;
    }
    c->unk_88 = func_ov065_02279144();
    return TRUE;
}

void func_ov065_02284888(Unk_ov065_02284240_Conn *c, s32 msg, s32 len)
{
    c->unk_14 = 0;
    if (c->unk_0c == 4) {
        func_ov065_02286788(&msg, &len);
        func_ov065_02284f28(c, msg, len);
        c->unk_0c = 6;
    }
}

s32 func_ov065_022848b8(Unk_ov065_02284240_Conn *c, Unk_ov065_02284240_Blob *x)
{
    if (c->unk_14 != 0) {
        c->unk_14 = 0;
        return FALSE;
    }
    s32 z = 0;
    c->unk_14 = z;
    if (c->unk_0c != 4) {
        return z;
    }
    func_ov065_02284f84(c);
    c->unk_0c = 5;
    if (x != NULL) {
        *(Unk_ov065_02284240_Blob *)&c->unk_28 = *x;
    }
    return TRUE;
}

s32 func_ov065_02284908(Unk_ov065_02284240_Conn *c, s32 msg, s32 len, Unk_ov065_02284240_Blob *x)
{
    Unk_ov065_02284908_Buf buf;
    func_ov065_02286788(&msg, &len);
    if (len > 0) {
        c->unk_38 = func_ov065_02277af0(len);
        if (c->unk_38 == NULL) {
            return TRUE;
        }
        func_02128a00(c->unk_38, (void *)msg, len);
        c->unk_3c = len;
    }
    if (x != NULL) {
        *(Unk_ov065_02284240_Blob *)&c->unk_28 = *x;
    }
    func_ov065_02283f34(&buf);
    func_ov065_02283e88((u8 *)c + 0x68, &buf);
    func_ov065_022850b0(c, &buf);
    c->unk_0c = 0;
    return FALSE;
}

s32 func_ov065_0228497c(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn **pc, u32 ip, u32 port)
{
    s32 r = func_ov065_022863f8(s, pc, ip, port);
    if (r != 0) {
        return r;
    }
    (*pc)->unk_0c = 2;
    (*pc)->unk_10 = 0;
    return 0;
}

s32 func_ov065_0228499c(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn **pc, u32 ip, u32 port)
{
    s32 r = func_ov065_022863f8(s, pc, ip, port);
    if (r != 0) {
        return r;
    }
    (*pc)->unk_0c = 0;
    (*pc)->unk_10 = 1;
    return 0;
}

s32 func_ov065_022849bc(Unk_ov065_02284240_Conn *c)
{
    return c->unk_40;
}

void func_ov065_022849c0(Unk_ov065_02284240_Conn *c, s32 v)
{
    c->unk_40 = v;
}

void func_ov065_022849c4(Unk_ov065_02284240_Conn *c, s32 v)
{
    *(s32 *)&c->unk_30 = v;
}

s32 func_ov065_022849c8(Unk_ov065_02284240_Conn *c)
{
    return c->unk_00;
}

s32 func_ov065_022849cc(Unk_ov065_02284240_Conn *c)
{
    return c->unk_54 - c->unk_58;
}

u32 func_ov065_022849d4(Unk_ov065_02284240_Sock *c)
{
    return c->unk_08;
}

s32 func_ov065_022849d8(Unk_ov065_02284240_Conn *c)
{
    s32 s = c->unk_0c;
    if (s < 5) {
        return 0;
    }
    if (s == 5) {
        return 1;
    }
    if (s == 6) {
        return 2;
    }
    return 3;
}

s32 func_ov065_022849f8(Unk_ov065_02284240_Sock *s)
{
    return func_ov065_02278790((s32)s->unk_0c, (void *)func_ov065_02284a0c, 0);
}

void func_ov065_02284a0c(Unk_ov065_02284240_Conn **p)
{
    func_ov065_02284a18(*p);
}

void func_ov065_02284a18(Unk_ov065_02284240_Conn *c)
{
    func_ov065_02284688(c, 1);
}

s32 func_ov065_02284a24(Unk_ov065_02284240_Conn *c)
{
    return func_ov065_02284cc0(c);
}

void func_ov065_02284a2c(Unk_ov065_02284240_Conn *c, s32 msg, s32 len, s32 p3)
{
    if (c->unk_0c == 5) {
        func_ov065_02286788(&msg, &len);
        if (func_ov065_02278684(c->unk_98) != 0) {
            func_ov065_022842d0(c, 0, msg, len, p3);
        } else {
            func_ov065_02284bf0(c, msg, len, p3);
        }
    }
}

s32 func_ov065_02284a80(Unk_ov065_02284240_Sock *s, Unk_ov065_02284240_Conn **out, u32 host, s32 p3, s32 p4, s32 p5, s32 p6, s32 p7)
{
    u32 port;
    u16 port16;
    Unk_ov065_02284240_Conn *conn;
    u32 ip;
    s32 r;

    if (func_ov065_022867c0(host, &ip, &port16) == 0 || ip == 0 || (port = port16) == 0) {
        return 4;
    }
    u32 sw = ((ip << 24) & 0xff000000) | (((ip << 8) & 0xff0000) | (((ip >> 24) & 0xff) | ((ip >> 8) & 0xff00)));
    if ((sw & 0xe0000000) == 0xe0000000) {
        return 4;
    }
    r = func_ov065_0228499c(s, &conn, ip, port);
    if (r != 0) {
        return r;
    }
    conn->unk_20 = p5;
    r = func_ov065_02284908(conn, p3, p4, (Unk_ov065_02284240_Blob *)p6);
    if (r != 0) {
        func_ov065_0228638c(conn);
        return r;
    }
    if (p7 == 0) {
        if (out != NULL) {
            *out = conn;
        }
        return 0;
    }
    conn->unk_24++;
    BOOL one = TRUE;
    BOOL done;
    do {
        func_ov065_02284ba4(s);
        if (conn->unk_0c >= 5) {
            done = one;
        } else {
            done = FALSE;
        }
        if (done == 0) {
            func_ov065_0227913c(one);
        }
    } while (done == 0);
    conn->unk_24--;
    if (conn->unk_0c == 5) {
        *out = conn;
    }
    return conn->unk_18;
}
}
