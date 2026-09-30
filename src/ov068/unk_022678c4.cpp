#include "types.h"

struct Unk_ov068_022678c4_Ent {
    u32 a, b, c, d;
};

struct Unk_ov068_022678c4_V {
    s32 x, y, z;
    Unk_ov068_022678c4_V(s32 a, s32 b, s32 c) {
        x = a;
        y = b;
        z = c;
    }
};

struct Unk_ov068_022678c4_Vv {
    s32 x, y, z;
};

struct Unk_ov068_022678c4_Src {
    u8 pad_00[0x268];
    s32 unk_268;
};

struct Unk_ov068_022678c4_Rec {
    u8 pad_00[0x8e];
    u16 unk_8e;
};

extern "C" {
extern void *data_021c47c4;
extern s16 data_02135f44[];
extern u32 data_021f4880[];

Unk_ov068_022678c4_Src *func_ov003_0222ead4(void *);
u8 *func_020af3f4();
void func_0204edd8(void *, void *);
s32 func_01ffc5a4(s32, s32);
s32 func_01ffcb0c(s32, s32);
void func_02003e70(void *, s32, s32, s32);
void func_0204ee10(s32 *, s32 *, void *);
void *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
u16 func_0204b10c(u32);
void func_0204eb30(void *m, u16 *v, s32 x, s32 y, s32 z);
void func_ov003_02212e50(void *);
void func_ov003_02212d28(void *, s32);
void func_ov003_022135c4(void *, s32);
void func_020339bc(void *, void *, s32, s32);
s32 func_02033988(void *);
void func_020ed188(void *);
s32 func_ov068_02268608(void *);
s32 func_ov068_0226867c(void *);
s32 func_ov068_02268740(void *);
void func_020e9960(void *, void *, void *);
void func_020e94f8(void *);
void func_020e9888(void *, s32);
s32 func_020e9650(void *, void *);
void func_020e7820(void *, s32, s32, s32);
s32 func_020e9688(void *);
Unk_ov068_022678c4_Rec *func_02095204(s32);
}

class Unk_ov068_022678c4 {
public:
    /* 0x00 */ u8 pad_00[8];
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u8 pad_0c[0x50];
    /* 0x5c */ s32 unk_5c;
    /* 0x60 */ s32 unk_60;
    /* 0x64 */ s32 unk_64;
    /* 0x68 */ s32 unk_68;
    /* 0x6c */ u8 pad_6c[4];
    /* 0x70 */ s32 unk_70;
    /* 0x74 */ u8 pad_74[0x34];
    /* 0xa8 */ s32 unk_a8;
    /* 0xac */ u8 pad_ac[0x268 - 0xac];
    /* 0x268 */ s32 unk_268;
    /* 0x26c */ s32 unk_26c;
    /* 0x270 */ s32 unk_270;
    /* 0x274 */ s32 unk_274;
    /* 0x278 */ u8 pad_278[0x2ec - 0x278];
    /* 0x2ec */ s32 unk_2ec;
    /* 0x2f0 */ s32 unk_2f0;
    /* 0x2f4 */ u8 pad_2f4[0x304 - 0x2f4];
    /* 0x304 */ u32 unk_304;
    /* 0x308 */ s32 unk_308;
    /* 0x30c */ u32 unk_30c;
    /* 0x310 */ s32 unk_310;
    /* 0x314 */ s32 unk_314;
    /* 0x318 */ u8 pad_318[0x324 - 0x318];
    /* 0x324 */ u8 unk_324[0x364 - 0x324];
    /* 0x364 */ u8 unk_364;
    /* 0x365 */ u8 pad_365[0x374 - 0x365];
    /* 0x374 */ u16 unk_374_lo : 2;
    u16 unk_374_b2 : 2;
    u16 unk_374_b4 : 1;
    u16 unk_374_b5 : 1;
    /* 0x376 */ u8 pad_376[2];
    /* 0x378 */ s32 unk_378;
    /* 0x37c */ s32 unk_37c;
    /* 0x380 */ s32 unk_380;
    /* 0x384 */ s32 unk_384[3];
    /* 0x390 */ u8 pad_390[2];
    /* 0x392 */ u16 unk_392;
    /* 0x394 */ u8 pad_394;
    /* 0x395 */ u8 unk_395;
    /* 0x396 */ u16 unk_396;

    s32 func_ov068_022678c4();
    void func_ov068_022679bc();
    s32 func_ov068_02267aa0();
    void func_ov068_02267b38();
    s32 func_ov068_02267bf0();
    void func_ov068_02267c58();
    s32 func_ov068_02267d08();
    void func_ov068_02267d70();
    s32 func_ov068_02267e04();
    void func_ov068_02267e5c();
    s32 func_ov068_02267e74();
    void func_ov068_02267ec4();
    s32 func_ov068_02267f8c();
    void func_ov068_02268008();
    s32 func_ov068_022680f0();
};

