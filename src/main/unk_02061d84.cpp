#include "types.h"

extern "C" {
extern u8 data_021c7cc8[];
void *func_0206d794(void *);
void *func_0206d79c(void *);
void *func_0206d86c(void *, s32);
}

extern "C" {
s32 func_02061ec0(u16 *p);
s32 func_02061d84(u16 *p);
s32 func_02061dd0(u16 *p);
s32 func_02061e0c(u16 *p);
extern s32 data_021c7ca4;
extern s32 data_021c7ca8;
extern s32 data_021c7cac;
extern u16 data_021c7c98[];
BOOL func_02061cbc(u16 *p);
s32 func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
extern s32 data_021c7ca0;
extern s32 data_021c7c9c;
BOOL func_0204b430(u16 *p);
BOOL func_0204b37c(u16 *p);
s32 func_02061fe8(u16 *p);
s32 func_02062024(u16 *p);
s32 func_02062060(u16 *p);
s32 func_020620a4(u16 *p);
}

static inline u16 Unk_020621d8_Idx(u32 i, u32 n, u32 base) {
    if (i < n) return base + i;
    return base;
}

extern "C" void func_020621d8();
void func_020621d8() {
    u32 i;
    struct { u16 a; u16 b; } l;
    data_021c7ca4 = 0;
    data_021c7cac = 0;
    for (i = 0; i < 0x40; i++) {
        l.a = Unk_020621d8_Idx(i, 0x40, 0x13c8);
        if (func_02061e0c(&l.a) == 0x1d) data_021c7cac++;
    }
    for (i = 0; i < 0x20; i++) {
        l.b = Unk_020621d8_Idx(i, 0x20, 0x13a8);
        if (func_02061e0c(&l.b) == 0x1d) data_021c7ca4++;
    }
}

extern "C" void func_02062258();
void func_02062258() {
    u32 i;
    struct { u16 a; u16 b; } l;
    for (i = 0; i < 0x21; i++) {
        l.a = Unk_020621d8_Idx(i, 0x21, 0x1408);
        l.b = Unk_020621d8_Idx(i, 0x21, 0x1471);
        if (func_0204b430(&l.a)) {
            data_021c7c9c++;
        } else if (func_0204b37c(&l.b)) {
            data_021c7ca0++;
        }
    }
}

static inline BOOL Unk_020622cc_IsFree(u16 *g, u16 *t) {
    if (func_0204b2d4(g)) {
        *t = 0xfff1;
        s32 x = func_0204b25c(g);
        if (x == func_0204b25c(t)) return TRUE;
        return FALSE;
    }
    if (*g == 0xfff1) return TRUE;
    return FALSE;
}

extern "C" void func_020622cc();
void func_020622cc() {
    u16 i;
    struct { u16 a; u16 b; } l;
    for (i = 0x1000; i < 0x156e; i++) {
        l.a = i;
        if (func_02061cbc(&l.a)) {
            if (Unk_020622cc_IsFree(data_021c7c98, &l.b)) {
                data_021c7c98[0] = l.a;
            }
            data_021c7ca8++;
        }
    }
}

s32 func_02061d84(u16 *p) {
    if (func_02061ec0(p) == 5) {
        u32 i = *p & 0xfff;
        if (i >= 0x56e) i = 0x56d;
        u8 *r = (u8 *)func_0206d86c(func_0206d79c(data_021c7cc8), i);
        if (r) return r[8];
        return 0;
    }
    return -1;
}

s32 func_02061dd0(u16 *p) {
    u32 i = *p & 0xfff;
    if (i >= 0x56e) i = 0x56d;
    u8 *r = (u8 *)func_0206d86c(func_0206d79c(data_021c7cc8), i);
    if (r) return r[7];
    return 0;
}

static inline u8 *Unk_02061e0c_Lookup(u32 v) {
    u32 i = v & 0xfff;
    if (i >= 0x56e) i = 0x56d;
    return (u8 *)func_0206d86c(func_0206d79c(data_021c7cc8), i);
}

static inline BOOL Unk_02061e0c_InRange(u16 *p) {
    BOOL r = FALSE;
    u16 v = *p;
    if (v >= 0x1000 && v <= 0x10ff) r = TRUE;
    return r;
}

static inline u16 Unk_02061e0c_Conv(u16 *p) {
    u16 v = *p;
    s32 t;
    if (v >= 0x1000 && v <= 0x10ff) t = v - 0x1000;
    else t = -1;
    t |= 3;
    if ((u32)t < 0x100) return t + 0x1000;
    return 0x1000;
}

s32 func_02061e0c(u16 *p) {
    if (Unk_02061e0c_InRange(p)) {
        volatile u16 tmp = Unk_02061e0c_Conv(p);
        u8 *r = Unk_02061e0c_Lookup(tmp);
        if (r) return r[6];
        return 0;
    }
    u8 *r = Unk_02061e0c_Lookup(*p);
    if (r) return r[6];
    return 0;
}

