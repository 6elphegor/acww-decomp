#include "types.h"

struct Unk_ov003_02227cd0_Vec {
    s32 x, y, z;
};
typedef Unk_ov003_02227cd0_Vec Vec3;

struct Unk_ov003_02227cd0_Blk {
    s64 v[6];
};

struct Unk_ov003_02234b04_Rec {
    u8 unk_00;
    u8 unk_01;
    u16 unk_02;
    u16 unk_04;
};

// One 0x25c-byte entry of the table at data_ov003_0225a17c (8 entries)
struct Unk_ov003_02227cd0_Rec {
    u8 unk_00[8];                      // 0x00
    s32 unk_08;                        // 0x08
    u8 unk_0c[0x18 - 0x0c];            // 0x0c
    s32 *unk_18;                       // 0x18
    u8 unk_1c[0x20 - 0x1c];            // 0x1c
    u8 unk_20[0x50 - 0x20];            // 0x20
    u8 unk_50[0x9c - 0x50];            // 0x50
    u8 unk_9c[0xec - 0x9c];            // 0x9c
    u32 unk_ec[(0xf4 - 0xec) / 4];     // 0xec
    u32 unk_f4;                        // 0xf4
    u32 unk_f8[(0x108 - 0xf8) / 4];    // 0xf8
    u8 unk_108[0x130 - 0x108];         // 0x108
    u8 unk_130[0x170 - 0x130];         // 0x130
    void (*unk_170)(Unk_ov003_02227cd0_Rec *);  // 0x170
    u8 unk_174[0x204 - 0x174];         // 0x174
    Vec3 unk_204;                      // 0x204
    Vec3 unk_210;                      // 0x210
    s32 unk_21c;                       // 0x21c
    u8 unk_220[4];                     // 0x220
    s32 unk_224;                       // 0x224
    u8 unk_228[0x230 - 0x228];         // 0x228
    u8 unk_230[2];                     // 0x230
    s16 unk_232;                       // 0x232
    s16 unk_234;                       // 0x234
    s16 unk_236;                       // 0x236
    u8 unk_238[2];                     // 0x238
    s16 unk_23a;                       // 0x23a
    u8 unk_23c[0x249 - 0x23c];         // 0x23c
    u8 unk_249;                        // 0x249
    u8 unk_24a[3];                     // 0x24a
    s8 unk_24d;                        // 0x24d
    u8 unk_24e[2];                     // 0x24e
    u8 unk_250;                        // 0x250
    u8 unk_251;                        // 0x251
    u8 unk_252[2];                     // 0x252
    u8 unk_254;                        // 0x254
    u8 unk_255;                        // 0x255
    u8 unk_256[2];                     // 0x256
    u8 unk_258;                        // 0x258
    u8 unk_259[3];                     // 0x259
};
typedef Unk_ov003_02227cd0_Rec Rec;

struct Unk_020cbb18_Ptr {
    u8 unk_00[0x64];
    u32 unk_64;
};

class Unk_ov003_02227f20_Slot {
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
    virtual void vfunc_64();
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
    virtual BOOL vfunc_ac();
};

class Unk_0203389c {
public:
    u8 pad_00[0x44];
    s32 func_02033914(s32 a);
};

class Unk_0203398c : public Unk_0203389c {
public:
    Unk_0203398c() {}
    Unk_0203398c *func_020339bc(Vec3 *v, s32 a, s32 b);
    ~Unk_0203398c();
};

struct Unk_ov003_022283d0_Own {
    u8 unk_00[0x50];
    u8 unk_50[0x18];
    u8 unk_68[0x18];
    u8 unk_80[0x18];
    void *unk_98;
    void *unk_9c;
};

struct Unk_ov003_02234c6c_Ent {
    void (*unk_00)(Rec *);
    u32 unk_04;
};

