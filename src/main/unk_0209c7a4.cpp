#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0209c82c_V {
    s32 x, y, z;
};

// 0x24-byte state object at data_021d7290
struct Unk_0209c82c {
    /* 0x00 */ u8 unk_00;
    /* 0x04 */ Unk_0209c82c_V unk_04;
    /* 0x10 */ Unk_0209c82c_V unk_10;
    /* 0x1c */ u16 unk_1c;
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 unk_1f;
    /* 0x20 */ u8 unk_20;
};

// one-byte bit set (4 bits)
struct Unk_0209c980 {
    u8 unk_00;
};

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

union Unk_0209cc34_S {
    struct { u8 unk_00, unk_01; };
    u16 unk_h;
};

struct Unk_0209c7a4_T {
    u8 unk_00, unk_01, unk_02, unk_03;
};

extern "C" {
void __cxa_vec_cleanup(void *, u32, u32, void (*)());
extern u8 data_020d064c[];
extern u8 data_021d7290[];
extern u8 data_021d72b4[];
extern u8 data_021f4880[];
extern u32 data_021d72e8;
extern u32 *data_021f482c;
extern u16 data_020d0650[];
extern u32 data_021d72ec[];
extern u32 data_021d72fc[];
extern u16 data_020d0678[];
extern u16 data_020d06a0[];
extern u8 data_020d0660[];
extern u8 data_020d066c[];
extern u16 data_020d06d0[];

s32 func_020b4934();
s32 func_020b4c64(s32, void *, void *, void *, void *, void *, void *, void *, s32, s32);
void func_020a4394();
void func_020b27f4();
void func_02037374();
void func_0205352c();
void func_020621b4();
void func_02071320();
void func_020713e8();
void func_0204cfa4(u32);
void func_0204dc1c(u32);
void func_0204d454(u32);
void func_020739f8();
void func_020a5cb8();
void func_020b2828();
void func_02037394();
void func_0205353c();
void func_020621c4();
void func_020713f0();
void func_0204cfd0(u32);
void func_0204dc54(u32);
void func_0204d498(u32);
void func_02073dd8(u32);
void func_020a5cbc();
void func_02084f48();
void func_02038ef0();
void func_020349e0();
void func_02050a54();
void func_020a43ec();
s32 func_0202e878(s32, s32, s32);
void func_0202e880(u32, s32, s32, s32);
s32 func_0209d374(void *, void *);
void func_0204605c();
void func_0211d45c();
s32 func_0209d4c0(void *);
void func_0209d5d4(void *, void *);
void func_0209d0e4(u8 *, s32);
void func_0209d0a4(u8 *, u32);
void func_0209d124(u8 *, u32);
void func_0209d164(u8 *, u32);
void func_0209d1d0(u8 *, u32);
void func_0209d214(u8 *, u32);
}

extern "C" {
u32 func_0209c7ec(u32 v);
s32 func_0209c7a4(void *p);
void func_0209c80c();
void func_0209c82c(Unk_0209c82c *t, Unk_0209c82c_V *v);
void func_0209c83c(Unk_0209c82c *t, u32 v);
void func_0209c840(Unk_0209c82c *t, Unk_0209c82c_V *v);
void func_0209c850(Unk_0209c82c *t, u32 v);
void func_0209c854(Unk_0209c82c *t, u32 v);
void func_0209c85c(Unk_0209c82c *t, u32 v);
void func_0209c860(Unk_0209c82c *t, u32 v);
void *func_0209c864(Unk_0209c82c *t);
void *func_0209c868(Unk_0209c82c *t);
u32 func_0209c86c(Unk_0209c82c *t);
u32 func_0209c874(Unk_0209c82c *t);
void func_0209c878(Unk_0209c82c *t);
void func_0209c8c0();
Unk_0209c82c *func_0209c8c4(Unk_0209c82c *t);
s32 func_0209c8d4(Unk_0209c980 *t, u32 i, u32 b);
void func_0209c8f0(Unk_0209c980 *t, u32 i, u32 b);
void func_0209c908(Unk_0209c980 *t, u32 i, u32 b);
void func_0209c920(Unk_0209c980 *t);
s32 func_0209c93c(Unk_0209c980 *t, u32 b);
void func_0209c958();
s32 func_0209c95c(Unk_0209c980 *t);
u32 func_0209c980(Unk_0209c980 *t, u32 i);
void func_0209c994(Unk_0209c980 *t, u32 i);
void func_0209c9ac(Unk_0209c980 *t, u32 i);
void func_0209c9c4(Unk_0209c980 *t);
Unk_0209c980 *func_0209c9cc(Unk_0209c980 *t);
Unk_0209c980 *func_0209c9e8(Unk_0209c980 *t);
void func_0209cbd8(Unk_0209cbd8 *t);
s32 func_0209cc34(Unk_0209cc08_T *t);
s32 func_0209cc98(Unk_0209cc08_T *t);
s32 func_0209cdc0(u8 *a, u8 *b);
void func_0209cf18(u8 *out);
void func_0209cf28(u8 *out);
void func_0209cf88(u8 *out);
s32 func_0209cef4();
s32 func_0209cd00(u8 *a, u8 *b);
s32 func_0209ce48(u32 y, u32 m);
s32 func_0209ceac(u32 a, u32 b, u32 c);
}

