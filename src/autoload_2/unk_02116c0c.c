// mwcc-flags: -nothumb -O4,p
// NitroSDK sound command layer (SND_Command*) + PXI send: autoload_2 0x02116c0c-0x02117e8c. ARM code, mwcc 1.2/base, -O4,p.
// func_02117f20 (PXI_Init) is outside this unit; it is only called (tail call) from func_02117dcc.
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef signed short s16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct Cmd {
    struct Cmd *next;
    u32 id;
    u32 arg[4];
} Cmd;

typedef struct SndWork {
    u32 f0;
    u32 f4;
    u16 f8;
    u16 fa;
    u8 pad[0x14];
    struct {
        s16 v[16];
        u32 w;
    } t[16];
    s16 u[16];
} SndWork;

typedef struct Slot {
    void *a;
    struct Slot *next;
} Slot;

typedef struct Obj {
    u8 pad[0x18];
    Slot s[4];
} Obj;

typedef struct Pair {
    u32 a;
    u32 b;
} Pair;

typedef struct Bank {
    u8 pad[0x38];
    u32 count;
    u32 ent[1];
} Bank;

typedef struct H5 {
    u16 h[5];
} H5;

typedef struct H6 {
    u16 h[6];
} H6;

typedef union InstOut {
    u8 type;
    u16 h[6];
} InstOut;

typedef struct TrackOut {
    u16 a;
    u8 b;
    u8 c;
    s8 d;
    u8 e;
    u8 f;
    s8 g;
    u8 pad8;
    u8 cnt;
    u8 list[1];
} TrackOut;

typedef struct ChOut {
    u32 bit0 : 1;
    u32 bit1 : 1;
    u16 mask;
    u16 h6;
    u8 b8;
} ChOut;

typedef struct ChRec {
    u8 f0_0 : 1;
    u8 f0_1 : 1;
    u8 f0_2 : 1;
    u8 pad1[4];
    u8 b5;
    u8 pad6[2];
    u8 x[16];
    u16 h24;
    u8 pad26[10];
} ChRec;

typedef struct SlotEnt {
    u32 a;
    u32 b;
    u8 cnt;
} SlotEnt;

extern Cmd data_021fd260[256];
extern Cmd *data_021fcf88;
extern u32 data_021fcf8c;
extern Cmd *data_021fcf90;
extern Cmd *data_021fcf94;
extern Cmd *data_021fcf98;
extern s32 data_021fcf9c;
extern s32 data_021fcfa0;
extern s32 data_021fcfa4;
extern u32 data_021fcfa8;
extern Cmd *data_021fcfac[];
extern u32 data_021fcf6c;
extern u32 data_021fcf70;
extern SndWork data_021fcfe0;
extern SndWork *data_021fea60;
extern u8 data_0213a0b4[];
extern SlotEnt data_027e032c[];

extern u32 func_01ffa2ec(void);
extern u32 func_01ffa3cc(void);
extern void func_01ffa3d4(u32);
extern void func_01ffa494(u32);
extern void func_01ffa624(void);
extern void func_02114410(void *);
extern void func_02114480(void *);
extern void func_0211450c(void *);
extern void func_02114594(void *, u32);
extern void func_021145b0(void *, u32);
extern void func_021145cc(void *, u32);
extern void func_02116714(u32, u32, u32, u32);
extern void func_0211665c(u32, u32, u32, u32, u32);

typedef union PxiMsg {
    u32 raw;
    struct {
        u32 tag : 5;
        u32 err : 1;
        u32 data : 26;
    } b;
} PxiMsg;

#define reg_IPCSYNC (*(volatile u16 *)0x04000180)
#define reg_IPCFIFOCNT (*(volatile u16 *)0x04000184)
#define reg_IPCFIFOSEND (*(volatile u32 *)0x04000188)

s32 func_02117dd8(u32 tag, u32 data, u32 err);
void func_02116dc4(void);
Cmd *func_02116d6c(void);
u32 func_02116d24(void);
u32 func_02116e64(void);
u32 func_02116e84(void);
u32 func_02116ec4(void);
u32 func_02116f04(u32 t);
Cmd *func_021172cc(u32 flags);
u32 func_02117028(u32 flags);
void func_021171e8(Cmd *c);
Cmd *func_02117230(u32 flags);
void func_02117400(void);
void func_02117568(void);
void func_02117598(SndWork *w);
u32 func_02117618(void);
void func_02116cb0(void);
void func_02116cc4(void);
void func_02116df8(void);
extern void func_02117f20(void);
extern void func_02117eb4(u32 tag, void (*cb)(void));
extern u32 func_02117e8c(u32 tag, u32 proc);

