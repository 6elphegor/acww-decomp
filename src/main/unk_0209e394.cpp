#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020660f8 {
public:
    void *func_020679b4();
    void func_02067a78();
    void func_0206799c(s32 v);
    void func_02067990();
    void func_02067a6c();
    void func_02067a84(u8 *a, void *b);
    void func_020679c0(s32 v);
    void func_02067958();
    void func_02067978(void *p);

    /* 0x00 */ u32 unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u32 unk_08;
};

class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020ddcf0 : public Unk_020e2a30 {
public:
    Unk_020ddcf0();
    virtual ~Unk_020ddcf0();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();

    u8 pad_20[0x1c];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

class Unk_020e23fc;

// vtable 0x020e244c, size 0x4c
class Unk_020e244c : public Unk_020ddcf0 {
public:
    Unk_020e244c();
    virtual ~Unk_020e244c();
    virtual void vfunc_14();
    virtual void vfunc_18();

    void func_0209e51c(Unk_020e23fc *owner);

    /* 0x44 */ Unk_020e23fc *unk_44;
    /* 0x48 */ u16 unk_48;
};

// vtable 0x020e2824, member of Unk_020e27d4
class Unk_020e2824 : public Unk_020ddcf0 {
public:
    virtual ~Unk_020e2824();
    u8 pad_44[8];
};

// vtable 0x020e23fc, size 0xa0
class Unk_020e23fc : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual ~Unk_020e23fc();

    void func_0209e570();
    void func_0209e5ec();
    void func_0209e5fc();
    void func_0209e678();
    void func_0209e688();
    void func_0209e6d4();
    void func_0209e6d8();
    void func_0209e700();
    void func_0209e704();
    void func_0209e7b0();
    void func_0209e7b4();
    void func_0209e83c();
    void func_0209e840(s32 state);

    /* 0x50 */ s32 unk_50;
    /* 0x54 */ Unk_020e244c unk_54;
};

// vtable 0x020e27d4
class Unk_020e27d4 : public Unk_020d8c7c {
public:
    virtual ~Unk_020e27d4();

    /* 0x50 */ s32 unk_50;
    /* 0x54 */ Unk_020e2824 unk_54;
};

typedef void (Unk_020e23fc::*Unk_020e23fc_Fn)();
struct Unk_0209e840_Ent {
    Unk_020e23fc_Fn enter;
    Unk_020e23fc_Fn update;
};

extern Unk_0209e840_Ent data_021ed330[];
extern Unk_0209e840_Ent data_021ed338[];
extern u8 data_020e24c4[];
extern u8 data_020e24d8[];
extern u8 data_021edb5c[];
extern void *data_020cbb18;
extern u16 data_021f47d8[];
extern u8 data_021c3cc0;
extern s32 data_020d070c[];
extern u8 data_021ed3ac[];
extern u8 data_021ed3a0;
extern u8 data_021ed448[];

extern "C" {
Unk_020660f8 *func_02067918(s32 v);
s32 func_020aa514(void *h);
void func_020aa680(void *h, s32 a, s32 b);
void func_020aa638(void *h, s32 a, u8 *b, s32 c, u8 *d, s32 e, s32 f);
void func_020aa608(void *h);
s32 func_02073204();
void func_020a5f48(s32 a, s32 b);
void func_020a5f28();
void func_020a5f18();
void func_0209f230(s32 v);
s32 func_020731d4();
s32 func_02073230(s32 v);
s32 func_020b4934();
void func_020b4f58(s32 a, s32 b, s32 c, s32 d);
s32 func_02072e44(void *p);
void func_020b4a08(s32 a, s32 b);
void func_020a08e8();
s32 func_020a0984();
void func_0203d86c();
s32 func_0203d878();
s32 func_020a0318();
s32 func_020a0304();
void func_020a710c(void *p, u8 *q);
s32 func_020b50e8();
s32 func_0203d978();
s32 func_0203d99c();
s32 func_0203e2f4();
s32 func_020729cc(void *p, s32 v);
void func_020387b4();
s32 func_0203d884();
s16 *func_0209c37c(s32 a, s32 b);
s32 func_0209750c();
s32 func_02098320();
void func_02097410(s32 a, s32 b);
s32 func_02097404();
void func_020973ec(s32 v);
s32 func_02098750(s32 v);
s32 func_02097d1c(s32 a, s32 b);
void func_02097ac4(s32 a, s32 b, s32 c);
void func_0209d498(void *p);
s32 func_0209d3d0(void *a, void *b, s32 c);
void func_0209d2c0(void *a, s32 b);
void func_0209cf88(void *p);
void func_02116048(void *src, void *dst, s32 n);
u32 func_02063b8c(s32 n);
void func_0203ec54(void *p);
void *func_0203ec4c(void *p);
void func_0211a748(void *a, void *b, s32 c, s32 d, s32 e);
void func_02115fb4(void *p, s32 v, s32 n);
s32 func_02000b7c();
s32 func_02063a04(void *a, void *b, s32 n);
void func_0203ec18(void *p);
void func_0203ec50(void *p);
}

