#include "types.h"

extern "C" {
extern u16 data_020c6cc8;
extern u32 data_020c6d1c;
extern u8 data_021f4880[];
extern u8 data_021edb5c[];
extern u8 data_ov004_0225042c[];
extern u8 data_ov004_0224c0f4[];
s32 func_02019614(void *, s32, u32);
s32 func_0201a6c0(void *, s32, s32, s32, void *, s32, u32, s32);
void *func_020679b4(void *);
s32 func_020aa514(void *);
s32 func_0206ea84(void (*)());
s32 func_02063b8c(s32);
void func_02067a84(void *, void *, s32);
void func_02067abc(void *, void *, s32);
void func_02014e60(void *, void *, s32, s32, s32);
void func_02099014(void *, s32);
void func_ov004_022159a4(void *);
void func_ov004_02215e2c();
void *func_ov004_02215a50(void *);
void *func_02080dd8(void *);
void func_02080da4(void *, s8);
void func_0201578c(void *, void *, s32, s32);
void func_0206338c(void *, s32, s32);
void func_02063388(void *);
void func_02062f94(u16 *, void *, s32, s32, s32, s32, s32);
void *func_0209750c();
void func_0206277c(u16 *, void *, s32);
void *func_020805c4(void *);
void func_0200301c(void *, void *, s32, void *);
s32 func_ov004_022159f0(void *);
s32 func_ov004_022159bc(void *);
void func_ov004_022159d8(void *);
void func_020157b8(void *, void *, s32);
void *func_0208175c(s32);
s32 func_02081780();
s32 func_0206ec6c();
s32 func_0206ed18();
void *func_0206ed38();
u16 func_02099048();
s32 func_0204be70(u16 *);
void func_02099064(void *);
void func_02014ce4(void *, void *, s32, s32, s32);
void *func_0207e268(void *);
u32 func_0209a610(void *);
u32 func_0209b354(u32);
s32 func_0204b2d4(void *);
void func_0202d388(void *, void *, u32);
}

class Unk_02015b54 {
public:
    Unk_02015b54();
    virtual ~Unk_02015b54();
};

class Unk_020d89c8 {
public:
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_10();
};

class Unk_ov004_0224c034 : public Unk_020d89c8 {
public:
    BOOL func_ov004_02215098();
    void func_ov004_022150f0();
    BOOL func_ov004_02215208(s32 idx);

    void func_ov004_02214e58();
    void func_ov004_02214dd0();
    void func_ov004_02214d60();
    void func_ov004_02214cd4();
    void func_ov004_02214c9c();
    void func_ov004_02214c5c();
    void func_ov004_02214c38();
    void func_ov004_02214c28();
    void func_ov004_02214ab4();
    void func_ov004_02214a90();
    void func_ov004_02214a4c();
    void func_ov004_02214a44();
    void func_ov004_02214a3c();
    void func_ov004_02214a04();

    BOOL func_ov004_02214dd4();
    BOOL func_ov004_02214dc0();
    BOOL func_ov004_02214d50();
    BOOL func_ov004_02214ca0();
    BOOL func_ov004_02214c68();
    BOOL func_ov004_02214c58();
    BOOL func_ov004_02214c34();
    BOOL func_ov004_02214be8();
    BOOL func_ov004_02214ab0();
    BOOL func_ov004_02214a80();
    BOOL func_ov004_02214a48();
    BOOL func_ov004_02214a40();
    BOOL func_ov004_02214a38();

    u8 pad_04[0x3b0 - 4];
    u8 unk_3b0[0x564 - 0x3b0];
    u8 unk_564[0x82c - 0x564];
    void *unk_82c;
    u8 pad_830[0x894 - 0x830];
    s32 unk_894;
    u8 unk_898[4];
    u8 unk_89c[0x8d8 - 0x89c];
    void *unk_8d8;
    u8 pad_8dc[0xa48 - 0x8dc];
    u8 unk_a48[4];
};

struct Unk_ov004_0221572c_Sub {
    u8 pad_00[8];
    u32 unk_08;
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
    Unk_ov004_0221572c_Sub *unk_3c;
    u8 pad_40[0x1a0 - 0x40];
};

