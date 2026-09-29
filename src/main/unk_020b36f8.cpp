#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
u32 func_020501e8(u32 key);
u8 *func_02050204(void);
u8 *func_02050208(void);
u8 *func_0205021c(void);
u32 func_020a6c1c(u32 a, u32 b);
u32 func_020a6c40(u32 a, u32 b);
int func_0212a190(const u8 *a, const u8 *b);
void func_02115fb4(void *dst, u32 value, u32 size);
}

class Unk_020e2a78;

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

class Unk_020e2a78 {
public:
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    u8 func_020a7a28(u8 *str);
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u8 unk_08[0xc];
};

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
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

class Unk_020e2a18 {
public:
    Unk_020e2a18(u8 arg1);
    virtual ~Unk_020e2a18();
    virtual u32 vfunc_08() = 0;
    virtual u32 vfunc_0c() = 0;

    /* 0x04 */ u8 unk_04;
    /* 0x05 */ u8 unk_05[0x3f];
    /* 0x44 */ u8 unk_44[0x48];
    /* 0x8c */ u8 unk_8c;
    /* 0x8d */ u8 unk_8d;
    /* 0x90 */ u32 unk_90[3];
    /* 0x9c */ u32 unk_9c;
    /* 0xa0 */ u32 unk_a0;
};

// Sub-object of the owner at 0x4c, 0x34-byte objects at 0x8fc, and a buffer object at 0xb38
class Unk_Ent {
public:
    virtual ~Unk_Ent();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 unk_04[0x30];
};

class Unk_Buf {
public:
    virtual ~Unk_Buf();
    virtual u32 vfunc_08();
    virtual u32 vfunc_0c();
};

class Unk_Owner {
public:
    /* 0x000 */ u8 unk_000[0x4c];
    /* 0x04c */ Unk_Buf unk_4c;
    /* 0x050 */ u8 unk_050[0x4a0];
    /* 0x4f0 */ Unk_020e2a08 unk_4f0;
    /* 0x4fc */ char unk_4fc[0x400];
    /* 0x8fc */ Unk_Ent unk_8fc[11];
    /* 0xb38 */ Unk_Buf *unk_b38;
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

    void func_020b36d4(u32 c);
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

extern "C" BOOL func_020b38f0(u32 x);

class Unk_020e3f5c : public Unk_020e2b4c {
public:
    Unk_020e3f5c(Unk_Owner *owner);
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

    /* 0x24 */ Unk_Owner *unk_24;
    /* 0x28 */ Unk_020a72b0 unk_28;
    /* 0x3c */ s32 unk_3c;
    /* 0x40 */ u32 unk_40;
    /* 0x44 */ u8 unk_44;
    /* 0x45 */ u8 unk_45;
    /* 0x46 */ u8 unk_46;
    /* 0x47 */ u8 unk_47;
    /* 0x48 */ u8 unk_48;
};

class Unk_020e3ee4 : public Unk_020e2a18 {
public:
    Unk_020e3ee4();
    virtual ~Unk_020e3ee4();
    virtual u32 vfunc_08();
    virtual u32 vfunc_0c();
    void func_020b3fa0();

