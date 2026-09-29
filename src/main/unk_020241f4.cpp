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

struct Unk_0201d2d0_Parent {
    u8 pad_00[0x82c];
    void *unk_82c;
};

struct Unk_0201d2d0_Id {
    u16 unk_00;
    u16 pad_02;
    u32 unk_04;
    u32 unk_08;
};

struct Unk_0201d2d0_Menu {
    u8 pad_00[8];
    u32 unk_08;
};

typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void func_0202d1d4(void *, void *);
void func_02067a84(void *, u8 *, u32);
void *func_0202d114(void *);
s32 func_0209ac64(void *);
void func_0202ce90(void *);
void *func_0206ed38();
s32 func_0206ed18();
void func_0209909c(u16 *, s32, void *);
void func_02014b78(void *);
void func_02014a4c(void *);
u16 *func_0207fd9c(void *);
void func_0201578c(void *, void *, s32, s32);
u32 func_0209a938(void *);
u32 func_02025a50(void *);
void func_0209a8b4(void *, u8);
void func_020776c0(void *, u8);
u8 *func_0207f968(void *);
s32 func_0204b2d4(void *);
s32 func_0204b25c(void *);
s32 func_0204b820(void *);
s32 func_0207f8ec(void *, void *);
s32 func_0207e7a8(void *, void *);
s32 func_02053228(void *);
void *func_02097f6c(void *, void *);
void *func_02098750(void *);
void *func_0209750c();
void func_02014ce4(void *, void *, s32, s32, s32);
void func_0201517c(void *, void (*)(), s32, s32);
void func_020151a8(void *, void *, s32, s32);
void func_020151d0(void *, s32);
void func_020295b4();
void func_020295f8();
void func_0202963c();
void *func_020290ac(void *);
void *func_020291b4(void *);
void *func_0209ab94(void *);
void func_02014e60(void *, void *, s32, s32, s32);
void func_02023da4(void *);
void func_0207cfb8(void *);
void func_02080b78(u32, void *);
void func_020777b8(void *, u32, void *);
void func_020776b4(void *, u32);
u32 func_0209a6c0(void *, u32);
void func_0209abb4(void *, s32);
void func_020776f0(void *, s32);
void *func_0207e310(void *);
s32 func_02078520(void *);
void func_02014918(void *);
}

extern Unk_0201d2d0_Data data_020c7820, data_020c76d0, data_020c76c0, data_020c78d8, data_020c78f0;
extern Unk_0201d2d0_Data data_020d7b08, data_020d7bf8;
extern u8 data_020c7a20[], data_020c7a2c[];
extern u8 data_020d85dc[], data_020d85e8[], data_020d85f4[], data_020d8204[];
extern Unk_0201d2d0_Fn data_020d7e88, data_020d7cd0, data_020d7b70, data_020d7a60, data_020d7d48, data_020d7a58, data_020d79c0, data_020d7ba8, data_020d7ac0;
extern u8 data_021bf73c[], data_021bf724[], data_021bf70c[], data_021bf6f4[], data_021bf6dc[], data_021bf3ac[], data_021bf76c[], data_021bf6ac[];

class Unk_0201d2d0 {
public:
    void func_0202d33c(Unk_0201d2d0_Fn fn);
    void func_0202d328(Unk_0201d2d0_Fn fn);
    void func_020241f4(Unk_0201d2d0_Out *out);
    void func_02024254();
    void func_020242d8();
    void func_02024370(Unk_0201d2d0_Out *out);
    void func_02024418(Unk_0201d2d0_Out *out);
    void func_020244b0();
    void func_020244b8(Unk_0201d2d0_Out *out);
    void func_02024554();
    void func_0202475c();
    void func_02024800();
    void func_020248e4();
    void func_02024964(Unk_0201d2d0_Out *out);
    void func_020249ec();
    void func_02024a1c();
    void func_02024a90(Unk_0201d2d0_Out *out);

    u8 pad_00[0x3c];
    Unk_0201d2d0_Menu *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201d2d0_Fn unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    Unk_0201d2d0_Id unk_120;
    u8 pad_12c[0x156 - 0x12c];
    u16 unk_156;
    u8 pad_158[0x160 - 0x158];
    void *unk_160;
    u8 pad_164[0x198 - 0x164];
    u16 unk_198;
};