extern "C" {
extern Unk_020cbb18_Ptr *data_020cbb18;
extern Unk_ov003_02234c6c_Ent data_ov003_02234c6c[];
extern Rec data_ov003_0225a17c[];
extern u8 data_ov003_02258ef4;
extern u8 data_ov003_02258ef8;
extern u8 data_ov003_022595b0;
extern Unk_ov003_02234b04_Rec data_ov003_02234b04[];
extern void *data_021f482c;
extern char data_ov003_02234e4c[];
extern char data_ov003_02234e60[];
extern char data_ov003_02234e74[];
extern char data_ov003_02234e88[];
extern char data_ov003_02234e9c[];
extern char data_ov003_02234eb0[];
extern char data_ov003_02234ec4[];
extern char data_ov003_02234ed0[];
extern char data_ov003_02234edc[];
extern char data_ov003_02234ee8[];

BOOL func_02072e88(Unk_020cbb18_Ptr *p, u32 v);
BOOL func_020a62a0();
s32 func_02095670(u8 *a, s32 *b, s32 *c, s32 d, s32 e);
void *func_02095204(s32 a);
Unk_ov003_02227f20_Slot *func_02081708(s32 i);
s32 func_020e9650(void *a, void *b);
void func_ov068_022687c0(void *p);
BOOL func_02063f18(char *s);
s32 func_020639e8(char *buf, char *fmt, ...);
void func_020309d4(void *obj, void *pos, void *prev, s32 a, s32 b, s32 c, s32 d);
void func_02088b20(void *obj, void *v, s32 a, s32 b, s32 flags);
void func_02003c70(void *obj, void *v);
void func_02003cbc(void *obj);
void func_020547e4(void *obj);
void func_020566bc(void *e);

void func_02133ef8(void *p, s32 n);
void *func_0209c25c(void *sub, void *p);
BOOL func_0209c0d0(void *p, void *h, char *path);
void *func_0209c0ac(void *p);
void func_020555ec(void *o, void *a, s32 b);
void *func_0209c348(void *h);
void *func_020641ec(char *path, void *h, s32 a, s32 b);
s32 func_02106788(void *r);
s32 func_021067a4(s32 a, s32 b);
s32 func_021065dc(void *r);
s32 func_021065f8(s32 a, s32 b);
BOOL func_02054800(void *o, void *h);
void func_02054720(void *o, s32 m, s32 a, s32 b, s32 c, s32 d);
void func_02054710(void *o);
void func_0205668c(void *p, u32 a, s32 b, s32 c, u32 d);
s32 func_02106654();
s32 func_02106670(s32 a, s32 b);
BOOL func_02055bcc(Rec *e, void *a, void *b);
void func_02055b38(Rec *e, s32 m, s32 a, s32 b, s32 c);
void *func_020554c0(void *o);
void func_02055a9c(Rec *e, void *a);

void func_ov003_02225cb0();
BOOL func_ov003_02225e34(s8 *a, s8 *b, s32 c);
BOOL func_ov003_02212824(s32 a);
s32 func_ov003_0222644c(void *a, s32 b, s32 c, s32 d);
s32 func_ov003_022264f0(void *a, s32 kind, u32 sub, s32 flag);
void func_ov003_02226768(void *a, s32 b);
void func_ov003_02226874(void *a, s32 flag, s32 idx, s32 x, s32 z);
void func_ov003_02226a9c(void *a, Rec *e, s32 flag);
void func_ov003_0222603c(Rec *e);
s32 func_ov003_02227544(void *a, Rec *e);
void func_ov003_02227624(void *a);
void func_ov003_02227740(void *a);
void func_ov003_02227970(void *a);
s32 func_ov003_02229910(Rec *e);
void func_ov003_022287c8(void *a, Rec *e, s32 v);
}

extern "C" void func_ov003_02227cd0(void *self) {
    s8 b[8];
    s32 px, py;
    s32 r4 = func_02072e88(data_020cbb18, data_020cbb18->unk_64);
    if (r4 == 0 || func_020a62a0() != 0) {
        if (data_ov003_02258ef4 % 20 == 0) {
            func_ov003_02225cb0();
        }
        data_ov003_02258ef4++;
        u32 c = data_ov003_02258ef4;
        if (c == 0x3c) {
            func_ov003_0222644c(self, 1, 0, -1);
            data_ov003_02258ef4 = 0;
        } else if (c == 0x28 && r4 == 0) {
            b[0] = 0;
            b[1] = -1;
            if (func_ov003_02225e34(&b[0], &b[1], 1)) {
                if (func_ov003_0222644c(self, 1, b[0], b[1])) {
                    data_ov003_02258ef4 = 0;
                }
            }
        } else if (c == 0x14 && r4 == 0) {
            b[2] = 0;
            b[3] = -1;
            if (func_ov003_02225e34(&b[2], &b[3], 0)) {
if (func_ov003_022264f0(self, b[2], (u8)b[3], 2)) {
                    func_ov068_022687c0(&data_ov003_022595b0);
                    data_ov003_02258ef8 = 0;
                }
            }
        }
    }
    if (r4 != 0) {
        u8 i;
        for (i = 0; i < 4; i++) {
            if (func_02095670((u8 *)&b[4], &px, &py, -1, i) && (u8)b[4] == 0) {
                func_ov003_02226874(self, 1, i, px, py);
            }
        }
    } else {
        func_ov003_02226768(self, 1);
        func_ov003_02226768(self, 2);
    }
}

