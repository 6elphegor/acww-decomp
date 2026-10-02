// mwcc-flags: -O4,p -str reuse
#include "types.h"

struct Unk_ov065_0228b31c_Tmpl {
    u32 unk_00[18];
    const char *unk_48;
    u32 unk_4c;
    u32 unk_50[2];
};

extern "C" {

const char data_ov065_0228b2d4[8] = {'F', 'R', 'E', 'E', 'S', 'P', 'O', 'T'};
const char data_ov065_0228b2cc[8] = {'W', 'a', 'y', 'p', 'o', 'r', 't', '2'};
const char data_ov065_0228b2dc[12] = "NINTENDOWFC";
const u32 data_ov065_0228b2e8[13] = {0x8002, 0x8004, 0x8008, 0x8010, 0x8020, 0x8040, 0x8080, 0x8100, 0x8200, 0x8400, 0x8800, 0x9000, 0xa000};

char data_ov065_0228b670[12] = "NWCUSBAP";
char data_ov065_0228b67c[12] = "NINTENDO-DS";

const Unk_ov065_0228b31c_Tmpl data_ov065_0228b31c = {
    {0x1000000, 0, 0, 1, 0, 0, 0, 0, 0, 0x1000, 0x1000, 0x2e4, 0, 0, 0, 0, 0, 0},
    data_ov065_0228b67c,
    4,
    {0, 0},
};

}

