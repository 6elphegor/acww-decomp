#include "types.h"

struct Unk_0200c2fc {
    u16 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0c;
    void func_0200c2fc(u16 a, s32 b, s32 c);
    void func_0200c398(u16 a);
    void func_0200c5f0(u16 a);
};

class Unk_0200e2c0 {
public:
    Unk_0200e2c0();
    ~Unk_0200e2c0();
    void func_0200e2c0(u32 a, u32 b, u32 c);

    u32 unk_00;
    u32 unk_04;
    u16 unk_08;
    u16 unk_0a;
    Unk_0200c2fc unk_0c;
};

struct Unk_0200c288 {
    u16 unk_00;
    s16 unk_02;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0c;
    s16 unk_0e;
    u8 unk_10[0x1c - 0x10];
    void func_0200c288(u16 a, s32 b, s32 c, s16 d);
    void func_0200c5ac(s16 a);
};

struct Unk_0200c24c {
    u16 unk_00;
    u8 unk_02;
    u8 unk_03;
    void func_0200c24c(u16 *a, u8 *b, u8 *c);
    void func_0200c270(u16 a, u8 b, u8 c);
};

struct Unk_0200bff8_Vec {
    s32 x, y, z;
};

class Unk_02007694;

extern "C" {
u16 func_0207694c(void *p);
void func_02076964(void *p, u32 a);
void func_02090330(u32 id, void *a, void *b, u32 c);
void func_0209028c(u32 id, void *a, u32 b, u32 c);
BOOL func_020565e8(void *p, u32 a);
void *func_02097520(u32 a);
void func_0209875c(void *p, u32 a);
u32 func_02098868(void *p);
void func_0205d354(void *p, u32 a);
void func_02078328();
BOOL func_020729bc(u32 a, u32 b);
void func_02010d98(void *p, s32 a);
void func_02010cb0(u16 *out, Unk_02007694 *o);
s32 func_02010d44(s32 a, u32 b);
s32 func_01ffcb0c(s32 a, s32 b);
void *func_0209750c();
u32 func_020987a0(void *p);
BOOL func_02063b8c(u32 a);
s32 func_020e780c(s32 a, s32 b);
void func_ov003_02207790(Unk_02007694 *o, u32 a, s32 b);
extern u32 data_020cbb18;
extern u8 data_020e416c;
extern s16 data_02135f44[];
extern u8 data_020d5e3c[];
extern u8 data_020d5e44[];
}

class Unk_02007694 {
public:
    void func_0200be2c();
    void func_0200be7c();
    void func_0200bf48();
    void func_0200bf90();
    void func_0200bfc0();
    void func_0200bff8();
    void func_0200c0b8(u32 a);
    void func_0200c180(s16 a);
    void func_0200c1bc(Unk_0200e2c0 *p);
    void func_0200c304();
    void func_0200c328(u32 a);
    void func_0200c33c(Unk_0200e2c0 *p);
    u32 func_0200c358(u16 a, u32 b, u32 c);
    void func_0200c39c();
    void func_0200c3c8();
    void func_0200c410();
    void func_0200c460(u32 a);
    void func_0200c46c();
    void func_0200c470(Unk_0200e2c0 *p);
    u32 func_0200c5b0(u16 a, u32 b, u32 c);
    void func_0200c5f4();
    void func_0200c67c(u8 *p);
    void func_0200c698(s16 *p);
    u32 func_0200c2b4(u16 a, u32 b, u32 c, u32 d, s16 e);

    // external callees
    void func_02010a58(s16 *p);
    void func_020105a8(void *a, u8 *b);
    void func_02010564(void *a, u8 *b);
    void func_02010914();
    void func_020109c4();
    void func_020109ac();
    void func_0201071c();
    void func_0201065c();
    void func_020102ec();
    void func_02010050(u16 *p);
    BOOL func_0201000c();
    u32 func_02010c9c();
    u32 func_02010c88();
    BOOL func_0200fab8(u16 *a, u32 b, u32 c, u32 d);
    BOOL func_0200fd90(u16 *a);
    void func_0200ec1c(u32 a);
    void func_0200ec30(u32 a);
    void func_0200ecdc(u32 a);
    void func_0200eb18();
    void func_0200eb58(u32 a, u32 b);
    BOOL func_0200ef08();
    void func_020103b4(u32 a, u32 b, u32 c);
    void func_02010358(u32 a, u32 b, u32 c);
    void func_0200e870();
    void func_0200e8d0();
    u32 func_0200e248(Unk_0200e2c0 *p);
    void func_0200ce98(u32 a, u32 b, s32 c);
    u8 func_02007c08(u32 a);
    void func_02010a34(s32 *p);
    void func_0200ca60();
    void func_0200c7dc();
    void func_0200c778();
    u8 func_0200c900();
    s32 func_0200d640();
    u16 func_0200d5fc();
    void func_0200ff08();

