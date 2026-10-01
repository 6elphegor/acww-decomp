#include "types.h"

inline void *operator new(unsigned long, void *p) { return p; }

typedef void (*Unk_0209c15c_Fn)();
typedef void *(*Unk_0209c1a4_Alloc)(u32, u32);

extern "C" {
void func_02115fb4(void *p, u32 v, u32 n);
}

extern "C" {
void func_020639e8(char *dst, const char *fmt, ...);
}

extern "C" {
s32 func_02063f3c(const char *s);
}

extern "C" {
void func_020e8558(void *p);
}

extern "C" {
void *func_020e8574(u32 n);
}

extern "C" {
void func_020e885c(void *p);
}

extern "C" {
void *func_020e8da0(u32 a, u32 b);
}

extern "C" {
void *func_02135714(void *p, s32 n, s32 size, void *ctor, void *dtor);
}

extern "C" {
void func_021355f0(void *p, s32 n, s32 size, void *dtor);
}

extern "C" {
extern const char data_020e22d0[];
}

extern "C" {
extern const char data_020e22e4[];
}

extern "C" {
extern u32 data_020d0634[6];
}

extern "C" {
extern u16 data_021d7168[];
}

extern "C" {
extern u8 data_021d726c;
}

extern "C" {
extern u8 data_021d7270;
}

extern "C" {
extern u8 data_021f47d0;
}

extern "C" {
extern u8 data_021d7274[3];
}

extern "C" {
extern u8 data_020e416c;
}

extern "C" {
extern u8 data_020d064c[];
}

extern "C" {
extern void *data_021f482c;
}

extern "C" {
extern u8 data_021d7290[];
}

extern "C" {
extern u8 data_021d72b4[];
}

extern "C" {
s32 func_0209c860(void *p, s32 v);
}

extern "C" {
s32 func_0209c8d4(void *p, u32 a, u32 b);
}

extern "C" {
s32 func_0209c8f0(void *p, u32 a, u32 b);
}

extern "C" {
s32 func_0209c908(void *p, u32 a, u32 b);
}

extern "C" {
s32 func_0209c878(void *p);
}

extern "C" {
struct Unk_0209c614_Actor;
}

extern "C" {
struct Unk_0209c614_Vec {
    s32 x, y, z;
};
}

extern "C" {
struct Unk_0209c614_S {
    u8 a, b, c, d;
    u16 e;
    s16 f;
};
}

extern "C" {
Unk_0209c614_Actor *func_02095204(u32 n);
}

extern "C" {
void *func_020b4934();
}

extern "C" {
s32 func_020b4c64(void *o, u32 id, u8 *a, Unk_0209c614_Vec *v, u32 *p20, u16 *e, u8 *c, u8 *b, s32 z0, s32 z1);
}

extern "C" {
void func_020b4b68(void *o, u32 id, u32 *p24, s16 *f);
}

extern "C" {
void func_020b4aec(void *o, u32 id, Unk_0209c614_Vec *v34, Unk_0209c614_Vec *v40);
}

extern "C" {
void func_0209c85c(void *p, u32 id);
}

extern "C" {
void func_0209c854(void *p, u32 v);
}

extern "C" {
void func_0209c850(void *p, u32 v);
}

extern "C" {
void func_0209c840(void *p, Unk_0209c614_Vec *v);
}

extern "C" {
void func_0209c83c(void *p, s32 v);
}

extern "C" {
void func_0209c82c(void *p, Unk_0209c614_Vec *v);
}

extern "C" {
BOOL func_0209c7ec(u32 v);
}

extern "C" {
void func_0204edd8(Unk_0209c614_Vec *a, Unk_0209c614_Vec *b);
}

extern "C" {
s32 func_020b50e8();
}

extern "C" {
s32 func_020b50dc();
}

