#include "types.h"

inline void *operator new(unsigned long, void *p) {
    return p;
}

class Unk_02060b10 {
public:
    u16 unk_00[0x100];
    Unk_02060b10();
    ~Unk_02060b10();
    Unk_02060b10 *func_02060b10();
    void func_02060b14();
};

class Unk_02052620 {
public:
    u8 unk_00[0x48];
    Unk_02052620();
    ~Unk_02052620();
    void func_020526ec();
};

struct Unk_0204ee94 {
    u32 unk_00;
    u32 unk_04[2];
    u32 unk_0c;
    Unk_0204ee94();
};

class Unk_02060034 {
public:
    u8 unk_00[12];
    Unk_02060034();
    ~Unk_02060034();
    void func_02060034();
};

class Unk_02060a90 {
public:
    Unk_02060b10 unk_000[2];
    Unk_02052620 unk_400;
    u16 unk_448;
    u16 unk_44a;
    u16 unk_44c;
    u8 unk_44e_0 : 1;
    u8 unk_44e_1 : 1;
    Unk_02060a90();
    ~Unk_02060a90();
    void func_02060878_dummy();
    Unk_0204ee94 *func_02060878(void *heap);
    void func_020608b8(s32 i);
    void func_020607c8(u16 *src);
    u16 *func_020607d4();
    void func_020607e0(u16 *src, u32 flag);
    void func_02060808(u16 *src, u32 flag);
    u16 *func_02060834(s32 *out);
    u16 *func_02060850(s32 *out);
    Unk_02052620 *func_0206086c();
};

struct Unk_0206022c_Bits {
    u32 a : 3;
    u32 b : 3;
    u32 c : 4;
    u32 d : 4;
    u32 e : 4;
    u32 f : 6;
    u32 cnt : 8;
};

class Unk_0206022c {
public:
    Unk_02060a90 unk_0000[5];
    s32 unk_1590;
    Unk_02060034 unk_1594;
    Unk_0206022c_Bits unk_15a0;

    Unk_0206022c();
    ~Unk_0206022c();
    BOOL func_0206022c();
    BOOL func_02060244(u32 x, u32 set);
    BOOL func_020602cc(u32 v);
    s32 func_02060308();
    void func_02060340();
    void func_02060370(s32 v);
    s32 func_02060388();
    void func_02060394(s32 v);
    void func_020603b0(u8 v);
    u8 func_020603bc();
    u16 func_020603f4(s32 x);
    BOOL func_02060430(u32 v);
    u8 func_0206045c();
    BOOL func_02060474();
    u32 func_020604c4();
    BOOL func_020604d4();
    Unk_0204ee94 *func_020604f8(s32 idx, void *heap);
    Unk_02060a90 *func_0206052c(s32 idx);
    Unk_02060a90 *func_02060550(s32 x);
    void func_0206058c();
    void func_020605a8();
    void func_020606d8();
};

extern "C" {
extern Unk_0206022c data_021e58a8;
extern u8 data_021e6e3c[];
extern u8 data_021d7350[];
extern void *data_020dcbd0[];
extern u8 data_021d7350[];
s32 func_020b533c(u32 x);
s32 func_020b530c(u32 x);
s32 _ZN12Unk_0209da4413func_0209e170Ej(void *p, s32 v);
void _ZN12Unk_0209da4413func_0209e148Ej(void *p, s32 v);
void func_0204d42c();
void func_0204d3d8();
void *func_0204da0c();
u16 func_0204b0e0(s32 x);
Unk_0204ee94 *func_0204ee64(s32 n, void *heap);
BOOL func_0204e9dc(void *g, s32 *a, s32 *b, s32 *c, s32 *d, u16 *e, u16 *f, s32 filter, s32 h);
void func_0204edf8(s32 *ox, s32 *oz, s32 a, s32 b, s32 c, s32 d);
void *func_0204eb30(void *g, u16 *a, s32 x, s32 z, u8 d);
void OS_GetOwnerInfo(u8 *buf);
void func_02052554(s32 a, s32 b, s32 c, s32 d, s32 e);
u32 func_020602ac(u32 x);
BOOL func_0206057c(s32 i);
u16 func_020603c8();
BOOL func_02060654(s32 x);
}

extern "C" {
s32 func_020b50e8();
void *__cxa_vec_cleanup(void *arr, u32 n, u32 sz, void (*dtor)(void *));
void *__cxa_vec_ctor(void *arr, u32 n, u32 sz, void (*ctor)(void *), void (*dtor)(void *));
void _ZN12Unk_0203442cD1Ev(void *p);
void _ZN12Unk_0203442cC1Ev(void *p);
void *func_0209cbe0();
s32 func_020e7fcc(void *a, void *b);
void func_0206007c(u8 *bits, u32 i);
void func_020600d4(u8 *bits, u32 i);
BOOL func_02060130(u8 *bits, u32 i);
BOOL func_02060190(u16 *p);
BOOL func_020601a4(s32 a, u16 *p);
}


