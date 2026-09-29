#include "types.h"

class Unk_020b83b0 {
public:
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;
    Unk_020b83b0() : unk_04(0), unk_08(0), unk_0c(0xff) {}
};

class Unk_020e4618 : public Unk_020b83b0 {
public:
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    Unk_020e4618();
    virtual BOOL vfunc_00() = 0;
};

struct Unk_020b8c1c {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

class Unk_020e45ec : public Unk_020e4618 {
public:
    Unk_020b8c1c unk_10;
    Unk_020e45ec();
    virtual BOOL vfunc_00();
};

class Unk_020dbe24 {
public:
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u8 unk_10;
    u8 unk_11;
    Unk_020dbe24();
    virtual ~Unk_020dbe24();
};

struct Unk_0205dd38_Pair {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_0205dd38_Bytes {
    u8 unk_00;
    u8 unk_01;
};

class Unk_0205dd1c {
public:
    u32 unk_00[4];
    Unk_020dbe24 unk_10[8];
    Unk_020e45ec unk_b0[8];
    Unk_0205dd38_Pair unk_190[4];
    Unk_0205dd38_Bytes unk_1b0[4];
    u8 pad_1b8[0xb48 - 0x1b8];

    Unk_0205dd1c();
    ~Unk_0205dd1c();
};

extern "C" {
extern Unk_0205dd1c data_021c6854;
extern char data_021c6630[];
extern char data_020dc430[];
extern u8 data_021c6644[];
extern u32 data_021c61cc;
extern u8 data_020cb3d0[];
extern u8 data_020cb3e8[];
extern u8 data_020cb408[];
extern u8 data_020cb3c0[];
extern u8 data_020cb3b0[];
extern char data_020dc454[];
extern char data_020dc45c[];

s32 func_02061b24(u16 *p);
s32 func_0204b430(u16 *p);
s32 func_0204b5ec(u16 *p);
void func_020639e8(char *buf, char *fmt, ...);
s32 func_0205dc28(void *p);
s32 func_0205bd00(void);
s32 func_0205bd1c(void);
s32 func_0205dcac(void *p);
void func_020e877c(void);
void func_0205fba8(void *p);
void *func_0205e7f0(Unk_0205dd1c *m, u32 id);
u16 *func_0205e7c0(Unk_0205dd1c *m, u32 id);
u32 *func_0205e7d0(Unk_0205dd1c *m, u32 id);
void func_0205e7e0(Unk_0205dd1c *m, u32 id, void *p);
s32 func_0205e87c(Unk_0205dd1c *m, u32 id, u32 a, u32 b, u32 c);
s32 func_0205e81c(Unk_0205dd1c *m, u32 id, u32 a, u32 b);
void func_0205e6e4(Unk_0205dd1c *m, u32 id);
void func_0205e780(Unk_0205dd1c *m, u32 id);
s32 func_0205e9a8(Unk_0205dd1c *m, u32 id);
u32 func_0205e9b0(Unk_0205dd1c *m, u32 id);
void func_0205e988(Unk_0205dd1c *m, u32 id, u32 a, u32 b);
void func_0205e958(Unk_0205dd1c *m, u32 id, u32 a, u32 b);
void func_0205e934(Unk_0205dd1c *m, u32 id, u32 a);
u32 func_0205e940(Unk_0205dd1c *m, u32 id);
void func_0205e730(Unk_0205dd1c *m, u32 id);
void func_0205e754(Unk_0205dd1c *m, u32 id, u32 a);
s32 func_0205e8cc(Unk_0205dd1c *m, u32 id, u32 c);
void func_0205e970(Unk_0205dd1c *m, u32 id);
s32 func_0205ed0c(u16 *p);
s32 func_0205ed58(u16 *p);
u32 func_02061794(u16 *p);
u32 func_0206187c(void);
}

struct Unk_0205e310_P {
    u32 pad[6];
    u32 unk_18;
    u32 unk_1c;
};

struct Unk_0205dfb8_Out {
    s32 v[12];
};

struct Unk_0205dfb8_Vec {
    s32 x, y, z;
};

struct Unk_0205dfb8_P {
    u8 pad_00[0x2c];
    u8 *unk_2c;
};

struct Unk_0205dfb8_Obj {
    u8 unk_00;
    u8 pad_01[3];
    u32 unk_04;
    u8 pad_08[8];
    u32 unk_10;
    u8 pad_14[0xc];
    u32 *unk_20;
    u32 unk_24;
    u8 unk_28[4];
    u32 unk_2c;
    u8 pad_30[0x92 - 0x30];
    u8 unk_92;
};

extern "C" {
void func_020553cc(void *slot, Unk_0205dfb8_Out *out, u32 a);
void func_020547cc(void *slot, Unk_0205dfb8_Vec *v);
void func_0205f7f4(void *sub, Unk_0205dfb8_Out *o, Unk_0205dfb8_Vec *v);
void func_0203ee38(Unk_0205dfb8_Vec *o, Unk_0205dfb8_Vec *v);
void func_0205faf8(void *sub, Unk_0205dfb8_Vec *v);
void func_020566bc(void *p);
void func_0205f8d4(void *p);
void func_0205439c(void *slot);
void func_0205f92c(void *p, u32 k);
void func_0205fccc(void *p);
void func_020546ec(void *slot);
void func_02054b14(void *slot);
s32 func_020e885c(void);
void func_020543b4(void *slot, void *o);
void func_0205e61c(void *o);
u32 func_0205cdbc(void);
void func_0205ca94(u32 a, u16 *code, u32 b, u32 c, u32 d);
u32 func_0205c91c(u32 a);
u32 func_0210629c(u32 a);
void func_02063a5c(u32 a, u32 b, char *c, char *d);
void func_02063a1c(u32 a, u32 b, char *c, char *d);
void func_02054b70(void *slot, u32 a);
void func_02054800(void *slot, u32 a);
void func_02054b38(void *slot, u32 a);
u32 func_020e8628(u32 a, u32 b, u32 c);
u32 func_020e8af4(u32 a);
u32 func_02106654(void);
u32 func_02106670(u32 a, u32 b);
void func_02055bcc(u32 *p, u32 a, u32 b);
void func_02055b38(u32 *p, u32 a, u32 b, u32 c, u32 d);
u32 func_020554c0(void *slot);
void func_02055a9c(u32 *p, u32 a);
void func_02054710(void *slot);
void func_020554a0(void *slot, void (*fn)(void *), u32 a, u32 b, void *o, u32 c);
void func_0205fd0c(void *p, u32 id, u32 x, u32 k);
}

static inline BOOL Unk_0205ddc8_In(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi)
        r = TRUE;
    return r;
}

static inline s32 Unk_0205ddc8_Idx(u32 v, u32 lo, u32 hi) {
    if (v >= lo && v <= hi)
        return v - lo;
    return -1;
}

Unk_0205dd1c::~Unk_0205dd1c() {}

Unk_0205dd1c::Unk_0205dd1c() {
    for (s32 i = 0; i < 4; i++) {
        unk_00[i] = 0;
        unk_190[i].unk_00 = 0;
        unk_190[i].unk_04 = 0;
        unk_1b0[i].unk_00 = 0x9e;
        unk_1b0[i].unk_01 = 0x9e;
    }
}

struct Unk_0205e184_Pre {
    u8 pad[0x9c];
};
struct Unk_0205e184_Sub {
    u32 pad[4];
    u32 unk_10;
    void set(u32 v) { unk_10 = v; }
};
struct Unk_0205e184_Big : Unk_0205e184_Pre, Unk_0205e184_Sub {};

extern "C" {
u32 func_0205ddb0(void) { return 0xc0; }
u32 func_0205ddb4(void) { return 0; }
u32 func_0205ddb8(void) { return 0x1220; }
u32 func_0205ddc0(void) { return 0x2864; }

u32 func_0205defc(u32 i) { return data_020cb3d0[i]; }
u32 func_0205df08(u32 i) { return data_020cb3e8[i]; }
u32 func_0205df14(u32 i) { return data_020cb408[i]; }
u32 func_0205df20(u32 i) { return data_020cb3c0[i]; }
u32 func_0205df2c(u32 i) { return data_020cb3b0[i]; }

void func_0205ddc8(s32 flag, u32 a, u16 *p, u32 *o1, u32 *o2) {
    u32 r = 0x9e;
    BOOL k = FALSE;
    if (*p >= 0x13a8 && *p <= 0x13c7)
        k = TRUE;
    if (k) {
        s32 t = Unk_0205ddc8_Idx(*p, 0x13a8, 0x13c7);
        if (t >= 0 && (u32)t < 0x20)
            a = func_0205df08(t);
        else
            a = func_0205df08(0);
    } else {
        u32 v = *p;
        if ((v >= 0x13c8 && v <= 0x1407) || (v >= 0x1429 && v <= 0x1430)) {
            if (func_02061b24(p) == 0) {
                a = func_0205df20(a);
                goto done1;
            }
        }
        a = func_0205df2c(a);
    }
done1:
    BOOL k2 = FALSE;
    if (*p >= 0x1429 && *p <= 0x1430)
        k2 = TRUE;
    if (k2) {
        if (flag == 0)
            r = 0x80;
        else
            r = 0x81;
    } else {
        u32 v = *p;
        if (v >= 0x13c8 && v <= 0x1407) {
            s32 t = Unk_0205ddc8_Idx(v, 0x13c8, 0x1407);
            if (t >= 0 && (u32)t < 0x48)
                r = func_0205df14(t);
        } else if (v >= 0x1408 && v <= 0x1428) {
            if (func_0204b430(p) != 0) {
                s32 t = func_0204b5ec(p);
                if (t >= 0 && (u32)t < 0x16) {
                    r = func_0205defc(t);
                    if (r == 0x9c)
                        r = 0x9d;
                }
            }
        }
    }
    *o1 = a;
    *o2 = r;
}

char *func_0205df38(u32 a) {
    func_020639e8(data_021c6630, data_020dc430, a >> 5, a);
    return data_021c6630;
}

void func_0205df58(void) {
    func_0205dc28(data_021c6644);
    func_0205bd00();
}

void func_0205df70(void) {
    func_0205bd1c();
    func_0205dcac(data_021c6644);
    if (data_021c61cc != 0)
        func_020e877c();
}

void func_0205df98(u8 *p) {
    func_0205fba8(p + 0x28);
}

void *func_0205dfa4(u8 *p) {
    return func_0205e7f0(&data_021c6854, *p);
}

void func_0205dfb8(Unk_0205dfb8_Out *out, Unk_0205dfb8_Obj *o, u32 a) {
    Unk_0205dfb8_Out t;
    u32 id = o->unk_00;
    if (*func_0205e7c0(&data_021c6854, id) != 0xfff1) {
        func_020553cc(func_0205e7f0(&data_021c6854, id), &t, a);
    } else {
        for (s32 i = 0; i < 12; i++)
            t.v[i] = 0;
    }
    *out = t;
}

void func_0205e014(Unk_0205dfb8_Obj *o, Unk_0205dfb8_Out *src) {
    Unk_0205dfb8_Vec A;
    Unk_0205dfb8_Out B;
    Unk_0205dfb8_Vec C;
    Unk_0205dfb8_Out D;
    Unk_0205dfb8_Out E;
    Unk_0205dfb8_Vec F;
    Unk_0205dfb8_Vec G;
    u32 id = o->unk_00;
    if (*func_0205e7c0(&data_021c6854, id) != 0xfff1) {
        u8 *slot = (u8 *)func_0205e7f0(&data_021c6854, id);
        *(Unk_0205dfb8_Out *)(slot + 0x64) = *src;
        u32 t0 = o->unk_04;
        A.x = t0;
        A.y = t0;
        A.z = t0;
        func_020547cc(slot, &A);
        if (Unk_0205ddc8_In(func_0205e7c0(&data_021c6854, id), 0x1374, 0x1374) ||
            Unk_0205ddc8_In(func_0205e7c0(&data_021c6854, id), 0x1375, 0x1375)) {
            func_0205dfb8(&D, o, 2);
            B = D;
        } else {
            func_0205dfb8(&E, o, 0);
            B = E;
        }
        func_0205f7f4(o->unk_28, &B, &A);
        F.x = B.v[9];
        F.y = B.v[10];
        F.z = B.v[11];
        func_0203ee38(&C, &F);
        switch (o->unk_2c) {
        case 7:
        case 8:
            G.x = C.x;
            G.y = C.y;
            G.z = C.z;
            func_0205faf8(o->unk_28, &G);
            break;
        }
    }
}

void func_0205e120(Unk_0205dfb8_Obj *o) {
    u32 id = o->unk_00;
    if (*func_0205e7c0(&data_021c6854, id) != 0xfff1) {
        func_0205e6e4(&data_021c6854, id);
        s32 t = func_0205ed0c(func_0205e7c0(&data_021c6854, id));
        if (t != 0x2b) {
            func_0205439c(func_0205e7f0(&data_021c6854, id));
            if (t == 0x27) {
                func_020566bc(&o->pad_08);
                *o->unk_20 = o->unk_10;
            }
        }
    }
    func_0205f8d4(o->unk_28);
}

void func_0205e184(Unk_0205dfb8_Obj *o, u32 v) {
    Unk_0205e184_Sub &r = *(Unk_0205e184_Big *)func_0205e7f0(&data_021c6854, o->unk_00);
    r.set(v);
}

void func_0205e1a0(Unk_0205dfb8_Obj *o, s32 a, u32 b, u32 c) {
    func_0205e87c(&data_021c6854, o->unk_00, a, b, c);
    switch (a) {
    case 0x13:
        func_0205f92c(o->unk_28, 1);
        break;
    case 0x15:
        func_0205f92c(o->unk_28, 3);
        break;
    case 0x16:
        func_0205f92c(o->unk_28, 2);
        break;
    case 0x18:
        func_0205f92c(o->unk_28, 6);
        break;
    case 0x19:
    case 0x1b:
        func_0205f92c(o->unk_28, 7);
        break;
    case 0x1a:
        func_0205f92c(o->unk_28, 8);
        break;
    case 0x28:
        func_0205e81c(&data_021c6854, o->unk_00, 1, c);
        break;
    }
}

void func_0205e274(Unk_0205dfb8_Obj *o) {
    func_0205fccc(o->unk_28);
    u32 id = o->unk_00;
    if (func_0205ed0c(func_0205e7c0(&data_021c6854, id)) != 0x2b) {
        func_020546ec(func_0205e7f0(&data_021c6854, id));
        o->unk_20 = 0;
        o->unk_24 = 0;
    }
    func_0205e7e0(&data_021c6854, id, 0);
    func_02054b14(func_0205e7f0(&data_021c6854, id));
    func_0205e780(&data_021c6854, id);
    func_0205e9a8(&data_021c6854, id);
    func_020e885c();
    func_0205e988(&data_021c6854, id, 0, 0);
    func_0205e958(&data_021c6854, id, 0, 0);
    func_0205e934(&data_021c6854, id, 0);
    *func_0205e7c0(&data_021c6854, id) = 0xfff1;
    o->unk_00 = 9;
}

void func_0205e310(Unk_0205dfb8_Obj *o, u32 id, u32 x, u16 *code, u32 a5, s32 flag) {
    u32 idx;
    u32 s, t;
    o->unk_00 = id;
    func_0205e7e0(&data_021c6854, id, &o->pad_08);
    if (*code == 0xfff1) {
        *func_0205e7c0(&data_021c6854, id) = 0xfff1;
    } else {
        idx = func_02061794(code);
        if ((s32)idx < 0)
            goto err;
        if (idx >= func_0206187c())
            goto err;
        *func_0205e7c0(&data_021c6854, id) = *code;
        func_0205e754(&data_021c6854, id, func_0205ed58(code));
        s = func_0205e9b0(&data_021c6854, id);
        if (flag == 0) {
            if (Unk_0205ddc8_In(code, 0x13a0, 0x13a7)) {
                u32 f = func_0205cdbc();
                func_0205ca94(f, code, a5, 0, 0);
                u32 h = func_0210629c(func_0205c91c(f));
                u32 h2 = func_0210629c(s);
                func_02063a5c(h, h2, data_020dc454, data_020dc45c);
                func_02063a1c(h, h2, data_020dc454, data_020dc45c);
            }
        }
        func_0205e730(&data_021c6854, id);
        u8 *slot = (u8 *)func_0205e7f0(&data_021c6854, id);
        func_02054b70(slot, s);
        s32 kind = func_0205ed0c(code);
        if (kind == 0x2b)
            goto done;
        func_02054800(slot, func_0205e9a8(&data_021c6854, id));
        func_02054b38(slot, func_0205e9a8(&data_021c6854, id));
        if (kind == 0x27) {
            u32 a1 = func_0205e9a8(&data_021c6854, id);
            func_0205e958(&data_021c6854, id, func_020e8628(a1, 0x210, 4), 0x210);
            func_0205e934(&data_021c6854, id, a1);
            func_020e8628(a1, 0x1c, 4);
            u32 *p = func_0205e7d0(&data_021c6854, id);
            Unk_0205e310_P *pp = (Unk_0205e310_P *)p;
            pp->unk_18 = 0;
            pp->unk_1c = 0;
            func_0205e8cc(&data_021c6854, id, 0);
            func_0205e970(&data_021c6854, id);
            u32 q = func_02106670(func_02106654(), 0);
            u32 w = *(u32 *)(slot + 0x5c);
            func_02055bcc(p, w, func_0205e940(&data_021c6854, id));
            func_02055b38(p, q, 1, 0x1000, 0);
            func_02055a9c(p, func_020554c0(slot));
        }
        u32 a2 = func_0205e9a8(&data_021c6854, id);
        u32 n = func_020e8af4(a2);
        func_0205e988(&data_021c6854, id, func_020e8628(a2, n, 4), n);
        func_0205e87c(&data_021c6854, id, kind, 0, 0);
        func_02054710(slot);
        if (flag == 0)
            func_020554a0(slot, func_0205e61c, 6, 1, o, 0);
        goto done;
    err:
        *func_0205e7c0(&data_021c6854, id) = 0xfff1;
    }
done:
    if (Unk_0205ddc8_In(code, 0x1375, 0x1375)) {
        func_0205fd0c(o->unk_28, id, x, 1);
    } else if (*code >= 0x1374 && *code <= 0x1374) {
        func_0205fd0c(o->unk_28, id, x, 0);
    } else if ((*code >= 0x137a && *code <= 0x137a) || (*code >= 0x137b && *code <= 0x137b)) {
        func_0205fd0c(o->unk_28, id, x, 2);
    } else {
        func_0205fd0c(o->unk_28, id, x, 3);
    }
    if (Unk_0205ddc8_In(code, 0x1374, 0x1374) || (*code >= 0x1375 && *code <= 0x1375))
        func_0205f92c(o->unk_28, 1);
}

void func_0205e24c(Unk_0205dfb8_Obj *o, u16 *code, u32 c) {
    u32 id = o->unk_00;
    func_0205e274(o);
    func_0205e310(o, id, 0, code, c, 0);
}

void func_0205e5e8(Unk_0205dfb8_Obj *o) {
    Unk_0205dfb8_P *p = (Unk_0205dfb8_P *)o->unk_04;
    if (p->unk_2c != 0) {
        func_020543b4(func_0205e7f0(&data_021c6854, *p->unk_2c), o);
    }
    o->unk_24 = (u32)func_0205e61c;
    o->unk_92 = 1;
}
}
