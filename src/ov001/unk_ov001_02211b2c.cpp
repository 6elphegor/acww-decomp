// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

extern "C" {
extern const u8 data_ov001_0222a000[4];
extern const u8 data_ov001_0222a004[4];
extern const u16 data_ov001_0222a008[20];
extern const u16 data_ov001_0222a030[20];
const u8 data_ov001_0222a000[4] = {0x2e, 0x2d, 0x33, 0};
const u8 data_ov001_0222a004[4] = {0x18, 0x17, 0x16, 0x15};
const u16 data_ov001_0222a030[20] = {4, 0x2e, 0xdb, 0x3f, 4, 0x4a, 0xdb, 0x5b, 4, 0x66, 0xdb, 0x77, 4, 0x82, 0xdb, 0x93, 0x82, 0x18, 0xf0, 0x2c};
const u16 data_ov001_0222a008[20] = {7, 0x32, 0xd0, 0x4c, 7, 0x4e, 0xd0, 0x68, 7, 0x6a, 0xd0, 0x84, 7, 0x86, 0xd0, 0xa0, 0x85, 0x1b, 0xfd, 0x2c};
u8 data_ov001_0222aea8 = 2;
u8 data_ov001_0222de6c;
u16 data_ov001_0222de70;
void *data_ov001_0222de74;
}


#define BGCNT(a, v) (*(volatile u16 *)(a) = (*(volatile u16 *)(a) & ~3) | (v))

namespace F02212e84 {


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
extern void *data_ov001_0222af04[];

void GX_LoadBG3Scr();
s32 FX_DivS32(s32, s32);
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

void func_ov001_02212e84();
void func_ov001_02212ea4();
void func_ov001_02212ee0();
void func_ov001_02212f38();
void func_ov001_02212f98();
void func_ov001_02213124();
void func_ov001_022131d4();
void func_ov001_02213338();
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

void func_ov001_022131d4() {
    char a[25] = "char/xb4ApListBack.nsc.l";
    char b[22] = "char/ybBgStep31.ncl.l";
    func_ov001_02208594((void *)"char/jb4ApList.nsc.l", (void *)GX_LoadBG3Scr);
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
        r = FX_DivS32(data_ov001_0222de70 * data_ov001_0222de74->unk_53, data_ov001_0222de74->unk_40);
    }
    func_ov001_0221d660(m, 0x55, 0xec, 0x3f, r);
}

void func_ov001_02212f98() {
    s32 n, i;
    n = data_ov001_0222de74->unk_51;
    if (n > 5) n = 5;
    i = 0;
    if (n > 0) {
        u32 a = data_ov001_0222a000[0];
        u32 b = data_ov001_0222a004[0];
        do {
            data_ov001_0222de74->unk_10[i] = func_ov001_02224b60(0, a);
            data_ov001_0222de74->unk_24[i] = func_ov001_02224b60(0, b);
            i++;
        } while (i < n);
    }
    {
        const u8 *p = data_ov001_0222a000;
        u32 j;
        for (j = 0; j < 3; j++, p++) {
            func_ov001_02224b9c(0, *p, data_ov001_0222de74->unk_10[0]);
            data_ov001_0222de74->unk_42[j] = data_ov001_0222de74->unk_10[0]->h4 & 0x3ff;
        }
    }
    {
        const u8 *p = data_ov001_0222a004;
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

void func_ov001_02212f38() {
    func_ov001_02224ff8(2, 1, 1, 8);
    func_ov001_02224ff8(2, 0, 0x1d, 8);
    func_ov001_02225cb4(1, 1);
    func_ov001_02225cb4(0, 0x1d);
    func_ov001_0220c668((void *)func_ov001_02212ee0);
}

void func_ov001_02212ee0() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    func_ov001_022084f8(0);
    func_ov001_0220c668((void *)func_ov001_02212ea4);
}

void func_ov001_02212ea4() {
    if (func_ov001_02208100() == -2) return;
    func_ov001_02208088();
    func_ov001_0220c668((void *)func_ov001_02212e84);
}

void func_ov001_02212e84() {
    func_ov001_02212bc8();
    func_ov001_022128d0();
    func_ov001_02212780();
}

}
}

