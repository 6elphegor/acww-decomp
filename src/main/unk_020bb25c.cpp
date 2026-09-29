#include "types.h"

extern "C" {
u32 func_02063b8c(u32 n);
void func_02064928(s32 a);
BOOL func_020b8fe8(void);
void func_0209d498(void *p);
u32 func_0209d3d0(void *a, void *b, s32 n);
void func_02116048(void *a, void *b, s32 n);
extern u8 data_020d0e51[];
extern u8 data_020d0eb4[];
extern u8 data_020d0df1[];
extern u32 data_020d0e90[];
extern s32 data_021ef670;
extern u8 data_021ed2b0[];
}

struct Unk_020bb25c_Ent14 {
    s32 unk_00;
    u8 unk_04[0xc];
    u8 unk_10;
    u8 unk_11;
    u8 unk_12[2];
};

struct Unk_020bb25c_Ent74 {
    s32 unk_00;
    u8 unk_04[0x5c];
    u32 unk_60;
    u8 unk_64[0x10];
};

class Unk_020bb25c {
public:
    u8 unk_0000[0xe80];
    s32 unk_0e80;
    u8 unk_0e84[0x14d8 - 0xe84];
    Unk_020bb25c_Ent74 unk_14d8[13];
    u8 unk_1abc[0x2f18 - 0x1abc];
    u8 unk_2f18;
    u8 unk_2f19;
    u8 unk_2f1a[0x2f29 - 0x2f1a];
    u8 unk_2f29;
    u8 unk_2f2a[2];
    s32 unk_2f2c;
    s32 unk_2f30;
    s32 unk_2f34;
    s32 unk_2f38[4];
    s32 unk_2f48;
    u8 unk_2f4c[0x2f51 - 0x2f4c];
    u8 unk_2f51;
    u8 unk_2f52[0x2f58 - 0x2f52];
    Unk_020bb25c_Ent14 unk_2f58[4];
    u8 unk_2fa8[4];

    void func_020bb25c();
    void func_020bb294();
    void func_020bb2cc();
    void func_020bb304();
    void func_020bb33c();
    void func_020bb374();
    void func_020bb3b0();
    void func_020bb3e8();
    void func_020bb420();
    void func_020bb458();
    void func_020bb490();
    void func_020bb4c8(s32 mode);
    void func_020bb584(s32 a, s32 b, s32 c);
    void func_020bb5b4();
    void func_020bb688();
    void func_020bb774();
    void func_020bb7e8();
    void func_020bb834();
    void func_020bb880(s32 *out);
    void func_020bb8a4(s32 idx, s32 a, s32 b);
    BOOL func_020bb8fc(s32 idx);
    BOOL func_020bb964(s32 idx);
    void func_020bb9b8();
    void func_020bbac0();
    void func_020bbb58();

    BOOL func_020bc754(s32 a, s32 b, s32 c, s32 d);
    void func_020bc718(s32 a);
    void func_020bb04c();
};
extern "C" void func_020bd6dc(Unk_020bb25c_Ent14 *p);
extern "C" void func_020bd69c(void *p, s32 v);

#define SIMPLE(NAME, A, B, C, TAIL) \
void Unk_020bb25c::NAME() { \
    s32 v = unk_2f30; \
    if (v < 0) { \
        func_020bb584(A, B, C); \
    } else if (v == 0) { \
        func_020bb4c8(0x14); \
    } \
    TAIL(); \
}

SIMPLE(func_020bb25c, 0x50, 0x96, 500, func_020bb5b4)
SIMPLE(func_020bb294, 0x28, 0x96, 400, func_020bb5b4)
SIMPLE(func_020bb2cc, 0x64, 0x96, 600, func_020bb688)
SIMPLE(func_020bb304, 0x3c, 0x96, 500, func_020bb688)
SIMPLE(func_020bb33c, 0x1e, 0x96, 400, func_020bb688)
SIMPLE(func_020bb374, 0x12c, 0x64, 600, func_020bb774)
SIMPLE(func_020bb3b0, 0xa0, 0x64, 500, func_020bb774)
SIMPLE(func_020bb3e8, 0x32, 0x64, 400, func_020bb774)
SIMPLE(func_020bb420, 0xc8, 0x64, 600, func_020bb834)
SIMPLE(func_020bb458, 0x64, 0x64, 500, func_020bb834)
SIMPLE(func_020bb490, 0x14, 0x64, 400, func_020bb834)

void Unk_020bb25c::func_020bb4c8(s32 mode) {
    if (mode == 0x14) {
        u32 r = func_02063b8c(100);
        u8 *p = data_020d0e51;
        s32 m = 5;
        s32 i;
        for (i = 1; i < 14; i++, p++) {
            if (r < *p) {
                m = i;
                break;
            }
        }
        unk_2f2c = m;
    } else {
        unk_2f2c = mode;
    }
    s32 idx = unk_2f2c;
    s32 cnt = data_020d0eb4[idx];
    if (cnt > 0) {
        BOOL flag = FALSE;
        u32 sh = idx - 1;
        if (sh <= 18 && ((1 << sh) & 0x4c007) != 0) {
            flag = TRUE;
        }
        if (flag) {
            unk_2f34 = func_02063b8c(cnt);
        } else {
            unk_2f38[0] = func_02063b8c(cnt);
            unk_2f38[1] = func_02063b8c(cnt);
            unk_2f38[2] = func_02063b8c(cnt);
            unk_2f38[3] = func_02063b8c(cnt);
        }
    }
}

