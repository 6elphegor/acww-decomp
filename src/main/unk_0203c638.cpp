#include "types.h"

// ---- 0x020d94b8 base (Unk_020e2a30 at 0x020e2a30)
class Unk_020e2a30 {
public:
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    Unk_020e2a30();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020e2a18 {
public:
    BOOL func_020a8a20(const char *name);
    BOOL func_020a8950(u8 *p);
    void func_020a89f0();
    u8 unk_00[0x2a4];
};

class Unk_020e2a78 {
public:
    BOOL func_020a7a28(u8 *str);
    BOOL func_020a7c04(u8 *str);
};

extern "C" {
void func_02115fb4(void *dst, u32 value, u32 size);
void func_02116048(void *src, void *dst, u32 n);
void *func_02135714(void *p, u32 n, u32 size, void *ctor, void *dtor);
void *func_021355f0(void *p, u32 n, u32 size, void *dtor);
void func_020a71b8(void *);
void func_020a71d0(void *);
s32 func_020639e8(char *buf, const char *fmt, ...);
extern u8 *data_020d9504[];
extern u8 *data_020d9514[];
extern u32 data_020c903c[];
extern u32 data_020c9030[];
void func_020b313c(void *, s32);
void func_020b3158(void *, s32);
s32 func_020a7bd8(void *, void *);
void func_0203d458(void *);
void func_0203d48c(void *);
void func_0203d4a4(void *);
void func_0203d3d8(void *);
void func_0203d3f8(void *, void *);
}

// ---- 0x020d94b8
class Unk_020d94b8 : public Unk_020e2a30 {
public:
    Unk_020d94b8();
    virtual ~Unk_020d94b8();
    virtual u32 vfunc_0c();
    u32 *func_0203cbc0();
    Unk_020e2a78 *func_0203cbc4();
    void func_0203cbc8(u32 *v);
    void func_0203cbcc(Unk_020e2a78 *v);
    void func_0203cbd0(u32 v);
    void func_0203cbd4(u32 v);
    u32 func_0203cbd8();
    BOOL func_0203cbe8();

    /* 0x20 */ u32 unk_20;
    /* 0x24 */ u32 unk_24;
    /* 0x28 */ Unk_020e2a78 *unk_28;
    /* 0x2c */ u32 *unk_2c;
};

u32 *Unk_020d94b8::func_0203cbc0() { return unk_2c; }
Unk_020e2a78 *Unk_020d94b8::func_0203cbc4() { return unk_28; }
void Unk_020d94b8::func_0203cbc8(u32 *v) { unk_2c = v; }
void Unk_020d94b8::func_0203cbcc(Unk_020e2a78 *v) { unk_28 = v; }
void Unk_020d94b8::func_0203cbd0(u32 v) { unk_24 = v; }
void Unk_020d94b8::func_0203cbd4(u32 v) { unk_20 = v; }
u32 Unk_020d94b8::func_0203cbd8() { return data_020c903c[unk_24]; }
BOOL Unk_020d94b8::func_0203cbe8() {
    if (unk_24 == 6) return TRUE;
    return FALSE;
}
u32 Unk_020d94b8::vfunc_0c() { return data_020c9030[unk_20]; }
Unk_020d94b8::~Unk_020d94b8() {}
Unk_020d94b8::Unk_020d94b8() : unk_20(0), unk_24(0), unk_28(0), unk_2c(0) {}

// ---- container singleton at 0x021c3280
class Unk_0203cc64 {
public:
    BOOL func_0203cc64(Unk_020d94b8 *p);
    void func_0203cd68();
    Unk_0203cc64 *func_0203cd98();
    Unk_0203cc64 *func_0203cdc8();
    BOOL func_0203d36c(BOOL b);

