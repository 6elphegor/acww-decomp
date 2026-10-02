// mwcc-flags: -str reuse
#include "types.h"

struct Unk_02063380 {
    u32 v[2];
    Unk_02063380(s32 a, s32 b);
    Unk_02063380(const Unk_02063380 &o) { v[0] = o.v[0]; v[1] = o.v[1]; }
    ~Unk_02063380();
};

struct Unk_020594dc_H {
    u16 v;
    Unk_020594dc_H(u16 x) : v(x) {}
};

struct Unk_0205a930_H {
    u16 unk_00;
    Unk_0205a930_H() {}
};

struct Unk_0205afdc {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u16 unk_10;
    u16 unk_12;
};

struct Unk_0205b320_Buf {
    u32 unk_00, unk_04, unk_08;
};

struct Unk_0205b524_T {
    u32 w0, w1;
};

struct Unk_0205b6e4 {
    u8 unk_00;
    u8 pad_01[3];
    void (*unk_04)();
    void (*unk_08)();
    s32 unk_0c;
    s32 unk_10;
    void (*unk_14)();
    Unk_0205b6e4 *unk_18;
};

class Unk_0205b448 {
public:
    u8 unk_00, unk_01, unk_02;
    Unk_0205b448();
    ~Unk_0205b448();
    u8 func_0205b448();
    u8 func_0205b444();
    u8 func_0205b440();
    void func_0205b460();
    void func_0205b2b4(s32 m);
    u8 func_0205b320(s32 m, s32 x0, s32 x1, s32 y0, s32 y1, s32 kind);
};

class Unk_02059d1c {
public:
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u16 unk_10;
    u16 unk_12;
    void func_02059d1c(void *grid);
    s32 func_02059db0(void *grid, u8 *f1, u8 *f2);
    s32 func_02059e94(void *grid, s32 *out);
    s32 func_02059f3c(void *grid, s32 *out1, s32 *out2);
    s32 func_0205a1d0(void *grid);
    s32 func_0205a31c(Unk_0205b448 *o);
    s32 func_0205a344(void *grid);
    void func_0205a3c0(void *grid);
    s32 func_0205a480(void *grid);
    s32 func_0205a580(void *grid);
    s32 func_0205a6bc(void *grid, u32 *out);
};

// call-site view of the callback tables (struct-returning virtuals)
class Unk_020dc0fc_Ops {
public:
    virtual void *vfunc_00(s32 i) = 0;
    virtual Unk_0205a930_H vfunc_04(s32 i) = 0;
    virtual Unk_0205a930_H vfunc_08(s32 i) = 0;
};

class Unk_020dc0fc {
public:
    Unk_020dc0fc();
    ~Unk_020dc0fc();
    virtual void *vfunc_00(s32 i) = 0;
    virtual void vfunc_04(s32 a, s32 key) = 0;
    virtual void vfunc_08(s32 a, s32 key) = 0;
};

class Unk_020dc09c : public Unk_020dc0fc {
public:
    Unk_020dc09c();
    ~Unk_020dc09c();
    virtual void *vfunc_00(s32 i);
    virtual void vfunc_04(s32 a, s32 key);
    virtual void vfunc_08(s32 a, s32 key);
};

class Unk_020dc0b0 : public Unk_020dc0fc {
public:
    Unk_020dc0b0();
    ~Unk_020dc0b0();
    virtual void *vfunc_00(s32 i);
    virtual void vfunc_04(s32 a, s32 key);
    virtual void vfunc_08(s32 a, s32 key);
};

// ---- data of other units ----
extern "C" {
extern const u16 data_020cab80[];
extern const u16 data_020cab84[];
extern u8 data_021dfd8c[];
extern u8 data_021d7350[];
extern u8 data_021d735c[];
extern u8 data_021ed300[];
extern u8 data_021e58a8[];
extern void *data_021f482c;
}

// ---- own data ----
extern const u32 data_020cab74[3];
const u32 data_020cab74[3] = { 0, 4, 3 };

u32 data_020dc07c[1] = { 0x1f };
u32 data_020dc080[1] = { 2 };
u32 data_020dc084[1] = { 2 };
u32 data_020dc088[1] = { 2 };
u32 data_020dc08c[1] = { 0x1f };
u32 data_020dc090[1] = { 0x1f };

extern "C" {
void func_02115fb4(void *p, s32 v, s32 n);
void func_02115ea8(u32 v, void *dst, u32 n);
}

class Unk_021c5f3c {
public:
    u32 w[0x4a];
    Unk_021c5f3c() { func_02115fb4(this, 0, 0x128); }
    ~Unk_021c5f3c();
};

class Unk_021c5e5c {
public:
    u8 b[0xe0];
    Unk_021c5e5c() {
        volatile u32 z = 0;
        func_02115ea8(z, this, 0xe0);
    }
    ~Unk_021c5e5c();
};

class Unk_021c6064 {
public:
    u32 w[0x4a];
    u32 extra;
    Unk_021c6064() {
        u32 i;
        for (i = 0; i < 0x4a; i++) w[i] = 0;
        extra = 0;
    }
    ~Unk_021c6064();
};

u8 data_021c5cc8;
u8 data_021c5ccc;
u8 data_021c5cd0;
void *data_021c5cd8;
u8 data_021c5dec[0x28];
Unk_021c5f3c data_021c5f3c;
Unk_021c5e5c data_021c5e5c;
Unk_021c6064 data_021c6064;


