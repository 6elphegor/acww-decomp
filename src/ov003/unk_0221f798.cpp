#include "types.h"
#include "Unk_020d8c7c.h"

class Unk_020dbd34 {
public:
    Unk_020dbd34();
    virtual ~Unk_020dbd34();
    u32 pad_04[0x94 / 4];
    u32 unk_98;
};

class Unk_020dbd44 {
public:
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    Unk_020dbd44();
    virtual ~Unk_020dbd44();
};

extern "C" {
void func_ov003_0221c53c(void *p);
}

class Unk_ov003_0223463c : public Unk_020d8c7c {
public:
    inline Unk_ov003_0223463c()
    {
        func_ov003_0221c53c(&unk_4b20);
    }
    virtual ~Unk_ov003_0223463c();

    /* 0x050 */ u32 unk_50[0x49];
    /* 0x174 */ Unk_020dbd34 unk_174[0x12];
    /* 0xc6c */ Unk_020dbd34 unk_c6c[6];
    /* 0x1014 */ Unk_020dbd34 unk_1014[3];
    /* 0x11e8 */ Unk_020dbd34 unk_11e8[6];
    /* 0x1590 */ Unk_020dbd34 unk_1590[0x28];
    /* 0x2df0 */ Unk_020dbd34 unk_2df0[4];
    /* 0x3060 */ u8 pad_3060[8];
    /* 0x3068 */ Unk_020dbd34 unk_3068[0x20];
    /* 0x43e8 */ Unk_020dbd34 unk_43e8[5];
    /* 0x46f4 */ u32 unk_46f4[5];
    /* 0x4708 */ Unk_020dbd34 unk_4708[2];
    /* 0x4840 */ Unk_020dbd34 unk_4840[2];
    /* 0x4978 */ u32 unk_4978[12];
    /* 0x49a8 */ Unk_020dbd34 unk_49a8[2];
    /* 0x4ae0 */ Unk_020dbd44 unk_4ae0;
    /* 0x4af0 */ Unk_020dbd44 unk_4af0;
    /* 0x4b00 */ Unk_020dbd44 unk_4b00;
    /* 0x4b10 */ Unk_020dbd44 unk_4b10;
    /* 0x4b20 */ u8 unk_4b20[0x6a70 - 0x4b20];
};

struct Unk_ov003_0221ff88_E {
    u8 pad_00[0x10];
    u32 unk_10;
    u32 unk_14;
    u8 pad_18[0x48];
    u8 unk_60[0x44];
    Unk_ov003_0221ff88_E();
    ~Unk_ov003_0221ff88_E();
};

struct Unk_ov003_0221ff6c_H {
    Unk_ov003_0221ff88_E unk_00[0x14];
    ~Unk_ov003_0221ff6c_H();
};

struct Unk_ov003_0221fda8_Ent {
    u8 *unk_00;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
};

