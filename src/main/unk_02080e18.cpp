#include "types.h"

// Byte-record helper struct for the 0x68-byte object used by func_02080e20..func_02080fe8
struct Unk_02080e20_Obj {
    u8 pad[0x64];
    u16 lo : 8;
    u16 lvl : 3;
    u16 hi : 5;
};

class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020e2a78;

class Unk_020e2a60 : public Unk_020d9200 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a77f8(Unk_020e2a78 *src);

    /* 0x04 */ Unk_020e2a08 unk_04;
};

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

struct Unk_020cbb18 {
    u8 unk_00[0x64];
    s32 unk_64;
    u32 func_02072e88(s32 i);
};

extern "C" {
extern u8 data_021d7352[];
extern u8 data_021ed2f8[];
extern u8 data_020cc030[][4];
extern u8 data_020cc018[];
extern u8 data_020cbfa8[];
extern u8 data_020e0694[];
extern u8 data_020e06a4[];
extern u8 data_020e06b4[];
extern u8 data_021dfd8c[];
extern u8 data_020cc0d4[];
extern u8 data_020cc408[];
extern u8 data_021cd264[];
extern Unk_020cbb18 *data_020cbb18;

void func_02080da4(void *p, s32 v);
void func_02080b48(void *p, void *q);
s32 func_0209d020();
s32 func_0209d3d0(void *a, void *b, s32 c);
s32 func_0209d3a4(void *a, void *b);
void func_0209d498(void *p);
s32 func_02094218(void *p);
void func_020942b8(void *self, void *p);
void func_02063990(void *src, void *dst);
void func_02116048(const void *src, void *dst, u32 size);
void func_02115fb4(void *p, u32 v, u32 n);
void *func_02094104(void *p);
void func_02094294(void *p);
void func_020639b8(void *p);
void func_020639bc(void *p);
void func_020942c8(void *p);
void func_020942f8(void *p);
void __cxa_vec_cleanup(void *p, u32 n, u32 sz, void *dtor);
void func_02078650(void *p);
s32 func_02002fec(u32 x);
BOOL func_020b35f8(Unk_020e2a78 *buf, u8 *key, const char *name);
u8 *func_0207bf60(void *tbl, u32 idx);
s32 func_0207f988(u8 *p);
u8 *func_020805c4(u8 *p);
s32 func_02002ffc(u8 *p);
s32 func_02002fc8(u8 *p, void *q);
s32 func_0207c014(s32 i);
s32 func_02081780();
s32 func_02081794(void *tbl, s32 i);
s32 func_02081a40(void *tbl, s32 i);
s32 func_02081890(void *tbl, void *p);
s32 func_020818bc(void *tbl, void *p, void *q);
s32 func_02081b38(void *tbl, void *p);
s32 func_02081b64(void *tbl, void *p, void *q);
s32 func_020819b8(void *tbl, void *p);
s32 func_02081aa0(void *tbl, void *p, void *q);
s32 func_020817f4(void *tbl, void *p, void *q);
s32 func_020817c0(void *tbl, void *p);
s32 func_02081a6c(void *tbl, void *p);
s32 func_0208184c(void *tbl, void *p);
s32 func_02081af8(void *tbl, void *p);
}

// ---------------------------------------------------------------------------------------------------------------------

class Unk_020e05d8 : public Unk_020e2a60 {
public:
    Unk_020e05d8();
    virtual ~Unk_020e05d8();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x0e */ u8 unk_0e[0x10];
};

class Unk_020e0608 : public Unk_020e2a78 {
public:
    Unk_020e0608();
    virtual ~Unk_020e0608();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x12 */ u8 unk_12[0x11];
};

class Unk_020e0638 : public Unk_020e2a60 {
public:
    Unk_020e0638();
    virtual ~Unk_020e0638();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x0e */ u8 unk_0e[0x10];
};

class Unk_020e05c0 : public Unk_020e2a78 {
public:
    Unk_020e05c0();
    virtual ~Unk_020e05c0();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x12 */ u8 unk_12[0x11];
};

class Unk_020e0620 : public Unk_020e2a60 {
public:
    Unk_020e0620();
    virtual ~Unk_020e0620();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    void func_020811cc(void *dst, s32 n);
    /* 0x0e */ u8 unk_0e[0xa];
};

class Unk_020e05f0 : public Unk_020e2a78 {
public:
    Unk_020e05f0();
    virtual ~Unk_020e05f0();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    /* 0x12 */ u8 unk_12[0xb];
};

// ---------------------------------------------------------------------------------------------------------------------

