#include "types.h"

struct Unk_0201a334_Vec3 {
    s32 x, y, z;
};

struct Unk_02019858 {
    s32 func_02019790();
    void func_020195c8(s32 a, s32 b, u32 c, u16 d, u16 e);
    void func_020196b4(u32 a, s32 b, s32 c, s32 d, s16 e, s16 f, s32 g, s32 h, u16 i, u16 j);
    u8 pad[0xb4];
};

struct Unk_0201ad20 {
    void func_0201ad2c(s32 a);
    void func_0201ad30(s32 a);
    void func_0201ad34(s32 a);
    u8 pad[0x10];
};

struct Unk_0201a8c4 {
    void func_0201a8c4(u8 a);
    u8 pad[0x10];
};

struct Unk_0201a334 {
    void func_0201a6c0(u8 a, s32 b, s32 c, Unk_0201a334_Vec3 *d, s32 e, s32 f, u8 g);
    u8 pad[0x10];
};

struct Unk_02013b10 {
    s32 func_02014220();
    u8 pad[0x68];
};

class Unk_020d77a4 {
public:
    virtual ~Unk_020d77a4();
    s32 func_0201b9bc();
    u8 pad_04[0x2a0 - 4];
};

class Unk_ov004_0224d0a0 : public Unk_020d77a4 {
public:
    BOOL func_ov004_0221c2d8();

    /* 0x2a0 */ Unk_0201ad20 unk_2a0;
    /* 0x2b0 */ u8 pad_2b0[0x350 - 0x2b0];
    /* 0x350 */ Unk_0201a8c4 unk_350;
    /* 0x360 */ u8 pad_360[0x3b0 - 0x360];
    /* 0x3b0 */ Unk_0201a334 unk_3b0;
    /* 0x3c0 */ u8 pad_3c0[0x514 - 0x3c0];
    /* 0x514 */ u8 unk_514[0x564 - 0x514];
    /* 0x564 */ Unk_02019858 unk_564;
    /* 0x618 */ Unk_02013b10 unk_618;
    /* 0x680 */ u8 pad_680[0x778 - 0x680];
    /* 0x778 */ u16 unk_778;
};

class Unk_020660f8 {
public:
    void func_02067a84(u8 *a, void *b);
    u8 pad_00[4];
    s32 unk_04;
    s32 unk_08;
};

extern "C" {
extern Unk_0201a334_Vec3 data_021f4880;
extern u16 data_020c6cc8;
extern s32 data_020c6d1c;
extern void *data_ov004_0224cf54;

void *func_0209750c();
void *func_0209868c(void *);
void *func_0209888c(void *);
s32 func_0209411c(void *);
s32 func_02087c4c(void *);
void func_02087c3c(void *, u32);
void func_02003ddc(void *, u32, u32, u32);
void func_0203a250();
void func_02034d70(u32);
void func_02034d84(u32);
void func_02034dd0(u32, u32, u32);
void func_02034e10(u32, u32, u32, u32);
s32 func_02063b8c(s32);
void func_0202e1cc(u32, u32);
void func_ov004_022247fc();
void func_ov004_022265e4();
s32 func_ov004_02226520();
void func_ov004_02226644();
void func_ov004_02226624();
void func_ov004_022266e4();
void func_ov004_02226704();
s32 func_ov004_022265c8();
void func_ov004_02226604();
void func_ov004_02224820();
s32 func_ov004_02226574();
void func_ov004_022266a4();
void func_ov004_02226684();
void func_ov004_022266c4();
void func_ov004_02226664();
}

class Unk_ov004_0224d010 {
public:
    virtual ~Unk_ov004_0224d010();
    void func_ov004_0221c304();
    void func_ov004_0221c5e4();
    void func_ov004_0221c608();
    void func_ov004_0221c794();
    void func_ov004_0221cbe4(s32 v);

    /* 0x04 */ u8 pad_04[0x1e - 4];
    /* 0x1e */ u8 unk_1e;
    /* 0x1f */ u8 pad_1f[0x3c - 0x1f];
    /* 0x3c */ Unk_020660f8 *unk_3c;
    /* 0x40 */ u8 pad_40[0xac - 0x40];
    /* 0xac */ s32 unk_ac;
    /* 0xb0 */ Unk_ov004_0224d0a0 *unk_b0;
    /* 0xb4 */ u8 unk_b4;
    /* 0xb5 */ u8 unk_b5;
};

