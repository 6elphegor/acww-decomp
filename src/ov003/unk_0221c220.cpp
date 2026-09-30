#include "types.h"

struct Unk_ov003_0221c220_Elem {
    u8 pad[0x14c];
};

struct Unk_ov003_0221c53c_Slot {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10;
    s32 unk_14;
    Unk_ov003_0221c53c_Slot() {
        unk_08 = 0;
        unk_0c = 0;
    }
};

struct Unk_ov003_0221c220_Big {
    Unk_ov003_0221c220_Elem unk_0000[3][4];
    Unk_ov003_0221c220_Elem unk_0f90[4];
    Unk_ov003_0221c220_Elem unk_14c0[3];
    Unk_ov003_0221c220_Elem unk_18a4[4];
    Unk_ov003_0221c53c_Slot unk_1dd4[5];
    u8 unk_1e4c[4];
};

struct Unk_ov003_0221c2d8_Elem {
    u8 pad_00[8];
    u8 unk_08[0xc4];
    s32 unk_cc;
    s32 unk_d0;
    u8 pad_d4[0xc];
    u8 unk_e0[0x40];
    s32 unk_120[6];
};

struct Unk_ov003_0221c62c_Vec3 {
    s32 x, y, z;
};

struct Unk_ov003_0221c62c_Pos {
    s32 x, z;
};

struct Unk_ov003_0221c62c_Rec {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0c;
    s8 unk_0d;
    s8 unk_0e;
    u8 unk_0f;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1c;
};

struct Unk_ov003_0221c608_Set {
    Unk_ov003_0221c62c_Rec unk_00[2];
    s32 unk_40;
};

struct Unk_ov003_0221ca7c_P {
    s32 unk_00;
    u16 unk_04;
    u16 unk_06;
    s16 unk_08;
};

struct Unk_ov003_0221c91c_A {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
};

struct Unk_ov003_0221c91c_B {
    Unk_ov003_0221c91c_A *unk_00;
};

struct Unk_ov003_0221c91c_Tgt {
    u8 pad_00[0x18];
    Unk_ov003_0221c91c_B *unk_18;
    u8 pad_1c[4];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad_2c[0x18];
    s32 unk_44;
    u8 pad_48[8];
    s32 unk_50;
    u8 pad_54[4];
    u16 unk_58;
    u8 pad_5a[0xe];
    u8 unk_68;
    u8 pad_69[0x17];
    u8 unk_80;
};

struct Unk_ov003_0221c858_Obj {
    u8 pad_00[0xa];
    u8 unk_0a;
    u8 pad_0b;
    Unk_ov003_0221c91c_Tgt *unk_0c;
};

struct Unk_ov003_0221c91c_Pad {
    s32 v[2];
    Unk_ov003_0221c91c_Pad() {}
    ~Unk_ov003_0221c91c_Pad() {}
};

struct Unk_ov003_0221c62c_Quad {
    s32 v[4];
};

typedef Unk_ov003_0221c220_Big Big;
typedef Unk_ov003_0221c62c_Rec Rec;
typedef Unk_ov003_0221c62c_Vec3 Vec3;
typedef Unk_ov003_0221c62c_Pos Pos;
typedef Unk_ov003_0221c608_Set Set;
typedef Unk_ov003_0221c91c_Tgt Tgt;
typedef Unk_ov003_0221ca7c_P PRec;
typedef Unk_ov003_0221c2d8_Elem Elem2;

