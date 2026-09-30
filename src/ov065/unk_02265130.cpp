// mwcc-flags: -O4,p
#include "types.h"

// SSL 3.0 client/server handshake helpers (overlay 065)

struct Unk_ov065_02265130_Hash {
    u8 unk_00[0x5c];
};

struct Unk_ov065_02265130_Pms {
    u8 unk_00[0x20];
    u8 unk_20;
    u8 unk_21;
    u8 unk_22[0x2e];
    u8 unk_50[4];
    u32 unk_54;
    u16 unk_58;
};

struct Unk_ov065_02265130_Cert {
    u32 unk_00;
    u8 *unk_04;
};

struct Unk_ov065_02265130_Ctx {
    Unk_ov065_02265130_Pms *unk_00;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
    u8 unk_08[0x20];
    u8 unk_28[4];
    u8 unk_2c[0x1c];
    u8 pad_48[0x1a0 - 0x48];
    u8 unk_1a0[8];
    u8 pad_1a8[0x2c0 - 0x1a8];
    u8 unk_2c0[0x5c];
    u8 unk_31c[0x5c];
    u8 unk_378[0x58];
    u8 unk_3d0[0x58];
    u8 unk_428;
    u8 unk_429;
    u8 pad_42a[0x468 - 0x42a];
    u8 unk_468[0x100];
    s32 unk_568;
    u8 unk_56c[8];
    s32 unk_574;
    u8 pad_578[0x7f4 - 0x578];
    Unk_ov065_02265130_Cert *unk_7f4;
};

struct Unk_ov065_02265130_Sess {
    u32 unk_00;
    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u16 unk_0a;
    Unk_ov065_02265130_Ctx *unk_0c;
    u32 unk_10;
    u32 unk_14;
    u16 unk_18;
    u16 unk_1a;
    u32 unk_1c;
    u32 unk_20;
};

struct Unk_ov065_0226599c_Rng {
    s64 unk_00;
    s64 unk_08;
    s64 unk_10;
};

struct Unk_ov065_02265334_Os {
    u32 unk_00;
    u32 unk_04;
};

typedef Unk_ov065_02265130_Sess Sess;
typedef Unk_ov065_02265130_Ctx Ctx;

