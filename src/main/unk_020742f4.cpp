#include "types.h"

// ======== types of unk_020742f4.cpp ========


struct Unk_02074c4c_Color {
    u8 r, g, b;
    u8 col[2];
};
// ======== types of unk_02074c4c.cpp ========

struct Unk_02074c4c_G { u8 pad[0x64]; u32 unk_64; u32 unk_68; };
// ======== types of unk_02075558.cpp ========

struct Unk_02075558_Obj {
    u32 pad_00[0x19];
    void *unk_64;
};struct Unk_02075bc4_Buf {
    u8 kind : 2;
    u8 pad0 : 6;
    u8 pad1 : 7;
    u8 flag : 1;
    u16 pos;
    u16 id;
    u16 pad2;
};
struct Unk_02075bc4_Q {
    u8 a : 3;
    u8 pad0 : 5;
    u8 pad1 : 7;
    u8 b : 1;
    u8 c : 1;
    u8 pad2 : 7;
};
struct Unk_02075bc4_Pt {
    s32 x, y;
};


struct Unk_02075680_Pad {
    s32 v[1];
    Unk_02075680_Pad() {}
    ~Unk_02075680_Pad() {}
};
// ======== types of unk_02075e60.cpp ========
struct Unk_02075e98_Nib { u8 lo : 4; u8 hi : 4; };

// ======== types of unk_020767f8.cpp ========
struct Unk_02076d68_E;

struct Unk_02076d68_E {
    u8 b[0x1c];
};

struct Unk_020767f8_Tag {
    u8 b;
    u16 h;
};

struct Unk_02076c24_S {
    s32 unk_00;
    u8 unk_04;
    u8 pad[3];
    u8 unk_08[4];
};

struct Unk_02076fc8_D {
    u8 a, b, c;
};


class Unk_020d9200;
class Unk_020e2a60 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    u8 unk_04[10];
};

class Unk_020e055c : public Unk_020e2a60 {
public:
    Unk_020e055c();
    virtual ~Unk_020e055c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 unk_0e[0xb2];
};
// ======== types of unk_02077138.cpp ========


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

class Unk_020e2a78 : public Unk_020d9218 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    void func_020a7c3c();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

// Source-side text buffer of 0xc1 bytes.
class Unk_020e0574 : public Unk_020e2a78 {
public:
    Unk_020e0574();
    virtual ~Unk_020e0574();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x12 */ u8 unk_12[0xaf];
};

// Record of 0xc0 data bytes plus a few state bytes.
class Unk_020772cc {
public:
    Unk_020772cc();
    ~Unk_020772cc();

    void func_020772cc();
    BOOL func_020772dc();
    void func_020772f0(s32 i);
    BOOL func_02077310(s32 i);
    u8 func_02077330();
    u8 func_02077338();
    u8 func_02077340();
    void func_02077348(u8 *src);

    /* 0x00 */ u8 unk_00[0xc0];
    /* 0xc0 */ u8 unk_c0;
    /* 0xc1 */ u8 unk_c1;
    /* 0xc2 */ u8 unk_c2;
    /* 0xc3 */ u8 unk_c3;
};

class Unk_02077198 {
public:
    Unk_02077198();
    ~Unk_02077198();

    void func_02077198(s32 idx);
    void func_020771d8(u16 v);
    u16 func_020771e4();
    Unk_020772cc *func_020771f0();
    u8 func_02077230();
    void func_0207723c();
    void func_02077264();
    Unk_020772cc *func_02077278(s32 idx);
    Unk_020772cc *func_02077280(s32 idx);

    /* 0x000 */ Unk_020772cc unk_000[15];
    /* 0xb7c */ u16 unk_b7c;
    /* 0xb7e */ u8 unk_b7e;
};
// ======== types of unk_02077a54.cpp ========


struct Unk_020781ec_Elem {
    u8 pad_00[0x1d];
    u8 unk_1d;
    u8 pad_1e[0x2c - 0x1e];
};

struct Unk_020781ec_Data {
    Unk_020781ec_Elem unk_00[8];
    s8 unk_160;
    s8 unk_161;
    s8 unk_162;
    s8 unk_163;
    s8 unk_164;
    u8 pad_165[3];
    s32 unk_168;
    s8 unk_16c;
};

class Unk_021cc7d0 {
public:
    s32 unk_00;
    u8 pad_04[0x78];
    Unk_021cc7d0() { unk_00 = -1; }
    ~Unk_021cc7d0();
};

// ======== unk_02077a54.cpp ========
namespace n7 {

typedef u32 Unk_02077a54_Fn;extern "C" {
extern void *data_020cbb18;
}
extern "C" {
extern void *data_021cc8b0[];
}
extern "C" {
extern void *data_021cc914[];
}
extern "C" {
extern void *data_021cc8e8[];
}
extern "C" {
extern void *data_021c61a4;
}
extern "C" {
extern void *data_021c61a8;
}
extern "C" {
extern void *data_021c61ac;
}
extern "C" {
extern u8 data_020e416c;
}
extern "C" {
extern void *data_021c47c4;
}
extern "C" {
extern void *data_021f482c;
}
extern "C" {
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(void *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_020728d4Ev(void *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_020728a4EPhj(void *, void *, s32);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072824Ejj(void *, s32, s32);
}
extern "C" {
void func_02077ab4(u8 *, s32, s32);
}
extern "C" {
void *func_02077c0c(void **, s32);
}
extern "C" {
void *func_02077cd4(void **, s32);
}
extern "C" {
void *func_02077dc4(void **, s32);
}
extern "C" {
void func_02077b98(void **);
}
extern "C" {
void func_02077bd4(void **);
}
extern "C" {
void func_02077c68(void **);
}
extern "C" {
void func_02077ca4(void **);
}
extern "C" {
void func_02077d30(void **);
}
extern "C" {
void func_02077d58(void **);
}
extern "C" {
void func_020e885c(void *);
}
extern "C" {
void func_020e877c(void *);
}
extern "C" {
void *func_020e8da0(s32, void *);
}
extern "C" {
void *func_020e8628(void *, s32, s32);
}
extern "C" {
void func_020641b4(void *, void *, s32);
}
extern "C" {
void func_0205b944();
}
extern "C" {
void func_0205b960();
}
extern "C" {
void func_0205b9a4();
}
extern "C" {
void func_0205b9c0();
}
extern "C" {
void func_0205ba00();
}
extern "C" {
void func_0205ba1c();
}
extern "C" {
void func_0205b8a0();
}
extern "C" {
void func_0205b8c0(void *);
}
extern "C" {
s32 func_02084fbc();
}
extern "C" {
s32 func_020812f4();
}
extern "C" {
s32 func_020b50e8();
}
extern "C" {
s32 func_020b491c(s32);
}
extern "C" {
s32 func_020b4928(s32);
}
extern "C" {
void func_0204ee10(s32 *, s32 *, s32);
}
extern "C" {
void *func_0204ebd8(void *, s32, s32, s32, s32, s32);
}
extern "C" {
BOOL func_0204e418(void *, s32, s32);
}
extern "C" {
BOOL func_0204b300(void *);
}
extern "C" {
BOOL func_020780e4(s32, s32);
}
extern "C" {
s32 func_02078104(s32, s32);
}
extern "C" {
BOOL func_02077eb0(s32, s32, s32, s32 *, s32 *);
}
extern "C" {
BOOL func_02077f68(s32, s32, void *);
}
extern "C" {
BOOL func_0204b2d4(void *);
}
extern "C" {
BOOL func_0204b08c(void *);
}
extern "C" {
s32 func_02081650(s32, s32);
}
extern "C" {
void *func_020947f0(s32);
}
extern "C" {
s32 func_020951ec(s32);
}
extern "C" {
struct Unk_020781ec_Data *func_020783f8();
}
extern "C" {
void *func_020784f4(void *);
}
extern "C" {
s32 func_020784e0(void *);
}
extern "C" {
s32 func_02078384(void *);
}
extern "C" {
s32 func_020783d4(void *);
}
extern "C" {
s32 func_02078400(void *);
}
extern "C" {
void *func_020805c4(void *);
}
extern "C" {
BOOL func_020030b4(void *);
}
extern "C" {
s32 func_0207e1f0(void *);
}
extern "C" {
s32 func_0207c6d4(void *);
}
extern "C" {
void *func_0207f86c(void *, s32);
}
extern "C" {
BOOL func_02080f94(void *);
}
extern "C" {
void func_02080a88(void *);
}
extern "C" {
void func_02080a54(void *);
}
extern "C" {
void func_02080a18(void *);
}
extern "C" {
void func_020809dc(void *);
}
extern "C" {
void func_020809a0(void *);
}
extern "C" {
void func_02080964(void *);
}
extern "C" {
void func_02080930(void *);
}
extern "C" {
void func_02080078(void *, s32);
}
extern "C" {
void func_0207ff14(void *, s32);
}
extern "C" {
void func_02077a54(s32 a, s32 b);
}
extern "C" {
void func_02077a9c(s32 *a, s32 *b, u8 *p);
}
extern "C" {
void func_02077ab4(u8 *p, s32 a, s32 b);
}
extern "C" {
void *func_02077ac4(s32 *p);
}
extern "C" {
void func_02077ad8(s32 *p, s32 x);
}
extern "C" {
void func_02077af8();
}
extern "C" {
void func_02077afc(s32 *p);
}
extern "C" {
void *func_02077b04(s32 *p);
}
extern "C" {
void func_02077b18(s32 *p, s32 x);
}
extern "C" {
void func_02077b38();
}
extern "C" {
void func_02077b3c(s32 *p);
}
extern "C" {
void *func_02077b44(s32 *p);
}
extern "C" {
void func_02077b58(s32 *p, void *dst);
}
extern "C" {
void func_02077b84(s32 *p, s32 v);
}
extern "C" {
void func_02077b80(s32 *p, s32 v);
}


static inline BOOL Unk_02077d58_IsZero(u8 v)
{
    return v == 0 ? TRUE : FALSE;
}extern "C" {
void func_02077c2c(void *);
}
extern "C" {
void func_02077cdc();
}
extern "C" {
void func_02077dcc();
}
extern "C" {
static inline s32 Unk_02077d58_Count()
{
    s32 t;
    if (Unk_02077d58_IsZero(data_020e416c)) {
        t = func_020812f4();
    } else {
        t = func_020b491c(func_020b50e8());
        t -= func_020b4928(func_020b50e8());
    }
    return t;
}
}
extern "C" {
void func_02077de4(void *);
}
extern "C" {
void func_02077cf4(void *);
}
extern "C" {
void func_02077c2c(void *);
}
extern "C" {
static inline BOOL Unk_02077f68_R(u16 *p, u32 lo, u32 hi)
{
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}
}
extern "C" {
static inline BOOL Unk_02077f68_C2(u16 *p)
{
    BOOL k2 = TRUE, k1 = TRUE;
    u32 v = *p;
    if (v != 0x25 && v != 0x5c) k1 = FALSE;
    if (!k1) {
        if (v != 0xc7) k2 = FALSE;
    }
    return k2;
}
}
extern "C" {
static inline BOOL Unk_02077f68_C9(u16 *p)
{
    BOOL h = TRUE, g = TRUE, f = TRUE, e = TRUE, d = TRUE, cc = TRUE, b = TRUE, a = FALSE;
    u32 v = *p;
    if (v <= 5) a = TRUE;
    if (!a) {
        if (v < 6 || v > 11) b = FALSE;
    }
    if (!b) {
        if (v < 12 || v > 17) cc = FALSE;
    }
    if (!cc) {
        if ((v < 18 || v > 25) && v != 0x1c) d = FALSE;
    }
    if (!d) {
        if ((v < 0x8a || v > 0x8f) && (v < 0x90 || v > 0x95) && (v < 0x96 || v > 0x9b) && (v < 0x9c || v > 0xa3) && v != 0xa5) e = FALSE;
    }
    if (!e) {
        if (v != 0x1a) f = FALSE;
    }
    if (!f) {
        if (v != 0xa4) g = FALSE;
    }
    if (!g) {
        if (v != 0x1d) h = FALSE;
    }
    return h;
}
}


extern "C" void func_02077ab4(u8 *p, s32 a, s32 b)
{
    *p = ((a << 4) & 0xf0) | (b & 0xf);
}
extern "C" void func_02077a9c(s32 *a, s32 *b, u8 *p)
{
    *a = (*p >> 4) & 0xf;
    *b = *p & 0xf;
}
extern "C" void func_02077a54(s32 a, s32 b)
{
    u8 buf;
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        func_02077ab4(&buf, a, b);
        void *t = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728d4Ev(t);
        _ZN12Unk_020cbb1813func_020728a4EPhj(t, &buf, 1);
        _ZN12Unk_020cbb1813func_02072824Ejj(t, 0x36, 4);
    }
}
}

// ======== unk_02077138.cpp ========
namespace n6 {
extern "C" {
void MI_CpuCopy8(const void *src, void *dst, u32 n);
}
extern "C" {
void func_0205125c(void *p, u32 n);
}
extern "C" {
void func_02076fc8(u32 a, const char *s);
}
extern "C" {
u16 func_0207694c(void *p);
}
extern "C" {
void func_02076964(void *p, u16 v);
}
extern "C" {
BOOL _ZN12Unk_020cbb1813func_02072e44Ev(void *g);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_020728d4Ev(void *g);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_020728a4EPhj(void *g, void *p, s32 n);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_02072824Ejj(void *g, s32 a, s32 b);
}
extern "C" {
u32 func_0207e334(u32 a);
}
extern "C" {
BOOL func_0207c014(u32 a);
}
extern "C" {
void *__cxa_vec_ctor(void *, u32, u32, void *(*)(void *), void *(*)(void *));
}
extern "C" {
void __cxa_vec_cleanup(void *, u32, u32, void *(*)(void *));
}
extern "C" {
void _ZN12Unk_020e2a7813func_020a7c3cEv(void *p);
}
extern "C" {
extern void *data_020cbb18;
}
extern "C" {
extern char *data_020e0544;
}
extern "C" {
void func_02077a9c(u32 *o0, u32 *o1, u8 *src);
}
extern "C" {
void func_02077ab4(u8 *out, s32 a, s32 b);
}
extern "C" {
void func_02077404(s32 *out, u16 *dst, u8 *src);
}
extern "C" {
void func_02077428(u8 *out, s32 a, u16 *src);
}
extern "C" {
void func_02077488(u32 a, u16 *b);
}
extern "C" {
void func_02077508(u8 *out, s32 a, u16 *b);
}
extern "C" {
void func_02077558(u32 a, u16 *b);
}
extern "C" {
void func_020775e8(u32 a, u32 b, u32 c, u32 d, u8 e);
}
extern "C" {
void func_02077684(u8 *out, s32 a, u32 b, u16 *c, s32 d, u8 e);
}
extern "C" {
void func_020776fc(u32 a, u32 b, u32 c);
}
extern "C" {
void func_02077734(u32 a, u32 b, u32 c);
}
extern "C" {
void func_020777a0(u8 *out, s32 a, s32 b, u32 c);
}
extern "C" {
void func_020777f0(u32 a, u32 b, u32 c);
}
extern "C" {
void func_0207785c(u8 *out, s32 a, s32 b, u16 *c);
}
extern "C" {
void func_020778b4(u32 a, u32 b, u32 c);
}
extern "C" {
void func_02077944(u32 a, u32 b, u32 c);
}
extern "C" {
void func_020773b8(u32 a, u16 *b);
}
extern "C" {
void func_020779d4(u32 a, u32 b);
}
extern "C" {
void func_02077a54(u32 a, u32 b);
}


static inline BOOL R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}



extern "C" void func_02077a1c(u32 a, u32 b) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_02077a54(a, b);
        }
    }
}

extern "C" void func_020779d4(u32 a, u32 b) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        u8 buf[1];
        func_02077ab4(buf, a, b);
        void *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728d4Ev(g);
        _ZN12Unk_020cbb1813func_020728a4EPhj(g, buf, 1);
        _ZN12Unk_020cbb1813func_02072824Ejj(g, 0x37, 4);
    }
}

extern "C" void func_0207799c(u32 a, u32 b) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_020779d4(a, b);
        }
    }
}

extern "C" void func_02077944(u32 a, u32 b, u32 c) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        u8 buf[1];
        func_02077ab4(buf, a, b);
        void *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728d4Ev(g);
        _ZN12Unk_020cbb1813func_020728a4EPhj(g, buf, 1);
        _ZN12Unk_020cbb1813func_020728a4EPhj(g, &c, 1);
        _ZN12Unk_020cbb1813func_02072824Ejj(g, 0x38, 4);
    }
}

extern "C" void func_0207790c(u32 a, u32 b, u32 c) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_02077944(a, b, c);
        }
    }
}

