#include "types.h"

class Unk_02035780_Owner;
typedef void (Unk_02035780_Owner::*Unk_02035780_OwnerFn)();

class Unk_02035ca4 {
public:
    Unk_02035ca4();
    ~Unk_02035ca4();
    void func_02035ca4(s32 a, s32 b, u8 c);
    void func_02035cac();

    u8 unk_00;
    u8 unk_01;
    u8 pad_02[2];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

class Unk_020356b8 {
public:
    void func_020356b8();
    void func_0203570c();
    Unk_020356b8 *func_02035744(void *owner);
    void func_02035724(s32 a, s32 b);
    void func_02035730(s32 a);
    void func_02035738(u16 a);
    void func_02035740();

    u32 unk_00;
    u8 unk_04;
    u8 pad_05;
    u16 unk_06;
    u8 unk_08;
    u8 pad_09[3];
    s32 unk_0c;
    u8 unk_10;
    u8 pad_11[3];
    s32 unk_14;
    s32 unk_18;
};

class Unk_02035780_Owner {
public:
    void func_02034574(Unk_02035780_OwnerFn fn);
    void func_02035868();

    u8 pad_00[4];
    u16 unk_04;
    u8 pad_06[6];
    s32 unk_0c;
    u8 unk_10;
    u8 pad_11;
    u8 unk_12;
    u8 pad_13;
    u8 unk_14;
    u8 pad_15[0x1c0 - 0x15];
    s32 unk_1c0;
    u8 pad_1c4[0x2b4 - 0x1c4];
    Unk_020356b8 unk_2b4;
};

class Unk_02035758 {
public:
    Unk_02035758(Unk_02035780_Owner *owner);
    ~Unk_02035758();
    void func_02035758();
    void func_0203576c();
    void func_02035780();
    void func_020357f4();
    void func_0203581c(Unk_02035ca4 *e);
    void func_02035870(Unk_02035ca4 *e);
    void func_020358d4(Unk_02035ca4 *e);
    void func_02035974(Unk_02035ca4 *e);
    void func_020359b0(Unk_02035ca4 *e);
    void func_020359ec(Unk_02035ca4 *e);
    void func_02035a5c(Unk_02035ca4 *e);
    void func_02035ac4(Unk_02035ca4 *e);
    void func_02035ac8();
    void func_02035b94();
    void func_02035b9c();
    void func_02035ba4();
    void func_02035bac();
    void func_02035bb4();
    void func_02035bbc(s32 i);
    void func_02035bcc();
    void func_02035bd4();
    void func_02035bdc();
    void func_02035c0c();
    void func_02035c34();
    void func_02035c38();

    Unk_02035780_Owner *unk_00;
    Unk_02035ca4 unk_04[8];
    s32 unk_84;
};

class Unk_020d8e14 {
public:
    Unk_020d8e14(u32 owner);
    virtual ~Unk_020d8e14();
    void func_020354d8();
    void func_02035514();
    void func_02035518();
    void func_020355dc();

    u32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 unk_0a;
    u8 unk_0b;
    s32 unk_0c;
    s32 unk_10;
};

class Unk_02035cd0 {
public:
    void func_02035cd0();
    void func_02035da8();

    u8 pad_00[0xc];
    u8 unk_0c;
    u8 unk_0d;
    u8 unk_0e;
};

class Unk_02035dd8 {
public:
    void func_02035dd8();
    void func_02035e0c();
    void func_02035e2c(s32 t);

