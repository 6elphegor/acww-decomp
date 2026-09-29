#include "types.h"

// P: 0xa8-byte TV/ftr resource slot (member sub-object Unk_020dbe8c at +0x10)
struct Unk_ov004_02233790 {
    void *unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10[0x90 / 4];
    s32 unk_a0;
    s16 unk_a4;
    u16 unk_a6;
};

// Q: holder of two P slots
struct Unk_ov004_02233560 {
    s16 unk_00;
    Unk_ov004_02233790 unk_04[2];
    u32 unk_154;
    u32 unk_158;
    u32 unk_15c;
};

struct Unk_ov004_02233b3c_V3 {
    s32 x, y, z;
};

struct Unk_ov004_02233b3c_Mat {
    s32 v[12];
};

// R: furniture model wrapper (Unk_020dbd54 at +0x2c)
struct Unk_ov004_02233b3c {
    u8 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    void *unk_10;
    void *unk_14;
    u32 unk_18;
    u32 unk_1c;
    u32 unk_20;
    void *unk_24;
    u32 unk_28;
    u8 unk_2c[0x64];
    Unk_ov004_02233b3c_Mat unk_90;
    u8 unk_c0[8];
    u8 unk_c8[0x1c];
};

struct Unk_ov004_02233bf4 {
    u8 pad_00[0x64];
    u8 unk_64[1];
    u8 pad_65[0x1c4 - 0x65];
    u8 unk_1c4[1];
    u8 pad_1c5[0x2b0 - 0x1c5];
    u8 unk_2b0;
};

struct Unk_ov004_02233b90_In {
    u8 pad_00[0x4c];
    Unk_ov004_02233b3c_V3 unk_4c;
};

struct Unk_ov004_02233b90_Vt {
    u8 unk_00;
    u8 unk_01;
};

struct Unk_ov004_02233b90_Sub {
    u8 pad_00[0x2c];
    Unk_ov004_02233b3c *unk_2c;
};

struct Unk_ov004_02233b90_Obj {
    Unk_ov004_02233b90_Vt *unk_00;
    Unk_ov004_02233b90_Sub *unk_04;
    u8 pad_08[0xb4 - 0x8];
    Unk_ov004_02233b90_In *unk_b4;
};

struct Unk_ov004_022337d4_Path {
    u16 unk_00;
    char unk_02[0x2a];
};

struct Unk_ov004_022337d4_Arc {
    u32 unk_00[0x68 / 4];
};

struct Unk_ov004_02233d2c_Obj {
    u8 pad_00[0x77c];
    s32 unk_77c;
};

