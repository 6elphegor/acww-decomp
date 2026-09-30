#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_ov045_02259e20;
class Unk_ov045_02259eb0;

struct Unk_ov045_02259070_Rec {
    s32 a, b, c;
};

struct Unk_ov045_022590e4_Msg {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_ov045_02258ee4_Ent {
    u8 a;
    s32 b;
};

struct Unk_ov045_02258fd8_Bits {
    u32 lo : 12;
    u32 mid : 16;
    u32 hi : 4;
};

extern "C" {
extern u32 data_ov045_02259d40[];
extern Unk_ov045_02258ee4_Ent data_ov045_02259b68[];
extern Unk_ov045_02258ee4_Ent data_ov045_02259bf0[];
extern Unk_ov045_02259eb0 *data_ov045_02259f60;
extern u8 data_021d7350[];
extern u8 *data_020cbb18;

s32 func_02063b8c(s32);
s32 func_0209d498(void *);
void *func_020947f0(s32);
void func_0204ee10(s32 *, s32 *, void *);
s32 func_0206ed18();
s32 func_0206ecf0();
void func_020a78a4(void *, s32, s32);
void func_020a7aa0(void *, void *, s32, s32);
void func_02067a3c(void *, s32, void *);
void func_02067a84(void *, void *, u32);
s32 func_020aa514();
s32 func_0201ade4(void *, s32);
void func_0201adc8(void *, s32);
s32 func_0202e1cc(...);
void func_02034dd0(u32, s32, s32);
void func_02034d70(u32);
void func_02015170(void *, s32, s32);
void func_020151d0(void *, s32);
void *func_0209750c();
void *func_0209888c(...);
void func_02098784(void *, s32);
void func_02079d64(void *, void *);
void func_02079e9c(void *);
void *func_0207be2c(void *, s32, s32, void *);
void *func_0207f88c(void *, void *);
void *func_0207f86c(void *, void *);
void *func_020805c4(void *);
s32 func_020030b4(void *);
void *func_0207e310(void *);
s32 func_02072e88(void *, s32);
s32 func_0207856c(void *);
void func_02078550(void *, s32);
void func_0207854c(void *, s32);
void func_02078568(void *, s32);
void func_02080da4(void *, s32);
void *func_02080dd8(void *);
void func_0207787c(void *, void *, void *);
s32 func_020197a0(void *);
s32 func_020197a8(void *);
void func_ov004_02228ee0();
void func_ov004_02228ec0();
void func_ov004_02228ea0();
s32 func_0201bc4c(void *, s32);
void func_02015ab0(void *, void *);
void func_ov045_02259810(void *, s32);
void func_ov045_022596f4(void *);
}

// ---------------------------------------------------------------------------------------------------------------------
// Message buffer classes (see src/main/unk_02062fd4.cpp)

class Unk_020e2a60 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

    u8 unk_04[10];
};

class Unk_020e2a78 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

    u8 unk_04[14];
};

// vtable 0x02259dec, data at +0xe, 0x24 bytes
class Unk_ov045_02259dec : public Unk_020e2a60 {
public:
    Unk_ov045_02259dec();
    virtual ~Unk_ov045_02259dec();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    u8 unk_0e[0x24 - 0xe];
};

// vtable 0x02259dd4, data at +0x12, 0x24 bytes
class Unk_ov045_02259dd4 : public Unk_020e2a78 {
public:
    Unk_ov045_02259dd4();
    virtual ~Unk_ov045_02259dd4();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    u8 unk_12[0x24 - 0x12];
};

// ---------------------------------------------------------------------------------------------------------------------
// Dialog base classes

class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
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
    virtual void vfunc_38(s32 a);
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    s32 func_02015a5c();
};

typedef void (Unk_ov045_02259e20::*Unk_ov045_02259e20_Fn)();

struct Unk_ov045_02259e20_Ent {
    Unk_ov045_02259e20_Fn fn;
    u8 flag;
    u8 pad[3];
};

extern "C" {
extern Unk_ov045_02259e20_Ent data_ov045_02259f64[];
}

// ---------------------------------------------------------------------------------------------------------------------
// Owner object

class Unk_020d9670 : public Unk_020d8c7c_Base {
public:
    Unk_020d9670();
    virtual ~Unk_020d9670();
    u8 pad_04[0x58];
    s32 unk_5c, unk_60, unk_64;
    u8 pad_68[0x8e - 0x68];
    s16 unk_8e;
    u8 pad_90[4];
    s16 unk_94;
    u8 pad_96[0xea - 0x96];
};

