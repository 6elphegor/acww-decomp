#include "types.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes of other units

class Unk_020a72b0 {
public:
    Unk_020a72b0();
    void func_020a72f0(char **a, char **b, char **c);
    void func_020a7338(char **a, char **b);
    s32 func_020a736c();
    BOOL func_020a7374();
    void func_020a777c(u8 *p);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ char *unk_0c;
    /* 0x10 */ u8 *unk_10;
};

class Unk_020e2a30 {
public:
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    Unk_020e2a30();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

// Script interpreter root
class Unk_020e2b08 {
public:
    Unk_020e2b08();
    virtual ~Unk_020e2b08();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);

    void func_020a832c();
    void func_020a8348(u8 *p);
    void func_020a8368(u8 *p);
    void func_020a84bc();

    /* 0x04 */ u8 *unk_04;
    /* 0x08 */ u8 unk_08[0x1c];
};

class Unk_020e2b4c : public Unk_020e2b08 {
public:
    Unk_020e2b4c() {}
    virtual ~Unk_020e2b4c() {}
    virtual BOOL vfunc_18();
    u8 *func_020a82ec(BOOL arg);
};

// BMG message file reader
class Unk_020e2a18 {
public:
    Unk_020e2a18(u8 arg1);
    virtual ~Unk_020e2a18();
    virtual u32 vfunc_08() = 0;
    virtual u32 vfunc_0c() = 0;
    BOOL func_020a8a20(const char *name);
    BOOL func_020a8950(u8 *p);
    void func_020a89f0();

    /* 0x04 */ u8 unk_04[0xa0];
};

class Unk_020e2a78 {
public:
    BOOL func_020a7a28(u8 *str);
    BOOL func_020a7c04(u8 *str);
};

extern "C" {
void func_02115fb4(void *dst, u32 value, u32 size);
void *__cxa_vec_ctor(void *p, u32 n, u32 size, void *ctor, void *dtor);
void *__cxa_vec_cleanup(void *p, u32 n, u32 size, void *dtor);
void _ZN12Unk_020e2a48D1Ev(void *);
void _ZN12Unk_020e2a48C1Ev(void *);
s32 func_020639e8(char *buf, const char *fmt, ...);
void func_020b313c(void *, s32);
void func_020b3158(void *, s32);
s32 _ZN12Unk_020e2a7813func_020a7bd8EPS_(void *, void *);
u8 *func_0205022c(void);
u8 *func_02050224(void);
u8 *func_02050234(void);
u8 *func_0205023c(void);
s32 func_020501e8(s32 v);
BOOL func_0209750c(void);
s32 _ZN12Unk_0209865c13func_0209888cEv(void);
BOOL _ZN12Unk_020940a013func_0209411cEv(void);
void _ZN12Unk_020d94d0D1Ev(void *);
void _ZN12Unk_020d94e8D1Ev(void *);
void _ZN12Unk_020d94e8C1EP18Unk_020d94e8_Owner(void *, void *);
void _ZN12Unk_020d94d0C1Ev(void *);
}

extern char data_020d9434[];
extern char data_020d9438[];
extern char data_020d943c[];
extern char data_020d9440[];
extern char data_020d9448[];
extern char data_020d9450[];
extern char data_020d9458[];
extern char data_020d9478[];
extern char data_020d9488[];
extern char data_020d949c[];
extern "C" {
BOOL _ZN12Unk_020d94e813func_0203d36cEh(void *self, BOOL b);
void _ZN12Unk_020d94e813func_0203d1dcEv();
void _ZN12Unk_020d94e813func_0203d134Ev();
void _ZN12Unk_020d94e813func_0203d188Ev();
}
extern const u32 data_020c9030[3];
extern const u32 data_020c903c[8];

// ---------------------------------------------------------------------------------------------------------------------
// Vtable 0x020d94b8 (message request), derived from Unk_020e2a30

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

// Buffer reader (vtable 0x020d94d0, derived from Unk_020e2a18)
class Unk_020d94d0 : public Unk_020e2a18 {
public:
    Unk_020d94d0();
    virtual ~Unk_020d94d0();
    virtual u32 vfunc_08();
    virtual u32 vfunc_0c();
    void func_0203d458();

