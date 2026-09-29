// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0220ba08_Reg {
    u32 w0;
    u16 h4;
};

struct Unk_ov001_0222dde0 {
    void *unk_00[4];
    Unk_ov001_0220ba08_Reg *unk_10[10];
    Unk_ov001_0220ba08_Reg *unk_38[2];
    void *unk_40[2];
    void *unk_48[4];
    void *unk_58;
    void *unk_5c;
    u8 unk_60;
    s8 unk_61;
    s8 unk_62;
    s8 unk_63;
    u8 unk_64;
    u8 unk_65;
    u8 unk_66;
    u8 unk_67;
    u8 unk_68;
    u8 unk_69;
};

extern "C" {
extern Unk_ov001_0222dde0 *data_ov001_0222dde0;
extern u8 data_ov001_0222a460[];
extern u32 data_ov001_02229eec[];
extern u32 data_ov001_02229eb4[];
extern u32 data_ov001_02229ebc[];
extern u8 data_ov001_02229ea4[];
extern u8 data_ov001_02229eac[];
extern u8 data_ov001_02229eb0[];
extern u16 data_ov001_0222aa58[];
extern u16 data_ov001_02229ea4_h[];
extern u8 data_ov001_02229e90[];
extern u8 data_ov001_02229e94[];
extern u16 data_ov001_02229ea8[];
extern u16 data_ov001_02229ed0[];

extern void func_ov001_02225924(void *, void *, void *);
extern s32 func_ov001_022260ac(void *);
extern void func_ov001_0221e9a0(s32);
extern void func_ov001_0222449c(void *, s32, s32 *, s32 *);
extern void func_ov001_0220b148(s32, s32);
extern void func_ov001_0220afcc();
extern s32 func_ov001_02226ffc(void *, void *);
extern void func_ov001_0220b818();
extern void func_ov001_0220b618();
extern void func_ov001_0220b3e4();
extern void func_ov001_022247e0(void *);
extern void func_ov001_0220ae6c(void *);
extern void *func_ov001_02225db0(s32, s32);
extern void *func_ov001_02224b60(s32, s32);
extern void *func_ov001_02224b14(s32, s32, s32);
extern void func_ov001_02224704(void *, s32, s32, s32);
extern void func_ov001_022244d8(void *, s32, s32);
extern void *func_ov001_02225748(s32, s32, s32, s32, void *, s32);
extern void func_ov001_02225254(void *, u32, u32, u32, u32, s32, u32, void *);
extern void *func_ov001_02224870(s32, s32, s32);
extern void *func_ov001_02227094(s32, void *, s32, s32);

void func_ov001_0220ba08();
void func_ov001_0220bc00();
void func_ov001_0220bc24(void *self);
void func_ov001_0220bcb0(void *self);
void func_ov001_0220bd54(void *self);
void func_ov001_0220bdf8(void *self);
void func_ov001_0220be9c(void *self);

#pragma thumb off

void func_ov001_0220ba08() {
    u32 out[3];
    s32 i;
    if (func_ov001_022260ac(data_ov001_0222a460) == 0) return;
    data_ov001_0222dde0->unk_61 = -1;
    for (i = 0; i < 10; i++) {
        func_ov001_02225924(&data_ov001_02229eec[i], data_ov001_02229ea4, out);
        if (func_ov001_022260ac(out) != 0) {
            if (data_ov001_0222dde0->unk_67 == 0) {
                func_ov001_0221e9a0(9);
                return;
            }
            func_ov001_0221e9a0(0);
            data_ov001_0222dde0->unk_61 = i;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov001_02225924(&data_ov001_02229eb4[i], data_ov001_02229eac, out);
        if (func_ov001_022260ac(out) != 0) {
            if (i == 0 && data_ov001_0222dde0->unk_66 == 0) goto fail;
            if (i == 1 && data_ov001_0222dde0->unk_68 == 0) {
            fail:
                func_ov001_0221e9a0(9);
                return;
            }
            func_ov001_0221e9a0(0);
            data_ov001_0222dde0->unk_61 = i + 10;
            return;
        }
    }
    for (i = 0; i < 2; i++) {
        func_ov001_02225924(&data_ov001_02229ebc[i], data_ov001_02229eb0, out);
        if (func_ov001_022260ac(out) != 0) {
            func_ov001_0221e9a0(0);
            data_ov001_0222dde0->unk_61 = i + 12;
            return;
        }
    }
}

void func_ov001_0220bc00() {
    func_ov001_0220ba08();
    func_ov001_0220b818();
    func_ov001_0220b618();
    func_ov001_0220b3e4();
}

void func_ov001_0220bc24(void *self) {
    s32 a, b;
    func_ov001_0222449c(data_ov001_0222dde0->unk_40[0], 0, &a, &b);
    b -= 12;
    u32 h = ((u16 *)data_ov001_02229ebc)[1];
    if (b > (s32)h) {
        func_ov001_0220b148(4, b);
        return;
    }
    func_ov001_0220b148(4, h);
    func_ov001_0220afcc();
    func_ov001_02226ffc(self, (void *)func_ov001_0220bc00);
}

void func_ov001_0220bcb0(void *self) {
    volatile s32 a, b;
    volatile u32 *ip = (volatile u32 *)data_ov001_0222dde0->unk_10[9];
    a = (*ip & 0x1ff0000) >> 16;
    s32 c = *ip & 0xff;
    b = c;
    c -= 12;
    b = c;
    u32 h = ((u16 *)data_ov001_02229eec)[0x26 / 2];
    if (c > (s32)h) {
        func_ov001_0220b148(3, c);
        return;
    }
    func_ov001_0220b148(3, h);
    func_ov001_0220b148(4, 0xc0);
    func_ov001_02226ffc(self, (void *)func_ov001_0220bc24);
}

void func_ov001_0220bd54(void *self) {
    volatile s32 a, b;
    volatile u32 *ip = (volatile u32 *)data_ov001_0222dde0->unk_10[6];
    a = (*ip & 0x1ff0000) >> 16;
    s32 c = *ip & 0xff;
    b = c;
    c -= 12;
    b = c;
    u32 h = ((u16 *)data_ov001_02229eec)[0x1a / 2];
    if (c > (s32)h) {
        func_ov001_0220b148(2, c);
        return;
    }
    func_ov001_0220b148(2, h);
    func_ov001_0220b148(3, 0xc0);
    func_ov001_02226ffc(self, (void *)func_ov001_0220bcb0);
}

void func_ov001_0220bdf8(void *self) {
    volatile s32 a, b;
    volatile u32 *ip = (volatile u32 *)data_ov001_0222dde0->unk_10[3];
    a = (*ip & 0x1ff0000) >> 16;
    s32 c = *ip & 0xff;
    b = c;
    c -= 12;
    b = c;
    u32 h = ((u16 *)data_ov001_02229eec)[0xe / 2];
    if (c > (s32)h) {
        func_ov001_0220b148(1, c);
        return;
    }
    func_ov001_0220b148(1, h);
    func_ov001_0220b148(2, 0xc0);
    func_ov001_02226ffc(self, (void *)func_ov001_0220bd54);
}

void func_ov001_0220be9c(void *self) {
    volatile s32 a, b;
    volatile u32 *ip = (volatile u32 *)data_ov001_0222dde0->unk_10[0];
    a = (*ip & 0x1ff0000) >> 16;
    s32 c = *ip & 0xff;
    b = c;
    c -= 12;
    b = c;
    u32 h = ((u16 *)data_ov001_02229eec)[0x2 / 2];
    if (c > (s32)h) {
        func_ov001_0220b148(0, c);
        return;
    }
    func_ov001_0220b148(0, h);
    func_ov001_0220b148(1, 0xc0);
    func_ov001_02226ffc(self, (void *)func_ov001_0220bdf8);
}

BOOL func_ov001_0220bf40() {
    return data_ov001_0222dde0 != NULL ? TRUE : FALSE;
}

void func_ov001_0220bf5c(u32 v) {
    data_ov001_0222dde0->unk_68 = v;
}

void func_ov001_0220bf70(u32 v) {
    data_ov001_0222dde0->unk_67 = v;
}

void func_ov001_0220bf84(u32 v) {
    data_ov001_0222dde0->unk_66 = v;
}

u32 func_ov001_0220bf98() {
    return data_ov001_0222dde0->unk_60;
}

void func_ov001_0220bfac() {
    func_ov001_022247e0(data_ov001_0222dde0->unk_58);
    func_ov001_02226ffc(data_ov001_0222dde0->unk_5c, (void *)func_ov001_0220ae6c);
}

void func_ov001_0220bfec() {
    volatile u16 pos[4];
    u32 t;
    u16 v[2];
    s32 i, j, k;
    pos[2] = data_ov001_0222aa58[2];
    pos[3] = data_ov001_0222aa58[3];
    pos[0] = data_ov001_0222aa58[0];
    pos[1] = data_ov001_0222aa58[1];
    pos[2] = ((u16 *)data_ov001_02229ea4)[0];
    pos[3] = ((u16 *)data_ov001_02229ea4)[1];
    data_ov001_0222dde0 = (Unk_ov001_0222dde0 *)func_ov001_02225db0(0x6c, 4);
    data_ov001_0222dde0->unk_60 = 0x1f;
    data_ov001_0222dde0->unk_63 = 0;
    data_ov001_0222dde0->unk_66 = 1;
    data_ov001_0222dde0->unk_67 = 1;
    data_ov001_0222dde0->unk_68 = 1;
    for (i = 0; i < 10; i++) {
        data_ov001_0222dde0->unk_10[i] = (Unk_ov001_0220ba08_Reg *)func_ov001_02224b60(0, 0x36);
        data_ov001_0222dde0->unk_10[i]->w0 = (data_ov001_0222dde0->unk_10[i]->w0 & 0xc1fffcff) | 0x200;
        data_ov001_0222dde0->unk_10[i]->h4 = (data_ov001_0222dde0->unk_10[i]->h4 & ~0xc00) | 0xc00;
    }
    u8 *p = data_ov001_02229e90;
    for (i = 0; i < 2; i++) {
        data_ov001_0222dde0->unk_38[i] = (Unk_ov001_0220ba08_Reg *)func_ov001_02224b60(0, *p);
        p++;
        data_ov001_0222dde0->unk_38[i]->w0 = (data_ov001_0222dde0->unk_38[i]->w0 & 0xc1fffcff) | 0x200;
        data_ov001_0222dde0->unk_38[i]->h4 = (data_ov001_0222dde0->unk_38[i]->h4 & ~0xc00) | 0xc00;
    }
    for (i = 0; i < 2; i++) {
        data_ov001_0222dde0->unk_40[i] = func_ov001_02224b14(0, data_ov001_02229e94[i], 1);
        func_ov001_02224704(data_ov001_0222dde0->unk_40[i], -1, 0x200, 0);
        func_ov001_022244d8(data_ov001_0222dde0->unk_40[i], -1, 3);
    }
    u32 bh = data_ov001_02229ea8[1];
    u32 bw = data_ov001_02229ea8[0];
    s32 n;
    i = 0;
    n = i;
    v[1] = i;
    for (; i < 4; i++) {
        data_ov001_0222dde0->unk_00[i] = func_ov001_02225748(0, bw, bh, 0, &t, 0);
        pos[0] = 0;
        s32 idx = n;
        s32 kk;
        for (kk = 0; kk < 3; kk++, idx++, pos[0] += 0x20) {
            v[0] = data_ov001_02229ed0[idx];
            func_ov001_02225254(data_ov001_0222dde0->unk_00[i], pos[0], pos[1], pos[2], pos[3], 2, 0x480, (void *)v);
        }
        data_ov001_0222dde0->unk_48[i] = func_ov001_02224870(0, t, 0);
        n += 3;
    }
    data_ov001_0222dde0->unk_58 = func_ov001_02224b14(0, 0x44, 1);
    func_ov001_02224704(data_ov001_0222dde0->unk_58, -1, 0x200, 0);
    func_ov001_022244d8(data_ov001_0222dde0->unk_58, -1, 2);
    data_ov001_0222dde0->unk_5c = func_ov001_02227094(0, (void *)func_ov001_0220be9c, 0, 0x78);
    func_ov001_0220b148(0, 0xc0);
}

#pragma thumb reset
}