static inline BOOL Unk_0205a6bc_Range(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_0205a6bc_Max(s32 i, u32 v)
{
    if (i < 0x4a) {
        if (data_021c5f3c.w[i] < v) {
            data_021c5f3c.w[i] = v;
            return TRUE;
        }
    }
    return FALSE;
}

static inline u32 Unk_0205a930_Get(s32 i, u32 dflt)
{
    if (i < 0x4a) return data_021c5f3c.w[i];
    return dflt;
}

static inline void Unk_0205a930_Clear(void *dst, u32 n)
{
    volatile u32 z = 0;
    func_02115ea8(z, dst, n);
}


// ---- callees ----
extern "C" {
void *func_0207bf38(void *tbl, s32 id);
void *func_0207fae4(void *p);
void func_0203ce38(s32 slot, s32 v);
void func_0203ce24(s32 slot, s32 v);
s32 func_02063b8c(s32 n);
void _ZN12Unk_02002fc813func_0200301cEPvjj(s32 a, void *b, s32 c, s32 d);
void func_02003098(s32 a);
s32 func_020966b0();
void _ZN12Unk_020dd458C1Ev(void *obj);
void _ZN12Unk_020dd458D1Ev(void *obj);
void func_02065920(void *obj, u8 *b, void *fmt, u8 *c, s32 a, s32 b2, s32 c2);
void _ZN12Unk_0206555413func_02065588Etj(void *obj, u32 v, s32 f);
s32 func_02096aac(void *obj);
s32 func_02096a50(void *obj, s32 v);
void *func_0209750c();
s32 _ZN12Unk_02097ff413func_02098044Ej(void *p, s32 v);
void *_ZN12Unk_0209865c13func_0209888cEv(void *p);
void func_020656dc(void *obj, u8 *b, const void *fmt, void *s, void *s2, void *p);
s32 _ZN12Unk_02097ff413func_0209801cEj(void *p, s32 v);
s32 _ZN12Unk_0204e2f013func_0204e474Eii(void *grid, s32 x, s32 y);
s32 _ZN12Unk_0209da4413func_0209e170Ej(void *tbl, s32 v);
void _ZN12Unk_0209da4413func_0209e148Ej(void *tbl, s32 v);
void *func_02097868(void *tbl, s32 i);
s32 _ZN12Unk_0209865c13func_02098a48Ev(void *p);
s32 func_02096b24(s32 i);
void _ZN12Unk_020e3efcC1Ev(void *o);
void _ZN12Unk_020e3efcD1Ev(void *o);
s32 func_020b3270(void *o, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0203ce4c(s32 slot, void *o);
void _ZN12Unk_020dd324C1Ei(void *o, s32 a);
void _ZN12Unk_020dd324D1Ev(void *o);
void _ZN12Unk_020e2a48C1Ev(void *o);
void _ZN12Unk_020e2a48D1Ev(void *o);
void func_020b35ac(void *o, u8 *b, const void *fmt);
s16 *func_0209c37c(s32 a, s32 b);
u16 *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
BOOL func_02052f84(s32 v);
BOOL func_02053194(s32 v);
s32 func_0204b274(u16 *p);
BOOL func_0204b300(u16 *p);
s32 func_020531d4(u16 *p);
s32 func_020530f0(u16 *p);
s32 func_0205304c(u16 *p);
void func_02115fb4(void *p, s32 v, s32 n);
s32 func_01ffc5a4(s32 a, s32 b);
s32 _ZN12Unk_0206022c13func_020604c4Ev(void *p);
void func_02034038(s32 v);
void func_0203402c(u32 v);
void func_02115ea8(u32 v, void *dst, u32 n);
s32 func_0205329c(s32 v);
s32 func_020618b8(s32 v);
s32 func_02053018(s32 v);
s32 func_020532f0(s32 v);
s32 func_02053358(s32 v);
s32 func_02053324(s32 v);
s32 func_020532d0(u16 *p);
u32 func_02052b90(u16 *p);
u32 func_02052b50(u32 v);
s32 func_020618f0(s32 v);
s32 func_02061fe8(u16 *p);
void *func_0204d0a4(s32 a, void *heap);
void func_0204d040(void *heap);
void *func_0204d528(s32 i);
void *_ZN12Unk_0206022c13func_0206052cEi(void *p, s32 a);
u16 *_ZN12Unk_02060a9013func_02060850EPi(void *h, s32 i);
u16 *_ZN12Unk_02060a9013func_02060834EPi(void *h, s32 i);
s32 func_0207bf60(void *p, s32 k);
s32 func_0207e3a0();
s32 func_0207e3ac();
u32 func_0212741c(u32 v);
void func_020524a8(Unk_0205b320_Buf *b, void *cell);
u32 func_0205248c(Unk_0205b320_Buf *b);
s16 *func_0205242c(Unk_0205b320_Buf *b, u32 i);
void func_020524a4(Unk_0205b320_Buf *b);
void func_0209d498(Unk_0205b524_T *t);
void func_0209d164(Unk_0205b524_T *t, s32 v);
s32 func_0209ceac(s32 a, s32 b, s32 c);
void func_0209d2c0(Unk_0205b524_T *t, s32 v);
s32 func_0209d3d0(Unk_0205b524_T *a, Unk_0205b524_T *b, s32 n);
Unk_020594dc_H func_02062f94(Unk_02063380 o, s32 a, s32 b, s32 c, s32 d, s32 e);
Unk_020594dc_H func_02062f44(Unk_02063380 o);
s32 func_0209788c(void *p, s32 q);
}

// ---- own functions ----
extern "C" {
BOOL func_02059900(const void *r0, u8 r1, s32 r2, s32 r3, u16 *p, s32 v);
BOOL func_02059a30(s32 *a, s32 *b, s32 *c, s32 *d, void *grid);
BOOL func_02059c14(void *self, s32 a, s32 b, s32 c, s32 n);
void func_02059adc(void *self, s32 n);
u32 func_0205b130(u32 *p);
s32 func_0205b55c(u8 *out);
void func_0205b524(u8 *out);
s32 func_0205a930(Unk_02059d1c *p, u16 *flags, s32 *pa, s32 *pb, s32 *pc, Unk_020dc0fc_Ops *ops, s32 count, s32 base, u8 flag);
void func_0205b650(u8 *out);
u8 func_0205b4e0();
u8 func_0205b4ec();
u8 func_0205b4f8();
}

extern "C" BOOL func_0205b690(Unk_0205b6e4 *t, s32 a, void (*b)()) {
    t->unk_14 = b;
    t->unk_10 = a;
    t->unk_00 = 2;
    return TRUE;
}

Unk_021c5f3c::~Unk_021c5f3c() {}

Unk_021c5e5c::~Unk_021c5e5c() {}

Unk_021c6064::~Unk_021c6064() {}

extern "C" void func_0205b680() {}

extern "C" void func_0205b67c() {}

extern "C" void func_0205b650(u8 *out) {
    Unk_0205b524_T t;
    t.w0 = 0;
    t.w1 = 0;
    func_0209d498(&t);
    out[0] = ((u8 *)&t)[3];
    out[1] = ((u8 *)&t)[4];
    out[2] = ((u8 *)&t)[5];
    out[3] = 0;
}

extern "C" void func_0205b648(u8 *out) {
    func_0205b650(out);
}

extern "C" s32 func_0205b55c(u8 *out) {
    struct {
        Unk_0205b524_T a, b, c;
    } l;
#define LB(o) (((u8 *)&l)[o])
    l.a.w0 = 0;
    l.a.w1 = 0;
    func_0209d498(&l.a);
    if (LB(2) < 6) {
        LB(2) = 7;
        func_0209d164(&l.a, 1);
    }
    l.b.w0 = 0;
    l.b.w1 = 0;
    func_0209d498(&l.b);
    func_0209d164(&l.b, func_0209ceac(LB(0xd), LB(0xc), LB(0xb)));
    if (LB(0xd) > LB(5)) func_0209d2c0(&l.b, 7);
    l.c.w0 = 0;
    l.c.w1 = 0;
    LB(0x15) = out[2];
    LB(0x14) = out[1];
    LB(0x13) = out[0];
    LB(0x12) = 7;
    LB(0x11) = 0;
    LB(0x10) = 0;
    if (func_0209d3d0(&l.a, &l.c, 0x38) == -1) {
        out[2] = LB(5);
        out[1] = LB(4);
        out[0] = LB(3);
        LB(0x15) = out[2];
        LB(0x14) = out[1];
        LB(0x13) = out[0];
        LB(0x12) = 7;
        LB(0x11) = 0;
        LB(0x10) = 0;
        return FALSE;
    }
    if (func_0209d3d0(&l.c, &l.b, 0x38) == -1) {
        s32 t = func_0209d3d0(&l.b, &l.a, 0x38);
        if (t == -1) goto yes;
        t = func_0209d3d0(&l.b, &l.a, 0x38);
        if (t == 0) {
        yes:
            return TRUE;
        }
    }
    return FALSE;
#undef LB
}

extern "C" void func_0205b524(u8 *out) {
    Unk_0205b524_T t;
    t.w0 = 0;
    t.w1 = 0;
    func_0209d498(&t);
    if (((u8 *)&t)[2] < 6) func_0209d164(&t, 1);
    out[0] = ((u8 *)&t)[3];
    out[1] = ((u8 *)&t)[4];
    out[2] = ((u8 *)&t)[5];
}

extern "C" u32 func_0205b504() {
    u32 a = func_0205b4e0();
    u32 b = func_0205b4f8();
    u32 c = func_0205b4ec();
    return a + (b + c);
}

extern "C" u8 func_0205b4f8() { return data_021c5ccc; }

extern "C" u8 func_0205b4ec() { return data_021c5cd0; }

extern "C" u8 func_0205b4e0() { return data_021c5cc8; }

extern "C" void func_0205b470() {
    u32 i;
    data_021c5cc8 = 0;
    data_021c5cd0 = 0;
    data_021c5ccc = 0;
    for (i = 0; i < 5; i++) {
        Unk_0205b448 s;
        void *m = func_0204d528(i);
        if (m != NULL) {
            s.func_0205b2b4((s32)m);
            data_021c5ccc += s.func_0205b448();
            data_021c5cd0 += s.func_0205b444();
            data_021c5cc8 += s.func_0205b440();
        }
    }
}

void Unk_0205b448::func_0205b460() {
    unk_02 = 0;
    unk_01 = unk_02;
    unk_00 = unk_01;
}

Unk_0205b448::Unk_0205b448() {
    func_0205b460();
}

Unk_0205b448::~Unk_0205b448() {}

u8 Unk_0205b448::func_0205b448() { return unk_00; }

u8 Unk_0205b448::func_0205b444() { return unk_01; }

u8 Unk_0205b448::func_0205b440() { return unk_02; }

u8 Unk_0205b448::func_0205b320(s32 m, s32 x0, s32 x1, volatile s32 y0, volatile s32 y1, volatile s32 kind) {
    u32 cnt = 0;
    u8 layer = 0;
    s32 f;
    u32 n, i;
    BOOL ok;
    s32 nx;
    Unk_0205b320_Buf buf;
    s32 y, x;
    s32 ya = y0;
    s32 yb = y1;
    do {
        for (y = ya; (u32)y <= (u32)yb; y++) {
            x = x0;
            if ((u32)x <= (u32)x1) {
                goto L_test;
            L_loop:
                {
                s32 hx = x >> 4;
                s32 hy = y >> 4;
                u16 *cell = (u16 *)func_0204ebd8((void *)m, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (cell != NULL && func_0204b2d4(cell)) {
                    f = func_0204b25c(cell);
                    func_020524a8(&buf, cell);
                    n = func_0205248c(&buf);
                    ok = TRUE;
                    for (i = 0; i < n; i++) {
                        nx = x + func_0205242c(&buf, i)[0];
                        s32 ny = y + func_0205242c(&buf, i)[1];
                        if (nx < x0 || nx > x1 || ny < y0 || ny > y1) {
                            ok = FALSE;
                            break;
                        }
                    }
                    if (ok) {
                        if (func_02053358(f) == kind) cnt++;
                        if (func_02053324(f) == kind) cnt++;
                    }
                    func_020524a4(&buf);
                }
            }
                x++;
            L_test:
                if ((u32)x <= (u32)x1) goto L_loop;
            }
        }
        layer++;
    } while (layer < 2);
    if (cnt < 0x100) return (u8)cnt;
    return 0xff;
}

void Unk_0205b448::func_0205b2b4(s32 m) {
    s32 v0, v1, v2, v3;
    func_02059a30(&v0, &v1, &v2, &v3, (void *)m);
    unk_00 = func_0205b320(m, v0, v0 + 1, v2, v3, 1);
    unk_01 = func_0205b320(m, v0, v1, v3 - 1, v3, 4);
    unk_02 = func_0205b320(m, v1 - 1, v1, v2, v3, 2);
}

extern "C" Unk_020dc0fc::Unk_020dc0fc() {}

extern "C" Unk_020dc0fc::~Unk_020dc0fc() {}

extern "C" Unk_020dc0b0::Unk_020dc0b0() {}

extern "C" Unk_020dc0b0::~Unk_020dc0b0() {}

extern "C" void *Unk_020dc0b0::vfunc_00(s32 i) {
    return func_0204d528(i);
}

extern "C" void Unk_020dc0b0::vfunc_04(s32 a, s32 key) {
    void *h = _ZN12Unk_0206022c13func_0206052cEi(data_021e58a8, key);
    *(u16 *)this = *_ZN12Unk_02060a9013func_02060850EPi(h, 0);
}

extern "C" void Unk_020dc0b0::vfunc_08(s32 a, s32 key) {
    void *h = _ZN12Unk_0206022c13func_0206052cEi(data_021e58a8, key);
    *(u16 *)this = *_ZN12Unk_02060a9013func_02060834EPi(h, 0);
}

extern "C" Unk_020dc09c::Unk_020dc09c() {}

extern "C" Unk_020dc09c::~Unk_020dc09c() {}

extern "C" void *Unk_020dc09c::vfunc_00(s32 i) {
    return data_021c5cd8;
}

extern "C" void Unk_020dc09c::vfunc_04(s32 a, s32 key) {
    u16 v;
    if (func_0207bf60(data_021dfd8c, key) != 0) {
        u32 t = func_0207e3ac();
        if (t < 0x44) v = (u16)(t + 0x1100);
        else v = 0x1100;
        *(u16 *)this = v;
    } else {
        *(u16 *)this = 0x1100;
    }
}

extern "C" void Unk_020dc09c::vfunc_08(s32 a, s32 key) {
    u16 v;
    if (func_0207bf60(data_021dfd8c, key) != 0) {
        u32 t = func_0207e3a0();
        if (t < 0x44) v = (u16)(t + 0x1144);
        else v = 0x1144;
        *(u16 *)this = v;
    } else {
        *(u16 *)this = 0x1144;
    }
}

#pragma thumb off
extern "C" u32 func_0205b130(u32 *p) {
    u32 s = 0;
    u32 i;
    for (i = 0; i < 0xde; i += 4) {
        s += func_0212741c(*(u32 *)((u8 *)p + i));
    }
    return s * 0x1e61;
}
#pragma thumb reset

extern "C" void func_0205b124(Unk_0205afdc *p) {
    p->unk_10 = 0xfff1;
    p->unk_12 = 0xfff1;
}

extern "C" void func_0205b120() {}

extern "C" u32 func_0205afdc(Unk_0205afdc *p, s32 *out) {
    void *m = func_0204d528(0);
    s32 x = 3;
    u32 flags = 0;
    if (m != NULL) {
        u32 i;
        void *h;
        u8 fl[2];
        u32 cnt;
        s32 v8, vc, v0;
        for (i = 0; i < 0x4a; i++) data_021c6064.w[i] = 0;
        data_021c6064.extra = 0;
        func_02115fb4(&data_021c5f3c, 0, 0x128);
        func_02059a30((s32 *)p, &p->unk_08, &p->unk_04, &p->unk_0c, m);
        p->unk_10 = 0x1100;
        p->unk_12 = 0x1144;
        h = _ZN12Unk_0206022c13func_0206052cEi(data_021e58a8, 0);
        if (h != NULL) {
            p->unk_10 = *_ZN12Unk_02060a9013func_02060850EPi(h, 0);
            p->unk_12 = *_ZN12Unk_02060a9013func_02060834EPi(h, 0);
        }
        fl[0] = 0;
        fl[1] = 0;
        ((Unk_02059d1c *)p)->func_02059db0(m, &fl[0], &fl[1]);
        ((Unk_02059d1c *)p)->func_0205a3c0(m);
        cnt = 0;
        v8 = ((Unk_02059d1c *)p)->func_0205a6bc(m, &cnt);
        vc = ((Unk_02059d1c *)p)->func_0205a580(m);
        v0 = ((Unk_02059d1c *)p)->func_0205a480(m);
        if (fl[1] != 0) {
            x--;
            flags |= 1;
        }
        if (fl[0] != 0) {
            x--;
            flags |= 2;
        }
        if ((data_021c6064.extra & 0xf) == 0xf) {
            x++;
            flags |= 4;
        }
        if (vc != 0 || v0 != 0) {
            flags |= 8;
            x++;
        }
        if (vc == 0 || v0 == 0) {
            flags |= 0x40;
        }
        if (v8 != 0x4a) {
            x += 2;
            flags |= 0x10;
        } else if (cnt >= 5) {
            flags |= 0x20;
        }
    }
    if (out != NULL) *out = x;
    return flags;
}

extern "C" void func_0205afa0(s32 a) {
    s32 v0;
    Unk_020dc0b0 ops;
    s32 v1, v2, v3;
    func_0205a930((Unk_02059d1c *)a, (u16 *)&v0, &v1, &v2, &v3, (Unk_020dc0fc_Ops *)&ops, 5, 0, 1);
}

extern "C" s32 func_0205af28(s32 a, s32 b, s32 *c, s32 *d, s32 *e, s32 *f) {
    s32 r;
    if (data_021c5cd8 == NULL) {
        data_021c5cd8 = func_0204d0a4(b, data_021f482c);
    }
    Unk_020dc09c ops;
    r = func_0205a930((Unk_02059d1c *)a, (u16 *)c, d, e, (s32 *)f, (Unk_020dc0fc_Ops *)&ops, 1, b, 0);
    if (data_021c5cd8 != NULL) {
        func_0204d040(data_021f482c);
        data_021c5cd8 = NULL;
    }
    return r;
}

extern "C" s32 func_0205a930(Unk_02059d1c *p, u16 *flags, s32 *pa, s32 *pb, s32 *pc, Unk_020dc0fc_Ops *ops, s32 count, s32 base, u8 flag)
{
    s32 total;
    s32 sel;
    s32 s10, s14, s18, s1c, s20, s24, s28, s2c, s30;
    s32 j;
    s32 idxA, cntA, cntB;
    u32 i;
    s32 pick, n, pick2, n2, t, x, kind, idx;
    u32 zero, zero2;
    s32 r7;
    u8 f[2];
    u32 k;
    *flags = 0;
    *pa = 0;
    *pb = 0;
    *pc = 0;
    func_02115fb4(&data_021c5f3c, 0, 0x128);
    Unk_0205a930_Clear(&data_021c5e5c, 0xe0);
    for (k = 0; k < 0x4a; k++) data_021c6064.w[k] = 0;
    data_021c6064.extra = 0;
    total = 0;
    s10 = 0; s14 = 0; s18 = 0; s1c = 0; s20 = 0; s24 = 0; s28 = 0; s2c = 0; s30 = 0; j = 0;
    goto test0;
loop0:
    {
        idx = base + j;
        void *m = ops->vfunc_00(idx);
        p->unk_10 = ops->vfunc_04(idx).unk_00;
        p->unk_12 = ops->vfunc_08(idx).unk_00;
        func_02059a30((s32 *)p, (s32 *)&p->unk_08, (s32 *)&p->unk_04, (s32 *)&p->unk_0c, m);
        Unk_0205b448 obj;
        obj.func_0205b2b4((s32)m);
        p->func_0205a6bc(m, 0);
        p->func_0205a580(m);
        p->func_0205a480(m);
        p->func_02059d1c(m);
        p->func_0205a3c0(m);
        s10 += p->func_0205a344(m);
        s14 += p->func_0205a31c(&obj);
        s18 += p->func_0205a1d0(m);
        s1c += p->func_02059f3c(m, pb, pc);
        s20 += p->func_02059e94(m, pa);
        f[0] = 0;
        f[1] = 0;
        s24 -= p->func_02059db0(m, &f[0], &f[1]);
        if (f[0] != 0) s2c = 1;
        if (f[1] != 0) s30 = 1;
    }
    j++;
test0:
    if (j < count) goto loop0;
    total += s10;
    total += s14;
    total += s18;
    total += s1c;
    total += s20;
    total += s24;
    sel = 0; idxA = 0; cntA = 0; cntB = 0;
    for (i = 0; i < 0x4a; i++) {
        u32 v = Unk_0205a930_Get(i, sel);
        if (v != 0) {
            switch (func_020618f0(i)) {
            case 0:
                cntA++;
                break;
            case 1:
                if (v > 0xbb8) cntB++;
                break;
            case 2:
                s28 += v;
                break;
            }
        }
        total += v;
    }
    if (cntA != 0) {
        pick = func_02063b8c(cntA);
        n = 0;
        for (i = 0; i < 0x4a; i++) {
            u32 v;
            zero = 0;
            v = Unk_0205a930_Get(i, zero);
            if (v != 0 && func_020618f0(i) == 0) {
                if (n == pick) {
                    sel = i;
                    break;
                }
                n = n + 1;
            }
        }
    }
    if (cntB != 0) {
        pick2 = func_02063b8c(cntB);
        n2 = 0;
        for (i = 0; i < 0x4a; i++) {
            u32 v;
            zero2 = 0;
            v = Unk_0205a930_Get(i, zero2);
            if (v != 0 && func_020618f0(i) == 1) {
                if (n2 == pick2) {
                    idxA = i;
                    break;
                }
                n2 = n2 + 1;
            }
        }
    }
    r7 = 0;
    if ((data_021c6064.extra & 0xf) == 0xf) {
        BOOL found = FALSE;
        for (i = 0; i < 0x4a; i++) {
            if ((data_021c6064.w[i] & 0xf) == 0xf) {
                found = TRUE;
                break;
            }
        }
        if (found) r7 += 0x1388;
        else r7 += 0x3e8;
        total += r7;
    }
    t = func_0205b130((u32 *)&data_021c5e5c);
    total += t;
    if (total < 0) total = 0;
    if (flags) {
        if (cntA != 0) {
            u32 v = Unk_0205a930_Get(sel, 0);
            if (v == 0x7530) *flags |= 1;
            else if (v == 0x61a8) *flags |= 2;
            else *flags |= 4;
        }
        if (cntB != 0) *flags |= 8;
        if (s28 >= 0xbb8) *flags |= 0x10;
        if (r7 > 0) *flags |= 0x20;
        if (s14 >= 0x1f4) *flags |= 0x40;
        if (s18 >= 0x7d0) *flags |= 0x80;
        if (s1c >= 0x7d0) *flags |= 0x100;
        if (s20 >= 0xbb8) *flags |= 0x200;
        if ((u32)t >= 0x1b58) *flags |= 0x400;
    }
    if (flag != 0) {
        if (func_0205b55c(data_021ed300) == 0) {
            if (*func_0209c37c(0, 0x22) == 0) goto end;
        }
        {
            x = _ZN12Unk_0206022c13func_020604c4Ev(data_021e58a8);
            u16 b;
            s32 nb;
            u32 q;
            kind = 0;
            b = 0;
            if (cntA != 0) {
                u32 v = Unk_0205a930_Get(sel, kind);
                if (v == 0x7530) b |= 1;
                else if (v == 0x61a8) b |= 2;
                else b |= 4;
            }
            if (cntB != 0) b |= 8;
            if (s28 >= 0x1388) b |= 0x10;
            if (r7 > 0) b |= 0x20;
            if (s14 >= 0x7d0) b |= 0x40;
            if (s18 >= 0x1770) b |= 0x80;
            if (s1c >= 0x1770) b |= 0x100;
            if (s20 >= 0xc80) b |= 0x200;
            if ((u32)t >= 0x1b58) b |= 0x400;
            if (s2c != 0) b |= 0x1000;
            if (s30 != 0) b |= 0x800;
            nb = 0;
            for (q = 0; q < 13; q++) {
                if (b & (1 << q)) nb++;
            }
            func_02034038(total);
            func_0203402c(b);
            {
                BOOL ok;
                if (nb != 0) {
                    if (func_02063b8c(2) == 0) ok = TRUE;
                    else ok = FALSE;
                } else {
                    ok = TRUE;
                }
                if (ok) {
                    if (total == 0) kind = 0;
                    else if (total <= 0x4e1f) kind = x + 1;
                    else if (total <= 0x1116f) kind = 8;
                    else if (total <= 0x1869f) kind = 9;
                    else kind = 10;
                } else {
                    s32 pk = func_02063b8c(nb);
                    nb = 0;
                    for (q = 0; q < 13; q++) {
                        if (b & (1 << q)) {
                            if (pk == nb) {
                                kind = q;
                                kind = q + 0xb;
                                break;
                            }
                            nb++;
                        }
                    }
                }
            }
            if ((u32)(kind - 0xb) > 2) sel = idxA;
            if (func_02059c14(p, kind, total, sel, *pa) != 0) {
                func_02059adc(p, total);
                func_0205b524(data_021ed300);
            }
        }
    }
end:
    return total;
}

s32 Unk_02059d1c::func_0205a6bc(void *grid, u32 *out)
{
    u32 max;
    u16 acc[0x94 / 2];
    u8 layer;
    u32 y, x;
    s32 i;
    u32 j;
    func_02115fb4(acc, 0, 0x94);
    max = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    s32 id = func_020532d0(p);
                    if (func_020618f0(id) == 0) {
                        u32 b = func_02052b90(p);
                        acc[id] |= 1 << b;
                    }
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
    if (Unk_0205a6bc_Range(&unk_10, 0x1100, 0x1143)) {
        s32 k = func_02061fe8(&unk_10);
        if (func_020618f0(k) == 0) acc[k] |= data_020cab80[0];
    }
    if (Unk_0205a6bc_Range(&unk_12, 0x1144, 0x1187)) {
        s32 k = func_02061fe8(&unk_12);
        if (func_020618f0(k) == 0) acc[k] |= data_020cab84[0];
    }
    for (j = 0; j < 0x4a; j++) {
        if (func_020618f0(func_02061fe8(&unk_12)) == 0) {
            u32 cnt = 0;
            u32 k = 0;
            s32 w = acc[j];
            for (; k < 12; k++) {
                if ((w >> k) & 1) cnt++;
            }
            if (cnt > max) max = cnt;
        }
    }
    if (out) *out = max;
    for (i = 0; (u32)i < 0x4a; i++) {
        if (func_020618f0(i) == 0 && acc[i] == 0xfff) {
            if (Unk_0205a6bc_Max(i, 30000)) return i;
        }
    }
    for (i = 0; (u32)i < 0x4a; i++) {
        if (func_020618f0(i) == 0) {
            u32 w = acc[i];
            if ((w & 0x3ff) == 0x3ff) {
                if ((w & 0x400) != 0 || (w & 0x800) != 0) {
                    if (Unk_0205a6bc_Max(i, 25000)) return 0x4a;
                }
            }
        }
    }
    for (i = 0; (u32)i < 0x4a; i++) {
        if (func_020618f0(i) == 0 && acc[i] == 0x3ff) {
            if (Unk_0205a6bc_Max(i, 20000)) return 0x4a;
        }
    }
    return 0x4a;
}

s32 Unk_02059d1c::func_0205a580(void *grid)
{
    u16 acc[0x94 / 2];
    u8 layer;
    u32 y, x;
    u32 i;
    s32 res;
    s32 lo, hi;
    volatile u32 zeroA, zeroB;
    func_02115fb4(acc, 0, 0x94);
    lo = func_02061fe8(&unk_10);
    hi = func_02061fe8(&unk_12);
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    s32 id = func_020532d0(p);
                    if (func_020618f0(id) == 1) {
                        u32 b = func_02052b90(p);
                        acc[id] |= 1 << b;
                    }
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
    res = 0;
    i = 0;
    zeroA = 0;
    zeroB = 0;
    for (; i < 0x4a; i++) {
        if (func_020618f0(i) == 1) {
            u32 bits = zeroA;
            u32 k;
            u32 n = func_02052b50(i);
            for (k = zeroB; k < n; k++) {
                bits = (u16)(bits | (1 << k));
            }
            if (acc[i] >= bits) {
                if (i == lo && i == hi) {
                    if ((s32)i < 0x4a) {
                        u32 v = (n + 1) * 3000;
                        if (data_021c5f3c.w[i] < v) data_021c5f3c.w[i] = v;
                    }
                    res = 1;
                }
            } else {
                if (i == lo && i == hi) {
                    if ((s32)i < 0x4a) {
                        if (data_021c5f3c.w[i] < 3000) data_021c5f3c.w[i] = 3000;
                    }
                }
            }
        }
    }
    return res;
}

s32 Unk_02059d1c::func_0205a480(void *grid)
{
    u16 acc[0x94 / 2];
    u8 layer;
    u32 y, x;
    u32 i;
    s32 res;
    func_02115fb4(acc, 0, 0x94);
    res = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    s32 id = func_020532d0(p);
                    if (func_020618f0(id) == 2) {
                        u32 b = func_02052b90(p);
                        acc[id] |= 1 << b;
                    }
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
    for (i = 0; i < 0x4a; i++) {
        if (func_020618f0(i) == 2) {
            u32 bits = 0;
            u32 k;
            u32 n = func_02052b50(i);
            for (k = 0; k < n; k++) {
                bits = (u16)(bits | (1 << k));
            }
            if (acc[i] >= bits) {
                res = 1;
                if ((s32)i < 0x4a) {
                    u32 v = n * 1000;
                    if (data_021c5f3c.w[i] < v) data_021c5f3c.w[i] = v;
                }
            }
        }
    }
    return res;
}

void Unk_02059d1c::func_0205a3c0(void *grid)
{
    u8 layer;
    u32 y, x;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    s32 id = func_0204b25c(p);
                    s32 kind = func_02053018(id);
                    s32 idx = func_020532f0(id);
                    s32 bit = 0;
                    if (kind == 1) bit = 1;
                    else if (kind == 2) bit = 2;
                    else if (kind == 3) bit = 4;
                    else if (kind == 4) bit = 8;
                    *(volatile u32 *)&data_021c6064.w[idx] = bit | *(volatile u32 *)&data_021c6064.w[idx];
                    data_021c6064.extra |= bit;
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
}

s32 Unk_02059d1c::func_0205a344(void *grid)
{
    u8 layer;
    u32 y, x;
    s32 total = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    total += func_020618b8(func_0205329c(func_0204b25c(p)));
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
    return total;
}

s32 Unk_02059d1c::func_0205a31c(Unk_0205b448 *o)
{
    s32 a = o->func_0205b440();
    s32 b = o->func_0205b448();
    return (a + (b + o->func_0205b444())) * 100;
}

s32 Unk_02059d1c::func_0205a1d0(void *grid)
{
    u32 n;
    u8 layer;
    u32 y, x, k, i, j;
    u8 counts[13];
    u16 ids[24];
    s32 cnt;
    func_02115fb4(counts, 0, 13);
    for (i = 0; i < 24; i++) {
        ids[i] = 0xffff;
    }
    n = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            s32 hx, hy;
            u16 *p;
            x = unk_00;
            if (x <= unk_08) {
                goto test0;
            loop0:
                hx = (s32)x >> 4;
                hy = (s32)y >> 4;
                p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    s32 id = func_0204b25c(p);
                    s32 t, u;
                    for (k = 0; k < 24; k++) {
                        u16 v = ids[k];
                        if (id == v) break;
                        if (v == 0xffff) {
                            ids[k] = id;
                            break;
                        }
                    }
                    t = func_02053358(id);
                    u = func_02053324(id);
                    counts[t]++;
                    counts[u]++;
                    n++;
                }
                x++;
            test0:
                if (x <= unk_08) goto loop0;
            }
        }
    }
    if (n >= 10) {
        cnt = 0;
        for (k = 0; k < 24; k++) {
            if (ids[k] != 0xffff) cnt++;
        }
        j = 0;
        for (; j < 13; j++) {
            if (j != 0) {
                s32 q = func_01ffc5a4(counts[j] << 12, n << 13);
                if (q >= 0xe66) return cnt * 600;
                if (q >= 0xb33) return cnt * 200;
            }
        }
    }
    return 0;
}