extern "C" void func_020778b4(u32 a, u32 b, u32 c) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        u8 buf[1];
        func_02077ab4(buf, a, b);
        void *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728d4Ev(g);
        _ZN12Unk_020cbb1813func_020728a4EPhj(g, buf, 1);
        _ZN12Unk_020cbb1813func_020728a4EPhj(g, &c, 1);
        _ZN12Unk_020cbb1813func_02072824Ejj(g, 0x39, 4);
    }
}

extern "C" void func_0207787c(u32 a, u32 b, u32 c) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_020778b4(a, b, c);
        }
    }
}

extern "C" void func_0207785c(u8 *out, s32 a, s32 b, u16 *c) {
    func_02077ab4(out + 2, a, b);
    func_02076964(out, *c);
}

extern "C" void func_0207783c(u32 *o0, u32 *o1, u16 *o2, u8 *src) {
    func_02077a9c(o0, o1, src + 2);
    *o2 = func_0207694c(src);
}

extern "C" void func_020777f0(u32 a, u32 b, u32 c) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        u8 buf[3];
        func_0207785c(buf, a, b, (u16 *)c);
        void *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728d4Ev(g);
        _ZN12Unk_020cbb1813func_020728a4EPhj(g, buf, 3);
        _ZN12Unk_020cbb1813func_02072824Ejj(g, 0x3e, 4);
    }
}

extern "C" void func_020777b8(u32 a, u32 b, u32 c) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_020777f0(a, b, c);
        }
    }
}

extern "C" void func_020777a0(u8 *out, s32 a, s32 b, u32 c) {
    out[0] = ((a << 4) & 0xf0) | (b & 0xf);
    out[1] = c;
}

extern "C" void func_02077780(s32 *o0, u8 *o1, u8 *o2, u8 *src) {
    *o0 = (src[0] >> 4) & 0xf;
    *o1 = src[0] & 0xf;
    *o2 = src[1];
}

extern "C" void func_02077734(u32 a, u32 b, u32 c) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        u8 buf[2];
        func_020777a0(buf, a, c, b);
        void *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728d4Ev(g);
        _ZN12Unk_020cbb1813func_020728a4EPhj(g, buf, 2);
        _ZN12Unk_020cbb1813func_02072824Ejj(g, 0x3c, 4);
    }
}

extern "C" void func_020776fc(u32 a, u32 b, u32 c) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_02077734(a, b, c);
        }
    }
}
extern "C" void func_020776f0(u32 a, u32 b) { func_020776fc(a, b, 0); }
extern "C" void func_020776e4(u32 a) { func_020776fc(a, 0, 1); }
extern "C" void func_020776d8(u32 a) { func_020776fc(a, 1, 2); }
extern "C" void func_020776cc(u32 a, u32 b) { func_020776fc(a, b, 3); }
extern "C" void func_020776c0(u32 a, u32 b) { func_020776fc(a, b, 4); }

extern "C" void func_020776b4(u32 a, u32 b) { func_020776fc(a, b, 5); }

extern "C" void func_02077684(u8 *out, s32 a, u32 b, u16 *c, s32 d, u8 e) {
    out[2] = (d & 7) | (((a << 4) & 0xf0) | ((e & 1) << 3));
    out[3] = b;
    func_02076964(out, *c);
}

extern "C" void func_0207764c(s32 *o0, u8 *o1, u16 *o2, s32 *o3, u8 *o4, u8 *src) {
    *o0 = (src[2] >> 4) & 0xf;
    *o3 = src[2] & 7;
    *o4 = (src[2] >> 3) & 1;
    *o1 = src[3];
    *o2 = func_0207694c(src);
}

extern "C" void func_020775e8(u32 a, u32 b, u32 c, u32 d, u8 e) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        u8 buf[4];
        func_02077684(buf, a, b, (u16 *)c, d, e ? 1 : 0);
        void *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728d4Ev(g);
        _ZN12Unk_020cbb1813func_020728a4EPhj(g, buf, 4);
        _ZN12Unk_020cbb1813func_02072824Ejj(g, 0x3d, 4);
    }
}

extern "C" void func_020775a0(u32 a, u32 b, u32 c, u32 d, u8 e) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_020775e8(a, b, c, d, e);
        }
    }
}

extern "C" void func_02077558(u32 a, u16 *b) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        u8 buf[3];
        func_02077508(buf, a, b);
        void *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728d4Ev(g);
        _ZN12Unk_020cbb1813func_020728a4EPhj(g, buf, 3);
        _ZN12Unk_020cbb1813func_02072824Ejj(g, 0x3f, 4);
    }
}

extern "C" void func_02077520(u32 a, u16 *b) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_02077558(a, b);
        }
    }
}

extern "C" void func_02077508(u8 *out, s32 a, u16 *b) {
    func_02076964(out, *b);
    out[2] = a;
}

extern "C" void func_020774f0(s32 *out, u16 *dst, u8 *src) {
    *out = src[2];
    *dst = func_0207694c(src);
}

extern "C" void func_02077488(u32 a, u16 *b) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        if (R1(b, 0x11a8, 0x12a7)) {
            u8 buf[3];
            func_02077508(buf, a, b);
            void *g = data_020cbb18;
            _ZN12Unk_020cbb1813func_020728d4Ev(g);
            _ZN12Unk_020cbb1813func_020728a4EPhj(g, buf, 3);
            _ZN12Unk_020cbb1813func_02072824Ejj(g, 0x3a, 4);
        }
    }
}

extern "C" void func_02077450(u32 a, u16 *b) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_02077488(a, b);
        }
    }
}

extern "C" void func_02077428(u8 *out, s32 a, u16 *src) {
    s32 i;
    for (i = 0; i < 4; i++) {
        func_02076964(out + i * 2, *src);
        src++;
    }
    out[8] = a;
}

extern "C" void func_02077404(s32 *out, u16 *dst, u8 *src) {
    s32 i;
    *out = src[8];
    for (i = 0; i < 4; i++) {
        *dst = func_0207694c(src + i * 2);
        dst++;
    }
}

extern "C" void func_020773b8(u32 a, u16 *b) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18) && b) {
        u8 buf[9];
        func_02077428(buf, a, b);
        void *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728d4Ev(g);
        _ZN12Unk_020cbb1813func_020728a4EPhj(g, buf, 9);
        _ZN12Unk_020cbb1813func_02072824Ejj(g, 0x3b, 4);
    }
}

extern "C" void func_02077380(u32 a, u16 *b) {
    if (_ZN12Unk_020cbb1813func_02072e44Ev(data_020cbb18)) {
        a = func_0207e334(a);
        if (func_0207c014(a)) {
            func_020773b8(a, b);
        }
    }
}}

Unk_020772cc::Unk_020772cc() {
    using namespace n6;}
namespace n6 {
}

Unk_020772cc::~Unk_020772cc() {
    using namespace n6;}
namespace n6 {


// ---------------------------------------------------------------------------
extern "C" u8 *func_02077374(u8 *p) { return p; }}

void Unk_020772cc::func_02077348(u8 *src) {
    using namespace n6;
    unk_c0 = src[0];
    unk_c1 = src[1];
    unk_c2 = src[2];
    unk_c3 = 0;
    func_0205125c(this, 0xc0);
}
namespace n6 {
}

u8 Unk_020772cc::func_02077340() {
    using namespace n6; return unk_c0; }
namespace n6 {
}

u8 Unk_020772cc::func_02077338() {
    using namespace n6; return unk_c1; }
namespace n6 {
}

u8 Unk_020772cc::func_02077330() {
    using namespace n6; return unk_c2; }
namespace n6 {
}

BOOL Unk_020772cc::func_02077310(s32 i) {
    using namespace n6;
    if (i < 0 || i >= 4) return TRUE;
    if (unk_c3 & (1 << i)) return TRUE;
    return FALSE;
}
namespace n6 {
}

void Unk_020772cc::func_020772f0(s32 i) {
    using namespace n6;
    if (i >= 0 && i < 4) {
        unk_c3 |= (u8)(1 << i);
    }
}
namespace n6 {
}

BOOL Unk_020772cc::func_020772dc() {
    using namespace n6;
    if (unk_c3 & 0x10) return TRUE;
    return FALSE;
}
namespace n6 {
}


void Unk_020772cc::func_020772cc() {
    using namespace n6; unk_c3 |= 0x10; }
namespace n6 {
}

Unk_02077198::Unk_02077198() {
    using namespace n6;}
namespace n6 {
}


Unk_02077198::~Unk_02077198() {
    using namespace n6;}
namespace n6 {
}

Unk_020772cc *Unk_02077198::func_02077280(s32 idx) {
    using namespace n6; return &unk_000[idx]; }
namespace n6 {
}


Unk_020772cc *Unk_02077198::func_02077278(s32 idx) {
    using namespace n6; return func_02077280(idx); }
namespace n6 {
}


void Unk_02077198::func_02077264() {
    using namespace n6;
    unk_b7e = 0;
    unk_b7c = 0;
}
namespace n6 {
}


void Unk_02077198::func_0207723c() {
    using namespace n6;
    func_02077264();
    func_02076fc8(0, data_020e0544);
    func_02076fc8(1, data_020e0544);
}
namespace n6 {
}


u8 Unk_02077198::func_02077230() {
    using namespace n6; return unk_b7e; }
namespace n6 {
}


Unk_020772cc *Unk_02077198::func_020771f0() {
    using namespace n6;
    if (unk_b7e < 15) {
        unk_b7e++;
        return &unk_000[unk_b7e - 1];
    } else {
        func_02077198(0);
        unk_b7e = 15;
        return &unk_000[unk_b7e - 1];
    }
}
namespace n6 {
}

u16 Unk_02077198::func_020771e4() {
    using namespace n6; return unk_b7c; }
namespace n6 {
}


void Unk_02077198::func_020771d8(u16 v) {
    using namespace n6; unk_b7c = v; }
namespace n6 {
}


void Unk_02077198::func_02077198(s32 idx) {
    using namespace n6;
    s32 i;
    for (i = idx; i < unk_b7e - 1; i++) {
        MI_CpuCopy8(&unk_000[i + 1], &unk_000[i], 0xc4);
    }
    unk_b7e--;
}
namespace n6 {
}

Unk_020e0574::Unk_020e0574() {
    using namespace n6; func_020a7c3c(); }
namespace n6 {
}

Unk_020e0574::~Unk_020e0574() {
    using namespace n6;}
namespace n6 {
}

u32 Unk_020e0574::vfunc_08() {
    using namespace n6; return 0xc1; }
namespace n6 {
}


u8 *Unk_020e0574::vfunc_0c() {
    using namespace n6; return unk_12; }
namespace n6 {
}

// ======== unk_020767f8.cpp ========
namespace n5 {
struct Unk_02076f28_T;
struct Unk_02076ff0_Obj;
struct Unk_02077040_A;
struct Unk_02077040_B;
extern "C" {
void MI_CpuCopy8(const void *, void *, u32);
}
extern "C" {
void _ZN12Unk_020cbb1813func_020723a4EPvj(void *ctx, const void *p, u32 n);
}
extern "C" {
void *_ZN12Unk_0209ada413func_0209ada4Ev(void *);
}
extern "C" {
void _ZN12Unk_0209ada413func_0209ada0Ev(void *);
}
extern "C" {
void *func_0207aa78(s32 i);
}
extern "C" {
void func_0207857c(void *p, u32 v);
}
extern "C" {
void *func_02078578(void *p);
}
extern "C" {
u32 func_02078580(void *p);
}
extern "C" {
u32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
}
extern "C" {
u32 _ZN12Unk_0209ada413func_0209ab94Ev(void *);
}
extern "C" {
void _ZN12Unk_0209ada413func_0209ad54EhPth(void *a, u32 b, u32 c, u32 d);
}
extern "C" {
extern u8 *data_020cbb18;
}
extern "C" {
extern u8 *data_021c6218;
}
extern "C" {
s32 func_020eaf18(void);
}
extern "C" {
s32 func_020eaf90(void);
}
extern "C" {
BOOL _ZN12Unk_020cbb1813func_02072e88Ei(void *g, s32 i);
}
extern "C" {
BOOL _ZN12Unk_020cbb1813func_020729ccEj(void *g, s32 i);
}
extern "C" {
BOOL _ZN12Unk_020cbb1813func_02072dc4Ei(void *g, s32 i);
}
extern "C" {
void func_020e85fc(void *g, s32 a);
}
extern "C" {
void func_020e8628(void *g, s32 a, s32 b);
}
extern "C" {
void func_0204f054(void *p);
}
extern "C" {
void FS_LoadOverlayImage(void *p);
}
extern "C" {
void func_0211a258(void *p);
}
extern "C" {
void FS_EndOverlay(void *p);
}
extern "C" {
void func_020e9d94(void);
}
extern "C" {
void func_020ea3dc(void);
}
extern "C" {
void func_020ea3c4(void);
}
extern "C" {
void func_020ea418(void *p, u32 v);
}
extern "C" {
void func_020ea3d0(void *p, u32 v);
}
extern "C" {
void func_0205125c(void *p, u32 n);
}
extern "C" {
void *__cxa_vec_ctor(void *, u32, u32, void *(*)(void *), void *(*)(void *));
}
extern "C" {
void __cxa_vec_cleanup(void *, u32, u32, void *(*)(void *));
}
extern "C" {
s32 func_020e9d7c(void);
}
extern "C" {
u64 func_020ea34c(u32 a);
}
extern "C" {
BOOL func_020ea358(u32 ctx, void *out, u64 key);
}
extern "C" {
void MI_CpuFill8(void *p, u32 v, u32 n);
}
extern "C" {
s32 func_020e9d88(void *p, void *q);
}
extern "C" {
void _ZN12Unk_0207719813func_02077230Ev(void *p);
}
extern "C" {
void *_ZN12Unk_0207719813func_020771f0Ev(void *p);
}
extern "C" {
void func_0209cf88(void *p);
}
extern "C" {
void _ZN12Unk_020772cc13func_02077348EPh(void *p, void *q);
}
extern "C" {
void _ZN12Unk_020772cc13func_020772ccEv(void *p);
}
extern "C" {
u8 *func_02077374(void *p);
}
extern "C" {
void _ZN12Unk_020e0574C1Ev(void *p);
}
extern "C" {
void _ZN12Unk_020e0574D1Ev(void *p);
}
extern "C" {
void _ZN12Unk_020e0488C1Ev(void *p);
}
extern "C" {
void _ZN12Unk_020e0488D1Ev(void *p);
}
extern "C" {
void _ZN12Unk_020e0470C1Ev(void *p);
}
extern "C" {
void _ZN12Unk_020e0470D1Ev(void *p);
}
extern "C" {
void *func_020a6b9c(void *p, s32 i);
}
extern "C" {
void _ZN12Unk_020e2a7813func_020a7a64EPh(void *p, void *q);
}
extern "C" {
void _ZN12Unk_020e2a6013func_020a77f8EP12Unk_020e2a78(void *p, void *q);
}
extern "C" {
void _ZN12Unk_020e2a7813func_020a7c3cEv(void *p);
}
extern "C" {
void func_02050e90(void *p, void *q, u32 n);
}
extern "C" {
s32 _ZN12Unk_020e047013func_0206f828Ev(void *p);
}
extern "C" {
void func_0203ce60(void *a, void *b, u32 c);
}
extern "C" {
void func_020a791c(void *p);
}
extern "C" {
void func_020a78ac(void *p);
}
extern "C" {
void _ZdlPv(void *);
}
extern "C" {
void func_02076ff0(u32 a, u32 b, u32 c, u32 d, u8 e);
}
extern "C" {
void _ZN12Unk_02076f70D1Ev(void *p);
}
extern "C" {
void _ZN12Unk_02076f70C1Ev(void *p);
}
extern "C" {
void func_02076cf0(void *p);
}
extern "C" {
void func_02076cf4(void *p);
}
extern "C" {
void func_02076f1c(void *p);
}
extern "C" {
void *func_02076d18(void *p, void *q);
}
extern "C" {
void *func_02076d30(void *p);
}
extern "C" {
void *func_02076d40(void *p);
}
extern "C" {
BOOL func_02076f04(void);
}
extern "C" {
void func_02076a8c(u8 *p, u32 *out, u8 *out2);
}
extern "C" {
void func_02076a2c(u8 *p, u32 *out, u32 *x);
}
extern "C" {
void func_02076a6c(u8 *p, s32 v, s32 x);
}
extern "C" {
void func_02076ac8(u8 *p, s32 v, u8 hi);
}
extern "C" {
BOOL func_02077040(void *self, void *p);
}
extern "C" {
BOOL func_02076b40(u32 mask);
}
extern "C" {
u64 _ll_mul(u64 a, u64 b);
}
extern "C" {
Unk_02076d68_E *func_02076db4(void);
}
extern "C" {
u32 func_02076e1c(void *);
}
extern "C" {
void func_02077118(void *a, u32 b, u32 c);
}
extern "C" {
s32 func_02076eec(void);
}
extern "C" {
extern u8 data_021e87d8[];
}
extern "C" {
extern u8 data_021edb68[];
}



struct Unk_02076f28_T {
    s32 a, b, c;
    ~Unk_02076f28_T() { _ZN12Unk_02076f70D1Ev(this); }
};

struct Unk_02076ff0_Obj {
    u32 pad[0xd8 / 4];
    Unk_02076ff0_Obj() { _ZN12Unk_020e0574C1Ev(this); }
    ~Unk_02076ff0_Obj() { _ZN12Unk_020e0574D1Ev(this); }
};

struct Unk_02077040_A { u32 pad[0x40 / 4]; Unk_02077040_A() { _ZN12Unk_020e0488C1Ev(this); } ~Unk_02077040_A() { _ZN12Unk_020e0488D1Ev(this); } };
struct Unk_02077040_B { u32 pad[0x3c / 4]; Unk_02077040_B() { _ZN12Unk_020e0470C1Ev(this); } ~Unk_02077040_B() { _ZN12Unk_020e0470D1Ev(this); } };


extern "C" void func_02077118(void *a, u32 b, u32 c) {
    volatile u8 v = *data_021edb68;
    v = (u8)b;
    func_0203ce60(a, (void *)&v, c);
}}