extern "C" u32 func_02061efc(u16 *p);
u32 func_02061efc(u16 *p) {
    u32 rec;
    if (Unk_02061e0c_InRange(p)) {
        volatile u16 tmp = Unk_02061e0c_Conv(p);
        u8 *r = Unk_02061e0c_Lookup(tmp);
        if (r) rec = *(u16 *)r;
        else rec = 0;
    } else {
        u8 *r = Unk_02061e0c_Lookup(*p);
        if (r) rec = *(u16 *)r;
        else rec = 0;
    }
    if (Unk_02061e0c_InRange(p)) {
        u16 v = *p;
        s32 t;
        if (v >= 0x1000 && v <= 0x10ff) t = v - 0x1000;
        else t = -1;
        t &= 3;
        rec = (rec * (t + 1)) << 14 >> 16;
    }
    return rec;
}

s32 func_02061ec0(u16 *p) {
    u8 *r = Unk_02061e0c_Lookup(*p);
    if (r) return r[4];
    return 0;
}

s32 func_02061fe8(u16 *p) {
    u8 *r = Unk_02061e0c_Lookup(*p);
    if (r) return r[5];
    return 0;
}

static inline u8 *Unk_02062024_Lookup(u32 v) {
    u32 i = v & 0xfff;
    if (i >= 0x56e) i = 0x56d;
    return (u8 *)func_0206d86c(func_0206d794(data_021c7cc8), i);
}

s32 func_02062024(u16 *p) {
    u8 *r = Unk_02062024_Lookup(*p);
    if (r) return r[1];
    return 0;
}

s32 func_02062060(u16 *p) {
    u8 *r = Unk_02062024_Lookup(*p);
    if (r) return r[0];
    return 0;
}

extern "C" s32 func_0206209c(u16 *);
s32 func_0206209c(u16 *) { return -1; }

s32 func_020620a4(u16 *p) {
    u8 *r = Unk_02061e0c_Lookup(*p);
    if (r) return *(u16 *)(r + 2);
    return 0;
}

extern "C" u16 *func_020620e0(u16 *p);
u16 *func_020620e0(u16 *p) {
    if (Unk_02061e0c_InRange(p)) {
        volatile u16 tmp = Unk_02061e0c_Conv(p);
        u8 *r = Unk_02062024_Lookup(tmp);
        if (r) return (u16 *)(r + 2);
        return 0;
    }
    u8 *r = Unk_02062024_Lookup(*p);
    if (r) return (u16 *)(r + 2);
    return 0;
}

// ---------------------------------------------------------------------------------------------------------------------
// Item table setup / string buffers

extern "C" {
extern u16 data_021c7c98[];
extern s32 data_021c7ca4;
extern s32 data_021c7ca8;
extern s32 data_021c7ca0;
extern s32 data_021c7c9c;
extern s32 data_021c7cac;
extern u8 data_020dd2a8[];
extern u8 data_020dd2c0[];
extern u8 data_020dd2d8[];
extern u8 data_020dd2ec[];
BOOL func_02061cbc(u16 *p);
s32 func_0204b2d4(u16 *p);
s32 func_0204b25c(u16 *p);
BOOL func_0204b430(u16 *p);
BOOL func_0204b37c(u16 *p);
BOOL func_0204b300(u16 *p);
void func_0206d7a0(void *);
void func_0206d7b4(void *, s32);
s32 func_0206d7cc(void *);
s32 func_0206d8b8(void *);
s32 func_0206d904(void *);
s32 func_0206d940(void *, void *, s32, s32);
void func_0206d964(void *);
void func_0206d974(void *);
BOOL func_0206d7ec(void *, void *, s32, void *, s32, void *, s32, s32);
void func_02061478(u16 *out, u16 *in);
u32 func_020618cc(s32);
void func_02050fd0(void *);
void func_02116048(const void *src, void *dst, u32 n);
u32 func_02052e4c(s32);
u32 func_02053464(s32);
u8 func_02053430(s32);
u8 func_020533fc(s32);
void func_02062354(void *);
void func_0206235c(void *, s32);
s32 func_02062364(void *);
s32 func_0206237c(void *);
void func_020622cc();
void func_02062258();
void func_020621d8();
}

extern "C" void func_02062194();
void func_02062194() { func_02062354(data_021c7cc8); }
extern "C" void func_020621a4(s32 a);
void func_020621a4(s32 a) { func_0206235c(data_021c7cc8, a); }
extern "C" s32 func_020621b4();
s32 func_020621b4() { return func_02062364(data_021c7cc8); }
extern "C" s32 func_020621c4();
s32 func_020621c4() { return func_0206237c(data_021c7cc8); }
extern "C" BOOL func_020621d4();
BOOL func_020621d4() { return TRUE; }


void func_02062354(void *p) { func_0206d7a0(p); }
void func_0206235c(void *p, s32 x) { func_0206d7b4(p, x); }

s32 func_02062364(void *o) {
    func_0206d7cc(o);
    return func_0206d8b8((u8 *)o + 0x54);
}