s32 Unk_02059d1c::func_02059f3c(void *grid, s32 *out1, s32 *out2)
{
    u8 a_[3];
    u8 b_[3];
    u16 arr_[24];
    u32 y;
    u32 x;
    s32 total;
    s32 cnt;
    u8 layer;
    u8 layer2;
    u16 *p3;
    u16 *p4;
    s32 n;
    s32 k;
    u32 i;
    s32 v;
    u32 j;
    func_02115fb4(a_, 0, 3);
    func_02115fb4(b_, 0, 3);
    for (i = 0; i < 24; i++) arr_[i] = 0xffff;
    total = 0;
    for (i = 0; i < 24; i++) arr_[i] = 0xffff;
    cnt = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            x = unk_00;
            if (x <= unk_08) {
            goto test3;
        loop3:
            {
                s32 hx = (s32)x >> 4;
                s32 hy = (s32)y >> 4;
                p3 = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p3 && func_0204b2d4(p3)) {
                    v = func_0204b25c(p3);
                    for (j = 0; j < 24; j++) {
                        u16 *q = &arr_[j];
                        if (v == arr_[j]) break;
                        if (arr_[j] == 0xffff) { *q = v; break; }
                    }
                    k = func_020530f0(p3);
                    a_[k] = a_[k] + 1;
                    cnt++;
                }
            }
            x++;
        test3:
            if (x <= unk_08) goto loop3;
            }
        }
    }
    if ((u32)cnt >= 10) {
        n = 0;
        for (i = 0; i < 24; i++) if (arr_[i] != 0xffff) n++;
        for (i = 0; i < 3; i++) {
            if (i != 0) {
                s32 r = func_01ffc5a4(a_[i] << 12, cnt << 12);
                if (r >= 0xe66) { *out1 = i; total += n * 300; }
                else if (r >= 0xb33) { *out1 = i; total += n * 100; }
            }
        }
    }
    for (i = 0; i < 24; i++) arr_[i] = 0xffff;
    cnt = 0;
    for (layer2 = 0; layer2 < 2; layer2++) {
        for (y = unk_04; y <= unk_0c; y++) {
            x = unk_00;
            if (x <= unk_08) {
            goto test4;
        loop4:
            {
                s32 hx = (s32)x >> 4;
                s32 hy = (s32)y >> 4;
                p4 = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer2);
                if (p4 && func_0204b2d4(p4)) {
                    v = func_0204b25c(p4);
                    for (j = 0; j < 24; j++) {
                        u16 *q = &arr_[j];
                        if (v == arr_[j]) break;
                        if (arr_[j] == 0xffff) { *q = v; break; }
                    }
                    k = func_0205304c(p4);
                    b_[k] = b_[k] + 1;
                    cnt++;
                }
            }
            x++;
        test4:
            if (x <= unk_08) goto loop4;
            }
        }
    }
    if ((u32)cnt >= 10) {
        u32 ii;
        s32 nn = 0;
        for (i = 0; i < 24; i++) if (arr_[i] != 0xffff) nn++;
        for (ii = 0; ii < 3; ii++) {
            if (ii != 0) {
                s32 r = func_01ffc5a4(b_[ii] << 12, cnt << 12);
                if (r >= 0xe66) { *out2 = ii; total += nn * 300; }
                else if (r >= 0xb33) { *out2 = ii; total += nn * 100; }
            }
        }
    }
    return total;
}