class Unk_ov004_0224bfa4 : public Unk_020d8938 {
public:
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_78(void *arg);
    virtual void vfunc_80();
    virtual void vfunc_84();

    void func_ov004_0221570c(Unk_ov004_0224c034 *owner);
    void *func_ov004_0221588c();
    void func_ov004_022158a8(s32 v);
    BOOL func_ov004_022158c4(u16 *p);

    Unk_ov004_0224c034 *unk_1a0;
};

struct Unk_ov004_022154ec_Obj {
    Unk_ov004_022154ec_Obj(s32, s32);
    ~Unk_ov004_022154ec_Obj();
    u32 pad[2];
};

static inline BOOL Unk_ov004_022158c4_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" u16 func_ov004_022154ec(s32 n);

BOOL Unk_ov004_0224c034::func_ov004_02215098() {
    if (func_02019614(unk_564, 1, data_020c6cc8)) {
        func_0201a6c0(unk_3b0, 1, 0, 0, data_021f4880, 4, data_020c6d1c, 1);
        return TRUE;
    }
    return FALSE;
}

typedef void (Unk_ov004_0224c034::*Unk_ov004_022150f0_Fn)();
typedef BOOL (Unk_ov004_0224c034::*Unk_ov004_02215208_Fn)();

void Unk_ov004_0224c034::func_ov004_022150f0() {
    static Unk_ov004_022150f0_Fn tbl[14] = {
        &Unk_ov004_0224c034::func_ov004_02214e58,
        &Unk_ov004_0224c034::func_ov004_02214dd0,
        &Unk_ov004_0224c034::func_ov004_02214d60,
        &Unk_ov004_0224c034::func_ov004_02214cd4,
        &Unk_ov004_0224c034::func_ov004_02214c9c,
        &Unk_ov004_0224c034::func_ov004_02214c5c,
        &Unk_ov004_0224c034::func_ov004_02214c38,
        &Unk_ov004_0224c034::func_ov004_02214c28,
        &Unk_ov004_0224c034::func_ov004_02214ab4,
        &Unk_ov004_0224c034::func_ov004_02214a90,
        &Unk_ov004_0224c034::func_ov004_02214a4c,
        &Unk_ov004_0224c034::func_ov004_02214a44,
        &Unk_ov004_0224c034::func_ov004_02214a3c,
        &Unk_ov004_0224c034::func_ov004_02214a04,
    };
    if (unk_894 < 14) {
        (this->*tbl[unk_894])();
    }
}

BOOL Unk_ov004_0224c034::func_ov004_02215208(s32 idx) {
    static Unk_ov004_02215208_Fn tbl[14] = {
        &Unk_ov004_0224c034::func_ov004_02215098,
        &Unk_ov004_0224c034::func_ov004_02214dd4,
        &Unk_ov004_0224c034::func_ov004_02214dc0,
        &Unk_ov004_0224c034::func_ov004_02214d50,
        &Unk_ov004_0224c034::func_ov004_02214ca0,
        &Unk_ov004_0224c034::func_ov004_02214c68,
        &Unk_ov004_0224c034::func_ov004_02214c58,
        &Unk_ov004_0224c034::func_ov004_02214c34,
        &Unk_ov004_0224c034::func_ov004_02214be8,
        &Unk_ov004_0224c034::func_ov004_02214ab0,
        &Unk_ov004_0224c034::func_ov004_02214a80,
        &Unk_ov004_0224c034::func_ov004_02214a48,
        &Unk_ov004_0224c034::func_ov004_02214a40,
        &Unk_ov004_0224c034::func_ov004_02214a38,
    };
    if (idx < 14) {
        if ((this->*tbl[idx])()) {
            unk_894 = idx;
            return TRUE;
        }
    }
    return FALSE;
}

