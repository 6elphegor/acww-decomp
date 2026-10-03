// mwcc-flags: -str reuse
#include "types.h"

extern "C" {
u32 func_020501e8(u32 key);
u8 *func_02050204(void);
u8 *func_02050208(void);
u8 *func_0205021c(void);
u32 func_020a6c1c(u32 a, u32 b);
u32 func_020a6c40(u32 a, u32 b);
int strcmp(const u8 *a, const u8 *b);
void MI_CpuFill8(void *dst, u32 value, u32 size);
s32 FX_Modf(s32 v, s32 *out);
int func_020639e8(char *dst, const char *fmt, ...);
char *func_020a6b9c(char *p, u32 n);
void func_02133ef8(void *p, u32 n);
}

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    void func_020a8b1c();
    void func_020a8b34(Unk_020e2a08 *other);

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
};

class Unk_020e2a78 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    u8 func_020a7a0c(Unk_020e2a78 *other);
    u8 func_020a7a28(u8 *str);
    u8 func_020a7bd8(Unk_020e2a78 *other);
    u8 func_020a7c04(u8 *str);
    void func_020a7c3c();

    /* 0x04 */ u32 unk_04;
    /* 0x08 */ Unk_020e2a08 unk_08;
};

class Unk_020e2a48 : public Unk_020e2a78 {
public:
    Unk_020e2a48();
    virtual ~Unk_020e2a48();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u32 unk_14[8];
};

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    void func_020a710c(const char *src);

    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020e2a18 {
public:
    Unk_020e2a18(u8 arg1);
    virtual ~Unk_020e2a18();
    virtual u32 vfunc_0c() = 0;
    virtual u32 vfunc_08() = 0;

    BOOL func_020a8950(u8 *arg1);
    void func_020a89f0();
    u8 func_020a8a20(const char *path);

    /* 0x04 */ u8 unk_04[0xa0];
};

class Unk_020a72b0 {
public:
    Unk_020a72b0();
    s32 func_020a736c();
    BOOL func_020a7374();
    void func_020a72c4(u32 *a, char **b, char **c);
    void func_020a76fc(u8 *a, u8 *b, u8 *c);
    void func_020a777c(u8 *p);

    /* 0x00 */ s32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ char *unk_0c;
    /* 0x10 */ char *unk_10;
};

class Unk_020e2b08 {
public:
    Unk_020e2b08();
    virtual ~Unk_020e2b08();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);

    void func_020a8348(u8 *p);
    void func_020a8368(u8 *p);
    void func_020a8400(s32 n);
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

class Unk_020b2d30;

class Unk_Buf {
public:
    virtual ~Unk_Buf();
    virtual u32 vfunc_08();
    virtual u32 vfunc_0c();
};

extern "C" {
BOOL func_020b2dcc(u32 a, u32 b);
BOOL func_020b3270(Unk_020e2a78 *out, s32 val, s32 width, s32 mode, s32 kind, s32 unused);
BOOL func_020b3324(Unk_020e2a78 *out, s32 val, s32 kind);
void func_020b33d8(char *s, u32 size);
void func_020b3404(char *s, u32 size, s32 minRun);
void func_020b3460(char *s, u32 size, s32 width);
void func_020b3480(char *s, u32 size, s32 width);
void func_020b34a0(char *s, u32 size, s32 width);
void func_020b34d0(char *s, u32 size, s32 n, s32 maxDigits);
void func_020b3510(char *s, u32 size, s32 start, s32 shift);
s32 func_020b3530(const char *s, u32 max);
BOOL func_020b35ac(Unk_020e2a78 *buf, u8 *key, const char *name);
BOOL func_020b35f8(Unk_020e2a78 *buf, u8 *key, const char *name);
}

// ---- classes of this unit, declared in reverse order of their vtables in .data ----

class Unk_020e3f5c : public Unk_020e2b4c {
public:
    Unk_020e3f5c(Unk_020b2d30 *owner);
    virtual ~Unk_020e3f5c();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);
    virtual BOOL vfunc_18();

    void func_020b38fc();
    BOOL func_020b38a8();
    BOOL func_020b38dc();
    BOOL func_020b38e0(s32 c);
    void func_020b3904();
    void func_020b3944();
    void func_020b3974();
    void func_020b3994();
    void func_020b39ac();
    void func_020b39c4();
    void func_020b39dc();
    void func_020b3a78();
    void func_020b3ae0();
    void func_020b3b48();
    void func_020b3bb0();
    void func_020b3c1c();
    void func_020b3c68();
    u8 func_020b3e74(u8 a, u8 b);

    /* 0x24 */ Unk_020b2d30 *unk_24;
    /* 0x28 */ Unk_020a72b0 unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u32 unk_40;
    /* 0x44 */ u8 unk_44;
    /* 0x45 */ u8 unk_45;
    /* 0x46 */ u8 unk_46;
    /* 0x47 */ u8 unk_47;
    /* 0x48 */ u8 unk_48;
};

