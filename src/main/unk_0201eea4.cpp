#include "types.h"

struct Unk_0201eea4_Sub {
    /* 0x000 */ u8 pad_000[0x82c];
    /* 0x82c */ void *unk_82c;
};

struct Unk_0201ef00_Out {
    /* 0x00 */ void *unk_00;
    /* 0x04 */ u8 unk_04;
};

struct Unk_0201eeac_Res {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ u8 unk_04;
};

struct Unk_020c7790 {
    u32 unk_00;
    u8 unk_04;
};

extern Unk_020c7790 data_020c7790;
extern Unk_020c7790 data_020c77a8;
extern Unk_020c7790 data_020c7628;
extern Unk_020c7790 data_020c78b0;
extern char data_021be908[];
extern char data_021be8c0[];
extern char data_021be8f0[];
extern char data_021be8d8[];
extern char data_021bec58[];
extern char data_021bec10[];
extern char data_021be6c0[];

struct Unk_021ed24c_Prim { virtual void vfunc_00(); u32 pad; };
struct Unk_021ed24c {
    u32 pad;
};
extern "C" {
void func_02085818(void *out, Unk_021ed24c *p);
s32 func_02085810(Unk_021ed24c *p);
void *func_0208586c(Unk_021ed24c *p);
u32 func_020858ac(Unk_021ed24c *p);
}
struct Unk_021ed24c_Outer : Unk_021ed24c_Prim, Unk_021ed24c {};
extern Unk_021ed24c_Outer data_021ed24c;

struct Unk_0201f170_Rec {
    /* 0x00 */ u16 unk_00;
    /* 0x02 */ u8 unk_02[8];
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
};

extern "C" {
u32 func_02003098(void *p);
void *func_020805c4(void *p);
u32 func_02063b8c(u32 x);
s32 func_020030b4(void *p);
s32 func_02080a74(void *p);
void func_02080a98(void *p);
s32 func_02094218(u32 x);
s32 func_02128930(void *a, void *b, u32 n);
s32 func_0203f42c(u32 x);
void func_0209d498(void *p);
void func_02067a84(u32 self, u8 *b, u32 v);
}

class Unk_020d7710 {
public:
    virtual void vfunc_00();
    /* 0x04 */ u8 pad_04[0x38];
    /* 0x3c */ u32 unk_3c;
    /* 0x40 */ u8 pad_40[0x6c];

    void func_0201511c(u32 a, u32 b, u32 c, u8 d);
    BOOL func_020151d0(s32 x);
    void func_0201578c(void *a, u32 b, u32 c);
    void func_020157b8(void *a, u32 b);
    void func_020157e8(u32 a, u32 b);
    void func_020158a8(s32 a, u32 b, s32 c, s32 d);
    void func_02015958(s32 a, u32 b, s32 c, s32 d, s32 e);
};

class Unk_0201eea4;
typedef void (Unk_0201eea4::*Unk_0201eea4_Fn)(void *);

class Unk_0201eea4 : public Unk_020d7710 {
public:
    void func_0201eea4();
    void func_0201eeac();
    void func_0201ef00(Unk_0201ef00_Out *out);
    void func_0201ef60(Unk_0201ef00_Out *out);
    void func_0201efc0(Unk_0201ef00_Out *out);
    void func_0201f058(void *arg);
    void func_0201f130();
    void func_0201f170(Unk_0201ef00_Out *out);
    void func_0201f32c();
    void func_0201f36c(Unk_0201ef00_Out *out);
    void func_0201f55c();
    void func_0201f564();
    void func_0201f56c();
    void func_0201f5c0(Unk_0201ef00_Out *out);
    void func_0201f620(Unk_0201ef00_Out *out);
    void func_0201f680(Unk_0201ef00_Out *out);
    void func_0201f6e0();
    void func_0201f738();
    void func_0201f770(Unk_0201ef00_Out *out);

