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
    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);
    void func_02026000(Unk_0201d2d0_Out *out);
    void func_02026128(Unk_0201d2d0_Out *out);
    void func_020261c0();
    void func_02026214();
    void func_020262ac(Unk_0201d2d0_Out *out);
    void func_0202635c();
    void func_020263b0(Unk_0201d2d0_Out *out);
    void func_02026410();
    void func_02026490(Unk_0201d2d0_Out *out);
    void func_02026560(Unk_0201d2d0_Out *out);
    void func_02026668(Unk_0201d2d0_Out *out);

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
    u8 pad_11f;
    u16 unk_120;
    u8 pad_122[0x156 - 0x122];
    u16 unk_156;
    u8 pad_158[0x15c - 0x158];
    void *unk_15c;
    void *unk_160;
    u8 pad_164[0x19c - 0x164];
    void *unk_19c;
};



struct Unk_02025df8_Data {
    u8 pad_00[3];
    u8 unk_03;
    u8 unk_04;
};

struct Unk_02025ed4_Arg {
    u32 unk_00;
    u32 unk_04;
};

typedef void (*Unk_02025ed4_Fn)(u16 *, Unk_02025ed4_Arg *);

extern "C" {
s32 func_0202c33c(u16 *, s32, s32, u32, u32);
s32 func_0202c8f0(u16 *, s32, s32, u32);
void func_0209d498(void *);
u32 func_0202d114(void *);
s32 func_0209ac64(u32);
u32 func_0209a940(void *);
s32 func_0209ad68(u32);
u32 func_0209a938(void *);
void func_0209ace8(u32, s32 *);
s32 func_0209a8f4(s32);
u32 func_0207cdb0(void *);
u32 func_0207f91c(void *, u32);
u32 func_02081364(u32);
void func_0201577c(void *, s32, u8 *, void *, u8 *);
void func_02067abc(void *, u8 *, u32);
void *func_0209750c();
u32 func_02098750(void *);
s32 func_02097edc(u32);
void func_02097a48(u32, void *, s32);
void func_02097f30(u32, u16 *);
u32 func_020986c8(void *);
void func_0203c42c(u32, u16 *, s32, s32);
void func_020158e0(void *, void *, s32, s32, s32, s32, s32);
void func_0201578c(void *, u16 *, s32, s32);
u8 *func_0209a420(void *);
void func_0202cd44(u16 *, s32);
s32 func_0205b4f8();
void *func_0202ac7c(void *);
void func_02026968(u16 *, void *);
void func_0207ceb4(u16 *, void *);
void func_0207cf10(void *);
void func_0209a588(void *);
}

extern Unk_02025ed4_Fn data_020c7acc[];
extern Unk_0201d2d0_Data data_020d7b40;
extern u32 *data_020d8800[];
extern u8 data_020d8ae0[];
extern Unk_0201d2d0_Data data_020c7958;
extern Unk_0201d2d0_Data data_020c7948;
extern Unk_0201d2d0_Data data_020c7960;
extern Unk_0201d2d0_Data data_020c7968;
extern Unk_0201d2d0_Data data_020c7970;
extern Unk_0201d2d0_Data data_020c7978;
extern Unk_0201d2d0_Data data_020c7720;
extern u8 data_021bf544[];
extern u8 data_021bf52c[];
extern u8 data_021bf514[];

extern "C" void func_02025df8(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!func_0202c33c(p, 2, 3, d->unk_04, d->unk_03)) {
        if (!func_0202c33c(p, 0, 1, d->unk_04, d->unk_03)) {
            func_0202c33c(p, 4, 4, d->unk_04, d->unk_03);
        }
    }
}

extern "C" void func_02025e48(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!func_0202c33c(p, 1, 2, d->unk_04, d->unk_03)) {
        if (!func_0202c33c(p, 0, 0, d->unk_04, d->unk_03)) {
            func_0202c33c(p, 3, 4, d->unk_04, d->unk_03);
        }
    }
}

extern "C" void func_02025e98(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!func_0202c33c(p, 0, 1, d->unk_04, d->unk_03)) {
        func_0202c33c(p, 2, 4, d->unk_04, d->unk_03);
    }
}

extern "C" void func_02025ed4(u16 *p, void *unused, u32 idx) {
    Unk_02025ed4_Arg a;
    Unk_02025ed4_Fn fn;
    if (idx < 5 && (fn = data_020c7acc[idx]) != 0) {
        a.unk_00 = 0;
        a.unk_04 = 0;
        func_0209d498(&a);
        fn(p, &a);
    } else {
        *p = 0xfff1;
    }
}

extern "C" void func_02025f10(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!func_0202c8f0(p, 3, 4, d->unk_04)) {
        func_0202c8f0(p, 0, 2, d->unk_04);
    }
}

extern "C" void func_02025f44(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!func_0202c8f0(p, 2, 3, d->unk_04)) {
        if (!func_0202c8f0(p, 0, 1, d->unk_04)) {
            func_0202c8f0(p, 4, 4, d->unk_04);
        }
    }
}

extern "C" void func_02025f88(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!func_0202c8f0(p, 1, 2, d->unk_04)) {
        if (!func_0202c8f0(p, 0, 0, d->unk_04)) {
            func_0202c8f0(p, 3, 4, d->unk_04);
        }
    }
}

extern "C" void func_02025fcc(u16 *p, Unk_02025df8_Data *d) {
    *p = 0xfff1;
    if (!func_0202c8f0(p, 0, 1, d->unk_04)) {
        func_0202c8f0(p, 2, 4, d->unk_04);
    }
}

