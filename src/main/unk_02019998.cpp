#include "types.h"

extern "C" {
extern u8 data_020d7858[];
extern s32 data_020c6d40[];
s32 func_0205c5e8(void *p);
s32 func_0205c5dc(void *p);
void *func_02081e5c(void *p);
void func_0205ce78(void *h, s32 a, s32 b, s32 c);
void *func_0205cf60(void *h);
void *func_0205cf54(void *h);
s32 func_02106824(void *p, s32 v);
void func_02055e4c(void *p, void *a, s32 b, s32 c, s32 d, s32 e);
void func_02055df0(void *p);
void func_02055eec(void *p);
void func_0208211c(void *p);
void func_02063c7c(void *p);
void func_02063c94(void *p);
void func_02055cd0(void *p, void *q);
void func_02055d18(void *p, void *q);
BOOL func_02055d60(void *p, void *q, u32 r);
BOOL func_02056654(void *p);
void *func_02081ed0(void *p);
BOOL func_02082140(void *p);
void *func_02081de8(void *p);
BOOL func_02055f1c(void *p, s32 a, s32 b, s32 c, s32 d);
void func_02077b58(void *a, s32 b);
s32 func_02077b44(void *a);
s32 func_0205d1f8(void *a);
BOOL func_0201a1cc(s32 a, s32 b);
s32 func_0201a140();
s32 func_02063b8c(s32 a);
s32 func_02003efc();
s32 func_02003e60(s32 a, s32 b, s32 c, s32 d);
s32 func_02003e70(s32 a, s32 b, s32 c, s32 d);
s32 func_02003f0c(u16 a);
s32 func_02003f1c(u16 a);
u8 *func_02018984(u32 a);
void func_020902d4(s32 h, void *a, void *b, s32 c);
void func_020902f8(s32 h);
s32 func_02090308(u32 id, u32 b, void *a, void *c);
void func_02115fb4(void *p, s32 v, s32 n);
void func_02116048(void *src, void *dst, s32 n);
void func_020e7530(s16 *p, s32 target, s32 step);
s32 func_020e96a4(void *a, void *b);
}

struct Unk_02063cfc { Unk_02063cfc(); ~Unk_02063cfc(); u32 unk_00; };
struct Unk_02081e44 { Unk_02081e44(); ~Unk_02081e44(); u32 pad[2]; };
struct Unk_02081f2c { Unk_02081f2c(); ~Unk_02081f2c(); u32 pad[2]; };
struct Unk_02081eb8 { Unk_02081eb8(); ~Unk_02081eb8(); u32 pad[2]; };
struct Unk_02055fe8 { Unk_02055fe8(); ~Unk_02055fe8(); u32 unk_00; u32 unk_04; u32 unk_08; u32 pad[0x20 / 4]; };

struct Unk_02019cac_Owner {
    virtual void v00();
    virtual void v04();
    virtual void v08();
    virtual void v0c();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2c();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3c();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4c();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5c();
    virtual void v60();
    virtual void v64();
    virtual void v68();
    virtual void *vfunc_6c();
    u8 pad[0x148 - 4];
    s32 unk_148;
};

struct Unk_02019dd8 : Unk_02063cfc {
    Unk_02081e44 unk_04;
    Unk_02081f2c unk_0c;
    Unk_02081eb8 unk_14;
    Unk_02055fe8 unk_1c;
    Unk_02055fe8 unk_48;
    s32 unk_74;
    s32 unk_78;
    s32 unk_7c;
    s32 unk_80;
    u8 unk_84;

    Unk_02019dd8();
    ~Unk_02019dd8();
    void func_02019998();
    void func_020199c8();
    void func_020199d0();
    BOOL func_020199e0(u32 a);
    BOOL func_020199fc(void *m, void *q, u32 r);
    void func_02019a38(void *a, s32 b, s32 c);
    void func_02019a84(s32 t, s32 u, s32 x, s32 mode);
    void func_02019b1c();
    void func_02019b44(s32 i);
    void func_02019b7c(s32 v, u32 w);
    BOOL func_02019bdc();
    void func_02019c24();
    BOOL func_02019c50(s32 a, s32 b, s32 c);
    s32 func_02019c70(s32 v);
    void func_02019c7c();
    BOOL func_02019c90(s32 v);
    BOOL func_02019cac(Unk_02019cac_Owner *o);
    s32 func_02019d8c();
    BOOL func_02019d90();
};