    /* 0xa4 */ u8 unk_a4[0x400];
};

class Unk_020e3e9c : public Unk_020e2a78 {
public:
    virtual ~Unk_020e3e9c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
};

// ---------------- Unk_020e3f38 ----------------

BOOL Unk_020e3f38::vfunc_18() {
    BOOL r = unk_3c > 0;
    if ((unk_24 == 1 || unk_24 == 2) && !r) {
        unk_30 = unk_04;
    }
    return r;
}

void Unk_020e3f38::vfunc_14(u8 *p) {}

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

void Unk_020e3f38::vfunc_0c() {
    if (unk_24 == 1 || unk_24 == 2) {
        unk_34 = 1;
    }
}

void Unk_020e3f38::vfunc_08() {}

s32 Unk_020e3f38::func_020b3784() {
    unk_24 = 3;
    unk_3c = 1;
    unk_38 = 0;
    func_020a82ec(FALSE);
    unk_24 = 0;
    return unk_38;
}

void Unk_020e3f38::func_020b37a4() {
    unk_24 = 1;
    unk_3c = 1;
    func_020a82ec(FALSE);
    unk_24 = 0;
}

void Unk_020e3f38::func_020b37c0(s32 n) {
    unk_24 = 2;
    unk_3c = n;
    func_020a82ec(FALSE);
    unk_24 = 0;
}

void Unk_020e3f38::func_020b37dc() {
    func_020a84bc();
    func_020a8368(unk_30);
}

void Unk_020e3f38::func_020b37f4(Unk_020e2a78 *p) {
    unk_2c = p;
}

void Unk_020e3f38::func_020b37f8(Unk_020e2a78 *p) {
    unk_28 = p;
    unk_30 = p->vfunc_0c();
}

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

Unk_020e3f38::~Unk_020e3f38() {}

Unk_020e3f38::Unk_020e3f38() {
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
    unk_30 = 0;
    unk_34 = 0;
    unk_38 = 0;
    unk_3c = 0;
}

// ---------------- Unk_020e3f5c ----------------

Unk_020e3f5c::Unk_020e3f5c(Unk_Owner *owner) : unk_24(owner) {
    unk_3c = 0;
    unk_40 = 0;
    unk_44 = 0;
    unk_45 = 1;
    unk_46 = 0;
    unk_47 = 0;
    unk_48 = 0;
}

Unk_020e3f5c::~Unk_020e3f5c() {}

void Unk_020e3f5c::vfunc_08() {}
void Unk_020e3f5c::vfunc_0c() {}

BOOL Unk_020e3f5c::vfunc_18() {
    return unk_45;
}

extern "C" BOOL func_020b38f0(u32 x) {
    BOOL r = TRUE;
    if (x == 0) {
        r = FALSE;
    }
    return r;
}

void Unk_020e3f5c::func_020b38fc() {
    unk_48 = 1;
}

BOOL Unk_020e3f5c::func_020b38dc() {
    return TRUE;
}

BOOL Unk_020e3f5c::func_020b38e0(s32 c) {
    BOOL r = TRUE;
    if (unk_3c == c) {
        r = FALSE;
    }
    return r;
}

BOOL Unk_020e3f5c::func_020b38a8() {
    u8 *p = (u8 *)unk_24->unk_b38->vfunc_0c();
    return func_0212a190(p, (u8 *)unk_24->unk_4fc) != 0;
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

void Unk_020e3f5c::func_020b3944() {
    func_020a8348(unk_24->unk_8fc[unk_28.func_020a736c()].vfunc_0c());
}

void Unk_020e3f5c::func_020b3974() {
    if (unk_46) {
        func_020b3bb0();
    } else {
        func_020b3c1c();
    }
}

void Unk_020e3f5c::func_020b3994() {
    func_020a8348(func_02050204());
}

void Unk_020e3f5c::func_020b39ac() {
    func_020a8348(func_02050208());
}

void Unk_020e3f5c::func_020b39c4() {
    func_020a8348(func_0205021c());
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

void Unk_020e3f5c::func_020b3c68() {
    s8 c = unk_3c;
    if (0x400 - unk_40 > 1) {
        u32 i = unk_40++;
        unk_24->unk_4fc[i] = c;
    } else {
        unk_45 = 0;
    }
}

extern const void *data_0213a740[2];

void Unk_020e3f5c::vfunc_14(u8 *cmd) {
    typedef void (Unk_020e3f5c::*Fn)();
    unk_28.func_020a777c(cmd);
    s32 a = unk_28.unk_00;
    s32 b = unk_28.unk_04;
    Fn fn = *(Fn *)data_0213a740;
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

u8 Unk_020e3f5c::func_020b3e74(u8 a, u8 b) {
    unk_45 = 1;
    unk_40 = 0;
    unk_46 = a;
    unk_47 = b;
    unk_48 = 0;
    unk_3c = 0;
    func_020a84bc();
    func_020a8368((u8 *)unk_24->unk_4c.vfunc_08());
    func_020a82ec(FALSE);
    if (unk_45 && unk_47) {
        if (!func_020b38dc() || !func_020b38a8()) {
            unk_45 = 0;
        }
    }
    return unk_45;
}

// ---------------- Unk_020e3ee4 ----------------

u32 Unk_020e3ee4::vfunc_08() {
    return 0x400;
}

u32 Unk_020e3ee4::vfunc_0c() {
    return (u32)unk_a4;
}

void Unk_020e3ee4::func_020b3fa0() {
    func_02115fb4(unk_a4, 0, 0x400);
}

Unk_020e3ee4::~Unk_020e3ee4() {}

Unk_020e3ee4::Unk_020e3ee4() : Unk_020e2a18(0) {}

// ---------------- Unk_020e3e9c ----------------

u32 Unk_020e3e9c::vfunc_08() {
    return 10;
}

u8 *Unk_020e3e9c::vfunc_0c() {
    return (u8 *)this + 0x12;
}

Unk_020e3e9c::~Unk_020e3e9c() {}