extern "C" {

s32 func_0209c7a4(void *p) {
    Unk_0209c7a4_T t;
    s32 b, a;
    u32 c[3];
    if (func_020b4c64(func_020b4934(), p, &t, c, &a, &b, &t.unk_02, &t.unk_01, 0, 0)) {
        return func_0209c7ec(t.unk_00);
    }
    return 0;
}

u32 func_0209c7ec(u32 v) {
    s32 i;
    for (i = 0; (u32)i < 2; i++) {
        if (v == data_020d064c[i * 2]) {
            return TRUE;
        }
    }
    return FALSE;
}

void func_0209c80c() {
    func_0209c878((Unk_0209c82c *)data_021d7290);
    func_0209c920((Unk_0209c980 *)data_021d72b4);
}

void func_0209c82c(Unk_0209c82c *t, Unk_0209c82c_V *v) {
    t->unk_10.x = v->x;
    t->unk_10.y = v->y;
    t->unk_10.z = v->z;
}

void func_0209c83c(Unk_0209c82c *t, u32 v) {
    t->unk_1c = v;
}

void func_0209c840(Unk_0209c82c *t, Unk_0209c82c_V *v) {
    t->unk_04.x = v->x;
    t->unk_04.y = v->y;
    t->unk_04.z = v->z;
}

void func_0209c850(Unk_0209c82c *t, u32 v) {
    t->unk_00 = v;
}

void func_0209c854(Unk_0209c82c *t, u32 v) {
    t->unk_20 = v;
}

void func_0209c85c(Unk_0209c82c *t, u32 v) {
    t->unk_1e = v;
}

void func_0209c860(Unk_0209c82c *t, u32 v) {
    t->unk_1f = v;
}

void *func_0209c864(Unk_0209c82c *t) {
    return &t->unk_10;
}

void *func_0209c868(Unk_0209c82c *t) {
    return &t->unk_04;
}

u32 func_0209c86c(Unk_0209c82c *t) {
    return t->unk_20;
}

u32 func_0209c874(Unk_0209c82c *t) {
    return t->unk_1f;
}

void func_0209c878(Unk_0209c82c *t) {
    func_0209c860(t, 2);
    func_0209c85c(t, -1);
    func_0209c854(t, 0);
    func_0209c850(t, 0);
    func_0209c840(t, (Unk_0209c82c_V *)data_021f4880);
    func_0209c83c(t, 0);
    func_0209c82c(t, (Unk_0209c82c_V *)data_021f4880);
}

void func_0209c8c0() {}

Unk_0209c82c *func_0209c8c4(Unk_0209c82c *t) {
    func_0209c878(t);
    return t;
}

s32 func_0209c8d4(Unk_0209c980 *t, u32 i, u32 b) {
    if (i < 0x33) {
        return func_0209c93c(t + i, b);
    }
    return 0;
}

void func_0209c8f0(Unk_0209c980 *t, u32 i, u32 b) {
    if (i < 0x33) {
        func_0209c994(t + i, b);
    }
}

void func_0209c908(Unk_0209c980 *t, u32 i, u32 b) {
    if (i < 0x33) {
        func_0209c9ac(t + i, b);
    }
}

void func_0209c920(Unk_0209c980 *t) {
    u32 i;
    for (i = 0; i < 0x33; i++) {
        func_0209c9c4(t + i);
    }
}

s32 func_0209c93c(Unk_0209c980 *t, u32 b) {
    Unk_0209c980 c;
    c.unk_00 = t->unk_00;
    func_0209c9ac(&c, b);
    return func_0209c95c(&c);
}

void func_0209c958() {}

s32 func_0209c95c(Unk_0209c980 *t) {
    s32 n = 0;
    u32 i = n;
    for (; i < 4; i++) {
        if (func_0209c980(t, i)) {
            n++;
        }
    }
    return n;
}

u32 func_0209c980(Unk_0209c980 *t, u32 i) {
    return ((t->unk_00 >> (i & 3)) & 1) != 0 ? TRUE : FALSE;
}

void func_0209c994(Unk_0209c980 *t, u32 i) {
    t->unk_00 &= ~(1 << (i & 3));
}

void func_0209c9ac(Unk_0209c980 *t, u32 i) {
    t->unk_00 |= 1 << (i & 3);
}

void func_0209c9c4(Unk_0209c980 *t) {
    t->unk_00 = 0;
}

Unk_0209c980 *func_0209c9cc(Unk_0209c980 *t) {
    __cxa_vec_cleanup(t, 0x33, 1, func_0209c958);
    return t;
}

Unk_0209c980 *func_0209c9e8(Unk_0209c980 *t) {
    func_0209c9c4(t);
    return t;
}
}

