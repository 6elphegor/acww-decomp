// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_02225924_Rect {
    u16 x;
    u16 y;
    u16 w;
    u16 h;
};

struct Unk_ov001_02225924_Pt {
    u16 x;
    u16 y;
};

struct Unk_ov001_02225f40_W {
    Unk_ov001_02225924_Pt p;
};

struct Unk_ov001_02226214_Ent {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
};

struct Unk_ov001_0222df54_S {
    Unk_ov001_02226214_Ent ent[5];
    Unk_ov001_02225924_Pt pos0;
    Unk_ov001_02225924_Pt pos1;
    u16 unk_30;
    u16 unk_32;
    u16 unk_34;
    u16 unk_36;
    u8 flag0 : 1;
    u8 flag1 : 1;
    u8 flag2 : 1;
    u8 flag3 : 1;
};

typedef volatile u16 vu16;
typedef volatile u32 vu32;

extern "C" {
extern Unk_ov001_0222df54_S *data_ov001_0222df54;
extern u8 data_ov001_0222df50;
extern u8 data_ov001_0222df4c;
extern void *data_ov001_0222df48;
u32 func_01ff80e0(u32 a);
void func_01ff8128(u32 a);
void func_021006c8(void *heap, void *p);
void *func_02100890(void *heap, u32 size, u32 b);
void func_021008d4(void *heap);
void *func_021008e0(void *buf, u32 size, u32 b);
void func_02115fb4(void *p, u32 v, u32 size);
void func_0206d49c();
u32 func_0211ba58();
void func_0211b6b8(Unk_ov001_02225924_Pt *p, void *e);
u32 func_01ffc2c4(u32 a, u32 b);
void func_ov001_02225970(u32 a, u32 b, Unk_ov001_02225924_Pt *out);
void *func_ov001_02225dd8(u32 size, u32 b);
s32 func_0211c460(u32 a);
BOOL func_ov001_022260ac(Unk_ov001_02225924_Rect *r);
}

