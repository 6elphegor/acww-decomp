// mwcc-flags: -O4,p
#include "types.h"

// ov065_069: GameSpy-like login/handshake packet builder & parser 0x0228a20c..0x0228ab0c

struct Unk_ov065_0228a218_Ent;
struct Unk_ov065_022786bc_Vec;

struct Unk_ov065_0228a218_Rec {
    void *unk_00;
    s32 unk_04;
};

struct Unk_ov065_0228a218_B4 {
    u8 b[4];
};

struct Unk_ov065_0228a218_B2 {
    u8 b[2];
};

struct Unk_ov065_0228a218_Ctx {
    s32 unk_00;
    void *unk_04;
    Unk_ov065_022786bc_Vec *unk_08;
    u8 unk_0c[0x24];
    u8 unk_30[0x24];
    s8 unk_54[0x20];
    s8 unk_74[8];
    void *unk_7c;
    void *unk_80;
    u32 unk_84[0xff];
    s32 unk_480;
    s32 unk_484;
    u8 pad_488[0x4a4 - 0x488];
    u32 unk_4a4;
    u16 unk_4a8;
    u16 pad_4aa;
    u32 unk_4ac;
    s32 unk_4b0;
    u32 unk_4b4;
    u32 unk_4b8;
    u8 unk_4bc[0x108];
    u32 unk_5c4;
    u32 unk_5c8;
};

