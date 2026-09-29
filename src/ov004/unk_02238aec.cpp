#include "types.h"

struct Unk_ov004_02238af4_V3 {
    s32 x, y, z;
};

// Actor-like object driven by state tables at 0x0224ed40..0x0224eeb4
struct Unk_ov004_02238af4 {
    /* 0x00 */ u8 pad_00[0x10];
    /* 0x10 */ s32 unk_10;
    /* 0x14 */ u8 pad_14[0x21 - 0x14];
    /* 0x21 */ u8 unk_21;
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23[0x40 - 0x23];
    /* 0x40 */ Unk_ov004_02238af4_V3 unk_40;
    /* 0x4c */ s32 unk_4c;
    /* 0x50 */ u8 unk_50;
    /* 0x51 */ u8 pad_51[0x98 - 0x51];
    /* 0x98 */ u16 unk_98;
    /* 0x9a */ u8 pad_9a[0xa4 - 0x9a];
    /* 0xa4 */ u8 unk_a4;
    /* 0xa5 */ u8 pad_a5[0xae - 0xa5];
    /* 0xae */ u8 unk_ae;
    /* 0xaf */ u8 pad_af[0x14c - 0xaf];
    /* 0x14c */ u8 unk_14c[0x10];
    /* 0x15c */ s32 unk_15c;
    /* 0x160 */ u8 pad_160[0x170 - 0x160];
    /* 0x170 */ u8 unk_170;
    /* 0x171 */ u8 pad_171;
    /* 0x172 */ s16 unk_172;
    /* 0x174 */ s32 unk_174;
    /* 0x178 */ u8 pad_178[0x196 - 0x178];
    /* 0x196 */ s8 unk_196;
    /* 0x197 */ u8 pad_197[0x288 - 0x197];
    /* 0x288 */ u8 unk_288[0x40];
    /* 0x2c8 */ Unk_ov004_02238af4_V3 unk_2c8;
};

