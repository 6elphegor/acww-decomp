// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0220c474_Rec {
    u16 unk_00[0x82];
};

struct Unk_ov001_0220c398_Obj {
    u16 unk_000;
    Unk_ov001_0220c474_Rec unk_002;
    u16 unk_106;
    s16 unk_108;
    u16 unk_10a;
    s16 unk_10c;
    s16 unk_10e;
    u8 unk_110[6];
    u8 unk_116;
    u8 unk_117[0x155];
};

extern "C" {
extern const char data_ov001_02229f84[12];
const char data_ov001_02229f84[12] = "NINTENDO-DS";

volatile u8 data_ov001_0222dde4;
Unk_ov001_0220c398_Obj *data_ov001_0222dde8;

extern s32 func_ov001_02202b3c(void *);
extern s32 func_ov001_02203040();
extern s32 func_ov001_022030fc(void *, void *);
extern void func_0206d49c();

#pragma thumb off

extern void func_ov001_02225d08();
void func_ov001_0220c37c();
void *func_ov001_0220c388(s32);
extern void *func_ov001_02225dd8(s32, s32);
extern void *func_ov001_02225db0(s32, s32);
extern void func_ov001_02225d58(void *);
extern void func_ov001_0221e024(void *);
extern void MIi_CpuClear16(u32, void *, u32);
extern void MI_CpuCopy8(const void *, void *);
extern void OS_GetMacAddress(void *);

void func_ov001_0220c474() {
    volatile u16 z;
    Unk_ov001_0220c474_Rec r;
    data_ov001_0222dde8 = (Unk_ov001_0220c398_Obj *)func_ov001_02225db0(0x26c, 4);
    data_ov001_0222dde4 = 0;
    z = 0;
    MIi_CpuClear16(z, &r, 0x104);
    *(u8 *)&r = 0x50;
    r.unk_00[1] = 0xc;
    MI_CpuCopy8(data_ov001_02229f84, &r.unk_00[2]);
    data_ov001_0222dde8->unk_000 = 3;
    data_ov001_0222dde8->unk_002 = r;
    data_ov001_0222dde8->unk_106 = 1;
    data_ov001_0222dde8->unk_108 = -1;
    data_ov001_0222dde8->unk_10a = 1;
    data_ov001_0222dde8->unk_10c = -1;
    data_ov001_0222dde8->unk_10e = -1;
    OS_GetMacAddress(data_ov001_0222dde8->unk_110);
    if (func_ov001_022030fc((void *)func_ov001_0220c388, (void *)func_ov001_0220c37c) != 0) {
        func_0206d49c();
    }
}

void func_ov001_0220c414(s32 a) {
    func_ov001_02203040();
    if (a != 0) {
        Unk_ov001_0220c398_Obj *o = data_ov001_0222dde8;
        if (o->unk_116 == 0) {
            if (data_ov001_0222dde4 == 1) {
                func_ov001_0221e024(o->unk_117);
            }
        }
    }
    func_ov001_02225d58(&data_ov001_0222dde8);
}

u32 func_ov001_0220c398() {
    if (func_ov001_02202b3c(data_ov001_0222dde8) == 0) {
        data_ov001_0222dde4 = 1;
        return 1;
    }
    u32 t = data_ov001_0222dde8->unk_116;
    if (t == 1) goto zero;
    if ((u8)(t + 0xfd) > 2) goto two;
zero:
    return 0;
two:
    return 2;
}

void *func_ov001_0220c388(s32 a) {
    return func_ov001_02225dd8(a, 0x20);
}

void func_ov001_0220c37c() {
    func_ov001_02225d08();
}
}
#pragma thumb reset
