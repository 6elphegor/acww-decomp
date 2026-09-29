#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
extern u8 data_020cba24[];
extern u8 data_020dddbc[];
extern u8 data_020dddd4[];
extern u8 data_020dddec[];
extern u8 data_020dde08[];
extern u8 data_020dde24[];
extern u8 data_021d7350[];

void *func_020e8594(u32 size);
BOOL func_02119a28(void *self, const void *path);
s32 func_021198b4(void *self, void *dst, u32 size);
BOOL func_021199e0(void *self);

void func_020894c0(void *p, s32 v);
void func_02089328(void *p);
void func_02089494(void *p);
void func_0208ec78(void *p);
void func_0208ec7c(void *p);
void func_0208ede0(void *p);
void func_0208ee00(void *p);
BOOL func_0206774c(void);
s32 func_0207f9a4(void);
s32 func_020974f8(void);
s32 func_020978fc(void);
s32 func_020978a4(void *p);
s32 func_020b8fe8(void);
void func_0206b374(void *self, u32 a, u32 b, BOOL c);
void func_0206b338(void *self, u32 a, u32 b, BOOL c);
void func_0206b618(void *a, void *b);
void func_0206b59c(void *a, u32 b);
void func_020a7768(void *p);
void func_020a776c(void *p);
}

class Unk_02068848_Menu {
public:
    virtual ~Unk_02068848_Menu();
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
    virtual void vfunc_34(s32 a, s32 b);
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
    virtual void vfunc_64(u32 v);
    virtual s32 vfunc_68();
};

struct Unk_02068848_Entry {
    u8 unk_00[0x34];
};

struct Unk_02068848_Owner {
    u8 pad_0000[0x13b0];
    /* 0x13b0 */ Unk_02068848_Menu *unk_13b0;
    u8 pad_13b4[0x13c0 - 0x13b4];
    /* 0x13c0 */ Unk_02068848_Entry unk_13c0[11];
    /* 0x15fc */ Unk_02068848_Entry unk_15fc[4];
    u8 pad_16cc[0x1704 - 0x16cc];
    /* 0x1704 */ u32 unk_1704;
    u8 pad_1708[0x1710 - 0x1708];
    /* 0x1710 */ u32 unk_1710;
};

// Screen loader, embedded at +0x1c of the big scene object (ctor func_02068808)
class Unk_02068808 {
public:
    Unk_02068808 *func_02068808();
    Unk_02068808 *func_020687e0();
    void func_020687b8();
    void func_020687cc();
    void func_02068524();
    void func_020682b8();
    void func_020682c4();
    void func_020683bc();
    void func_020683d0();
    BOOL func_02068680(void *file);
    BOOL func_020686e4(void *file);
    BOOL func_02068748(void *file, BOOL alt);
    void func_020685c4(s32 idx);
    void func_0206860c(s32 a, BOOL b);

    /* 0x00 */ u16 *unk_00;
    /* 0x04 */ void *unk_04;
    /* 0x08 */ void *unk_08;
    /* 0x0c */ u8 unk_0c[0x44];
    /* 0x50 */ u8 unk_50[0x24];
    /* 0x74 */ u32 unk_74;
    /* 0x78 */ u32 unk_78;
    /* 0x7c */ u32 unk_7c;
};

class Unk_020a72b0 {
public:
    void func_020a72c4(u32 *a, char **b, char **c);
    u32 func_020a72b0();
    void func_020a76bc(u8 *a, u8 *b, u8 *c, u8 *d);
    void func_020a76fc(u8 *a, u8 *b, u8 *c);
    void func_020a7730(u8 *a, u8 *b);
    void func_020a7754(u8 *a);
    void func_020a7648(u8 *buf, s32 n);
    void func_020a777c();
    u8 unk_00[0x14];
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

class Unk_020ddca8 : public Unk_020e2b4c {
public:
    Unk_020ddca8(Unk_02068848_Owner *owner);
    virtual ~Unk_020ddca8();
    virtual void vfunc_14(u8 *p);