extern "C" {
extern void *(*data_ov065_0228ebc8)(u32);
extern void (*data_ov065_0228ebd0)(void *);
extern u32 data_ov065_0228b440;
extern u16 data_ov065_0228b44c[2];
extern Unk_ov065_0226599c_Rng data_ov065_0228ec04;
extern u32 data_ov065_022903c4;
extern u8 data_ov065_022903c8[20];
extern u8 data_ov065_022903c0;
extern Unk_ov065_02265334_Os data_021fcc2c;

// main module
u32 func_01ffa2ec();
void func_01ffa3d4(u32);
void func_02115fb4(void *, s32, u32);
void func_02116048(void *, void *, u32);
s32 func_02133150(s32, s32);
s64 func_02133100(s64, s64);
u32 func_0211337c(u32);
void func_02113384(u32, u32);

// same overlay, out of range
s32 func_ov065_022628ac(Sess *);
void func_ov065_02262968(Sess *);
void func_ov065_02262804(Sess *);
u32 func_ov065_0226242c(u8 *, u32, u8 *, u32, Sess *);
void func_ov065_02267a84(void *);
void func_ov065_0226750c(void *);
void func_ov065_02267480(void *, u8 *, u32);
void func_ov065_022679f8(void *, u8 *, u32);
void func_ov065_022679a4(void *, void *);
void func_ov065_0226797c(void *, void *);
u32 func_ov065_02267314();
u32 func_ov065_02267394(u32, u32);
u32 func_ov065_0226733c(u8 *);
void func_ov065_02266338(Ctx *);
void func_ov065_0226650c(Ctx *);
void func_ov065_02266264(Ctx *, u8 *, u32);
void func_ov065_022661c0(Ctx *, u8 *, u32);
void func_ov065_02268210(u16 *, void *, s32, s32);
void func_ov065_02268540(u16 *, u16 *, u16 *, s32, u16 *);
s32 func_ov065_02265a5c(Sess *);
s32 func_ov065_02265dac(Ctx *, u8 *);

// in range
s32 func_ov065_02265130(Sess *);
s32 func_ov065_02265188(Sess *);
void func_ov065_02265228(Sess *);
s32 func_ov065_02265294(Sess *);
s32 func_ov065_02265304(Sess *);
void func_ov065_02265334(Sess *);
void func_ov065_0226555c(Sess *);
void func_ov065_02265680(Sess *);
s32 func_ov065_02265794(Sess *);
void func_ov065_02265950(u8 *, u32);
void func_ov065_0226599c(u8 *, s32);

s32 func_ov065_02265130(Sess *s) {
    Ctx *ctx = s->unk_0c;
    if (s->unk_08 != 4) {
        if (func_ov065_022628ac(s)) {
            return 1;
        }
    }
    ctx->unk_429 = 0;
    ctx->unk_428 = 0;
    func_ov065_02267a84(ctx->unk_2c0);
    func_ov065_0226750c(ctx->unk_378);
    return func_ov065_02265188(s);
}

s32 func_ov065_02265188(Sess *s) {
    Ctx *ctx = s->unk_0c;
    s32 r;
    func_ov065_0226555c(s);
    do {
        r = func_ov065_02265a5c(s);
        if (r == 9) {
            return 1;
        }
    } while (r != 4 && ctx->unk_04 == 0);
    if (ctx->unk_04 != 0) {
        func_ov065_02266338(ctx);
        if (func_ov065_02265304(s)) {
            return 1;
        }
        func_ov065_02265680(s);
    } else {
        ctx->unk_00->unk_54 = s->unk_1c;
        ctx->unk_00->unk_58 = s->unk_18;
        func_ov065_02265334(s);
        func_ov065_0226650c(ctx);
        func_ov065_02266338(ctx);
        func_ov065_02265680(s);
        if (func_ov065_02265304(s)) {
            return 1;
        }
    }
    ctx->unk_429 = 8;
    return 0;
}

void func_ov065_02265228(Sess *s) {
    Ctx *ctx = s->unk_0c;
    for (;;) {
        func_ov065_02262968(s);
        ctx->unk_429 = 0;
        ctx->unk_428 = 1;
        func_ov065_02267a84(ctx->unk_2c0);
        func_ov065_0226750c(ctx->unk_378);
        if (func_ov065_02265294(s) == 0) {
            ctx->unk_429 = 8;
            return;
        }
        func_ov065_02262804(s);
        s->unk_18 = s->unk_1a;
        s->unk_1c = s->unk_20;
    }
}

s32 func_ov065_02265294(Sess *s) {
    if (func_ov065_02265a5c(s) != 1) {
        return 1;
    }
    if (func_ov065_02265794(s)) {
        func_ov065_02266338(s->unk_0c);
        func_ov065_02265680(s);
        if (func_ov065_02265304(s)) {
            return 1;
        }
    } else {
        if (func_ov065_02265a5c(s) != 5) {
            return 1;
        }
        if (func_ov065_02265304(s)) {
            return 1;
        }
        func_ov065_02265680(s);
    }
    return 0;
}

s32 func_ov065_02265304(Sess *s) {
    if (func_ov065_02265a5c(s) != 7) {
        return 1;
    }
    if (func_ov065_02265a5c(s) != 6) {
        return 1;
    }
    return 0;
}

void func_ov065_02265334(Sess *s) {
    Ctx *ctx = s->unk_0c;
    s32 n;
    s32 cnt;
    u16 *p0;
    u16 *p1;
    u16 *p2;
    u8 *buf1;
    u16 *p3;
    u8 *buf2;
    u8 *q;
    ctx->unk_00->unk_20 = 3;
    ctx->unk_00->unk_21 = 0;
    func_ov065_0226599c(ctx->unk_00->unk_22, 0x2e);
    n = ctx->unk_568;
    cnt = func_02133150(n * 2, 2);
    buf1 = (u8 *)data_ov065_0228ebc8(n);
    if (buf1 == 0) {
        ctx->unk_429 = 9;
        return;
    }
    buf1[0] = 0;
    buf1[1] = 2;
    func_ov065_0226599c(buf1 + 2, n - 0x33);
    buf1[n - 0x31] = 0;
    func_02116048(&ctx->unk_00->unk_20, buf1 + n - 0x30, 0x30);
    p0 = (u16 *)data_ov065_0228ebc8(cnt * 8);
    if (p0 == 0) {
        data_ov065_0228ebd0(buf1);
        ctx->unk_429 = 9;
        return;
    }
    p1 = p0 + cnt;
    p2 = p1 + cnt;
    p3 = p2 + cnt;
    func_ov065_02268210(p1, buf1, n, cnt);
    func_ov065_02268210(p2, ctx->unk_56c, ctx->unk_574, cnt);
    func_ov065_02268210(p3, ctx->unk_468, n, cnt);
    if (data_ov065_0228b440 < 0x20) {
        u32 th = data_021fcc2c.unk_04;
        u32 pr = func_0211337c(th);
        func_02113384(th, data_ov065_0228b440);
        func_ov065_02268540(p0, p1, p2, cnt, p3);
        func_02113384(th, pr);
    } else {
        func_ov065_02268540(p0, p1, p2, cnt, p3);
    }
    buf2 = (u8 *)data_ov065_0228ebc8(n + 0x49);
    if (buf2 == 0) {
        data_ov065_0228ebd0(buf1);
        data_ov065_0228ebd0(p0);
        ctx->unk_429 = 9;
        return;
    }
    buf2[0] = 0x16;
    buf2[1] = 3;
    buf2[2] = 0;
    buf2[3] = (n + 4) >> 8;
    buf2[4] = n + 4;
    buf2[5] = 0x10;
    buf2[6] = n >> 16;
    buf2[7] = n >> 8;
    q = buf2 + 9;
    buf2[8] = n;
    if ((n & 1) != 0) {
        *q = p0[func_02133150(n, 2)];
        q++;
    }
    {
        s32 i;
        u16 *pp;
        i = func_02133150(n, 2) - 1;
        if (i >= 0) {
            pp = p0 + i;
            do {
                *q++ = *pp >> 8;
                *q++ = *pp;
                pp--;
                i--;
            } while (i >= 0);
        }
    }
    func_ov065_0226242c(buf2, n + 9, 0, 0, s);
    func_ov065_02267480(ctx->unk_378, buf2 + 5, (u32)n + 4);
    func_ov065_022679f8(ctx->unk_2c0, buf2 + 5, n + 4);
    data_ov065_0228ebd0(buf2);
    data_ov065_0228ebd0(p0);
    data_ov065_0228ebd0(buf1);
}

void func_ov065_0226555c(Sess *s) {
    Ctx *ctx = s->unk_0c;
    u8 *buf;
    u8 *q;
    u32 t;
    s32 len;
    u32 i;
    u16 *tp;
    buf = (u8 *)data_ov065_0228ebc8(0x98);
    if (buf == 0) {
        ctx->unk_429 = 9;
        return;
    }
    q = buf + 9;
    buf[9] = 3;
    q[1] = 0;
    t = func_ov065_02267314();
    ctx->unk_08[0] = t >> 24;
    ctx->unk_08[1] = t >> 16;
    ctx->unk_08[2] = t >> 8;
    ctx->unk_08[3] = t;
    func_ov065_0226599c(&ctx->unk_08[4], 0x1c);
    func_02116048(ctx->unk_08, q + 2, 0x20);
    ctx->unk_00 = (Unk_ov065_02265130_Pms *)func_ov065_02267394(s->unk_1c, s->unk_18);
    if (ctx->unk_00) {
        q[0x22] = 0x20;
        func_02116048(ctx->unk_00, q + 0x23, 0x20);
        q += 0x43;
    } else {
        q += 0x22;
        *q++ = 0;
    }
    i = 0;
    *q++ = 0;
    *q++ = 4;
    tp = data_ov065_0228b44c;
    for (; i < 2; i++) {
        *q++ = *tp >> 8;
        *q++ = *tp;
        tp++;
    }
    q[0] = 1;
    q[1] = 0;
    q += 2;
    len = q - buf - 5;
    buf[0] = 0x16;
    buf[1] = 3;
    buf[2] = 0;
    buf[3] = len >> 8;
    buf[4] = len;
    buf[5] = 1;
    buf[6] = (len - 4) >> 16;
    buf[7] = (len - 4) >> 8;
    buf[8] = len - 4;
    func_ov065_0226242c(buf, len + 5, 0, 0, s);
    func_ov065_02267480(ctx->unk_378, buf + 5, len);
    func_ov065_022679f8(ctx->unk_2c0, buf + 5, len);
    data_ov065_0228ebd0(buf);
}

void func_ov065_02265680(Sess *s) {
    Ctx *ctx = s->unk_0c;
    u8 *b;
    b = (u8 *)data_ov065_0228ebc8(0x83);
    if (b == 0) {
        ctx->unk_429 = 9;
        return;
    }
    b[0] = 0x14;
    b[1] = 3;
    b[2] = 0;
    b[3] = 0;
    b[4] = 1;
    b[5] = 1;
    func_02115fb4(ctx->unk_1a0, 0, 8);
    b[6] = 0x16;
    b[7] = 3;
    b[8] = 0;
    b[9] = 0;
    b[10] = 0x28;
    b[11] = 0x14;
    b[12] = 0;
    b[13] = 0;
    b[14] = 0x24;
    func_02116048(ctx->unk_378, ctx->unk_3d0, 0x58);
    func_ov065_02266264(ctx, b + 0xf, 0);
    func_02116048(ctx->unk_3d0, ctx->unk_378, 0x58);
    func_02116048(ctx->unk_2c0, ctx->unk_31c, 0x5c);
    func_ov065_022661c0(ctx, b + 0x1f, 0);
    func_02116048(ctx->unk_31c, ctx->unk_2c0, 0x5c);
    func_ov065_022679f8(ctx->unk_2c0, b + 0xb, 0x28);
    func_ov065_02267480(ctx->unk_378, b + 0xb, 0x28);
    func_ov065_0226242c(b, func_ov065_02265dac(ctx, b + 6) + 6, 0, 0, s);
    data_ov065_0228ebd0(b);
}

s32 func_ov065_02265794(Sess *s) {
    Ctx *ctx = s->unk_0c;
    Unk_ov065_02265130_Cert *cert = ctx->unk_7f4;
    s32 cl;
    u32 t;
    u8 *buf;
    u8 *q;
    s32 len;
    if (cert) {
        cl = cert->unk_00;
    } else {
        cl = 0;
    }
    t = func_ov065_02267314();
    ctx->unk_28[0] = t >> 24;
    ctx->unk_28[1] = t >> 16;
    ctx->unk_28[2] = t >> 8;
    ctx->unk_28[3] = t;
    func_ov065_0226599c(ctx->unk_2c, 0x1c);
    buf = (u8 *)data_ov065_0228ebc8(cl + 0x9d);
    if (buf == 0) {
        ctx->unk_429 = 9;
        return 1;
    }
    q = buf + 5;
    q[0] = 2;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0x46;
    q[4] = 3;
    q[5] = 0;
    func_02116048(ctx->unk_28, q + 6, 0x20);
    q[0x26] = 0x20;
    if (ctx->unk_00) {
        func_02116048(ctx->unk_00, q + 0x27, 0x20);
        q += 0x47;
        ctx->unk_04 = 1;
    } else {
        func_ov065_0226599c(q + 0x27, 0x1c);
        t = data_ov065_022903c4;
        q[0x43] = t >> 24;
        q[0x44] = t >> 16;
        q[0x45] = t >> 8;
        q += 0x46;
        *q++ = t;
        ctx->unk_00 = (Unk_ov065_02265130_Pms *)func_ov065_0226733c(q - 0x20);
        data_ov065_022903c4++;
        ctx->unk_04 = 0;
    }
    q[0] = ctx->unk_06 >> 8;
    q[1] = ctx->unk_06;
    q += 2;
    *q++ = 0;
    if (ctx->unk_04 == 0) {
        if (cl != 0) {
            q[0] = 0xb;
            q[1] = (cl + 6) >> 16;
            q[2] = (cl + 6) >> 8;
            q[3] = cl + 6;
            q[4] = (cl + 3) >> 16;
            q[5] = (cl + 3) >> 8;
            q[6] = cl + 3;
            q[7] = cl >> 16;
            q[8] = cl >> 8;
            q += 9;
            *q++ = cl;
            func_02116048(cert->unk_04, q, cl);
            q += cl;
        }
        q[0] = 0xe;
        q[1] = 0;
        q[2] = 0;
        q += 3;
        *q++ = 0;
    }
    len = q - buf - 5;
    buf[0] = 0x16;
    buf[1] = 3;
    buf[2] = 0;
    buf[3] = len >> 8;
    buf[4] = len;
    func_ov065_022679f8(ctx->unk_2c0, buf + 5, len);
    func_ov065_02267480(ctx->unk_378, buf + 5, len);
    func_ov065_0226242c(buf, len + 5, 0, 0, s);
    data_ov065_0228ebd0(buf);
    return ctx->unk_04;
}

void func_ov065_02265950(u8 *p, u32 n) {
    Unk_ov065_02265130_Hash h;
    u32 th;
    func_ov065_02267a84(&h);
    th = func_01ffa2ec();
    func_ov065_022679f8(&h, data_ov065_022903c8, 0x14);
    func_ov065_022679f8(&h, p, n);
    func_ov065_022679a4(&h, data_ov065_022903c8);
    func_01ffa3d4(th);
    data_ov065_022903c0 = 1;
}

void func_ov065_0226599c(u8 *out, s32 n) {
    u32 seed;
    u8 buf[20];
    Unk_ov065_02265130_Hash h;
    s32 i;
    s32 j;
    u32 z;
    if (data_ov065_022903c0 == 0) {
        data_ov065_0228ec04.unk_00 = data_ov065_0228ec04.unk_10 + func_02133100(data_ov065_0228ec04.unk_08, data_ov065_0228ec04.unk_00);
        seed = (u32)(data_ov065_0228ec04.unk_00 >> 32);
        func_ov065_02265950((u8 *)&seed, 4);
    }
    j = 0x14;
    i = 0;
    for (; i < n;) {
        if (j == 0x14) {
            u32 th;
            s32 k;
            u32 c;
            u8 *b;
            u8 *a;
            u32 v;
            func_ov065_02267a84(&h);
            th = func_01ffa2ec();
            func_ov065_022679f8(&h, data_ov065_022903c8, 0x14);
            func_ov065_0226797c(&h, buf);
            c = 1;
            k = 0x13;
            b = buf + 0x13;
            a = data_ov065_022903c8 + 0x13;
            for (; k >= 0; k--) {
                v = *a + *b + c;
                *a = v;
                c = v >> 8;
                b--;
                a--;
            }
            seed = v;
            func_01ffa3d4(th);
            j = 0;
        }
        if (buf[j] != 0) {
            out[i] = buf[j];
            i++;
        }
        j++;
    }
}

}
