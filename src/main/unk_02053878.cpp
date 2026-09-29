#include "types.h"

struct Unk_02053a54_Obj {
    u32 unk_00;
    u8 pad_04[0x48];
    u32 unk_4c;
    u32 unk_50;
    u32 unk_54;
};

struct Unk_02053a54_Hdr {
    u8 unk_00;
    u8 unk_01;
};

struct Unk_02053a54_Msg {
    Unk_02053a54_Hdr *unk_00;
    u8 pad_04[0xb0];
    Unk_02053a54_Obj *unk_b4;
};

extern "C" {
s32 func_01ffcc10();
u32 func_02104000(void *a, u32 b, u32 c, u32 d);
void func_02056520(void *p, u32 a);
void func_02056654(void *p);
void func_0205668c(void *p, u32 a, u32 b, u32 c, u32 d);
u16 func_02054778(u32 a, u32 b);
void *func_02055c08(u32 a, void *b, u32 c);
s32 func_02056544(void *p);
s32 func_020566bc(void *p);
void func_020561d8(void *p, void *q);
void func_02056160(void *p, void *m);
void func_02056594(void *p);
void func_02056738(void *p);
void func_020565a0(void *p);
void func_02054190(void *p);
s32 func_02053ee8(void *p, u32 a, u32 b, u32 c, u32 d, u16 e, u16 f);
s32 func_0205436c(void *a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
s32 func_020547cc(void *p);
struct Unk_0205415c_Item {
    u8 pad_00[0x10];
    u32 unk_10;
};
struct Unk_0205415c_Obj {
    u8 pad_00[8];
    u8 unk_08[0x10];
    Unk_0205415c_Item *unk_18;
};
void func_0205415c(void *p, void *q);
void func_02103d64(void *p, void *q);
void func_02103e40(void *p, void *q);
void func_02053830(void *p);
extern u8 data_020dbd28[];
}

class Unk_020dbe7c {
public:
    Unk_020dbe7c() : unk_08(0), unk_0c(0), unk_10(0x1000) {}
    virtual ~Unk_020dbe7c();
    u32 pad_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 pad_14;
};
class Unk_020dbe7c_Sub {
public:
    ~Unk_020dbe7c_Sub();
    Unk_020dbe7c_Sub();
    u8 pad[0x38];
};
class Unk_020dbd74;

class Unk_020dbdd4 {
public:
    virtual ~Unk_020dbdd4();
    u16 unk_04;
    u8 pad_06[2];
    u8 pad_08[0x5c - 8];
    u32 unk_5c;
    u8 pad_60[0x9c - 0x60];
};
class Unk_020dbde4 {
public:
    virtual ~Unk_020dbde4();
    u32 pad_04;
    u32 unk_a4;
    u32 unk_a8;
    u32 unk_ac;
    u8 unk_b0;
    u8 pad_b1[3];
    void *unk_b4;
};
class Unk_020dbdf4 {
public:
    virtual ~Unk_020dbdf4();
    u8 pad[0x38];
};

class Unk_0205454c : public Unk_020dbdd4, public Unk_020dbde4, public Unk_020dbdf4 {
public:
    Unk_0205454c();
    virtual ~Unk_0205454c();
    u32 func_0205458c();
    BOOL func_02054800(u32 a);
    void func_020543d4(Unk_02053a54_Msg *m);
    void func_02054440(Unk_02053a54_Msg *m);
    void func_0205439c();
};

class Unk_020dbda4 : public Unk_0205454c {
public:
    Unk_020dbda4();
    virtual ~Unk_020dbda4();
    void func_02053dc0();
    void func_02053dd8(u32 a, u32 b);
    void func_02053e00(u32 a, u32 b);
    void func_02053e28(u32 a, u32 b);
    void func_02053e70(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, BOOL g);
    void func_02053f08(u32 a);
    void func_02053f20();
    BOOL func_02053f8c(u32 a);
    void func_02053fcc(Unk_02053a54_Msg *m);
    void func_02054004(Unk_02053a54_Msg *m);
    void func_02054048(Unk_02053a54_Msg *m);
    void func_02054098(Unk_02053a54_Msg *m);
    BOOL func_020540bc(u32 i);
    void func_020540f4(u32 i);
    void func_02054124(u32 i);
    void func_02054154(u32 i);
    void func_02054158(u32 i);

    void *unk_f4;
    Unk_020dbe7c unk_f8;
    Unk_020dbe7c_Sub unk_110;
    u32 unk_148;
    u32 unk_14c;
    u32 unk_150;
};

class Unk_020dbd74 : public Unk_020dbda4 {
public:
    Unk_020dbd74();
    virtual ~Unk_020dbd74();
    void func_02053878(u32 a, u32 b);
    void func_020538a8(u32 a, u32 b);
    void func_020538f0();
    void func_02053830();
    void func_02053900(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, BOOL g);
    void func_020539a0();
    BOOL func_02053a14(u32 a);
    void func_02053a54(Unk_02053a54_Msg *m);
    void func_02053af0(Unk_02053a54_Msg *m);
    void func_02053b34(Unk_02053a54_Msg *m);
    void func_02053be4(Unk_02053a54_Msg *m);
    BOOL func_02053c08(u32 i);
    void func_02053c40(u32 i);
    void func_02053c70(u32 i);

    void *unk_154;
    Unk_020dbe7c unk_158;
    Unk_020dbe7c_Sub unk_170;
    u32 unk_1a8;
    u32 unk_1ac;
    u32 unk_1b0;
};

void Unk_020dbd74::func_02053878(u32 a, u32 b) {
    u32 i = a;
    for (; i <= b; i++) {
        func_02054154(i);
        func_020540f4(i);
        func_02053c70(i);
    }
}

void Unk_020dbd74::func_020538a8(u32 a, u32 b) {
    if (a == 0) {
        func_02053830();
    } else {
        func_02053900(func_0205458c(), a, unk_b0, unk_ac, (unk_a4 << 4) >> 16, b, 1);
    }
}

void Unk_020dbd74::func_020538f0() { func_02056654(&unk_158); }

void Unk_020dbd74::func_02053900(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, BOOL g) {
    func_02056520(&unk_170, b);
    if (*(u16 *)&f == 0) {
        *(u16 *)&f = func_02054778(c, a);
    }
    func_0205668c(&unk_158, *(u16 *)&f, c, d, *(u16 *)&e);
    func_02104000(unk_154, a, unk_5c, 0);
    if (g != 0) {
        unk_04 = unk_04 | 0x8000;
    } else {
        unk_04 = unk_04 & 0xffff7fff;
    }
}

extern "C" void func_02053980(void *p, u32 a, u32 b, u32 c, u32 d, u16 e, u16 f) { func_02053ee8(p, a, b, c, d, e, f); }

void Unk_020dbd74::func_020539a0() {
    func_02053f20();
    if (unk_1ac != 0 || unk_1b0 != 0) {
        if (func_02056544(&unk_170) != 0 && (unk_04 & 0x8000) != 0) {
            func_02053830();
            unk_04 = unk_04 & 0xffff7fff;
        }
        func_020566bc(&unk_158);
        *(u32 *)unk_154 = unk_158.unk_08;
    }
}

BOOL Unk_020dbd74::func_02053a14(u32 a) {
    if (!func_02053f8c(a)) {
        return FALSE;
    }
    unk_154 = func_02055c08(unk_5c, data_020dbd28, a);
    if (unk_154 != NULL) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020dbd74::func_02053a54(Unk_02053a54_Msg *m) {
    if (func_01ffcc10() == 0) {
        u32 x = unk_1b0 | (unk_1ac | (unk_14c | unk_150));
        if (x == 0) {
            func_020543d4(m);
        } else {
            u32 t = m->unk_00->unk_01;
            if ((x & (1 << (t & 0x1f))) == 0) {
                func_020543d4(m);
            } else if (func_02053c08(t)) {
                func_02053af0(m);
            } else if (func_020540bc(t)) {
                func_02054004(m);
            } else {
                func_020543d4(m);
            }
        }
    }
}

void Unk_020dbd74::func_02053af0(Unk_02053a54_Msg *m) {
    if ((m->unk_b4->unk_00 & 4) != 0) {
        m->unk_b4->unk_4c = 0;
        m->unk_b4->unk_50 = 0;
        m->unk_b4->unk_54 = 0;
    }
    if (unk_1a8 != 0) {
        func_020561d8(&unk_170, m);
    }
}

void Unk_020dbd74::func_02053b34(Unk_02053a54_Msg *m) {
    if (func_01ffcc10() == 0) {
        u32 t = m->unk_00->unk_01;
        u32 v;
        if (t >= 0x20) {
            v = unk_1b0 & (1 << (t - 0x20));
        } else {
            v = unk_1ac & (1 << t);
        }
        if (v != 0) {
            func_0205415c(this, unk_154);
            func_02053be4(m);
        } else {
            u32 w;
            if (t >= 0x20) {
                w = unk_150 & (1 << (t - 0x20));
            } else {
                w = unk_14c & (1 << t);
            }
            if (w != 0) {
                func_0205415c(this, unk_f4);
                func_02054098(m);
            } else {
                func_0205415c(this, unk_b4);
                func_02054440(m);
            }
        }
    }
}

void Unk_020dbd74::func_02053be4(Unk_02053a54_Msg *m) {
    if (unk_1a8 != 0) {
        func_02056160(&unk_170, m);
    }
}

BOOL Unk_020dbd74::func_02053c08(u32 i) {
    if (i >= 0x20) {
        if ((unk_1b0 & (1 << (i - 0x20))) == 0) {
            return FALSE;
        }
        return TRUE;
    }
    if ((unk_1ac & (1 << i)) == 0) {
        return FALSE;
    }
    return TRUE;
}

void Unk_020dbd74::func_02053c40(u32 i) {
    if (i >= 0x20) {
        unk_1b0 &= ~(1 << (i - 0x20));
    } else {
        unk_1ac &= ~(1 << i);
    }
}

void Unk_020dbd74::func_02053c70(u32 i) {
    if (i >= 0x20) {
        unk_1b0 |= 1 << (i - 0x20);
    } else {
        unk_1ac |= 1 << i;
    }
}

Unk_020dbd74::~Unk_020dbd74() {
}

Unk_020dbd74::Unk_020dbd74() {
    unk_154 = NULL;
    unk_1ac = 0;
    unk_1b0 = 0;
}

void Unk_020dbda4::func_02053dc0() {
    unk_150 = 0;
    unk_14c = unk_150;
}

void Unk_020dbda4::func_02053dd8(u32 a, u32 b) {
    u32 i = a;
    for (; i <= b; i++) {
        func_02054154(i);
        func_020540f4(i);
    }
}

void Unk_020dbda4::func_02053e00(u32 a, u32 b) {
    u32 i = a;
    for (; i <= b; i++) {
        func_02054154(i);
        func_02054124(i);
    }
}

void Unk_020dbda4::func_02053e28(u32 a, u32 b) {
    if (a == 0) {
        func_02053dc0();
    } else {
        func_02053e70(func_0205458c(), a, unk_b0, unk_ac, (unk_a4 << 4) >> 16, b, 1);
    }
}

void Unk_020dbda4::func_02053e70(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, BOOL g) {
    func_02056520(&unk_110, b);
    if (*(u16 *)&f == 0) {
        *(u16 *)&f = func_02054778(c, a);
    }
    func_0205668c(&unk_f8, *(u16 *)&f, c, d, *(u16 *)&e);
    func_02104000(unk_f4, a, unk_5c, 0);
    if (g != 0) {
        unk_04 = unk_04 | 0x4000;
    } else {
        unk_04 = unk_04 & 0xffffbfff;
    }
}

extern "C" s32 func_02053ee8(void *p, u32 a, u32 b, u32 c, u32 d, u16 e, u16 f) {
    func_0205436c(p, a, b, c, d, e, f);
}

void Unk_020dbda4::func_02053f08(u32 a) {
    func_020547cc(this);
    func_0205415c(this, unk_b4);
}

void Unk_020dbda4::func_02053f20() {
    func_0205439c();
    if (unk_14c != 0 || unk_150 != 0) {
        if (func_02056544(&unk_110) != 0 && (unk_04 & 0x4000) != 0) {
            func_02053dc0();
            unk_04 = unk_04 & 0xffffbfff;
        }
        func_020566bc(&unk_f8);
        *(u32 *)unk_f4 = unk_f8.unk_08;
    }
}

BOOL Unk_020dbda4::func_02053f8c(u32 a) {
    if (!func_02054800(a)) {
        return FALSE;
    }
    unk_f4 = func_02055c08(unk_5c, data_020dbd28, a);
    if (unk_f4 != NULL) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020dbda4::func_02053fcc(Unk_02053a54_Msg *m) {
    if (func_01ffcc10() == 0) {
        if (func_020540bc(m->unk_00->unk_01)) {
            func_02054004(m);
        } else {
            func_020543d4(m);
        }
    }
}

void Unk_020dbda4::func_02054004(Unk_02053a54_Msg *m) {
    if ((m->unk_b4->unk_00 & 4) != 0) {
        m->unk_b4->unk_4c = 0;
        m->unk_b4->unk_50 = 0;
        m->unk_b4->unk_54 = 0;
    }
    if (unk_148 != 0) {
        func_020561d8(&unk_110, m);
    }
}

void Unk_020dbda4::func_02054048(Unk_02053a54_Msg *m) {
    if (func_01ffcc10() == 0) {
        if (func_020540bc(m->unk_00->unk_01)) {
            func_0205415c(this, unk_f4);
            func_02054098(m);
        } else {
            func_0205415c(this, unk_b4);
            func_02054440(m);
        }
    }
}

void Unk_020dbda4::func_02054098(Unk_02053a54_Msg *m) {
    if (unk_148 != 0) {
        func_02056160(&unk_110, m);
    }
}

BOOL Unk_020dbda4::func_020540bc(u32 i) {
    if (i >= 0x20) {
        if ((unk_150 & (1 << (i - 0x20))) == 0) {
            return FALSE;
        }
        return TRUE;
    }
    if ((unk_14c & (1 << i)) == 0) {
        return FALSE;
    }
    return TRUE;
}

void Unk_020dbda4::func_020540f4(u32 i) {
    if (i >= 0x20) {
        unk_150 &= ~(1 << (i - 0x20));
    } else {
        unk_14c &= ~(1 << i);
    }
}

void Unk_020dbda4::func_02054124(u32 i) {
    if (i >= 0x20) {
        unk_150 |= 1 << (i - 0x20);
    } else {
        unk_14c |= 1 << i;
    }
}

void Unk_020dbda4::func_02054154(u32 i) {}
void Unk_020dbda4::func_02054158(u32 i) {}

extern "C" void func_0205415c(void *pv, void *qv) {
    Unk_0205415c_Obj *p = (Unk_0205415c_Obj *)pv;
    Unk_0205415c_Item *q = (Unk_0205415c_Item *)qv;
    Unk_0205415c_Item *cur = p->unk_18;
    if (cur != q && cur != NULL && cur->unk_10 == 0) {
        func_02103d64(&p->unk_08, cur);
        func_02103e40(&p->unk_08, q);
    }
}