    void func_02068848();
    void func_02068874();
    void func_020688ac(u8 *p);
    void func_02068950();
    void func_020689a0();
    void func_020689d0();
    void func_020689e4();
    void func_020689f8();
    void func_02068a0c();
    void func_02068a20();
    void func_02068a3c();
    void func_02068a58();
    void func_02068a74();
    void func_02068a90();
    void func_02068aac();
    void func_02068ac8();
    void func_02068adc();
    void func_02068af0();
    void func_02068b04();
    void func_02068b18();
    void func_02068b2c();
    void func_02068b34();
    void func_02068b3c();
    void func_02068b44();
    void func_02068b4c();
    void func_02068b50();
    void func_02068b70();
    void func_02068b90();
    void func_02068bb0();
    void func_02068bd0();
    void func_02068bf0();
    void func_02068c10();
    void func_02068c30();
    void func_02068c50();
    void func_02068c70();
    void func_02068c90();
    void func_02068c94();
    void func_02068c98();
    void func_02068c9c();
    void func_02068d20();
    void func_02068d78();
    void func_02068dd0();
    void func_02068e40();

    void func_0206ac98(u8 *p);
    void func_0206acb0(void *p);
    void func_0206ad0c();
    void func_0206afa0(s32 a, const void *b);

    /* 0x24 */ Unk_02068848_Owner *unk_24;
    /* 0x28 */ u8 *unk_28;
    /* 0x2c */ s32 unk_2c;
    /* 0x30 */ s32 unk_30;
    /* 0x34 */ u32 unk_34;
    /* 0x38 */ Unk_020a72b0 unk_38;
    /* 0x4c */ u8 unk_4c[0x10];
    /* 0x5c */ u32 unk_5c;
    /* 0x60 */ u8 unk_60[0x3c];
    /* 0x9c */ u8 unk_9c[0x3c];
    /* 0xd8 */ u8 unk_d8;
    /* 0xd9 */ u8 unk_d9;
    u8 pad_da[6];
    /* 0xe0 */ u32 unk_e0;
};

#define SUB2C ((Unk_020a72b0 *)&unk_2c)
#define OWN(off) ((u8 *)unk_24 + (off))

// ---- Unk_02068808
void Unk_02068808::func_020685c4(s32 idx) {
    s32 y, x;
    for (y = 15; y <= 24; y++) {
        for (x = 1; x <= 30; x++) {
            u16 *p = (u16 *)((y << 6) + (u32)unk_00);
            u16 v = (u16)(p[x] & 0xffff0fff);
            p[x] = v | (((u32)data_020cba24[idx] << 28) >> 16);
        }
    }
}

void Unk_02068808::func_0206860c(s32 a, BOOL b) {
    u32 pal;
    s32 y, x;
    if (b != 0) {
        pal = 0xb000;
    } else if (a == 0) {
        pal = 0x1000;
    } else {
        pal = 0x2000;
    }
    if (pal != 0x1000) {
        for (y = 13; y <= 16; y++) {
            for (x = 3; x <= 14; x++) {
                u16 *p = (u16 *)((y << 6) + (u32)unk_00);
                if ((p[x] & 0xf000) == 0x1000) {
                    u16 v = (u16)(p[x] & 0xffff0fff);
                    p[x] = v | pal;
                }
            }
        }
    }
}

BOOL Unk_02068808::func_02068680(void *file) {
    BOOL a = func_02119a28(file, data_020dddbc);
    BOOL ok;
    unk_08 = func_020e8594(0x2800);
    if (unk_08 != NULL) {
        s32 n = func_021198b4(file, unk_08, 0x2800);
        ok = FALSE;
        if (n != ~ok) ok = TRUE;
    } else {
        ok = FALSE;
    }
    BOOL r = func_021199e0(file);
    if (a && ok && r && unk_08) return TRUE;
    return FALSE;
}

BOOL Unk_02068808::func_020686e4(void *file) {
    BOOL a = func_02119a28(file, data_020dddd4);
    BOOL ok;
    unk_04 = func_020e8594(0x180);
    if (unk_04 != NULL) {
        s32 n = func_021198b4(file, unk_04, 0x180);
        ok = FALSE;
        if (n != ~ok) ok = TRUE;
    } else {
        ok = FALSE;
    }
    BOOL r = func_021199e0(file);
    if (a && ok && r && unk_04) return TRUE;
    return FALSE;
}

BOOL Unk_02068808::func_02068748(void *file, BOOL alt) {
    BOOL a = func_02119a28(file, alt ? data_020dddec : data_020dde08);
    BOOL ok;
    unk_00 = (u16 *)func_020e8594(0x800);
    if (unk_00 != NULL) {
        s32 n = func_021198b4(file, unk_00, 0x800);
        ok = FALSE;
        if (n != ~ok) ok = TRUE;
    } else {
        ok = FALSE;
    }
    BOOL r = func_021199e0(file);
    if (a && ok && r && unk_00) return TRUE;
    return FALSE;
}

void Unk_02068808::func_020687b8() {
    func_020683bc();
    func_020682b8();
}

void Unk_02068808::func_020687cc() {
    func_020683d0();
    func_020682c4();
}

Unk_02068808 *Unk_02068808::func_020687e0() {
    func_0208ec78(unk_50);
    func_02068524();
    func_0208ede0(unk_50);
    func_02089494(unk_0c);
    return this;
}

Unk_02068808 *Unk_02068808::func_02068808() {
    unk_00 = NULL;
    unk_04 = NULL;
    unk_08 = NULL;
    func_020894c0(unk_0c, 1);
    func_0208ee00(unk_50);
    unk_74 = 0;
    unk_78 = 0;
    unk_7c = 0;
    func_02089328(unk_0c);
    func_0208ec7c(unk_50);
    return this;
}

// ---- Unk_020ddca8
void Unk_020ddca8::func_02068848() {
    u8 b;
    SUB2C->func_020a7754(&b);
    unk_24->unk_13b0->vfunc_64(b);
}

void Unk_020ddca8::func_02068874() {
    unk_28 = 0;
    func_020a776c(SUB2C);
}

void Unk_020ddca8::vfunc_14(u8 *p) {
    SUB2C->func_020a777c();
    if (unk_28 == 0) {
        s32 b, a;
        a = unk_2c;
        b = unk_30;
        if (a == 10 && b == 0) {
            func_02068848();
        }
    }
}

void Unk_020ddca8::func_020688ac(u8 *p) {
    func_02068874();
    unk_28 = 0;
    func_020a8368(p);
    func_020a82ec(FALSE);
}

Unk_020ddca8::~Unk_020ddca8() {}

Unk_020ddca8::Unk_020ddca8(Unk_02068848_Owner *owner) {
    unk_24 = owner;
    unk_28 = 0;
    func_020a776c(SUB2C);
}

void Unk_020ddca8::func_02068950() {
    u32 a;
    char *b;
    char *c;
    unk_38.func_020a72c4(&a, &b, &c);
    BOOL r = func_0206774c();
    func_0206b374(unk_60, (u32)b, a, r);
    func_0206b338(unk_9c, (u32)c, (u32)b, r == 0);
    func_020a8400(a * 2);
}

void Unk_020ddca8::func_020689a0() {
    unk_5c = unk_38.func_020a72b0();
    func_0206b618(unk_28, &unk_38);
    func_0206b59c(unk_28, unk_5c);
    unk_24->unk_1704 = unk_5c;
}

void Unk_020ddca8::func_020689d0() {
    Unk_02068848_Entry *e = unk_24->unk_15fc;
    func_0206acb0(&e[3]);
}

void Unk_020ddca8::func_020689e4() {
    Unk_02068848_Entry *e = unk_24->unk_15fc;
    func_0206acb0(&e[2]);
}

void Unk_020ddca8::func_020689f8() {
    Unk_02068848_Entry *e = unk_24->unk_15fc;
    func_0206acb0(&e[1]);
}

void Unk_020ddca8::func_02068a0c() {
    func_0206acb0(unk_24->unk_15fc);
}

void Unk_020ddca8::func_02068a20() {
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[10]);
}

