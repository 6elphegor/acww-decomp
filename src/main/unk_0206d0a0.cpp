#include "types.h"

extern u32 OVERLAY_1_ID[];
extern u32 OVERLAY_65_ID[];

// ---- buffer interface classes (defined elsewhere) ----
class Unk_020d9200 {
public:
    virtual ~Unk_020d9200() {}
};

class Unk_020e2a08 {
public:
    Unk_020e2a08();
    virtual ~Unk_020e2a08();
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
};

class Unk_020e2a60 : public Unk_020d9200 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

    Unk_020e2a08 unk_04;
};

// local text buffer, vtable 0x020ddf5c (0x38 bytes)
class Unk_020ddf5c : public Unk_020e2a60 {
public:
    Unk_020ddf5c() {}
    virtual ~Unk_020ddf5c() {}
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    u8 pad_10[0x28];
};

// ---- 0x4c-byte object (ctor func_0206ce50, dtor func_0206ce30) ----
class Unk_0206ce50 {
public:
    Unk_0206ce50();
    ~Unk_0206ce50();
    s32 func_0206cc14(u8 a, u8 b);
    s32 func_0206cc20(u8 a, u8 b);
    void func_0206cc38();
    void func_0206cc6c(Unk_020e2a60 *buf, s32 flag);
    void func_0206cc84(Unk_020e2a60 *buf);
    void func_0206cdcc(u16 id, s32 arg);
    s32 func_0206ce98();
    void func_0206ced0();
    void func_0206cfdc(u8 *src, s32 *offs, s32 *idx);

    u8 pad_00[0x4c];
};


struct Unk_0206d8b8_Pair {
    u32 a;
    u32 b;
};

extern "C" {
extern char data_020ddf6c[];
extern u8 data_020ddf88;
extern s32 data_020ddf8c;
extern u32 data_021f482c;
extern u8 data_021cb3b8;
extern u8 data_021fccfc[];
extern u8 data_021cc7d0[];
extern u16 data_021cb3c0;
extern u32 data_020cbb18;
extern u32 data_021f4768;
extern u8 data_021cb3ec[];
extern u8 data_021cb3e4[];
extern u32 data_0213c6dc;
extern u8 data_021c4890[];
extern s32 data_021cb400;
extern u8 data_021cb420[];

void func_020a791c(void *p);
s32 func_020a78a4(void *buf, const void *src, s32 len);
void func_0200212c(void *p);
void func_02002398(void *p, s32 v);
void func_0200226c(void *p, s32 a, s32 b, s32 c);
void func_020021fc(void *p, s32 a, s32 b);
void *func_02065c8c(void *p);
void func_ov002_02202dd4(void *a, void *b);
void func_0205125c(void *p, s32 n);
void func_02065604(void *dst, void *src);
s32 func_020512e0(void *p, s32 n);
s32 func_02051348(void *p, s32 n);
void func_02002654(char *s, u32 a, u32 b);
s32 func_02000c9c(void);
void func_02114cd8(s32 a, s32 b);
u32 func_01ffa2ec(void);
void func_01ffa3c0(void);
void func_01ffa3d4(u32 v);
void func_01ff80e0(s32 v);
void func_01ff81a8(s32 v);
void func_02076c24(void *p, s32 v);
void func_02076c50(void *p);
void func_ov065_02277ba4(void *(*alloc)(u32, void *, u32), void (*free)(u32, void *));
void func_0204ef2c(u32 id);
void func_0204eee4(u32 id);
void *func_020e85b4(u32 size, u32 align);
void func_020e8558(void *p);
void func_ov001_0220cb30(void *p, s32 a, s32 b);
u32 func_021001e0(void *p);
s32 func_02117dd8(s32 a, s32 b, s32 c);
void WaitByLoop(s32 n);
void func_0210f154(void);
void func_020af3a8(void);
void func_020ebb00(void);
u32 func_02072374(u32 p);
void func_02072398(u32 p, u32 v);
u32 func_0207238c(u32 p);
void func_0206d720(u32 v);
void func_0206d6a4(void);
void func_02038148(s32 v);
void func_020ed64c(s32 v);
void func_02038138(void);
void func_0206d6ec(u32 v);
void func_0206d69c(void);
void func_0206d750(void);
void func_0206d6d4(void);
void func_0206d6ac(u32 v);
void func_0203d4cc(void);
void func_0203d4d0(void);
void func_0205046c(void);
void func_020118a4(void);
void func_020b8e44(void);
void func_0205b740(void);
void func_020044e0(s32 v);
void func_020536dc(void);
void func_02038128(void);
void func_020b8340(void);
void func_020a5c2c(void);
void func_020733e4(u32 v);
void func_02053730(void);
void func_020af33c(void);
void func_02053754(void);
void func_020739b8(u32 v);
void func_020b7d84(void);
void func_020e8208(void);
void func_0209c390(void);
void func_0209cfc8(u32 v);
void func_02113720(void *p);
void func_0204ff6c(void *p);
void func_02119d78(void *f);
BOOL func_02119a78(void *f, Unk_0206d8b8_Pair p);
void func_021199e0(void *f);
void func_02063d18(void *f, void *dst, u32 sz, u32 off);
void func_02119b4c(void *p, void *q);
void *func_020e8574(u32 n);
void func_02063eac(Unk_0206d8b8_Pair p, void *dst, u32 n, s32 z);
void *func_02003ae8(void *p);
void func_02003b54(void *p);
s32 func_0206dad8(void);
void func_0206d4e8(s32 a, s32 b);
void func_0206d774(void *arg, void *p);
void func_0206d5a0(u32 a, void *p);
void *func_0206d5ac(u32 a, void *p, u32 n);
}

