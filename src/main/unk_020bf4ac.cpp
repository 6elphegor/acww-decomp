#include "types.h"

struct Unk_020bf4b4;

typedef struct { s32 x, y, z; } Unk_020bf4b4_Vec;

struct Unk_020bf4b4 {
    u32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u8 unk_10[0x14];
    s32 unk_24;
    u8 unk_28[6];
    u8 unk_2e;
    u8 unk_2f[5];
    s32 unk_34;
    s32 unk_38;
    s32 unk_3c;
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    s32 unk_4c;
    s32 unk_50;
    s16 unk_54;
    s16 unk_56;
    s32 unk_58;
    s32 unk_5c;
    s32 unk_60;
    s32 unk_64;
    s32 unk_68;
    s32 unk_6c;
    s32 unk_70;
};

typedef struct { u8 unk_00[12]; } Unk_020bf4b4_Elem;
typedef struct { u16 r:5; u16 g:5; u16 b:5; u16 pad:1; } Unk_020bf77c_Col;
typedef struct { u8 unk_00; u8 unk_01; Unk_020bf77c_Col unk_02; Unk_020bf77c_Col unk_04; Unk_020bf77c_Col unk_06; Unk_020bf77c_Col unk_08; u16 unk_0a; } Unk_020bf77c_Rec;
typedef struct { u8 pad0[6]; u16 a[5]; u8 pad1[6]; u16 b[5]; } Unk_020bf77c_Tbl;
typedef struct { u8 pad[0x10]; u8 unk_10; } Unk_020bfa08_Data;
typedef struct { u8 pad[0x24]; s32 unk_24; s32 unk_28; } Unk_020bf720_Data;
typedef struct { u8 pad[0x5c]; s32 unk_5c; u8 pad2[8]; s32 unk_68; } Unk_020bfcd0_Obj;
typedef struct { u8 pad[4]; s32 unk_04; u8 pad2[0x2c]; s32 unk_34; s32 unk_38; u8 pad3[0x18]; s32 unk_50; s16 unk_54; } Unk_020bfc48_Slot;

