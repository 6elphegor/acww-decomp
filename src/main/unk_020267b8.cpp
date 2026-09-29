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

struct Unk_0201d568_S {
    u32 pad_00[8];
    volatile u8 unk_20;
    s8 unk_21;
};

struct Unk_020267b8_Tbl {
    u32 v[3];
};

struct Unk_02026b38_Msg {
    u32 unk_00;
    u32 unk_04;
    s32 unk_08;
};

typedef void (Unk_0201d2d0::*Unk_0201d2d0_Fn)();
typedef void (Unk_0201d2d0::*Unk_0201d2d0_OutFn)(Unk_0201d2d0_Out *);

extern "C" {
void *func_020805c4(void *);
u32 func_02003098(void *);
void func_0202d184(void *, void *, void *, s32, u32, u32, u32, u32, u32);
void func_0201c95c(void *, void *);
void func_0201c938(void *, void *, s32, s32, s32, void *);
void func_0201c870(void *, void *);
void func_020679c0(void *, s32);
void func_0202d1d4(void *, void *);
void func_02067a84(void *, u8 *, u32);
s32 func_02067abc(void *, u8 *, u32);
void *func_0209750c();
void *func_0202d114();
s32 func_0209ac64(void *);
void func_0209abb4(void *, s32);
void *func_0209a4f0(u32);
void *func_0209a4e4(u32, s32);
void *func_02098750(void *);
void *func_0202ceb0(void *);
void func_02065c94(void *);
void func_02015144(void *, void *, s32);
void func_020151d0(void *, s32);
s32 func_02063b8c(s32);
void func_0207ceb4(u16 *, void *);
void func_0207cf10(void *);
void func_0207cfb8(void *, void *);
s32 func_0205b4f8();
u32 func_0202ac7c(u32);
void func_0202cd44(u16 *, void *);
u16 func_0204b718(u32, s32, s32);
void func_0207ab90(void *, void *, void *, s32);
u16 *func_0207fd9c(void *);
s32 func_02080dd8();
s32 func_02026410(void *, void *);
void func_02026968(u16 *out, u32 arg);
}

extern Unk_020267b8_Tbl data_020d8690;
extern u8 data_021bf2a4[];
extern u8 data_021bf46c[];
extern u8 data_021bf484[];
extern u8 data_021dfd8c[];
extern Unk_0201d2d0_Data data_020c7998;
extern Unk_0201d2d0_Data data_020c7988;
extern Unk_0201d2d0_Data data_020c79b0;
extern Unk_0201d2d0_Data data_020c79a0;
extern Unk_0201d2d0_Data data_020c79c0;
extern Unk_0201d2d0_Data data_020c79b8;
extern Unk_0201d2d0_Data data_020c79c8;
extern Unk_0201d2d0_Data data_020c79d0;
extern Unk_0201d2d0_Data data_020c79e0;
extern Unk_0201d2d0_Data data_020c79f0;
extern Unk_0201d2d0_Data data_020c79f8;
extern Unk_0201d2d0_Data data_020c7760;
extern Unk_0201d2d0_Fn data_020d7fa0;
extern Unk_0201d2d0_Fn data_020d7fc8;
extern Unk_0201d2d0_Fn data_020d7bc0;
extern Unk_0201d2d0_Fn data_020d7fe0;
extern Unk_0201d2d0_Fn data_020d7fe8;
extern Unk_0201d2d0_Fn data_020d7ff0;
extern Unk_0201d2d0_Fn data_020d7bd8;
extern Unk_0201d2d0_Fn data_020d8008;

static inline BOOL Unk_02026ab0_R1(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) {
        r = TRUE;
    }
    return r;
}

