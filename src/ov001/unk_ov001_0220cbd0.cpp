// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0220cbd0_Tbl {
    u32 *unk_00;
    u8 *unk_04;
    void *unk_08;
};

struct Unk_ov001_0220cc30_Ent {
    u32 unk_00;
    u32 unk_04;
    void *unk_08;
};

struct Unk_ov001_0220cc30_Mgr {
    u8 unk_00[0x60];
    void *unk_60;
};

extern "C" {
Unk_ov001_0220cc30_Mgr *data_ov001_0222de10;

extern void func_ov001_02224038(void *);
extern void *func_ov001_02224ca0(void *);
extern void func_ov001_02224cfc(void *, void *);
extern void *func_ov001_02224074(void *, void *, u32);
extern void *func_ov001_02224d84(s32, void *, s32);
extern void func_ov001_02225d58(void *);
extern void *func_ov001_02225dd8(s32, s32);

#pragma thumb off

void func_ov001_0220ccdc() {
    Unk_ov001_0220cc30_Mgr *m = (Unk_ov001_0220cc30_Mgr *)func_ov001_02225dd8(0x64, 4);
    data_ov001_0222de10 = m;
    data_ov001_0222de10->unk_60 = func_ov001_02224d84(8, m, 0xc);
}

void func_ov001_0220ccc8() {
    func_ov001_02225d58(&data_ov001_0222de10);
}

Unk_ov001_0220cc30_Ent *func_ov001_0220cc60(void *a) {
    u32 sz;
    Unk_ov001_0220cc30_Ent *e = (Unk_ov001_0220cc30_Ent *)func_ov001_02224ca0(data_ov001_0222de10->unk_60);
    e->unk_08 = func_ov001_02224074(a, &sz, 4);
    u8 *b = (u8 *)e->unk_08 + 0x20;
    e->unk_00 = (u32)(b + 0x10);
    e->unk_04 = (u32)(b + *(u32 *)(b + 4) + 8);
    return e;
}

void func_ov001_0220cc30(Unk_ov001_0220cc30_Ent *e) {
    func_ov001_02224038(e->unk_08);
    func_ov001_02224cfc(data_ov001_0222de10->unk_60, e);
}

u8 *func_ov001_0220cc10(Unk_ov001_0220cbd0_Tbl *t, u32 i) {
    return t->unk_04 + t->unk_00[i & 0xffff];
}

u16 *func_ov001_0220cbd0(Unk_ov001_0220cbd0_Tbl *t, u32 i, s32 j, u32 v) {
    u16 *p = (u16 *)(t->unk_04 + t->unk_00[i & 0xffff]);
    if (j >= 0) p[j] = v + 0x30;
    return p;
}
}
#pragma thumb reset