Unk_020e055c::Unk_020e055c() {
    using namespace n5;}
namespace n5 {
}

Unk_020e055c::~Unk_020e055c() {
    using namespace n5;}
namespace n5 {
}

u32 Unk_020e055c::vfunc_08() {
    using namespace n5; return 0xc0; }
namespace n5 {
}

u8 *Unk_020e055c::vfunc_0c() {
    using namespace n5; return unk_0e; }
namespace n5 {


extern "C" BOOL func_02077040(void *self, void *r1) {
    Unk_02077040_A o1;
    Unk_02077040_B o2;
    u8 *buf = func_02077374(self);
    s32 n = 0;
    s32 i = n;
    for (; i < 6; i++) {
        void *e = func_020a6b9c((u8 *)r1 + 0x12, i);
        if (e != NULL) {
            _ZN12Unk_020e2a7813func_020a7a64EPh(&o1, e);
            _ZN12Unk_020e2a6013func_020a77f8EP12Unk_020e2a78(&o2, &o1);
            func_02050e90(&o2, buf + n, 0x28);
            n = n + _ZN12Unk_020e047013func_0206f828Ev(&o2);
            buf[n] = 0x86;
            n = n + 1;
        } else {
            _ZN12Unk_020e2a7813func_020a7c3cEv(&o1);
            buf[n] = 0x86;
            n++;
        }
    }
    return TRUE;
}

extern "C" void func_02076ff0(u32 a, u32 b, u32 c, u32 d, u8 e) {
    Unk_02076ff0_Obj o;
    u8 l[3];
    func_02077118(&o, a, b);
    void *r = _ZN12Unk_0207719813func_020771f0Ev(data_021e87d8);
    l[2] = c;
    l[1] = d;
    l[0] = e;
    _ZN12Unk_020772cc13func_02077348EPh(r, l);
    func_02077040(r, &o);
}

extern "C" void func_02076fc8(u32 a, u32 b) {
    Unk_02076fc8_D d;
    func_0209cf88(&d);
    func_02076ff0(a, b, d.c, d.b, d.a);
}

extern "C" void func_02076f88(void *dst) {
    u32 loc;
    void *r = _ZN12Unk_0207719813func_020771f0Ev(data_021e87d8);
    func_0209cf88(&loc);
    _ZN12Unk_020772cc13func_02077348EPh(r, &loc);
    _ZN12Unk_020772cc13func_020772ccEv(r);
    MI_CpuCopy8(dst, func_02077374(r), 0xc0);
}

extern "C" void func_02076f78(void) { _ZN12Unk_0207719813func_02077230Ev(data_021e87d8); }

extern "C" void _ZN12Unk_02076f70C1Ev(void *) {}
extern "C" void _ZN12Unk_02076f70D1Ev(void *) {}

extern "C" void *func_02076f58(void *p, void *q) {
    MI_CpuCopy8(q, p, 12);
    return p;
}

extern "C" s32 func_02076f28(void *self, Unk_02076f28_T *src) {
    Unk_02076f28_T t = *src;
    return func_020e9d88(self, &t);
}

extern "C" void func_02076f1c(void *p) { MI_CpuFill8(p, 0, 0xc); }

extern "C" BOOL func_02076f04(void) {
    if (func_020e9d7c() != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02076eec(void) {
    if (func_020e9d7c() == 2) {
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02076e88(void *out, u8 *data, u32 ctx) {
    u8 tmp[12];
    u64 acc = 0;
    u64 i = 0;
    do {
        u64 m = _ll_mul(acc, 10);
        acc = m + (u32)data[i];
        i++;
    } while (i < 12);
    if (!func_020ea358(ctx, tmp, acc)) {
        return FALSE;
    }
    MI_CpuCopy8(tmp, out, 12);
    return TRUE;
}

extern "C" BOOL func_02076e38(u32 a, u8 *buf) {
    u64 v;
    s32 i;
    if (func_020e9d7c() != 2) {
        return FALSE;
    }
    v = func_020ea34c(a);
    for (i = 11; i >= 0; i--) {
        buf[i] = (u8)(v % 10);
        v = v / 10;
    }
    return TRUE;
}

extern "C" BOOL func_02076e20(void) {
    if (func_02076eec() == 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" u32 func_02076e1c(void *) {}

extern "C" void *func_02076df4(void *p) {
    __cxa_vec_ctor(p, 0x20, 0x1c, func_02076d40, func_02076d30);
    return p;
}

extern "C" void *func_02076dd8(void *p) {
    __cxa_vec_cleanup(p, 0x20, 0x1c, func_02076d30);
    return p;
}

extern "C" void func_02076db8(Unk_02076d68_E *base) {
    s32 i;
    for (i = 0; i < 0x20; i++) {
        func_02076cf4(&base[i]);
    }
}

extern "C" Unk_02076d68_E *func_02076db4(void) {}

extern "C" void func_02076d68(void) {
    Unk_02076d68_E *base = func_02076db4();
    s32 i, n;
    n = 0;
    i = n;
    for (; i < 0x20; i++) {
        Unk_02076d68_E *e = &base[i];
        func_02076cf0(e);
        if (func_02076f04()) {
            if (i != n) {
                func_02076d18(&base[n], e);
                func_02076cf4(e);
            }
            n++;
        }
    }
}
extern "C" void func_02076d5c(u8 *p, u16 v) { *(u16 *)(p + 0x380) = v; }

extern "C" u16 func_02076d50(u8 *p) { return *(u16 *)(p + 0x380); }

extern "C" void *func_02076d40(void *p) {
    _ZN12Unk_02076f70C1Ev(p);
    return p;
}

extern "C" void *func_02076d30(void *p) {
    _ZN12Unk_02076f70D1Ev(p);
    return p;
}

extern "C" void *func_02076d18(void *p, void *q) {
    MI_CpuCopy8(q, p, 0x1c);
    return p;
}


extern "C" void func_02076cf4(void *pp) {
    u8 *p = (u8 *)pp;
    func_02076f1c(p);
    func_0205125c(p + 0xc, 8);
    func_0205125c(p + 0x14, 8);
}
extern "C" void func_02076cf0(void *p) {}
extern "C" u8 *func_02076cec(u8 *p) { return p + 0xc; }

extern "C" u8 *func_02076ce8(u8 *p) { return p + 0x14; }

extern "C" u8 *func_02076cd4(u8 *p) {
    _ZN12Unk_02076f70C1Ev(p + 0x40);
    return p;
}

extern "C" u8 *func_02076cc0(u8 *p) {
    _ZN12Unk_02076f70D1Ev(p + 0x40);
    return p;
}

extern "C" void func_02076c9c(u8 *p) {
    func_020ea418(p, 0x41444d45);
    u32 r = func_02076e1c(p + 0x40);
    func_020ea3d0(p, r);
}
extern "C" void func_02076c94(void) { func_020ea3c4(); }
extern "C" void func_02076c8c(void) { func_020ea3dc(); }

extern "C" void func_02076c84(void) { func_020e9d94(); }

extern "C" void func_02076c80(void) {}

extern "C" u8 *func_02076c7c(u8 *p) { return p + 0x40; }

extern "C" void func_02076c74(u8 *p, u16 v) { *(u16 *)(p + 0x4c) = v; }

extern "C" u16 func_02076c6c(u8 *p) { return *(u16 *)(p + 0x4c); }

}
Unk_021cc7d0::~Unk_021cc7d0() {}
namespace n5 {

extern "C" void func_02076c50(Unk_02076c24_S *s) {
    FS_EndOverlay(s->unk_08);
    s->unk_00 = -1;
}

extern "C" void func_02076c24(Unk_02076c24_S *s, s32 v) {
    s->unk_04 = 1;
    s->unk_00 = v;
    func_0204f054(s->unk_08);
    FS_LoadOverlayImage(s->unk_08);
    func_0211a258(s->unk_08);
    s->unk_04 = 0;
}

extern "C" s32 func_02076c0c(s32 x) {
    if (x >= func_020eaf90()) {
        x--;
    }
    return x;
}

extern "C" void func_02076c04(u8 *p, s32 a) { *p = a & 3; }

extern "C" void func_02076bf0(u8 *p, s32 a, s32 b) { *p = ((b & 0x1f) << 2) | 0x80 | (a & 3); }

extern "C" BOOL func_02076bdc(u8 *p) {
    if ((*p & 0x80) != 0) {
        return TRUE;
    }
    return FALSE;
}

extern "C" u32 func_02076bd4(u8 *p) { return *p & 3; }

extern "C" u32 func_02076bc8(u8 *p) { return (*p >> 2) & 0x1f; }

extern "C" void func_02076bb0(s32 a, s32 b) { func_020e8628(data_021c6218, a, b); }

extern "C" void func_02076b9c(s32 a) { func_020e85fc(data_021c6218, a); }

extern "C" BOOL func_02076b40(u32 mask) {
    s32 i = 3;
    void *g = data_020cbb18;
    u32 one = 1;
    for (; i >= 0; i--) {
        if (!_ZN12Unk_020cbb1813func_02072e88Ei(g, i)) continue;
        if (_ZN12Unk_020cbb1813func_020729ccEj(g, i)) continue;
        u32 t = (u16)(one << i);
        t &= mask;
        if (t == 0) continue;
        if (_ZN12Unk_020cbb1813func_02072dc4Ei(g, i)) continue;
        return FALSE;
    }
    return TRUE;
}

extern "C" void func_02076b34(void) { func_02076b40(0xf); }

extern "C" BOOL func_02076b18(void) {
    s32 r = func_020eaf18();
    switch (r) {
    case 3:
    case 4:
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02076b08(u8 *p, s32 v, s32 w) { p[0] = ((w << 6) & 0xc0) | (v & 0x3f); }

extern "C" void func_02076ae8(u8 *p, u8 *a, u8 *out) {
    if (out != NULL) {
        *out = ((u32)p[0] >> 6) & 3;
    }
    *a = p[0] & 0x3f;
}

extern "C" void func_02076ac8(u8 *p, s32 v, u8 hi) {
    p[0] = ((hi << 4) & 0xf0) | ((v >> 16) & 0xf);
    p[1] = v >> 8;
    p[2] = v;
}

extern "C" void func_02076a8c(u8 *p, u32 *out, u8 *out2) {
    if (out2 != NULL) {
        *out2 = ((u32)p[0] >> 4) & 0xf;
    }
    *out = (p[2] & 0xff) | (((p[0] << 16) & 0xf0000) | ((p[1] << 8) & 0xff00));
}

extern "C" void func_02076a6c(u8 *p, s32 v, s32 x) {
    p[0] = v >> 8;
    p[1] = v;
    func_02076ac8(p + 2, x, (u8)((v >> 16) & 0xf));
}

extern "C" void func_02076a2c(u8 *p, u32 *out, u32 *x) {
    u8 t;
    func_02076a8c(p + 2, x, &t);
    *out = (p[1] & 0xff) | (((t << 16) & 0xf0000) | ((p[0] << 8) & 0xff00));
}

extern "C" void func_02076a04(u8 *p, s32 a, s32 x, s32 y, u8 z) {
    func_02076a6c(p, a, x + 0x80000);
    func_02076ac8(p + 5, y, z);
}

extern "C" void func_020769dc(u8 *p, u32 *out, s32 *x, u32 *y, u8 *z) {
    func_02076a2c(p, out, (u32 *)x);
    *x = *x - 0x80000;
    func_02076a8c(p + 5, y, z);
}

extern "C" void func_020769c4(void *dst, s16 v) { MI_CpuCopy8(&v, dst, 2); }

extern "C" s16 func_020769ac(void *src) {
    s16 v;
    MI_CpuCopy8(src, &v, 2);
    return v;
}

extern "C" void func_02076994(void *dst, s16 v) { MI_CpuCopy8(&v, dst, 2); }

extern "C" s16 func_0207697c(void *src) {
    s16 v;
    MI_CpuCopy8(src, &v, 2);
    return v;
}

extern "C" void func_02076964(void *dst, u16 v) { MI_CpuCopy8(&v, dst, 2); }

extern "C" u16 func_0207694c(void *src) {
    u16 v;
    MI_CpuCopy8(src, &v, 2);
    return v;
}

extern "C" void func_02076934(void *dst, u16 v) { MI_CpuCopy8(&v, dst, 2); }

extern "C" u16 func_0207691c(void *src) {
    u16 v;
    MI_CpuCopy8(src, &v, 2);
    return v;
}

extern "C" void func_02076918(void) {}

extern "C" void func_020768a4(void) {
    Unk_020767f8_Tag t;
    u32 v;
    Unk_020767f8_Tag *tp = &t;
    void *p;
    s32 i;
    void *ctx;
    t.b = 3;
    i = 0;
    ctx = data_020cbb18;
    for (; i < 8; i++) {
        p = func_0207aa78(i);
        if (p != NULL) {
            t.b = (u8)func_02078580(p);
        } else {
            t.b = 3;
        }
        _ZN12Unk_020cbb1813func_020723a4EPvj(ctx, &t.b, 1);
        _ZN12Unk_020cbb1813func_020723a4EPvj(ctx, func_02078578(p), 12);
        v = *(u32 *)((u8 *)p + 0x20);
        _ZN12Unk_020cbb1813func_020723a4EPvj(ctx, &v, 4);
        t.h = *(u16 *)((u8 *)p + 0x24);
        _ZN12Unk_020cbb1813func_020723a4EPvj(ctx, &t.h, 2);
    }
}

extern "C" void func_020768a0(void) {}

// ---------------------------------------------------------------------------
extern "C" void func_020767f8(u8 *buf) {
    Unk_020767f8_Tag t;
    u8 obj[0x10];
    u32 v;
    u32 z8 = 0, zc = 0, z10 = 0;
    Unk_020767f8_Tag *tp = &t;
    s32 i;
    t.b = 3;
    _ZN12Unk_0209ada413func_0209ada4Ev(obj);
    for (i = 0; i < 8; i++) {
        void *p = func_0207aa78(i);
        t.b = 3;
        MI_CpuCopy8(buf, &t.b, 1);
        func_0207857c(p, t.b);
        MI_CpuCopy8(buf + 1, obj, 12);
        void *q = func_02078578(p);
        u32 a = _ZN12Unk_0209ada413func_0209ac64Ev(obj);
        u32 b = _ZN12Unk_0209ada413func_0209ab94Ev(obj);
        _ZN12Unk_0209ada413func_0209ad54EhPth(q, a, b, z8);
        v = zc;
        MI_CpuCopy8(buf + 13, &v, 4);
        *(u32 *)((u8 *)p + 0x20) = v;
        t.h = z10;
        MI_CpuCopy8(buf + 17, &t.h, 2);
        *(u16 *)((u8 *)p + 0x24) = t.h;
        buf += 0x13;
    }
    _ZN12Unk_0209ada413func_0209ada0Ev(obj);
}

}

// ======== unk_02075e60.cpp ========
namespace n4 {
class Unk_020cbb18;
extern "C" {
extern Unk_020cbb18 *data_020cbb18;
}
extern "C" {
extern u8 data_020e416c;
}
extern "C" {
extern u8 data_ov003_02258efc;
}
extern "C" {
extern void *data_021f482c;
}
extern "C" {
extern void (*data_020cbb1c[])(u32);
}
extern "C" {
extern void (*data_020cbb24[])(u8 *, u32);
}
extern "C" {
extern u8 data_020cbb2c[];
}
extern "C" {
extern u16 data_020cbbd4[];
}
extern "C" {
extern void (*data_020cbd60[])(void *);
}
extern "C" {
extern void (*data_020cbe78[])(void *, u32, u32);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_02072770EPhj(Unk_020cbb18 *g, void *out, u32 idx);
}
extern "C" {
void func_ov003_02226e70(u32 v);
}
extern "C" {
u32 func_ov003_02226180(u32 v);
}
extern "C" {
s32 func_ov003_02227100(u32 v);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_02072968Ei(Unk_020cbb18 *g, u32 i);
}
extern "C" {
void *_ZN12Unk_020cbb1813func_02072970Ej(Unk_020cbb18 *g, u32 i);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072960Eij(Unk_020cbb18 *g, u32 i, s32 v);
}
extern "C" {
void _ZN12Unk_020cbb1813func_020728d4Ev(Unk_020cbb18 *g);
}
extern "C" {
void _ZN12Unk_020cbb1813func_020728a4EPhj(Unk_020cbb18 *g, void *p, s32 n);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072824Ejj(Unk_020cbb18 *g, u32 a, u32 b);
}
extern "C" {
void func_020ac7e8(u32 a);
}
extern "C" {
void func_020ac7f8(void *p, u32 a);
}
extern "C" {
void func_0209c3cc(void *p);
}
extern "C" {
void func_020b1234(void *p, u32 a);
}
extern "C" {
void func_020b1260(void *p, u32 a);
}
extern "C" {
void func_020b1388(void *p);
}
extern "C" {
void func_02051f40(u32 a);
}
extern "C" {
void func_02051f50(u32 a);
}
extern "C" {
void func_02051f68(void *p, u32 a);
}
extern "C" {
void func_02051fcc(void *p);
}
extern "C" {
void func_020520d0(u32 a, void *p);
}
extern "C" {
void func_02052134(u32 a, void *p);
}
extern "C" {
void func_020520a8(u32 a, void *p);
}
extern "C" {
void func_0205218c(void *p);
}
extern "C" {
void func_020521fc(void *p);
}
extern "C" {
void func_0203eb60(void *p, u32 a);
}
extern "C" {
void *func_020e8618(void *g, u32 a);
}
extern "C" {
void func_020e85fc(void *g, void *p);
}
extern "C" {
void func_0206f804(void *p, u32 a);
}
extern "C" {
void func_02070560(void *p);
}
extern "C" {
void func_02034048(void *p);
}
extern "C" {
void *func_02076bb0(u32 a, u32 b);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072994EPh(Unk_020cbb18 *g, void *p);
}
extern "C" {
void MI_CpuFill8(void *p, u32 a, u32 b);
}
extern "C" {
void MI_CpuCopy8(void *src, void *dst, u32 n);
}
extern "C" {
s32 func_02063a04(void *a, void *b, u32 n);
}
extern "C" {
void func_020842c0(u32 a, u32 b);
}
extern "C" {
void func_020843c4(u32 a, u32 b);
}
extern "C" {
void func_02084404(u32 a, u32 b);
}
extern "C" {
void func_020954f8(u32 a, u32 b);
}
extern "C" {
void func_02038828(u32 a, u32 b, u32 c);
}
extern "C" {
void func_ov003_0222e640(u32 a, u32 b, u32 c);
}
extern "C" {
void func_020769c4(u32 a, s32 b);
}
extern "C" {
void func_02076a6c(u32 a, s32 b, s32 c);
}
extern "C" {
s32 _Z13func_020720f8v();
}
extern "C" {
s32 func_020eaca0();
}
extern "C" {
void _ZN12Unk_020cbb1813func_020723d4Ev(Unk_020cbb18 *g);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_02072ddcEi(Unk_020cbb18 *g, u32 n);
}
extern "C" {
void func_02076bf0(s32 p, u32 a, u32 b);
}
extern "C" {
void _ZN12Unk_020cbb1813func_020723ecEj(Unk_020cbb18 *g, u32 n);
}
extern "C" {
u32 _ZN12Unk_020cbb1813func_020723e0Ev(Unk_020cbb18 *g);
}
extern "C" {
void func_0207664c(u32 i);
}
extern "C" {
u32 func_020766e0(u32 i);
}
extern "C" {
void func_02076610(u32 a, s16 *b);
}
extern "C" {
void func_0207663c(u32 a, s32 *b);
}
extern "C" {
static inline BOOL Unk_02075e60_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
}


class Unk_020cbb18 {
public:
    /* 0x00 */ u8 unk_00[0x64];
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ u8 unk_68[0x8];
    /* 0x70 */ void *unk_70;
};
extern "C" s32 func_02076744(u32 a) {
    struct { u16 len; u8 hdr[3]; } l;
    _Z13func_020720f8v();
    if (func_020eaca0() == 0) {
        return 0;
    }
    Unk_020cbb18 *g = data_020cbb18;
    _ZN12Unk_020cbb1813func_020723d4Ev(g);
    func_02076bf0(_ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 0, 0xd);
    _ZN12Unk_020cbb1813func_020723ecEj(g, 1);
    s32 i = 0;
    goto test0;
loop0:
    {
        u32 s = _ZN12Unk_020cbb1813func_020723e0Ev(g);
        u8 *dst = (u8 *)_ZN12Unk_020cbb1813func_02072ddcEi(g, 4) + s;
        _ZN12Unk_020cbb1813func_020723ecEj(g, s + 3);
        data_020cbb1c[i](a);
        u32 e = _ZN12Unk_020cbb1813func_020723e0Ev(g);
        if (e <= s + 3) {
            _ZN12Unk_020cbb1813func_020723ecEj(g, s);
        } else {
            l.len = e - s - 3;
            MI_CpuCopy8(&l.len, l.hdr, 2);
            l.hdr[2] = i;
            MI_CpuCopy8(l.hdr, dst, 3);
        }
    }
    i++;
test0:
    if (i < 2) goto loop0;
    return 1;
}
extern "C" void func_020766ec(u8 *p, u32 n) {
    struct { u8 id; u8 pad; u16 len; } h;
    u8 buf[3];
    while (n != 0) {
        MI_CpuCopy8(p, buf, 3);
        p += 3;
        n -= 3;
        MI_CpuCopy8(buf, &h.len, 2);
        MI_CpuCopy8(buf + 2, &h.id, 1);
        u32 len = h.len;
        u32 id = *(volatile u8 *)&h.id;
        data_020cbb24[id](p, len);
        p += len;
        n -= len;
    }
}
extern "C" u32 func_020766e0(u32 i) { return data_020cbb2c[i]; }
extern "C" u32 func_020766d4(u32 i) { return data_020cbbd4[i]; }
extern "C" void func_020766c8(u32 a) { func_02084404(a, 0xc); }
extern "C" void func_020766bc(u32 a) { func_02084404(a, 0xd); }
extern "C" void func_020766b0(u32 a) { func_02084404(a, 0xe); }
extern "C" void func_020766a4(u32 a) { func_02084404(a, 0xf); }
extern "C" void func_02076698(u32 a) { func_02084404(a, 0x10); }
extern "C" void func_0207668c(u32 a) { func_02084404(a, 0x11); }
extern "C" void func_02076680(u32 a) { func_02084404(a, 0x12); }
extern "C" void func_02076674(u32 a) { func_02084404(a, 0x13); }
extern "C" void func_0207664c(u32 i) {
    void (*f)(void *) = data_020cbd60[i];
    if (f) {
        void *o = _ZN12Unk_020cbb1813func_02072970Ej(data_020cbb18, i);
        f(o);
    }
}
extern "C" void func_0207663c(u32 a, s32 *b) { func_02076a6c(a, b[0], b[2]); }
extern "C" void func_02076634(u32 a, s32 *b) { func_0207663c(a, b); }
extern "C" void func_0207662c(u32 a, s32 *b) { func_0207663c(a, b); }
extern "C" void func_02076624(u32 a, s32 *b) { func_0207663c(a, b); }
extern "C" void func_0207661c(u32 a, s32 *b) { func_0207663c(a, b); }
extern "C" void func_02076610(u32 a, s16 *b) { func_020769c4(a, *b); }
extern "C" void func_02076608(u32 a, s16 *b) { func_02076610(a, b); }
extern "C" void func_02076600(u32 a, s16 *b) { func_02076610(a, b); }
extern "C" void func_020765f8(u32 a, s16 *b) { func_02076610(a, b); }
extern "C" void func_020765f0(u32 a, s16 *b) { func_02076610(a, b); }
extern "C" void func_020765e4(u32 a) { func_020954f8(a, 0x8); }
extern "C" void func_020765d8(u32 a) { func_020954f8(a, 0x9); }
extern "C" void func_020765cc(u32 a) { func_020954f8(a, 0xa); }
extern "C" void func_020765c0(u32 a) { func_020954f8(a, 0xb); }
extern "C" void func_020765b4(u32 a) { func_020843c4(a, 0xc); }
extern "C" void func_020765a8(u32 a) { func_020843c4(a, 0xd); }
extern "C" void func_0207659c(u32 a) { func_020843c4(a, 0xe); }
extern "C" void func_02076590(u32 a) { func_020843c4(a, 0xf); }
extern "C" void func_02076584(u32 a) { func_020843c4(a, 0x10); }
extern "C" void func_02076578(u32 a) { func_020843c4(a, 0x11); }
extern "C" void func_0207656c(u32 a) { func_020843c4(a, 0x12); }
extern "C" void func_02076560(u32 a) { func_020843c4(a, 0x13); }
extern "C" void func_02076554(u32 a, u32 b) { func_02038828(a, 0x14, b); }
extern "C" void func_02076548(u32 a, u32 b) { func_02038828(a, 0x15, b); }
extern "C" void func_0207653c(u32 a, u32 b) { func_02038828(a, 0x16, b); }
extern "C" void func_02076530(u32 a, u32 b) { func_02038828(a, 0x17, b); }
extern "C" void func_02076524(u32 a, u32 b) { func_ov003_0222e640(a, 0x18, b); }
extern "C" void func_02076518(u32 a, u32 b) { func_ov003_0222e640(a, 0x19, b); }
extern "C" void func_0207650c(u32 a, u32 b) { func_ov003_0222e640(a, 0x1a, b); }
extern "C" void func_02076500(u32 a, u32 b) { func_ov003_0222e640(a, 0x1b, b); }
extern "C" void func_020764f4(u32 a, u32 b) { func_ov003_0222e640(a, 0x1c, b); }
extern "C" void func_020764e8(u32 a, u32 b) { func_ov003_0222e640(a, 0x1d, b); }
extern "C" void func_020764dc(u32 a, u32 b) { func_ov003_0222e640(a, 0x1e, b); }
extern "C" void func_020764d0(u32 a, u32 b) { func_ov003_0222e640(a, 0x1f, b); }
extern "C" void func_020764c4(u32 a) { func_020842c0(a, 0x20); }
extern "C" void func_020764b8(u32 a) { func_020842c0(a, 0x21); }
extern "C" void func_020764ac(u32 a) { func_020842c0(a, 0x22); }
extern "C" void func_020764a0(u32 a) { func_020842c0(a, 0x23); }
extern "C" void func_02076494(u32 a) { func_020842c0(a, 0x24); }
extern "C" void func_02076488(u32 a) { func_020842c0(a, 0x25); }
extern "C" void func_0207647c(u32 a) { func_020842c0(a, 0x26); }
extern "C" void func_02076470(u32 a) { func_020842c0(a, 0x27); }
extern "C" void func_02076464(u32 a) { func_020842c0(a, 0x28); }
extern "C" void func_02076458(u32 a) { func_020842c0(a, 0x29); }
extern "C" void func_0207644c(u32 a) { func_020842c0(a, 0x2a); }
extern "C" void func_02076440(u32 a) { func_020842c0(a, 0x2b); }
extern "C" void func_02076434(u32 a) { func_020842c0(a, 0x2c); }
extern "C" void func_02076428(u32 a) { func_020842c0(a, 0x2d); }
extern "C" void func_0207641c(u32 a) { func_020842c0(a, 0x2e); }
extern "C" void func_02076410(u32 a) { func_020842c0(a, 0x2f); }
extern "C" void func_02076404(u32 a) { func_020842c0(a, 0x30); }
extern "C" void func_020763f8(u32 a) { func_020842c0(a, 0x31); }
extern "C" void func_020763ec(u32 a) { func_020842c0(a, 0x32); }
extern "C" void func_020763e0(u32 a) { func_020842c0(a, 0x33); }
extern "C" void func_020763d4(u32 a) { func_020842c0(a, 0x34); }
extern "C" void func_020763c8(u32 a) { func_020842c0(a, 0x35); }
extern "C" void func_020763bc(u32 a) { func_020842c0(a, 0x36); }
extern "C" void func_020763b0(u32 a) { func_020842c0(a, 0x37); }
extern "C" void func_020763a4(u32 a) { func_020842c0(a, 0x38); }
extern "C" void func_02076398(u32 a) { func_020842c0(a, 0x39); }
extern "C" void func_0207638c(u32 a) { func_020842c0(a, 0x3a); }
extern "C" void func_02076380(u32 a) { func_020842c0(a, 0x3b); }
extern "C" void func_02076374(u32 a) { func_020842c0(a, 0x3c); }
extern "C" void func_02076368(u32 a) { func_020842c0(a, 0x3d); }
extern "C" void func_0207635c(u32 a) { func_020842c0(a, 0x3e); }
extern "C" void func_02076350(u32 a) { func_020842c0(a, 0x3f); }
extern "C" void func_02076344(u32 a) { func_020842c0(a, 0x40); }
extern "C" void func_02076338(u32 a) { func_020842c0(a, 0x41); }
extern "C" void func_0207632c(u32 a) { func_020842c0(a, 0x42); }
extern "C" void func_02076320(u32 a) { func_020842c0(a, 0x43); }
extern "C" void func_02076314(u32 a) { func_020842c0(a, 0x44); }
extern "C" void func_02076308(u32 a) { func_020842c0(a, 0x45); }
extern "C" void func_02076280(u32 a, u32 b, u32 c, s32 d) {
    Unk_020cbb18 *g = data_020cbb18;
    s32 r = _ZN12Unk_020cbb1813func_02072968Ei(g, a);
    u32 sz = func_020766e0(a);
    void *obj = _ZN12Unk_020cbb1813func_02072970Ej(g, a);
    if (r == 0 && d == 0) {
        MI_CpuCopy8(obj, g->unk_70, sz);
    }
    data_020cbe78[a](obj, b, c);
    if (d != 0) {
        _ZN12Unk_020cbb1813func_02072960Eij(g, a, 1);
    } else if (r == 0) {
        Unk_020cbb18 *h = data_020cbb18;
        s32 v = func_02063a04(obj, h->unk_70, sz);
        _ZN12Unk_020cbb1813func_02072960Eij(h, a, v);
    }
}
extern "C" void func_02076240() {
    void *p = func_02076bb0(0x68c, 4);
    _ZN12Unk_020cbb1813func_02072994EPh(data_020cbb18, p);
    if (p) {
        MI_CpuFill8(p, 0, 0x68c);
    }
    for (s32 i = 0; i < 0x46; i++) {
        func_0207664c(i);
    }
}
extern "C" void func_02076220(u32 a) {
    u8 buf[4];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, a);
    func_02034048(buf);
}
extern "C" void func_02076200(u32 a) {
    u8 buf[4];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, a);
    func_02070560(buf);
}
extern "C" void func_020761bc(u32 a, u32 b, u32 c, u32 d) {
    void *g = data_021f482c;
    void *r = func_020e8618(g, a);
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, r, a);
    func_0206f804(r, d);
    func_020e85fc(g, r);
}
extern "C" void func_02076194(u32 a, u32 b, u32 c, u32 d) {
    u8 buf[8];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, a);
    func_0203eb60(buf, d);
}
extern "C" void func_02076174(u32 a) {
    u8 buf[4];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, a);
    func_020521fc(buf);
}
extern "C" void func_02076154(u32 a) {
    u8 buf[4];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, a);
    func_0205218c(buf);
}
extern "C" void func_0207612c(u32 a, u32 b, u32 c) {
    u8 buf[8];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, 4);
    func_020520a8(c, buf);
}
extern "C" void func_02076104(u32 a, u32 b, u32 c) {
    u8 buf[8];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, 4);
    func_02052134(c, buf);
}
extern "C" void func_020760dc(u32 a, u32 b, u32 c) {
    u8 buf[8];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, 4);
    func_020520d0(c, buf);
}
extern "C" void func_020760bc(u32 a) {
    u8 buf[4];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, a);
    func_02051fcc(buf);
}
extern "C" void func_02076094(u32 a, u32 b, u32 c, u32 d) {
    u8 buf[8];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, 3);
    func_02051f68(buf, d);
}
extern "C" void func_02076088() { func_02051f50(1); }
extern "C" void func_0207607c() { func_02051f50(0); }
extern "C" void func_02076070(u32 a, u32 b, u32 c, u32 d) { func_02051f40(d); }
extern "C" void func_02076050(u32 a) {
    u8 buf[4];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, a);
    func_020b1388(buf);
}
extern "C" void func_02076028(u32 a, u32 b, u32 c, u32 d) {
    u8 buf[8];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, a);
    func_020b1260(buf, d);
}
extern "C" void func_02076000(u32 a, u32 b, u32 c, u32 d) {
    u8 buf[8];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, a);
    func_020b1234(buf, d);
}
extern "C" void func_02075fe0(u32 a) {
    u8 buf[4];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, a);
    func_0209c3cc(buf);
}
extern "C" void func_02075fb8(u32 a, u32 b, u32 c, u32 d) {
    u8 buf[8];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, a);
    func_020ac7f8(buf, d);
}
extern "C" void func_02075fac(u32 a, u32 b, u32 c, u32 d) { func_020ac7e8(d); }
extern "C" void func_02075f0c(u32 a, u32 b, u32 c, u32 d) {
    struct L { volatile u8 b; volatile u8 f; } l;
    l.f = 1;
    Unk_020cbb18 *g = data_020cbb18;
    _ZN12Unk_020cbb1813func_02072770EPhj(g, (void *)&l, a);
    if (Unk_02075e60_IsZero(data_020e416c)) {
        l.f = func_ov003_02226180(l.b);
    }
    _ZN12Unk_020cbb1813func_020728d4Ev(g);
    if (l.f == 0) {
        l.b &= 0xf;
        l.b |= d << 4;
        l.b += 0x10;
        g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728a4EPhj(g, (void *)&l, 1);
        _ZN12Unk_020cbb1813func_02072824Ejj(g, 0x29, 7);
    } else {
        g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020728a4EPhj(g, (void *)&l.f, 1);
        _ZN12Unk_020cbb1813func_02072824Ejj(g, 0x29, d);
    }
}
extern "C" void func_02075e98(u32 a) {
    volatile u8 n;
    if (Unk_02075e60_IsZero(data_020e416c)) {
        Unk_020cbb18 *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_02072770EPhj(g, (void *)&n, a);
        u32 v = n;
        u32 h = (v << 20) >> 24;
        n = (v & 0xf) | 0x10;
        u32 t = n;
        if (t == 1) {
            data_ov003_02258efc = 1;
        } else {
            h--;
            if (h == (u32)g->unk_64) {
                data_ov003_02258efc = 0;
                func_ov003_02227100(t);
            } else {
                data_ov003_02258efc = 1;
            }
        }
    }
}
extern "C" void func_02075e60(u32 a) {
    u8 b;
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, &b, a);
    if (Unk_02075e60_IsZero(data_020e416c)) {
        func_ov003_02226e70(b);
    }
}
}