class Unk_020e3f38 : public Unk_020e2b4c {
public:
    Unk_020e3f38();
    virtual ~Unk_020e3f38();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);
    virtual BOOL vfunc_18();

    u8 func_020b36d4(u32 c);
    s32 func_020b3784();
    void func_020b37a4();
    void func_020b37c0(s32 n);
    void func_020b37dc();
    void func_020b37f4(Unk_020e2a78 *p);
    void func_020b37f8(Unk_020e2a78 *p);
    void func_020b3810();

    /* 0x24 */ s32 unk_24;
    /* 0x28 */ Unk_020e2a78 *unk_28;
    /* 0x2c */ Unk_020e2a78 *unk_2c;
    /* 0x30 */ u8 *unk_30;
    /* 0x34 */ u8 unk_34;
    /* 0x38 */ s32 unk_38;
    /* 0x3c */ s32 unk_3c;
};

class Unk_020e3f14 : public Unk_020e2b4c {
public:
    Unk_020e3f14();
    virtual ~Unk_020e3f14();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10(u32 c);
    virtual void vfunc_14(u8 *p);
    virtual BOOL vfunc_18();

    /* 0x24 */ u32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ u32 unk_2c;
};

class Unk_020e3efc : public Unk_020e2a78 {
public:
    Unk_020e3efc();
    virtual ~Unk_020e3efc();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u32 unk_14[6];
};

class Unk_020e3ee4 : public Unk_020e2a18 {
public:
    Unk_020e3ee4();
    virtual ~Unk_020e3ee4();
    virtual u32 vfunc_0c();
    virtual u32 vfunc_08();
    void func_020b3fa0();

    /* 0xa4 */ u8 unk_a4[0x400];
};

class Unk_020e3ecc : public Unk_020e2a30 {
public:
    Unk_020e3ecc();
    virtual ~Unk_020e3ecc();
    virtual u32 vfunc_0c();

    /* 0x20 */ u32 unk_20;
    /* 0x24 */ Unk_020e2a78 *unk_24;
    /* 0x28 */ u8 unk_28;
    /* 0x29 */ u8 unk_29;
};

class Unk_020e3eb4 : public Unk_020e2a78 {
public:
    Unk_020e3eb4();
    virtual ~Unk_020e3eb4();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u8 unk_14[0x100];
};

class Unk_020e3e9c : public Unk_020e2a78 {
public:
    Unk_020e3e9c();
    virtual ~Unk_020e3e9c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x14 */ u32 unk_14;
    /* 0x18 */ u32 unk_18;
    /* 0x1c */ u8 unk_1c;
};

// text loader, global at 0x021ee50c
class Unk_020b2d30 {
public:
    Unk_020b2d30();
    ~Unk_020b2d30();

    s32 func_020b2df0();
    BOOL func_020b2e6c();
    BOOL func_020b2ef4(Unk_020e2a78 *buf);
    BOOL func_020b2f98(Unk_020e3ecc *req);
    void func_020b3048();

    /* 0x000 */ Unk_020e3f5c unk_000;
    /* 0x04c */ Unk_020e3ee4 unk_04c;
    /* 0x4f0 */ Unk_020e2a08 unk_4f0;
    /* 0x4fc */ u8 unk_4fc[0x400];
    /* 0x8fc */ Unk_020e2a48 unk_8fc[11];
    /* 0xb38 */ Unk_Buf *unk_b38;
    /* 0xb3c */ Unk_020e3f38 unk_b3c;
    /* 0xb7c */ Unk_020e3f14 unk_b7c;
    /* 0xbac */ Unk_020e3e9c unk_bac[16];
};

struct Empty {
    Empty() {}
    ~Empty() {}
};

extern Unk_020b2d30 data_021ee50c;
extern "C" Unk_020e3eb4 *func_020b406c(void);
extern "C" BOOL func_020b38f0(u32 x);

Unk_020b2d30 data_021ee50c;

Unk_020e3efc::Unk_020e3efc() { func_020a7c3c(); }

