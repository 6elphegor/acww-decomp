// mwcc-flags: -O4,p
#include "types.h"

// ov065_041: generic vector / hash table / base64 / md5 hex / PRNG (0x022782f4..0x02278c14)

typedef s32 (*Unk_ov065_02278384_Cmp)(void *, void *);
typedef s32 (*Unk_ov065_02278448_Cb)(void *, void *);
typedef void (*Unk_ov065_02278740_Dtor)(void *);
typedef s32 (*Unk_ov065_022787c4_Hash)(void *, s32);

struct Unk_ov065_022786bc_Vec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    Unk_ov065_02278740_Dtor unk_10;
    u8 *unk_14;
};

struct Unk_ov065_02278928_Tbl {
    Unk_ov065_022786bc_Vec **unk_00;
    s32 unk_04;
    Unk_ov065_02278740_Dtor unk_08;
    Unk_ov065_022787c4_Hash unk_0c;
    Unk_ov065_02278384_Cmp unk_10;
};

struct Unk_ov065_02278328_Addr {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    volatile s32 unk_04;
};

struct Unk_ov065_02278328_Host {
    u8 unk_00[0xc];
    s32 **unk_0c;
};

struct Unk_ov065_022782f4_Glob {
    s32 unk_00;
    u8 unk_04[0x48];
    s32 unk_4c;
    s32 unk_50;
};

extern "C" {
extern Unk_ov065_022782f4_Glob data_ov065_02291024;
extern u8 data_ov065_02291028[];
extern u8 data_ov065_02291030[];
extern u32 data_ov065_02291080;
extern s32 data_ov065_0228ca30;
extern char data_ov065_0228ca28[];
extern char data_ov065_0228b394[];
extern char data_ov065_0228b398[];
extern char data_ov065_0228b39c[];

s32 func_ov065_02278c64(s32, void *, s32, s32, void *, s32);
s32 func_ov065_02279144(void);
Unk_ov065_02278328_Host *func_ov065_02261408(s32);
void *func_ov065_02277af0(s32);
void *func_ov065_02277ad8(void *, s32);
void func_ov065_02277ac8(void *);
s32 func_ov065_022610a0(s32, u32 *);
s32 func_ov065_02261390(s32, void *);
s32 func_ov065_02278dec(s32, s32);
void func_ov065_0226adf0(void *);
void func_ov065_0226ade8(void *, void *, s32);
void func_ov065_0226ade0(void *, void *);
void func_02128acc(void *, s32, s32, Unk_ov065_02278384_Cmp);
void func_021289b4(void *, void *, s32);
void func_02128a00(void *, void *, s32);
s32 func_02133150(s32, s32);
s32 func_021130d0(char *, char *, s32);
u64 func_01ffa6b4(void);
u64 func_02132ef8(u64, u64);

s32 func_ov065_02278bf4(s32);
void *func_ov065_0227866c(Unk_ov065_022786bc_Vec *, s32);
s32 func_ov065_02278684(Unk_ov065_022786bc_Vec *);
void func_ov065_02278700(Unk_ov065_022786bc_Vec *, void *, s32);
void func_ov065_02278720(Unk_ov065_022786bc_Vec *);
void func_ov065_02278740(Unk_ov065_022786bc_Vec *, s32);
void func_ov065_02278688(Unk_ov065_022786bc_Vec *);
void func_ov065_02278658(Unk_ov065_022786bc_Vec *, void *);
void func_ov065_02278ac0(char *, char *, s32);
s32 func_ov065_02278b60(void);
void func_ov065_02278570(Unk_ov065_022786bc_Vec *, s32);
void func_ov065_0227858c(Unk_ov065_022786bc_Vec *, s32);
void func_ov065_02278600(Unk_ov065_022786bc_Vec *, void *, s32);
void func_ov065_022789d0(u8 *, char *);
u32 func_ov065_02278b7c(u32);
}