// ======== unk_02075558.cpp ========
namespace n3 {
extern "C" {
s32 func_020b50e8();
}
extern "C" {
void *func_020a0370();
}
extern "C" {
s32 func_020a028c(void *, s32, s32);
}
extern "C" {
s32 func_020a0254(s32);
}
extern "C" {
s32 func_020a0284(void *, s32, s32);
}
extern "C" {
s32 func_020a5f9c(void *, u32);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072770EPhj(void *, void *, s32);
}
extern "C" {
void func_02077404(u32 *, u16 *, void *);
}
extern "C" {
void *func_0207bf60(void *, u32);
}
extern "C" {
void *func_0207d074(void *, s32);
}
extern "C" {
void func_020774f0(u32 *, u16 *, void *);
}
extern "C" {
s32 _ZN12Unk_0207fb8013func_0207fd90EPt(void *, u16 *);
}
extern "C" {
void func_0207e268();
}
extern "C" {
void *func_0209a60c();
}
extern "C" {
void *func_0209a940(void *);
}
extern "C" {
s32 _ZN12Unk_0209ada413func_0209ad68Ev(void *);
}
extern "C" {
s32 _ZN12Unk_0209ada413func_0209ac64Ev(void *);
}
extern "C" {
u16 *func_0209a8e8(void *);
}
extern "C" {
s32 func_0207764c(u32 *, u8 *, u16 *, s32 *, u8 *, u32 *);
}
extern "C" {
void func_0207e310(void *);
}
extern "C" {
void func_02078578();
}
extern "C" {
void _ZN12Unk_0209ada413func_0209ad80Ev();
}
extern "C" {
void *func_02097520(void *);
}
extern "C" {
void *_ZN12Unk_0209865c13func_0209888cEv(void *);
}
extern "C" {
s32 func_0209a9f0(void *, u32, u16 *, void *, s32);
}
extern "C" {
void func_02077780(u32 *, u8 *, u8 *, u16 *);
}
extern "C" {
s32 _ZN12Unk_0209ada413func_0209abb4Eh(void *, u32);
}
extern "C" {
s32 func_0209aaa0(void *);
}
extern "C" {
s32 func_0209a944(void *);
}
extern "C" {
s32 func_0209a8c8(void *, u32);
}
extern "C" {
s32 func_0209a8b4(void *, u32);
}
extern "C" {
void func_0207783c(u32 *, u32 *, u16 *, u8 *);
}
extern "C" {
void *func_0207f86c(void *, u32);
}
extern "C" {
s32 func_02080f94(void *);
}
extern "C" {
s32 _ZN12Unk_0208091c13func_02080b78EPt(void *, u16 *);
}
extern "C" {
void func_02077a9c(u32 *, u32 *, void *);
}
extern "C" {
s32 _ZN12Unk_0208091c13func_02080dd0Ea(void *, s32);
}
extern "C" {
s32 _ZN12Unk_0208091c13func_02080b38Ei(void *, u32);
}
extern "C" {
s32 func_02080ecc(void *, void *, u8 *, s32);
}
extern "C" {
s32 func_02080f4c(void *, void *, u8 *, s32);
}
extern "C" {
s32 func_0209c4a8(void *, s32);
}
extern "C" {
s32 func_0209c4bc(void *);
}
extern "C" {
s32 func_0209c4e4(void *, s32);
}
extern "C" {
s32 func_02044490(void *, s32);
}
extern "C" {
s32 func_020945b4(u32, s32);
}
extern "C" {
s32 func_020945d4(u32, s32);
}
extern "C" {
s32 func_0209549c(u8 *, u8 *, u8 *);
}
extern "C" {
s32 _ZN12Unk_0209865c13func_02098824Eh(void *, u32);
}
extern "C" {
s32 _ZN12Unk_0209865c13func_020987fcEh(void *, u32);
}
extern "C" {
s32 func_0204fe7c(void *, s32);
}
extern "C" {
s32 func_020954c8(void *, u16 *, u32 *);
}
extern "C" {
s32 func_0209463c(u16 *, u32, void *);
}
extern "C" {
void *_ZN12Unk_0209865c13func_02098744Ev(void *);
}
extern "C" {
s32 func_0204b2d4(u16 *);
}
extern "C" {
s32 func_0204b25c(void *);
}
extern "C" {
s32 _ZN12Unk_0209865c13func_02098738EPt(void *, u16 *);
}
extern "C" {
u16 func_02061794(u16 *);
}
extern "C" {
s32 func_020946f0(s32, void *);
}
extern "C" {
void func_ov003_02227074(u32, s32);
}
extern "C" {
void func_ov003_022271a8(u32);
}
extern "C" {
void *func_0204da0c();
}
extern "C" {
u16 *func_0204ebd8(void *, s32, s32, s32, s32, u32);
}
extern "C" {
s32 func_020453e8(Unk_02075bc4_Pt *, u32);
}
extern "C" {
s32 func_0204510c(Unk_02075bc4_Pt *, void *);
}
extern "C" {
Unk_02075bc4_Q *func_02045214();
}
extern "C" {
s32 func_02044774(void *, BOOL, void *);
}
extern "C" {
extern void *data_020cbb18;
}
extern "C" {
extern u32 data_021dfd8c[];
}
extern "C" {
extern u8 data_021d7352[];
}
extern "C" {
extern u8 data_020e416c;
}


static inline void *G() { return data_020cbb18; }

static inline BOOL Unk_02075680_R(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (b >= lo && a <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_02075d38_Same(BOOL a) {
    return a;
}

static inline BOOL Unk_02075e1c_IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}



extern "C" void func_02075e1c(u32 n) {
    u8 buf;
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, &buf, n);
    if (Unk_02075e1c_IsZero(data_020e416c)) {
        if (buf < 4) {
            func_ov003_02227074(buf, 0);
        } else {
            func_ov003_022271a8(buf);
        }
    }
}

extern "C" void func_02075df4(s32 n, s32 b, s32 c, s32 d) {
    u8 buf[8];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, n);
    func_0204fe7c(buf, d);
}