extern "C" s32 func_ov003_02227e08(Vec3 *out, u32 idx) {
    Rec *e = &data_ov003_0225a17c[(u8)(idx & 0xf)];
    Vec3 *v = &e->unk_204;
    out->x = v->x;
    out->y = v->y;
    out->z = v->z;
    return e->unk_24d;
}

extern "C" BOOL func_ov003_02227e40(u32 idx) {
    Rec *e = &data_ov003_0225a17c[(u8)(idx & 0xf)];
    switch (e->unk_24d) {
    case 9:
    case 16: case 17: case 18: case 19: case 20:
    case 31:
    case 33: case 34:
    case 36:
    case 38: case 39: case 40: case 41: case 42: case 43: case 44: case 45: case 46: case 47:
    case 52:
        return TRUE;
    case 10: case 11: case 12: case 13: case 14: case 15:
    case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30:
    case 32:
    case 35:
    case 37:
    case 48: case 49: case 50: case 51:
        break;
    }
    return FALSE;
}

extern "C" s32 func_ov003_02227ed4(u8 *out, u32 idx) {
    Rec *e = &data_ov003_0225a17c[(u8)(idx & 0xf)];
    s32 r = e->unk_24d;
    if (r >= 0) {
        if (e->unk_254 >= e->unk_255) {
            *out = 1;
        } else {
            *out = 0;
        }
    }
    return r;
}

extern "C" void func_ov003_02227f20(void *a, Rec *e) {
    Unk_ov003_02227f20_Slot *o;
    u8 ok;
    s32 px, py;
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) != 0) {
        if (func_020a62a0() != 0) {
            u8 i;
            s32 z0 = 0, z1 = 0;
            for (i = 0; i < 4; i++) {
                if (func_02095670(&ok, &px, &py, -1, i) && ok == 0 && func_ov003_02212824(i)) {
                    Vec3 v;
                    v.x = px;
                    v.y = z0;
                    v.z = py;
                    s32 lim = e->unk_224;
                    BOOL t;
                    if (func_020e9650(&e->unk_204, &v) < lim) {
                        t = TRUE;
                    } else {
                        t = z1;
                    }
                    if (t) {
                        e->unk_254 = 0xfe;
                    }
                }
            }
        }
    } else {
        if (func_ov003_02212824(4)) {
            u8 *p = (u8 *)func_02095204(4);
            if (p) {
                s32 lim = e->unk_224;
                if (func_020e9650(&e->unk_204, p + 0x5c) < lim) {
                    e->unk_254 = 0xfe;
                }
            }
        } else {
            u8 i;
            void *pv = &e->unk_204;
            for (i = 0; i < 8; i++) {
                o = func_02081708(i);
                if (o) {
                    s32 lim = e->unk_224;
                    if (func_020e9650(pv, (u8 *)o + 0x5c) < lim) {
                        if (o->vfunc_ac()) {
                            e->unk_254 = 0xfe;
                        }
                    }
                }
            }
        }
    }
}

extern "C" BOOL func_ov003_0222802c(void *self) {
    func_ov003_02227970(self);
    if (func_02072e88(data_020cbb18, data_020cbb18->unk_64) == 0) {
        func_ov003_02227740(self);
    }
    func_ov003_02227624(self);
    func_ov003_02227cd0(self);
    return TRUE;
}

extern "C" void func_ov003_02228308(void *a, Rec *e) {
    if (e->unk_170 != 0) {
        s32 t = e->unk_24d;
        switch (t) {
        case 0x1e:
            if (e->unk_251 == 4 || e->unk_251 == 5 || e->unk_251 == 0x11) {
                s32 v = e->unk_232;
                if (v > 5) {
                    e->unk_232 = v - 1;
                } else {
                    func_ov003_02229910(e);
                }
            }
            break;
        case 0x31:
            switch (e->unk_251) {
            case 4:
            case 5:
            case 7:
            case 0x11: {
                s32 v = e->unk_232;
                if (v > 0) {
                    e->unk_232 = v - 1;
                } else {
                    func_ov003_02229910(e);
                }
                break;
            }
            }
            break;
        case 0x36:
        case 0x37: {
            s16 *p = &e->unk_236;
            s32 v = *p;
            if (v > 0 && v <= 0x12c) {
                if (v > 0x1f) {
                    *p = v - 1;
                } else {
                    func_ov003_02229910(e);
                }
            }
            break;
        }
        }
    }
}

