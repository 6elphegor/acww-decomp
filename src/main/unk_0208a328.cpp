#include "types.h"
#include "text/Unk_02050288.h"

extern "C" {
void func_02011900(s32 a);
void func_0201192c(s32 a, s32 b);
s32 func_0208c094(void *p);
void func_0208cd88(void *p);
s32 func_0208cd78(void *p);
void func_0208cd90(void *p);
void func_0208cdb8(void *p);
void func_0208c1b4(void *p);
void func_0208b048(void *p);
void func_0208cdc8(void *p);
void func_0208c1c4(void *p);
void func_0208b060(void *p);
void func_0208b080(void *p);
void func_0208c1d4(void *p);
void func_0208cdd8(void *p);
void func_0208cde0(void *p);
void func_0208c1dc(void *p);
void func_0208b098(void *p);
s32 func_0206edb0();
s32 func_02038f60();
s32 func_0206edbc();
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_0209750c();
s32 func_02098750();
s32 func_02097d1c(s32 a, s32 b);
s32 func_0206e900();
void func_02003edc();
void func_02003eec();
void func_0200402c(s32 a);
void func_020b3270(void *p, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020e7870(void *p, s32 a, s32 b, s32 c, s32 d);
void func_020e759c(void *p, s32 a, s32 b);
Unk_02050288 *func_020a8054(u32 a, s32 b, s32 c);
void func_020a7fd8(Unk_02050288 *obj);
void func_02089140(void *p);
s32 func_020891d8(void *p);
void func_02089268(void *p, void *q);
void func_02089264(void *p, s32 a);
void func_020891bc(void *p);
s32 func_02089248(void *p);
s32 func_02089f68(void *p);
s32 func_02089f64(void *p);
s32 func_02089228(void *p, s32 a);
s32 func_02089210(void *p, s32 a);
void func_02087e70(void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
extern void *_ZdlPv(void *);
}

extern Unk_02050288_Font data_021c48fc;
extern u8 data_020d479c[];
extern u8 data_020d4794[];

struct Unk_0208a328_Pa { u8 unk_00; u8 unk_01; u8 pad[0x12]; u8 unk_14; u8 unk_15; };
extern Unk_0208a328_Pa data_021cea70;
extern u8 data_021cea14[];
extern u8 data_021ce840[];

class Unk_02089fa8 {
public:
    Unk_02089fa8();
    virtual ~Unk_02089fa8();
    virtual void vfunc_08() = 0;
    virtual void vfunc_0c() = 0;
    virtual void vfunc_10();
    u32 unk_04;
    u32 unk_08;
};

class Unk_02089270 { public: Unk_02089270(); ~Unk_02089270(); u32 pad[5]; };
class Unk_020b4154 : public StrBuf { public: Unk_020b4154(); ~Unk_020b4154(); u32 pad[10]; };

class Unk_020e0ef4 : public Unk_02089fa8 {
public:
    Unk_020e0ef4();
    virtual ~Unk_020e0ef4();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    typedef void (Unk_020e0ef4::*Fn)();

    void func_0208a6c0();
    void func_0208a6d0();
    void func_0208a764();
    void func_0208a7c0(BOOL v);
    void func_0208a7f4();
    BOOL func_0208a814();
    void func_0208a878();
    void func_0208a89c();
    void func_0208a8b4();
    void func_0208a920();
    void func_0208a948();
    void func_0208a978();
    void func_0208a9a0();
    void func_0208a9a8();
    void func_0208a9cc();
    void func_0208aa08();
    void func_0208aa20();
    void func_0208aa28();
    void func_0208aa30();
    BOOL func_0208aa38();
    void func_0208aa48();
    void func_0208aa50();
    void func_0208aa58();
    void func_0208aa70();
    void func_0208aa88();
    void func_0208aaa8();
    void func_0208aacc();
    void func_0208ab4c();

    /* 0x0c */ Unk_02089270 unk_0c;
    /* 0x20 */ s32 unk_20;
    /* 0x24 */ s32 unk_24;
    /* 0x28 */ s32 unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ s32 unk_34;
    /* 0x38 */ Unk_02050288 *unk_38;
    /* 0x3c */ Unk_020b4154 unk_3c;
    /* 0x68 */ s32 unk_68;
    /* 0x6c */ u8 unk_6c;
    /* 0x6d */ u8 unk_6d;
    /* 0x6e */ u8 unk_6e;
};

class Unk_0208cfbc { public: Unk_0208cfbc(); ~Unk_0208cfbc(); u32 pad[0x32]; };
class Unk_0208c3b0 { public: Unk_0208c3b0(); ~Unk_0208c3b0(); u32 pad[0x35]; };
class Unk_0208b254 { public: Unk_0208b254(); ~Unk_0208b254(); u32 pad[0x40]; };

class Unk_020e0ecc {
public:
    Unk_020e0ecc();
    virtual ~Unk_020e0ecc();

    typedef void (Unk_020e0ecc::*Fn)();

    void func_0208a328();
    void func_0208a344();
    void func_0208a3bc();
    void func_0208a3c4();
    void func_0208a3ec();
    void func_0208a3f4();
    void func_0208a424();
    void func_0208a4f0();
    void func_0208a524();
    s32 func_0208a218();
    void func_0208a2ac();
    void func_0208a254();
    void func_0208a230();
    void func_0208a1c0();
    void func_0208a0ac();
    void func_0208a108();

    /* 0x004 */ s32 unk_04;
    /* 0x008 */ Unk_0208cfbc unk_08;
    /* 0x0d0 */ Unk_0208c3b0 unk_d0;
    /* 0x1a4 */ Unk_0208b254 unk_1a4;
    /* 0x2a4 */ Unk_020e0ef4 unk_2a4;
    /* 0x314 */ u8 unk_314;
    /* 0x315 */ u8 unk_315;
    /* 0x316 */ u8 unk_316;
};

extern Unk_020e0ecc data_021ce770;

// ---- Unk_020e0ecc ----

void Unk_020e0ecc::func_0208a328() {
    unk_04 = 2;
    func_02011900(1);
    func_0201192c(1, 1);
}

void Unk_020e0ecc::func_0208a344() {
    BOOL a;
    BOOL b;
    if (unk_314 != 0 || unk_315 != 0) {
        a = TRUE;
    } else {
        a = FALSE;
    }
    b = func_0208c094(&unk_d0) == 0 ? TRUE : FALSE;
    if (a || b) {
        func_0208cd88(&unk_08);
        if (func_0208cd78(&unk_08) != 0) {
            if (a) {
                func_0208a218();
            } else {
                func_0208a328();
            }
        }
    } else {
        func_0208cd90(&unk_08);
    }
}

void Unk_020e0ecc::func_0208a3bc() {
    unk_04 = 1;
}

void Unk_020e0ecc::func_0208a3c4() {
    if (unk_314 != 0 || unk_315 != 0) {
        func_0208a218();
    }
}

void Unk_020e0ecc::func_0208a3ec() {
    unk_04 = 0;
}

void Unk_020e0ecc::func_0208a3f4() {
    func_0208cdb8(&unk_08);
    func_0208c1b4(&unk_d0);
    func_0208b048(&unk_1a4);
    unk_2a4.func_0208aa58();
}

void Unk_020e0ecc::func_0208a424() {
    static Fn tbl[6] = {
        &Unk_020e0ecc::func_0208a3c4, &Unk_020e0ecc::func_0208a344, &Unk_020e0ecc::func_0208a2ac,
        &Unk_020e0ecc::func_0208a254, &Unk_020e0ecc::func_0208a230, &Unk_020e0ecc::func_0208a1c0,
    };
    (this->*tbl[unk_04])();
    func_0208cdc8(&unk_08);
    func_0208c1c4(&unk_d0);
    func_0208b060(&unk_1a4);
    unk_2a4.func_0208aa70();
    func_0208a0ac();
}

void Unk_020e0ecc::func_0208a4f0() {
    unk_2a4.func_0208aa88();
    func_0208b080(&unk_1a4);
    func_0208c1d4(&unk_d0);
    func_0208cdd8(&unk_08);
}

extern "C" void func_0208a58c();
extern "C" void func_0208a580();

void Unk_020e0ecc::func_0208a524() {
    func_0208a58c();
    func_0208a580();
    func_0208a108();
    func_0208cde0(&unk_08);
    func_0208c1dc(&unk_d0);
    func_0208b098(&unk_1a4);
    unk_2a4.func_0208aaa8();
    unk_316 = 0;
}

extern "C" void *func_0208a570() { return data_021cea14; }
extern "C" void *func_0208a578() { return data_021ce840; }
extern "C" void func_0208a580() { data_021cea70.unk_15 = 0; }
extern "C" void func_0208a58c() { data_021cea70.unk_14 = 0; }
extern "C" void func_0208a598() { data_021cea70.unk_14 = 1; }
extern "C" void func_0208a5a4() { data_021ce770.func_0208a3f4(); }
extern "C" void func_0208a5b4() { data_021ce770.func_0208a424(); }
extern "C" void func_0208a5c4() { data_021ce770.func_0208a4f0(); }
extern "C" void func_0208a5d4() { data_021ce770.func_0208a524(); }

Unk_020e0ecc::~Unk_020e0ecc() {}

Unk_020e0ecc::Unk_020e0ecc() : unk_04(0) {
    unk_314 = 0;
    unk_315 = 0;
    unk_316 = 0;
}

// ---- Unk_020e0ef4 ----

void Unk_020e0ef4::func_0208a6c0() {
    unk_28 = 0;
    unk_2c = 0;
    unk_34 = -1;
    unk_30 = 0;
}

void Unk_020e0ef4::func_0208a6d0() {
    if (func_0206edb0() != 0) {
        s32 r;
        if (func_02038f60() != 0) {
            r = 0x28000;
        } else {
            r = 0;
        }
        unk_30 = unk_30 + 0xa00;
        s32 t = unk_30;
        if (t < 0x2300) {
            t = 0x2300;
        } else if (t > 0x5000) {
            t = 0x5000;
        }
        unk_30 = t;
        if (r != unk_2c) {
            if (unk_34 < 0 || (unk_34 = unk_34 + 1, unk_34 > 5)) {
                unk_2c = r;
                unk_34 = 0;
            }
        } else {
            unk_34 = 0;
        }
        func_020e7870(&unk_28, unk_2c, 0x600, unk_30, 0x2300);
    } else {
        func_0208a6c0();
    }
}

void Unk_020e0ef4::func_0208a764() {
    s32 v = func_0206edbc();
    s32 a = func_01ffcb0c(0, v);
    s32 b = func_01ffcb0c(0xc0000, 0x1000 - v);
    unk_24 = (a + b) >> 12;
}

extern "C" s32 func_0208a798() {
    s32 c = func_0209750c();
    s32 r = 0;
    if (c != 0) {
        s32 a = func_02097d1c(func_02098750(), 1);
        r = a + func_0206e900();
    }
    return r;
}

void Unk_020e0ef4::func_0208a7c0(BOOL v) {
    if (unk_6d != 0) {
        if (v == 0) {
            func_02003edc();
            func_0200402c(0x2e);
        }
    } else if (v != 0) {
        func_02003eec();
    }
    unk_6d = v;
}

void Unk_020e0ef4::func_0208a7f4() {
    func_020b3270(&unk_3c, unk_68, 7, 1, 0, 1);
}

namespace Unk_0208a814_NS { extern "C" s32 func_0208a798(...); }
BOOL Unk_020e0ef4::func_0208a814() {
    BOOL r = FALSE;
    if (unk_6e == 0) {
        s32 v = Unk_0208a814_NS::func_0208a798(this);
        if (unk_68 != v) {
            s32 d = v - unk_68;
            if (d < 0) {
                d = -d;
            }
            s32 t = (d / 6 + 0x32) / 10;
            func_020e759c(&unk_68, v, t * 10 + 7);
            func_0208a7f4();
            if (unk_38 != NULL) {
                unk_38->func_02050c20();
                unk_38->func_02050c90();
            }
            r = TRUE;
        }
    }
    return r;
}

void Unk_020e0ef4::func_0208a878() {
    unk_68 = func_0208a798();
    func_0208a7f4();
    unk_6d = 0;
    unk_6e = 0;
}

void Unk_020e0ef4::func_0208a89c() {
    if (unk_38 != NULL) {
        func_020a7fd8(unk_38);
        unk_38 = NULL;
    }
}

void Unk_020e0ef4::func_0208a8b4() {
    if (unk_38 == NULL) {
        unk_38 = func_020a8054(0x80, 8, 1);
        if (unk_38 != NULL) {
            unk_38->unk_2c = 4;
            unk_38->unk_50 = 2;
            unk_38->unk_55 = 1;
            unk_38->unk_39 = 0;
            unk_38->unk_38 = 0xc;
            Unk_02050288 *o = unk_38;
            StrBuf *s = &unk_3c;
            o->unk_10 = (u32)s->data();
            unk_38->unk_28 = &data_021c48fc;
            unk_38->func_02050c20();
            unk_38->func_02050c90();
        }
    }
}

void Unk_020e0ef4::func_0208a920() {
    func_02089140(&unk_0c);
    if (func_020891d8(&unk_0c) != 0) {
        func_0208a89c();
        func_0208aa20();
    }
}

void Unk_020e0ef4::func_0208a948() {
    unk_20 = 3;
    func_02089268(&unk_0c, data_020d479c);
    func_02089264(&unk_0c, 1);
    func_020891bc(&unk_0c);
}

void Unk_020e0ef4::func_0208a978() {
    BOOL r = func_0208a814();
    if (unk_6c == 0) {
        func_0208a948();
        r = FALSE;
    }
    func_0208a7c0(r);
}

void Unk_020e0ef4::func_0208a9a0() {
    unk_20 = 2;
}

void Unk_020e0ef4::func_0208a9a8() {
    func_02089140(&unk_0c);
    if (func_020891d8(&unk_0c) != 0) {
        func_0208a9a0();
    }
}

void Unk_020e0ef4::func_0208a9cc() {
    unk_20 = 1;
    func_02089268(&unk_0c, data_020d4794);
    func_02089264(&unk_0c, 1);
    func_020891bc(&unk_0c);
    func_0208a878();
    func_0208a8b4();
}

void Unk_020e0ef4::func_0208aa08() {
    if (unk_6c != 0) {
        func_0208a9cc();
    }
}

void Unk_020e0ef4::func_0208aa20() {
    unk_20 = 0;
}

void Unk_020e0ef4::func_0208aa28() {
    unk_6e = 0;
}

void Unk_020e0ef4::func_0208aa30() {
    unk_6e = 1;
}

BOOL Unk_020e0ef4::func_0208aa38() {
    if (unk_20 == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020e0ef4::func_0208aa48() {
    unk_6c = 0;
}

void Unk_020e0ef4::func_0208aa50() {
    unk_6c = 1;
}

void Unk_020e0ef4::func_0208aa58() {
    func_0208a764();
    vfunc_08();
}

void Unk_020e0ef4::func_0208aa70() {
    vfunc_0c();
    func_0208a6d0();
}

void Unk_020e0ef4::func_0208aa88() {
    func_0208a7c0(0);
    func_020891bc(&unk_0c);
    func_0208a89c();
}

void Unk_020e0ef4::func_0208aaa8() {
    unk_6c = 0;
    func_0208a878();
    func_0208a6c0();
    func_0208aa20();
}

void Unk_020e0ef4::vfunc_0c() {
    static Fn tbl[4] = {
        &Unk_020e0ef4::func_0208aa08, &Unk_020e0ef4::func_0208a9a8,
        &Unk_020e0ef4::func_0208a978, &Unk_020e0ef4::func_0208a920,
    };
    (this->*tbl[unk_20])();
}

void Unk_020e0ef4::vfunc_08() {
    if (unk_20 != 0) {
        s32 h = func_02089248(&unk_0c);
        if (h != 0) {
            s32 a = func_02089f68(this);
            s32 x = a + func_02089228(&unk_0c, -1);
            s32 b = (unk_28 + 0x800) >> 12;
            s32 c = func_02089f64(this);
            s32 e = func_02089210(&unk_0c, -1);
            s32 y = b;
            y += unk_24 + (c + e);
            func_02087e70(0, (void *)h, x, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
        }
    }
}

Unk_020e0ef4::~Unk_020e0ef4() {
    func_0208aa88();
}

Unk_020e0ef4::Unk_020e0ef4()
    : unk_20(0), unk_24(0), unk_28(0), unk_2c(0), unk_30(0), unk_34(-1), unk_38(NULL) {
    unk_68 = 0;
    unk_6c = 0;
    unk_6d = 0;
    unk_6e = 0;
}