    u8 unk_00[0x5c];
    u8 unk_5c[0x8e - 0x5c];
    s16 unk_8e;
    u8 unk_90[4];
    s16 unk_94;
    u8 unk_96[2];
    s32 unk_98;
    u8 unk_9c[0x2cc - 0x9c];
    u8 unk_2cc[0x2e0 - 0x2cc];
    u8 unk_2e0;
    u8 unk_2e1[0x6c4 - 0x2e1];
    Unk_0200bff8_Vec unk_6c4;
    Unk_0200bff8_Vec unk_6d0;
    u8 unk_6dc[0x700 - 0x6dc];
    s32 unk_700;
    u8 unk_704[5];
    u8 unk_709[0x7d0 - 0x709];
    Unk_0200c288 unk_7d0;
    u32 unk_7ec;
    u8 unk_7f0[8];
    u32 unk_7f8;
    u32 unk_7fc;
    u8 unk_800[0x8e4 - 0x800];
    u8 unk_8e4;
    u8 unk_8e5[0x8ec - 0x8e5];
    Unk_0200c24c unk_8ec;
};

void Unk_02007694::func_0200be2c() {
    s16 v = unk_8e; s32 a; s16 t = unk_7d0.unk_0e;
    if (v != 0) {
        a = v;
        if (a < 0) a = -a;
        if (a < (t < 0 ? -t : t)) {
            v = 0;
        } else {
            v += t;
        }
    }
    func_02010a58(&v);
}

void Unk_02007694::func_0200be7c() {
    func_0200ec1c(0xf);
    if (func_020565e8(&unk_2cc[0], 8)) {
        func_0200ec30(0xf);
        switch (unk_7d0.unk_04) {
        case 0:
            func_0200bfc0();
            break;
        case 1:
            func_0200bf90();
            break;
        case 2:
            func_0200bf48();
            break;
        case 3: {
            void *r = func_02097520(unk_7fc);
            if (r != NULL) {
                func_0209875c(r, 0);
                func_0205d354(&unk_709[0], func_02098868(r));
                u8 buf[2];
                buf[0] = unk_2e0;
                func_020105a8(data_020d5e3c, &buf[0]);
                buf[1] = unk_2e0;
                func_02010564(data_020d5e44, &buf[1]);
                func_02078328();
            }
            break;
        }
        }
    }
}

void Unk_02007694::func_0200bf48() {
    Unk_0200c288 *p = &unk_7d0;
    if (p->unk_0c == 0) {
        u16 t = p->unk_00;
        u32 a = func_02010c9c();
        u32 b = func_02010c88();
        if (func_0200fab8(&t, a, b, 0)) {
            p->unk_0c = 1;
        }
    }
}

void Unk_02007694::func_0200bf90() {
    Unk_0200c288 *p = &unk_7d0;
    if (p->unk_0c == 0) {
        u16 t = p->unk_00;
        if (func_0200fd90(&t)) {
            p->unk_0c = 1;
        }
    }
}

void Unk_02007694::func_0200bfc0() {
    Unk_0200c288 *p = &unk_7d0;
    if (p->unk_0c == 0) {
        u16 t = p->unk_00;
        func_02010050(&t);
        if (func_0201000c()) {
            p->unk_0c = 1;
        }
    }
}

void Unk_02007694::func_0200bff8() {
    func_02010914();
    if (func_020565e8(&unk_2cc[0], 0xd)) {
        func_02090330(0x22, &unk_5c[0], 0, 0);
    } else if (func_020565e8(&unk_2cc[0], 3)) {
        s16 x = unk_8e;
        Unk_0200bff8_Vec v;
        s16 h;
        v = unk_6d0;
        v.z += 0x266;
        h = x + 0xaf0;
        func_02090330(0x27, &v, &h, 0);
        v = unk_6c4;
        v.z += 0x266;
        h = x - 0xaf0;
        func_02090330(0x27, &v, &h, 0);
    }
}

