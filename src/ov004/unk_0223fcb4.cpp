#include "types.h"

struct Unk_0203a9b8_Vec {
    s32 x, y, z;
};

struct Unk_0203a9b8_Row {
    s32 v[3];
};

class Unk_0203a9b8;
class Unk_0203b350;

struct Unk_ov004_0223fe00_Sub {
    s16 unk_00;
    u8 pad_02[0x12];
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
};

extern "C" {
extern Unk_0203a9b8_Vec data_021f4880;
extern Unk_0203a9b8_Row data_020c8ce8[];
extern s16 data_02135f44[];
extern Unk_0203b350 *data_021c3070;
Unk_0203a9b8_Vec *func_020947f0(s32 id);
s32 func_02002bdc(void *a, void *b);
s32 func_01ffcb0c(s32 a, s32 b);
s32 func_01ffc5a4(s32 a, s32 b);
void func_01ffcbb0(Unk_0203a9b8_Vec *out, Unk_0203a9b8 *self);
s32 func_020b50e8();
void func_0203a458();
void func_0203a468();
s32 func_0203a7b8(void *p, s32 *a, s32 *b, s32 *out);
}

class Unk_0203b350 {
public:
    BOOL func_0203b7ac(s32 idx);
};

class Unk_0203a9b8 {
public:
    void func_0203b484(Unk_0203a9b8_Vec *v, s32 a, s32 b, s32 c);
    void func_0203b56c();
    void func_0203c09c(s32 a);
    void func_0203c1a4(s32 a, s32 b);
    void func_0203c0b0(s32 a, s32 b, s32 c);
    s32 func_0203b8e0(s32 *p);
    s16 func_0203bc7c();
    s16 func_0203bc68();
    s32 func_0203bc48();

    u8 pad_00[0xfc];
    s16 unk_fc;
    s16 unk_fe;
    s32 unk_100, unk_104, unk_108, unk_10c;
    s32 unk_110, unk_114, unk_118;
    u8 pad_11c[0x1cc - 0x11c];
    s32 unk_1cc, unk_1d0, unk_1d4;
    u8 pad_1d8[0x1e4 - 0x1d8];
    s32 unk_1e4;
    s32 unk_1e8;
    s32 unk_1ec;
    s32 unk_1f0;
    u8 unk_1f4;
    u8 unk_1f5;
    u8 unk_1f6;
};

extern "C" BOOL func_ov004_0223fcb4() {
    if (data_021c3070) {
        return data_021c3070->func_0203b7ac(12);
    }
    return FALSE;
}

extern "C" BOOL func_ov004_0223fcd4() {
    if (data_021c3070) {
        return data_021c3070->func_0203b7ac(11);
    }
    return FALSE;
}

extern "C" s32 func_ov004_0223fcf4() {
    s32 r = 0;
    switch (func_020b50e8()) {
    case 0x1a:
        r = 0;
        break;
    case 0x1b:
        r = 1;
        break;
    case 0x1c:
        r = 2;
        break;
    case 0x1d:
    case 0x1e:
        r = 3;
        break;
    }
    return r;
}

extern "C" void func_ov004_0223fd30(Unk_0203a9b8 *self) {
    Unk_0203a9b8_Vec v;
    self->func_0203b56c();
    func_01ffcbb0(&v, self);
    s32 a = self->func_0203bc7c();
    s32 b = self->func_0203bc68();
    self->func_0203b484(&v, a, b, self->func_0203bc48());
}

extern "C" BOOL func_ov004_0223fd70(Unk_0203a9b8 *self) {
    self->func_0203c1a4(data_020c8ce8[1].v[1], 0);
    self->func_0203c09c(0);
    Unk_0203a9b8_Vec *p = func_020947f0(4);
    self->unk_110 = p->x;
    self->unk_114 = p->y;
    self->unk_118 = p->z;
    func_0203a458();
    return TRUE;
}

extern "C" BOOL func_ov004_0223fdbc(Unk_0203a9b8 *self) {
    self->func_0203c1a4(0x11, 0);
    self->func_0203c09c(0);
    self->unk_110 = data_021f4880.x;
    self->unk_114 = data_021f4880.y;
    self->unk_118 = data_021f4880.z;
    func_0203a468();
    return TRUE;
}

extern "C" void func_ov004_0223fe00(Unk_0203a9b8 *self, Unk_ov004_0223fe00_Sub *a) {
    Unk_0203a9b8_Vec *p;
    s32 lim;
    s32 sp4;
    s32 sp8;
    s32 inv;
    s32 sc;
    s32 dy;
    Unk_0203a9b8_Vec d;
    s32 ang, r7;
    s32 t;
    if (a == 0) {
        a = (Unk_ov004_0223fe00_Sub *)&self->unk_fc;
    }
    p = func_020947f0(4);
    t = func_0203a7b8(p, &self->unk_1cc, &self->unk_110, &dy);
    if (t < 0x4800) {
        t = 0x4800;
    } else if (t > 0xb000) {
        t = 0xb000;
    }
    sc = func_01ffc5a4(t - 0x4800, 0x6800);
    inv = 0x1000 - sc;
    self->unk_1e4 = inv;
    self->func_0203c0b0(0xb, data_020c8ce8[self->unk_1f0].v[self->unk_1ec], sc);
    d = data_021f4880;
    if (p->z > self->unk_1d4) {
        d = *p;
    } else {
        d.x = self->unk_1cc;
        d.y = self->unk_1d0;
        d.z = self->unk_1d4;
    }
    sp4 = self->func_0203b8e0(&a->unk_14);
    sp8 = 0;
    ang = func_02002bdc(&a->unk_14, &d);
    s32 av = ang < 0 ? (s16)-ang : ang;
    t = 0x2000 - av;
    if (t < 0) t = 0;
    s32 q = func_01ffcb0c(t >> 1, 0x2000);
    lim = (s16)func_01ffcb0c(q, 0xe02);
    if (lim > 0xe02) lim = 0xe02;
    if (lim > 0 && self->unk_1f5 == 0) {
        if (self->unk_1f6 == 3) {
            if (ang > 0) r7 = 1; else r7 = 2;
            if (sp4 == 1 && r7 == 1) {
                s32 b = ang < 0 ? (s16)-ang : ang;
                if (b > 0x701) r7 = 0; else r7 = 2;
            }
            if (sp4 == 2 && r7 == 2) {
                if (ang < 0) ang = (s16)-ang;
                if (ang > 0x701) r7 = 0; else r7 = 1;
            }
            if (func_020b50e8() == 0x10) r7 = 1;
            self->unk_1f6 = r7;
        }
        u32 m = self->unk_1f6;
        if (m == 1) lim = (s16)-lim;
        if (m != 0) {
            a->unk_00 = func_01ffcb0c(lim, inv);
            sp8 = func_01ffcb0c(dy, data_02135f44[((u16)a->unk_00 >> 4) * 2]);
        }
    }
    a->unk_1c += dy;
    a->unk_14 += sp8;
}