// Unk_020e244c

void Unk_020e244c::vfunc_18() {
    Unk_020660f8 *o = (Unk_020660f8 *)unk_3c;
    s32 r = func_020aa514(o->func_020679b4());
    switch (unk_1e) {
    case 4:
        switch (r) {
        case 0:
            o->func_02067a78();
            o->func_0206799c(1);
            unk_44->func_0209e840(4);
            break;
        case 1: {
            u8 b = 8;
            o->func_02067a84(&b, data_020e24c4);
            break;
        }
        }
        break;
    case 8:
        switch (r) {
        case 0:
            o->func_02067a78();
            o->func_0206799c(1);
            unk_44->func_0209e840(5);
            break;
        case 1:
            o->func_02067a84(data_021edb5c, 0);
            break;
        }
        break;
    case 0:
        if (r == 0) {
            o->func_02067a84(data_021edb5c, 0);
            unk_44->func_0209e840(3);
        }
        break;
    }
}

void Unk_020e244c::vfunc_14() {
    if (unk_1e == 0) {
        Unk_020660f8 *o = (Unk_020660f8 *)unk_3c;
        void *h = o->func_020679b4();
        func_020aa680(h, 2, 1);
        u8 buf[4];
        buf[0] = 0xc;
        buf[1] = data_021edb5c[0];
        func_020aa638(h, 0, buf, 1, &buf[1], 0, 2);
        buf[2] = 0xd;
        buf[3] = data_021edb5c[0];
        func_020aa638(h, 1, &buf[2], 1, &buf[3], 0, 0);
        func_020aa608(h);
        o->func_020679c0(1);
    }
}

void Unk_020e244c::func_0209e51c(Unk_020e23fc *owner) {
    unk_44 = owner;
}

Unk_020e244c::~Unk_020e244c() {}

Unk_020e244c::Unk_020e244c() {}

// Unk_020e23fc

void Unk_020e23fc::func_0209e570() {
    Unk_020660f8 *o = (Unk_020660f8 *)unk_54.unk_3c;
    s32 r = func_02073204();
    if (r == 5 || r == 6) {
        o->func_02067990();
        o->func_02067a6c();
        if (r == 5) {
            func_020a5f48(0, 6);
            func_020a5f28();
            func_020a5f18();
            o->func_02067a84(data_021edb5c, 0);
            func_0209f230(1);
            func_0209e840(3);
        } else {
            u8 b = 5;
            o->func_02067a84(&b, data_020e24c4);
            func_0209e840(2);
        }
        func_020731d4();
    }
}

void Unk_020e23fc::func_0209e5ec() {
    unk_54.unk_48 = 200;
    func_02073230(3);
}

void Unk_020e23fc::func_0209e5fc() {
    Unk_020660f8 *o = (Unk_020660f8 *)unk_54.unk_3c;
    s32 r = func_02073204();
    if (r == 5 || r == 6) {
        o->func_02067990();
        o->func_02067a6c();
        if (r == 5) {
            func_020a5f48(0, 6);
            func_020a5f28();
            func_020a5f18();
            o->func_02067a84(data_021edb5c, 0);
            func_0209f230(0);
            func_0209e840(3);
        } else {
            u8 b = 5;
            o->func_02067a84(&b, data_020e24c4);
            func_0209e840(2);
        }
        func_020731d4();
    }
}

void Unk_020e23fc::func_0209e678() {
    unk_54.unk_48 = 200;
    func_02073230(2);
}

void Unk_020e23fc::func_0209e688() {
    Unk_020660f8 *o = func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        func_020b4f58(func_020b4934(), 0x2e, 2, 3);
        if (func_02072e44(data_020cbb18) != 0) {
            func_020b4a08(func_020b4934(), 0);
            func_020a08e8();
        } else {
            func_020a0984();
        }
    }
}

void Unk_020e23fc::func_0209e6d4() {}

void Unk_020e23fc::func_0209e6d8() {
    Unk_020660f8 *o = func_02067918(0);
    if (o->unk_04 == 0) {
        o->func_02067958();
        func_0203d86c();
        func_0209e840(0);
    }
}

void Unk_020e23fc::func_0209e700() {}