extern "C" void func_02075d38(s32 n, s32 b, s32 c, void *d) {
    u16 h, v;
    u8 buf[4];
    u32 k;
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, n);
    func_020954c8(buf, &h, &k);
    v = h;
    switch (k) {
    case 0:
    case 1:
    case 2:
        func_0209463c(&v, k, d);
        break;
    case 3: {
        void *r7 = func_02097520(d);
        u16 *r5 = (u16 *)_ZN12Unk_0209865c13func_02098744Ev(r7);
        BOOL same;
        if (func_0204b2d4(&v) != 0) {
            s32 r6 = func_0204b25c(&v);
            if (r6 == func_0204b25c(r5)) same = TRUE; else same = FALSE;
        } else {
            if (v == *r5) same = TRUE; else same = FALSE;
        }
        if (!same) {
            u16 r = func_02061794(&v);
            _ZN12Unk_0209865c13func_02098738EPt(r7, &v);
            func_020946f0(r + 1, d);
        }
        break;
    }
    }
}

extern "C" void func_02075cf0(s32 n, s32 b, s32 c, void *d) {
    u8 buf[3];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, n);
    func_0209549c(&buf[0], &buf[1], &buf[2]);
    void *r4 = func_02097520(d);
    _ZN12Unk_0209865c13func_02098824Eh(r4, buf[1]);
    _ZN12Unk_0209865c13func_020987fcEh(r4, buf[2]);
}

extern "C" void func_02075cc8(s32 n, s32 b, s32 c, s32 d) {
    u8 buf[4];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, n);
    func_020945d4(buf[0], d);
}

extern "C" void func_02075ca0(s32 n, s32 b, s32 c, s32 d) {
    u8 buf[4];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, n);
    func_020945b4(buf[0], d);
}

extern "C" void func_02075bc4(s32 a, s32 b, s32 c, void *d) {
    void *grid;
    volatile u16 c1, b1, c2, b2, a1, a2;
    Unk_02075bc4_Buf buf;
    Unk_02075bc4_Pt pt, pt2;
    grid = func_0204da0c();
    if (grid != NULL) {
        BOOL ok;
        _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, &buf, 8);
        ok = FALSE;
        a1 = buf.pos;
        u16 t1 = a1;
        b1 = t1;
        c1 = t1;
        s32 x = c1 >> 8;
        s32 y = b1 & 0xff;
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *cell = func_0204ebd8(grid, hx, hy, x - (hx << 4), y - (hy << 4), buf.flag);
        if (cell != NULL) {
            if (*cell == buf.id) {
                a2 = buf.pos;
                u16 t2 = a2;
                b2 = t2;
                c2 = t2;
                s32 x2, y2;
                pt.x = x2 = c2 >> 8;
                pt.y = y2 = b2 & 0xff;
                if (func_020453e8(&pt, buf.flag) < 0) {
                    pt2.x = x2;
                    pt2.y = y2;
                    if (func_0204510c(&pt2, d) != 0) ok = TRUE;
                } else {
                    Unk_02075bc4_Q *q = func_02045214();
                    if (q->a == buf.kind) {
                        if (q->b != 0) {
                            if (q->c == 0) ok = TRUE;
                        }
                    }
                }
            }
        }
        func_02044774(&buf, ok, d);
    }
}

extern "C" void func_02075b9c(s32 a, s32 b, s32 c) {
    u8 buf[14];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, 0xe);
    func_02044490(buf, c);
}

extern "C" void func_02075b74(s32 a, s32 b, s32 c, s32 d) {
    u32 buf;
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, &buf, 1);
    func_0209c4e4(&buf, d);
}

extern "C" void func_02075b54() {
    u32 buf;
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, &buf, 1);
    func_0209c4bc(&buf);
}

extern "C" void func_02075b2c(s32 a, s32 b, s32 c, s32 d) {
    u32 buf;
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, &buf, 1);
    func_0209c4a8(&buf, d);
}

extern "C" void func_02075acc(s32 n, s32 b, s32 c, void *d) {
    u32 buf, id, x;
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, &buf, n);
    func_02077a9c(&id, &x, &buf);
    void *r0 = func_0207bf60(data_021dfd8c, id);
    if (r0 != NULL) {
        void *r5 = func_0207f86c(r0, x);
        if (r5 != NULL) {
            void *r1 = _ZN12Unk_0209865c13func_0209888cEv(func_02097520(d));
            func_02080f4c(r5, r1, data_021d7352, 0);
        }
    }
}

extern "C" void func_02075a6c(s32 n, s32 b, s32 c, void *d) {
    u32 buf, id, x;
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, &buf, n);
    func_02077a9c(&id, &x, &buf);
    void *r0 = func_0207bf60(data_021dfd8c, id);
    if (r0 != NULL) {
        void *r5 = func_0207f86c(r0, x);
        if (r5 != NULL) {
            void *r1 = _ZN12Unk_0209865c13func_0209888cEv(func_02097520(d));
            func_02080ecc(r5, r1, data_021d7352, 0);
        }
    }
}

extern "C" void func_02075a10() {
    u8 b[2];
    u32 id, x;
    void *r5 = data_020cbb18;
    _ZN12Unk_020cbb1813func_02072770EPhj(r5, b, 1);
    func_02077a9c(&id, &x, b);
    void *r0 = func_0207bf60(data_021dfd8c, id);
    if (r0 != NULL) {
        void *r4 = func_0207f86c(r0, x);
        if (r4 != NULL) {
            _ZN12Unk_020cbb1813func_02072770EPhj(r5, b + 1, 1);
            _ZN12Unk_0208091c13func_02080b38Ei(r4, b[1]);
        }
    }
}

extern "C" void func_020759b4() {
    s8 b[2];
    u32 id, x;
    void *r5 = data_020cbb18;
    _ZN12Unk_020cbb1813func_02072770EPhj(r5, b, 1);
    func_02077a9c(&id, &x, b);
    void *r0 = func_0207bf60(data_021dfd8c, id);
    if (r0 != NULL) {
        void *r4 = func_0207f86c(r0, x);
        if (r4 != NULL) {
            _ZN12Unk_020cbb1813func_02072770EPhj(r5, b + 1, 1);
            _ZN12Unk_0208091c13func_02080dd0Ea(r4, b[1]);
        }
    }
}

extern "C" void func_02075950() {
    struct { u16 x; u8 y[3]; } l;
    u32 id;
    u32 k;
    l.x = 0xfff1;
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, l.y, 3);
    func_0207783c(&id, &k, &l.x, l.y);
    void *r0 = func_0207bf60(data_021dfd8c, id);
    if (r0 != NULL) {
        void *r4 = func_0207f86c(r0, k);
        if (r4 != NULL) {
            if (func_02080f94(r4) != 0) {
                _ZN12Unk_0208091c13func_02080b78EPt(r4, &l.x);
            }
        }
    }
}

extern "C" void func_02075860() {
    struct { u8 a; u8 b; u16 c; } l;
    u32 id;
    l.a = 6;
    l.b = 0;
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, &l.c, 2);
    func_02077780(&id, &l.a, &l.b, &l.c);
    void *r0 = func_0207bf60(data_021dfd8c, id);
    if (r0 != NULL) {
        func_0207e268();
        u8 *r4 = (u8 *)func_0209a60c();
        switch (l.a) {
        case 0:
            if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a940(r4))) {
                _ZN12Unk_0209ada413func_0209abb4Eh(func_0209a940(r4), l.b);
            }
            break;
        case 1:
            func_0209aaa0(r4);
            break;
        case 2:
            if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a940(r4))) {
                func_0209a944(r4);
            }
            break;
        case 3:
            if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a940(r4))) {
                func_0209a8c8(r4, l.b);
            }
            break;
        case 4:
            if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a940(r4))) {
                func_0209a8b4(r4, l.b);
            }
        case 5:
            if (_ZN12Unk_0209ada413func_0209ad68Ev(func_0209a940(r4))) {
                *(r4 + 0x26) = l.b;
            }
            break;
        }
    }
}

extern "C" void func_020757ac() {
    struct { u8 a; u8 b; u16 c; } l;
    u32 buf;
    u32 id;
    s32 n;
    l.a = 0x16;
    l.c = 0xfff1;
    n = 4;
    l.b = 0;
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, &buf, 4);
    func_0207764c(&id, &l.a, &l.c, &n, &l.b, &buf);
    void *r6 = func_0207bf60(data_021dfd8c, id);
    if (r6 != NULL) {
        func_0207e268();
        void *r7 = func_0209a60c();
        void *r4 = NULL;
        BOOL t = l.b ? TRUE : FALSE;
        BOOL r5 = t ? TRUE : FALSE;
        func_0207e310(r6);
        func_02078578();
        _ZN12Unk_0209ada413func_0209ad80Ev();
        if (n < 4) {
            void *q = func_02097520((void *)n);
            if (q != NULL) {
                r4 = _ZN12Unk_0209865c13func_0209888cEv(q);
            }
        }
        func_0209a9f0(r7, l.a, &l.c, r4, r5);
    }
}

