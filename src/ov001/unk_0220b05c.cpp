// mwcc-flags: -O3,p
#include "types.h"

struct Unk_ov001_0220b05c_Reg {
    u32 w0;
    u16 h4;
};

struct Unk_ov001_0222dde0 {
    void *unk_00[4];
    Unk_ov001_0220b05c_Reg *unk_10[10];
    Unk_ov001_0220b05c_Reg *unk_38[2];
    void *unk_40[2];
    void *unk_48[4];
    u8 unk_58[8];
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

struct Unk_ov001_0220b618_Pt {
    u16 x;
    u16 y;
};

extern "C" {
extern Unk_ov001_0222dde0 *data_ov001_0222dde0;
extern u8 data_ov001_02229e98[];
extern u8 data_ov001_02229e8c[];
extern u8 data_ov001_02229e9c[];
extern u8 data_ov001_02229ea0[];
extern u8 data_ov001_02229ec4[];
extern Unk_ov001_0220b618_Pt data_ov001_02229eec[];
extern Unk_ov001_0220b618_Pt data_ov001_02229eb4[];
extern Unk_ov001_0220b618_Pt data_ov001_02229ebc[];
extern u8 data_ov001_0222a460[];
extern u8 data_ov001_02229ea4[];
extern u8 data_ov001_02229eac[];
extern u8 data_ov001_02229eb0[];

extern void func_ov001_02224670(void *, s32, s32, u32);
extern void func_ov001_0222519c(void *, u32, s32, void *, s32);
extern void func_ov001_02224704(void *, s32, s32, s32);
extern void func_ov001_02224558(void *, s32, u32, s32);
extern void func_ov001_02225924(void *, void *, void *);
extern s32 func_ov001_02226118(void *);
extern s32 func_ov001_02225fd4(void *);
extern s32 func_ov001_022261a8(u32);
extern s32 func_ov001_022261cc(u32);
extern s32 func_ov001_02226184(u32);
extern void func_ov001_0220aef4(s32);
extern void func_ov001_0221e9a0(s32);
extern void func_ov001_0220afcc();

void func_ov001_0220b05c(s32 a, u32 b);
void func_ov001_0220b148(s32 a, s32 b);
void func_ov001_0220b3e4();
void func_ov001_0220b5c4(s32 a);
void func_ov001_0220b618();
void func_ov001_0220b818();

#pragma thumb off

void func_ov001_0220b05c(s32 a, u32 b) {
    if (a < 0) return;
    if (a < 10) {
        Unk_ov001_0220b05c_Reg *r = data_ov001_0222dde0->unk_10[a];
        r->w0 = r->w0 & ~0xc00;
        r->h4 = (r->h4 & ~0xf000) | (data_ov001_02229e98[b] << 12);
    } else if (a - 10 < 2) {
        Unk_ov001_0220b05c_Reg *r = data_ov001_0222dde0->unk_38[a - 10];
        r->w0 = r->w0 & ~0xc00;
        r->h4 = (r->h4 & ~0xf000) | (data_ov001_02229e98[b] << 12);
    } else {
        func_ov001_02224670(data_ov001_0222dde0->unk_40[a - 12], -1, 0, data_ov001_02229e8c[b]);
    }
}

void func_ov001_0220b148(s32 a, s32 b) {
    u8 x[5] = {3, 3, 3, 1, 0};
    u8 y[5] = {0, 0, 0, 2, 0};
    u8 z[5] = {0, 0, 0, 0, 2};
    s32 k = a * 3;
    s32 i;
    for (i = 0; i < x[a]; i++) {
        Unk_ov001_0220b05c_Reg *r = data_ov001_0222dde0->unk_10[k];
        r->w0 &= 0xc1fffcff;
        u32 t = data_ov001_02229eec[k].x;
        r = data_ov001_0222dde0->unk_10[k];
        r->w0 = (r->w0 & 0xfe00ff00) | (u8)b | ((t & 0x1ff) << 16);
        k++;
    }
    if (a < 4) {
        func_ov001_0222519c(data_ov001_0222dde0->unk_00[a], data_ov001_02229eec[a * 3].x, b, data_ov001_0222dde0->unk_48[a], 2);
    }
    for (i = 0; i < y[a]; i++) {
        Unk_ov001_0220b05c_Reg *r = data_ov001_0222dde0->unk_38[i];
        r->w0 &= 0xc1fffcff;
        u32 t = data_ov001_02229eb4[i].x;
        r = data_ov001_0222dde0->unk_38[i];
        r->w0 = (r->w0 & 0xfe00ff00) | (u8)b | ((t & 0x1ff) << 16);
    }
    for (i = 0; i < z[a]; i++) {
        func_ov001_02224704(data_ov001_0222dde0->unk_40[i], -1, 0, 0);
        func_ov001_02224558(data_ov001_0222dde0->unk_40[i], -1, data_ov001_02229ebc[i].x, b);
    }
}

void func_ov001_0220b3e4() {
    if (func_ov001_022261a8(0x20)) func_ov001_0220aef4(0);
    if (func_ov001_022261a8(0x40)) func_ov001_0220aef4(1);
    if (func_ov001_022261a8(0x10)) func_ov001_0220aef4(2);
    if (func_ov001_022261a8(0x80)) func_ov001_0220aef4(3);
    if (func_ov001_022261cc(1)) {
        Unk_ov001_0222dde0 *o = data_ov001_0222dde0;
        s32 c = o->unk_63;
        if (c < 10) {
            if (o->unk_67 != 0) {
                o->unk_60 = data_ov001_02229ec4[c];
                return;
            }
            func_ov001_0221e9a0(9);
            return;
        } else if (c - 10 < 2) {
            if ((c - 10 == 0 && o->unk_66 == 0) || (c - 10 == 1 && o->unk_68 == 0)) {
                func_ov001_0221e9a0(9);
                return;
            }
            o->unk_60 = data_ov001_02229ea0[c - 10];
            return;
        } else {
            o->unk_60 = data_ov001_02229e9c[c - 12];
        }
    }
    if (func_ov001_022261a8(2)) {
        Unk_ov001_0222dde0 *o = data_ov001_0222dde0;
        if (o->unk_66 == 0) {
            if (o->unk_69 != 0) return;
            func_ov001_0221e9a0(9);
            data_ov001_0222dde0->unk_69 = 1;
            return;
        }
        o->unk_60 = 0x10;
        return;
    }
    if (func_ov001_02226184(2)) {
        data_ov001_0222dde0->unk_69 = 0;
    }
}

void func_ov001_0220b5c4(s32 a) {
    if (a == data_ov001_0222dde0->unk_62) return;
    func_ov001_0220b05c(a, 1);
    func_ov001_0220b05c(data_ov001_0222dde0->unk_62, 0);
    data_ov001_0222dde0->unk_62 = a;
}

void func_ov001_0220b618() {
    s32 i;
    Unk_ov001_0220b618_Pt *p;
    u32 buf[3];
    if (!func_ov001_02226118(data_ov001_0222a460)) goto fail;
    for (p = data_ov001_02229eec, i = 0; i < 10; p++, i++) {
        func_ov001_02225924(p, data_ov001_02229ea4, buf);
        if (func_ov001_02226118(buf)) {
            if (data_ov001_0222dde0->unk_61 != i) goto fail;
            func_ov001_0220b5c4(i);
            goto end;
        }
    }
    for (p = data_ov001_02229eb4, i = 0; i < 2; p++, i++) {
        func_ov001_02225924(p, data_ov001_02229eac, buf);
        if (func_ov001_02226118(buf)) {
            if (data_ov001_0222dde0->unk_61 != i + 10) goto fail;
            func_ov001_0220b5c4(i + 10);
            if (i != 0) goto end;
            data_ov001_0222dde0->unk_65++;
            if (data_ov001_0222dde0->unk_65 < 0x28) return;
            if (data_ov001_0222dde0->unk_66 == 0) {
                func_ov001_0221e9a0(9);
                data_ov001_0222dde0->unk_61 = -1;
                return;
            }
            data_ov001_0222dde0->unk_60 = 0x10;
            data_ov001_0222dde0->unk_65 -= 7;
            return;
        }
    }
    for (p = data_ov001_02229ebc, i = 0; i < 2; p++, i++) {
        func_ov001_02225924(p, data_ov001_02229eb0, buf);
        if (func_ov001_02226118(buf)) {
            if (data_ov001_0222dde0->unk_61 != i + 12) goto fail;
            func_ov001_0220b5c4(i + 12);
            goto end;
        }
    }
fail:
    func_ov001_0220b5c4(-1);
end:
    data_ov001_0222dde0->unk_65 = 0;
}

void func_ov001_0220b818() {
    Unk_ov001_0220b618_Pt *p;
    s32 i;
    u32 buf[3];
    data_ov001_0222dde0->unk_60 = 0;
    if (!func_ov001_02225fd4(data_ov001_0222a460)) return;
    for (p = data_ov001_02229eec, i = 0; i < 10; p++, i++) {
        func_ov001_02225924(p, data_ov001_02229ea4, buf);
        if (func_ov001_02225fd4(buf)) {
            if (data_ov001_0222dde0->unk_61 != i) return;
            data_ov001_0222dde0->unk_60 = data_ov001_02229ec4[i];
            data_ov001_0222dde0->unk_63 = i;
            func_ov001_0220afcc();
            return;
        }
    }
    for (p = data_ov001_02229eb4, i = 0; i < 2; p++, i++) {
        func_ov001_02225924(p, data_ov001_02229eac, buf);
        if (func_ov001_02225fd4(buf)) {
            if (data_ov001_0222dde0->unk_61 != i + 10) return;
            data_ov001_0222dde0->unk_60 = data_ov001_02229ea0[i];
            data_ov001_0222dde0->unk_63 = i + 10;
            func_ov001_0220afcc();
            return;
        }
    }
    for (p = data_ov001_02229ebc, i = 0; i < 2; p++, i++) {
        func_ov001_02225924(p, data_ov001_02229eb0, buf);
        if (func_ov001_02225fd4(buf)) {
            if (data_ov001_0222dde0->unk_61 != i + 12) return;
            data_ov001_0222dde0->unk_60 = data_ov001_02229e9c[i];
            data_ov001_0222dde0->unk_63 = i + 12;
            func_ov001_0220afcc();
            return;
        }
    }
}

#pragma thumb reset
}
