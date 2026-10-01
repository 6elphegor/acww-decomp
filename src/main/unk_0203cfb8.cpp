#include "types.h"
#include "Unk_020d8c7c.h"

// ---------------------------------------------------------------------------------------------------------------------
// Classes from other files (see unk_020a6914.cpp)

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

    /* 0x04 */ u8 unk_04[0xa0];
};

// ---------------------------------------------------------------------------------------------------------------------
// Externs

extern "C" {
u8 *func_0205022c(void);
u8 *func_02050224(void);
u8 *func_02050234(void);
u8 *func_0205023c(void);
s32 func_020501e8(s32 v);
void *func_02115fb4(void *p, s32 v, u32 n);
BOOL func_0209750c(void);
s32 func_0209888c(void);
BOOL func_0209411c(void);

s32 func_0203d904(u32 x);
s32 func_0203d914(u32 x);
s32 func_0203d924(u32 x);
s32 func_0203d8dc(u32 x);
BOOL func_0203db1c(u32 x);
BOOL func_0203dad4(u32 a, u32 b, u32 c, u32 d, u32 e);
BOOL func_02095204(u32 x);
u32 func_0203e630(u32 x);
u32 func_0203e604(void *p);
BOOL func_0203e2f4(void);
void func_0206e67c(void);
BOOL func_02094f84(void);
void func_02094f64(u32 x);
void func_0203ec00(void *p);
s32 func_02067958(u32 x);
u32 func_02067918(u32 x);
s32 func_02067978(u32 a, u32 b);
}

// ---------------------------------------------------------------------------------------------------------------------
// Local stack object of func_0203cfb8 (vtable 0x020d94b8, derived from Unk_020e2a30; constructed in func_0203cc40)

class Unk_020d94b8 : public Unk_020e2a30 {
public:
    Unk_020d94b8();
    virtual ~Unk_020d94b8();
    virtual void vfunc_08();
    void func_0203cbc8(u32 v);
    void func_0203cbcc(u32 v);
    void func_0203cbd0(u32 v);
    void func_0203cbd4(u32 v);

    /* 0x20 */ u8 unk_20[0x10];
};

class Unk_021c3280 {
public:
    void func_0203cd68();
    u32 func_0203cc64(Unk_020d94b8 *obj);
};

extern Unk_021c3280 data_021c3280;

// ---------------------------------------------------------------------------------------------------------------------
// Script interpreter (vtable 0x020d94e8); sibling of Unk_020e2b28

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
extern Unk_020d94e8_Fn data_0213a740;
extern Unk_020d94e8_Fn data_020d9460;
extern Unk_020d94e8_Fn data_020d9468;
extern Unk_020d94e8_Fn data_020d9470;

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

// ---------------------------------------------------------------------------------------------------------------------
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

// Class with vtable 0x020d9620 (derived from Unk_020d8c7c); only its destructors are in this range
class Unk_020d9620 : public Unk_020d8c7c {
public:
    virtual ~Unk_020d9620();
};

// ---------------------------------------------------------------------------------------------------------------------

