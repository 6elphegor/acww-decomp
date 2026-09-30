// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov066_02263320_Flags {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 f2 : 1;
    u8 f3 : 1;
};

struct Unk_ov066_02263320_Pay {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u8 unk_04[1];
};

struct Unk_ov066_02263320_Rec {
    Unk_ov066_02263320_Rec *unk_00;
    Unk_ov066_02263320_Rec *unk_04;
    u16 unk_08;
    u16 unk_0a;
    u16 unk_0c;
    u8 pad[0x20 - 0x0e];
    Unk_ov066_02263320_Pay unk_20;
};

struct Unk_ov066_02263320_G {
    u8 unk_00;
    u8 lo : 4;
    u8 hi : 4;
    s8 unk_02;
    s8 unk_03;
    Unk_ov066_02263320_Flags unk_04;
    u8 pad[3];
    Unk_ov066_02263320_Rec *unk_08;
    Unk_ov066_02263320_Rec *unk_0c;
    Unk_ov066_02263320_Rec *unk_10;
    Unk_ov066_02263320_Rec *unk_14;
    Unk_ov066_02263320_Rec **unk_18;
    u16 unk_1c;
    u16 unk_1e;
    u32 unk_20;
    u32 unk_24;
    s32 unk_28;
    u32 unk_2c;
};

struct Unk_ov066_02263320_S {
    u8 pad[0xb];
    u8 unk_0b;
};

struct Unk_ov066_02263320_V {
    u8 pad[0x98];
    u16 unk_98;
};

struct Unk_ov066_02263320_Hdr {
    u8 a : 2;
    u8 pad : 1;
    u8 b : 1;
    u8 c : 4;
    u8 d;
};

struct Unk_ov066_02263320_Msg {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u8 pad[6];
    Unk_ov066_02263320_Pay *unk_0c;
    u16 unk_10;
    u16 unk_12;
    u8 pad2[0x20 - 0x14];
    void (*unk_20)(void *);
};

extern "C" {
extern Unk_ov066_02263320_S *data_ov066_022647ac;
extern Unk_ov066_02263320_V *data_ov066_022647b4;
extern Unk_ov066_02263320_G *data_ov066_022647c8;

u32 func_01ffa2ec(void);
s32 func_01ffa3d4(u32);
s32 func_02116048(void *, void *, s32);
s32 func_0212052c(void *, u32, u32, u32, u32, u32, u32);
s32 func_0206d49c(void);
void func_ov066_0225f22c(u32 v);
s32 func_ov066_0225f7c8(void);
s32 func_ov066_0226238c(void);
void func_ov066_0226453c(void *, s32);
void func_ov066_02263d90(void);
void func_ov066_02263f54(void *);
void func_ov066_022640dc(void);
void func_ov066_02263c3c(s32, void *);
}

