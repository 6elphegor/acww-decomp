#include "types.h"

class Unk_ov004_0224c740;
class Unk_ov004_0224c7d0;

struct Unk_ov004_022191f8_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_ov004_02218cdc_Rec {
    s32 a, b, c;
};

extern "C" {
extern u8 data_ov004_022507d8[];
extern u8 data_ov004_0224c890[];
extern u8 data_ov004_02250828[];
extern u8 data_ov004_0224c89c[];
extern u8 data_ov004_02250800[];
extern u8 data_ov004_0224c8a4[];
extern u8 data_ov004_0224c8b0[];
extern u8 data_021edb5c[];
extern u8 data_020e416c[];

void *func_ov004_0223584c();
void *func_ov004_02235720(void *, s32);
s32 func_ov004_02234440(s32);
void *func_ov004_022087a4(void *);
void func_ov004_022088c0(void *, void *);
void func_ov004_022189dc(void *, void *);
void func_ov004_02219f18(void *, s32);
void func_ov004_022195fc(void *, s32);
void func_ov004_02219378(void *);
void *func_ov004_02235788();
void func_ov004_02235d04();

u32 func_0204b248(void *, u32);
s32 func_0204b2d4(void *);
s32 func_0204b25c(void *);
u32 func_0204b718(void *, u32, u32);
s32 func_02063b8c(s32);
Unk_ov004_02218cdc_Rec *func_020947f0(s32);
s32 func_0202ff64(void *);
void func_0202ff44();
void func_0202ffb0(s32);
void func_0203d704(void *, s32);
s32 func_0203e2f4();
void func_0209d498(void *);
s32 func_0209d374(void *, void *);
void func_020b1028();
void func_02015ab0(void *, void *);
void *func_0201bc4c(void *, s32);
void func_02015a5c(void *);
s32 func_020aa514();
void *func_020805c4(void *);
void func_0200301c(void *, void *, u32, void *);
void func_02015170(void *, s32, s32);
void func_020151d0(void *, s32);
void func_02014e60(void *, void *, s32, s32, s32);
void *func_0209750c();
void *func_02098750(void *);
void *func_0209888c(void *);
s32 func_0201ad68(void *, void *, s32);
void func_0201ad4c(void *, void *);
s32 func_02097a90(void *, void *, s32, s32);
void func_02067a84(void *, void *, void *);
void func_0208a58c();
void func_0207c5e0(void *, void *);
void *func_0207f55c(void *, void *);
s32 func_02080ecc(void *, s32, s32, s32);
void func_0201578c(void *, void *, s32, s32);
s32 func_02014220(void *);
}

class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
};

class Unk_020d8938 : public Unk_02015b54 {
public:
    Unk_020d8938();
    virtual ~Unk_020d8938();
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
    virtual void *vfunc_64();
    virtual u32 vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();

    u8 pad_04[0x1e - 4];
    u8 unk_1e;
    u8 pad_1f[0x3c - 0x1f];
    void *unk_3c;
    u8 pad_40[0x1a0 - 0x40];
};

class Unk_020d77a4 {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual BOOL vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual BOOL vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void vfunc_64();
    virtual BOOL vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();
};

class Unk_020d89c8 : public Unk_020d77a4 {
public:
    u8 pad_04[0x618 - 4];
    u8 unk_618[0x82c - 0x618];
    void *unk_82c;
    u8 pad_830[0x894 - 0x830];
};

class Unk_ov004_0224c740 : public Unk_020d8938 {
public:
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *arg);

    void func_ov004_02219084();

    /* 0x1a0 */ Unk_ov004_0224c7d0 *unk_1a0;
    /* 0x1a4 */ void *unk_1a4;
    /* 0x1a8 */ u32 unk_1a8;
};

class Unk_ov004_0224c7d0 : public Unk_020d89c8 {
public:
    virtual BOOL vfunc_48();
    virtual void vfunc_4c(s32 a, u32 b);
    virtual BOOL vfunc_58();
    virtual BOOL vfunc_7c();
    virtual void vfunc_80();

    void func_ov004_02218a20(u32 v);
    BOOL func_ov004_02218a48(s32 idx);
    BOOL func_ov004_02218bd4();
    BOOL func_ov004_02218cdc();

