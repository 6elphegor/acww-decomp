// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov067_02260de4_S {
    u8 pad_0000[0x50f0];
    s32 unk_50f0;
    s32 unk_50f4;
};

struct Unk_ov067_02260f58_P {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    s32 unk_10[4][4];
};

struct Unk_ov067_02261048_Ent {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08[8];
};

struct Unk_ov067_02261484_Rec {
    u16 unk_00;
    u16 unk_02;
    u16 unk_04;
    u16 unk_06;
};

struct Unk_ov067_02261484_Msg {
    u8 pad_00[0xa];
    u16 unk_0a;
    u16 unk_0c;
    u16 unk_0e;
    u16 unk_10;
};

struct Unk_ov067_02261484_Ctx {
    u8 pad_0000[0x50e4];
    u16 unk_50e4;
    u16 unk_50e6;
    u8 pad_50e8[0x50f0 - 0x50e8];
    s32 unk_50f0;
    s32 unk_50f4;
    u8 pad_50f8[0x516c - 0x50f8];
    u16 unk_516c;
    u16 unk_516e;
    u8 pad_5170[0x5640 - 0x5170];
};

struct Unk_ov067_02261484_W {
    u8 unk_00;
    u8 unk_01;
    u8 pad_02[0x1a0 - 2];
};

typedef s32 (*Unk_ov067_02261484_Fn)(s32, void *);

struct Unk_ov067_02261484_G {
    u32 unk_00;
    Unk_ov067_02261484_Fn unk_04;
    Unk_ov067_02260f58_P unk_08;
    Unk_ov067_02261484_Rec unk_58[16];
    u8 unk_d8;
    u8 pad_d9[0xe0 - 0xd9];
    u32 unk_e0;
    u32 unk_e4;
    u32 unk_e8;
    u8 pad_ec[0xf0 - 0xec];
    u16 unk_f0;
    u16 unk_f2;
    u16 unk_f4;
    u16 unk_f6;
    u8 pad_f8[0x114 - 0xf8];
    u16 unk_114;
    u16 unk_116;
    u8 pad_118[0x120 - 0x118];
    Unk_ov067_02261484_Ctx unk_120;
    Unk_ov067_02261484_W unk_5760;
    u8 pad_5900[0x5b74 - 0x5900];
};

extern "C" {
extern Unk_ov067_02261484_G *data_ov067_02262268;
extern s32 data_ov067_02262264;
extern u8 data_ov067_02261a18[];

s32 func_01ffa2ec(void);
void func_01ffa3d4(s32);
u64 func_01ffa6b4(void);
void func_02115e64(u32, void *, u32);
void func_02115e78(void *, void *, u32);
void func_02115640(void *);
void func_0206d49c(void);

void func_ov067_0225f3f4(void *, u32);
void func_ov067_0225f3f8(void *, u32);
s32 func_ov067_0225f3fc(void *, void *);
void func_ov067_0225f78c(void *, void *);
s32 func_ov067_0225f894(void *, void *);
void func_ov067_0225f8e0(void *, void *);
void *func_ov067_0225f8ec(void *);
void *func_ov067_0225f8f4(void *, void *, u32, u32);
void func_ov067_0225f970(void *, u32, u32, u32, u32);
void func_ov067_0225f9dc(void *, u32, u32);
void func_ov067_0225fa50(void *);
void func_ov067_0225fa80(void *, u32);
void func_ov067_0225facc(void *, void *, void *, u32);
void func_ov067_0226198c(void);

void func_ov067_02260de4(Unk_ov067_02260de4_S *s, s32 id, u32 arg);
void func_ov067_02260f34(Unk_ov067_02260de4_S *s);
s32 func_ov067_02260f58(Unk_ov067_02260f58_P *p);
void func_ov067_02260ff8(Unk_ov067_02260f58_P *p);
u16 func_ov067_022610f4(void);
s32 func_ov067_02261124(void);
s32 func_ov067_02261148(void);
s32 func_ov067_02261484(u32 cmd, void *arg);
}

#pragma thumb off

