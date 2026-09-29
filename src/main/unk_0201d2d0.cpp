#include "types.h"

class Unk_0201d2d0;

struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0201d2d0_Data {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0201d2d0_Vec {
    s32 x, y, z;
};

struct Unk_0201d2d0_Parent {
    u8 pad_00[0x5c];
    Unk_0201d2d0_Vec unk_5c;
    u8 pad_68[0x564 - 0x68];
    u8 unk_564[4];
    u8 pad_568[0x82c - 0x568];
    void *unk_82c;
};

struct Unk_0201d9e0_Rec {
    u16 unk_00;
    u8 unk_02[8];
    u8 pad_0a;
    u8 unk_0b;
};

struct Unk_0201d568_S {
    u8 pad_00[0x20];
    u8 unk_20;
    s8 unk_21;
};

typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 func_0202d048(void *, void *, void *, void *, s32);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void func_0201c870(void *, void *);
void func_020679c0(void *, s32);
void func_02014e60(void *, u16 *, s32, s32, s32);
void func_0202d1d4(void *, void *);
void func_02067a84(void *, u8 *, u32);
void func_020157b8(void *, void *, s32);
void *func_0207bf60(void *, s32);
void *func_0209750c();
void *func_0209888c(void *);
s32 func_02094218(void *);
s32 func_020030b4(void *);
s32 func_0207f854(void *, void *);
s32 func_02080dd8();
s32 func_02128930(void *, void *, s32);
void func_02034d84(u32);
void func_02034dd0(s32, s32, s32);
void func_02034d70(u32);
void func_02034e10(s32, s32, s32, s32);
void func_02099014(u16 *, s32);
void *func_0209cf0c();
void func_020982dc(void *, u32);
s32 func_020197a8(void *);
s32 func_02019790(void *);
void func_0203a680(void *);
void func_02014f74(void *);
}

extern Unk_0201d2d0_Data data_020c7798;
extern Unk_0201d2d0_Data data_020c7938;
extern Unk_0201d2d0_Data data_020c75c8;
extern Unk_0201d2d0_Data data_020c78e8;
extern Unk_0201d2d0_Fn data_020d7958;
extern Unk_0201d2d0_Fn data_020d7c68;
extern Unk_0201d2d0_Fn data_020d7990;
extern Unk_0201d2d0_Fn data_020d7d18;
extern Unk_0201d2d0_Fn data_020d7d20;
extern Unk_0201d2d0_Fn data_020d7c88;
extern Unk_0201d2d0_Fn data_020d7d70;
extern Unk_0201d2d0_Fn data_0213a740;
extern u8 data_021beb80[];
extern u8 data_021beb98[];
extern u8 data_021beb50[];
extern u8 data_021beb68[];
extern u8 data_021beb20[];
extern u8 data_021beb38[];
extern u8 data_021beb08[];
extern u8 data_021dfd8c[];

class Unk_0201d2d0 {
public:
    void func_0201d2d0(Unk_0201d2d0_Out *out);
    void func_0201d344();
    void func_0201d378(Unk_0201d2d0_Out *out);
    void func_0201d3ec();
    void func_0201d420(Unk_0201d2d0_Out *out);
    void func_0201d4a8(Unk_0201d2d0_Out *out);
    void func_0201d508(Unk_0201d2d0_Out *out);
    void func_0201d568();
    void func_0201d5d4(Unk_0201d2d0_Out *out);
    void func_0201d634();
    void func_0201d668(Unk_0201d2d0_Out *out);
    void func_0201d6c8();
    void func_0201d71c(Unk_0201d2d0_Out *out);
    void func_0201d7d4(Unk_0201d2d0_Out *out);
    void func_0201d88c();
    void func_0201d90c();
    void func_0201d9e0(Unk_0201d2d0_Out *out);
    void func_0201db44();
    void func_0201db60();
    void func_0201db88();
    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201d2d0_Fn unk_c4;
    u8 pad_cc[0xec - 0xcc];
    Unk_0201d2d0_Fn unk_ec;
    Unk_0201d2d0_Fn unk_f4;
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f[0x124 - 0x11f];
    u32 unk_124;
    u32 unk_128;
    u8 pad_12c[0x138 - 0x12c];
    u8 unk_138;
    u8 pad_139[0x190 - 0x139];
    u8 unk_190;
    u8 pad_191[3];
    s32 unk_194;
};


void Unk_0201d2d0::func_0201d2d0(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7798.unk_00, data_020c7798.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7958;
}

void Unk_0201d2d0::func_0201d344() {
    func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
}

void Unk_0201d2d0::func_0201d378(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7938.unk_00, data_020c7938.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7c68;
}

void Unk_0201d2d0::func_0201d3ec() {
    func_0202d048(this, &unk_128, &unk_124, unk_fc->unk_82c, 0);
}

void Unk_0201d2d0::func_0201d420(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c75c8.unk_00, data_020c75c8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    if (unk_128 == 0) {
        unk_138 = 1;
    }
    unk_c4 = data_020d7990;
}