void Unk_020ddca8::func_02068a3c() {
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[9]);
}

void Unk_020ddca8::func_02068a58() {
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[8]);
}

void Unk_020ddca8::func_02068a74() {
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[7]);
}

void Unk_020ddca8::func_02068a90() {
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[6]);
}

void Unk_020ddca8::func_02068aac() {
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[5]);
}

void Unk_020ddca8::func_02068ac8() {
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[4]);
}

void Unk_020ddca8::func_02068adc() {
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[3]);
}

void Unk_020ddca8::func_02068af0() {
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[2]);
}

void Unk_020ddca8::func_02068b04() {
    Unk_02068848_Entry *e = unk_24->unk_13c0;
    func_0206acb0(&e[1]);
}

void Unk_020ddca8::func_02068b18() {
    func_0206acb0(unk_24->unk_13c0);
}

void Unk_020ddca8::func_02068b2c() {
    func_0206ad0c();
}

void Unk_020ddca8::func_02068b34() {
    unk_d9 = 1;
}

void Unk_020ddca8::func_02068b3c() {
    unk_e0 = 2;
}

void Unk_020ddca8::func_02068b44() {
    unk_e0 = 1;
}

void Unk_020ddca8::func_02068b4c() {}

void Unk_020ddca8::func_02068b50() {
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_60();
}

