// mwcc-flags: -O4,p
#include "types.h"
#include "nitro/gxoam.h"
#include "net/WfcObjGroup.h"

#pragma thumb off



struct WfcCellEntry {
    u16 numOams;
    u16 unk_02;
    u32 dataOffset;
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

WfcCellEntry *sWfcCellData[2];
}

void WfcCell_Load(s32 which, u32 path) {
    u32 buf[2];
    sWfcCellData[which] = (WfcCellEntry *)WfcFs_LoadFile(path, buf, 4);
}

void WfcCell_Unload(s32 which) {
    WfcFs_FreeFile(sWfcCellData[which]);
    sWfcCellData[which] = 0;
}

void WfcCell_Copy(s32 which, s32 idx, void *dst) {
    WfcCellEntry *tbl = sWfcCellData[which];
    u8 buf[8];
    volatile s32 z;
    u32 off = tbl[idx].dataOffset;
    u32 cnt = tbl[idx].numOams;
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
    WfcObjGroup *r = WfcObj_Alloc(which, sWfcCellData[which][idx].numOams, flag);
    WfcCell_Copy(which, idx, WfcObj_GetOam(r, 0));
    return r;
}

