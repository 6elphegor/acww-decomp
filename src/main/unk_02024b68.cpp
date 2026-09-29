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

struct Unk_02025090_Pair {
    u32 unk_00;
    u32 unk_04;
};

typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void func_0202d1d4(void *, void *);
void func_02067a84(void *, u8 *, u32);
void func_02067abc(void *, u8 *, u32);
void *func_0202d114(void *);
s32 func_0209ac64(void *);
void func_02014a4c(void *);
void func_02014918(void *);
void *func_0209aaa0(void *);
void func_020776e4(void *);
s32 func_0206ed18();
s32 func_0206ed38();
void *func_0209750c();
void *func_02098750(void *);
u16 *func_02097f6c(void *, s32);
void func_0209909c(u16 *, s32, s32);
void func_02014ce4(void *, void *, s32, s32, s32);
u16 *func_0209a8e8(void *);
void func_020151a8(void *, s32, s32, s32);
void func_020151d0(void *, s32);
void *func_0209ab94(void *);
s32 func_020291b4(void *);
void func_02023da4(void *);
void func_0207cfb8(void *, void *);
void func_02080b78(u32, void *);
void func_020777b8(void *, u32, void *);
void func_0209d498(void *);
s32 func_0204be70(void *);
void func_0201578c(void *, void *, s32, s32);
s32 func_0209a938(void *);
void func_0201517c(void *, void *, s32, s32);
void func_02029918();
void func_020298c8();
}

extern Unk_0201d2d0_Data data_020c7690, data_020c7680, data_020c7908, data_020c7890;
extern Unk_0201d2d0_Data data_020c78a0, data_020c7698, data_020c7660, data_020c7838;
extern Unk_0201d2d0_Data data_020c7928, data_020c76a8, data_020c76a0, data_020c78b8;
extern Unk_0201d2d0_Data data_020d7e38;
extern u32 data_020d8914[];
extern Unk_0201d2d0_Fn data_020d7d78, data_020d7d10, data_020d7a90, data_020d7b20;
extern Unk_0201d2d0_Fn data_020d7a88, data_020d7e40, data_020d7a70, data_020d7e28, data_020d7e30;
extern u8 data_021bf694[], data_021bf67c[], data_021bf3ac[], data_021bf664[], data_021bf604[];
extern u8 data_021bf634[], data_021bf5ec[], data_021bf61c[];

