#include "types.h"

// Base of the two callback tables (vtables 0x020dc09c / 0x020dc0b0)
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

extern "C" {
extern void *data_021c5cd8;
extern void *data_021f482c;
extern u32 data_021c6064[];
extern u32 data_021c6164[];
extern u8 data_021c5f3c[];
extern u8 data_021e58a8[];
extern u8 data_021dfd8c[];
extern u8 data_021c5cc8;
extern u8 data_021c5ccc;
extern u8 data_021c5cd0;
extern Unk_0205b6e4 *data_021c6190;
extern Unk_0205b6e4 *data_021c6194;
extern void *data_021c621c;
extern void *data_021c6198;
extern u32 data_020c8b9c;
extern u32 data_020c8ba0;

void *func_0204d0a4(s32 a, void *heap);
void func_0204d040(void *heap);
void *func_0204d528(s32 i);
s32 func_0205a930(s32 a, s32 *b, s32 *c, s32 *d, s32 *e, void *ops, s32 f, s32 g, s32 h);
void func_02059a30(void *p, s32 *a, s32 *b, s32 *c, void *m);
void func_02059db0(void *p, void *m, u8 *a, u8 *b);
void func_0205a3c0(void *p, void *m);
s32 func_0205a6bc(void *p, void *m, u32 *o);
s32 func_0205a580(void *p, void *m);
s32 func_0205a480(void *p, void *m);
void func_02115fb4(void *p, u32 v, u32 n);
void *func_0206052c(void *p, s32 a);
u16 *func_02060850(void *h, s32 i);
u16 *func_02060834(void *h, s32 i);
s32 func_0207bf60(void *p, s32 k);
s32 func_0207e3a0();
s32 func_0207e3ac();
u32 func_0212741c(u32 v);
void *func_0204ebd8(void *grid, s32 hx, s32 hy, s32 lx, s32 ly, u32 layer);
BOOL func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
void func_020524a8(Unk_0205b320_Buf *b, void *cell);
u32 func_0205248c(Unk_0205b320_Buf *b);
s16 *func_0205242c(Unk_0205b320_Buf *b, u32 i);
void func_020524a4(Unk_0205b320_Buf *b);
s32 func_02053358(s32 v);
s32 func_02053324(s32 v);
void func_0209d498(Unk_0205b524_T *t);
void func_0209d164(Unk_0205b524_T *t, s32 v);
s32 func_0209ceac(s32 a, s32 b, s32 c);
void func_0209d2c0(Unk_0205b524_T *t, s32 v);
s32 func_0209d3d0(Unk_0205b524_T *a, Unk_0205b524_T *b, s32 n);
void func_020e8c88(void *p);
void *func_020e8da0(s32 a, s32 b, s32 c, s32 d);

s32 func_0205af28(s32 a, s32 b, s32 *c, s32 *d, s32 *e, s32 *f);
u32 func_0205afdc(Unk_0205afdc *p, s32 *out);
void func_0205b650(u8 *out);
void func_0205b79c();

s32 func_0205af28(s32 a, s32 b, s32 *c, s32 *d, s32 *e, s32 *f) {
    s32 r;
    if (data_021c5cd8 == NULL) {
        data_021c5cd8 = func_0204d0a4(b, data_021f482c);
    }
    Unk_020dc09c ops;
    r = func_0205a930(a, c, d, e, (s32 *)f, &ops, 1, b, 0);
    if (data_021c5cd8 != NULL) {
        func_0204d040(data_021f482c);
        data_021c5cd8 = NULL;
    }
    return r;
}

void func_0205afa0(s32 a) {
    s32 v0;
    Unk_020dc0b0 ops;
    s32 v1, v2, v3;
    func_0205a930(a, &v0, &v1, &v2, &v3, &ops, 5, 0, 1);
}

u32 func_0205afdc(Unk_0205afdc *p, s32 *out) {
    void *m = func_0204d528(0);
    s32 x = 3;
    u32 flags = 0;
    if (m != NULL) {
        u32 i;
        void *h;
        u8 fl[2];
        u32 cnt;
        s32 v8, vc, v0;
        for (i = 0; i < 0x4a; i++) data_021c6064[i] = 0;
        data_021c6164[10] = 0;
        func_02115fb4(data_021c5f3c, 0, 0x128);
        func_02059a30(p, &p->unk_08, &p->unk_04, &p->unk_0c, m);
        p->unk_10 = 0x1100;
        p->unk_12 = 0x1144;
        h = func_0206052c(data_021e58a8, 0);
        if (h != NULL) {
            p->unk_10 = *func_02060850(h, 0);
            p->unk_12 = *func_02060834(h, 0);
        }
        fl[0] = 0;
        fl[1] = 0;
        func_02059db0(p, m, &fl[0], &fl[1]);
        func_0205a3c0(p, m);
        cnt = 0;
        v8 = func_0205a6bc(p, m, &cnt);
        vc = func_0205a580(p, m);
        v0 = func_0205a480(p, m);
        if (fl[1] != 0) {
            x--;
            flags |= 1;
        }
        if (fl[0] != 0) {
            x--;
            flags |= 2;
        }
        if ((data_021c6164[10] & 0xf) == 0xf) {
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

void func_0205b124(Unk_0205afdc *p) {
    p->unk_10 = 0xfff1;
    p->unk_12 = 0xfff1;
}

#pragma thumb off
u32 func_0205b130(u32 *p) {
    u32 s = 0;
    u32 i;
    for (i = 0; i < 0xde; i += 4) {
        s += func_0212741c(*(u32 *)((u8 *)p + i));
    }
    return s * 0x1e61;
}
#pragma thumb reset

void func_0205b120() {}

void *Unk_020dc09c::vfunc_00(s32 i) {
    return data_021c5cd8;
}
void Unk_020dc09c::vfunc_04(s32 a, s32 key) {
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
void Unk_020dc09c::vfunc_08(s32 a, s32 key) {
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

Unk_020dc09c::~Unk_020dc09c() {}
Unk_020dc09c::Unk_020dc09c() {}

void *Unk_020dc0b0::vfunc_00(s32 i) {
    return func_0204d528(i);
}
void Unk_020dc0b0::vfunc_04(s32 a, s32 key) {
    void *h = func_0206052c(data_021e58a8, key);
    *(u16 *)this = *func_02060850(h, 0);
}
void Unk_020dc0b0::vfunc_08(s32 a, s32 key) {
    void *h = func_0206052c(data_021e58a8, key);
    *(u16 *)this = *func_02060834(h, 0);
}
Unk_020dc0b0::~Unk_020dc0b0() {}
Unk_020dc0b0::Unk_020dc0b0() {}

Unk_020dc0fc::~Unk_020dc0fc() {}
Unk_020dc0fc::Unk_020dc0fc() {}
}


void Unk_0205b448::func_0205b2b4(s32 m) {
    s32 v0, v1, v2, v3;
    func_02059a30(&v0, &v1, &v2, &v3, (void *)m);
    unk_00 = func_0205b320(m, v0, v0 + 1, v2, v3, 1);
    unk_01 = func_0205b320(m, v0, v1, v3 - 1, v3, 4);
    unk_02 = func_0205b320(m, v1 - 1, v1, v2, v3, 2);
}

u8 Unk_0205b448::func_0205b320(s32 m, s32 x0, s32 x1, s32 y0, s32 y1, s32 kind) {
    u32 cnt = 0;
    u8 layer = 0;
    s32 f;
    u32 n, i;
    BOOL ok;
    s32 nx;
    Unk_0205b320_Buf buf;
    s32 y, x;
    do {
        for (y = y0; (u32)y <= (u32)y1; y++) {
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

u8 Unk_0205b448::func_0205b448() { return unk_00; }
u8 Unk_0205b448::func_0205b444() { return unk_01; }
u8 Unk_0205b448::func_0205b440() { return unk_02; }
Unk_0205b448::~Unk_0205b448() {}
Unk_0205b448::Unk_0205b448() {
    func_0205b460();
}
void Unk_0205b448::func_0205b460() {
    unk_02 = 0;
    unk_01 = unk_02;
    unk_00 = unk_01;
}

extern "C" {
void func_0205b470() {
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
u8 func_0205b4e0() { return data_021c5cc8; }
u8 func_0205b4ec() { return data_021c5cd0; }
u8 func_0205b4f8() { return data_021c5ccc; }
u32 func_0205b504() {
    u32 a = func_0205b4e0();
    u32 b = func_0205b4f8();
    u32 c = func_0205b4ec();
    return a + (b + c);
}

void func_0205b524(u8 *out) {
    Unk_0205b524_T t;
    t.w0 = 0;
    t.w1 = 0;
    func_0209d498(&t);
    if (((u8 *)&t)[2] < 6) func_0209d164(&t, 1);
    out[0] = ((u8 *)&t)[3];
    out[1] = ((u8 *)&t)[4];
    out[2] = ((u8 *)&t)[5];
}

s32 func_0205b55c(u8 *out) {
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

void func_0205b648(u8 *out) {
    func_0205b650(out);
}

void func_0205b650(u8 *out) {
    Unk_0205b524_T t;
    t.w0 = 0;
    t.w1 = 0;
    func_0209d498(&t);
    out[0] = ((u8 *)&t)[3];
    out[1] = ((u8 *)&t)[4];
    out[2] = ((u8 *)&t)[5];
    out[3] = 0;
}

void func_0205b67c() {}
void func_0205b680() {}
void func_0205b684() {}
void func_0205b688() {}
void func_0205b68c() {}

BOOL func_0205b690(Unk_0205b6e4 *t, s32 a, void (*b)()) {
    t->unk_14 = b;
    t->unk_10 = a;
    t->unk_00 = 2;
    return TRUE;
}

BOOL func_0205b69c(Unk_0205b6e4 *t) {
    Unk_0205b6e4 *p = data_021c6190;
    if (t == p) {
        data_021c6190 = t->unk_18;
        if (data_021c6194 == t) data_021c6194 = NULL;
        return TRUE;
    }
    for (; p != NULL; ) {
        Unk_0205b6e4 *n = p->unk_18;
        if (n == t) {
            p->unk_18 = n->unk_18;
            if (data_021c6194 == t) data_021c6194 = p;
            return TRUE;
        }
        p = n;
    }
    return FALSE;
}

BOOL func_0205b6e4(Unk_0205b6e4 *t, s32 a, void (*b)(), void (*c)()) {
    t->unk_10 = a;
    t->unk_0c = 0;
    t->unk_08 = b;
    t->unk_04 = c;
    t->unk_18 = NULL;
    t->unk_00 = 0;
    if (data_021c6194 != NULL) {
        data_021c6194->unk_18 = t;
        data_021c6194 = t;
    } else {
        data_021c6194 = t;
        data_021c6190 = t;
    }
    return TRUE;
}

void func_0205b714() {
    Unk_0205b6e4 *t;
    for (t = data_021c6190; t != NULL; t = t->unk_18) {
        if ((u8)(t->unk_00 + 0xff) <= 1 && t->unk_08 != NULL) t->unk_08();
    }
}

void func_0205b740() {
    Unk_0205b6e4 *t;
    for (t = data_021c6190; t != NULL; t = t->unk_18) {
        if (t->unk_00 == 0) {
            t->unk_00 = 1;
            t->unk_0c = t->unk_10;
            if (t->unk_08 != NULL) t->unk_08();
        }
        if (t->unk_04 != NULL) t->unk_04();
        if (t->unk_00 == 2) {
            t->unk_00 = 1;
            t->unk_0c = t->unk_10;
            t->unk_08 = t->unk_14;
            if (t->unk_08 != NULL) t->unk_08();
        }
    }
}

void func_0205b794() {
    func_0205b79c();
}

void func_0205b79c() {
    data_021c6190 = NULL;
    data_021c6194 = NULL;
}

void func_0205b7b0() {
    func_020e8c88(data_021c621c);
    data_021c621c = NULL;
}

enum Unk_0205b7cc_Zero { UNK_0205B7CC_ZERO = 0 };
void func_0205b7cc(s32 x) {
    s32 a = x;
    Unk_0205b7cc_Zero z = UNK_0205B7CC_ZERO;
    u32 s = (data_020c8b9c + 3) & ~3;
    s = (s + 0x4b) & ~3;
    u32 e = z + s;
    data_021c621c = func_020e8da0(e, a, s, z);
}

void func_0205b7fc() {
    func_020e8c88(data_021c6198);
    data_021c6198 = NULL;
}

void func_0205b818(s32 x) {
    Unk_0205b7cc_Zero z = UNK_0205B7CC_ZERO;
    u32 s = (data_020c8ba0 + 3) & ~3;
    s = (s + 0x4b) & ~3;
    data_021c6198 = func_020e8da0(z + s, x, s, z);
}
}