// PXI_SendWordByFifo
s32 func_02117dd8(u32 tag, u32 data, u32 err) {
    PxiMsg m;
    u32 e;
    m.b.tag = tag;
    m.b.err = err;
    m.b.data = data;
    if (reg_IPCFIFOCNT & 0x4000) {
        reg_IPCFIFOCNT |= 0xc000;
        return -1;
    }
    e = func_01ffa2ec();
    if (reg_IPCFIFOCNT & 2) {
        func_01ffa3d4(e);
        return -2;
    }
    reg_IPCFIFOSEND = m.raw;
    func_01ffa3d4(e);
    return 0;
}

// tail call to PXI_Init (func_02117f20)
void func_02117dcc(void) {
    func_02117f20();
}

// SND_... slot attach
void func_02117cf0(Obj *p, s32 i, Obj *item) {
    Obj *old;
    func_02116cc4();
    old = p->s[i].a;
    if (old != 0) {
        Slot *q;
        if (item == old) {
            func_02116cb0();
            return;
        }
        q = old->s[0].a;
        if (&p->s[i] == q) {
            old->s[0].a = p->s[i].next;
            func_021145b0(p->s[i].a, 0x3c);
        } else {
            if (q != 0) {
                Slot *n;
                do {
                    n = q->next;
                    if (&p->s[i] == n) {
                        break;
                    }
                    q = n;
                } while (n != 0);
            }
            q->next = p->s[i].next;
            func_021145b0(q, 8);
        }
    }
    {
        Slot *prev = item->s[0].a;
        item->s[0].a = &p->s[i];
        p->s[i].next = prev;
        p->s[i].a = item;
    }
    func_02116cb0();
    func_021145b0(p, 0x3c);
    func_021145b0(item, 0x3c);
}

// SND_... slot detach all
void func_02117c50(Obj *p) {
    s32 i;
    func_02116cc4();
    for (i = 0; i < 4; i++) {
        Obj *o = p->s[i].a;
        if (o != 0) {
            Slot *q = o->s[0].a;
            if (&p->s[i] == q) {
                o->s[0].a = p->s[i].next;
                func_021145b0(o, 0x3c);
            } else {
                if (q != 0) {
                    Slot *n;
                    do {
                        n = q->next;
                        if (&p->s[i] == n) {
                            break;
                        }
                        q = n;
                    } while (n != 0);
                }
                q->next = p->s[i].next;
                func_021145b0(q, 8);
            }
        }
    }
    func_02116cb0();
}

void func_02117c04(Obj *p) {
    Slot *n;
    func_02116cc4();
    n = p->s[0].a;
    if (n != 0) {
        do {
            Slot *nx = n->next;
            n->a = 0;
            n->next = 0;
            func_021145b0(n, 8);
            n = nx;
        } while (n != 0);
    }
    func_02116cb0();
}

void func_02117be4(Pair *p) {
    Pair t;
    t.a = 0;
    t.b = 0;
    *p = t;
}

u32 func_02117a0c(Bank *b, InstOut *out, u32 *idx) {
    while (idx[0] < b->count) {
        u32 e;
        e = b->ent[idx[0]];
        out->type = e;
        switch (out->type) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: {
            u16 *p = (u16 *)((u8 *)b + (e >> 8));
            *(H5 *)&out->h[1] = *(H5 *)p;
            idx[0]++;
            return 1;
        }
        case 16: {
            u8 *p = (u8 *)b + (e >> 8);
            while (idx[1] < (u32)(p[1] - p[0] + 1)) {
                u16 *q = (u16 *)(p + idx[1] * 12);
                *(H6 *)out = *(H6 *)(q + 1);
                idx[1]++;
                return 1;
            }
            break;
        }
        case 17: {
            u8 *p = (u8 *)b + (e >> 8);
            while (idx[1] < 8) {
                if (p[idx[1]] == 0) {
                    break;
                }
                {
                    u16 *q = (u16 *)(p + idx[1] * 12);
                    *(H6 *)out = *(H6 *)(q + 4);
                    idx[1]++;
                    return 1;
                }
            }
            break;
        }
        }
        idx[0]++;
        idx[1] = 0;
    }
    return 0;
}