extern "C" void func_020756ec() {
    struct { u16 x; u8 y[4]; } l;
    u32 id;
    l.x = 0xfff1;
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, l.y, 4);
    func_020774f0(&id, &l.x, l.y);
    void *r0 = func_0207bf60(data_021dfd8c, id);
    if (r0 != NULL) {
        func_0207e268();
        void *r5 = func_0209a60c();
        void *r4 = func_0209a940(r5);
        if (_ZN12Unk_0209ada413func_0209ad68Ev(r4)) {
            if (_ZN12Unk_0209ada413func_0209ac64Ev(r4) == 0) {
                if (Unk_02075680_R(&l.x, 0x12b0, 0x12e7)) goto set;
            }
            if (_ZN12Unk_0209ada413func_0209ac64Ev(r4) == 1) {
                if (Unk_02075680_R(&l.x, 0x12e8, 0x131f)) {
                set:
                    u16 *p = func_0209a8e8(r5);
                    *p = l.x;
                }
            }
        }
    }
}

extern "C" void func_02075680() {
    struct { u16 x; u8 y[3]; } l;
    u32 id;
    Unk_02075680_Pad pad;
    l.x = 0xfff1;
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, l.y, 3);
    func_020774f0(&id, &l.x, l.y);
    void *r0 = func_0207bf60(data_021dfd8c, id);
    if (r0 != NULL) {
        BOOL r4 = Unk_02075680_R(&l.x, 0x11a8, 0x12a7);
        if (r4) _ZN12Unk_0207fb8013func_0207fd90EPt(r0, &l.x);
    }
}

extern "C" void func_0207561c() {
    u32 id;
    u16 arr[4];
    u8 buf[9];
    void *r5;
    s32 i;
    arr[0] = 0xfff1;
    arr[1] = 0xfff1;
    arr[2] = 0xfff1;
    arr[3] = 0xfff1;
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, buf, 9);
    func_02077404(&id, arr, buf);
    r5 = func_0207bf60(data_021dfd8c, id);
    if (r5 != NULL) {
        for (i = 0; i < 4; i++) {
            u16 *p = (u16 *)func_0207d074(r5, i);
            if (p != NULL) {
                *p = arr[i];
            }
        }
    }
}

extern "C" void func_020755f4(s32 a, s32 b, s32 c, void *d) {
    u8 v;
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, &v, 1);
    func_020a5f9c(d, v);
}

extern "C" void func_020755cc() {
    Unk_02075558_Obj *o = (Unk_02075558_Obj *)data_020cbb18;
    u8 b;
    _ZN12Unk_020cbb1813func_02072770EPhj(o, &b, 1);
    func_020a5f9c(o->unk_64, b);
}

extern "C" void func_020755a4(s32 a, s32 b, s32 c, s32 d) {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a0284(func_020a0370(), d, 1);
        }
    }
}

extern "C" void func_02075580() {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a0370();
            func_020a0254(1);
        }
    }
}

extern "C" void func_02075558(s32 a, s32 b, s32 c, s32 d) {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a028c(func_020a0370(), d, 1);
        }
    }
}}

