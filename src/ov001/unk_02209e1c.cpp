// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_0222dddc {
    u8 pad_00[0x30];
    u32 *unk_30;
    u8 pad_34[0x2c];
    u32 *unk_60;
    u8 pad_64[0x2c];
    u32 *unk_90;
    u8 pad_94[0x2c];
    u32 *unk_c0;
    u8 pad_c4[0x38];
    void *unk_fc;
    u8 pad_100[0x1c];
    u8 unk_11c;
    u8 unk_11d;
    s8 unk_11e;
    u8 pad_11f[2];
    u8 unk_121;
    u8 pad_122;
    u8 unk_123;
    u8 unk_124;
};

extern "C" {
extern Unk_ov001_0222dddc *data_ov001_0222dddc;
extern u8 data_ov001_0222a460[];
extern u32 data_ov001_02229c28[];
extern u32 data_ov001_02229bf4[];
extern u32 data_ov001_02229c20[];
extern u32 data_ov001_02229c10[];
extern u32 data_ov001_02229c00[];
extern u32 data_ov001_02229bf0[];
extern u32 data_ov001_02229c08[];
extern u32 data_ov001_02229c18[];
extern u32 data_ov001_02229c0c[];
extern u32 data_ov001_02229c1c[];
extern u8 data_ov001_02229bf8[];
extern u8 data_ov001_02229be4[];
extern u8 *data_ov001_0222a85c[];
extern u32 data_ov001_0222a874[];
extern u16 data_ov001_02229c28_h[];

s32 func_ov001_02209608(u32 a);
s32 func_ov001_0221e9a0(u32 a);
s32 func_ov001_02209698(u32 a, u32 b, u32 c);
static inline void Unk_ov001_0220a478_Get(u32 *ip, s32 *a, s32 *b) {
    *a = (*ip & 0x1ff0000) >> 16;
    *b = *ip & 0xff;
}
s32 func_ov001_0220943c();
void func_ov001_02225924(void *, void *, void *);
s32 func_ov001_02225fd4(void *);
s32 func_ov001_022260ac(void *);
void func_ov001_0222449c(void *, s32, s32 *, s32 *);
s32 func_ov001_02226ffc(void *, void *);
s32 func_ov001_02209e58();
s32 func_ov001_02209e1c();
void func_ov001_0220a3b0();
void func_ov001_0220a3d4(void *);
void func_ov001_0220a478(void *);
void func_ov001_0220a530(void *);
void func_ov001_0220a5e8(void *);
void func_ov001_0220a6a0(void *);
void func_ov001_02209e94();
void func_ov001_0220a1ac();
s32 func_ov001_02209c04();
s32 func_ov001_0220994c();

#pragma thumb off

s32 func_ov001_02209e1c() {
    func_ov001_02209608(data_ov001_0222dddc->unk_11d != 1 ? 1 : 0);
    func_ov001_0221e9a0(1);
}

s32 func_ov001_02209e58() {
    func_ov001_02209608(data_ov001_0222dddc->unk_11d == 2 ? 0 : 2);
    func_ov001_0221e9a0(1);
}

void func_ov001_02209e94() {
    u32 buf[3];
    u32 *p;
    u32 *q;
    s32 i;

    data_ov001_0222dddc->unk_11c = 0;
    if (func_ov001_02225fd4(data_ov001_0222a460) == 0) return;
    p = data_ov001_02229c28;
    for (i = 0; i < 0x2f; i++, p++) {
        func_ov001_02225924(p, data_ov001_02229bf4, buf);
        if (func_ov001_02225fd4(buf) != 0) {
            Unk_ov001_0222dddc *g = data_ov001_0222dddc;
            if (g->unk_11e != i) return;
            g->unk_11c = data_ov001_0222a85c[g->unk_11d][i];
            if (data_ov001_0222dddc->unk_11d == 1) func_ov001_02209608(0);
            data_ov001_0222dddc->unk_121 = i;
            func_ov001_0220943c();
            return;
        }
    }
    for (i = 2; i < 4; i++) {
        func_ov001_02225924(&data_ov001_02229c08[i], &data_ov001_02229c18[i], buf);
        if (func_ov001_02225fd4(buf) != 0) {
            Unk_ov001_0222dddc *g = data_ov001_0222dddc;
            if (g->unk_11e != i + 0x2f) return;
            g->unk_11c = data_ov001_02229bf8[i];
            if (data_ov001_0222dddc->unk_11d == 1) func_ov001_02209608(0);
            data_ov001_0222dddc->unk_121 = i + 0x2f;
            func_ov001_0220943c();
            return;
        }
    }
    p = data_ov001_02229c00;
    for (i = 0; i < 2; i++, p++) {
        func_ov001_02225924(p, data_ov001_02229bf0, buf);
        if (func_ov001_02225fd4(buf) != 0) {
            Unk_ov001_0222dddc *g = data_ov001_0222dddc;
            if (g->unk_11e != i + 0x33) return;
            g->unk_11c = data_ov001_02229be4[i];
            data_ov001_0222dddc->unk_121 = i + 0x33;
            func_ov001_0220943c();
            return;
        }
    }
    func_ov001_02225924(data_ov001_02229c08, data_ov001_02229c18, buf);
    if (func_ov001_02225fd4(buf) != 0) {
        if (data_ov001_0222dddc->unk_11e != 0x2f) return;
        func_ov001_02209e58();
        data_ov001_0222dddc->unk_121 = 0x2f;
        func_ov001_0220943c();
        return;
    }
    func_ov001_02225924(data_ov001_02229c0c, data_ov001_02229c1c, buf);
    if (func_ov001_02225fd4(buf) == 0) return;
    if (data_ov001_0222dddc->unk_11e != 0x30) return;
    func_ov001_02209e1c();
    data_ov001_0222dddc->unk_121 = 0x30;
    func_ov001_0220943c();
    return;
}

void func_ov001_0220a1ac() {
    u32 buf[3];
    u32 *p;
    u32 *q;
    s32 i;

    if (func_ov001_022260ac(data_ov001_0222a460) == 0) return;
    data_ov001_0222dddc->unk_11e = -1;
    p = data_ov001_02229c28;
    for (i = 0; i < 0x2f; i++, p++) {
        func_ov001_02225924(p, data_ov001_02229bf4, buf);
        if (func_ov001_022260ac(buf) != 0) {
            if (data_ov001_0222dddc->unk_124 == 0) {
                func_ov001_0221e9a0(9);
                return;
            }
            func_ov001_0221e9a0(0);
            data_ov001_0222dddc->unk_11e = i;
            return;
        }
    }
    for (i = 0; i < 4; i++) {
        func_ov001_02225924(&data_ov001_02229c08[i], &data_ov001_02229c18[i], buf);
        if (func_ov001_022260ac(buf) != 0) {
            if ((i == 3 && data_ov001_0222dddc->unk_123 == 0) ||
                (i == 2 && data_ov001_0222dddc->unk_124 == 0)) {
                func_ov001_0221e9a0(9);
                return;
            }
            func_ov001_0221e9a0(data_ov001_0222a874[i]);
            data_ov001_0222dddc->unk_11e = i + 0x2f;
            return;
        }
    }
    p = data_ov001_02229c00;
    for (i = 0; i < 2; i++, p++) {
        func_ov001_02225924(p, data_ov001_02229bf0, buf);
        if (func_ov001_022260ac(buf) != 0) {
            func_ov001_0221e9a0(0);
            data_ov001_0222dddc->unk_11e = i + 0x33;
            return;
        }
    }
    return;
}

void func_ov001_0220a3b0() {
    func_ov001_0220a1ac();
    func_ov001_02209e94();
    func_ov001_02209c04();
    func_ov001_0220994c();
}

void func_ov001_0220a3d4(void *self) {
    s32 a, b;
    func_ov001_0222449c(data_ov001_0222dddc->unk_fc, 0, &a, &b);
    b -= 12;
    if (b > (s32)((u16 *)data_ov001_02229c00)[1]) {
        func_ov001_02209698(data_ov001_0222dddc->unk_11d, 4, b);
        return;
    }
    func_ov001_02209698(data_ov001_0222dddc->unk_11d, 4, ((u16 *)data_ov001_02229c00)[1]);
    func_ov001_0220943c();
    func_ov001_02226ffc(self, (void *)func_ov001_0220a3b0);
}

void func_ov001_0220a478(void *self) {
    volatile s32 a, b;
    volatile u32 *ip = data_ov001_0222dddc->unk_c0;
    a = (*ip & 0x1ff0000) >> 16;
    s32 t = *ip & 0xff;
    b = t;
    t -= 12;
    b = t;
    u32 h = ((u16 *)data_ov001_02229c28)[0x92 / 2];
    if (t > (s32)h) {
        func_ov001_02209698(data_ov001_0222dddc->unk_11d, 3, t);
        return;
    }
    func_ov001_02209698(data_ov001_0222dddc->unk_11d, 3, h);
    func_ov001_02209698(data_ov001_0222dddc->unk_11d, 4, 0xc0);
    func_ov001_02226ffc(self, (void *)func_ov001_0220a3d4);
}

void func_ov001_0220a530(void *self) {
    volatile s32 a, b;
    volatile u32 *ip = data_ov001_0222dddc->unk_90;
    a = (*ip & 0x1ff0000) >> 16;
    s32 t = *ip & 0xff;
    b = t;
    t -= 12;
    b = t;
    u32 h = ((u16 *)data_ov001_02229c28)[0x62 / 2];
    if (t > (s32)h) {
        func_ov001_02209698(data_ov001_0222dddc->unk_11d, 2, t);
        return;
    }
    func_ov001_02209698(data_ov001_0222dddc->unk_11d, 2, h);
    func_ov001_02209698(data_ov001_0222dddc->unk_11d, 3, 0xc0);
    func_ov001_02226ffc(self, (void *)func_ov001_0220a478);
}

void func_ov001_0220a5e8(void *self) {
    volatile s32 a, b;
    volatile u32 *ip = data_ov001_0222dddc->unk_60;
    a = (*ip & 0x1ff0000) >> 16;
    s32 t = *ip & 0xff;
    b = t;
    t -= 12;
    b = t;
    u32 h = ((u16 *)data_ov001_02229c28)[0x32 / 2];
    if (t > (s32)h) {
        func_ov001_02209698(data_ov001_0222dddc->unk_11d, 1, t);
        return;
    }
    func_ov001_02209698(data_ov001_0222dddc->unk_11d, 1, h);
    func_ov001_02209698(data_ov001_0222dddc->unk_11d, 2, 0xc0);
    func_ov001_02226ffc(self, (void *)func_ov001_0220a530);
}

void func_ov001_0220a6a0(void *self) {
    volatile s32 a, b;
    volatile u32 *ip = data_ov001_0222dddc->unk_30;
    a = (*ip & 0x1ff0000) >> 16;
    s32 t = *ip & 0xff;
    b = t;
    t -= 12;
    b = t;
    u32 h = ((u16 *)data_ov001_02229c28)[0x2 / 2];
    if (t > (s32)h) {
        func_ov001_02209698(data_ov001_0222dddc->unk_11d, 0, t);
        return;
    }
    func_ov001_02209698(data_ov001_0222dddc->unk_11d, 0, h);
    func_ov001_02209698(data_ov001_0222dddc->unk_11d, 1, 0xc0);
    func_ov001_02226ffc(self, (void *)func_ov001_0220a5e8);
}

#pragma thumb reset
}