    /* 0xa4 */ u8 unk_a4[0x200];
};

// Script interpreter (vtable 0x020d94e8)
struct Unk_020d94e8_Entry {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual u8 *vfunc_0c();
    u32 unk_04;
    u32 unk_08;
    s32 unk_0c;
    u8 unk_10[0x24];
};

struct Unk_020d94e8_Sub {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual u8 *vfunc_08();
};

struct Unk_020d94e8_Owner {
    /* 0x000 */ u8 unk_000[0x5c];
    /* 0x05c */ u8 unk_05c[0x2a4];
    /* 0x300 */ s8 unk_300[0x200];
    /* 0x500 */ u32 unk_500;
    /* 0x504 */ Unk_020d94e8_Entry unk_504[11];
};

class Unk_020d94e8;
typedef void (Unk_020d94e8::*Unk_020d94e8_Fn)();
extern void *data_020d9460[2];
extern void *data_020d9468[2];
extern void *data_020d9470[2];

class Unk_020d94e8 : public Unk_020e2b4c {
public:
    Unk_020d94e8(Unk_020d94e8_Owner *owner);
    virtual ~Unk_020d94e8();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 v);
    virtual void vfunc_14(u8 *p);
    virtual BOOL vfunc_18();

    void func_0203d078(Unk_020d94e8_Entry *e);
    void func_0203d0d0(s32 sel);
    void func_0203d11c(s32 sel);
    void func_0203d124(s32 sel);
    void func_0203d12c(s32 sel);
    void func_0203d134();
    void func_0203d188();
    void func_0203d1dc();
    void func_0203d210();
    u8 func_0203d36c(u8 flag);

    /* 0x24 */ Unk_020d94e8_Owner *unk_24;
    /* 0x28 */ Unk_020a72b0 unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ s32 unk_40;
    /* 0x44 */ u8 unk_44;
    /* 0x45 */ u8 unk_45;
    /* 0x48 */ u8 *unk_48;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ u8 unk_50;
    /* 0x54 */ s32 unk_54;
    /* 0x58 */ s32 unk_58;
};

struct Unk_0203ce24_Elem {
    u8 unk_00[0x34];
};

// ---- container singleton at 0x021c3280 (a Unk_020d94e8 at +0, a Unk_020d94d0 at +0x5c)
class Unk_0203cc64 {
public:
    Unk_0203cc64();
    ~Unk_0203cc64();
    BOOL func_0203cc64(Unk_020d94b8 *p);
    void func_0203cd68();

    /* 0x000 */ u8 unk_00[0x5c];
    /* 0x05c */ u8 unk_5c[0x2a4];
    /* 0x300 */ u8 unk_300[0x200];
    /* 0x500 */ s32 unk_500;
    /* 0x504 */ Unk_0203ce24_Elem unk_504[11];
};

extern Unk_0203cc64 data_021c3280;

enum Unk_0203d134_E { Unk_0203d134_E0 = 0, Unk_0203d134_E15 = 15 };

extern "C" s32 func_0203d4d4(void) { return 0; }

extern "C" void func_0203d4d0(void) {}

extern "C" void func_0203d4cc(void) {}

extern "C" void func_0203d4c8(void) {}

extern "C" void func_0203d4c4(void) {}

extern "C" void func_0203d4c0(void) {}

Unk_020d94d0::Unk_020d94d0() : Unk_020e2a18(0) {}

Unk_020d94d0::~Unk_020d94d0() {}

void Unk_020d94d0::func_0203d458() {
    func_02115fb4(unk_a4, 0, 0x200);
}

u32 Unk_020d94d0::vfunc_08() {
    return (u32)unk_a4;
}

u32 Unk_020d94d0::vfunc_0c() {
    return 0x200;
}