struct Unk_0206d0a0_Pad {
    s32 v[1];
    Unk_0206d0a0_Pad() {}
    ~Unk_0206d0a0_Pad() {}
};

struct Unk_0206d1d4_Src {
    u8 pad_00[0x34];
    u8 name[0x18];
    u8 pad_4c[0xa0];
    u8 cnt;
};

// ---- Unk_0206d0a0 : Unk_0206ce50 ----
class Unk_0206d0a0 : public Unk_0206ce50 {
public:
    Unk_0206d0a0();
    ~Unk_0206d0a0();
    void func_0206d0a0(u32 a, u32 b);
    void func_0206d0b8(u8 *data);
    void func_0206d0fc(u8 *src, BOOL flag);
    void func_0206d1d4(Unk_0206d1d4_Src *src, u8 *out);
    void func_0206d288(void *src);
    s32 func_0206d2d4();
    void func_0206d2e0(Unk_0206d1d4_Src *src, void *a, void *b, s32 c);
    void func_0206d380();
    void func_0206d394();
    void func_0206d39c(s32 v);
    void func_0206d3f4(u32 v);

    /* 0x4c */ Unk_0206ce50 unk_4c;
    /* 0x98 */ Unk_0206ce50 unk_98[4];
    /* 0x1c8 */ u8 unk_1c8[0x28];
    /* 0x1f0 */ s32 unk_1f0[5];
    /* 0x204 */ s32 unk_204;
    /* 0x208 */ s32 unk_208;
    /* 0x20c */ s32 unk_20c;
};

void Unk_0206d0a0::func_0206d0a0(u32 a, u32 b) {
    Unk_0206d0a0_Pad pad;
    func_0206cc20(a, b);
}

void Unk_0206d0a0::func_0206d0b8(u8 *data) {
    Unk_020ddf5c buf;
    unk_4c.func_0206cc38();
    func_020a78a4(&buf, data, 0x20);
    unk_4c.func_0206cc84(&buf);
}

void Unk_0206d0a0::func_0206d0fc(u8 *src, BOOL flag) {
    func_0206cfdc(src, unk_1f0, &unk_204);
    Unk_020ddf5c buf;
    u8 z[0x28];
    s32 i;
    s32 zero;
    i = 0;
    z[0] = 0;
    zero = 0;
    for (; i < 4; i++) {
        s32 diff = unk_1f0[i + 1] - unk_1f0[i];
        Unk_0206ce50 *cell = &unk_98[i];
        cell->func_0206cc38();
        if (diff != 0) {
            func_020a78a4(&buf, src + unk_1f0[i], diff);
            if (flag) {
                cell->func_0206cc6c(&buf, i == unk_204 ? 1 : zero);
            } else {
                cell->func_0206cc84(&buf);
            }
        } else if (flag && i == unk_204) {
            func_020a78a4(&buf, z, 1);
            cell->func_0206cc6c(&buf, 1);
        } else {
            cell->func_0206cc38();
        }
    }
}

