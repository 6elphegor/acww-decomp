#include "types.h"

struct Unk_ov117_02292c88_Icon {
    s16 x;
    s16 y;
    u8 z;
};

struct Unk_ov117_02292c88 {
    Unk_ov117_02292c88_Icon e[17];
    Unk_ov117_02292c88();
    ~Unk_ov117_02292c88();
};

inline void *operator new(unsigned long, void *p) {
    return p;
}

struct Unk_ov117_02292610 {
    u8 b[0x200];
    Unk_ov117_02292610();
    ~Unk_ov117_02292610();
};

struct Unk_ov117_022924c8 {
    Unk_ov117_02292610 tile[16];
    Unk_ov117_02292c88 icons;
    Unk_ov117_022924c8();
};

struct Unk_ov117_02292b54_Cell {
    u8 pad_00[0x28];
};

struct Unk_ov117_02292b54_Grid {
    Unk_ov117_02292b54_Cell *cells;
    u32 w;
    u32 h;
};

static inline Unk_ov117_02292b54_Cell *Unk_ov117_02292b54_GetCell(Unk_ov117_02292b54_Grid *g, u32 x, u32 y) {
    if (x < g->w && y < g->h && g->cells != NULL) {
        return &g->cells[y * g->w + x];
    }
    return NULL;
}

struct HouseData { void func_020604c4(); };
struct VillagerDataItemView { u8 *getHousePos(); };
struct Unk_020b28ac { void func_020b28ac(s32 *, s32 *, s32 *, s32 *); };

extern "C" {
Unk_ov117_022924c8 *data_ov117_02292ce0;
extern u8 data_021e58a8[];
extern u8 data_021dfd8c[];

void Mem_Free(void *p);
void *Mem_Alloc(u32 n);
void MI_CpuCopy8(void *a, void *b, u32 n);
void func_02030598(s32 a);
Unk_ov117_02292b54_Grid *func_0204da0c();
s32 func_0204e9dc(void *m, s32 *a, s32 *b, s32 *c, s32 *d, u16 *e, u16 *f, s32 g, s32 h);
void func_0204edf8(s32 *a, s32 *b, s32 c, s32 d, s32 e, s32 f);
u16 *func_0204ebd8(void *m, s32 a, s32 b, s32 c, s32 d, s32 e);
void *StrBSize_Get(u16 *t);
u32 func_020374e8(void *c);
s32 func_02030be4(s32 *a, s32 *b, s32 c, s32 d);
BOOL func_02031098(u8 *out, s32 a, s32 b);
void *SaveVillagers_Get(void *, s32);
BOOL func_02081038(void *p);
u16 Item_MakeNeighborHouse(u32 x);

void func_ov117_02292360(void *a, Unk_ov117_02292c88 *b);
void func_ov117_022923a0(u32 i);
void func_ov117_022923bc(u32 i);
void func_ov117_022923d8();
void func_ov117_02292408(void *a, Unk_ov117_02292c88 *b);
Unk_ov117_02292c88 *func_ov117_02292448(Unk_ov117_022924c8 *o);
void func_ov117_02292454(void *o, void *a);
u8 *func_ov117_02292464(u8 *o, u32 x, u32 y);
void func_ov117_02292478(Unk_ov117_022924c8 *o, u32 sel);
void func_ov117_0229249c(Unk_ov117_022924c8 *o, u32 i);
void func_ov117_02292500(u8 *buf, s32 bx, s32 by);
void func_ov117_02292628(Unk_ov117_02292c88 *s);
void func_ov117_0229265c(Unk_ov117_02292c88 *s);
void func_ov117_02292664(Unk_ov117_02292c88 *s, Unk_ov117_02292c88 *d);
void func_ov117_02292690(Unk_ov117_02292c88 *s);
void func_ov117_0229275c(Unk_ov117_02292c88 *s);
void func_ov117_02292804(Unk_ov117_02292c88 *s);
void func_ov117_022928a8(Unk_ov117_02292c88 *s);
void func_ov117_0229294c(Unk_ov117_02292c88 *s);
void func_ov117_022929f4(Unk_ov117_02292c88 *s);
void func_ov117_02292acc(Unk_ov117_02292c88 *s);
void func_ov117_02292b54(Unk_ov117_02292c88 *s);
u8 func_ov117_02292c2c(Unk_ov117_02292c88 *s, u32 i);
Unk_ov117_02292c88_Icon *func_ov117_02292c40(Unk_ov117_02292c88 *s, u32 i);
void func_ov117_02292c64(Unk_ov117_02292c88 *s, s32 i, s32 x, s32 y, u8 z);
void func_ov117_02292c88(Unk_ov117_02292c88 *self);

}

