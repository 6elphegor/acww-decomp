#include "types.h"

struct Unk_0202b4ac_Data {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0202b4ac_Rec {
    u8 pad_00[0x1d];
    union {
        u8 unk_1d;
        struct {
            u8 f0 : 1;
            u8 f1 : 1;
            u8 f2 : 1;
        } bits;
    };
};

struct Unk_0201d2d0_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_0202b4ac_Str {
    u8 c[2];
};

struct Unk_0202bd3c_Arr {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_0202bd3c_Bytes {
    u8 pad_00[2];
    u8 unk_02;
    u8 unk_03;
    u8 unk_04;
};

class Unk_020ad700 {
public:
    void func_020ad5c0(void *p);
};

class Unk_0202b4ac_VBase {
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
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual void vfunc_a8();
    virtual void vfunc_ac();
    virtual BOOL vfunc_b0();
};

class Unk_0202b4ac_Owner : public Unk_0202b4ac_VBase {
public:
    u8 pad_04[0x5c - 4];
    s32 unk_5c[3];
    u8 pad_68[0x82c - 0x68];
    void *unk_82c;
};

class Unk_0201d2d0 : public Unk_0202b4ac_VBase {
public:
    void func_0202b4ac(u32 a, void *b);
    void func_0202b4e8(u32 a, u32 b);
    void func_0202b520(Unk_0201d2d0_Out *out);
    BOOL func_0202b998(s32 x);
    BOOL func_0202b9a4(s32 x);
    BOOL func_0202b9b0(s32 x);
    Unk_0202b4ac_Data *func_0202b9bc(u32 *out, Unk_0202b4ac_Rec *rec);
    BOOL func_0202b9e4(Unk_0202b4ac_Rec *rec);
    BOOL func_0202ba10();
    Unk_0202b4ac_Data *func_0202ba28(s32 x);
    BOOL func_0202ba80(volatile s32 *out, void *p);
    Unk_0202b4ac_Data *func_0202bab4();
    BOOL func_0202bae0(s32 x);
    Unk_0202b4ac_Data *func_0202baec(u32 *out, void *scene);
    BOOL func_0202bb48(s32 x);
    BOOL func_0202bb54();
    BOOL func_0202bb84();
    s32 func_0202bb88(s32 *out);
    void func_0202bcdc(u8 *a, void *b, u32 c);
    void func_0202bd3c(void *s1, u8 *tbl, void *p2, u8 p3, Unk_0202bd3c_Arr *arr);
    void func_0202bd3c(void *s1, u8 *tbl, void *p2, u32 p3, Unk_0202bd3c_Arr *arr);

    void func_0201577c(u32 a, void *c, void *d, void *e);
    void func_0201578c(u32 a, u32 b, u32 c);
    void func_02015818(u32 a, u32 b);
    void func_02015958(s32 a, u32 b, s32 c, s32 d, s32 e);
    void func_0202b444();
    void func_0202be64(void *a, u8 *b, void *c, u32 d, Unk_0202bd3c_Arr *arr);