extern "C" {

void func_ov065_022782f4(void) {
    func_ov065_02278c64(data_ov065_02291024.unk_00, data_ov065_02291030, data_ov065_02291024.unk_4c, 0,
                        data_ov065_02291028, 8);
    data_ov065_02291024.unk_50 = func_ov065_02279144();
}

s32 func_ov065_02278328(s32 a, u32 port, Unk_ov065_02278328_Addr *out) {
    s32 p;
    out->unk_01 = 2;
    p = (u16)port;
    out->unk_02 = (u16)(((p >> 8) & 0xff) | ((p << 8) & 0xff00));
    out->unk_04 = func_ov065_02278bf4(a);
    if (out->unk_04 == -1) {
        Unk_ov065_02278328_Host *h = func_ov065_02261408(a);
        if (h == NULL) {
            return 0;
        }
        out->unk_04 = **h->unk_0c;
    }
    return 1;
}

u8 *func_ov065_02278384(void *key, u8 *base, s32 n, s32 size, Unk_ov065_02278384_Cmp cmp, s32 *found) {
    s32 lo = 0;
    s32 hi = n - 1;
    *found = 0;
    while (lo <= hi) {
        s32 mid = (lo + hi) >> 1;
        s32 c = cmp(base + mid * size, key);
        if (c == 0) {
            *found = 1;
        }
        if (c < 0) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return base + lo * size;
}

u8 *func_ov065_022783d8(void *key, u8 *base, s32 n, s32 size, Unk_ov065_02278384_Cmp cmp) {
    s32 i = 0;
    s32 off;
    if (n > 0) {
        off = i;
        do {
            if (cmp(key, base + off) == 0) {
                return base + size * i;
            }
            off += size;
            i++;
        } while (i < n);
    }
    return NULL;
}

void func_ov065_02278420(Unk_ov065_022786bc_Vec *v) {
    s32 i;
    for (i = func_ov065_02278684(v) - 1; i >= 0; i--) {
        func_ov065_02278570(v, i);
    }
}

void *func_ov065_02278448(Unk_ov065_022786bc_Vec *v, Unk_ov065_02278448_Cb cb, void *arg) {
    s32 i;
    for (i = v->unk_00 - 1; i >= 0; i--) {
        void *p = func_ov065_0227866c(v, i);
        if (cb(p, arg) == 0) {
            return p;
        }
    }
    return NULL;
}

void func_ov065_02278488(Unk_ov065_022786bc_Vec *v, Unk_ov065_02278448_Cb cb, void *arg) {
    s32 i;
    for (i = v->unk_00 - 1; i >= 0; i--) {
        cb(func_ov065_0227866c(v, i), arg);
    }
}

s32 func_ov065_022784b4(Unk_ov065_022786bc_Vec *v, void *key, Unk_ov065_02278384_Cmp cmp, s32 start, s32 sorted) {
    s32 found = 1;
    s32 n;
    u8 *r;
    if (v == NULL || (n = v->unk_00) == 0) {
        return -1;
    }
    if (sorted != 0) {
        r = func_ov065_02278384(key, (u8 *)func_ov065_0227866c(v, start), n - start, v->unk_08, cmp, &found);
    } else {
        r = func_ov065_022783d8(key, (u8 *)func_ov065_0227866c(v, start), n - start, v->unk_08, cmp);
    }
    if (r != NULL && found != 0) {
        return func_02133150((s32)(r - v->unk_14), v->unk_08);
    }
    return -1;
}

void func_ov065_02278538(Unk_ov065_022786bc_Vec *v, Unk_ov065_02278384_Cmp cmp) {
    func_02128acc(v->unk_14, v->unk_00, v->unk_08, cmp);
}

void func_ov065_02278550(Unk_ov065_022786bc_Vec *v, void *x, s32 i) {
    func_ov065_02278740(v, i);
    func_ov065_02278700(v, x, i);
}

void func_ov065_02278570(Unk_ov065_022786bc_Vec *v, s32 i) {
    func_ov065_02278740(v, i);
    func_ov065_0227858c(v, i);
}

void func_ov065_0227858c(Unk_ov065_022786bc_Vec *v, s32 i) {
    s32 last = v->unk_00 - 1;
    if (i < last) {
        void *a = func_ov065_0227866c(v, i);
        void *b = func_ov065_0227866c(v, i + 1);
        func_021289b4(a, b, v->unk_08 * (last - i));
    }
    v->unk_00 = v->unk_00 - 1;
}

void func_ov065_022785c8(Unk_ov065_022786bc_Vec *v, void *key, Unk_ov065_02278384_Cmp cmp) {
    s32 found;
    u8 *r = func_ov065_02278384(key, v->unk_14, v->unk_00, v->unk_08, cmp, &found);
    func_ov065_02278600(v, key, func_02133150((s32)(r - v->unk_14), v->unk_08));
}

void func_ov065_02278600(Unk_ov065_022786bc_Vec *v, void *x, s32 i) {
    s32 last;
    if (v->unk_00 == v->unk_04) {
        func_ov065_02278720(v);
    }
    v->unk_00 = v->unk_00 + 1;
    last = v->unk_00 - 1;
    if (i < last) {
        void *dst = func_ov065_0227866c(v, i + 1);
        void *src = func_ov065_0227866c(v, i);
        func_021289b4(dst, src, v->unk_08 * (last - i));
    }
    func_ov065_02278700(v, x, i);
}

void func_ov065_02278658(Unk_ov065_022786bc_Vec *v, void *x) {
    if (v != NULL) {
        func_ov065_02278600(v, x, v->unk_00);
    }
}

void *func_ov065_0227866c(Unk_ov065_022786bc_Vec *v, s32 i) {
    if (i < 0 || i >= v->unk_00) {
        return NULL;
    }
    return v->unk_14 + v->unk_08 * i;
}

s32 func_ov065_02278684(Unk_ov065_022786bc_Vec *v) {
    return v->unk_00;
}

void func_ov065_02278688(Unk_ov065_022786bc_Vec *v) {
    s32 i;
    for (i = 0; i < v->unk_00; i++) {
        func_ov065_02278740(v, i);
    }
    func_ov065_02277ac8(v->unk_14);
    func_ov065_02277ac8(v);
}

Unk_ov065_022786bc_Vec *func_ov065_022786bc(s32 size, s32 cap, Unk_ov065_02278740_Dtor dtor) {
    Unk_ov065_022786bc_Vec *v = (Unk_ov065_022786bc_Vec *)func_ov065_02277af0(0x18);
    if (cap == 0) {
        cap = 8;
    }
    v->unk_00 = 0;
    v->unk_04 = cap;
    v->unk_08 = size;
    v->unk_0c = cap;
    v->unk_10 = dtor;
    if (v->unk_04 != 0) {
        v->unk_14 = (u8 *)func_ov065_02277af0(v->unk_04 * v->unk_08);
    } else {
        v->unk_14 = NULL;
    }
    return v;
}

void func_ov065_02278700(Unk_ov065_022786bc_Vec *v, void *x, s32 i) {
    func_02128a00(func_ov065_0227866c(v, i), x, v->unk_08);
}

void func_ov065_02278720(Unk_ov065_022786bc_Vec *v) {
    v->unk_04 = v->unk_04 + v->unk_0c;
    v->unk_14 = (u8 *)func_ov065_02277ad8(v->unk_14, v->unk_04 * v->unk_08);
}

void func_ov065_02278740(Unk_ov065_022786bc_Vec *v, s32 i) {
    if (v->unk_10 != NULL) {
        v->unk_10(func_ov065_0227866c(v, i));
    }
}

void *func_ov065_02278758(Unk_ov065_02278928_Tbl *t, Unk_ov065_02278448_Cb cb, void *arg) {
    s32 i;
    for (i = 0; i < t->unk_04; i++) {
        void *r = func_ov065_02278448(t->unk_00[i], cb, arg);
        if (r != NULL) {
            return r;
        }
    }
    return NULL;
}

void func_ov065_02278790(Unk_ov065_02278928_Tbl *t, Unk_ov065_02278448_Cb cb, void *arg) {
    s32 i;
    for (i = 0; i < t->unk_04; i++) {
        func_ov065_02278488(t->unk_00[i], cb, arg);
    }
}

void *func_ov065_022787c4(Unk_ov065_02278928_Tbl *t, void *key) {
    s32 h;
    s32 r;
    if (t == NULL) {
        return NULL;
    }
    h = t->unk_0c(key, t->unk_04) * 4;
    r = func_ov065_022784b4(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + h), key, t->unk_10, 0, 0);
    if (r != -1) {
        return func_ov065_0227866c(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + h), r);
    }
    return NULL;
}