Unk_ov117_02292c88::Unk_ov117_02292c88() {
    Unk_ov117_02292c88_Icon *e = this->e;
    do {
        e->x = 0;
        e->y = 0;
        e++;
    } while (e != this->e + 17);
    func_ov117_02292c88(this);
}

Unk_ov117_02292c88::~Unk_ov117_02292c88() {
}

extern "C" void func_ov117_02292c88(Unk_ov117_02292c88 *self) {
    u32 i;
    for (i = 0; i < 17; i++) {
        self->e[i].x = -1;
        self->e[i].y = -1;
        self->e[i].z = 0;
    }
}

extern "C" void func_ov117_02292c64(Unk_ov117_02292c88 *s, s32 i, s32 x, s32 y, u8 z) {
    if (i < 17) {
        s->e[i].x = x;
        s->e[i].y = y;
        s->e[i].z = z;
    }
}

extern "C" Unk_ov117_02292c88_Icon *func_ov117_02292c40(Unk_ov117_02292c88 *s, u32 i) {
    if (i < 17) {
        s32 m = -1;
        if (s->e[i].x != m) {
            s = (Unk_ov117_02292c88 *)((u8 *)s + i * 6);
            if (*(s16 *)((u8 *)s + 2) != m) return (Unk_ov117_02292c88_Icon *)s;
        }
        return NULL;
    }
    return NULL;
}

extern "C" u8 func_ov117_02292c2c(Unk_ov117_02292c88 *s, u32 i) {
    if (i < 17) {
        return s->e[i].z;
    }
    return s->e[0].z;
}

extern "C" void func_ov117_02292b54(Unk_ov117_02292c88 *s) {
    s32 x, y;
    s32 n;
    Unk_ov117_02292b54_Grid *g;
    func_02030598(1);
    n = 0;
    g = func_0204da0c();
    for (y = 1; y < 5; y++) {
        for (x = 1; x < 5; x++) {
            if (func_020374e8(Unk_ov117_02292b54_GetCell(g, x, y)) & 4) {
                s32 px, py;
                s32 t = func_02030be4(&px, &py, x, y);
                if (t != 4) {
                    px = px << 1;
                    py = py << 1;
                    px += 1;
                    py += 1;
                    switch (t) {
                    case 0:
                        px += 1;
                        py += 3;
                        break;
                    case 1:
                        px += 3;
                        py += 1;
                        break;
                    case 2:
                        py += 4;
                        break;
                    case 3:
                        px += 2;
                        py += 4;
                        break;
                    }
                    func_ov117_02292c64(s, n, px, py, t);
                    n++;
                }
            }
        }
    }
    func_02030598(0);
}

