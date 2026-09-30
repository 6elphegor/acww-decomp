// mwcc-flags: -O4,p
#include "types.h"

// ov065_021: connection-state machine helpers (0x0226be44..0x0226c700)

struct Unk_ov065_0226bf70_Ent {
    u8 lo : 4;
    u8 hi : 4;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04[0x20];
};

struct Unk_ov065_0226bf70_Rec {
    u8 pad00[0xc];
    u8 unk_0c[0x2a];
    u16 unk_36;
    u8 pad38[0xc0 - 0x38];
};

struct Unk_ov065_0226bf70_B {
    u8 lo : 4;
    u8 hi : 4;
};

struct Unk_ov065_0226bf70_C {
    u8 lo : 4;
    u8 mid : 2;
    u8 hi : 2;
};

struct Unk_ov065_0226bf70_Ctx {
    u8 pad000[0x300];
    Unk_ov065_0226bf70_Ent unk_300[9];
    u8 unk_444[0x2c];
    u8 unk_470[0xcb0 - 0x470];
    u64 unk_cb0;
    u8 padcb8[0xd0b - 0xcb8];
    Unk_ov065_0226bf70_B unk_d0b;
    Unk_ov065_0226bf70_C unk_d0c;
    u8 unk_d0d;
    u8 unk_d0e;
    u8 unk_d0f;
    u8 unk_d10;
    s8 unk_d11;
    u8 unk_d12;
    u8 unk_d13;
    u8 unk_d14;
    u8 unk_d15;
    u16 unk_d16;
};

typedef Unk_ov065_0226bf70_Ctx Unk_ov065_0226bf70_Ctx_T;

extern u8 data_ov065_0228b670[];
extern u8 data_ov065_0228b2cc[];
extern u8 data_ov065_0228b2dc[];
extern u8 data_ov065_0228b2d4[];
extern u8 data_ov065_0228b2a4[];
extern u8 data_ov065_0228b2ac[];
extern u32 data_ov065_0228b2e8[];