u32 func_02117a04(Bank *b) {
    return b->count;
}

void func_021179cc(u8 *base, s32 i, u32 v) {
    func_02116cc4();
    *(u32 *)(base + i * 4 + 0x3c) = v;
    func_021145b0(base + 0x3c + i * 4, 4);
    func_02116cb0();
}

void *func_02117984(u8 *base, s32 i) {
    u32 off;
    u8 *r;
    func_02116cc4();
    off = *(u32 *)(base + i * 4 + 0x3c);
    if (off != 0) {
        r = (u8 *)off;
        if (off < 0x2000000) {
            r = base + off;
        }
    } else {
        r = 0;
    }
    func_02116cb0();
    return r;
}

u16 func_02117910(s32 x) {
    u32 r;
    u32 v;
    if (x < -723) {
        x = -723;
    } else if (x > 0) {
        x = 0;
    }
    v = data_0213a0b4[x + 723];
    if (x < -240) {
        r = 3;
    } else if (x < -120) {
        r = 2;
    } else if (x < -60) {
        r = 1;
    } else {
        r = 0;
    }
    return v | (r << 8);
}

u32 func_021178d8(void) {
    func_02114594((u8 *)data_021fea60 + 4, 4);
    return data_021fea60->f4;
}

s32 func_02117884(s32 a, s32 b) {
    func_02114594(&data_021fea60->t[a].v[b], 2);
    return data_021fea60->t[a].v[b];
}

s32 func_02117844(s32 idx) {
    func_02114594(&data_021fea60->u[idx], 2);
    return data_021fea60->u[idx];
}

u32 func_0211777c(u8 *w, s32 ch, ChOut *out) {
    ChRec *p;
    s32 i;
    if (ch < 0 || ch > 15) {
        return 0;
    }
    p = (ChRec *)(w + 0x540) + ch;
    out->mask = 0;
    for (i = 0; i < 16; i++) {
        if (p->x[i] != 0xff) {
            out->mask |= 1 << i;
        }
    }
    out->bit0 = p->f0_0;
    out->bit1 = p->f0_2;
    out->h6 = p->h24;
    out->b8 = p->b5;
    return 1;
}

u32 func_0211764c(u8 *w, s32 a, s32 b, TrackOut *o) {
    u8 *e;
    u8 *k;
    u32 v;
    u32 off;
    u32 bs;
    if (a < 0 || a > 15) {
        return 0;
    }
    if (b < 0 || b > 15) {
        return 0;
    }
    v = ((ChRec *)(w + 0x540) + a)->x[b];
    if (v == 0xff) {
        return 0;
    }
    e = w + 0x780 + v * 64;
    o->a = *(u16 *)(e + 2);
    o->b = e[4];
    o->c = e[5];
    o->d = *(s8 *)(e + 6);
    o->e = e[7];
    o->f = *(s8 *)(e + 8) + 64;
    o->g = *(s8 *)(e + 19);
    off = *(u32 *)(e + 0x3c);
    bs = *(u32 *)(w + 0x11c0);
    k = off == 0 ? 0 : w + (off - bs);
    o->cnt = 0;
    while (k != 0) {
        o->list[o->cnt] = k[0];
        o->cnt++;
        bs = *(u32 *)(w + 0x11c0);
        off = *(u32 *)(k + 0x50);
        k = off == 0 ? 0 : w + (off - bs);
    }
    return 1;
}

u32 func_02117618(void) {
    func_02114594(data_021fea60, 4);
    return data_021fea60->f0;
}

void func_02117598(SndWork *w) {
    s32 i;
    s32 j;
    w->f4 = 0;
    w->f8 = 0;
    w->fa = 0;
    w->f0 = 0;
    for (i = 0; i < 16; i++) {
        w->t[i].w = 0;
        for (j = 0; j < 16; j++) {
            w->t[i].v[j] = -1;
        }
    }
    for (j = 0; j < 16; j++) {
        w->u[j] = -1;
    }
    func_021145cc(w, 0x280);
}

void func_02117568(void) {
    s32 i;
    for (i = 0; i < 8; i++) {
        data_027e032c[i].a = 0;
        data_027e032c[i].b = 0;
        data_027e032c[i].cnt = 0;
    }
}

void func_02117548(s32 idx) {
    SlotEnt *e = &data_027e032c[idx];
    e->cnt++;
}

