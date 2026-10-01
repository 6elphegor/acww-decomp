#include "types.h"

struct Unk_020a677c {
    u8 unk_00[3];
    Unk_020a677c();
    ~Unk_020a677c();
    void func_020a6754();
    void func_020a6760(u8 *a, u8 *b, u8 *c);
};

struct Unk_020a6740 {
    u32 unk_00[2];
    Unk_020a6740();
    ~Unk_020a6740();
    void func_020a6720();
};

struct Unk_020a670c {
    u32 unk_00;
    Unk_020a670c();
    ~Unk_020a670c();
    void func_020a66f8();
};

struct Unk_020a67f0 {
    u32 unk_00[2];
    Unk_020a67f0();
    ~Unk_020a67f0();
    void func_020a6790();
};

struct Unk_020a67bc {
    u32 unk_00[2];
    Unk_020a67bc();
    ~Unk_020a67bc();
    void func_020a67bc(u32 a, u32 b, u32 c, u32 d);
    void func_020a6878(u32 a, u32 b, u32 c, u32 d);
};

struct Unk_020a6968 {
    u32 unk_00[2];
    Unk_020a6968();
    ~Unk_020a6968();
    void func_020a6968(u32 a);
};

struct Unk_020cbb18 {
    u8 pad_00[0x64];
    s32 unk_64;
    u32 func_02072e88(s32 i);
    BOOL func_02072e44();
    BOOL func_020729cc(u32 v);
    void func_020728d4();
    void func_020728a4(void *src, u32 n);
    void func_02072824(u32 a, u32 b);
};
extern Unk_020cbb18 *data_020cbb18;

struct Unk_020a4738 {
    Unk_020a677c unk_00[4];
    Unk_020a6740 unk_0c[4];
    Unk_020a670c unk_2c[4];
    Unk_020a67f0 unk_3c[4];

    Unk_020a4738();
    ~Unk_020a4738();

    void func_020a4738();
    void func_020a4740(s32 a);
    void func_020a4748();
    void func_020a4750(s32 a);
    void func_020a4778();
    void func_020a4bd4(s32 a);
    void func_020a4bec(s32 a, s32 b);
    void func_020a4c00();
    void func_020a4c08(s32 a);
    void func_020a4c20(s32 a);
    void func_020a4c40();
    void func_020a4c48(s32 a);
    void func_020a4c50();
    void func_020a4c58(s32 a);
    void func_020a4c60();
    s32 func_020a5198(s32 a);
    void func_020a51a4(s32 a, s32 b);
    void func_020a51b0();
    s32 func_020a5258();
    void func_020a5260(s32 a);
    void func_020a5270(s32 a);
    void func_020a5278();
    s32 func_020a52a4();
    void func_020a52a8(s32 a);
    s32 func_020a52ac();
    void func_020a52b0(s32 a);
    s32 func_020a52b4();
    void func_020a52b8(s32 a);
    void func_020a52bc();
    s32 func_020a5360();
    void func_020a5364(s32 a);
    void func_020a5384(s32 a, s32 b);
    s32 func_020a538c();
    void func_020a5390(s32 a);
    void func_020a5394();
    s32 func_020a56ac();
    void func_020a56b0(s32 a);
    s32 func_020a56b4();
    void func_020a56c4();
    void func_020a5800();
    void func_020a5908();
    void func_020a59c0();

    void func_020a5a9c(s32 idx);
};

extern Unk_020a4738 data_021eda94;
extern Unk_020a67bc data_021edad0[];
extern u8 data_021c3cc0;