class Unk_0201d2d0 {
public:
    void func_020267b8(s32 unused, s32 idx);
    void func_02026834(void *p);
    void func_02026998(Unk_0201d2d0_Out *out);
    void func_02026a24(Unk_0201d2d0_Out *out);
    void func_02026ab0(Unk_0201d2d0_Out *out);
    void func_02026b98();
    void func_02026bd0();
    void func_02026bec(Unk_0201d2d0_Out *out);
    void func_02026c4c();
    void func_02026ccc();
    void func_02026d2c(Unk_0201d2d0_Out *out);
    void func_02026d8c();
    void func_02026df0(Unk_0201d2d0_Out *out);
    void func_02026e64();
    void func_02026ebc(Unk_0201d2d0_Out *out);
    void func_02026f1c();
    void func_02026f58(Unk_0201d2d0_Out *out);
    void func_02026fe0();
    void func_0202708c(Unk_0201d2d0_Out *out);

    void func_0202d1c0(Unk_0201d2d0_Fn fn);
    void func_0202d328(Unk_0201d2d0_Fn fn);
    void func_0202d33c(Unk_0201d2d0_Fn fn);
    void func_02014a4c();
    void func_02014b78();

    u8 pad_00[0x3c];
    Unk_02026b38_Msg *unk_3c;
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
    u8 pad_122[0x128 - 0x122];
    u32 unk_128;
    u8 pad_12c[0x15c - 0x12c];
    u32 unk_15c;
    u8 pad_160[0x19c - 0x160];
    u32 unk_19c;
};