extern "C" {
u8 *func_ov065_0226af74(u32 id);
s32 func_ov065_0226aeec(void);
s32 func_ov065_0226bd74(u8 *p);
s32 func_ov065_0226bd18(u8 *p);
s32 func_ov065_02269c9c(void);
s32 func_ov065_0226a0c4(void);
s32 func_ov065_02269e50(void);
s32 func_ov065_02269cc4(void);
s32 func_ov065_0226aef8(s32 v);
s32 func_ov065_0226a264(void *a, void *b, u32 c);
s32 func_ov065_0226c81c(u32 v);
s32 func_ov065_0226c750(s32 v);
void func_02116048(const void *src, void *dst, u32 n);
void func_02115e64(u32 v, void *dst, u32 n);
s32 func_0212a15c(const void *a, const void *b, u32 n);
s64 func_01ffa6b4(void);
u64 func_02132ef8(u64 a, u64 b);

s32 func_ov065_0226be44(u8 *p);
s32 func_ov065_0226be5c(void);
s32 func_ov065_0226be64(u32 r);
u8 func_ov065_0226bf70(Unk_ov065_0226bf70_Ctx *ctx);
s32 func_ov065_0226c0e8(Unk_ov065_0226bf70_Ctx *ctx);
s32 func_ov065_0226c038(Unk_ov065_0226bf70_Ctx *ctx);
s32 func_ov065_0226c160(s32 mode);
s32 func_ov065_0226c628(Unk_ov065_0226bf70_Ctx *ctx);
s32 func_ov065_0226c2ac(Unk_ov065_0226bf70_Ctx *ctx);
s32 func_ov065_0226c3bc(Unk_ov065_0226bf70_Ctx *ctx, s32 s);
void func_ov065_0226c28c(void *a, void *b, s32 n, u32 flags);

s32 func_ov065_0226be44(u8 *p) {
    if (p[0xb] == 0) {
        return -0xc3b3;
    }
    return -0xc79b;
}

s32 func_ov065_0226be5c(void) {
    return -6;
}

s32 func_ov065_0226be64(u32 r) {
    switch (r) {
    case 1:
        return -9;
    case 0:
        return -10;
    case 2:
        return -8;
    case 3:
        return -7;
    }
    return 0;
}

s32 func_ov065_0226be9c(void) {
    u8 *p = func_ov065_0226af74(1);
    s32 n = func_ov065_0226aeec();
    if (n < 4) {
        return func_ov065_0226be64(n);
    }
    if (n < 5) {
        return func_ov065_0226be5c();
    }
    if (n == 5) {
        return func_ov065_0226be44(p);
    }
    return func_ov065_0226bd74(p);
}

s32 func_ov065_0226bee4(void) {
    if (func_ov065_0226bd18(func_ov065_0226af74(1) + 0xa) == 1) {
        return 0x12;
    }
    return 0x11;
}

u32 func_ov065_0226bf08(s32 n, u8 *p, Unk_ov065_0226bf70_Ent *out, Unk_ov065_0226bf70_Rec *rec) {
    u8 cnt = 0;
    u8 i = 0;
    if (n > 0) {
        do {
            if (i >= 9) {
                break;
            }
            if (p[0] == 0 && rec->unk_36 != p[3]) {
                u8 k = 0;
                do {
                    u8 c = rec->unk_0c[k];
                    if (c == 0) {
                        break;
                    }
                    out->unk_04[k] = c;
                    k++;
                } while (k < 0x20);
                out->unk_03 = k;
                out->unk_02 = rec->unk_36 - 1;
                out++;
                cnt++;
            }
            p += 4;
            rec++;
            i++;
        } while (i < n);
    }
    return cnt;
}

u8 func_ov065_0226bf70(Unk_ov065_0226bf70_Ctx *ctx) {
    s32 i;
    u8 cnt;
    u8 *q;
    Unk_ov065_0226bf70_Ent *out;
    cnt = 0;
    q = (u8 *)ctx;
    out = ctx->unk_300;
    for (i = 0; i < 3; q += 0x100, i++) {
        u32 lo = ctx->unk_d0c.lo;
        if (lo == 0 || lo == i + 1) {
            if (q[0xe7] != 0xff) {
                u8 k = 0;
                BOOL ok;
                do {
                    u8 c = (q + k)[0x40];
                    if (c == 0) {
                        break;
                    }
                    out->unk_04[k] = c;
                    k++;
                } while (k < 0x20);
                if (k != 0) {
                    out->unk_03 = k;
                    out->unk_01 = i;
                    ok = TRUE;
                } else {
                    ok = FALSE;
                }
                if (ok) {
                    cnt++;
                    out++;
                }
                if (q[0xe7] == 1) {
                    u8 k2 = 0;
                    BOOL ok2;
                    do {
                        u8 c = (q + k2)[0x60];
                        if (c == 0) {
                            break;
                        }
                        out->unk_04[k2] = c;
                        k2++;
                    } while (k2 < 0x20);
                    if (k2 != 0) {
                        out->unk_03 = k2;
                        out->unk_01 = i + 3;
                        ok2 = TRUE;
                    } else {
                        ok2 = FALSE;
                    }
                    if (ok2) {
                        cnt++;
                        out++;
                    }
                }
            }
        }
    }
    return cnt;
}

s32 func_ov065_0226c038(Unk_ov065_0226bf70_Ctx *ctx) {
    u8 n;
    Unk_ov065_0226bf70_Ent *out = ctx->unk_300;
    n = func_ov065_0226bf70(ctx);
    out += n;
    if (ctx->unk_d0c.lo == 0 || ctx->unk_d0c.lo == 4) {
        func_02116048(data_ov065_0228b670, out->unk_04, 8);
        out->unk_03 = 8;
        out->unk_01 = 6;
        n++;
        out++;
    }
    if (ctx->unk_d0c.lo == 0 || ctx->unk_d0c.lo == 7) {
        func_02116048(data_ov065_0228b2cc, out->unk_04, 8);
        out->unk_03 = 8;
        out->unk_01 = 9;
        n++;
        out++;
    }
    if (ctx->unk_d0c.lo == 0 || ctx->unk_d0c.lo == 8) {
        func_02116048(data_ov065_0228b2dc, out->unk_04, 0xb);
        out->unk_03 = 0xb;
        out->unk_01 = 0xa;
        n++;
    }
    return n;
}

s32 func_ov065_0226c0e8(Unk_ov065_0226bf70_Ctx *ctx) {
    u8 n;
    Unk_ov065_0226bf70_Ent *out = ctx->unk_300;
    n = func_ov065_0226bf70(ctx);
    out += n;
    if (ctx->unk_d0c.lo == 0 || ctx->unk_d0c.lo == 6) {
        func_02116048(data_ov065_0228b2d4, out->unk_04, 8);
        out->unk_03 = 8;
        out->unk_01 = 8;
        n++;
    }
    return n;
}

s32 func_ov065_0226c138(u8 *rec) {
    if (func_0212a15c(rec + 0xc, data_ov065_0228b2d4, 8) == 0) {
        return 8;
    }
    return 0;
}

s32 func_ov065_0226c160(s32 mode) {
    Unk_ov065_0226bf70_Ctx *ctx = (Unk_ov065_0226bf70_Ctx *)func_ov065_0226af74(0x10);
    volatile s32 z = 0;
    func_02115e64(z, ctx->unk_300, 0x144);
    switch (mode) {
    case 0:
        ctx->unk_d10 = func_ov065_0226c0e8(ctx);
        break;
    case 1:
        ctx->unk_d10 = func_ov065_0226bf08(ctx->unk_d12, ctx->unk_444, ctx->unk_300, (Unk_ov065_0226bf70_Rec *)ctx->unk_470);
        break;
    case 2:
        ctx->unk_d10 = func_ov065_0226c038(ctx);
        break;
    }
    return ctx->unk_d10;
}

s32 func_ov065_0226c1e0(void) {
    Unk_ov065_0226bf70_Ctx *ctx = (Unk_ov065_0226bf70_Ctx *)func_ov065_0226af74(0x10);
    u32 st = 9;
    switch (func_ov065_02269c9c()) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
        st = ctx->unk_d0e;
        if (ctx->unk_d0c.hi == 1) {
            ctx->unk_444[ctx->unk_d13 * 4] = 0;
            st = 7;
        } else if (st >= 3 && st <= 5) {
            func_ov065_0226c750(st);
        }
        break;
    case 4:
    case 5:
        break;
    case 6:
        func_ov065_0226a0c4();
        break;
    case 7:
    case 8:
        break;
    case 9:
        func_ov065_02269e50();
        break;
    case 10:
        break;
    case 12:
        func_ov065_02269cc4();
        func_ov065_0226aef8(4);
        st = 0x11;
        break;
    case 11:
        func_ov065_0226aef8(0);
        st = 0x11;
        break;
    }
    return st;
}