namespace N_c750 {
extern "C" {

struct Unk_ov065_0226b488_Rec {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u8 unk_04[6];
    u16 unk_0a;
    u8 unk_0c[0x2c - 0xc];
    u16 unk_2c;
    u8 pad2e[0x36 - 0x2e];
    u16 unk_36;
    u8 pad38[0xc0 - 0x38];
};

struct Unk_ov065_0226b488_Entry {
    u8 lo : 4;
    u8 hi : 4;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04[0x20];
};

struct Unk_ov065_0226b488_Ctx {
    u8 pad000[0x300];
    Unk_ov065_0226b488_Entry unk_300[9];
    u8 unk_444[0x2c];
    Unk_ov065_0226b488_Rec unk_470[11];
    u32 unk_cb0;
    u32 unk_cb4;
    u8 unk_cb8[0x52];
    u8 padd0a;
    u8 unk_d0b_lo : 2;
    u8 unk_d0b_hi : 2;
    u8 unk_d0b_pad : 4;
    u8 unk_d0c_st : 4;
    u8 unk_d0c_mid : 2;
    u8 unk_d0c_mode : 2;
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

struct Unk_ov065_0226cfe4_Buf {
    u8 b[24];
};

extern u8 data_ov065_0228b2a4[];
extern u8 data_ov065_0228b2ac[];
extern u8 data_ov065_0228b31c[];
extern u32 data_ov065_0228e9a4;
extern s8 *data_ov065_0228b68c;
extern s8 *data_ov065_0228b690;
extern s8 *data_ov065_0228b694;
extern s8 *data_ov065_0228b688;
extern u8 data_ov065_0228b374[];
extern u8 data_ov065_0228b384[];
extern u8 data_ov065_0228b6b8[];

extern "C" {
u8 *func_ov065_0226af74(u32 id);
s32 func_ov065_0226af18(void);
s32 func_ov065_02269c9c(void);
s32 func_ov065_0226aec8(u32 v);
void func_ov065_0226aed4(u32 v);
s32 func_ov065_0226aef8(s32 v);
s32 func_ov065_0226a33c(void *a, void *b);
s32 func_ov065_0226b78c(void *a);
void func_ov065_0226c160(void);
void func_ov065_0226c28c(void *a, void *b, s32 c, u32 d);
s32 func_ov065_0226c300(void *ctx, s32 v);
s32 func_ov065_0226c44c(void *ctx);
s32 func_ov065_0226c54c(void *ctx);
s32 func_ov065_0226c674(void *ctx);
s32 func_ov065_0226c700(void *ctx);
void func_ov065_022612fc(void *a, void *b);
s32 func_ov065_02261358(void);
s32 func_ov065_02261118(void *p);
s32 func_ov065_02261110(void);
s32 func_ov065_02260b68(void);
s32 func_ov065_0226ecd0(void);
u32 func_ov065_0226ec94(void);
s32 func_ov065_0226f7c8(void);
s32 func_ov065_0226f878(void);
s32 func_ov065_0226f924(void);
s64 func_01ffa6b4(void);
void func_02116048(void *src, void *dst, u32 n);
void func_0211ae74(void *ctx);
void func_0211ad80(void *ctx, void *p, u32 n);
void func_0211acbc(void *out, void *ctx);

s32 func_ov065_0226ce78(u32 c);
u32 func_ov065_0226c9f4(s32 n);
u32 func_ov065_0226ca3c(u8 *p);
s32 func_ov065_0226cd84(u8 *in, u8 *out, u32 len, u32 max);
s32 func_ov065_0226cb18(void);
s32 func_ov065_0226cb4c(Unk_ov065_0226b488_Ctx *c);
s32 func_ov065_0226cb64(Unk_ov065_0226b488_Ctx *c);
s32 func_ov065_0226cbc8(void);
s32 func_ov065_0226cbf0(Unk_ov065_0226b488_Ctx *c);
s32 func_ov065_0226cc80(Unk_ov065_0226b488_Ctx *c);
void func_ov065_0226ca88(u8 *a, Unk_ov065_0226b488_Ctx *b, u8 *c);
void func_ov065_0226c988(Unk_ov065_0226b488_Ctx *c);






















void func_ov065_0226c750(u32 r);
s32 func_ov065_0226c81c(u32 n);
void func_ov065_0226c878(u32 v);
s32 func_ov065_0226c8a4(void);
s32 func_ov065_0226c924(void);
void func_ov065_0226c988(Unk_ov065_0226b488_Ctx *c);
u32 func_ov065_0226c9f4(s32 n);
u32 func_ov065_0226ca3c(u8 *p);
void func_ov065_0226ca88(u8 *a, Unk_ov065_0226b488_Ctx *b, u8 *c);

void func_ov065_0226ca88(u8 *a, Unk_ov065_0226b488_Ctx *b, u8 *c) {
    u32 *o = (u32 *)c;
    func_02116048(data_ov065_0228b31c, c, 0x58);
    o[1] = ((u32 *)a)[0];
    o[2] = ((u32 *)a)[1];
    if (b->unk_d0d < 6) {
        u8 *q = (u8 *)b + (func_ov065_0226aec8(b->unk_d0d) << 8);
        if (q[0xc0] != 0) {
            o[3] = 0;
            o[4] = func_ov065_0226ca3c(q + 0xc0);
            o[5] = func_ov065_0226c9f4(q[0xd0]);
            o[6] = func_ov065_0226ca3c(q + 0xc4);
            o[7] = func_ov065_0226ca3c(q + 0xc8);
            o[8] = func_ov065_0226ca3c(q + 0xcc);
        } else {
            o[3] = 1;
            o[4] = 0;
            o[5] = 0;
            o[6] = 0;
            o[7] = 0;
            o[8] = 0;
        }
    }
}

u32 func_ov065_0226ca3c(u8 *p) {
    u32 x = 0;
    x |= p[0] << 24;
    x |= p[1] << 16;
    x |= p[2] << 8;
    x |= p[3];
    return ((x << 24) & 0xff000000) | (((x << 8) & 0xff0000) | (((x >> 24) & 0xff) | ((x >> 8) & 0xff00)));
}

u32 func_ov065_0226c9f4(s32 n) {
    n = 0x20 - n;
    s32 i = 0;
    u32 x = -1;
    for (; i < n; i++) {
        x <<= 1;
    }
    return ((x << 24) & 0xff000000) | (((x << 8) & 0xff0000) | (((x >> 24) & 0xff) | ((x >> 8) & 0xff00)));
}

void func_ov065_0226c988(Unk_ov065_0226b488_Ctx *c) {
    u32 buf[2];
    if (c->unk_d0d < 6) {
        u8 *q = (u8 *)c + (func_ov065_0226aec8(c->unk_d0d) << 8);
        u32 sum = q[0xcb] + (q[0xca] + (q[0xc8] + q[0xc9]));
        if (q[0xc0] == 0 && sum != 0) {
            buf[0] = func_ov065_0226ca3c(q + 0xc8);
            buf[1] = func_ov065_0226ca3c(q + 0xcc);
            func_ov065_022612fc(&buf[0], &buf[1]);
        }
    }
}

s32 func_ov065_0226c924(void) {
    s32 a = func_ov065_02269c9c();
    Unk_ov065_0226b488_Ctx *c = (Unk_ov065_0226b488_Ctx *)func_ov065_0226af74(0x10);
    if (a == 1) {
        u32 buf[4];
        buf[0] = *((u8 *)c + 0xd0a);
        buf[1] = 0;
        buf[2] = 0;
        buf[3] = 0;
        func_ov065_0226c160();
        s32 r = func_ov065_0226a33c(buf, (void *)func_ov065_0226b78c);
        if (r == 1 || r >= 4) {
            func_ov065_0226aef8(1);
            return 0x11;
        }
    } else {
        return 1;
    }
    return 2;
}

s32 func_ov065_0226c8a4(void) {
    Unk_ov065_0226b488_Ctx *c = (Unk_ov065_0226b488_Ctx *)func_ov065_0226af74(0x10);
    s32 a = func_ov065_0226af18();
    s32 b = func_ov065_02269c9c();
    if (a == 2 && b == 3) {
        a = func_ov065_0226c700(c);
    } else if (a == 6) {
        a = func_ov065_0226c300(c, a);
    } else if (b == 3 || b == 6) {
        a = func_ov065_0226c300(c, a);
        if (a != 7) {
            if (a == 3) {
                a = func_ov065_0226c674(c);
            } else if (a == 4) {
                a = func_ov065_0226c54c(c);
            } else if (a == 5) {
                a = func_ov065_0226c44c(c);
            }
        }
    }
    return a;
}

void func_ov065_0226c878(u32 v) {
    Unk_ov065_0226b488_Ctx *c = (Unk_ov065_0226b488_Ctx *)func_ov065_0226af74(0x10);
    if (v > 0xd) {
        v = 0xd;
    }
    c->unk_d16 |= 1 << (v - 1);
}

s32 func_ov065_0226c81c(u32 n) {
    Unk_ov065_0226b488_Ctx *c = (Unk_ov065_0226b488_Ctx *)func_ov065_0226af74(0x10);
    u8 i;
    u8 cnt;
    u32 m;
    m = c->unk_d16;
    if (m == 0) {
        return -1;
    }
    i = 0;
    cnt = i;
    do {
        if (m & (1 << i)) {
            if (cnt == n) {
                return (s8)i;
            }
            cnt++;
        }
        i++;
    } while (i < 0xd);
    return -1;
}

void func_ov065_0226c750(u32 r) {
    Unk_ov065_0226b488_Ctx *c = (Unk_ov065_0226b488_Ctx *)func_ov065_0226af74(0x10);
    u8 *cb = (u8 *)c;
    switch (r) {
    case 3: {
        s64 t = func_01ffa6b4();
        *(s64 *)&c->unk_cb0 = t;
        func_ov065_0226c28c(data_ov065_0228b2a4, data_ov065_0228b2ac, c->unk_d11, 0x200000);
        break;
    }
    case 4: {
        s64 t = func_01ffa6b4();
        *(s64 *)&c->unk_cb0 = t;
        u32 idx = c->unk_d0f * 0x24;
        u8 *q = cb + idx;
        func_ov065_0226c28c(data_ov065_0228b2a4, cb + 0x304 + idx, q[0x302], 0x300000);
        break;
    }
    case 5: {
        s64 t = func_01ffa6b4();
        *(s64 *)&c->unk_cb0 = t;
        u32 idx = c->unk_d0f * 0x24;
        func_ov065_0226c28c(data_ov065_0228b2a4, cb + 0x304 + idx, c->unk_d11, 0x300000);
        break;
    }
    }
}

}
}
}  // namespace N_c750

namespace N_be44 {
extern "C" {

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






















s32 func_ov065_0226be44(u8 *p);
s32 func_ov065_0226be5c(void);
s32 func_ov065_0226be64(u32 r);
s32 func_ov065_0226be9c(void);
s32 func_ov065_0226bee4(void);
u32 func_ov065_0226bf08(s32 n, u8 *p, Unk_ov065_0226bf70_Ent *out, Unk_ov065_0226bf70_Rec *rec);
u8 func_ov065_0226bf70(Unk_ov065_0226bf70_Ctx *ctx);
s32 func_ov065_0226c038(Unk_ov065_0226bf70_Ctx *ctx);
s32 func_ov065_0226c0e8(Unk_ov065_0226bf70_Ctx *ctx);
s32 func_ov065_0226c138(u8 *rec);
s32 func_ov065_0226c160(s32 mode);
s32 func_ov065_0226c1e0(void);
void func_ov065_0226c28c(void *a, void *b, s32 n, u32 flags);
s32 func_ov065_0226c2ac(Unk_ov065_0226bf70_Ctx *ctx);
s32 func_ov065_0226c300(Unk_ov065_0226bf70_Ctx *ctx, s32 s);
s32 func_ov065_0226c3bc(Unk_ov065_0226bf70_Ctx *ctx, s32 s);
s32 func_ov065_0226c44c(Unk_ov065_0226bf70_Ctx *ctx);
s32 func_ov065_0226c54c(Unk_ov065_0226bf70_Ctx *ctx);
s32 func_ov065_0226c628(Unk_ov065_0226bf70_Ctx *ctx);
s32 func_ov065_0226c674(Unk_ov065_0226bf70_Ctx *ctx);
s32 func_ov065_0226c700(Unk_ov065_0226bf70_Ctx *ctx);

s32 func_ov065_0226c700(Unk_ov065_0226bf70_Ctx *ctx) {
    ctx->unk_cb0 = func_01ffa6b4();
    ctx->unk_d11 = 0;
    ctx->unk_cb0 = func_01ffa6b4();
    func_ov065_0226c28c(data_ov065_0228b2a4, data_ov065_0228b2ac, ctx->unk_d11, 0x200000);
    return 3;
}

s32 func_ov065_0226c674(Unk_ov065_0226bf70_Ctx *ctx) {
    u64 dt = func_01ffa6b4() - ctx->unk_cb0;
    if ((dt << 6) / 0x82ea >= 0x12c) {
        ctx->unk_d11 = ctx->unk_d11 + 2;
        if (ctx->unk_d11 >= 0xd) {
            return func_ov065_0226c3bc(ctx, 3);
        }
        ctx->unk_cb0 = func_01ffa6b4();
        func_ov065_0226c28c(data_ov065_0228b2a4, data_ov065_0228b2ac, ctx->unk_d11, 0x200000);
    }
    return 3;
}

s32 func_ov065_0226c628(Unk_ov065_0226bf70_Ctx *ctx) {
    ctx->unk_d15 = 0;
    ctx->unk_d0b.hi = ctx->unk_d0b.hi + 1;
    func_ov065_0226c160(0);
    ctx->unk_d11 = 1;
    return 3;
}

s32 func_ov065_0226c54c(Unk_ov065_0226bf70_Ctx *ctx) {
    u64 dt = func_01ffa6b4() - ctx->unk_cb0;
    if ((dt << 6) / 0x82ea >= 0x96 || ctx->unk_300[ctx->unk_d0f].lo == 1) {
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

s32 func_ov065_0226c44c(Unk_ov065_0226bf70_Ctx *ctx) {
    u64 dt = func_01ffa6b4() - ctx->unk_cb0;
    if ((dt << 6) / 0x82ea >= 0x96 || ctx->unk_300[ctx->unk_d0f].lo == 1) {
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

void func_ov065_0226c28c(void *a, void *b, s32 n, u32 flags) {
    if (n > 0xc) {
        n = 0xc;
    }
    func_ov065_0226a264(a, b, flags | data_ov065_0228b2e8[n]);
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

s32 func_ov065_0226c138(u8 *rec) {
    if (func_0212a15c(rec + 0xc, data_ov065_0228b2d4, 8) == 0) {
        return 8;
    }
    return 0;
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

s32 func_ov065_0226bee4(void) {
    if (func_ov065_0226bd18(func_ov065_0226af74(1) + 0xa) == 1) {
        return 0x12;
    }
    return 0x11;
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

s32 func_ov065_0226be5c(void) {
    return -6;
}

s32 func_ov065_0226be44(u8 *p) {
    if (p[0xb] == 0) {
        return -0xc3b3;
    }
    return -0xc79b;
}

}
}
}  // namespace N_be44

namespace N_b488 {
extern "C" {

struct Unk_ov065_0226b488_Rec {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u8 unk_04[6];
    u16 unk_0a;
    u8 unk_0c[0x2c - 0xc];
    u16 unk_2c;
    u8 pad2e[0x36 - 0x2e];
    u16 unk_36;
    u8 pad38[0xc0 - 0x38];
};

struct Unk_ov065_0226b488_Entry {
    u8 lo : 4;
    u8 hi : 4;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u8 unk_04[0x20];
};

struct Unk_ov065_0226b488_Ctx {
    u8 pad000[0x300];
    Unk_ov065_0226b488_Entry unk_300[9];
    u8 unk_444[0x2c];
    Unk_ov065_0226b488_Rec unk_470[11];
    u32 unk_cb0;
    u32 unk_cb4;
    u8 unk_cb8[0x52];
    u8 padd0a;
    u8 unk_d0b_lo : 2;
    u8 unk_d0b_hi : 2;
    u8 unk_d0b_pad : 4;
    u8 unk_d0c_st : 4;
    u8 unk_d0c_pad : 2;
    u8 unk_d0c_mode : 2;
    u8 unk_d0d;
    u8 unk_d0e;
    u8 unk_d0f;
    u8 unk_d10;
    s8 unk_d11;
    u8 unk_d12;
    u8 unk_d13;
    u8 unk_d14;
    u8 unk_d15;
};

struct Unk_ov065_0226b78c_Msg {
    s16 unk_00;
    s16 unk_02;
    u32 unk_04;
    u32 unk_08;
};

extern "C" {
u8 *func_ov065_0226af74(u32 id);
s32 func_ov065_0226af18(void);
s32 func_ov065_0226b3c4(s32 a, void *ctx);
s32 func_ov065_0226c878(u32 v);
s32 func_ov065_0226c138(void *rec);
s32 func_ov065_0226d08c(void *p);
s32 func_ov065_0226d0fc(void *p);
s32 func_ov065_0226d080(void *a, void *b);
s32 func_ov065_0226d0e0(void *a, void *b);
s32 func_ov065_02269c9c(void);
s32 func_ov065_02269f24(void *rec, void *buf, u32 v);
s32 func_ov065_0226a4c8(void);
s32 func_ov065_0226a284(void);
s32 func_ov065_0226a0c4(void);
s32 func_ov065_02269e50(void);
s32 func_ov065_02269cc4(void);
s32 func_ov065_0226aef8(s32 v);
s32 func_ov065_02260b68(void);
s32 func_ov065_02261110(void);
s32 func_ov065_0226f7c8(void);
s32 func_ov065_0226f878(void);
void func_02115e78(void *src, void *dst, u32 n);
void func_02116048(void *src, void *dst, u32 n);
void func_02115fb4(void *dst, s32 v, u32 n);
s32 func_0212a15c(void *a, void *b, u32 n);
s64 func_01ffa6b4(void);

s32 func_ov065_0226b630(Unk_ov065_0226b488_Rec *rec);
s32 func_ov065_0226b5d4(Unk_ov065_0226b488_Rec *rec, s32 n, Unk_ov065_0226b488_Entry *e);
s32 func_ov065_0226b534(u32 a, Unk_ov065_0226b488_Rec *rec, Unk_ov065_0226b488_Ctx *ctx);
void func_ov065_0226b6bc(Unk_ov065_0226b488_Rec *rec);
u32 func_ov065_0226b8b4(Unk_ov065_0226b488_Ctx *ctx);
u32 func_ov065_0226b8d4(Unk_ov065_0226b488_Ctx *ctx);
u32 func_ov065_0226b8f4(Unk_ov065_0226b488_Ctx *ctx);
BOOL func_ov065_0226b7f8(Unk_ov065_0226b488_Ctx *ctx, u32 idx, u8 *out);
s32 func_ov065_0226bb48(Unk_ov065_0226b488_Ctx *ctx);
s32 func_ov065_0226ba44(Unk_ov065_0226b488_Ctx *ctx);
s32 func_ov065_0226bca4(void);
s32 func_ov065_0226bc70(void);

static inline u32 Unk_ov065_0226b488_Level(u16 f) {
    u32 v;
    if (f & 2) {
        v = ((u32)f << 22) >> 24;
    } else {
        v = (u8)(((s32)f >> 2) + 0x19);
    }
    return v;
}








struct Unk_ov065_0226b7f8_Bits {
    u8 v : 2;
};











struct Unk_ov065_0226bd74_Obj {
    u8 pad00[0x10];
    s32 unk_10;
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
};


void func_ov065_0226b488(u32 a, Unk_ov065_0226b488_Rec *rec, Unk_ov065_0226b488_Ctx *ctx);
void func_ov065_0226b4e8(u32 a, Unk_ov065_0226b488_Rec *rec, Unk_ov065_0226b488_Ctx *ctx);
s32 func_ov065_0226b534(u32 a, Unk_ov065_0226b488_Rec *rec, Unk_ov065_0226b488_Ctx *ctx);
s32 func_ov065_0226b5d4(Unk_ov065_0226b488_Rec *rec, s32 n, Unk_ov065_0226b488_Entry *e);
s32 func_ov065_0226b630(Unk_ov065_0226b488_Rec *rec);
void func_ov065_0226b6bc(Unk_ov065_0226b488_Rec *rec);
void func_ov065_0226b78c(Unk_ov065_0226b78c_Msg *m);
BOOL func_ov065_0226b7f8(Unk_ov065_0226b488_Ctx *ctx, u32 idx, u8 *out);
u32 func_ov065_0226b8b4(Unk_ov065_0226b488_Ctx *ctx);
u32 func_ov065_0226b8d4(Unk_ov065_0226b488_Ctx *ctx);
u32 func_ov065_0226b8f4(Unk_ov065_0226b488_Ctx *ctx);
s32 func_ov065_0226ba44(Unk_ov065_0226b488_Ctx *ctx);
s32 func_ov065_0226bb48(Unk_ov065_0226b488_Ctx *ctx);
s32 func_ov065_0226bc40(void);
s32 func_ov065_0226bc70(void);
s32 func_ov065_0226bca4(void);
s32 func_ov065_0226bd18(u8 *p);
s32 func_ov065_0226bd74(Unk_ov065_0226bd74_Obj *o);

s32 func_ov065_0226bd74(Unk_ov065_0226bd74_Obj *o) {
    s32 r;
    if (o->unk_16 < 10) {
        if (o->unk_14 == 3) {
            r = (s32)0xffff3864 - o->unk_15;
        } else if (o->unk_14 == 4) {
            r = (s32)0xffff3800 - o->unk_15;
        } else {
            r = (s32)0xffff379c - o->unk_15;
        }
    } else if (o->unk_16 < 13) {
        r = (s32)0xffff34e0 - o->unk_15;
    } else {
        r = o->unk_10;
        if (r == 0) {
            r = (s32)0xffff3cb0 - o->unk_15;
        } else if (r == -1) {
            r = (s32)0xffff347c - o->unk_15;
        } else if (r == -2) {
            r = (s32)0xffff3418 - o->unk_15;
        } else if (r == -3) {
            r = (s32)0xffff33b4 - o->unk_15;
        } else if (r == -4) {
            r = (s32)0xffff30f8 - o->unk_15;
        } else if (r == -5) {
            r = (s32)0xffff3094 - o->unk_15;
        } else if (r == -6) {
            r = (s32)0xffff3030 - o->unk_15;
        }
    }
    return r;
}

s32 func_ov065_0226bd18(u8 *p) {
    if (*p <= 10) {
        s32 r = func_ov065_0226bca4();
        if (r == 1) {
            *p = 0;
            return 1;
        }
        if (r == -1) {
            *p = 0x12;
            return 1;
        }
    } else if (*p == 0xe) {
        func_ov065_0226f7c8();
        func_ov065_0226f878();
        *p = 0xc;
    } else if (*p < 0x12) {
        if (func_ov065_0226bc70() == 1) {
            *p = 10;
        }
    }
    return 0;
}

s32 func_ov065_0226bca4(void) {
    switch (func_ov065_02269c9c()) {
    case 0:
        return 1;
    case 1:
        func_ov065_0226a4c8();
        break;
    case 2:
        break;
    case 3:
        func_ov065_0226a284();
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
        break;
    case 11:
        func_ov065_0226aef8(0);
        return -1;
    }
    return 0;
}

s32 func_ov065_0226bc70(void) {
    if (func_ov065_02260b68() != 0) {
        return 0;
    }
    s32 r = func_ov065_02261110();
    if (r == 0 || r == -0x27) {
        return 1;
    }
    return 0;
}

s32 func_ov065_0226bc40(void) {
    s32 r = func_ov065_0226af18();
    Unk_ov065_0226b488_Ctx *ctx = (Unk_ov065_0226b488_Ctx *)func_ov065_0226af74(0x10);
    switch (r) {
    case 7:
        r = func_ov065_0226bb48(ctx);
        break;
    case 8:
        r = func_ov065_0226ba44(ctx);
        break;
    }
    return r;
}

s32 func_ov065_0226bb48(Unk_ov065_0226b488_Ctx *ctx) {
    Unk_ov065_0226b488_Rec *rec = ctx->unk_470 + ctx->unk_d13;
    ctx->unk_d0d = func_ov065_0226b8f4(ctx);
    func_02115fb4(ctx->unk_cb8, 0, 0x52);
    if (func_ov065_0226b7f8(ctx, ctx->unk_d0d, ctx->unk_cb8) != 0) {
        ctx->unk_d0b_hi = 1;
        if ((((s32)rec->unk_2c >> 4) & 1) == 0) {
            ctx->unk_444[ctx->unk_d13 * 4] = 3;
            return 9;
        }
        if (ctx->unk_d0d == 6 && rec->unk_0c[9] == 0) {
            ctx->unk_444[ctx->unk_d13 * 4] = 3;
            return 9;
        }
    } else {
        ctx->unk_d0b_hi = 0;
        if ((((s32)rec->unk_2c >> 4) & 1) == 1) {
            ctx->unk_444[ctx->unk_d13 * 4] = 3;
            return 9;
        }
    }
    ctx->unk_d15 = 0;
    ctx->unk_d14 = 0;
    return 8;
}

s32 func_ov065_0226ba44(Unk_ov065_0226b488_Ctx *ctx) {
    s32 s = func_ov065_02269c9c();
    Unk_ov065_0226b488_Rec *rec = ctx->unk_470 + ctx->unk_d13;
    u32 r6;
    if (s == 3) {
        r6 = func_ov065_0226b8d4(ctx);
        ctx->unk_d15 = ctx->unk_d15 + 1;
        if (ctx->unk_d15 > 3) {
            ctx->unk_d15 = 0;
            ctx->unk_444[ctx->unk_d13 * 4] = 1;
            return 9;
        }
        if (ctx->unk_d15 != 1) {
            if (ctx->unk_d14 == 1) {
                ctx->unk_d0b_hi = 0;
            } else if (ctx->unk_d14 == 2) {
                ctx->unk_d15 = 0;
                ctx->unk_444[ctx->unk_d13 * 4] = 3;
                return 9;
            } else if (ctx->unk_d14 == 3) {
                ctx->unk_d15 = 0;
                ctx->unk_444[ctx->unk_d13 * 4] = 4;
                return 9;
            }
        }
        func_ov065_02269f24(rec, ctx->unk_cb8, r6 | func_ov065_0226b8b4(ctx));
    } else if (s == 9) {
        s64 t;
        ctx->unk_d15 = 0;
        t = func_01ffa6b4();
        ctx->unk_cb0 = (u32)t;
        ctx->unk_cb4 = (u32)(t >> 32);
        return 10;
    }
    return 8;
}

u32 func_ov065_0226b8f4(Unk_ov065_0226b488_Ctx *ctx) {
    struct {
        Unk_ov065_0226b488_Rec *rec;
        s32 result;
        s32 i;
        u8 *d;
    } l;
    l.rec = ctx->unk_470 + ctx->unk_d13;
    l.result = 0;
    if (ctx->unk_d0c_mode == 0) {
        u32 cnt = l.result;
        u32 proto = l.rec->unk_0a;
        if (proto == 0x20) {
            l.result = func_ov065_0226b630(l.rec);
            if (l.result > 0) {
                cnt++;
            } else {
                l.result = 0;
            }
        } else if (proto == 8) {
            l.result = func_ov065_0226c138(l.rec);
            if (l.result != 0) {
                cnt++;
            } else {
                l.result = 0;
            }
        }
        l.i = 0;
        s32 n = ctx->unk_d10;
        if (n > 0) {
            u8 *p = (u8 *)ctx;
            Unk_ov065_0226b488_Entry *e;
            l.d = (u8 *)ctx + 0x304;
            e = ctx->unk_300;
            do {
                u32 pr = l.rec->unk_0a;
                if (pr == p[0x303] && func_0212a15c(l.rec->unk_0c, l.d, pr) == 0) {
                    if (cnt == 0) {
                        l.result = p[0x301];
                    } else {
                        e->hi = 1;
                        ctx->unk_d0c_mode = 1;
                    }
                    cnt++;
                }
                p += 0x24;
                l.d += 0x24;
                e++;
                l.i++;
            } while (l.i < ctx->unk_d10);
        }
    } else {
        Unk_ov065_0226b488_Entry *e;
        u8 *p;
        s32 cnt;
        s32 i = l.result;
        cnt = i;
        if (i < ctx->unk_d10) {
            e = ctx->unk_300;
            p = (u8 *)ctx;
            do {
                if (e->hi == 1) {
                    if (cnt == 0) {
                        e->hi = 0;
                        l.result = p[0x301];
                    }
                    cnt++;
                }
                e++;
                p += 0x24;
                i++;
            } while (i < ctx->unk_d10);
        }
        if (cnt == 1) {
            ctx->unk_d0c_mode = 0;
        }
    }
    return (u8)l.result;
}

u32 func_ov065_0226b8d4(Unk_ov065_0226b488_Ctx *ctx) {
    if (ctx->unk_d0b_lo == 1) {
        return 0x30000;
    }
    return 0x20000;
}

u32 func_ov065_0226b8b4(Unk_ov065_0226b488_Ctx *ctx) {
    if (ctx->unk_d0b_hi == 1) {
        return 0xc0000;
    }
    return 0x80000;
}

BOOL func_ov065_0226b7f8(Unk_ov065_0226b488_Ctx *ctx, u32 idx, u8 *out) {
    u8 *c = (u8 *)ctx;
    switch (idx) {
    case 2:
        c += 0x100;
    case 1:
        c += 0x100;
    case 0:
        out[0] = ((Unk_ov065_0226b7f8_Bits *)(c + 0xe6))->v;
        func_02116048(c + 0x80, out + 2, 0x50);
        break;
    case 5:
        c += 0x100;
    case 4:
        c += 0x100;
    case 3:
        out[0] = 1;
        func_02116048(c + 0xd1, out + 2, 0x14);
        out[0x16] = 0;
        break;
    case 6:
        out[0] = 2;
        func_ov065_0226d080(ctx->unk_470[ctx->unk_d13].unk_0c, out + 2);
        break;
    case 7:
        out[0] = 2;
        func_ov065_0226d0e0(ctx->unk_470[ctx->unk_d13].unk_0c, out + 2);
        break;
    case 8:
    case 9:
        break;
    }
    if (out[0] != 0) {
        return TRUE;
    }
    return FALSE;
}

void func_ov065_0226b78c(Unk_ov065_0226b78c_Msg *m) {
    Unk_ov065_0226b488_Ctx *ctx = (Unk_ov065_0226b488_Ctx *)func_ov065_0226af74(0x10);
    if (m->unk_00 == 5) {
        if (m->unk_02 != 0) {
            switch (m->unk_08) {
            case 0xd:
                ctx->unk_d14 = 1;
                break;
            case 0xf:
                ctx->unk_d14 = 2;
                break;
            case 0x11:
                ctx->unk_d14 = 3;
                break;
            default:
                ctx->unk_d14 = 4;
                break;
            }
        }
    } else if (m->unk_00 == 7) {
        func_ov065_0226b6bc((Unk_ov065_0226b488_Rec *)m->unk_04);
    }
}

void func_ov065_0226b6bc(Unk_ov065_0226b488_Rec *rec) {
    s32 r6 = -1;
    Unk_ov065_0226b488_Ctx *ctx = (Unk_ov065_0226b488_Ctx *)func_ov065_0226af74(0x10);
    func_ov065_0226af74(1)[0xb] = 1;
    switch (func_ov065_0226af18()) {
    case 3: {
        u16 proto = rec->unk_0a;
        u8 c;
        if (proto == 0 || (c = rec->unk_0c[0]) == 0) {
            func_ov065_0226c878(rec->unk_36);
        } else if (proto == 1 || c == 0x20) {
            func_ov065_0226c878(rec->unk_36);
            r6 = func_ov065_0226b5d4(rec, ctx->unk_d10, ctx->unk_300);
        } else {
            r6 = func_ov065_0226b5d4(rec, ctx->unk_d10, ctx->unk_300);
        }
        break;
    }
    case 4:
    case 5:
        r6 = func_ov065_0226b5d4(rec, 1, ctx->unk_300 + ctx->unk_d0f);
        if (r6 >= 0) {
            ((Unk_ov065_0226b488_Entry *)((u8 *)ctx + 0x300) + ctx->unk_d0f)->lo = 1;
        }
        break;
    default:
        return;
    }
    if (r6 >= 0) {
        func_ov065_0226b3c4(func_ov065_0226b534(r6, rec, ctx), ctx);
    }
}

s32 func_ov065_0226b630(Unk_ov065_0226b488_Rec *rec) {
    Unk_ov065_0226b488_Ctx *ctx = (Unk_ov065_0226b488_Ctx *)func_ov065_0226af74(0x10);
    if (ctx->unk_d0c_st == 0 || ctx->unk_d0c_st == 4) {
        if ((u8)(((s32)rec->unk_2c >> 4) & 1) == 1) {
            if (func_ov065_0226d08c(rec->unk_0c) == 1) {
                return 6;
            }
        }
    }
    if (ctx->unk_d0c_st == 0 || ctx->unk_d0c_st == 5) {
        if ((u8)(((s32)rec->unk_2c >> 4) & 1) == 1) {
            if (func_ov065_0226d0fc(rec->unk_0c) == 1) {
                return 7;
            }
        }
    }
    return -1;
}

s32 func_ov065_0226b5d4(Unk_ov065_0226b488_Rec *rec, s32 n, Unk_ov065_0226b488_Entry *e) {
    s32 i;
    u16 proto;
    if (rec->unk_0a == 0x20) {
        s32 r = func_ov065_0226b630(rec);
        if (r > 0) {
            return r;
        }
    }
    i = 0;
    if (n > 0) {
        proto = rec->unk_0a;
        do {
            if ((u8)proto == e->unk_03 && func_0212a15c(rec->unk_0c, e->unk_04, proto) == 0) {
                return e->unk_01;
            }
            e++;
            i++;
        } while (i < n);
    }
    return -1;
}

s32 func_ov065_0226b534(u32 a, Unk_ov065_0226b488_Rec *rec, Unk_ov065_0226b488_Ctx *ctx) {
    s32 i = 0;
    s32 found = -1;
    u8 *e;
    u32 b0;
    s32 n;
    n = ctx->unk_d12;
    if (n > 0) {
        e = ctx->unk_470[0].unk_04;
        b0 = rec->unk_04[0];
        do {
            if (b0 == e[0] && rec->unk_04[1] == e[1] && rec->unk_04[2] == e[2] &&
                rec->unk_04[3] == e[3] && rec->unk_04[4] == e[4] && rec->unk_04[5] == e[5]) {
                found = i;
                break;
            }
            e += 0xc0;
            i++;
        } while (i < n);
    }
    if (found == -1) {
        func_ov065_0226b4e8((u8)a, rec, ctx);
        if (ctx->unk_d12 < 10) {
            ctx->unk_d12++;
        }
        found = 10;
    } else {
        func_ov065_0226b488(found, rec, ctx);
    }
    return found;
}

void func_ov065_0226b4e8(u32 a, Unk_ov065_0226b488_Rec *rec, Unk_ov065_0226b488_Ctx *ctx) {
    u8 *p = ctx->unk_444 + 0x28;
    Unk_ov065_0226b488_Rec *q = ctx->unk_470 + 10;
    p[1] = a;
    u16 f = rec->unk_02;
    p[2] = (u8)Unk_ov065_0226b488_Level(f);
    p[3] = ctx->unk_d11 + 1;
    func_02115e78(rec, q, 0xc0);
}

void func_ov065_0226b488(u32 a, Unk_ov065_0226b488_Rec *rec, Unk_ov065_0226b488_Ctx *ctx) {
    u8 *p = ctx->unk_444 + a * 4;
    Unk_ov065_0226b488_Rec *q = ctx->unk_470 + a;
    u16 f = rec->unk_02;
    u8 w = (u8)Unk_ov065_0226b488_Level(f);
    if (w > p[2]) {
        p[2] = w;
        p[3] = ctx->unk_d11 + 1;
    }
    func_02115e78(rec, q, 0xc0);
}

}
}
}  // namespace N_b488

namespace N_ab40 {
extern "C" {

// ov065_019: network library, connection/event state (0x0226ab40..0x0226b3c4)

struct Unk_ov065_0226ab5c_Conn {
    u8 unk_0000[0xf00];
    u8 unk_0f00[0x1244];
    u8 unk_2144[6];
    u16 unk_214a;
    u8 unk_214c[0x114];
    s32 unk_2260;
    u8 unk_2264[7];
    u8 unk_226b;
};

typedef void (*Unk_ov065_0226ac54_Cb)(void *, void *, void *, u32);

struct Unk_ov065_0226ab40_Glb {
    u8 unk_00;
    u8 unk_01[3];
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c[0x18];
    u32 unk_24;
    Unk_ov065_0226ac54_Cb unk_28;
};

struct Unk_ov065_0226aed4_Fc {
    void *(*unk_00)(u32, u32);
    void (*unk_04)(u32, void *, u32);
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    u32 unk_0c;
    u8 unk_10[4];
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17;
};

struct Unk_ov065_0226b27c_Cfg {
    void *(*unk_00)(u32, u32);
    void (*unk_04)(u32, void *, u32);
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
};

struct Unk_ov065_0226b27c_F8 {
    void *(*unk_00)(u32, u32);
    void (*unk_04)(u32, void *, u32);
    u32 unk_08;
};

struct Unk_ov065_0226b27c_B0b {
    u8 lo : 2;
};

struct Unk_ov065_0226b27c_B0c {
    u8 lo : 4;
    u8 mid : 2;
};

struct Unk_ov065_0226b3c4_Key {
    u8 unk_00[4];
};

struct Unk_ov065_0226b3c4_Rec {
    u8 unk_00[0xc0];
};

extern "C" {

extern Unk_ov065_0226ab40_Glb data_ov065_022905ac;
extern u8 data_ov065_022905b8[];
extern volatile u8 data_ov065_022905d8;
extern u8 data_ov065_022905dc[];
extern u8 *data_ov065_022905ec;
extern void *data_ov065_022905f0;
extern void *data_ov065_022905f4;
extern Unk_ov065_0226b27c_F8 *data_ov065_022905f8;
extern Unk_ov065_0226aed4_Fc *data_ov065_022905fc;

u32 func_01ffa2ec();
void func_01ffa3d4(u32);
s32 func_02133150(s32, s32);
void func_0211450c(void *);
s32 func_0211acbc();
s32 func_0211ad80();
s32 func_0211ae74();
void func_02115e64(u32, void *, u32);
void func_02115e78(void *, void *, u32);
s32 func_0212a15c(void *, void *, u32);
s32 func_021208bc(void *, void *, void *, u32);
void func_020ff154(void *);

Unk_ov065_0226ab5c_Conn *func_ov065_02269bd0();
s32 func_ov065_0226a510(void *, u32);
s32 func_ov065_0226a97c(void *);
s32 func_ov065_0226a9a8(void *);
void func_ov065_0226a9d4();
s32 func_ov065_0226bd18(u8 *);
s32 func_ov065_0226be9c();
u8 func_ov065_0226bee4();
u8 func_ov065_0226bc40();
u8 func_ov065_0226c1e0();
u8 func_ov065_0226c8a4();
u8 func_ov065_0226c924();
u8 func_ov065_0226ccc8();

u8 func_ov065_0226ad30();
















void func_ov065_0226b084(u32, void *, u32);



u8 func_ov065_0226af18();
void *func_ov065_0226af74(u32);


















void func_ov065_0226b3c4(u32 n, u8 *base);

void func_ov065_0226b3c4(u32 n, u8 *base) {
    Unk_ov065_0226b3c4_Key *keys = (Unk_ov065_0226b3c4_Key *)(base + 0x444);
    Unk_ov065_0226b3c4_Rec *recs = (Unk_ov065_0226b3c4_Rec *)(base + 0x470);
    s32 j = n - 1;
    if (j >= 0) {
        Unk_ov065_0226b3c4_Key *p4 = &keys[j];
        Unk_ov065_0226b3c4_Rec *p6 = &recs[j];
        do {
            Unk_ov065_0226b3c4_Key tk;
            Unk_ov065_0226b3c4_Rec tr;
            if (keys[n].unk_00[2] < p4->unk_00[2]) {
                break;
            }
            func_02115e78(p4, &tk, 4);
            func_02115e78(&keys[n], p4, 4);
            func_02115e78(&tk, &keys[n], 4);
            func_02115e78(p6, &tr, 0xc0);
            func_02115e78(&recs[n], p6, 0xc0);
            func_02115e78(&tr, &recs[n], 0xc0);
            n = j;
            p4--;
            p6--;
            j--;
        } while (j >= 0);
    }
    { volatile u32 z = 0; keys += 10; func_02115e64(z, keys, 4); }
    { volatile u32 z = 0; func_02115e64(z, recs + 10, 0xc0); }
}

}
}
}  // namespace N_ab40

