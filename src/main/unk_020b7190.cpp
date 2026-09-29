#include "types.h"

struct Vec {
    s32 x, y, z;
};

struct Mat {
    s32 m[12];
};

class Unk_020e2a48 {
public:
    Unk_020e2a48();
    virtual ~Unk_020e2a48();
    u8 unk_04[0x30];
};

class Unk_020e451c {
public:
    Unk_020e451c();
    virtual ~Unk_020e451c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    s32 func_020898bc();
    void func_02089a24();
    BOOL func_02089a40();
    void func_02089a5c(s32 a);
    void func_02089ab8();
    void func_02089ac0(Unk_020e2a48 *p);
    s32 func_02089ad8(s32 a, s32 b);
    void func_020b7ae4();
    BOOL func_020b7b34();
    BOOL func_020b7b50();
    void func_020b7b6c(s32 a);
    void func_020b7b74();
    void func_020b7ba8();
    void func_020b7a24();

    u8 unk_04[0xcc];
    s32 unk_d0;
    u8 unk_d4;
    u8 unk_d5;
    u8 unk_d6;
    u8 unk_d7;
    u8 unk_d8;
};

extern "C" {
extern u8 data_020d0da8[];
extern u8 data_020d0dac[];
extern u8 data_020d0db8[];
extern s32 data_020d0dc4[];
extern s16 data_020d0dd4[];
extern u8 data_020e416c;
extern u32 data_021c3070;
extern Mat data_021f47e0;

void func_020b3558(Unk_020e2a48 *buf, u8 *str, s32 n);
void func_02062650(void *a, void *b);
void func_0206260c(void *p);
Mat *func_0203a220(void);
Vec *func_020947f0(s32 a);
void func_0203eeac(void *a, void *b);
void func_01ffb898(void *a, void *b, void *c);
u32 func_0203bc3c(u32 a);
s32 func_01ffc5a4(s32 a, s32 b);
void func_020e9888(void *a, s32 b);
s32 func_02095154(s32 a, s32 b);
u16 *func_02094440(void);
u32 func_020b50e8(void);
BOOL func_0203d64c(void);
BOOL func_0203d878(void);
BOOL func_0203d7ec(void);
void *func_02067918(s32 a);
BOOL func_0206f11c(void);
BOOL func_0206e5ec(void);
BOOL func_0206ed8c(void);
BOOL func_0206edb0(void);
s32 func_0206ede0(void);
void func_0200402c(s32 a);
void func_02038450(void);
}

class Unk_020e450c {
public:
    Unk_020e450c();
    virtual ~Unk_020e450c();

    void func_020b7190();
    void func_020b71f8();
    void func_020b720c();
    void func_020b7268();
    void func_020b7270();
    void func_020b72d0();
    void func_020b72d8();
    void func_020b7378();
    BOOL func_020b7380();
    BOOL func_020b73a0();
    void func_020b73c0();
    void func_020b73e0();
    void func_020b73f0();
    void func_020b7408(s32 a);
    void func_020b74f0();
    void func_020b7530();
    void func_020b755c();
    void func_020b756c();
    void func_020b757c();
    void func_020b7610();
    void func_020b7694();
    void func_020b76a8();
    void func_020b7740();
    void func_020b774c();

    /* 0x04 */ s32 unk_04;
    /* 0x08 */ Unk_020e451c unk_08;
    /* 0xe4 */ u16 *unk_e4;
    /* 0xe8 */ u16 unk_e8;
    /* 0xec */ s32 unk_ec;
    /* 0xf0 */ s32 unk_f0;
    /* 0xf4 */ s32 unk_f4;
    /* 0xf8 */ s32 unk_f8;
    /* 0xfc */ u8 unk_fc;
    /* 0xfd */ u8 unk_fd;
};

struct Unk_021ef548 {
    u8 unk_00[0x6c];
    s32 unk_6c;
    u32 unk_70;
};

extern "C" {
extern Unk_020e450c data_021ef4c8;
extern Unk_021ef548 data_021ef548;
}

void Unk_020e450c::func_020b7190() {
    if (unk_f8 > 0) unk_f8--;
    if (unk_08.func_020898bc() == 0) {
        func_020b7378();
    } else if (func_020b7380() == 0) {
        if (unk_08.func_020b7b34() == 0) unk_08.func_02089a24();
    } else if (unk_08.func_020b7b50() != 0) {
        func_020b7408(0);
    }
}

void Unk_020e450c::func_020b71f8() {
    unk_08.func_020b7ba8();
    unk_04 = 3;
}

void Unk_020e450c::func_020b720c() {
    if (unk_f8 > 0) unk_f8--;
    if (unk_08.func_020898bc() == 0) {
        func_020b7378();
    } else if (func_020b7380() != 0 || func_020b73a0() == 0 || unk_fd != 0) {
        unk_08.func_02089a24();
    }
}