namespace F022123e4 {


struct Unk_ov001_0222de74_Rec {
    u8 pad_00[0x28];
    u8 unk_28;
    u8 pad_29;
};

struct Unk_ov001_0222de74 {
    Unk_ov001_0222de74_Rec *unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    void *unk_10[5];
    void *unk_24[5];
    void *unk_38;
    u32 unk_3c;
    u16 unk_40;
    u8 pad_42[0xe];
    s8 unk_50;
    u8 unk_51;
    u8 unk_52;
    u8 unk_53;
    u8 unk_54;
    u8 unk_55;
    u8 unk_56;
    u8 unk_57;
    u8 unk_58;
    u8 unk_59;
};

extern "C" {
extern Unk_ov001_0222de74 *data_ov001_0222de74;
extern u16 data_ov001_0222de70;
extern u8 data_ov001_0222de6c;
extern u8 data_ov001_0222a460[];

s32 FX_DivS32(s32, s32);
s32 FX_ModS32(s32, s32);
s32 func_ov001_02225238(void *, s32);
s32 func_ov001_02212260(s32, s32);
s32 func_ov001_022121cc(s32, s32);
s32 func_ov001_0222516c(void *);
s32 func_ov001_02212108();
s32 func_ov001_022250e0(s32);
s32 func_ov001_022080a0();
s32 func_ov001_02226fd0(s32, void *);
s32 func_ov001_022267c8(void *);
s32 func_ov001_02225400(void *);
s32 func_ov001_0221d61c();
s32 func_ov001_0220864c();
s32 func_ov001_02208244();
s32 func_ov001_0221cf28();
s32 func_ov001_02224038(void *);
s32 func_ov001_02225c58(s32, s32);
s32 func_ov001_0221dc60();
u8 *func_ov001_0221e8b4();
s32 func_ov001_0221e348(s32);
s32 func_ov001_0220c654(s32, s32);
s32 func_ov001_0220c668(void *);
s32 func_ov001_0221e850(void *);
s32 func_ov001_0220c618(s32, s32);
s32 func_ov001_02225d58(void *);
s32 func_ov001_02208114();
s32 func_ov001_02208070();
s32 func_ov001_02224ff8(s32, s32, s32, s32);
s32 func_ov001_02224e4c(s32);
s32 func_ov001_02208100();
s32 func_ov001_0221e9a0(s32);
s32 func_ov001_02211ba8();
s32 func_ov001_0221d5b8();
s32 func_ov001_02220778(s32, s32, s32, s32, s32);
s32 func_ov001_0221d5f4();
s32 func_ov001_02208088();
s32 func_ov001_0221d608();
s32 func_ov001_02211ea0();
s32 func_ov001_02227094(s32, void *, s32, s32);
s32 func_ov001_022260ac(void *);
s32 func_ov001_02225fd4(void *);
s32 func_ov001_022080e0(s32);
s32 func_ov001_022261cc(s32);
s32 func_ov001_022261a8(s32);
s32 func_ov001_02226184(s32);
s32 func_ov001_02211be8();
s32 func_ov001_02211c90();
s32 func_ov001_02211d28(s32);

void func_ov001_02212020();
void func_ov001_02211f78();
void func_ov001_02211b68();
void func_ov001_0221b318();
void func_ov001_02219bc0();
void func_ov001_02213f84();
void func_ov001_0221be7c();

void func_ov001_022123e4();
void func_ov001_0221249c();
void func_ov001_022126d0();
void func_ov001_02212754();
void func_ov001_02212780();
void func_ov001_022128d0();
void func_ov001_02212bc8();

void func_ov001_022123e4();
void func_ov001_0221249c();
void func_ov001_022126d0();
void func_ov001_02212754();
void func_ov001_02212780();
void func_ov001_022128d0();
void func_ov001_02212bc8();
void func_ov001_02212bc8() {
    if (data_ov001_0222de74->unk_38 != 0) return;
    if (data_ov001_0222de74->unk_57 != 0) return;
    if (func_ov001_022260ac(data_ov001_0222a460) != 0) {
        data_ov001_0222de74->unk_50 = -1;
        u32 i;
        u8 *p = (u8 *)data_ov001_0222a008;
        for (i = 0; i < 5; i++, p += 8) {
            if (func_ov001_022260ac(p) != 0) {
                if ((s32)i < 4) {
                    data_ov001_0222de74->unk_50 = i;
                    break;
                }
                func_ov001_022080e0(1);
                data_ov001_0222de6c = i;
                func_ov001_02211ea0();
                return;
            }
        }
    }
    if (func_ov001_02225fd4(data_ov001_0222a460) != 0) {
        u8 *p = (u8 *)data_ov001_0222a008;
        s32 i;
        for (i = 0; i < 4; i++, p += 8) {
            if (func_ov001_02225fd4(p) != 0) {
                if (data_ov001_0222de74->unk_50 != i) break;
                if (i >= data_ov001_0222de74->unk_51) {
                    func_ov001_0221e9a0(9);
                    break;
                }
                func_ov001_022080e0(1);
                data_ov001_0222de6c = i;
                func_ov001_02211ea0();
                return;
            }
        }
    }
    if (func_ov001_022261cc(1) != 0) {
        func_ov001_022080e0(1);
        func_ov001_0221d5b8();
        return;
    }
    if (func_ov001_022261cc(2) != 0) {
        func_ov001_022080e0(0);
        return;
    }
    if (func_ov001_022261a8(0x200) != 0) {
        func_ov001_02211be8();
        return;
    }
    if (func_ov001_02226184(0x200) != 0) {
        data_ov001_0222de74->unk_59 = 0;
        return;
    }
    if (func_ov001_022261a8(0x100) != 0) {
        func_ov001_02211c90();
        return;
    }
    if (func_ov001_02226184(0x100) != 0) {
        data_ov001_0222de74->unk_59 = 0;
        return;
    }
    if (func_ov001_022261a8(0x40) != 0) {
        func_ov001_02211d28(1);
        return;
    }
    if (func_ov001_02226184(0x40) != 0) {
        data_ov001_0222de74->unk_59 = 0;
        return;
    }
    if (func_ov001_022261a8(0x80) != 0) {
        func_ov001_02211d28(3);
        return;
    }
    if (func_ov001_02226184(0x80) != 0) data_ov001_0222de74->unk_59 = 0;
}

void func_ov001_022128d0() {
    if (data_ov001_0222de74->unk_38 != 0) return;
    if (data_ov001_0222de74->unk_55 != 0) data_ov001_0222de74->unk_55--;
    switch (func_ov001_0221d5f4()) {
    case 0:
        break;
    case 1:
        data_ov001_0222de74->unk_57 = 1;
        func_ov001_02208070();
        break;
    case 2:
        if (data_ov001_0222de74->unk_55 != 0) return;
        func_ov001_0220864c();
        data_ov001_0222de70 = FX_DivS32(data_ov001_0222de74->unk_40 * func_ov001_0221d608(), data_ov001_0222de74->unk_53);
        func_ov001_022123e4();
        data_ov001_0222de74->unk_55 = 4;
        break;
    case 3: {
        data_ov001_0222de74->unk_57 = 0;
        func_ov001_02208088();
        data_ov001_0222de70 = FX_DivS32(data_ov001_0222de74->unk_40 * func_ov001_0221d608(), data_ov001_0222de74->unk_53);
        func_ov001_0221e9a0(0x13);
        func_ov001_022123e4();
        s32 r = FX_ModS32(data_ov001_0222de70, 0x1c);
        if (r == 0) {
            func_ov001_02211ea0();
            return;
        }
        if (r < 0xe) data_ov001_0222de74->unk_38 = (void *)func_ov001_02227094(0, (void *)func_ov001_02212020, 0, 0x78);
        else data_ov001_0222de74->unk_38 = (void *)func_ov001_02227094(0, (void *)func_ov001_02211f78, 0, 0x78);
        break;
    }
    case 4:
        if (data_ov001_0222de70 == 0) {
            if (data_ov001_0222de74->unk_58 != 0) return;
            func_ov001_0221e9a0(9);
            data_ov001_0222de74->unk_58 = 1;
        } else {
            func_ov001_0221e9a0(0x13);
            data_ov001_0222de74->unk_38 = (void *)func_ov001_02227094(0, (void *)func_ov001_02212020, 0, 0x78);
        }
        break;
    case 6:
        if (data_ov001_0222de74->unk_51 > 4) {
            if (data_ov001_0222de70 != data_ov001_0222de74->unk_40) goto c6b;
        }
        if (data_ov001_0222de74->unk_58 != 0) return;
        func_ov001_0221e9a0(9);
        data_ov001_0222de74->unk_58 = 1;
        break;
    c6b:
        func_ov001_0221e9a0(0x13);
        data_ov001_0222de74->unk_38 = (void *)func_ov001_02227094(0, (void *)func_ov001_02211f78, 0, 0x78);
        break;
    case 5:
    case 7:
        data_ov001_0222de74->unk_58 = 0;
        break;
    }
}

void func_ov001_02212780() {
    if (data_ov001_0222de74->unk_38 != 0) return;
    if (data_ov001_0222de74->unk_57 != 0) return;
    switch (func_ov001_02208100()) {
    case 0:
        func_ov001_0221e9a0(7);
        break;
    case 1:
        if (data_ov001_0222de6c == 4) {
            data_ov001_0222de74->unk_54 = 1;
            func_ov001_0221e9a0(6);
            func_ov001_02211ba8();
        } else {
            s32 t = data_ov001_0222de6c + FX_DivS32(data_ov001_0222de70, 0x1c);
            if (data_ov001_0222de74->unk_00[t].unk_28 == 2) {
                func_ov001_0221e9a0(9);
                func_ov001_0221d5b8();
                func_ov001_02208070();
                func_ov001_02220778(0x42, 1, 1, -1, 0);
                func_ov001_0220c668((void *)func_ov001_02211b68);
                return;
            }
            data_ov001_0222de74->unk_54 = 1;
            data_ov001_0222de74->unk_52 = t;
            func_ov001_0221e9a0(6);
        }
        break;
    default:
        return;
    }
    func_ov001_0220c668((void *)func_ov001_02212754);
}

void func_ov001_02212754() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_022126d0);
}

