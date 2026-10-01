// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0222df00_Rec {
    u8 name[6];
    u8 flag;
};

struct Unk_ov001_0222a348_Blk {
    u32 v[17];
};

struct Unk_ov001_0222a428_Rec {
    u16 a;
    u16 b;
};

struct Unk_ov001_0221fd14_Info {
    u32 unk_00;
    u8 unk_04[0x14];
    u16 unk_18;
    u8 unk_1a[0x3a];
};

struct Unk_ov001_0221f7f4_List {
    u16 unk_00;
    u16 unk_02;
    u8 pad_04[6];
    u16 unk_0a_dummy;
    u16 count;
    u32 items_pad;
};

struct Unk_ov001_0222df00_Buf {
    u16 status;
    u8 rest[0x3c];
};

struct Unk_ov001_0221f7f4_Entry {
    u8 pad_00[4];
    u8 unk_04[8];
    u8 unk_0c[8];
    u8 unk_14;
    u8 unk_15;
};

struct Unk_ov001_0221f7f4_Arg {
    u8 pad_00[0xe];
    u16 count;
    Unk_ov001_0221f7f4_Entry *items[1];
};

struct Unk_ov001_0221faf0_Msg {
    u16 unk_00;
    u16 unk_02;
    u8 pad_04[4];
    u16 unk_08;
};

struct Unk_ov001_0222df00 {
    u8 pad_0000[0xf00];
    u8 unk_0f00[0x400];
    Unk_ov001_0222df00_Rec unk_1300[16];
    void (*unk_1370)(s32);
    u8 unk_1374[8];
    u16 unk_137c;
    u8 pad_137e[0x1388 - 0x137e];
    u8 unk_1388[8];
    u8 unk_1390;
    u8 unk_1391;
    u8 pad_1392[2];
    u8 unk_1394[0x24];
    u8 pad_13b8[0x1b74 - 0x13b8];
    u64 unk_1b74;
    u32 unk_1b7c;
    u8 unk_1b80;
    u8 unk_1b81;
    u8 unk_1b82;
};

struct Unk_ov001_0222df04 {
    void *unk_00;
    void *unk_04;
    void *unk_08[2];
    void *unk_10;
    u8 pad_14[6];
    s8 unk_1a;
    u8 pad_1b;
    u8 unk_1c;
    u8 unk_1d;
    u8 unk_1e;
};