s32 func_ov065_02278810(Unk_ov065_02278928_Tbl *t, void *key) {
    s32 h;
    s32 r;
    if (t == NULL) {
        return 0;
    }
    h = t->unk_0c(key, t->unk_04) * 4;
    r = func_ov065_022784b4(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + h), key, t->unk_10, 0, 0);
    if (r != -1) {
        func_ov065_02278570(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + h), r);
        return 1;
    }
    return 0;
}

void func_ov065_0227885c(Unk_ov065_02278928_Tbl *t, void *key) {
    s32 h;
    s32 r;
    if (t != NULL) {
        h = t->unk_0c(key, t->unk_04) * 4;
        r = func_ov065_022784b4(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + h), key, t->unk_10, 0, 0);
        if (r == -1) {
            func_ov065_02278658(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + h), key);
            return;
        }
        func_ov065_02278550(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + h), key, r);
    }
}

s32 func_ov065_022788b0(Unk_ov065_02278928_Tbl *t) {
    s32 sum = 0;
    s32 i;
    if (t == NULL) {
        return sum;
    }
    i = sum;
    if (t->unk_04 > 0) {
        s32 off = sum;
        do {
            sum += func_ov065_02278684(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + off));
            off += 4;
            i++;
        } while (i < t->unk_04);
    }
    return sum;
}