extern "C" {

void func_ov001_02225924(Unk_ov001_02225924_Pt *a, Unk_ov001_02225924_Pt *b, Unk_ov001_02225924_Rect *out) {
    out->x = a->x;
    out->y = a->y;
    out->w = a->x + b->x;
    out->h = a->y + b->y;
}

void func_ov001_02225958(u32 a, u32 b, u32 c, u32 d, Unk_ov001_02225924_Rect *out) {
    out->x = a;
    out->y = b;
    out->w = c;
    out->h = d;
}

void func_ov001_02225970(u32 a, u32 b, Unk_ov001_02225924_Pt *out) {
    out->x = a;
    out->y = b;
}


void func_ov001_0222597c(u32 eng, u32 which, u32 v, u32 on) {
    switch (which) {
    case 0:
        if (eng == 1) {
            vu16 *r = (vu16 *)0x4001048;
            u32 t = (*r & ~0x3f) | v;
            if (on != 0) t |= 0x20;
            *(vu16 *)0x4001048 = t;
        } else {
            u32 t = (*(vu16 *)0x4000048 & ~0x3f) | v;
            if (on != 0) t |= 0x20;
            *(vu16 *)0x4000048 = t;
        }
        break;
    case 1:
        if (eng == 1) {
            u32 t = (*(vu16 *)0x4001048 & ~0x3f00) | (v << 8);
            if (on != 0) t |= 0x2000;
            *(vu16 *)0x4001048 = t;
        } else {
            u32 t = (*(vu16 *)0x4000048 & ~0x3f00) | (v << 8);
            if (on != 0) t |= 0x2000;
            *(vu16 *)0x4000048 = t;
        }
        break;
    case 2:
        if (eng == 1) {
            u32 t = (*(vu16 *)0x400104a & ~0x3f00) | (v << 8);
            if (on != 0) t |= 0x2000;
            *(vu16 *)0x400104a = t;
        } else {
            u32 t = (*(vu16 *)0x400004a & ~0x3f00) | (v << 8);
            if (on != 0) t |= 0x2000;
            *(vu16 *)0x400004a = t;
        }
        break;
    case 3:
        if (eng == 1) {
            u32 t = (*(vu16 *)0x400104a & ~0x3f) | v;
            if (on != 0) t |= 0x20;
            *(vu16 *)0x400104a = t;
        } else {
            u32 t = (*(vu16 *)0x400004a & ~0x3f) | v;
            if (on != 0) t |= 0x20;
            *(vu16 *)0x400004a = t;
        }
        break;
    }
}


struct Unk_ov001_02225ae8_Pad {
    s32 v;
    Unk_ov001_02225ae8_Pad() {}
    ~Unk_ov001_02225ae8_Pad() {}
};

static inline void Unk_ov001_02225ae8_Set(u32 ha, u32 va, Unk_ov001_02225924_Rect *r) {
    u32 x1 = r->x;
    u32 x2 = r->w;
    u32 y1 = r->y;
    u32 y2 = r->h;
    *(vu16 *)ha = ((x1 << 8) & 0xff00) | (x2 & 0xff);
    *(vu16 *)va = ((y1 << 8) & 0xff00) | (y2 & 0xff);
}

void func_ov001_02225ae8(u32 eng, u32 which, Unk_ov001_02225924_Rect *r) {
    Unk_ov001_02225ae8_Pad pad;
    if (eng == 1) {
        if (which == 0) {
            Unk_ov001_02225ae8_Set(0x4001040, 0x4001044, r);
        } else {
            Unk_ov001_02225ae8_Set(0x4001042, 0x4001046, r);
        }
    } else {
        if (which == 0) {
            Unk_ov001_02225ae8_Set(0x4000040, 0x4000044, r);
        } else {
            Unk_ov001_02225ae8_Set(0x4000042, 0x4000046, r);
        }
    }
}

void func_ov001_02225c58(u32 eng, u32 m) {
    if (eng == 1) {
        u32 t = (*(vu32 *)0x4001000 & 0x1f00) >> 8;
        *(vu32 *)0x4001000 = (*(vu32 *)0x4001000 & ~0x1f00) | ((~m & t) << 8);
    } else {
        u32 t = (*(vu32 *)0x4000000 & 0x1f00) >> 8;
        *(vu32 *)0x4000000 = (*(vu32 *)0x4000000 & ~0x1f00) | ((~m & t) << 8);
    }
}

void func_ov001_02225cb4(u32 eng, u32 m) {
    if (eng == 1) {
        u32 t = (*(vu32 *)0x4001000 & 0x1f00) >> 8;
        *(vu32 *)0x4001000 = (*(vu32 *)0x4001000 & ~0x1f00) | ((m | t) << 8);
    } else {
        u32 t = (*(vu32 *)0x4000000 & 0x1f00) >> 8;
        *(vu32 *)0x4000000 = (*(vu32 *)0x4000000 & ~0x1f00) | ((m | t) << 8);
    }
}


void func_ov001_02225d08(void *p) {
    u32 irq = func_01ff80e0(1);
    if (p == 0) return;
    func_021006c8(data_ov001_0222df48, p);
    func_01ff8128(irq);
}

void func_ov001_02225d58(void **pp) {
    u32 irq = func_01ff80e0(1);
    if (*pp == 0) return;
    func_021006c8(data_ov001_0222df48, *pp);
    func_01ff8128(irq);
    *pp = 0;
}

void *func_ov001_02225db0(u32 size, u32 b) {
    void *p = func_ov001_02225dd8(size, b);
    func_02115fb4(p, 0, size);
    return p;
}

void *func_ov001_02225dd8(u32 size, u32 b) {
    void *p;
    u32 irq = func_01ff80e0(1);
    p = func_02100890(data_ov001_0222df48, size, b);
    if (p == 0) func_0206d49c();
    func_01ff8128(irq);
    return p;
}

void func_ov001_02225e28() {
    func_021008d4(data_ov001_0222df48);
    data_ov001_0222df48 = 0;
}

void func_ov001_02225e58(void *buf) {
    func_02115fb4(buf, 0, 0x40000);
    data_ov001_0222df48 = func_021008e0(buf, 0x40000, 0);
    if (data_ov001_0222df48 == 0) func_0206d49c();
}


void func_ov001_02225ea0() {
    if (data_ov001_0222df4c != 0) {
        if (((*(vu16 *)0x27fffa8 & 0x8000) >> 15) != 0) return;
        if (func_0211c460(1) != 0) data_ov001_0222df4c = 0;
    } else {
        if (((*(vu16 *)0x27fffa8 & 0x8000) >> 15) == 0) return;
        if (func_0211c460(0) != 0) data_ov001_0222df4c = 1;
    }
}

BOOL func_ov001_02225f40(Unk_ov001_02225924_Pt *out) {
    Unk_ov001_0222df54_S *s = data_ov001_0222df54;
    if (!s->flag0) {
        *(Unk_ov001_02225f40_W *)out = *(Unk_ov001_02225f40_W *)&s->pos1;
        return FALSE;
    }
    *(Unk_ov001_02225f40_W *)out = *(Unk_ov001_02225f40_W *)&s->pos0;
    return TRUE;
}

BOOL func_ov001_02225f88(Unk_ov001_02225924_Rect *r) {
    Unk_ov001_02225924_Rect t;
    t.x = r->x;
    t.y = r->y;
    t.w = r->x + r->w;
    t.h = r->y + r->h;
    return func_ov001_022260ac(&t);
}


BOOL func_ov001_02225fd4(Unk_ov001_02225924_Rect *r) {
    Unk_ov001_0222df54_S *s = data_ov001_0222df54;
    if (!s->flag3) return FALSE;
    u32 x = s->pos0.x;
    if (r->x > x) return FALSE;
    if (r->w < x) return FALSE;
    u32 y = s->pos0.y;
    if (r->y > y) return FALSE;
    return r->h >= y;
}

BOOL func_ov001_02226040(Unk_ov001_02225924_Rect *r) {
    Unk_ov001_0222df54_S *s = data_ov001_0222df54;
    if (!s->flag2) return FALSE;
    u32 x = s->pos0.x;
    if (r->x > x) return FALSE;
    if (r->w < x) return FALSE;
    u32 y = s->pos0.y;
    if (r->y > y) return FALSE;
    return r->h >= y;
}

BOOL func_ov001_022260ac(Unk_ov001_02225924_Rect *r) {
    Unk_ov001_0222df54_S *s = data_ov001_0222df54;
    if (!s->flag1) return FALSE;
    u32 x = s->pos0.x;
    if (r->x > x) return FALSE;
    if (r->w < x) return FALSE;
    u32 y = s->pos0.y;
    if (r->y > y) return FALSE;
    return r->h >= y;
}

BOOL func_ov001_02226118(Unk_ov001_02225924_Rect *r) {
    Unk_ov001_0222df54_S *s = data_ov001_0222df54;
    if (!s->flag0) return FALSE;
    u32 x = s->pos0.x;
    if (r->x > x) return FALSE;
    if (r->w < x) return FALSE;
    u32 y = s->pos0.y;
    if (r->y > y) return FALSE;
    return r->h >= y;
}

BOOL func_ov001_02226184(u32 m) {
    u32 t = m & data_ov001_0222df54->unk_36;
    return m == t;
}

BOOL func_ov001_022261a8(u32 m) {
    u32 t = m & data_ov001_0222df54->unk_34;
    return m == t;
}

BOOL func_ov001_022261cc(u32 m) {
    u32 t = m & data_ov001_0222df54->unk_32;
    return m == t;
}

BOOL func_ov001_022261f0(u32 m) {
    u32 t = m & data_ov001_0222df54->unk_30;
    return m == t;
}


static inline BOOL Unk_ov001_02226214_Flag0() {
    if (data_ov001_0222df54->flag0) return TRUE;
    return FALSE;
}

void func_ov001_02226214() {
    s32 i;
    u8 found;
    BOOL prev = Unk_ov001_02226214_Flag0();
    found = 0;
    u32 n = func_0211ba58();
    i = found;
    Unk_ov001_0222df54_S *s = data_ov001_0222df54;
    *(Unk_ov001_02225f40_W *)&s->pos1 = *(Unk_ov001_02225f40_W *)&s->pos0;
    do {
        Unk_ov001_02226214_Ent *e = &data_ov001_0222df54->ent[n];
        if (e->unk_04 == 1 && e->unk_06 == 0) {
            Unk_ov001_02225924_Pt pt;
            found = TRUE;
            func_0211b6b8(&pt, e);
            func_ov001_02225970(pt.x, pt.y, &data_ov001_0222df54->pos0);
            break;
        }
        i++;
        n = func_01ffc2c4(n + 4, 5);
    } while (i < 4);
    u32 d = found ^ prev;
    u32 up = found & d;
    u32 down = prev & d;
    data_ov001_0222df54->flag1 = (u8)up;
    data_ov001_0222df54->flag3 = (u8)down;
    data_ov001_0222df54->flag0 = found;
    data_ov001_0222df54->flag2 = data_ov001_0222df54->flag1;
    if (found == 0) {
        data_ov001_0222df50 = 0;
        return;
    }
    data_ov001_0222df50++;
    if (data_ov001_0222df50 == 0x28) {
        data_ov001_0222df54->flag2 = 1;
        return;
    }
    if (data_ov001_0222df50 != 0x2f) return;
    data_ov001_0222df54->flag2 = 1;
    data_ov001_0222df50 = 0x28;
}

}
