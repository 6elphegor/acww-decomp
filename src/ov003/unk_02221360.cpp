#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_ov003_02221364_Vec {
    s32 x, y, z;
};

struct Unk_ov003_02221524_Slot {
    u8 pad_00[0x80];
    s32 unk_80;
    u8 pad_84[0x1fc - 0x84];
    u8 unk_1fc;
    u8 pad_1fd[3];
    s32 unk_200;
    s32 unk_204;
    struct {
        s32 a;
        s32 b;
    } unk_208;
    u8 pad_210[0x224 - 0x210];
    u8 unk_224;
    u8 pad_225[2];
    s8 unk_227;
    u8 pad_228[4];
    void *unk_22c;
    u8 pad_230[0x23c - 0x230];
    u8 unk_23c;
    u8 pad_23d[0x24c - 0x23d];
};

struct Unk_ov003_02221ab0_Ent {
    u8 pad_00[0x40];
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    u8 pad_4c[0x54 - 0x4c];
    s32 unk_54;
    s32 unk_58;
    s32 unk_5c;
    Unk_ov003_02221364_Vec unk_60;
    u8 pad_6c[0x78 - 0x6c];
    s8 unk_78;
    u8 pad_79[3];
    s32 unk_7c;
    u8 unk_80;
    u8 pad_81[3];
    s32 unk_84;
    s32 unk_88;
    s32 unk_8c;
    s32 unk_90;
    u8 unk_94;
    u8 pad_95;
    u16 unk_96;
    u16 unk_98;
    u16 unk_9a;
    s32 unk_9c;
    u8 unk_a0;
    u8 pad_a1[3];
};

struct Unk_ov003_022216f8_MFP {
    void (*unk_00)();
    s32 unk_04;
};

struct Unk_ov003_02221498_Tbl {
    Unk_ov003_022216f8_MFP unk_00;
    Unk_ov003_022216f8_MFP unk_08;
};

class Unk_0209c15c {
public:
    Unk_0209c15c();
    ~Unk_0209c15c();
    u32 unk_00[6];
};

class Unk_ov003_0223498c : public Unk_020d8c7c {
public:
    Unk_ov003_0223498c();
    virtual ~Unk_ov003_0223498c();

    /* 0x50 */ Unk_0209c15c unk_50;
    /* 0x68 */ Unk_0209c15c unk_68;
    /* 0x80 */ s32 unk_80;
};

typedef void (Unk_ov003_0223498c::*Unk_ov003_0222144c_Fn)(void *, void *);
struct Unk_ov003_0222144c_Ent {
    Unk_ov003_0222144c_Fn enter;
    Unk_ov003_0222144c_Fn exit;
};