Unk_020e3efc::~Unk_020e3efc() {}

u32 Unk_020e3efc::vfunc_08() { return 0x19; }

u8 *Unk_020e3efc::vfunc_0c() { return (u8 *)this + 0x12; }

Unk_020e3eb4::Unk_020e3eb4() { func_020a7c3c(); }

Unk_020e3eb4::~Unk_020e3eb4() {}

u32 Unk_020e3eb4::vfunc_08() { return 0x100; }

u8 *Unk_020e3eb4::vfunc_0c() { return (u8 *)this + 0x12; }

extern "C" Unk_020e3eb4 *func_020b406c(void) {
    static Unk_020e3eb4 inst;
    return &inst;
}

Unk_020e3e9c::Unk_020e3e9c() : unk_1c(0) { func_020a7c3c(); }

Unk_020e3e9c::~Unk_020e3e9c() {}

u32 Unk_020e3e9c::vfunc_08() {
    return 10;
}

u8 *Unk_020e3e9c::vfunc_0c() {
    return (u8 *)this + 0x12;
}

Unk_020e3ee4::Unk_020e3ee4() : Unk_020e2a18(0) {}

Unk_020e3ee4::~Unk_020e3ee4() {}

void Unk_020e3ee4::func_020b3fa0() {
    MI_CpuFill8(unk_a4, 0, 0x400);
}

u32 Unk_020e3ee4::vfunc_0c() {
    return (u32)unk_a4;
}

u32 Unk_020e3ee4::vfunc_08() {
    return 0x400;
}

Unk_020e3f5c::Unk_020e3f5c(Unk_020b2d30 *owner) : unk_24(owner) {
    unk_3c = 0;
    unk_40 = 0;
    unk_44 = 0;
    unk_45 = 1;
    unk_46 = 0;
    unk_47 = 0;
    unk_48 = 0;
}

Unk_020e3f5c::~Unk_020e3f5c() {}

u8 Unk_020e3f5c::func_020b3e74(u8 a, u8 b) {
    unk_45 = 1;
    unk_40 = 0;
    unk_46 = a;
    unk_47 = b;
    unk_48 = 0;
    unk_3c = 0;
    func_020a84bc();
    func_020a8368((u8 *)unk_24->unk_04c.vfunc_0c());
    func_020a82ec(FALSE);
    if (unk_45 && unk_47) {
        if (!func_020b38dc() || !func_020b38a8()) {
            unk_45 = 0;
        }
    }
    return unk_45;
}

void Unk_020e3f5c::vfunc_08() {}

void Unk_020e3f5c::vfunc_0c() {}

void Unk_020e3f5c::vfunc_10(u32 c) {
    if (unk_48) {
        c = func_020501e8(c);
        unk_48 = 0;
    }
    if (unk_47 && unk_44) {
        if (!func_020b38e0(c)) {
            unk_45 = 0;
        }
        unk_44 = 0;
    }
    if (unk_45) {
        unk_3c = c;
        func_020b3c68();
    }
}

void Unk_020e3f5c::vfunc_14(u8 *cmd) {
    typedef void (Unk_020e3f5c::*Fn)();
    unk_28.func_020a777c(cmd);
    s32 a = unk_28.unk_00;
    s32 b = unk_28.unk_04;
    Fn fn = 0;
    if (a == 0 && b == 2) {
        fn = &Unk_020e3f5c::func_020b3b48;
    } else if (a == 0 && b == 3) {
        fn = &Unk_020e3f5c::func_020b3ae0;
    } else if (a == 0 && b == 4) {
        fn = &Unk_020e3f5c::func_020b3a78;
    } else if (a == 0 && b == 5) {
        fn = &Unk_020e3f5c::func_020b39dc;
    } else if (a == 0 && b == 6) {
        fn = &Unk_020e3f5c::func_020b39c4;
    } else if (a == 0 && b == 9) {
        fn = &Unk_020e3f5c::func_020b39ac;
    } else if (a == 0 && b == 10) {
        fn = &Unk_020e3f5c::func_020b3994;
    } else if (a == 0xff && b == 2) {
        fn = &Unk_020e3f5c::func_020b3974;
    } else if (a == 4 && unk_28.func_020a7374()) {
        fn = &Unk_020e3f5c::func_020b3944;
    } else if (a == 0xb && b == 0) {
        fn = &Unk_020e3f5c::func_020b3904;
    } else if (a == 0xb && b == 3) {
        fn = &Unk_020e3f5c::func_020b38fc;
    }
    if (fn) {
        (this->*fn)();
    } else {
        unk_45 = 0;
    }
}

