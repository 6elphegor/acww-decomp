// mwcc-flags: -O4,p
#include "types.h"

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

void func_ov065_0226b4e8(u32 a, Unk_ov065_0226b488_Rec *rec, Unk_ov065_0226b488_Ctx *ctx) {
    u8 *p = ctx->unk_444 + 0x28;
    Unk_ov065_0226b488_Rec *q = ctx->unk_470 + 10;
    p[1] = a;
    u16 f = rec->unk_02;
    p[2] = (u8)Unk_ov065_0226b488_Level(f);
    p[3] = ctx->unk_d11 + 1;
    func_02115e78(rec, q, 0xc0);
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

struct Unk_ov065_0226b7f8_Bits {
    u8 v : 2;
};

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

u32 func_ov065_0226b8b4(Unk_ov065_0226b488_Ctx *ctx) {
    if (ctx->unk_d0b_hi == 1) {
        return 0xc0000;
    }
    return 0x80000;
}

u32 func_ov065_0226b8d4(Unk_ov065_0226b488_Ctx *ctx) {
    if (ctx->unk_d0b_lo == 1) {
        return 0x30000;
    }
    return 0x20000;
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

struct Unk_ov065_0226bd74_Obj {
    u8 pad00[0x10];
    s32 unk_10;
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
};

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
}
