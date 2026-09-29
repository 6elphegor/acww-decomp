#include "types.h"

class Unk_0203e604_Obj {
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
    virtual void vfunc_4c(s32 a, s32 b);
    virtual void vfunc_50();
    virtual BOOL vfunc_54(Unk_0203e604_Obj *other);
    virtual BOOL vfunc_58(Unk_0203e604_Obj *other);
};

struct Unk_0203dad4_Task {
    /* 0x00 */ u32 unk_00;
    /* 0x04 */ Unk_0203dad4_Task *unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 pad[3];
    /* 0x0c */ u32 unk_0c;
    /* 0x10 */ u32 unk_10;
    /* 0x14 */ u8 unk_14;
    /* 0x15 */ u8 unk_15;
    /* 0x16 */ u8 unk_16;
    /* 0x17 */ u8 unk_17;
    /* 0x18 */ u8 unk_18;
    /* 0x19 */ u8 unk_19;
};

struct Unk_0203dc50_List {
    Unk_0203dad4_Task *unk_00;
};

typedef BOOL (*Unk_0203dbb8_Fn)(Unk_0203dad4_Task *);

extern "C" {
extern u32 data_021c39c8;
extern Unk_0203dad4_Task *data_021c39c0;
extern Unk_0203dc50_List data_021c39cc;
extern u8 data_021c3cc0;
extern u8 data_020d96d0;
extern Unk_0203dbb8_Fn data_020d95dc[];
extern Unk_0203dbb8_Fn data_020d9528[];
extern Unk_0203dbb8_Fn data_020d95a0[];
extern Unk_0203dbb8_Fn data_020d9564[];
extern s32 data_021eda68;
extern s32 data_020cbb18;

Unk_0203e604_Obj *func_02095204(s32 id);
u32 func_0203e630(Unk_0203e604_Obj *o);
Unk_0203e604_Obj *func_0203e604(u32 id);
Unk_0203dad4_Task *func_0203eb78();
void func_020652ec(Unk_0203dc50_List *l, Unk_0203dad4_Task *t);
void func_0203ebdc(Unk_0203dc50_List *l);
void func_020e79a0(Unk_0203dc50_List *l, Unk_0203dad4_Task *t);
void func_020a5d4c();
void func_020a5d0c();
void func_020a42c4();
void func_020d8c7c_vfunc_20(void *a, u32 b);
BOOL func_0203e2f4();
BOOL func_0203e3e8();
s32 func_0203e9ac();
void func_0203e994(u32 id, u32 v);
void func_0203e9a0(u32 id, u32 v);
void func_0203d640(u32 v);
void func_0203d5c8();
void func_0203e9d8();
s32 func_0203ea74(u32 id);
void func_0203ea08(u32 id);
BOOL func_020951d0();
BOOL func_02094f64(u32 v);
BOOL func_02094f84();
BOOL func_02094c38();
BOOL func_02094d60();
BOOL func_02094d88();
BOOL func_02094de0();
BOOL func_02094960();
void func_020949a0();
BOOL func_02094898();
u32 func_020b4934();
void func_020b4bbc(u32 a, u32 b);
BOOL func_02072e44(s32 v);
BOOL func_ov004_0222497c();
Unk_0203e604_Obj *func_0203e5d0(Unk_0203e604_Obj *o);
BOOL func_0203e4a8(Unk_0203e604_Obj *a, Unk_0203e604_Obj *b);
s32 func_0203e400(Unk_0203e604_Obj *o);
BOOL func_0203e22c(Unk_0203dad4_Task *t);

BOOL func_0203dad4(u32 a, u32 b, u32 c, u32 d, u8 e);
BOOL func_0203db1c(u32 x);
BOOL func_0203d954();
BOOL func_0203d978();
BOOL func_0203d99c();
void func_0203d9a8();
void func_0203d9b4();
void func_0203d904(u32 mask);
void func_0203e12c(Unk_0203e604_Obj *o, u32 v);
BOOL func_0203e164(Unk_0203dad4_Task *t);
BOOL func_0203e19c(Unk_0203dad4_Task *t);
void func_0203e0dc(Unk_0203dad4_Task *t, u32 v);
void func_0203dbb8(Unk_0203dad4_Task *t);
void func_0203dbe8(Unk_0203dad4_Task *t);
void func_0203dc1c(Unk_0203dad4_Task *t);
void func_0203dc50(Unk_0203dad4_Task *t);

BOOL func_0203d8dc(u32 x) {
    return func_0203dad4(0, func_0203e630(func_02095204(4)), x, 4, 0);
}

void func_0203d904(u32 mask) {
    data_021c39c8 &= ~mask;
}

void func_0203d914(u32 mask) {
    data_021c39c8 |= mask;
}

BOOL func_0203d924(u32 mask) {
    if ((data_021c39c8 & mask) != 0) {
        return TRUE;
    }
    return FALSE;
}

void func_0203d914(u32 mask);
BOOL func_0203d924(u32 mask);

void func_0203d93c() { func_0203d904(0x20); }
void func_0203d948() { func_0203d914(0x20); }
BOOL func_0203d954() { return func_0203d924(0x20); }
void func_0203d960() { func_0203d904(8); }
void func_0203d96c() { func_0203d914(8); }
BOOL func_0203d978() { return func_0203d924(8); }
void func_0203d984() { func_0203d904(1); }
void func_0203d990() { func_0203d914(1); }
BOOL func_0203d99c() { return func_0203d924(1); }
void func_0203d9a8() { func_0203d914(4); }
void func_0203d9b4() { func_0203d914(2); }
BOOL func_0203d9c0() { return func_0203d924(4); }
BOOL func_0203d9cc() { return func_0203d924(2); }

BOOL func_0203d9d8() {
    if (func_0203d978() || func_0203d954()) {
        return FALSE;
    }
    Unk_0203e604_Obj *o = func_02095204(4);
    if (o == NULL) {
        return FALSE;
    }
    func_0203d904(6);
    return func_0203dad4(0, func_0203e630(o), 0xb, 1, 0);
}

BOOL func_0203da24(u8 x) {
    Unk_0203e604_Obj *o = func_02095204(4);
    if (o == NULL) {
        return FALSE;
    }
    return func_0203dad4(0, func_0203e630(o), 1, 2, x);
}

BOOL func_0203da54() {
    if (!func_0203db1c(8)) {
        return FALSE;
    }
    data_021c39c0->unk_16 = 6;
    return TRUE;
}

BOOL func_0203da7c() {
    return func_0203dad4(0, func_0203e630(func_02095204(4)), 8, 1, 0);
}

BOOL func_0203daa0(Unk_0203e604_Obj *o, s32 v) {
    u32 id;
    if (v < 0) {
        return FALSE;
    }
    id = 0;
    if (o != NULL) {
        id = func_0203e630(o);
    }
    return func_0203dad4(id, 0, 3, 1, (u8)v);
}

BOOL func_0203dad4(u32 a, u32 b, u32 c, u32 d, u8 e) {
    Unk_0203dad4_Task *t = func_0203eb78();
    if (t == NULL) {
        return FALSE;
    }
    t->unk_0c = a;
    t->unk_10 = b;
    t->unk_15 = c;
    t->unk_08 = d;
    t->unk_16 = e;
    t->unk_17 = 0;
    t->unk_18 = 0;
    t->unk_19 = 0;
    t->unk_14 = 1;
    func_020652ec(&data_021c39cc, t);
    return TRUE;
}

BOOL func_0203db1c(u32 x) {
    if (data_021c39c0 == NULL) {
        return FALSE;
    }
    if (data_021c39c0->unk_15 == x) {
        return TRUE;
    }
    return FALSE;
}

void func_0203db3c(void *a, u32 b) {
    func_020a5d4c();
    func_020a5d0c();
    if (data_021eda68 != 0) {
        func_020a42c4();
    }
    func_020d8c7c_vfunc_20(a, b);
}

BOOL func_0203db6c() {
    return TRUE;
}

BOOL func_0203db70(Unk_0203dad4_Task *t) {
    if (func_0203e2f4()) {
        func_0203dbe8(t);
        func_0203dbb8(t);
    }
    if (!func_0203e2f4()) {
        func_0203dc50(t);
    }
    if (func_0203e2f4()) {
        func_0203dc1c(t);
    }
    func_0203ebdc(&data_021c39cc);
    return TRUE;
}

void func_0203dbb8(Unk_0203dad4_Task *) {
    Unk_0203dad4_Task *t = data_021c39c0;
    if (t->unk_14 == 4) {
        if (data_020d95dc[t->unk_15](t)) {
            func_0203d5c8();
        }
    }
}

void func_0203dbe8(Unk_0203dad4_Task *) {
    Unk_0203dad4_Task *t = data_021c39c0;
    if (t->unk_14 == 3) {
        if (data_020d9528[t->unk_15](t)) {
            data_021c39c0->unk_14 = 4;
        }
    }
}

void func_0203dc1c(Unk_0203dad4_Task *) {
    Unk_0203dad4_Task *t = data_021c39c0;
    if (t->unk_14 == 2) {
        if (data_020d95a0[t->unk_15](t)) {
            data_021c39c0->unk_14 = 3;
        }
    }
}

void func_0203dc50(Unk_0203dad4_Task *) {
    Unk_0203dad4_Task *t = data_021c39cc.unk_00;
    Unk_0203dbb8_Fn *tbl = data_020d9564;
    for (; t != NULL; t = t->unk_04) {
        if (tbl[t->unk_15](t)) {
            func_020e79a0(&data_021c39cc, t);
            data_021c39c0 = t;
            t->unk_14 = 2;
            break;
        }
    }
}

BOOL func_0203dc98(Unk_0203dad4_Task *) { return FALSE; }
BOOL func_0203dc9c(Unk_0203dad4_Task *) { return TRUE; }
BOOL func_0203dca0(Unk_0203dad4_Task *) { return FALSE; }

BOOL func_0203dca4(Unk_0203dad4_Task *t) {
    if (t->unk_16 == 6) {
        func_02094f64(0);
        return TRUE;
    }
    return FALSE;
}

BOOL func_0203dcc0(Unk_0203dad4_Task *t) {
    if (t->unk_16 == 6) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0203dcd0(Unk_0203dad4_Task *t) {
    t->unk_16 = 5;
    return TRUE;
}

BOOL func_0203dcd8(Unk_0203dad4_Task *t) {
    if (t->unk_16 == 6) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0203dce8(Unk_0203dad4_Task *t) {
    if (!func_02094d60()) {
        return FALSE;
    }
    if (!func_ov004_0222497c()) {
        return FALSE;
    }
    t->unk_16 = 5;
    return TRUE;
}

BOOL func_0203dd10(Unk_0203dad4_Task *) {
    if (func_02094c38()) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0203dd28(Unk_0203dad4_Task *t) {
    if (t->unk_16 == 6) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0203dd38(Unk_0203dad4_Task *t) {
    if (!func_02094de0()) {
        return FALSE;
    }
    if (!func_02094960()) {
        return FALSE;
    }
    t->unk_16 = 5;
    return TRUE;
}

BOOL func_0203dd60(Unk_0203dad4_Task *t) {
    if (func_0203d99c()) {
        return FALSE;
    }
    BOOL b = data_021c3cc0 == 2 ? TRUE : FALSE;
    if (!b) {
        return FALSE;
    }
    if (t->unk_17 == 6) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0203dd9c(Unk_0203dad4_Task *) {
    func_0203e9d8();
    return TRUE;
}

BOOL func_0203ddac(Unk_0203dad4_Task *t) {
    Unk_0203e604_Obj *o = func_0203e604(t->unk_0c);
    if (o == NULL) {
        return FALSE;
    }
    if (t->unk_16 == 7) {
        switch (func_0203ea74(t->unk_0c)) {
        case 2:
            t->unk_16 = 2;
            break;
        case 1:
            t->unk_16 = 1;
            func_0203ea08(t->unk_0c);
            break;
        }
    }
    if (t->unk_16 == 1) {
        switch (data_020d96d0) {
        case 1:
            t->unk_16 = 2;
            break;
        case 2:
            func_0203ea08(t->unk_0c);
            break;
        }
    }
    if (t->unk_16 == 2) {
        o->vfunc_4c(6, 4);
        t->unk_16 = 5;
        return TRUE;
    }
    return FALSE;
}

BOOL func_0203de30(Unk_0203dad4_Task *) {
    if (!func_02094d88()) {
        return FALSE;
    }
    func_0203d9a8();
    return TRUE;
}

BOOL func_0203de4c(Unk_0203dad4_Task *) {
    if (!func_02094f84()) {
        return FALSE;
    }
    func_02094f64(1);
    func_0203d9b4();
    return TRUE;
}

BOOL func_0203de70(Unk_0203dad4_Task *t) {
    Unk_0203e604_Obj *o = func_0203e604(t->unk_0c);
    if (!func_02094de0()) {
        return FALSE;
    }
    if (!func_02094898()) {
        return FALSE;
    }
    if (o != NULL) {
        o->vfunc_4c(2, 4);
    }
    func_020b4bbc(func_020b4934(), t->unk_16);
    return TRUE;
}

BOOL func_0203debc(Unk_0203dad4_Task *t) {
    if (func_0203e604(t->unk_0c) == NULL) {
        return FALSE;
    }
    if (!func_02094f84()) {
        return FALSE;
    }
    if (!func_02094f64(1)) {
        return FALSE;
    }
    t->unk_17 = 1;
    return func_0203e164(t);
}

BOOL func_0203def8(Unk_0203dad4_Task *t) {
    if (func_02094c38()) {
        func_0203e0dc(t, 8);
        func_0203e9d8();
        return TRUE;
    }
    return FALSE;
}

BOOL func_0203df1c(Unk_0203dad4_Task *t) {
    Unk_0203e604_Obj *o = func_0203e604(t->unk_10);
    switch (t->unk_16) {
    case 4:
        if (func_020951d0()) {
            func_0203e12c(o, t->unk_17);
            t->unk_16 = 5;
        }
        break;
    case 5:
        break;
    case 6:
        return TRUE;
    }
    return FALSE;
}

BOOL func_0203df60(Unk_0203dad4_Task *t) {
    func_0203e604(t->unk_0c);
    if (!func_02094de0()) {
        return FALSE;
    }
    t->unk_17 = 1;
    if (func_0203e164(t)) {
        func_02094960();
        return TRUE;
    }
    return FALSE;
}

BOOL func_0203df94(Unk_0203dad4_Task *t) {
    Unk_0203e604_Obj *o = func_0203e604(t->unk_10);
    switch (t->unk_16) {
    case 0:
    case 1:
        switch (data_020d96d0) {
        case 1:
            if (t->unk_15 == 7) {
                t->unk_16 = 8;
            } else {
                t->unk_16 = 2;
            }
            break;
        case 2:
            t->unk_16 = 3;
            break;
        }
        break;
    }
    if (t->unk_16 == 8) {
        if (!func_02094de0()) {
            return FALSE;
        }
        if (!func_02094960()) {
            return FALSE;
        }
        t->unk_16 = 2;
    }
    switch (t->unk_16) {
    case 2: {
        o->vfunc_4c(3, 4);
        s32 r = func_0203e400(o);
        if (t->unk_17 == 5) {
            r = 2;
        }
        if (r == 2) {
            func_02094960();
            func_0203e12c(o, t->unk_17);
            t->unk_16 = 5;
        } else {
            func_020949a0();
            t->unk_16 = 4;
        }
        return TRUE;
    }
    case 3:
        if (func_02094c38()) {
            func_0203e0dc(t, 4);
            func_0203d5c8();
        }
        return FALSE;
    }
    return FALSE;
}

BOOL func_0203e060(Unk_0203dad4_Task *t) {
    Unk_0203e604_Obj *a = func_0203e604(t->unk_10);
    Unk_0203e604_Obj *b = func_0203e604(t->unk_0c);
    if (!func_02094de0()) {
        return FALSE;
    }
    t->unk_17 = 0;
    if (a == NULL) {
        Unk_0203e604_Obj *n = func_0203e5d0(b);
        if (n == NULL) {
            return FALSE;
        }
        t->unk_10 = func_0203e630(n);
    } else if (!func_0203e4a8(a, b)) {
        if (a->vfunc_54(b)) {
            t->unk_17 = 5;
        } else {
            return FALSE;
        }
    }
    if (func_0203e164(t)) {
        func_02094960();
        return TRUE;
    }
    return FALSE;
}

void func_0203e0dc(Unk_0203dad4_Task *t, u32 v) {
    Unk_0203e604_Obj *o = func_0203e604(t->unk_10);
    if (o != NULL) {
        if (func_0203e3e8()) {
            if (func_0203e9ac() == 1) {
                func_0203e994(t->unk_10, v);
            }
        }
        o->vfunc_4c(v, 4);
    }
    func_0203d640(0);
    if (t->unk_15 == 7) {
        func_02094f64(0);
    }
}

void func_0203e12c(Unk_0203e604_Obj *o, u32 v) {
    if (func_0203e3e8()) {
        if (func_0203e9ac() == 1) {
            func_0203e994(func_0203e630(o), v);
        }
    }
    o->vfunc_4c(v, 4);
}

BOOL func_0203e164(Unk_0203dad4_Task *t) {
    func_0203e604(t->unk_10);
    if (func_0203e3e8()) {
        if (!func_0203e19c(t)) {
            return FALSE;
        }
    } else {
        if (!func_0203e22c(t)) {
            return FALSE;
        }
    }
    return TRUE;
}

BOOL func_0203e19c(Unk_0203dad4_Task *t) {
    s32 r = func_0203e9ac();
    switch (r) {
    case 2:
        if (func_02072e44(data_020cbb18)) {
            Unk_0203e604_Obj *o = func_0203e604(t->unk_10);
            if (func_0203e3e8()) {
                if (t->unk_17 == 1) {
                    if (!o->vfunc_58(func_02095204(4))) {
                        return FALSE;
                    }
                }
            }
        }
        t->unk_16 = 2;
        break;
    case 1:
        t->unk_16 = 0;
        break;
    case 0:
        return FALSE;
    }
    if (t->unk_15 != 7) {
        if (!func_02094960()) {
            return FALSE;
        }
    }
    func_0203d640(t->unk_10);
    if (r == 1) {
        func_0203e9a0(t->unk_10, t->unk_17);
    }
    return TRUE;
}
}