s32 Unk_ov068_022678c4::func_ov068_022678c4() {
    unk_374_b4 = 0;
    unk_374_b5 = 1;
    Unk_ov068_022678c4_Src *o = func_ov003_0222ead4(this);
    func_0204edd8(&unk_378, (u8 *)o + 0x5c);
    unk_37c += ((o->unk_268 * 2 - (o->unk_268 >> 3)) - (unk_268 >> 3)) - 0x400;
    unk_a8 = -(func_01ffc5a4(0, 0x3e8000) + 0x8f2);
    u32 ei = unk_08 & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)func_020af3f4();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    unk_310 = func_01ffc5a4(unk_378 - unk_5c, 0x10000);
    unk_314 = func_01ffc5a4(unk_380 - unk_64, 0x10000);
    unk_395 = 0;
    func_02003e70(unk_324, 0x81e, 0x7f, 0);
    return 1;
}

void Unk_ov068_022678c4::func_ov068_022679bc() {
    unk_26c = unk_268;
    unk_5c += unk_310;
    unk_60 = 0;
    unk_64 += unk_314;
    if (unk_395++ >= 0x10) {
        unk_5c = unk_378;
        unk_60 = unk_37c;
        unk_64 = unk_380;
        void *g = data_021c47c4;
        if (g) {
            s32 x, y;
            func_0204ee10(&x, &y, &unk_5c);
            s32 tx = *(volatile s32 *)&x;
            s32 ty = *(volatile s32 *)&y;
            s32 hx = tx >> 4;
            s32 hy = ty >> 4;
            u16 *c = (u16 *)func_0204ebd8(g, hx, hy, tx - (hx << 4), ty - (hy << 4), 0);
            if (c) {
                unk_396 = *c;
            }
            u16 v = func_0204b10c(unk_374_lo);
            func_0204eb30(g, &v, x, y, 0);
        }
        func_ov003_02212e50(&unk_396);
        func_ov003_02212d28(this, 9);
    }
}

s32 Unk_ov068_022678c4::func_ov068_02267aa0() {
    unk_374_b4 = 0;
    unk_374_b5 = 1;
    func_0204edd8(&unk_378, &unk_5c);
    u32 ei = unk_08 & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)func_020af3f4();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    unk_310 = func_01ffc5a4(unk_378 - unk_5c, 0x10000);
    unk_314 = func_01ffc5a4(unk_380 - unk_64, 0x10000);
    unk_395 = 0;
    return 1;
}

void Unk_ov068_022678c4::func_ov068_02267b38() {
    u32 buf[16];
    func_020339bc(buf, &unk_5c, 0, 0);
    s32 *p = (s32 *)&buf[9];
    unk_5c += p[0] >> 5;
    unk_64 += p[2] >> 5;
    unk_268 = func_01ffcb0c(unk_268, 0xf85);
    unk_308 = func_01ffcb0c(0x100, data_02135f44[(unk_392 >> 4) * 2]);
    unk_392 = (s16)unk_392 + 0x400;
    if (unk_268 < 0x100) {
        unk_268 = 0;
        func_020ed188(this);
    }
    s32 lim = (s32)buf[15] - unk_268 - 0x200;
    unk_60 -= 0x400;
    if (unk_60 < lim) {
        unk_60 = lim;
    }
    func_02033988(buf);
}

s32 Unk_ov068_022678c4::func_ov068_02267bf0() {
    unk_374_b4 = 0;
    unk_374_b5 = 1;
    u32 ei = unk_08 & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)func_020af3f4();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    unk_392 = 0;
    unk_2f0 >>= 1;
    func_ov068_02268608(this);
    return 1;
}

void Unk_ov068_022678c4::func_ov068_02267c58() {
    unk_2f0 += func_01ffc5a4(0, 0x3e8000) + 0x158;
    unk_5c += unk_2ec;
    unk_64 += unk_2f0;
    s32 d = unk_64 - unk_380;
    if (d < 0) {
        d = -d;
    }
    unk_60 = -func_01ffcb0c(d, 0x3d7);
    static s32 thr = func_01ffc5a4(0, 0x64000) + 0x3000;
    if (d >= thr) {
        func_ov003_02212d28(this, 6);
    }
}

s32 Unk_ov068_022678c4::func_ov068_02267d08() {
    unk_374_b4 = 0;
    unk_374_b5 = 1;
    u32 ei = unk_08 & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)func_020af3f4();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    unk_378 = unk_5c;
    unk_37c = unk_60;
    unk_380 = unk_64;
    return 1;
}

void Unk_ov068_022678c4::func_ov068_02267d70() {
    unk_26c = unk_268;
    s32 v[3];
    func_020e9960(v, unk_384, &unk_5c);
    func_020e94f8(v);
    func_020e9888(v, 0x80);
    unk_5c += v[0];
    unk_64 += v[2];
    func_ov068_02268740(this);
    s32 d = func_020e9650(&unk_5c, unk_384);
    s32 lim = 0;
    if (d < 0x1000) {
        lim = -((0x1000 - d) / 5);
    }
    if (unk_60 < lim) {
        unk_60 = lim;
        if (d < 0x333) {
            func_ov003_022135c4(this, 1);
        }
    }
}