extern "C" {
void func_ov003_0221b528(void *p);
void func_ov003_0221b570(void *p);
void func_ov003_0221bb98(void *p);
void func_ov003_0221bbb8(void *p);
void func_ov003_0221bc24(void *p);
void func_ov003_0221bf30(void *p);
void func_ov003_0221c13c(void *p, void *q);
void func_020f43fc(void *p);
void func_020f440c(void *p);
void func_020548a0(void *p);
void func_020548d0(void *p);
void *func_02135714(void *p, u32 n, u32 size, void *ctor, void *dtor);
void *func_021355f0(void *p, u32 n, u32 size, void *dtor);
s32 func_02133150(s32 a, s32 b);
u32 func_0204c0ac();
s32 func_0204ed8c(Vec3 *out, s32 x, s32 z);
s32 func_0208fb20(s32, void *, s32, void *);
s32 func_0208fdac(void *);
s32 func_0208fdc0(void *);
s32 func_020b5184();
s32 func_0204eb30(void *grid, u16 *v, s32 x, s32 y, s32 z);
s32 func_0204e978(void *grid, s32 x, s32 y);
s32 func_0204e914(void *grid, s32 x, s32 y);

extern Set data_ov003_02235960;
extern s32 data_ov003_0222f564[][4];
extern s32 data_ov003_0222f594[][4];
extern s16 data_02135f44[];
extern u8 data_ov003_0222f4c8[];
extern u8 data_ov003_0222f534[];
extern s32 data_ov003_0222f298[];
extern Unk_ov003_0221c62c_Quad data_ov003_02232b48;
extern Unk_ov003_0221c62c_Quad data_ov003_02232b78;
extern PRec ****data_ov003_02232928[];
extern s32 data_ov003_022335c0[];
extern void *data_021c47c4;

u8 *func_ov003_0221c220(Big *self, u16 *p, s32 a, s32 b);
void func_ov003_0221c2d8(Big *self);
void func_ov003_0221c34c(Big *self);
void func_ov003_0221c3b4(Big *self);
void func_ov003_0221c440(Big *self);
Elem2 *func_ov003_0221c4c8(Elem2 *self);
Big *func_ov003_0221c4e4(Big *self);
Big *func_ov003_0221c53c(Big *self);
Elem2 *func_ov003_0221c5c4(Elem2 *self);
void func_ov003_0221c608(Set *self);
Rec *func_ov003_0221c62c(Set *self, s32 p1, u32 p2, u16 *p3, Pos *p4, s32 p5);
Rec *func_ov003_0221c6c4(Set *self, s32 p1, u32 p2, u16 *p3, Pos *p4, s32 p5);
void func_ov003_0221c778(Set *self, Rec *r, s32 *o1, s32 *o2, Vec3 *out, u16 *tile, Pos *pos);
Rec *func_ov003_0221c838(Set *self);
s32 func_ov003_0221c858(Unk_ov003_0221c858_Obj *self);
s32 func_ov003_0221c88c(Unk_ov003_0221c858_Obj *self);
void func_ov003_0221c8bc(Unk_ov003_0221c858_Obj *self);
void func_ov003_0221c91c(Rec *r, Tgt *t);
void func_ov003_0221ca4c(Rec *r, Tgt *t);
PRec *func_ov003_0221ca7c(Rec *r);
void func_ov003_0221caac(Rec *r, s32 a1, s32 a2, s32 a3, u32 c, Vec3 *pos, s32 flag);
void func_ov003_0221cae8(Rec *r);
void func_ov003_0221caf0(s32 x, s32 y, u32 tile, s32 flag);

u8 *func_ov003_0221c220(Big *self, u16 *p, s32 a, s32 b) {
    BOOL f = FALSE;
    u32 t = *p;
    if (t >= 0x2f && t <= 0x56) f = TRUE;
    if (f) return (u8 *)self + 0xa60 + a * 0x14c;
    if (t >= 0x57 && t <= 0x5b) return (u8 *)self + b * 0x530 + a * 0x14c;
    if (t == 0x69) return (u8 *)self + 0xa60 + a * 0x14c;
    if (t >= 0x6a && t <= 0x6c) return (u8 *)self + 0xf90 + a * 0x14c;
    if (t == 0x6d) return (u8 *)self + 0xf90 + a * 0x14c;
    if (t >= 0x5d && t <= 0x61) return (u8 *)self + 0xf90 + a * 0x14c;
    if (t >= 0xc8 && t <= 0xcf) return (u8 *)self + 0x18a4 + a * 0x14c;
    return (u8 *)self + b * 0x530 + a * 0x14c;
}

void func_ov003_0221c2d8(Big *self) {
    s32 i, j;
    func_ov003_0221b528(self->unk_1e4c);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) func_ov003_0221bb98(&self->unk_0000[i][j]);
    }
    for (i = 0; i < 4; i++) {
        func_ov003_0221bb98(&self->unk_0f90[i]);
        func_ov003_0221bb98(&self->unk_18a4[i]);
    }
}