extern "C" {
s32 func_02063b8c(s32 n);
s32 func_0209c0ac(void *p);
s32 func_02106054(s32 a, s32 b, s32 c);
s32 func_0205668c(void *p, s32 a, s32 b, s32 c, s32 d);
Unk_ov004_02238af4 *func_ov004_022377a0();
Unk_ov004_02238af4 *func_ov004_02237800();
s32 func_ov004_0223d958();
void func_ov004_022398f4(Unk_ov004_02238af4 *o, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_ov004_02239804(Unk_ov004_02238af4 *o, s32 a, s32 b, s32 c, s32 d, s32 e);
s32 func_ov004_02239988(Unk_ov004_02238af4 *o);
void func_ov004_022399d0(Unk_ov004_02238af4 *o, s32 *a, s32 *b);
void func_ov004_0223b7c0(void *p, s32 v);
void func_ov004_0223b84c(Unk_ov004_02238af4 *o);
void func_ov004_02239574(Unk_ov004_02238af4 *o, s32 a, s32 b);
void func_ov004_0223a950(Unk_ov004_02238af4 *o);
void func_ov004_0223bf0c(Unk_ov004_02238af4 *o);
void func_ov004_0223a25c(Unk_ov004_02238af4 *o);
void func_ov004_0223b4ac(Unk_ov004_02238af4 *o);
void func_ov004_0223a3c0(Unk_ov004_02238af4 *o);
void func_ov004_0223c05c(Unk_ov004_02238af4 *o);
void func_ov004_0223ba10(Unk_ov004_02238af4 *o);
void func_ov004_0223bd90(Unk_ov004_02238af4 *o);
void func_ov004_02239d18(Unk_ov004_02238af4 *o);
void func_ov004_0223c578(Unk_ov004_02238af4 *o);
void func_ov004_0223cc7c(Unk_ov004_02238af4 *o);
void func_ov004_0223a850(Unk_ov004_02238af4 *o);
void func_ov004_0223c7cc(Unk_ov004_02238af4 *o);

void func_ov004_02238aec(Unk_ov004_02238af4 *o) { func_ov004_0223a950(o); }

void func_ov004_02238af4(Unk_ov004_02238af4 *o) {
    if (o->unk_196 == 0x23) {
        Unk_ov004_02238af4 *p = func_ov004_022377a0();
        if (func_02063b8c(100) > 50) {
            s32 v = (s16)((func_02063b8c(9) + 4) * 20);
            o->unk_174 = v;
            p->unk_174 = v;
            o->unk_172 = 4;
            p->unk_172 = 4;
        } else {
            s32 v = (s16)((func_02063b8c(3) + 2) * 20);
            if (o->unk_22 == 0) {
                v = (s16)(v * 3);
            }
            o->unk_174 = v;
            p->unk_174 = v;
            o->unk_15c = 0;
            o->unk_172 = 0x19;
            p->unk_172 = 0x19;
        }
    } else if (o->unk_172 == 0x19) {
        o->unk_15c = 0;
    }
}

void func_ov004_02238b90() {}

void func_ov004_02238b94(Unk_ov004_02238af4 *o) {
    func_ov004_022398f4(o, 0x28, 0x1e, 0, 0, 0, 0xf);
    if (o->unk_22 == 0) {
        o->unk_10 = 0x666;
    }
}

void func_ov004_02238bc8(Unk_ov004_02238af4 *o) { func_ov004_0223bf0c(o); }

void func_ov004_02238bd0(Unk_ov004_02238af4 *o) {
    func_ov004_022398f4(o, 0x28, 0x1e, 0, 0, 0, 0xf);
    o->unk_174 = (s16)func_02063b8c(0x1e) + 10;
}

void func_ov004_02238c04(Unk_ov004_02238af4 *o) { func_ov004_0223a25c(o); }

void func_ov004_02238c0c(Unk_ov004_02238af4 *o) { func_ov004_02239574(o, 0x5a, 0x3c); }

void func_ov004_02238c18(Unk_ov004_02238af4 *o) {
    func_ov004_022398f4(o, 0x50, 0x50, 0, func_ov004_0223d958(), 0, 5);
    o->unk_170 = 0;
    func_0205668c(&o->unk_14c, 3, 0, 0x1000, 0);
    s32 a[2], b[2];
    a[0] = 0x104;
    a[1] = 0xc2;
    b[0] = 0x1be;
    b[1] = 0x15a;
    func_ov004_022399d0(o, a, b);
    if (o->unk_22 != 0) {
        o->unk_174 = (s16)((func_02063b8c(6) + 1) * 20);
    } else {
        o->unk_174 = (s16)((func_02063b8c(0x1e) + 5) * 20);
    }
}

void func_ov004_02238cbc(Unk_ov004_02238af4 *o) {
    func_ov004_022398f4(o, 0x50, 0x50, 0, func_ov004_0223d958(), 0, 5);
    o->unk_170 = 0;
    Unk_ov004_02238af4 *p = func_ov004_02237800();
    if (p != 0) {
        s32 a[2], b[2];
        o->unk_21 = 1;
        p->unk_21 = 1;
        a[0] = 0x110;
        a[1] = 0x10c;
        b[0] = 0x14c;
        b[1] = 0x148;
        func_ov004_022399d0(o, a, b);
    } else {
        s32 a[2], b[2];
        if (o->unk_22 != 0) {
            o->unk_174 = (s16)((func_02063b8c(6) + 1) * 20);
        } else {
            o->unk_174 = (s16)((func_02063b8c(0x1e) + 5) * 20);
        }
        a[0] = 0x104;
        a[1] = 0xc2;
        b[0] = 0x1be;
        b[1] = 0x15a;
        func_ov004_022399d0(o, a, b);
    }
}

void func_ov004_02238d8c(Unk_ov004_02238af4 *o) { func_ov004_0223b4ac(o); }

void func_ov004_02238d94(Unk_ov004_02238af4 *o) { func_ov004_0223a3c0(o); }

void func_ov004_02238d9c(Unk_ov004_02238af4 *o) {
    func_ov004_022398f4(o, 0x5a, 0x40, 0, 0, 0, 0xf);
    o->unk_4c = o->unk_2c8.x;
}

void func_ov004_02238dc8(Unk_ov004_02238af4 *o) { func_ov004_0223c05c(o); }

void func_ov004_02238dd0(Unk_ov004_02238af4 *o) {
    func_ov004_02239804(o, 0x1e, 0x14, 0x28, 0xf, 0x1000);
    o->unk_4c = 0x71c;
    Unk_ov004_02238af4_V3 *sv = &o->unk_2c8;
    Unk_ov004_02238af4_V3 *dv = &o->unk_40;
    dv->x = sv->x;
    dv->y = sv->y;
    dv->z = sv->z;
    o->unk_40.y = 0xb00;
}

void func_ov004_02238e1c(Unk_ov004_02238af4 *o) { func_ov004_0223c05c(o); }

void func_ov004_02238e24(Unk_ov004_02238af4 *o) {
    func_ov004_02239804(o, 0x78, 0x3c, 0x25, 8, 0x1000);
    func_ov004_02239988(o);
}

void func_ov004_02238e50(Unk_ov004_02238af4 *o) { func_ov004_0223ba10(o); }

void func_ov004_02238e58(Unk_ov004_02238af4 *o) {
    u8 t = func_02063b8c(5);
    if (func_02063b8c(100) > 50) {
        o->unk_170 = 0;
    } else {
        o->unk_170 = 1;
    }
    o->unk_4c = t;
    func_ov004_022398f4(o, 0x50, 0x50, 0, 0, 0, 1);
    func_ov004_0223b7c0(&o->unk_2c8, t);
    func_ov004_0223b84c(o);
    o->unk_50 = 0;
    if (func_02063b8c(100) > 50) {
        o->unk_174 = (func_02063b8c(9) + 4) * 20;
        o->unk_172 = 4;
    } else {
        o->unk_174 = (func_02063b8c(3) + 2) * 20;
        o->unk_172 = 0x19;
    }
}

void func_ov004_02238f00(Unk_ov004_02238af4 *o) { func_ov004_0223bd90(o); }

void func_ov004_02238f08(Unk_ov004_02238af4 *o) {
    func_ov004_022398f4(o, 0xc8, 0x3c, 0, 0, 0, 0);
    func_02106054(func_0209c0ac(&o->unk_288), 0, 0);
    s32 a[2], b[2];
    a[0] = 0xa6;
    a[1] = 0x106;
    b[0] = 0xfc;
    b[1] = 0x150;
    func_ov004_022399d0(o, a, b);
}

void func_ov004_02238f5c(Unk_ov004_02238af4 *o) {
    func_ov004_022398f4(o, 0xa0, 0x46, 0, func_ov004_0223d958(), 0, 0x20);
    func_ov004_02239988(o);
    o->unk_4c = 0x71c;
}

void func_ov004_02238f90(Unk_ov004_02238af4 *o) {
    func_ov004_022398f4(o, 0xa0, 0x3c, 0, func_ov004_0223d958(), 0, 0x20);
    func_ov004_02239988(o);
    o->unk_4c = 0x71c;
}

void func_ov004_02238fc4(Unk_ov004_02238af4 *o) {
    func_ov004_022398f4(o, 0x50, 0x3c, 0, func_ov004_0223d958(), 0, 0x20);
    func_ov004_02239988(o);
    o->unk_4c = 0x71c;
}

void func_ov004_02238ff8(Unk_ov004_02238af4 *o) {
    func_ov004_022398f4(o, 0xc8, 0x3c, 0, func_ov004_0223d958(), 0, 1);
    func_ov004_02239988(o);
    o->unk_4c = 0x38e;
}

void func_ov004_0223902c(Unk_ov004_02238af4 *o) { func_ov004_02239d18(o); }

void func_ov004_02239034(Unk_ov004_02238af4 *o) { func_ov004_0223c578(o); }

void func_ov004_0223903c(Unk_ov004_02238af4 *o) {
    func_ov004_022398f4(o, 0x28, 0x50, 0, 0, 0, 1);
    s32 a[2], b[2];
    a[0] = 0x62;
    a[1] = 0x11a;
    b[0] = 0x92;
    b[1] = 0x13e;
    func_ov004_022399d0(o, a, b);
    if (o->unk_22 != 0) {
        s32 t = func_02063b8c(0x14);
        t *= func_02063b8c(3);
        o->unk_98 = t;
    } else {
        s32 t = func_02063b8c(0x14);
        t *= func_02063b8c(0xf);
        o->unk_98 = t;
    }
}


void func_ov004_022391ac(Unk_ov004_02238af4 *o, s32 a, s32 b, s32 c, u8 d, u8 e, s32 f);
void func_ov004_022393e0(Unk_ov004_02238af4 *o, s32 a, s32 b, s32 c, u8 d);

void func_ov004_022390b4(Unk_ov004_02238af4 *o) {
    if (func_02063b8c(100) > 50) {
        Unk_ov004_02238af4_V3 *v = &o->unk_2c8;
        v->x = 0x12b00;
        v->y = 0x1a00;
        v->z = 0xda00;
    }
    func_ov004_022391ac(o, 0x64, 0x28, 0x32, 0x78, 0x1e, 0x266);
}

void func_ov004_02239108(Unk_ov004_02238af4 *o) {
    if (func_02063b8c(100) > 50) {
        Unk_ov004_02238af4_V3 *v = &o->unk_2c8;
        v->x = 0x16600;
        v->y = 0x1400;
        v->z = 0x14200;
    }
    func_ov004_022391ac(o, 0xc8, 0x28, 0x2d, 0x1e, 3, 0x19a);
}

void func_ov004_0223915c(Unk_ov004_02238af4 *o) {
    if (func_02063b8c(100) > 50) {
        Unk_ov004_02238af4_V3 *v = &o->unk_2c8;
        v->x = 0x1a600;
        v->y = 0x1400;
        v->z = 0x13c00;
    }
    func_ov004_022391ac(o, 0xc8, 0x3c, 0x28, 0x14, 1, 0xcd);
}

void func_ov004_022391ac(Unk_ov004_02238af4 *o, s32 a, s32 b, s32 c, u8 d, u8 e, s32 f) {
    s32 t = func_ov004_0223d958();
    func_ov004_022398f4(o, a, b, 0, t, c, 0x1000 / d);
    o->unk_a4 = e;
    o->unk_4c = f;
    Unk_ov004_02238af4_V3 *sv = &o->unk_2c8;
    Unk_ov004_02238af4_V3 *dv = &o->unk_40;
    dv->x = sv->x;
    dv->y = sv->y;
    dv->z = sv->z;
    if (o->unk_22 != 0) {
        if (func_02063b8c(100) > 50) {
            o->unk_174 = 100;
            return;
        }
    }
    o->unk_ae = 1;
}

void func_ov004_02239234(Unk_ov004_02238af4 *o) { func_ov004_0223cc7c(o); }

void func_ov004_0223923c(Unk_ov004_02238af4 *o) { func_ov004_0223a850(o); }

void func_ov004_02239244(Unk_ov004_02238af4 *o) {
    func_ov004_022398f4(o, 0x3c, 0x46, 0, func_ov004_0223d958(), 0, 0x26);
    o->unk_174 = (func_02063b8c(10) + 3) * 20;
    o->unk_98 = 0;
}

#define ACWW_088_TAIL(NAME, A, B, C, D) \
void NAME(Unk_ov004_02238af4 *o) { \
    func_ov004_022393e0(o, A, B, C, D); \
    s32 a[2], b[2]; \
    a[0] = 0x104; \
    a[1] = 0xc2; \
    b[0] = 0x1be; \
    b[1] = 0x15a; \
    func_ov004_022399d0(o, a, b); \
}

ACWW_088_TAIL(func_ov004_02239284, 0x3c, 0x46, 8, 1)
ACWW_088_TAIL(func_ov004_022392c8, 0x3c, 0x50, 8, 3)
ACWW_088_TAIL(func_ov004_0223930c, 0x3c, 0x50, 8, 2)
ACWW_088_TAIL(func_ov004_02239350, 0x3c, 0x46, 6, 1)
ACWW_088_TAIL(func_ov004_02239394, 0x3c, 0x46, 6, 1)

void func_ov004_022393d8(Unk_ov004_02238af4 *o) { func_ov004_0223c7cc(o); }

void func_ov004_022393e0(Unk_ov004_02238af4 *o, s32 a, s32 b, s32 c, u8 d) {
    s32 t = func_ov004_0223d958();
    func_ov004_022398f4(o, a, b, 0, t, 0, 0x1000 / c);
    o->unk_98 = (func_02063b8c(9) + 2) * 20;
    o->unk_a4 = d;
}
}
