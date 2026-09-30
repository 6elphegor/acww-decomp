// mwcc-flags: -O4,p
#include "types.h"

// ov065_039: DWC-like send/receive channel table (0x0227702c..0x022778b0)

struct Unk_ov065_02277418_Rec {
    u8 *unk_00;
    u8 *unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
    u8 unk_1f;
    u16 unk_20;
    u16 unk_22;
    u32 unk_24;
    u32 unk_28;
    u32 unk_2c;
};

struct Unk_ov065_02290f78 {
    Unk_ov065_02277418_Rec unk_000[32];
    void (*unk_600)(...);
    void (*unk_604)(...);
    void (*unk_608)(...);
    void (*unk_60c)(...);
    u16 unk_610;
    u16 unk_612;
};

struct Unk_ov065_02277054_Sm {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u64 unk_10;
    u64 unk_18;
};

struct Unk_ov065_022778b0_Rng {
    u64 unk_00;
    u64 unk_08;
    u64 unk_10;
};

struct Unk_ov065_0227762c_Hdr {
    u32 unk_00;
    u16 unk_04;
    u8 unk_06[2];
};

extern "C" {
extern u8 data_ov065_02290810[];
extern u8 *data_ov065_02290814;
extern Unk_ov065_02277054_Sm *data_ov065_02290818;
extern Unk_ov065_02290f78 *data_ov065_02290f78;
extern Unk_ov065_022778b0_Rng data_ov065_02290f7c;
extern u8 data_ov065_0228c984[];

void *func_ov065_02277b8c(s32, s32);
u64 func_ov065_02277974(void);
s32 func_ov065_02270418(s32);
s32 func_ov065_02270428(s32);
void func_ov065_02270e34(s32, s32);
s32 func_ov065_02270e4c(void);
s32 func_ov065_02270584(u8 **);
s32 func_ov065_022705d0(void);
s32 func_ov065_0227051c(s32);
s32 func_ov065_02270310(s32);
s32 func_ov065_022849cc(s32);
s32 func_ov065_022849d8(s32);
s32 func_ov065_02284a24(s32);
void func_ov065_02284a2c(s32, void *, s32, s32);
void func_ov065_02276124(s32, s32, s32);
u64 func_01ffa6b4(void);
void func_02116048(void *, void *, s32);
void func_02115fb4(void *, s32, s32);
s32 func_02128930(void *, void *, s32);
void func_0212a2ec(void *, void *, s32);
void func_02115640(void *);
u64 func_02132ef8(u64, u64);

void func_ov065_0227702c(void);
BOOL func_ov065_02277038(void);
s32 func_ov065_02277054(s32 m, u8 *p);
s32 func_ov065_02277140(s32 id);
void func_ov065_02277160(s32 a, void *b, s32 c);
void func_ov065_02277190(s32 id, void *buf, s32 n);
void func_ov065_02277230(s32 id, void *buf, s32 n);
void func_ov065_022772b0(s32 a, void *buf, s32 n);
void func_ov065_02277320(s32 a, void *buf, s32 n);
void func_ov065_022773d4(s32 id, void *buf, s32 n, s32 f);
u32 func_ov065_022773f0(s32 id);
u32 func_ov065_02277404(s32 id);
Unk_ov065_02277418_Rec *func_ov065_02277418(s32 id);
void func_ov065_02277428(void);
void func_ov065_02277434(s32 id);
void func_ov065_0227746c(void);
void func_ov065_02277588(s32 a, s32 b);
void func_ov065_022775b8(s32 a, void *b, s32 c, s32 d);
void func_ov065_022775e8(void *p);
s32 func_ov065_02277618(s32 m);
u32 func_ov065_0227762c(void *src);
void func_ov065_02277660(void *p, u32 a, u32 b);
void func_ov065_02277680(u32 v);
void func_ov065_022776a0(void *cb);
void func_ov065_022776b4(void *cb);
void func_ov065_022776c8(void *cb);
void func_ov065_022776dc(s32 id);
BOOL func_ov065_02277714(s32 id, u8 *buf, s32 n);
BOOL func_ov065_02277750(s32 m, s32 id, u8 *buf, s32 n);
BOOL func_ov065_02277824(s32 id, u8 *buf, s32 n);
BOOL func_ov065_02277840(s32 id, s32 m);
BOOL func_ov065_022778a4(s32 id);
u32 func_ov065_022778b0(u32 n);

void func_ov065_0227702c(void) {
    data_ov065_02290810[1] = 0;
}

BOOL func_ov065_02277038(void) {
    if (data_ov065_02290810[0] == 0 || data_ov065_02290810[1] == 0) {
        return FALSE;
    }
    return TRUE;
}

s32 func_ov065_02277054(s32 m, u8 *p) {
    u8 *g = data_ov065_02290814;
    if (g == NULL) {
        return 1;
    }
    if (p == NULL) {
        return 3;
    }
    switch (m) {
    case 0: {
        Unk_ov065_02277054_Sm *s;
        if (*(s32 *)(g + 0x198) == 0x13) {
            return 1;
        }
        if (p[0] != 0 && p[1] <= 1) {
            return 3;
        }
        s = data_ov065_02290818;
        if (s == NULL) {
            s = (Unk_ov065_02277054_Sm *)func_ov065_02277b8c(4, 0x20);
            data_ov065_02290818 = s;
            if (s == NULL) {
                return 4;
            }
        }
        s->unk_00 = p[0];
        data_ov065_02290818->unk_01 = p[1];
        {
            s32 z = 0;
            data_ov065_02290818->unk_02 = z;
            data_ov065_02290818->unk_03 = z;
            data_ov065_02290818->unk_04 = *(u32 *)(p + 4);
            data_ov065_02290818->unk_08 = z;
            data_ov065_02290818->unk_0c = z;
        }
        data_ov065_02290818->unk_10 = func_ov065_02277974();
        data_ov065_02290818->unk_18 = func_ov065_02277974();
        return 0;
    }
    case 1:
        if (*(u32 *)p != 0) {
            data_ov065_02290810[0] = 1;
        } else {
            data_ov065_02290810[0] = 0;
        }
        data_ov065_02290810[1] = 0;
        return 0;
    }
    return 2;
}

s32 func_ov065_02277140(s32 id) {
    s32 t = func_ov065_022849cc(func_ov065_02270428(id)) - 0x207;
    if (t <= 0) {
        t = 0;
    }
    return t;
}

void func_ov065_02277160(s32 a, void *b, s32 c) {
    Unk_ov065_02277418_Rec *r = func_ov065_02277418(a);
    r->unk_1d = r->unk_1e;
    u32 t = r->unk_22;
    switch (t) {
    case 2:
    case 3:
    case 4:
        func_ov065_02276124(a, t, (s32)b);
        break;
    }
}

void func_ov065_02277190(s32 id, void *buf, s32 n) {
    Unk_ov065_02277418_Rec *r = &data_ov065_02290f78->unk_000[id];
    if (func_ov065_022773f0(id) == 2) {
        if (r->unk_10 + n > r->unk_08) {
            func_ov065_02270e34(6, -0x17d54);
            return;
        }
        func_02116048(buf, r->unk_04 + r->unk_10, n);
    }
    r->unk_10 = r->unk_10 + n;
    s32 sz = r->unk_18;
    if (r->unk_10 == sz) {
        r->unk_1d = 1;
        r->unk_10 = 0;
        r->unk_18 = 0;
        if (data_ov065_02290f78->unk_604 != NULL) {
            data_ov065_02290f78->unk_604(id, r->unk_04, sz);
        }
    }
    if (data_ov065_02290f78->unk_608 != NULL && r->unk_2c != 0) {
        u64 t = func_01ffa6b4();
        r->unk_24 = (u32)t;
        r->unk_28 = (u32)(t >> 32);
    }
}

void func_ov065_02277230(s32 id, void *buf, s32 n) {
    Unk_ov065_02277418_Rec *r = &data_ov065_02290f78->unk_000[id];
    u32 t;
    Unk_ov065_0227762c_Hdr h;
    r->unk_1e = func_ov065_022773f0(id);
    t = func_ov065_0227762c(buf);
    switch (t) {
    case 0:
        break;
    case 1:
        if (n != 8) {
            return;
        }
        func_02116048(buf, &h, 8);
        r->unk_18 = h.unk_00;
        r->unk_10 = 0;
        if (r->unk_04 != NULL && r->unk_08 >= r->unk_18) {
            r->unk_1d = 2;
        } else {
            r->unk_1d = 4;
        }
        break;
    case 2:
    case 3:
    case 4:
        r->unk_1d = 3;
        break;
    }
    r->unk_22 = t;
}

void func_ov065_022772b0(s32 a, void *buf, s32 n) {
    s32 id = func_ov065_02270418(a);
    Unk_ov065_02277418_Rec *r = &data_ov065_02290f78->unk_000[id];
    if (r->unk_04 != NULL && r->unk_08 >= n) {
        func_02116048(buf, r->unk_04, n);
        if (data_ov065_02290f78->unk_604 != NULL) {
            data_ov065_02290f78->unk_604(id, r->unk_04, n);
        }
        if (data_ov065_02290f78->unk_608 != NULL && r->unk_2c != 0) {
            u64 t = func_01ffa6b4();
            r->unk_24 = (u32)t;
            r->unk_28 = (u32)(t >> 32);
        }
    }
}

void func_ov065_02277320(s32 a, void *buf, s32 n) {
    s32 id = func_ov065_02270418(a);
    switch (func_ov065_022773f0(id)) {
    case 0: {
        u32 t = func_ov065_0227762c(buf);
        if (t < 2 || t > 4) {
            return;
        }
        func_ov065_02277230(id, buf, n);
        return;
    }
    case 1:
        func_ov065_02277230(id, buf, n);
        return;
    case 2:
        func_ov065_02277190(id, buf, n);
        return;
    case 3:
        func_ov065_02277160(id, buf, n);
        return;
    case 4:
        data_ov065_02290f78->unk_000[id].unk_1d = 1;
        data_ov065_02290f78->unk_000[id].unk_10 = 0;
        data_ov065_02290f78->unk_000[id].unk_18 = 0;
        return;
    default:
        func_ov065_02270e34(6, -0x17d4a);
        return;
    }
}

void func_ov065_022773d4(s32 id, void *buf, s32 n, s32 f) {
    func_ov065_02284a2c(func_ov065_02270428(id), buf, n, f);
}

u32 func_ov065_022773f0(s32 id) {
    return data_ov065_02290f78->unk_000[id].unk_1d;
}

u32 func_ov065_02277404(s32 id) {
    return data_ov065_02290f78->unk_000[id].unk_1c;
}

Unk_ov065_02277418_Rec *func_ov065_02277418(s32 id) {
    return &data_ov065_02290f78->unk_000[id];
}

void func_ov065_02277428(void) {
    data_ov065_02290f78 = NULL;
}

void func_ov065_02277434(s32 id) {
    if (data_ov065_02290f78 != NULL) {
        s32 z = 0;
        data_ov065_02290f78->unk_000[id].unk_0c = z;
        data_ov065_02290f78->unk_000[id].unk_10 = z;
        data_ov065_02290f78->unk_000[id].unk_14 = z;
        data_ov065_02290f78->unk_000[id].unk_18 = z;
        data_ov065_02290f78->unk_000[id].unk_1c = z;
        data_ov065_02290f78->unk_000[id].unk_22 = z;
    }
}

void func_ov065_02277588(s32 a, s32 b) {
    if (data_ov065_02290f78->unk_60c != NULL) {
        data_ov065_02290f78->unk_60c(b, func_ov065_02270418(a));
    }
}

void func_ov065_022775b8(s32 a, void *b, s32 c, s32 d) {
    Unk_ov065_02290f78 *g = data_ov065_02290f78;
    if (g != NULL && b != NULL && c != 0) {
        if (d != 0) {
            func_ov065_02277320(a, b, c);
        } else {
            func_ov065_022772b0(a, b, c);
        }
    }
}

void func_ov065_022775e8(void *p) {
    data_ov065_02290f78 = (Unk_ov065_02290f78 *)p;
    func_02115fb4(p, 0, 0x614);
    data_ov065_02290f78->unk_610 = 0x5b9;
}

s32 func_ov065_02277618(s32 m) {
    switch (m) {
    case 2:
    case 3:
    case 4:
        return 0xc;
    }
    return 8;
}

u32 func_ov065_0227762c(void *src) {
    Unk_ov065_0227762c_Hdr h;
    func_02116048(src, &h, 8);
    if (func_02128930(h.unk_06, data_ov065_0228c984, 2) == 0) {
        return h.unk_04;
    }
    return 0;
}

void func_ov065_02277660(void *p, u32 a, u32 b) {
    Unk_ov065_0227762c_Hdr *h = (Unk_ov065_0227762c_Hdr *)p;
    func_0212a2ec(h->unk_06, data_ov065_0228c984, 2);
    h->unk_04 = a;
    h->unk_00 = b;
}

void func_ov065_02277680(u32 v) {
    if (v > 0x5b9) {
        v = 0x5b9;
    }
    data_ov065_02290f78->unk_610 = v;
}

void func_ov065_022776a0(void *cb) {
    data_ov065_02290f78->unk_60c = (void (*)(...))cb;
}

void func_ov065_022776b4(void *cb) {
    data_ov065_02290f78->unk_604 = (void (*)(...))cb;
}

void func_ov065_022776c8(void *cb) {
    data_ov065_02290f78->unk_600 = (void (*)(...))cb;
}

void func_ov065_022776dc(s32 id) {
    s32 h = func_ov065_02270428(id);
    if (id != func_ov065_022705d0() && h != 0 && func_ov065_022849d8(h) == 1 && func_ov065_02270e4c() == 0) {
        func_ov065_02284a24(h);
    }
}

BOOL func_ov065_02277714(s32 id, u8 *buf, s32 n) {
    Unk_ov065_02277418_Rec *r = func_ov065_02277418(id);
    if (func_ov065_022773f0(id) == 2) {
        return FALSE;
    }
    r->unk_04 = buf;
    r->unk_08 = n;
    r->unk_1d = 1;
    r->unk_10 = 0;
    r->unk_18 = 0;
    return TRUE;
}

BOOL func_ov065_02277750(s32 m, s32 id, u8 *buf, s32 n) {
    Unk_ov065_02277418_Rec *r = func_ov065_02277418(id);
    Unk_ov065_0227762c_Hdr h;
    s32 chunk;
    if (func_ov065_02270e4c() != 0) {
        return FALSE;
    }
    if (func_ov065_02277840(id, m) == 0) {
        return FALSE;
    }
    r->unk_1c = 1;
    r->unk_00 = buf;
    r->unk_0c = 0;
    r->unk_14 = n;
    func_ov065_02277660(&h, m, n);
    func_ov065_022773d4(id, &h, 8, 1);
    chunk = data_ov065_02290f78->unk_610;
    if (n <= chunk) {
        chunk = n;
    }
    if (chunk > func_ov065_02277140(id)) {
        return TRUE;
    }
    func_ov065_022773d4(id, buf, chunk, 1);
    r->unk_0c = r->unk_0c + chunk;
    if (r->unk_0c == r->unk_14) {
        if (data_ov065_02290f78->unk_600 != NULL && m == 1) {
            data_ov065_02290f78->unk_600(r->unk_14, id);
        }
        r->unk_1c = 0;
        r->unk_00 = NULL;
        r->unk_0c = 0;
        r->unk_14 = 0;
    }
    return TRUE;
}

BOOL func_ov065_02277824(s32 id, u8 *buf, s32 n) {
    return func_ov065_02277750(1, id, buf, n);
}

BOOL func_ov065_02277840(s32 id, s32 m) {
    if ((m == 1 && func_ov065_0227051c(id) == 0) || func_ov065_02270310(id) == 0) {
        return FALSE;
    }
    if (func_ov065_02277404(id) == 1) {
        return FALSE;
    }
    if (func_ov065_02277140(id) >= func_ov065_02277618(m)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov065_022778a4(s32 id) {
    return func_ov065_02277840(id, 1);
}

u32 func_ov065_022778b0(u32 n) {
    u32 hi;
    u32 nn = n;
    if (data_ov065_02290f7c.unk_00 == 0 && data_ov065_02290f7c.unk_08 == 0 && data_ov065_02290f7c.unk_10 == 0) {
        u64 s;
        u64 t;
        func_02115640(&s);
        t = func_01ffa6b4();
        s = ((s >> 24) & 0xffffff) | (t << 24);
        data_ov065_02290f7c.unk_00 = s;
        data_ov065_02290f7c.unk_08 = 0x5d588b656c078965ULL;
        data_ov065_02290f7c.unk_10 = 0x269ec3;
    }
    {
        u64 v = data_ov065_02290f7c.unk_08 * data_ov065_02290f7c.unk_00 + data_ov065_02290f7c.unk_10;
        data_ov065_02290f7c.unk_00 = v;
        hi = (u32)(v >> 32);
        if (nn != 0) {
            hi = (u32)((hi * (u64)nn) >> 32);
        }
        return hi;
    }
}

void func_ov065_0227746c(void) {
    if (data_ov065_02290f78 != NULL) {
        u8 *list;
        s32 n = func_ov065_02270584(&list);
        s32 i = 0;
        if (n > 0) {
            s32 z0 = 0;
            s32 z1 = 0;
            do {
                s32 id = list[i];
                Unk_ov065_02277418_Rec *r;
                if (id != func_ov065_022705d0()) {
                    if (func_ov065_02277404(id) == 1) {
                        s32 rem;
                        s32 chunk;
                        r = func_ov065_02277418(id);
                        rem = r->unk_14 - r->unk_0c;
                        chunk = data_ov065_02290f78->unk_610;
                        if (rem <= chunk) {
                            chunk = rem;
                        }
                        if (func_ov065_02277140(id) < chunk) {
                            goto next;
                        }
                        func_ov065_022773d4(id, r->unk_00 + r->unk_0c, chunk, 1);
                        r->unk_0c = r->unk_0c + chunk;
                        if (r->unk_0c == r->unk_14) {
                            if (data_ov065_02290f78->unk_600 != NULL) {
                                data_ov065_02290f78->unk_600(r->unk_14, id);
                            }
                            r->unk_1c = z0;
                            r->unk_00 = (u8 *)z0;
                            r->unk_0c = z0;
                            r->unk_14 = z0;
                        }
                    }
                }
                if (func_ov065_0227051c(id) != 0) {
                    r = func_ov065_02277418(id);
                    if (data_ov065_02290f78->unk_608 != NULL && r->unk_2c != 0) {
                        u64 t = func_01ffa6b4();
                        u64 d = (t - *(u64 *)&r->unk_24) << 6;
                        if ((u32)func_02132ef8(d, 0x82ea) > r->unk_2c) {
                            data_ov065_02290f78->unk_608(id);
                            *(u64 *)&r->unk_24 = t;
                        }
                    }
                }
            next:
                i++;
            } while (i < n);
        }
    }
}
}
