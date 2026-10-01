// mwcc-flags: -O4,p
#include "types.h"

struct Unk_ov001_02207b3c_S2 {
    void *unk_00[2];
    void *unk_08;
    u32 unk_0c;
    u32 unk_10;
    u16 unk_14;
    s8 unk_16;
    u8 unk_17;
    u8 unk_18;
    u8 unk_19;
};

typedef void (*Unk_ov001_02207904_Task)(u32);

extern "C" Unk_ov001_02207b3c_S2 *data_ov001_0222dd88 = 0;
extern "C" const u16 data_ov001_02229b3c[2] = {0, 0xa8};
extern "C" const u8 data_ov001_02229b44[8] = {2, 1, 1, 2, 1, 1, 2, 0};
extern "C" const u16 data_ov001_02229b4c[2][2] = {{8, 0xac}, {0x84, 0xac}};
extern "C" const u16 data_ov001_02229b40[2] = {0x78, 0x10};
extern "C" const u8 data_ov001_02229b54[16] = {0x27, 0x1f, 0x25, 0, 0x27, 0, 0x23, 0x1d, 0x21, 0, 0x59, 0, 0x27, 0x21, 0, 0};
extern "C" const u8 data_ov001_02229b64[16] = {0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 0};
#define data_ov001_02229b4e ((const u16 *)((const u8 *)data_ov001_02229b4c + 2))

extern "C" {
void *func_ov001_02225db0(u32, u32);
void func_ov001_02224b9c(u32, u32, void *);
void *func_ov001_02224b14(u32, u32, u32);
void *func_ov001_022247d4(void *, u32);
void func_ov001_022247e0(void *);
void func_ov001_022244d8(void *, s32, s32);
void func_ov001_0222449c(void *, u32, s32 *, s32 *);
void func_ov001_02224558(void *, s32, s32, s32);
void func_ov001_02226fdc(u32, u32);
void func_ov001_02226ffc(u32, Unk_ov001_02207904_Task);
u32 func_ov001_02227094(u32, Unk_ov001_02207904_Task, u32, u32);
void func_ov001_02225d58(void *);
void func_ov001_02225924(void *, void *, void *);
s32 func_ov001_022260ac(void *);
void func_ov001_02207c54(u32 task);
void func_ov001_02207fbc(s32 y);
void func_ov001_02207b3c(u32 task);
void func_ov001_02207cd4(u32 task);
void func_ov001_02207d40(u32 task);
void func_ov001_02207b3c(u32 task);
void func_ov001_02207c54(u32 task);
void func_ov001_02207cd4(u32 task);
void func_ov001_02207d40(u32 task);
void func_ov001_02207edc(u32 task);
void func_ov001_02207f40(u32 task);
void func_ov001_02207fbc(s32 y);
}

#pragma thumb off

extern "C" void func_ov001_02208144(u32 idx) {
    s32 n = data_ov001_02229b44[idx];
    s32 i;
    const u8 *q;
    data_ov001_0222dd88 = (Unk_ov001_02207b3c_S2 *)func_ov001_02225db0(0x1c, 4);
    data_ov001_0222dd88->unk_16 = -2;
    data_ov001_0222dd88->unk_17 = idx;
    i = 0;
    if (i < n) {
        q = data_ov001_02229b54 + idx * 2;
        do {
            data_ov001_0222dd88->unk_00[i] = func_ov001_02224b14(0, *q, 1);
            func_ov001_022244d8(data_ov001_0222dd88->unk_00[i], -1, 1);
            i++;
            q++;
        } while (i < n);
    }
    data_ov001_0222dd88->unk_08 = func_ov001_02224b14(0, 1, 1);
    func_ov001_022244d8(data_ov001_0222dd88->unk_08, -1, 1);
    func_ov001_02207fbc(0xc0);
    data_ov001_0222dd88->unk_0c = func_ov001_02227094(0, func_ov001_02207f40, 0, 0x78);
}

extern "C" void func_ov001_02208114() {
    data_ov001_0222dd88->unk_19 = 1;
    func_ov001_02226ffc(data_ov001_0222dd88->unk_0c, func_ov001_02207cd4);
}

extern "C" s32 func_ov001_02208100() {
    return data_ov001_0222dd88->unk_16;
}

extern "C" void func_ov001_022080e0(s32 v) {
    if (data_ov001_0222dd88->unk_16 == -1) {
        data_ov001_0222dd88->unk_16 = v;
    }
}

extern "C" void func_ov001_022080cc(s32 v) {
    data_ov001_0222dd88->unk_16 = v;
}

extern "C" BOOL func_ov001_022080a0() {
    if (data_ov001_0222dd88 == NULL) {
        return TRUE;
    }
    return data_ov001_0222dd88->unk_19 == 0 ? TRUE : FALSE;
}

extern "C" void func_ov001_02208088() {
    data_ov001_0222dd88->unk_18 = 0;
}

extern "C" void func_ov001_02208070() {
    data_ov001_0222dd88->unk_18 = 1;
}