class Unk_020d77a4 : public Unk_020d9670 {
public:
    Unk_020d77a4();
    virtual ~Unk_020d77a4();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);

    u16 unk_ea;
    u8 pad_ec[0x190 - 0xec];
    Unk_ov045_02258fd8_Bits unk_190;
    u8 pad_194[0x564 - 0x194];
    u8 unk_564[0x654 - 0x564];
};

class Unk_020d8bc8 : public Unk_020d77a4 {
public:
    Unk_020d8bc8();
    virtual ~Unk_020d8bc8();
};

class Unk_ov045_02259e20 : public Unk_02015b54 {
public:
    virtual ~Unk_ov045_02259e20();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_38(s32 a);
    virtual void vfunc_78(void *arg);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov045_022590e4();
    void func_ov045_0225916c(s32 v);
    void func_ov045_02259654(Unk_ov045_02259eb0 *o);

    /* 0x04 */ u8 pad_04[0x1e - 4];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ void *unk_3c;
    /* 0x40 */ u8 pad_40[0xac - 0x40];
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ Unk_ov045_02259eb0 *unk_b0;
};

class Unk_ov045_02259eb0 : public Unk_020d8bc8 {
public:
    virtual ~Unk_ov045_02259eb0();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);

    s32 func_ov045_02258ee4();
    void func_ov045_02258f64();
    BOOL func_ov045_02259004();

    /* 0x654 */ u8 pad_654[4];
    /* 0x658 */ s32 unk_658;
    /* 0x65c */ u8 unk_65c[0x30];
    /* 0x68c */ Unk_ov045_02259e20 unk_68c;
    /* 0x740 */ u8 unk_740;
    /* 0x741 */ u8 unk_741;
    /* 0x742 */ u8 pad_742[2];
    /* 0x744 */ s32 unk_744;
    /* 0x748 */ u8 unk_748;
    /* 0x749 */ u8 pad_749[3];
    /* 0x74c */ s32 unk_74c;
    /* 0x750 */ s32 unk_750;
};

// ---------------------------------------------------------------------------------------------------------------------
// Message buffer classes

Unk_ov045_02259dec::~Unk_ov045_02259dec() {}
Unk_ov045_02259dec::Unk_ov045_02259dec() {}
u32 Unk_ov045_02259dec::vfunc_08() { return 0x10; }
u8 *Unk_ov045_02259dec::vfunc_0c() { return (u8 *)this + 0xe; }

Unk_ov045_02259dd4::~Unk_ov045_02259dd4() {}
Unk_ov045_02259dd4::Unk_ov045_02259dd4() {}
u32 Unk_ov045_02259dd4::vfunc_08() { return 0x11; }
u8 *Unk_ov045_02259dd4::vfunc_0c() { return (u8 *)this + 0x12; }

// ---------------------------------------------------------------------------------------------------------------------
// Owner object

Unk_ov045_02259eb0::~Unk_ov045_02259eb0() {}

s32 Unk_ov045_02259eb0::func_ov045_02258ee4() {
    u8 i;
    for (i = 0; i < 0x11; i++) {
        if (unk_748 == data_ov045_02259b68[i].a && unk_74c == data_ov045_02259b68[i].b) {
            return 1;
        }
    }
    for (i = 0; i < 0x15; i++) {
        if (unk_748 == data_ov045_02259bf0[i].a && unk_74c == data_ov045_02259bf0[i].b) {
            return 2;
        }
    }
    return 0;
}

void Unk_ov045_02259eb0::func_ov045_02258f64() {
    unk_748 = func_02063b8c(0x16);
    if (func_02063b8c(2) == 0) {
        unk_74c = 0;
    } else {
        unk_74c = 1;
    }
    s32 t = func_02063b8c(2);
    s32 k = unk_748 * 2 + 0x1a;
    k += t;
    unk_740 = k + unk_74c * 0x2c;
    unk_741 = unk_748 + 0x72 + unk_74c * 0x16;
}

extern "C" u32 func_ov045_02258fd8() {
    return data_ov045_02259f60->unk_190.mid;
}

extern "C" u8 *func_ov045_02258ff0() {
    return (u8 *)data_ov045_02259f60 + 0x65c;
}

