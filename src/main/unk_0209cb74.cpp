#include "types.h"

struct Unk_0209cbd8 {
    u32 unk_00;
    u16 unk_04;
};

struct Unk_0209cf28_T {
    u32 lo;
    u32 hi;
    Unk_0209cf28_T() {
        lo = 0;
        hi = 0;
    }
};

struct Unk_0209cc08_T {
    u8 unk_00, unk_01, unk_02, unk_03;
    Unk_0209cc08_T() {
        unk_00 = 1;
        unk_01 = 1;
        unk_02 = 0;
        unk_03 = 0;
    }
};

union Unk_0209cdf8_T {
    struct {
        u8 unk_00;
        u8 unk_01;
    };
    u16 unk_h;
};

struct Unk_0209d0e4 {
    u8 unk_00; // seconds
    u8 unk_01; // minutes
    u8 unk_02; // hours
    u8 unk_03; // day
    u8 unk_04; // month
    u8 unk_05; // year (0..99)
    u8 unk_06;
    u8 unk_07;
};

struct Unk_0209d4c0_Date {
    s32 year, month, day, week;
};
struct Unk_0209d4c0_Time {
    s32 hour, min, sec;
};

// rodata
extern const u8 data_020d0660[12];
extern const u8 data_020d066c[12];
extern const u16 data_020d0678[20];
extern const u16 data_020d06a0[24];
extern const u16 data_020d06d0[26];

extern u8 data_021ed2d0[];
extern s32 data_021d72ec[7];

extern "C" {
void func_0204605c();
void func_0211d45c();
void func_0211d20c(void *date, void *time);
void func_02116048(void *src, void *dst, u32 size);
void func_0209d0a4(Unk_0209d0e4 *p, u32 n);
void func_0209d0e4(Unk_0209d0e4 *p, s32 n);
void func_0209d124(Unk_0209d0e4 *p, s32 n);
void func_0209d164(Unk_0209d0e4 *p, s32 n);
void func_0209d1d0(Unk_0209d0e4 *p, s32 n);
void func_0209d214(Unk_0209d0e4 *p, s32 n);
void func_0209d224(Unk_0209d0e4 *p, s32 n);
void func_0209d258(Unk_0209d0e4 *p, s32 n);
void func_0209d28c(Unk_0209d0e4 *p, s32 n);
void func_0209d2c0(Unk_0209d0e4 *p, s32 n);
void func_0209d2f4(Unk_0209d0e4 *p, s32 n);
void func_0209d328(Unk_0209d0e4 *p, s32 n);
s32 func_0209d374(Unk_0209d0e4 *a, Unk_0209d0e4 *b);
s32 func_0209d3a4(Unk_0209d0e4 *a, Unk_0209d0e4 *b);
void func_0209d4c0(s32 *out);
void func_0209d5d4(Unk_0209d4c0_Date *d, Unk_0209d4c0_Time *t);
s32 func_0209cc34(Unk_0209cc08_T *t);
s32 func_0209cc98(Unk_0209cc08_T *t);
s32 func_0209cdc0(u8 *a, u8 *b);
s32 func_0209cd00(u8 *a, u8 *b);
void func_0209cf18(u8 *out);
void func_0209cf28(u8 *out);
void func_0209cf88(u8 *out);
s32 func_0209cef4();
s32 func_0209ce48(u32 y, u32 m);
s32 func_0209ceac(u32 a, u32 b, u32 c);

void _ZN12Unk_0209ea5013func_0209ea60Ev(void *);
void func_02084f48(void);
void func_02084ecc(void);
void func_02079c7c(void *);
void func_020850e0(void);
void func_020851e4(void);
void func_0205267c(void);
void func_0209c408(void);
void func_020b1dc0(void);
void func_020b11fc(void);
void func_02034164(void);
void func_020407fc(void *);
void func_020c0270(void *);
void func_02045e98(void);
void func_020ae3a4(void *, s32);
void func_0206daec(void *);
void func_02085178(void);
void _ZN12Unk_02086f8413func_02086fd0Ev(void);
void func_02085174(void);
void _ZN12Unk_02086c0413func_02086edcEv(void);
void func_020850e8(void);
void func_0208516c(void);
void _ZN12Unk_020868cc13func_020868e4Ev(void);
s32 func_0208a578(void);
void _ZN12Unk_020e0f1013func_0208c134Eii(s32, s32, s32);
void func_0202e8b0(void);
void func_0207a038(void *);
void func_0206e6c4(void);
void func_020b101c(void);
void *func_0209750c(void);
void func_02079f1c(void *, void *);
void func_020781ec(void);
void func_02078308(void);
void func_020782e0(void);
void func_02078328(void);
}