void Unk_020bb25c::func_020bb584(s32 a, s32 b, s32 c) {
    unk_2f48 = a;
    s32 r;
    if (c > 0) {
        r = func_02063b8c(c);
    } else {
        r = 0;
    }
    unk_2f30 = b + r;
}

void Unk_020bb25c::func_020bb5b4() {
    s32 *ptrs[4] = {&unk_2f38[0], &unk_2f38[1], &unk_2f38[2], &unk_2f38[3]};
    s32 **pp = ptrs;
    s32 all = 1;
    s32 i;
    for (i = 0; i < 4; i++, pp++) {
        s32 *c = *pp;
        if (*c > 0) {
            *c = *c - 1;
            if (*c <= 0) {
                if (func_020bb8fc(i)) {
                    func_020bb8a4(i, 0, 0);
                } else {
                    *c = 1;
                }
            }
        }
        s32 t = (*c <= 0) ? 1 : 0;
        if (all & t) {
            all = 1;
        } else {
            all = 0;
        }
    }
    if (all) {
        s32 skip = func_02063b8c(4);
        s32 **p2 = ptrs;
        for (i = 0; i < 4; i++, p2++) {
            if (i != skip) {
                *(*p2) = unk_2f48 + func_02063b8c(30);
            }
        }
    }
}

void Unk_020bb25c::func_020bb688() {
    s32 *ptrs[4] = {&unk_2f38[0], &unk_2f38[1], &unk_2f38[2], &unk_2f38[3]};
    s32 **pp = ptrs;
    s32 all = 1;
    s32 i;
    for (i = 0; i < 4; i++, pp++) {
        s32 *c = *pp;
        if (*c > 0) {
            *c = *c - 1;
            if (*c <= 0) {
                if (func_020bb8fc(i)) {
                    func_020bb8a4(i, 0, 0);
                } else {
                    *c = 1;
                }
            }
        }
        s32 t = (*c <= 0) ? 1 : 0;
        if (all & t) {
            all = 1;
        } else {
            all = 0;
        }
    }
    if (all) {
        s32 a = func_02063b8c(4);
        s32 b = (a + 1 + func_02063b8c(3)) & 3;
        s32 **p2 = ptrs;
        for (i = 0; i < 4; i++, p2++) {
            if (a == i || b == i) {
                *(*p2) = unk_2f48 + func_02063b8c(30);
            }
        }
    }
}

void Unk_020bb25c::func_020bb774() {
    s32 *ptrs[4] = {&unk_2f38[0], &unk_2f38[1], &unk_2f38[2], &unk_2f38[3]};
    s32 **pp = ptrs;
    s32 i;
    for (i = 0; i < 4; i++, pp++) {
        s32 *c = *pp;
        *c = *c - 1;
        if (*c <= 0) {
            if (func_020bb8fc(i)) {
                func_020bb8a4(i, 0, 0);
                func_020bb880(c);
            }
        }
    }
}

void Unk_020bb25c::func_020bb7e8() {
    unk_2f34 = unk_2f34 - 1;
    if (unk_2f34 <= 0) {
        s32 r = func_02063b8c(4);
        if (func_020bb964(r)) {
            func_020bb8a4(r, 1, 1);
            func_020bb880(&unk_2f34);
        }
    }
}

void Unk_020bb25c::func_020bb834() {
    unk_2f34 = unk_2f34 - 1;
    if (unk_2f34 <= 0) {
        s32 r = func_02063b8c(4);
        if (func_020bb964(r)) {
            func_020bb8a4(r, 1, 0);
            func_020bb880(&unk_2f34);
        }
    }
}

void Unk_020bb25c::func_020bb880(s32 *out) {
    s32 r;
    if (unk_2f48 > 0) {
        r = func_02063b8c(unk_2f48);
    } else {
        r = 0;
    }
    *out = r + 0x41;
}

void Unk_020bb25c::func_020bb8a4(s32 idx, s32 a, s32 b) {
    if (data_021ef670 != 0) {
        u32 v = (a << 31) | (((data_020d0e90[idx] - 0x1d) & 0xf) | (((idx & 3) << 8) | (b << 28)));
        func_020bc754(9, 0x3c, 0, v);
    } else if (a != 0) {
        func_02064928(idx + 5);
    } else {
        func_02064928(idx + 1);
    }
}

