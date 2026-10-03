// mwcc-flags: -O4,p
#include "types.h"

#pragma thumb off

struct Unk_ov001_02224670_Entry {
    u32 unk_00;
    u16 unk_04;
    u16 unk_06;
};

struct Unk_ov001_02224670 {
    Unk_ov001_02224670 *unk_00;
    Unk_ov001_02224670 *unk_04;
    Unk_ov001_02224670_Entry *unk_08;
    u8 unk_0c;
};

struct Unk_ov001_02224b9c_T {
    u16 unk_00;
    u16 unk_02;
    u32 unk_04;
};

extern "C" {
void MIi_CpuCopy16(void *, void *, u32);
void MIi_CpuClear32(s32, void *, u32);
void MIi_CpuCopy32(void *, void *, u32);
void func_ov001_02224038(void *);
void *func_ov001_02224074(u32, void *, u32);
Unk_ov001_02224670 *func_ov001_02224870(s32, s32, s32);
Unk_ov001_02224670_Entry *func_ov001_022247d4(Unk_ov001_02224670 *, s32);
Unk_ov001_02224670 *func_ov001_02226814(s32, void *);

Unk_ov001_02224670 *func_ov001_02224b14(s32 which, s32 idx, s32 flag);
Unk_ov001_02224670 *func_ov001_02224b60(s32 which, s32 idx);
void func_ov001_02224b9c(s32 which, s32 idx, void *dst);
void func_ov001_02224c40(s32 which);
void func_ov001_02224c6c(s32 which, u32 path);

Unk_ov001_02224b9c_T *data_ov001_0222df38[2];
}

void func_ov001_02224c6c(s32 which, u32 path) {
    u32 buf[2];
    data_ov001_0222df38[which] = (Unk_ov001_02224b9c_T *)func_ov001_02224074(path, buf, 4);
}

void func_ov001_02224c40(s32 which) {
    func_ov001_02224038(data_ov001_0222df38[which]);
    data_ov001_0222df38[which] = 0;
}

void func_ov001_02224b9c(s32 which, s32 idx, void *dst) {
    Unk_ov001_02224b9c_T *tbl = data_ov001_0222df38[which];
    u8 buf[8];
    volatile s32 z;
    u32 off = tbl[idx].unk_04;
    u32 cnt = tbl[idx].unk_00;
    u8 *src = (u8 *)tbl + off;
    s32 i;
    z = 0;
    MIi_CpuClear32(z, buf, 8);
    for (i = 0; i < (s32)cnt; i++) {
        MIi_CpuCopy16(src, buf, 6);
        MIi_CpuCopy32(buf, dst, 8);
        src += 6;
        dst = (u8 *)dst + 8;
    }
}

Unk_ov001_02224670 *func_ov001_02224b60(s32 which, s32 idx) {
    u32 buf[2];
    Unk_ov001_02224670 *r = func_ov001_02226814(which, buf);
    func_ov001_02224b9c(which, idx, r);
    return r;
}

Unk_ov001_02224670 *func_ov001_02224b14(s32 which, s32 idx, s32 flag) {
    Unk_ov001_02224670 *r = func_ov001_02224870(which, data_ov001_0222df38[which][idx].unk_00, flag);
    func_ov001_02224b9c(which, idx, func_ov001_022247d4(r, 0));
    return r;
}