void func_ov065_022788f0(Unk_ov065_02278928_Tbl *t) {
    if (t != NULL) {
        s32 i = 0;
        if (t->unk_04 > 0) {
            s32 off = i;
            do {
                func_ov065_02278688(*(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + off));
                off += 4;
                i++;
            } while (i < t->unk_04);
        }
        func_ov065_02277ac8(t->unk_00);
        func_ov065_02277ac8(t);
    }
}

Unk_ov065_02278928_Tbl *func_ov065_02278928(s32 esize, s32 n, s32 cap, Unk_ov065_022787c4_Hash hash, Unk_ov065_02278384_Cmp cmp,
                                            Unk_ov065_02278740_Dtor dtor) {
    Unk_ov065_02278928_Tbl *t = (Unk_ov065_02278928_Tbl *)func_ov065_02277af0(0x14);
    s32 i;
    t->unk_00 = (Unk_ov065_022786bc_Vec **)func_ov065_02277af0(n * 4);
    i = 0;
    if (n > 0) {
        s32 off = i;
        do {
            Unk_ov065_022786bc_Vec *v = func_ov065_022786bc(esize, cap, dtor);
            *(Unk_ov065_022786bc_Vec **)((u8 *)t->unk_00 + off) = v;
            off += 4;
            i++;
        } while (i < n);
    }
    t->unk_04 = n;
    t->unk_08 = dtor;
    t->unk_10 = cmp;
    t->unk_0c = hash;
    return t;
}

Unk_ov065_02278928_Tbl *func_ov065_02278980(s32 esize, s32 n, Unk_ov065_022787c4_Hash hash, Unk_ov065_02278384_Cmp cmp,
                                            Unk_ov065_02278740_Dtor dtor) {
    return func_ov065_02278928(esize, n, 4, hash, cmp, dtor);
}

void func_ov065_0227899c(void *a, s32 b, char *out) {
    u8 digest[16];
    u8 ctx[0x58];
    func_ov065_0226adf0(ctx);
    func_ov065_0226ade8(ctx, a, b);
    func_ov065_0226ade0(digest, ctx);
    func_ov065_022789d0(digest, out);
}