extern "C" {
s32 func_020a608c(s32 a);
s32 func_020a60d0(s32 a);
s32 func_020a6214(u32 a);
s32 func_020a62f8(s32 a);
void func_020a6430(s32 a, s32 b);
void func_020a647c();
void func_020a64e4(s32 a);
void func_020a65fc(s32 a);
void func_020a6564();
void func_020a63bc(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_020a6388(u32 idx, u32 a, u32 b, u32 c, u32 d);
s32 func_020b50e8();
s32 func_020b4994();
u32 func_02072448(void *);
u32 func_02072478(void *);
u32 func_020724ac(void *);
u32 func_020724d8(void *);
void func_020724c4(void *);
void func_02072460(void *);
}

Unk_020a4738::Unk_020a4738() {
    func_020a59c0();
}

Unk_020a4738::~Unk_020a4738() {
}

void Unk_020a4738::func_020a5a9c(s32 idx) {
    unk_00[idx].func_020a6754();
    unk_0c[idx].func_020a6720();
    unk_2c[idx].func_020a66f8();
    unk_3c[idx].func_020a6790();
    func_020a4bd4(idx);
    func_020a5384(idx, 0);
    if (idx != 0) {
        func_020a51a4(idx, 7);
    }
    if (idx == func_020a538c()) {
        func_020a5390(4);
    }
    if (idx == func_020a5360()) {
        func_020a5364(4);
    }
    if (idx == func_020a5258()) {
        func_020a5260(4);
    }
    if (idx == func_020a52ac()) {
        func_020a52b0(4);
    }
    if (idx == func_020a52a4()) {
        func_020a52a8(4);
    }
    if (idx == func_020a52b4()) {
        func_020a52b8(4);
    }
}

extern "C" {

void func_020a5c2c() {
}

void func_020a5c30() {
    s32 r4 = data_020cbb18->unk_64;
    if (data_020cbb18->func_02072e88(r4)) {
        data_021eda94.func_020a5278();
        data_021eda94.func_020a51b0();
        if (r4 == 0) {
            data_021eda94.func_020a5908();
            data_021eda94.func_020a56c4();
        }
        if (r4 != 0) {
            data_021eda94.func_020a5800();
        }
        if (r4 == 0) {
            data_021eda94.func_020a4c60();
        }
        data_021eda94.func_020a4778();
        data_021eda94.func_020a5394();
        data_021eda94.func_020a52bc();
    }
}

void func_020a5c94(s32 a) {
    data_021eda94.func_020a5a9c(a);
}

void func_020a5ca4() {
    data_021eda94.func_020a59c0();
}

void func_020a5cb4() {
}
void func_020a5cb8() {
}
void func_020a5cbc() {
}

BOOL func_020a5cc0(s32 v) {
    switch (v) {
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x2e:
    case 0x2f:
        return TRUE;
    }
    return FALSE;
}

void func_020a5cec() {
    data_021eda94.func_020a4738();
}

void func_020a5cfc(s32 a) {
    data_021eda94.func_020a4740(a);
}

void func_020a5d0c() {
    if (data_020cbb18->func_02072e88(data_020cbb18->unk_64)) {
        s32 r4 = data_021eda94.func_020a52ac();
        if (r4 < 4) {
            func_020a608c(r4);
            data_021eda94.func_020a52a8(r4);
            data_021eda94.func_020a52b0(4);
        }
    }
}

static inline BOOL IsZero_020a5d4c(u8 v) {
    return v == 0 ? TRUE : FALSE;
}

void func_020a5d4c() {
    if (data_020cbb18->func_02072e88(data_020cbb18->unk_64)) {
        if (data_021eda94.func_020a56ac() == 3) {
            if (IsZero_020a5d4c(data_021c3cc0)) {
                if (!func_020a5cc0(func_020b50e8())) {
                    func_020a60d0(data_021eda94.func_020a538c());
                }
                data_021eda94.func_020a56b0(5);
            }
        }
    }
}

void func_020a5dac() {
    Unk_020cbb18 *o = data_020cbb18;
    if (o->func_02072e88(*(s32 *)((u8 *)o + 0x64))) {
        if (func_02072448(o)) {
            func_020a647c();
        }
    }
}

void func_020a5dd8() {
    Unk_020cbb18 *o = data_020cbb18;
    s32 r5 = o->unk_64;
    if (o->func_02072e88(r5)) {
        if (func_020724ac(o)) {
            func_020a6564();
            func_020a63bc(r5, 0x3f, 1, 0, 2);
            if (o->func_02072e44()) {
                if (r5 != 0) {
                    Unk_020a67bc tmp;
                    tmp.func_020a6878(0x3f, 1, 0, 2);
                    o = data_020cbb18;
                    o->func_020728d4();
                    o->func_020728a4(&tmp, 2);
                    o->func_02072824(0xb, 0);
                } else {
                    func_020a6388(r5, 0x3f, 1, 0, 2);
                }
            }
        }
    }
}

void func_020a5e74(s32 idx, u8 *a, u8 *b, u8 *c) {
    if (idx < 4) {
        data_021eda94.unk_00[idx].func_020a6760(a, b, c);
    }
}

void func_020a5e94(s32 a) {
    data_021eda94.func_020a5270(a);
}
void func_020a5ea4(s32 a) {
    data_021eda94.func_020a52b0(a);
}
void func_020a5eb4(s32 a, s32 b) {
    data_021eda94.func_020a5384(a, b);
}
s32 func_020a5ec8() {
    return data_021eda94.func_020a56ac();
}
void func_020a5ed8(s32 a) {
    data_021eda94.func_020a56b0(a);
}
void func_020a5ee8(s32 a) {
    data_021eda94.func_020a4c58(a);
}
void func_020a5ef8() {
    data_021eda94.func_020a4c50();
}
void func_020a5f08() {
    data_021eda94.func_020a4748();
}
void func_020a5f18(s32 a) {
    data_021eda94.func_020a4750(a);
}
void func_020a5f28() {
    data_021eda94.func_020a4c00();
}
void func_020a5f38(s32 a) {
    data_021eda94.func_020a4c08(a);
}
void func_020a5f48(s32 a, s32 b) {
    data_021eda94.func_020a4bec(a, b);
}
void func_020a5f5c(s32 a) {
    data_021eda94.func_020a4c20(a);
}
void func_020a5f6c() {
    data_021eda94.func_020a4c40();
}
void func_020a5f7c(s32 a) {
    data_021eda94.func_020a4c48(a);
}
s32 func_020a5f8c(s32 a) {
    return data_021eda94.func_020a5198(a);
}
void func_020a5f9c(s32 a, s32 b) {
    data_021eda94.func_020a51a4(a, b);
}


void func_020a5fb0() {
    Unk_020cbb18 *o = data_020cbb18;
    if (o->func_020729cc(0)) {
        s32 r4 = o->unk_64;
        func_020a6430(r4, func_020b4994());
    } else {
        Unk_020a6968 tmp;
        tmp.func_020a6968(func_020b4994());
        o = data_020cbb18;
        o->func_020728d4();
        o->func_020728a4(&tmp, 1);
        o->func_02072824(8, 0);
    }
}

s32 func_020a6018(u32 a) {
    s32 r5 = 4, r4 = 4;
    u8 v[3];
    Unk_020a677c *p = data_021eda94.unk_00;
    u32 i;
    for (i = 0; i < 4; p++, i++) {
        p->func_020a6760(&v[0], &v[1], &v[2]);
        if (v[0] == a && v[1] != 0) {
            if (v[2] != 0) {
                r5 = i;
            } else {
                r4 = i;
            }
        }
    }
    if (r5 == 4 && r4 == 4) {
        return 4;
    }
    if (r5 != 4 && r4 != 4) {
        return r4;
    }
    if (r5 != 4) {
        return r5;
    }
    return r4;
}

s32 func_020a608c(s32 a) {
    func_020a64e4(a);
    Unk_020cbb18 *o = data_020cbb18;
    o->func_020728d4();
    u32 r6 = func_02072478(o);
    u32 r2 = func_02072448(o);
    o->func_020728a4((void *)r6, r2);
    o->func_02072824(0x10, a);
    func_02072460(o);
}

s32 func_020a60d0(s32 a) {
    func_020a65fc(a);
    Unk_020cbb18 *o = data_020cbb18;
    o->func_020728d4();
    u32 r6 = func_020724d8(o);
    u32 r2 = func_020724ac(o);
    o->func_020728a4((void *)r6, r2);
    o->func_02072824(0xf, a);
    func_020724c4(o);
}

s32 func_020a6114(s32 a, s32 b, u32 c, u8 *d) {
    s32 r4 = data_020cbb18->unk_64;
    u8 v[6];
    *d = 0;
    if (b == 0) {
        if (a != 0) goto fail;
        return a;
    } else if (b == 0) {
        if (a != 0) goto fail;
        return a;
    } else if (b == 1) {
        if (a != 1) goto fail;
        return a;
    } else if (b == 2) {
        if (a != 2) goto fail;
        return a;
    } else if (b == 3) {
        if (a != 3) goto fail;
        return a;
    } else if (b == 4) {
        if (a == r4) goto fail;
        return a;
    } else if (b == 5) {
        if (a == 0) goto fail;
        return a;
    } else if (b == 6) {
        s32 t = func_020a6214(c);
        if (t < 4) {
            if (t != a) goto fail;
            return a;
        }
        data_021eda94.unk_00[a].func_020a6760(&v[0], &v[1], &v[2]);
        if (v[0] == c && v[1] != 0 && v[2] != 0) {
            *d = 1;
        }
        goto fail;
    } else if (b == 7) {
        data_021eda94.unk_00[a].func_020a6760(&v[3], &v[4], &v[5]);
        if (v[3] == c) {
            if (v[4] != 0) goto fail;
            if (v[5] != 0) goto fail;
            if (a == r4) goto fail;
            return a;
        } else {
            s32 t = data_021eda94.func_020a52a4();
            if (t >= 4) goto fail;
            if (t != a) goto fail;
            if (a == r4) goto fail;
            return a;
        }
    }
fail:
    return 4;
}

s32 func_020a6214(u32 a) {
    s32 r6 = 4;
    s32 i;
    u8 v[3];
    i = 3;
    Unk_020cbb18 *o = data_020cbb18;
    for (; i >= 0; i--) {
        if (o->func_02072e88(i)) {
            data_021eda94.unk_00[i].func_020a6760(&v[0], &v[1], &v[2]);
            if (v[0] == a && v[1] != 0 && v[2] == 0) {
                r6 = i;
                break;
            }
        }
    }
    return r6;
}

s32 func_020a6280() {
    s32 v = data_020cbb18->unk_64;
    if (v < 4) {
        return func_020a62f8(v);
    }
    return 1;
}

s32 func_020a62a0() {
    s32 r2 = data_020cbb18->unk_64;
    u8 v[3];
    if (r2 >= 4) {
        return 1;
    }
    data_021eda94.unk_00[r2].func_020a6760(&v[0], &v[1], &v[2]);
    if (v[2] == 0) {
        return v[1];
    }
    if (data_021eda94.func_020a56ac() < 7) {
        return v[1];
    }
    return data_021eda94.func_020a56b4();
}

s32 func_020a62f8(s32 a) {
    u8 v[3];
    if (a < 4) {
        data_021eda94.unk_00[a].func_020a6760(&v[0], &v[1], &v[2]);
        return v[2];
    }
    return 0;
}

s32 func_020a6328(s32 a) {
    u8 v[3];
    if (a < 4) {
        data_021eda94.unk_00[a].func_020a6760(&v[0], &v[1], &v[2]);
        return v[1];
    }
    return 1;
}

s32 func_020a6358(s32 a) {
    u8 v[3];
    if (a < 4) {
        data_021eda94.unk_00[a].func_020a6760(&v[0], &v[1], &v[2]);
        return v[0];
    }
    return 0x3f;
}

void func_020a6388(u32 idx, u32 a, u32 b, u32 c, u32 d) {
    data_021edad0[idx].func_020a67bc(a, b, c, d);
}

}