extern "C" void func_ov001_02207fbc(s32 y) {
    Unk_ov001_02207b3c_S2 *g = data_ov001_0222dd88;
    s32 n = data_ov001_02229b44[g->unk_17];
    s32 a = y + data_ov001_02229b4c[0][1];
    s32 b = a - data_ov001_02229b3c[1];
    s32 i;
    func_ov001_02224558(g->unk_08, -1, data_ov001_02229b3c[0], y);
    for (i = 0; i < n; i++) {
        Unk_ov001_02207b3c_S2 *s = data_ov001_0222dd88;
        const u8 *q = data_ov001_02229b64 + s->unk_17 * 2;
        u32 p = q[i] * 2;
        func_ov001_02224558(s->unk_00[i], -1, data_ov001_02229b4c[0][p], b);
    }
}

extern "C" void func_ov001_02207f40(u32 task) {
    s32 v[2];
    func_ov001_0222449c(data_ov001_0222dd88->unk_08, 0, &v[0], &v[1]);
    v[1] -= 4;
    func_ov001_02207fbc(v[1]);
    if (v[1] > data_ov001_02229b3c[1]) {
        return;
    }
    func_ov001_02207fbc(data_ov001_02229b3c[1]);
    func_ov001_02226ffc(task, func_ov001_02207edc);
}

extern "C" void func_ov001_02207edc(u32 task) {
    data_ov001_0222dd88->unk_16 = -1;
    data_ov001_0222dd88->unk_14++;
    if (data_ov001_0222dd88->unk_14 < 4) {
        return;
    }
    data_ov001_0222dd88->unk_14 = 0;
    func_ov001_02226ffc(task, func_ov001_02207d40);
}

extern "C" void func_ov001_02207d40(u32 task) {
    Unk_ov001_02207b3c_S2 *g = data_ov001_0222dd88;
    s32 n = data_ov001_02229b44[g->unk_17];
    s32 i;
    u8 out[8];
    if (g->unk_18 == 0) {
        if (g->unk_16 != -1) {
            return;
        }
        for (i = 0; i < n; i++) {
            const u8 *q = data_ov001_02229b64 + data_ov001_0222dd88->unk_17 * 2;
            func_ov001_02225924((void *)&data_ov001_02229b4c[q[i]], (void *)data_ov001_02229b40, out);
            if (func_ov001_022260ac(out) != 0) {
                Unk_ov001_02207b3c_S2 *s = data_ov001_0222dd88;
                if (s->unk_10 != 0) {
                    break;
                }
                const u8 *q1 = data_ov001_02229b54 + s->unk_17 * 2;
                u32 id = q1[i] + 1;
                func_ov001_02224b9c(0, id, func_ov001_022247d4(s->unk_00[i], 0));
                s = data_ov001_0222dd88;
                const u8 *q2 = data_ov001_02229b64 + s->unk_17 * 2;
                u32 p = q2[i] << 2;
                func_ov001_02224558(s->unk_00[i], -1, *(u16 *)((u8 *)data_ov001_02229b4c + p), *(u16 *)((u8 *)data_ov001_02229b4e + p));
                func_ov001_022244d8(data_ov001_0222dd88->unk_00[i], -1, 1);
                data_ov001_0222dd88->unk_10 = func_ov001_02227094(0, func_ov001_02207b3c, 0, 0x6e);
                data_ov001_0222dd88->unk_16 = i;
                return;
            }
        }
    }
    data_ov001_0222dd88->unk_16 = -1;
}

extern "C" void func_ov001_02207cd4(u32 task) {
    s32 v[2];
    func_ov001_0222449c(data_ov001_0222dd88->unk_08, 0, &v[0], &v[1]);
    v[1] += 4;
    func_ov001_02207fbc(v[1]);
    if (v[1] < 0xc0) {
        return;
    }
    func_ov001_02226ffc(task, func_ov001_02207c54);
}

extern "C" void func_ov001_02207c54(u32 task) {
    s32 i;
    func_ov001_02226fdc(0, task);
    if (data_ov001_0222dd88->unk_10 != 0) {
        func_ov001_02226fdc(0, data_ov001_0222dd88->unk_10);
    }
    for (i = 0; i < 2; i++) {
        if (data_ov001_0222dd88->unk_00[i] != NULL) {
            func_ov001_022247e0(data_ov001_0222dd88->unk_00[i]);
        }
    }
    func_ov001_022247e0(data_ov001_0222dd88->unk_08);
    func_ov001_02225d58(&data_ov001_0222dd88);
}

extern "C" void func_ov001_02207b3c(u32 task) {
    Unk_ov001_02207b3c_S2 *g = data_ov001_0222dd88;
    g->unk_14++;
    if (data_ov001_0222dd88->unk_14 < 0x10) {
        return;
    }
    s32 n = data_ov001_02229b44[data_ov001_0222dd88->unk_17];
    s32 i;
    for (i = 0; i < n; i++) {
        Unk_ov001_02207b3c_S2 *s = data_ov001_0222dd88;
        const u8 *q = data_ov001_02229b54 + s->unk_17 * 2;
        u32 id = q[i];
        func_ov001_02224b9c(0, id, func_ov001_022247d4(s->unk_00[i], 0));
        func_ov001_022244d8(data_ov001_0222dd88->unk_00[i], -1, 1);
    }
    func_ov001_02207fbc(data_ov001_02229b3c[1]);
    data_ov001_0222dd88->unk_14 = 0;
    data_ov001_0222dd88->unk_16 = -1;
    if (data_ov001_0222dd88->unk_10 != 0) {
        data_ov001_0222dd88->unk_10 = 0;
        func_ov001_02226fdc(0, task);
    }
}

#pragma thumb reset
