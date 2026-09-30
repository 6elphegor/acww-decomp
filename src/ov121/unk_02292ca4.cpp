#include "types.h"

struct Unk_ov121_02292ca4_Sub {
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
};

struct Unk_ov121_02292360 {
    u8 pad_00[0x8d];
    u8 unk_8d;
    u8 pad_8e[0x98 - 0x8e];
    s32 unk_98;
    u8 pad_9c[0xa0 - 0x9c];
    u16 unk_a0;
    u16 unk_a2;
    u8 pad_a4[0xad - 0xa4];
    u8 unk_ad;
    u8 unk_ae;
    u8 unk_af;
    u8 pad_b0;
    u8 unk_b1;
    u8 unk_b2;
    u8 pad_b3;
    u8 unk_b4;
    u8 pad_b5[2];
    u8 unk_b7;
    u8 unk_b8[0xd8 - 0xb8];
    u8 unk_d8[0x2d8 - 0xd8];
    u8 unk_2d8[0x398 - 0x2d8];
    u8 unk_398[0x3fc - 0x398];
    u8 unk_3fc[0x504 - 0x3fc];
    u8 unk_504[0x7f8 - 0x504];
    u8 unk_7f8[5];
    u8 unk_7fd[0x83c - 0x7fd];
    u8 unk_83c[0x1074 - 0x83c];
    u8 unk_1074[0x20];
};

typedef Unk_ov121_02292360 S;

struct Unk_ov121_02292430_Comm {
    u8 pad_00[0x64];
    u32 unk_64;
};

static inline BOOL Unk_ov121_02293188_InRange(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u32 a = *p;
    u32 b = *p;
    if (b >= lo && a <= hi) {
        r = TRUE;
    }
    return r;
}

