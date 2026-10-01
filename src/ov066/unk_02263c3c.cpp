// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov066_02263c3c_Rec {
    u8 a : 2;
    u8 c : 1;
    u8 b : 1;
    u8 d : 4;
    u8 unk_01;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
    u8 unk_08[1];
};

struct Unk_ov066_02263c3c_Lo {
    u8 lo : 4;
    u8 hi : 4;
};

struct Unk_ov066_02263c3c_Fl {
    u8 f0 : 1;
    u8 f1 : 1;
    u8 f2 : 1;
    u8 f3 : 1;
    u8 f4 : 1;
};

struct Unk_ov066_02263c3c_Node {
    u32 unk_00;
    Unk_ov066_02263c3c_Node *unk_04;
    u8 pad[0x18];
    u8 unk_20;
};

struct Unk_ov066_02263c3c_Q {
    u32 unk_00;
    Unk_ov066_02263c3c_Node *unk_04;
};

struct Unk_ov066_02263c3c_Ent {
    u8 *unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
};

struct Unk_ov066_02263c3c_Link {
    u32 unk_00;
    Unk_ov066_02263c3c_Link *unk_04;
};

struct Unk_ov066_02263c3c_G {
    u8 unk_00;
    Unk_ov066_02263c3c_Lo unk_01;
    s8 unk_02;
    s8 unk_03;
    Unk_ov066_02263c3c_Fl unk_04;
    u8 pad[3];
    u32 unk_08;
    u32 unk_0c;
    Unk_ov066_02263c3c_Link *unk_10;
    u32 pad14;
    Unk_ov066_02263c3c_Q *unk_18;
    u16 unk_1c;
    u16 unk_1e;
    u8 *unk_20;
    u32 unk_24;
    s32 unk_28;
    void (*unk_2c)(u32);
    Unk_ov066_02263c3c_Ent *unk_30;
};

struct Unk_ov066_02263c3c_S {
    u8 pad[4];
    u32 unk_04;
    u8 pad2[3];
    u8 unk_0b;
};

struct Unk_ov066_02263c3c_V {
    u8 pad[0x9c];
    void *unk_9c;
    void *unk_a0;
    void *unk_a4;
    void *unk_a8;
    void *unk_ac;
    void *unk_b0;
    void *unk_b4;
    void (*unk_b8)(u32, u8 *, u32);
    void *unk_bc;
};

struct Unk_ov066_02263c3c_Wrap {
    u8 pad[0x14];
    Unk_ov066_02263c3c_Rec *unk_14;
};

struct Unk_ov066_02263f54_Obj {
    u8 pad[0x24];
    Unk_ov066_02263c3c_Rec unk_24;
};

extern "C" {
extern Unk_ov066_02263c3c_G *data_ov066_022647c8;
extern Unk_ov066_02263c3c_S *data_ov066_022647ac;
extern Unk_ov066_02263c3c_V *data_ov066_022647b4;

u32 func_01ffa2ec(void);
s32 func_01ffa3d4(u32);
void func_02115fb4(void *, s32, u32);
s32 func_02116048(void *, void *, u32);
s32 func_0211fb0c(u32, void *, s32);
s32 func_0211fb68(void *);

void func_ov066_0225f284(void *p);
void *func_ov066_0225f2c8(u32 a, u32 b);
u32 func_ov066_0226238c(void);
void func_ov066_02262464(void);
void func_ov066_02262548(void);
void func_ov066_02261bfc(void);
void func_ov066_02263320(void);
void func_ov066_02263478(void);
void func_ov066_02263810(u32, void *, s32, s32, void *);
void func_ov066_02263878(void);
void func_ov066_022637dc(void);
void func_ov066_022638c4(void);
void func_ov066_022638fc(void);
void func_ov066_0226460c(u8 *in);
void *func_ov066_02264574(u32);
u16 func_ov066_02263f84(Unk_ov066_02263c3c_Rec *rec);
void func_ov066_0226416c(void);
void func_ov066_022640f8(Unk_ov066_02263c3c_Wrap *w);
s32 func_ov066_0226427c(void);
s32 func_ov066_022641dc(u8 *, u32, u32, void (*)(u32));
void func_ov066_022642cc(void);
}