// ---- Unk_020cbb18 (comm state; only the methods used here)
class Unk_020cbb18 {
public:
    BOOL func_02072e44();
    void func_020728d4();
    void func_020728a4(u8 *buf, u32 n);
    void func_02072824(u32 cmd, u32 arg);
    u32 func_020729cc(u32 v);
};
extern "C" Unk_020cbb18 *data_020cbb18;

// ---- Unk_0206d8b8 (cached record table)
class Unk_0206d8b8 {
public:
    Unk_0206d8b8();
    ~Unk_0206d8b8();
    void func_0206d8b8();
    void func_0206d904();
    BOOL func_0206d940(const char *path, s32 size, s32 count);
    u8 pad[0x1c];
};

// ---- 8-byte cell
class Unk_0209c040 {
public:
    Unk_0209c040();
    ~Unk_0209c040();
    BOOL func_0209c040(s32 v);
    void func_0209c050(s32 v);
    s32 func_0209c054();
    s32 func_0209c058();

    s32 unk_00;
    s32 unk_04;
};

// ---- 6x6 cell grid
class Unk_0209be24 {
public:
    Unk_0209be24();
    ~Unk_0209be24();
    Unk_0209c040 *func_0209bc54(u32 x, u32 y);
    void func_0209b5d4(s32 v);
    BOOL func_0209b63c();
    BOOL func_0209b830();
    BOOL func_0209b9ac(s32 v);
    BOOL func_0209bcf8();
    BOOL func_0209bca8();

    void func_0209be24(u8 *out);
    u32 func_0209be58();
    BOOL func_0209bee4(s32 v);
    void func_0209bf94();
    BOOL func_0209bfa4();

    Unk_0209c040 unk_00[0x24];
    Unk_0206d8b8 unk_120;
};

// ---- row helper
class Unk_0209c038 {
public:
    u8 *func_0209c038(s32 i);
};

// ---- model resource helpers
class Unk_020b83b0 {
public:
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;
    Unk_020b83b0() : unk_04(0), unk_08(0), unk_0c(0xff) {}
};

class Unk_020e4618 : public Unk_020b83b0 {
public:
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    Unk_020e4618();
    virtual BOOL vfunc_00() = 0;
};

struct Unk_020b8c1c {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

class Unk_020e45ec : public Unk_020e4618 {
public:
    Unk_020b8c1c unk_10;
    Unk_020e45ec();
    virtual BOOL vfunc_00();
    void func_020b89c8(void);
    BOOL func_020b89f0(u32 *a, u8 b);
};

class Unk_020dbe24 {
public:
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u8 unk_10;
    u8 unk_11;

    Unk_020dbe24();
    virtual ~Unk_020dbe24();
    void func_020551f4(u32 a, u32 b, u32 c);
    void func_02055200(void);
    void func_02055210(void *p);
    u32 func_0205526c(u32 a, u32 b);
    u32 func_02055298(u32 a, u32 b, u32 c);
    u32 func_020552d8(u32 a, u32 b);
    u32 func_020552ec(u32 a, u32 b);
    u32 func_02055300(u32 a);
    u32 func_02055314(u32 a, u32 b);
    u32 func_02055328(u32 a);
    u32 func_02055334(u32 a);
    s32 func_02055340(void *a, void *b, void *c);
};

class Unk_020dbe04 {
public:
    u32 unk_04;
    void *unk_08;
    void *unk_0c;
    void *unk_10;
    Unk_020e45ec unk_14;
    u8 unk_30;
    u8 unk_31;

    Unk_020dbe04();
    virtual ~Unk_020dbe04();
    u32 func_02055014(void *a, Unk_020dbe24 *b, void *c);
    u32 func_02055090(void *res, Unk_020dbe24 *b, void *tex, void *heap);
    void func_0205516c(void);
    void *func_0205500c(void);
    void *func_02055010(void);
};

// ---- pool entry (0x1c bytes)
class Unk_0209c2f4 {
public:
    Unk_0209c2f4();
    BOOL func_0209c2f4();
    BOOL func_0209c300(void *a, void *b, u32 size, void *extra);
    Unk_020dbe24 *func_0209c344();
    void *func_0209c348();