u32 func_02117518(s32 idx, u32 a, u32 b) {
    SlotEnt *e = &data_027e032c[idx];
    e->a = a;
    e->b = b;
    e->cnt++;
    return e->cnt;
}

// SND_CommandInit (probable)
void func_02117400(void) {
    s32 i;
    Cmd *p;
    func_02116df8();
    p = data_021fd260;
    data_021fcf88 = p;
    for (i = 0; i < 255; i++) {
        p->next = &data_021fd260[i + 1];
        p++;
    }
    data_021fd260[255].next = 0;
    data_021fcf98 = &data_021fd260[255];
    data_021fcf90 = 0;
    data_021fcf94 = 0;
    data_021fcfa4 = 0;
    data_021fcf9c = 0;
    data_021fcfa0 = 0;
    data_021fcfa8 = 1;
    data_021fcf8c = 0;
    data_021fea60 = &data_021fcfe0;
    func_02117598(&data_021fcfe0);
    {
        Cmd *c = func_02117230(1);
        if (c == 0) {
            return;
        }
        c->id = 29;
        c->arg[0] = (u32)data_021fea60;
        func_021171e8(c);
        func_02117028(1);
    }
}

// SND_RecvCommandReply (probable)
Cmd *func_021172cc(u32 flags) {
    u32 e = func_01ffa2ec();
    Cmd *c;
    Cmd *last;
    s32 idx;
    if (flags & 1) {
        while (data_021fcf8c == func_02117618()) {
            func_01ffa3d4(e);
            func_01ffa494(100);
            e = func_01ffa2ec();
        }
    } else {
        if (data_021fcf8c == func_02117618()) {
            func_01ffa3d4(e);
            return 0;
        }
    }
    idx = data_021fcf9c;
    c = data_021fcfac[idx];
    data_021fcf9c = idx + 1;
    if (data_021fcf9c > 8) {
        data_021fcf9c = 0;
    }
    last = c;
    if (last->next != 0) {
        do {
            last = last->next;
        } while (last->next != 0);
    }
    if (data_021fcf98 != 0) {
        data_021fcf98->next = c;
    } else {
        data_021fcf88 = c;
    }
    data_021fcf98 = last;
    data_021fcfa4 = data_021fcfa4 - 1;
    data_021fcf8c = data_021fcf8c + 1;
    func_01ffa3d4(e);
    return c;
}

// SND_AllocCommand (probable)
Cmd *func_02117230(u32 flags) {
    Cmd *c;
    if (!func_02116d24()) {
        return 0;
    }
    c = func_02116d6c();
    if (c != 0) {
        return c;
    }
    if (!(flags & 1)) {
        return 0;
    }
    if ((s32)func_02116e64() > 0) {
        while (func_021172cc(0) != 0) {
        }
        c = func_02116d6c();
        if (c != 0) {
            return c;
        }
    } else {
        func_02117028(1);
    }
    func_02116dc4();
    do {
        func_021172cc(1);
        c = func_02116d6c();
    } while (c == 0);
    return c;
}

// SND_PushCommand (probable)
void func_021171e8(Cmd *c) {
    u32 e = func_01ffa2ec();
    if (data_021fcf94 == 0) {
        data_021fcf94 = c;
        data_021fcf90 = c;
    } else {
        data_021fcf94->next = c;
        data_021fcf94 = c;
    }
    c->next = 0;
    func_01ffa3d4(e);
}

// SND_FlushCommand (probable)
u32 func_02117028(u32 flags) {
    u32 e = func_01ffa2ec();
    if (data_021fcf90 == 0) {
        func_01ffa3d4(e);
        return 1;
    }
    if (data_021fcfa4 >= 8) {
        if (!(flags & 1)) {
            func_01ffa3d4(e);
            return 0;
        }
        do {
            func_021172cc(1);
        } while (data_021fcfa4 >= 8);
    }
    func_021145cc(data_021fd260, 0x1800);
    if (func_02117dd8(7, (u32)data_021fcf90, 0) < 0) {
        if (!(flags & 1)) {
            func_01ffa3d4(e);
            return 0;
        }
        while (func_02117dd8(7, (u32)data_021fcf90, 0) < 0) {
            func_01ffa3d4(e);
            func_01ffa494(100);
            e = func_01ffa2ec();
        }
    }
    if (flags & 2) {
        func_02116dc4();
    }
    {
        s32 c4;
        u32 c8;
        data_021fcfac[data_021fcfa0] = data_021fcf90;
        data_021fcfa0 = data_021fcfa0 + 1;
        if (data_021fcfa0 > 8) {
            data_021fcfa0 = 0;
        }
        c4 = data_021fcfa4;
        c8 = data_021fcfa8;
        data_021fcf90 = 0;
        data_021fcf94 = 0;
        data_021fcfa4 = c4 + 1;
        data_021fcfa8 = c8 + 1;
    }
    func_01ffa3d4(e);
    return 1;
}

