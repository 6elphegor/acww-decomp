#include "types.h"

// ---- external helpers (outside range) ----
class Unk_020e2a30 {
public:
    Unk_020e2a30();
    virtual ~Unk_020e2a30();
    virtual void vfunc_08();
    /* 0x04 */ char unk_04[0x1a];
    /* 0x1e */ u8 unk_1e;
};

class Unk_020e2a78 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    void func_020a7bd8(Unk_020e2a78 *p);
    void func_020a7c04(u8 *p);
    void func_020a7c3c();
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
};

extern "C" {
s32 func_020679c0(void *p, s32 a);
s32 func_0206684c(void *p);
s32 func_02067150(void *p);
s32 func_02067170(void *p);
s32 func_02067188(void *p);
s32 func_020671ec(void *p);
s32 func_02067214(void *p);
s32 func_02067238(void *p);
s32 func_02068460(void *p);
s32 func_02068454(void *p, s32 a);
s32 func_02068418(void *p);
s32 func_02066bf4(void *p);
s32 func_0206b518(void *p);
s32 func_02068000(void *p);
s32 func_02035bcc(void *p);
s32 func_02035bd4(void *p);
void func_0200402c(s32 a);
s32 func_020673b0(void *p);
s32 func_0206b128(void *p);
s32 func_020681c4(void *p, s32 a);
s32 func_020a84f0(void *p);
s32 func_0206b458(void *p);
s32 func_02068068(void *p);
s32 func_02066b74(void *p);
s32 func_02067708(void *p);
s32 func_020a8d10(void *p);
s32 func_020a8d2c(void *p);
s32 func_0206839c(void *p);
s32 func_0206840c(void *p);
s32 func_0206837c(void *p);
s32 func_020673f0(void *p);
s32 func_02066ce0(void *p);
s32 func_02068400(void *p);
s32 func_0206834c(void *p);
s32 func_020683f4(void *p);
s32 func_0206831c(void *p);
s32 func_02068018(void *p);
s32 func_0206749c(void *p);
s32 func_020a7220(void *p);
s32 func_02068558(void *p, s32 a, u32 b, u32 c, s32 d);
s32 func_02068064(void *p, s32 a);
s32 func_020684e4(void *p);
s32 func_02068490(void *p);
s32 func_02068478(void *p);
s32 func_02068524(void *p);
s32 func_02066c14(void *p);
s32 func_0206b548(void *p);
s32 func_02038fd4(u32 a);
s32 func_020aa4fc(void *p);
s32 func_020aa4f0(void *p);
s32 func_02067a84(void *p, s32 a, s32 b);
s32 func_02067a60(void *p);
s32 func_02066a14(void *p);
s32 func_02066b38(void *p);
s32 func_020668a0(void *p);
s32 func_02066a50(void *p);
s32 func_02067254(void *p);
extern u8 data_021edb60;
extern u8 data_021edb5c;
extern s16 data_020ddc10[];
extern s16 data_020ddc04[];
extern u8 *data_021c1b3c;
struct Unk_020cbb18_Obj { u8 pad[0x64]; u32 unk_64; };
extern Unk_020cbb18_Obj *data_020cbb18;
}

// ---- classes ----
class Unk_020ddc34 : public Unk_020e2a78 {
public:
    Unk_020ddc34();
    virtual ~Unk_020ddc34();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
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
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual s32 vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();

    void func_02065f50(u32 v);
    void func_02065f70(Unk_020e2a78 *p, u32 v);
    void func_02065f90(u8 *p, u32 v);
    u32 func_02065f04();
    u8 func_02065f08();
    Unk_020ddc34 *func_02065f10();

    /* 0x20 */ Unk_020ddc34 unk_20;
    /* 0x2c */ u32 unk_2c;
    u8 pad_30[0xc];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 unk_40;
};

class Unk_020660f8 {
public:
    void func_020660f8();
    void func_0206620c();
    void func_02066210();
    void func_0206621c();
    void func_02066290();
    void func_02066310();
    void func_020663ec();
    void func_02066400();
    void func_0206655c();
    void func_02066568();
    void func_020665c8();
    void func_0206672c();
    void func_02066730();
    void func_0206673c();
    void func_020667e4();
    void func_02066830();