    /* 0x000 */ u8 unk_00[0x5c];
    /* 0x05c */ Unk_020e2a18 unk_5c;
    /* 0x300 */ u8 unk_300[0x200];
    /* 0x500 */ s32 unk_500;
    /* 0x504 */ u8 unk_504[11 * 0x34];
};

BOOL Unk_0203cc64::func_0203cc64(Unk_020d94b8 *p) {
    char buf[0x44];
    u32 s = p->func_0203cbd8();
    if (s != 0) {
        func_020639e8(buf, (const char *)data_020d9504, p->vfunc_0c(), s, (char *)p + 4);
    } else {
        func_020639e8(buf, (const char *)data_020d9514, p->vfunc_0c(), (char *)p + 4);
    }
    BOOL a = unk_5c.func_020a8a20(buf);
    BOOL b = a ? unk_5c.func_020a8950(&p->unk_1e) : 0;
    bool ok = a & b;
    unk_5c.func_020a89f0();
    if (ok) {
        Unk_020e2a78 *q = p->func_0203cbc4();
        u32 *out = p->func_0203cbc0();
        BOOL m = p->func_0203cbe8();
        ok &= func_0203d36c(out != 0 ? TRUE : FALSE);
        if (m) {
            ok &= q->func_020a7a28(unk_300);
        } else {
            ok &= q->func_020a7c04(unk_300);
        }
        if (out) *out = unk_500;
    }
    return ok;
}

void Unk_0203cc64::func_0203cd68() {
    func_0203d458(&unk_5c);
    func_02115fb4(unk_300, 0, 0x200);
    unk_500 = -1;
}

Unk_0203cc64 *Unk_0203cc64::func_0203cd98() {
    func_021355f0(unk_504, 11, 0x34, (void *)func_020a71b8);
    func_0203d48c(&unk_5c);
    func_0203d3d8(this);
    return this;
}

Unk_0203cc64 *Unk_0203cc64::func_0203cdc8() {
    func_0203d3f8(this, this);
    func_0203d4a4(&unk_5c);
    unk_500 = -1;
    func_02135714(unk_504, 11, 0x34, (void *)func_020a71d0, (void *)func_020a71b8);
    func_02115fb4(unk_300, 0, 0x200);
    return this;
}

// ---- free functions on the 0x34-byte entries at 0x021c3784
struct Unk_0203ce24_Elem {
    u8 unk_00[0x34];
};
extern "C" Unk_0203ce24_Elem data_021c3784[];
extern "C" Unk_0203cc64 data_021c3280;

extern "C" void func_0203ce24(s32 i, s32 x) { func_020b313c(&data_021c3784[i], x); }
extern "C" void func_0203ce38(s32 i, s32 x) { func_020b3158(&data_021c3784[i], x); }
extern "C" s32 func_0203ce4c(s32 i, void *x) { return func_020a7bd8(&data_021c3784[i], x); }

extern "C" BOOL func_0203ce60(Unk_020e2a78 *a, u8 *p, const char *name) {
    Unk_020d94b8 l;
    l.func_0203cbd4(2);
    l.func_020a710c(name);
    l.func_0203cbcc(a);
    l.unk_1e = *p;
    l.func_0203cbd0(0);
    data_021c3280.func_0203cd68();
    BOOL r = data_021c3280.func_0203cc64(&l);
    return r;
}

extern "C" BOOL func_0203cebc(Unk_020e2a78 *a, Unk_020e2a78 *b, Unk_020e2a78 *c, u32 *d, u8 *e1, u8 *e2, u8 *e3, u8 *e4, const char *name) {
    Unk_020d94b8 l;
    BOOL r5, r6, r4, r0, ok;
    l.func_0203cbd4(1);
    l.func_020a710c(name);
    l.func_0203cbcc(a);
    l.func_0203cbc8(d);
    l.unk_1e = *e1;
    l.func_0203cbd0(4);
    data_021c3280.func_0203cd68();
    r5 = data_021c3280.func_0203cc64(&l);
    l.func_0203cbc8(0);
    l.func_0203cbcc(b);
    l.unk_1e = *e2;
    l.func_0203cbd0(5);
    data_021c3280.func_0203cd68();
    r6 = data_021c3280.func_0203cc64(&l);
    l.func_0203cbcc(b);
    l.unk_1e = *e3;
    l.func_0203cbd0(6);
    data_021c3280.func_0203cd68();
    r4 = data_021c3280.func_0203cc64(&l);
    l.func_0203cbcc(c);
    l.unk_1e = *e4;
    l.func_0203cbd0(7);
    data_021c3280.func_0203cd68();
    r0 = data_021c3280.func_0203cc64(&l);
    if (r5 && r6 && r4 && r0) ok = TRUE; else ok = FALSE;
    return ok;
}

// ---- flag object at 0x021c3264
struct Unk_0203c92c_Bits0 {
    u8 b0 : 1;
    u8 b1 : 1;
    u8 b23 : 2;
};
struct Unk_0203c92c_Bits1 {
    u8 b0 : 1;
    u8 b1 : 1;
    u8 b2 : 1;
};
class Unk_0203c92c {
public:
    void func_0203c92c();
    void func_0203c938();
    void func_0203c944();
    BOOL func_0203c950();
    BOOL func_0203c964();
    BOOL func_0203c978();
    void func_0203c98c();
    void func_0203c9d4(u32 v);
    u32 func_0203c9ec();
    void func_0203c9f4();
    void func_0203ca00();
    BOOL func_0203ca0c();
    void func_0203ca20();
    void func_0203ca2c();
    BOOL func_0203ca38();
    void func_0203ca68();

    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
};

extern "C" Unk_0203c92c data_021c3264;

extern "C" void func_0203c924() {}
extern "C" void func_0203c928() {}

void Unk_0203c92c::func_0203c92c() { unk_01 |= 4; }
void Unk_0203c92c::func_0203c938() { unk_01 |= 2; }
void Unk_0203c92c::func_0203c944() { unk_01 = (unk_01 & ~1) | 1; }
BOOL Unk_0203c92c::func_0203c950() {
    if (((Unk_0203c92c_Bits1 *)&unk_01)->b2) return TRUE;
    return FALSE;
}
BOOL Unk_0203c92c::func_0203c964() {
    if (((Unk_0203c92c_Bits1 *)&unk_01)->b1) return TRUE;
    return FALSE;
}
BOOL Unk_0203c92c::func_0203c978() {
    if (((Unk_0203c92c_Bits1 *)&unk_01)->b0) return TRUE;
    return FALSE;
}
void Unk_0203c92c::func_0203c98c() {
    func_0203ca68();
    unk_01 &= ~1;
    unk_01 &= ~2;
    unk_01 &= ~4;
}
extern "C" Unk_0203c92c *func_0203c9b4(Unk_0203c92c *p);
extern "C" Unk_0203c92c *func_0203c9c4(Unk_0203c92c *p);
extern "C" void func_0203ca84();
extern "C" void func_0203ca90();
extern "C" Unk_0203c92c *func_0203c9b4(Unk_0203c92c *p) {
    func_0203ca84();
    return p;
}
extern "C" Unk_0203c92c *func_0203c9c4(Unk_0203c92c *p) {
    func_0203ca90();
    return p;
}
void Unk_0203c92c::func_0203c9d4(u32 v) {
    unk_00 = (unk_00 & ~0xc) | (((u8)v & 3) << 2);
}
u32 Unk_0203c92c::func_0203c9ec() { return ((Unk_0203c92c_Bits0 *)&unk_00)->b23; }
void Unk_0203c92c::func_0203c9f4() { unk_00 &= ~2; }
void Unk_0203c92c::func_0203ca00() { unk_00 |= 2; }
BOOL Unk_0203c92c::func_0203ca0c() {
    if (((Unk_0203c92c_Bits0 *)&unk_00)->b1) return TRUE;
    return FALSE;
}
void Unk_0203c92c::func_0203ca20() { unk_00 &= ~1; }
void Unk_0203c92c::func_0203ca2c() { unk_00 = (unk_00 & ~1) | 1; }
BOOL Unk_0203c92c::func_0203ca38() {
    if (((Unk_0203c92c_Bits0 *)&unk_00)->b0) return TRUE;
    return FALSE;
}
extern "C" void func_0203ca4c(void *dst, void *src) { func_02116048(src, dst, 1); }
extern "C" void func_0203ca5c(void *src, void *dst) { func_02116048(src, dst, 1); }
void Unk_0203c92c::func_0203ca68() {
    func_0203ca20();
    func_0203c9f4();
    func_0203c9d4(0);
}
extern "C" void func_0203ca84() {}
extern "C" void func_0203ca88() {}
extern "C" void func_0203ca8c() {}
extern "C" void func_0203ca90() {}

extern "C" {
void func_0209750c();
Unk_0203c92c *func_02098668();
Unk_0203c92c *func_0203cbb8();
s32 func_0203cba8();
s32 func_0203cb70();
u32 func_0203cb38();
}

extern "C" void func_0203ca94() {
    Unk_0203c92c *r5, *r4;
    u8 l;
    func_0209750c();
    r5 = func_02098668();
    r4 = func_0203cbb8();
    if (r4->func_0203c978()) {
        if (func_0203cba8() == 1) r5->func_0203ca2c();
        else r5->func_0203ca20();
    }
    if (r4->func_0203c964()) {
        if (func_0203cb70() == 1) r5->func_0203ca00();
        else r5->func_0203c9f4();
    }
    if (r4->func_0203c950()) {
        r5->func_0203c9d4(func_0203cb38());
    }
    func_0203ca5c(r5, &l);
    r4->func_0203c98c();
    func_0203ca4c(r4, &l);
}

extern "C" void func_0203cb1c(u32 v) {
    data_021c3264.func_0203c9d4(v);
    data_021c3264.func_0203c92c();
}
extern "C" u32 func_0203cb38() { return data_021c3264.func_0203c9ec(); }
extern "C" void func_0203cb48(s32 x) {
    if (x == 1) data_021c3264.func_0203ca00();
    else data_021c3264.func_0203c9f4();
    data_021c3264.func_0203c938();
}
extern "C" BOOL func_0203cb70() { return data_021c3264.func_0203ca0c(); }
extern "C" void func_0203cb80(s32 x) {
    if (x == 1) data_021c3264.func_0203ca2c();
    else data_021c3264.func_0203ca20();
    data_021c3264.func_0203c944();
}
extern "C" BOOL func_0203cba8() { return data_021c3264.func_0203ca38(); }
extern "C" Unk_0203c92c *func_0203cbb8() { return &data_021c3264; }

// ---- 0x0203c638 .. 0x0203c924
struct Unk_0203c640 {
    u8 unk_000[0x100];
    u8 unk_100[9];
    u8 unk_109[9];
    u8 unk_112[9];
    u8 unk_11b[8];
};

struct Unk_0203c764_Id {
    u16 unk_00;
    Unk_0203c764_Id() : unk_00(0x11a8) {}
    ~Unk_0203c764_Id();
};

extern "C" {
void func_0203c640(Unk_0203c640 *p);
void *func_0210629c();
void *func_02057048(void *p, s32 v);
void *func_020570b0(void *p, s32 v);
void *func_02071e58(void *p);
void func_02071e04(void *p);
void *func_02072040();
void *func_02071b00(void *tbl, u32 i);
void *func_02071c88(void *p, u32 i);
void *func_020986d4(void *p);
BOOL func_020641b4(void *a, void *b, s32 c);
extern u8 data_021e6e4c[];
extern u8 data_020d9418[];
BOOL func_0203c764(void *self, u16 *p, void *q);
}

extern "C" void func_0203c638(Unk_0203c640 *p) { func_0203c640(p); }

extern "C" void func_0203c640(Unk_0203c640 *p) {
    u32 i;
    for (i = 0; i < 0x100; i++) p->unk_000[i] = 0;
    for (i = 0; i < 9; i++) p->unk_100[i] = 0;
    for (i = 0; i < 9; i++) p->unk_109[i] = 0;
    for (i = 0; i < 9; i++) p->unk_112[i] = 0;
    for (i = 0; i < 8; i++) p->unk_11b[i] = 0;
}

extern "C" void func_0203c6a0() {}
extern "C" void func_0203c6a4() {}
extern "C" void *func_0203c6c8();
extern "C" BOOL func_0203c6f8(void *a, void *b);
extern "C" void *func_0203c6a8() { return func_0203c6c8(); }
extern "C" BOOL func_0203c6b0(void *a, void *b) { return func_0203c6f8(a, b); }
extern "C" BOOL func_0203c6b8(void *a, u16 *b, void *c) { return func_0203c764(a, b, c); }
extern "C" u32 func_0203c6c0() { return 0x2c4; }
extern "C" void *func_0203c6c8() { return func_0210629c(); }
extern "C" void *func_0203c6d0(void *unused) { return func_02057048(func_0203c6c8(), 0); }
extern "C" void *func_0203c6e4(void *unused) { return func_020570b0(func_0203c6c8(), 0); }

extern "C" BOOL func_0203c6f8(void *a, void *b) {
    u16 id = 0x11a8;
    if (func_0203c764(a, &id, 0)) {
        if (b != 0) {
            void *dst = func_02071e58(b);
            func_02116048(dst, func_0203c6e4(a), 0x200);
            func_02071e04(b);
            void *dst2 = func_02072040();
            func_02116048(dst2, func_0203c6d0(a), 0x20);
            return TRUE;
        }
        return TRUE;
    }
    return FALSE;
}

static inline BOOL Unk_0203c764_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" BOOL func_0203c764(void *self, u16 *p, void *q) {
    s32 i1, i2, i3, i4;
    char buf[0x20];
    if (Unk_0203c764_InRange(p, 0x12a8, 0x12af)) {
        if (*p >= 0x12a8 && *p <= 0x12af) i1 = *p - 0x12a8;
        else i1 = -1;
        if (i1 != -1) {
            if (q == 0) func_0203c6f8(self, func_02071b00(data_021e6e4c, (u8)i1));
            else func_0203c6f8(self, func_02071c88(func_020986d4(q), (u8)i1));
        }
    } else if (*p >= 0x1429 && *p <= 0x1430) {
        if (*p >= 0x1429 && *p <= 0x1430) i2 = *p - 0x1429;
        else i2 = -1;
        if (i2 != -1) {
            if (q == 0) func_0203c6f8(self, func_02071b00(data_021e6e4c, (u8)i2));
            else func_0203c6f8(self, func_02071c88(func_020986d4(q), (u8)i2));
        }
    } else if (*p >= 0x13a0 && *p <= 0x13a7) {
        if (*p >= 0x13a0 && *p <= 0x13a7) i3 = *p - 0x13a0;
        else i3 = -1;
        if (i3 != -1) {
            if (q == 0) func_0203c6f8(self, func_02071b00(data_021e6e4c, (u8)i3));
            else func_0203c6f8(self, func_02071c88(func_020986d4(q), (u8)i3));
        }
    } else {
        if (*p >= 0x11a8 && *p <= 0x12a7) i4 = *p - 0x11a8;
        else i4 = -1;
        if (i4 != -1) {
            func_020639e8(buf, (const char *)data_020d9418, i4 >> 4);
            if (func_020641b4(buf, self, -1)) return TRUE;
            return FALSE;
        } else {
            static Unk_0203c764_Id def;
            return func_0203c764(self, &def.unk_00, q);
        }
    }
}