    u8 unk_00;
    void *unk_04;
    Unk_020dbe24 unk_08;
};

// ---- model resource holder (derived from Unk_020dbe04)
class Unk_0209c0ac {
public:
    Unk_0209c0ac();
    ~Unk_0209c0ac();
    void *func_0209c0ac();
    void func_0209c0b4();
    void func_0209c0c8();
    s32 func_0209c0d0(Unk_0209c2f4 *e, const char *name);

    Unk_020dbe04 unk_00;
    u8 unk_34;
    void *unk_38;
    void *unk_3c;
};

// ---- pool of 0x1c-byte entries
class Unk_0209c15c {
public:
    Unk_0209c15c();
    ~Unk_0209c15c();
    BOOL func_0209c15c();
    BOOL func_0209c1a4(u32 n, void *a, void *b, u32 size, Unk_0209c1a4_Alloc alloc, Unk_0209c15c_Fn free);
    void func_0209c224(u16 *idx);
    Unk_0209c2f4 *func_0209c25c(u16 *idx);

    u16 unk_00;
    u32 unk_04;
    u32 unk_08;
    Unk_0209c2f4 *unk_0c;
    Unk_0209c1a4_Alloc unk_10;
    Unk_0209c15c_Fn unk_14;
};
// global of the file: 1-byte state with empty inline constructor/destructor (func_0209c0a8 / func_0209c0a4)
class Unk_0209c08c {
public:
    Unk_0209c08c();
    ~Unk_0209c08c();
    u8 unk_00;
};

Unk_0209c08c data_021d7158;

extern "C" void func_0209c370(u16 *p);
extern "C" void func_0209c364(u16 *p);
extern "C" void func_0209c098(u32 v);
extern "C" u32 func_0209c08c();

extern "C" void func_0209c370(u16 *p) {
    *p = 0xffff;
}

extern "C" void func_0209c364(u16 *p) {
    *p = 0xffff;
}

Unk_0209c2f4::Unk_0209c2f4() {
    unk_00 = 0;
    unk_04 = 0;
}

void *Unk_0209c2f4::func_0209c348() {
    return unk_04;
}

Unk_020dbe24 *Unk_0209c2f4::func_0209c344() {
    return &unk_08;
}

BOOL Unk_0209c2f4::func_0209c300(void *a, void *b, u32 size, void *extra) {
    if (size) {
        unk_04 = func_020e8da0((size + 3) & ~3, (u32)extra);
    }
    if (a != 0 || b != 0) {
        if (unk_08.func_02055340(a, 0, b)) return TRUE;
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_0209c2f4::func_0209c2f4() {
    unk_00 = 0;
    unk_04 = 0;
    return TRUE;
}

Unk_0209c15c::Unk_0209c15c() {
    unk_10 = 0;
    unk_14 = 0;
    unk_0c = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_00 = 0xffff;
}

Unk_0209c15c::~Unk_0209c15c() {}

Unk_0209c2f4 *Unk_0209c15c::func_0209c25c(u16 *idx) {
    u32 i = *idx;
    if (i == 0xffff) {
        Unk_0209c2f4 *e;
        u16 k;
        u32 n;
        Unk_0209c2f4 *arr;
        arr = unk_0c;
        e = arr;
        k = 0;
        n = unk_04;
        for (; k < n; e++, k++) {
            if (e->unk_00 == 0 && k != unk_00) {
                e->unk_00 = 1;
                *idx = k;
                unk_08++;
                return e;
            }
        }
        u32 h = unk_00;
        Unk_0209c2f4 *r = &arr[h];
        if (arr[h].unk_00 == 0) {
            r->unk_00 = 1;
            *idx = unk_00;
            unk_08++;
            return r;
        }
    } else {
        if (i < unk_04) return &unk_0c[i];
        *idx = 0xffff;
    }
    return 0;
}

void Unk_0209c15c::func_0209c224(u16 *idx) {
    u32 i = *idx;
    if (i != 0xffff) {
        Unk_0209c2f4 *arr = unk_0c;
        Unk_0209c2f4 *e = &arr[i];
        arr[i].unk_00 = 0;
        unk_00 = *idx;
        *idx = 0xffff;
        if (e->unk_04) func_020e885c(e->unk_04);
        unk_08--;
    }
}

BOOL Unk_0209c15c::func_0209c1a4(u32 n, void *a, void *b, u32 size, Unk_0209c1a4_Alloc alloc, Unk_0209c15c_Fn free) {
    void *mem;
    unk_10 = alloc;
    unk_14 = free;
    u32 total = n * ((size + 0x5b) & ~3);
    unk_04 = n;
    mem = 0;
    unk_08 = 0;
    if (size) mem = unk_10(total, 0);
    unk_0c = (Unk_0209c2f4 *)func_020e8574(unk_04 * 0x1c);
    Unk_0209c2f4 *e = unk_0c;
    if (e) {
        u32 i;
        for (i = 0; i < unk_04; i++) {
            e = new (e) Unk_0209c2f4;
            if (!e->func_0209c300(a, b, size, mem)) return FALSE;
            e++;
        }
    }
    return TRUE;
}

BOOL Unk_0209c15c::func_0209c15c() {
    Unk_0209c2f4 *e = unk_0c;
    if (e != 0) {
        u32 i;
        for (i = 0; i < unk_04; i++) {
            e->func_0209c2f4();
            e++;
        }
        func_020e8558(unk_0c);
    }
    if (unk_14) unk_14();
    unk_10 = 0;
    unk_14 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_00 = 0xffff;
    unk_0c = 0;
    return TRUE;
}

Unk_0209c0ac::Unk_0209c0ac() {
    unk_34 = 0;
    unk_38 = 0;
}

Unk_0209c0ac::~Unk_0209c0ac() {
    func_0209c0b4();
}

s32 Unk_0209c0ac::func_0209c0d0(Unk_0209c2f4 *e, const char *name) {
    if (unk_38 == 0) unk_38 = e;
    if (unk_34 == 0) {
        Unk_020dbe24 *r = e->func_0209c344();
        void *t = e->func_0209c348();
        if (unk_00.func_02055090((void *)name, r, t, data_021f482c) == 3) unk_34 = 1;
    }
    return unk_34;
}

void Unk_0209c0ac::func_0209c0c8() {
    func_0209c0b4();
}

void Unk_0209c0ac::func_0209c0b4() {
    unk_34 = 0;
    unk_38 = 0;
    unk_3c = 0;
    unk_00.func_0205516c();
}

void *Unk_0209c0ac::func_0209c0ac() {
    return unk_00.func_02055010();
}

Unk_0209c08c::Unk_0209c08c() {}

Unk_0209c08c::~Unk_0209c08c() {}

extern "C" void func_0209c098(u32 v) {
    data_021d7158.unk_00 = v;
}

extern "C" u32 func_0209c08c() {
    return data_021d7158.unk_00;
}

struct Unk_0209c3cc_Nib {
    u8 lo : 4;
    u8 hi : 4;
};

extern "C" BOOL func_0209c3e0(u32 idx, u8 v);

class Unk_0209c41c_Actor {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual BOOL vfunc_60(u32 v);
};

struct Unk_0209c41c_Pack {
    u8 lo : 4;
    u8 hi : 4;
};

extern "C" void func_0209c5a0(u32 a, u32 b);

struct Unk_0209c614_Actor {
    u8 pad_00[0x5c];
    Unk_0209c614_Vec unk_5c;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
};