s32 func_0206237c(void *o) {
    BOOL ok;
    data_021c7ca8 = 0;
    ok = TRUE;
    ok = (ok | func_0206d7ec(o, data_020dd2a8, 0xc, data_020dd2c0, 4, data_020dd2d8, 0x14, 0x600)) ? TRUE : FALSE;
    if (ok) {
        func_020622cc();
        func_02062258();
        func_020621d8();
    }
    ok = (ok | func_0206d940((u8 *)o + 0x54, data_020dd2ec, 0x14, 0x80)) ? TRUE : FALSE;
    if (ok) {
        func_0206d904((u8 *)o + 0x54);
    }
    return ok;
}

extern "C" void *func_02062404(void *o);
void *func_02062404(void *o) {
    func_0206d7cc(o);
    func_0206d8b8((u8 *)o + 0x54);
    func_0206d964((u8 *)o + 0x54);
    func_0206d964((u8 *)o + 0x38);
    func_0206d964((u8 *)o + 0x1c);
    func_0206d964(o);
    return o;
}

extern "C" void *func_0206243c(void *o);
void *func_0206243c(void *o) {
    func_0206d974(o);
    func_0206d974((u8 *)o + 0x1c);
    func_0206d974((u8 *)o + 0x38);
    func_0206d974((u8 *)o + 0x54);
    return o;
}

// ---------------------------------------------------------------------------------------------------------------------
// Buffer classes

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};

class Unk_020d9218 {
public:
    virtual ~Unk_020d9218() {}
};

class Unk_020e2a78;

class Unk_020e2a60 : public Unk_020d9200 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

    /* 0x04 */ Unk_020e2a08 unk_04;
};

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    u8 func_020a7c04(u8 *str);
    void func_020a7c3c();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

struct Unk_020dd30c_Buf {
    u8 b[16];
};

// 16-byte raw buffer (vtable 0x020dd30c)
class Unk_020dd30c : public Unk_020e2a60 {
public:
    Unk_020dd30c();
    Unk_020dd30c(u8 *src);
    virtual ~Unk_020dd30c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    BOOL func_02062464(u8 *out, s32 n);

    /* 0x0e */ u8 unk_0e[16];
};

// buffer of 0x11 bytes (vtable 0x020dd324)
class Unk_020dd324 : public Unk_020e2a78 {
public:
    Unk_020dd324();
    Unk_020dd324(s32 idx);
    Unk_020dd324(u16 *p);
    virtual ~Unk_020dd324();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 func_02062538(u8 *str);
    BOOL func_02062540(s32 idx);
    BOOL func_02062564(u16 *p);

    /* 0x12 */ u8 unk_12[0x11];
};

BOOL Unk_020dd30c::func_02062464(u8 *out, s32 n) {
    if (n >= (s32)vfunc_08()) {
        func_02116048(unk_0e, out, vfunc_08());
        return TRUE;
    }
    return FALSE;
}

u8 *Unk_020dd30c::vfunc_0c() { return unk_0e; }
u32 Unk_020dd30c::vfunc_08() { return 0x10; }

Unk_020dd30c::~Unk_020dd30c() {}

Unk_020dd30c::Unk_020dd30c(u8 *src) {
    func_02050fd0(this);
    *(Unk_020dd30c_Buf *)unk_0e = *(Unk_020dd30c_Buf *)src;
}

Unk_020dd30c::Unk_020dd30c() {
    func_02050fd0(this);
}

u8 *Unk_020dd324::vfunc_0c() { return unk_12; }
u32 Unk_020dd324::vfunc_08() { return 0x11; }

u8 Unk_020dd324::func_02062538(u8 *str) { return func_020a7c04(str); }

BOOL Unk_020dd324::func_02062540(s32 idx) {
    if (idx < 0x4a) {
        func_02062538((u8 *)func_020618cc(idx));
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020dd324::func_02062564(u16 *p) {
    struct { u32 pad; u16 t[2]; } l;
    func_02061478(l.t, p);
    Unk_020e2a08 *r = &unk_08;
    if (func_0204b300(l.t)) {
        func_02062538((u8 *)func_020620e0(l.t));
        r->unk_04 = func_0206209c(l.t);
        r->unk_09 = func_02062060(l.t);
        r->unk_08 = func_02062024(l.t);
        return TRUE;
    }
    if (func_0204b2d4(l.t)) {
        s32 x = func_0204b25c(l.t);
        func_02062538((u8 *)func_02052e4c(x));
        r->unk_04 = func_02053464(x);
        r->unk_09 = func_02053430(x);
        r->unk_08 = func_020533fc(x);
        return TRUE;
    }
    return FALSE;
}

Unk_020dd324::~Unk_020dd324() {}

Unk_020dd324::Unk_020dd324(s32 idx) {
    func_020a7c3c();
    func_02062540(idx);
}

Unk_020dd324::Unk_020dd324(u16 *p) {
    func_020a7c3c();
    func_02062564(p);
}

Unk_020dd324::Unk_020dd324() {
    func_020a7c3c();
}