extern "C" {

void func_ov067_02260de4(Unk_ov067_02260de4_S *s, s32 id, u32 arg) {
    if (arg == 0) {
        return;
    }
    switch (id) {
    case 15:
        break;
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
        func_ov067_02260f34(s);
        break;
    case 7:
    case 8:
    case 11:
    case 13:
    case 14:
    case 30:
    case 0x26:
        func_ov067_02260f34(s);
        break;
    case 12:
        if (arg == 1 || arg - 0xb <= 1) {
            s->unk_50f0 = 5;
            func_ov067_0225fa80(s, 3);
        } else {
            func_ov067_02260f34(s);
        }
        break;
    case 0x80:
        func_ov067_02260f34(s);
        break;
    case 0x81:
        break;
    }
}

void func_ov067_02260f34(Unk_ov067_02260de4_S *s) {
    if (s->unk_50f0 == 1) {
        s->unk_50f0 = s->unk_50f4;
    }
    func_ov067_0225fa80(s, 0);
}

s32 func_ov067_02260f58(Unk_ov067_02260f58_P *p) {
    p->unk_00++;
    if (p->unk_00 >= 4) {
        p->unk_00 = 0;
        p->unk_04++;
        if (p->unk_04 >= 4) {
            p->unk_04 = 0;
        }
        if (p->unk_04 == p->unk_08) {
            p->unk_08 = (u32)func_01ffa6b4() & 3;
            p->unk_04 = p->unk_08;
        }
    }
    if (p->unk_10[p->unk_04][p->unk_00] != 0) {
        if (p->unk_0c == 0) {
            return 1;
        }
    }
    return 0;
}

void func_ov067_02260ff8(Unk_ov067_02260f58_P *p) {
    p->unk_00 = (u32)func_01ffa6b4() & 3;
    p->unk_04 = (u32)(func_01ffa6b4() >> 2) & 3;
    p->unk_08 = 0;
    p->unk_0c = 0;
    func_02115e78(data_ov067_02261a18, p->unk_10, 0x40);
}

void func_ov067_02261048(u32 a0, u32 a1, u32 a2, u32 a3, u32 a4, u32 a5) {
    s32 ie = func_01ffa2ec();
    Unk_ov067_02261048_Ent *e = (Unk_ov067_02261048_Ent *)func_ov067_0225f8f4(&data_ov067_02262268->unk_5760, 0, a0, 1);
    if (e == NULL) {
        e = (Unk_ov067_02261048_Ent *)func_ov067_0225f8f4(&data_ov067_02262268->unk_5760, 0, 0, 1);
        if (e == NULL) {
            func_0206d49c();
        } else {
            e->unk_00 = a0;
            e->unk_04 = a1;
            e->unk_08[0] = a2;
            e->unk_08[1] = a3;
            e->unk_08[4] = a4;
            e->unk_08[5] = a5;
        }
    }
    func_01ffa3d4(ie);
}

u16 func_ov067_022610f4(void) {
    u16 r = data_ov067_02262268->unk_120.unk_50e6;
    if (r != 0) {
        r = r | (1 << data_ov067_02262268->unk_120.unk_50e4);
    }
    return r;
}

s32 func_ov067_02261124(void) {
    if (data_ov067_02262268->unk_120.unk_50f0 == 4) {
        return 1;
    }
    return 0;
}

s32 func_ov067_02261148(void) {
    return data_ov067_02262264;
}

void func_ov067_02261158(void) {
    s32 ie = func_01ffa2ec();
    switch (func_ov067_02261148()) {
    case 0:
    case 1:
        break;
    case 2:
    case 3: {
        s32 ie2 = func_01ffa2ec();
        data_ov067_02262264 = 1;
        Unk_ov067_02261484_Fn cb = data_ov067_02262268->unk_04;
        if (cb != NULL) {
            cb(1, 0);
        }
        func_01ffa3d4(ie2);
        if (func_ov067_022610f4() == 0) {
            func_ov067_0225fa80(&data_ov067_02262268->unk_120, 0);
        }
        break;
    }
    }
    func_01ffa3d4(ie);
}

void func_ov067_022611fc(void) {
    s32 ie = func_01ffa2ec();
    if (func_ov067_02261148() == 3) {
        func_ov067_0225fa80(&data_ov067_02262268->unk_120, 2);
    }
    func_01ffa3d4(ie);
}

void func_ov067_0226123c(void) {
    s32 ie = func_01ffa2ec();
    if (func_ov067_02261148() == 2) {
        func_ov067_0225fa80(&data_ov067_02262268->unk_120, 3);
        s32 ie2 = func_01ffa2ec();
        data_ov067_02262264 = 3;
        Unk_ov067_02261484_Fn cb = data_ov067_02262268->unk_04;
        if (cb != NULL) {
            cb(3, 0);
        }
        func_01ffa3d4(ie2);
    }
    func_01ffa3d4(ie);
}

s32 func_ov067_022612c0(u32 a, u32 b, u32 c) {
    s32 r = 0;
    if (c > 1 || a < 0x14 || a > 0x200 || b < 0x14 || b > 0x200) {
    } else {
        s32 t = 0x14a + (a + 0x26) * 4 + c * ((b + 0x20) * 4 + 0x70);
        if (t < 0x15e0) {
            r = 1;
            data_ov067_02262268->unk_114 = a;
            data_ov067_02262268->unk_116 = b;
        }
    }
    return r;
}

void func_ov067_02261350(u32 a, u32 b, u32 c) {
    volatile u32 z;
    s32 ie = func_01ffa2ec();
    if (func_ov067_02261148() == 0) {
        if ((a & 0x1f) != 0) {
            func_0206d49c();
        }
        z = 0;
        data_ov067_02262268 = (Unk_ov067_02261484_G *)a;
        func_02115e64(z, (void *)a, 0x5b74);
        data_ov067_02262268->unk_00 = c;
        data_ov067_02262268->unk_04 = (Unk_ov067_02261484_Fn)b;
        func_ov067_02260ff8(&data_ov067_02262268->unk_08);
        func_ov067_0225fa50(&data_ov067_02262268->unk_5760);
        data_ov067_02262268->unk_f0 = 1;
        data_ov067_02262268->unk_114 = 0x200;
        data_ov067_02262268->unk_116 = 0x200;
        data_ov067_02262268->unk_f6 = 1;
        {
            Unk_ov067_02261484_G *g = data_ov067_02262268;
            func_ov067_0225facc(&g->unk_120, &g->unk_e0, (void *)func_ov067_02261484, g->unk_00);
        }
        s32 ie2 = func_01ffa2ec();
        data_ov067_02262264 = 2;
        Unk_ov067_02261484_Fn cb = data_ov067_02262268->unk_04;
        if (cb != NULL) {
            cb(2, 0);
        }
        func_01ffa3d4(ie2);
    }
    func_01ffa3d4(ie);
}

s32 func_ov067_02261484(u32 cmd, void *arg) {
    s32 ret = 0;
    Unk_ov067_02261484_Msg *m = (Unk_ov067_02261484_Msg *)arg;
    switch (cmd) {
    case 5:
        if (func_ov067_02261148() == 3) {
            func_ov067_0225f8e0(&data_ov067_02262268->unk_5760, arg);
            if (data_ov067_02262268->unk_120.unk_50e6 == 0) {
                data_ov067_02262268->unk_d8++;
                if (data_ov067_02262268->unk_d8 > 10) {
                    data_ov067_02262268->unk_d8 = ret;
                    if (func_ov067_02260f58(&data_ov067_02262268->unk_08) == 0) {
                        func_ov067_0225fa80(&data_ov067_02262268->unk_120, 5);
                    }
                }
            }
        }
        break;
    case 6:
        ret = func_ov067_0225f894(&data_ov067_02262268->unk_5760, arg);
        if (ret != 0) {
            u32 *e = (u32 *)func_ov067_0225f8ec(&data_ov067_02262268->unk_5760);
            data_ov067_02262268->unk_e8 = e[0];
        }
        break;
    case 0: {
        Unk_ov067_02261484_G *g = data_ov067_02262268;
        s32 ie = func_01ffa2ec();
        data_ov067_02262264 = 0;
        Unk_ov067_02261484_Fn cb = data_ov067_02262268->unk_04;
        if (cb != NULL) {
            cb(0, g);
        }
        func_01ffa3d4(ie);
        break;
    }
    case 2: {
        s32 ie = func_01ffa2ec();
        data_ov067_02262264 = 2;
        Unk_ov067_02261484_Fn cb = data_ov067_02262268->unk_04;
        if (cb != NULL) {
            cb(2, 0);
        }
        func_01ffa3d4(ie);
        break;
    }
    case 1:
        if (func_ov067_02261148() != 3) {
            func_ov067_0225fa80(&data_ov067_02262268->unk_120, 0);
        } else if (func_ov067_02260f58(&data_ov067_02262268->unk_08) != 0) {
            func_ov067_0226198c();
            func_ov067_0225fa80(&data_ov067_02262268->unk_120, 4);
        } else {
            func_ov067_0225fa80(&data_ov067_02262268->unk_120, 5);
        }
        break;
    case 3:
        if (func_ov067_02261148() != 3) {
            func_ov067_0225fa80(&data_ov067_02262268->unk_120, 0);
        }
        data_ov067_02262268->unk_d8 = 0;
        {
            Unk_ov067_02261484_G *g = data_ov067_02262268;
            u16 i = g->unk_120.unk_50e4;
            Unk_ov067_02261484_Rec *r = &g->unk_58[i];
            r->unk_00 = i;
            func_02115640(&r->unk_02);
        }
        break;
    case 4:
        if (func_ov067_02261148() != 3) {
            func_ov067_0225fa80(&data_ov067_02262268->unk_120, 0);
        }
        {
            Unk_ov067_02261484_G *g = data_ov067_02262268;
            u16 i = g->unk_120.unk_50e4;
            Unk_ov067_02261484_Rec *r = &g->unk_58[i];
            r->unk_00 = i;
            func_02115640(&r->unk_02);
        }
        break;
    case 9: {
        u32 *e = (u32 *)func_ov067_0225f8ec(&data_ov067_02262268->unk_5760);
        s32 f = func_ov067_02261124();
        u32 x, y, idx;
        if (f != 0) {
            x = data_ov067_02262268->unk_114;
        } else {
            x = data_ov067_02262268->unk_120.unk_516c;
        }
        if (f != 0) {
            y = data_ov067_02262268->unk_116;
        } else {
            y = data_ov067_02262268->unk_120.unk_516e;
        }
        idx = (u16)(f != 0 ? m->unk_10 : 0);
        Unk_ov067_02261484_G *g = data_ov067_02262268;
        Unk_ov067_02261484_Rec *tbl = g->unk_58;
        u32 off = idx * 8;
        Unk_ov067_02261484_Rec *r = (Unk_ov067_02261484_Rec *)((u8 *)tbl + idx * 8);
        func_ov067_0225f9dc(&g->unk_5760, x, y);
        *(u16 *)((u8 *)tbl + off) = idx;
        if (f != 0) {
            r->unk_02 = m->unk_0a;
            r->unk_04 = m->unk_0c;
            r->unk_06 = m->unk_0e;
        } else {
            u16 *q = (u16 *)((u8 *)data_ov067_02262268 + 0x5240);
            r->unk_02 = q[2];
            r->unk_04 = q[3];
            r->unk_06 = q[4];
        }
        if (func_ov067_02261148() == 3 && e != NULL) {
            func_ov067_0225f970(&data_ov067_02262268->unk_5760, e[2], e[3], e[6], e[7]);
        } else {
            data_ov067_02262268->unk_5760.unk_01 = 5;
        }
        func_ov067_0225f3f8(&data_ov067_02262268->unk_5760, (u16)(1 << idx));
        if (data_ov067_02262268->unk_5760.unk_01 != 5) {
            Unk_ov067_02261484_Fn cb = data_ov067_02262268->unk_04;
            if (cb != NULL) {
                cb(4, r);
            }
        }
        break;
    }
    case 10:
        func_ov067_0225f3f4(&data_ov067_02262268->unk_5760, (u16)(u32)arg);
        if (func_ov067_022610f4() == 0) {
            if (func_ov067_02261148() != 3) {
                if (func_ov067_02261148() != 1) {
                    if (func_ov067_0225f8ec(&data_ov067_02262268->unk_5760) != NULL) {
                        break;
                    }
                }
            }
            data_ov067_02262268->unk_d8 = 0;
            func_ov067_0225fa80(&data_ov067_02262268->unk_120, 3);
        }
        break;
    case 7:
        func_ov067_0225f78c(&data_ov067_02262268->unk_5760, arg);
        break;
    case 8:
        ret = func_ov067_0225f3fc(&data_ov067_02262268->unk_5760, arg);
        break;
    default:
        func_0206d49c();
        break;
    }
    return ret;
}

}

#pragma thumb reset