void Unk_0206d0a0::func_0206d1d4(Unk_0206d1d4_Src *src, u8 *out) {
    u8 tmp[0x28];
    s32 n, j, k;
    func_0206cc38();
    if (out == 0) {
        out = tmp;
    }
    n = 0;
    j = n;
    while (n < src->cnt) {
        out[n] = src->name[j];
        n++;
        j++;
    }
    k = 0;
    while (k < unk_208) {
        out[n] = unk_1c8[k];
        n++;
        k++;
    }
    k = 0;
    while (n < 0x28) {
        if (j < 0x18) {
            out[n] = src->name[j];
        } else {
            out[n] = k;
        }
        n++;
        j++;
    }
    if (unk_208 > 0) {
        func_0206cc14(src->cnt, unk_208);
    }
    Unk_020ddf5c buf;
    func_020a78a4(&buf, out, 0x28);
    func_0206cc84(&buf);
}

void Unk_0206d0a0::func_0206d288(void *src) {
    func_0205125c(unk_1c8, 0x28);
    func_02065604(src, unk_1c8);
    unk_208 = func_020512e0(unk_1c8, 0x28);
    unk_20c = func_02051348(unk_1c8, 0x28);
}

s32 Unk_0206d0a0::func_0206d2d4() {
    return unk_208;
}

void Unk_0206d0a0::func_0206d2e0(Unk_0206d1d4_Src *src, void *a, void *b, s32 c) {
    func_0200212c(b);
    func_02002398(b, 1);
    func_0200226c(b, 0, 0, 0);
    func_ov002_02202dd4(func_02065c8c(src), b);
    func_020021fc(b, 0, 0);
    func_0200212c(a);
    func_02002398(a, c);
    func_0200226c(a, 0, 0, 0);
    func_0206d288(src);
    func_0206d1d4(src, 0);
    func_0206d0fc((u8 *)src + 0x4c, 0);
    func_0206d0b8((u8 *)src + 0xcc);
    func_0206d3f4((u32)a);
    func_0206d380();
    func_020021fc(a, 0, 0);
}

void Unk_0206d0a0::func_0206d380() {
    func_0206ced0();
    func_0206ce98();
}

void Unk_0206d0a0::func_0206d394() {
    func_0206ced0();
}

void Unk_0206d0a0::func_0206d39c(s32 v) {
    s32 i;
    func_0206cdcc(0x75, v);
    unk_4c.func_0206cdcc(0x180, v);
    for (i = 0; i < 4; i++) {
        unk_98[i].func_0206cdcc(i * 0x28 + 0x9d, v);
    }
    unk_208 = 0;
}

void Unk_0206d0a0::func_0206d3f4(u32 v) {
    func_02002654(data_020ddf6c, data_021f482c, v);
}

Unk_0206d0a0::~Unk_0206d0a0() {}

Unk_0206d0a0::Unk_0206d0a0() {}