class Unk_020e2304 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual ~Unk_020e2304();
};

Unk_020e2304::~Unk_020e2304() {}

// func_0209c9f8 = D1, func_0209ca18 = D0

BOOL Unk_020e2304::vfunc_24() {
    return TRUE;
}

BOOL Unk_020e2304::vfunc_18() {
    func_020a4394();
    return TRUE;
}

BOOL Unk_020e2304::vfunc_0c() {
    func_020b27f4();
    func_02037374();
    func_0205352c();
    func_020621b4();
    func_02071320();
    func_020713e8();
    func_0204cfa4((u32)data_021f482c);
    func_0204dc1c((u32)data_021f482c);
    func_0204d454((u32)data_021f482c);
    func_020739f8();
    func_020a5cb8();
    return TRUE;
}

BOOL Unk_020e2304::vfunc_00() {
    data_021d72e8 = (u32)this;
    func_020b2828();
    func_02037394();
    func_0205353c();
    func_020621c4();
    func_02071320();
    func_020713f0();
    func_0204cfd0((u32)data_021f482c);
    func_0204dc54((u32)data_021f482c);
    func_0204d498((u32)data_021f482c);
    func_02073dd8((u32)data_021f482c);
    func_020a5cbc();
    func_02084f48();
    return TRUE;
}

