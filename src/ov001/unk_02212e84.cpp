// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_02212f98_Reg { u16 h0; u16 h2; u16 h4; };

struct Unk_ov001_0222de74 {
    u8 *unk_00;
    u32 *unk_04;
    u32 *unk_08;
    void *unk_0c;
    Unk_ov001_02212f98_Reg *unk_10[5];
    Unk_ov001_02212f98_Reg *unk_24[5];
    void *unk_38;
    void *unk_3c;
    u16 unk_40;
    u16 unk_42[3];
    u16 unk_48[4];
    u8 pad_50;
    u8 unk_51;
    u8 unk_52;
    u8 unk_53;
};

struct Unk_ov001_0222de78 {
    u32 unk_00;
    u32 *unk_04;
    u8 unk_08[0x22];
    u8 unk_2a;
};

struct Unk_ov001_02213124_S25 { u8 b[25]; };
struct Unk_ov001_02213124_S22 { u8 b[22]; };

extern "C" {
extern Unk_ov001_0222de74 *data_ov001_0222de74;
extern Unk_ov001_0222de78 *data_ov001_0222de78;
extern u16 data_ov001_0222de70;
extern u8 data_ov001_0222de6c;
extern u8 data_ov001_0222a000;
extern u8 data_ov001_0222a004;
extern Unk_ov001_02213124_S25 data_ov001_0222aec4;
extern Unk_ov001_02213124_S22 data_ov001_0222aeac;
extern u8 data_ov001_0222aee0[];
extern void *data_ov001_0222af04[];

void func_0211199c();
s32 func_01ffc31c(s32, s32);
void func_ov001_02212bc8();
void func_ov001_022128d0();
void func_ov001_02212780();
s32 func_ov001_02208100();
void func_ov001_02208088();
void func_ov001_0220c668(void *);
s32 func_ov001_022250e0(s32);
void func_ov001_022084f8(s32);
void func_ov001_02224ff8(s32, s32, s32, s32);
void func_ov001_02225cb4(s32, s32);
Unk_ov001_02212f98_Reg *func_ov001_02224b60(s32, s32);
void func_ov001_02224b9c(s32, u32, void *);
void func_ov001_0221d660(s32, s32, s32, s32, s32);
s32 func_ov001_02208594(void *, void *);
void *func_ov001_022085e0(void *);
void *func_ov001_02224074(void *, s32, s32);
void func_ov001_0221cf5c(void *);
void func_ov001_0221cf10();
void *func_ov001_02225db0(s32, s32);
void func_ov001_0220c5f0(s32 *, s32 *);
s32 func_ov001_0221da0c(void *);
void func_ov001_022088f8();
void func_ov001_02208290(s32, s32, s32);
void func_ov001_02208538(s32);
void *func_ov001_0222558c(s32, s32);
void *func_ov001_02227094(s32, void *, s32, s32);
void func_ov001_022123e4();
void func_ov001_02211ea0();
void func_ov001_02211ef8();
void func_ov001_02213db0();
void func_ov001_02213930();
s32 func_ov001_022206f8();
s32 func_ov001_02220714();
s32 func_ov001_02220728();
void func_ov001_0221e9a0(s32);
s32 func_ov001_02226c24(void *, s32);

void func_ov001_02212e84();
void func_ov001_02212ea4();
void func_ov001_02212ee0();
void func_ov001_02212f38();
void func_ov001_02213424();
void func_ov001_02213670();

void func_ov001_02212e84() {
    func_ov001_02212bc8();
    func_ov001_022128d0();
    func_ov001_02212780();
}

void func_ov001_02212ea4() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_02212e84);
}

void func_ov001_02212ee0() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(0);
    func_ov001_0220c668((void *)func_ov001_02212ea4);
}

void func_ov001_02212f38() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x1d, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x1d);
    func_ov001_0220c668((void *)func_ov001_02212ee0);
}

void func_ov001_02212f98() {
    s32 n, i;
    n = data_ov001_0222de74->unk_51;
    if (n > 5) n = 5;
    i = 0;
    if (n > 0) {
        u32 a = data_ov001_0222a000;
        u32 b = data_ov001_0222a004;
        do {
            data_ov001_0222de74->unk_10[i] = func_ov001_02224b60(0, a);
            data_ov001_0222de74->unk_24[i] = func_ov001_02224b60(0, b);
            i++;
        } while (i < n);
    }
    {
        u8 *p = &data_ov001_0222a000;
        u32 j;
        for (j = 0; j < 3; j++, p++) {
            func_ov001_02224b9c(0, *p, data_ov001_0222de74->unk_10[0]);
            data_ov001_0222de74->unk_42[j] = data_ov001_0222de74->unk_10[0]->h4 & 0x3ff;
        }
    }
    {
        u8 *p = &data_ov001_0222a004;
        u32 j;
        for (j = 0; j < 4; j++, p++) {
            func_ov001_02224b9c(0, *p, data_ov001_0222de74->unk_24[0]);
            data_ov001_0222de74->unk_48[j] = data_ov001_0222de74->unk_24[0]->h4 & 0x3ff;
        }
    }
    for (i = 0; i < n; i++) {
        Unk_ov001_02212f98_Reg *r = data_ov001_0222de74->unk_10[i];
        r->h4 = (r->h4 & ~0xc00) | 0xc00;
        r = data_ov001_0222de74->unk_24[i];
        r->h4 = (r->h4 & ~0xc00) | 0xc00;
    }
}