BOOL Unk_020bb25c::func_020bb8fc(s32 idx) {
    BOOL result = TRUE;
    Unk_020bb25c_Ent74 *p = &unk_14d8[0];
    Unk_020bb25c_Ent74 *end = (Unk_020bb25c_Ent74 *)unk_1abc;
    for (; p < end; p++) {
        if (p->unk_00 == 9) {
            s32 slot;
            BOOL b1, b2;
            u32 f = p->unk_60;
            slot = (f >> 8) & 3;
            b1 = ((f >> 29) & 1) ? TRUE : FALSE;
            b2 = ((f >> 31) & 1) ? TRUE : FALSE;
            if (slot == idx) {
                result = FALSE;
                break;
            }
            if (b2 && !b1) {
                result = FALSE;
                break;
            }
        }
    }
    return result;
}

BOOL Unk_020bb25c::func_020bb964(s32 idx) {
    BOOL result = TRUE;
    Unk_020bb25c_Ent74 *p = &unk_14d8[0];
    Unk_020bb25c_Ent74 *end = (Unk_020bb25c_Ent74 *)unk_1abc;
    for (; p < end; p++) {
        if (p->unk_00 == 9) {
            u32 f = p->unk_60;
            s32 slot = (f >> 8) & 3;
            BOOL b1 = ((f >> 29) & 1) ? TRUE : FALSE;
            if (slot == idx || !b1) {
                result = FALSE;
                break;
            }
        }
    }
    return result;
}

void Unk_020bb25c::func_020bb9b8() {
    if (unk_2f29 != 0) {
        unk_2f29 = 0;
        BOOL a = func_020b8fe8() == 0 ? TRUE : FALSE;
        u32 x[6];
        x[0] = 0;
        x[1] = 0;
        x[2] = 0;
        x[3] = 0;
        x[4] = 0;
        x[5] = 0;
        func_0209d498(&x[4]);
        func_02116048(&x[4], &x[0], 8);
        func_02116048(&x[4], &x[2], 8);
        ((u8 *)x)[4] = 3;
        ((u8 *)x)[3] = 0x10;
        ((u8 *)x)[12] = 9;
        ((u8 *)x)[11] = 0xf;
        u32 r5 = func_0209d3d0(&x[0], &x[4], 0x18);
        u32 r0 = func_0209d3d0(&x[4], &x[2], 0x18);
        BOOL b = FALSE;
        if (r5 == (u32)-1 || r5 == 0) {
            if (r0 == (u32)-1 || r0 == 0) {
                b = TRUE;
            }
        }
        ((u8 *)x)[2] = 6;
        ((u8 *)x)[10] = 9;
        r5 = func_0209d3d0(&x[0], &x[4], 4);
        r0 = func_0209d3d0(&x[4], &x[2], 4);
        BOOL c = FALSE;
        if (r5 == (u32)-1 || r5 == 0) {
            if (r0 == (u32)-1) {
                c = TRUE;
            }
        }
        if (a && b && c) {
            func_020bc754(0xc, 0x3c, 0, 0);
            func_020bc754(0xc, 0x3c, 0, 1);
            func_020bc754(0xc, 0x3c, 0, 2);
        }
    }
}

void Unk_020bb25c::func_020bbac0() {
    Unk_020bb25c_Ent14 *p = &unk_2f58[0];
    Unk_020bb25c_Ent14 *end = p + 4;
    s32 slot = 0x21;
    s32 i = 0;
    s32 vals[3];
    vals[0] = 0;
    vals[1] = 0;
    vals[2] = 0;
    for (; p < end; p++, slot += 3, i++) {
        if (p->unk_11 != 0) {
            u8 flag = p->unk_10;
            if (func_020bc754(0xb, slot, vals[0], i)) {
                if (flag != 0) {
                    func_020bc754(0xb, slot + 1, vals[1], i | 0x10);
                    func_020bc754(0xb, slot + 2, vals[2], i | 0x20);
                }
            } else {
                func_020bd69c(&unk_2fa8[0], p->unk_00);
            }
            func_020bd6dc(p);
        }
    }
}

void Unk_020bb25c::func_020bbb58() {
    unk_2f51 = 0;
    u8 k = data_021ed2b0[0xa];
    if (k >= 0x13 && k <= 0x17) {
        if (data_020d0df1[k] == unk_2f19) {
            s32 n = unk_2f18;
            if (n < 0x2d) {
                s32 v;
                if (n <= 0xf) {
                    v = n * 0xccc;
                } else {
                    v = (n - 0xf) * -0x666 + 0xc000;
                }
                if (v < 0) {
                    v = 0;
                } else if (v > 0xc000) {
                    v = 0xc000;
                }
                unk_2f51 = (v + 0x800) >> 12;
            }
        }
    }
    BOOL f = unk_0e80 == 10 ? TRUE : FALSE;
    if (unk_2f51 != 0) {
        func_020bb04c();
        if (!f) {
            if (!func_020bc754(10, 0x20, 0, 0)) {
                unk_2f51 = 0;
            }
        }
    } else if (f) {
        func_020bc718(10);
    }
}