extern "C" {

void func_0209caf4() {
    func_02038ef0();
    func_020349e0();
    func_02050a54();
}

void func_0209cb0c() {
    s32 r;
    s32 i;
    func_020a43ec();
    r = func_0202e878(0, 0, 1);
    for (i = 0; i < 7; i++) {
        func_0202e880(data_020d0650[i], r, 0, 0);
    }
}

Unk_020e2304 *func_0209cb48() {
    return new Unk_020e2304();
}

s32 func_0209cb74(void *unused, u8 *b) {
    Unk_0209cf28_T t;
    func_0209cf28((u8 *)&t);
    return (s16)(b[0] - *(u8 *)&t);
}

s32 func_0209cb9c(void *unused, u64 *b) {
    Unk_0209cf28_T t;
    func_0209cf28((u8 *)&t);
    if (*(u64 *)&t < *b) {
        return func_0209d374(&t, b);
    }
    return -func_0209d374(b, &t);
}

void func_0209cbd8(Unk_0209cbd8 *t) {
    t->unk_00 = 0;
    t->unk_04 = 0;
}

u32 func_0209cbe0() {
    u32 *const a = data_021d72fc;
    return a[1] | ((data_021d72ec[2] << 8) | ((a[2] << 24) | (a[0] << 16)));
}

s32 func_0209cc08(u8 *p) {
    Unk_0209cc08_T t;
    t.unk_02 = p[5];
    t.unk_01 = p[4];
    t.unk_00 = p[3];
    return func_0209cc34(&t);
}

s32 func_0209cc34(Unk_0209cc08_T *p) {
    u8 s[2];
    u16 v;
    s32 r;
    u16 *pt;
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

s32 func_0209cc6c(u8 *p) {
    Unk_0209cc08_T t;
    t.unk_02 = p[5];
    t.unk_01 = p[4];
    t.unk_00 = p[3];
    return func_0209cc98(&t);
}

s32 func_0209cc98(Unk_0209cc08_T *p) {
    u8 s[2];
    u16 v;
    s32 r;
    u16 *pt;
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

s32 func_0209ccd0() {
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
}

static inline void Unk_0209cdf8_Norm(Unk_0209cdf8_T *p, u16 *out) {
    while (p->unk_01 >= 0x18) {
        p->unk_01 -= 0x18;
    }
    *out = p->unk_h;
}

extern "C" {

s32 func_0209cd00(u8 *a, u8 *b) {
    s32 sign = 1;
    u32 d0;
    u32 m0;
    u32 y0;
    u32 d1;
    u32 m1;
    u32 y1;
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
    s32 dy = y1 - y0;
    s32 rem = dy & 3;
    y0 &= 3;
    s32 ex = ((4 - y0) & 3) < rem ? 1 : 0;
    s32 days = (dy >> 2) * 0x5b5;
    days += rem * 0x16d;
    days = ex + days;
    days += d1 - 1;
    u32 leap1 = (y1 & 3) == 0 ? 1 : 0;
    days += *(u16 *)((u8 *)data_020d06d0 + leap1 * 0x1a + (m1 - 1) * 2);
    days = days - (d0 - 1);
    days -= *(u16 *)((u8 *)data_020d06d0 + (y0 == 0 ? 1 : 0) * 0x1a + (m0 - 1) * 2);
    return days * sign;
}

s32 func_0209cdc0(u8 *a, u8 *b) {
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

void func_0209cdf8(Unk_0209cdf8_T a, Unk_0209cdf8_T b, u16 *out) {
    Unk_0209cdf8_T t = a;
    t.unk_00 += b.unk_00;
    t.unk_01 += b.unk_01;
    while (t.unk_00 >= 0x3c) {
        t.unk_01++;
        t.unk_00 -= 0x3c;
    }
    Unk_0209cdf8_Norm(&t, out);
}

s32 func_0209ce48(u32 y, u32 m) {
    if ((y & 3) == 0) {
        return data_020d0660[m - 1];
    }
    return data_020d066c[m - 1];
}

s32 func_0209ce68(u32 a, u32 b, s32 c, s32 d) {
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

s32 func_0209ceac(u32 a, u32 b, u32 c) {
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

s32 func_0209cef4() {
    return data_021d72ec[3];
}

u32 func_0209cf00() {
    return data_021d72ec[6];
}

u32 func_0209cf0c() {
    return data_021d72ec[0];
}

void func_0209cf18(u8 *out) {
    u32 *const p = data_021d72fc;
    out[0] = p[1];
    out[1] = p[0];
}

void func_0209cf28(u8 *out) {
    s32 a[4];
    s32 b[4];
    func_0209d5d4(a, b);
    *(u32 *)out = 0;
    *(u32 *)(out + 4) = 0;
    out[5] = a[0];
    out[4] = a[1];
    out[3] = a[2];
    out[2] = b[0];
    out[1] = b[1];
    out[0] = b[2];
}

void func_0209cf5c(u8 *out) {
    u32 *const q = data_021d72fc;
    *(u32 *)out = 0;
    *(u32 *)(out + 4) = 0;
    out[5] = data_021d72ec[0];
    out[4] = data_021d72ec[1];
    out[3] = data_021d72ec[2];
    out[2] = q[0];
    out[1] = q[1];
    out[0] = q[2];
}

void func_0209cf88(u8 *out) {
    out[0] = data_021d72ec[2];
    out[1] = data_021d72ec[1];
    out[2] = data_021d72ec[0];
    out[3] = 0;
}

void func_0209cfa0(u8 *out) {
    out[0] = data_021d72ec[3];
    out[1] = data_021d72ec[4];
    out[2] = data_021d72ec[2];
    out[3] = data_021d72ec[1];
}

void func_0209cfb8(u8 *out) {
    out[0] = data_021d72ec[2];
    out[1] = data_021d72ec[1];
}

void func_0209cfc8(u32 x) {
    func_0209d4c0(data_021d72ec);
    if (x == 0) {
        func_0204605c();
    }
}

void func_0209cfe4() {
    func_0211d45c();
    func_0209d4c0(data_021d72ec);
}

void func_0209cffc(u8 *out, u8 *in, u8 a, u8 b, u8 c) {
    out[5] = in[2];
    out[4] = in[1];
    out[3] = in[0];
    out[2] = a;
    out[1] = b;
    out[0] = c;
}

BOOL func_0209d020(u8 *p) {
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

void func_0209d064(u8 *t, u8 *p) {
    func_0209d0a4(t, p[0]);
    func_0209d0e4(t, p[1]);
    func_0209d124(t, p[2]);
    func_0209d164(t, p[3]);
    func_0209d1d0(t, p[4]);
    func_0209d214(t, p[5]);
}

void func_0209d0a4(u8 *t, u32 sub) {
    s32 r5 = t[0] - sub;
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
    t[0] = r5;
}
}