void func_ov065_0226c28c(void *a, void *b, s32 n, u32 flags) {
    if (n > 0xc) {
        n = 0xc;
    }
    func_ov065_0226a264(a, b, flags | data_ov065_0228b2e8[n]);
}

s32 func_ov065_0226c2ac(Unk_ov065_0226bf70_Ctx *ctx) {
    if (ctx->unk_d16 != 0 && func_ov065_0226c160(2) != 0) {
        ctx->unk_d11 = func_ov065_0226c81c(0);
        return 5;
    }
    if (ctx->unk_d0b.hi < 1) {
        return func_ov065_0226c628(ctx);
    }
    return 6;
}

s32 func_ov065_0226c300(Unk_ov065_0226bf70_Ctx *ctx, s32 s) {
    u8 i;
    u8 n;
    if (s == 0x11) {
        return s;
    }
    i = 0;
    n = ctx->unk_d12;
    for (; i < n; i++) {
        if (ctx->unk_444[i * 4] == 0) {
            break;
        }
    }
    if (s == 6) {
        if (n != i) {
            goto reset;
        }
        if (i == 0) {
            func_ov065_0226aef8(5);
        } else {
            func_ov065_0226aef8(6);
        }
        return 0x11;
    }
    if (n == 0) {
        return s;
    }
    if (n == i) {
        return s;
    }
    if (((u8 *)ctx + i * 4)[0x446] < 0x14) {
        return s;
    }
reset:
    ctx->unk_d13 = i;
    if (func_ov065_0226a0c4() != 1) {
        ctx->unk_d0e = s;
        s = 7;
    }
    return s;
}