extern "C" {
u32 func_020be094(void *);
s32 func_020be018(void *, s32, s32, s32);
s32 func_020bde0c(void *, s32, s32, s32);
void func_020bd964(void *, s32);
void func_020bd67c(void *, s32);
void func_020bdd70(void *, s32);
void func_020bdd4c(void *, s32);
void func_020be0bc(void *);
s32 func_01ffcb0c(s32, s32);
void func_01ffca8c(void *, void *, void *);
void func_020bd668(void *);
void func_020bd604(void *, s32, s32, s32, s32);
s32 func_02063b8c(s32);
void func_020be06c(void *, s32, s32);
void func_020bd758(void *, s32);
void func_020bd718(void *, s32, void *);
void func_020e759c(void *, s32, s32);
void func_0209cf18(void *);
u32 func_0209cf00(void);
s32 func_02133150(s32, s32);
u32 func_0213335c(u32, u32);
s32 func_01ffc538(s32);
s32 func_01ffc5a4(s32, s32);
s32 func_020e7b98(s32, s32);
void func_020bdd24(void *, s32, s32);
void func_020e9888(void *, s32);
BOOL func_020891d8(void *);
s32 func_020bcbd8(void *, s32);
BOOL func_020bfc48(Unk_020bf4b4 *);
void *func_02095204(s32);

extern u8 data_021f3010[];
extern u8 data_021f4488[];
extern u32 data_021f4768;
extern u8 data_021f4398[];
extern u16 data_021ef694[];
extern Unk_020bf720_Data data_021f1448;
extern Unk_020bf77c_Tbl data_021f4254[];
extern Unk_020bfa08_Data data_021f4420;
extern s16 data_02135f44[];
extern s32 data_020d122c[];
extern s32 data_020d0f28[];
extern s32 data_020d0e44[];
extern s32 data_020d0e38[];
extern s32 data_020d0e2c[];
extern s32 data_020e4638;
extern Unk_020bf4b4 data_021f14e0[];

u32 func_020bf4ac(void *a) { return func_020be094(a); }

void func_020bf4b4(Unk_020bf4b4 *this_) {
    s32 t;
    if (this_->unk_60 == 0) {
        if (func_020be018(this_, 0x1ec, 0x5000, 0x3e8)) {
            this_->unk_04 = 3;
        } else if (func_020bde0c(this_, 0xe000, 0x1a000, -0x3000)) {
            t = this_->unk_08 + 1;
            func_020bd964(data_021f3010 + this_->unk_24 * 12, t);
            this_->unk_08 = t;
            func_020bd67c(data_021f4488, this_->unk_64 != 0 ? 1 : 0);
            func_020bdd70(this_, 0x7f8);
            this_->unk_60 = 1;
        } else {
            func_020bdd4c(this_, 0x7f7);
        }
    } else if (this_->unk_60 == 1) {
        this_->unk_0c = 0;
        func_020be0bc(this_);
        this_->unk_40 = 0;
        this_->unk_44 = -0x800;
        this_->unk_48 = 0;
        this_->unk_60 = 2;
        this_->unk_68 = 0;
    } else {
        this_->unk_44 += 0x666;
        this_->unk_44 = func_01ffcb0c(this_->unk_44, 0xfd7);
        func_01ffca8c(&this_->unk_34, &this_->unk_40, &this_->unk_34);
        if (this_->unk_38 > 0xd0000) {
            func_020bd668(data_021f4488);
            this_->unk_04 = 3;
        }
    }
    if (this_->unk_60 >= 1) {
        func_020bd604(data_021f4488, this_->unk_34, this_->unk_38, this_->unk_4c, this_->unk_2e == 0 ? 1 : 0);
    }
}


void func_020bf5d8(Unk_020bf4b4 *this_, u32 arg) {
    func_020be06c(this_, func_02063b8c(2) == 0 ? 1 : 0, 0x3e8);
    this_->unk_0c = 1;
    this_->unk_58 = 2;
    this_->unk_60 = 0;
    arg &= 1;
    this_->unk_64 = arg != 0 ? 1 : 0;
    this_->unk_68 = 0;
}

void func_020bf68c(void);
void func_020bf620(Unk_020bf4b4 *this_) {
    func_020bf68c();
    func_020be094(this_);
}

BOOL func_020bf948(void *out);
void func_020bf6b0(Unk_020bf4b4 *this_);
void func_020bf6e8(Unk_020bf4b4 *this_);

void func_020bf634(Unk_020bf4b4 *this_) {
    if ((data_021f4768 & 0x7f) == 0) {
        if (!func_020bf948(&this_->unk_34)) {
            this_->unk_04 = 3;
        }
        func_020bf6b0(this_);
    }
}

void func_020bf664(Unk_020bf4b4 *this_) {
    if (func_020bf948(&this_->unk_34)) {
        this_->unk_0c = 0x12;
        this_->unk_58 = 3;
        func_020bf6e8(this_);
    } else {
        this_->unk_04 = 3;
    }
}

void func_020bf68c(void) {
    u8 *p = data_021f4398;
    for (u32 i = 0; i < 5; i++) {
        func_020bd758(p, i + 10);
    }
}

void func_020bf720(Unk_020bf4b4 *this_);
void func_020bf75c(Unk_020bf4b4 *this_);
void func_020bf77c(Unk_020bf4b4 *this_);

void func_020bf6b0(Unk_020bf4b4 *this_) {
    u8 *p = data_021f4398;
    func_020bf720(this_);
    func_020bf77c(this_);
    for (u32 i = 0; i < 5; i++) {
        func_020bd718(p, i + 10, &data_021ef694[i]);
    }
}

void func_020bf6e8(Unk_020bf4b4 *this_) {
    u8 *p = data_021f4398;
    func_020bf75c(this_);
    func_020bf77c(this_);
    for (u32 i = 0; i < 5; i++) {
        func_020bd718(p, i + 10, &data_021ef694[i]);
    }
}

void func_020bf720(Unk_020bf4b4 *this_) {
    s32 v;
    s32 s = data_021f1448.unk_28;
    s32 f;
    if (s != 3 && s != 4) {
        f = 0x1000;
    } else {
        f = 0;
    }
    v = this_->unk_6c;
    func_020e759c(&v, f, 0x100);
    this_->unk_6c = v;
}

void func_020bf75c(Unk_020bf4b4 *this_) {
    s32 s = data_021f1448.unk_24;
    s32 f;
    if (s != 3 && s != 4) {
        f = 0x1000;
    } else {
        f = 0;
    }
    this_->unk_6c = f;
}

void func_020bf77c(Unk_020bf4b4 *this_) {
    Unk_020bf77c_Rec rec;
    Unk_020bf77c_Tbl *t0;
    Unk_020bf77c_Tbl *t1;
    s32 inv, v0, v1, v2, v3, v4, v5, w0, w1, t;
    u32 i;
    s32 r7, r5;
    func_0209cf18(&rec);
    u32 idx = rec.unk_01;
    u32 mon = rec.unk_00;
    if (idx >= 0x13) idx -= 0x13; else idx += 5;
    t0 = &data_021f4254[idx];
    t1 = &data_021f4254[idx + 1];
    t = this_->unk_6c;
    inv = 0x1000 - t;
    r7 = func_02133150(mon << 12, 60);
    r5 = 0x1000 - r7;
    for (i = 0; i < 5; i++) {
        s32 w2;
        *(u16 *)&rec.unk_02 = t0->b[i];
        *(u16 *)&rec.unk_04 = t1->b[i];
        *(u16 *)&rec.unk_06 = t0->a[i];
        *(u16 *)&rec.unk_08 = t1->a[i];
        v0 = func_01ffcb0c(rec.unk_02.r << 12, r5) + func_01ffcb0c(rec.unk_04.r << 12, r7);
        v1 = func_01ffcb0c(rec.unk_02.g << 12, r5) + func_01ffcb0c(rec.unk_04.g << 12, r7);
        v2 = func_01ffcb0c(rec.unk_02.b << 12, r5) + func_01ffcb0c(rec.unk_04.b << 12, r7);
        v3 = func_01ffcb0c(rec.unk_06.r << 12, r5) + func_01ffcb0c(rec.unk_08.r << 12, r7);
        v4 = func_01ffcb0c(rec.unk_06.g << 12, r5) + func_01ffcb0c(rec.unk_08.g << 12, r7);
        v5 = func_01ffcb0c(rec.unk_06.b << 12, r5) + func_01ffcb0c(rec.unk_08.b << 12, r7);
        w0 = func_01ffcb0c(v0, t) + func_01ffcb0c(v3, inv);
        w1 = func_01ffcb0c(v1, t) + func_01ffcb0c(v4, inv);
        w2 = func_01ffcb0c(v2, t) + func_01ffcb0c(v5, inv);
        rec.unk_0a = (((w2 + 0x800) >> 12) << 10) | (((w0 + 0x800) >> 12) | (((w1 + 0x800) >> 12) << 5));
        data_021ef694[i] = rec.unk_0a;
    }
}

BOOL func_020bf948(void *out_) {
    s32 *out = (s32 *)out_;
    BOOL ok = TRUE;
    u8 d[4];
    u32 b, a, base, off, x;
    s32 r, y;
    func_0209cf18(d);
    b = d[1];
    a = d[0];
    base = func_0209cf00();
    off = 0;
    if (b >= 0x13) {
        off = base + (a * 0x3c + (b - 0x13) * 0xe10);
    } else if (b < 4) {
        off = base + (b * 0xe10 + 0x4650 + a * 0x3c);
    } else {
        ok = FALSE;
    }
    if (ok) {
        x = func_0213335c(off << 12, 0x7e90);
        r = func_01ffcb0c(0xffee0000, x) + 0x110000;
        y = func_01ffcb0c(x - 0x800, x - 0x800);
        y = func_01ffc538(0x1000 - y);
        y = func_01ffc5a4(y - 0xddb, 0x225);
        out[0] = r;
        y <<= 4;
        y = -y;
        out[1] = y + 0x3c000;
        out[2] = 0;
    }
    return ok;
}

void func_020bfa08(Unk_020bf4b4 *this_) {
    data_021f4420.unk_10 = 0;
    func_020be094(this_);
}

void func_020bfa1c(Unk_020bf4b4 *this_) {
    func_01ffca8c(&this_->unk_34, &this_->unk_40, &this_->unk_34);
    s32 x = this_->unk_34 >> 12;
    BOOL out;
    s32 y = this_->unk_38 >> 12;
    if (y < -0x23 || y > 0xca || x < -0x23 || x > 0x123) {
        out = TRUE;
    } else {
        out = FALSE;
    }
    s32 in;
    if (this_->unk_60 == 0 && !out && y > 0 && y < 0xc0 && x > 0 && x < 0x100) {
        in = 1;
    } else {
        in = 0;
    }
    data_021f4420.unk_10 = in;
    if (out) {
        this_->unk_04 = 3;
    }
}

void func_020bfa90(Unk_020bf4b4 *this_) {
    s32 ang, x, y, sn, cs, k, nx, ny;
    this_->unk_4c = 0x1000;
    this_->unk_50 = 0x800;
    if (func_02063b8c(2) == 0) {
        x = (func_02063b8c(0x3c) + 0xc4) << 12;
        y = 0;
    } else {
        x = 0x100000;
        y = func_02063b8c(0x30) << 12;
    }
    ang = func_020e7b98((func_02063b8c(0x17) + 0x80 << 12) - y, -x);
    k = ((u16)ang >> 4) * 2;
    sn = data_02135f44[k];
    cs = data_02135f44[k + 1];
    x -= cs * 0x23;
    y -= sn * 0x23;
    this_->unk_34 = x;
    this_->unk_38 = y;
    this_->unk_3c = 0;
    this_->unk_40 = func_01ffcb0c(cs, 0x7800);
    this_->unk_44 = func_01ffcb0c(sn, 0x7800);
    this_->unk_48 = 0;
    this_->unk_54 = ang - 0x4000;
    this_->unk_0c = 0x11;
    this_->unk_58 = 3;
    data_021f4420.unk_10 = 0;
    func_020bdd24(this_, 6, 0x801);
}

void func_020bfb60(void *a) { func_020be094(a); }

void func_020bfb68(Unk_020bf4b4 *this_) {
    s32 m = this_->unk_60 & 0xf;
    this_->unk_64 = this_->unk_64 + 1;
    if (m == 0) {
        func_020e9888(&this_->unk_40, 0xe66);
        func_01ffca8c(&this_->unk_34, &this_->unk_40, &this_->unk_34);
        if (func_020891d8(&this_->unk_10)) {
            this_->unk_04 = 3;
        }
    } else if (m == 1) {
        s32 n = this_->unk_64;
        s32 v = data_020d122c[n];
        if (n >= 0x17) {
            this_->unk_04 = 3;
        } else {
            this_->unk_4c = v;
            this_->unk_50 = v;
            *(u16 *)&this_->unk_54 += 0xe39;
            if (!func_020bfc48(this_)) {
                this_->unk_04 = 3;
            }
        }
    } else if (this_->unk_64 >= 6) {
        this_->unk_04 = 3;
    }
}

void func_020bfbf8(Unk_020bf4b4 *this_, s32 arg) {
    s32 m = arg & 0xf;
    this_->unk_0c = data_020d0f28[m];
    if (m == 1) {
        this_->unk_58 = 3;
    } else {
        this_->unk_58 = 2;
    }
    this_->unk_60 = arg;
    this_->unk_64 = 0;
    if (m == 1) {
        s32 v = data_020d122c[0];
        this_->unk_4c = v;
        this_->unk_50 = v;
        if (!func_020bfc48(this_)) {
            this_->unk_04 = 3;
        }
    }
}

struct Unk_020bfc48_Pad {
    s32 v[4];
    Unk_020bfc48_Pad() {}
    ~Unk_020bfc48_Pad() {}
};

BOOL func_020bfc48(Unk_020bf4b4 *this_) {
    Unk_020bfc48_Pad pad;
    Unk_020bf4b4 *p = &data_021f14e0[func_020bcbd8(data_021f14e0, 3)];
    BOOL result = FALSE;
    if (p != NULL && p->unk_04 == 2) {
        Unk_020bf4b4_Vec *pos = (Unk_020bf4b4_Vec *)&p->unk_34;
        s32 k = ((s32)((u32)(p->unk_54 << 16) >> 16) >> 4) * 2;
        s32 d = func_01ffc5a4(0x10000, p->unk_50);
        s32 y = pos->y + func_01ffcb0c(data_02135f44[k + 1], d);
        s32 x = pos->x - func_01ffcb0c(data_02135f44[k], d);
        Unk_020bf4b4_Vec *out = (Unk_020bf4b4_Vec *)&this_->unk_34;
        out->x = x;
        out->y = y;
        out->z = 0;
        result = TRUE;
    }
    return result;
}

void func_020bfcc8(void *a) { func_020be094(a); }

void func_020bfcd0(Unk_020bf4b4 *this_) {
    Unk_020bf4b4_Vec *pos = (Unk_020bf4b4_Vec *)&this_->unk_34;
    Unk_020bfcd0_Obj *o;
    s32 base, ang;
    func_01ffca8c(pos, &this_->unk_40, pos);
    o = (Unk_020bfcd0_Obj *)func_02095204(4);
    if (o != NULL) {
        s32 dv = -(o->unk_5c - o->unk_68);
        dv = (dv * data_020d0e44[this_->unk_68]) >> 12;
        dv += this_->unk_6c;
        this_->unk_6c = dv;
    }
    base = this_->unk_6c;
    ang = (s16)((s16)this_->unk_64 + this_->unk_60);
    this_->unk_64 = ang;
    { s32 tv = data_02135f44[((u16)ang >> 4) * 2]; s32 sc = this_->unk_70; pos->x = base + ((tv * sc) >> 12); }
    if (pos->y > 0x1d4000) {
        this_->unk_04 = 3;
    } else if (pos->x < -0x14000) {
        pos->x = pos->x + 0x11e000;
    } else if (pos->x > 0x114000) {
        pos->x = pos->x - 0x11e000;
    }
}

void func_020bfd7c(Unk_020bf4b4 *this_, s32 arg) {
    s32 a = func_02063b8c(3);
    s32 b = func_02063b8c(0x80);
    s32 g = data_020e4638;
    s32 x = (g * b + 0x80) << 12;
    Unk_020bf4b4_Vec *pos, *vel;
    data_020e4638 = g * 0xffffffff;
    pos = (Unk_020bf4b4_Vec *)&this_->unk_34;
    this_->unk_34 = x;
    pos->y = -0x14000;
    pos->z = 0;
    vel = (Unk_020bf4b4_Vec *)&this_->unk_40;
    this_->unk_40 = 0;
    vel->y = data_020d0e38[a];
    vel->z = 0;
    this_->unk_60 = func_02063b8c(0x300) + 0x180;
    this_->unk_64 = func_02063b8c(0x10000);
    this_->unk_68 = a;
    this_->unk_6c = x;
    this_->unk_70 = func_02063b8c(2) + 0x5000;
    this_->unk_0c = data_020d0e2c[a];
    this_->unk_58 = 2;
    if (arg == 1) {
        this_->unk_38 = this_->unk_38 + (func_02063b8c(0x1c1) << 12);
    }
}
}