void Unk_020ddca8::func_02068b70() {
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_5c();
}

void Unk_020ddca8::func_02068b90() {
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_58();
}

void Unk_020ddca8::func_02068bb0() {
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_54();
}

void Unk_020ddca8::func_02068bd0() {
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_50();
}

void Unk_020ddca8::func_02068bf0() {
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_4c();
}

void Unk_020ddca8::func_02068c10() {
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_48();
}

void Unk_020ddca8::func_02068c30() {
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_44();
}

void Unk_020ddca8::func_02068c50() {
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_40();
}

void Unk_020ddca8::func_02068c70() {
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    func_020a7768(&unk_38);
    m->vfunc_3c();
}

void Unk_020ddca8::func_02068c90() {}

void Unk_020ddca8::func_02068c94() {}

void Unk_020ddca8::func_02068c98() {}

void Unk_020ddca8::func_02068c9c() {
    u8 b[4];
    Unk_02068848_Menu *m = unk_24->unk_13b0;
    BOOL i;
    s32 res;
    m->vfunc_34(0xd, 2);
    unk_38.func_020a76fc(&b[0], &b[2], &b[3]);
    b[0]--;
    res = m->vfunc_68();
    i = 0;
    if (res != 0) {
        s32 c = func_0207f9a4();
        if (c != b[0]) i = 1;
    } else {
        func_0206afa0(0xeeb, data_020dde24);
    }
    u8 *q = &b[2];
    b[1] = q[i];
    func_0206ac98(&b[1]);
}

void Unk_020ddca8::func_02068d20() {
    u8 b[8];
    unk_24->unk_13b0->vfunc_34(0xc, 2);
    unk_38.func_020a7730(&b[1], &b[2]);
    func_020974f8();
    s32 i;
    s32 r = func_020978fc();
    if (r == 1) i = 0;
    else i = 1;
    b[0] = (&b[1])[i];
    func_0206ac98(b);
}

void Unk_020ddca8::func_02068d78() {
    u8 b[8];
    unk_24->unk_13b0->vfunc_34(0xb, 7);
    unk_38.func_020a7648(&b[1], 7);
    u32 v = unk_24->unk_1710;
    s32 i;
    if (v == 0) i = 6;
    else i = v - 1;
    b[0] = (&b[1])[i];
    func_0206ac98(b);
}

void Unk_020ddca8::func_02068dd0() {
    u8 b[8];
    s32 i, t;
    u8 *g;
    unk_24->unk_13b0->vfunc_34(0xa, 4);
    unk_38.func_020a76bc(&b[1], &b[2], &b[3], &b[4]);
    g = data_021d7350;
    if ((u32)g != 0) t = func_020978a4(g + 0xc);
    else t = 0;
    i = t - 1;
    if (i < 0) i = 0;
    else if (i > 3) i = 3;
    b[0] = (&b[1])[i];
    func_0206ac98(b);
}

void Unk_020ddca8::func_02068e40() {
    u8 b[4];
    s32 i, r;
    unk_24->unk_13b0->vfunc_34(9, 3);
    unk_38.func_020a76fc(&b[1], &b[2], &b[3]);
    r = func_020b8fe8();
    i = 0;
    if (r == 1) i = 1;
    else if (r == 2) i = 2;
    b[0] = (&b[1])[i];
    func_0206ac98(b);
}