Unk_020d94e8::Unk_020d94e8(Unk_020d94e8_Owner *owner) : unk_24(owner) {
    unk_3c = 0;
    unk_40 = 0;
    unk_44 = 1;
    unk_45 = 0;
    unk_48 = 0;
    unk_4c = 0;
    unk_50 = 0;
    unk_54 = 0;
    unk_58 = 0;
}

Unk_020d94e8::~Unk_020d94e8() {}

u8 Unk_020d94e8::func_0203d36c(u8 flag) {
    unk_44 = 1;
    unk_40 = 0;
    unk_50 = flag;
    unk_54 = 0;
    unk_58 = 0;
    func_020a84bc();
    func_020a8368(((Unk_020d94e8_Sub *)(unk_24->unk_05c))->vfunc_08());
    func_020a82ec(FALSE);
    return unk_44;
}

void Unk_020d94e8::vfunc_08() {
    unk_45 = 0;
    unk_48 = 0;
    unk_4c = 0;
}

void Unk_020d94e8::vfunc_0c() {}

void Unk_020d94e8::vfunc_10(u32 v) {
    if (unk_45) {
        unk_3c = func_020501e8(v);
        unk_45 = 0;
    } else {
        unk_3c = v;
    }
    func_0203d210();
    if ((u32)unk_04 == (u32)unk_48) {
        unk_48 = 0;
        func_020a832c();
    }
}

void Unk_020d94e8::vfunc_14(u8 *p) {
    unk_28.func_020a777c(p);
    s32 r4 = unk_28.unk_00;
    Unk_020d94e8_Fn fn = 0;
    if (r4 == 4 && unk_28.func_020a7374()) {
        fn = *(Unk_020d94e8_Fn *)data_020d9460;
    } else if (r4 == 0) {
        fn = *(Unk_020d94e8_Fn *)data_020d9470;
    } else if (r4 == 0xb) {
        fn = *(Unk_020d94e8_Fn *)data_020d9468;
    }
    if (fn) {
        (this->*fn)();
    } else {
        unk_44 = 0;
    }
}

BOOL Unk_020d94e8::vfunc_18() {
    return TRUE;
}

void Unk_020d94e8::func_0203d210() {
    s32 t = unk_3c;
    s8 c = (s8)t;
    s32 idx = unk_40;
    if ((u32)(0x200 - idx) > 1) {
        if (t == 10 && unk_50 != 0) {
            unk_58++;
            if (unk_58 == 1) {
                unk_24->unk_500 = unk_54;
            }
        } else {
            unk_40++;
            unk_24->unk_300[idx] = c;
            if (unk_50 != 0) {
                unk_54++;
            }
        }
    } else {
        unk_44 = 0;
    }
}

void Unk_020d94e8::func_0203d1dc() {
    s32 i = unk_28.func_020a736c();
    Unk_020d94e8_Entry *e = &unk_24->unk_504[i];
    func_020a8348(e->vfunc_0c());
    unk_4c = 0;
}

void Unk_020d94e8::func_0203d188() {
    s32 sel = unk_28.unk_04;
    if (sel == 0) {
        func_020a8348(func_0205022c());
    } else if (sel == 1) {
        func_020a8348(func_02050224());
    } else if (sel == 7) {
        func_020a8348(func_02050234());
    } else if (sel == 8) {
        func_020a8348(func_0205023c());
    }
}

void Unk_020d94e8::func_0203d134() {
    s32 sel = unk_28.unk_04;
    s32 n;
    if (sel == 1) {
        func_0203d12c(sel);
    } else if (sel == 2) {
        func_0203d124(sel);
    } else if (sel == 3) {
        func_0203d11c(sel);
    } else if (sel == 4) {
        func_0203d0d0(sel);
    } else if (sel >= 5 && sel <= 15) {
        Unk_0203d134_E en = (Unk_0203d134_E)(sel - 5);
        Unk_020d94e8_Owner *o = unk_24;
        func_0203d078(&o->unk_504[en]);
    }
}

void Unk_020d94e8::func_0203d12c(s32 sel) {
    unk_4c = 1;
}

void Unk_020d94e8::func_0203d124(s32 sel) {
    unk_4c = 2;
}

