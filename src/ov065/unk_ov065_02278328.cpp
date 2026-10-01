// mwcc-flags: -O4,p -str reuse
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

extern "C" {
extern u32 data_ov065_02291080;
extern s32 data_ov065_0228ca30;

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
s32 func_021130d0(char *, char *, s32);
u64 func_01ffa6b4(void);
u64 func_02132ef8(u64, u64);

s32 func_ov065_02278bf4(s32);
void func_ov065_022789d0(u8 *, char *);
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
u32 func_ov065_02278b7c(u32);
}

extern "C" {
void func_ov065_022789d0(u8 *digest, char *out);
void func_ov065_0227899c(void *a, s32 b, char *out);
Unk_ov065_02278928_Tbl *func_ov065_02278980(s32 esize, s32 n, Unk_ov065_022787c4_Hash hash, Unk_ov065_02278384_Cmp cmp, Unk_ov065_02278740_Dtor dtor);
Unk_ov065_02278928_Tbl *func_ov065_02278928(s32 esize, s32 n, s32 cap, Unk_ov065_022787c4_Hash hash, Unk_ov065_02278384_Cmp cmp, Unk_ov065_02278740_Dtor dtor);
void func_ov065_022788f0(Unk_ov065_02278928_Tbl *t);
s32 func_ov065_022788b0(Unk_ov065_02278928_Tbl *t);
void func_ov065_0227885c(Unk_ov065_02278928_Tbl *t, void *key);
s32 func_ov065_02278810(Unk_ov065_02278928_Tbl *t, void *key);
void *func_ov065_022787c4(Unk_ov065_02278928_Tbl *t, void *key);
void func_ov065_02278790(Unk_ov065_02278928_Tbl *t, Unk_ov065_02278448_Cb cb, void *arg);
void *func_ov065_02278758(Unk_ov065_02278928_Tbl *t, Unk_ov065_02278448_Cb cb, void *arg);
void func_ov065_02278740(Unk_ov065_022786bc_Vec *v, s32 i);
void func_ov065_02278720(Unk_ov065_022786bc_Vec *v);
void func_ov065_02278700(Unk_ov065_022786bc_Vec *v, void *x, s32 i);
Unk_ov065_022786bc_Vec *func_ov065_022786bc(s32 size, s32 cap, Unk_ov065_02278740_Dtor dtor);
void func_ov065_02278688(Unk_ov065_022786bc_Vec *v);
s32 func_ov065_02278684(Unk_ov065_022786bc_Vec *v);
void *func_ov065_0227866c(Unk_ov065_022786bc_Vec *v, s32 i);
void func_ov065_02278658(Unk_ov065_022786bc_Vec *v, void *x);
void func_ov065_02278600(Unk_ov065_022786bc_Vec *v, void *x, s32 i);
void func_ov065_022785c8(Unk_ov065_022786bc_Vec *v, void *key, Unk_ov065_02278384_Cmp cmp);
void func_ov065_0227858c(Unk_ov065_022786bc_Vec *v, s32 i);
void func_ov065_02278570(Unk_ov065_022786bc_Vec *v, s32 i);
void func_ov065_02278550(Unk_ov065_022786bc_Vec *v, void *x, s32 i);
void func_ov065_02278538(Unk_ov065_022786bc_Vec *v, Unk_ov065_02278384_Cmp cmp);
s32 func_ov065_022784b4(Unk_ov065_022786bc_Vec *v, void *key, Unk_ov065_02278384_Cmp cmp, s32 start, s32 sorted);
void func_ov065_02278488(Unk_ov065_022786bc_Vec *v, Unk_ov065_02278448_Cb cb, void *arg);
void *func_ov065_02278448(Unk_ov065_022786bc_Vec *v, Unk_ov065_02278448_Cb cb, void *arg);
void func_ov065_02278420(Unk_ov065_022786bc_Vec *v);
u8 *func_ov065_022783d8(void *key, u8 *base, s32 n, s32 size, Unk_ov065_02278384_Cmp cmp);
u8 *func_ov065_02278384(void *key, u8 *base, s32 n, s32 size, Unk_ov065_02278384_Cmp cmp, s32 *found);
s32 func_ov065_02278328(s32 a, u32 port, Unk_ov065_02278328_Addr *out);
}