static inline BOOL Unk_020242d8_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

static inline BOOL Unk_02024a90_Ne(Unk_0201d2d0_Id *p) {
    return p->unk_00 != 0xfff1;
}

void Unk_0201d2d0::func_020241f4(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7820.unk_00, data_020c7820.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02024254() {
    Unk_0201d2d0_Out out;
    u8 b;
    if (func_0209ac64(func_0202d114(this)) == 2) {
        func_0202d1d4(this, data_021bf73c);
    } else {
        if (func_0209ac64(func_0202d114(this)) == 3) {
            func_0202ce90(this);
        }
        func_0202d1d4(this, data_021bf724);
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_020242d8() {
    void *r2 = func_0206ed38();
    u16 h = 0xfff1;
    func_0209909c(&h, 0, r2);
    if (func_0209ac64(func_0202d114(this)) == 3) {
        func_02014b78(this);
        if (Unk_020242d8_R1(func_0207fd9c(unk_fc->unk_82c), 0x11a8, 0x12a7)) {
            unk_198 = *func_0207fd9c(unk_fc->unk_82c);
        }
    } else {
        func_02014a4c(this);
    }
    func_0202d33c(data_020d7e88);
}

void Unk_0201d2d0::func_02024370(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data d = data_020d7b08;
    switch (func_0209ac64(func_0202d114(this))) {
    case 2:
        d.unk_00 = (u32)data_020d85dc;
        break;
    case 3:
        d.unk_00 = (u32)data_020d85e8;
        break;
    default:
        d.unk_00 = (u32)data_020d85f4;
        break;
    }
    if (unk_3c) {
        unk_3c->unk_08 = 1;
    }
    if (d.unk_00 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02024418(Unk_0201d2d0_Out *out) {
    u32 r6 = 2;
    u32 r7 = (u32)data_020c7a20;
    if (func_0209ac64(func_0202d114(this)) == 4) {
        r7 = (u32)data_020c7a2c;
        r6 = 3;
    }
    if (unk_3c) {
        unk_3c->unk_08 = 1;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), r7, 3, 1, (u8)r6);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7cd0;
}

void Unk_0201d2d0::func_020244b0() {
    func_02014918(this);
}

void Unk_0201d2d0::func_020244b8(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data d = data_020d7bf8;
    if (func_0209ac64(func_0202d114(this)) == 4) {
        d.unk_00 = (u32)data_020d8204;
    }
    if (unk_3c) {
        unk_3c->unk_08 = 1;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7b70;
}

void Unk_0201d2d0::func_02024554() {
    Unk_0201d2d0_Out out;
    u8 b;
    void *r4 = unk_fc->unk_82c;
    switch (func_0209ac64(func_0202d114(this))) {
    case 2:
        func_0202d1d4(this, data_021bf70c);
        if (unk_120.unk_00 != 0xfff1) {
            func_0201578c(this, &unk_120, 0, 7);
        }
        if (func_0209a938(unk_160) >= 2 && func_0209a938(unk_160) <= 4) {
            u32 r6 = func_02025a50(&unk_120);
            func_0209a8b4(unk_160, r6);
            func_020776c0(r4, r6);
        }
        break;
    case 3: {
        if (func_0209a938(unk_160) >= 2) {
            func_0202d1d4(this, data_021bf70c);
        } else {
            u8 *r7 = func_0207f968(r4);
            u16 *p = func_0207fd9c(r4);
            BOOL eq;
            if (func_0204b2d4(&unk_120) != 0) {
                s32 a = func_0204b25c(&unk_120);
                if (a == func_0204b25c(p)) {
                    eq = TRUE;
                } else {
                    eq = FALSE;
                }
            } else {
                if (unk_120.unk_00 == *p) {
                    eq = TRUE;
                } else {
                    eq = FALSE;
                }
            }
            if (eq) {
                func_0202d1d4(this, data_021bf6f4);
            } else if (r7[1] != func_0204b820(&unk_120)) {
                func_0202d1d4(this, data_021bf70c);
            } else {
                func_0202d1d4(this, data_021bf6dc);
            }
        }
        if (unk_120.unk_00 != 0xfff1) {
            func_0201578c(this, &unk_120, 2, 7);
        }
        break;
    }
    case 4:
        if (func_0207f8ec(r4, &unk_120) > 0) {
            if (func_0204b2d4(&unk_120) != 0) {
                s32 v = func_0207e7a8(r4, &unk_120);
                s32 w = func_02053228(&unk_120);
                if (v >= 2 || (v == 1 && w == 2)) {
                    func_0202d1d4(this, data_021bf6f4);
                } else {
                    func_0202d1d4(this, data_021bf70c);
                }
            } else {
                func_0202d1d4(this, data_021bf6dc);
            }
        } else {
            func_0202d1d4(this, data_021bf6dc);
        }
        if (unk_120.unk_00 != 0xfff1) {
            func_0201578c(this, &unk_120, 0, 7);
        }
            break;
    }
    if (unk_3c) {
        unk_3c->unk_08 = 1;
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_0202475c() {
    Unk_0201d2d0_Out out;
    u8 b;
    if (func_0206ed18() == 0) {
        if (unk_3c) {
            unk_3c->unk_08 = 1;
        }
        func_0202d1d4(this, data_021bf3ac);
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        b = out.unk_04;
        func_02067a84(unk_3c, &b, out.unk_00);
    } else {
        void *r5 = func_0206ed38();
        unk_120.unk_00 = *(u16 *)func_02097f6c(func_02098750(func_0209750c()), r5);
        func_02014ce4(this, &unk_120, 0, 4, 0);
        func_0202d328(data_020d7d48);
    }
}

void Unk_0201d2d0::func_02024800() {
    switch (func_0209ac64(func_0202d114(this))) {
    case 2:
        if (func_0209a938(unk_160) <= 1) {
            func_0201517c(this, func_020295b4, 0xd, 1);
        } else {
            func_020151a8(this, func_020290ac(unk_160), 0xd, 1);
        }
        func_020151d0(this, 0);
        func_0202d33c(data_020d7a58);
        break;
    case 3:
        if (func_0209a938(unk_160) <= 1) {
            func_0201517c(this, func_020295f8, 0xd, 1);
        } else {
            func_020151a8(this, func_020291b4(func_0209ab94(func_0202d114(this))), 0xd, 1);
        }
        func_020151d0(this, 0);
        func_0202d33c(data_020d79c0);
        break;
    case 4:
        func_0201517c(this, func_0202963c, 0xd, 1);
        func_020151d0(this, 0);
        func_0202d33c(data_020d7ba8);
        break;
    }
}

void Unk_0201d2d0::func_020248e4() {
    void *r4 = unk_fc->unk_82c;
    if (func_0209ac64(func_0202d114(this)) == 4) {
        if (func_0204b2d4(&unk_120) != 0) {
            u32 v = func_0207f8ec(r4, &unk_120);
            u32 w = func_0209a6c0(unk_160, (u8)v);
            func_020776b4(r4, (u8)w);
        }
    }
    func_0209abb4(func_0202d114(this), 1);
    func_020776f0(r4, 1);
    func_02078520(func_0207e310(r4));
}

void Unk_0201d2d0::func_02024964(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c78d8;
    if (func_0209ac64(func_0202d114(this)) == 1) {
        d = &data_020c78f0;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7a60;
}

void Unk_0201d2d0::func_020249ec() {
    func_02014e60(this, &unk_198, 0, 5, 0);
    func_0202d33c(data_020d7ac0);
}

void Unk_0201d2d0::func_02024a1c() {
    Unk_0201d2d0_Out out;
    u8 b;
    if (func_0209a938(unk_160) >= 4) {
        func_0202d1d4(this, data_021bf76c);
    } else {
        func_0202d1d4(this, data_021bf6ac);
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_02024a90(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c76d0;
    void *r7 = unk_fc->unk_82c;
    func_02023da4(this);
    if (unk_120.unk_00 != 0xfff1) {
        func_0207cfb8(r7);
        if (unk_120.unk_08 != 0 && unk_120.unk_04 != (u32)-1) {
            func_02080b78(unk_120.unk_08, &unk_120);
            func_020777b8(r7, unk_120.unk_04, &unk_120);
        }
    }
    if (func_0209ac64(func_0202d114(this)) == 1) {
        d = &data_020c76c0;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_156 = 0x5f;
}