static inline void Unk_0209cdf8_Norm(Unk_0209cdf8_T *p, u16 *out) {
    while (p->unk_01 >= 0x18) {
        p->unk_01 -= 0x18;
    }
    *out = p->unk_h;
}

static inline s32 Unk_0209d0e4_Abs(s32 v) {
    if (v < 0) {
        v = -v;
    }
    return v;
}

struct Unk_0209d4c0_V4 { s32 v[4]; };
struct Unk_0209d4c0_V3 { s32 v[3]; };
struct Unk_0209d4c0_B : Unk_0209d0e4 {
    Unk_0209d4c0_B() { ((u32 *)this)[0] = 0; ((u32 *)this)[1] = 0; }
};
struct Unk_0209d4c0_Dt : Unk_0209d4c0_B {
    Unk_0209d4c0_Dt() { ((u32 *)this)[0] = 0; ((u32 *)this)[1] = 0; }
};
static inline s16 Unk_0209d4c0_Abs16(s16 v) {
    if (v < 0) {
        v = -v;
    }
    return v;
}

class Unk_0209d5f8 {
public:
    u32 pad[0x11df0 / 4];
    u8 unk_11df0;
};

extern "C" void func_0209d624(u8 *p) {
    _ZN12Unk_0209ea5013func_0209ea60Ev(p + 0x15fc5);
    func_02084f48();
    func_02084ecc();
    func_02079c7c(p + 0x8a3c);
    func_020850e0();
    func_020851e4();
    func_0205267c();
    func_0209c408();
    func_020b1dc0();
    func_020b11fc();
    func_02034164();
    func_020407fc(p + 0x15e18);
    func_020c0270(p + 0x15f66);
    func_02045e98();
    func_020ae3a4(p + 0x15db4, 0);
    func_0206daec(p + 0x15fa8);
    func_020850e0();
    func_02085178();
    _ZN12Unk_02086f8413func_02086fd0Ev();
    func_020850e0();
    func_02085174();
    _ZN12Unk_02086c0413func_02086edcEv();
    func_020850e0();
    func_020850e8();
    func_020850e0();
    func_0208516c();
    _ZN12Unk_020868cc13func_020868e4Ev();
    _ZN12Unk_020e0f1013func_0208c134Eii(func_0208a578(), 0, 1);
    func_0202e8b0();
    func_0207a038(p + 0x8a3c);
    func_0206e6c4();
    func_020b101c();
    func_02079f1c(p + 0x8a3c, func_0209750c());
    func_020781ec();
    func_02078308();
    func_020782e0();
    func_02078328();
}