#pragma thumb off
extern "C" {

void func_ov066_02263c3c(u32 idx, u8 *msg) {
    u32 len = 0;
    Unk_ov066_02263c3c_Ent *e = data_ov066_022647c8->unk_30 + idx;
    u8 *p;
    u32 t = ((Unk_ov066_02263c3c_Rec *)msg)->a;
    switch (t) {
    case 0:
        p = msg + 8;
        if ((*(u16 *)(msg + 2) & (1 << func_ov066_0226238c())) != 0) {
            data_ov066_022647c8->unk_1c |= 1 << idx;
            e->unk_0c = len;
            e->unk_08 = (*(u16 *)(msg + 6) << 16) | *(u16 *)(msg + 4);
            len = e->unk_08;
            if (len > (u32)(data_ov066_022647c8->unk_00 - 8)) {
                len = data_ov066_022647c8->unk_00 - 8;
            }
        }
        break;
    case 1:
        p = msg + 2;
        len = msg[1];
        break;
    }
    if ((data_ov066_022647c8->unk_1c & (1 << idx)) == 0) {
        return;
    }
    if (e->unk_0c + len <= e->unk_04) {
        func_02116048(p, e->unk_00 + e->unk_0c, len);
        e->unk_0c += len;
    }
    if (e->unk_08 != e->unk_0c) {
        return;
    }
    data_ov066_022647c8->unk_1c ^= 1 << idx;
    if (data_ov066_022647b4->unk_b8 == NULL) {
        return;
    }
    data_ov066_022647b4->unk_b8(idx, e->unk_00, e->unk_08);
}

void func_ov066_02263d90(void) {
    Unk_ov066_02263c3c_G *g = data_ov066_022647c8;
    s32 sent = 0;
    Unk_ov066_02263c3c_Rec *rec = (Unk_ov066_02263c3c_Rec *)((u8 *)g->unk_10 + 0x20);
    if (g->unk_04.f2 != 0) {
        rec->a = 3;
        sent = 2;
        rec->d = data_ov066_022647c8->unk_01.hi;
    } else if (g->unk_04.f3 != 0) {
        if (g->unk_03 < 2) {
            if (g->unk_04.f4 == 0) {
                if (g->unk_04.f1 == 0) {
                    sent = func_ov066_02263f84(rec);
                    data_ov066_022647c8->unk_03++;
                }
            }
        }
    }
    if (data_ov066_022647c8->unk_18->unk_00 != (u32)data_ov066_022647c8->unk_18->unk_04) {
        if (sent == 0) {
            rec->a = 2;
            sent = 2;
            rec->c = 0;
        }
        rec->b = 1;
        rec->d = data_ov066_022647c8->unk_18->unk_04->unk_20;
        data_ov066_022647c8->unk_18->unk_04 = data_ov066_022647c8->unk_18->unk_04->unk_04;
    } else {
        rec->b = 0;
    }
    if (sent != 0) {
        data_ov066_022647c8->unk_02++;
        func_ov066_02263810(0xd, rec, sent, 1, (void *)func_ov066_022640f8);
        data_ov066_022647c8->unk_10 = data_ov066_022647c8->unk_10->unk_04;
    }
    data_ov066_022647c8->unk_04.f1 = 0;
}

void func_ov066_02263f54(Unk_ov066_02263f54_Obj *o) {
    func_ov066_02263f84(&o->unk_24);
    if (o->unk_24.c == 0) {
        return;
    }
    func_ov066_0226416c();
}

u16 func_ov066_02263f84(Unk_ov066_02263c3c_Rec *rec) {
    u8 *dst;
    u8 *base;
    s32 off;
    u32 rem;
    u32 tot;
    u8 *src;
    u16 ret;
    Unk_ov066_02263c3c_G *g;
    u32 len;
    u32 n;
    off = data_ov066_022647c8->unk_28;
    tot = data_ov066_022647c8->unk_24;
    base = data_ov066_022647c8->unk_20;
    rem = tot - off;
    src = base + off;
    if (off == 0) {
        rec->a = 0;
        dst = (u8 *)rec + 8;
        rec->unk_02 = data_ov066_022647c8->unk_1e;
        rec->unk_04 = data_ov066_022647c8->unk_24;
        rec->unk_06 = data_ov066_022647c8->unk_24 >> 16;
        g = data_ov066_022647c8;
        n = g->unk_24;
        if (n > (u32)(g->unk_00 - 8)) {
            n = g->unk_00 - 8;
        }
        len = (u8)n;
        ret = (len + 9) & ~1;
    } else {
        rec->a = 1;
        dst = (u8 *)rec + 2;
        g = data_ov066_022647c8;
        n = rem;
        if (n > (u32)(g->unk_00 - 2)) {
            n = g->unk_00 - 2;
        }
        len = (u8)n;
        ret = (len + 3) & ~1;
    }
    g->unk_28 += len;
    rec->unk_01 = len;
    rec->c = (data_ov066_022647c8->unk_28 == (s32)data_ov066_022647c8->unk_24) ? 1 : 0;
    data_ov066_022647c8->unk_04.f4 = rec->c;
    func_02116048(src, dst, len);
    return ret;
}

void func_ov066_022640dc(void) {
    data_ov066_022647c8->unk_02--;
}

void func_ov066_022640f8(Unk_ov066_02263c3c_Wrap *w) {
    Unk_ov066_02263c3c_Rec *rec = w->unk_14;
    data_ov066_022647c8->unk_02--;
    if (rec->a != 0) {
        if (rec->a != 1) {
            return;
        }
    }
    if (rec->c == 0) {
        return;
    }
    rec->c = 0;
    func_ov066_0226416c();
}

void func_ov066_0226416c(void) {
    Unk_ov066_02263c3c_G *g = data_ov066_022647c8;
    u32 n = g->unk_24;
    void (*cb)(u32) = g->unk_2c;
    g->unk_04.f3 = 0;
    data_ov066_022647c8->unk_1e = 0;
    data_ov066_022647c8->unk_20 = 0;
    data_ov066_022647c8->unk_24 = 0;
    data_ov066_022647c8->unk_28 = -1;
    data_ov066_022647c8->unk_2c = 0;
    if (cb == NULL) {
        return;
    }
    cb(n);
}

void func_ov066_022641d8(void) {
}

s32 func_ov066_022641dc(u8 *a, u32 b, u32 c, void (*d)(u32)) {
    s32 r = 0;
    u32 irq = func_01ffa2ec();
    if (func_ov066_0226427c() != 0) {
        data_ov066_022647c8->unk_04.f3 = 1;
        data_ov066_022647c8->unk_04.f4 = 0;
        data_ov066_022647c8->unk_20 = a;
        data_ov066_022647c8->unk_24 = b;
        data_ov066_022647c8->unk_28 = r;
        r = 1;
        data_ov066_022647c8->unk_1e = c;
        data_ov066_022647c8->unk_2c = d;
    }
    func_01ffa3d4(irq);
    return r;
}

s32 func_ov066_0226427c(void) {
    Unk_ov066_02263c3c_G *g = data_ov066_022647c8;
    s32 r = 0;
    if (g == NULL) {
        return r;
    }
    s32 t = data_ov066_022647ac->unk_04;
    switch (t) {
    case 10:
    case 11:
        r = g->unk_04.f3;
        if (r == 0) {
            r = 1;
        } else {
            r = 0;
        }
    }
    return r;
}

void func_ov066_022642cc(void) {
    if (data_ov066_022647c8 == NULL) {
        return;
    }
    func_0211fb0c(0xc, 0, 0);
    func_0211fb0c(0xd, 0, 0);
    func_ov066_0225f284(data_ov066_022647c8->unk_18);
    func_ov066_0225f284((void *)data_ov066_022647c8->unk_0c);
    func_ov066_0225f284((void *)data_ov066_022647c8->unk_08);
    func_ov066_0225f284(data_ov066_022647c8->unk_30);
    func_ov066_0225f284(data_ov066_022647c8);
    func_ov066_02262464();
    data_ov066_022647c8 = NULL;
}

void func_ov066_02264378(u8 *msg) {
    u32 n;
    if (data_ov066_022647c8 != NULL) {
        return;
    }
    func_ov066_0226460c(msg);
    func_ov066_02262548();
    data_ov066_022647b4->unk_9c = (void *)func_ov066_02263320;
    data_ov066_022647b4->unk_a0 = (void *)func_ov066_022638fc;
    data_ov066_022647b4->unk_a4 = (void *)func_ov066_022638c4;
    data_ov066_022647b4->unk_ac = (void *)func_ov066_022637dc;
    data_ov066_022647b4->unk_b0 = (void *)func_ov066_022641dc;
    data_ov066_022647b4->unk_b4 = (void *)func_ov066_0226427c;
    data_ov066_022647b4->unk_a8 = (void *)func_ov066_022642cc;
    data_ov066_022647b4->unk_bc = (void *)func_ov066_02263878;
    data_ov066_022647c8 = (Unk_ov066_02263c3c_G *)func_ov066_0225f2c8(0x34, 4);
    n = data_ov066_022647ac->unk_0b << 4;
    data_ov066_022647c8->unk_30 = (Unk_ov066_02263c3c_Ent *)func_ov066_0225f2c8(n, 4);
    func_02115fb4(data_ov066_022647c8->unk_30, 0, n);
    data_ov066_022647c8->unk_08 = (u32)func_ov066_02264574(3);
    data_ov066_022647c8->unk_0c = (u32)func_ov066_02264574(3);
    n = data_ov066_022647ac->unk_0b << 2;
    data_ov066_022647c8->unk_18 = (Unk_ov066_02263c3c_Q *)func_ov066_0225f2c8(n, 4);
    func_02115fb4(data_ov066_022647c8->unk_18, 0, n);
    data_ov066_022647c8->unk_00 = msg[6];
    func_0211fb0c(0xc, (void *)func_ov066_02261bfc, 0);
    func_0211fb0c(0xd, (void *)func_ov066_02263478, 0);
    func_0211fb68((void *)func_ov066_022641d8);
    func_ov066_02263320();
}

}
#pragma thumb reset