void Unk_02007694::func_0200c0b8(u32 a) {
    Unk_0200c288 *p = &unk_7d0;
    if (p->unk_0c == 0) {
        switch (p->unk_04) {
        case 0:
            func_0200bfc0();
            break;
        case 1:
            func_0200bf90();
            break;
        case 2:
            func_0200bf48();
            break;
        case 3: {
            void *r = func_02097520(unk_7fc);
            if (r != NULL) {
                func_0209875c(r, 0);
                func_0205d354(&unk_709[0], func_02098868(r));
                func_020102ec();
                func_02078328();
            }
            break;
        }
        }
    }
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        u32 i;
        switch (p->unk_04) {
        case 0:
            i = 0;
            break;
        case 1:
            i = 1;
            break;
        case 2:
            i = 2;
            break;
        case 3:
            func_0200eb18();
            return;
        default:
            return;
        }
        func_0200eb58(i, p->unk_00);
    }
}

void Unk_02007694::func_0200c180(s16 a) {
    u16 x;
    u8 y, z;
    unk_8ec.func_0200c24c(&x, &y, &z);
    func_0200c2b4(x, y, z, 6, a);
}

void Unk_02007694::func_0200c1bc(Unk_0200e2c0 *item) {
    Unk_0200c2fc *p = &item->unk_0c;
    u16 a = p->unk_00;
    s32 b = p->unk_04;
    s32 c = p->unk_08;
    if (c == 0x10) {
        func_02010358(6, 3, 0);
    } else {
        func_02010358(5, 3, 0);
    }
    unk_7d0.func_0200c288(a, b, c, unk_8e);
    unk_8ec.func_0200c270(a, b, c);
    if (b == 2 && a == 0x13c3) {
        func_0200ecdc(0x77);
    } else {
        func_0200ecdc(0x76);
    }
    func_0209028c(0x61, &unk_5c[0], 0, 0);
}

void Unk_0200c24c::func_0200c24c(u16 *a, u8 *b, u8 *c) {
    *a = func_0207694c(this);
    *b = unk_02;
    *c = unk_03;
}

void Unk_0200c24c::func_0200c270(u16 a, u8 b, u8 c) {
    func_02076964(this, a);
    unk_02 = b;
    unk_03 = c;
}

void Unk_0200c288::func_0200c288(u16 a, s32 b, s32 c, s16 d) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
    unk_0c = 0;
    unk_0e = -d / 3;
}

u32 Unk_02007694::func_0200c2b4(u16 a, u32 b, u32 c, u32 d, s16 e) {
    Unk_0200e2c0 obj;
    obj.func_0200e2c0(7, d, e);
    obj.unk_0c.func_0200c2fc(a, b, c);
    u32 r = func_0200e248(&obj);
    return r;
}

void Unk_0200c2fc::func_0200c2fc(u16 a, s32 b, s32 c) {
    unk_00 = a;
    unk_04 = b;
    unk_08 = c;
}

void Unk_02007694::func_0200c304() {
    func_02010914();
    if (func_0200ef08()) {
        func_020109c4();
    }
    func_0201071c();
}

void Unk_02007694::func_0200c328(u32 a) {
    func_0200c358(3, 5, a);
}

void Unk_02007694::func_0200c33c(Unk_0200e2c0 *item) {
    u16 v = item->unk_0c.unk_00;
    func_020103b4(0x12, v, v);
    func_0200e870();
}

u32 Unk_02007694::func_0200c358(u16 a, u32 b, u32 c) {
    Unk_0200e2c0 obj;
    obj.func_0200e2c0(5, b, c);
    obj.unk_0c.func_0200c398(a);
    u32 r = func_0200e248(&obj);
    return r;
}

void Unk_0200c2fc::func_0200c398(u16 a) {
    unk_00 = a;
}

void Unk_02007694::func_0200c39c() {
    func_0200c410();
    func_02010914();
    func_020109c4();
    func_0201071c();
    func_0201065c();
    func_0200c3c8();
}

