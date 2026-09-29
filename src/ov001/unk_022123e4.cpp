// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

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
extern u8 data_ov001_0222a008[];

s32 func_01ffc31c(s32, s32);
s32 func_01ffc2c4(s32, s32);
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

void func_ov001_022123e4() {
    s32 base = func_01ffc31c(data_ov001_0222de70, 0x1c);
    s32 n = data_ov001_0222de74->unk_51;
    func_ov001_02225238(data_ov001_0222de74->unk_0c, 0);
    if (n > 5) n = 5;
    s32 p, i;
    for (i = 0, p = base; i < n; i++, p++) func_ov001_02212260(p, i);
    for (i = 0, p = base; i < n; i++, p++) func_ov001_022121cc(p, i);
    func_ov001_0222516c(data_ov001_0222de74->unk_0c);
    func_ov001_02212108();
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

void func_ov001_022126d0() {
    if (func_ov001_022250e0(1) != 0) return;
    if (data_ov001_0222de74->unk_54 != 0) func_ov001_02208114();
    else func_ov001_02208070();
    func_ov001_02224ff8(3, 1, 1, 8);
    func_ov001_02224ff8(3, 0, 0x1d, 8);
    func_ov001_0220c668((void *)func_ov001_0221249c);
}

void func_ov001_02212754() {
    func_ov001_02208070();
    func_ov001_02224e4c(8);
    func_ov001_0220c668((void *)func_ov001_022126d0);
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
            s32 t = data_ov001_0222de6c + func_01ffc31c(data_ov001_0222de70, 0x1c);
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
        data_ov001_0222de70 = func_01ffc31c(data_ov001_0222de74->unk_40 * func_ov001_0221d608(), data_ov001_0222de74->unk_53);
        func_ov001_022123e4();
        data_ov001_0222de74->unk_55 = 4;
        break;
    case 3: {
        data_ov001_0222de74->unk_57 = 0;
        func_ov001_02208088();
        data_ov001_0222de70 = func_01ffc31c(data_ov001_0222de74->unk_40 * func_ov001_0221d608(), data_ov001_0222de74->unk_53);
        func_ov001_0221e9a0(0x13);
        func_ov001_022123e4();
        s32 r = func_01ffc2c4(data_ov001_0222de70, 0x1c);
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

void func_ov001_02212bc8() {
    if (data_ov001_0222de74->unk_38 != 0) return;
    if (data_ov001_0222de74->unk_57 != 0) return;
    if (func_ov001_022260ac(data_ov001_0222a460) != 0) {
        data_ov001_0222de74->unk_50 = -1;
        u32 i;
        u8 *p = data_ov001_0222a008;
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
        u8 *p = data_ov001_0222a008;
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
}