extern "C" {
extern Unk_ov121_02292430_Comm *data_020cbb18;
extern u8 data_ov121_02294c18[][0xb];
extern u16 data_ov121_02294c78[];

s32 func_0209750c();
s32 func_020986d4(s32 a);
s32 func_02098878(s32 a);
s32 func_020983cc(s32 a);
s32 func_02071c5c(s32 a);
u32 func_02071c1c(s32 a, u32 b);
void func_02071c2c(s32 a, u32 b, u32 c);
s32 func_02071c68(s32 a, u32 b);
s32 func_02071e04(s32 a);
s32 func_02071f5c(s32 a, void *b);
s32 func_0203a35c();
s32 func_0203a32c();
s32 func_0203a344();
BOOL func_0206ef00();
u32 func_020b0f54();
s32 func_02098ffc();
s32 func_02099014(u16 *p, u32 v);
s32 func_0200402c(s32 a);
s32 func_02062510(void *p);
s32 func_020624c0(void *p);
s32 func_02089f44(void *p);
s32 func_02089f30(void *p);
s32 func_02089ad8(void *p, s32 a, s32 b);
s32 func_02089ac0(void *p, void *q);
s32 func_02050ff8(void *p, void *q);
s32 func_02042c64(u32 p, u32 a);
s32 func_020342a4(u32 a, u32 b, u32 c, u32 d);
s32 func_02034228(u32 a, u32 b, u32 c, u32 d);
s32 func_0206e240(u16 *a, void *b, void *c, void *d);
s32 func_02072e44(Unk_ov121_02292430_Comm *p);
void func_02116048(void *a, void *b, u32 n);

s32 func_ov002_02200a58(void *p, u32 a);
s32 func_ov002_022006b8(void *p);
s32 func_ov002_022006b0(void *p);
s32 func_ov002_02202a40(void *p, s32 a, s32 b);
s32 func_ov002_022029e8(void *p, s32 a, s32 b, s32 c, s32 d);
s32 func_ov002_02202d00(void *p, u32 a);
s32 func_ov002_02202064(void *p, u32 a);
s32 func_ov002_0220160c(void *p, void *q, u32 a);
s32 func_ov002_02202294(void *p, s32 a, s32 b);
s32 func_ov002_02202098(void *p, u32 a);
s32 func_ov004_02233e98(u32 *out, u32 a, u32 b);
s32 func_ov004_02233e08(u32 *out, u32 a, u32 b);
s32 func_ov004_02233dc0(u32 *out, u32 a, u32 b);
s32 func_ov004_02233e50(u32 *out, u32 a, u32 b);
s32 func_ov004_02235028(u32 a);
u16 *func_ov004_0222aa48();
u16 *func_ov004_0222aaa0();

BOOL func_ov121_0229241c(S *self, u32 m);
s32 func_ov121_022923fc(S *self, u32 m);
s32 func_ov121_02292430();
s32 func_ov121_02292594(S *self, u32 a);
s32 func_ov121_02292648(S *self, u32 a);
s32 func_ov121_022924e0(S *self, u32 a, u32 b);
s32 func_ov121_02292988(S *self);
s32 func_ov121_02292b50(S *self);
s32 func_ov121_02292b70(S *self);
s32 func_ov121_02293900(S *self, u32 i);
s32 func_ov121_02293918(S *self, u32 i);
s32 func_ov121_0229393c(S *self, u32 a, u32 b);
s32 func_ov121_02293978(S *self);

s32 func_ov121_02292d68(S *self);
s32 func_ov121_02292d3c(S *self);
s32 func_ov121_02292d18(S *self);
s32 func_ov121_02292ecc(S *self);
s32 func_ov121_02292ee4(S *self);
u32 func_ov121_0229356c(S *self, u32 i);
s32 func_ov121_02293074(S *self);
s32 func_ov121_02293188(S *self, u32 m);
s32 func_ov121_02293300(S *self, u32 m);
s32 func_ov121_022933b8(S *self, u32 m);
s32 func_ov121_02293474(S *self);

s32 func_ov121_02292ca4(S *self) {
    if (func_ov121_0229241c(self, 0x10)) {
        s32 a = func_ov121_02292d68(self);
        s32 b = func_ov121_02292d3c(self);
        func_ov002_02202a40(self->unk_398, a, b);
        func_ov121_022923fc(self, 0x10);
    } else {
        s32 a = func_ov121_02292d68(self);
        s32 b = func_ov121_02292d3c(self);
        func_ov002_022029e8(self->unk_398, a, b, 3, 1);
        self->unk_b4 = self->unk_8d;
        func_ov002_02200a58(self, 6);
    }
}

s32 func_ov121_02292d18(S *self) {
    func_ov002_02202d00(self->unk_398, 0);
    ((Unk_ov121_02292ca4_Sub *)self->unk_398)->vfunc_0c();
}

s32 func_ov121_02292d3c(S *self) {
    s32 t = func_ov121_02293900(self, self->unk_b1);
    if (func_ov121_02292988(self) == -1) {
        t -= 0xb;
    }
    return t;
}

s32 func_ov121_02292d68(S *self) {
    s32 t = func_ov121_02293918(self, self->unk_b1);
    if (func_ov121_0229241c(self, 0x40)) {
        t += 0x100;
    } else if (func_ov121_0229241c(self, 0x20)) {
        t -= 0x100;
    }
    if (func_ov121_02292988(self) == -1) {
        t += 0xb;
    }
    return t;
}

s32 func_ov121_02292dbc(S *self) {
    s32 a = func_ov121_02292d68(self);
    s32 b = func_ov121_02292d3c(self);
    func_ov002_02202a40(self->unk_398, a, b);
    if (func_ov121_02292988(self) != -1) {
        func_ov002_02202d00(self->unk_398, 0xd);
    } else {
        func_ov002_02202d00(self->unk_398, 1);
    }
    func_ov121_02292b50(self);
}

s32 func_ov121_02292e10(S *self) {
    u32 t = self->unk_b1;
    if (t <= 7) {
        self->unk_ad = t;
        func_ov002_022006b8(self->unk_2d8);
    } else {
        func_ov002_022006b0(self->unk_2d8);
    }
}

s32 func_ov121_02292e40(S *self) {
    u8 a[0x20];
    u8 b[0x28];
    s32 x = func_ov121_02293900(self, self->unk_ad);
    x -= 0x84;
    if (func_0206ef00()) {
        x -= 0xa;
    }
    func_02089ad8(self->unk_2d8, func_ov121_02293918(self, self->unk_ad) - 0x78, x);
    func_02062510(a);
    func_02071f5c(func_02071e04(func_02071c68(func_020986d4(func_0209750c()), self->unk_ad)), a);
    func_02089f44(b);
    func_02050ff8(b, a);
    func_02089ac0(self->unk_2d8, b);
    func_02089f30(b);
    func_020624c0(a);
}

s32 func_ov121_02292ecc(S *self) {
    if (func_0203a35c()) {
        func_0203a32c();
    }
}

s32 func_ov121_02292ee4(S *self) {
    if (!func_0203a35c()) {
        func_0203a344();
    }
}

s32 func_ov121_02292efc(S *self) {
    self->unk_b2 = 8;
    func_ov121_02292b70(self);
    func_ov002_02202064(self->unk_504, 0);
    func_ov002_02200a58(self, 0x10);
}

s32 func_ov121_02292f28(S *self) {
    func_ov002_0220160c(self->unk_504, self->unk_7f8, 0);
    s32 a = func_ov121_02293918(self, self->unk_af) - 0x18;
    s32 b = func_ov121_02293900(self, self->unk_af) + 0x10;
    func_ov002_02202294(self->unk_504, a, b);
    func_ov002_02202098(self->unk_504, 0);
    func_ov002_02200a58(self, 0xe);
}

s32 func_ov121_02292f88(S *self) {
    switch (self->unk_b2) {
    case 0:
        func_ov121_022933b8(self, 0);
        break;
    case 1:
        func_ov121_022933b8(self, 1);
        break;
    case 2:
        func_ov121_02293300(self, 0);
        break;
    case 3:
        func_ov121_02293300(self, 1);
        break;
    case 4:
        func_ov121_02293474(self);
        break;
    case 5:
        func_ov121_02293188(self, 0);
        break;
    case 6:
        func_ov121_02293074(self);
        break;
    case 7:
        func_ov121_02293188(self, 1);
        break;
    default:
        func_ov121_02293978(self);
        break;
    }
}

s32 func_ov121_02292ffc(S *self) {
    s32 t = func_02098878(func_0209750c());
    u32 u = func_ov121_0229356c(self, self->unk_ae);
    u32 x = data_ov121_02294c78[t];
    x += u;
    self->unk_a0 = x;
    self->unk_98 = func_02042c64(data_020cbb18->unk_64, self->unk_a0);
    if (self->unk_98 == -1) {
        func_ov121_0229393c(self, 3, 0);
        func_0200402c(0x73);
    } else {
        func_ov002_02200a58(self, 0x14);
    }
}

s32 func_ov121_02293074(S *self) {
    u32 buf;
    s32 r;
    if (func_020b0f54() > 1) {
        func_ov121_0229393c(self, 9, 0);
        func_0200402c(0x73);
        return;
    }
    switch (self->unk_af - 9) {
    case 4:
        r = func_ov004_02233e98(&buf, (u8)func_ov121_0229356c(self, self->unk_ae), 1);
        break;
    case 3:
        r = func_ov004_02233e08(&buf, (u8)func_ov121_0229356c(self, self->unk_ae), 1);
        break;
    case 0:
        r = func_ov004_02233dc0(&buf, (u8)func_ov121_0229356c(self, self->unk_ae), 1);
        break;
    case 5:
        r = func_ov004_02233e50(&buf, (u8)func_ov121_0229356c(self, self->unk_ae), 1);
        break;
    case 1:
    case 2:
    default:
        func_ov121_02293978(self);
        return;
    }
    switch (r) {
    case 0:
    case 1:
        func_ov121_0229393c(self, 5, 0);
        func_0200402c(0x73);
        break;
    case 2:
        func_ov121_0229393c(self, 3, 0);
        func_0200402c(0x73);
        break;
    default:
        func_ov121_02292ecc(self);
        func_ov004_02235028(buf);
        func_ov121_02293978(self);
        func_ov121_02292648(self, self->unk_af);
        break;
    }
}

s32 func_ov121_02293188(S *self, u32 m) {
    volatile u16 v;
    u16 w;
    u32 t;
    self->unk_b7 = m;
    t = func_ov121_02292594(self, self->unk_b7);
    v = t;
    switch (self->unk_b7) {
    case 0:
        if (Unk_ov121_02293188_InRange(&v, 0x12a8, 0x12af)) {
            t = 0xfff1;
        }
        break;
    case 1:
        if (Unk_ov121_02293188_InRange(&v, 0x1429, 0x1430)) {
            t = 0xfff1;
        }
        break;
    case 2:
        if (Unk_ov121_02293188_InRange(&v, 0x13a0, 0x13a7)) {
            t = 0xfff1;
        }
        break;
    }
    if (t != 0xfff1) {
        if (func_02098ffc() == -1) {
            func_ov121_0229393c(self, 4, 1);
            return;
        }
        w = t;
        func_02099014(&w, 0);
    }
    func_ov121_02292ee4(self);
    u32 u;
    u16 x;
    switch (self->unk_b7) {
    case 0:
        u = func_ov121_0229356c(self, self->unk_ae);
        if (u < 8) {
            x = u + 0x12a8;
        } else {
            x = 0x12a8;
        }
        self->unk_a0 = x;
        break;
    case 1:
        u = func_ov121_0229356c(self, self->unk_ae);
        if (u < 8) {
            x = u + 0x1429;
        } else {
            x = 0x1429;
        }
        self->unk_a0 = x;
        break;
    case 2:
        u = func_ov121_0229356c(self, self->unk_ae);
        if (u < 8) {
            x = u + 0x13a0;
        } else {
            x = 0x13a0;
        }
        self->unk_a0 = x;
        break;
    }
    func_ov121_022924e0(self, self->unk_b7, self->unk_a0);
    func_ov002_02200a58(self, 0x11);
    func_ov121_02292648(self, self->unk_af);
}

s32 func_ov121_02293300(S *self, u32 m) {
    volatile u16 v;
    if (!func_ov121_02292430()) {
        func_ov121_0229393c(self, 0x18, 1);
        return;
    }
    s32 s = func_02098ffc();
    v = *func_ov004_0222aa48();
    if (!Unk_ov121_02293188_InRange(&v, 0x1188, 0x11a7) && s == -1) {
        func_ov121_0229393c(self, 4, 1);
        return;
    }
    func_ov121_02292ecc(self);
    func_020342a4(func_ov121_0229356c(self, self->unk_ae), m, 1, 1);
    if (!Unk_ov121_02293188_InRange(&v, 0x1188, 0x11a7)) {
        func_02099014((u16 *)&v, 0);
    }
    func_ov121_02293978(self);
    func_ov121_02292648(self, self->unk_af);
}

s32 func_ov121_022933b8(S *self, u32 m) {
    volatile u16 v;
    if (!func_ov121_02292430()) {
        func_ov121_0229393c(self, 0x17, 1);
        return;
    }
    func_0209750c();
    s32 s = func_02098ffc();
    v = *func_ov004_0222aaa0();
    if (!Unk_ov121_02293188_InRange(&v, 0x1188, 0x11a7) && s == -1) {
        func_ov121_0229393c(self, 4, 1);
        return;
    }
    func_ov121_02292ecc(self);
    func_02034228(func_ov121_0229356c(self, self->unk_ae), m, 1, 1);
    if (!Unk_ov121_02293188_InRange(&v, 0x1188, 0x11a7)) {
        func_02099014((u16 *)&v, 0);
    }
    func_ov121_02293978(self);
    func_ov121_02292648(self, self->unk_af);
}

s32 func_ov121_02293474(S *self) {
    volatile u16 v;
    u16 w;
    s32 r6 = func_0209750c();
    s32 s = func_02098ffc();
    v = *(u16 *)func_020983cc(r6);
    if (Unk_ov121_02293188_InRange(&v, 0x11a8, 0x12a7) && s == -1) {
        func_ov121_0229393c(self, 4, 1);
        return;
    }
    func_ov121_02292ecc(self);
    u32 u = func_ov121_0229356c(self, self->unk_ae);
    u16 x;
    if (u < 8) {
        x = u + 0x12a8;
    } else {
        x = 0x12a8;
    }
    w = x;
    func_0206e240(&w, self->unk_83c, self->unk_d8, self->unk_b8);
    if (Unk_ov121_02293188_InRange(&v, 0x11a8, 0x12a7)) {
        func_02099014((u16 *)&v, 0);
    }
    func_ov121_02293978(self);
    func_0200402c(0x6b);
}

u32 func_ov121_02293540(S *self, u32 i) {
    return self->unk_7fd[i];
}

s32 func_ov121_0229354c(S *self, u32 i) {
    func_02116048(data_ov121_02294c18[i], self->unk_7f8, 0xb);
}

u32 func_ov121_0229356c(S *self, u32 i) {
    return func_02071c1c(func_02071c5c(func_020986d4(func_0209750c())), i);
}

void func_ov121_02293588(S *self, u32 a, u32 b) {
    if (a != b) {
        func_02071c2c(func_02071c5c(func_020986d4(func_0209750c())), a, b);
        u8 t = self->unk_1074[a];
        self->unk_1074[a] = self->unk_1074[b];
        self->unk_1074[b] = t;
    }
}

}