s32 func_ov065_0226c3bc(Unk_ov065_0226bf70_Ctx *ctx, s32 s) {
    switch (s) {
    case 3:
        if (ctx->unk_d12 != 0 || ctx->unk_d16 != 0) {
            if (func_ov065_0226c160(1) != 0) {
                s = 4;
            } else {
                s = func_ov065_0226c2ac(ctx);
            }
        } else if (ctx->unk_d0b.hi < 1) {
            s = func_ov065_0226c628(ctx);
        } else {
            s = 6;
        }
        break;
    case 4:
        s = func_ov065_0226c2ac(ctx);
        break;
    case 5:
        if (ctx->unk_d0b.hi < 1) {
            s = func_ov065_0226c628(ctx);
        } else {
            s = 6;
        }
        break;
    }
    func_ov065_0226c750(s);
    return s;
}

s32 func_ov065_0226c44c(Unk_ov065_0226bf70_Ctx *ctx) {
    u64 dt = func_01ffa6b4() - ctx->unk_cb0;
    if (func_02132ef8(dt << 6, 0x82ea) >= 0x96 || ctx->unk_300[ctx->unk_d0f].lo == 1) {
        ctx->unk_300[ctx->unk_d0f].lo = 0;
        ctx->unk_d0f++;
        if (ctx->unk_d10 == ctx->unk_d0f) {
            ctx->unk_d15++;
            ctx->unk_d0f = 0;
            ctx->unk_d11 = func_ov065_0226c81c(ctx->unk_d15);
        }
        if (ctx->unk_d11 < 0) {
            ctx->unk_d15 = 0;
            return func_ov065_0226c3bc(ctx, 5);
        }
        ctx->unk_cb0 = func_01ffa6b4();
        func_ov065_0226c28c(data_ov065_0228b2a4, ctx->unk_300[ctx->unk_d0f].unk_04, ctx->unk_d11, 0x300000);
    }
    return 5;
}

s32 func_ov065_0226c54c(Unk_ov065_0226bf70_Ctx *ctx) {
    u64 dt = func_01ffa6b4() - ctx->unk_cb0;
    if (func_02132ef8(dt << 6, 0x82ea) >= 0x96 || ctx->unk_300[ctx->unk_d0f].lo == 1) {
        ctx->unk_300[ctx->unk_d0f].lo = 0;
        ctx->unk_d0f++;
        if (ctx->unk_d10 <= ctx->unk_d0f) {
            ctx->unk_d0f = 0;
            return func_ov065_0226c3bc(ctx, 4);
        }
        ctx->unk_cb0 = func_01ffa6b4();
        func_ov065_0226c28c(data_ov065_0228b2a4, ctx->unk_300[ctx->unk_d0f].unk_04, ctx->unk_300[ctx->unk_d0f].unk_02, 0x300000);
    }
    return 4;
}

s32 func_ov065_0226c628(Unk_ov065_0226bf70_Ctx *ctx) {
    ctx->unk_d15 = 0;
    ctx->unk_d0b.hi = ctx->unk_d0b.hi + 1;
    func_ov065_0226c160(0);
    ctx->unk_d11 = 1;
    return 3;
}

s32 func_ov065_0226c674(Unk_ov065_0226bf70_Ctx *ctx) {
    u64 dt = func_01ffa6b4() - ctx->unk_cb0;
    if (func_02132ef8(dt << 6, 0x82ea) >= 0x12c) {
        ctx->unk_d11 = ctx->unk_d11 + 2;
        if (ctx->unk_d11 >= 0xd) {
            return func_ov065_0226c3bc(ctx, 3);
        }
        ctx->unk_cb0 = func_01ffa6b4();
        func_ov065_0226c28c(data_ov065_0228b2a4, data_ov065_0228b2ac, ctx->unk_d11, 0x200000);
    }
    return 3;
}

s32 func_ov065_0226c700(Unk_ov065_0226bf70_Ctx *ctx) {
    ctx->unk_cb0 = func_01ffa6b4();
    ctx->unk_d11 = 0;
    ctx->unk_cb0 = func_01ffa6b4();
    func_ov065_0226c28c(data_ov065_0228b2a4, data_ov065_0228b2ac, ctx->unk_d11, 0x200000);
    return 3;
}
}