extern "C" BOOL func_0209d610(Unk_0209d5f8 *p) {
    if (p->unk_11df0 == 2) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_0209d604(Unk_0209d5f8 *p) {
    p->unk_11df0 = 0x1c;
}

extern "C" void func_0209d5f8(Unk_0209d5f8 *p) {
    p->unk_11df0 = 2;
}

extern "C" void func_0209d5d4(Unk_0209d4c0_Date *d, Unk_0209d4c0_Time *t) {
    func_0211d20c(d, t);
    if (d->year == 0 && d->month == 1 && d->day == 1) {
        d->week = 6;
    }
}

extern "C" void func_0209d4c0(s32 *out) {
    Unk_0209d4c0_V4 d;
    Unk_0209d4c0_V3 t;
    func_0209d5d4((Unk_0209d4c0_Date*)&d, (Unk_0209d4c0_Time*)&t);
    Unk_0209d4c0_V4 d2 = d;
    out[0] = d2.v[0]; out[1] = d2.v[1]; out[2] = d2.v[2]; out[3] = d2.v[3];
    Unk_0209d4c0_V3 t2 = t;
    out[4] = t2.v[0]; out[5] = t2.v[1]; out[6] = t2.v[2];
    s32 a = *(s32 *)(data_021ed2d0 + 0x34);
    s16 b = *(s16 *)(data_021ed2d0 + 0x38);
    Unk_0209d4c0_Dt dtl;
    dtl.unk_05 = d.v[0];
    dtl.unk_04 = d.v[1];
    dtl.unk_03 = d.v[2];
    dtl.unk_02 = t.v[0];
    dtl.unk_01 = t.v[1];
    dtl.unk_00 = t.v[2];
    if (a < 0) {
        func_0209d0e4(&dtl, Unk_0209d0e4_Abs(a));
    } else {
        func_0209d258(&dtl, a);
    }
    if (b < 0) {
        b = Unk_0209d4c0_Abs16(b);
        func_0209d0a4(&dtl, b);
    } else {
        func_0209d224(&dtl, b);
    }
    d.v[0] = dtl.unk_05;
    d.v[1] = dtl.unk_04;
    d.v[2] = dtl.unk_03;
    t.v[0] = dtl.unk_02;
    t.v[1] = dtl.unk_01;
    t.v[2] = dtl.unk_00;
    d.v[3] = func_0209ceac((u8)d.v[0], (u8)d.v[1], (u8)d.v[2]);
    Unk_0209d4c0_V4 d3 = d;
    out[0] = d3.v[0]; out[1] = d3.v[1]; out[2] = d3.v[2]; out[3] = d3.v[3];
    Unk_0209d4c0_V3 t3 = t;
    out[4] = t3.v[0]; out[5] = t3.v[1]; out[6] = t3.v[2];
}

extern "C" void func_0209d498(Unk_0209d0e4 *p) {
    s32 *t = data_021d72ec + 4;
    s32 *d = data_021d72ec;
    p->unk_05 = d[0];
    p->unk_04 = d[1];
    p->unk_03 = d[2];
    p->unk_02 = t[0];
    p->unk_01 = t[1];
    p->unk_00 = t[2];
}

extern "C" s32 func_0209d3d0(Unk_0209d0e4 *a, Unk_0209d0e4 *b, u32 mask) {
    if (mask & 0x20) {
        if (a->unk_05 < b->unk_05) return -1;
        if (a->unk_05 > b->unk_05) return 1;
    }
    if (mask & 0x10) {
        if (a->unk_04 < b->unk_04) return -1;
        if (a->unk_04 > b->unk_04) return 1;
    }
    if (mask & 0x8) {
        if (a->unk_03 < b->unk_03) return -1;
        if (a->unk_03 > b->unk_03) return 1;
    }
    if (mask & 0x4) {
        if (a->unk_02 < b->unk_02) return -1;
        if (a->unk_02 > b->unk_02) return 1;
    }
    if (mask & 0x2) {
        if (a->unk_01 < b->unk_01) return -1;
        if (a->unk_01 > b->unk_01) return 1;
    }
    if (mask & 0x1) {
        if (a->unk_00 < b->unk_00) return -1;
        if (a->unk_00 > b->unk_00) return 1;
    }
    return 0;
}

extern "C" s32 func_0209d3a4(Unk_0209d0e4 *a, Unk_0209d0e4 *b) {
    struct L {
        u8 x[3];
        u8 pad;
        u8 y[3];
    } l;
    l.x[2] = b->unk_05;
    l.x[1] = b->unk_04;
    l.x[0] = b->unk_03;
    l.y[2] = a->unk_05;
    l.y[1] = a->unk_04;
    l.y[0] = a->unk_03;
    return func_0209cd00((u8 *)&l.x, (u8 *)&l.y);
}

extern "C" s32 func_0209d374(Unk_0209d0e4 *a, Unk_0209d0e4 *b) {
    s32 days = func_0209d3a4(a, b);
    s32 t = (b->unk_02 - a->unk_02) * 60 - a->unk_01;
    t += days * 0x5a0;
    return t + b->unk_01;
}

extern "C" void func_0209d338(Unk_0209d0e4 *p, Unk_0209d0e4 *q) {
    if (q) {
        s32 dow = func_0209ceac((u8)p->unk_05, (u8)p->unk_04, (u8)p->unk_03);
        if (q != p) {
            func_02116048(p, q, 8);
        }
        func_0209d164(q, dow);
        q->unk_02 = 0;
        q->unk_01 = 0;
        q->unk_00 = 0;
    }
}

extern "C" void func_0209d328(Unk_0209d0e4 *p, s32 n) {
    s32 y = p->unk_05 + n;
    if (y > 99) {
        y -= 100;
    }
    p->unk_05 = y;
}

extern "C" void func_0209d2f4(Unk_0209d0e4 *p, s32 n) {
    s32 s = p->unk_04 + n;
    if (s > 12) {
        func_0209d328(p, s / 12);
        s = s % 12;
    }
    p->unk_04 = s;
}

extern "C" void func_0209d2c0(Unk_0209d0e4 *p, s32 n) {
    s32 dim = func_0209ce48(p->unk_05, p->unk_04);
    s32 d = p->unk_03 + n;
    while (d > dim) {
        d -= dim;
        func_0209d2f4(p, 1);
        dim = func_0209ce48(p->unk_05, p->unk_04);
    }
    p->unk_03 = d;
}

extern "C" void func_0209d28c(Unk_0209d0e4 *p, s32 n) {
    s32 s = p->unk_02 + n;
    if (s >= 24) {
        func_0209d2c0(p, s / 24);
        s = s % 24;
    }
    p->unk_02 = s;
}

extern "C" void func_0209d258(Unk_0209d0e4 *p, s32 n) {
    s32 s = p->unk_01 + n;
    if (s >= 60) {
        func_0209d28c(p, s / 60);
        s = s % 60;
    }
    p->unk_01 = s;
}

extern "C" void func_0209d224(Unk_0209d0e4 *p, s32 n) {
    s32 s = p->unk_00 + n;
    if (s >= 60) {
        func_0209d258(p, s / 60);
        s = s % 60;
    }
    p->unk_00 = s;
}

extern "C" void func_0209d214(Unk_0209d0e4 *p, s32 n) {
    s32 y = p->unk_05 - n;
    if (y < 0) {
        y += 100;
    }
    p->unk_05 = y;
}

extern "C" void func_0209d1d0(Unk_0209d0e4 *p, s32 n) {
    s32 m = p->unk_04 - n;
    if (m < 1) {
        s32 k;
        if (m == 0) {
            m = 12;
            k = 1;
        } else {
            m = Unk_0209d0e4_Abs(m);
            k = m / 12 + 1;
            m = 12 - m % 12;
        }
        func_0209d214(p, k);
    }
    p->unk_04 = m;
}

extern "C" void func_0209d164(Unk_0209d0e4 *p, s32 n) {
    s32 d = p->unk_03;
    s32 dim;
    if (p->unk_04 == 1) {
        dim = func_0209ce48(p->unk_05, 12);
    } else {
        dim = func_0209ce48(p->unk_05, (u8)(p->unk_04 - 1));
    }
    d -= n;
    while (d <= 0) {
        if (d == 0) {
            d = dim;
        } else {
            d += dim;
        }
        func_0209d1d0(p, 1);
        if (p->unk_04 == 1) {
            dim = func_0209ce48(p->unk_05, 12);
        } else {
            dim = func_0209ce48(p->unk_05, (u8)(p->unk_04 - 1));
        }
    }
    p->unk_03 = d;
}

extern "C" void func_0209d124(Unk_0209d0e4 *p, s32 n) {
    s32 r = p->unk_02 - n;
    if (r < 0) {
        s32 q;
        r = Unk_0209d0e4_Abs(r);
        q = r / 24 + 1;
        r = 24 - r % 24;
        if (r == 24) {
            r = 0;
            q--;
        }
        func_0209d164(p, q);
    }
    p->unk_02 = r;
}

extern "C" void func_0209d0e4(Unk_0209d0e4 *p, s32 n) {
    s32 r = p->unk_01 - n;
    if (r < 0) {
        s32 q;
        r = Unk_0209d0e4_Abs(r);
        q = r / 60 + 1;
        r = 60 - r % 60;
        if (r == 60) {
            r = 0;
            q--;
        }
        func_0209d124(p, q);
    }
    p->unk_01 = r;
}

extern "C" void func_0209d0a4(Unk_0209d0e4 *t, u32 sub) {
    s32 r5 = t->unk_00 - sub;
    s32 r4;
    if (r5 < 0) {
        if (r5 < 0) {
            r5 = -r5;
        }
        r4 = r5 / 0x3c + 1;
        r5 = 0x3c - r5 % 0x3c;
        if (r5 == 0x3c) {
            r5 = 0;
            r4 = r4 - 1;
        }
        func_0209d0e4(t, r4);
    }
    t->unk_00 = r5;
}

extern "C" void func_0209d064(Unk_0209d0e4 *t, u8 *p) {
    func_0209d0a4(t, p[0]);
    func_0209d0e4(t, p[1]);
    func_0209d124(t, p[2]);
    func_0209d164(t, p[3]);
    func_0209d1d0(t, p[4]);
    func_0209d214(t, p[5]);
}

extern "C" BOOL func_0209d020(u8 *p) {
    BOOL bad = FALSE;
    BOOL ok = FALSE;
    if (p[0] < 0x3c && p[1] < 0x3c && p[2] < 0x18 && p[3] >= 1 && p[3] <= 0x1f && p[4] >= 1 && p[4] <= 0xc) {
        ok = TRUE;
    }
    if (ok) {
        if (p[5] <= 0x63) {
            bad = TRUE;
        }
    }
    if (bad == 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_0209cffc(u8 *out, u8 *in, u8 a, u8 b, u8 c) {
    out[5] = in[2];
    out[4] = in[1];
    out[3] = in[0];
    out[2] = a;
    out[1] = b;
    out[0] = c;
}

extern "C" void func_0209cfe4() {
    func_0211d45c();
    func_0209d4c0(data_021d72ec);
}

extern "C" void func_0209cfc8(u32 x) {
    func_0209d4c0(data_021d72ec);
    if (x == 0) {
        func_0204605c();
    }
}

extern "C" void func_0209cfb8(u8 *out) {
    out[0] = data_021d72ec[2];
    out[1] = data_021d72ec[1];
}

extern "C" void func_0209cfa0(u8 *out) {
    out[0] = data_021d72ec[3];
    out[1] = data_021d72ec[4];
    out[2] = data_021d72ec[2];
    out[3] = data_021d72ec[1];
}

extern "C" void func_0209cf88(u8 *out) {
    out[0] = data_021d72ec[2];
    out[1] = data_021d72ec[1];
    out[2] = data_021d72ec[0];
    out[3] = 0;
}

extern "C" void func_0209cf5c(u8 *out) {
    s32 *const q = data_021d72ec + 4;
    *(u32 *)out = 0;
    *(u32 *)(out + 4) = 0;
    out[5] = data_021d72ec[0];
    out[4] = data_021d72ec[1];
    out[3] = data_021d72ec[2];
    out[2] = q[0];
    out[1] = q[1];
    out[0] = q[2];
}

extern "C" void func_0209cf28(u8 *out) {
    s32 a[4];
    s32 b[4];
    func_0209d5d4((Unk_0209d4c0_Date *)a, (Unk_0209d4c0_Time *)b);
    *(u32 *)out = 0;
    *(u32 *)(out + 4) = 0;
    out[5] = a[0];
    out[4] = a[1];
    out[3] = a[2];
    out[2] = b[0];
    out[1] = b[1];
    out[0] = b[2];
}

extern "C" void func_0209cf18(u8 *out) {
    s32 *const p = data_021d72ec + 4;
    out[0] = p[1];
    out[1] = p[0];
}

extern "C" u32 func_0209cf0c() {
    return data_021d72ec[0];
}

extern "C" u32 func_0209cf00() {
    return data_021d72ec[6];
}

extern "C" s32 func_0209cef4() {
    return data_021d72ec[3];
}

extern "C" s32 func_0209ceac(u32 a, u32 b, u32 c) {
    u8 l1[4];
    u8 l2[4];
    l1[2] = a;
    l1[1] = b;
    l1[0] = c;
    func_0209cf88(l2);
    s32 v = func_0209cd00(l1, l2);
    s32 m = (v < 0 ? -v : v) % 7;
    if (v < 0) {
        m = 7 - m;
    }
    s32 e = func_0209cef4();
    return (e + m) % 7;
}

extern "C" s32 func_0209ce68(u32 a, u32 b, s32 c, s32 d) {
    s32 r = -1;
    s32 x;
    s32 w = func_0209ceac(a, b, 1);
    s32 y;
    if (c < w) {
        y = c - w + 8;
    } else {
        y = c + 1 - w;
    }
    x = y + (d - 1) * 7;
    if (x < func_0209ce48(a, b)) {
        r = x;
    }
    return r;
}

extern "C" s32 func_0209ce48(u32 y, u32 m) {
    if ((y & 3) == 0) {
        return data_020d0660[m - 1];
    }
    return data_020d066c[m - 1];
}

extern "C" void func_0209cdf8(Unk_0209cdf8_T a, Unk_0209cdf8_T b, u16 *out) {
    Unk_0209cdf8_T t = a;
    t.unk_00 += b.unk_00;
    t.unk_01 += b.unk_01;
    while (t.unk_00 >= 0x3c) {
        t.unk_01++;
        t.unk_00 -= 0x3c;
    }
    Unk_0209cdf8_Norm(&t, out);
}

extern "C" s32 func_0209cdc0(u8 *a, u8 *b) {
    BOOL r = TRUE;
    u32 y = b[2];
    u32 x = a[2];
    if (x < y) {
        r = FALSE;
    } else if (x == y) {
        y = b[1];
        x = a[1];
        if (x < y) {
            r = FALSE;
        } else if (x == y) {
            x = a[0];
            y = b[0];
            if (x < y) {
                r = FALSE;
            }
        }
    }
    return r;
}

extern "C" s32 func_0209cd00(u8 *a, u8 *b) {
    s32 sign;
    s32 rem;
    s32 ex;
    s32 dy;
    s32 d0;
    s32 m0;
    s32 d1;
    s32 m1;
    s32 y0;
    s32 y1;
    s32 days;
    const u16 (*tbl)[13] = (const u16 (*)[13])data_020d06d0;
    sign = 1;
    if (func_0209cdc0(a, b)) {
        d0 = b[0];
        m0 = b[1];
        y0 = b[2];
        d1 = a[0];
        m1 = a[1];
        y1 = a[2];
    } else {
        d0 = a[0];
        m0 = a[1];
        y0 = a[2];
        d1 = b[0];
        m1 = b[1];
        y1 = b[2];
        sign = -1;
    }
    dy = y1 - y0;
    rem = dy & 3;
    y0 &= 3;
    ex = ((4 - y0) & 3) < rem ? 1 : 0;
    days = ex + ((dy >> 2) * 0x5b5 + rem * 0x16d);
    days += d1 - 1;
    days += tbl[(y1 & 3) == 0 ? 1 : 0][m1 - 1];
    days -= d0 - 1;
    days -= tbl[y0 == 0 ? 1 : 0][m0 - 1];
    return days * sign;
}

extern "C" s32 func_0209ccd0() {
    u8 t[4];
    func_0209cf18(t);
    u32 h = t[1];
    if (h < 5) {
        return 3;
    }
    if (h < 0xc) {
        return 0;
    }
    if (h < 0x11) {
        return 1;
    }
    return 2;
}

extern "C" s32 func_0209cc98(Unk_0209cc08_T *p) {
    u8 s[2];
    u16 v;
    s32 r;
    const u16 *pt;
    s32 i;
    r = 0;
    s[1] = p->unk_01;
    s[0] = p->unk_00;
    v = *(u16 *)s;
    pt = data_020d06a0;
    i = r;
    for (; i < 0x17; pt++, i++) {
        if (v <= *pt) {
            r = i;
            break;
        }
    }
    return r;
}

extern "C" s32 func_0209cc6c(u8 *p) {
    Unk_0209cc08_T t;
    t.unk_02 = p[5];
    t.unk_01 = p[4];
    t.unk_00 = p[3];
    return func_0209cc98(&t);
}

extern "C" s32 func_0209cc34(Unk_0209cc08_T *p) {
    u8 s[2];
    u16 v;
    s32 r;
    const u16 *pt;
    s32 i;
    r = 0;
    s[1] = p->unk_01;
    s[0] = p->unk_00;
    v = *(u16 *)s;
    pt = data_020d0678;
    i = r;
    for (; i < 0x13; pt++, i++) {
        if (v <= *pt) {
            r = i;
            break;
        }
    }
    return r;
}

extern "C" s32 func_0209cc08(u8 *p) {
    Unk_0209cc08_T t;
    t.unk_02 = p[5];
    t.unk_01 = p[4];
    t.unk_00 = p[3];
    return func_0209cc34(&t);
}

extern "C" u32 func_0209cbe0() {
    s32 *const a = data_021d72ec + 4;
    return a[1] | ((data_021d72ec[2] << 8) | ((a[2] << 24) | (a[0] << 16)));
}

extern "C" void func_0209cbd8(Unk_0209cbd8 *t) {
    t->unk_00 = 0;
    t->unk_04 = 0;
}

extern "C" s32 func_0209cb9c(void *unused, u64 *b) {
    Unk_0209cf28_T t;
    func_0209cf28((u8 *)&t);
    if (*(u64 *)&t < *b) {
        return func_0209d374((Unk_0209d0e4 *)&t, (Unk_0209d0e4 *)b);
    }
    return -func_0209d374((Unk_0209d0e4 *)b, (Unk_0209d0e4 *)&t);
}

extern "C" s32 func_0209cb74(void *unused, u8 *b) {
    Unk_0209cf28_T t;
    func_0209cf28((u8 *)&t);
    return (s16)(b[0] - *(u8 *)&t);
}

// Declarations for data defined further down (definition order sets the data layout)
extern const u8 data_020d066c[12];
extern const u8 data_020d0660[12];
extern const u16 data_020d0678[20];
extern const u16 data_020d06a0[24];
extern const u16 data_020d06d0[26];
extern s32 data_021d72ec[7];

const u8 data_020d066c[12] = { 0x1f, 0x1c, 0x1f, 0x1e, 0x1f, 0x1e, 0x1f, 0x1f, 0x1e, 0x1f, 0x1e, 0x1f };

const u8 data_020d0660[12] = { 0x1f, 0x1d, 0x1f, 0x1e, 0x1f, 0x1e, 0x1f, 0x1f, 0x1e, 0x1f, 0x1e, 0x1f };

const u16 data_020d0678[20] = {
    0x0104, 0x0217, 0x0218, 0x031f, 0x0408, 0x060f, 0x0716, 0x071f, 0x081f, 0x090f,
    0x091e, 0x0b0e, 0x0b18, 0x0b19, 0x0c09, 0x0c0a, 0x0c17, 0x0c1e, 0x0c1f, 0
};

const u16 data_020d06a0[24] = {
    0x0203, 0x0211, 0x0218, 0x031f, 0x0403, 0x0408, 0x0716, 0x090f, 0x091e, 0x0a04, 0x0a0a, 0x0a10,
    0x0a14, 0x0a19, 0x0a1e, 0x0b02, 0x0b09, 0x0b0d, 0x0b13, 0x0b19, 0x0c01, 0x0c0a, 0x0c1f, 0
};

const u16 data_020d06d0[26] = {
    0x0000, 0x001f, 0x003b, 0x005a, 0x0078, 0x0097, 0x00b5, 0x00d4, 0x00f3, 0x0111, 0x0130, 0x014e, 0x016d,
    0x0000, 0x001f, 0x003c, 0x005b, 0x0079, 0x0098, 0x00b6, 0x00d5, 0x00f4, 0x0112, 0x0131, 0x014f, 0x016e
};

// bss: 0x1c-byte object; data_021d72fc is data_021d72ec + 0x10
s32 data_021d72ec[7];