void func_ov001_022126d0() {
    if (func_ov001_022250e0(1) != 0) return;
    if (data_ov001_0222de74->unk_54 != 0) func_ov001_02208114();
    else func_ov001_02208070();
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x1d, 8);
    func_ov001_0220c668((void *)func_ov001_0221249c);
}

void func_ov001_0221249c() {
    if (func_ov001_022250e0(1) != 0) return;
    if (func_ov001_022250e0(0) != 0) return;
    if (func_ov001_022080a0() == 0) return;
    func_ov001_02226fd0(1, (void *)data_ov001_0222de74->unk_3c);
    s32 i;
    for (i = 0; i < 5; i++) {
        if (data_ov001_0222de74->unk_10[i] != 0) func_ov001_022267c8(data_ov001_0222de74->unk_10[i]);
        if (data_ov001_0222de74->unk_24[i] != 0) func_ov001_022267c8(data_ov001_0222de74->unk_24[i]);
    }
    func_ov001_02225400(data_ov001_0222de74->unk_0c);
    func_ov001_0221d61c();
    func_ov001_0220864c();
    func_ov001_02208244();
    func_ov001_0221cf28();
    func_ov001_02224038(data_ov001_0222de74->unk_04);
    func_ov001_02224038(data_ov001_0222de74->unk_08);
    func_ov001_02225c58(1, 1);
    func_ov001_02225c58(0, 0x1d);
    *(volatile u32 *)0x4000010 = 0;
    *(volatile u32 *)0x4000018 = 0;
    if (data_ov001_0222de74->unk_54 == 0) {
        func_ov001_0221dc60();
        func_ov001_0221e348(func_ov001_0221e8b4()[0xf4]);
        func_ov001_0220c654(2, 0);
        func_ov001_0220c668((void *)func_ov001_0221b318);
    } else if (data_ov001_0222de6c == 4) {
        func_ov001_0221dc60();
        func_ov001_0220c654(0, 1);
        func_ov001_0220c668((void *)func_ov001_02219bc0);
    } else {
        func_ov001_0221e850(&data_ov001_0222de74->unk_00[data_ov001_0222de74->unk_52]);
        func_ov001_0220c654(0, 0);
        if (data_ov001_0222de74->unk_00[data_ov001_0222de74->unk_52].unk_28 != 0) {
            func_ov001_0220c654(0, 1);
            func_ov001_0220c618(1, 1);
            func_ov001_0220c668((void *)func_ov001_02213f84);
        } else {
            func_ov001_0220c654(0, 1);
            func_ov001_0220c618(0, 1);
            func_ov001_0220c668((void *)func_ov001_0221be7c);
        }
    }
    func_ov001_02225d58(&data_ov001_0222de74);
}