    // base classes
    void func_02029d84();
    void func_0201fc48();
    void func_0201f964();
    void func_0202d1d4(const char *s);
    void func_0202d184(u16 *a, u8 *b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
    void func_0202d048(void *b, void *c, void *d, u32 e);
    BOOL func_02020320(void *a);
    void func_0202d33c(Unk_0201eea4_Fn fn);

    /* 0xac */ Unk_0201eea4_Fn unk_ac;
    /* 0xb4 */ u8 pad_b4[0x10];
    /* 0xc4 */ Unk_0201eea4_Fn unk_c4;
    /* 0xcc */ u8 pad_cc[0x30];
    /* 0xfc */ Unk_0201eea4_Sub *unk_fc;
    /* 0x100 */ u16 unk_100[15];
    /* 0x11e */ u8 unk_11e;
    /* 0x11f */ u8 pad_11f[5];
    /* 0x124 */ u32 unk_124;
    /* 0x128 */ void *unk_128;
};

extern "C" u32 func_0201f524(u32 x);

static inline BOOL Unk_0201f170_InRange(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}

void Unk_0201eea4::func_0201eea4() {
    func_02029d84();
}

void Unk_0201eea4::func_0201eeac() {
    u8 b;
    Unk_0201eeac_Res res;
    func_0202d1d4(data_021be908);
    if (unk_ac != 0) {
        (this->*unk_ac)(&res);
    }
    b = res.unk_04;
    func_02067a84(unk_3c, &b, res.unk_00);
}

void Unk_0201eea4::func_0201ef00(Unk_0201ef00_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7790.unk_00, 1, 10, data_020c7790.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201eea4::func_0201ef60(Unk_0201ef00_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7790.unk_00, 1, 13, data_020c7790.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201eea4::func_0201efc0(Unk_0201ef00_Out *out) {
    u32 a, b;
    s32 t = func_0203f42c(0xe);
    if (t < 0) {
        t = 0;
    }
    if (t == 0) {
        a = 2;
        b = 0;
    } else if (t >= 1 && t <= 2) {
        a = 3;
        b = 2;
    } else if (t >= 3 && t <= 5) {
        a = 3;
        b = 5;
    } else {
        a = 2;
        b = 8;
    }
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7790.unk_00, 1, b, (u8)a);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201eea4::func_0201f058(void *arg) {
    void *r4 = unk_fc->unk_82c;
    u32 r6 = func_02063b8c(10) & 1;
    if (func_02020320(arg)) {
        func_0202d048(&unk_128, &unk_124, r4, 0);
        return;
    }
    if (unk_128 == 0 || func_02080a74(unk_128) == 0) {
        func_0202d1d4(data_021be8c0);
    } else if (r6 == 0) {
        func_0202d1d4(data_021be8f0);
    } else {
        func_0202d1d4(data_021be8d8);
    }
    if (unk_ac != 0) {
        (this->*unk_ac)(arg);
    }
    func_0202d048(&unk_128, &unk_124, r4, 0);
    if (unk_128 != 0) {
        func_02080a98(unk_128);
    }
}

void Unk_0201eea4::func_0201f130() {
    func_0202d048(&unk_128, &unk_124, unk_fc->unk_82c, 0);
    if (unk_128 != 0) {
        func_02080a98(unk_128);
    }
}

void Unk_0201eea4::func_0201f32c() {
    func_0202d048(&unk_128, &unk_124, unk_fc->unk_82c, 0);
    if (unk_128 != 0) {
        func_02080a98(unk_128);
    }
}

extern "C" u32 func_0201f524(u32 x) {
    switch (x) {
    case 6:
    case 9:
    case 12:
    case 15:
        return 6;
    case 8:
    case 11:
    case 14:
    case 17:
        return 12;
    }
    return 9;
}

void Unk_0201eea4::func_0201f55c() {
    func_0201fc48();
}

void Unk_0201eea4::func_0201f564() {
    func_02029d84();
}

void Unk_0201eea4::func_0201f56c() {
    u8 b;
    Unk_0201eeac_Res res;
    func_0202d1d4(data_021bec58);
    if (unk_ac != 0) {
        (this->*unk_ac)(&res);
    }
    b = res.unk_04;
    func_02067a84(unk_3c, &b, res.unk_00);
}

void Unk_0201eea4::func_0201f5c0(Unk_0201ef00_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c78b0.unk_00, 1, 4, 3);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201eea4::func_0201f620(Unk_0201ef00_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c78b0.unk_00, 1, 10, data_020c78b0.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201eea4::func_0201f680(Unk_0201ef00_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c78b0.unk_00, 1, 14, data_020c78b0.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201eea4::func_0201f770(Unk_0201ef00_Out *out) {
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c78b0.unk_00, 1, 12, data_020c78b0.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201eea4::func_0201f6e0() {
    u8 b;
    Unk_0201eeac_Res res;
    func_0201f964();
    func_0202d1d4(data_021bec10);
    if (unk_ac != 0) {
        (this->*unk_ac)(&res);
    }
    b = res.unk_04;
    func_02067a84(unk_3c, &b, res.unk_00);
}

void Unk_0201eea4::func_0201f738() {
    func_0201511c(0x17, (u32)data_021be6c0, 0x10, 0);
    func_020151d0(6);
    func_0202d33c((Unk_0201eea4_Fn)&Unk_0201eea4::func_0201f6e0);
}

void Unk_0201eea4::func_0201f170(Unk_0201ef00_Out *out) {
    u32 r6;
    void *r4;
    volatile u16 id;
    u16 v[3];
    u16 *q;
    u32 t[2];
    void *sp14;
    u32 sp18;
    u32 sp1c;
    if (func_02020320(out)) {
        func_0202d048(&unk_128, &unk_124, unk_fc->unk_82c, 0);
        return;
    }
    Unk_021ed24c *dp = &data_021ed24c;
    sp14 = unk_fc->unk_82c;
    if (dp) {
        func_02085818(v, dp);
        q = v;
    } else {
        v[1] = 0xfff1;
        q = &v[1];
    }
    id = *q;
    r6 = 0;
    t[0] = r6;
    t[1] = r6;
    func_0209d498(t);
    sp18 = ((u8 *)t)[2];
    if (unk_128 == 0 || func_02080a74(unk_128) == 0) {
        r6 = 0;
    } else if (dp) {
        if (Unk_0201f170_InRange(&id, 0x12b0, 0x12e7)) {
            sp1c = func_020858ac(dp);
            r4 = func_0208586c(dp);
            if (func_020030b4(r4)) {
                Unk_0201f170_Rec *a = (Unk_0201f170_Rec *)r4;
                Unk_0201f170_Rec *b = (Unk_0201f170_Rec *)func_020805c4(sp14);
                if (a->unk_00 == b->unk_00 && func_02128930(a->unk_02, b->unk_02, 8) == 0 && a->unk_0b == b->unk_0b) {
                    r6 = 3;
                } else {
                    r6 = func_0201f524(sp18);
                }
                func_020157b8(r4, 1);
            } else if (func_02094218(sp1c)) {
                r6 = func_0201f524(sp18);
                func_020157e8(func_020858ac(dp), 1);
            }
            func_02015958(func_02085810(dp) >> 12, 0, 3, 0, 0);
            func_0201578c((void *)&id, 0, 7);
        }
    }
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(sp14)), data_020c77a8.unk_00, 1, r6, data_020c77a8.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = (Unk_0201eea4_Fn)&Unk_0201eea4::func_0201f130;
}

void Unk_0201eea4::func_0201f36c(Unk_0201ef00_Out *out) {
    u32 r6;
    void *r4;
    volatile u16 id;
    u16 v[3];
    u16 *q;
    u32 t[2];
    void *sp14;
    u32 sp18;
    u32 sp1c;
    if (func_02020320(out)) {
        func_0202d048(&unk_128, &unk_124, unk_fc->unk_82c, 0);
        return;
    }
    Unk_021ed24c *dp = &data_021ed24c;
    sp14 = unk_fc->unk_82c;
    if (dp) {
        func_02085818(v, dp);
        q = v;
    } else {
        v[1] = 0xfff1;
        q = &v[1];
    }
    id = *q;
    r6 = 0;
    t[0] = r6;
    t[1] = r6;
    func_0209d498(t);
    sp18 = ((u8 *)t)[2];
    if (unk_128 == 0 || func_02080a74(unk_128) == 0) {
        r6 = 0;
    } else if (dp) {
        if (Unk_0201f170_InRange(&id, 0x12e8, 0x131f)) {
            sp1c = func_020858ac(dp);
            r4 = func_0208586c(dp);
            if (func_020030b4(r4)) {
                Unk_0201f170_Rec *a = (Unk_0201f170_Rec *)r4;
                Unk_0201f170_Rec *b = (Unk_0201f170_Rec *)func_020805c4(sp14);
                if (a->unk_00 == b->unk_00 && func_02128930(a->unk_02, b->unk_02, 8) == 0 && a->unk_0b == b->unk_0b) {
                    r6 = 3;
                } else {
                    r6 = func_0201f524(sp18);
                }
                func_020157b8(r4, 1);
            } else if (func_02094218(sp1c)) {
                r6 = func_0201f524(sp18);
                func_020157e8(func_020858ac(dp), 1);
            }
            func_020158a8(func_02085810(dp), 0, 1, 3);
            func_0201578c((void *)&id, 0, 7);
        }
    }
    func_0202d184(unk_100, &unk_11e, 0x1e, func_02003098(func_020805c4(sp14)), data_020c7628.unk_00, 1, r6, data_020c7628.unk_04);
    out->unk_00 = unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = (Unk_0201eea4_Fn)&Unk_0201eea4::func_0201f32c;
}
