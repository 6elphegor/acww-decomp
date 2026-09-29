#include "types.h"

class Unk_02027a34;

struct Unk_02027a34_Out {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_02027a34_Data {
    u32 unk_00;
    u8 unk_04;
};

struct Unk_02027a34_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};

struct Unk_02027a34_Menu {
    u8 pad_00[0x20];
    u8 unk_20;
    s8 unk_21;
};

typedef void (Unk_02027a34::*Unk_02027a34_Fn)();
typedef void (Unk_02027a34::*Unk_02027a34_OutFn)(Unk_02027a34_Out *);
typedef BOOL (Unk_02027a34::*Unk_02027a34_TestFn)(void *, void *);

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void *func_0202d114(void *);
void func_0202d120(void *, void *);
void func_0202d1d4(void *, void *);
void func_0202d20c(void *);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void func_0201c91c(void *, void *, s32, void *, void *);
void func_0201c870(void *, void *);
void func_020679c0(void *, s32);
void func_02067abc(void *, u8 *, u32);
void func_02014e60(void *, void *, s32, s32, s32);
void func_020157b8(void *, void *, s32);
void func_020157e8(void *, void *, s32);
void func_0201578c(void *, void *, s32, s32);
void *func_0207bc44(void *, void *, s32);
void func_02133ef8(void *, u32);
s32 func_02063b8c(s32);
void *func_0209750c();
void *func_0209865c(void *);
void *func_02098750(void *);
s32 func_02097edc(void *);
void func_02097f30(void *, void *, s32, s32);
s32 func_0209ac64(void *);
void *func_0209abac(void *);
void *func_0209ab94(void *);
void *func_0209ac44(void *);
void func_0209ab98(void *, u32);
void func_0209d498(void *);
void func_0209d258(void *, u32);
void *func_0209a4e4(void *, s32);
void func_0209a4f4(void *, s32, void *, void *);
void func_0209ad80(void *);
void func_0207a624(void *);
void *func_0209a4f0(void *);
s32 func_020991e4();
s32 func_020991fc();
void func_0209a2c0(void *, s32);
s32 func_0207a484(void *);
s32 func_0207e334(void *);
void *func_0207a4b8(void *);
void *func_0209978c(void *);
s32 func_0209ad68(void *);
s32 func_02099624(void *, s32);
u16 *func_020994cc(void *);
s32 func_02094218(void *);
u16 *func_0209888c(void *);
s32 func_02128930(void *, void *, s32);
s32 func_020941e8(void *, void *);
s32 func_0209abc4(void *);
s32 func_020996b0(void *, void *);
void *func_0207e310(void *);
void *func_02078578(void *);
s32 func_02098044(void *, s32);
s32 func_0209ad28(void *);
s32 func_0209acac(void *);
}

extern Unk_02027a34_Data data_020c75a8, data_020c7638, data_020c7800, data_020c7658, data_020c7678, data_020c77f8, data_020c77e0, data_020c77e8, data_020c77c8;
extern Unk_02027a34_Fn data_020d7aa0, data_020d7a48, data_020d7c28, data_020d7c90, data_020d79b8, data_020d7c60, data_020d8000, data_020d7ce8, data_020d7d00, data_020d7d08, data_020d7cd8;
extern u8 data_021dfd8c[];
extern u8 data_021bf304[], data_021bf31c[], data_021bf2ec[], data_021bf2d4[], data_020d7868[];
extern u8 data_021be730[], data_020c74fc[], data_021be668[], data_020c7500[];
extern u8 data_021bf88c[], data_021bf82c[], data_021bf814[], data_021bf7fc[];

class Unk_02027a34 {
public:
    void func_02027a34(Unk_02027a34_Out *out);
    s32 func_02027b08();
    void func_02027b1c();
    void func_02027c24();
    void func_02027c6c(Unk_02027a34_Out *out);
    void func_02027cf8();
    void func_02027cfc(Unk_02027a34_Out *out);
    void func_02027d5c();
    void func_02027d78(Unk_02027a34_Out *out);
    void func_02027dec();
    void func_02027e9c(Unk_02027a34_Out *out);
    void func_02027f34();
    void func_02027f88();
    void func_02027fd8(Unk_02027a34_Out *out);
    void func_02028058(Unk_02027a34_Out *out, u32 idx);
    void func_020280c0();
    BOOL func_020281d8(void *p);
    BOOL func_0202830c(void *a, void *b);
    BOOL func_0202849c(void *a, void *b);
    BOOL func_020286fc(void *a, void *b);
    BOOL func_0202839c(void *a, void *b);
    void func_0202d1c0(Unk_02027a34_Fn fn);
    void func_0202d294(Unk_02027a34_Fn fn);
    void func_0202d33c(Unk_02027a34_Fn fn);