void func_ov003_0221c34c(Big *self) {
    s32 i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) func_ov003_0221bbb8(&self->unk_0000[i][j]);
    }
    for (i = 0; i < 4; i++) {
        func_ov003_0221bbb8(&self->unk_0f90[i]);
        func_ov003_0221bbb8(&self->unk_18a4[i]);
    }
}

void func_ov003_0221c3b4(Big *self) {
    s32 i, j;
    for (i = 0; i < 5; i++) {
        if (self->unk_1dd4[i].unk_00 != 0) func_ov003_0221c13c(self, &self->unk_1dd4[i]);
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) func_ov003_0221bc24(&self->unk_0000[i][j]);
    }
    for (i = 0; i < 4; i++) {
        func_ov003_0221bc24(&self->unk_0f90[i]);
        func_ov003_0221bc24(&self->unk_18a4[i]);
    }
}

void func_ov003_0221c440(Big *self) {
    s32 i, j;
    func_ov003_0221b570(self->unk_1e4c);
    for (i = 0; i < 5; i++) self->unk_1dd4[i].unk_00 = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) func_ov003_0221bf30(&self->unk_0000[i][j]);
    }
    for (i = 0; i < 4; i++) {
        func_ov003_0221bf30(&self->unk_0f90[i]);
        func_ov003_0221bf30(&self->unk_18a4[i]);
    }
}

Elem2 *func_ov003_0221c4c8(Elem2 *self) {
    func_020f43fc(self->unk_e0);
    func_020548a0(self->unk_08);
    return self;
}

Big *func_ov003_0221c4e4(Big *self) {
    func_021355f0(self->unk_18a4, 4, 0x14c, (void *)func_ov003_0221c4c8);
    func_021355f0(self->unk_14c0, 3, 0x14c, (void *)func_ov003_0221c4c8);
    func_021355f0(self->unk_0f90, 4, 0x14c, (void *)func_ov003_0221c4c8);
    func_021355f0(self, 12, 0x14c, (void *)func_ov003_0221c4c8);
    return self;
}

Big *func_ov003_0221c53c(Big *self) {
    func_02135714(self, 12, 0x14c, (void *)func_ov003_0221c5c4, (void *)func_ov003_0221c4c8);
    func_02135714(self->unk_0f90, 4, 0x14c, (void *)func_ov003_0221c5c4, (void *)func_ov003_0221c4c8);
    func_02135714(self->unk_14c0, 3, 0x14c, (void *)func_ov003_0221c5c4, (void *)func_ov003_0221c4c8);
    func_02135714(self->unk_18a4, 4, 0x14c, (void *)func_ov003_0221c5c4, (void *)func_ov003_0221c4c8);
    {
        Unk_ov003_0221c53c_Slot *s = self->unk_1dd4;
        do {
            s->unk_08 = 0;
            s->unk_0c = 0;
            s = (Unk_ov003_0221c53c_Slot *)((u8 *)s + 0x18);
        } while (s != (Unk_ov003_0221c53c_Slot *)self->unk_1e4c);
    }
    return self;
}

Elem2 *func_ov003_0221c5c4(Elem2 *self) {
    s32 *p;
    func_020548d0(self->unk_08);
    self->unk_cc = 0;
    self->unk_d0 = 0;
    func_020f440c(self->unk_e0);
    p = self->unk_120;
    do {
        p[0] = 0;
        p[1] = 0;
        p += 2;
    } while (p != &self->unk_120[6]);
    return self;
}

void func_ov003_0221c608(Set *self) {
    Rec *r;
    s32 i;
    for (r = self->unk_00, i = 0; i < 2; r++, i++) {
        func_ov003_0221cae8(r);
    }
    self->unk_40 = -1;
}

Rec *func_ov003_0221c62c(Set *self, s32 p1, u32 p2, u16 *p3, Pos *p4, s32 p5) {
    Unk_ov003_0221c62c_Quad q = data_ov003_02232b78;
    Rec *r = func_ov003_0221c838(self);
    if (r != 0) {
        s32 v14, v18;
        Pos pos;
        Vec3 out;
        Vec3 out2;
        pos.x = p4->x;
        pos.z = p4->z;
        func_ov003_0221c778(self, r, &v14, &v18, &out, p3, &pos);
        out2 = out;
        func_ov003_0221caac(r, v14, 1, p1, p2, &out2, p5);
        if (func_ov003_0221ca7c(r) != 0) {
            func_0208fb20(v18, &out, 0, &q);
        } else {
            r->unk_00 = 3;
        }
        self->unk_40 = -1;
    }
    return r;
}

