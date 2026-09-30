#include "types.h"

struct Unk_ov068_022649f4_Vec {
    s32 x, y, z;
};

struct Unk_ov068_02264ab4_P2 {
    s32 x, y;
};

class Unk_ov068_Owner {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual void vfunc_60();
    virtual void *vfunc_64();
    virtual void vfunc_68();
    virtual void vfunc_6c();
    virtual void vfunc_70();
    virtual void vfunc_74();
    virtual void vfunc_78();
    virtual void vfunc_7c();
    virtual void vfunc_80();
    virtual void vfunc_84();
    virtual void vfunc_88();
    virtual void vfunc_8c();
    virtual void vfunc_90();
    virtual void vfunc_94();
    virtual void vfunc_98();
    virtual void vfunc_9c();
    virtual void vfunc_a0();
    virtual void vfunc_a4();
    virtual void vfunc_a8();
    virtual void vfunc_ac();
    virtual void vfunc_b0();
    virtual BOOL vfunc_b4();
    virtual BOOL vfunc_b8(void *o);
    virtual BOOL vfunc_bc();

    /* 0x004 */ u8 pad_04[0x5c - 4];
    /* 0x05c */ Unk_ov068_022649f4_Vec unk_5c;
    /* 0x068 */ u8 pad_68[0x8e - 0x68];
    /* 0x08e */ s16 unk_8e;
    /* 0x090 */ u8 pad_90[4];
    /* 0x094 */ s16 unk_94;
    /* 0x096 */ u8 pad_96[2];
    /* 0x098 */ s32 unk_98;
    /* 0x09c */ u8 pad_9c[0x350 - 0x9c];
    /* 0x350 */ u8 unk_350[0x60];
    /* 0x3b0 */ u8 unk_3b0[0x5c];
    /* 0x40c */ u8 pad_40c[0x564 - 0x40c];
    /* 0x564 */ u8 unk_564[0x82c - 0x564];
    /* 0x82c */ void *unk_82c;
    /* 0x830 */ u8 pad_830[0x8b4 - 0x830];
    /* 0x8b4 */ u8 unk_8b4[0xa01 - 0x8b4];
    /* 0xa01 */ u8 unk_a01;
};

class Unk_ov068_0225fd54 {
public:
    /* 0x00 */ u8 pad_00[0x34];
    /* 0x34 */ s16 unk_34;
    /* 0x36 */ s16 unk_36;
    /* 0x38 */ u8 pad_38[4];
    /* 0x3c */ u8 unk_3c[0xd8 - 0x3c];
    /* 0xd8 */ s16 unk_d8;
    /* 0xda */ s16 unk_da;
    /* 0xdc */ u8 pad_dc[4];
    /* 0xe0 */ u8 unk_e0;
};