extern "C" {
extern void *data_ov003_02235934;
extern void *data_ov003_02235938;
extern void *data_ov003_02235930;
extern char data_ov003_02234734[];
extern char data_ov003_02234750[];
extern void *data_ov003_02234770;
extern void *data_ov003_02234774;
extern void *data_ov003_0223477c;
extern void *data_021f482c;
extern void *data_021c47c4;
extern u8 data_ov003_0225812c[];
extern u32 data_ov003_0222f810[][3];
extern void **data_ov003_022328a4[];
extern void **data_ov003_022328bc[];
extern void **data_ov003_022328f8[];
extern void **data_ov003_02232910[];
extern void **data_ov003_0223294c[];
extern void **data_ov003_022328e0[];
extern u32 data_ov003_02232904[];
extern u32 data_ov003_0223263c[];
extern u32 data_ov003_02232638[];
extern u32 data_ov003_02232644[];
extern u32 data_ov003_02232940[];
extern u32 data_ov003_022328c8[];
extern u32 data_ov003_02232640[];
extern u32 *data_ov003_02232934[];
extern u32 *data_ov003_022328d4[];
extern void *data_ov003_022328b0[];
extern void **data_ov003_022328ec[];
extern void *data_ov003_02234604[];
extern Unk_ov003_0221fda8_Ent data_ov003_0222f4b8[];

BOOL func_02054c64(void *obj, void *res, void *name, void *tex, u32 d, u32 e, s32 f);
BOOL func_020549e4(void *t, void *file, void *heap);
void *func_020549ac(void *t, void *name);
void func_02055744(void *a, u32 b);
void func_020557a0(void *a, u32 b);
u32 func_02061888(s32 a, s32 b);
s32 func_0204c0ac();
void *func_020641ec(void *a, void *b, s32 c, s32 d);
void *func_0210629c();
void *func_0204ebd8(void *g, s32 hx, s32 hz, s32 lx, s32 lz, s32 layer);
void *func_0209c25c(void *a, void *b);
BOOL func_0209c0d0(void *a, void *b, void *c);
void *func_0209c0ac(void *a);
void func_020555ec(void *a, void *b, s32 c);
void *func_0209c348(void *a);
s32 func_021065dc();
s32 func_021065f8(s32 a, s32 b);
s32 func_02106654();
s32 func_02106670(s32 a, s32 b);
BOOL func_02054800(void *a, void *b);
void func_02054720(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_02054710(void *a);
BOOL func_02055bcc(void *a, void *b, void *c);
void func_02055b38(void *a, s32 b, s32 c, s32 d, s32 e);
void *func_020554c0(void *a);
void func_02055a9c(void *a, void *b);
void func_020f43fc(void *p);
void func_020f440c(void *p);

void *func_ov003_0221fa88(Unk_ov003_0223463c *self, s32 i);
void *func_ov003_0221fac8(Unk_ov003_0223463c *self, s32 i);
s32 func_ov003_0221fb20(void *self, s32 i);
void *func_ov003_0221fb04(void *self, s32 a, s32 i);
u32 func_ov003_0221fa5c(void *self, s32 i);
BOOL func_ov003_0221fb50(Unk_ov003_0223463c *self);
BOOL func_ov003_0221fbb8(Unk_ov003_0223463c *self);
BOOL func_ov003_0221fc70(void *self, u32 *a, u32 *b, u32 *names, s32 n);
BOOL func_ov003_0221fcd4(void *self, u32 *a, u32 *b, u32 *names, s32 n);
u8 *func_ov003_0221fda8(u8 *p);
u8 *func_ov003_02220004(s32 i);
}

extern "C" {

BOOL func_ov003_0221f798(Unk_ov003_0223463c *self, u32 *a, u32 *b, u32 c)
{
    BOOL ok = TRUE;
    if (!func_02054c64(&self->unk_11e8[0], func_ov003_0221fa88(self, 0), data_ov003_02235934, (void *)*a, *b, c, ok)) {
        ok = FALSE;
    }
    return ok;
}

BOOL func_ov003_0221f7e0(Unk_ov003_0223463c *self, u32 *a, u32 *b, u32 c)
{
    BOOL ok = TRUE;
    if (!func_02054c64(&self->unk_c6c[0], func_ov003_0221fac8(self, 0), data_ov003_02235934, (void *)*a, *b, c, ok)) {
        ok = FALSE;
    }
    return ok;
}

BOOL func_ov003_0221f828(Unk_ov003_0223463c *self, u32 *a, u32 *b, u32 c)
{
    s32 i;
    BOOL ok = TRUE;
    for (i = 0; i < 3; i++) {
        s32 t = func_ov003_0221fb20(self, i);
        void *n = func_ov003_0221fb04(self, i, 0);
        if (!func_02054c64((u8 *)self + 0x174 + i * 0x3a8, n, data_ov003_02235934, (void *)a[t * 6], b[i], c, ok)) {
            ok = FALSE;
            break;
        }
    }
    return ok;
}

BOOL func_ov003_0221f8a4(void *a, u32 *b, u32 *c)
{
    BOOL ok = TRUE;
    if (!func_ov003_0221fc70(a, b, c, data_ov003_0223263c, ok)) {
        ok = FALSE;
    }
    return ok;
}

BOOL func_ov003_0221f8c8(void *a, u32 *b, u32 *c, u32 *d, u32 *e)
{
    if (!func_ov003_0221fc70(a, b, c, data_ov003_02232638, 1)) {
        return FALSE;
    }
    if (func_ov003_0221fc70(a, d, e, data_ov003_02232644, 1)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov003_0221f90c(void *a, u32 *b, u32 *c, u32 *d, u32 *e)
{
    if (!func_ov003_0221fc70(a, b, c, data_ov003_02232940, 3)) {
        return FALSE;
    }
    if (func_ov003_0221fc70(a, d, e, data_ov003_022328c8, 3)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov003_0221f950(void *a, u32 *b, u32 *c)
{
    s32 t = func_ov003_0221fb20(a, 2);
    if (func_ov003_0221fcd4(a, b, c, data_ov003_02232934[t], 6)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov003_0221f98c(void *a, u32 *b, u32 *c)
{
    BOOL ok = TRUE;
    if (!func_ov003_0221fcd4(a, b, c, data_ov003_02232640, ok)) {
        ok = FALSE;
    }
    return ok;
}

BOOL func_ov003_0221f9b0(void *a, u32 *b, u32 *c)
{
    s32 t = func_ov003_0221fb20(a, 2);
    if (func_ov003_0221fcd4(a, b, c, data_ov003_022328d4[t], 6)) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov003_0221f9ec(void *self, u32 *a, u32 *b)
{
    s32 j;
    u32 done[3];
    s32 i;
    for (j = 0; j < 3; j++) {
        done[j] = 0;
    }
    for (i = 0; i < 3; i++) {
        s32 t = func_ov003_0221fb20(self, i);
        u32 *d = &done[t];
        if (*d == 0) {
            u32 *pa = a + t * 6;
            u32 *pb = b + t * 6;
            if (!func_ov003_0221fcd4(self, pa, pb, (u32 *)func_ov003_0221fa5c(self, t), 6)) {
                return FALSE;
            }
            *d = 1;
        }
    }
    return TRUE;
}

u32 func_ov003_0221fa5c(void *self, s32 i)
{
    return data_ov003_02232904[i];
}

void *func_ov003_0221fa68(void *self, s32 i)
{
    return data_ov003_022328bc[func_ov003_0221fb20(self, 2)][i];
}

void *func_ov003_0221fa88(Unk_ov003_0223463c *self, s32 i)
{
    return data_ov003_022328a4[func_ov003_0221fb20(self, 2)][i];
}

void *func_ov003_0221faa8(Unk_ov003_0223463c *self, s32 i)
{
    return data_ov003_022328f8[func_ov003_0221fb20(self, 2)][i];
}

void *func_ov003_0221fac8(Unk_ov003_0223463c *self, s32 i)
{
    return data_ov003_02232910[func_ov003_0221fb20(self, 2)][i];
}

void *func_ov003_0221fae8(void *self, s32 a, s32 i)
{
    return data_ov003_0223294c[func_ov003_0221fb20(self, a)][i];
}

void *func_ov003_0221fb04(void *self, s32 a, s32 i)
{
    return data_ov003_022328e0[func_ov003_0221fb20(self, a)][i];
}

s32 func_ov003_0221fb20(void *self, s32 i)
{
    return data_ov003_0222f810[func_0204c0ac()][i];
}

BOOL func_ov003_0221fb40()
{
    return func_ov003_0221fb50((Unk_ov003_0223463c *)data_ov003_02235930);
}

BOOL func_ov003_0221fb50(Unk_ov003_0223463c *self)
{
    BOOL ok = FALSE;
    if (func_020549e4(&self->unk_4b10, data_ov003_02234734, data_ov003_02235934)) {
        s32 i;
        for (i = 0; i < 12; i++) {
            self->unk_4978[i] = (u32)func_020549ac(&self->unk_4b10, data_ov003_02234604[i]);
        }
        ok = TRUE;
    }
    return ok;
}

BOOL func_ov003_0221fba8()
{
    return func_ov003_0221fbb8((Unk_ov003_0223463c *)data_ov003_02235930);
}

BOOL func_ov003_0221fbb8(Unk_ov003_0223463c *self)
{
    BOOL ok = FALSE;
    s32 t = func_ov003_0221fb20(self, 2);
    if (func_020549e4(&self->unk_4b00, data_ov003_022328b0[t], data_ov003_02235938)) {
        void **p = data_ov003_022328ec[t];
        void *h = &self->unk_4b00;
        s32 i;
        for (i = 0; i < 5; i++) {
            self->unk_46f4[i] = (u32)func_020549ac(h, *p);
            p++;
        }
        ok = TRUE;
    }
    return ok;
}

BOOL func_ov003_0221fc1c(Unk_ov003_0223463c *self)
{
    BOOL ok = FALSE;
    if (func_020549e4(&self->unk_4ae0, data_ov003_02234750, data_ov003_02235934)) {
        s32 i;
        for (i = 0; i < 0x49; i++) {
            self->unk_50[i] = (u32)func_020549ac(&self->unk_4ae0, (void *)func_02061888(i, 1));
        }
        ok = TRUE;
    }
    return ok;
}

BOOL func_ov003_0221fc70(void *self, u32 *a, u32 *b, u32 *names, s32 n)
{
    void *heap = data_021f482c;
    s32 i;
    for (i = 0; i < n; a++, b++, names++, i++) {
        *b = (u32)func_020641ec((void *)*names, heap, -4, 0);
        if (*b == 0) {
            return FALSE;
        }
        *a = (u32)func_0210629c();
        func_02055744((void *)*a, 0);
    }
    return TRUE;
}

BOOL func_ov003_0221fcd4(void *self, u32 *a, u32 *b, u32 *names, s32 n)
{
    void *heap = data_021f482c;
    s32 i;
    for (i = 0; i < n; a++, b++, names++, i++) {
        if (*names != 0) {
            *b = (u32)func_020641ec((void *)*names, heap, -4, 0);
            if (*b == 0) {
                return FALSE;
            }
            *a = (u32)func_0210629c();
            func_020557a0((void *)*a, 0);
        } else {
            *a = 0;
        }
    }
    return TRUE;
}

BOOL func_ov003_0221fd44(void *self, s32 *a, s32 *b, s32 *c, s32 x, s32 z)
{
    void *g = data_021c47c4;
    BOOL ok = FALSE;
    if (g != NULL) {
        s32 px = x;
        s32 pz = z;
        s32 hx = px >> 4;
        s32 hz = pz >> 4;
        u8 *cell = func_ov003_0221fda8((u8 *)func_0204ebd8(g, hx, hz, px - (hx << 4), pz - (hz << 4), 0));
        if (cell != NULL && cell[2] != 0) {
            *a = ((s32)cell[0] << 12) >> 4;
            *b = ((s32)cell[1] << 12) >> 4;
            *c = cell[2];
            ok = TRUE;
        }
    }
    return ok;
}

u8 *func_ov003_0221fda8(u8 *p)
{
    u8 *r = NULL;
    if (p != NULL) {
        s32 v = *(u16 *)p;
        s32 hi = v & 0xf000;
        s32 tag = hi >> 12;
        s32 lo = v & 0xfff;
        Unk_ov003_0221fda8_Ent *e = data_ov003_0222f4b8;
        for (; e->unk_00 != NULL; e++) {
            if (tag == e->unk_04) {
                if (e->unk_06 > lo) {
                    r = e->unk_00 + lo * 3;
                }
                break;
            }
        }
        if (r != NULL && *r == 0) {
            r = NULL;
        }
    }
    return r;
}

void *func_ov003_0221fe04()
{
    return new Unk_ov003_0223463c;
}

BOOL func_ov003_0221ffb8(u32 *out, s32 id)
{
    u8 *p = func_ov003_02220004(id);
    if (p == NULL) {
        return FALSE;
    }
    u32 *q = (u32 *)(p + 0x120);
    out[0] = q[0];
    out[1] = q[1];
    out[2] = q[2];
    return TRUE;
}

s32 func_ov003_0221ffe8(s32 id)
{
    u8 *p = func_ov003_02220004(id);
    if (p == NULL) {
        return -1;
    }
    return *(s8 *)(p + 0x7e);
}

u8 *func_ov003_02220004(s32 i)
{
    if (i < 0 || i >= 6) {
        return NULL;
    }
    u8 *p = data_ov003_0225812c + i * 0x24c;
    if ((u32)(*(s32 *)(p + 0x80) - 3) > 1) {
        p = NULL;
    }
    return p;
}

BOOL func_ov003_02220030(u8 *self, void *a)
{
    BOOL ok = FALSE;
    void *res = func_0209c25c(a, self + 4);
    u8 *m = self + 8;
    if (func_0209c0d0(m, res, data_ov003_02234770)) {
        u8 *r4 = self + 0x58;
        func_020555ec(r4, func_0209c0ac(m), 0);
        void *nm = func_0209c348(res);
        func_020641ec(data_ov003_02234774, nm, 4, 0);
        s32 v = func_021065f8(func_021065dc(), 0);
        if (func_02054800(r4, nm)) {
            func_02054720(r4, v, 0, 0x1000, 1, 0);
            func_02054710(r4);
        } else {
            return FALSE;
        }
        func_020641ec(data_ov003_0223477c, nm, 4, 0);
        s32 w = func_02106670(func_02106654(), 0);
        if (func_02055bcc(self + 0x11c, *(void **)(r4 + 0x5c), nm)) {
            func_02055b38(self + 0x11c, w, 0, 0x1000, 1);
            func_02055a9c(self + 0x11c, func_020554c0(r4));
        } else {
            return FALSE;
        }
        ok = TRUE;
    }
    return ok;
}

}

Unk_ov003_0221ff88_E::Unk_ov003_0221ff88_E()
{
    unk_10 = 0;
    unk_14 = 0;
    func_020f440c(unk_60);
}

Unk_ov003_0221ff88_E::~Unk_ov003_0221ff88_E()
{
    func_020f43fc(unk_60);
}

Unk_ov003_0221ff6c_H::~Unk_ov003_0221ff6c_H() {}