// SND_WaitForCommandProc (probable)
u32 func_02116f98(u32 t) {
    u32 r = func_02116f04(t);
    if (r == 0) {
        while (func_021172cc(0) != 0) {
        }
        r = func_02116f04(t);
        if (r == 0) {
            func_02116dc4();
            r = func_02116f04(t);
            if (r == 0) {
                do {
                    func_021172cc(1);
                    r = func_02116f04(t);
                } while (r == 0);
            }
        }
    }
    return r;
}

u32 func_02116f58(void) {
    u32 e = func_01ffa2ec();
    u32 r;
    if (data_021fcf90 == 0) {
        r = data_021fcf8c;
    } else {
        r = data_021fcfa8;
    }
    func_01ffa3d4(e);
    return r;
}

u32 func_02116f04(u32 t) {
    u32 e = func_01ffa2ec();
    u32 r;
    u32 cur = data_021fcf8c;
    if (t > cur) {
        if ((t - cur) < 0x80000000) {
            r = 0;
        } else {
            r = 1;
        }
    } else {
        r = (cur - t) < 0x80000000;
    }
    func_01ffa3d4(e);
    return r;
}

u32 func_02116ec4(void) {
    u32 e = func_01ffa2ec();
    u32 n = 0;
    Cmd *c = data_021fcf88;
    while (c != 0) {
        c = c->next;
        n++;
    }
    func_01ffa3d4(e);
    return n;
}

u32 func_02116e84(void) {
    u32 e = func_01ffa2ec();
    u32 n = 0;
    Cmd *c = data_021fcf90;
    while (c != 0) {
        c = c->next;
        n++;
    }
    func_01ffa3d4(e);
    return n;
}

u32 func_02116e64(void) {
    u32 a = func_02116ec4();
    return 256 - a - func_02116e84();
}

void func_02116df8(void) {
    func_02117eb4(7, func_01ffa624);
    if (!func_02116d24()) {
        return;
    }
    if (func_02117e8c(7, 1) != 0) {
        return;
    }
    do {
        func_01ffa494(100);
    } while (func_02117e8c(7, 1) == 0);
}

void func_02116dc4(void) {
    while (func_02117dd8(7, 0, 0) < 0) {
    }
}

Cmd *func_02116d6c(void) {
    u32 e = func_01ffa2ec();
    Cmd *c = data_021fcf88;
    if (c == 0) {
        func_01ffa3d4(e);
        return 0;
    }
    data_021fcf88 = c->next;
    if (data_021fcf88 == 0) {
        data_021fcf98 = 0;
    }
    func_01ffa3d4(e);
    return c;
}

u32 func_02116d24(void) {
    u32 r;
    u32 e;
    if (func_01ffa3cc() == 0) {
        return 1;
    }
    e = func_01ffa2ec();
    *(volatile u32 *)0x04fff200 = 16;
    r = *(volatile u32 *)0x04fff200;
    func_01ffa3d4(e);
    return r != 0;
}

// SND_Init
void func_02116cd8(void) {
    if (data_021fcf6c != 0) {
        return;
    }
    data_021fcf6c = 1;
    func_0211450c(&data_021fcf70);
    func_02117400();
    func_02117568();
}

// SND lock
void func_02116cc4(void) {
    func_02114480(&data_021fcf70);
}

// SND unlock
void func_02116cb0(void) {
    func_02114410(&data_021fcf70);
}

void func_02116c84(u32 a) {
    func_0211665c(1, a, 0, 0, 0);
}

void func_02116c50(u32 a, u32 b, u32 c, u32 d) {
    func_0211665c(2, a, b, c, d);
}

void func_02116c24(u32 a) {
    func_0211665c(3, a, 0, 0, 0);
}

void func_02116c0c(u32 a, u32 b) {
    func_02116714(a, 26, b, 2);
}