extern "C" {
extern u16 data_020c6cc8;
extern s16 data_020c6cc0;
extern void *data_021c47c4;
extern u8 data_021f4880[];

u32 func_ov068_0226594c(void *);
u32 func_ov003_022125ac();
s32 func_0201bd20(void *, s32);
s32 func_0201a5d0(void *, void *);
s32 func_0201a1a4(void *);
void func_0204ee10(s32 *, s32 *, void *);
void func_0204edd8(void *, void *);
s32 func_020e9650(void *, void *);
s32 func_0201bdec(void *);
s32 func_02042e98(s32, void *);
s32 func_02042d10();
void func_02042820(s32);
void *func_0204ebd8(void *, s32, s32, s32, s32, s32);
s32 func_0204e88c(void *, s32, s32);
s32 func_02063b8c(s32);
void func_0201c804(void *, void *);
void func_0201c7ec(void *, u32);
void func_ov068_02265698(void *);
void func_ov068_022656a8(void *, void *, s32);
void func_ov068_022656a4(void *, s32);
void *func_0208175c(s32);
void *func_020805c4(void *);
s32 func_02128930(void *, void *, s32);
s32 func_02002bdc(void *, void *);
s32 func_0201a1cc(s32, s32);
s32 func_0201a9a0(void *, void *, s32);
s32 func_0201bb3c(void *, void *);
void func_02019614(void *, s32, u32);
void func_0201a97c(void *, void *);
s32 func_0201a968(void *);
void func_0201a8f0(void *);
s32 func_02012cb8(void *);
void *func_0207e310(void *);
s32 func_0201324c(void *);
void func_ov068_02265324(void *, s32, void *);
s32 func_02012c58(void *, void *);
s32 func_0203d64c();
void *func_020951ec(s32);
void *func_0203d608();
void func_020e9960(void *, void *, void *);
void func_020e9768(void *, s32);
void func_01ffd070(void *, void *, void *);
void func_020e93a0(void *, s32);
s32 func_020e96ec(void *, void *);
s32 func_01ffcb0c(s32, s32);
void *func_0207f170(void *);
void func_0204ed8c(void *, u32, u32);
void *func_0209750c();
s32 func_02098044(void *, s32);
s32 func_0207c618(void *, s32);
s32 func_ov068_022651e0(void *, void *, Unk_ov068_022649f4_Vec *);
s32 func_ov068_02264a64(void *);
s32 func_ov068_02264aa0(void *, Unk_ov068_Owner *);
struct Unk_ov068_02264ab4_P2;
s32 func_ov068_02264b30(void *, Unk_ov068_02264ab4_P2 *);
void *func_ov068_02264f4c(void *, Unk_ov068_Owner *);

void func_ov068_02265dc8(void *);
s32 func_020197a8(void *);
s32 func_02019790(void *);
s32 func_020b8fe8(s32);
s32 func_020030b4(void *);
s32 func_02078574(void *);
void func_0209d498(void *);
void func_0202d864(u16 *, void *);
void func_0202d814(void *, u16 *);
s32 func_0209b3b0(s32);
void func_0209adbc(u16 *, s32);
void func_0207fd18(u16 *, void *);
s32 func_0204b2d4(u16 *);
s32 func_0204b25c(u16 *);

BOOL func_ov068_022649f4(Unk_ov068_0225fd54 *self, Unk_ov068_Owner *o) {
    u32 r = func_ov068_0226594c(o);
    if (self->unk_e0 == 0) {
        switch (r) {
        case 0:
        case 1:
            if (func_ov068_02264a64(self) != 0) {
                if (o->unk_3b0[0] == 1) {
                    if (func_0201bd20(o, 4) <= 0x6000) {
                        if (func_0201a5d0(o->unk_3b0, o) != 0) {
                            if (func_0201a1a4(o->unk_3b0) != 0) {
                                return TRUE;
                            }
                        }
                    }
                }
            }
        }
    }
    return FALSE;
}

s32 func_ov068_02264a64(void *self) {
    u32 v = func_ov003_022125ac();
    if ((v >= 0x12e8 && v <= 0x131f) || (v >= 0x12b0 && v <= 0x12e7)) {
        return TRUE;
    }
    return FALSE;
}

s32 func_ov068_02264aa0(void *self, Unk_ov068_Owner *o) {
    if (o->unk_a01 != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov068_02264ab4(void *self, Unk_ov068_Owner *o) {
    BOOL r;
    Unk_ov068_022649f4_Vec *p = &o->unk_5c;
    s32 a, b;
    Unk_ov068_02264ab4_P2 q;
    Unk_ov068_022649f4_Vec t;
    r = FALSE;
    a = r;
    b = r;
    func_0204ee10(&a, &b, p);
    if (func_ov068_02264b30(self, (Unk_ov068_02264ab4_P2 *)&a) != 0) {
        func_0204edd8(&t, p);
        if (func_020e9650(&t, p) <= 0xb00) {
            q.x = a;
            q.y = b;
            s32 idx = func_02042e98((s8)func_0201bdec(o), &q);
            if (idx >= 0) {
                if (func_02042d10() == 1) {
                    r = TRUE;
                }
                func_02042820(idx);
            }
        }
    }
    return r;
}

static inline BOOL Unk_ov068_02264b30_InRange(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1566 && *p <= 0x1566) {
        r = TRUE;
    }
    return r;
}

BOOL func_ov068_02264b30(void *self, Unk_ov068_02264ab4_P2 *v) {
    void *g = data_021c47c4;
    if (g != 0) {
        s32 x = v->x;
        s32 y = v->y;
        s32 hx = x >> 4;
        s32 hy = y >> 4;
        u16 *c = (u16 *)func_0204ebd8(g, hx, hy, x - (hx << 4), y - (hy << 4), 0);
        if (c != 0) {
            BOOL r = FALSE;
            if (Unk_ov068_02264b30_InRange(c)) {
                if (func_0204e88c(g, v->x, v->y) != 0) {
                    r = TRUE;
                }
            }
            return r;
        }
    }
    return FALSE;
}

static inline BOOL Unk_ov068_02264b9c_InRange(u16 *p, s32 i, u32 lo, u32 hi) {
    BOOL r = FALSE;
    volatile u16 *q = p;
    u32 h = q[i];
    u32 l = q[i];
    if (l >= lo && h <= hi) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_ov068_02264b9c_Same(u16 *a, u16 *b) {
    if (func_0204b2d4(a) != 0) {
        if (func_0204b25c(a) == func_0204b25c(b)) {
            return TRUE;
        }
        return FALSE;
    }
    if (*a == *b) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov068_02264b9c(Unk_ov068_0225fd54 *self, Unk_ov068_Owner *o) {
    struct {
        u16 h[13];
        s32 z[2];
    } l;
    s32 id;
#define W (*(volatile u16 *)&l.h[0])
    void *p;
    s32 m;

    if (func_020197a8(o->unk_564) != 0) {
        goto fail;
    }
    if (func_02019790(o->unk_564) == 0) {
        goto fail;
    }
    p = o->vfunc_64();
    l.z[0] = 0;
    l.z[1] = 0;
    id = 7;
    m = func_020b8fe8(7);
    if (p != 0) {
        if (func_020030b4(func_020805c4(p)) != 0) {
            if (func_0207e310(p) != 0) {
                id = func_02078574(func_0207e310(p));
            }
        }
    }
    func_0209d498(l.z);
    s16 t = self->unk_34;
    if (t == 0 || self->unk_36 == 0) {
        if (t == 0) {
            func_ov068_02265dc8(o);
            if (p != 0) {
                if (func_020030b4(func_020805c4(p)) != 0) {
                    if (func_0207e310(p) != 0) {
                        id = func_02078574(func_0207e310(p));
                    }
                }
            }
            self->unk_34 = 0x2ee0;
        }
        func_0202d864(&l.h[1], o);
        if (l.h[1] == 0xfff1) {
            W = 0xfff1;
            if (func_0209b3b0(id) != 0) {
                func_0209adbc(&l.h[2], id);
                W =l.h[2];
            }
            {
                u16 a0 = W;
                u16 b0 = W;
                if (b0 == 0xfff1 || (a0 >= 0x1378 && a0 <= 0x1378)) {
                    if (m == 1) {
                        func_0207fd18(&l.h[3], p);
                        W =l.h[3];
                    }
                }
            }
            self->unk_36 = -1;
            if (W == 0xfff1) {
                goto fail;
            }
            func_0202d814(o, &l.h[0]);
            func_ov068_022656a8(self, o, 0xf);
            func_ov068_022656a4(self, 0);
            return TRUE;
        }
        func_0202d864(&l.h[4], o);
        if (Unk_ov068_02264b9c_InRange(l.h, 4, 0x1380, 0x139f)) {
            if (m == 1) {
                goto fail;
            }
            self->unk_36 = 0x12c;
            func_ov068_022656a8(self, o, 0x10);
            func_ov068_022656a4(self, 0);
            return TRUE;
        }
        func_0209adbc(&l.h[5], id);
        func_0202d864(&l.h[6], o);
        if (Unk_ov068_02264b9c_Same(&l.h[5], &l.h[6]) == 0) {
            func_ov068_022656a8(self, o, 0x10);
            func_ov068_022656a4(self, 0);
            self->unk_36 = 0x12c;
            return TRUE;
        }
        self->unk_36 = -1;
    } else {
        func_0202d864(&l.h[7], o);
        if (l.h[7] == 0xfff1) {
            if (m != 1) {
                goto fail;
            }
            func_0207fd18(&l.h[8], p);
            func_0202d814(o, &l.h[8]);
            func_ov068_022656a8(self, o, 0xf);
            func_ov068_022656a4(self, 0);
            self->unk_36 = -1;
            return TRUE;
        }
        func_0202d864(&l.h[9], o);
        if (Unk_ov068_02264b9c_InRange(l.h, 9, 0x1380, 0x139f)) {
            if (m == 1) {
                goto fail;
            }
            self->unk_36 = 0x12c;
            func_ov068_022656a8(self, o, 0x10);
            func_ov068_022656a4(self, 0);
            return TRUE;
        }
        func_0202d864(&l.h[10], o);
        BOOL f = FALSE;
        volatile u16 *q = l.h;
        u32 hh = q[10];
        u32 ll = q[10];
        if (ll >= 0x1378 && hh <= 0x1378) {
            f = TRUE;
        }
        if (f) {
            if (m == 1) {
                func_ov068_022656a8(self, o, 0x10);
                func_ov068_022656a4(self, 0);
                self->unk_36 = 0x12c;
                return TRUE;
            }
        }
        func_0202d864(&l.h[11], o);
        func_0209adbc(&l.h[12], id);
        if (Unk_ov068_02264b9c_Same(&l.h[11], &l.h[12])) {
            goto fail;
        }
        func_ov068_022656a8(self, o, 0x10);
        func_ov068_022656a4(self, 0);
        self->unk_36 = 0x12c;
        return TRUE;
    }
fail:
    return FALSE;
#undef W
}

BOOL func_ov068_02264ee0(Unk_ov068_0225fd54 *self, Unk_ov068_Owner *o) {
    if (func_02063b8c(5) == 0) {
        if (o->vfunc_b4() != 0) {
            Unk_ov068_Owner *t = (Unk_ov068_Owner *)func_ov068_02264f4c(self, o);
            if (t != 0) {
                if (t->vfunc_b8(o) != 0) {
                    func_0201c804(o, t);
                    func_0201c7ec(o, 0);
                    func_ov068_02265698(self);
                    func_ov068_022656a8(o->unk_8b4, o, 9);
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

void *func_ov068_02264f4c(void *self, Unk_ov068_Owner *o) {
    Unk_ov068_Owner *s = o;
    void *pos = o;
    s16 lim = data_020c6cc0;
    Unk_ov068_Owner *e;
    s32 i;
    pos = &o->unk_5c;
    for (i = 0; i < 8; i++) {
        e = (Unk_ov068_Owner *)func_0208175c(i);
        if (e == 0) {
            continue;
        }
        if (e->unk_82c == 0) {
            continue;
        }
        u16 *a = (u16 *)func_020805c4(s->unk_82c);
        u16 *b = (u16 *)func_020805c4(e->unk_82c);
        if (b[0] == a[0]) {
            if (func_02128930(b + 1, a + 1, 8) == 0) {
                if (((u8 *)b)[0xb] == ((u8 *)a)[0xb]) {
                    continue;
                }
            }
        }
        if (func_020e9650(pos, &e->unk_5c) >= 0x3000) {
            continue;
        }
        s32 d = func_02002bdc(pos, &e->unk_5c);
        if (func_0201a1cc((s16)(d - s->unk_8e), lim) != 0) {
            return e;
        }
    }
    return 0;
}

BOOL func_ov068_02264ffc(void *self, Unk_ov068_Owner *o) {
    BOOL r;
    u8 *r7 = o->unk_564;
    u8 *r6 = o->unk_350;
    u8 buf[12];
    r = FALSE;
    if (func_0201a9a0(r6, o, 1) == 0) {
        switch (func_0201bb3c(o, buf)) {
        case 1:
            func_02019614(r7, 1, data_020c6cc8);
            r = TRUE;
            break;
        case 2:
            func_0201a97c(r6, buf);
            break;
        }
    } else {
        if (func_0201a968(r6) != 0) {
            func_0201a8f0(r6);
        }
    }
    return r;
}

struct Unk_ov068_0226506c_Flags {
    u8 pad : 1;
    u8 f1 : 1;
};

BOOL func_ov068_0226506c(Unk_ov068_0225fd54 *self, Unk_ov068_022649f4_Vec *out, Unk_ov068_Owner *o) {
    if (o->vfunc_64() != 0) {
        Unk_ov068_0226506c_Flags *fl = (Unk_ov068_0226506c_Flags *)((u8 *)func_0207e310(o->vfunc_64()) + 0x1d);
        if (fl->f1 != 0) {
            if (func_02012cb8(self->unk_3c) != 3) {
                self->unk_d8 = 0;
            }
        }
    }
    if (func_0201324c(self->unk_3c) == 0 || self->unk_d8 == 0) {
        func_ov068_02265324(self, 0, o);
        self->unk_d8 = -1;
        self->unk_da = 0;
    }
    Unk_ov068_022649f4_Vec *pv = &o->unk_5c;
    out->x = pv->x;
    out->y = pv->y;
    out->z = pv->z;
    if (func_02012c58(self->unk_3c, out) != 0) {
        if (self->unk_d8 == -1) {
            self->unk_d8 = 0x1770;
        }
    }
    return TRUE;
}

BOOL func_ov068_02265114(void *self, void *v, s32 lim) {
    if (func_0203d64c() != 0) {
        u8 *a = (u8 *)func_020951ec(4);
        u8 *b = (u8 *)func_0203d608();
        if (a != 0 && b != 0) {
            Unk_ov068_022649f4_Vec t1;
            Unk_ov068_022649f4_Vec t2;
            func_020e9960(&t1, a + 0x5c, b + 0x5c);
            func_020e9768(&t1, 1);
            func_01ffd070(&t2, a + 0x5c, &t1);
            s32 d = func_020e9650(v, &t2);
            if (d < 0) {
                d = -d;
            }
            if (d <= lim) {
                return TRUE;
            }
        }
    }
    return FALSE;
}

s32 func_ov068_0226517c(void *self, void *a, void *b) {
    Unk_ov068_022649f4_Vec t;
    func_020e9960(&t, a, b);
    return func_ov068_022651e0(self, b, &t);
}

s32 func_ov068_0226519c(void *self, Unk_ov068_Owner *o) {
    if (o->unk_98 != 0) {
        Unk_ov068_022649f4_Vec t;
        t.x = 0;
        t.y = 0;
        t.z = 0x1000;
        func_020e93a0(&t, o->unk_94);
        return func_ov068_022651e0(self, &o->unk_5c, &t);
    }
    return 0;
}

BOOL func_ov068_022651e0(void *self, void *a, Unk_ov068_022649f4_Vec *b) {
    if (func_0203d64c() != 0) {
        if (func_020e96ec(b, data_021f4880) != 0) {
            u8 *p = (u8 *)func_020951ec(4);
            u8 *q = (u8 *)func_0203d608();
            if (p != 0 && q != 0) {
                Unk_ov068_022649f4_Vec t1;
                Unk_ov068_022649f4_Vec t2;
                func_020e9960(&t1, p + 0x5c, a);
                func_020e9960(&t2, q + 0x5c, a);
                s32 x = func_01ffcb0c(b->x, t1.z);
                x -= func_01ffcb0c(b->z, t1.x);
                s32 y = func_01ffcb0c(b->x, t2.z);
                y -= func_01ffcb0c(b->z, t2.x);
                if (func_01ffcb0c(x, y) <= 0) {
                    return TRUE;
                }
            }
        }
    }
    return FALSE;
}

struct Unk_ov068_02265270_Flags {
    u8 pad : 1;
    u8 f1 : 1;
};

BOOL func_ov068_02265270(Unk_ov068_0225fd54 *self, Unk_ov068_Owner *o) {
    BOOL r;
    if (func_0201324c(self->unk_3c) != 0 && func_02012cb8(self->unk_3c) == 3) {
        u8 *p = (u8 *)func_0207f170(o->vfunc_64());
        Unk_ov068_022649f4_Vec t;
        func_0204ed8c(&t, p[0], p[1] + 1);
        if (func_020e9650(&t, &o->unk_5c) < 0x800) {
            r = TRUE;
        } else {
            r = FALSE;
        }
    } else {
        r = FALSE;
    }
    return r;
}

static inline BOOL Unk_ov068_022652d0_B(BOOL v) {
    if (v != 0) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov068_022652d0(void *self, Unk_ov068_Owner *o) {
    void *a = func_0209750c();
    s32 t;
    if (a != 0) {
        t = func_02098044(a, 1);
    } else {
        t = 0;
    }
    BOOL f = Unk_ov068_022652d0_B(t);
    void *p = o->vfunc_64();
    BOOL r = TRUE;
    Unk_ov068_0226506c_Flags *fl = (Unk_ov068_0226506c_Flags *)((u8 *)func_0207e310(p) + 0x1d);
    if (fl->f1 == 0 && (f != 0 || func_0207c618(p, 0) == 0)) {
        r = FALSE;
    }
    return r;
}
}