s32 Unk_02059d1c::func_02059e94(void *grid, s32 *out)
{
    u8 counts[5];
    u8 layer;
    u32 y, x;
    s32 total;
    u32 i;
    func_02115fb4(counts, 0, 5);
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            x = unk_00;
            if (x <= unk_08) {
            goto test2;
        loop2:
            {
                s32 hx = (s32)x >> 4;
                s32 hy = (s32)y >> 4;
                u16 *p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    s32 k = func_020531d4(p);
                    counts[k] = counts[k] + 1;
                }
            }
            x++;
        test2:
            if (x <= unk_08) goto loop2;
            }
        }
    }
    total = 0;
    for (i = 0; i < 5; i++) {
        if (i != 4) {
            u8 *q = &counts[i];
            if (counts[i] >= 8) {
                *out = i;
                total += *q * 400;
            }
        }
    }
    return total;
}

s32 Unk_02059d1c::func_02059db0(void *grid, u8 *f1, u8 *f2)
{
    u8 layer;
    u32 y, x;
    s32 total = 0;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            x = unk_00;
            if (x <= unk_08) {
            goto test1;
        loop1:
            {
                s32 hx = (s32)x >> 4;
                s32 hy = (s32)y >> 4;
                u16 *p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p) {
                    if (func_0204b2d4(p)) {
                        if (func_02053194(func_0204b25c(p))) {
                            s32 r = func_0204b274(p);
                            if (x == unk_00 && r == 3) { *f1 = 1; total += 100; }
                            if (x == unk_08 && r == 1) { *f1 = 1; total += 100; }
                            if (y == unk_04 && r == 2) { *f1 = 1; total += 100; }
                            if (y == unk_0c && r == 0) { *f1 = 1; total += 100; }
                        }
                    } else if (func_0204b300(p)) {
                        *f2 = 1;
                        total += 1;
                    }
                }
            }
            x++;
        test1:
            if (x <= unk_08) goto loop1;
            }
        }
    }
    return total;
}