BOOL Unk_020e3f5c::vfunc_18() {
    return unk_45;
}

void Unk_020e3f5c::func_020b3c68() {
    s8 c = unk_3c;
    if (0x400 - unk_40 > 1) {
        u32 i = unk_40++;
        unk_24->unk_4fc[i] = c;
    } else {
        unk_45 = 0;
    }
}

void Unk_020e3f5c::func_020b3c1c() {
    char *p = unk_28.unk_10;
    u32 n = unk_28.unk_08 + 5;
    if (0x400 - unk_40 > n) {
        for (u32 i = 0; i < n; i++) {
            (unk_24->unk_4fc + unk_40)[i] = p[i];
        }
        unk_40 += n;
    } else {
        unk_45 = 0;
    }
}

void Unk_020e3f5c::func_020b3bb0() {
    u32 a;
    char *b, *c;
    unk_28.func_020a72c4(&a, &b, &c);
    u32 n = unk_28.unk_08 - 1;
    BOOL ok = 0x400 - unk_40 > n;
    func_020a8400(a * 2);
    if (ok) {
        for (u32 i = 0; i < n; i++) {
            (unk_24->unk_4fc + unk_40)[i] = c[i];
        }
        unk_40 += n;
    } else {
        unk_45 = 0;
    }
}

void Unk_020e3f5c::func_020b3b48() {
    if (unk_47) {
        u32 a = func_020a6c40(unk_24->unk_b38->vfunc_0c(), 0);
        if (unk_48) {
            a = func_020501e8(a);
            unk_48 = 0;
        }
        if (func_020b38f0(a)) {
            unk_3c = a;
            func_020b3c68();
            unk_44 = 1;
        } else {
            unk_45 = 0;
        }
    }
}

void Unk_020e3f5c::func_020b3ae0() {
    if (unk_47) {
        u32 a = func_020a6c40(unk_24->unk_b38->vfunc_0c(), 1);
        if (unk_48) {
            a = func_020501e8(a);
            unk_48 = 0;
        }
        if (func_020b38f0(a)) {
            unk_3c = a;
            func_020b3c68();
            unk_44 = 1;
        } else {
            unk_45 = 0;
        }
    }
}

void Unk_020e3f5c::func_020b3a78() {
    if (unk_47) {
        u32 a = func_020a6c40(unk_24->unk_b38->vfunc_0c(), 2);
        if (unk_48) {
            a = func_020501e8(a);
            unk_48 = 0;
        }
        if (func_020b38f0(a)) {
            unk_3c = a;
            func_020b3c68();
            unk_44 = 1;
        } else {
            unk_45 = 0;
        }
    }
}

void Unk_020e3f5c::func_020b39dc() {
    if (unk_47) {
        u32 v, b, a;
        v = unk_24->unk_b38->vfunc_0c();
        a = func_020a6c1c(v, 0);
        b = func_020a6c1c(v, 1);
        if (unk_48) {
            a = func_020501e8(a);
            unk_48 = 0;
        }
        if (unk_48) {
            b = func_020501e8(b);
            unk_48 = 0;
        }
        if (func_020b38f0(a) && func_020b38f0(b)) {
            unk_3c = b;
            func_020b3c68();
            unk_3c = a;
            func_020b3c68();
            unk_44 = 1;
        } else {
            unk_45 = 0;
        }
    }
}

void Unk_020e3f5c::func_020b39c4() {
    func_020a8348(func_0205021c());
}

void Unk_020e3f5c::func_020b39ac() {
    func_020a8348(func_02050208());
}

void Unk_020e3f5c::func_020b3994() {
    func_020a8348(func_02050204());
}

void Unk_020e3f5c::func_020b3974() {
    if (unk_46) {
        func_020b3bb0();
    } else {
        func_020b3c1c();
    }
}

void Unk_020e3f5c::func_020b3944() {
    func_020a8348(unk_24->unk_8fc[unk_28.func_020a736c()].vfunc_0c());
}

void Unk_020e3f5c::func_020b3904() {
    u8 a, b, c;
    unk_28.func_020a76fc(&a, &b, &c);
    Unk_020e2a08 *p = &unk_24->unk_4f0;
    s32 v = a;
    if (a >= 3) {
        v = -1;
    }
    p->unk_04 = v;
    p->unk_08 = b;
    p->unk_09 = c;
}