extern "C" BOOL func_0203cfb8(u32 a, u32 b, u32 c, u32 d, const u8 *e, const char *f) {
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

enum Unk_0203d134_E { Unk_0203d134_E0 = 0, Unk_0203d134_E15 = 15 };
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

void Unk_020d94e8::func_0203d0d0(s32 sel) {
    char *a, *b;
    unk_28.func_020a7338(&a, &b);
    if (func_0209750c()) {
        func_0209888c();
        if (func_0209411c() == 0) {
            if (a != 0) {
                func_020a8348((u8 *)a);
            }
        } else if (b != 0) {
            unk_48 = unk_04;
            func_020a8348((u8 *)b);
        }
    }
}

void Unk_020d94e8::func_0203d11c(s32 sel) {
    unk_45 = 1;
}

void Unk_020d94e8::func_0203d124(s32 sel) {
    unk_4c = 2;
}

void Unk_020d94e8::func_0203d12c(s32 sel) {
    unk_4c = 1;
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

void Unk_020d94e8::func_0203d1dc() {
    s32 i = unk_28.func_020a736c();
    Unk_020d94e8_Entry *e = &unk_24->unk_504[i];
    func_020a8348(e->vfunc_0c());
    unk_4c = 0;
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

BOOL Unk_020d94e8::vfunc_18() {
    return TRUE;
}

void Unk_020d94e8::vfunc_14(u8 *p) {
    unk_28.func_020a777c(p);
    s32 r4 = unk_28.unk_00;
    Unk_020d94e8_Fn fn = data_0213a740;
    if (r4 == 4 && unk_28.func_020a7374()) {
        fn = data_020d9460;
    } else if (r4 == 0) {
        fn = data_020d9470;
    } else if (r4 == 0xb) {
        fn = data_020d9468;
    }
    if (fn) {
        (this->*fn)();
    } else {
        unk_44 = 0;
    }
}

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

void Unk_020d94e8::vfunc_0c() {}

void Unk_020d94e8::vfunc_08() {
    unk_45 = 0;
    unk_48 = 0;
    unk_4c = 0;
}

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

Unk_020d94e8::~Unk_020d94e8() {}

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

u32 Unk_020d94d0::vfunc_0c() {
    return 0x200;
}

u32 Unk_020d94d0::vfunc_08() {
    return (u32)unk_a4;
}

void Unk_020d94d0::func_0203d458() {
    func_02115fb4(unk_a4, 0, 0x200);
}

Unk_020d94d0::~Unk_020d94d0() {}

Unk_020d94d0::Unk_020d94d0() : Unk_020e2a18(0) {}

extern "C" {

void func_0203d4c0(void) {}
void func_0203d4c4(void) {}
void func_0203d4c8(void) {}
void func_0203d4cc(void) {}
void func_0203d4d0(void) {}
s32 func_0203d4d4(void) { return 0; }
}

Unk_020d9620::~Unk_020d9620() {}

extern "C" {
s32 func_0203d520(void) { return func_0203d904(0x10); }
s32 func_0203d52c(void) { return func_0203d914(0x10); }
s32 func_0203d538(void) { return func_0203d924(0x10); }
}

struct Unk_0203d544_Data {
    /* 0x00 */ u8 unk_00[0xc];
    /* 0x0c */ u32 unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15;
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 unk_17;
};

extern "C" {
extern Unk_0203d544_Data *data_021c39c0;
extern void *data_021c39c4;
Unk_0203d544_Data *func_0203eb78(void);

BOOL func_0203d544(void) {
    if (func_0203db1c(0xd)) {
        data_021c39c0->unk_16 = 6;
        return TRUE;
    }
    return FALSE;
}

BOOL func_0203d56c(void) {
    if (!func_02095204(4)) {
        return FALSE;
    }
    if (func_0203e2f4()) {
        func_0206e67c();
        return FALSE;
    }
    if (!func_02094f84()) {
        return FALSE;
    }
    func_02094f64(1);
    Unk_0203d544_Data *p = func_0203eb78();
    p->unk_0c = 0;
    p->unk_10 = 0;
    p->unk_15 = 0xd;
    p->unk_14 = 3;
    p->unk_16 = 5;
    data_021c39c0 = p;
    return TRUE;
}

void func_0203d5c8(void) {
    func_0203ec00(data_021c39c0);
    data_021c39c0 = 0;
}
}

struct Unk_0203d5e4_Arg {
    u8 unk_00[0x3c];
    u32 unk_3c;
};

extern "C" {
s32 func_0203d5e4(Unk_0203d5e4_Arg *p) {
    return func_02067958(p->unk_3c);
}

s32 func_0203d5f0(u32 x) {
    return func_02067978(func_02067918(0), x);
}

u32 func_0203d608(void) {
    if (func_0203db1c(2) || func_0203db1c(6) || func_0203db1c(7)) {
        return func_0203e604(data_021c39c4);
    }
    return 0;
}

void func_0203d640(void *p) {
    data_021c39c4 = p;
}

BOOL func_0203d64c(void) {
    if (func_0203db1c(2) || func_0203db1c(6) || func_0203db1c(7)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0203d67c(u32 x) {
    if (!func_0203db1c(2) && !func_0203db1c(6) && !func_0203db1c(7)) {
        return FALSE;
    }
    Unk_0203d544_Data *p = data_021c39c0;
    u32 v = func_0203e630(x);
    if (p->unk_10 != v) {
        return FALSE;
    }
    p->unk_16 = 6;
    return TRUE;
}

BOOL func_0203d6cc(u32 a, s32 b) {
    if (b == 0) {
        u32 t = func_0203e630(func_02095204(4));
        return func_0203dad4(t, func_0203e630(a), 7, 3, 0);
    }
    return FALSE;
}

BOOL func_0203d704(u32 a, s32 b) {
    if (b == 0) {
        u32 t = func_0203e630(func_02095204(4));
        return func_0203dad4(t, func_0203e630(a), 6, 3, 0);
    }
    return FALSE;
}

BOOL func_0203d73c(u32 a, u32 b) {
    u32 t = 0;
    if (b != 0) {
        t = func_0203e630(b);
    }
    return func_0203dad4(func_0203e630(a), t, 2, 3, 0);
}

BOOL func_0203d76c(void) {
    if (!func_0203db1c(4) && !func_0203db1c(0xc)) {
        return FALSE;
    }
    data_021c39c0->unk_17 = 6;
    return TRUE;
}

BOOL func_0203d79c(void) {
    if (!func_0203db1c(0xe)) {
        return FALSE;
    }
    data_021c39c0->unk_16 = 6;
    return TRUE;
}

BOOL func_0203d7c4(void) {
    if (data_021c39c0 != 0) {
        return FALSE;
    }
    return func_0203dad4(0, 0, 0xe, 0, 0);
}

BOOL func_0203d7ec(void) {
    return func_0203db1c(9);
}

BOOL func_0203d7f8(void) {
    if (!func_0203db1c(9)) {
        return FALSE;
    }
    data_021c39c0->unk_16 = 6;
    return TRUE;
}

BOOL func_0203d820(void) {
    if (data_021c39c0 != 0) {
        return FALSE;
    }
    return func_0203dad4(0, 0, 9, 0, 0);
}

BOOL func_0203d890(u32 x);
BOOL func_0203d8b4(u32 x);

BOOL func_0203d848(void) { return func_0203d890(0xa); }
BOOL func_0203d854(void) { return func_0203d8b4(0xa); }
BOOL func_0203d860(void) { return func_0203d8dc(0xa); }
BOOL func_0203d86c(void) { return func_0203d890(5); }
BOOL func_0203d878(void) { return func_0203d8b4(5); }
BOOL func_0203d884(void) { return func_0203d8dc(5); }

BOOL func_0203d890(u32 x) {
    if (!func_0203db1c(x)) {
        return FALSE;
    }
    data_021c39c0->unk_16 = 6;
    return TRUE;
}

BOOL func_0203d8b4(u32 x) {
    if (func_0203db1c(x) && data_021c39c0->unk_16 != 6) {
        return TRUE;
    }
    return FALSE;
}
}