BOOL Unk_ov004_0224d0a0::func_ov004_0221c2d8() {
    if (unk_618.func_02014220() != 0 || func_0201b9bc() != 0) {
        return FALSE;
    }
    return TRUE;
}

void Unk_ov004_0224d010::func_ov004_0221c304() {
    Unk_020660f8 *r6 = unk_3c;
    u8 r7 = (u8)((func_02087c4c(func_0209868c(func_0209750c())) >> 2) + 0x51);
    Unk_02019858 *r5 = &unk_b0->unk_564;
    u8 buf;
    switch (unk_b4) {
    case 0:
        if (r6->unk_04 == 5) {
            func_ov004_022247fc();
            func_ov004_022265e4();
            unk_b4 = 1;
            unk_b0->unk_778 = 0;
        }
        break;
    case 1:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 0xf) {
            func_02003ddc(unk_b0->unk_514, 0x4e6, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x14) {
            func_02003ddc(unk_b0->unk_514, 0x4e7, 0x7f, 0);
        }
        if (func_ov004_02226520()) {
            func_0203a250();
            unk_b0->unk_3b0.func_0201a6c0(0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
            r5->func_020195c8(4, 0xf8, 3, data_020c6cc8, 0);
            func_ov004_02226644();
            unk_b4 = 2;
            unk_b0->unk_778 = 0;
        }
        break;
    case 2:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 0x12) {
            func_02003ddc(unk_b0->unk_514, 0x4e8, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x2d) {
            func_02003ddc(unk_b0->unk_514, 0x4e9, 0x7f, 0);
        }
        if (r5->func_02019790()) {
            func_ov004_022266e4();
            r5->func_020196b4(3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b4 = 3;
        }
        break;
    case 3:
        if (r5->func_02019790()) {
            r5->func_020195c8(1, 0xf6, 3, data_020c6cc8, 0);
            func_ov004_02226624();
            unk_b0->unk_2a0.func_0201ad34(0xf2);
            unk_b0->unk_2a0.func_0201ad30(0xf4);
            unk_b0->unk_2a0.func_0201ad2c(0xf4);
            unk_b4 = 4;
            unk_b0->unk_778 = 0;
        }
        break;
    case 4:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 0xa) {
            func_02003ddc(unk_b0->unk_514, 0x4ea, 0x7f, 0);
        }
        if (r5->func_02019790()) {
            func_ov004_02226704();
            unk_b0->unk_3b0.func_0201a6c0(1, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
            r5->func_020196b4(3, 1, 0, 0, 0, (s16)0xc000, 0, 0, data_020c6cc8, 0);
            unk_b4 = 5;
        }
        break;
    case 5:
        if (r5->func_02019790()) {
            buf = r7;
            r6->func_02067a84(&buf, data_ov004_0224cf54);
            r6->unk_08 = 1;
            func_ov004_0221cbe4(0);
            unk_b5 = 0;
        }
        break;
    }
}

void Unk_ov004_0224d010::func_ov004_0221c5e4() {
    s32 t = unk_1e;
    if (t >= 0x30 && t <= 0x3b) {
        func_02034d84(0x3e);
        func_02034dd0(0xc, 6, 0x1a);
    }
}

void Unk_ov004_0224d010::func_ov004_0221c608() {
    Unk_020660f8 *r6 = unk_3c;
    if (r6->unk_04 == 5) {
        if (func_ov004_022265c8() == 5) {
            func_ov004_02226604();
            func_ov004_02224820();
            unk_b0->unk_778 = 0;
        }
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 7) {
            func_02003ddc(unk_b0->unk_514, 0x4e1, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x14) {
            func_02003ddc(unk_b0->unk_514, 0x4e2, 0x7f, 0);
            func_02034dd0(0x10, 0x14, 0);
        }
        if (unk_b0->unk_778 == 0x28) {
            func_02003ddc(unk_b0->unk_514, 0x4e3, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x46) {
            if (func_0209411c(func_0209888c(func_0209750c())) == 0) {
                func_02003ddc(unk_b0->unk_514, 0x4e4, 0x7f, 0);
            } else {
                func_02003ddc(unk_b0->unk_514, 0x4e5, 0x7f, 0);
            }
        }
        if (func_ov004_02226574()) {
            u8 r4;
            u8 buf;
            if (unk_b5 != 0) {
                r4 = 0x30;
            } else {
                r4 = (u8)(func_02063b8c(0xb) + 0x31);
            }
            func_02034d70(0x10);
            func_02034dd0(0xc, 0, 0xa);
            func_02034e10(0xd, 0x3e, 0x7f, 1);
            buf = r4;
            r6->func_02067a84(&buf, data_ov004_0224cf54);
            r6->unk_08 = 1;
            func_0202e1cc(0x17, 1);
            void *p = func_0209868c(func_0209750c());
            if (func_02063b8c(0xa) < 5) {
                func_02087c3c(p, func_02087c4c(p) + 1);
            }
            func_ov004_0221cbe4(0);
        }
    }
}

void Unk_ov004_0224d010::func_ov004_0221c794() {
    Unk_020660f8 *r6 = unk_3c;
    u8 r7 = (u8)((func_02087c4c(func_0209868c(func_0209750c())) >> 2) + 0x24);
    Unk_02019858 *r5 = &unk_b0->unk_564;
    u8 buf;
    switch (unk_b4) {
    case 0:
        if (r6->unk_04 == 5) {
            unk_b0->unk_3b0.func_0201a6c0(0, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
            r5->func_020196b4(3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b4 = 1;
        }
        break;
    case 1:
        if (r5->func_02019790()) {
            r5->func_020195c8(1, 0xf6, 1, data_020c6cc8, 0);
            func_ov004_022266a4();
            unk_b0->unk_2a0.func_0201ad34(0xf3);
            unk_b0->unk_2a0.func_0201ad30(0xf5);
            unk_b0->unk_2a0.func_0201ad2c(0xf5);
            unk_b4 = 2;
            unk_b0->unk_778 = 0;
        }
        break;
    case 2:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 5) {
            func_02003ddc(unk_b0->unk_514, 0x4db, 0x7f, 0);
        }
        if (r5->func_02019790()) {
            unk_b0->unk_350.func_0201a8c4(2);
            r5->func_020196b4(3, 1, 0, 0, 0, (s16)0x8000, 0, 0, data_020c6cc8, 0);
            func_ov004_022266e4();
            unk_b4 = 3;
        }
        break;
    case 3:
        if (r5->func_02019790()) {
            r5->func_020196b4(2, 1, 0x19700, 0x14000, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b4 = 4;
        }
        break;
    case 4:
        if (r5->func_02019790()) {
            unk_b0->unk_350.func_0201a8c4(0);
            r5->func_020196b4(3, 1, 0, 0, 0, (s16)0xc000, 0, 0, data_020c6cc8, 0);
            unk_b4 = 5;
        }
        break;
    case 5:
        if (r5->func_02019790()) {
            r5->func_020195c8(1, 0xf7, 1, data_020c6cc8, 0);
            func_ov004_02226684();
            unk_b4 = 6;
            unk_b0->unk_778 = 0;
        }
        break;
    case 6:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 0xd) {
            func_02003ddc(unk_b0->unk_514, 0x4dc, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x1e) {
            func_02003ddc(unk_b0->unk_514, 0x4dd, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x46) {
            func_02003ddc(unk_b0->unk_514, 0x4de, 0x7f, 0);
        }
        if (r5->func_02019790()) {
            func_ov004_022266c4();
            r5->func_020196b4(3, 1, 0, 0, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b4 = 7;
        }
        break;
    case 7:
        if (r5->func_02019790()) {
            r5->func_020196b4(2, 1, 0x19700, 0x15000, 0, 0, 0, 0, data_020c6cc8, 0);
            unk_b4 = 8;
        }
        break;
    case 8:
        if (r5->func_02019790()) {
            r5->func_020196b4(3, 1, 0, 0, 0, (s16)0xc000, 0, 0, data_020c6cc8, 0);
            unk_b4 = 9;
        }
        break;
    case 9:
        if (r5->func_02019790()) {
            unk_b0->unk_3b0.func_0201a6c0(1, 0, 0, &data_021f4880, 4, data_020c6d1c, 1);
            r5->func_020195c8(1, 0xf8, 1, data_020c6cc8, 0);
            func_ov004_02226664();
            unk_b4 = 10;
            unk_b0->unk_778 = 0;
        }
        break;
    case 10:
        unk_b0->unk_778++;
        if (unk_b0->unk_778 == 0xf) {
            func_02003ddc(unk_b0->unk_514, 0x4df, 0x7f, 0);
        }
        if (unk_b0->unk_778 == 0x1e) {
            func_02003ddc(unk_b0->unk_514, 0x4e0, 0x7f, 0);
        }
        if (r5->func_02019790()) {
            buf = r7;
            r6->func_02067a84(&buf, data_ov004_0224cf54);
            r6->unk_08 = 1;
            func_ov004_0221cbe4(0);
        }
        break;
    }
}