void Unk_02019dd8::func_02019998() {
    func_02055eec(&unk_1c);
    func_02055eec(&unk_48);
    func_0208211c(&unk_0c);
    func_0208211c(&unk_14);
    func_0208211c(&unk_04);
}

void Unk_02019dd8::func_020199c8() {
    func_02063c7c(this);
}

void Unk_02019dd8::func_020199d0() {
    func_02055cd0(&unk_48, data_020d7858);
}

BOOL Unk_02019dd8::func_020199e0(u32 a) {
    return func_020199fc(&unk_48, data_020d7858, a);
}

BOOL Unk_02019dd8::func_020199fc(void *m, void *q, u32 r) {
    if (func_02019d90()) {
        func_02055d18(m, q);
        if (func_02055d60(m, q, r)) {
            return TRUE;
        }
        func_02055cd0(m, q);
    }
    return FALSE;
}

void Unk_02019dd8::func_02019a38(void *a, s32 b, s32 c) {
    if (func_02019d90()) {
        s32 t = func_0205c5e8(a);
        s32 u = func_0205c5dc(a);
        if (t == 0x16f) {
            t = 0;
        }
        if (u == 0x16f) {
            u = 0xba;
        }
        func_02019a84(t, u, b, c);
    }
}

void Unk_02019dd8::func_02019a84(s32 t, s32 u, s32 x, s32 mode) {
    if (func_02019d90()) {
        void *h = func_02081e5c(&unk_14);
        if (t != 0 || unk_74 != t) {
            func_0205ce78(h, t, 1, 0);
            func_02106824(func_0205cf60(h), 0);
            func_02055e4c(&unk_1c, func_0205cf60(h), 0, 0, x, 0x1000);
            unk_74 = t;
            unk_1c.unk_08 = 0;
            func_02055df0(&unk_1c);
        }
        if (mode == 2 || !func_02019c90(unk_78)) {
            func_02019b7c(u, 0);
        } else {
            unk_7c = u;
        }
    }
}

void Unk_02019dd8::func_02019b1c() {
    if (unk_7c == 0x16f) {
        unk_7c = 0xba;
    }
    func_02019b7c(unk_7c, 0);
    unk_7c = 0x16f;
}

void Unk_02019dd8::func_02019b44(s32 i) {
    if (i >= 0 && i < 2) {
        if (!func_02019c90(unk_78)) {
            unk_7c = unk_78;
        }
        func_02019b7c(data_020c6d40[i], 0);
    }
}

void Unk_02019dd8::func_02019b7c(s32 v, u32 w) {
    if (func_02019d90()) {
        void *h = func_02081e5c(&unk_14);
        func_0205ce78(h, v, 1, 0);
        func_02055e4c(&unk_48, func_0205cf54(h), 0, 0, w, 0x1000);
        unk_48.unk_08 = 0;
        unk_78 = v;
        func_02019c24();
        func_02055df0(&unk_48);
    }
}

BOOL Unk_02019dd8::func_02019bdc() {
    BOOL r = FALSE;
    if (func_02019c90(unk_78)) {
        r = func_02019c50(unk_80, (u32)(unk_48.unk_08 << 4) >> 16, (u32)(unk_48.unk_04 << 4) >> 16);
    } else if (func_02056654(&unk_48)) {
        r = TRUE;
    }
    return r;
}

void Unk_02019dd8::func_02019c24() {
    if (func_02019c90(unk_78)) {
        func_02019c7c();
        unk_48.unk_08 = func_02019c70(unk_80) << 12;
    }
}

BOOL Unk_02019dd8::func_02019c50(s32 a, s32 b, s32 c) {
    s32 r = 0;
    if (a == 0) {
        if (b == 5) {
            return 1;
        }
    } else if (b >= c - 0x1000) {
        r = 1;
    }
    return r;
}

s32 Unk_02019dd8::func_02019c70(s32 v) {
    s32 r = 0;
    if (v == 1) {
        r = 5;
    }
    return r;
}

void Unk_02019dd8::func_02019c7c() {
    unk_80 = func_0201a140();
}