extern "C" void func_ov003_02228060(void *a, Rec *e, s32 flags, s32 kind) {
    u8 r4 = e->unk_249;
    s32 r7 = func_02072e88(data_020cbb18, data_020cbb18->unk_64);
    if (r7 != 0 && e->unk_258 != 0) {
        r4 = 1;
    }
    if (r4 == 0) {
        func_ov003_02228308(a, e);
    }
    if (kind == 1) {
        if (r7 == 0 || func_020a62a0() != 0) {
            s16 *p = &e->unk_234;
            if (r4 != 0) {
                *p = 0x4b0;
            } else if (*p > 0) {
                s32 v = *p - 1;
                *p = v;
                if (*p == 0) {
                    e->unk_250 = 4;
                    return;
                }
            }
        }
    }
    if (e->unk_170 == 0) {
        return;
    }
    if (r4 == 0 && (u32)(kind - 2) > 1) {
        return;
    }
    s32 t4 = e->unk_24d;
    u32 t7 = e->unk_251;
    func_ov003_0222603c(e);
    if (t7 == 0x10 || t4 < 0) {
        goto L258;
    }
    if (t7 == 0xa) {
        goto L226;
    }
    {
        volatile BOOL big;
        void *volatile pp;
        Vec3 v1, v2;
        Vec3 *pv = &e->unk_204;
        v1.x = pv->x;
        v1.y = pv->y;
        v1.z = pv->z;
        pp = &e->unk_108;
        func_ov003_02227f20(a, e);
        e->unk_170(e);
        if (func_ov003_02227544(a, e) != 0) {
            if (kind == 3) {
                {
                    Unk_0203398c g;
                    g.func_020339bc(&e->unk_204, 0, 0);
                    if (g.func_02033914(0) > 0x4000) {
                        big = TRUE;
                    } else {
                        big = FALSE;
                    }
                }
                if (big) {
                    func_020309d4(&e->unk_20, &e->unk_204, &v1, e->unk_23a, data_ov003_02234b04[t4].unk_02, 0, 0xa);
                    goto after;
                }
            }
            func_020309d4(&e->unk_20, &e->unk_204, &v1, e->unk_23a, data_ov003_02234b04[t4].unk_02, 0, 0xb);
        }
    after:
        if (e->unk_24d == 0x33 && flags == 0) {
            e->unk_21c = 1;
        }
        flags |= 1 << (kind + 3);
        pv = &e->unk_204;
        v2.x = pv->x;
        v2.y = pv->y;
        v2.z = pv->z;
        if (e->unk_24d == 0x35) {
            u32 bits = (e->unk_f4 << 4) >> 16;
            if (bits >= 0x1e && bits < 0x28) {
                v2.y = v2.y - 0x1800;
            }
        }
        func_02088b20(pp, &v2, data_ov003_02234b04[t4].unk_04, 0xd48, (u8)flags);
    }
L226:
    if (data_ov003_02234b04[t4].unk_00 == 0) {
        func_020547e4(e->unk_50);
        if ((u8)(s8)(t4 - 0x3a) <= 1) {
            func_020566bc(e);
            *e->unk_18 = e->unk_08;
        }
    }
    goto L268;
L258:
    if (t4 == 0x14 || t4 == 0x37) {
        func_020547e4(e->unk_50);
    }
L268:
    if (t7 == 0xa) {
        func_ov003_022287c8(a, e, kind);
        return;
    }
    if (kind == 3 && t7 == 0x10) {
        func_ov003_02226a9c(a, e, 1);
    } else {
        func_ov003_02226a9c(a, e, 0);
    }
    {
        Vec3 v3;
        Vec3 *pv = &e->unk_204;
        v3.x = pv->x;
        v3.y = pv->y;
        v3.z = pv->z;
        func_02003c70(e->unk_174, &v3);
    }
}