void Unk_0201d2d0::func_0201d4a8(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c78e8.unk_00, 1, 4, data_020c78e8.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_0201d508(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c78e8.unk_00, 1, 3, data_020c78e8.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_0201d568() {
    Unk_0201d568_S s;
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x32, 0x32, data_021beb80);
    func_0201c938(this, &s, 1, 0x33, 0x33, data_021beb98);
    s.unk_20 = 2;
    s.unk_21 = -1;
    func_0201c870(this, &s);
    func_0202d1c0(data_020d7d18);
    func_020679c0(unk_3c, 1);
}

void Unk_0201d2d0::func_0201d5d4(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c78e8.unk_00, 1, 2, data_020c78e8.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_0201d634() {
    u16 h = 0x3818;
    func_02014e60(this, &h, 0, 5, 0);
    func_0202d33c(data_020d7d20);
}

void Unk_0201d2d0::func_0201d668(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c78e8.unk_00, 1, 7, data_020c78e8.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_0201d6c8() {
    u8 b;
    Unk_0201d2d0_Out out;
    func_0202d1d4(this, data_021beb50);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_0201d71c(Unk_0201d2d0_Out *out) {
    s32 i;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c78e8.unk_00, 1, 6, data_020c78e8.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    for (i = 0; i < 8; i++) {
        if ((unk_190 >> i) & 1) {
            func_020157b8(this, func_020805c4(func_0207bf60(data_021dfd8c, i)), 0);
            unk_190 &= ~(1 << i);
            unk_194--;
            break;
        }
    }
}

void Unk_0201d2d0::func_0201d7d4(Unk_0201d2d0_Out *out) {
    s32 i;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c78e8.unk_00, 1, 5, data_020c78e8.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    for (i = 0; i < 8; i++) {
        if ((unk_190 >> i) & 1) {
            func_020157b8(this, func_020805c4(func_0207bf60(data_021dfd8c, i)), 0);
            unk_190 &= ~(1 << i);
            unk_194--;
            break;
        }
    }
}

void Unk_0201d2d0::func_0201d88c() {
    u8 b;
    u16 h;
    Unk_0201d2d0_Out out;
    void *p;
    h = 0x3818;
    func_02099014(&h, 0);
    p = func_0209750c();
    func_020982dc(p, (u8)(u32)func_0209cf0c());
    func_0202d1d4(this, data_021beb68);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_0201d90c() {
    u8 buf[2];
    u16 h;
    Unk_0201d2d0_Out out;
    if (unk_194 >= 2) {
        func_0202d1d4(this, data_021beb20);
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        buf[0] = out.unk_04;
        func_02067a84(unk_3c, &buf[0], out.unk_00);
    } else if (unk_194 == 1) {
        func_0202d1d4(this, data_021beb38);
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        buf[1] = out.unk_04;
        func_02067a84(unk_3c, &buf[1], out.unk_00);
    } else {
        h = 0x3818;
        func_02014e60(this, &h, 0, 5, 0);
        func_0202d33c(data_020d7c88);
    }
}

void Unk_0201d2d0::func_0201d9e0(Unk_0201d2d0_Out *out) {
    void *r7;
    Unk_0201d9e0_Rec *r4;
    s32 i;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c78e8.unk_00, 1, 1, data_020c78e8.unk_04);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    if (func_0209750c() != 0) {
        r7 = func_0209888c(func_0209750c());
    } else {
        r7 = 0;
    }
    if (unk_fc->unk_82c != 0) {
        r4 = (Unk_0201d9e0_Rec *)func_020805c4(unk_fc->unk_82c);
    } else {
        r4 = 0;
    }
    unk_190 = 0;
    unk_194 = 0;
    if ((u32)data_021dfd8c != 0 && r7 != 0 && func_02094218(r7) != 0 && r4 != 0 && func_020030b4(r4) != 0) {
        for (i = 0; i < 8; i++) {
            void *v = func_0207bf60(data_021dfd8c, i);
            if (v != 0 && func_020030b4(func_020805c4(v)) != 0) {
                Unk_0201d9e0_Rec *w = (Unk_0201d9e0_Rec *)func_020805c4(v);
                if (w->unk_00 != r4->unk_00 || func_02128930(w->unk_02, r4->unk_02, 8) != 0 || w->unk_0b != r4->unk_0b) {
                    if (func_0207f854(v, r7) != 0 && func_02080dd8() >= 0x40) {
                        unk_190 |= 1 << i;
                        unk_194++;
                    }
                }
            }
        }
    }
    if (unk_194 == 1) {
        unk_190 = 0;
        unk_194 = 0;
    }
    unk_f4 = data_020d7d70;
}

void Unk_0201d2d0::func_0201db44() {
    func_02034d84(0x2f);
    func_02034dd0(0xc, 0x60, 0x79);
}

void Unk_0201d2d0::func_0201db60() {
    func_02034d70(0x12);
    func_02034dd0(0xc, 0, 0xb);
    func_02034e10(0xd, 0x2f, 0x7f, 1);
}

void Unk_0201d2d0::func_0201db88() {
    Unk_0201d2d0_Out out;
    u8 b;
    Unk_0201d2d0_Vec v;
    if (func_020197a8(&unk_fc->unk_564) == 0 && func_02019790(&unk_fc->unk_564) != 0) {
        v = unk_fc->unk_5c;
        v.y += 0x2000;
        func_0203a680(&v);
        func_0202d1d4(this, data_021beb08);
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        b = out.unk_04;
        func_02067a84(unk_3c, &b, out.unk_00);
        func_02014f74(this);
        unk_ec = data_0213a740;
    }
}