void Unk_0201d2d0::func_020267b8(s32 unused, s32 idx) {
    u8 b;
    Unk_0201d2d0_Out out;
    Unk_020267b8_Tbl tbl = data_020d8690;
    if (idx < 0 || idx >= 3) {
        idx = 0;
    }
    func_0202d1d4(this, data_021bf2a4 + tbl.v[idx] * 0x18);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067abc(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_02026834(void *p) {
    u16 h[3];
    Unk_0201d568_S s;
    switch (func_0209ac64(func_0202d114())) {
    case 10:
        func_0201c95c(this, &s);
        func_0201c938(this, &s, 0, 0x24, 0x24, 0);
        func_0201c938(this, &s, 1, 0x25, 0x25, 0);
        func_0201c938(this, &s, 2, 0x26, 0x26, 0);
        s.unk_20 = 3;
        s.unk_21 = -1;
        func_0201c870(this, &s);
        func_0202d1c0(data_020d7fa0);
        func_020679c0(unk_3c, 1);
        break;
    case 0x13: {
        s32 r = func_02063b8c(100);
        unk_120 = 0xfff1;
        if (r < 20) {
            func_0207ceb4(&h[0], unk_fc->unk_82c);
            unk_120 = h[0];
            if (unk_120 != 0xfff1) {
                func_0207cf10(unk_fc->unk_82c);
            }
        } else if (r < 0x28) {
            unk_19c = 0x1f4 + func_0205b4f8() * 4;
            unk_19c = func_0202ac7c(unk_19c);
            func_02026968(&h[1], unk_19c);
            unk_120 = h[1];
        }
        if (unk_120 == 0xfff1) {
            func_0202cd44(&h[2], 0);
            unk_120 = h[2];
        }
        func_02026410(this, p);
        break;
    }
    }
}

void func_02026968(u16 *out, u32 arg) {
    *out = 0xfff1;
    *out = func_0204b718(arg, 0, 0);
    if (*out == 0xfff1) {
        *out = 0x1492;
    }
}

void Unk_0201d2d0::func_02026998(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = 0;
    switch (func_0209ac64(func_0202d114())) {
    case 10:
        d = &data_020c7998;
        break;
    case 0x13:
        d = &data_020c7988;
        break;
    }
    if (unk_15c != 0 && d != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02026a24(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = 0;
    switch (func_0209ac64(func_0202d114())) {
    case 10:
        d = &data_020c79b0;
        break;
    case 0x13:
        d = &data_020c79a0;
        break;
    }
    if (unk_15c != 0 && d != 0) {
        func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    }
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02026ab0(Unk_0201d2d0_Out *out) {
    Unk_0201d2d0_Data *d = &data_020c79c0;
    void *r7;
    switch (func_0209ac64(func_0202d114())) {
    case 10:
        func_0209abb4(func_0209a4f0(unk_15c), 1);
        if (Unk_02026ab0_R1(&unk_120, 0x11a8, 0x12a7)) {
            func_0207cfb8(unk_fc->unk_82c, &unk_120);
        }
        break;
    case 0x13:
        r7 = func_0202ceb0(func_02098750(func_0209750c()));
        func_0209abb4(func_0209a4f0(unk_15c), 1);
        d = &data_020c79b8;
        if (r7 != 0) {
            func_02065c94(r7);
        }
        break;
    }
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), d->unk_00, d->unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02026b98() {
    func_02015144(this, func_0202ceb0(func_02098750(func_0209750c())), 1);
    func_020151d0(this, 5);
    func_0202d33c(data_020d7fc8);
}

void Unk_0201d2d0::func_02026bd0() {
    func_02014a4c();
    func_0202d328(data_020d7bc0);
}

void Unk_0201d2d0::func_02026bec(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c79c8.unk_00, data_020c79c8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02026c4c() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (unk_128 != 0 && func_02080dd8() >= 0x40) {
        func_0202d1d4(this, data_021bf46c);
        if (unk_ac) {
            (this->*unk_ac)(&out);
        }
        b = out.unk_04;
        func_02067abc(unk_3c, &b, out.unk_00);
    } else {
        func_02014a4c();
        func_0202d33c(data_020d7fe0);
    }
}

void Unk_0201d2d0::func_02026ccc() {
    u8 b;
    Unk_0201d2d0_Out out;
    if (unk_3c->unk_04 == 5) {
        unk_3c->unk_08 = 1;
    }
    func_0202d1d4(this, data_021bf484);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067a84(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_02026d2c(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c79d0.unk_00, data_020c79d0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02026d8c() {
    void *r4;
    func_0209abb4(func_0209a4f0(unk_15c), 1);
    r4 = func_0209a4e4(unk_15c, 0);
    func_0207ab90(data_021dfd8c, r4, func_020805c4(unk_fc->unk_82c), -0x14);
    func_02014a4c();
    func_0202d33c(data_020d7fe8);
}

void Unk_0201d2d0::func_02026df0(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c79e0.unk_00, data_020c79e0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7ff0;
}

void Unk_0201d2d0::func_02026e64() {
    u8 b;
    Unk_0201d2d0_Out out;
    func_0202d1d4(this, data_021bf484);
    func_02014a4c();
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067abc(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_02026ebc(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c79f0.unk_00, data_020c79f0.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}

void Unk_0201d2d0::func_02026f1c() {
    void *r4 = unk_fc->unk_82c;
    func_02014a4c();
    if (unk_120 != 0xfff1) {
        func_0207cfb8(r4, &unk_120);
    }
}

void Unk_0201d2d0::func_02026f58(Unk_0201d2d0_Out *out) {
    func_0209abb4(func_0209a4f0(unk_15c), 1);
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c79f8.unk_00, data_020c79f8.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
    unk_c4 = data_020d7bd8;
}

void Unk_0201d2d0::func_02026fe0() {
    u8 b;
    Unk_0201d2d0_Out out;
    void *r4 = unk_fc->unk_82c;
    void *r6;
    func_0202d1d4(this, data_021bf484);
    func_02014b78();
    func_0202d33c(data_020d8008);
    r6 = func_0209a4e4(unk_15c, 0);
    func_0207ab90(data_021dfd8c, r6, func_020805c4(r4), 0x14);
    unk_120 = *func_0207fd9c(r4);
    if (unk_ac) {
        (this->*unk_ac)(&out);
    }
    b = out.unk_04;
    func_02067abc(unk_3c, &b, out.unk_00);
}

void Unk_0201d2d0::func_0202708c(Unk_0201d2d0_Out *out) {
    func_0202d184(this, &unk_100, &unk_11e, 30, func_02003098(func_020805c4(unk_fc->unk_82c)), data_020c7760.unk_00, data_020c7760.unk_04, 0, 0);
    out->unk_00 = (u32)&unk_100;
    out->unk_04 = unk_11e;
}