    /* 0x0000 */ u32 unk_00;
    /* 0x0004 */ s32 unk_04;
    /* 0x0008 */ s32 unk_08;
    /* 0x000c */ s32 unk_0c;
    u8 pad_10[4];
    /* 0x0014 */ s32 unk_14;
    /* 0x0018 */ u8 unk_18;
    u8 pad_19[3];
    /* 0x001c */ u8 unk_1c[0x9c - 0x1c];
    /* 0x009c */ s32 unk_9c;
    u8 pad_a0[0xb4 - 0xa0];
    /* 0x00b4 */ u8 unk_b4[0x314 - 0xb4];
    /* 0x0314 */ u8 unk_314[0x58c - 0x314];
    /* 0x058c */ u8 unk_58c[0x12c0 - 0x58c];
    /* 0x12c0 */ u8 unk_12c0[0x12f0 - 0x12c0];
    /* 0x12f0 */ s32 unk_12f0;
    u8 pad_12f4[0x1398 - 0x12f4];
    /* 0x1398 */ u8 unk_1398;
    u8 pad_1399[0x13a4 - 0x1399];
    /* 0x13a4 */ u8 unk_13a4[0x13b0 - 0x13a4];
    /* 0x13b0 */ Unk_020ddcf0 *unk_13b0;
    /* 0x13b4 */ u8 unk_13b4[0x16dc - 0x13b4];
    /* 0x16dc */ u8 unk_16dc[0x19f7 - 0x16dc];
    /* 0x19f7 */ u8 unk_19f7;
    u8 pad_19f8[0x1a12 - 0x19f8];
    /* 0x1a12 */ u8 unk_1a12;
    /* 0x1a13 */ u8 unk_1a13;
    u8 pad_1a14[2];
    /* 0x1a16 */ u8 unk_1a16;
    u8 pad_1a17;
    /* 0x1a18 */ u8 unk_1a18;
    /* 0x1a19 */ u8 unk_1a19;
    /* 0x1a1a */ u8 unk_1a1a;
};

struct Unk_020660f8_Pad { s32 v[2]; Unk_020660f8_Pad() {} ~Unk_020660f8_Pad() {} };
typedef void (Unk_020660f8::*Unk_020660f8_Fn)();

// ---- Unk_020ddcf0 ----
void Unk_020ddcf0::func_02065f50(u32 v) {
    unk_20.func_020a7c3c();
    unk_2c = v;
    unk_40 = 1;
}

void Unk_020ddcf0::func_02065f70(Unk_020e2a78 *p, u32 v) {
    unk_20.func_020a7bd8(p);
    unk_2c = v;
    unk_40 = 0;
}

void Unk_020ddcf0::func_02065f90(u8 *p, u32 v) {
    unk_20.func_020a7c04(p);
    unk_2c = v;
    unk_40 = 0;
}

void Unk_020ddcf0::vfunc_08() {
    Unk_020e2a30::vfunc_08();
    unk_20.func_020a7c3c();
    unk_3c = 0;
    unk_40 = 0;
}

Unk_020ddcf0::~Unk_020ddcf0() {}

Unk_020ddcf0::Unk_020ddcf0() {
    unk_3c = 0;
    unk_40 = 0;
}

// ---- Unk_020ddc34 ----
u8 *Unk_020ddc34::vfunc_0c() { return (u8 *)this + 0x12; }
u32 Unk_020ddc34::vfunc_08() { return 9; }
Unk_020ddc34::~Unk_020ddc34() {}
Unk_020ddc34::Unk_020ddc34() { func_020a7c3c(); }