void func_ov001_02213124() {
    s32 r = 0;
    s32 m;
    data_ov001_0222de74->unk_40 = (data_ov001_0222de74->unk_51 - 4) * 0x1c;
    if (data_ov001_0222de74->unk_51 <= 4) {
        m = r;
        data_ov001_0222de74->unk_53 = 0;
    } else if (data_ov001_0222de74->unk_51 <= 8) {
        data_ov001_0222de74->unk_53 = 0x1f;
        m = 1;
    } else {
        data_ov001_0222de74->unk_53 = 0x37;
        m = 2;
    }
    if (m != 0) {
        r = func_01ffc31c(data_ov001_0222de70 * data_ov001_0222de74->unk_53, data_ov001_0222de74->unk_40);
    }
    func_ov001_0221d660(m, 0x55, 0xec, 0x3f, r);
}

#define BGCNT(a, v) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | (v))

void func_ov001_022131d4() {
    Unk_ov001_02213124_S25 a;
    Unk_ov001_02213124_S22 b;
    a = data_ov001_0222aec4;
    b = data_ov001_0222aeac;
    func_ov001_02208594(data_ov001_0222aee0, (void *)func_0211199c);
    data_ov001_0222de74->unk_04 = (u32 *)func_ov001_02224074(func_ov001_022085e0(&a), 0, 4);
    func_ov001_0221cf5c(data_ov001_0222de74->unk_04);
    func_ov001_0221cf10();
    data_ov001_0222de74->unk_08 = (u32 *)func_ov001_02224074(func_ov001_022085e0(&b), 0, 4);
    BGCNT(0x4001008, 3);
    BGCNT(0x400100a, 3);
    BGCNT(0x4000008, 3);
    BGCNT(0x400000a, 2);
    BGCNT(0x400000c, 3);
    BGCNT(0x400000e, 2);
}

void func_ov001_02213338() {
    s32 x;
    data_ov001_0222de74 = (Unk_ov001_0222de74 *)func_ov001_02225db0(0x5c, 4);
    func_ov001_0220c5f0(&x, 0);
    if (x == 0) {
        data_ov001_0222de6c = 0;
        data_ov001_0222de70 = 0;
    }
    data_ov001_0222de74->unk_51 = func_ov001_0221da0c(data_ov001_0222de74);
    func_ov001_022131d4();
    func_ov001_022088f8();
    func_ov001_02208290(0x80, -1, 0);
    func_ov001_02208538(2);
    func_ov001_02213124();
    func_ov001_02212f98();
    data_ov001_0222de74->unk_0c = (void *)func_ov001_0222558c(0, 0);
    data_ov001_0222de74->unk_3c = func_ov001_02227094(1, (void *)func_ov001_02211ef8, 0, 0x6e);
    func_ov001_022123e4();
    func_ov001_02211ea0();
    func_ov001_0220c668((void *)func_ov001_02212f38);
}

void func_ov001_02213424() {
    if (func_ov001_022206f8() != 0) return;
    *data_ov001_0222de78->unk_04 &= 0xc1fffcff;
    func_ov001_0220c668((void *)func_ov001_02213db0);
}

void func_ov001_0221347c() {
    if (func_ov001_02220714() != 0) return;
    func_ov001_0221e9a0(6);
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_02213424);
}

BOOL func_ov001_022134bc() {
    s32 a, b, r, i;
    u32 c;
    func_ov001_0220c5f0(&a, &b);
    if (b == 1) {
        func_ov001_02208290(0x81, -1, 0);
    }
    func_ov001_0220c5f0(&a, &b);
    if (a == 0) {
        return data_ov001_0222de78->unk_08[0] != 0 ? 1 : 0;
    }
    if (b == 1) {
        if (data_ov001_0222de78->unk_08[0] == 0) return 0;
    }
    r = func_ov001_02226c24(data_ov001_0222de78->unk_08, 0x20);
    switch (r) {
    case 0:
    case 5:
    case 13:
    case 16:
        return 1;
    case 10:
    case 26:
    case 32: {
        i = 0;
        if (r > 0) {
            u8 *p = (u8 *)data_ov001_0222de78;
            do {
                c = p[8];
                if (c >= 0x30 && c <= 0x39) goto next;
                if (c >= 0x41 && c <= 0x46) goto next;
                if (c >= 0x61 && c <= 0x66) goto next;
                return 0;
            next:
                i++;
                p++;
            } while (i < r);
        }
        return 1;
    }
    }
    return 0;
}

void func_ov001_02213670() {
    void *tbl[2];
    s32 idx;
    tbl[0] = data_ov001_0222af04[0];
    tbl[1] = data_ov001_0222af04[1];
    if (func_ov001_022206f8() != 0) return;
    if (data_ov001_0222de78->unk_2a == 0) {
        *data_ov001_0222de78->unk_04 &= 0xc1fffcff;
        func_ov001_0220c668((void *)func_ov001_02213db0);
        return;
    }
    func_ov001_0220c5f0(&idx, 0);
    ((void (*)(void *))tbl[idx])(data_ov001_0222de78->unk_08);
    func_ov001_0220c668((void *)func_ov001_02213930);
}

void func_ov001_0221372c() {
    data_ov001_0222de78->unk_2a = func_ov001_02220714();
    switch (data_ov001_0222de78->unk_2a) {
    case 0:
        func_ov001_0221e9a0(7);
        break;
    case 1:
        func_ov001_0221e9a0(0xe);
        break;
    default:
        return;
    }
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_02213670);
}
}