void Unk_020e3f5c::func_020b38fc() {
    unk_48 = 1;
}

extern "C" BOOL func_020b38f0(u32 x) {
    BOOL r = TRUE;
    if (x == 0) {
        r = FALSE;
    }
    return r;
}

BOOL Unk_020e3f5c::func_020b38e0(s32 c) {
    BOOL r = TRUE;
    if (unk_3c == c) {
        r = FALSE;
    }
    return r;
}

BOOL Unk_020e3f5c::func_020b38dc() {
    return TRUE;
}

BOOL Unk_020e3f5c::func_020b38a8() {
    u8 *p = (u8 *)unk_24->unk_b38->vfunc_0c();
    return strcmp(p, (u8 *)unk_24->unk_4fc) != 0;
}

Unk_020e3f38::Unk_020e3f38() {
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_30 = 0;
    unk_34 = 0;
    unk_38 = 0;
    unk_3c = 0;
}

Unk_020e3f38::~Unk_020e3f38() {}

void Unk_020e3f38::func_020b3810() {
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_30 = 0;
    unk_34 = 0;
    unk_38 = 0;
    unk_3c = 0;
    func_020a84bc();
}

void Unk_020e3f38::func_020b37f8(Unk_020e2a78 *p) {
    unk_28 = p;
    unk_30 = p->vfunc_0c();
}

void Unk_020e3f38::func_020b37f4(Unk_020e2a78 *p) {
    unk_2c = p;
}

void Unk_020e3f38::func_020b37dc() {
    func_020a84bc();
    func_020a8368(unk_30);
}

void Unk_020e3f38::func_020b37c0(s32 n) {
    unk_24 = 2;
    unk_3c = n;
    func_020a82ec(FALSE);
    unk_24 = 0;
}

void Unk_020e3f38::func_020b37a4() {
    unk_24 = 1;
    unk_3c = 1;
    func_020a82ec(FALSE);
    unk_24 = 0;
}

s32 Unk_020e3f38::func_020b3784() {
    unk_24 = 3;
    unk_3c = 1;
    unk_38 = 0;
    func_020a82ec(FALSE);
    unk_24 = 0;
    return unk_38;
}

void Unk_020e3f38::vfunc_08() {}

void Unk_020e3f38::vfunc_0c() {
    if (unk_24 == 1 || unk_24 == 2) {
        unk_34 = 1;
    }
}

void Unk_020e3f38::vfunc_10(u32 c) {
    unk_38 = c;
    if (unk_24 == 1) {
        func_020b36d4(c);
        if (c != 10) {
            unk_3c--;
        }
    } else if (unk_24 == 2) {
        if (c == 10) {
            func_020b36d4(10);
        } else {
            func_020b36d4(0x20);
            unk_3c--;
        }
    } else if (unk_24 == 3) {
        if (c != 10) {
            unk_3c--;
        }
    }
}

void Unk_020e3f38::vfunc_14(u8 *p) {}

BOOL Unk_020e3f38::vfunc_18() {
    BOOL r = unk_3c > 0;
    if ((unk_24 == 1 || unk_24 == 2) && !r) {
        unk_30 = unk_04;
    }
    return r;
}

u8 Unk_020e3f38::func_020b36d4(u32 c) {
    u8 buf[3];
    func_02133ef8(buf, 3);
    buf[0] = c;
    return unk_2c->func_020a7a28(buf);
}

Unk_020e3f14::Unk_020e3f14() {
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
}

Unk_020e3f14::~Unk_020e3f14() {}

void Unk_020e3f14::vfunc_08() {}

void Unk_020e3f14::vfunc_0c() {}

void Unk_020e3f14::vfunc_10(u32 c) {
    unk_2c = c;
    unk_28--;
}

void Unk_020e3f14::vfunc_14(u8 *p) {}

BOOL Unk_020e3f14::vfunc_18() {
    return unk_28 > 0;
}

extern "C" BOOL func_020b35f8(Unk_020e2a78 *buf, u8 *key, const char *name) {
    Unk_020e3ecc req;
    req.func_020a710c(name);
    req.unk_1e = *key;
    req.unk_24 = buf;
    data_021ee50c.func_020b3048();
    BOOL r = data_021ee50c.func_020b2f98(&req);
    return r;
}