void Unk_0201d2d0::func_02026000(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data d = data_020d7b40;
    s32 r6 = 0;
    s32 r4;
    u8 buf[2];
    s32 idx;
    r4 = func_0209ac64(func_0202d114(this));
    idx = r6;
    if (func_0209ad68(func_0209a940(unk_160)) != 0) {
        r6 = func_0209a938(unk_160);
        r4 = func_0209ac64(func_0209a940(unk_160));
    }
    func_0209ace8(func_0202d114(this), &idx);
    if (r6 < func_0209a8f4(r4) && idx < 5) {
        d.unk_00 = data_020d8800[idx][r6];
        if (r4 == 4) {
            void *p = unk_fc->unk_82c;
            buf[0] = func_02081364(func_0207f91c(p, func_0207cdb0(p)));
            buf[1] = 0;
            func_0201577c(this, 0, buf, data_020d8ae0, &buf[1]);
        }
        if (r4 != 0 && r4 != 1) {
            unk_156 = 0x5e;
        }
    }
    if (d.unk_00 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02026128(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d;
    s32 r = func_0209ac64(func_0202d114(this));
    switch (r) {
    case 0xa:
        d = &data_020c7958;
        break;
    case 0x13:
        d = &data_020c7948;
        break;
    default:
        d = &data_020c7958;
        break;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    if (unk_15c != 0) {
        func_0209a588(unk_15c);
    }
    unk_156 = 0x5f;
}

void Unk_0201d2d0::func_020261c0() {
    u8 b;
    Unk_0201d2d0_Out out;
    func_0202d1d4(this, data_021bf544);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067abc(unk_3c, &b, out.unk_00);
}

static inline BOOL Unk_02026214_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

void Unk_0201d2d0::func_02026214() {
    void *p6 = func_0209750c();
    u32 r4 = func_02098750(p6);
    if (Unk_02026214_R1(&unk_120, 0x1492, 0x14fd)) {
        func_02097a48(r4, unk_19c, 1);
    } else if (unk_120 != 0xfff1) {
        s32 v = func_02097edc(r4);
        if (v != -1) {
            func_02097f30(r4, &unk_120);
            func_0203c42c(func_020986c8(p6), &unk_120, 0, 1);
        }
    }
    func_02014e60(this, &unk_120, 0, 5, 0);
}

void Unk_0201d2d0::func_020262ac(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data d;
    if (Unk_02026214_R1(&unk_120, 0x1492, 0x14fd)) {
        func_020158e0(this, unk_19c, 1, 4, 1, 1, 0);
    } else {
        func_0201578c(this, &unk_120, 1, 7);
    }
    d = data_020c7960;
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_0202635c() {
    u8 b;
    Unk_0201d2d0_Out out;
    func_0202d1d4(this, data_021bf52c);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067abc(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_020263b0(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7720.unk_00, data_020c7720.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02026410() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (func_0209750c() != 0 && func_02097edc(func_02098750(func_0209750c())) != -1) {
        func_0202d1d4(this, data_021bf514);
    } else {
        func_0202d1d4(this, data_021bf544);
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067abc(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_02026490(Unk_0201d2d0_Out *out) {
    u16 loc[4];
    u8 t = *func_0209a420(unk_15c);
    unk_120 = 0xfff1;
    if (t == 2) {
        func_0202cd44(&loc[0], 0);
        unk_120 = loc[0];
    }
    if (unk_120 == 0xfff1) {
        unk_19c = (void *)(func_0205b4f8() * 4 + 0x1f4);
        unk_19c = func_0202ac7c(unk_19c);
        func_02026968(&loc[1], unk_19c);
        unk_120 = loc[1];
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7968.unk_00, data_020c7968.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02026560(Unk_0201d2d0_Out *out) {
    u16 loc[4];
    u8 t = *func_0209a420(unk_15c);
    unk_120 = 0xfff1;
    switch (t) {
    case 0:
        func_0207ceb4(&loc[0], unk_fc->unk_82c);
        unk_120 = loc[0];
        if (unk_120 != 0xfff1) {
            func_0207cf10(unk_fc->unk_82c);
        }
        break;
    case 1:
        func_0202cd44(&loc[1], 0);
        unk_120 = loc[1];
        break;
    }
    if (unk_120 == 0xfff1) {
        unk_19c = (void *)(func_0205b4f8() * 4 + 0x1f4);
        unk_19c = func_0202ac7c(unk_19c);
        func_02026968(&loc[2], unk_19c);
        unk_120 = loc[2];
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7970.unk_00, data_020c7970.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02026668(Unk_0201d2d0_Out *out) {
    u16 loc[5];
    u8 t = *func_0209a420(unk_15c);
    unk_120 = 0xfff1;
    switch (t) {
    case 0:
        func_0202cd44(&loc[0], 0);
        unk_120 = loc[0];
        break;
    case 1:
        func_0207ceb4(&loc[1], unk_fc->unk_82c);
        unk_120 = loc[1];
        if (unk_120 != 0xfff1) {
            func_0207cf10(unk_fc->unk_82c);
        }
        break;
    default:
        func_0207ceb4(&loc[2], unk_fc->unk_82c);
        unk_120 = loc[2];
        if (unk_120 != 0xfff1) {
            func_0207cf10(unk_fc->unk_82c);
        } else {
            func_0202cd44(&loc[3], 0);
            unk_120 = loc[3];
        }
        break;
    }
    if (unk_120 == 0xfff1) {
        unk_19c = (void *)(func_0205b4f8() * 4 + 0x1f4);
        unk_19c = func_0202ac7c(unk_19c);
        func_02026968(&loc[4], unk_19c);
        unk_120 = loc[4];
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7978.unk_00, data_020c7978.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