extern "C" {
extern Unk_ov003_0222144c_Ent data_ov003_02257b90[];
extern u32 data_ov003_02257be0;
extern u8 data_ov003_02257be4[];
extern u8 data_ov003_02257be8[];
extern u8 data_ov003_02257c38[];
extern u32 data_ov003_02257ce0[];
extern Unk_ov003_02221524_Slot data_ov003_0225812c[];
extern Unk_ov003_02221ab0_Ent data_ov003_02257e9c[];
extern u32 data_ov003_0223476c;
extern void *data_021f482c;
extern void *data_021c3070;
extern Unk_ov003_02221364_Vec data_021c309c;
extern void *data_020cbb18;
extern u8 data_ov003_02234a74[];
extern u8 data_ov003_02234a80[];
extern u8 data_ov003_02234a94[];
extern u8 data_ov003_0223498c[];
extern u8 data_0213b91c[];
extern u8 data_0213b954[];

void func_0205c020();
void func_0205c004();
void func_0205bfec();
void func_0205bfd0();
void func_0209c1a4(void *p, s32 n, s32 a, s32 b, s32 c, void *d, void *e, void *f);
s32 func_020641ec(u32 id, void *g, s32 a, u32 b);
void func_02003e80(void *self, Unk_ov003_02221364_Vec *v);
void func_02003c70(void *self, Unk_ov003_02221364_Vec *v);
void func_02003ecc(void *self);
void func_02003cbc(void *self);
BOOL func_02072e44(void *self);
BOOL func_020729cc(void *self, s32 i);
u32 func_0204f4e0(u8 i);
u32 func_0204f4c8(u8 i);
s32 func_0204f4a4(Unk_ov003_02221364_Vec *v, s32 *p, u8 i);
void func_0204f4f8(u8 i, s32 a, s32 b, s32 c, s32 d);
void func_020902f8(s32 v);
void func_0205fbbc(void *p, s32 z);
void func_020546ec(void *p);
void func_02054b14(void *p);
void func_0209c0b4(void *p);
void func_0209c0c8(void *p);
void func_0209c224(void *p, void *q);
void func_0209c25c(void *p, void *q);
void func_0209c2d8(void *p);
void func_0209c2dc(void *p);
void func_0209c128(void *p);
void func_0209c140(void *p);
void func_0209c364(void *p);
void func_0209c370(void *p);
void func_02055c38(void *p);
void func_02055cac(void *p);
void func_020548a0(void *p);
void func_020548d0(void *p);
void func_02054e24(void *p);
void func_02054e3c(void *p);
void func_0203239c(void *p);
void func_020323b0(void *p);
void func_020f43fc(void *p);
void func_020f440c(void *p);

s32 func_ov003_0222034c(void *p, void *v, s32 a, s32 b, s32 c);
s32 func_ov003_02220844(void *a, void *b, s32 c);
void func_ov003_02220128(void *a, s32 b, void *c);
void func_ov003_02220388(void *b);
s32 func_ov003_02223310(s32 a, s32 b);
BOOL func_ov003_022217ac(void *a, s32 idx);
BOOL func_ov003_022216cc(u8 *a);
void func_ov003_0222144c(void *a, s32 idx, u8 *b, void *c);
void func_ov003_022218f4(void *p);
void func_ov003_022218f8(u8 *p);
BOOL func_ov003_02221ab0(void *a, u8 idx);
BOOL func_ov003_02221b34(void *a, u8 idx, u32 v, Unk_ov003_02221364_Vec *p);
BOOL func_ov003_02221b78(void *a, u8 idx);
void func_ov003_02221b94(void *a, s32 idx);

void func_ov003_02221360() {
}

void func_ov003_02221364(u8 *a, u8 *b, s32 c) {
    if (data_021c3070 != 0) {
        Unk_ov003_02221364_Vec v;
        v = data_021c309c;
        if (func_ov003_0222034c(b + 0x12c, &v, 0xa000, 0x10000, 0xa000)) {
            func_ov003_022217ac(a, c);
            if (b[0x7f] != 0) {
                func_ov003_022216cc(a);
            }
        }
    }
}

void func_ov003_022213cc() {
}

void func_ov003_022213d0(u8 *a, u8 *b, s32 c) {
    if (a[0x84] == 0) {
        u32 t = b[0x1fc];
        if (t == 3) {
            if (b[0x23c] == 0) {
                if (func_ov003_02220844(a, b, 0) != 0) {
                    func_ov003_0222144c(a, 1, b, (void *)c);
                }
                a[0x84] = 1;
            }
        } else if (t == 4) {
            if (b[0x23c] == 0) {
                if (func_ov003_02220844(a, b, 1) != 0) {
                    func_ov003_0222144c(a, 1, b, (void *)c);
                }
                a[0x84] = 1;
            }
        }
    }
}

void func_ov003_02221448() {
}

void func_ov003_0222144c(void *a, s32 idx, u8 *b, void *c) {
    if (idx >= 0 && idx < 5) {
        *(s32 *)(b + 0x80) = idx;
        s32 i = *(s32 *)(b + 0x80);
        Unk_ov003_0222144c_Ent *e = data_ov003_02257b90 + i;
        if (e->enter) {
            (((Unk_ov003_0223498c *)a)->*(e->enter))(b, c);
        }
    }
}

void func_ov003_02221498(void *a, u8 *b, void *c) {
    Unk_ov003_02221364_Vec v1;
    Unk_ov003_02221364_Vec *pv = (Unk_ov003_02221364_Vec *)(b + 0x120);
    v1.x = pv->x;
    v1.y = pv->y;
    v1.z = pv->z;
    func_02003e80(b, &v1);
    Unk_ov003_02221364_Vec v2;
    pv = (Unk_ov003_02221364_Vec *)(b + 0x120);
    v2.x = pv->x;
    v2.y = pv->y;
    v2.z = pv->z;
    func_02003c70(b + 0x40, &v2);
    if (data_ov003_02257b90[*(s32 *)(b + 0x80)].exit) {
        (((Unk_ov003_0223498c *)a)->*(data_ov003_02257b90[*(s32 *)(b + 0x80)].exit))(b, c);
    }
    func_ov003_02220388(b);
}


BOOL func_ov003_02221524(u8 *a) {
    func_0209c1a4(a + 0x50, 6, 0, 0, 0x800, (void *)func_0205c020, (void *)func_0205c004, data_ov003_02234a74);
    func_0209c1a4(a + 0x68, 1, 0x400, 0x80, 0x800, (void *)func_0205bfec, (void *)func_0205bfd0, data_ov003_02234a80);
    *(s32 *)(a + 0x80) = func_020641ec(data_ov003_0223476c, data_021f482c, 4, 0);
    Unk_ov003_02221524_Slot *s = data_ov003_0225812c;
    s32 i = 0;
    s32 z = 0;
    do {
        func_ov003_02220128(s, *(s32 *)(a + 0x80), a + 0x50);
        if (i < 3) {
            s->unk_1fc = 3;
        } else if (i < 6) {
            s->unk_1fc = 4;
        }
        s32 *p208 = &s->unk_208.a;
        p208[0] = i;
        p208[1] = z;
        *((u8 *)s + 0x211) = i;
        *(u16 *)((u8 *)s + 0x212) = i * 0x190 + 0x960;
        func_02003ecc(s);
        func_02003cbc((u8 *)s + 0x40);
        s++;
        i++;
    } while (i < 6);
    u8 *q = (u8 *)data_ov003_02257e9c;
    s32 k = 0;
    void *net = data_020cbb18;
    for (; k < 4; k++) {
        if (func_02072e44(net) && !func_020729cc(net, k) && func_0204f4e0(k) == 3) {
            func_0204f4f8(k, 6, -1, z, z);
        }
        func_02003ecc(q);
        q += 0xa4;
    }
    return TRUE;
}


void func_ov003_02221684(u8 *a) {
    data_ov003_02257be0 = 0;
    func_020546ec(data_ov003_02257c38);
    func_02054b14(data_ov003_02257c38);
    func_0209c0b4(data_ov003_02257be8);
    func_0209c224(a + 0x68, data_ov003_02257be4);
    data_ov003_02257ce0[0x34 / 4] = 0;
    data_ov003_02257ce0[0x38 / 4] = 0;
}

BOOL func_ov003_022216cc(u8 *a) {
    data_ov003_02257be0 = 2;
    func_0209c25c(a + 0x68, data_ov003_02257be4);
    func_0209c0c8(data_ov003_02257be8);
    return TRUE;
}

void func_ov003_022216f8(void *a, s32 idx) {
    if (idx >= 0 && idx < 6) {
        Unk_ov003_02221524_Slot *s = &data_ov003_0225812c[idx];
        s->unk_80 = 0;
        func_020902f8(s->unk_204);
        s->unk_204 = -1;
        if (s->unk_1fc == 0) {
            s->unk_1fc = 3;
        } else if (s->unk_1fc == 1) {
            s->unk_1fc = 4;
        }
        s32 *p208 = (s32 *)((u8 *)s + 0x208);
        p208[0] = idx;
        p208[1] = 0;
        if (s->unk_22c != 0) {
            Unk_ov003_02221ab0_Ent *ent = data_ov003_02257e9c + s->unk_227;
            if (ent->unk_40 != 1) {
                func_0205fbbc(s->unk_22c, 0);
                s->unk_22c = 0;
                s->unk_227 = -1;
                s->unk_23c = 0;
            }
            s->unk_224 = 0;
        }
    }
}

BOOL func_ov003_022217ac(void *a, s32 idx) {
    BOOL r = FALSE;
    if (idx >= 0 && idx < 6) {
        Unk_ov003_02221524_Slot *s = data_ov003_0225812c + idx;
        s->unk_80 = 2;
        r = TRUE;
    }
    return r;
}

u8 *func_ov003_02221874(u8 *a) {
    func_020f43fc(a);
    return a;
}

Unk_ov003_02221ab0_Ent *func_ov003_02221884(Unk_ov003_02221ab0_Ent *a) {
    func_020f440c(a);
    a->unk_40 = 0;
    a->unk_44 = -1;
    a->unk_48 = 0;
    a->unk_78 = -1;
    a->unk_80 = 0;
    a->unk_7c = 0;
    a->unk_84 = 0x1333;
    a->unk_88 = 0x1333;
    a->unk_8c = 0x1333;
    a->unk_94 = 0;
    a->unk_96 = 0;
    a->unk_98 = 0;
    a->unk_9a = 0;
    a->unk_9c = -1;
    a->unk_a0 = 0;
    a->unk_54 = 0x1000;
    a->unk_58 = 0x1000;
    a->unk_5c = 0x1000;
    return a;
}

void func_ov003_022218f4(void *p) {
}

void func_ov003_022218f8(u8 *p) {
    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
}

u8 *func_ov003_02221904(u8 *a) {
    *(u8 **)(a + 0x11c) = data_ov003_02234a94;
    func_02055c38(a + 0x11c);
    func_020548a0(a + 0x58);
    func_0209c128(a + 8);
    func_0209c364(a + 4);
    return a;
}

u8 *func_ov003_0222193c(u8 *a) {
    func_0209c370(a + 4);
    func_0209c140(a + 8);
    func_020548d0(a + 0x58);
    func_02055cac(a + 0x11c);
    *(u8 **)(a + 0x11c) = data_ov003_02234a94;
    *(u32 *)a = 0;
    func_0209c0c8(a + 8);
    return a;
}

u8 *func_ov003_02221980(u8 *a) {
    *(u8 **)a = data_ov003_02234a94;
    func_02055c38(a);
    return a;
}

u8 *func_ov003_02221998(u8 *a) {
    func_ov003_022218f4(a + 0x248);
    func_020548a0(a + 0x144);
    func_02054e24(a + 0x84);
    func_0209c364(a + 0x7c);
    func_0203239c(a + 0x4c);
    func_020f43fc(a);
    return a;
}

u8 *func_ov003_022219dc(u8 *a) {
    func_020f440c(a);
    *(volatile u8 **)(a + 0x40) = data_0213b91c;
    *(volatile u8 **)(a + 0x40) = data_0213b954;
    func_020323b0(a + 0x4c);
    func_0209c370(a + 0x7c);
    func_02054e3c(a + 0x84);
    func_020548d0(a + 0x144);
    *(u32 *)(a + 0x208) = 0;
    *(u32 *)(a + 0x20c) = 0;
    func_ov003_022218f8(a + 0x248);
    *(s8 *)(a + 0x7e) = -1;
    *(s32 *)(a + 0x244) = -1;
    *(s32 *)(a + 0x80) = 0;
    a[0x1fc] = 2;
    a[0x201] = 0;
    *(s32 *)(a + 0x204) = -1;
    *(s8 *)(a + 0x227) = -1;
    *(s32 *)(a + 0x22c) = 0;
    a[0x224] = 0;
    a[0x23c] = 0;
    *(s32 *)(a + 0x120) = 0x1000;
    *(s32 *)(a + 0x124) = 0x1000;
    *(s32 *)(a + 0x128) = 0x1000;
    return a;
}

BOOL func_ov003_02221ab0(void *a, u8 idx) {
    if (idx >= 4) {
        return FALSE;
    }
    Unk_ov003_02221ab0_Ent *e = &data_ov003_02257e9c[idx];
    volatile Unk_ov003_02221364_Vec v;
    Unk_ov003_02221364_Vec *pv = &e->unk_60;
    v.x = pv->x;
    v.y = pv->y;
    v.z = pv->z;
    s32 st = e->unk_40;
    if (st == 3) {
        if (func_ov003_02223310(idx, 0) == 0) {
            e->unk_40 = 4;
            return FALSE;
        }
    } else if (st == 0) {
        if (func_ov003_02223310(idx, 1) == 0) {
            e->unk_40 = 4;
            return FALSE;
        }
    } else if (st == 2) {
        e->unk_40 = 3;
        if (func_ov003_02223310(idx, 0) == 0) {
            e->unk_40 = 4;
            return FALSE;
        }
    }
    return TRUE;
}

BOOL func_ov003_02221b34(void *a, u8 idx, u32 v, Unk_ov003_02221364_Vec *p) {
    if (idx >= 4) {
        return FALSE;
    }
    Unk_ov003_02221ab0_Ent *e = &data_ov003_02257e9c[idx];
    if (e->unk_40 != 0) {
        return FALSE;
    }
    Unk_ov003_02221364_Vec *d = &e->unk_60;
    d->x = p->x;
    d->y = p->y;
    d->z = p->z;
    s32 *p90 = &e->unk_90;
    *p90 = v;
    e->unk_40 = 1;
    e->unk_48 = 2;
    return TRUE;
}

BOOL func_ov003_02221b78(void *a, u8 idx) {
    if (idx >= 4) {
        return FALSE;
    }
    Unk_ov003_02221ab0_Ent *e = data_ov003_02257e9c + idx;
    e->unk_40 = 4;
    return TRUE;
}

void func_ov003_02221b94(void *a, s32 idx) {
    u32 r = func_0204f4c8(idx);
    Unk_ov003_02221364_Vec v;
    v.y = -0x1333;
    if (func_0204f4a4(&v, &v.z, idx)) {
        if (func_ov003_02221b34(a, idx, r, &v)) {
            func_0204f4f8(idx, 3, -1, 0, 0);
        } else {
            Unk_ov003_02221ab0_Ent *e = data_ov003_02257e9c + idx;
            e->unk_40 = 4;
        }
    }
}

void func_ov003_02221bfc(void *a) {
    s32 i = 0;
    void *net = data_020cbb18;
    volatile s32 zero = 0;
    s32 m1 = -1;
    s32 z = 0;
    for (; i < 4; i++) {
        if (func_020729cc(net, i) == 0) {
            u32 t = func_0204f4e0(i);
            if (t == 9) {
                t = 1;
            }
            switch (t) {
            case 0:
                func_ov003_02221b94(a, i);
                break;
            case 6:
                data_ov003_02257e9c[i].unk_80 = 1;
                func_ov003_02221b94(a, i);
                break;
            case 1:
                if (func_ov003_02221b78(a, i)) {
                    func_0204f4f8(i, 8, m1, z, z);
                } else {
                    data_ov003_02257e9c[i].unk_40 = 4;
                }
                break;
            case 2:
                if (func_ov003_02221ab0(a, i)) {
                    func_0204f4f8(i, 8, m1, zero, zero);
                } else {
                    data_ov003_02257e9c[i].unk_40 = 4;
                }
                break;
            case 3:
            case 4:
            case 5:
            case 7:
            case 8:
            case 9:
                break;
            }
        }
    }
}

}

Unk_ov003_0223498c::~Unk_ov003_0223498c() {
}

Unk_ov003_0223498c::Unk_ov003_0223498c() {
    unk_80 = 0;
}