void Unk_ov004_0224bfa4::vfunc_18() {
    u8 b[3];
    s32 r = func_020aa514(func_020679b4(unk_1a0->unk_8d8));
    switch (unk_1e) {
    case 4:
    case 5:
        if (r == 0) {
            if (func_0206ea84(func_ov004_02215e2c)) {
                b[0] = func_02063b8c(2) + 9;
                func_02067a84(unk_1a0->unk_8d8, &b[0], 0);
            } else {
                b[1] = 6;
                func_02067a84(unk_1a0->unk_8d8, &b[1], 0);
            }
        } else {
            b[2] = func_02063b8c(2) + 7;
            func_02067a84(unk_1a0->unk_8d8, &b[2], 0);
        }
        break;
    }
}

void Unk_ov004_0224bfa4::vfunc_14() {
    u8 b[3];
    switch (unk_1e) {
    case 4:
    case 5:
    case 6:
        break;
    case 7:
    case 8:
        b[0] = data_021edb5c[0];
        func_02067abc(unk_3c, &b[0], 0);
        break;
    case 9:
    case 10:
        unk_1a0->func_ov004_02215208(10);
        break;
    case 11:
    case 12:
    case 13:
    case 14:
        b[1] = func_02063b8c(2) + 0xf;
        func_02067a84(unk_1a0->unk_8d8, &b[1], 0);
        break;
    case 15:
    case 16:
        func_02014e60(this, unk_1a0->unk_a48, 0, 5, 0);
        func_02099014(unk_1a0->unk_a48, 0);
        unk_1a0->func_ov004_02215208(13);
        break;
    case 17:
    case 18:
        func_ov004_022159a4(this);
        break;
    case 19:
    case 20:
    case 21:
    case 22:
        b[2] = data_021edb5c[0];
        func_02067abc(unk_3c, &b[2], 0);
        break;
    }
}

void Unk_ov004_0224bfa4::vfunc_10() {
    switch (unk_1e) {
    case 0xf:
    case 0x10: {
        volatile u16 v;
        v = func_ov004_022154ec((s32)func_ov004_0221588c());
        *(u16 *)unk_1a0->unk_a48 = v;
        func_0201578c(this, (void *)&v, 1, 7);
        break;
    }
    }
}

extern "C" u16 func_ov004_022154ec(s32 n) {
    u16 w0, w1, w2, w3, w4;
    if (n <= 0) {
        Unk_ov004_022154ec_Obj o(1, 0);
        func_02062f94(&w1, &o, 0, 0, 1, 1, 0);
        u16 r = w1;
        return r;
    }
    if (n <= 0x3f) {
        if (func_02063b8c(2) == 0) {
            Unk_ov004_022154ec_Obj o(0, 0);
            func_02062f94(&w2, &o, 0, 0, 1, 1, 0);
            u16 r = w2;
            return r;
        } else {
            Unk_ov004_022154ec_Obj o(2, 0);
            func_02062f94(&w3, &o, 0, 0, 1, 1, 0);
            u16 r = w3;
            return r;
        }
    }
    func_0206277c(&w0, func_0209750c(), 0);
    if (w0 == 0xfff1) {
        Unk_ov004_022154ec_Obj o(0, 0);
        func_02062f94(&w4, &o, 0, 0, 1, 1, 0);
        u16 r = w4;
        return r;
    }
    return w0;
}

void Unk_ov004_0224bfa4::vfunc_78(void *arg) {
    u8 *out = (u8 *)arg;
    func_0200301c(func_020805c4(unk_1a0->unk_82c), data_ov004_0225042c, 0x28, data_ov004_0224c0f4);
    *(u32 *)out = (u32)data_ov004_0225042c;
    if (unk_1a0->unk_894 == 9) {
        out[4] = func_02063b8c(2);
    } else {
        s32 k = 3;
        if (func_ov004_022159f0(this)) {
            k = 1;
        } else if (func_ov004_022159bc(this)) {
            k = 2;
        }
        func_ov004_022159d8(this);
        switch (k) {
        case 1:
            out[4] = func_02063b8c(2) + 2;
            break;
        case 2:
            out[4] = func_02063b8c(4) + 0x13;
            break;
        default:
            out[4] = func_02063b8c(2) + 4;
            break;
        }
        Unk_ov004_0224c034 *p = unk_1a0;
        if (p->unk_8d8) {
            if (p && p->unk_82c) {
                func_020157b8(unk_1a0->unk_89c, func_020805c4(p->unk_82c), 1);
            }
            s32 i = 0;
            Unk_ov004_0224c034 **pp = &unk_1a0;
            goto test;
            for (;;) {
                void *q;
                q = func_0208175c(i);
                if (q && q != *pp) {
                    func_020157b8(unk_1a0->unk_89c, func_020805c4(*(void **)((u8 *)q + 0x82c)), 0);
                    break;
                }
                i++;
            test:
                if (i >= func_02081780()) break;
            }
            u16 w = 0x1100;
            func_0201578c(this, &w, 0, 7);
            func_0201578c(this, &w, 1, 7);
        }
    }
}