extern "C" void func_ov117_02292acc(Unk_ov117_02292c88 *s) {
    s32 i;
    s32 zero = 0;
    for (i = 0; i < 8; i++) {
        void *p = SaveVillagers_Get(data_021dfd8c, i);
        if (func_02081038(((VillagerDataItemView *)p)->getHousePos())) {
            u16 t = Item_MakeNeighborHouse(i);
            s32 bx = ((VillagerDataItemView *)p)->getHousePos()[0];
            s32 by = ((VillagerDataItemView *)p)->getHousePos()[1];
            s32 o1, o2, o3, o4;
            s32 x = bx << 1;
            s32 y = by << 1;
            x += 1;
            y += 1;
            void *h = StrBSize_Get(&t);
            if (h) {
                ((Unk_020b28ac *)h)->func_020b28ac(&o1, &o2, &o3, &o4);
                x = x + (o1 >> 11);
                y = y + (o2 >> 11);
            }
            func_ov117_02292c64(s, i + 3, x, y, zero);
        }
    }
}

extern "C" void func_ov117_022929f4(Unk_ov117_02292c88 *s) {
    Unk_ov117_02292b54_Grid *g = func_0204da0c();
    if (g != NULL) {
        ((HouseData *)data_021e58a8)->func_020604c4();
        u16 t[2];
        s32 x, z, a, b, c, d, o1, o2, o3, o4;
        t[0] = 0x5014;
        t[1] = 0x501a;
        if (func_0204e9dc(g, &a, &b, &c, &d, &t[0], &t[1], 1, 0)) {
            func_0204edf8(&x, &z, a, b, c, d);
            u16 *cell;
            s32 bx = *(volatile s32 *)&x;
            s32 bz = *(volatile s32 *)&z;
            s32 hx = bx >> 4;
            s32 hz = bz >> 4;
            cell = func_0204ebd8(g, hx, hz, bx - (hx << 4), bz - (hz << 4), 0);
            x = x << 1;
            z = z << 1;
            x += 1;
            z += 1;
            void *h = StrBSize_Get(cell);
            if (h) {
                ((Unk_020b28ac *)h)->func_020b28ac(&o1, &o2, &o3, &o4);
                x = x + (o1 >> 11);
                z = z + (o2 >> 11);
            }
            func_ov117_02292c64(s, 11, x, z, 0);
        }
    }
}

extern "C" void func_ov117_0229294c(Unk_ov117_02292c88 *s) {
    Unk_ov117_02292b54_Grid *g = func_0204da0c();
    if (g != NULL) {
        u16 t = 0x5011;
        s32 x, z, a, b, c, d, o1, o2, o3, o4;
        if (func_0204e9dc(g, &a, &b, &c, &d, &t, &t, 0x800, 0)) {
            func_0204edf8(&x, &z, a, b, c, d);
            x = x << 1;
            z = z << 1;
            x += 1;
            z += 1;
            void *h = StrBSize_Get(&t);
            if (h) {
                ((Unk_020b28ac *)h)->func_020b28ac(&o1, &o2, &o3, &o4);
                x = x + (o1 >> 11);
                z = z + (o2 >> 11);
            }
            func_ov117_02292c64(s, 13, x, z, 0);
        }
    }
}

extern "C" void func_ov117_022928a8(Unk_ov117_02292c88 *s) {
    Unk_ov117_02292b54_Grid *g = func_0204da0c();
    if (g != NULL) {
        u16 t = 0x500b;
        s32 x, z, a, b, c, d, o1, o2, o3, o4;
        if (func_0204e9dc(g, &a, &b, &c, &d, &t, &t, 0, 0)) {
            func_0204edf8(&x, &z, a, b, c, d);
            x = x << 1;
            z = z << 1;
            x += 1;
            z += 1;
            void *h = StrBSize_Get(&t);
            if (h) {
                ((Unk_020b28ac *)h)->func_020b28ac(&o1, &o2, &o3, &o4);
                x = x + (o1 >> 11);
                z = z + (o2 >> 11);
            }
            func_ov117_02292c64(s, 16, x, z, 0);
        }
    }
}