s32 Unk_ov068_022678c4::func_ov068_02267e04() {
    unk_374_b4 = 0;
    unk_374_b5 = 1;
    func_0204edd8(unk_384, &unk_5c);
    u32 ei = unk_08 & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)func_020af3f4();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    return 1;
}

void Unk_ov068_022678c4::func_ov068_02267e5c() {
    unk_26c = unk_268;
    func_020ed188(this);
}

s32 Unk_ov068_022678c4::func_ov068_02267e74() {
    unk_374_b4 = 1;
    unk_374_b5 = 0;
    u32 ei = unk_08 & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)func_020af3f4();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    func_ov068_0226867c(this);
    return 1;
}

void Unk_ov068_022678c4::func_ov068_02267ec4() {
    u32 buf[16];
    s32 t = unk_268;
    t = t + (t >> 1);
    func_020e7820(&unk_26c, t, 0x200, t);
    func_020339bc(buf, &unk_5c, 0, 0);
    s32 *p = (s32 *)&buf[9];
    unk_5c += p[0] >> 5;
    unk_64 += p[2] >> 5;
    unk_268 = func_01ffcb0c(unk_268, 0xfd7);
    unk_308 = func_01ffcb0c(0x100, data_02135f44[(unk_392 >> 4) * 2]);
    unk_392 = (s16)unk_392 + 0x400;
    if (unk_268 < 0x80) {
        unk_268 = 0;
        func_020ed188(this);
    }
    func_ov068_02268740(this);
    unk_60 = (s32)buf[15] - unk_268 - 0x200;
    func_02033988(buf);
}

s32 Unk_ov068_022678c4::func_ov068_02267f8c() {
    unk_374_b4 = 1;
    unk_374_b5 = 0;
    unk_392 = 0;
    u32 ei = unk_08 & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)func_020af3f4();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    u32 *g = data_021f4880;
    unk_304 = g[0];
    unk_308 = g[1];
    unk_30c = g[2];
    unk_a8 = 0;
    return 1;
}

void Unk_ov068_022678c4::func_ov068_02268008() {
    u32 buf[17];
    s32 lim;
    s32 t = unk_268;
    t = t + (t >> 1);
    func_020e7820(&unk_26c, t, 0xcc, t);
    unk_5c += unk_2ec;
    unk_64 += unk_2f0;
    if (unk_364 < 0xc) {
        unk_a8 = unk_a8 + 1;
        unk_60 -= 0x100;
        unk_364 = unk_364 + 1;
    } else {
        unk_a8 = unk_a8 + (func_01ffc5a4(0, 0x2710000) + 0xe9);
        unk_60 = unk_60 - unk_a8;
    }
    if (unk_274 & 2) {
        func_020339bc(buf, &unk_5c, 0, 0);
        lim = (s32)buf[15] - unk_268 - 0x200;
        if (unk_60 < lim) {
            func_ov068_02268608(this);
            unk_60 = lim;
            func_ov003_02212d28(this, 2);
        }
        func_02033988(buf);
    }
}

s32 Unk_ov068_022678c4::func_ov068_022680f0() {
    unk_374_b4 = 1;
    unk_374_b5 = 0;
    unk_26c = 0;
    u32 ei = unk_08 & 1;
    Unk_ov068_022678c4_Ent *e = (Unk_ov068_022678c4_Ent *)func_020af3f4();
    e[ei & 1].a = 0;
    e[ei & 1].b = 0;
    e[ei & 1].c = 0;
    e[ei & 1].d = 0x800;
    unk_60 = 0;
    unk_a8 = 0;
    unk_2ec = func_01ffcb0c(unk_2ec, 0x119a);
    unk_2f0 = func_01ffcb0c(unk_2f0, 0x119a);
    unk_364 = 0;
    Unk_ov068_022678c4_V v(unk_2ec, 0, unk_2f0);
    s32 d = func_020e9688(&v);
    if (d < 0x2b8) {
        if (d == 0) {
            Unk_ov068_022678c4_Rec *r = func_02095204(4);
            if (r) {
                s32 a = (r->unk_8e >> 4) * 2;
                unk_2ec = func_01ffcb0c(0x2b8, data_02135f44[a]);
                unk_2f0 = func_01ffcb0c(0x2b8, data_02135f44[a + 1]);
                unk_5c = unk_68 + unk_2ec;
                unk_64 = unk_70 + unk_2f0;
            }
        } else {
            s32 r = func_01ffc5a4(0x2b8, d);
            unk_2ec = func_01ffcb0c(unk_2ec, r);
            unk_2f0 = func_01ffcb0c(unk_2f0, r);
        }
    }
    return 1;
}
