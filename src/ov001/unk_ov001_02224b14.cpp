// mwcc-flags: -O4,p
#include "types.h"
#include "nitro/gxoam.h"
#include "net/WfcObjGroup.h"

#pragma thumb off



struct Unk_ov001_02224b9c_T {
    u16 unk_00;
    u16 unk_02;
    u32 unk_04;
};

extern "C" {
void MIi_CpuCopy16(void *, void *, u32);
void MIi_CpuClear32(s32, void *, u32);
void MIi_CpuCopy32(void *, void *, u32);
void WfcFs_FreeFile(void *);
void *WfcFs_LoadFile(u32, void *, u32);
WfcObjGroup *WfcObj_Alloc(s32, s32, s32);
GXOamAttr *WfcObj_GetOam(WfcObjGroup *, s32);
WfcObjGroup *WfcOam_AllocEntry(s32, void *);

WfcObjGroup *WfcObj_Create(s32 which, s32 idx, s32 flag);
WfcObjGroup *WfcObj_CreateSingle(s32 which, s32 idx);
void WfcCell_Copy(s32 which, s32 idx, void *dst);
void WfcCell_Unload(s32 which);
void WfcCell_Load(s32 which, u32 path);

Unk_ov001_02224b9c_T *sWfcCellData[2];
}

void WfcCell_Load(s32 which, u32 path) {
    u32 buf[2];
    sWfcCellData[which] = (Unk_ov001_02224b9c_T *)WfcFs_LoadFile(path, buf, 4);
}

void WfcCell_Unload(s32 which) {
    WfcFs_FreeFile(sWfcCellData[which]);
    sWfcCellData[which] = 0;
}

void WfcCell_Copy(s32 which, s32 idx, void *dst) {
    Unk_ov001_02224b9c_T *tbl = sWfcCellData[which];
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

WfcObjGroup *WfcObj_CreateSingle(s32 which, s32 idx) {
    u32 buf[2];
    WfcObjGroup *r = WfcOam_AllocEntry(which, buf);
    WfcCell_Copy(which, idx, r);
    return r;
}

WfcObjGroup *WfcObj_Create(s32 which, s32 idx, s32 flag) {
    WfcObjGroup *r = WfcObj_Alloc(which, sWfcCellData[which][idx].unk_00, flag);
    WfcCell_Copy(which, idx, WfcObj_GetOam(r, 0));
    return r;
}