extern "C" void func_ov117_02292804(Unk_ov117_02292c88 *s) {
    Unk_ov117_02292b54_Grid *g = func_0204da0c();
    if (g != NULL) {
        u16 t = 0x500c;
        s32 x, z, a, b, c, d, o1, o2, o3, o4;
        if (func_0204e9dc(g, &a, &b, &c, &d, &t, &t, 2, 0)) {
            func_0204edf8(&x, &z, a, b, c, d);
            x = x << 1;
            z = z << 1;
            x += 1;
            z += 1;
            void *h = StrBSize_Get(&t);
            if (h) {
                ((Unk_020b28ac *)h)->func_020b28ac(&o1, &o2, &o3, &o4);
                x = x + (o1 >> 11);
                z = z + (o2 >> 11);
            }
            func_ov117_02292c64(s, 15, x, z, 0);
        }
    }
}

extern "C" void func_ov117_0229275c(Unk_ov117_02292c88 *s) {
    Unk_ov117_02292b54_Grid *g = func_0204da0c();
    if (g != NULL) {
        u16 t = 0x5000;
        s32 x, z, a, b, c, d, o1, o2, o3, o4;
        if (func_0204e9dc(g, &a, &b, &c, &d, &t, &t, 0x200, 0)) {
            func_0204edf8(&x, &z, a, b, c, d);
            x = x << 1;
            z = z << 1;
            x += 1;
            z += 1;
            void *h = StrBSize_Get(&t);
            if (h) {
                ((Unk_020b28ac *)h)->func_020b28ac(&o1, &o2, &o3, &o4);
                x = x + (o1 >> 11);
                z = z + (o2 >> 11);
            }
            func_ov117_02292c64(s, 12, x, z, 0);
        }
    }
}

extern "C" void func_ov117_02292690(Unk_ov117_02292c88 *s) {
    Unk_ov117_02292b54_Grid *g = func_0204da0c();
    if (g != NULL) {
        u16 t[2];
        s32 x, z, a, b, c, d, o1, o2, o3, o4;
        t[0] = 0x500d;
        t[1] = 0x5010;
        if (func_0204e9dc(g, &a, &b, &c, &d, &t[0], &t[1], 2, 0)) {
            func_0204edf8(&x, &z, a, b, c, d);
            u16 *cell;
            s32 bx = *(volatile s32 *)&x;
            s32 bz = *(volatile s32 *)&z;
            s32 hx = bx >> 4;
            s32 hz = bz >> 4;
            cell = func_0204ebd8(g, hx, hz, bx - (hx << 4), bz - (hz << 4), 0);
            x = x << 1;
            z = z << 1;
            x += 1;
            z += 1;
            void *h = StrBSize_Get(cell);
            if (h) {
                ((Unk_020b28ac *)h)->func_020b28ac(&o1, &o2, &o3, &o4);
                x = x + (o1 >> 11);
                z = z + (o2 >> 11);
            }
            func_ov117_02292c64(s, 14, x, z, 0);
        }
    }
}

extern "C" void func_ov117_02292664(Unk_ov117_02292c88 *s, Unk_ov117_02292c88 *d) {
    u32 i;
    for (i = 0; i < 17; i++) {
        d->e[i].x = s->e[i].x;
        d->e[i].y = s->e[i].y;
        d->e[i].z = s->e[i].z;
    }
}

extern "C" void func_ov117_0229265c(Unk_ov117_02292c88 *s) {
    func_ov117_02292acc(s);
}

extern "C" void func_ov117_02292628(Unk_ov117_02292c88 *s) {
    func_ov117_02292b54(s);
    func_ov117_0229275c(s);
    func_ov117_022928a8(s);
    func_ov117_022929f4(s);
    func_ov117_0229294c(s);
    func_ov117_02292804(s);
    func_ov117_02292690(s);
}

Unk_ov117_02292610::Unk_ov117_02292610() {
    for (s32 i = 0; (u32)i < 0x200; i++) {
        b[i] = 0;
    }
}

Unk_ov117_02292610::~Unk_ov117_02292610() {
}

