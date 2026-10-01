#include "types.h"

struct Unk_ov004_0222d874_Pos {
    s32 x, y, z;
};

class Unk_ov004_0222d874_Ent {
public:
    u8 pad_00[0x54];
    u32 unk_54[4];
    u8 pad_64[0x15c - 0x64];
    s32 unk_15c;
    s32 unk_160;
    u8 pad_164[0x1c6 - 0x164];
    u8 unk_1c6;
};

class Unk_ov004_0222d874_Obj {
public:
    u8 pad_000[0x8];
    s32 unk_08;
    u8 pad_0c[0x40 - 0x0c];
    u8 unk_40;
    u8 pad_41[0xa0 - 0x41];
    u32 unk_a0;
    u32 unk_a4;
    u32 unk_a8;
    u32 unk_ac;
    u32 unk_b0;
    u8 pad_b4[0x104 - 0xb4];
    u32 unk_104;
    u32 unk_108;
    u32 unk_10c;
    u32 unk_110;
    u32 unk_114;
    u8 pad_118[0x15c - 0x118];
    s32 unk_15c;
    s32 unk_160;
    u8 pad_164[0x168 - 0x164];
    u32 unk_168;
    u32 unk_16c;
    u32 unk_170;
    u32 unk_174;
    u32 unk_178;
    u8 pad_17c[0x1c0 - 0x17c];
    s16 unk_1c0;
    u8 pad_1c2[0x1c9 - 0x1c2];
    u8 unk_1c9;
    u8 pad_1ca[0x1cc - 0x1ca];
    s32 unk_1cc;
    u32 unk_1d0;
    u32 unk_1d4;
    u32 unk_1d8;
    u32 unk_1dc;
    u8 pad_1e0[0x1e8 - 0x1e0];
    u8 unk_1e8;
    u8 unk_1e9;
    u8 unk_1ea;
    u8 pad_1eb[0x1f0 - 0x1eb];
    u8 unk_1f0;
    u8 unk_1f1;
    u8 pad_1f2[2];
    u32 unk_1f4[2];
    u8 pad_1fc[0x204 - 0x1fc];
    u8 unk_204;
    u8 unk_205;
    u8 unk_206;
    u8 unk_207;
    u32 unk_208;
    u32 unk_20c;
    s32 unk_210;
    s32 unk_214;
    s32 unk_218;
    u8 pad_21c[0x224 - 0x21c];
    s32 unk_224;
    s32 unk_228;
    u8 pad_22c[0x22f - 0x22c];
    u8 unk_22f;
    u16 unk_230;
    u8 pad_232[0x234 - 0x232];
    u32 unk_234;
    u32 unk_238;
    u32 unk_23c;
    u32 unk_240;
    u8 pad_244[0x294 - 0x244];
    u32 unk_294;
    u32 unk_298;
    u32 unk_29c;
    u32 unk_2a0;
    u32 unk_2a4;
    u32 unk_2a8;
    u8 pad_2ac[0x550 - 0x2ac];
    u8 unk_550[4];
    u8 pad_554[0x7f8 - 0x554];
    u8 unk_7f8[1];
};

struct Unk_ov004_0222dea8_Rec {
    u8 b[0x11];
};