// ---- state class ----
void Unk_020660f8::func_020660f8() {
    s32 st = unk_12f0;
    BOOL a = st == 2 ? TRUE : FALSE;
    BOOL b = st == 4 ? TRUE : FALSE;
    BOOL c = st == 5 ? TRUE : FALSE;
    s32 r7 = 6;
    s32 r6 = r7;
    s32 flag = 0;
    s32 act = 0;
    Unk_020660f8_Pad pad;
    if (unk_18 != 0) {
        unk_18 = 0;
        func_020679c0(this, 0);
    } else if (a || b || c) {
        r7 = 1;
        r6 = 3;
        if (c) act = r7;
        else if (b) act = 2;
        else act = r6;
    } else {
        u32 x = data_021edb60;
        u32 y = unk_19f7;
        if (y == data_021edb5c) {
            r7 = 0;
            r6 = 4;
            act = 6;
        } else if (unk_14 != 4) {
            r7 = 0;
            r6 = 4;
            act = 5;
        } else if (y != x) {
            flag = 1;
            act = 4;
        }
    }
    if (flag != 0) {
        func_0206684c(this);
        r7 = 1;
        r6 = 3;
    }
    if (r7 != 6) unk_12f0 = r7;
    if (r6 != 6) {
        unk_08 = r6;
        if (act == 1) func_02067238(this);
        else if (act == 2) func_02067214(this);
        else if (act == 3) func_020671ec(this);
        else if (act == 4) func_02067188(this);
        else if (act == 5) func_02067170(this);
        else if (act == 6) func_02067150(this);
    }
}

void Unk_020660f8::func_0206620c() {}

void Unk_020660f8::func_02066210() { func_02068460(unk_1c); }

void Unk_020660f8::func_0206621c() {
    BOOL done = FALSE;
    if (unk_0c > 0) unk_0c = unk_0c - 1;
    else done = TRUE;
    unk_9c = data_020ddc10[unk_0c];
    func_02068454(unk_1c, unk_9c);
    if (done) {
        func_02066bf4(this);
        func_0206b518(unk_58c);
        if (unk_14 != 4) {
            unk_08 = 5;
        } else {
            unk_1a18 = 0;
            unk_1a1a = 0;
            unk_08 = 0;
        }
    }
}

void Unk_020660f8::func_02066290() {
    func_02068418(unk_1c);
    unk_0c = 4;
    unk_9c = data_020ddc10[unk_0c];
    if (unk_1a18 == 0) {
        func_02068000(unk_16dc);
        if (unk_14 != 1 && unk_14 != 2 && unk_14 != 3) func_02035bcc(data_021c1b3c + 0x1c4);
    }
    if (unk_1a1a == 0) func_0200402c(10);
    unk_13b0->vfunc_70();
}

void Unk_020660f8::func_02066310() {
    if (func_020673b0(this) != 0) func_0206b128(unk_12c0);
    func_020681c4(unk_16dc, 0);
    func_020a84f0(unk_13a4);
    func_0206b458(unk_58c);
    if (unk_1a18 == 0) func_02068068(unk_16dc);
    s32 st = unk_12f0;
    BOOL b3 = st == 3 ? TRUE : FALSE;
    BOOL b2 = st == 2 ? TRUE : FALSE;
    BOOL b4 = st == 4 ? TRUE : FALSE;
    BOOL b5 = st == 5 ? TRUE : FALSE;
    BOOL b0 = st == 0 ? TRUE : FALSE;
    BOOL z = unk_0c == 0 ? TRUE : FALSE;
    BOOL go = TRUE;
    if (!z && !b2 && !b4 && !b5 && !b0) go = FALSE;
    if (b3) unk_0c = 0;
    if (go) {
        if (z) func_02066b74(this);
        unk_08 = 2;
        func_02067708(this);
    }
}

void Unk_020660f8::func_020663ec() {
    func_02068418(unk_1c);
    unk_0c = 1;
}