extern "C" void *func_02080e18(void *p);
extern "C" u8 *func_02080e1c(u8 *p);
extern "C" u8 *func_02080ec8(u8 *p);
extern "C" void func_02080e20(Unk_02080e20_Obj *p);
extern "C" BOOL func_02080e40(Unk_02080e20_Obj *self, u8 *p);
extern "C" void func_02080ecc(Unk_02080e20_Obj *self, void *a, u8 *b, u8 *c);
extern "C" void func_02080fa8(u8 *self);
extern "C" void func_02081030(u8 *p, u8 a, u8 b);
extern "C" void func_0208104c(u8 *p);
extern "C" u8 *func_020812e0(u32 idx);
extern "C" u32 func_02081328(u32 a, u32 b);
extern "C" u8 *func_02081584(u16 *p);

extern "C" void *func_02080e18(void *p) {
    return p;
}

extern "C" u8 *func_02080e1c(u8 *p) {
    return p + 0x48;
}

extern "C" void func_02080e20(Unk_02080e20_Obj *p) {
    s32 v = p->lvl;
    if (v > 4) v = 4;
    func_02080da4(p, (s8)(v + 1));
}

extern "C" BOOL func_02080e40(Unk_02080e20_Obj *self, u8 *p) {
    u8 *q = func_02080ec8((u8 *)self);
    u16 v = 0;
    BOOL r = 0;
    if (func_0209d020() == 0) {
        if (func_0209d3d0(p, q, 0x3f) == 1) {
            s32 t = func_0209d3a4(q, p);
            if (t == 0) {
                v = self->lvl;
            } else {
                if (t == 1) v = self->lvl + 1;
                r = TRUE;
            }
        } else {
            r = TRUE;
        }
    } else {
        r = TRUE;
    }
    if (v > 4) v = 4;
    self->lvl = v;
    return r;
}

extern "C" u8 *func_02080ec8(u8 *p) {
    return p + 0x40;
}

extern "C" void func_02080ecc(Unk_02080e20_Obj *self, void *a, u8 *b, u8 *c) {
    u32 buf[2];
    buf[0] = 0;
    buf[1] = 0;
    if (a != 0 && func_02094218(a)) func_020942b8(self, a);
    if (b == 0) b = data_021d7352;
    if (c == 0) {
        func_0209d498(buf);
        c = (u8 *)buf;
    }
    if (func_02080e40(self, c)) func_02080e20(self);
    func_02063990(func_02080e1c((u8 *)self), b);
    func_02116048(c, func_02080ec8((u8 *)self), 8);
    func_02080b48(self, data_021ed2f8);
}

extern "C" BOOL func_02080f4c(u8 *self, void *a, u8 *b, u8 *c) {
    BOOL r = FALSE;
    if (func_02094218(a)) {
        func_02080fa8(self);
        func_02080ecc((Unk_02080e20_Obj *)self, a, b, c);
        func_02116048(func_02094104(a), self + 0x16, 8);
        r = TRUE;
    }
    return r;
}

extern "C" BOOL func_02080f94(void *p) {
    return func_02094218(func_02080e18(p));
}

extern "C" void func_02080fa8(u8 *self) {
    func_02115fb4(self, 0, 0x68);
    func_02094294(self);
    *(s32 *)(self + 0x40) = 0;
    *(s32 *)(self + 0x44) = 0;
    *(u16 *)(self + 0x52) = 0xfff1;
}

extern "C" u8 *func_02080fd0(u8 *self) {
    func_020639b8(self + 0x48);
    func_020942c8(self);
    return self;
}

extern "C" u8 *func_02080fe8(u8 *self) {
    func_020942f8(self);
    *(s32 *)(self + 0x40) = 0;
    *(s32 *)(self + 0x44) = 0;
    func_020639bc(self + 0x48);
    *(u16 *)(self + 0x52) = 0xfff1;
    func_02080fa8(self);
    return self;
}

extern "C" void func_02081018(u8 *out, s32 *in) {
    func_02081030(out, in[0], in[1]);
}

extern "C" void func_02081030(u8 *p, u8 a, u8 b) {
    p[0] = a;
    p[1] = b;
}

extern "C" BOOL func_02081038(u8 *p) {
    if (p[0] != 0xff && p[1] != 0xff) return TRUE;
    return FALSE;
}

extern "C" void func_0208104c(u8 *p) {
    p[0] = 0xff;
    p[1] = 0xff;
}

extern "C" void func_02081054() {
}

extern "C" u8 *func_02081058(u8 *p) {
    func_0208104c(p);
    return p;
}

// ---- buffer classes ----

u8 *Unk_020e05d8::vfunc_0c() { return (u8 *)this + 0xe; }
u32 Unk_020e05d8::vfunc_08() { return 0x10; }
Unk_020e05d8::~Unk_020e05d8() {}
Unk_020e05d8::Unk_020e05d8() {}