Rec *func_ov003_0221c6c4(Set *self, s32 p1, u32 p2, u16 *p3, Pos *p4, s32 p5) {
    Unk_ov003_0221c62c_Quad q = data_ov003_02232b48;
    Rec *r = 0;
    if (data_ov003_0222f4c8[func_0204c0ac()] != 0) {
        r = func_ov003_0221c838(self);
        if (r != 0) {
            s32 v14, v18;
            Pos pos;
            Vec3 out;
            Vec3 out2;
            pos.x = p4->x;
            pos.z = p4->z;
            func_ov003_0221c778(self, r, &v14, &v18, &out, p3, &pos);
            out2 = out;
            func_ov003_0221caac(r, v14, 0, p1, p2, &out2, p5);
            if (func_ov003_0221ca7c(r) != 0) {
                func_0208fb20(data_ov003_0222f298[v14], &out, 0, &q);
            } else {
                r->unk_00 = 3;
            }
            self->unk_40 = -1;
        }
    }
    return r;
}

void func_ov003_0221c778(Set *self, Rec *r, s32 *o1, s32 *o2, Vec3 *out, u16 *tile, Pos *pos) {
    u8 *c = (u8 *)func_0204c0ac();
    s32 k;
    BOOL f = FALSE;
    u32 t = *tile;
    if (t >= 0x26 && t <= 0x2a) f = TRUE;
    if (f) goto grass;
    if (t >= 0x2b && t <= 0x2e) goto grass;
    if (t == 0x67) {
    grass:
        k = (pos->x ^ pos->z) & 1;
        *o1 = 0;
        r->unk_10 = k;
        *o2 = 0x22;
        if ((data_ov003_0222f534 + k * 0x17)[(u32)c] != 0) *o2 = 0x24;
    } else if ((t >= 0x5d && t <= 0x61) || (t >= 0x62 && t <= 0x65) || t == 0x6d || t == 0x6b) {
        *o1 = 1;
        r->unk_10 = 3;
        *o2 = 0x25;
    } else if ((t >= 0xc8 && t <= 0xcf) || (t >= 0xd0 && t <= 0xd3)) {
        *o1 = 2;
        r->unk_10 = 3;
        *o2 = 0x27;
    } else {
        *o1 = 0;
        r->unk_10 = 2;
        *o2 = 0x22;
    }
    func_0204ed8c(out, pos->x, pos->z);
}

Rec *func_ov003_0221c838(Set *self) {
    s32 i = 0;
    goto test;
loop:
    if (self->unk_00[i].unk_00 == 3) {
        self->unk_40 = i;
        return &self->unk_00[i];
    }
    i++;
test:
    if (i < 2) goto loop;
    return 0;
}

s32 func_ov003_0221c858(Unk_ov003_0221c858_Obj *self) {
    BOOL r = TRUE;
    func_0208fdac(self);
    Rec *rec = &data_ov003_02235960.unk_00[self->unk_0a];
    if (rec->unk_00 == 3) {
        r = FALSE;
    } else {
        func_ov003_0221c91c(rec, self->unk_0c);
    }
    return r;
}

s32 func_ov003_0221c88c(Unk_ov003_0221c858_Obj *self) {
    Rec *rec = &data_ov003_02235960.unk_00[self->unk_0a];
    s32 t = rec->unk_0d;
    if (t - 1 < 0) rec->unk_00 = 3;
    rec->unk_0d = t - 1;
    rec->unk_0e = rec->unk_0e + 1;
    return func_ov003_0221c858(self);
}