extern "C" void func_ov117_02292500(u8 *buf, s32 bx, s32 by) {
    u32 bx16, by16, n; u8 v; u32 ex, ey, i, j, k, l; BOOL ev, od;
    func_02030598(1);
    bx16 = (bx << 4) + 0x10;
    by16 = (by << 4) + 0x10;
    n = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 8; k++) {
                for (l = 0; l < 8; l++) {
                    u8 out[4];
                    ex = (i << 3) + k;
                    ey = (j << 3) + l;
                    if ((ey & 1) == 0) ev = TRUE; else ev = FALSE;
                    if ((ex & 1) == 0) od = TRUE; else od = FALSE;
                    v = 0;
                    if (func_02031098(out, bx16 + (ey >> 1), by16 + (ex >> 1))) {
                        if (ev) {
                            u8 t = (od ? out[0] : out[2]) & 0xf;
                            v = t;
                        } else {
                            u8 t = (od ? out[1] : out[3]) & 0xf;
                            v = (u8)(t << 4);
                        }
                    }
                    buf[n++ >> 1] |= v;
                }
            }
        }
    }
    func_02030598(0);
}

Unk_ov117_022924c8::Unk_ov117_022924c8() {
}

extern "C" void func_ov117_0229249c(Unk_ov117_022924c8 *o, u32 i) {
    u32 n = 0;
    u32 k = i & 3;
    for (; n < 4; n++) {
        u8 *p = func_ov117_02292464((u8 *)o, n, k);
        func_ov117_02292500(p, n, k);
    }
}

extern "C" void func_ov117_02292478(Unk_ov117_022924c8 *o, u32 sel) {
    if (sel == 0) {
        func_ov117_0229265c((Unk_ov117_02292c88 *)((u8 *)o + 0x2000));
    } else {
        func_ov117_02292628((Unk_ov117_02292c88 *)((u8 *)o + 0x2000));
    }
}

extern "C" u8 *func_ov117_02292464(u8 *o, u32 x, u32 y) {
    if (x < 4 && y < 4) {
        o += (x + y * 4) << 9;
    }
    return o;
}

extern "C" void func_ov117_02292454(void *o, void *a) {
    MI_CpuCopy8(o, a, 0x2000);
}

extern "C" Unk_ov117_02292c88 *func_ov117_02292448(Unk_ov117_022924c8 *o) {
    return (Unk_ov117_02292c88 *)((u8 *)o + 0x2000);
}

extern "C" void func_ov117_02292408(void *a, Unk_ov117_02292c88 *b) {
    func_ov117_022923d8();
    func_ov117_022923bc(0);
    func_ov117_022923bc(1);
    func_ov117_022923bc(2);
    func_ov117_022923bc(3);
    func_ov117_022923a0(0);
    func_ov117_022923a0(1);
    func_ov117_02292360(a, b);
}

extern "C" void func_ov117_022923d8() {
    if (data_ov117_02292ce0 == NULL) {
        data_ov117_02292ce0 = (Unk_ov117_022924c8 *)Mem_Alloc(0x2066);
        if (data_ov117_02292ce0 != NULL) {
            new (data_ov117_02292ce0) Unk_ov117_022924c8();
        }
    }
}

extern "C" void func_ov117_022923bc(u32 i) {
    if (data_ov117_02292ce0 != NULL) {
        func_ov117_0229249c(data_ov117_02292ce0, i);
    }
}

extern "C" void func_ov117_022923a0(u32 i) {
    if (data_ov117_02292ce0 != NULL) {
        func_ov117_02292478(data_ov117_02292ce0, i);
    }
}

extern "C" void func_ov117_02292360(void *a, Unk_ov117_02292c88 *b) {
    if (data_ov117_02292ce0 != NULL) {
        func_ov117_02292454(data_ov117_02292ce0, a);
        if (b != NULL) {
            func_ov117_02292664(func_ov117_02292448(data_ov117_02292ce0), b);
        }
        Mem_Free(data_ov117_02292ce0);
        data_ov117_02292ce0 = NULL;
    }
}