BOOL Unk_02019dd8::func_02019c90(s32 v) {
    switch (v) {
    case 0x137:
    case 0x138:
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02019dd8::func_02019cac(Unk_02019cac_Owner *o) {
    void *r6 = o->vfunc_6c();
    if (func_02081ed0(&unk_0c) == 0 && r6 != 0) {
        if (!func_02082140(&unk_0c)) {
            return FALSE;
        }
        void *a = func_02081ed0(&unk_0c);
        func_02077b58(a, (s32)r6);
        if (!func_02082140(&unk_04)) {
            return FALSE;
        }
        void *h = func_02081de8(&unk_04);
        s32 fl = o->unk_148;
        s32 x = func_02077b44(a);
        if (!func_02055f1c(&unk_1c, fl, x, 1, func_0205d1f8(h))) {
            return FALSE;
        }
        s32 fl2 = o->unk_148;
        s32 y = func_02077b44(a);
        if (!func_02055f1c(&unk_48, fl2, y, 1, func_0205d1f8(h))) {
            return FALSE;
        }
        if (!func_02082140(&unk_14)) {
            return FALSE;
        }
        unk_74 = 0x16f;
        unk_78 = 0x16f;
        func_02063c94(this);
        unk_84 = 1;
    }
    return TRUE;
}

s32 Unk_02019dd8::func_02019d8c() {
    return unk_78;
}

BOOL Unk_02019dd8::func_02019d90() {
    if (unk_84) {
        return TRUE;
    }
    return FALSE;
}

Unk_02019dd8::~Unk_02019dd8() {}

Unk_02019dd8::Unk_02019dd8() {
    unk_84 = 0;
    unk_74 = 0x16f;
    unk_78 = 0x16f;
    unk_7c = 0x16f;
    unk_80 = 2;
}

struct Unk_02019e2c_Slot {
    s16 unk_00;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_02019e2c_Entry {
    s32 unk_00;
    void *unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 pad_0a[2];
};

struct Unk_02019e2c {
    s32 unk_00[4];
    Unk_02019e2c_Slot unk_10[2];
    s32 unk_18;
    s32 unk_1c;
    s32 unk_20;
    u8 unk_24;
    u8 unk_25;
    u8 unk_26;
    u8 unk_27;

    void func_02019e2c();
    void func_02019e34(void *a, s16 b, s32 c, u16 d);
    void func_02019e8c();
    void func_02019ec0(void *a, s16 b, s32 c, u16 d, s32 j);
    void func_02019f58();
    void func_02019f80();
    void func_02019fb0(Unk_02019e2c_Slot *s);
    void func_0201a040(Unk_02019e2c_Entry *tbl, s32 idx);
    void func_0201a070(void *a, u32 b, s32 c);
    s32 func_0201a0a0();
    void func_0201a0bc(void *dst, void *src, s32 n);
    void func_0201a0c8(void *p, s32 n);
    void func_0201a0f4();
};

void Unk_02019e2c::func_02019e2c() {
    func_02019e8c();
}

void Unk_02019e2c::func_02019e34(void *a, s16 b, s32 c, u16 d) {
    func_02019f80();
    s32 zero = 0;
    for (s32 i = 0; i < 4; i++) {
        if (unk_00[i] != ~zero) {
            func_020902d4(unk_00[i], a, &b, zero);
        }
    }
    for (s32 j = 0; j < 2; j++) {
        func_02019ec0(a, b, c, d, j);
    }
}

void Unk_02019e2c::func_02019e8c() {
    s32 zero = 0;
    for (s32 i = 0; i < 4; i++) {
        if (unk_00[i] != ~zero) {
            func_020902f8(unk_00[i]);
            unk_00[i] = ~zero;
        }
    }
    func_02019f58();
}

void Unk_02019e2c::func_02019ec0(void *a, s16 b, s32 c, u16 d, s32 j) {
    Unk_02019e2c_Slot *s = &unk_10[j];
    s32 id = s->unk_00;
    if (id >= 0 && id < 0x66) {
        if (unk_1c == c && unk_1c != 0x137) {
            u16 dd = d;
            if (s->unk_02 == dd) {
                s32 k = func_0201a0a0();
                if (k != ~0) {
                    unk_00[k] = func_02090308((u16)s->unk_00, unk_27, a, &b);
                    if (s->unk_03 == 0) {
                        func_0201a0c8(s, 1);
                    }
                }
            }
            u8 *bank = func_02018984(unk_25);
            s32 bv = *(s16 *)(bank + unk_20 * 12 + 10);
            if (bv == dd) {
                func_02019fb0(s);
            }
        }
    }
}

void Unk_02019e2c::func_02019f58() {
    if (unk_24 == 1 && unk_26 != 0) {
        func_02003efc();
    }
    unk_24 = 2;
}

void Unk_02019e2c::func_02019f80() {
    if (unk_24 == 1 && unk_26 == 0) {
        func_02003e60(unk_18, unk_25 + 0x84, 0x7f, 0);
    }
}

void Unk_02019e2c::func_02019fb0(Unk_02019e2c_Slot *s) {
    u8 *bank = func_02018984(unk_25);
    if (s->unk_03 == 1 || unk_24 == 2) {
        unk_24 = bank[0x19];
        if (unk_24 == 1) {
            if (unk_26 == 0) {
                func_02003e60(unk_18, unk_25 + 0x84, 0x7f, 0);
            } else {
                func_02003f0c(unk_25 + 0x84);
            }
        } else {
            if (unk_26 == 0) {
                func_02003e70(unk_18, unk_25 + 0x84, 0x7f, 0);
            } else {
                func_02003f1c(unk_25 + 0x84);
            }
        }
    }
}

void Unk_02019e2c::func_0201a040(Unk_02019e2c_Entry *tbl, s32 idx) {
    Unk_02019e2c_Entry *e = &tbl[idx];
    if (e->unk_09 != 0) {
        func_02019e8c();
    }
    if (e->unk_04 != 0) {
        func_0201a070(e->unk_04, e->unk_08, e->unk_00);
        unk_20 = idx;
    }
}

void Unk_02019e2c::func_0201a070(void *a, u32 b, s32 c) {
    func_0201a0c8(unk_10, 2);
    func_0201a0bc(unk_10, a, b);
    unk_1c = c;
}

s32 Unk_02019e2c::func_0201a0a0() {
    s32 r, i;
    i = 0;
    r = ~i;
    for (; i < 4; i++) {
        if (unk_00[i] == r) {
            r = i;
            break;
        }
    }
    return r;
}

void Unk_02019e2c::func_0201a0bc(void *dst, void *src, s32 n) {
    func_02116048(src, dst, n << 2);
}

void Unk_02019e2c::func_0201a0c8(void *p, s32 n) {
    Unk_02019e2c_Slot *q = (Unk_02019e2c_Slot *)p;
    s32 zero = 0;
    for (s32 i = 0; i < n; i++) {
        func_02115fb4(q, zero, 4);
        q->unk_00 = ~zero;
        q++;
    }
}

void Unk_02019e2c::func_0201a0f4() {
    func_02115fb4(this, 0xff, 0x10);
    func_0201a0c8(unk_10, 2);
    unk_1c = 0x137;
    unk_24 = 2;
    unk_25 = 0x3c;
    unk_27 = 0;
    unk_26 = 0;
}

struct Unk_0201a194 {
    u8 unk_00;
    s32 unk_04;

    Unk_0201a194();
    ~Unk_0201a194();
    s32 func_0201a15c();
    void func_0201a160(s32 v);
    BOOL func_0201a164();
    void func_0201a174();
    void func_0201a17c();
    void func_0201a184();
};

s32 Unk_0201a194::func_0201a15c() {
    return unk_04;
}

void Unk_0201a194::func_0201a160(s32 v) {
    unk_04 = v;
}

BOOL Unk_0201a194::func_0201a164() {
    if (unk_00 == 1) {
        return TRUE;
    }
    return FALSE;
}

void Unk_0201a194::func_0201a174() {
    unk_00 = 0;
}

void Unk_0201a194::func_0201a17c() {
    unk_00 = 1;
}

void Unk_0201a194::func_0201a184() {
    unk_00 = 0;
    unk_04 = 2;
}

Unk_0201a194::~Unk_0201a194() {}

Unk_0201a194::Unk_0201a194() {
    func_0201a184();
}

extern "C" s32 func_0201a140() {
    s32 r = func_02063b8c(4);
    s32 v = 1;
    if (r & v) {
        v = 0;
    }
    return v;
}

struct Unk_0201a1e0_Target;
struct Unk_0201a1e0_Base;
typedef void (Unk_0201a1e0_Target::*Unk_0201a1e0_Fn)(Unk_0201a1e0_Base *);
extern Unk_0201a1e0_Fn data_021be090[6];
struct Unk_0201a1e0_Target { u32 pad; };
struct Unk_0201a1e0_Base {
    u8 pad[0x3b0];
    Unk_0201a1e0_Target unk_3b0;
};

struct Unk_0201a25c_Src {
    u8 pad_00[0x5c];
    s32 unk_5c;
    u8 pad_60[0x8c - 0x60];
    s16 unk_8c;
    s16 unk_8e;
};

struct Unk_0201a13c {
    u8 unk_00;
    u8 pad_01[7];
    u8 unk_08[0x10];
    u8 unk_18;
    u8 pad_19;
    s16 unk_1a;
    s16 unk_1c;
    s16 unk_1e;
    u8 pad_20[2];
    s16 unk_22;
    s16 unk_24;
    s16 unk_26;
    s16 unk_28;
    u8 unk_2a;
    u8 pad_2b[0x5c - 0x2b];
    s32 unk_5c;
    u8 unk_60;
    u8 pad_61[0x7c - 0x61];

    Unk_0201a13c();
    ~Unk_0201a13c();
    BOOL func_0201a1a4();
    BOOL func_0201a1bc(s32 v);
    void func_0201a1e0(Unk_0201a1e0_Base *base);
    void func_0201a220();
    void func_0201a25c(Unk_0201a25c_Src *o);
    s32 func_0201a53c(void *a, void *b, s32 c);
    s32 func_0201a578(void *a, void *b, s32 c);
    s32 func_0201a5b8(void *a, void *b, s32 c);
    BOOL func_0201a734(void *a);
};

Unk_0201a13c::~Unk_0201a13c() {}
Unk_0201a13c::Unk_0201a13c() {}

BOOL Unk_0201a13c::func_0201a1a4() {
    if (unk_18 == 0 && unk_2a == 1) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_0201a13c::func_0201a1bc(s32 v) {
    return func_0201a1cc(v, unk_28);
}

extern "C" BOOL func_0201a1cc(s32 a, s32 b) {
    if (a < 0) {
        a = -a;
    }
    if (a < b) {
        return TRUE;
    }
    return FALSE;
}

void Unk_0201a13c::func_0201a1e0(Unk_0201a1e0_Base *base) {
    if (unk_18 == 0 && unk_00 < 6) {
        Unk_0201a1e0_Fn *pf = &data_021be090[unk_00];
        Unk_0201a1e0_Target *t = &base->unk_3b0;
        (t->**pf)(base);
    }
}

void Unk_0201a13c::func_0201a220() {
    if (unk_22 != unk_26) {
        func_020e7530(&unk_22, unk_26, unk_24);
    }
    if (unk_1a != unk_1e) {
        func_020e7530(&unk_1a, unk_1e, unk_1c);
    }
}

void Unk_0201a13c::func_0201a25c(Unk_0201a25c_Src *o) {
    s32 r6 = 0;
    s32 r7 = 0;
    u8 sp[12];
    s32 d = func_020e96a4(&unk_08, &o->unk_5c);
    s32 lim;
    unk_2a = 0;
    lim = unk_5c;
    if (lim == 0 || (d < 0 ? -d : d) < lim) {
        s32 t = func_0201a5b8(&unk_08, &o->unk_5c, o->unk_8e);
        if (unk_60 == 0 || func_0201a1bc(t)) {
            r6 = func_0201a578(&unk_08, &o->unk_5c, o->unk_8e);
            if (func_0201a734(sp)) {
                r7 = func_0201a53c(&unk_08, sp, o->unk_8c);
                unk_2a = 1;
            }
        }
    }
    if (unk_22 != r6) {
        func_020e7530(&unk_22, r6, unk_24);
    }
    if (unk_1a != r7) {
        func_020e7530(&unk_1a, r7, unk_1c);
    }
    if (unk_22 != r6 || unk_1a != r7) {
        unk_2a = 0;
    }
}