extern "C" {
extern u8 data_ov065_0228e968[];
extern u8 data_ov065_0228e970[];

s32 func_021277d4(const char *);
void func_02128a00(void *, const void *, s32);
s32 func_02128930(void *, void *, u32);
s32 func_02128c70();
s32 func_02133150(s32, s32);

void *func_ov065_02277af0(u32);
void func_ov065_02277ac8(void *);
void *func_ov065_0227866c(Unk_ov065_022786bc_Vec *, s32);
s32 func_ov065_02278684(Unk_ov065_022786bc_Vec *);
void func_ov065_02278688(Unk_ov065_022786bc_Vec *);
s32 func_ov065_02278ca0(s32, void *, s32, s32);
void func_ov065_02278dbc(s32);
void func_ov065_022885d8(void *, void *, s32);
u32 func_ov065_02288d2c(Unk_ov065_0228a218_Ent *);
void func_ov065_02288d30(Unk_ov065_0228a218_Ent *, u8);
void func_ov065_02288d34(Unk_ov065_0228a218_Ent *, u32);
void func_ov065_02288d38(Unk_ov065_0228a218_Ent *, u32, u32);
void func_ov065_02288d40(Unk_ov065_0228a218_Ent *, u32);
Unk_ov065_0228a218_Ent *func_ov065_02288d44(Unk_ov065_0228a218_Ctx *, u32, u32);
s32 func_ov065_02288d18(Unk_ov065_0228a218_Ent *);
void func_ov065_0228914c(Unk_ov065_0228a218_Ent *, void *, u32);
void func_ov065_02289174(Unk_ov065_0228a218_Ent *, void *, void *);
void func_ov065_022891bc(Unk_ov065_0228a218_Ctx *);
void func_ov065_0228b070(Unk_ov065_0228a218_Ctx *, Unk_ov065_0228a218_Ent *);
s32 func_ov065_0228ab3c(u8 **, u32, s32 *);
void func_ov065_0228ab50(u8 **, const char *, s32 *);
s32 func_ov065_0228ab8c(Unk_ov065_0228a218_Ctx *);
void func_ov065_0228aca8(Unk_ov065_0228a218_Ctx *);
s32 func_ov065_0228ae10(void *, s32);
void func_ov065_0228ae2c(Unk_ov065_0228a218_Ctx *, void *);
void func_ov065_0228aed0(Unk_ov065_0228a218_Ctx *);

void func_ov065_0228a20c(Unk_ov065_0228a218_Ctx *ctx, u32 v);
s32 func_ov065_0228a218(Unk_ov065_0228a218_Ctx *ctx, u8 *buf, s32 n);
s32 func_ov065_0228a300(Unk_ov065_0228a218_Ctx *ctx, Unk_ov065_0228a218_Ent *ent, u8 *buf, s32 n, s32 flag);
void func_ov065_0228a4f4(Unk_ov065_0228a218_Ctx *ctx, u8 *buf, s32 n, u32 *ip, u16 *volatile port);
s32 func_ov065_0228a544(Unk_ov065_0228a218_Ctx *ctx, u8 *buf, s32 n);
s32 func_ov065_0228a5e4(u8 *buf, s32 n);
s32 func_ov065_0228a644(u32 flags);
void func_ov065_0228a678(Unk_ov065_0228a218_Ctx *ctx, s8 *key, s32 n);
void func_ov065_0228a6f0(Unk_ov065_0228a218_Ctx *ctx);
void func_ov065_0228a718(Unk_ov065_0228a218_Ctx *ctx);
void func_ov065_0228a76c(Unk_ov065_0228a218_Ctx *ctx);
void func_ov065_0228a7b4(Unk_ov065_0228a218_Ctx *ctx);
s32 func_ov065_0228a7f0(Unk_ov065_0228a218_Ctx *ctx, const char *user, const char *pass, u32 flags, u32 extra);
s32 func_ov065_0228a9c0(Unk_ov065_0228a218_Ctx *ctx, void *buf, s32 n);
void func_ov065_0228aa34(Unk_ov065_0228a218_Ctx *ctx);
void func_ov065_0228aaec(u8 **cur, const void *src, s32 n, s32 *len);
void func_ov065_0228ab0c(u8 **cur, u32 v, s32 *len);

void func_ov065_0228a20c(Unk_ov065_0228a218_Ctx *ctx, u32 v)
{
    ctx->unk_4ac = v;
}

s32 func_ov065_0228a218(Unk_ov065_0228a218_Ctx *ctx, u8 *buf, s32 n)
{
    s32 off;
    u32 flags;
    u32 ip;
    u16 port;
    Unk_ov065_0228a218_Ent *ent;
    s32 r;

    if (n < 1) {
        return 0;
    }
    flags = buf[0];
    off = func_ov065_0228a644(flags);
    if (n < off) {
        return 0;
    }
    if (flags & 0x40) {
        if (func_ov065_0228a544(ctx, buf + off, n - off) == 0) {
            return 0;
        }
    }
    flags = flags & 0x80;
    if (flags) {
        if (func_ov065_0228a5e4(buf + off, n - off) == 0) {
            return 0;
        }
    }
    if (func_02128930(buf + 1, data_ov065_0228e968, 4) == 0) {
        return -1;
    }
    func_ov065_0228a4f4(ctx, buf, n, &ip, &port);
    ent = func_ov065_02288d44(ctx, ip, port);
    if (func_ov065_02288d18(ent) != 0) {
        return -2;
    }
    r = func_ov065_0228a300(ctx, ent, buf, n, 1);
    func_ov065_0228b070(ctx, ent);
    return r;
}

s32 func_ov065_0228a300(Unk_ov065_0228a218_Ctx *ctx, Unk_ov065_0228a218_Ent *ent, u8 *buf, s32 n, s32 flag)
{
    s32 cnt;
    s32 orig;
    u32 flags;
    s32 i;
    u16 tmp;
    u16 port;
    u32 ip;
    u8 *d;
    Unk_ov065_0228a218_Rec *rec;

    orig = n;
    flags = buf[0];
    func_ov065_02288d40(ent, flags);
    buf += 5;
    n -= 5;
    if (flags & 0x10) {
        buf += 2;
        n -= 2;
    }
    if (flags & 2) {
        d = (u8 *)&ip;
        d[0] = buf[0];
        d[1] = buf[1];
        d[2] = buf[2];
        d[3] = buf[3];
        buf += 4;
        n -= 4;
    } else {
        ip = 0;
    }
    if (flags & 0x20) {
        d = (u8 *)&port;
        d[0] = buf[0];
        d[1] = buf[1];
        buf += 2;
        n -= 2;
    } else {
        port = ctx->unk_4a8;
    }
    func_ov065_02288d38(ent, ip, port);
    if (flags & 8) {
        d = (u8 *)&ip;
        d[0] = buf[0];
        d[1] = buf[1];
        d[2] = buf[2];
        d[3] = buf[3];
        buf += 4;
        n -= 4;
        func_ov065_02288d34(ent, ip);
    }
    if (flags & 0x40) {
        cnt = func_ov065_02278684(ctx->unk_08);
        i = 0;
        if (cnt > 0) {
            do {
                rec = (Unk_ov065_0228a218_Rec *)func_ov065_0227866c(ctx->unk_08, i);
                switch (rec->unk_04) {
                case 1:
                    func_ov065_0228914c(ent, rec->unk_00, *buf);
                    buf++;
                    n--;
                    break;
                case 2: {
                    u16 sw;
                    d = (u8 *)&tmp;
                    d[0] = buf[0];
                    d[1] = buf[1];
                    sw = (u16)(((tmp >> 8) & 0xff) | ((tmp << 8) & 0xff00));
                    func_ov065_0228914c(ent, rec->unk_00, sw);
                    buf += 2;
                    n -= 2;
                    break;
                }
                case 0: {
                    u32 c;
                    if (flag != 0) {
                        c = *buf;
                        buf++;
                        n--;
                    } else {
                        c = 0xff;
                    }
                    if (c == 0xff) {
                        s32 l;
                        func_ov065_02289174(ent, rec->unk_00, buf);
                        l = func_021277d4((const char *)buf) + 1;
                        buf += l;
                        n -= l;
                    } else {
                        func_ov065_02289174(ent, rec->unk_00, (void *)ctx->unk_84[c]);
                    }
                    break;
                }
                }
                i++;
            } while (i < cnt);
        }
        func_ov065_02288d30(ent, (u8)(func_ov065_02288d2c(ent) | 1));
    }
    flags = flags & 0x80;
    if (flags) {
        goto test;
        while (1) {
            char *p;
            s32 l;
            p = (char *)buf;
            l = func_021277d4((const char *)buf) + 1;
            buf += l;
            n -= l;
            func_ov065_02289174(ent, p, buf);
            l = func_021277d4((const char *)buf) + 1;
            buf += l;
            n -= l;
        test:
            if (*(s8 *)buf == 0) {
                break;
            }
            if (n <= 0) {
                break;
            }
        }
        n--;
        func_ov065_02288d30(ent, (u8)(func_ov065_02288d2c(ent) | 2));
    }
    return orig - n;
}

void func_ov065_0228a4f4(Unk_ov065_0228a218_Ctx *ctx, u8 *buf, s32 n, u32 *ip, u16 *volatile port)
{
    u32 f;
    u8 *p;

    if (n < 5) {
        goto end;
    }
    f = buf[0];
    p = buf + 1;
    ((u8 *)ip)[0] = buf[1];
    ((u8 *)ip)[1] = p[1];
    ((u8 *)ip)[2] = p[2];
    ((u8 *)ip)[3] = p[3];
    if (f & 0x10) {
        if (n - 5 < 2) {
            goto end;
        }
        u8 *d = (u8 *)port;
        p = buf + 5;
        d[0] = *(p - 5 + 5);
        d[1] = p[1];
        return;
    }
    *port = ctx->unk_4a8;
end:;
}

s32 func_ov065_0228a544(Unk_ov065_0228a218_Ctx *ctx, u8 *buf, s32 n)
{
    s32 cnt;
    s32 i;
    Unk_ov065_0228a218_Rec *rec;
    u32 c;
    s32 l;

    cnt = func_ov065_02278684(ctx->unk_08);
    i = 0;
    if (cnt > 0) {
        do {
            rec = (Unk_ov065_0228a218_Rec *)func_ov065_0227866c(ctx->unk_08, i);
            switch (rec->unk_04) {
            case 1:
                buf += 1;
                n -= 1;
                break;
            case 2:
                buf += 2;
                n -= 2;
                break;
            case 0:
                if (n < 1) {
                    return 0;
                }
                c = *buf;
                buf++;
                n--;
                if (c == 0xff) {
                    l = func_ov065_0228ae10(buf, n);
                    if (l == -1) {
                        return 0;
                    }
                    buf += l;
                    n -= l;
                }
                break;
            default:
                return 0;
            }
            if (n < 0) {
                return 0;
            }
            i++;
        } while (i < cnt);
    }
    return 1;
}

s32 func_ov065_0228a5e4(u8 *buf, s32 n)
{
    s32 l;
    s32 z = 0;

    while (n > 0 && ((s8 *)buf)[z] != 0) {
        l = func_ov065_0228ae10(buf, n);
        if (l < 0) {
            return 0;
        }
        buf += l;
        n -= l;
        l = func_ov065_0228ae10(buf, n);
        if (l < 0) {
            return 0;
        }
        buf += l;
        n -= l;
    }
    if (n == 0) {
        return 0;
    }
    if (*(s8 *)buf == 0) {
        return 1;
    }
    return 0;
}

s32 func_ov065_0228a644(u32 flags)
{
    s32 sz = 5;
    if (flags & 2) {
        sz += 4;
    }
    if (flags & 8) {
        sz += 4;
    }
    if (flags & 0x10) {
        sz += 2;
    }
    if (flags & 0x20) {
        sz += 2;
    }
    return sz;
}

void func_ov065_0228a678(Unk_ov065_0228a218_Ctx *ctx, s8 *key, s32 n)
{
    s32 len;
    s8 *pw;
    s32 i;
    s32 j;

    len = func_021277d4((const char *)ctx->unk_54);
    pw = ctx->unk_54;
    for (i = 0; i < n; i++) {
        s32 c = pw[i % len];
        j = (i * c) % 8;
        ctx->unk_74[j] = (s8)(ctx->unk_74[j] ^ (s8)(ctx->unk_74[i % 8] ^ key[i]));
    }
    func_ov065_022885d8(ctx->unk_4bc, ctx->unk_74, 8);
}

void func_ov065_0228a6f0(Unk_ov065_0228a218_Ctx *ctx)
{
    func_ov065_0228a718(ctx);
    func_ov065_0228aed0(ctx);
    func_ov065_022891bc(ctx);
    if (ctx->unk_04 != 0) {
        func_ov065_02278688((Unk_ov065_022786bc_Vec *)ctx->unk_04);
    }
    ctx->unk_04 = 0;
}

void func_ov065_0228a718(Unk_ov065_0228a218_Ctx *ctx)
{
    if (ctx->unk_7c != 0) {
        func_ov065_02277ac8(ctx->unk_7c);
    }
    ctx->unk_7c = 0;
    ctx->unk_80 = 0;
    if (ctx->unk_4b0 != -1) {
        func_ov065_02278dbc(ctx->unk_4b0);
    }
    ctx->unk_4b0 = -1;
    ctx->unk_00 = 1;
    func_ov065_0228a76c(ctx);
    ctx->unk_484 = -1;
    func_ov065_0228a7b4(ctx);
}

void func_ov065_0228a76c(Unk_ov065_0228a218_Ctx *ctx)
{
    s32 i;
    Unk_ov065_0228a218_Rec *rec;

    if (ctx->unk_08 != 0) {
        i = 0;
        if (func_ov065_02278684(ctx->unk_08) > 0) {
            do {
                rec = (Unk_ov065_0228a218_Rec *)func_ov065_0227866c(ctx->unk_08, i);
                func_ov065_0228ae2c(ctx, rec->unk_00);
                i++;
            } while (i < func_ov065_02278684(ctx->unk_08));
        }
        func_ov065_02278688(ctx->unk_08);
        ctx->unk_08 = 0;
    }
}

void func_ov065_0228a7b4(Unk_ov065_0228a218_Ctx *ctx)
{
    s32 i = 0;
    s32 *pn = &ctx->unk_480;
    u32 *p;

    if (*pn > 0) {
        p = (u32 *)ctx;
        do {
            func_ov065_0228ae2c(ctx, (void *)p[0x84 / 4]);
            p++;
            i++;
        } while (i < *pn);
    }
    ctx->unk_480 = 0;
}

s32 func_ov065_0228a7f0(Unk_ov065_0228a218_Ctx *ctx, const char *user, const char *pass, u32 flags, u32 extra)
{
    u16 tmp;
    s32 len;
    u8 *cur;
    u8 buf[0x300];
    s32 r;
    u8 *d;
    u8 *sp;

    if (user == 0) {
        user = (const char *)data_ov065_0228e970;
    }
    if (pass == 0) {
        pass = (const char *)data_ov065_0228e970;
    }
    if (func_021277d4(user) > 0x100) {
        return 6;
    }
    if (func_021277d4(pass) > 0x100) {
        return 6;
    }
    r = func_ov065_0228ab8c(ctx);
    if (r != 0) {
        goto end;
    }
    ctx->unk_5c4 = flags;
    func_ov065_0228aa34(ctx);
    len = 2;
    cur = &buf[2];
    func_ov065_0228ab3c(&cur, 0, &len);
    func_ov065_0228ab3c(&cur, 1, &len);
    func_ov065_0228ab3c(&cur, 3, &len);
    func_ov065_0228ab0c(&cur, ctx->unk_4b8, &len);
    func_ov065_0228ab50(&cur, (const char *)ctx->unk_0c, &len);
    func_ov065_0228ab50(&cur, (const char *)ctx->unk_30, &len);
    func_ov065_0228aaec(&cur, ctx->unk_74, 8, &len);
    func_ov065_0228ab50(&cur, pass, &len);
    func_ov065_0228ab50(&cur, user, &len);
    func_ov065_0228ab0c(&cur, ((flags >> 24) & 0xff) | ((flags >> 8) & 0xff00) | ((flags << 8) & 0xff0000) | ((flags << 24) & 0xff000000), &len);
    if (ctx->unk_5c4 & 8) {
        func_ov065_0228ab0c(&cur, ctx->unk_4a4, &len);
    }
    if (ctx->unk_5c4 & 0x80) {
        func_ov065_0228ab0c(&cur, extra, &len);
    }
    {
        u16 l = (u16)*(volatile s32 *)&len;
        tmp = (u16)(((l >> 8) & 0xff) | ((l << 8) & 0xff00));
    }
    u32 da = (u32)buf;
    sp = (u8 *)&tmp;
    *(u8 *)da = sp[0];
    *(u8 *)(da + 1) = sp[1];
    if (func_ov065_02278ca0(ctx->unk_4b0, (u8 *)da, len, 0) <= 0) {
        func_ov065_0228a718(ctx);
        return 3;
    }
    ctx->unk_00 = 3;
    ctx->unk_5c8 = 0;
    if (ctx->unk_7c == 0) {
        ctx->unk_7c = func_ov065_02277af0(0x1000);
        if (ctx->unk_7c == 0) {
            return 5;
        }
        ctx->unk_80 = 0;
    }
    r = 0;
end:
    return r;
}

s32 func_ov065_0228a9c0(Unk_ov065_0228a218_Ctx *ctx, void *buf, s32 n)
{
    s32 tries = 1;
    s32 r;
    s32 res;

    do {
        tries--;
        r = func_ov065_02278ca0(ctx->unk_4b0, buf, n, 0);
        if (r > 0) {
            break;
        }
        if (tries < 0) {
            break;
        }
        func_ov065_0228a718(ctx);
        res = func_ov065_0228a7f0(ctx, 0, 0, 2, 0);
        if (res != 0) {
            func_ov065_0228aca8(ctx);
            return res;
        }
    } while (tries >= 0);
    if (r <= 0) {
        return 3;
    }
    return 0;
}

void func_ov065_0228aa34(Unk_ov065_0228a218_Ctx *ctx)
{
    volatile s32 o1, z1, o2, z2, m2, m1, m3, m4;
    volatile s32 t;
    s32 acc, i;
    s32 a, b, ta, tb;

    ctx->unk_74[0] = (s8)(func_02128c70() % 0x5d + 0x21);
    acc = 0;
    i = 1;
    z1 = 0;
    o1 = 1;
    z2 = 0;
    o2 = 1;
    m1 = 1;
    m2 = 1;
    m3 = 1;
    m4 = 1;
    do {
        s32 v;
        a = ctx->unk_74[i - 1];
        b = ctx->unk_74[0];
        ta = a < b ? o1 : z1;
        tb = b < 0x4f ? o2 : z2;
        b = b & m1;
        t = i;
        t ^= a;
        t &= m2;
        acc = acc ^ t;
        v = b ^ acc;
        v = v ^ tb;
        acc = v;
        acc = acc ^ ta;
        ctx->unk_74[i] = (s8)(func_02128c70() % 0x5d + 0x21);
        if (acc != 0 && (ctx->unk_74[i] & m3) == 0) {
            goto inc;
        }
        if (acc == 0 && (ctx->unk_74[i] & m4) == 1) {
        inc:
            ctx->unk_74[i] = (s8)(ctx->unk_74[i] + 1);
        }
        i++;
    } while (i < 8);
}

void func_ov065_0228aaec(u8 **cur, const void *src, s32 n, s32 *len)
{
    func_02128a00(*cur, src, n);
    *len += n;
    *cur += n;
}

void func_ov065_0228ab0c(u8 **cur, u32 v, s32 *len)
{
    u8 *d = *cur;
    u8 *sp = (u8 *)&v;
    d[0] = sp[0];
    d[1] = sp[1];
    d[2] = sp[2];
    d[3] = sp[3];
    *len += 4;
    *cur += 4;
}
}