// ---- free functions ----
extern "C" {
void func_0206d4a4(void *arg);
#pragma thumb off
asm void func_0206d470(void) {
    dcd 0xe92dffff
    mrs r0, cpsr
    stmfd sp!, {r0}
    mov r0, sp
    add r1, sp, #0x44
    str r1, [sp, #0x38]
    mvn r2, #0
    str r2, [sp, #0x40]
    ldr r3, =func_0206d4a4
    bx r3
}
#pragma thumb reset

void func_0206d49c(void) {
    func_0206d470();
}

void func_0206d4a4(void *arg) {
    func_01ffa2ec();
    func_0206d4e8(1, 1);
    if (data_021cb3b8 == 0) {
        data_021cb3b8 = 1;
        func_0206d774(arg, data_021fccfc);
    }
    while (data_021cb3b8 != 0) {
        func_01ffa2ec();
        func_01ffa3c0();
    }
}

void func_0206d4e8(s32 a, s32 b) {
    while (func_02117dd8(0xe, a, 0) != 0) {
        WaitByLoop(b);
    }
}

void func_0206d514(void) {
    u32 ime = func_01ffa2ec();
    volatile u16 *reg = (volatile u16 *)0x4000208;
    u16 old = *reg;
    *reg = 0;
    func_01ff80e0(7);
    func_01ff81a8(7);
    func_02076c24(data_021cc7d0, (s32)OVERLAY_65_ID);
    func_ov065_02277ba4(func_0206d5ac, func_0206d5a0);
    func_0204ef2c((u32)OVERLAY_1_ID);
    void *p = func_020e85b4(0x40000, 0x20);
    func_ov001_0220cb30(p, 1, 0x20);
    func_020e8558(p);
    func_0204eee4((u32)OVERLAY_1_ID);
    func_02076c50(data_021cc7d0);
    *reg;
    *reg = old;
    func_01ffa3d4(ime);
}

void func_0206d5a0(u32 a, void *p) {
    func_020e8558(p);
}

void *func_0206d5ac(u32 a, void *p, u32 n) {
    return func_020e85b4((u32)p, n);
}

u8 func_0206d5b8(void) {
    u8 old = data_020ddf88;
    data_020ddf88 = 4;
    return old;
}

u32 func_0206d5c8(void) {
    void *p = func_020e85b4(0x700, 0x20);
    func_02076c24(data_021cc7d0, (s32)OVERLAY_65_ID);
    u32 r = func_021001e0(p);
    data_020ddf88 = r;
    func_02076c50(data_021cc7d0);
    func_020e8558(p);
    return r;
}

void func_0206d610(void) {
    u32 r;
    s32 b;
    func_0210f154();
    *(volatile u32 *)0x4001000 |= 0x10000;
    func_020af3a8();
    u32 v = data_020cbb18;
    u16 *flag = &data_021cb3c0;
    for (;;) {
        func_020ebb00();
        func_02072398(v, func_02072374(v));
        r = func_0207238c(v);
        func_0206d720(r);
        func_0206d6a4();
        if (r != 0) {
            b = 1;
        } else {
            b = 0;
        }
        func_02038148(b);
        func_020ed64c(b);
        func_02038138();
        func_0206d6ec(r);
        func_0206d69c();
        *flag = 1;
        func_0206d750();
        *flag = 0;
        func_0206d6d4();
        func_0206d6ac(r);
    }
}

void func_0206d69c(void) {
    func_0203d4cc();
}

void func_0206d6a4(void) {
    func_0203d4d0();
}

void func_0206d6ac(u32 r) {
    func_0205046c();
    func_020118a4();
    func_020b8e44();
    func_0205b740();
    func_020044e0(r != 0 ? 1 : 0);
}

void func_0206d6d4(void) {
    func_020536dc();
    func_02038128();
    func_020b8340();
}

void func_0206d6ec(u32 r) {
    if (r == 0) {
        func_020a5c2c();
    }
    func_020733e4(r);
    func_02053730();
    data_021f4768++;
    *(volatile u32 *)0x4000540 = 3;
}

void func_0206d720(u32 r) {
    func_020af33c();
    func_02053754();
    if (r != 0) {
        func_020739b8(r);
    }
    func_020b7d84();
    func_020e8208();
    func_0209c390();
    func_0209cfc8(r);
}

void func_0206d750(void) {
    func_02113720(data_021cb3ec);
}

void func_0206d760(void) {
    func_02113720(data_021cb3e4);
}

void func_0206d770(void) {}

void func_0206d774(void *arg, void *p) {
    func_02114cd8(0, 0);
    data_0213c6dc = (u32)arg;
    func_02000c9c();
}
}

// ---- Unk_0206d8b8: cached record table ----
class Unk_0206d8b8 {
public:
    Unk_0206d8b8();
    ~Unk_0206d8b8();
    void func_0206d828(u32 idx);
    u8 *func_0206d86c(u32 idx);
    void func_0206d8b8();
    void func_0206d8ec();
    void func_0206d904();
    BOOL func_0206d940(void *path, s32 size, s32 count);

    /* 0x00 */ Unk_0206d8b8_Pair unk_00;
    /* 0x08 */ s32 unk_08;
    /* 0x0c */ s32 unk_0c;
    /* 0x10 */ u8 *unk_10;
    /* 0x14 */ s32 unk_14;
    /* 0x18 */ u8 *unk_18;
};

class Unk_0206d7cc {
public:
    Unk_0206d8b8 *func_0206d794();
    Unk_0206d8b8 *func_0206d798();
    Unk_0206d8b8 *func_0206d79c();
    BOOL func_0206d7a0();
    BOOL func_0206d7b4(s32 v);
    void func_0206d7cc();
    BOOL func_0206d7ec(void *a, s32 n0, void *b, s32 n1, void *c, s32 n2, s32 count);

    /* 0x00 */ Unk_0206d8b8 unk_00;
    /* 0x1c */ Unk_0206d8b8 unk_1c;
    /* 0x38 */ Unk_0206d8b8 unk_38;
};

Unk_0206d8b8 *Unk_0206d7cc::func_0206d794() {
    return &unk_38;
}

Unk_0206d8b8 *Unk_0206d7cc::func_0206d798() {
    return &unk_1c;
}

Unk_0206d8b8 *Unk_0206d7cc::func_0206d79c() {
    return &unk_00;
}

BOOL Unk_0206d7cc::func_0206d7a0() {
    unk_1c.func_0206d8ec();
    return TRUE;
}

BOOL Unk_0206d7cc::func_0206d7b4(s32 v) {
    if (v == 0) {
        unk_1c.func_0206d904();
    }
    return TRUE;
}

void Unk_0206d7cc::func_0206d7cc() {
    unk_00.func_0206d8b8();
    unk_1c.func_0206d8b8();
    unk_38.func_0206d8b8();
}

BOOL Unk_0206d7cc::func_0206d7ec(void *a, s32 n0, void *b, s32 n1, void *c, s32 n2, s32 count) {
    unk_00.func_0206d940(a, n0, count);
    unk_1c.func_0206d940(b, n1, count);
    unk_38.func_0206d940(c, n2, count);
    unk_00.func_0206d904();
    return TRUE;
}

void Unk_0206d8b8::func_0206d828(u32 idx) {
    u32 blk = idx >> 3;
    u8 file[0x4c];
    func_0204ff6c(data_021c4890);
    func_02119d78(file);
    if (func_02119a78(file, unk_00)) {
        u32 sz = unk_08 << 3;
        func_02063d18(file, unk_18, sz, blk * sz);
        func_021199e0(file);
    }
}

u8 *Unk_0206d8b8::func_0206d86c(u32 idx) {
    if (unk_10 != 0) {
        return unk_10 + unk_08 * idx;
    }
    u32 blk = idx >> 3;
    if (unk_14 == blk) {
        return unk_18 + unk_08 * (idx & 7);
    }
    if (unk_18 != 0) {
        func_0206d828(idx);
        u32 off = unk_08 * (idx & 7);
        unk_14 = blk;
        return unk_18 + off;
    }
    return 0;
}

Unk_0206d8b8::~Unk_0206d8b8() {
    func_0206d8b8();
}

void Unk_0206d8b8::func_0206d8b8() {
    unk_00.a = 0;
    unk_14 = -1;
    unk_0c = 0;
    unk_08 = 0;
    if (unk_10 != 0) {
        func_020e8558(unk_10);
        unk_10 = 0;
    }
    if (unk_18 != 0) {
        func_020e8558(unk_18);
        unk_18 = 0;
    }
}

void Unk_0206d8b8::func_0206d8ec() {
    if (unk_10 != 0) {
        func_020e8558(unk_10);
        unk_10 = 0;
    }
}

void Unk_0206d8b8::func_0206d904() {
    u32 size = unk_08 * unk_0c;
    if (unk_10 == 0) {
        unk_10 = (u8 *)func_020e8574(size);
    }
    func_0204ff6c(data_021c4890);
    func_02063eac(unk_00, unk_10, size, 0);
}

BOOL Unk_0206d8b8::func_0206d940(void *path, s32 size, s32 count) {
    unk_08 = size;
    unk_0c = count;
    func_02119b4c(this, path);
    unk_18 = (u8 *)func_020e8574(size << 3);
    return TRUE;
}

Unk_0206d8b8::Unk_0206d8b8() {
    unk_00.a = 0;
    unk_14 = -1;
    unk_0c = 0;
    unk_10 = 0;
    unk_18 = 0;
    unk_08 = 0;
}

extern "C" {
void func_0206d988(void) {
    if (data_021cb400 != 0) {
        data_021cb400--;
    }
    data_020ddf8c = (s32)func_02003ae8(data_021cb420);
}

void func_0206d9b4(void) {
    func_02003b54(data_021cb420);
    data_020ddf8c = -1;
    func_0206dad8();
}
}