void Unk_02059d1c::func_02059d1c(void *grid)
{
    u8 layer;
    u32 y, x;
    for (layer = 0; layer < 2; layer++) {
        for (y = unk_04; y <= unk_0c; y++) {
            x = unk_00;
            if (x <= unk_08) {
            goto test0;
        loop0:
            {
                s32 hx = (s32)x >> 4;
                s32 hy = (s32)y >> 4;
                u16 *p = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), layer);
                if (p && func_0204b2d4(p)) {
                    s32 v = func_0204b25c(p);
                    if (func_02052f84(v)) {
                        data_021c5e5c.b[v >> 3] |= 1 << (v & 7);
                    }
                }
            }
            x++;
        test0:
            if (x <= unk_08) goto loop0;
            }
        }
    }
}

extern "C" BOOL func_02059c14(void *self, s32 a, s32 b, s32 c, s32 n)
{
    u32 objA[0xb];
    u32 objB[9];
    u32 objC[0xd];
    u32 objD[0x3e];
    u8 by[2];
    s32 i;
    s32 z = 0;
    _ZN12Unk_020e3efcC1Ev(objA);
    if (func_020b3270(objA, b, 10, 1, 0, 0)) {
        func_0203ce4c(1, objA);
        _ZN12Unk_020dd324C1Ei(objB, c);
        func_0203ce4c(2, objB);
        if (n < 4) {
            _ZN12Unk_020e2a48C1Ev(objC);
            by[1] = n;
            func_020b35ac(objC, &by[1], "st_furniture_letter");
            func_0203ce4c(3, objC);
            _ZN12Unk_020e2a48D1Ev(objC);
        }
        for (i = 0; i < 4; i++) {
            void *p = func_02097868(data_021d735c, i);
            if (p && _ZN12Unk_0209865c13func_02098a48Ev(p)) {
                if (func_0209c37c(z, 0x22)[0] != 0 || _ZN12Unk_02097ff413func_02098044Ej(p, 0xe)) {
                    _ZN12Unk_020dd458C1Ev(objD);
                    by[0] = a;
                    func_020656dc(objD, &by[0], "ev_happyroom", data_020dc088, data_020dc07c, _ZN12Unk_0209865c13func_0209888cEv(p));
                    func_02096aac(objD);
                    _ZN12Unk_020dd458D1Ev(objD);
                }
            }
        }
        _ZN12Unk_020dd324D1Ev(objB);
        _ZN12Unk_020e3efcD1Ev(objA);
        return TRUE;
    }
    _ZN12Unk_020e3efcD1Ev(objA);
    return FALSE;
}