extern "C" {
extern Unk_ov001_0222df00 *data_ov001_0222df00;
extern Unk_ov001_0222df04 *data_ov001_0222df04;
extern u8 data_ov001_0222a33c[];
extern u8 data_ov001_0222a334[];
extern u8 data_ov001_0222a348[];
extern u8 data_ov001_0222a398[];
extern u8 data_ov001_0222a3c0[];
extern u8 data_ov001_0222a3a8[];
extern u16 data_ov001_0222a428[][4];
extern u16 data_ov001_0222a42a[][4];

void func_02114594(void *, s32);
s32 func_02128930(void *, void *, s32);
void func_02116048(void *, void *, s32);
void func_0211faa0(void *);
s32 func_021202b4(void *);
s32 func_0212026c(void *);
s32 func_021202f4(void *, void *, s32);
s32 func_0211fdd4(void *, void *);
u64 func_01ffa6b4();
u32 func_0211f5f4();
void func_021155c4(void *);
void func_02110a1c(u32, s32);
void func_0206d49c(void *);
void func_ov001_02225d58(void *);
void *func_ov001_02225db0(s32, s32);
void func_ov001_02226fd0(s32, u32);
void func_ov001_02226fdc(s32, s32);
void func_ov001_02226ffc(s32, void *);
u32 func_ov001_02227094(s32, void *, s32, s32);
void func_ov001_022247e0(void *);
void func_ov001_02225718(void *);
void func_ov001_0222449c(void *, s32, s32 *, s32 *);
void func_ov001_0222020c(s32);
void *func_ov001_022247d4(void *, s32);
void func_ov001_02224b9c(s32, s32, void *);
void func_ov001_02224558(void *, s32, s32, s32);
void func_ov001_022244d8(void *, s32, s32);
void func_ov001_0221f6a0();
void func_ov001_0221feac(s32);
void func_ov001_0221ff64(s32);
void func_ov001_0221ffc8(s32);
s32 func_ov001_0221fcd0();
void func_ov001_0221f944(void *);
void func_ov001_0221faf0(void *);

#pragma thumb off

void func_ov001_0221f7f4(void *arg0)
{
    // DECL_BEGIN
    Unk_ov001_0221f7f4_Arg *a = (Unk_ov001_0221f7f4_Arg *)arg0;
    Unk_ov001_0221f7f4_Entry *e;
    Unk_ov001_0222df00 *g = data_ov001_0222df00;
    s32 i;
    s32 j;
    s32 n;
    Unk_ov001_0222df00_Rec *p;
    Unk_ov001_0222df00 *h;
    // DECL_END
    if (g->unk_1b81 != 0) {
        if (g->unk_1370 != NULL) {
            g->unk_1370(g->unk_1b81);
        }
        return;
    }
    func_02114594(g->unk_0f00, 0x400);
    n = a->count;
    i = 0;
    if (n <= 0) {
        return;
    }
    h = data_ov001_0222df00;
    do {
        e = a->items[i];
        if (func_02128930(e->unk_0c, data_ov001_0222a33c, 8) == 0 && (e->unk_15 & 1) != 0) {
            for (j = 0, p = h->unk_1300; j < 16; j++, p++) {
                if (func_02128930(e->unk_04, p->name, 6) == 0) {
                    if (h->unk_1300[j].flag != 0) {
                        break;
                    }
                    if (h->unk_1370 == NULL) {
                        h->unk_1b81 = 1;
                        return;
                    }
                    h->unk_1370(1);
                    return;
                }
            }
        }
        i++;
    } while (i < n);
}

void func_ov001_0221f944(void *arg0)
{
    // DECL_BEGIN
    s32 i;
    Unk_ov001_0221f7f4_Entry *e;
    s32 j;
    Unk_ov001_0221f7f4_Arg *a = (Unk_ov001_0221f7f4_Arg *)arg0;
    Unk_ov001_0222df00_Rec *p;
    Unk_ov001_0222df00 *g;
    // DECL_END
    for (i = 0; i < a->count; i++) {
        e = a->items[i];
        func_02114594(e, 0xc0);
        if (func_02128930(e->unk_0c, data_ov001_0222a33c, 8) == 0) {
            g = data_ov001_0222df00;
            for (j = 0, p = g->unk_1300; j < 16; p++, j++) {
                if (func_02128930(e->unk_04, p->name, 6) == 0) {
                    if (g->unk_1300[j].flag != 0) {
                        goto next;
                    }
                    if ((e->unk_15 & 1) == 0) {
                        goto next;
                    }
                    if (g->unk_1370 == NULL) {
                        return;
                    }
                    g->unk_1370(1);
                    return;
                }
            }
            for (j = 0; j < 16; j++) {
                if (func_02128930(g->unk_1300[j].name, data_ov001_0222a334, 6) == 0) {
                    func_02116048(e->unk_04, g->unk_1300[j].name, 6);
                    data_ov001_0222df00->unk_1300[j].flag = (e->unk_15 & 1) ? 1 : 0;
                    break;
                }
            }
        }
    next:;
    }
}

void func_ov001_0221faf0(void *arg0)
{
    Unk_ov001_0221faf0_Msg *m = (Unk_ov001_0221faf0_Msg *)arg0;
    Unk_ov001_0222df00 *g;
    if (m->unk_02 != 0) {
        return;
    }
    g = data_ov001_0222df00;
    if (g->unk_1b80 != 0) {
        if (m->unk_00 == 2) {
            g->unk_1b80 = 2;
        }
        return;
    }
    if (m->unk_00 != 0x26) {
        return;
    }
    switch (m->unk_08) {
    case 5:
        if (g->unk_1b82 != 0) {
            func_ov001_0221f7f4(m);
        } else {
            func_ov001_0221f944(m);
        }
        func_ov001_0221fcd0();
        break;
    case 4:
        func_ov001_0221fcd0();
        break;
    default:
        func_0206d49c(m);
        break;
    }
}

void func_ov001_0221fbb4(void (*cb)(s32))
{
    data_ov001_0222df00->unk_1370 = cb;
}

s32 func_ov001_0221fbcc()
{
    Unk_ov001_0222df00 *g = data_ov001_0222df00;
    g->unk_1b80 = 1;
    func_0211faa0((u8 *)data_ov001_0222df00 + 0x13b8);
    if (((Unk_ov001_0222df00_Buf *)((u8 *)data_ov001_0222df00 + 0x13b8))->status != 2) {
        if (func_021202b4((void *)func_ov001_0221faf0) != 2) {
            return 0;
        }
        do {
            func_0211faa0((u8 *)data_ov001_0222df00 + 0x13b8);
        } while (((Unk_ov001_0222df00_Buf *)((u8 *)data_ov001_0222df00 + 0x13b8))->status != 2);
    }
    if (func_0212026c((void *)func_ov001_0221faf0) != 2) {
        return 0;
    }
    Unk_ov001_0222df00 *h = data_ov001_0222df00;
    if (h->unk_1b7c != 0) {
        func_ov001_02226fd0(0, h->unk_1b7c);
    }
    volatile Unk_ov001_0222df00 *v = data_ov001_0222df00;
    while (v->unk_1b80 != 2) {
    }
    func_ov001_02225d58(&data_ov001_0222df00);
    return 1;
}

s32 func_ov001_0221fcd0()
{
    return func_0211fdd4((void *)func_ov001_0221faf0, (u8 *)data_ov001_0222df00 + 0x1374) == 2 ? 1 : 0;
}

s32 func_ov001_0221fd14(void (*cb)(s32))
{
    Unk_ov001_0222df00 *g;
    Unk_ov001_0221fd14_Info info;
    g = (Unk_ov001_0222df00 *)func_ov001_02225db0(0x1ba0, 0x20);
    data_ov001_0222df00 = g;
    g->unk_1370 = cb;
    g = data_ov001_0222df00;
    g->unk_1b74 = func_01ffa6b4();
    if (func_021202f4(g, (void *)func_ov001_0221faf0, 3) == 2) {
        do {
            func_0211faa0((u8 *)data_ov001_0222df00 + 0x13b8);
            g = data_ov001_0222df00;
        } while (((Unk_ov001_0222df00_Buf *)((u8 *)g + 0x13b8))->status != 2);
        *(Unk_ov001_0222a348_Blk *)g->unk_1374 = *(Unk_ov001_0222a348_Blk *)data_ov001_0222a348;
        *(void **)g->unk_1374 = g->unk_0f00;
        u16 v = func_0211f5f4();
        data_ov001_0222df00->unk_137c = v;
        func_021155c4(&info);
        func_02116048(data_ov001_0222a33c, data_ov001_0222df00->unk_1388, 8);
        data_ov001_0222df00->unk_1391 = 1;
        func_02116048(info.unk_04, data_ov001_0222df00->unk_1394, info.unk_18 * 2);
        if (func_ov001_0221fcd0() != 0) {
            data_ov001_0222df00->unk_1b7c = func_ov001_02227094(0, (void *)func_ov001_0221f6a0, 0, 0x78);
            return 1;
        }
    }
    func_ov001_02225d58(&data_ov001_0222df00);
    return 0;
}

void func_ov001_0221feac(s32 a)
{
    s32 i;
    *(volatile u32 *)0x4000000 &= ~0xe000;
    func_ov001_022247e0(data_ov001_0222df04->unk_00);
    func_ov001_022247e0(data_ov001_0222df04->unk_04);
    for (i = 0; i < data_ov001_0222a398[data_ov001_0222df04->unk_1c]; i++) {
        if (data_ov001_0222df04->unk_08[i] != NULL) {
            func_ov001_022247e0(data_ov001_0222df04->unk_08[i]);
        }
    }
    func_ov001_02225718(data_ov001_0222df04->unk_10);
    func_ov001_02226fdc(1, a);
    func_ov001_02225d58(&data_ov001_0222df04);
}

void func_ov001_0221ff64(s32 a)
{
    data_ov001_0222df04->unk_1a++;
    func_02110a1c(0x4000050, data_ov001_0222df04->unk_1a);
    if (data_ov001_0222df04->unk_1a < 0) {
        return;
    }
    func_ov001_02226ffc(a, (void *)func_ov001_0221feac);
}

void func_ov001_0221ffc8(s32 a)
{
    s32 x, y;
    func_ov001_0222449c(data_ov001_0222df04->unk_00, 0, &x, &y);
    y += 0xc;
    func_ov001_0222020c(y);
    if (y < 0xc0) {
        return;
    }
    if (data_ov001_0222df04->unk_1e != 0) {
        func_ov001_02226ffc(a, (void *)func_ov001_0221ff64);
    } else {
        func_ov001_02226ffc(a, (void *)func_ov001_0221feac);
    }
}

void func_ov001_02220064(s32 a)
{
    data_ov001_0222df04->unk_1d++;
    if (data_ov001_0222df04->unk_1d < 8) {
        return;
    }
    func_ov001_02226ffc(a, (void *)func_ov001_0221ffc8);
}

void func_ov001_022200b4(s32 i)
{
    void *o = func_ov001_022247d4(data_ov001_0222df04->unk_08[i], 0);
    func_ov001_02224b9c(0, (data_ov001_0222a3c0 + data_ov001_0222df04->unk_1c * 2)[i] + 1, o);
    u32 t = data_ov001_0222df04->unk_1c;
    void *p = data_ov001_0222df04->unk_08[i];
    u32 off = (data_ov001_0222a3a8 + t * 2)[i] << 2;
    func_ov001_02224558(p, -1, *(u16 *)(off + (u32)data_ov001_0222a428[t]), *(u16 *)(off + (u32)data_ov001_0222a42a[t]));
    func_ov001_022244d8(data_ov001_0222df04->unk_08[i], -1, 0);
}

#pragma thumb reset
}