    u8 pad_00[8];
    u8 unk_08;
    u8 pad_09;
    u16 unk_0a;
};

struct Unk_020355dc_Data {
    u8 pad_00[0xc];
    u16 unk_0c;
};

struct Unk_020358d4_Buf {
    u8 pad_00[0x30];
    s32 unk_30;
    s32 unk_34;
    u8 pad_38[8];
};

struct Unk_020358d4_Vec {
    s32 x, y, z;
};

struct Unk_020358d4_Src {
    s32 x, y, z;
    Unk_020358d4_Src() {}
    Unk_020358d4_Src(s32 a, s32 b, s32 c) { x = a; y = b; z = c; }
};

extern "C" {
extern Unk_020355dc_Data *data_021eda68;
extern u8 *data_021c1b3c;
extern s32 data_020c8aec[];
s32 func_02094fec(void);
s32 func_02034d70(s32 a);
s32 func_02034d84(s32 a);
s32 func_02034dd0(s32 a, s32 b, s32 c);
s32 func_02034e10(s32 a, s32 b, s32 c, s32 d);
s32 func_02034fb0(void *p);
s32 func_0203507c(void *p);
s32 func_02034f6c(void *p, u32 a);
s32 func_02035e60(void);
s32 func_02035ed0(void *p, s32 a);
s32 func_02035fe0(void *p, s32 a);
s32 func_02035ea0(s32 id);
void func_02003b8c(s32);
void func_02003b7c(void);
void func_02003bfc(s32 a, s32 b);
void func_02003c10(s32 a);
void func_02003c20(u32 a);
s32 func_020b50e8(void);
Unk_020358d4_Src *func_020947f0(u32 n);
void func_020339bc(Unk_020358d4_Buf *p, Unk_020358d4_Src *pos, s32 a, s32 b);
void func_02033988(Unk_020358d4_Buf *p);
void *func_0209750c(void);
s32 func_02098044(void *p, s32 id);
s32 func_02036ab8(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02035284(void *p);
void *func_020355a0(void);
void *func_020355b4(void);
void *func_020355c8(void);
void *func_02035d94(void);
}

extern "C" void *func_020355a0(void) { return data_021c1b3c + 0x2a0; }
extern "C" void *func_020355b4(void) { return data_021c1b3c + 0x264; }
extern "C" void *func_020355c8(void) { return data_021c1b3c + 0x2f0; }
extern "C" void *func_02035d94(void) { return data_021c1b3c + 0x24c; }

extern "C" void func_02035504(void *p) { func_02035284(p); }
extern "C" void func_0203550c(Unk_020d8e14 *p) { p->func_020354d8(); }

void Unk_020d8e14::func_020354d8() {
    unk_08 = 0;
    unk_09 = 0;
    unk_0a = 0;
    unk_0b = 0;
    if (unk_0c != 0 || unk_10 != 0) {
        func_02034d70(7);
        unk_0c = 0;
        unk_10 = 0;
    }
}

void Unk_020d8e14::func_02035514() {}

void Unk_020d8e14::func_02035518() {
    if (data_021eda68->unk_0c != 5) {
        if (unk_0c < 0) {
            s32 r = func_02094fec();
            if (r != 0x3c) {
                if (r == 0x8b) {
                    unk_0c = 0x21;
                } else if (r == 0x8e) {
                    unk_0c = 0x21;
                } else if (r == 0x43) {
                    unk_0c = 0x21;
                } else if (r == 0x44) {
                    unk_0c = 0x21;
                } else if (r == 2) {
                    unk_0c = 0x19;
                } else {
                    unk_0c = 0x14;
                }
            }
        }
        if (unk_09 != 0) {
            func_02034fb0(func_020355c8());
        }
        unk_08 = 0;
        unk_09 = 0;
        unk_0a = 0;
        func_02035fe0(func_020355b4(), 0);
        func_02035ed0(func_020355a0(), 0);
    }
}

void Unk_020d8e14::func_020355dc() {
    if (data_021eda68->unk_0c != 5) {
        if (unk_0b == 1) {
            func_02034dd0(8, 0xf, 0);
            unk_0b = 2;
        } else if (unk_0b == 3) {
            func_02034d70(8);
            unk_0b = 0;
        }
        unk_09 = func_02035e60();
        func_02035ed0(func_020355a0(), unk_09);
        if (unk_08 == 0 && unk_09 == 0 && unk_0a == 0) {
            if (unk_0c != 0 || unk_10 != 0) {
                func_02034d70(7);
            }
            unk_0c = -1;
            unk_10 = 0;
            func_02034dd0(7, 0xf, 0);
        } else {
            func_02035fe0(func_020355b4(), 1);
            if (unk_09 != 0) {
                func_0203507c(func_020355c8());
            }
        }
    }
}

Unk_020d8e14::~Unk_020d8e14() {}

Unk_020d8e14::Unk_020d8e14(u32 owner) {
    unk_04 = owner;
    unk_08 = 0;
    unk_09 = 0;
    unk_0a = 0;
    unk_0b = 0;
    unk_0c = 0;
    unk_10 = 0;
}

void Unk_020356b8::func_020356b8() {
    if (unk_08 != 0) {
        unk_08 = 0;
        func_02003c10(unk_0c);
    }
    if (unk_04 != 0) {
        unk_04 = 0;
        func_02003c20(unk_06);
        func_02034f6c(data_021c1b3c + 0x2f0, unk_06);
    }
    if (unk_10 != 0) {
        unk_10 = 0;
        func_02003bfc(unk_14, unk_18);
    }
}

void Unk_020356b8::func_0203570c() {
    unk_04 = 0;
    unk_06 = 0xffff;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_14 = 0;
    unk_18 = 0;
}

void Unk_020356b8::func_02035724(s32 a, s32 b) {
    unk_10 = 1;
    unk_14 = a;
    unk_18 = b;
}

void Unk_020356b8::func_02035730(s32 a) {
    unk_08 = 1;
    unk_0c = a;
}

void Unk_020356b8::func_02035738(u16 a) {
    unk_04 = 1;
    unk_06 = a;
}

void Unk_020356b8::func_02035740() {}

Unk_020356b8 *Unk_020356b8::func_02035744(void *owner) {
    unk_00 = (u32)owner;
    func_0203570c();
    return this;
}

void Unk_02035758::func_02035758() {
    for (s32 i = 0; i < 8; i++) {
        unk_04[i].unk_01 = 0;
    }
}

void Unk_02035758::func_0203576c() {
    for (s32 i = 0; i < 8; i++) {
        unk_04[i].unk_00 = 0;
    }
}

void Unk_02035758::func_02035780() {
    Unk_02035ca4 *end;
    s32 f;
    s32 a;
    BOOL ok = FALSE;
    s32 t;
    s32 b;
    Unk_02035780_Owner *o = unk_00;
    Unk_02035ca4 *p;
    if (o->unk_1c0 > 0 && o->unk_12 != 0 && o->unk_04 != 0xffff) {
        ok = TRUE;
    }
    if (ok) {
        p = &unk_04[7];
        end = &unk_04[0];
        f = 0;
        a = 0;
        b = 0;
        for (; p >= end; p--) {
            if (p->unk_01 == 0) {
                t = p->unk_0c;
                if (p->unk_00 != 0) {
                    f = 1;
                    b = p->unk_08;
                }
                if (t != 0) {
                    a = p->unk_04;
                }
            }
        }
        if (f != 0) {
            o->unk_2b4.func_02035724(a, b);
        }
    }
}

void Unk_02035758::func_020357f4() {
    Unk_02035780_Owner *o = unk_00;
    if (o->unk_1c0 > 0 && o->unk_10 != 0) {
        Unk_02035ca4 *p = &unk_04[2];
        Unk_02035ca4 *end = &unk_04[7];
        for (; p < end; p++) {
            p->unk_01 = 1;
        }
    }
}

void Unk_02035780_Owner::func_02035868() {
    unk_14 = 0;
}

void Unk_02035758::func_0203581c(Unk_02035ca4 *e) {
    Unk_02035780_Owner *o = unk_00;
    if (o->unk_1c0 > 0) {
        if (o->unk_14 != 0 && o->unk_0c != 0) {
            e->func_02035ca4(o->unk_0c, 0, 1);
        }
        unk_00->func_02034574(&Unk_02035780_Owner::func_02035868);
        e->unk_0c = 0x12;
    } else {
        e->unk_0c = 0;
    }
}

void Unk_02035758::func_02035870(Unk_02035ca4 *e) {
    s32 st = e->unk_0c;
    s32 t = func_020b50e8();
    BOOL a = t == 0x27 ? TRUE : FALSE;
    BOOL b = t == 0x28 ? TRUE : FALSE;
    if (st == 0) {
        if (a || b) {
            e->func_02035ca4(0x40, 0x28, 1);
            e->unk_0c = 0x11;
        }
    } else if (st == 0x11) {
        if (!a && !b) {
            e->func_02035ca4(0x7f, 0x28, 1);
            e->unk_0c = 0;
        }
    }
}

void Unk_02035758::func_020358d4(Unk_02035ca4 *e) {
    s32 st = e->unk_0c;
    s32 flag = 0;
    Unk_020358d4_Src *p = func_020947f0(4);
    if (p) {
        Unk_020358d4_Buf b1;
        func_020339bc(&b1, p, 0, 0);
        s32 k = b1.unk_34;
        Unk_020358d4_Src v(p->x, p->y, p->z + 0x2000);
        Unk_020358d4_Buf b2;
        func_020339bc(&b2, &v, 0, 0);
        s32 m = b2.unk_30;
        if (k == 0x13 || k == 0x16 || m == 1) {
            flag = 1;
        }
        func_02033988(&b2);
        func_02033988(&b1);
    }
    if (st == 0) {
        if (flag != 0) {
            e->func_02035ca4(0x28, 0x3c, 1);
            e->unk_0c = 0x10;
        }
    } else if (st == 0x10) {
        if (flag == 0) {
            e->func_02035ca4(0x7f, 0x3c, 1);
            e->unk_0c = 0;
        }
    }
}

void Unk_02035758::func_02035974(Unk_02035ca4 *e) {
    s32 st = e->unk_0c;
    if (st == 0xd) {
        e->func_02035ca4(0x28, 0xf, 1);
        e->unk_0c = 0xe;
    } else if (st != 0xe) {
        if (st == 0xf) {
            e->func_02035ca4(0x7f, 0xf, 1);
            e->unk_0c = 0;
        }
    }
}

void Unk_02035758::func_020359b0(Unk_02035ca4 *e) {
    s32 st = e->unk_0c;
    if (st == 0xa) {
        e->func_02035ca4(0x28, 0xf, 1);
        e->unk_0c = 0xb;
    } else if (st != 0xb) {
        if (st == 0xc) {
            e->func_02035ca4(0x7f, 0xf, 1);
            e->unk_0c = 0;
        }
    }
}

void Unk_02035758::func_020359ec(Unk_02035ca4 *e) {
    s32 st = e->unk_0c;
    if (st == 7) {
        e->func_02035ca4(0x28, 5, 1);
        e->unk_0c = 8;
        unk_84 = 0;
        func_02003b8c(0);
    } else if (st != 8) {
        if (st == 9) {
            if (unk_84 > 0) {
                unk_84 = unk_84 - 1;
            }
            if (unk_84 <= 0) {
                e->func_02035ca4(0x7f, 5, 1);
                e->unk_0c = 0;
                func_02003b7c();
            }
        }
    }
}

void Unk_02035758::func_02035a5c(Unk_02035ca4 *e) {
    s32 st = e->unk_0c;
    if (st == 2) {
        e->func_02035ca4(0x28, 5, 1);
        e->unk_0c = 5;
    } else if (st == 3) {
        e->func_02035ca4(0x7f, 5, 1);
        e->unk_0c = 5;
    } else if (st == 4) {
        e->func_02035ca4(0, 5, 1);
        e->unk_0c = 5;
    } else if (st != 5) {
        if (st == 6) {
            e->func_02035ca4(0x7f, 5, 1);
            e->unk_0c = 0;
        }
    }
}

void Unk_02035758::func_02035ac4(Unk_02035ca4 *e) {}

typedef void (Unk_02035758::*Unk_02035758_Fn)(Unk_02035ca4 *);

void Unk_02035758::func_02035ac8() {
    static Unk_02035758_Fn tbl[8] = {
        &Unk_02035758::func_02035ac4, &Unk_02035758::func_02035a5c, &Unk_02035758::func_020359ec,
        &Unk_02035758::func_020359b0, &Unk_02035758::func_02035974, &Unk_02035758::func_020358d4,
        &Unk_02035758::func_02035870, &Unk_02035758::func_0203581c,
    };
    for (s32 i = 0; i < 8; i++) {
        (this->*tbl[i])(&unk_04[i]);
    }
}

void Unk_02035758::func_02035b94() { unk_04[4].unk_0c = 0xf; }
void Unk_02035758::func_02035b9c() { unk_04[4].unk_0c = 0xd; }
void Unk_02035758::func_02035ba4() { unk_04[3].unk_0c = 0xc; }
void Unk_02035758::func_02035bac() { unk_04[3].unk_0c = 0xa; }
void Unk_02035758::func_02035bb4() { unk_04[1].unk_0c = 6; }
void Unk_02035758::func_02035bbc(s32 i) { unk_04[1].unk_0c = data_020c8aec[i]; }
void Unk_02035758::func_02035bcc() { unk_04[2].unk_0c = 9; }
void Unk_02035758::func_02035bd4() { unk_04[2].unk_0c = 7; }

void Unk_02035758::func_02035bdc() {
    if ((u32)(unk_04[2].unk_0c - 8) <= 1) {
        func_02003b7c();
    }
    for (s32 i = 0; i < 8; i++) {
        unk_04[i].func_02035cac();
    }
    unk_84 = 0;
}

void Unk_02035758::func_02035c0c() {
    func_02035ac8();
    func_020357f4();
    func_02035780();
    func_0203576c();
    func_02035758();
}

void Unk_02035758::func_02035c34() {}

void Unk_02035758::func_02035c38() {
    for (s32 i = 0; i < 8; i++) {
        unk_04[i].func_02035cac();
    }
    unk_84 = 0;
}

Unk_02035758::~Unk_02035758() {}

Unk_02035758::Unk_02035758(Unk_02035780_Owner *owner) : unk_00(owner) {}

void Unk_02035ca4::func_02035ca4(s32 a, s32 b, u8 c) {
    unk_04 = a;
    unk_08 = b;
    unk_00 = c;
}

void Unk_02035ca4::func_02035cac() {
    unk_00 = 0;
    unk_01 = 0;
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
}

Unk_02035ca4::~Unk_02035ca4() {}

Unk_02035ca4::Unk_02035ca4() {
    func_02035cac();
}

void Unk_02035cd0::func_02035cd0() {
    BOOL a;
    void *p = func_0209750c();
    if (p) {
        if (func_02098044(p, 0x23) != 0 || func_02098044(p, 1) != 0) {
            a = TRUE;
        } else {
            a = FALSE;
        }
    } else {
        a = FALSE;
    }
    s32 t = func_020b50e8();
    BOOL b = t == 0x1f ? TRUE : FALSE;
    BOOL c = TRUE;
    if ((u8)(t + 0xe6) > 4 && b == 0) {
        c = FALSE;
    }
    if (a == 0 && c != 0) {
        void *pl = func_02035d94();
        if (unk_0c == 0) {
            if (func_02036ab8(pl, 0x16, 0x31, 0x32, 0x16, 0x32, 0) != 0) {
                func_02034dd0(0x10, 0xc8, 0);
                unk_0c = 1;
            }
        }
        if (unk_0d == 0) {
            if (func_02036ab8(pl, 0x16, 0x32, 0, 0, 0, 0) != 0 || unk_0e != 0) {
                func_02034e10(0xf, 0x51, 0x7f, 0);
                unk_0d = 1;
            }
        }
    }
}

void Unk_02035cd0::func_02035da8() {
    if (unk_0c != 0) {
        func_02034d70(0x10);
        unk_0c = 0;
    }
    if (unk_0d != 0) {
        func_02034d84(0x51);
        unk_0d = 0;
    }
    unk_0e = 0;
}

void Unk_02035dd8::func_02035dd8() {
    s32 t = func_020b50e8();
    if (unk_08 != t) {
        if (unk_0a != func_02035ea0(t)) {
            func_02035e0c();
            func_02035e2c(t);
        }
        unk_08 = t;
    }
}

void Unk_02035dd8::func_02035e0c() {
    if (unk_0a != 0xffff) {
        func_02034d84(unk_0a);
        unk_0a = 0xffff;
    }
}