extern "C" void func_02059adc(void *self, s32 n)
{
    s32 id;
    s32 t;
    s32 off;
    id = -1;
    t = 1;
    off = 0xfff1;
    if (_ZN12Unk_0209da4413func_0209e170Ej(data_021d7350, 1) == 0) {
        if (n >= 0x11170) { id = 0x18; t = 1; off = 0x3854; }
    } else if (_ZN12Unk_0209da4413func_0209e170Ej(data_021d7350, 2) == 0) {
        if (n >= 0x186a0) { id = 0x19; t = 2; off = 0x3858; }
    } else if (_ZN12Unk_0209da4413func_0209e170Ej(data_021d7350, 0xb) == 0) {
        if (n >= 0x249f0) { id = 0x1a; t = 0xb; off = 0x385c; }
    }
    if (id != -1) {
        s32 i;
        s32 zero = 0;
        for (i = 0; i < 4; i++) {
            void *p = func_02097868(data_021d735c, i);
            u32 obj[0x3e];
            u8 b;
            if (p && _ZN12Unk_0209865c13func_02098a48Ev(p) && _ZN12Unk_02097ff413func_02098044Ej(p, 0xe) && !func_02096b24(i)) {
                _ZN12Unk_020dd458C1Ev(obj);
                b = id;
                func_020656dc(obj, &b, "ev_happyroom", data_020dc084, data_020dc08c, _ZN12Unk_0209865c13func_0209888cEv(p));
                _ZN12Unk_0206555413func_02065588Etj(obj, off, 1);
                if (func_02096aac(obj)) {
                    _ZN12Unk_0209da4413func_0209e148Ej(data_021d7350, t);
                    _ZN12Unk_020dd458D1Ev(obj);
                    break;
                }
                if (func_02096a50(obj, zero)) {
                    _ZN12Unk_0209da4413func_0209e148Ej(data_021d7350, t);
                    _ZN12Unk_020dd458D1Ev(obj);
                    break;
                }
                _ZN12Unk_020dd458D1Ev(obj);
            }
        }
    }
}