void func_ov001_022123e4() {
    s32 base = FX_DivS32(data_ov001_0222de70, 0x1c);
    s32 n = data_ov001_0222de74->unk_51;
    func_ov001_02225238(data_ov001_0222de74->unk_0c, 0);
    if (n > 5) n = 5;
    s32 p, i;
    for (i = 0, p = base; i < n; i++, p++) func_ov001_02212260(p, i);
    for (i = 0, p = base; i < n; i++, p++) func_ov001_022121cc(p, i);
    func_ov001_0222516c(data_ov001_0222de74->unk_0c);
    func_ov001_02212108();
}

}
}

namespace F0221197c {

struct Unk_ov001_0222de74 {
    u8 *unk_00;
    u32 unk_04;
    void *unk_08;
    void *unk_0c;
    u32 *unk_10[5];
    u32 *unk_24[5];
    void *unk_38;
    u32 unk_3c;
    u16 unk_40;
    u16 unk_42[3];
    u16 unk_48[3];
    u8 pad_4e[3];
    u8 unk_51;
    u8 pad_52;
    u8 unk_53;
    u8 pad_54[2];
    u8 unk_56;
    u8 pad_57[2];
    u8 unk_59;
};

extern "C" {
extern u8 data_ov001_0222ae94[];
extern u8 GX_LoadBG2Scr[];
extern u8 data_ov001_0222de68;
extern u8 data_ov001_0222aea8;
extern u8 data_ov001_0222de6c;
extern u16 data_ov001_0222de70;
extern Unk_ov001_0222de74 *data_ov001_0222de74;

s32 func_ov001_02224ff8(u32 a, u32 b, u32 c, u32 d);
s32 func_ov001_0220c668(void *p);
s32 func_ov001_022250e0(u32 a);
s32 func_ov001_02225cb4(u32 a, u32 b);
s32 func_ov001_02208594(void *a, void *b);
s32 func_ov001_022088f8();
s32 func_ov001_02208478(u32 a);
s32 func_ov001_0221e9a0(u32 a);
s32 func_ov001_022206f8();
s32 func_ov001_02208088();
s32 func_ov001_0221d5d0();
s32 func_ov001_02220714();
s32 func_ov001_02220728();
s32 func_ov001_0221ce08(void *a, u32 b, u32 c);
void *func_ov001_02227094(s32, void *, s32, s32);
void func_ov001_02226fdc(s32, s32);
s32 func_ov001_022123e4();
s32 func_ov001_0221d5e8(u32 a);
s32 func_ov001_0221d5b8();
s32 func_ov001_0220864c();
void func_ov001_02208780(u32 a, u32 b, u32 c, u32 d);
s32 FX_ModS32(s32, s32);
s32 FX_DivS32(s32, s32);
s32 func_ov001_02226c24(void *a, u32 b);
void func_ov001_02225290(void *a, u32 b, u32 c, u32 d, u32 e, void *f, u32 g);
void *MI_CpuFill8(void *, s32, u32);

void func_ov001_022118f0();
void func_ov001_022119c8();
void func_ov001_022119e4();
void func_ov001_02211a1c();
void func_ov001_02212e84();
void func_ov001_02211b2c();
void func_ov001_02211f78(u32 a);
void func_ov001_02212020(u32 a);
void func_ov001_02211ea0();
void func_ov001_02211be8();
void func_ov001_022118a8();
void func_ov001_02212108();
}

extern "C" {

void func_ov001_02211b2c();
void func_ov001_02211b68();
void func_ov001_02211ba8();
void func_ov001_02211be8();
void func_ov001_02211c90();
void func_ov001_02211d28(s32 a);
void func_ov001_02211ea0();
void func_ov001_02211ef8();
void func_ov001_02211f78(u32 a);
void func_ov001_02212020(u32 a);
void func_ov001_02212108();
void func_ov001_022121cc(s32 a, s32 b);
void func_ov001_02212260(s32 a, s32 b);
void func_ov001_02212260(s32 a, s32 b) {
    u16 buf[17];
    u32 r4 = a * 0x2a;
    s32 n = func_ov001_02226c24(data_ov001_0222de74->unk_00 + r4, 0x20);
    u32 r5 = b * 0x1c;
    s32 i;
    if (a >= data_ov001_0222de74->unk_51) return;
    if (n <= 0x10) r5 += 6;
    MI_CpuFill8(buf, 0, 0x22);
    s32 cnt = n <= 0x10 ? n : 0x10;
    for (i = 0; i < cnt; i++) buf[i] = (data_ov001_0222de74->unk_00 + r4)[i];
    func_ov001_02225290(data_ov001_0222de74->unk_0c, 0xa, r5, 2, 0xa, buf, 1);
    if (n > 0x10) {
        MI_CpuFill8(buf, 0, 0x22);
        cnt = n - 0x10;
        for (i = 0; i < cnt; i++) buf[i] = (data_ov001_0222de74->unk_00 + r4)[i + 0x10];
        func_ov001_02225290(data_ov001_0222de74->unk_0c, 0xa, r5 + 0xc, 2, 0xa, buf, 1);
    }
}

void func_ov001_022121cc(s32 a, s32 b) {
    Unk_ov001_0222de74 *o = data_ov001_0222de74;
    if (a >= o->unk_51) return;
    u8 *rec = o->unk_00 + a * 0x2a;
    u16 *p = (u16 *)o->unk_10[b];
    p[2] = (p[2] & ~0x3ff) | o->unk_42[rec[0x28]];
    o = data_ov001_0222de74;
    rec = o->unk_00 + a * 0x2a;
    u16 *q = (u16 *)o->unk_24[b];
    q[2] = (q[2] & ~0x3ff) | o->unk_48[*(u16 *)(rec + 0x26)];
}

void func_ov001_02212108() {
    s32 n = FX_ModS32(data_ov001_0222de70, 0x1c);
    s32 y = 0x36 - n;
    s32 cnt = data_ov001_0222de74->unk_51;
    s32 i;
    if (cnt > 5) cnt = 5;
    for (i = 0; i < cnt; i++) {
        u32 *p = data_ov001_0222de74->unk_10[i];
        *p = (*p & 0xfe00ff00) | (u8)(y - 2) | 0xb30000;
        u32 *q = data_ov001_0222de74->unk_24[i];
        *q = (*q & 0xfe00ff00) | (u8)(y + 1) | 0xd20000;
        y += 0x1c;
    }
    data_ov001_0222de74->unk_56 = 1;
}

void func_ov001_02212020(u32 a) {
    func_ov001_0221d5b8();
    func_ov001_0220864c();
    if (data_ov001_0222de70 > 4) data_ov001_0222de70 = data_ov001_0222de70 - 4;
    else data_ov001_0222de70 = 0;
    s32 n = FX_ModS32(data_ov001_0222de70, 0x1c);
    if (n == 0x18) {
        func_ov001_022123e4();
        return;
    }
    if (n > 0x18) {
        data_ov001_0222de70 = data_ov001_0222de70 + (0x1c - n);
        n = 0;
    }
    func_ov001_02212108();
    if (n != 0) return;
    func_ov001_0221d5e8(FX_DivS32(data_ov001_0222de70 * data_ov001_0222de74->unk_53, data_ov001_0222de74->unk_40));
    func_ov001_0221d5d0();
    func_ov001_02211ea0();
    data_ov001_0222de74->unk_38 = 0;
    func_ov001_02226fdc(0, a);
}

void func_ov001_02211f78(u32 a) {
    func_ov001_0221d5b8();
    func_ov001_0220864c();
    data_ov001_0222de70 += 4;
    s32 n = FX_ModS32(data_ov001_0222de70, 0x1c);
    if (n >= 4) {
        func_ov001_02212108();
        return;
    }
    data_ov001_0222de70 = data_ov001_0222de70 - n;
    func_ov001_022123e4();
    func_ov001_0221d5e8(FX_DivS32(data_ov001_0222de70 * data_ov001_0222de74->unk_53, data_ov001_0222de74->unk_40));
    func_ov001_0221d5d0();
    func_ov001_02211ea0();
    data_ov001_0222de74->unk_38 = 0;
    func_ov001_02226fdc(0, a);
}

void func_ov001_02211ef8() {
    if (data_ov001_0222de74->unk_56 == 0) return;
    u32 v = FX_ModS32(data_ov001_0222de70, 0x1c) - 0x32;
    v = (v << 16) & 0x1ff0000;
    *(volatile u32 *)0x4000010 = v;
    *(volatile u32 *)0x4000018 = v;
    data_ov001_0222de74->unk_56 = 0;
}

void func_ov001_02211ea0() {
    u32 i = data_ov001_0222de6c;
    func_ov001_02208780(i < 4 ? 2 : 3, data_ov001_0222a030[i * 4], (data_ov001_0222a030 + 2)[i * 4], (data_ov001_0222a030 + 1)[i * 4]);
}

void func_ov001_02211d28(s32 a) {
    s32 r = 1;
    switch (data_ov001_0222de6c) {
    case 0:
        if (a == 1) {
            if (data_ov001_0222de70 == 0) {
                data_ov001_0222de6c = 4;
            } else {
                func_ov001_0221e9a0(0x13);
                data_ov001_0222de74->unk_38 = func_ov001_02227094(0, (void *)func_ov001_02212020, 0, 0x78);
                return;
            }
        } else {
            if (data_ov001_0222de74->unk_51 > 1) data_ov001_0222de6c = data_ov001_0222de6c + 1;
            else r = 0;
        }
        break;
    case 1:
    case 2:
        if (a == 1) {
            data_ov001_0222de6c = data_ov001_0222de6c - 1;
        } else {
            u32 n = data_ov001_0222de6c + 1;
            if (data_ov001_0222de74->unk_51 > (s32)n) data_ov001_0222de6c = n;
            else r = 0;
        }
        break;
    case 3:
        if (a == 1) {
            data_ov001_0222de6c = data_ov001_0222de6c - 1;
        } else {
            func_ov001_02211be8();
            return;
        }
        break;
    case 4:
        if (a == 1) {
            r = 0;
        } else {
            data_ov001_0222de70 = 0;
            data_ov001_0222de6c = 0;
            func_ov001_022123e4();
            func_ov001_0221d5e8(0);
        }
        break;
    }
    if (r == 0) {
        if (data_ov001_0222de74->unk_59 != 0) return;
        func_ov001_0221e9a0(9);
        data_ov001_0222de74->unk_59 = 1;
    } else {
        func_ov001_0221e9a0(8);
        func_ov001_02211ea0();
    }
}

void func_ov001_02211c90() {
    if (data_ov001_0222de70 == 0) {
        if (data_ov001_0222de74->unk_59 != 0) return;
        func_ov001_0221e9a0(9);
        data_ov001_0222de74->unk_59 = 1;
    } else {
        func_ov001_0221e9a0(0x13);
        data_ov001_0222de74->unk_38 = func_ov001_02227094(0, (void *)func_ov001_02212020, 0, 0x78);
    }
}

void func_ov001_02211be8() {
    Unk_ov001_0222de74 *o = data_ov001_0222de74;
    if (data_ov001_0222de70 == o->unk_40 || o->unk_51 <= 4) {
        if (o->unk_59 != 0) return;
        func_ov001_0221e9a0(9);
        data_ov001_0222de74->unk_59 = 1;
    } else {
        func_ov001_0221e9a0(0x13);
        data_ov001_0222de74->unk_38 = func_ov001_02227094(0, (void *)func_ov001_02211f78, 0, 0x78);
    }
}

void func_ov001_02211ba8() {
    volatile u8 v = data_ov001_0222aea8;
    u8 t = v;
    func_ov001_0221ce08(data_ov001_0222de74->unk_08, t, t);
}

void func_ov001_02211b68() {
    if (func_ov001_02220714() != 0) return;
    func_ov001_0221e9a0(6);
    func_ov001_02220728();
    func_ov001_0220c668((void *)func_ov001_02211b2c);
}

void func_ov001_02211b2c() {
    if (func_ov001_022206f8() != 0) return;
    func_ov001_02208088();
    func_ov001_0221d5d0();
    func_ov001_0220c668((void *)func_ov001_02212e84);
}

}
}