void Unk_020e23fc::func_0209e704() {
    if (func_0203d878() != 0) {
        Unk_020660f8 *o = func_02067918(0);
        Unk_020e244c *p = &unk_54;
        p->vfunc_08();
        if (func_020a0318() != 0 || func_020a0304() != 0) {
            func_020a710c(&unk_54, data_020e24d8);
            unk_54.unk_1e = 4;
        } else if (func_02072e44(data_020cbb18) != 0) {
            func_020a710c(&unk_54, data_020e24c4);
            unk_54.unk_1e = 4;
        } else {
            func_020a710c(&unk_54, data_020e24c4);
            unk_54.unk_1e = 0;
        }
        o->func_02067978(&unk_54);
        o->unk_08 = 1;
        func_0209e840(2);
    } else {
        func_0209e840(0);
    }
}

void Unk_020e23fc::func_0209e7b0() {}

static inline BOOL Unk_0209e7b4_Is2(u8 v) {
    if (v == 2) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020e23fc::func_0209e7b4() {
    if ((data_021f47d8[1] & 8) != 0) {
        if (func_020b50e8() != 0x2d) {
            if (func_0203d978() == 0) {
                if (func_0203d99c() == 0) {
                    if (Unk_0209e7b4_Is2(data_021c3cc0) != 0) {
                        if (func_0203e2f4() == 0) {
                            void *g = data_020cbb18;
                            if (func_02072e44(g) != 0 && func_020729cc(g, 0) == 0) {
                                func_020387b4();
                            } else if (func_0203d884() != 0) {
                                func_0209e840(1);
                            }
                        }
                    }
                }
            }
        }
    }
}

void Unk_020e23fc::func_0209e83c() {}

void Unk_020e23fc::func_0209e840(s32 state) {
    if (data_021ed330[state].enter != 0) {
        (this->*data_021ed330[state].enter)();
    }
    unk_50 = state;
}

BOOL Unk_020e23fc::vfunc_18() {
    s16 *p;
    s32 t;
    s32 r6;
    s32 r4;

    if (*func_0209c37c(0, 0x4b) != 0) {
        if (func_0209750c() != 0) {
            r4 = func_02098320();
            switch (*func_0209c37c(0, 0x4b)) {
            case 0:
                break;
            case 1:
                func_02097410(r4, 1000000);
                break;
            case 2:
                func_02097410(r4, 10000000);
                break;
            case 3:
                func_02097410(r4, 100000000);
                break;
            case 4:
                func_02097410(r4, 500000000);
                break;
            case 5:
                func_02097410(r4, 999999999);
                break;
            }
        }
    }
    if (*func_0209c37c(0, 0x4c) != 0) {
        if (func_0209750c() != 0) {
            func_02098320();
            if (*func_0209c37c(0, 0x4c) != 0) {
                t = *func_0209c37c(0, 0x4c);
                if (t < 1) {
                    t = 1;
                } else if (t > 0x15) {
                    t = 0x15;
                }
                s32 c = func_02097404();
                s32 v = data_020d070c[t];
                if (v > c) {
                    func_020973ec(v - 100);
                }
            }
        }
    }
    if (*func_0209c37c(0, 0x48) != 0) {
        r6 = func_0209750c();
        r4 = func_02097d1c(func_02098750(r6), 1);
        r4 += *func_0209c37c(0, 0x48);
        if (r4 < 0) {
            r4 = 0;
        } else if (r4 > 0x1869f) {
            r4 = 0x1869f;
        }
        func_02097ac4(func_02098750(r6), r4, 1);
        *func_0209c37c(0, 0x48) = 0;
    }
    if (data_021ed338[unk_50].enter != 0) {
        (this->*data_021ed330[unk_50].update)();
    }
    return TRUE;
}

BOOL Unk_020e23fc::vfunc_0c() {
    return TRUE;
}

BOOL Unk_020e23fc::vfunc_00() {
    unk_54.func_0209e51c(this);
    return TRUE;
}

Unk_020e23fc::~Unk_020e23fc() {}

extern "C" Unk_020e23fc *func_0209ea1c() {
    Unk_020e23fc *p = new Unk_020e23fc;
    return p;
}

// 4-byte record

class Unk_0209ea50 {
public:
    BOOL func_0209ea50();
    void func_0209ea60();
    void func_0209eacc(void *src);
    void func_0209eaf4();
    u8 func_0209eb14();
    void func_0209eb18(u8 v);
    void func_0209eb1c();
    BOOL func_0209eb48();
    BOOL func_0209eb5c();
    void func_0209eb6c();
    void func_0209eb74();
    void func_0209eb7c();
    void func_0209eb84();
    void func_0209eb8c();
    void func_0209eb90();

    /* 0x00 */ u8 unk_00;
    /* 0x01 */ u8 unk_01;
    /* 0x02 */ u8 unk_02;
    /* 0x03 */ u8 unk_03;
};

BOOL Unk_0209ea50::func_0209ea50() {
    if (unk_03 != 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_0209ea50::func_0209ea60() {
    if (func_0209ea50() != 0) {
        u32 w[4];
        w[0] = 0;
        w[1] = 0;
        w[2] = 0;
        w[3] = 0;
        func_0209d498(w);
        ((u8 *)w)[0xd] = unk_02;
        ((u8 *)w)[0xc] = unk_01;
        ((u8 *)w)[0xb] = unk_00;
        ((u8 *)w)[0xa] = 0;
        if (func_0209d3d0(&w[2], w, 0x3c) != 1) {
            ((u8 *)w)[0xa] = 6;
            func_0209d2c0(&w[2], 1);
            if (func_0209d3d0(&w[2], w, 0x3c) != 1) {
                unk_03 = 0;
            }
        } else {
            unk_03 = 0;
        }
    }
}

void Unk_0209ea50::func_0209eacc(void *src) {
    u8 buf[8];
    if (src == 0) {
        func_0209cf88(buf);
        src = buf;
    }
    func_02116048(src, this, 4);
    unk_03 = 1;
}

void Unk_0209ea50::func_0209eaf4() {
    unk_00 = 1;
    unk_01 = 1;
    unk_02 = 0;
    unk_03 = 0;
}

extern "C" void func_0209eb04() {}
extern "C" void func_0209eb08() {}

class Unk_0209eb0c {
public:
    u16 func_0209eb0c();
    void func_0209eb10(u16 v);
    u16 unk_00;
};

u16 Unk_0209eb0c::func_0209eb0c() {
    return unk_00;
}

void Unk_0209eb0c::func_0209eb10(u16 v) {
    unk_00 = v;
}

u8 Unk_0209ea50::func_0209eb14() {
    return unk_03;
}

void Unk_0209ea50::func_0209eb18(u8 v) {
    unk_03 = v;
}

void Unk_0209ea50::func_0209eb1c() {
    u8 old = unk_03;
    unk_03 = func_02063b8c(0xff);
    if (unk_03 == old) {
        if (unk_03 < 0xff) {
            unk_03++;
        } else {
            unk_03--;
        }
    }
}

BOOL Unk_0209ea50::func_0209eb48() {
    if (unk_02 == 2 || unk_02 == 0x1c) {
        return FALSE;
    }
    return TRUE;
}

BOOL Unk_0209ea50::func_0209eb5c() {
    if (unk_02 == 2) {
        return TRUE;
    }
    return FALSE;
}

void Unk_0209ea50::func_0209eb6c() {
    unk_02 = 2;
}

void Unk_0209ea50::func_0209eb74() {
    unk_02 = 0x1c;
}

void Unk_0209ea50::func_0209eb7c() {
    unk_02 = 0;
}

void Unk_0209ea50::func_0209eb84() {
    unk_02 = 2;
}

void Unk_0209ea50::func_0209eb8c() {}
void Unk_0209ea50::func_0209eb90() {}

// Unk_020e27d4

Unk_020e27d4::~Unk_020e27d4() {}

extern "C" u32 func_0209ebf0() {
    s32 i;
    for (i = 2; i >= 0; i--) {
        if (data_021ed3ac[i] != 0xff) {
            return data_021ed3ac[i];
        }
    }
    return 4;
}

extern "C" void func_0209ec0c() {
    s32 i;
    for (i = 0; i < 3; i++) {
        data_021ed3ac[i] = 0xff;
    }
}

extern "C" void func_0209ec20(u32 v) {
    u32 idx = 0xff;
    s32 i;
    for (i = 0; i < 3; i++) {
        if (data_021ed3ac[i] == v) {
            idx = i;
            break;
        }
    }
    if (idx != 0xff) {
        for (; (s32)idx < 2; idx++) {
            data_021ed3ac[idx] = data_021ed3ac[idx + 1];
        }
        data_021ed3ac[2] = 0xff;
    }
}

extern "C" void func_0209ec60(u32 v) {
    s32 i;
    for (i = 0; i < 2; i++) {
        data_021ed3ac[i] = data_021ed3ac[i + 1];
    }
    data_021ed3ac[2] = v;
}

extern "C" void func_0209ec80() {
    u8 a[0x10];
    u8 b[0xd2];
    if (data_021ed3a0 != 0) {
        data_021ed3a0 = 0;
        func_0203ec54(b);
        func_02116048(data_021ed448, b, 0xd2);
        func_02115fb4(func_0203ec4c(b), 0, 0x10);
        func_0211a748(a, b, 0xd2, func_02000b7c(), 0x10);
        if (func_02063a04(func_0203ec4c(data_021ed448), a, 0x10) == 0) {
            func_0203ec18(data_021ed448);
        }
        func_02115fb4(data_021ed448, 0, 0xd2);
        func_0203ec50(b);
    }
}