extern "C" void func_ov003_022283d0(Unk_ov003_022283d0_Own *a, Rec *e, s32 mode) {
    struct { char name[0x11]; char path[0x17]; } l;
    s32 m;
    void *h2;
    BOOL ok;
    void *p130;
    u8 *obj;
    Unk_ov003_02234b04_Rec *rec;
    func_02133ef8(l.name, 0x11);
    func_02133ef8(l.path, 0x17);
    s32 t4 = e->unk_24d;
    if (t4 < 0 || t4 >= 0x3c) {
        return;
    }
    if (t4 < 10) {
        func_020639e8(l.name, data_ov003_02234e4c, t4);
    } else if (t4 < 0x14) {
        func_020639e8(l.name, data_ov003_02234e60, t4);
    } else if (t4 < 0x1e) {
        func_020639e8(l.name, data_ov003_02234e74, t4);
    } else if (t4 < 0x28) {
        func_020639e8(l.name, data_ov003_02234e88, t4);
    } else if (t4 < 0x32) {
        func_020639e8(l.name, data_ov003_02234e9c, t4);
    } else {
        func_020639e8(l.name, data_ov003_02234eb0, t4);
    }
    func_020639e8(l.path, data_ov003_02234ec4, l.name);
    if (!func_02063f18(l.path)) {
        return;
    }
    void *h;
    if (mode == 0) {
        h = func_0209c25c(a->unk_50, &e->unk_230);
    } else if (mode == 1) {
        h = func_0209c25c(a->unk_68, &e->unk_230);
    } else {
        h = func_0209c25c(a->unk_80, &e->unk_230);
    }
    p130 = e->unk_130;
    if (!func_0209c0d0(p130, h, l.path)) {
        return;
    }
    obj = e->unk_50;
    func_020555ec(obj, func_0209c0ac(p130), 0);
    rec = &data_ov003_02234b04[t4];
    if (rec->unk_00 != 0) {
        func_020639e8(l.path, data_ov003_02234ed0, l.name);
    } else {
        func_020639e8(l.path, data_ov003_02234edc, l.name);
    }
    if (!func_02063f18(l.path)) {
        return;
    }
    h2 = func_0209c348(h);
    void *r7;
    if (mode == 1) {
        if (t4 == 0x3a) {
            a->unk_98 = func_020641ec(l.path, data_021f482c, 4, 0);
            r7 = a->unk_98;
        } else {
            a->unk_9c = func_020641ec(l.path, data_021f482c, 4, 0);
            r7 = a->unk_9c;
        }
    } else {
        r7 = func_020641ec(l.path, h2, 4, 0);
    }
    if (r7 == 0) {
        return;
    }
    if (rec->unk_00 != 0) {
        m = func_021067a4(func_02106788(r7), 0);
    } else {
        m = func_021065f8(func_021065dc(r7), 0);
    }
    if (!func_02054800(obj, h2)) {
        return;
    }
    ok = TRUE;
    s32 sc = 0x1000;
    if (t4 == 0x35 || t4 == 9) {
        sc = 0;
    }
    func_02054720(obj, m, 0, sc, 0, 0);
    func_02054710(obj);
    if (t4 == 9) {
        func_0205668c(&e->unk_ec, 9, 1, 0, 9);
    }
    if ((u32)(t4 - 0x3a) <= 1) {
        func_020639e8(l.path, data_ov003_02234ee8, t4);
        ok = FALSE;
        if (func_02063f18(l.path)) {
            func_020641ec(l.path, h2, 4, 0);
            if (r7 != 0) {
                r7 = (void *)func_02106670(func_02106654(), 0);
                if (func_02055bcc(e, *(void **)(obj + 0x5c), h2)) {
                    func_02055b38(e, (s32)r7, 0, 0x1000, 0);
                    func_02055a9c(e, func_020554c0(obj));
                    ok = TRUE;
                }
            }
        }
    }
    if (ok) {
        Vec3 *pv = &e->unk_210;
        Vec3 sv = *pv;
        func_02003cbc(e->unk_174);
        data_ov003_02234c6c[t4].unk_00(e);
        e->unk_170 = (void (*)(Rec *))data_ov003_02234c6c[t4].unk_04;
        e->unk_250 = 3;
        e->unk_24a[0] = 0;
        func_ov003_02226a9c(a, e, 0);
        if (mode == 2) {
            pv = &e->unk_210;
            pv->x = sv.x;
            pv->y = sv.y;
            pv->z = sv.z;
        }
    }
}