extern "C" BOOL func_02059a30(s32 *a, s32 *b, s32 *c, s32 *d, void *grid)
{
    BOOL f0, f1, f2, f3;
    s32 y, x;
    *c = 16;
    *a = *c;
    *d = -16;
    *b = *d;
    f0 = FALSE; f1 = FALSE; f2 = FALSE; f3 = FALSE;
    for (y = 0; y < 16; y++) {
        for (x = 0; x < 16; x++) {
            if (_ZN12Unk_0204e2f013func_0204e474Eii(grid, x, y)) {
                if (x <= *a) { *a = x; f0 = TRUE; }
                if (x >= *b) { *b = x; f1 = TRUE; }
                if (y <= *c) { *c = y; f2 = TRUE; }
                if (y >= *d) { *d = y; f3 = TRUE; }
            }
        }
    }
    f0 = f0 & f1;
    f2 = f2 & f0;
    f3 = f3 & f2;
    if (f3) return TRUE;
    return FALSE;
}

extern "C" BOOL func_020599b0()
{
    u32 obj[0x3d];
    u8 b;
    void *p = func_0209750c();
    if (p && _ZN12Unk_02097ff413func_02098044Ej(p, 3) && !_ZN12Unk_02097ff413func_02098044Ej(p, 0xe)) {
        _ZN12Unk_020dd458C1Ev(obj);
        b = 0x1b;
        func_020656dc(obj, &b, "ev_happyroom", data_020dc080, data_020dc090, _ZN12Unk_0209865c13func_0209888cEv(p));
        if (func_02096aac(obj)) {
            _ZN12Unk_02097ff413func_0209801cEj(p, 0xe);
            _ZN12Unk_020dd458D1Ev(obj);
            return TRUE;
        }
        _ZN12Unk_020dd458D1Ev(obj);
    }
    return FALSE;
}