// ======== unk_02074c4c.cpp ========
namespace n2 {
extern "C" {
extern Unk_02074c4c_G *data_020cbb18;
}
extern "C" {
extern void (*data_020cbc60[])(u32, u32, u32, u32);
}
extern "C" {
s32 _Z13func_020720f8v();
}
extern "C" {
BOOL func_020eaca0();
}
extern "C" {
BOOL func_02076b40(u32);
}
extern "C" {
void _ZN12Unk_020cbb1813func_020729ccEj(void *, s32);
}
extern "C" {
u8 *_ZN12Unk_020cbb1813func_02072ddcEi(void *, s32);
}
extern "C" {
void func_02076bf0(void *, s32, s32);
}
extern "C" {
BOOL _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(void *, void *, u32, u32, u32, u32, u32, u32, u32, u32);
}
extern "C" {
s32 func_02073190();
}
extern "C" {
u32 _ZN12Unk_020cbb1813func_020723e0Ev(void *);
}
extern "C" {
void *_ZN12Unk_020cbb1813func_02072998Ev(void *);
}
extern "C" {
u32 func_020952e0(u32);
}
extern "C" {
u32 func_020974a0(u32);
}
extern "C" {
void func_02133ef8(void *, u32);
}
extern "C" {
void *func_0208f0b0(u32);
}
extern "C" {
void MI_CpuCopy8(void *, void *, u32);
}
extern "C" {
BOOL _ZN12Unk_0208f23813func_0208f1c0Ev(void *);
}
extern "C" {
void *func_020a0394();
}
extern "C" {
u32 _ZN12Unk_0209f14c13func_0209f14cEv();
}
extern "C" {
BOOL _ZN12Unk_020cbb1813func_02072e88Ei(void *, s32);
}
extern "C" {
void _ZN12Unk_020cbb1813func_020727a0EPh(void *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072770EPhj(void *, void *, u32);
}
extern "C" {
u32 func_0207694c(void *);
}
extern "C" {
void func_02076ae8(void *, void *, void *);
}
extern "C" {
void func_0205f094(s32, s32, u32, u32, u32);
}
extern "C" {
void func_0205f144(void *);
}
extern "C" {
u32 _ZN12Unk_020cbb1813func_02072478Ev(void *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_02072454Ej(void *, void *);
}
extern "C" {
u32 _ZN12Unk_020cbb1813func_020724d8Ev(void *);
}
extern "C" {
void _ZN12Unk_020cbb1813func_020724b8Ej(void *, void *);
}
extern "C" {
void func_020a5dd8();
}
extern "C" {
void func_020a5e94(u32);
}
extern "C" {
void func_020a5ea4(u32);
}
extern "C" {
void func_020a5eb4(u32, u32);
}
extern "C" {
void func_020a66f4(void *);
}
extern "C" {
void func_020a66ac(void *, void *, void *, void *);
}
extern "C" {
void func_020a5f48(u32, u32);
}
extern "C" {
void func_020a5f38();
}
extern "C" {
void func_020a5f5c();
}
extern "C" {
void func_020a66f0(void *);
}
extern "C" {
void func_020a68a8(void *);
}
extern "C" {
void func_020a6858(void *, void *, void *, void *, void *);
}
extern "C" {
void func_020a6388(u32, u32, u32, u32, u32);
}
extern "C" {
void func_020a6898(void *);
}
extern "C" {
void func_020a63a8(u32, u32);
}
extern "C" {
void func_020a6848(void *);
}
extern "C" {
void func_020a6804(void *, void *, void *, void *, void *, void *);
}
extern "C" {
void func_020a63bc(u32, u32, u32, u32, u32);
}
extern "C" {
void func_020a6838(void *);
}
extern "C" {
void func_020a6970(void *);
}
extern "C" {
void func_020a6960(void *, void *);
}
extern "C" {
void func_020a6430(u32, u32);
}
extern "C" {
void func_020a696c(void *);
}
extern "C" {
s32 func_020b50e8();
}
extern "C" {
u32 func_020a0370();
}
extern "C" {
void func_020a02a8(u32, u32);
}
extern "C" {
void func_020a024c(u32, u32, u32);
}
extern "C" {
void func_02073e14(u32);
}
extern "C" {
BOOL func_020750ac(u8 *p, void *data, u32 size, u32 type, u32 mask);
}


extern "C" void func_02075534() {
    u8 t;
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, &t, 1);
    func_02073e14(t);
}
extern "C" void func_0207550c(u32 a, u32 b, u32 c, u32 d) {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370()) {
            func_020a024c(func_020a0370(), d, 1);
        }
    }
}
extern "C" void func_020754e8() {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370()) {
            func_020a02a8(func_020a0370(), 1);
        }
    }
}
extern "C" void func_020754a8(u32 a, u32 b, u32 c, u32 d) {
    u8 t[2];
    func_020a6970(t);
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, t, 1);
    func_020a6960(t, t + 1);
    func_020a6430(d, t[1]);
    func_020a696c(t);
}
extern "C" void func_02075450() {
    struct { u8 t[4]; u32 pad; u32 w1; u32 w2; } l;
    func_020a6848(l.t + 3);
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, l.t + 3, 2);
    func_020a6804(l.t + 3, &l.w1, l.t, l.t + 1, l.t + 2, &l.w2);
    func_020a63bc(l.w1, l.t[0], l.t[1], l.t[2], l.w2);
    func_020a6838(l.t + 3);
}
extern "C" void func_02075428(u32 a, u32 b, u32 c, u32 d) {
    u8 t[4];
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, t, 1);
    func_020a63a8(d, t[0]);
}
extern "C" void func_020753d0(u32 a, u32 b, u32 c, u32 d) {
    struct { u8 t[4]; u32 pad; u32 w; } l;
    func_020a68a8(l.t + 3);
    _ZN12Unk_020cbb1813func_02072770EPhj(data_020cbb18, l.t + 3, 2);
    func_020a6858(l.t + 3, l.t, l.t + 1, l.t + 2, &l.w);
    func_020a6388(d, l.t[0], l.t[1], l.t[2], l.w);
    func_020a6898(l.t + 3);
}
extern "C" void func_0207536c(u32 a, u32 b, u32 c, u32 d) {
    s32 v[5];
    func_020a66f4(v);
    Unk_02074c4c_G *g = data_020cbb18;
    _ZN12Unk_020cbb1813func_02072770EPhj(g, v, 1);
    func_020a66ac(v, v + 1, v + 2, v + 3);
    if (d == 0) func_020a5f48(g->unk_64, v[1]);
    else func_020a5f48(d, v[1]);
    if (v[2] < 4) func_020a5f38();
    if (v[3] < 4) func_020a5f5c();
    func_020a66f0(v);
}
extern "C" void func_02075360(u32 a, u32 b, u32 c, u32 d) { func_020a5eb4(d, 1); }
extern "C" void func_02075354(u32 a, u32 b, u32 c, u32 d) { func_020a5ea4(d); }
extern "C" void func_02075320(u32 n) {
    void *g = data_020cbb18;
    _ZN12Unk_020cbb1813func_02072770EPhj(g, (void *)_ZN12Unk_020cbb1813func_020724d8Ev(g), n);
    _ZN12Unk_020cbb1813func_020724b8Ej(g, (void *)n);
    func_020a5dd8();
}
extern "C" void func_020752f0(u32 n) {
    void *g = data_020cbb18;
    _ZN12Unk_020cbb1813func_02072770EPhj(g, (void *)_ZN12Unk_020cbb1813func_02072478Ev(g), n);
    _ZN12Unk_020cbb1813func_02072454Ej(g, (void *)n);
}
extern "C" void func_020752e4() { func_020a5e94(1); }
extern "C" void func_020752b0(u32 n) {
    u32 i = 0;
    void *g = data_020cbb18;
    u8 buf[5];
    while (i < n) {
        _ZN12Unk_020cbb1813func_02072770EPhj(g, buf, 5);
        func_0205f144(buf);
        i += 5;
    }
}
extern "C" void func_0207524c(u32 n) {
    u32 i = 0;
    void *g = data_020cbb18;
    s32 z = 0;
    u8 buf[7];
    while (i < n) {
        _ZN12Unk_020cbb1813func_02072770EPhj(g, buf + 2, 5);
        u32 v = func_0207694c(buf + 2);
        func_02076ae8(buf + 4, buf, buf + 1);
        func_0205f094(((s8 *)buf)[5], ((s8 *)buf)[6], buf[0], v, buf[1] ? 1 : z);
        i += 5;
    }
}
extern "C" void func_0207521c(u32 idx, u32 x, u32 a, u32 b, u8 c, u32 d) {
    _ZN12Unk_020cbb1813func_020727a0EPh(data_020cbb18);
    data_020cbc60[idx](a, b, c, d);
}
extern "C" BOOL func_02075170(u32 a) {
    _Z13func_020720f8v();
    if (func_020eaca0()) {
        if (func_02076b40(a)) {
            void *g = data_020cbb18;
            _ZN12Unk_020cbb1813func_020729ccEj(g, 0);
            u8 *b = _ZN12Unk_020cbb1813func_02072ddcEi(g, 4);
            func_02076bf0(b, 0, 0);
            u32 m = 0;
            u32 i = 0;
            for (i = 0; i < 4; i++) {
                if (_ZN12Unk_020cbb1813func_02072e88Ei(g, i)) {
                    m |= (u8)(1 << i);
                }
            }
            m &= 0xf;
            u32 r = (u8)m;
            r |= (((u8)func_020952e0(0)) << 6) & 0xc0;
            b[1] = r;
            g = data_020cbb18;
            return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, _ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 2, a, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}
extern "C" BOOL func_020750ac(u8 *p, void *data, u32 size, u32 type, u32 maskw) {
    u32 cnt = size / 0xffb;
    u32 rem = size % 0xffb;
    if (rem != 0) cnt++;
    _Z13func_020720f8v();
    if (func_020eaca0()) {
        if (func_02076b40(*(u16 *)&maskw)) {
            u32 off = *p * 0xffb;
            u32 left = size - off;
            if (left > 0xffb) left = 0xffb;
            void *g = data_020cbb18;
            u8 *b = _ZN12Unk_020cbb1813func_02072ddcEi(g, 4);
            func_02076bf0(b, 0, type);
            MI_CpuCopy8(&off, b + 1, 4);
            MI_CpuCopy8((u8 *)data + off, b + 5, left);
            if (_ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, _ZN12Unk_020cbb1813func_02072ddcEi(g, 4), left + 5, *(u16 *)&maskw, 0, 0, 0, 0, 0, 0)) {
                (*p)++;
            }
        }
    }
    if (*p >= cnt) return TRUE;
    return FALSE;
}
extern "C" void func_02075078(u8 *p, u32 v) {
    void *d = func_020a0394();
    u32 n = _ZN12Unk_0209f14c13func_0209f14cEv();
    u32 sz;
    if (n == 0) sz = 0x15fe4; else sz = n + 4;
    func_020750ac(p, d, sz, 1, v);
}
extern "C" BOOL func_02074ff0(u8 *p) {
    void *d = func_0208f0b0(4);
    if (_ZN12Unk_0208f23813func_0208f1c0Ev(d)) {
        return func_020750ac(p, d, 0x84c, 2, 1);
    }
    _Z13func_020720f8v();
    if (func_020eaca0()) {
        if (func_02076b40(1)) {
            void *g = data_020cbb18;
            func_02076bf0(_ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 0, 2);
            return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, _ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}
extern "C" BOOL func_02074eb4(s32 a, void *b, s32 c, void *d, s32 e, void *f) {
    s32 vals[3];
    void *ptrs[3];
    u8 *bufs[3];
    s32 offs[3];
    u16 masks[3];
    u32 i;
    s32 mode;
    void *g;
    _Z13func_020720f8v();
    if (!func_020eaca0()) goto fail;
    vals[0] = a; vals[1] = c; vals[2] = e;
    ptrs[0] = b; ptrs[1] = d; ptrs[2] = f;
    func_02133ef8(bufs, 0xc);
    func_02133ef8(offs, 0xc);
    func_02133ef8(masks, 6);
    i = 0;
    g = data_020cbb18;
    for (; i < 3; i++) {
        mode = vals[i];
        if (mode != 3) {
            bufs[i] = _ZN12Unk_020cbb1813func_02072ddcEi(g, i + 1);
            u8 *bb = bufs[i];
            func_02076bf0(bb, 0, 3);
            offs[i] = offs[i] + 1;
            if (mode == 0) {
                bb[1] = 0;
                offs[i] = offs[i] + 1;
            } else if (mode == 1) {
                bb[1] = 1;
                offs[i] = offs[i] + 1;
            } else {
                MI_CpuCopy8(func_0208f0b0((u32)ptrs[i]), bb + 1, 0x84c);
                offs[i] = offs[i] + 0x84c;
            }
            masks[i] = 1 << (i + 1);
        }
    }
    if (a == 3 && c == 3) {
        if (e == 3) goto yes;
    }
    if (func_02076b40((u16)(masks[0] | masks[1] | masks[2]))) {
        return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, bufs[0], offs[0], masks[0], (u32)bufs[1], offs[1], masks[1], (u32)bufs[2], offs[2], masks[2]);
    }
    return FALSE;
yes:
    return TRUE;
fail:
    return FALSE;
}
extern "C" void func_02074e80(u8 *p, u32 v) {
    func_020750ac(p, (void *)func_020974a0(func_020952e0(data_020cbb18->unk_68)), 0x228c, 4, v);
}
extern "C" void func_02074e50(u8 *p, u32 v) {
    func_020750ac(p, _ZN12Unk_020cbb1813func_02072998Ev(data_020cbb18), 0x68c, 0xc, v);
}
extern "C" BOOL func_02074df4(u32 a) {
    _Z13func_020720f8v();
    if (func_020eaca0()) {
        if (func_02076b40(a)) {
            void *g = data_020cbb18;
            u8 *b = _ZN12Unk_020cbb1813func_02072ddcEi(g, 4);
            return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, b, _ZN12Unk_020cbb1813func_020723e0Ev(g), a, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}
extern "C" BOOL func_02074d78() {
    u32 a = func_02073190();
    if (a != 0) {
        _Z13func_020720f8v();
        if (func_020eaca0()) {
            if (func_02076b40(a)) {
                void *g = data_020cbb18;
                _ZN12Unk_020cbb1813func_020729ccEj(g, 0);
                u8 *b = _ZN12Unk_020cbb1813func_02072ddcEi(g, 4);
                func_02076bf0(b, 0, 8);
                b[1] = 1;
                return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, _ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 2, a, 0, 0, 0, 0, 0, 0);
            }
        }
        return FALSE;
    }
    return TRUE;
}
extern "C" BOOL func_02074d18() {
    _Z13func_020720f8v();
    if (func_020eaca0()) {
        if (func_02076b40(1)) {
            void *g = data_020cbb18;
            func_02076bf0(_ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 0, 7);
            return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, _ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}
extern "C" BOOL func_02074cb4(u32 a) {
    _Z13func_020720f8v();
    if (func_020eaca0()) {
        if (func_02076b40(a)) {
            void *g = data_020cbb18;
            func_02076bf0(_ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 0, 0xb);
            return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, _ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 1, a, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}
extern "C" BOOL func_02074c4c() {
    _Z13func_020720f8v();
    if (func_020eaca0()) {
        if (func_02076b40(1)) {
            void *g = data_020cbb18;
            _ZN12Unk_020cbb1813func_020729ccEj(g, 0);
            func_02076bf0(_ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 0, 9);
            return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, _ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
        }
    }
    return FALSE;
}
}

// ======== unk_020742f4.cpp ========
namespace n1 {
struct Unk_020cbb18;
extern "C" {
extern void (*data_020cbb74[])(void *, s32, s32);
}
extern "C" {
extern Unk_020cbb18 *data_020cbb18;
}
extern "C" {
s32 func_020b50e8();
}
extern "C" {
s32 func_020a0370();
}
extern "C" {
s32 func_020a0208(s32, s32);
}
extern "C" {
s32 func_020a0228(s32);
}
extern "C" {
s32 func_020a024c(s32, s32, s32);
}
extern "C" {
s32 func_020a02b0(s32, s32);
}
extern "C" {
s32 func_020a023c(s32, s32, s32);
}
extern "C" {
s32 func_020a0244(s32, s32, s32);
}
extern "C" {
s32 func_020a02b8(s32, s32);
}
extern "C" {
s32 func_020a0294(s32);
}
extern "C" {
s32 func_020a0298(s32, s32);
}
extern "C" {
s32 func_020a02a0(s32, s32);
}
extern "C" {
void MI_CpuCopy8(void *, void *, u32);
}
extern "C" {
s32 func_0209750c();
}
extern "C" {
s32 func_02097a04(s32);
}
extern "C" {
s32 _ZN12Unk_020e282413func_020a148cEv(s32);
}
extern "C" {
s32 func_02095300(s32, s32);
}
extern "C" {
void func_020a68a8(void *);
}
extern "C" {
void func_020a6898(void *);
}
extern "C" {
void func_020a6858(void *, u8 *, u8 *, u8 *, u32 *);
}
extern "C" {
void func_020a6878(void *, u32, u32, u32, u32);
}
extern "C" {
s32 func_020a63bc(u32, u32, u32, u32, u32);
}
extern "C" {
u32 func_020eaf90();
}
extern "C" {
s32 func_020a027c(s32, s32, s32);
}
extern "C" {
void func_020766ec(void *, s32, s32);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_02072998Ev(Unk_020cbb18 *);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_02072e1cEv(Unk_020cbb18 *);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_02072e20Ej(Unk_020cbb18 *, u32);
}
extern "C" {
s32 func_020a5cfc(s32);
}
extern "C" {
s32 func_020a5f9c(s32, u32);
}
extern "C" {
s32 func_020a5f7c(u16);
}
extern "C" {
s32 func_020974a0(s32);
}
extern "C" {
s32 func_0208f0b0(s32);
}
extern "C" {
s32 func_0208f1dc(s32);
}
extern "C" {
s32 _ZN12Unk_020e282413func_020a1464Ejh(s32, s32, s32);
}
extern "C" {
s32 func_020a0394();
}
extern "C" {
s32 _ZN12Unk_0209f14c13func_0209f14cEv(s32);
}
extern "C" {
s32 _ZN12Unk_0209f08013func_0209f08cEj(s32, s32);
}
extern "C" {
s32 func_020a037c();
}
extern "C" {
s32 func_020a02c8(s32, u16);
}
extern "C" {
s32 func_020a02c0(s32, u8);
}
extern "C" {
void _Z13func_020720f8v();
}
extern "C" {
u32 func_020eaca0();
}
extern "C" {
u32 func_02076b40(u32);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_020729ccEj(Unk_020cbb18 *, s32);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_02072ddcEi(Unk_020cbb18 *, s32);
}
extern "C" {
s32 func_02076bf0(s32, s32, s32);
}
extern "C" {
s32 _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(Unk_020cbb18 *, s32, u32, u32, s32, s32, s32, s32, s32, s32);
}
extern "C" {
s32 func_020952e0(s32);
}
extern "C" {
s32 func_020750ac(void *, s32, s32, s32, s32);
}
extern "C" {
void func_02073190();
}
extern "C" {
s32 func_020a5e74(u32, u8 *, u8 *, u8 *);
}
extern "C" {
s32 func_0209d498(void *);
}


struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
    volatile s32 unk_68;
};
extern "C" s32 func_02074bc8(u32 a) {
    _Z13func_020720f8v();
    if (func_020eaca0() != 0 && func_02076b40(a) != 0) {
        Unk_020cbb18 *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020729ccEj(g, 0);
        u8 *p = (u8 *)_ZN12Unk_020cbb1813func_02072ddcEi(g, 4);
        func_02076bf0((s32)p, 0, 0xa);
        u32 t[2];
        t[0] = 0;
        t[1] = 0;
        func_0209d498(t);
        MI_CpuCopy8(t, p + 1, 8);
        return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, _ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 9, a, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}
extern "C" s32 func_02074b58(u8 a, u32 b) {
    if (b != 0) {
        _Z13func_020720f8v();
        if (func_020eaca0() != 0 && func_02076b40(b) != 0) {
            Unk_020cbb18 *g = data_020cbb18;
            u8 *p = (u8 *)_ZN12Unk_020cbb1813func_02072ddcEi(g, 4);
            func_02076bf0((s32)p, 0, 0xe);
            p[1] = a;
            return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, _ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 2, b, 0, 0, 0, 0, 0, 0);
        }
        return 0;
    }
    return 1;
}
extern "C" s32 func_02074a94(s32 a) {
    u16 m = 1 << a;
    _Z13func_020720f8v();
    if (func_020eaca0() != 0 && func_02076b40(m) != 0) {
        u8 *p = (u8 *)_ZN12Unk_020cbb1813func_02072ddcEi(data_020cbb18, 4);
        u32 len = 0;
        u32 j;
        func_02076bf0((s32)p, 0, 0xf);
        p++;
        len++;
        for (j = 0; j < 4; j++) {
            struct {
                u8 r, g, b;
                u8 col[2];
            } l;
            func_020a5e74(j, &l.r, &l.g, &l.b);
            func_020a68a8(l.col);
            func_020a6878(l.col, l.r, l.g, l.b, 7);
            MI_CpuCopy8(l.col, p, 2);
            p += 2;
            len += 2;
            func_020a6898(l.col);
        }
        Unk_020cbb18 *g = data_020cbb18;
        return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, _ZN12Unk_020cbb1813func_02072ddcEi(g, 4), len, m, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}
extern "C" s32 func_02074a2c() {
    _Z13func_020720f8v();
    if (func_020eaca0() != 0 && func_02076b40(1) != 0) {
        Unk_020cbb18 *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020729ccEj(g, 0);
        func_02076bf0(_ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 0, 0x10);
        return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, _ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}
extern "C" s32 func_020749cc() {
    _Z13func_020720f8v();
    if (func_020eaca0() != 0 && func_02076b40(1) != 0) {
        Unk_020cbb18 *g = data_020cbb18;
        func_02076bf0(_ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 0, 0x11);
        return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, _ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}
extern "C" s32 func_02074960(u32 a) {
    _Z13func_020720f8v();
    if (func_020eaca0() != 0 && func_02076b40(a) != 0) {
        Unk_020cbb18 *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020729ccEj(g, 0);
        func_02076bf0(_ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 0, 0x12);
        return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, _ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 1, a, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}
extern "C" s32 func_020748fc() {
    _Z13func_020720f8v();
    if (func_020eaca0() != 0 && func_02076b40(1) != 0) {
        Unk_020cbb18 *g = data_020cbb18;
        func_02076bf0(_ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 0, 0x13);
        func_02073190();
        return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, _ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}
extern "C" s32 func_02074894() {
    _Z13func_020720f8v();
    if (func_020eaca0() != 0 && func_02076b40(1) != 0) {
        Unk_020cbb18 *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020729ccEj(g, 0);
        func_02076bf0(_ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 0, 0x14);
        return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, _ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}
extern "C" s32 func_02074860(void *a) {
    s32 r = func_020974a0(func_020952e0(data_020cbb18->unk_68));
    return func_020750ac(a, r, 0x228c, 0x15, 1);
}
extern "C" s32 func_02074828(void *a) {
    s32 r = func_02097a04(func_020974a0(func_020952e0(data_020cbb18->unk_68)));
    return func_020750ac(a, r, 0x477c, 0x16, 1);
}
extern "C" s32 func_020747c0() {
    _Z13func_020720f8v();
    if (func_020eaca0() != 0 && func_02076b40(1) != 0) {
        Unk_020cbb18 *g = data_020cbb18;
        _ZN12Unk_020cbb1813func_020729ccEj(g, 0);
        func_02076bf0(_ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 0, 0x17);
        return _ZN12Unk_020cbb1813func_02072ee4EPhjjS0_jtS0_jt(g, _ZN12Unk_020cbb1813func_02072ddcEi(g, 4), 1, 1, 0, 0, 0, 0, 0, 0);
    }
    return 0;
}
extern "C" void func_02074780(u8 *a) {
    if (func_020b50e8() == 0xc) {
        if (func_020a0370() != 0) {
            s32 v = *a;
            func_020a02c8(func_020a0370(), v & 0xf);
            func_020a02c0(func_020a0370(), (v >> 6) & 3);
        }
    }
}
extern "C" void func_02074724(u8 *a, s32 b) {
    u32 n;
    if (func_020b50e8() == 0xc) {
        MI_CpuCopy8(a, &n, 4);
        s32 p = func_020a0394();
        MI_CpuCopy8(a + 4, (void *)(p + n), b - 4);
        s32 r = _ZN12Unk_0209f14c13func_0209f14cEv(p);
        u32 lim;
        if (r == 0) {
            lim = 0x15fe4;
        } else {
            lim = r + 4;
        }
        if (n + (b - 4) >= lim) {
            _ZN12Unk_0209f08013func_0209f08cEj(func_020a037c(), 0);
        }
    }
}
extern "C" void func_020746c0(u8 *a, s32 b, s32 c) {
    u32 n;
    if (b != 0) {
        MI_CpuCopy8(a, &n, 4);
        s32 q = func_0208f0b0(c);
        MI_CpuCopy8(a + 4, (void *)(q + n), b - 4);
    } else {
        func_0208f1dc(func_0208f0b0(c));
    }
    if (func_020b50e8() == 0xd || func_020b50e8() == 0x2f) {
        if (func_020a0370() != 0) {
            _ZN12Unk_020e282413func_020a1464Ejh(func_020a0370(), c, 1);
        }
    }
}
extern "C" void func_02074668(u8 *a, s32 b) {
    if (b == 1) {
        if (*a != 0) {
            func_0208f1dc(func_0208f0b0(4));
        }
    } else {
        MI_CpuCopy8(a, (void *)func_0208f0b0(4), 0x84c);
    }
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            _ZN12Unk_020e282413func_020a1464Ejh(func_020a0370(), data_020cbb18->unk_64, 1);
        }
    }
}
extern "C" void func_02074630(u8 *a, s32 b, s32 c) {
    u32 n;
    MI_CpuCopy8(a, &n, 4);
    s32 t = c + 3;
    s32 q = func_020974a0(t);
    MI_CpuCopy8(a + 4, (void *)(q + n), b - 4);
    func_02095300(c, t);
}
extern "C" void func_02074620(u8 *a, s32 b, s32 c) {
    func_020a5f9c(c, *a);
}
extern "C" void func_020745fc(u8 *a) {
    s32 v = *a;
    func_020a5f9c(3, v & 7);
    func_020a5f7c((v >> 4) & 0xf);
}
extern "C" void func_020745f0() {
    func_020a5cfc(1);
}
extern "C" void func_020745c8(u8 *a) {
    Unk_020cbb18 *g = data_020cbb18;
    if (_ZN12Unk_020cbb1813func_02072e1cEv(g) == 3) {
        _ZN12Unk_020cbb1813func_02072e20Ej(g, *a);
    }
}
extern "C" void func_0207459c() {
    if (func_020b50e8() == 0xd || func_020b50e8() == 0x2f) {
        if (func_020a0370() != 0) {
            func_020a02a0(func_020a0370(), 1);
        }
    }
}
extern "C" void func_02074564(void *a) {
    if (func_020b50e8() == 0xc) {
        if (func_020a0370() != 0) {
            MI_CpuCopy8(a, (void *)func_020a0294(func_020a0370()), 8);
            func_020a0298(func_020a0370(), 1);
        }
    }
}
extern "C" void func_02074538() {
    if (func_020b50e8() == 0xd || func_020b50e8() == 0x2f) {
        if (func_020a0370() != 0) {
            func_020a02b8(func_020a0370(), 1);
        }
    }
}
extern "C" void func_02074504(u8 *a, s32 b) {
    u32 n;
    MI_CpuCopy8(a, &n, 4);
    s32 q = _ZN12Unk_020cbb1813func_02072998Ev(data_020cbb18);
    MI_CpuCopy8(a + 4, (void *)(q + n), b - 4);
}
extern "C" void func_020744fc(void *a, s32 b, s32 c) {
    func_020766ec(a, b, c);
}
extern "C" void func_020744b8(u8 *a, s32 b, s32 c) {
    if (func_020b50e8() == 0x2e || func_020b50e8() == 9) {
        s32 p = func_020a0370();
        if (p != 0) {
            if (func_020eaf90() == 0) {
                func_020a027c(p, c, *a);
            } else {
                func_020a027c(p, 0, *a);
            }
        }
    }
}
extern "C" void func_0207445c(u8 *a) {
    struct {
        u8 r, g, b;
        u8 col[2];
    } l;
    u32 out;
    u32 i;
    for (i = 0; i < 4; i++) {
        func_020a68a8(l.col);
        MI_CpuCopy8(a, l.col, 2);
        func_020a6858(l.col, &l.r, &l.g, &l.b, &out);
        func_020a63bc(i, l.r, l.g, l.b, out);
        a += 2;
        func_020a6898(l.col);
    }
}
extern "C" void func_02074434(void *a, s32 b, s32 c) {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a0244(func_020a0370(), c, 1);
        }
    }
}
extern "C" void func_0207440c(void *a, s32 b, s32 c) {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a023c(func_020a0370(), c, 1);
        }
    }
}
extern "C" void func_020743e8() {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a02b0(func_020a0370(), 1);
        }
    }
}
extern "C" void func_020743c0(void *a, s32 b, s32 c) {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a024c(func_020a0370(), c, 1);
        }
    }
}
extern "C" void func_020743b4(void *a, s32 b, s32 c) {
    func_020a0228(c);
}
extern "C" void func_0207435c(u8 *a, s32 b) {
    u32 n;
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            MI_CpuCopy8(a, &n, 4);
            s32 r = _ZN12Unk_020e282413func_020a148cEv(func_020a0370());
            Unk_020cbb18 *g = data_020cbb18;
            g->unk_68 = 0;
            func_02095300(g->unk_68, r);
            s32 q = func_0209750c();
            MI_CpuCopy8(a + 4, (void *)(q + n), b - 4);
        }
    }
}
extern "C" void func_0207432c(u8 *a, s32 b) {
    u32 n;
    MI_CpuCopy8(a, &n, 4);
    s32 q = func_02097a04(func_0209750c());
    MI_CpuCopy8(a + 4, (void *)(q + n), b - 4);
}
extern "C" void func_02074308() {
    if (func_020b50e8() == 0x2e) {
        if (func_020a0370() != 0) {
            func_020a0208(func_020a0370(), 1);
        }
    }
}
extern "C" void func_020742f4(void *a, s32 b, s32 c, u32 idx) {
    data_020cbb74[idx](a, b, c);
}
}

