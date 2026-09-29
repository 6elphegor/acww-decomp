// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0220951c_Rec {
    u32 unk_00;
    u16 unk_04;
};

struct Unk_ov001_0220951c_Obj {
    void *unk_00[3][4];
    Unk_ov001_0220951c_Rec *unk_30[0x2f];
    Unk_ov001_0220951c_Rec *unk_ec[4];
    void *unk_fc[2];
    void *unk_104[4];
    u8 unk_114[8];
    u8 unk_11c;
    u8 unk_11d;
    s8 unk_11e;
    s8 unk_11f;
    u8 unk_120;
    s8 unk_121;
    u8 unk_122;
    u8 unk_123;
    u8 unk_124;
    u8 unk_125;
};

struct Unk_ov001_02209698_Five {
    u8 b[5];
};

extern "C" {
extern Unk_ov001_0220951c_Obj *data_ov001_0222dddc;
extern u8 data_ov001_02229bd8[];
extern u8 data_ov001_02229bdc[];
extern u8 data_ov001_02229be4[];
extern u8 data_ov001_02229bf0[];
extern u8 data_ov001_02229bf4[];
extern u8 data_ov001_02229bf8[];
extern u16 data_ov001_02229c00[][2];
extern u16 data_ov001_02229c08[][2];
extern u8 data_ov001_02229c10[];
extern u16 data_ov001_02229c28[][2];
extern u8 data_ov001_02229c20[];
extern u8 data_ov001_0222a460[];
extern u8 data_ov001_0222a844[];
extern u8 data_ov001_0222a84c[];
extern u8 data_ov001_0222a854[];
extern u8 *data_ov001_0222a85c[];

s32 func_01ffc2c4(s32, s32);
void func_ov001_02224670(void *, s32, s32, u32);
void func_ov001_02224704(void *, s32, s32, s32);
void func_ov001_02224558(void *, s32, s32, s32);
void func_ov001_0222519c(void *, u32, u32, void *, s32);
void func_ov001_0221e9a0(s32);
s32 func_ov001_022261a8(s32);
s32 func_ov001_022261cc(s32);
s32 func_ov001_02226184(s32);
s32 func_ov001_02226118(void *);
void func_ov001_02225924(void *, void *, void *);
void func_ov001_02208fb4(s32);
void func_ov001_02209e58();
void func_ov001_02209e1c();

void func_ov001_0220951c(s32 idx, s32 v);
void func_ov001_02209608(s32 mode);
void func_ov001_02209698(s32 a, s32 b, u32 c);
void func_ov001_0220994c();
void func_ov001_02209ba8(s32 a);
void func_ov001_02209c04();
}