class Unk_020601cc_Dflt {
public:
    u16 unk_00;
    inline Unk_020601cc_Dflt() { unk_00 = 0xfff1; }
    ~Unk_020601cc_Dflt();
};

extern const u16 data_020cb550[7];
extern const s32 data_020cb560[7];
extern const u16 data_020cb57c[7][5];

const u16 data_020cb550[7] = {0x1003, 0x1003, 0x1003, 0x1008, 0x1008, 0x1008, 0x1008};
const s32 data_020cb560[7] = {0x4d58, 0x1d4c0, 0x48c10, 0x91ff0, 0xb1bc0, 0xcf080, 0xe7720};
const u16 data_020cb57c[7][5] = {
    {0x1002, 0x100e, 0x100c, 0x100a, 0x1007},
    {0x1004, 0x100e, 0x100c, 0x100a, 0x1007},
    {0x1005, 0x100e, 0x100c, 0x100a, 0x1007},
    {0x1006, 0x100e, 0x100c, 0x100a, 0x1007},
    {0x1009, 0x100e, 0x100c, 0x100a, 0x1007},
    {0x100b, 0x100e, 0x100c, 0x100a, 0x1007},
    {0x100d, 0x100e, 0x100c, 0x100a, 0x1007}
};


struct Unk_02060654_Pad {
    s32 v[6];
    Unk_02060654_Pad() {}
    ~Unk_02060654_Pad() {}
};

struct Unk_020608b8_W {
    u16 v;
    Unk_020608b8_W(u16 x) { v = x; }
    ~Unk_020608b8_W();
};

static inline s32 Unk_02060044_Idx(u32 id)
{
    if (id >= 0x1323 && id <= 0x1368) {
        return id - 0x1323;
    }
    return -1;
}

extern "C" void *_ZN12Unk_02060b10C1Ev(void *p) {
    __cxa_vec_ctor(p, 0x100, 2, _ZN12Unk_0203442cC1Ev, _ZN12Unk_0203442cD1Ev);
    return p;
}

extern "C" void *_ZN12Unk_02060b10D1Ev(void *p) {
    __cxa_vec_cleanup(p, 0x100, 2, _ZN12Unk_0203442cD1Ev);
    return p;
}

void Unk_02060b10::func_02060b14() {
    u16 *p = unk_00;
    for (s32 i = 0; i < 0x100; i++) {
        *p++ = 0xfff1;
    }
}

Unk_02060b10 *Unk_02060b10::func_02060b10() { return this; }

Unk_02060a90::Unk_02060a90() { u16 v = 0xfff1;
    unk_448 = v;
    unk_44a = v;
    unk_44c = v; }

Unk_02060a90::~Unk_02060a90() {}

void Unk_02060a90::func_020608b8(s32 i) {
    Unk_02060b10 *p = &unk_000[0];
    s32 j = 0;
    for (; j < 2; p++, j++) {
        p->func_02060b14();
    }
    unk_400.func_020526ec();
    static Unk_020608b8_W t1[5] = { Unk_020608b8_W(0x113e), Unk_020608b8_W(0x113e), Unk_020608b8_W(0x113e), Unk_020608b8_W(0x113e), Unk_020608b8_W(0x113e) };
    unk_448 = t1[i].v;
    static Unk_020608b8_W t2[5] = { Unk_020608b8_W(0x1182), Unk_020608b8_W(0x1182), Unk_020608b8_W(0x1182), Unk_020608b8_W(0x1182), Unk_020608b8_W(0x1182) };
    unk_44a = t2[i].v;
    unk_44c = 0xfff1;
    if (i == 0) {
        Unk_02060b10 *a = unk_000[0].func_02060b10();
        Unk_02060b10 *b = unk_000[1].func_02060b10();
        if (a) {
            a->unk_00[0xa6] = 0x3808;
            a->unk_00[0xa9] = 0x374c;
        }
        if (b) {
            b->unk_00[0xa6] = 0x382c;
            func_02052554(6, 10, 1, 0, 1);
        }
    }
}

Unk_0204ee94 *Unk_02060a90::func_02060878(void *heap) {
    Unk_0204ee94 *p = func_0204ee64(1, heap);
    if (p) {
        new (p) Unk_0204ee94;
    }
    if (p) {
        for (s32 i = 0; i < 2; i++) {
            p->unk_04[i] = (u32)unk_000[i].func_02060b10();
        }
        p->unk_0c = 0;
    }
    return p;
}