extern "C" {
void func_020e8558(void *p);
void *func_020e8608(void *heap, u32 size);
void func_020e769c(s16 *p, s32 a, s32 b);
void func_0209c1a4(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, void *f);
void func_0209c224(void *p, void *q);
void func_0209c25c(void *p, void *q);
void func_0209c0b4(void *p);
void func_0209c0c8(void *p);
void func_020546ec(void *p);
void func_02054b14(void *p);
void func_02003c30(void *p);
void func_02004008(u32 a);
u8 *func_020b50b4(void);
void func_020b68ec(u8 *t, void *a, void *b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
void func_0205bf84(void);
void func_0205bf68(void);
void func_02232bb0(void *p);
void func_02232b54(void *p);
void func_02232864(void *p);
void func_02232a08(void *p);
void func_02232930(void *p);
void func_022328b4(void *p);
void func_02232d8c(void *p);
BOOL func_ov004_0222d5a8(Unk_ov004_0222d874_Obj *self, Unk_ov004_0222d874_Ent **p, s32 i, s32 n);
BOOL func_ov004_0222d874(Unk_ov004_0222d874_Obj *self);
void func_ov004_0222dd3c(Unk_ov004_0222d874_Obj *self, s32 i);
void func_ov004_0222cf38(Unk_ov004_0222d874_Obj *self);
void func_ov004_0222d62c(Unk_ov004_0222d874_Obj *self);
s32 func_ov004_0222e3e0(Unk_ov004_0222d874_Obj *self, Unk_ov004_0222d874_Obj **q);

extern void *data_021f482c;
extern u8 data_ov004_02251d64;
extern u8 data_ov004_0224e5f0;
extern volatile u8 data_ov004_02251d60;
extern u8 data_ov004_0224e5f4;
extern Unk_ov004_0222d874_Pos data_ov004_02251d9c;
extern u8 data_ov004_02251d84[];
extern Unk_ov004_0222d874_Ent *data_ov004_02251e94[];
extern Unk_ov004_0222dea8_Rec data_ov004_022402ec[];
extern u8 *data_ov004_02251d6c;
extern u32 data_ov004_02251d74;
extern u32 data_ov004_02251d78;
}

typedef Unk_ov004_0222d874_Obj Obj;
typedef Unk_ov004_0222d874_Ent Ent;

extern "C" BOOL func_ov004_0222da44(Obj *self)
{
    func_0209c1a4((u8 *)self + 0x7f8, 0x38, 0x800, 0x80, 0xc00, (void *)func_0205bf84, (void *)func_0205bf68, 0);
    data_ov004_02251d60 = self->unk_08;
    if (data_ov004_02251d60 == 0) {
        self->unk_a0 = 0xc000;
        self->unk_a4 = 0x700;
        self->unk_a8 = 0x5600;
        self->unk_ac = 0x1000;
        self->unk_b0 = 0x800;
        self->unk_104 = 0x15200;
        self->unk_108 = 0x700;
        self->unk_10c = 0x6200;
        self->unk_110 = 0x1000;
        self->unk_114 = 0xd00;
        self->unk_168 = 0x9c00;
        self->unk_16c = 0x700;
        self->unk_170 = 0x14b00;
        self->unk_174 = 0xa00;
        self->unk_178 = 0xa00;
        self->unk_1cc = 0x15900;
        self->unk_1d0 = 0x700;
        self->unk_1d4 = 0x13900;
        self->unk_1d8 = 0x1000;
        self->unk_1dc = 0x800;
        *(u32 *)&self->unk_230 = 0x14c00;
        self->unk_234 = 0x700;
        self->unk_238 = 0x14a00;
        self->unk_23c = 0x700;
        self->unk_240 = 0x700;
        data_ov004_0224e5f4 = 5;
        func_ov004_0222d874(self);
        func_020b68ec(func_020b50b4(), (u8 *)self + 0x2a8, &data_ov004_02251d9c, 0x11c00, 0x5c00, 0x3800, 0, 0x13, 0);
        func_020b68ec(func_020b50b4(), (u8 *)self + 0x550, data_ov004_02251d84, 0x11c00, 0x5c00, 0x3800, 0, 0x13, 1);
    } else {
        self->unk_a0 = 0x8b00;
        self->unk_a4 = 0xfffff300;
        self->unk_a8 = 0x13e00;
        self->unk_ac = 0x800;
        self->unk_b0 = 0x1200;
        self->unk_104 = 0x9e00;
        self->unk_108 = 0xfffff300;
        self->unk_10c = 0x14700;
        self->unk_110 = 0x1100;
        self->unk_114 = 0x1500;
        self->unk_168 = 0x12f00;
        self->unk_16c = 0xfffff300;
        self->unk_170 = 0x13d00;
        self->unk_174 = 0xa00;
        self->unk_178 = 0xd00;
        self->unk_1cc = 0x16e00;
        self->unk_1d0 = 0xfffff300;
        self->unk_1d4 = 0x13100;
        self->unk_1d8 = 0x1200;
        self->unk_1dc = 0x1400;
        data_ov004_0224e5f4 = 4;
        self->unk_294 = 0x9e00;
        self->unk_298 = 0xfffff300;
        self->unk_29c = 0x14700;
        self->unk_2a0 = 0xc00;
        self->unk_2a4 = 0x2000;
        func_ov004_0222d62c(self);
        func_020b68ec(func_020b50b4(), (u8 *)self + 0x2a8, &data_ov004_02251d9c, 0x26000, 0x4dc3, 0x3800, 0, 0x13, 0);
    }
    func_02004008(0x4da);
    return TRUE;
}

extern "C" BOOL func_ov004_0222d874(Obj *self)
{
    s32 i = 0;
    data_ov004_02251d64 = 0;
    data_ov004_0224e5f0 = 0x23;
    data_ov004_02251d9c.x = 0x11000;
    data_ov004_02251d9c.y = 0;
    data_ov004_02251d9c.z = 0x15000;
    void *heap = data_021f482c;
    Ent **tbl = data_ov004_02251e94;
    for (; i < data_ov004_0224e5f0; i++) {
        Ent **p;
        switch (i) {
        case 11:
            p = &tbl[i];
            tbl[i] = (Ent *)func_020e8608(heap, 0x214);
            if (tbl[i]) func_02232bb0(tbl[i]);
            break;
        case 15:
            p = &tbl[i];
            tbl[i] = (Ent *)func_020e8608(heap, 0x210);
            if (tbl[i]) func_02232b54(tbl[i]);
            break;
        case 12:
            p = &tbl[i];
            tbl[i] = (Ent *)func_020e8608(heap, 0x27c);
            if (tbl[i]) func_02232864(tbl[i]);
            break;
        case 10:
            p = &tbl[i];
            tbl[i] = (Ent *)func_020e8608(heap, 0x220);
            if (tbl[i]) func_02232a08(tbl[i]);
            break;
        case 0x1e:
            p = &tbl[i];
            tbl[i] = (Ent *)func_020e8608(heap, 0x25c);
            if (tbl[i]) func_02232930(tbl[i]);
            break;
        case 5:
        case 6:
            p = &tbl[i];
            tbl[i] = (Ent *)func_020e8608(heap, 0x25c);
            if (tbl[i]) func_022328b4(tbl[i]);
            break;
        default:
            p = &tbl[i];
            tbl[i] = (Ent *)func_020e8608(heap, 0x258);
            if (tbl[i]) func_02232d8c(tbl[i]);
            break;
        }
        Ent *e = *p;
        if (e == NULL) return FALSE;
        u32 t = data_ov004_022402ec[i].b[1];
        if (t == 3) e->unk_1c6 = 1;
        if (!func_ov004_0222d5a8(self, p, i, t)) {
            func_ov004_0222dd3c(self, i);
            (*p)->unk_1c6 = 0;
            return FALSE;
        }
    }
    func_ov004_0222cf38(self);
    return TRUE;
}

extern "C" void func_ov004_0222dd3c(Obj *self, s32 i)
{
    if (i >= data_ov004_02251d64 && i < data_ov004_0224e5f0) {
        Ent **p = &data_ov004_02251e94[i];
        s32 z = 0;
        s32 j;
        for (j = z; j < 4; j++) {
            if ((*p)->unk_54[j]) {
                func_020e8558((void *)(*p)->unk_54[j]);
                (*p)->unk_54[j] = z;
            }
        }
        (*p)->unk_160 = 0;
        func_020546ec((u8 *)*p + 0x64);
        func_02054b14((u8 *)*p + 0x64);
        func_0209c0b4((u8 *)*p + 0x168);
        func_0209c224((u8 *)self + 0x7f8, (u8 *)*p + 0x166);
        switch ((*p)->unk_15c) {
        case 0xb:
            if (data_ov004_02251d6c) {
                func_02003c30(data_ov004_02251d6c + 0x1fc);
                data_ov004_02251d6c = 0;
            }
            break;
        case 0x24:
            if (data_ov004_02251d74) data_ov004_02251d74 = 0;
            break;
        case 0x23:
            if (data_ov004_02251d78) data_ov004_02251d78 = 0;
            break;
        }
        (*p)->unk_15c = -1;
    }
}

extern "C" BOOL func_ov004_0222de34(Obj *self, s32 i)
{
    if (i < data_ov004_02251d64 || i >= data_ov004_0224e5f0) return FALSE;
    Ent **p = &data_ov004_02251e94[i];
    if (*p == NULL) return FALSE;
    (*p)->unk_15c = i;
    (*p)->unk_160 = 1;
    func_0209c25c((u8 *)self + 0x7f8, (u8 *)*p + 0x166);
    func_0209c0c8((u8 *)*p + 0x168);
    return TRUE;
}

extern "C" void func_ov004_0222dea8(Obj *self)
{
    Unk_ov004_0222dea8_Rec *t = data_ov004_022402ec;
    s32 *pi = &self->unk_15c;
    self->unk_210 = (s32)(t[*pi].b[7] << 12) >> 10;
    self->unk_214 = (s32)(t[*pi].b[5] << 12) >> 12;
    self->unk_218 = (s32)(t[*pi].b[6] << 12) >> 13;
    self->unk_204 = t[*pi].b[8];
    self->unk_205 = t[*pi].b[9];
    self->unk_206 = t[*pi].b[10];
    self->unk_207 = t[*pi].b[11];
    self->unk_230 = t[*pi].b[12];
    self->unk_224 = (s32)(t[*pi].b[13] << 12) >> 10;
    self->unk_1cc = ((s32)(t[*pi].b[14] << 12) >> 5) - 0x1000;
    self->unk_228 = ((s32)(t[*pi].b[15] << 12) >> 6) - 0x1000;
}

extern "C" void func_ov004_0222dfbc(Obj *self)
{
    if (self->unk_40 == 0 && self->unk_22f == 0 && self->unk_1f0 != 0) {
        s32 v = self->unk_1c0;
        if (v >= 0) {
            s32 a = v;
            if (a < 0) a = -a;
            if (a >= 0x4000) {
                func_020e769c(&self->unk_1c0, 0x471c, 0x222);
            } else {
                func_020e769c(&self->unk_1c0, 0x38e4, 0x222);
            }
        } else {
            s32 a = v;
            if (a < 0) a = -a;
            if (a <= -0x4000) {
                func_020e769c(&self->unk_1c0, -0x471c, 0x222);
            } else {
                func_020e769c(&self->unk_1c0, -0x38e4, 0x222);
            }
        }
    }
}

extern "C" void func_ov004_0222e060(Obj *self)
{
    s32 t0 = self->unk_15c;
    s32 c0 = self->unk_1e8;
    if (c0 != t0) {
        if ((self->unk_1f4[c0 >> 5] & (1 << (c0 & 31))) == 0) self->unk_1e8 = t0;
        u8 *p2 = &self->unk_1e9;
        s32 c1 = *p2;
        if ((self->unk_1f4[c1 >> 5] & (1 << (c1 & 31))) == 0) {
            *p2 = self->unk_15c;
            self->unk_1c9 = 0;
        }
    }
    self->unk_1f4[0] = 0;
    self->unk_1f4[1] = 0;
    self->unk_1f1 = 0;
    self->unk_1f0 = 0;
}

extern "C" void func_ov004_0222e0f0(void *unused, Obj **pp, Obj **q)
{
    (*pp)->unk_1f1++;
    Obj *o = *pp;
    u32 b;
    s32 a;
    a = o->unk_15c;
    b = o->unk_1e8;
    s32 c = (*q)->unk_15c;
    s32 r2 = func_ov004_0222e3e0(o, q);
    Obj *o2 = *pp;
    u32 r1 = o2->unk_1ea;
    o2->unk_1f4[c >> 5] |= 1 << (c & 31);
    if (b == a) {
        (*pp)->unk_1ea = r2 | r1;
        (*pp)->unk_1e8 = c;
        (*pp)->unk_1c9 = 0;
    } else {
        u32 rc = data_ov004_022402ec[c].b[0];
        u32 rb = data_ov004_022402ec[b].b[0];
        if (rb < rc) {
            (*pp)->unk_1ea = r2 | r1;
            (*pp)->unk_1e8 = c;
            (*pp)->unk_1c9 = 0;
        } else if (rb == rc) {
            if ((s32)r1 < r2) {
                (*pp)->unk_1ea = r2 | r1;
                (*pp)->unk_1e8 = c;
                (*pp)->unk_1c9 = 0;
            }
        }
    }
}