void Unk_020e450c::func_020b7268() { unk_04 = 2; }

void Unk_020e450c::func_020b7270() {
    if (unk_08.func_020898bc() == 0) {
        func_020b7378();
    } else if (unk_e4 == 0 || (unk_e8 != 0xfff1 && unk_e8 != *unk_e4) || func_020b7380() != 0 ||
               func_020b73a0() != 0) {
        unk_08.func_02089a24();
    } else {
        func_020b757c();
    }
}

void Unk_020e450c::func_020b72d0() { unk_04 = 1; }

void Unk_020e450c::func_020b72d8() {
    if (func_020b7380()) {
        func_020b755c();
        func_020b7408(1);
        func_020b73f0();
        if (unk_08.func_02089a40()) func_020b71f8();
    } else if (func_020b73a0()) {
        func_020b756c();
        func_020b74f0();
        unk_08.func_020b7b6c(0);
        if (unk_08.func_02089a40()) func_020b7268();
    } else if (unk_e4 != 0) {
        func_020b757c();
        func_020b7530();
        unk_08.func_020b7b6c(0);
        if (unk_08.func_02089a40()) func_020b72d0();
    }
}

void Unk_020e450c::func_020b7378() { unk_04 = 0; }

BOOL Unk_020e450c::func_020b7380() {
    BOOL r = unk_ec != 0;
    if (unk_f8 == 0) r = FALSE;
    return r;
}

BOOL Unk_020e450c::func_020b73a0() {
    BOOL r = unk_f0 != 0;
    if (unk_f8 == 0) r = FALSE;
    return r;
}

void Unk_020e450c::func_020b73c0() {
    unk_f8 = data_020d0dd4[unk_ec];
    unk_fc = 1;
}

void Unk_020e450c::func_020b73e0() {
    unk_f8 = 0x3c;
    unk_fd = 1;
}

void Unk_020e450c::func_020b73f0() { unk_08.func_020b7b6c(data_020d0db8[unk_ec]); }

void Unk_020e450c::func_020b7408(s32 a) {
    u8 v;
    Unk_020e2a48 buf;
    v = data_020d0dac[unk_ec];
    BOOL is1 = unk_ec == 1;
    BOOL is2 = unk_ec == 2;
    BOOL c = TRUE;
    if (!is1 && !is2) c = FALSE;
    s32 t = unk_fc;
    unk_fc = 0;
    if (a) {
        unk_f4 = 0;
        t = 1;
    } else if (c) {
        t = 1;
    }
    if (t) {
        if (unk_f4 == 1) {
            if (is1) v = 0x93;
            else if (is2) v = 0x94;
        }
        func_020b3558(&buf, &v, 0);
        unk_08.func_02089ac0(&buf);
        if (a == 0) {
            unk_08.func_02089a5c(1);
            unk_08.func_020b7ae4();
        }
    }
    if (c) {
        unk_f4++;
        if (unk_f4 >= 2) unk_f4 = 0;
    }
}

void Unk_020e450c::func_020b74f0() {
    u8 v = data_020d0da8[unk_f0];
    Unk_020e2a48 buf;
    func_020b3558(&buf, &v, 0);
    unk_08.func_02089ac0(&buf);
}

void Unk_020e450c::func_020b7530() {
    u32 obj[10];
    func_02062650(obj, unk_e4);
    unk_08.func_02089ac0((Unk_020e2a48 *)obj);
    func_0206260c(obj);
}

void Unk_020e450c::func_020b755c() { unk_08.func_02089ad8(0x12, -0x30); }

void Unk_020e450c::func_020b756c() { unk_08.func_02089ad8(0, -0x30); }

void Unk_020e450c::func_020b757c() {
    data_021f47e0 = *func_0203a220();
    Vec *p = func_020947f0(4);
    if (p) {
        Vec v;
        v.x = p->x;
        v.y = p->y;
        v.z = p->z;
        Vec w;
        Vec x;
        v.y += 0x3c00;
        func_0203eeac(&w, &v);
        func_01ffb898(&w, &data_021f47e0, &x);
        s32 d = func_0203bc3c(data_021c3070);
        s32 q = func_01ffc5a4(0x60000, d);
        s32 r = func_01ffc5a4(-q, x.z);
        func_020e9888(&x, r);
        unk_08.func_02089ad8(x.x >> 12, -x.y >> 12);
    }
}

void Unk_020e450c::func_020b7610() {
    u16 *p = 0;
    if (func_02095154(2, 4)) p = func_02094440();
    if (p) {
        s32 t = (*p & 0xf000) >> 12;
        BOOL b = data_020e416c == 0;
        if (b) {
            if (t != 1 && t != 3 && t != 4) p = 0;
        } else {
            if (t != 1) p = 0;
        }
    }
    if (unk_e4) unk_e8 = *unk_e4;
    else unk_e8 = 0xfff1;
    unk_e4 = p;
}