Unk_02052620 *Unk_02060a90::func_0206086c() { return &unk_400; }

u16 *Unk_02060a90::func_02060850(s32 *out) {
    if (out) *out = unk_44e_0;
    return &unk_448;
}

u16 *Unk_02060a90::func_02060834(s32 *out) {
    if (out) *out = unk_44e_1;
    return &unk_44a;
}

void Unk_02060a90::func_02060808(u16 *src, u32 flag) {
    unk_448 = *src;
    unk_44e_0 = flag;
}

void Unk_02060a90::func_020607e0(u16 *src, u32 flag) {
    unk_44a = *src;
    unk_44e_1 = flag;
}

u16 *Unk_02060a90::func_020607d4() { return &unk_44c; }

void Unk_02060a90::func_020607c8(u16 *src) { unk_44c = *src; }

Unk_0206022c::Unk_0206022c() {}

Unk_0206022c::~Unk_0206022c() {}

void Unk_0206022c::func_020606d8() {
    Unk_02060a90 *p = &unk_0000[0];
    s32 i = 0;
    u8 buf[0x50];
    for (; i < 5; p++, i++) {
        p->func_020608b8(i);
    }
    unk_15a0.a = 0;
    unk_1594.func_02060034();
    OS_GetOwnerInfo(buf);
    unk_15a0.d = buf[1];
    unk_15a0.c = unk_15a0.d;
    unk_15a0.e = 0;
}

extern "C" BOOL func_02060654(s32 x) {
    void *g = func_0204da0c();
    u16 arr[3];
    s32 ox, oz, a, b, c, d;
    Unk_02060654_Pad pad;
    arr[1] = 0x5014;
    arr[2] = 0x501a;
    if (func_0204e9dc(g, &a, &b, &c, &d, &arr[1], &arr[2], 1, 0)) {
        func_0204edf8(&ox, &oz, a, b, c, d);
        arr[0] = func_0204b0e0(x);
        if (func_0204eb30(g, arr, ox, oz, 0)) return TRUE;
    }
    return FALSE;
}

void Unk_0206022c::func_020605a8() {
    if (unk_15a0.c != unk_15a0.d) {
        unk_15a0.c = unk_15a0.d;
    }
    u32 b = unk_15a0.b;
    if (b != func_020604c4()) {
        if (func_02060654(b)) {
            unk_15a0.a = unk_15a0.b;
            unk_15a0.d = unk_15a0.e;
            unk_15a0.c = unk_15a0.d;
            func_0204d42c();
            func_0204d3d8();
            _ZN12Unk_0209da4413func_0209e148Ej(data_021d7350, 13);
        }
    }
}

void Unk_0206022c::func_0206058c() {
    unk_1590 = 0x4d58;
    unk_15a0.cnt = 0;
}

extern "C" BOOL func_0206057c(s32 i) {
    if (i >= 0 && i < 5) return TRUE;
    return FALSE;
}

Unk_02060a90 *Unk_0206022c::func_02060550(s32 x) {
    if (func_020b530c(x)) {
        return func_0206052c(func_020b533c(x));
    }
    return NULL;
}

Unk_02060a90 *Unk_0206022c::func_0206052c(s32 idx) {
    Unk_02060a90 *r = NULL;
    if (func_0206057c(idx)) {
        r = &unk_0000[idx];
    }
    return r;
}

Unk_0204ee94 *Unk_0206022c::func_020604f8(s32 idx, void *heap) {
    Unk_0204ee94 *p = NULL;
    Unk_02060a90 *e = func_0206052c(idx);
    if (e) {
        p = e->func_02060878(heap);
        if (p) {
            p->unk_00 = func_020603f4(idx);
        }
    }
    return p;
}

BOOL Unk_0206022c::func_020604d4() {
    if (unk_15a0.b != func_020604c4()) return TRUE;
    return FALSE;
}

u32 Unk_0206022c::func_020604c4() { return unk_15a0.a; }

BOOL Unk_0206022c::func_02060474() {
    if (unk_15a0.b == func_020604c4()) {
        if ((s32)func_020604c4() < 6) {
            unk_15a0.b = (u8)(func_020604c4() + 1);
            return TRUE;
        }
    }
    return FALSE;
}

u8 Unk_0206022c::func_0206045c() { return (u8)(unk_15a0.c & 0xf); }

BOOL Unk_0206022c::func_02060430(u32 v) {
    unk_15a0.d = (u8)(v & 0xf);
    return TRUE;
}