u8 *Unk_020e0608::vfunc_0c() { return (u8 *)this + 0x12; }
u32 Unk_020e0608::vfunc_08() { return 0x11; }
Unk_020e0608::~Unk_020e0608() {}
Unk_020e0608::Unk_020e0608() {}

u8 *Unk_020e0638::vfunc_0c() { return (u8 *)this + 0xe; }
u32 Unk_020e0638::vfunc_08() { return 0x10; }
Unk_020e0638::~Unk_020e0638() {}
Unk_020e0638::Unk_020e0638() {}

u8 *Unk_020e05c0::vfunc_0c() { return (u8 *)this + 0x12; }
u32 Unk_020e05c0::vfunc_08() { return 0x11; }
Unk_020e05c0::~Unk_020e05c0() {}
Unk_020e05c0::Unk_020e05c0() {}

u8 *Unk_020e0620::vfunc_0c() { return (u8 *)this + 0xe; }
void Unk_020e0620::func_020811cc(void *dst, s32 n) {
    if (n >= 10) n = 10;
    func_02116048((u8 *)this + 0xe, dst, n);
}
u32 Unk_020e0620::vfunc_08() { return 0xa; }
Unk_020e0620::~Unk_020e0620() {}
Unk_020e0620::Unk_020e0620() {}

u32 Unk_020e05f0::vfunc_08() { return 0xb; }
u8 *Unk_020e05f0::vfunc_0c() { return (u8 *)this + 0x12; }
Unk_020e05f0::~Unk_020e05f0() {}
Unk_020e05f0::Unk_020e05f0() {}

// ---- free functions ----

extern "C" BOOL func_02081288(u32 idx, void *buf) {
    u8 *e = func_020812e0(idx);
    struct { u32 a; u32 b; } t;
    t.a = 0;
    t.b = 0;
    ((u8 *)&t)[2] = e[0];
    ((u8 *)&t)[1] = e[1];
    if (func_0209d3d0(buf, &t, 6) == 1) {
        s32 c;
        BOOL r;
        ((u8 *)&t)[2] = e[2];
        ((u8 *)&t)[1] = e[3];
        c = func_0209d3d0(buf, &t, 6);
        r = FALSE;
        if (c == -1) r = TRUE;
        return r;
    }
    return FALSE;
}

extern "C" u8 *func_020812e0(u32 idx) {
    if (idx >= 6) idx = 0;
    return data_020cc030[idx];
}

extern "C" u32 func_020812f4() {
    Unk_020cbb18 *o = data_020cbb18;
    if (o->func_02072e88(o->unk_64)) return 0;
    return 4;
}

extern "C" u32 func_02081318(u8 *p) {
    return func_02081328(p[0], p[1]);
}

extern "C" u32 func_02081328(u32 a, u32 b) {
    u8 *p = data_020cc018;
    u32 r = 0;
    u8 i;
    for (i = 0; i < 12; p += 2, i++) {
        u32 c = p[0];
        if (a < c || (a == c && b <= p[1])) {
            r = i;
            break;
        }
    }
    return r;
}

extern "C" u8 func_02081364(u8 *p) {
    u8 r = 0;
    u32 c = p[0];
    switch (c) {
    case 0:
    case 1:
    case 2:
        r = data_020cbfa8[c] + p[1] - 1;
        break;
    case 3:
        r = data_020cbfa8[c] + p[1];
        break;
    case 4: {
        u32 d = p[1];
        if (d < 12) r = data_020cbfa8[c] + d;
        break;
    }
    }
    return r;
}

extern "C" BOOL func_020813f4(Unk_020e2a78 *buf, u32 x);

extern "C" BOOL func_020813bc(Unk_020e2a60 *self, u32 x) {
    Unk_020e05f0 local;
    BOOL r = FALSE;
    if (func_020813f4(&local, x)) {
        self->func_020a77f8(&local);
        r = TRUE;
    }
    return r;
}

extern "C" BOOL func_020813f4(Unk_020e2a78 *buf, u32 x) {
    BOOL r = FALSE;
    if (func_02002fec(x)) {
        u8 k = x;
        func_020b35f8(buf, &k, (const char *)data_020e0694);
        r = TRUE;
    }
    return r;
}

extern "C" s32 func_02081428(u16 *p) {
    s8 r = 0;
    s32 t = (s32)(*p & 0xf000) >> 12;
    if (t == 13) {
        s8 *q = (s8 *)func_02081584(p);
        if (q) r = *q;
    }
    return r;
}