extern "C" BOOL func_020b35ac(Unk_020e2a78 *buf, u8 *key, const char *name) {
    Unk_020e3ecc req;
    req.func_020a710c(name);
    req.unk_1e = *key;
    req.unk_24 = buf;
    req.unk_28 = 1;
    data_021ee50c.func_020b3048();
    BOOL r = data_021ee50c.func_020b2f98(&req);
    return r;
}

extern "C" BOOL func_020b3558(Unk_020e2a78 *buf, u8 *key, const char *name) {
    if (name == NULL) {
        name = "2d_menu";
    }
    Unk_020e3ecc req;
    req.unk_20 = 1;
    req.func_020a710c(name);
    req.unk_1e = *key;
    req.unk_24 = buf;
    data_021ee50c.func_020b3048();
    BOOL r = data_021ee50c.func_020b2f98(&req);
    return r;
}

extern "C" u8 func_020b3544(u32 idx, Unk_020e2a78 *other) {
    return data_021ee50c.unk_8fc[idx].func_020a7bd8(other);
}

extern "C" s32 func_020b3530(const char *s, u32 max) {
    u32 i = 0;
    while (i < max) {
        if (s[i] == 0) {
            break;
        }
        i++;
    }
    return i;
}

extern "C" void func_020b3510(char *s, u32 size, s32 start, s32 shift) {
    if (shift != 0) {
        s32 i = size - shift - 1;
        char *d = s + shift;
        for (; i >= start; i--) {
            d[i] = s[i];
        }
    }
}

extern "C" void func_020b34d0(char *s, u32 size, s32 n, s32 maxDigits) {
    if (n == 0) {
        s[0] = '0';
    } else {
        for (s32 i = 0; i < maxDigits && n != 0; i++) {
            s32 q = n / 10;
            s[i] = n - q * 10 + '0';
            n = q;
        }
    }
}

extern "C" void func_020b34a0(char *s, u32 size, s32 width) {
    s32 n = width - func_020b3530(s, size);
    func_020b3510(s, size, 0, n);
    for (s32 i = n - 1; i >= 0; i--) {
        s[i] = ' ';
    }
}

extern "C" void func_020b3480(char *s, u32 size, s32 width) {
    s32 len = func_020b3530(s, size);
    for (; len < width; len++) {
        s[len] = ' ';
    }
}

extern "C" void func_020b3460(char *s, u32 size, s32 width) {
    s32 len = func_020b3530(s, size);
    for (; len < width; len++) {
        s[len] = '0';
    }
}

extern "C" void func_020b3404(char *s, u32 size, s32 minRun) {
    s32 i = 0;
    s32 run = 0;
    while (s[i] != 0) {
        char c = s[i];
        if (c >= '0' && c <= '9') {
            run++;
            if (run >= minRun) {
                run = 0;
                u32 j = i + 1;
                if (j < size) {
                    char *p = s + j;
                    char d = s[j];
                    if (d >= '0' && d <= '9') {
                        func_020b3510(s, size, i, 1);
                        *p = ',';
                    }
                }
            }
        }
        i++;
    }
}

extern "C" void func_020b33d8(char *s, u32 size) {
    u32 len = func_020b3530(s, size);
    u32 half = len >> 1;
    u32 i = 0;
    s32 j = len - 1;
    for (; i < half; i++, j--) {
        char a = s[i];
        char b = s[j];
        s[i] = b;
        s[j] = a;
    }
}