extern "C" {

void func_ov065_022789d0(u8 *digest, char *out) {
    u32 i = 0;
    s32 off = 0;
    do {
        func_021130d0(out + off, "%02x", digest[i]);
        off += 2;
        i++;
    } while (i < 16);
}

void func_ov065_0227899c(void *a, s32 b, char *out) {
    u8 digest[16];
    u8 ctx[0x58];
    func_ov065_0226adf0(ctx);
    func_ov065_0226ade8(ctx, a, b);
    func_ov065_0226ade0(digest, ctx);
    func_ov065_022789d0(digest, out);
}

Unk_ov065_02278928_Tbl *func_ov065_02278980(s32 esize, s32 n, Unk_ov065_022787c4_Hash hash, Unk_ov065_02278384_Cmp cmp,
                                            Unk_ov065_02278740_Dtor dtor) {
    return func_ov065_02278928(esize, n, 4, hash, cmp, dtor);
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

void func_ov065_02278790(Unk_ov065_02278928_Tbl *t, Unk_ov065_02278448_Cb cb, void *arg) {
    s32 i;
    for (i = 0; i < t->unk_04; i++) {
        func_ov065_02278488(t->unk_00[i], cb, arg);
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

void func_ov065_02278740(Unk_ov065_022786bc_Vec *v, s32 i) {
    if (v->unk_10 != NULL) {
        v->unk_10(func_ov065_0227866c(v, i));
    }
}

void func_ov065_02278720(Unk_ov065_022786bc_Vec *v) {
    v->unk_04 = v->unk_04 + v->unk_0c;
    v->unk_14 = (u8 *)func_ov065_02277ad8(v->unk_14, v->unk_04 * v->unk_08);
}

void func_ov065_02278700(Unk_ov065_022786bc_Vec *v, void *x, s32 i) {
    func_02128a00(func_ov065_0227866c(v, i), x, v->unk_08);
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

void func_ov065_02278688(Unk_ov065_022786bc_Vec *v) {
    s32 i;
    for (i = 0; i < v->unk_00; i++) {
        func_ov065_02278740(v, i);
    }
    func_ov065_02277ac8(v->unk_14);
    func_ov065_02277ac8(v);
}

s32 func_ov065_02278684(Unk_ov065_022786bc_Vec *v) {
    return v->unk_00;
}

void *func_ov065_0227866c(Unk_ov065_022786bc_Vec *v, s32 i) {
    if (i < 0 || i >= v->unk_00) {
        return NULL;
    }
    return v->unk_14 + v->unk_08 * i;
}

void func_ov065_02278658(Unk_ov065_022786bc_Vec *v, void *x) {
    if (v != NULL) {
        func_ov065_02278600(v, x, v->unk_00);
    }
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

void func_ov065_022785c8(Unk_ov065_022786bc_Vec *v, void *key, Unk_ov065_02278384_Cmp cmp) {
    s32 found;
    u8 *r = func_ov065_02278384(key, v->unk_14, v->unk_00, v->unk_08, cmp, &found);
    func_ov065_02278600(v, key, (s32)(r - v->unk_14) / v->unk_08);
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

void func_ov065_02278570(Unk_ov065_022786bc_Vec *v, s32 i) {
    func_ov065_02278740(v, i);
    func_ov065_0227858c(v, i);
}

void func_ov065_02278550(Unk_ov065_022786bc_Vec *v, void *x, s32 i) {
    func_ov065_02278740(v, i);
    func_ov065_02278700(v, x, i);
}

void func_ov065_02278538(Unk_ov065_022786bc_Vec *v, Unk_ov065_02278384_Cmp cmp) {
    func_02128acc(v->unk_14, v->unk_00, v->unk_08, cmp);
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
        return (s32)(r - v->unk_14) / v->unk_08;
    }
    return -1;
}

void func_ov065_02278488(Unk_ov065_022786bc_Vec *v, Unk_ov065_02278448_Cb cb, void *arg) {
    s32 i;
    for (i = v->unk_00 - 1; i >= 0; i--) {
        cb(func_ov065_0227866c(v, i), arg);
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

void func_ov065_02278420(Unk_ov065_022786bc_Vec *v) {
    s32 i;
    for (i = func_ov065_02278684(v) - 1; i >= 0; i--) {
        func_ov065_02278570(v, i);
    }
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

}