extern "C" u32 func_02081450(u16 *p) {
    u32 idx = *p & 0xfff;
    u32 r = 0;
    s32 t = (s32)(*p & 0xf000) >> 12;
    if (t != 13) {
        if (t == 14) {
            u8 *q = func_0207bf60(data_021dfd8c, idx);
            if (q) r = func_0207f988(q);
        }
    } else {
        u8 *q = func_02081584(p);
        if (q) r = q[2];
    }
    return r;
}

extern "C" u32 func_0208149c(u16 *p) {
    u32 idx = *p & 0xfff;
    u32 r = 5;
    s32 t = (s32)(*p & 0xf000) >> 12;
    if (t != 13) {
        if (t == 14) {
            u8 *q = func_0207bf60(data_021dfd8c, idx);
            if (q) r = func_02002ffc(func_020805c4(q));
        }
    } else {
        u8 *q = func_02081584(p);
        if (q) r = q[1];
    }
    return r;
}

extern "C" BOOL func_020814ec(u8 *self, u16 *p) {
    s32 idx = *p & 0xfff;
    BOOL r = FALSE;
    s32 t = (s32)(*p & 0xf000) >> 12;
    if (t != 13) {
        if (t == 14) {
            u8 *q = func_0207bf60(data_021dfd8c, idx);
            if (q) r = func_02002fc8(func_020805c4(q), self);
        }
    } else {
        if (idx < 0x26) {
            u8 k = idx;
            func_020b35f8((Unk_020e2a78 *)self, &k, (const char *)data_020e06a4);
            r = TRUE;
        }
    }
    return r;
}

extern "C" BOOL func_02081550(Unk_020e2a78 *buf, u32 x) {
    BOOL r = FALSE;
    if (func_02002fec(x)) {
        u8 k = x;
        func_020b35f8(buf, &k, (const char *)data_020e06b4);
        r = TRUE;
    }
    return r;
}

extern "C" u8 *func_02081584(u16 *p) {
    u8 *r = 0;
    s32 idx = *p & 0xfff;
    s32 t = (s32)(*p & 0xf000) >> 12;
    if (t == 13) {
        if (idx < 0x26) r = data_020cc0d4 + idx * 3;
    }
    return r;
}

extern "C" u8 *func_020815b4(u32 n) {
    u8 *r = 0;
    if (func_02002fec(n)) r = data_020cc408 + n * 0x4e;
    return r;
}

extern "C" void *func_020815dc(void *p) {
    __cxa_vec_cleanup(p, 8, 0x2c, (void *)func_02078650);
    return p;
}

extern "C" s32 func_020815f8(void *a) {
    return func_02081890(data_021cd264, a);
}

extern "C" s32 func_02081608(void *a, void *b) {
    return func_020818bc(data_021cd264, a, b);
}

extern "C" s32 func_0208161c(void *a) {
    return func_02081b38(data_021cd264, a);
}

extern "C" s32 func_0208162c(void *a, void *b) {
    return func_02081b64(data_021cd264, a, b);
}

extern "C" s32 func_02081640(void *a) {
    return func_020819b8(data_021cd264, a);
}

extern "C" void func_02081650(void *a, void *b) {
    if (func_02081aa0(data_021cd264, a, b) == 0) func_020817f4(data_021cd264, a, b);
}

extern "C" s32 func_0208167c(void *a) {
    return func_020817c0(data_021cd264, a);
}

extern "C" s32 func_0208168c(void *a) {
    return func_02081a6c(data_021cd264, a);
}

extern "C" s32 func_02081708(void *a);
extern "C" s32 func_020816f8(void *a);

extern "C" s32 func_0208169c(u16 *p) {
    s32 r = 0;
    s32 t = (s32)(*p & 0xf000) >> 12;
    if (t != 13) {
        if (t == 14) r = func_0208168c(p);
    } else {
        r = func_0208167c(p);
    }
    return r;
}

extern "C" s32 func_020816cc(s32 kind, void *x) {
    s32 r = 0;
    switch (kind) {
    case 2:
        r = func_02081708(x);
        break;
    case 3:
        r = func_020816f8(x);
        break;
    }
    return r;
}

extern "C" s32 func_020816f8(void *a) {
    return func_0208184c(data_021cd264, a);
}

extern "C" s32 func_02081708(void *a) {
    return func_02081af8(data_021cd264, a);
}

extern "C" s32 func_02081718(s32 n) {
    s32 r = 0;
    if (n >= 0) {
        if (func_0207c014(n)) {
            r = func_02081a40(data_021cd264, n);
        } else if (n < func_02081780()) {
            r = func_02081794(data_021cd264, n - 8);
        }
    }
    return r;
}
