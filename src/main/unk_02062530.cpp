#include "types.h"

extern "C" {
extern u8 data_021c7cc8[];
}

extern "C" {
void *func_0206d794(void *);
}

extern "C" {
void *func_0206d79c(void *);
}

extern "C" {
void *func_0206d86c(void *, s32);
}

extern "C" {
s32 func_02061ec0(u16 *p);
}

extern "C" {
s32 func_02061d84(u16 *p);
}

extern "C" {
s32 func_02061dd0(u16 *p);
}

extern "C" {
s32 func_02061e0c(u16 *p);
}

extern "C" {
extern s32 data_021c7ca4;
}

extern "C" {
extern s32 data_021c7ca8;
}

extern "C" {
extern s32 data_021c7cac;
}

extern "C" {
extern u16 data_021c7c98[];
}

extern "C" {
BOOL func_02061cbc(u16 *p);
}

extern "C" {
s32 func_0204b2d4(u16 *p);
}

extern "C" {
s32 func_0204b25c(u16 *p);
}

extern "C" {
extern s32 data_021c7ca0;
}

extern "C" {
extern s32 data_021c7c9c;
}

extern "C" {
BOOL func_0204b430(u16 *p);
}

extern "C" {
BOOL func_0204b37c(u16 *p);
}

extern "C" {
s32 func_02061fe8(u16 *p);
}

extern "C" {
s32 func_02062024(u16 *p);
}

extern "C" {
s32 func_02062060(u16 *p);
}

extern "C" {
s32 func_020620a4(u16 *p);
}

static inline u16 Unk_020621d8_Idx(u32 i, u32 n, u32 base) {
    if (i < n) return base + i;
    return base;
}

extern "C" void func_020621d8();

extern "C" void func_02062258();

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

extern "C" u32 func_02061efc(u16 *p);

static inline u8 *Unk_02062024_Lookup(u32 v) {
    u32 i = v & 0xfff;
    if (i >= 0x56e) i = 0x56d;
    return (u8 *)func_0206d86c(func_0206d794(data_021c7cc8), i);
}

extern "C" s32 func_0206209c(u16 *);

extern "C" u16 *func_020620e0(u16 *p);

// ---------------------------------------------------------------------------------------------------------------------
// Item table setup / string buffers

extern "C" {
extern u16 data_021c7c98[];
}

extern "C" {
extern s32 data_021c7ca4;
}

extern "C" {
extern s32 data_021c7ca8;
}

extern "C" {
extern s32 data_021c7ca0;
}

extern "C" {
extern s32 data_021c7c9c;
}

extern "C" {
extern s32 data_021c7cac;
}

extern "C" {
extern u8 data_020dd2a8[];
}

extern "C" {
extern u8 data_020dd2c0[];
}

extern "C" {
extern u8 data_020dd2d8[];
}

extern "C" {
extern u8 data_020dd2ec[];
}

extern "C" {
BOOL func_02061cbc(u16 *p);
}

extern "C" {
s32 func_0204b2d4(u16 *p);
}

extern "C" {
s32 func_0204b25c(u16 *p);
}

extern "C" {
BOOL func_0204b430(u16 *p);
}

extern "C" {
BOOL func_0204b37c(u16 *p);
}

extern "C" {
BOOL func_0204b300(u16 *p);
}

extern "C" {
void func_0206d7a0(void *);
}

extern "C" {
void func_0206d7b4(void *, s32);
}

extern "C" {
s32 func_0206d7cc(void *);
}

extern "C" {
s32 func_0206d8b8(void *);
}

extern "C" {
s32 func_0206d904(void *);
}

extern "C" {
s32 func_0206d940(void *, void *, s32, s32);
}

extern "C" {
void func_0206d964(void *);
}

extern "C" {
void func_0206d974(void *);
}

extern "C" {
BOOL func_0206d7ec(void *, void *, s32, void *, s32, void *, s32, s32);
}

extern "C" {
void func_02061478(u16 *out, u16 *in);
}

extern "C" {
u32 func_020618cc(s32);
}

extern "C" {
void func_02050fd0(void *);
}

extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 n);
}

extern "C" {
u32 func_02052e4c(s32);
}

extern "C" {
u32 func_02053464(s32);
}

extern "C" {
u8 func_02053430(s32);
}

extern "C" {
u8 func_020533fc(s32);
}

extern "C" {
void func_02062354(void *);
}

extern "C" {
void func_0206235c(void *, s32);
}

extern "C" {
s32 func_02062364(void *);
}

extern "C" {
s32 func_0206237c(void *);
}

extern "C" {
void func_020622cc();
}

extern "C" {
void func_02062258();
}

extern "C" {
void func_020621d8();
}

extern "C" void func_02062194();
extern "C" void func_020621a4(s32 a);
extern "C" s32 func_020621b4();
extern "C" s32 func_020621c4();
extern "C" BOOL func_020621d4();

extern "C" void *func_02062404(void *o);

extern "C" void *func_0206243c(void *o);

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

Unk_020dd324::Unk_020dd324() {
    func_020a7c3c();
}

Unk_020dd324::Unk_020dd324(u16 *p) {
    func_020a7c3c();
    func_02062564(p);
}

Unk_020dd324::Unk_020dd324(s32 idx) {
    func_020a7c3c();
    func_02062540(idx);
}

Unk_020dd324::~Unk_020dd324() {}

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

BOOL Unk_020dd324::func_02062540(s32 idx) {
    if (idx < 0x4a) {
        func_02062538((u8 *)func_020618cc(idx));
        return TRUE;
    }
    return FALSE;
}

u8 Unk_020dd324::func_02062538(u8 *str) { return func_020a7c04(str); }

u32 Unk_020dd324::vfunc_08() { return 0x11; }

u8 *Unk_020dd324::vfunc_0c() { return unk_12; }