u16 Unk_0206022c::func_020603f4(s32 x) {
    if (x != -1) {
        s32 m = data_021e58a8.func_020604c4();
        if (m < 7) return data_020cb57c[m][x];
        return 0x1002;
    }
    return 0x1002;
}

extern "C" u16 func_020603c8() {
    s32 m = data_021e58a8.func_020604c4();
    if (m < 7) return data_020cb550[m];
    return 0x1003;
}

u8 Unk_0206022c::func_020603bc() { return unk_15a0.cnt; }

void Unk_0206022c::func_020603b0(u8 v) { unk_15a0.cnt = v; }

void Unk_0206022c::func_02060394(s32 v) {
    if (v >= 7) {
        s32 t = unk_15a0.cnt + (v - 6);
        if (t > 10) t = 10;
        unk_15a0.cnt = t;
    }
}

s32 Unk_0206022c::func_02060388() { return unk_1590; }

void Unk_0206022c::func_02060370(s32 v) {
    if (v < 0) {
        unk_1590 = 0;
    } else {
        unk_1590 = v;
    }
}

void Unk_0206022c::func_02060340() {
    if (func_02060388() == 0) {
        u32 m = func_020604c4();
        if (m < 7) {
            func_02060370(data_020cb560[m]);
        }
    }
}

s32 Unk_0206022c::func_02060308() {
    if (unk_15a0.b == func_020604c4()) {
        if (func_02060388() == 0) {
            return _ZN12Unk_0209da4413func_0209e170Ej(data_021d7350, 13);
        }
    }
    return 0;
}

BOOL Unk_0206022c::func_020602cc(u32 v) {
    if (func_02060474()) {
        unk_15a0.e = v;
        return TRUE;
    }
    return FALSE;
}

extern "C" u32 func_020602ac(u32 x) {
    s32 r = func_020b533c(x);
    u8 m = 0;
    if (r != -1) {
        m = 1 << r;
    }
    return m;
}

BOOL Unk_0206022c::func_02060244(u32 x, u32 set) {
    u32 m = func_020602ac(x);
    if (m) {
        if (set) {
            unk_15a0.f = unk_15a0.f | m;
        } else {
            unk_15a0.f = unk_15a0.f & ~m;
        }
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0206022c::func_0206022c() {
    if (unk_15a0.f != 0) return TRUE;
    return FALSE;
}

extern "C" u16 *func_020601cc()
{
    Unk_02060a90 *r = data_021e58a8.func_02060550(func_020b50e8());
    if (r != 0) {
        return r->func_020607d4();
    }
    static Unk_020601cc_Dflt dflt;
    return &dflt.unk_00;
}

extern "C" BOOL func_020601a4(s32 a, u16 *p)
{
    Unk_02060a90 *r = data_021e58a8.func_02060550(a);
    if (r != 0) {
        r->func_020607c8(p);
        return TRUE;
    }
    return FALSE;
}

extern "C" BOOL func_02060190(u16 *p)
{
    return func_020601a4(func_020b50e8(), p);
}

extern "C" BOOL func_02060174(s32 a)
{
    u16 v = 0xfff1;
    return func_020601a4(a, &v);
}

extern "C" BOOL func_02060158()
{
    u16 v = 0xfff1;
    return func_02060190(&v);
}

Unk_02060034::Unk_02060034() {}

Unk_02060034::~Unk_02060034() {}

extern "C" BOOL func_02060130(u8 *bits, u32 i)
{
    if (i < 0x46) {
        if ((bits[i >> 3] >> (i & 7)) & 1) {
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

extern "C" BOOL func_020600f4(u32 id)
{
    if (id >= 0x1323 && id <= 0x1368) {
        return func_02060130(data_021e6e3c, Unk_02060044_Idx(id));
    }
    return FALSE;
}

extern "C" void func_020600d4(u8 *bits, u32 i)
{
    if (i < 0x46) {
        bits[i >> 3] |= 1 << (i & 7);
    }
}

extern "C" void func_0206009c(u32 id)
{
    if (id >= 0x1323 && id <= 0x1368) {
        func_020600d4(data_021e6e3c, Unk_02060044_Idx(id));
    }
}

extern "C" void func_0206007c(u8 *bits, u32 i)
{
    if (i < 0x46) {
        bits[i >> 3] &= ~(1 << (i & 7));
    }
}

extern "C" void func_02060044(u32 id)
{
    if (id >= 0x1323 && id <= 0x1368) {
        func_0206007c(data_021e6e3c, Unk_02060044_Idx(id));
    }
}

void Unk_02060034::func_02060034()
{
    u32 i = 0;
    s32 z = 0;
    for (; i < 9; i++) {
        unk_00[i] = z;
    }
}