extern "C" {
extern void *data_021f482c;
extern void *data_021c620c;
extern u8 data_ov004_02251f78;
extern Unk_ov004_02233bf4 *data_ov004_02251f80;
extern char data_ov004_0224ea20[];
extern char data_ov004_0224ea34[];
extern char data_ov004_0224ea54[];
extern char data_ov004_0224ea74[];
extern char data_ov004_0224ea90[];
extern char data_ov004_0224eaac[];
extern char data_ov004_0224eab4[];
extern char data_ov004_0224eabc[];
extern char data_ov004_0224ead0[];
extern char data_ov004_0224ead4[];
extern char data_ov004_0224eae8[];
extern char data_ov004_0224eaec[];
extern char data_ov004_0224eb08[];
extern char data_ov004_0224eb24[];
extern const char *data_ov004_0224e930;
extern u32 data_ov004_0224e9a4[];
extern s32 data_021f47e0[];

void *func_020641ec(void *a, void *b, s32 c, s32 d);
void *func_0210629c(void *p);
void *func_02106690(void *p);
void *func_021066ac(void *p, s32 a);
void func_02055724(void *a, void *b);
void *func_0205588c(void *a, void *heap);
void *func_020e8558(void *p);
void *func_020e8da0(u32 size, void *heap);
void func_020e8c88(void *p);
void func_020e885c(void *p);
u32 func_02003850(void);
BOOL func_02056bf8(void *p);
BOOL func_020565e8(void *p, u32 a);
BOOL func_02056ca4(void *self, void *hdr, const char *n1, const char *n2, void *x, void *y, u32 flag);
void func_02056d54(void *p);
void func_02056d8c(void *p);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 func_0204b25c(u16 *p);
BOOL func_02101340(void *buf, const char *name, void *data);
void *func_021012bc(const char *name);
void func_02101310(void *buf);
void *func_021062dc(void *p);
void *func_021065dc(void *p);
void *func_021065f8(void *p, s32 a);
BOOL func_02055600(void *self, void *res, u32 a);
BOOL func_02054800(void *self, void *x);
void func_02054720(void *self, s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02054710(void *self);
void func_02055488(void *self, void *cb, void *arg);
void func_020547e4(void *self);
void func_02055524(void *self);
BOOL func_02056654(void *self);
void func_020548a0(void *self);
void func_020548d0(void *self);
void func_020e8388(s32 *m, s32 x, s32 y, s32 z);
void func_020e8404(s32 *m, s32 a);
void func_01ffb898(void *v, void *m, void *out);
void func_021355f0(void *arr, s32 n, s32 size, void *dtor);
void func_02135714(void *arr, s32 n, s32 size, void *ctor, void *dtor);

s32 func_ov004_02233330(void *p);
s32 func_ov004_02233244(void *p);
s32 func_ov004_022333f8(void *p, s32 a, s32 b);
void func_ov004_02233644(Unk_ov004_02233790 *p);
void *func_ov004_0223377c(Unk_ov004_02233790 *p);
void *func_ov004_02233790(Unk_ov004_02233790 *p);
void *func_ov004_02233744(Unk_ov004_02233790 *p, u32 a);
u32 func_ov004_022337c0(Unk_ov004_02233b3c *p);
u32 func_ov004_022337c4(Unk_ov004_02233b3c *p);
BOOL func_ov004_022337c8(Unk_ov004_02233b3c *p);
BOOL func_ov004_022338d0(Unk_ov004_02233b3c *p);
BOOL func_ov004_0223397c(Unk_ov004_02233b3c *p);
BOOL func_ov004_0223399c(Unk_ov004_02233b3c *p);
BOOL func_ov004_022338e0(Unk_ov004_02233b3c *p);
BOOL func_ov004_022337d4(Unk_ov004_02233b3c *p);
BOOL func_ov004_02233a70(Unk_ov004_02233b3c *r, s32 x, volatile u8 *flag, Unk_ov004_02233b3c_V3 *pos, s32 e);
void *func_ov004_02233b00(Unk_ov004_02233b3c *p);
void func_ov004_02233af0(Unk_ov004_02233b3c *p, Unk_ov004_02233b3c_V3 *v);
void func_ov004_02233b80(Unk_ov004_02233b3c *p);
void func_ov004_02233b90(Unk_ov004_02233b90_Obj *p);
s32 func_ov004_022335d4(Unk_ov004_02233790 *p);
s32 func_ov004_0223372c(u32 i);
void *func_ov004_02235718(void);
void *func_ov004_022355d8(void *tbl, s32 x, s32 y, s32 z);
s32 func_ov004_0220c93c(void *p);
s32 func_ov004_0220af14(void *p);
s32 func_ov004_0220c950(void *p);
s32 func_ov004_0220af28(void *p);
s32 func_ov004_02233158(void *p);
s32 func_ov004_02233170(void *p);
s32 func_ov004_02233188(void *p);
s32 func_ov004_022331b8(void *p);
s32 func_ov004_02233194(void *p);
s32 func_ov004_02233d2c(void *p);
s32 func_ov004_02233d88(void *p);
}

extern "C" {

void func_ov004_0223349c(Unk_ov004_02233560 *q) {
    void *h;
    q->unk_00 = -1;
    q->unk_154 = 0;
    h = func_020641ec(data_ov004_0224ea20, data_021f482c, 4, 0);
    if (h) {
        void *r6 = func_0210629c(h);
        func_02055724(r6, 0);
        q->unk_154 = (u32)func_0205588c(r6, data_021c620c);
        func_020e8558(h);
    }
    func_ov004_02233744(&q->unk_04[0], q->unk_154);
    func_ov004_02233744(&q->unk_04[1], q->unk_154);
    if (data_ov004_02251f78) {
        q->unk_158 = (u32)func_020e8da0(func_02003850() + 0x60, data_021f482c);
    }
    s32 a = func_ov004_02233330(q);
    s32 b = func_ov004_02233244(q);
    func_ov004_022333f8(q, a, b);
}

void *func_ov004_02233544(Unk_ov004_02233560 *q) {
    func_021355f0(&q->unk_04, 2, 0xa8, (void *)func_ov004_0223377c);
    return q;
}

void *func_ov004_02233560(Unk_ov004_02233560 *q) {
    func_02135714(&q->unk_04, 2, 0xa8, (void *)func_ov004_02233790, (void *)func_ov004_0223377c);
    q->unk_00 = -1;
    q->unk_154 = 0;
    q->unk_158 = 0;
    q->unk_15c = 0;
    return q;
}

u32 func_ov004_022335a8(Unk_ov004_02233790 *p) {
    return (u32)(p->unk_10[2] << 4) >> 16;
}

u16 func_ov004_022335b0(Unk_ov004_02233790 *p) {
    return p->unk_a6;
}

s32 func_ov004_022335b8(Unk_ov004_02233790 *p) {
    if (func_ov004_022335d4(p) == 0xff) {
        return p->unk_a4;
    }
    return -1;
}

s32 func_ov004_022335d4(Unk_ov004_02233790 *p) {
    return p->unk_a0;
}

void func_ov004_022335dc(Unk_ov004_02233790 *p) {
    if (p->unk_00) {
        func_020e8c88(p->unk_00);
        p->unk_00 = 0;
    }
    p->unk_0c = 0;
    p->unk_08 = 0;
    p->unk_04 = 0;
}

void func_ov004_022335fc(Unk_ov004_02233790 *p) {
    if (p->unk_08 && p->unk_0c) {
        func_02056bf8(&p->unk_10);
        if (func_020565e8(&p->unk_10, 0)) {
            s32 t = p->unk_a6 + 1;
            if (t > 0xffff) {
                p->unk_a6 = 0xffff;
            } else {
                p->unk_a6 = t;
            }
        }
    }
}

void func_ov004_02233644(Unk_ov004_02233790 *p) {
    if (p->unk_00) {
        func_020e885c(p->unk_00);
    }
    p->unk_08 = 0;
    p->unk_0c = 0;
}

BOOL func_ov004_02233660(Unk_ov004_02233790 *p, u32 id, s32 x) {
    char buf1[0x28];
    char buf2[0x28];
    s32 r6;
    func_ov004_02233644(p);
    r6 = -1;
    if (id != 0xff) {
        func_020639e8(buf1, data_ov004_0224ea34, id);
        func_020639e8(buf2, data_ov004_0224ea54, id);
    } else {
        r6 = func_ov004_0223372c(x);
        func_020639e8(buf1, data_ov004_0224ea74, r6);
        func_020639e8(buf2, data_ov004_0224ea90, r6);
        r6 = x;
    }
    p->unk_08 = (u32)func_0210629c(func_020641ec(buf1, p->unk_00, 4, 0));
    p->unk_0c = (u32)func_021066ac(func_02106690(func_020641ec(buf2, p->unk_00, 4, 0)), 0);
    if (func_02056ca4(&p->unk_10, (void *)p->unk_04, data_ov004_0224eaac, data_ov004_0224eab4, (void *)p->unk_08, (void *)p->unk_0c, 0)) {
        p->unk_a0 = id;
        p->unk_a4 = r6;
        p->unk_a6 = 0;
        return TRUE;
    }
    return FALSE;
}

s32 func_ov004_0223372c(u32 i) {
    if (i < 0xb) {
        return data_ov004_0224e9a4[i];
    }
    return data_ov004_0224e9a4[0];
}

void *func_ov004_02233744(Unk_ov004_02233790 *p, u32 a) {
    p->unk_a0 = -1;
    p->unk_a4 = -1;
    p->unk_00 = func_020e8da0(0xe00, data_021f482c);
    p->unk_04 = a;
}

void *func_ov004_0223377c(Unk_ov004_02233790 *p) {
    func_02056d54(&p->unk_10);
    return p;
}

void *func_ov004_02233790(Unk_ov004_02233790 *p) {
    func_02056d8c(&p->unk_10);
    p->unk_a0 = -1;
    p->unk_a4 = -1;
    p->unk_00 = 0;
    p->unk_a6 = 0;
    return p;
}

u32 func_ov004_022337bc(Unk_ov004_02233b3c *r) {
    return r->unk_20;
}

u32 func_ov004_022337c0(Unk_ov004_02233b3c *r) {
    return r->unk_1c;
}

u32 func_ov004_022337c4(Unk_ov004_02233b3c *r) {
    return r->unk_18;
}

BOOL func_ov004_022337c8(Unk_ov004_02233b3c *r) {
    r->unk_24 = 0;
    r->unk_28 = 0;
    return TRUE;
}

BOOL func_ov004_022337d4(Unk_ov004_02233b3c *r) {
    Unk_ov004_022337d4_Path path;
    Unk_ov004_022337d4_Arc arc;
    if (r->unk_10 == 0) {
        return FALSE;
    }
    if (r->unk_24 != 0) {
        return FALSE;
    }
    if (r->unk_28 != 0) {
        return FALSE;
    }
    path.unk_00 = 0x3984;
    s32 v = func_0204b25c(&path.unk_00);
    func_020639e8(path.unk_02, data_ov004_0224eabc, v >> 8, (v & 0xff) >> 4, v);
    r->unk_24 = func_020641ec(path.unk_02, r->unk_10, 4, 0);
    if (r->unk_24 != 0) {
        if (func_02101340(&arc, data_ov004_0224ead0, r->unk_24)) {
            BOOL ok = FALSE;
            u8 *p;
            p = (u8 *)func_021062dc(func_021012bc(data_ov004_0224e930));
            r->unk_28 = (u32)p + *(u32 *)(p + *(u16 *)(p + 0xe) + 0xc);
            if (func_02055600(r->unk_2c, (void *)r->unk_28, ok)) {
                if (func_02054800(r->unk_2c, r->unk_10)) {
                    func_02054720(r->unk_2c, func_ov004_022337c4(r), 1, 0x1000, ok, ok);
                    func_02054710(r->unk_2c);
                    func_02055488(r->unk_2c, (void *)func_ov004_02233b80, r);
                    ok = TRUE;
                }
            }
            func_02101310(&arc);
            return ok;
        }
    }
    return FALSE;
}

BOOL func_ov004_022338d0(Unk_ov004_02233b3c *r) {
    r->unk_14 = 0;
    r->unk_18 = 0;
    r->unk_1c = 0;
    r->unk_20 = 0;
    return TRUE;
}

BOOL func_ov004_022338e0(Unk_ov004_02233b3c *r) {
    Unk_ov004_022337d4_Arc arc;
    if (r->unk_14 == 0) {
        r->unk_14 = func_020641ec(data_ov004_0224ead4, r->unk_10, 4, 0);
        if (r->unk_14 == 0) {
            return FALSE;
        }
        if (func_02101340(&arc, data_ov004_0224eae8, r->unk_14)) {
            void *x = func_021012bc(data_ov004_0224eaec);
            if (x) {
                r->unk_18 = (u32)func_021065f8(func_021065dc(x), 0);
            }
            x = func_021012bc(data_ov004_0224eb08);
            if (x) {
                r->unk_1c = (u32)func_021065f8(func_021065dc(x), 0);
            }
            x = func_021012bc(data_ov004_0224eb24);
            if (x) {
                r->unk_20 = (u32)func_021065f8(func_021065dc(x), 0);
            }
            func_02101310(&arc);
            return TRUE;
        }
    }
    return FALSE;
}

BOOL func_ov004_0223397c(Unk_ov004_02233b3c *r) {
    if (r->unk_10) {
        func_020e8c88(r->unk_10);
        r->unk_10 = 0;
        return TRUE;
    }
    return FALSE;
}

BOOL func_ov004_0223399c(Unk_ov004_02233b3c *r) {
    if (r->unk_10 == 0) {
        r->unk_10 = func_020e8da0(0x2800, data_021f482c);
        if (r->unk_10) {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL func_ov004_022339cc(Unk_ov004_02233b3c *r, volatile u8 *a, Unk_ov004_02233b3c_V3 *out) {
    if (r->unk_00 != 0 && *a != 0) {
        func_020547e4(r->unk_2c);
        func_02055524(r->unk_2c);
        out->x = r->unk_04;
        out->y = r->unk_08;
        out->z = r->unk_0c;
        if (func_02056654(r->unk_c8)) {
            *a = 0;
            r->unk_00 = *a;
            return TRUE;
        }
        return FALSE;
    }
    return FALSE;
}

BOOL func_ov004_02233a20(Unk_ov004_02233b3c *r, volatile u8 *a, Unk_ov004_02233b3c_V3 *b, s32 c) {
    return func_ov004_02233a70(r, func_ov004_022337c0(r), a, b, c);
}

BOOL func_ov004_02233a48(Unk_ov004_02233b3c *r, volatile u8 *a, Unk_ov004_02233b3c_V3 *b, s32 c) {
    return func_ov004_02233a70(r, func_ov004_022337c4(r), a, b, c);
}

BOOL func_ov004_02233a70(Unk_ov004_02233b3c *r, s32 x, volatile u8 *flag, Unk_ov004_02233b3c_V3 *pos, s32 e) {
    if (*flag == 0 && r->unk_00 == 0 && x != 0) {
        func_02054720(r->unk_2c, x, 1, 0x1000, 0, 0);
        r->unk_00 = 1;
        *flag = r->unk_00;
        r->unk_04 = pos->x;
        r->unk_08 = pos->y;
        r->unk_0c = pos->z;
        func_020e8388(data_021f47e0, pos->x, pos->y, pos->z);
        func_020e8404(data_021f47e0, *(s16 *)&e);
        r->unk_90 = *(Unk_ov004_02233b3c_Mat *)data_021f47e0;
        return TRUE;
    }
    return FALSE;
}

void func_ov004_02233af0(Unk_ov004_02233b3c *r, Unk_ov004_02233b3c_V3 *v) {
    r->unk_04 = v->x;
    r->unk_08 = v->y;
    r->unk_0c = v->z;
}

void *func_ov004_02233b00(Unk_ov004_02233b3c *r) {
    return &r->unk_90;
}

void func_ov004_02233b04(Unk_ov004_02233b3c *r) {
    func_ov004_022337c8(r);
    func_ov004_022338d0(r);
    func_ov004_0223397c(r);
}

void func_ov004_02233b20(Unk_ov004_02233b3c *r) {
    func_ov004_0223399c(r);
    func_ov004_022338e0(r);
    func_ov004_022337d4(r);
}

void *func_ov004_02233b3c(Unk_ov004_02233b3c *r) {
    r->unk_00 = 0;
    func_020548a0(r->unk_2c);
    return r;
}

void *func_ov004_02233b54(Unk_ov004_02233b3c *r) {
    func_020548d0(r->unk_2c);
    r->unk_10 = 0;
    r->unk_24 = 0;
    r->unk_28 = 0;
    r->unk_18 = 0;
    r->unk_1c = 0;
    r->unk_20 = 0;
    r->unk_14 = 0;
    r->unk_00 = 0;
    r->unk_04 = 0;
    r->unk_08 = 0;
    r->unk_0c = 0;
    return r;
}

void func_ov004_02233b80(Unk_ov004_02233b3c *r) {
    r->unk_24 = (void *)func_ov004_02233b90;
    ((u8 *)&r->unk_90)[2] = 2;
}

void func_ov004_02233b90(Unk_ov004_02233b90_Obj *o) {
    Unk_ov004_02233b3c_V3 v;
    Unk_ov004_02233b3c_V3 out;
    Unk_ov004_02233b3c *r;
    if (o != 0 && o->unk_00->unk_01 == 0) {
        Unk_ov004_02233b3c_V3 *pv = &o->unk_b4->unk_4c;
        v.x = pv->x;
        v.y = pv->y;
        v.z = pv->z;
        r = o->unk_04->unk_2c;
        if (r != 0) {
            *(Unk_ov004_02233b3c_Mat *)data_021f47e0 = *(Unk_ov004_02233b3c_Mat *)func_ov004_02233b00(r);
            func_01ffb898(&v, data_021f47e0, &out);
            func_ov004_02233af0(r, &out);
        }
    }
}

void *func_ov004_02233bf4(void) {
    Unk_ov004_02233bf4 *s = data_ov004_02251f80;
    if (s) {
        return &s->unk_1c4;
    }
    return 0;
}

void func_ov004_02233c10(u8 *p) {
    *p = 0;
}

void func_ov004_02233c18(u8 *p) {
    *p = 0;
}

u8 func_ov004_02233c20(void) {
    Unk_ov004_02233bf4 *s = data_ov004_02251f80;
    if (s) {
        return s->unk_2b0;
    }
    return 0;
}

void func_ov004_02233c3c(void) {
    Unk_ov004_02233bf4 *s = data_ov004_02251f80;
    if (s) {
        s->unk_2b0 = 1;
    }
}

s32 func_ov004_02233c54(void) {
    Unk_ov004_02233bf4 *s = data_ov004_02251f80;
    if (s) {
        return func_ov004_02233158(&s->unk_64);
    }
    return 0;
}

s32 func_ov004_02233c74(void) {
    Unk_ov004_02233bf4 *s = data_ov004_02251f80;
    if (s) {
        return func_ov004_02233170(&s->unk_64);
    }
    return 0xff;
}

s32 func_ov004_02233c94(void) {
    Unk_ov004_02233bf4 *s = data_ov004_02251f80;
    if (s) {
        return func_ov004_02233188(&s->unk_64);
    }
    return 0;
}

s32 func_ov004_02233cb4(void) {
    Unk_ov004_02233bf4 *s = data_ov004_02251f80;
    if (s) {
        return (s16)func_ov004_022331b8(&s->unk_64);
    }
    return -1;
}

s32 func_ov004_02233cdc(void) {
    Unk_ov004_02233bf4 *s = data_ov004_02251f80;
    if (s) {
        return func_ov004_02233194(&s->unk_64);
    }
    return 0;
}

BOOL func_ov004_02233cfc(void) {
    return TRUE;
}

BOOL func_ov004_02233d00(void) {
    return TRUE;
}

BOOL func_ov004_02233d04(void) {
    return TRUE;
}

s32 func_ov004_02233d08(s32 a, s32 b) {
    return func_ov004_02233d2c(func_ov004_022355d8(func_ov004_02235718(), a, b, 0));
}

s32 func_ov004_02233d2c(void *o0) {
    Unk_ov004_02233d2c_Obj *o = (Unk_ov004_02233d2c_Obj *)o0;
    if (o) {
        switch (o->unk_77c) {
        case 0x1b:
            if (o) {
                return func_ov004_0220c93c(o);
            }
            break;
        case 0x27:
            if (o) {
                return func_ov004_0220af14(o);
            }
            break;
        }
    }
    return 0;
}

s32 func_ov004_02233d64(s32 a, s32 b) {
    return func_ov004_02233d88(func_ov004_022355d8(func_ov004_02235718(), a, b, 0));
}

s32 func_ov004_02233d88(void *o0) {
    Unk_ov004_02233d2c_Obj *o = (Unk_ov004_02233d2c_Obj *)o0;
    if (o) {
        switch (o->unk_77c) {
        case 0x1b:
            if (o) {
                return func_ov004_0220c950(o);
            }
            break;
        case 0x27:
            if (o) {
                return func_ov004_0220af28(o);
            }
            break;
        }
    }
    return 0;
}

}