BOOL Unk_ov045_02259eb0::func_ov045_02259004() {
    u32 z[2];
    z[0] = 0;
    z[1] = 0;
    func_0209d498(z);
    if (((u8 *)z)[2] < 6) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov045_02259eb0::vfunc_4c(s32 cmd, u32 b) {
    switch (cmd) {
    case 0:
    case 1:
        unk_68c.vfunc_08();
        func_02015ab0(&unk_68c, (void *)func_0201bc4c(this, 4));
        func_ov045_02259810(this, 1);
        break;
    case 8:
        func_ov045_02259810(this, 0);
        break;
    }
}

BOOL Unk_ov045_02259eb0::vfunc_48() {
    BOOL r = FALSE;
    Unk_ov045_02259070_Rec *src = (Unk_ov045_02259070_Rec *)func_020947f0(4);
    Unk_ov045_02259070_Rec rec;
    s32 bx, by;
    rec.a = src->a;
    rec.b = src->b;
    rec.c = src->c;
    bx = r;
    by = r;
    func_0204ee10(&bx, &by, &rec);
    if (unk_658 == 0) {
        s32 x = unk_5c;
        if (rec.a > x - 0x1000 && rec.a < x + 0x1000) {
            s32 z = unk_64;
            if (rec.c > z + 0x2000 && rec.c < z + 0x4000) {
                r = TRUE;
            }
        }
    }
    return r;
}

// ---------------------------------------------------------------------------------------------------------------------
// Dialog

void Unk_ov045_02259e20::func_ov045_022590e4() {
    u8 msg;
    void *o = unk_3c;
    msg = 0xb;
    if (func_0206ed18()) {
        unk_b0->unk_750 = func_0206ecf0();
        Unk_ov045_02259dd4 src;
        Unk_ov045_02259dec dst;
        func_020a78a4(&dst, unk_b0->unk_750, 0x10);
        func_020a7aa0(&src, &dst, 0, 0);
        func_02067a3c(unk_3c, 0, &src);
        msg = 0xa;
    }
    func_02067a84(o, &msg, data_ov045_02259d40[0]);
}

void Unk_ov045_02259e20::vfunc_84() {
    s32 i = unk_ac;
    if (data_ov045_02259f64[i].flag == 0) {
        if (data_ov045_02259f64[i].fn != 0) {
            (this->*data_ov045_02259f64[i].fn)();
            func_ov045_0225916c(0);
        }
    }
}

void Unk_ov045_02259e20::vfunc_80() {
    s32 i = unk_ac;
    if (data_ov045_02259f64[i].flag != 0) {
        if (data_ov045_02259f64[i].fn != 0) {
            (this->*data_ov045_02259f64[i].fn)();
        }
    }
}

void Unk_ov045_02259e20::func_ov045_0225916c(s32 v) {
    unk_ac = v;
}

void Unk_ov045_02259e20::vfunc_18() {
    u8 buf;
    u32 sel;
    s32 st;
    func_02015a5c();
    st = func_020aa514();
    sel = 0xff;
    switch (unk_1e) {
    case 1:
    case 3:
    case 5:
        if (st == 0) {
            if (func_0201ade4(unk_b0, 0x64) == 0) {
                sel = 6;
            } else {
                sel = 7;
            }
        } else if (unk_1e == 5 && st == 1) {
            sel = 0x14;
        }
        break;
    case 7:
    case 8:
        if (st == 0) {
            if (func_0202e1cc(5, 0)) {
                sel = 8;
            } else {
                sel = 0xd;
                unk_b0->unk_744 = 0;
                func_0202e1cc(5, 1);
            }
        } else if (st == 1) {
            if (func_0202e1cc(4, 0)) {
                sel = 8;
            } else {
                sel = 9;
            }
        }
        break;
    case 10:
        if (st == 0) {
            sel = 0xc;
            unk_b0->unk_744 = 1;
            func_0202e1cc(4, 1);
        } else {
            sel = 0xb;
        }
        break;
    case 0x14:
        if (st == 0) {
            if (func_0201ade4(unk_b0, 10000) == 0) {
                sel = 0x15;
            } else {
                sel = 0x17;
            }
        }
        break;
    }
    if (sel != 0xff) {
        buf = sel;
        func_02067a84(unk_3c, &buf, data_ov045_02259d40[0]);
    }
}

void Unk_ov045_02259e20::vfunc_10() {
    if (unk_1e == 0xe || unk_1e == 0x17) {
        func_02034dd0(0x10, 0, 0);
    }
}

void Unk_ov045_02259e20::vfunc_14() {
    void *h = func_0209750c();
    u8 *gp = data_021d7350;
    u32 sel = 0xff;
    switch (unk_1e) {
    case 9:
    case 11:
        func_02015170(this, 0x13, 0);
        func_020151d0(this, 2);
        func_ov045_0225916c(1);
        break;
    case 14:
        unk_b0->func_ov045_02258f64();
        sel = unk_b0->unk_740;
        break;
    case 16:
        if (func_0201ade4(unk_b0, 0x64)) {
            func_0201adc8(unk_b0, 0x64);
        }
        sel = 0x16;
        break;
    case 19:
        func_ov045_02259810(unk_b0, 3);
        break;
    case 24:
        if (func_0201ade4(unk_b0, 10000)) {
            func_0201adc8(unk_b0, 10000);
        }
        func_02098784(h, 0);
        func_0202e1cc(6, 1);
        sel = 0x16;
        break;
    case 10:
    case 12:
    case 13:
    case 15:
    case 17:
    case 18:
    case 20:
    case 21:
    case 22:
    case 23:
        break;
    }
    u32 cur = unk_b0->unk_741;
    if (cur != 0xff) {
        if (cur == unk_1e) {
            s32 kind;
            void *arg;
            void *p;
            void *q;
            void *w;
            void *r5;
            sel = 0x10;
            kind = unk_b0->func_ov045_02258ee4();
            arg = func_0209888c(func_0209750c());
            switch (unk_b0->unk_744) {
            case 0:
                func_02098784(h, kind);
                if (kind == 1) {
                    func_02079d64((gp + 0x8a3c), arg);
                } else if (kind == 2) {
                    func_02079e9c((gp + 0x8a3c));
                }
                break;
            case 1:
                p = func_0207be2c((gp + 0x8a3c), unk_b0->unk_750, 10, func_0209888c(h));
                if (p != 0) {
                    q = func_0207f88c(p, arg);
                    w = func_0207f86c(p, q);
                    if (func_020030b4(func_020805c4(p)) != 0) {
                        r5 = func_0207e310(p);
                    } else {
                        r5 = 0;
                    }
                    if (w != 0) {
                        switch (kind) {
                        case 1: {
                            u8 *g = data_020cbb18;
                            if (func_02072e88(g, *(s32 *)(g + 0x64)) == 0 && r5 != 0) {
                                if (func_0207856c(r5) == 1) {
                                    func_02078550(r5, 0xe10);
                                } else {
                                    func_0207854c(r5, 0xe10);
                                }
                                func_02078568(r5, 1);
                            }
                            func_02080da4(w, 10);
                            func_0207787c(p, q, func_02080dd8(w));
                            break;
                        }
                        case 2: {
                            u8 *g = data_020cbb18;
                            if (func_02072e88(g, *(s32 *)(g + 0x64)) == 0 && r5 != 0) {
                                if (func_0207856c(r5) == 4) {
                                    func_02078550(r5, 0x4b0);
                                } else {
                                    func_0207854c(r5, 0x4b0);
                                }
                                func_02078568(r5, 4);
                            }
                            func_02080da4(w, -3);
                            func_0207787c(p, q, func_02080dd8(w));
                            break;
                        }
                        }
                    }
                }
                break;
            }
            unk_b0->unk_741 = 0xff;
            unk_b0->unk_740 = 0xff;
        }
        if (unk_b0->unk_740 == unk_1e) {
            sel = unk_b0->unk_741;
        }
    }
    if (sel != 0xff) {
        u8 buf = sel;
        func_02067a84(unk_3c, &buf, data_ov045_02259d40[0]);
    }
}

void Unk_ov045_02259e20::vfunc_78(void *arg) {
    Unk_ov045_022590e4_Msg *out = (Unk_ov045_022590e4_Msg *)arg;
    out->unk_00 = data_ov045_02259d40[0];
    s32 a = func_0202e1cc(4, 0);
    s32 b = func_0202e1cc(5, 0);
    s32 c = func_0202e1cc(6, 0);
    if (b == 0 || a == 0) {
        if (b == 0) {
            out->unk_04 = 1;
        } else {
            out->unk_04 = 5;
        }
    } else {
        if (c == 0) {
            out->unk_04 = 0x11;
        } else {
            out->unk_04 = 0x19;
        }
    }
    if (unk_b0->func_ov045_02259004()) {
        out->unk_04 = 0x13;
    }
}

void Unk_ov045_02259e20::func_ov045_02259654(Unk_ov045_02259eb0 *o) {
    vfunc_08();
    unk_b0 = o;
}

void Unk_ov045_02259e20::vfunc_38(s32 a) {
    if (a != func_020197a0(unk_b0->unk_564) || func_020197a8(unk_b0->unk_564) != 8) {
        switch (a) {
        case 0x1e:
            func_ov004_02228ee0();
            break;
        case 0x1f:
            func_02034d70(0x10);
            func_ov004_02228ec0();
            break;
        case 0x20:
            func_ov004_02228ea0();
            break;
        }
    }
    Unk_02015b54::vfunc_38(a);
}

Unk_ov045_02259e20::~Unk_ov045_02259e20() {}