void Unk_02007694::func_0200c3c8() {
    s32 t = unk_98;
    if (unk_8e == (s16)unk_7d0.unk_00 && t <= 0) {
        unk_7f8 = func_02007c08(unk_7ec);
        func_0200ce98(3, 1, -1);
    }
}

void Unk_02007694::func_0200c410() {
    Unk_0200c288 *p = &unk_7d0;
    s32 t;
    func_02010d98(&unk_8e, (s16)p->unk_00);
    s32 v = unk_98;
    t = func_02010d44(v, 0);
    func_02010a34(&t);
    if (t == 0 && v != 0) {
        func_02090330(0x29, &unk_5c[0], &p->unk_02, 0);
    }
}

void Unk_02007694::func_0200c460(u32 a) {
    unk_94 = unk_8e;
}

void Unk_02007694::func_0200c46c() {
}

void Unk_02007694::func_0200c470(Unk_0200e2c0 *item) {
    s16 v = *(s16 *)&item->unk_0c;
    Unk_0200bff8_Vec vec;
    Unk_0200c288 *p = &unk_7d0;
    func_020103b4(4, 3, 0);
    p->func_0200c5ac(v);
    s32 b, a;
    a = unk_8e << 12;
    b = v << 12;
    s32 d = b - a;
    if (d < 0) d = -d;
    if (b >= a) {
        if (d > 0x8000000) {
            v += 0x6fd0;
        } else {
            v += 0x9030;
        }
    } else {
        if (d > 0x8000000) {
            v += 0x9030;
        } else {
            v += 0x6fd0;
        }
    }
    vec = unk_6c4;
    s32 i = (u16)v >> 4;
    s32 t1, t0;
    s32 sn = data_02135f44[i * 2];
    s32 cs = data_02135f44[i * 2 + 1];
    t0 = func_01ffcb0c(cs, 0x666) - func_01ffcb0c(sn, 0x666);
    t1 = func_01ffcb0c(sn, 0x666) + func_01ffcb0c(cs, 0x666);
    vec.x += t1;
    vec.z += t0;
    p->unk_02 = v + 0x8000;
    p->unk_02 -= 0x38e;
    func_02090330(1, &vec, &v, 0);
    func_0200ecdc(0x53);
}

void Unk_0200c288::func_0200c5ac(s16 a) {
    unk_00 = a;
}

u32 Unk_02007694::func_0200c5b0(u16 a, u32 b, u32 c) {
    Unk_0200e2c0 obj;
    obj.func_0200e2c0(4, b, c);
    obj.unk_0c.func_0200c5f0(a);
    u32 r = func_0200e248(&obj);
    return r;
}

void Unk_0200c2fc::func_0200c5f0(u16 a) {
    unk_00 = a;
}

void Unk_02007694::func_0200c5f4() {
    if (func_020729bc(data_020cbb18, unk_7fc)) {
        s16 x = unk_94;
        func_0200ca60();
        func_0200c7dc();
        func_0200c778();
        func_020109c4();
        func_0201071c();
        func_0201065c();
        func_0200c698(&x);
    } else {
        u8 f = func_0200c900();
        func_0200c7dc();
        func_0200c778();
        func_020109ac();
        func_0200e8d0();
        func_0200c67c(&f);
    }
}

void Unk_02007694::func_0200c67c(u8 *p) {
    if (*p != 0) {
        func_0200ce98(3, 1, -1);
    }
}

void Unk_02007694::func_0200c698(s16 *p) {
    BOOL c = data_020e416c == 0;
    if (c && unk_8e4 == 0 && unk_98 == 0x6e2) {
        u16 t;
        if (func_020987a0(func_0209750c()) == 2 || (func_02010cb0(&t, this), t == 0x13c3)) {
            if (func_02063b8c(0x17a) == 0) {
                func_ov003_02207790(this, 6, -1);
                return;
            }
        }
    }
    if (*(s32 *)&unk_7d0 <= 0) {
        func_0200ce98(3, 1, -1);
    }
    if (unk_700 == 2 && func_0200d640() > 0) {
        u16 x = func_0200d5fc();
        if (func_020e780c(x, *p) > 0x3a4c) {
            func_0200c5b0(x, 3, -1);
        }
    }
    func_0200ff08();
}