static inline BOOL Unk_02024df4_Range(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_02025090_Ne(u16 *p) {
    return *p != 0xfff1;
}

class Unk_0201d2d0 {
public:
    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    s32 func_0202d328(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);

    void func_02024b68();
    void func_02024bbc();
    void func_02024bd8(Unk_0201d2d0_Out *out);
    void func_02024c4c(Unk_0201d2d0_Out *out);
    void func_02024cd8();
    void func_02024d38();
    void func_02024df4();
    void func_02024f54(Unk_0201d2d0_Out *out);
    void func_02024fdc();
    void func_02025008(Unk_0201d2d0_Out *out);
    void func_02025090(Unk_0201d2d0_Out *out);
    void func_0202516c();
    void func_020251c0();
    void func_020251fc(Unk_0201d2d0_Out *out);
    void func_02025270();
    void func_0202536c();
    void func_02025410();
    void func_02025460(Unk_0201d2d0_Out *out);

    u8 pad_00[0x3c];
    u32 *unk_3c;
    u8 pad_40[0xac - 0x40];
    Unk_0201d2d0_OutFn unk_ac;
    u8 pad_b4[0xc4 - 0xb4];
    Unk_0201d2d0_Fn unk_c4;
    u8 pad_cc[0xfc - 0xcc];
    Unk_0201d2d0_Parent *unk_fc;
    u8 unk_100[0x11e - 0x100];
    u8 unk_11e;
    u8 pad_11f;
    u16 unk_120;
    u8 pad_122[2];
    u32 unk_124;
    u32 unk_128;
    u8 pad_12c[0x156 - 0x12c];
    u16 unk_156;
    u8 pad_158[0x160 - 0x158];
    void *unk_160;
};

void Unk_0201d2d0::func_02024b68() {
    u8 b;
    Unk_0201d2d0_Out out;
    func_0202d1d4(this, data_021bf694);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067abc(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_02024bbc() {
    func_02014a4c(this);
    func_0202d33c(data_020d7d78);
}

void Unk_0201d2d0::func_02024bd8(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c7690;
    if (func_0209ac64(func_0202d114(this)) == 1) {
        d = &data_020c7680;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02024c4c(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c7908;
    if (func_0209ac64(func_0202d114(this)) == 1) {
        d = &data_020c7890;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    func_0209aaa0(unk_160);
    func_020776e4(unk_fc->unk_82c);
}

void Unk_0201d2d0::func_02024cd8() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (unk_3c) {
        unk_3c[2] = 1;
    }
    func_0202d1d4(this, data_021bf67c);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_02024d38() {
    u8 b;
    u16 h;
    Unk_0201d2d0_Out out;
    if (func_0206ed18() == 0) {
        if (unk_3c) {
            unk_3c[2] = 1;
        }
        func_0202d1d4(this, data_021bf3ac);
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        b = out.unk_04;
        func_02067a84(unk_3c, &b, out.unk_00);
    } else {
        s32 r = func_0206ed38();
        unk_120 = *func_02097f6c(func_02098750(func_0209750c()), r);
        h = 0xfff1;
        func_0209909c(&h, 0, r);
        func_02014ce4(this, &unk_120, 0, 4, 0);
        func_0202d328(data_020d7d10);
    }
}

void Unk_0201d2d0::func_02024df4() {
    u8 buf[2];
    Unk_0201d2d0_Out out;
    switch (func_0209ac64(func_0202d114(this))) {
    case 0:
        if (Unk_02024df4_Range(func_0209a8e8(unk_160), 0x12b0, 0x12e7)) {
            func_0202d1d4(this, data_021bf664);
            if (unk_ac) {
                (this->*unk_ac)(&out);
            }
            buf[0] = out.unk_04;
            func_02067a84(unk_3c, &buf[0], out.unk_00);
        } else {
            func_020151a8(this, func_020291b4(func_0209ab94(func_0202d114(this))), 0xd, 1);
            func_020151d0(this, 0);
            func_0202d33c(data_020d7a90);
        }
        break;
    case 1:
        if (Unk_02024df4_Range(func_0209a8e8(unk_160), 0x12e8, 0x131f)) {
            func_0202d1d4(this, data_021bf664);
            if (unk_ac) {
                (this->*unk_ac)(&out);
            }
            buf[1] = out.unk_04;
            func_02067a84(unk_3c, &buf[1], out.unk_00);
        } else {
            func_020151a8(this, func_020291b4(func_0209ab94(func_0202d114(this))), 0xd, 1);
            func_020151d0(this, 0);
            func_0202d33c(data_020d7b20);
        }
        break;
    }
}

void Unk_0201d2d0::func_02024f54(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c78a0;
    if (func_0209ac64(func_0202d114(this)) == 1) {
        d = &data_020c7698;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7a88;
}

void Unk_0201d2d0::func_02024fdc() {
    func_02014918(this);
    func_0209aaa0(unk_160);
    func_020776e4(unk_fc->unk_82c);
}

void Unk_0201d2d0::func_02025008(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c7660;
    if (func_0209ac64(func_0202d114(this)) == 1) {
        d = &data_020c7838;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7e40;
}

void Unk_0201d2d0::func_02025090(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c7928;
    void *r7 = unk_fc->unk_82c;
    func_02023da4(this);
    if (unk_120 != 0xfff1) {
        func_0207cfb8(r7, &unk_120);
        if (unk_128 != 0 && unk_124 != (u32)-1) {
            func_02080b78(unk_128, &unk_120);
            func_020777b8(r7, unk_124, &unk_120);
        }
    }
    if (func_0209ac64(func_0202d114(this)) == 1) {
        d = &data_020c76a8;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d->unk_00, d->unk_04, unk_11e, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_156 = 0x5f;
}

void Unk_0201d2d0::func_0202516c() {
    u8 b;
    Unk_0201d2d0_Out out;
    func_0202d1d4(this, data_021bf604);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067abc(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_020251c0() {
    u16 h;
    s32 r = func_0206ed38();
    h = 0xfff1;
    func_0209909c(&h, 0, r);
    func_02014a4c(this);
    func_0202d33c(data_020d7a70);
}

void Unk_0201d2d0::func_020251fc(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c76a0;
    if (func_0209ac64(func_0202d114(this)) == 1) {
        d = &data_020c78b8;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02025270() {
    u8 b;
    u16 h;
    Unk_0201d2d0_Out out;
    Unk_02025090_Pair s;
    s32 a, c;
    a = 0;
    s.unk_00 = 0;
    s.unk_04 = 0;
    c = 0;
    func_0209d498(&s);
    if (unk_120 != 0xfff1) {
        a = func_0204be70(&unk_120);
    }
    h = *func_0209a8e8(unk_160);
    if (h != 0xfff1) {
        c = func_0204be70(&h);
    }
    if (a == c) {
        func_0202d1d4(this, data_021bf634);
    } else if (a > c) {
        func_0202d1d4(this, data_021bf5ec);
    } else {
        func_0202d1d4(this, data_021bf61c);
    }
    if (unk_120 != 0xfff1) {
        func_0201578c(this, &unk_120, 2, 7);
    }
    if (h != 0xfff1) {
        func_0201578c(this, &h, 3, 7);
    }
    if (unk_3c) {
        unk_3c[2] = 1;
    }
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_0202536c() {
    u8 b;
    Unk_0201d2d0_Out out;
    s32 r;
    if (func_0206ed18() == 0) {
        if (unk_3c) {
            unk_3c[2] = 1;
        }
        func_0202d1d4(this, data_021bf3ac);
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        b = out.unk_04;
        func_02067a84(unk_3c, &b, out.unk_00);
    } else {
        r = func_0206ed38();
        unk_120 = *func_02097f6c(func_02098750(func_0209750c()), r);
        func_02014ce4(this, &unk_120, 0, 4, 0);
        func_0202d328(data_020d7e28);
    }
}

void Unk_0201d2d0::func_02025410() {
    if (func_0209ac64(func_0202d114(this)) == 0) {
        func_0201517c(this, (void *)func_02029918, 0xd, 1);
    } else {
        func_0201517c(this, (void *)func_020298c8, 0xd, 1);
    }
    func_020151d0(this, 0);
    func_0202d33c(data_020d7e30);
}

void Unk_0201d2d0::func_02025460(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data d = data_020d7e38;
    s32 r = func_0209a938(unk_160);
    if (r < 7) {
        d.unk_00 = data_020d8914[r];
    }
    if (d.unk_00 != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d.unk_00, d.unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