extern "C" BOOL func_020b3324(Unk_020e2a78 *out, s32 val, s32 kind) {
    static const u8 t6[10] = {9, 9, 7, 8, 7, 7, 9, 7, 7, 7};
    static const u8 t9[10] = {0xd, 0xd, 0xc, 0xd, 0xc, 0xc, 0xd, 0xc, 0xd, 0xc};
    static const u8 t3[10] = {3, 3, 2, 4, 2, 2, 3, 2, 3, 3};
    Unk_020e2a48 tmp;
    u8 v = 0;
    s32 rem = val % 10;
    if (kind == 1) {
    } else if (kind == 2) {
        v = 1;
    } else if (kind == 3) {
        v = t3[rem];
    } else if (kind == 4) {
        v = 5;
    } else if (kind == 5) {
        v = 6;
    } else if (kind == 6) {
        v = t6[rem];
    } else if (kind == 7) {
        v = 0xa;
    } else if (kind == 8) {
        v = 0xb;
    } else if (kind == 9) {
        v = t9[rem];
    } else if (kind == 10) {
        v = 0xe;
    }
    u8 c = v;
    BOOL r = func_020b35f8(&tmp, &c, "st_unit");
    if (r) {
        r &= out->func_020a7a0c(&tmp);
        if (r) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

extern "C" BOOL func_020b3270(Unk_020e2a78 *out, s32 val, s32 width, s32 mode, s32 kind, s32 unused) {
    char tmp[0xe];
    MI_CpuFill8(tmp, 0, 0xe);
    func_020b34d0(tmp, 0xe, val, width);
    switch (mode) {
    case 2:
    case 3:
        func_020b34a0(tmp, 0xe, width);
    }
    switch (mode) {
    case 4:
    case 5:
        func_020b3480(tmp, 0xe, width);
    }
    switch (mode) {
    case 6:
    case 7:
        func_020b3460(tmp, 0xe, width);
    }
    BOOL c = FALSE;
    u32 m = mode - 1;
    if (m <= 6 && ((1 << m) & 0x55)) {
        c = TRUE;
    }
    if (c) {
        func_020b3404(tmp, 0xe, 3);
    }
    func_020b33d8(tmp, 0xe);
    BOOL r = out->func_020a7c04((u8 *)tmp);
    if (kind != 0) {
        r &= func_020b3324(out, val, kind);
        if (r) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    }
    return r;
}

extern "C" BOOL func_020b31a8(Unk_020e2a78 *out, s32 val, s32 digits) {
    static const u8 dot[2] = {0x2e, 0};
    BOOL ok;
    s32 i;
    BOOL r1;
    s32 frac;
    s32 ip;
    BOOL res;
    s32 ipart;
    frac = FX_Modf(val, &ip);
    for (i = 0; i < digits; i++) {
        frac *= 10;
    }
    ipart = ip >> 12;
    Unk_020e3efc a, b;
    Unk_020e2a48 c;
    r1 = func_020b3270(&a, ipart, 10, 0, 0, 0);
    ok = TRUE;
    if (!(r1 & ok)) {
        ok = FALSE;
    }
    ok &= func_020b3270(&b, frac >> 12, 10, 0, 0, 0);
    if (ok) {
        res = TRUE;
    } else {
        res = FALSE;
    }
    res &= out->func_020a7bd8(&a);
    if (res) {
        res = TRUE;
    } else {
        res = FALSE;
    }
    res &= out->func_020a7a28((u8 *)dot);
    if (res) {
        res = TRUE;
    } else {
        res = FALSE;
    }
    res &= out->func_020a7a0c(&b);
    if (res) {
        res = TRUE;
    } else {
        res = FALSE;
    }
    return res;
}

extern "C" BOOL func_020b3174(Unk_020e2a78 *buf, u32 idx, BOOL flag) {
    static const u8 tbl[8] = {0x17, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0};
    u8 c = tbl[idx];
    const char *name = "st_general";
    BOOL r;
    if (flag) {
        r = func_020b35ac(buf, &c, name);
    } else {
        r = func_020b35f8(buf, &c, name);
    }
    return r;
}

extern "C" BOOL func_020b3158(Unk_020e2a78 *buf, u8 v) {
    u8 c = v - 1;
    return func_020b35f8(buf, &c, "st_day_month");
}

extern "C" BOOL func_020b313c(Unk_020e2a78 *buf, u8 v) {
    u8 c = v + 0xc;
    return func_020b35f8(buf, &c, "st_day_month");
}

extern "C" BOOL func_020b30e0(Unk_020e2a78 *buf, u32 x, u8 *key) {
    Unk_020e3ecc req;
    req.func_020a710c("st_nickn");
    req.unk_1e = *key;
    req.unk_24 = buf;
    req.unk_29 = 1;
    data_021ee50c.unk_b38 = (Unk_Buf *)x;
    data_021ee50c.func_020b3048();
    BOOL r = data_021ee50c.func_020b2f98(&req);
    data_021ee50c.unk_b38 = 0;
    return r;
}

extern "C" BOOL func_020b30bc(Unk_020e2a78 *buf) {
    BOOL r = FALSE;
    if (data_021ee50c.func_020b2ef4(buf)) {
        r = data_021ee50c.func_020b2e6c();
    }
    return r;
}

extern "C" Unk_020e3e9c *func_020b3078(u8 *key) {
    Unk_020e3e9c *r = NULL;
    s32 i = *key;
    if (i < 0x10) {
        Unk_020e3e9c *e = &data_021ee50c.unk_bac[i];
        if (e->unk_1c != 0) {
            r = e;
        } else if (func_020b35f8(e, key, "st_article")) {
            e->unk_1c = 1;
            r = e;
        }
    }
    return r;
}

void Unk_020b2d30::func_020b3048() {
    unk_04c.func_020b3fa0();
    unk_4f0.func_020a8b1c();
    MI_CpuFill8(unk_4fc, 0, 0x400);
}

BOOL Unk_020b2d30::func_020b2f98(Unk_020e3ecc *req) {
    char path[0x44];
    func_020639e8(path, "%s/%s.bmg", req->vfunc_0c(), req->unk_04);
    BOOL ok = unk_04c.func_020a8a20(path);
    BOOL t = ok ? unk_04c.func_020a8950(&req->unk_1e) : FALSE;
    ok = ok & t;
    if (ok) {
        ok = TRUE;
    } else {
        ok = FALSE;
    }
    unk_04c.func_020a89f0();
    if (ok) {
        Unk_020e2a78 *dst = req->unk_24;
        ok &= unk_000.func_020b3e74(req->unk_28, req->unk_29);
        if (ok) {
            ok = TRUE;
        } else {
            ok = FALSE;
        }
        if (dst) {
            ok &= dst->func_020a7c04(unk_4fc);
            if (ok) {
                ok = TRUE;
            } else {
                ok = FALSE;
            }
            dst->unk_08.func_020a8b34(&unk_4f0);
        }
    }
    return ok;
}

BOOL Unk_020b2d30::func_020b2ef4(Unk_020e2a78 *buf) {
    Empty e;
    Unk_020e3ecc req;
    req.func_020a710c("st_taboo");
    req.unk_1e = 0;
    func_020b3048();
    BOOL r = data_021ee50c.func_020b2f98(&req);
    if (r) {
        func_020b406c()->func_020a7bd8(buf);
        buf->func_020a7c3c();
        unk_b3c.func_020b3810();
        unk_b3c.func_020b37f8(func_020b406c());
        unk_b3c.func_020b37f4(buf);
        unk_b7c.unk_24 = 0;
        unk_b7c.unk_28 = 0;
        unk_b7c.unk_2c = 0;
        unk_b7c.func_020a84bc();
    }
    return r;
}

BOOL Unk_020b2d30::func_020b2e6c() {
    BOOL result = FALSE;
    unk_b3c.func_020b37dc();
    u8 *start = unk_4fc;
    while (unk_b3c.unk_34 == 0) {
        char *s = (char *)start;
        s32 n = 0;
        for (; s != NULL && *s != 0xa; s = func_020a6b9c(s, 1)) {
            unk_b7c.unk_24 = (u32)s;
            n = func_020b2df0();
            if (n > 0) {
                break;
            }
        }
        unk_b3c.func_020b37dc();
        if (n > 0) {
            unk_b3c.func_020b37c0(n);
            result = TRUE;
        } else {
            unk_b3c.func_020b37a4();
        }
    }
    return result;
}

s32 Unk_020b2d30::func_020b2df0() {
    s32 count = 0;
    unk_b3c.func_020b37dc();
    unk_b7c.func_020a84bc();
    unk_b7c.func_020a8368((u8 *)unk_b7c.unk_24);
    for (;;) {
        unk_b7c.unk_28 = 1;
        unk_b7c.unk_2c = 0;
        unk_b7c.func_020a82ec(FALSE);
        u32 c = unk_b7c.unk_2c;
        if (c == 0xa || c == 0) {
            break;
        }
        if (func_020b2dcc((u32)unk_b3c.func_020b3784(), c)) {
            count++;
        } else {
            count = 0;
            break;
        }
    }
    return count;
}

extern "C" BOOL func_020b2dcc(u32 a, u32 b) {
    BOOL r = FALSE;
    if (a == b) {
        r = TRUE;
    } else {
        u32 c = func_020501e8(a);
        if (c == b) {
            r = TRUE;
        }
    }
    return r;
}

Unk_020b2d30::Unk_020b2d30() : unk_000(this), unk_b38(0) {
    MI_CpuFill8(unk_4fc, 0, 0x400);
}

Unk_020b2d30::~Unk_020b2d30() {}

Unk_020e3ecc::Unk_020e3ecc() : unk_20(0), unk_24(0), unk_28(0), unk_29(0) {}

Unk_020e3ecc::~Unk_020e3ecc() {}

u32 Unk_020e3ecc::vfunc_0c() {
    static const char *const tbl[2] = {"/script/ENG/string", "/script/ENG/2d"};
    return (u32)tbl[unk_20];
}