// ======== data ========
namespace n0 {
extern "C" {
typedef void (*FPT_data_020cbb1c)(u32);
typedef void (*FPT_data_020cbb24)(u8 *, u32);
typedef void (*FPT_data_020cbb74)(void *, s32, s32);
typedef void (*FPT_data_020cbc60)(u32, u32, u32, u32);
typedef void (*FPT_data_020cbd60)(void *);
typedef void (*FPT_data_020cbe78)(void *, u32, u32);
void func_02074308(void);
void func_0207432c(void);
void func_0207435c(void);
void func_020743b4(void);
void func_020743c0(void);
void func_020743e8(void);
void func_0207440c(void);
void func_02074434(void);
void func_0207445c(void);
void func_020744b8(void);
void func_020744fc(void);
void func_02074504(void);
void func_02074538(void);
void func_02074564(void);
void func_0207459c(void);
void func_020745c8(void);
void func_020745f0(void);
void func_020745fc(void);
void func_02074620(void);
void func_02074630(void);
void func_02074668(void);
void func_020746c0(void);
void func_02074724(void);
void func_02074780(void);
void func_0207524c(void);
void func_020752b0(void);
void func_020752e4(void);
void func_020752f0(void);
void func_02075320(void);
void func_02075354(void);
void func_02075360(void);
void func_0207536c(void);
void func_020753d0(void);
void func_02075428(void);
void func_02075450(void);
void func_020754a8(void);
void func_020754e8(void);
void func_0207550c(void);
void func_02075534(void);
void func_02075558(void);
void func_02075580(void);
void func_020755a4(void);
void func_020755cc(void);
void func_020755f4(void);
void func_0207561c(void);
void func_02075680(void);
void func_020756ec(void);
void func_020757ac(void);
void func_02075860(void);
void func_02075950(void);
void func_020759b4(void);
void func_02075a10(void);
void func_02075a6c(void);
void func_02075acc(void);
void func_02075b2c(void);
void func_02075b54(void);
void func_02075b74(void);
void func_02075b9c(void);
void func_02075bc4(void);
void func_02075ca0(void);
void func_02075cc8(void);
void func_02075cf0(void);
void func_02075d38(void);
void func_02075df4(void);
void func_02075e1c(void);
void func_02075e60(void);
void func_02075e98(void);
void func_02075f0c(void);
void func_02075fac(void);
void func_02075fb8(void);
void func_02075fe0(void);
void func_02076000(void);
void func_02076028(void);
void func_02076050(void);
void func_02076070(void);
void func_0207607c(void);
void func_02076088(void);
void func_02076094(void);
void func_020760bc(void);
void func_020760dc(void);
void func_02076104(void);
void func_0207612c(void);
void func_02076154(void);
void func_02076174(void);
void func_02076194(void);
void func_020761bc(void);
void func_02076200(void);
void func_02076220(void);
void func_02076308(void);
void func_02076314(void);
void func_02076320(void);
void func_0207632c(void);
void func_02076338(void);
void func_02076344(void);
void func_02076350(void);
void func_0207635c(void);
void func_02076368(void);
void func_02076374(void);
void func_02076380(void);
void func_0207638c(void);
void func_02076398(void);
void func_020763a4(void);
void func_020763b0(void);
void func_020763bc(void);
void func_020763c8(void);
void func_020763d4(void);
void func_020763e0(void);
void func_020763ec(void);
void func_020763f8(void);
void func_02076404(void);
void func_02076410(void);
void func_0207641c(void);
void func_02076428(void);
void func_02076434(void);
void func_02076440(void);
void func_0207644c(void);
void func_02076458(void);
void func_02076464(void);
void func_02076470(void);
void func_0207647c(void);
void func_02076488(void);
void func_02076494(void);
void func_020764a0(void);
void func_020764ac(void);
void func_020764b8(void);
void func_020764c4(void);
void func_020764d0(void);
void func_020764dc(void);
void func_020764e8(void);
void func_020764f4(void);
void func_02076500(void);
void func_0207650c(void);
void func_02076518(void);
void func_02076524(void);
void func_02076530(void);
void func_0207653c(void);
void func_02076548(void);
void func_02076554(void);
void func_02076560(void);
void func_0207656c(void);
void func_02076578(void);
void func_02076584(void);
void func_02076590(void);
void func_0207659c(void);
void func_020765a8(void);
void func_020765b4(void);
void func_020765c0(void);
void func_020765cc(void);
void func_020765d8(void);
void func_020765e4(void);
void func_020765f0(void);
void func_020765f8(void);
void func_02076600(void);
void func_02076608(void);
void func_0207661c(void);
void func_02076624(void);
void func_0207662c(void);
void func_02076634(void);
void func_02076674(void);
void func_02076680(void);
void func_0207668c(void);
void func_02076698(void);
void func_020766a4(void);
void func_020766b0(void);
void func_020766bc(void);
void func_020766c8(void);
void func_020767f8(void);
void func_020768a0(void);
void func_020768a4(void);
void func_02076918(void);
}
}
namespace n0 {
extern "C" {
extern const FPT_data_020cbb1c data_020cbb1c[2];
const FPT_data_020cbb1c data_020cbb1c[2] = {
    (FPT_data_020cbb1c)func_02076918,
    (FPT_data_020cbb1c)func_020768a4
};
}
}
namespace n0 {
extern "C" {
extern const FPT_data_020cbb24 data_020cbb24[2];
const FPT_data_020cbb24 data_020cbb24[2] = {
    (FPT_data_020cbb24)func_020768a0,
    (FPT_data_020cbb24)func_020767f8
};
}
}
namespace n0 {
extern "C" {
extern const u8 data_020cbb2c[72];
const u8 data_020cbb2c[72] = {0x5, 0x5, 0x5, 0x5, 0x2, 0x2, 0x2, 0x2, 0xc, 0xc, 0xc, 0xc, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x29, 0x29, 0x29, 0x29, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x0, 0x0};
}
}
namespace n0 {
extern "C" {
extern const FPT_data_020cbd60 data_020cbd60[70];
const FPT_data_020cbd60 data_020cbd60[70] = {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (FPT_data_020cbd60)func_020766c8,
    (FPT_data_020cbd60)func_020766bc,
    (FPT_data_020cbd60)func_020766b0,
    (FPT_data_020cbd60)func_020766a4,
    (FPT_data_020cbd60)func_02076698,
    (FPT_data_020cbd60)func_0207668c,
    (FPT_data_020cbd60)func_02076680,
    (FPT_data_020cbd60)func_02076674,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
}
}
extern char data_020e0548[];
char *data_020e0544 = data_020e0548;
char data_020e0548[] = "bbs_default";
namespace n0 {
extern "C" {
extern const FPT_data_020cbb74 data_020cbb74[24];
const FPT_data_020cbb74 data_020cbb74[24] = {
    (FPT_data_020cbb74)func_02074780,
    (FPT_data_020cbb74)func_02074724,
    (FPT_data_020cbb74)func_020746c0,
    (FPT_data_020cbb74)func_02074668,
    (FPT_data_020cbb74)func_02074630,
    (FPT_data_020cbb74)func_02074620,
    (FPT_data_020cbb74)func_020745fc,
    (FPT_data_020cbb74)func_020745f0,
    (FPT_data_020cbb74)func_020745c8,
    (FPT_data_020cbb74)func_0207459c,
    (FPT_data_020cbb74)func_02074564,
    (FPT_data_020cbb74)func_02074538,
    (FPT_data_020cbb74)func_02074504,
    (FPT_data_020cbb74)func_020744fc,
    (FPT_data_020cbb74)func_020744b8,
    (FPT_data_020cbb74)func_0207445c,
    (FPT_data_020cbb74)func_02074434,
    (FPT_data_020cbb74)func_0207440c,
    (FPT_data_020cbb74)func_020743e8,
    (FPT_data_020cbb74)func_020743c0,
    (FPT_data_020cbb74)func_020743b4,
    (FPT_data_020cbb74)func_0207435c,
    (FPT_data_020cbb74)func_0207432c,
    (FPT_data_020cbb74)func_02074308
};
}
}
namespace n0 {
extern "C" {
extern const FPT_data_020cbc60 data_020cbc60[64];
const FPT_data_020cbc60 data_020cbc60[64] = {
    (FPT_data_020cbc60)func_020755f4,
    (FPT_data_020cbc60)func_020755cc,
    (FPT_data_020cbc60)func_020755a4,
    (FPT_data_020cbc60)func_02075580,
    (FPT_data_020cbc60)func_02075558,
    (FPT_data_020cbc60)func_02075534,
    (FPT_data_020cbc60)func_0207550c,
    (FPT_data_020cbc60)func_020754e8,
    (FPT_data_020cbc60)func_020754a8,
    (FPT_data_020cbc60)func_02075450,
    (FPT_data_020cbc60)func_02075428,
    (FPT_data_020cbc60)func_020753d0,
    (FPT_data_020cbc60)func_0207536c,
    (FPT_data_020cbc60)func_02075360,
    (FPT_data_020cbc60)func_02075354,
    (FPT_data_020cbc60)func_02075320,
    (FPT_data_020cbc60)func_020752f0,
    (FPT_data_020cbc60)func_020752e4,
    (FPT_data_020cbc60)func_020752b0,
    (FPT_data_020cbc60)func_0207524c,
    (FPT_data_020cbc60)func_02076220,
    (FPT_data_020cbc60)func_02076200,
    (FPT_data_020cbc60)func_020761bc,
    (FPT_data_020cbc60)func_02076194,
    (FPT_data_020cbc60)func_02076174,
    (FPT_data_020cbc60)func_02076154,
    (FPT_data_020cbc60)func_0207612c,
    (FPT_data_020cbc60)func_02076104,
    (FPT_data_020cbc60)func_020760dc,
    (FPT_data_020cbc60)func_020760bc,
    (FPT_data_020cbc60)func_02076094,
    (FPT_data_020cbc60)func_02076088,
    (FPT_data_020cbc60)func_0207607c,
    (FPT_data_020cbc60)func_02076070,
    (FPT_data_020cbc60)func_02076050,
    (FPT_data_020cbc60)func_02076028,
    (FPT_data_020cbc60)func_02076000,
    (FPT_data_020cbc60)func_02075fe0,
    (FPT_data_020cbc60)func_02075fb8,
    (FPT_data_020cbc60)func_02075fac,
    (FPT_data_020cbc60)func_02075f0c,
    (FPT_data_020cbc60)func_02075e98,
    (FPT_data_020cbc60)func_02075df4,
    (FPT_data_020cbc60)func_02075d38,
    (FPT_data_020cbc60)func_02075cf0,
    (FPT_data_020cbc60)func_02075cc8,
    (FPT_data_020cbc60)func_02075ca0,
    (FPT_data_020cbc60)func_02075e60,
    (FPT_data_020cbc60)func_02075e1c,
    (FPT_data_020cbc60)func_02075bc4,
    (FPT_data_020cbc60)func_02075b9c,
    (FPT_data_020cbc60)func_02075b74,
    (FPT_data_020cbc60)func_02075b54,
    (FPT_data_020cbc60)func_02075b2c,
    (FPT_data_020cbc60)func_02075acc,
    (FPT_data_020cbc60)func_02075a6c,
    (FPT_data_020cbc60)func_02075a10,
    (FPT_data_020cbc60)func_020759b4,
    (FPT_data_020cbc60)func_02075680,
    (FPT_data_020cbc60)func_0207561c,
    (FPT_data_020cbc60)func_02075860,
    (FPT_data_020cbc60)func_020757ac,
    (FPT_data_020cbc60)func_02075950,
    (FPT_data_020cbc60)func_020756ec
};
}
}
Unk_021cc7d0 data_021cc7d0;
namespace n0 {
extern "C" {
extern const FPT_data_020cbe78 data_020cbe78[70];
const FPT_data_020cbe78 data_020cbe78[70] = {
    (FPT_data_020cbe78)func_02076634,
    (FPT_data_020cbe78)func_0207662c,
    (FPT_data_020cbe78)func_02076624,
    (FPT_data_020cbe78)func_0207661c,
    (FPT_data_020cbe78)func_02076608,
    (FPT_data_020cbe78)func_02076600,
    (FPT_data_020cbe78)func_020765f8,
    (FPT_data_020cbe78)func_020765f0,
    (FPT_data_020cbe78)func_020765e4,
    (FPT_data_020cbe78)func_020765d8,
    (FPT_data_020cbe78)func_020765cc,
    (FPT_data_020cbe78)func_020765c0,
    (FPT_data_020cbe78)func_020765b4,
    (FPT_data_020cbe78)func_020765a8,
    (FPT_data_020cbe78)func_0207659c,
    (FPT_data_020cbe78)func_02076590,
    (FPT_data_020cbe78)func_02076584,
    (FPT_data_020cbe78)func_02076578,
    (FPT_data_020cbe78)func_0207656c,
    (FPT_data_020cbe78)func_02076560,
    (FPT_data_020cbe78)func_02076554,
    (FPT_data_020cbe78)func_02076548,
    (FPT_data_020cbe78)func_0207653c,
    (FPT_data_020cbe78)func_02076530,
    (FPT_data_020cbe78)func_02076524,
    (FPT_data_020cbe78)func_02076518,
    (FPT_data_020cbe78)func_0207650c,
    (FPT_data_020cbe78)func_02076500,
    (FPT_data_020cbe78)func_020764f4,
    (FPT_data_020cbe78)func_020764e8,
    (FPT_data_020cbe78)func_020764dc,
    (FPT_data_020cbe78)func_020764d0,
    (FPT_data_020cbe78)func_020764c4,
    (FPT_data_020cbe78)func_020764b8,
    (FPT_data_020cbe78)func_020764ac,
    (FPT_data_020cbe78)func_020764a0,
    (FPT_data_020cbe78)func_02076494,
    (FPT_data_020cbe78)func_02076488,
    (FPT_data_020cbe78)func_0207647c,
    (FPT_data_020cbe78)func_02076470,
    (FPT_data_020cbe78)func_02076464,
    (FPT_data_020cbe78)func_02076458,
    (FPT_data_020cbe78)func_0207644c,
    (FPT_data_020cbe78)func_02076440,
    (FPT_data_020cbe78)func_02076434,
    (FPT_data_020cbe78)func_02076428,
    (FPT_data_020cbe78)func_0207641c,
    (FPT_data_020cbe78)func_02076410,
    (FPT_data_020cbe78)func_02076404,
    (FPT_data_020cbe78)func_020763f8,
    (FPT_data_020cbe78)func_020763ec,
    (FPT_data_020cbe78)func_020763e0,
    (FPT_data_020cbe78)func_020763d4,
    (FPT_data_020cbe78)func_020763c8,
    (FPT_data_020cbe78)func_020763bc,
    (FPT_data_020cbe78)func_020763b0,
    (FPT_data_020cbe78)func_020763a4,
    (FPT_data_020cbe78)func_02076398,
    (FPT_data_020cbe78)func_0207638c,
    (FPT_data_020cbe78)func_02076380,
    (FPT_data_020cbe78)func_02076374,
    (FPT_data_020cbe78)func_02076368,
    (FPT_data_020cbe78)func_0207635c,
    (FPT_data_020cbe78)func_02076350,
    (FPT_data_020cbe78)func_02076344,
    (FPT_data_020cbe78)func_02076338,
    (FPT_data_020cbe78)func_0207632c,
    (FPT_data_020cbe78)func_02076320,
    (FPT_data_020cbe78)func_02076314,
    (FPT_data_020cbe78)func_02076308
};
}
}
namespace n0 {
extern "C" {
extern const u16 data_020cbbd4[70];
const u16 data_020cbbd4[70] = {0x0, 0x5, 0xa, 0xf, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x28, 0x34, 0x40, 0x4c, 0x6a, 0x88, 0xa6, 0xc4, 0xe2, 0x100, 0x11e, 0x13c, 0x165, 0x18e, 0x1b7, 0x1e0, 0x1e7, 0x1ee, 0x1f5, 0x1fc, 0x203, 0x20a, 0x211, 0x218, 0x236, 0x254, 0x272, 0x290, 0x2ae, 0x2cc, 0x2ea, 0x308, 0x326, 0x344, 0x362, 0x380, 0x39e, 0x3bc, 0x3da, 0x3f8, 0x416, 0x434, 0x452, 0x470, 0x48e, 0x4ac, 0x4ca, 0x4e8, 0x506, 0x524, 0x542, 0x560, 0x57e, 0x59c, 0x5ba, 0x5d8, 0x5f6, 0x614, 0x632, 0x650, 0x66e};
}
}