void func_ov003_0221c8bc(Unk_ov003_0221c858_Obj *self) {
    s32 i;
    Tgt *t = self->unk_0c;
    Rec *r;
    func_0208fdc0(self);
    self->unk_0a = data_ov003_02235960.unk_40;
    i = data_ov003_02235960.unk_40;
    if (i < 0) i = 0;
    r = &data_ov003_02235960.unk_00[i];
    func_ov003_0221c91c(r, t);
    self->unk_0a = i;
    func_ov003_0221ca4c(r, t);
    t->unk_44 = data_ov003_0222f594[data_ov003_02235960.unk_00[i].unk_00][r->unk_0c];
    t->unk_80 = r->unk_10;
}

void func_ov003_0221c91c(Rec *r, Tgt *t) {
    s32 sc = data_ov003_0222f564[r->unk_00][r->unk_0c];
    s32 x, y, z, d, e;
    s32 ang, lim;
    Unk_ov003_0221c91c_Pad pad;
    switch (r->unk_08) {
    case 3:
        switch (r->unk_0f - 4) {
        case 0:
            lim = 0x10;
            ang = -0x4000;
            break;
        case 1:
            lim = 0x10;
            ang = 0x4000;
            break;
        case 2:
            lim = 9;
            ang = -0x2000;
            break;
        case 3:
            lim = 9;
            ang = 0x2000;
            break;
        }
        e = r->unk_0e;
        if (e < lim) ang = (s16)(e * ang / lim);
        d = ((u16)ang >> 4) * 2;
        x = r->unk_14 + ((sc * data_02135f44[d]) >> 12);
        y = r->unk_18 + ((sc * data_02135f44[d + 1]) >> 12);
        z = r->unk_1c;
        break;
    case 4:
        switch (r->unk_0f - 4) {
        case 0:
            ang = -0x4000;
            break;
        case 1:
            ang = 0x4000;
            break;
        case 2:
            ang = -0x2000;
            break;
        case 3:
            ang = 0x2000;
            break;
        }
        d = ((u16)ang >> 4) * 2;
        x = r->unk_14 + ((sc * data_02135f44[d]) >> 12);
        y = r->unk_18 + ((sc * data_02135f44[d + 1]) >> 12);
        z = r->unk_1c;
        break;
    default:
        x = r->unk_14;
        y = r->unk_18 + sc;
        z = r->unk_1c;
        break;
    }
    t->unk_20 = x + t->unk_18->unk_00->unk_04;
    t->unk_24 = y + t->unk_18->unk_00->unk_08;
    t->unk_28 = z + t->unk_18->unk_00->unk_0c;
}

void func_ov003_0221ca4c(Rec *r, Tgt *t) {
    PRec *p = func_ov003_0221ca7c(r);
    t->unk_68 = p->unk_04;
    t->unk_58 = p->unk_06;
    t->unk_50 = p->unk_08;
    r->unk_0d = p->unk_00;
}

PRec *func_ov003_0221ca7c(Rec *r) {
    PRec *res = 0;
    PRec ****a = data_ov003_02232928[r->unk_00];
    if (a != 0) {
        PRec ***b = a[r->unk_08];
        if (b != 0) {
            PRec **c = b[r->unk_0c];
            if (c != 0) res = c[r->unk_04];
        }
    }
    return res;
}

void func_ov003_0221caac(Rec *r, s32 a1, s32 a2, s32 a3, u32 c, Vec3 *pos, s32 flag) {
    r->unk_00 = a1;
    r->unk_04 = a2;
    r->unk_0e = 0;
    r->unk_14 = pos->x;
    r->unk_18 = pos->y;
    r->unk_1c = pos->z;
    r->unk_0f = a3;
    if (flag == 0) {
        r->unk_08 = data_ov003_022335c0[a3];
    } else {
        r->unk_08 = 4;
    }
    r->unk_0c = c;
}

void func_ov003_0221cae8(Rec *r) {
    r->unk_00 = 3;
}

void func_ov003_0221caf0(s32 x, s32 y, u32 tile, s32 flag) {
    void *g;
    volatile u16 t[1];
    func_020b5184();
    g = data_021c47c4;
    if (g != 0) {
        t[0] = 0xfff1;
        t[0] = tile;
        func_0204eb30(g, (u16 *)t, x, y, 0);
        if (tile != 0xfff1 && flag != 0) {
            func_0204e978(g, x, y);
        } else {
            func_0204e914(g, x, y);
        }
    }
}
}