void Unk_020e450c::func_020b7694() { unk_08.vfunc_08(); }

void Unk_020e450c::func_020b76a8() {
    static void (Unk_020e450c::*tbl[4])() = {&Unk_020e450c::func_020b72d8, &Unk_020e450c::func_020b7270,
                                             &Unk_020e450c::func_020b720c, &Unk_020e450c::func_020b7190};
    func_020b7610();
    (this->*tbl[unk_04])();
    unk_fd = 0;
    unk_08.vfunc_0c();
}

void Unk_020e450c::func_020b7740() { unk_08.func_020b7b74(); }

void Unk_020e450c::func_020b774c() {
    unk_04 = 0;
    unk_08.func_02089ab8();
    unk_e4 = 0;
    unk_e8 = 0xfff1;
    unk_ec = 0;
    unk_f0 = 0;
    unk_f4 = 0;
    unk_f8 = 0;
    unk_fc = 0;
    unk_fd = 0;
}

extern "C" void func_020b7798() { data_021ef4c8.func_020b7694(); }
extern "C" void func_020b77a8() { data_021ef4c8.func_020b76a8(); }
extern "C" void func_020b77b8() { data_021ef4c8.func_020b7740(); }
extern "C" void func_020b77c8() { data_021ef4c8.func_020b774c(); }

Unk_020e450c::~Unk_020e450c() {}

Unk_020e450c::Unk_020e450c() : unk_04(0) {
    unk_e4 = 0;
    unk_e8 = 0xfff1;
    unk_ec = 0;
    unk_f0 = 0;
    unk_f4 = 0;
    unk_f8 = 0;
    unk_fc = 0;
    unk_fd = 0;
}

extern "C" void func_020b7870() { func_02038450(); }

extern "C" void func_020b7878(u32 arg) {
    u32 r = func_020b50e8();
    BOOL ok = FALSE;
    if (!((u8)(r + 0xf4) <= 2 || (u8)(r + 0xd2) <= 1)) ok = TRUE;
    if (ok) {
        data_021ef548.unk_70 = arg;
        data_021ef4c8.func_020b73e0();
    }
}

extern "C" void func_020b78b8() { data_021ef548.unk_6c = 0; }

extern "C" void func_020b78c4() {
    data_021ef548.unk_6c = 10;
    data_021ef4c8.func_020b73c0();
}

extern "C" void func_020b78dc() {
    data_021ef548.unk_6c = 9;
    data_021ef4c8.func_020b73c0();
}

extern "C" void func_020b78f4(s32 i) {
    data_021ef548.unk_6c = data_020d0dc4[i];
    data_021ef4c8.func_020b73c0();
}

extern "C" void func_020b7914(s32 arg) {
    s32 v = 0;
    u32 r = func_020b50e8();
    BOOL ok = v;
    if (!((u8)(r + 0xf4) <= 2 || (u8)(r + 0xd2) <= 1)) ok = TRUE;
    if (ok) {
        BOOL a = func_0203d64c() || func_0203d878() || func_0203d7ec();
        s32 b = 0;
        if (a) {
            u32 *t = (u32 *)func_02067918(b);
            s32 c = b;
            if (t && t[1]) c = 1;
            if (func_0206f11c()) {
                if (func_0206e5ec()) b = 1;
                else v = 1;
            } else if (c) {
                v = 2;
            }
        } else {
            if (func_0206f11c() && func_0206e5ec()) b = 1;
        }
        if (b && arg < 4) v = data_020d0dc4[arg];
    }
    if (data_021ef548.unk_6c != 10) {
        data_021ef548.unk_6c = v;
        if (v) data_021ef4c8.func_020b73c0();
    }
}

extern "C" BOOL func_020b79e0() {
    BOOL a = func_0206ed8c() != 0;
    BOOL b = func_0206edb0() != 0;
    s32 v = func_0206ede0();
    if (a || (b && v < 0x1000)) return TRUE;
    return FALSE;
}

void Unk_020e451c::func_020b7a24() {
    if (unk_d5) {
        s32 r = func_020898bc();
        if (r == 0) {
            unk_d4 = 0;
            unk_d5 = 0;
            unk_d0 = 0;
        } else if (r == 2) {
            if (unk_d0 == 0) func_0200402c(0x3d);
            if (func_020b79e0()) {
                unk_d0 = 0x19;
            } else if (unk_d8) {
                unk_d0++;
                if (unk_d0 >= 0x1e) unk_d0 = 0;
            } else {
                unk_d0 = 1;
            }
        }
    } else if (unk_d4) {
        unk_d4 = 0;
        unk_d5 = 1;
        if (func_020b79e0()) unk_d0 = 0x19;
        else unk_d0 = 0;
        func_020b7ae4();
    }
}