extern "C" BOOL func_02059900(const void *r0, u8 r1, s32 r2, s32 r3, u16 *p, s32 v)
{
    if (func_0207bf38(data_021dfd8c, r3)) {
        u8 buf[2];
        u32 obj[0x3d];
        _ZN12Unk_02002fc813func_0200301cEPvjj(r3, data_021c5dec, 0x28, (s32)r0);
        buf[0] = r1;
        func_02003098(r3);
        buf[1] = func_020966b0();
        if (v != -1) buf[1] = v;
        _ZN12Unk_020dd458C1Ev(obj);
        func_02065920(obj, buf, data_021c5dec, &buf[1], r3, r2, 1);
        if (p) _ZN12Unk_0206555413func_02065588Etj(obj, *p, 1);
        if (func_02096aac(obj)) {
            _ZN12Unk_020dd458D1Ev(obj);
            return TRUE;
        }
        if (func_02096a50(obj, 0)) {
            _ZN12Unk_020dd458D1Ev(obj);
            return TRUE;
        }
        _ZN12Unk_020dd458D1Ev(obj);
    }
    return FALSE;
}

extern "C" BOOL func_0205989c(s32 a, s32 b)
{
    void *r = func_0207bf38(data_021dfd8c, b);
    if (r) {
        func_0203ce38(2, *(u8 *)func_0207fae4(r));
        func_0203ce24(3, ((u8 *)func_0207fae4(r))[1]);
        return func_02059900("ev_nbirth", func_02063b8c(3), a, b, 0, 0x1a);
    }
    return FALSE;
}

extern "C" s32 func_020594dc(u32 a, s32 b, s32 c)
{
    if (a < 1) {
        return 0;
    }
    if (a > 5) {
        return 0;
    }
    Unk_020594dc_H res(0xfff1);
    func_02063b8c(3);
    func_02063b8c(3);
    switch (a) {
    case 1:
        res = func_02062f94(Unk_02063380(0, 0), 0, 0, 1, 1, 0);
        break;
    case 2: {
        static Unk_02063380 t[3] = { Unk_02063380(0, 1), Unk_02063380(0, 2), Unk_02063380(0, 3) };
        res = func_02062f94(t[func_02063b8c(3)], 0, 0, 1, 1, 0);
        break;
    }
    case 3: {
        static Unk_02063380 t[3] = { Unk_02063380(0, 0), Unk_02063380(4, 0), Unk_02063380(3, 0) };
        res = func_02062f94(t[func_02063b8c(3)], 0, 0, 1, 1, 0);
        break;
    }
    case 4: {
        static Unk_02063380 t[9] = { Unk_02063380(0, 1), Unk_02063380(0, 2), Unk_02063380(0, 3),
                                     Unk_02063380(4, 1), Unk_02063380(4, 2), Unk_02063380(4, 3),
                                     Unk_02063380(3, 1), Unk_02063380(3, 2), Unk_02063380(3, 3) };
        res = func_02062f94(t[func_02063b8c(9)], 0, 0, 1, 1, 0);
        break;
    }
    case 0:
    default: {
        s32 r6 = func_0209788c(data_021d735c, b);
        u32 r4 = data_020cab74[func_02063b8c(3)];
        Unk_02063380 o(r4, 0);
        s32 x;
        res = func_02062f94(o, r6, 0, 1, 1, (s32)&x);
        if (res.v == 0xfff1) {
            res = func_02062f44(Unk_02063380(r4, x));
        }
        break;
    }
    }
    return func_02059900("re_q10", func_02063b8c(3), b, c, (u16 *)&res, -1);
}