#pragma thumb off
extern "C" {

void func_ov066_02263320(void) {
    u32 t = func_01ffa2ec();
    u16 i;
    data_ov066_022647c8->unk_10 = data_ov066_022647c8->unk_08;
    func_ov066_0226453c(data_ov066_022647c8->unk_08, 3);
    func_ov066_0226453c(data_ov066_022647c8->unk_0c, 3);
    for (i = 0; i < data_ov066_022647ac->unk_0b; i++) {
        data_ov066_022647c8->unk_18[i] = data_ov066_022647c8->unk_0c;
    }
    data_ov066_022647c8->lo = 0;
    data_ov066_022647c8->hi = 0;
    data_ov066_022647c8->unk_02 = 0;
    data_ov066_022647c8->unk_03 = 0;
    data_ov066_022647c8->unk_04.f0 = 1;
    data_ov066_022647c8->unk_04.f1 = 0;
    data_ov066_022647c8->unk_04.f2 = 0;
    data_ov066_022647c8->unk_04.f3 = 0;
    data_ov066_022647c8->unk_14 = 0;
    data_ov066_022647c8->unk_1c = 0;
    data_ov066_022647c8->unk_1e = 0;
    data_ov066_022647c8->unk_20 = 0;
    data_ov066_022647c8->unk_24 = 0;
    data_ov066_022647c8->unk_28 = -1;
    data_ov066_022647c8->unk_2c = 0;
    func_01ffa3d4(t);
}

void func_ov066_022634e4(Unk_ov066_02263320_Msg *m) {
}

void func_ov066_022634e8(Unk_ov066_02263320_Msg *m);

void func_ov066_02263478(Unk_ov066_02263320_Msg *m) {
    u32 t;
    if (func_ov066_0225f7c8() != 0) {
        return;
    }
    if (m->unk_02 != 0) {
        return;
    }
    t = m->unk_04;
    if (t == 7) {
        return;
    }
    if (t != 9) {
        if (t == 0x15) {
            func_ov066_022634e8(m);
        }
    } else {
        func_ov066_022634e4(m);
    }
}

void func_ov066_02263628(u32 idx, void *src, u32 size);
void func_ov066_02263b90(Unk_ov066_02263320_Pay *p);

void func_ov066_022634e8(Unk_ov066_02263320_Msg *m) {
    Unk_ov066_02263320_G *g;
    Unk_ov066_02263320_Pay *p;
    if (m->unk_10 == 0) {
        return;
    }
    if (m->unk_12 != 0) {
        func_ov066_02263628(m->unk_12, m->unk_0c, m->unk_10);
        return;
    }
    g = data_ov066_022647c8;
    p = m->unk_0c;
    if (g->unk_04.f0 == 0) {
        if (p->unk_00 != ((g->lo + 1) & 0xf)) {
            goto cc;
        }
    }
    {
        Unk_ov066_02263320_Rec *e = g->unk_18[0];
        e->unk_20.unk_00 = p->unk_00;
        data_ov066_022647c8->unk_18[0] = e->unk_04;
    }
    func_ov066_02263b90(p);
    data_ov066_022647c8->unk_04.f0 = 0;
    data_ov066_022647c8->unk_04.f2 = 0;
    data_ov066_022647c8->lo = p->unk_00;
    return;
cc:
    if (p->unk_00 != ((g->lo + 2) & 0xf)) {
        g->unk_04.f1 = 1;
        return;
    }
    g->unk_04.f2 = 1;
    data_ov066_022647c8->hi = (data_ov066_022647c8->lo + 1) & 0xf;
}

Unk_ov066_02263320_Rec *func_ov066_0226375c(u32 id, Unk_ov066_02263320_Rec *head);

void func_ov066_02263628(u32 idx, void *src, u32 size) {
    Unk_ov066_02263320_Hdr h;
    Unk_ov066_02263320_Rec *r;
    Unk_ov066_02263320_Rec *e;
    func_02116048(src, &h, 2);
    if (h.b) {
        r = func_ov066_0226375c(h.c, data_ov066_022647c8->unk_10);
        if (r != 0) {
            r->unk_0c = r->unk_0c | (r->unk_0a & (1 << idx));
        }
    }
    if (h.a == 3) {
        if (data_ov066_022647c8->unk_14 != 0) {
            return;
        }
        r = func_ov066_0226375c(h.c, data_ov066_022647c8->unk_10);
        if (r != 0) {
            data_ov066_022647c8->unk_14 = r;
        }
        return;
    }
    if (h.a == 2) {
        return;
    }
    e = data_ov066_022647c8->unk_18[idx];
    func_02116048(src, (u8 *)e + 0x24 + idx * data_ov066_022647c8->unk_00, size);
    e->unk_20.unk_02 = e->unk_20.unk_02 | (1 << idx);
    data_ov066_022647c8->unk_18[idx] = e->unk_04;
}

Unk_ov066_02263320_Rec *func_ov066_0226375c(u32 id, Unk_ov066_02263320_Rec *head) {
    Unk_ov066_02263320_Rec *n;
    for (n = head->unk_00; head != n; n = n->unk_00) {
        if (n->unk_20.unk_00 == id) {
            return n;
        }
    }
    return 0;
}

void func_ov066_0226378c(Unk_ov066_02263320_Msg *m) {
    if (m->unk_02 == 0) {
        if (m->unk_20 == 0) {
            return;
        }
        m->unk_20(m);
        return;
    }
    func_ov066_0225f22c(m->unk_02);
    func_0206d49c();
}

s32 func_ov066_02263810(u32 x, u32 a, u32 b, u32 c, u32 d);

void func_ov066_022637dc(u32 a, u32 b, u32 c, u32 d) {
    func_ov066_02263810(0xc, a, b, c, d);
}

s32 func_ov066_02263810(u32 x, u32 a, u32 b, u32 c, u32 d) {
    s32 r = func_0212052c((void *)func_ov066_0226378c, d, a, b, c, x, 2);
    if (r != 2 && r != 7) {
        func_ov066_0225f22c(r);
        return 0;
    }
    return 1;
}

void func_ov066_02263878(u32 idx) {
    u16 mask = ~(1 << idx);
    Unk_ov066_02263320_Rec *head = data_ov066_022647c8->unk_10;
    Unk_ov066_02263320_Rec *n = head;
    do {
        n->unk_0a = n->unk_0a & mask;
        n->unk_0c = n->unk_0c & mask;
        n = n->unk_00;
    } while (head != n);
}

void func_ov066_022638c4(void) {
    if (data_ov066_022647c8->unk_02 >= 2) {
        return;
    }
    func_ov066_02263d90();
}

s32 func_ov066_02263a48(Unk_ov066_02263320_Rec *dst, Unk_ov066_02263320_Rec *src);

void func_ov066_022638fc(void) {
    Unk_ov066_02263320_G *g = data_ov066_022647c8;
    Unk_ov066_02263320_Rec *n14;
    Unk_ov066_02263320_Rec *r5;
    Unk_ov066_02263320_Rec *e0;
    if (g->unk_02 >= 1) {
        return;
    }
    e0 = g->unk_18[0];
    r5 = 0;
    n14 = g->unk_14;
    if (n14 != 0) {
        Unk_ov066_02263320_Rec *nx = n14->unk_04;
        r5 = n14;
        if (nx == g->unk_10) {
            g->unk_14 = 0;
        } else {
            g->unk_14 = nx;
        }
    } else {
        Unk_ov066_02263320_Rec *p = g->unk_10->unk_00->unk_00;
        u16 a = p->unk_0a;
        if (a == 0 || a == p->unk_0c) {
            if (g->unk_04.f3) {
                func_ov066_02263f54(e0);
                e0->unk_20.unk_02 = e0->unk_20.unk_02 | 1;
                data_ov066_022647c8->unk_03 = data_ov066_022647c8->unk_03 + 1;
            }
            if (func_ov066_02263a48(data_ov066_022647c8->unk_10, e0) != 0) {
                g = data_ov066_022647c8;
                r5 = g->unk_10;
                g->unk_10 = r5->unk_04;
            }
        }
    }
    if (r5 == 0) {
        return;
    }
    if (r5->unk_0a == 0) {
        return;
    }
    g = data_ov066_022647c8;
    g->unk_02 = g->unk_02 + 1;
    func_ov066_02263810(0xd, (u32)&r5->unk_20, r5->unk_08, r5->unk_0a, (u32)func_ov066_022640dc);
}

s32 func_ov066_02263a48(Unk_ov066_02263320_Rec *dst, Unk_ov066_02263320_Rec *src) {
    u16 mask;
    u16 i;
    u16 total;
    s32 result = 0;
    u8 sz;
    u8 *rd;
    u8 *rp;
    mask = src->unk_20.unk_02;
    if (mask != 0) {
        u32 t;
        sz = data_ov066_022647c8->unk_00;
        rd = (u8 *)src + 0x24;
        total = 4;
        rp = (u8 *)dst + 0x24;
        dst->unk_20.unk_02 = mask;
        t = data_ov066_022647c8->lo;
        data_ov066_022647c8->lo = t + 1;
        dst->unk_20.unk_00 = t;
        for (i = 0; i < data_ov066_022647ac->unk_0b; i++) {
            if ((mask & (1 << i)) != 0) {
                func_02116048(rd + sz * i, rp, sz);
                rp += sz;
                total = total + sz;
            }
            if (data_ov066_022647c8->unk_18[i] == src) {
                data_ov066_022647c8->unk_18[i] = src->unk_04;
            }
        }
        src->unk_20.unk_02 = 0;
        dst->unk_0a = data_ov066_022647b4->unk_98;
        dst->unk_0c = 0;
        dst->unk_08 = total;
        func_ov066_02263b90(&dst->unk_20);
        result = 1;
    }
    return result;
}

void func_ov066_02263b90(Unk_ov066_02263320_Pay *p) {
    u16 i;
    u8 *q = p->unk_04;
    for (i = 0; i < data_ov066_022647ac->unk_0b; i++) {
        if ((p->unk_02 & (1 << i)) != 0) {
            if (i == func_ov066_0226238c()) {
                data_ov066_022647c8->unk_03 = data_ov066_022647c8->unk_03 - 1;
            }
            func_ov066_02263c3c(i, q);
            q += data_ov066_022647c8->unk_00 & ~1;
        }
    }
}

}
#pragma thumb reset