void Unk_020d94e8::func_0203d11c(s32 sel) {
    unk_45 = 1;
}

void Unk_020d94e8::func_0203d0d0(s32 sel) {
    char *a, *b;
    unk_28.func_020a7338(&a, &b);
    if (func_0209750c()) {
        _ZN12Unk_0209865c13func_0209888cEv();
        if (_ZN12Unk_020940a013func_0209411cEv() == 0) {
            if (a != 0) {
                func_020a8348((u8 *)a);
            }
        } else if (b != 0) {
            unk_48 = unk_04;
            func_020a8348((u8 *)b);
        }
    }
}

void Unk_020d94e8::func_0203d078(Unk_020d94e8_Entry *e) {
    char *a, *b, *c;
    unk_28.func_020a72f0(&a, &b, &c);
    s32 m = e->unk_0c;
    if (m == 0) {
        if (a != 0) {
            func_020a8348((u8 *)a);
        }
    } else if (m == 1) {
        if (b != 0) {
            func_020a8348((u8 *)b);
        }
    } else if (m == 2) {
        if (c != 0) {
            unk_48 = unk_04;
            func_020a8348((u8 *)c);
        }
    }
}

extern "C" BOOL func_0203cfb8(Unk_020e2a78 *a, Unk_020e2a78 *b, Unk_020e2a78 *c, u32 *d, const u8 *e, const char *f) {
    Unk_020d94b8 obj;
    obj.func_0203cbd4(0);
    obj.func_020a710c(f);
    obj.unk_1e = *e;
    obj.func_0203cbcc(a);
    obj.func_0203cbc8(d);
    obj.func_0203cbd0(1);
    data_021c3280.func_0203cd68();
    u32 r5 = data_021c3280.func_0203cc64(&obj);
    obj.func_0203cbc8(0);
    obj.func_0203cbcc(b);
    obj.func_0203cbd0(2);
    data_021c3280.func_0203cd68();
    u32 r4 = data_021c3280.func_0203cc64(&obj);
    obj.func_0203cbcc(c);
    obj.func_0203cbd0(3);
    data_021c3280.func_0203cd68();
    u32 r0 = data_021c3280.func_0203cc64(&obj);
    BOOL result;
    if (r5 != 0 && r4 != 0 && r0 != 0) {
        result = TRUE;
    } else {
        result = FALSE;
    }
    return result;
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

extern "C" s32 func_0203ce4c(s32 i, void *x) { return _ZN12Unk_020e2a7813func_020a7bd8EPS_(&data_021c3280.unk_504[i], x); }

extern "C" void func_0203ce38(s32 i, s32 x) { func_020b3158(&data_021c3280.unk_504[i], x); }

extern "C" void func_0203ce24(s32 i, s32 x) { func_020b313c(&data_021c3280.unk_504[i], x); }

Unk_0203cc64::Unk_0203cc64() {
    _ZN12Unk_020d94e8C1EP18Unk_020d94e8_Owner(this, this);
    _ZN12Unk_020d94d0C1Ev(&unk_5c);
    unk_500 = -1;
    __cxa_vec_ctor(unk_504, 11, 0x34, (void *)_ZN12Unk_020e2a48C1Ev, (void *)_ZN12Unk_020e2a48D1Ev);
    func_02115fb4(unk_300, 0, 0x200);
}

Unk_0203cc64::~Unk_0203cc64() {
    __cxa_vec_cleanup(unk_504, 11, 0x34, (void *)_ZN12Unk_020e2a48D1Ev);
    _ZN12Unk_020d94d0D1Ev(&unk_5c);
    _ZN12Unk_020d94e8D1Ev(this);
}

void Unk_0203cc64::func_0203cd68() {
    ((Unk_020d94d0 *)unk_5c)->func_0203d458();
    func_02115fb4(unk_300, 0, 0x200);
    unk_500 = -1;
}

BOOL Unk_0203cc64::func_0203cc64(Unk_020d94b8 *p) {
    char buf[0x44];
    u32 s = p->func_0203cbd8();
    if (s != 0) {
        func_020639e8(buf, "%s/%s/%s.bmg", p->vfunc_0c(), s, (char *)p + 4);
    } else {
        func_020639e8(buf, "%s/%s.bmg", p->vfunc_0c(), (char *)p + 4);
    }
    BOOL a = ((Unk_020e2a18 *)unk_5c)->func_020a8a20(buf);
    BOOL b = a ? ((Unk_020e2a18 *)unk_5c)->func_020a8950(&p->unk_1e) : 0;
    bool ok = a & b;
    ((Unk_020e2a18 *)unk_5c)->func_020a89f0();
    if (ok) {
        Unk_020e2a78 *q = p->func_0203cbc4();
        u32 *out = p->func_0203cbc0();
        BOOL m = p->func_0203cbe8();
        ok &= _ZN12Unk_020d94e813func_0203d36cEh(this, out != 0 ? TRUE : FALSE);
        if (m) {
            ok &= q->func_020a7a28(unk_300);
        } else {
            ok &= q->func_020a7c04(unk_300);
        }
        if (out) *out = unk_500;
    }
    return ok;
}

Unk_020d94b8::Unk_020d94b8() : unk_20(0), unk_24(0), unk_28(0), unk_2c(0) {}

Unk_020d94b8::~Unk_020d94b8() {}

u32 Unk_020d94b8::vfunc_0c() { return data_020c9030[unk_20]; }

BOOL Unk_020d94b8::func_0203cbe8() {
    if (unk_24 == 6) return TRUE;
    return FALSE;
}

u32 Unk_020d94b8::func_0203cbd8() { return data_020c903c[unk_24]; }

void Unk_020d94b8::func_0203cbd4(u32 v) { unk_20 = v; }

void Unk_020d94b8::func_0203cbd0(u32 v) { unk_24 = v; }

void Unk_020d94b8::func_0203cbcc(Unk_020e2a78 *v) { unk_28 = v; }

void Unk_020d94b8::func_0203cbc8(u32 *v) { unk_2c = v; }

Unk_020e2a78 *Unk_020d94b8::func_0203cbc4() { return unk_28; }

// ---------------------------------------------------------------------------------------------------------------------

u32 *Unk_020d94b8::func_0203cbc0() { return unk_2c; }

// Declarations for data defined further down (definition order sets the data layout)
extern const u32 data_020c903c[8];
extern char data_020d943c[];
extern const u32 data_020c9030[3];
extern char data_020d9440[];
extern char data_020d9448[];
extern char data_020d9450[];
extern char data_020d9458[];
extern void *data_020d9460[2];
extern void *data_020d9468[2];
extern void *data_020d9470[2];
extern char data_020d9438[];
extern char data_020d9478[];
extern char data_020d9488[];
extern char data_020d949c[];
extern char data_020d9434[];
extern Unk_0203cc64 data_021c3280;

const u32 data_020c903c[8] = {0, (u32)data_020d9450, (u32)data_020d943c, (u32)data_020d9434, (u32)data_020d9458, (u32)data_020d9448, (u32)data_020d9440, (u32)data_020d9438};

char data_020d943c[] = "msg";

// ---- data
const u32 data_020c9030[3] = {(u32)data_020d9488, (u32)data_020d949c, (u32)data_020d9478};

char data_020d9440[] = "msgb";

char data_020d9448[] = "msga";

char data_020d9450[] = "super";

char data_020d9458[] = "superz";

void *data_020d9460[2] = {(void *)_ZN12Unk_020d94e813func_0203d1dcEv, 0};

void *data_020d9468[2] = {(void *)_ZN12Unk_020d94e813func_0203d134Ev, 0};

void *data_020d9470[2] = {(void *)_ZN12Unk_020d94e813func_0203d188Ev, 0};

char data_020d9438[] = "psz";

char data_020d9478[] = "/script/ENG/bbs";

char data_020d9488[] = "/script/ENG/mail";

char data_020d949c[] = "/script/ENG/mailz";

char data_020d9434[] = "ps";

Unk_0203cc64 data_021c3280;