    u8 pad_04[0x3c - 4];
    void *unk_3c;
    u8 pad_40[0xfc - 0x40];
    Unk_0202b4ac_Owner *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f[0x124 - 0x11f];
    u32 unk_124;
    void *unk_128;
    u8 pad_12c[0x138 - 0x12c];
    u8 unk_138;
    u8 pad_139[0x198 - 0x139];
    u16 unk_198;
    u8 unk_19a;
};

extern "C" {
void *func_0207f968(void *);
u32 func_0209b570(u32 *, u32);
void *func_0207e310(void *);
void *func_020805c4(void *);
u32 func_02003098(void *);
s32 func_0207856c(void *);
s32 func_020b8fe8();
void *func_0209750c();
s32 func_0207cdbc(void *);
s32 func_020ad330();
s32 func_020ad2c8();
void func_020ad778(void *);
void func_020ad760(void *);
Unk_020ad700 *func_020ad3bc(void *);
void func_02067a3c(void *, s32, void *);
s32 func_02072e44(void *);
s32 func_0208091c(void *);
s32 func_02098ffc();
void func_0206338c(void *, s32, s32);
void func_02062f94(void *, void *, s32, s32, s32, s32, s32);
void func_02063388(void *);
void func_02080930(void *);
s32 func_020b5254();
void *func_0207e268(void *);
void *func_0209a610(void *);
s32 func_0209b354(void *);
s32 func_020b50e8();
s32 func_020b51fc();
s32 func_020b5240(s32);
s32 func_020b51a4();
s32 func_0209ccd0();
void *func_020784f4(void *);
s32 func_0207846c(void *);
s32 func_02063b8c(s32);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
s32 func_02133150(s32, s32);
s32 func_02098778(void *);
s32 func_0202c094(void *, void *, s32, void *, u32);
u16 *func_02080e1c(void *);
s32 func_0207dfe8(void *);
void *func_0209888c(void *);
s32 func_02094058(void *);
void *func_0207f19c(void *);
s32 func_ov003_0222612c();
void *func_02094218(void *);
u16 *func_0209409c(void *);
void *func_02080e18(void *);
s32 func_02128930(void *, void *, s32);
void func_0209d498(void *);
void *func_02080ec8(void *);
s32 func_0209d3d0(void *, void *, s32);
s32 func_020030b4(void *);
s32 func_0209d3a4(void *, void *);
void *func_0209a60c(void *);
void *func_0209a940(void *);
s32 func_0209ac64(void *);
s32 func_0209a938(void *);
s32 func_0202bf84(void *, void *, void *, u32);
u16 *func_0209ab94(void *);
s32 func_0202c148(u16 *, u32, u32, u32, u32);
u16 *func_0209a8e8(void *);
u32 func_0202ce44(void *, s32);
s32 func_0202c33c(u16 *, u32, u32, u32, u32);
u32 *func_0209a8ec(void *);
void func_02077520(void *, void *);
}

extern Unk_0202b4ac_Data data_020c75c8, data_020c76e8, data_020c79a8, data_020c7870, data_020c78e0, data_020c75a0,
    data_020c7608, data_020c7540, data_020c7848, data_020c7688, data_020c7830, data_020c77f0, data_020c7860,
    data_020c7648, data_020c7640, data_020c78c0, data_020c75e8, data_020c7730, data_020c75d0, data_020c7748,
    data_020c7718, data_020c7780, data_020c7950, data_020c7810, data_020c75c0, data_020c7700, data_020c78c8;
extern Unk_0202b4ac_Data data_020c7b34[];
extern u8 data_020d8af4[], data_020d8a88[];
extern s8 data_020c74f8[];
extern u8 data_020e416c;
extern u8 data_021ed2c0[];
extern void *data_020cbb18;
extern u16 data_021d7352[];

static inline BOOL IsZero(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

static inline BOOL InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

struct Unk_0202b520_Pair {
    u16 unk_00;
    u16 unk_02;
};

void Unk_0201d2d0::func_0202b520(Unk_0201d2d0_Out *out) {
    void *scene = unk_fc->unk_82c;
    Unk_0202b4ac_Rec *rec = (Unk_0202b4ac_Rec *)func_0207e310(scene);
    u32 unk20;
    s32 status;
    s32 unk24;
    s32 kind;
    Unk_0202b4ac_Data *d;
    s32 sel;
    s32 v28;
    Unk_0202b520_Pair pair;
    s32 n;
    s32 v34;
    s32 x;
    u32 t[5];
    u32 obj[0x34 / 4];
    unk20 = func_02003098(func_020805c4(scene));
    n = 0;
    status = func_0202bb88(&n);
    unk24 = func_0207856c(rec);
    kind = func_020b8fe8();
    v34 = 0;
    func_0209750c();
    v28 = 0;
    sel = -1;
    pair.unk_00 = 0xfff1;
    x = sel;
    func_0202b444();
    if (func_0202bb84()) {
        d = &data_020c75c8;
        if (status == 0) {
            unk_138 = 1;
        }
    } else if (func_0202bb54()) {
        d = &data_020c76e8;
        if (status == 0) {
            unk_138 = 1;
        }
    } else if (func_0202bb48(status)) {
        d = func_0202baec((u32 *)&v34, scene);
    } else if (status == 6) {
        d = &data_020c79a8;
        v34 = 7;
        v28 = 3;
    } else if (func_0202ba80(&x, &unk_fc->unk_5c)) {
        d = func_0202ba28(x);
    } else if (func_0202ba10()) {
        d = &data_020c7870;
    } else if (func_0202bae0(status)) {
        d = func_0202bab4();
    } else if (status == 4) {
        d = &data_020c78e0;
        if (n >= 0x186) {
            sel = 1;
            v34 = 5;
            v28 = sel;
        }
    } else if (status == 3) {
        d = &data_020c75a0;
    } else if (func_0202b9e4(rec)) {
        d = func_0202b9bc((u32 *)&v34, rec);
    } else if (func_0202b9b0(unk24)) {
        d = &data_020c7608;
    } else if (func_0202b9a4(unk24)) {
        d = &data_020c7540;
    } else if (func_0202b998(unk24)) {
        d = &data_020c7848;
    } else if (func_0207cdbc(scene) && func_020ad330() && !func_020ad2c8()) {
        func_020ad778(obj);
        func_020ad3bc(data_021ed2c0)->func_020ad5c0(obj);
        d = &data_020c7688;
        func_02067a3c(unk_3c, 4, obj);
        func_020ad760(obj);
    } else if (func_02072e44(data_020cbb18) == 0 && unk_128 != NULL && func_0208091c(unk_128) != 0 &&
               func_02098ffc() != -1) {
        d = &data_020c7830;
        func_0206338c(t, 0, 0);
        func_02062f94(&pair.unk_02, t, 0, 0, 1, 1, 0);
        unk_198 = pair.unk_02;
        func_02063388(t);
        unk_19a = 0;
        func_0201578c((u32)&unk_198, 0, 7);
        if (unk_128 != NULL) {
            func_02080930(unk_128);
        }
    } else if (func_020b5254()) {
        d = &data_020c77f0;
        if (func_0209b354(func_0209a610(func_0207e268(scene))) != 4) {
            v34 = 1;
        }
    } else if (func_020b50e8() == 10) {
        d = &data_020c7860;
        if (func_0209b354(func_0209a610(func_0207e268(scene))) != 3) {
            v34 = 1;
        }
    } else if (func_020b51fc() && func_020b5240(func_020b50e8()) == 1) {
        d = &data_020c7648;
    } else if (status == 1) {
        if (func_020b51a4()) {
            d = &data_020c7640;
        } else if (kind == 1) {
            d = &data_020c78c0;
        } else if (kind == 2) {
            d = &data_020c75e8;
        } else {
            d = &data_020c7730;
        }
        v34 = func_0209ccd0();
    } else if (func_0209b354(func_0209a610(func_0207e268(scene))) == 8) {
        d = &data_020c75d0;
    } else if (func_0207846c(func_020784f4(rec)) != 0) {
        d = &data_020c7748;
        if (func_0207846c(func_020784f4(rec)) == 2) {
            v34 = 1;
        }
    } else if (unk24 == 1) {
        d = &data_020c7718;
        v34 = func_0209ccd0();
    } else {
        BOOL f = IsZero(data_020e416c);
        if (f && kind == 1) {
            d = &data_020c7780;
        } else if (f && kind == 2) {
            d = &data_020c7950;
        } else {
            d = &data_020c7810;
            if (func_02063b8c(9) != 0) {
                v28 = (u8)(d->unk_04 - 1);
            }
            v34 = func_0209ccd0();
        }
    }
    if (d != NULL) {
        if (sel == -1) {
            sel = d->unk_04;
        }
        func_0202d184(this, &unk_100, &unk_11e, 30, unk20, d->unk_00, (u8)sel, v34, v28);
    }
    if (n > 0) {
        s32 a, b;
        if (n >= 0x46) {
            a = 9;
        } else {
            a = n / 7;
        }
        if (n >= 0x186) {
            b = 12;
        } else {
            b = n / 30;
        }
        func_02015958(a, 2, 1, 0, 0);
        func_02015958(b, 3, 2, 0, 0);
    }
    rec->unk_1d |= 4;
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_0202b4ac(u32 a, void *b) {
    u8 *p = (u8 *)func_0207f968(b);
    if (p) {
        Unk_0202b4ac_Str s;
        s.c[0] = *p;
        s.c[1] = 0;
        func_0201577c(a, &s, data_020d8af4, &s.c[1]);
    }
}

void Unk_0201d2d0::func_0202b4e8(u32 a, u32 b) {
    u32 v = 0;
    u32 r = func_0209b570(&v, b);
    Unk_0202b4ac_Str s;
    s.c[0] = v;
    s.c[1] = 0;
    func_0201577c(a, &s, (void *)r, &s.c[1]);
}

BOOL Unk_0201d2d0::func_0202b998(s32 x) {
    if (x == 4) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_0202b9a4(s32 x) {
    if (x == 3) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_0202b9b0(s32 x) {
    if (x == 2) {
        return TRUE;
    }
    return FALSE;
}

Unk_0202b4ac_Data *Unk_0201d2d0::func_0202b9bc(u32 *out, Unk_0202b4ac_Rec *rec) {
    *out = func_0209ccd0();
    rec->bits.f0 = 1;
    return &data_020c75c0;
}

BOOL Unk_0201d2d0::func_0202b9e4(Unk_0202b4ac_Rec *rec) {
    void *p = func_0209750c();
    if (rec->bits.f0 == 0 && p != NULL && func_02098778(p) != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_0202ba10() {
    return unk_fc->vfunc_b0();
}

Unk_0202b4ac_Data *Unk_0201d2d0::func_0202ba28(s32 x) {
    u16 v;
    u16 t;
    if (x == -1) {
        x = data_020c74f8[func_02063b8c(2)];
    }
    if (x != -1) {
        if ((u32)x < 0x38) {
            t = x + 0x12b0;
        } else {
            t = 0x12b0;
        }
        v = t;
        func_0201578c((u32)&v, 0, 7);
    }
    return &data_020c7700;
}

BOOL Unk_0201d2d0::func_0202ba80(volatile s32 *out, void *p) {
    u32 buf[3];
    *out = func_0202c094(buf, data_020c74f8, 2, p, 0x6000);
    s32 t = *out;
    BOOL r = FALSE;
    if (t != -1) {
        r = TRUE;
    }
    return r;
}

Unk_0202b4ac_Data *Unk_0201d2d0::func_0202bab4() {
    if (unk_128) {
        func_02015818((u32)func_02080e1c(unk_128), 1);
    }
    return &data_020c78c8;
}

BOOL Unk_0201d2d0::func_0202bae0(s32 x) {
    if (x == 5) {
        return TRUE;
    }
    return FALSE;
}

Unk_0202b4ac_Data *Unk_0201d2d0::func_0202baec(u32 *out, void *scene) {
    void *p = func_0209750c();
    s32 t = func_0207dfe8(scene);
    if (t == 1) {
        if (func_02094058(func_0209888c(p)) != 0) {
            t = 0;
        }
    }
    if (t == 2) {
        func_02015818((u32)func_0207f19c(scene), 1);
    } else {
        *out = func_0209ccd0();
    }
    return &data_020c7b34[t];
}

BOOL Unk_0201d2d0::func_0202bb48(s32 x) {
    if (x == 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_0202bb54() {
    BOOL f = IsZero(data_020e416c);
    if (f && func_ov003_0222612c() != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201d2d0::func_0202bb84() {
    return FALSE;
}

s32 Unk_0201d2d0::func_0202bb88(s32 *out) {
    BOOL f5;
    void *h;
    void *sc;
    u16 *b;
    u16 *a;
    u32 arr[2];
    Unk_0202b4ac_Rec *rec;
    rec = func_0209750c() ? (Unk_0202b4ac_Rec *)func_0209888c(func_0209750c()) : NULL;
    arr[0] = 0;
    arr[1] = 0;
    if (unk_128 == NULL) {
        return 0;
    }
    if (rec != NULL && func_02094218(rec) != NULL && func_02094058(rec) != 0) {
        a = func_0209409c(rec);
        b = func_0209409c(func_02080e18(unk_128));
        if (b[0] != a[0] || func_02128930(b + 1, a + 1, 8) != 0) {
            return 6;
        }
    }
    func_0209d498(arr);
    h = func_02080ec8(unk_128);
    if ((u32)data_021d7352 != 0) {
        b = func_02080e1c(unk_128);
        if (*(volatile u16 *)data_021d7352 != b[0] || func_02128930((u16 *)((u8 *)data_021d7352 + 2), b + 1, 8) != 0) {
            return 5;
        }
    }
    if (func_0209d3d0(h, arr, 0x3f) == 1) {
        return 1;
    }
    sc = unk_fc->vfunc_64();
    f5 = FALSE;
    if (sc != NULL && func_020030b4(func_020805c4(sc)) != 0 && func_0207e310(sc) != NULL &&
        ((Unk_0202b4ac_Rec *)func_0207e310(sc))->bits.f2 != 0) {
        f5 = TRUE;
    }
    *out = func_0209d3a4(h, arr);
    if (func_02094058(rec) != 0) {
        if (*out >= 1 && !f5) {
            return 1;
        }
        return 2;
    }
    if (*out >= 60) {
        return 4;
    }
    if (*out >= 14) {
        return 3;
    }
    if (*out >= 1 && !f5) {
        return 1;
    }
    return 2;
}

void Unk_0201d2d0::func_0202bcdc(u8 *a, void *b, u32 c) {
    if (vfunc_64()) {
        void *s = func_0209a60c(func_0207e268(vfunc_64()));
        Unk_0202bd3c_Arr arr;
        arr.unk_00 = 0;
        arr.unk_04 = 0;
        func_0209d498(&arr);
        func_0202be64(s, a, b, c, &arr);
        func_0202bd3c(s, a, b, c, &arr);
    }
}

void Unk_0201d2d0::func_0202bd3c(void *s1, u8 *tbl, void *p2, u8 p3, Unk_0202bd3c_Arr *arr) {
    Unk_0202bd3c_Bytes *bytes = (Unk_0202bd3c_Bytes *)arr;
    void *v;
    s32 t;
    u32 lim;
    s32 roll;
    u16 val;
    v = func_0209a940(s1);
    if (func_0209ac64(v) == 1) {
        t = func_0209a938(s1);
        if (func_0202bf84(this, s1, arr, p3) != 0) {
            if (t < 5) {
                lim = tbl[t];
            } else {
                lim = 0;
            }
            roll = func_02063b8c(100);
            val = *func_0209ab94(v);
            switch (t) {
            case 0:
                break;
            case 1:
            case 3:
            case 4:
                if (roll < (s32)lim) {
                    if (func_0202c148(&val, bytes->unk_02, bytes->unk_02, bytes->unk_04, bytes->unk_03) != 0) {
                        *func_0209a8e8(s1) = val;
                    }
                }
                break;
            case 2:
                if (roll < (s32)lim) {
                    u32 r = func_0202ce44(p2, 4);
                    if (func_0202c33c(&val, r, r + 1, bytes->unk_04, bytes->unk_03) != 0) {
                        *func_0209a8e8(s1) = val;
                    }
                }
                break;
            }
            if (vfunc_64()) {
                if (InRange(func_0209a8e8(s1), 0x12e8, 0x131f)) {
                    func_02077520(vfunc_64(), func_0209a8e8(s1));
                }
            }
            u32 w0 = arr->unk_00;
            u32 w1 = arr->unk_04;
            u32 *d = func_0209a8ec(s1);
            d[0] = w0;
            d[1] = w1;
        }
    }
}