    /* 0x894 */ u16 unk_894;
    /* 0x896 */ u8 pad_896[2];
    /* 0x898 */ u8 unk_898[0x8a4 - 0x898];
    /* 0x8a4 */ s32 unk_8a4;
    /* 0x8a8 */ u8 unk_8a8[100];
    /* 0x90c */ u8 pad_90c[4];
    /* 0x910 */ s32 unk_910;
    /* 0x914 */ Unk_ov004_0224c740 unk_914;
    /* 0xac0 */ u8 unk_ac0;
    /* 0xac1 */ u8 pad_ac1[3];
    /* 0xac4 */ s32 unk_ac4;
    /* 0xac8 */ u32 unk_ac8[3];
    /* 0xad4 */ u8 unk_ad4;
    /* 0xad5 */ u8 pad_ad5;
    /* 0xad6 */ u8 unk_ad6;
    /* 0xad7 */ u8 pad_ad7;
    /* 0xad8 */ u8 unk_ad8;
    /* 0xad9 */ u8 pad_ad9[3];
    /* 0xadc */ s32 unk_adc;
    /* 0xae0 */ s32 unk_ae0;
};

static inline BOOL Unk_ov004_02218a48_Range(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov004_02218a48_Eq(u16 *p, u32 k) {
    u16 t;
    if (func_0204b2d4(p)) {
        t = k;
        if (func_0204b25c(p) == func_0204b25c(&t)) {
            return TRUE;
        }
        return FALSE;
    }
    if (*p == k) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c7d0::func_ov004_02218a20(u32 v) {
    s32 i;
    for (i = 0; i < 99; i++) {
        unk_8a8[i] = unk_8a8[i + 1];
    }
    unk_8a8[99] = v;
}

BOOL Unk_ov004_0224c7d0::func_ov004_02218a48(s32 idx) {
    u16 v;
    void *p = func_ov004_02235720(func_ov004_0223584c(), idx);
    if (p == 0) {
        return FALSE;
    }
    if (func_ov004_02234440(idx) == 0) {
        return FALSE;
    }
    v = func_0204b248(func_ov004_022087a4(p), 0);
    BOOL r0 = FALSE;
    volatile u16 *pv = &v;
    u32 w = *pv;
    u32 w2 = *pv;
    if (w2 >= 0x3d84 && w <= 0x3e03) {
        r0 = TRUE;
    }
    if (r0 || (w >= 0x3ea4 && w <= 0x3f23) || (w >= 0x4224 && w <= 0x42a3) ||
        (w >= 0x3f24 && w <= 0x3fa3) || Unk_ov004_02218a48_Eq(&v, 0x409c) || Unk_ov004_02218a48_Eq(&v, 0x40a0) ||
        Unk_ov004_02218a48_Eq(&v, 0x3820)) {
        return FALSE;
    }
    {
        s32 i;
        for (i = 0; i < 100; i++) {
            if (idx == unk_8a8[i]) {
                return FALSE;
            }
        }
    }
    return TRUE;
}

BOOL Unk_ov004_0224c7d0::func_ov004_02218bd4() {
    if (!Unk_ov004_02218a48_Eq(&unk_894, 0xfff1)) {
        return TRUE;
    }
    if (unk_adc == 0 || unk_ad8 >= 3) {
        if (unk_ac4 == 0) {
            unk_ac4 = 0x258;
        }
        return FALSE;
    }
    s32 start = func_02063b8c(unk_adc);
    s32 i = start;
    do {
        if (func_ov004_02218a48(i)) {
            void *e = func_ov004_02235720(func_ov004_0223584c(), i);
            unk_894 = func_0204b248(func_ov004_022087a4(e), 0);
            func_ov004_022088c0(e, unk_898);
            func_ov004_022189dc(this, e);
            func_ov004_02218a20(i);
            unk_8a4 = i;
            goto ok;
        }
        i++;
        if (i >= unk_adc) {
            i = 0;
        }
    } while (i != start);
    if (unk_ac4 == 0) {
        unk_ac4 = 0x258;
    }
    return FALSE;
ok:
    return TRUE;
}

BOOL Unk_ov004_0224c7d0::func_ov004_02218cdc() {
    Unk_ov004_02218cdc_Rec rec;
    u32 z[2];
    Unk_ov004_02218cdc_Rec *src = func_020947f0(4);
    rec.a = src->a;
    rec.b = src->b;
    rec.c = src->c;
    if (func_0202ff64(&rec)) {
        unk_ac0 = 5;
        func_0203d704(this, 0);
        return TRUE;
    }
    if (func_0203e2f4()) {
        return FALSE;
    }
    {
        if (unk_ac4 != 0) {
            unk_ac4 = unk_ac4 - 1;
            if (unk_ac4 == 1) {
                unk_ac0 = 3;
                func_0203d704(this, 0);
                return TRUE;
            }
        }
    }
    z[0] = 0;
    z[1] = 0;
    func_0209d498(z);
    s32 n = func_0209d374(unk_ac8, z);
    {
        if (unk_ae0 != 0) {
            unk_ae0 = unk_ae0 + 1;
        }
    }
    if (n >= 0x3c || unk_ae0 > 0x258) {
        unk_ac0 = 3;
        func_0203d704(this, 0);
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c7d0::vfunc_4c(s32 cmd, u32 b) {
    switch (cmd) {
    case 1:
        unk_914.vfunc_08();
        func_02015ab0(&unk_914, func_0201bc4c(this, 4));
        if (unk_ac0 == 5 || unk_ac0 == 3) {
            func_ov004_02219f18(this, 7);
        } else {
            func_ov004_02219f18(this, 6);
        }
        if (unk_ac0 == 0) {
            func_ov004_0223584c();
            unk_adc = (s32)func_ov004_02235788();
            func_020b1028();
            func_0202ffb0(0);
            func_ov004_02235d04();
            func_0209d498(unk_ac8);
        }
        break;
    case 0:
        unk_914.vfunc_08();
        func_02015ab0(&unk_914, func_0201bc4c(this, 4));
        func_ov004_02219f18(this, 6);
        break;
    case 8:
        if (unk_ac0 == 6) {
            Unk_ov004_02218cdc_Rec rec;
            Unk_ov004_02218cdc_Rec *src = func_020947f0(4);
            rec.a = src->a;
            rec.b = src->b;
            rec.c = src->c;
            if (func_0202ff64(&rec)) {
                func_0202ff44();
                break;
            }
        }
        func_ov004_02219f18(this, 3);
        break;
    }
}

BOOL Unk_ov004_0224c7d0::vfunc_58() {
    if (func_02014220(unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224c7d0::vfunc_48() {
    if (func_02014220(unk_618) == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c740::vfunc_18() {
    u8 buf;
    u16 tmp;
    u32 sel;
    s32 st;
    func_02015a5c(this);
    st = func_020aa514();
    sel = 0xff;
    Unk_ov004_0224c7d0 *b = unk_1a0;
    if (b->unk_ac0 == 2) {
        switch (unk_1e) {
        case 6:
        case 7:
        case 10:
        case 11:
            func_0200301c(func_020805c4(b->unk_82c), data_ov004_022507d8, 0x28, data_ov004_0224c890);
            if (st == 0) {
                func_02015170(this, 0x38, 0);
                func_020151d0(this, 2);
                func_ov004_022195fc(this, 1);
            } else {
                sel = (u8)(func_02063b8c(2) + 8);
                func_ov004_02219084();
            }
            break;
        case 8:
        case 9:
            break;
        case 12:
        case 13:
            func_0200301c(func_020805c4(b->unk_82c), data_ov004_022507d8, 0x28, data_ov004_0224c890);
            if (st == 0) {
                void *r7 = func_02098750(func_0209750c());
                st = func_0201ad68(unk_1a0, unk_1a4, 0);
                tmp = func_0204b718(unk_1a4, 0, 0);
                if (tmp == 0xfff1) {
                    tmp = 0x1492;
                }
                if (func_02097a90(r7, unk_1a4, 1, 0) == 0) {
                    sel = (u8)(func_02063b8c(2) + 0x12);
                } else {
                    switch (st) {
                    case 0:
                        func_02014e60(this, &tmp, 0, 5, 0);
                        func_0201ad4c(unk_1a0, unk_1a4);
                        sel = (u8)(func_02063b8c(2) + 0xe);
                        func_ov004_02219378(this);
                        break;
                    case 1:
                        func_02014e60(this, &tmp, 0, 5, 0);
                        sel = (u8)(func_02063b8c(2) + 0xe);
                        func_0201ad4c(unk_1a0, unk_1a4);
                        func_ov004_02219378(this);
                        break;
                    case 2:
                        break;
                    }
                }
            } else {
                sel = (u8)(func_02063b8c(2) + 0x10);
                func_ov004_02219084();
            }
            break;
        }
        if (sel != 0xff) {
            buf = sel;
            func_02067a84(unk_3c, &buf, data_ov004_022507d8);
        }
    }
}

void Unk_ov004_0224c740::func_ov004_02219084() {
    unk_1a0->unk_894 = 0xfff1;
}

void Unk_ov004_0224c740::vfunc_14() {
    u8 buf;
    Unk_ov004_0224c7d0 *b = unk_1a0;
    u32 st = b->unk_ac0;
    if (st == 5 || st == 3) {
        if (st == 5) {
            b->unk_ac0 = 6;
        } else {
            b->unk_ac0 = 4;
        }
        func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov004_02250828, 0x28, data_ov004_0224c89c);
        buf = func_02063b8c(3);
        func_02067a84(unk_3c, &buf, data_ov004_02250828);
    } else {
        switch (unk_1e) {
        case 0:
        case 1:
        case 2:
            if (st == 6 || st == 1) {
                func_02067a84(unk_3c, data_021edb5c, 0);
            } else if (st == 0) {
                void *q;
                if (func_0209750c() != 0) {
                    q = func_0209888c(func_0209750c());
                } else {
                    q = 0;
                }
                void *o = unk_1a0->unk_82c;
                if (o != 0 && q != 0) {
                    func_0207c5e0(o, q);
                }
                Unk_ov004_0224c7d0 **pp = &unk_1a0;
                (*pp)->unk_ac0 = 1;
                (*pp)->unk_ad4 = 0x28;
                func_02067a84(unk_3c, data_021edb5c, 0);
                func_ov004_02219f18(unk_1a0, 1);
            }
            break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 10:
        case 11:
        case 12:
        case 13:
            break;
        case 8:
        case 9:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
            func_0208a58c();
            break;
        }
    }
}

static inline BOOL Unk_ov004_022191cc_Is1(u8 *p) {
    if (*p == 1) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_ov004_0224c7d0::vfunc_7c() {
    if (Unk_ov004_022191cc_Is1(data_020e416c) == 0 || unk_ad6 == 0) {
        return TRUE;
    }
    return FALSE;
}

void Unk_ov004_0224c7d0::vfunc_80() {
    unk_ad6 = 1;
}

void Unk_ov004_0224c740::vfunc_78(void *arg) {
    Unk_ov004_022191f8_Out *out = (Unk_ov004_022191f8_Out *)arg;
    u16 tmp;
    void *q = func_0209888c(func_0209750c());
    void *o = func_0207f55c(unk_1a0->unk_82c, q);
    if (o != 0) {
        func_02080ecc(o, 0, 0, 0);
    }
    Unk_ov004_0224c7d0 *b = unk_1a0;
    u32 st = b->unk_ac0;
    if (st == 5) {
        func_0200301c(func_020805c4(b->unk_82c), data_ov004_02250800, 0x28, data_ov004_0224c8a4);
        out->unk_00 = (u32)data_ov004_02250800;
        out->unk_04 = func_02063b8c(3);
    } else if (st == 3) {
        func_0200301c(func_020805c4(b->unk_82c), data_ov004_02250800, 0x28, data_ov004_0224c890);
        out->unk_00 = (u32)data_ov004_02250800;
        out->unk_04 = func_02063b8c(2) + 2;
    } else {
        switch (st) {
        case 0:
            func_0200301c(func_020805c4(b->unk_82c), data_ov004_02250800, 0x28, data_ov004_0224c8b0);
            out->unk_04 = func_02063b8c(3);
            break;
        case 1:
            func_0200301c(func_020805c4(b->unk_82c), data_ov004_02250800, 0x28, data_ov004_0224c890);
            out->unk_04 = func_02063b8c(2);
            break;
        case 2: {
            func_0200301c(func_020805c4(b->unk_82c), data_ov004_02250800, 0x28, data_ov004_0224c890);
            u16 *p = &unk_1a0->unk_894;
            BOOL eq;
            if (func_0204b2d4(p)) {
                tmp = 0xfff1;
                if (func_0204b25c(p) == func_0204b25c(&tmp)) {
                    eq = TRUE;
                } else {
                    eq = FALSE;
                }
            } else {
                if (*p == 0xfff1) {
                    eq = TRUE;
                } else {
                    eq = FALSE;
                }
            }
            if (eq || unk_1a0->unk_910 == 5) {
                out->unk_04 = func_02063b8c(2) + 4;
            } else {
                func_0201578c(this, &unk_1a0->unk_894, 0, 7);
                out->unk_04 = func_02063b8c(2) + 6;
            }
            break;
        }
        }
        out->unk_00 = (u32)data_ov004_02250800;
    }
}