#pragma thumb off
extern "C" {

void func_ov001_0220951c(s32 idx, s32 v) {
    if (idx < 0) {
        return;
    }
    if (idx < 0x2f) {
        Unk_ov001_0220951c_Rec *r = data_ov001_0222dddc->unk_30[idx];
        r->unk_00 = r->unk_00 & ~0xc00;
        r->unk_04 = (r->unk_04 & ~0xf000) | (data_ov001_02229bd8[v] << 12);
    } else if (idx - 0x2f < 4) {
        Unk_ov001_0220951c_Rec *r = data_ov001_0222dddc->unk_ec[idx - 0x2f];
        r->unk_00 = r->unk_00 & ~0xc00;
        r->unk_04 = (r->unk_04 & ~0xf000) | (data_ov001_02229bd8[v] << 12);
    } else {
        func_ov001_02224670(data_ov001_0222dddc->unk_fc[idx - 0x33], -1, 0, data_ov001_02229bdc[v]);
    }
}

void func_ov001_02209608(s32 mode) {
    s32 i, f0, f1, k;
    f0 = 0;
    f1 = 0;
    i = 0;
    k = 0;
    data_ov001_0222dddc->unk_11d = mode;
    do {
        func_ov001_02209698(mode, i, data_ov001_02229c28[k][1]);
        i++;
        k += 12;
    } while (i < 4);
    if (mode == 2) {
        f0 = 1;
    } else if (mode == 1) {
        f1 = 1;
    }
    func_ov001_0220951c(0x2f, f0);
    func_ov001_0220951c(0x30, f1);
}

void func_ov001_02209698(s32 a, s32 b, u32 c) {
    Unk_ov001_02209698_Five x = *(Unk_ov001_02209698_Five *)data_ov001_0222a84c;
    Unk_ov001_02209698_Five y = *(Unk_ov001_02209698_Five *)data_ov001_0222a854;
    Unk_ov001_02209698_Five z = *(Unk_ov001_02209698_Five *)data_ov001_0222a844;
    s32 idx = b * 12;
    s32 i;
    s32 j;
    for (i = 0; i < x.b[b]; i++) {
        Unk_ov001_0220951c_Rec *r = data_ov001_0222dddc->unk_30[idx];
        r->unk_00 = r->unk_00 & 0xc1fffcff;
        u32 t = data_ov001_02229c28[idx][0];
        r = data_ov001_0222dddc->unk_30[idx];
        r->unk_00 = ((r->unk_00 & 0xfe00ff00) | (u8)c) | ((t & 0x1ff) << 16);
        idx++;
    }
    if (b < 4) {
        Unk_ov001_0220951c_Obj *g = data_ov001_0222dddc;
        func_ov001_0222519c(g->unk_00[a][b], data_ov001_02229c28[b * 12][0], c, g->unk_104[b], 2);
    }
    s32 n = func_01ffc2c4(b + 3, 4);
    for (i = 0; i < y.b[b]; i++) {
        Unk_ov001_0220951c_Rec *r = data_ov001_0222dddc->unk_ec[n];
        r->unk_00 = r->unk_00 & 0xc1fffcff;
        r = data_ov001_0222dddc->unk_ec[n];
        r->unk_00 = ((data_ov001_02229c08[n][0] & 0x1ff) << 16) | ((r->unk_00 & 0xfe00ff00) | (u8)c);
    }
    for (j = 0; j < z.b[b]; j++) {
        func_ov001_02224704(data_ov001_0222dddc->unk_fc[j], -1, 0, 0);
        func_ov001_02224558(data_ov001_0222dddc->unk_fc[j], -1, data_ov001_02229c00[j][0], c);
    }
}

void func_ov001_0220994c() {
    if (func_ov001_022261a8(0x20)) func_ov001_02208fb4(0);
    if (func_ov001_022261a8(0x40)) func_ov001_02208fb4(1);
    if (func_ov001_022261a8(0x10)) func_ov001_02208fb4(2);
    if (func_ov001_022261a8(0x80)) func_ov001_02208fb4(3);
    if (func_ov001_022261cc(1)) {
        Unk_ov001_0220951c_Obj *g = data_ov001_0222dddc;
        s32 cur = g->unk_121;
        if (cur < 0x2f) {
            if (g->unk_124 == 0) {
                func_ov001_0221e9a0(9);
                return;
            }
            g->unk_11c = data_ov001_0222a85c[g->unk_11d][cur];
            if (data_ov001_0222dddc->unk_11d != 1) return;
            func_ov001_02209608(0);
            return;
        }
        s32 r = cur - 0x2f;
        if (r < 4) {
            switch (r) {
            case 0:
                func_ov001_02209e58();
                return;
            case 1:
                func_ov001_02209e1c();
                return;
            case 2:
                if (g->unk_124 == 0) {
                    func_ov001_0221e9a0(9);
                    return;
                }
                break;
            case 3:
                if (g->unk_123 == 0) {
                    func_ov001_0221e9a0(9);
                    return;
                }
                break;
            }
            if (g->unk_11d == 1) {
                func_ov001_02209608(0);
            }
            data_ov001_0222dddc->unk_11c = data_ov001_02229bf8[cur - 0x2f];
            return;
        }
        g->unk_11c = data_ov001_02229be4[cur - 0x33];
    }
    if (func_ov001_022261a8(2)) {
        Unk_ov001_0220951c_Obj *g = data_ov001_0222dddc;
        if (g->unk_123 == 0) {
            if (g->unk_125 != 0) return;
            func_ov001_0221e9a0(9);
            data_ov001_0222dddc->unk_125 = 1;
            return;
        }
        g->unk_11c = 0x80;
    } else {
        if (func_ov001_02226184(2)) {
            data_ov001_0222dddc->unk_125 = 0;
        }
    }
    if (func_ov001_022261cc(0x400)) func_ov001_02209e58();
    if (func_ov001_022261cc(0x800)) func_ov001_02209e1c();
}

void func_ov001_02209ba8(s32 a) {
    if (a == data_ov001_0222dddc->unk_11f) return;
    func_ov001_0220951c(a, 1);
    func_ov001_0220951c(data_ov001_0222dddc->unk_11f, 0);
    data_ov001_0222dddc->unk_11f = a;
}

void func_ov001_02209c04() {
    u32 buf[3];
    s32 i;
    if (func_ov001_02226118(data_ov001_0222a460)) {
        u16 (*p)[2] = data_ov001_02229c28;
        i = 0;
        do {
            func_ov001_02225924(p, data_ov001_02229bf4, buf);
            if (func_ov001_02226118(buf)) {
                if (data_ov001_0222dddc->unk_11e != i) goto fail;
                func_ov001_02209ba8(i);
                goto done;
            }
            i++;
            p++;
        } while (i < 0x2f);
        u8 *q = data_ov001_02229c20;
        u8 *pp = data_ov001_02229c10;
        i = 2;
        do {
            func_ov001_02225924(pp, q, buf);
            if (func_ov001_02226118(buf)) {
                if (data_ov001_0222dddc->unk_11e != i + 0x2f) goto fail;
                func_ov001_02209ba8(i + 0x2f);
                if (i != 3) return;
                data_ov001_0222dddc->unk_122 = data_ov001_0222dddc->unk_122 + 1;
                Unk_ov001_0220951c_Obj *gg = data_ov001_0222dddc;
                if (gg->unk_122 < 0x28) return;
                if (gg->unk_123 == 0) {
                    func_ov001_0221e9a0(9);
                    data_ov001_0222dddc->unk_11e = -1;
                    return;
                }
                gg->unk_11c = 0x80;
                data_ov001_0222dddc->unk_122 = data_ov001_0222dddc->unk_122 - 7;
                return;
            }
            i++;
            q += 4;
            pp += 4;
        } while (i < 4);
        u16 (*p3)[2] = data_ov001_02229c00;
        i = 0;
        do {
            func_ov001_02225924(p3, data_ov001_02229bf0, buf);
            if (func_ov001_02226118(buf)) {
                if (data_ov001_0222dddc->unk_11e != i + 0x33) goto fail;
                func_ov001_02209ba8(i + 0x33);
                goto done;
            }
            i++;
            p3++;
        } while (i < 2);
    }
fail:
    func_ov001_02209ba8(-1);
done:
    data_ov001_0222dddc->unk_122 = 0;
}

}
#pragma thumb reset