void Unk_020660f8::func_02066400() {
    func_020a84f0(unk_13a4);
    s32 st = unk_12f0;
    BOOL a = st == 2 ? TRUE : FALSE;
    BOOL b = st == 3 ? TRUE : FALSE;
    BOOL c = st == 4 ? TRUE : FALSE;
    BOOL d = st == 5 ? TRUE : FALSE;
    if (func_020a8d10(unk_b4) != 0) func_020667e4();
    if (a || b || c) {
        if (unk_1a13 == 0 && func_020a8d2c(unk_b4) != 0) {
            if (unk_1a12 != 0) {
                func_020660f8();
            } else if (func_0206839c(unk_1c) != 0) {
                func_0206840c(unk_1c);
            } else if (func_0206837c(unk_1c) != 0) {
                if (func_020673f0(this) != 0 || func_02066ce0(this) != 0) {
                    func_02068400(unk_1c);
                    if (unk_1a1a == 0) func_0200402c(0x10);
                    if (unk_18 != 0 || unk_1398 != 0) func_0200402c(0x13);
                }
            } else if (func_0206834c(unk_1c) != 0) {
                func_020683f4(unk_1c);
            } else if (func_0206831c(unk_1c) != 0) {
                func_020660f8();
            }
        } else {
            if (func_0206839c(unk_1c) == 0) func_02068418(unk_1c);
        }
    } else if (d) {
        if (func_020a8d2c(unk_b4) != 0) func_020660f8();
    }
}

void Unk_020660f8::func_0206655c() { func_02068418(unk_1c); }

void Unk_020660f8::func_02066568() {
    BOOL done = FALSE;
    if (unk_0c > 0) unk_0c = unk_0c - 1;
    else done = TRUE;
    unk_9c = data_020ddc04[unk_0c];
    func_02068454(unk_1c, unk_9c);
    if (done) {
        if (unk_1a18 == 0) func_02068018(unk_16dc);
        unk_08 = 3;
    }
}

void Unk_020660f8::func_020665c8() {
    func_0206749c(this);
    BOOL c = unk_14 != 4 ? TRUE : FALSE;
    if (c) func_0206684c(this);
    else func_02066830();
    s32 r6 = func_020a7220(unk_13b4);
    Unk_020ddcf0 *o = unk_13b0;
    u8 *p = o->func_02065f10()->vfunc_0c();
    u32 v8 = unk_13b0->func_02065f04();
    BOOL r7 = unk_13b0->vfunc_68() == 0 ? TRUE : FALSE;
    u32 r2 = unk_13b0->func_02065f08();
    if (r2 == 0 && r6 == 0 && *(s8 *)p == 0) r6 = 5;
    func_02068558(unk_1c, r6, r2, v8, r7);
    func_02068064(unk_16dc, r6);
    func_020684e4(unk_1c);
    func_02068490(unk_1c);
    func_02068478(unk_1c);
    func_02068524(unk_1c);
    unk_0c = 5;
    unk_9c = data_020ddc04[unk_0c];
    func_02068454(unk_1c, unk_9c);
    func_02068418(unk_1c);
    func_02066c14(this);
    func_0206b548(unk_58c);
    if (data_020cbb18) func_02038fd4(data_020cbb18->unk_64);
    if (unk_1a19 == 0) func_0200402c(9);
    if (unk_1a18 == 0) {
        if (unk_14 != 1 && unk_14 != 2 && unk_14 != 3) func_02035bd4(data_021c1b3c + 0x1c4);
    }
    if (c) unk_14 = 4;
}

void Unk_020660f8::func_0206672c() {}

void Unk_020660f8::func_02066730() { func_02068460(unk_1c); }

void Unk_020660f8::func_0206673c() {
    static Unk_020660f8_Fn tbl[6] = {
        &Unk_020660f8::func_02066730, &Unk_020660f8::func_020665c8, &Unk_020660f8::func_0206655c,
        &Unk_020660f8::func_020663ec, &Unk_020660f8::func_02066290, &Unk_020660f8::func_02066210,
    };
    if (unk_08 != 6) {
        unk_04 = unk_08;
        (this->*tbl[unk_08])();
        unk_08 = 6;
    }
}

void Unk_020660f8::func_020667e4() {
    s32 a = func_020aa4fc(unk_314);
    s32 b = func_020aa4f0(unk_314);
    func_02067a84(this, a, b);
    func_02067a60(this);
    unk_1a16 = 1;
    func_02066a14(this);
    func_02066b38(this);
}

void Unk_020660f8::func_02066830() {
    func_020668a0(this);
    func_02066a50(this);
    func_02067254(this);
}