    u8 pad_00[0x3c];
    void *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_02027a34_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_02027a34_Fn unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_02027a34_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    u16 unk_120;
    u8 pad_122[0x13c - 0x122];
    void *unk_13c[5];
    u8 pad_150[0x154 - 0x150];
    u8 unk_154;
    u8 unk_155;
    u16 unk_156;
    void *unk_158;
    void *unk_15c;
};

void Unk_02027a34::func_02027a34(Unk_02027a34_Out *out) {
    Unk_02027a34_Data *d = NULL;
    s32 t = func_0209ac64(func_0202d114(this));
    switch (t) {
    case 10:
        d = &data_020c75a8;
        break;
    case 19:
        d = &data_020c7638;
        break;
    }
    if (d != NULL) {
        u32 v = func_02003098(func_020805c4(unk_fc->unk_82c));
        func_0202d184(this, &unk_100, &unk_11e, 30, v, d->unk_00, d->unk_04, (u32)func_0209abac(func_0202d114(this)), 0);
        if (unk_15c != NULL) {
            func_020157b8(this, func_0209a4e4(unk_15c, 0), 0);
            func_020157b8(this, func_0209a4e4(unk_15c, 1), 1);
            func_0201578c(this, func_0209ab94(func_0202d114(this)), 0, 7);
        }
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

s32 Unk_02027a34::func_02027b08() {
    return func_0209ac64(func_0202d114(this));
}

void Unk_02027a34::func_02027b1c() {
    void *p7 = func_0209750c();
    func_0209865c(p7);
    void *r6 = unk_fc->unk_82c;
    s32 r4 = 2;
    if (unk_15c != NULL) {
        s32 t = func_0209ac64(func_0202d114(this));
        void *h = func_020805c4(r6);
        func_0209a4f4(unk_15c, t, h, unk_158);
        func_0209ad80(func_0202d114(this));
        func_0207a624(data_021dfd8c);
        func_0202d120(this, func_0209a4f0(unk_15c));
        unk_120 = *(u16 *)func_0209ab94(func_0202d114(this));
        s32 k = func_0209ac64(func_0202d114(this));
        switch (k) {
        case 10: {
            s32 q = func_02097edc(func_02098750(p7));
            func_02097f30(func_02098750(p7), &unk_120, q, r4);
            break;
        }
        case 19: {
            s32 x = func_020991e4();
            if (x != 0) {
                func_0209a2c0(unk_15c, x);
            }
            r4 = 0;
            break;
        }
        }
    }
    func_02014e60(this, &unk_120, r4, 5, 0);
    func_0202d33c(data_020d7aa0);
    func_0202d294(data_020d7a48);
}

void Unk_02027a34::func_02027c24() {
    if (func_0202d114(this) != NULL) {
        void *p = func_0209ac44(func_0202d114(this));
        func_0209d498(p);
        func_0209d258(p, unk_154);
        func_0209ab98(func_0202d114(this), unk_155);
    }
}

void Unk_02027a34::func_02027c6c(Unk_02027a34_Out *out) {
    Unk_02027a34_Data *d = NULL;
    s32 t = func_0209ac64(func_0202d114(this));
    switch (t) {
    case 10:
        d = &data_020c7800;
        break;
    case 19:
        d = &data_020c7658;
        break;
    }
    if (d != NULL) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_156 = 0x5e;
}

void Unk_02027a34::func_02027cf8() {
}

void Unk_02027a34::func_02027cfc(Unk_02027a34_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7678.unk_00, data_020c7678.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_02027a34::func_02027d5c() {
    func_0209ad80(func_0202d114(this));
    func_0207a624(data_021dfd8c);
}

void Unk_02027a34::func_02027d78(Unk_02027a34_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c77f8.unk_00, data_020c77f8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7c28;
}

void Unk_02027a34::func_02027dec() {
    Unk_02027a34_Menu s;
    u8 *r4 = data_021bf304;
    s32 t = func_0209ac64(func_0202d114(this));
    switch (t) {
    case 10:
        if (func_0209750c() != NULL) {
            if (func_02097edc(func_02098750(func_0209750c())) != -1) {
                r4 = data_021bf31c;
            }
        }
        break;
    case 19:
        if (func_020991fc() != -1) {
            r4 = data_021bf31c;
        }
        break;
    }
    func_0201c95c(this, &s);
    func_0201c938(this, &s, 0, 0x21, 0x21, r4);
    func_0201c938(this, &s, 1, 0x22, 0x22, data_021bf2ec);
    s.unk_20 = 2;
    s.unk_21 = s.unk_20 - 1;
    func_0201c870(this, &s);
    func_0202d1c0(data_020d7c90);
    func_020679c0(unk_3c, 1);
}

void Unk_02027a34::func_02027e9c(Unk_02027a34_Out *out) {
    u8 tbl[3];
    tbl[0] = data_020d7868[0];
    tbl[1] = data_020d7868[1];
    tbl[2] = data_020d7868[2];
    unk_155 = func_02063b8c(3);
    unk_154 = tbl[unk_155];
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c77e0.unk_00, data_020c77e0.unk_04, unk_155, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_02027a34::func_02027f34() {
    u8 b;
    Unk_02027a34_Out out;
    func_0202d1d4(this, data_021bf2d4);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067abc(unk_3c, &b, out.unk_00);
}

void Unk_02027a34::func_02027f88() {
    u32 buf;
    func_02133ef8(&buf, 4);
    buf = (u32)func_020805c4(unk_fc->unk_82c);
    unk_158 = func_020805c4(func_0207bc44(data_021dfd8c, &buf, 1));
    func_020157b8(this, unk_158, 1);
}

void Unk_02027a34::func_02027fd8(Unk_02027a34_Out *out) {
    Unk_02027a34_Data *d = NULL;
    s32 t = func_0209ac64(func_0202d114(this));
    switch (t) {
    case 10:
        d = &data_020c77e8;
        break;
    case 19:
        d = &data_020c77c8;
        break;
    }
    if (d != NULL) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_02027a34::func_02028058(Unk_02027a34_Out *, u32 idx) {
    u8 b;
    Unk_02027a34_Out out;
    if (unk_13c[idx] != NULL) {
        func_0202d1d4(this, unk_13c[idx]);
    } else {
        func_0202d20c(this);
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
        if (out.unk_00 != 0) {
            b = out.unk_04;
            func_02067abc(unk_3c, &b, out.unk_00);
        }
    }
}

void Unk_02027a34::func_020280c0() {
    static Unk_02027a34_TestFn tbl[5] = { (Unk_02027a34_TestFn)data_020d7c60, (Unk_02027a34_TestFn)data_020d8000, (Unk_02027a34_TestFn)data_020d7ce8, (Unk_02027a34_TestFn)data_020d7d00, (Unk_02027a34_TestFn)data_020d7d08 };
    void *r6 = unk_fc->unk_82c;
    void *r7 = func_0209865c(func_0209750c());
    s32 i;
    for (i = 0; i < 5; i++) {
        if ((this->*tbl[i])(r6, r7) != 0) {
            break;
        }
    }
    if (i == 5) {
        Unk_02027a34_Menu s;
        func_0201c91c(this, &s, 0, data_020c74fc, data_021be730);
        func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
        s.unk_20 = 2;
        s.unk_21 = s.unk_20 - 1;
        func_0201c870(this, &s);
        func_0202d1c0(data_020d7cd8);
        func_020679c0(unk_3c, 1);
    }
}

BOOL Unk_02027a34::func_020281d8(void *arg) {
    Unk_02027a34_Menu s;
    void *r7 = data_021dfd8c;
    s32 r4 = func_0207a484(r7);
    if (r4 != -1) {
        if (r4 == func_0207e334(arg)) {
            void *p = func_0207a4b8(r7);
            void *v = func_0209978c(p);
            if (func_0209ad68(v) != 0) {
                if (func_02099624(p, 0) != 0) {
                    u16 *q = func_020994cc(p);
                    if (q != NULL) {
                        if (func_02094218(q) != 0) {
                            u16 *r6 = func_0209888c(func_0209750c());
                            u8 *msg;
                            func_0201c95c(this, &s);
                            if (r6[0] == q[0] && func_02128930(r6 + 1, q + 1, 8) == 0 && func_020941e8(r6, q) != 0) {
                                if (func_0209abc4(v) == 1) {
                                    msg = data_021bf88c;
                                } else {
                                    msg = data_021bf82c;
                                }
                            } else if (func_020996b0(p, r6) != 0) {
                                msg = data_021bf814;
                            } else {
                                msg = data_021bf7fc;
                            }
                            func_0201c91c(this, &s, 0, data_020c74fc, msg);
                            func_0201c91c(this, &s, 1, data_020c7500, data_021be668);
                            s.unk_20 = 2;
                            s.unk_21 = s.unk_20 - 1;
                            func_0201c870(this, &s);
                            func_0202d1c0(data_020d79b8);
                            func_020679c0(unk_3c, 1);
                            func_020157e8(this, q, 1);
                            return TRUE;
                        }
                    }
                }
            }
        }
    }
    return FALSE;
}

BOOL Unk_02027a34::func_0202830c(void *a, void *b) {
    void *s = func_02078578(func_0207e310(a));
    BOOL r = FALSE;
    if (func_0209ad68(s) != 0) {
        if (func_02098044(func_0209750c(), 1) == 0) {
            if (func_02063b8c(100) < 30) {
                switch (func_0209ad28(s)) {
                case 0:
                    r = func_0202849c(a, b);
                    break;
                case 1:
                    switch (func_0209acac(s)) {
                    case 0:
                        break;
                    case 1:
                        r = func_020286fc(a, b);
                        break;
                    case 3:
                        r = func_0202839c(a, b);
                        break;
                    }
                    break;
                }
            }
        }
    }
    return r;
}