void Unk_ov004_0224bfa4::func_ov004_0221570c(Unk_ov004_0224c034 *owner) {
    func_0202d388(this, owner, 0x11);
    unk_1a0 = owner;
}

void Unk_ov004_0224bfa4::vfunc_80() {
    u8 b0, b1, b2;
    u16 x;
    if (unk_1a0->unk_894 == 0xb) {
        if (func_0206ec6c()) {
            if (func_0206ed18() == 0) {
                unk_3c->unk_08 = 1;
                b0 = func_02063b8c(2) + 7;
                func_02067a84(unk_3c, &b0, 0);
                unk_1a0->func_ov004_02215208(6);
            } else {
                void *r6 = func_0206ed38();
                x = func_02099048();
                s32 r4 = func_0204be70(&x);
                func_02099064(r6);
                func_0201578c(this, &x, 0, 7);
                if (func_ov004_022158c4(&x)) {
                    b1 = func_02063b8c(2) + 0xd;
                    func_02067a84(unk_3c, &b1, 0);
                    func_ov004_022158a8(5);
                    if (r4 >= 1000) func_ov004_022158a8(5);
                    if (r4 >= 2000) func_ov004_022158a8(10);
                    func_02014ce4(this, &x, 0, 5, 0);
                    unk_1a0->func_ov004_02215208(12);
                } else {
                    b2 = func_02063b8c(2) + 0xb;
                    func_02067a84(unk_3c, &b2, 0);
                    func_ov004_022158a8(2);
                    if (r4 >= 1000) func_ov004_022158a8(5);
                    if (r4 >= 2000) func_ov004_022158a8(5);
                    func_02014ce4(this, &x, 0, 5, 0);
                    unk_1a0->func_ov004_02215208(12);
                }
            }
        }
    }
}

void Unk_ov004_0224bfa4::vfunc_84() {
    if (unk_1a0->unk_894 == 0xc) {
        unk_3c->unk_08 = 1;
    }
}

void *Unk_ov004_0224bfa4::func_ov004_0221588c() {
    void *p = func_ov004_02215a50(this);
    if (p) {
        return func_02080dd8(p);
    }
    return 0;
}

void Unk_ov004_0224bfa4::func_ov004_022158a8(s32 v) {
    void *p = func_ov004_02215a50(this);
    if (p) {
        func_02080da4(p, v);
    }
}

BOOL Unk_ov004_0224bfa4::func_ov004_022158c4(u16 *p) {
    BOOL r;
    if (unk_1a0 && unk_1a0->unk_82c) {
        u32 c = func_0209b354(func_0209a610(func_0207e268(unk_1a0->unk_82c)));
        r = FALSE;
        switch (c) {
        case 0:
            if (*p >= 0x12b0 && *p <= 0x12e7) r = TRUE;
            break;
        case 1:
            if (*p >= 0x12e8 && *p <= 0x131f) r = TRUE;
            break;
        case 2:
            if (*p >= 0x450c && *p <= 0x45db) r = TRUE;
            break;
        case 3:
            if (*p >= 0x11a8 && *p <= 0x12a7) r = TRUE;
            break;
        case 4:
            if (func_0204b2d4(p)) {
                if (!Unk_ov004_022158c4_Range(p, 0x450c, 0x45db)) r = TRUE;
            }
            break;
        }
        return r;
    }
    return FALSE;
}