void func_ov065_022789d0(u8 *digest, char *out) {
    u32 i = 0;
    s32 off = 0;
    do {
        func_021130d0(out + off, data_ov065_0228ca28, digest[i]);
        off += 2;
        i++;
    } while (i < 16);
}

void func_ov065_022789fc(char *in, char *out, s32 n, s32 mode) {
    char *start = out;
    s32 rem = n;
    char *tbl;
    char *end;
    s32 m;
    switch (mode) {
    case 1:
        tbl = data_ov065_0228b394;
        break;
    case 2:
        tbl = data_ov065_0228b398;
        break;
    default:
        tbl = data_ov065_0228b39c;
        break;
    }
    while (rem > 0) {
        func_ov065_02278ac0(in, out, n >= 3 ? 3 : n);
        out += 4;
        in += 3;
        rem -= 3;
    }
    end = out;
    m = n % 3;
    if (m == 1) {
        end = out - 2;
    } else if (m == 2) {
        end = out - 1;
    }
    *out = 0;
    if (out > start) {
        do {
            char c;
            out--;
            if (out >= end) {
                *out = tbl[2];
            } else {
                c = *out;
                if (c <= 0x19) {
                    *out = c + 0x41;
                } else if (c <= 0x33) {
                    *out = c + 0x47;
                } else if (c <= 0x3d) {
                    *out = c - 4;
                } else if (c == 0x3e) {
                    *out = tbl[0];
                } else if (c == 0x3f) {
                    *out = tbl[1];
                }
            }
        } while (out > start);
    }
}

void func_ov065_02278ac0(char *in, char *out, s32 n) {
    u8 buf[3];
    s32 i = 0;
    u8 *p;
    if (n > 0) {
        p = buf;
        do {
            *p = in[i];
            p++;
            i++;
        } while (i < n);
    }
    if (i < 3) {
        p = buf + i;
        do {
            *p = 0;
            p++;
            i++;
        } while (i < 3);
    }
    out[0] = buf[0] >> 2;
    out[1] = ((buf[0] & 3) << 4) | (buf[1] >> 4);
    out[2] = ((buf[1] & 0xf) << 2) | (buf[2] >> 6);
    out[3] = buf[2] & 0x3f;
}

s32 func_ov065_02278b24(s32 a, s32 b) {
    s32 d = b - a;
    if (d == 0) {
        return a;
    }
    s32 q = func_ov065_02278b60();
    s32 m = q % d;
    return m + a;
}

void func_ov065_02278b44(u32 seed) {
    if (seed != 0) {
        seed &= 0x7fffffff;
    } else {
        seed = 1;
    }
    data_ov065_0228ca30 = seed;
}

s32 func_ov065_02278b60(void) {
    s32 r = func_ov065_02278b7c(data_ov065_0228ca30);
    data_ov065_0228ca30 = r;
    return r;
}

u32 func_ov065_02278b7c(u32 x) {
    u32 hi;
    u32 r = (x & 0xffff) * 0x41a7;
    hi = (x >> 16) * 0x41a7;
    r += (hi & 0x7fff) << 16;
    if (r > 0x7fffffff) {
        r = (r & 0x7fffffff) + 1;
    }
    r += hi >> 15;
    if (r > 0x7fffffff) {
        r = (r & 0x7fffffff) + 1;
    }
    return r;
}

void func_ov065_02278bc0(u32 *out) {
    u64 t = func_01ffa6b4();
    u64 v = func_02132ef8(t << 6, 0x1ff6210);
    if (out != NULL) {
        *out = (u32)v;
    }
}

u32 func_ov065_02278be8(void) {
    return data_ov065_02291080;
}

s32 func_ov065_02278bf4(s32 a) {
    u32 v;
    if (func_ov065_022610a0(a, &v) == 0) {
        return -1;
    }
    return v;
}

s32 func_ov065_02278c14(s32 a, u8 *p1, u32 *p2) {
    *p1 = *p2;
    a = func_ov065_02261390(a, p1);
    *p2 = *p1;
    return func_ov065_02278dec(a, -1);
}

}
