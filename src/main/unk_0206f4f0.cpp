#include "types.h"

// U119: network message handlers 0x0206f4f0-0x0206f804 (the handler table data_020de3a8 is in the next unit)

struct Unk_0206f6fc_Pos {
    s32 x;
    s32 y;
    s32 z;
};

extern "C" {
extern u32 data_021cb410[];
extern u32 data_021ed2f8[];
extern u32 data_021dfd8c[];
extern void *data_021f482c;
extern void *data_020cbb18;
extern u8 data_021eceac[];
extern u8 data_021e7f8c[];
extern u8 data_021ed210[];
extern u8 data_021ed22e[];
extern u8 data_020e416c;
extern u32 data_020c7c1c;

s32 func_0200402c(u32 a);
void *func_0208a578();
s32 _ZN12Unk_020e0f1013func_0208c134Eii(void *a, u32 b, u32 c);
BOOL _ZN12Unk_020e0f1013func_0208c1a4Ev(void *a);
s32 func_02116048(void *src, void *dst, u32 n);
void func_0206db34(void *a, void *b);
void func_0206dad8();
void func_020795a8(void *a);
void *func_020e8618(void *heap, u32 size);
void func_020e85fc(void *heap, void *p);
s32 func_02096a50(void *obj, s32 v);
BOOL func_02096880(void);
void _ZN12Unk_020cbb1813func_020728d4Ev(void *p);
void _ZN12Unk_020cbb1813func_020728a4EPhj(void *p, void *d, s32 n);
void _ZN12Unk_020cbb1813func_02072824Ejj(void *p, s32 a, s32 b);
void func_02096f44(void *p);
void func_02065c94();
void *func_0208f158(void *p);
void func_02065e70(void *p, void *q);
void _ZN12Unk_0208f23813func_0208f168Ev(void *p);
void _ZN12Unk_0208f23813func_0208f1a8Ej(void *p, s32 v);
void func_02076a2c(void *a, void *b, void *c);
s32 func_ov003_022201bc(u8 a, u32 b, void *c);
s32 func_ov003_02224d58(void *a, u8 b);
u8 *func_02095204(u8 x);
BOOL func_ov003_02227434(u8 x);
void func_ov003_02227248(u32 a, u8 b);
s32 func_ov003_0222746c(u8 a, s32 b);
s32 func_02076f88(void *p);

void func_0206f4f0(u8 *p);
void func_0206f53c(u32 x);
void func_0206f56c(u8 *p);
void func_0206f5a0(u8 *p);
void func_0206f5ac(u8 *p, u32 code);
void func_0206f604(u32 a, u32 b, ...);
void func_0206f638(u8 v);
u8 func_0206f644();
void func_0206f650();
void func_0206f668(u8 *p);
void func_0206f6b8(u8 *p);
void func_0206f6fc(u8 *p, u32 id);
void func_0206f770(u8 *p, u32 id);
void func_0206f7d0(u8 *p);
}

u8 data_020de390 = 0x18;
u32 data_020de394[5] = {0, 1, 2, 3, 4};

// ---------------------------------------------------------------------------------------------------------------------

static inline BOOL Unk_0206f6fc_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }

extern "C" void func_0206f7d0(u8 *p) {
    void *heap = data_021f482c;
    void *buf = func_020e8618(heap, 0xc0);
    func_02116048(p + 1, buf, 0xc0);
    func_02076f88(buf);
    func_020e85fc(heap, buf);
}

extern "C" void func_0206f770(u8 *p, u32 id) {
    if (Unk_0206f6fc_IsZero(data_020e416c)) {
        u8 id8;
        s16 off;
        u8 *q;
        q = p + 1;
        id8 = id;
        off = (p[2] - 0x1e) * 0xb6;
        u8 *r = func_02095204(id8);
        if (r != NULL) {
            off = off + *(s16 *)(r + 0x8e);
            if (func_ov003_02227434(id8) == 0) {
                func_ov003_02227248(q[0], id8);
                func_ov003_0222746c(id8, off);
            }
        }
    }
}

extern "C" void func_0206f6fc(u8 *p, u32 id) {
    u8 buf[5];
    Unk_0206f6fc_Pos pos;
    if (Unk_0206f6fc_IsZero(data_020e416c)) {
        u8 id8 = id;
        func_02116048(p + 2, buf, 5);
        func_02076a2c(buf, &pos.x, &pos.z);
        pos.y = data_020c7c1c;
        if (p[0] == 2) {
            u32 v = p[1];
            u16 x;
            if (v < 0x38) {
                x = v + 0x12e8;
            } else {
                x = 0x12e8;
            }
            func_ov003_022201bc(id8, x, &pos);
        } else {
            func_ov003_02224d58(&pos, id8);
        }
    }
}

extern "C" void func_0206f6b8(u8 *p) {
    u8 tmp[0x1e];
    func_02116048(p + 1, tmp, 0x1e);
    switch (p[0]) {
    case 3:
        func_02116048(tmp, data_021ed210, 0x1e);
        break;
    case 4:
        func_02116048(tmp, data_021ed22e, 0x1e);
        break;
    }
}

extern "C" void func_0206f668(u8 *p) {
    void *heap = data_021f482c;
    void *buf = func_020e8618(heap, 0xf4);
    func_02116048(p + 1, buf, 0xf4);
    u8 *const g = data_021e7f8c;
    void *t = func_0208f158(g);
    func_02065e70(t, buf);
    _ZN12Unk_0208f23813func_0208f168Ev(g);
    _ZN12Unk_0208f23813func_0208f1a8Ej(g, 0);
    func_020e85fc(heap, buf);
}

extern "C" void func_0206f650() {
    func_02096f44(data_021eceac);
    func_02065c94();
}

extern "C" u8 func_0206f644() { return data_020de390; }

extern "C" void func_0206f638(u8 v) { data_020de390 = v; }

extern "C" void func_0206f604(u32 a, u32 b, ...) {
    void *g = data_020cbb18;
    _ZN12Unk_020cbb1813func_020728d4Ev(g);
    _ZN12Unk_020cbb1813func_020728a4EPhj(g, &a, 1);
    _ZN12Unk_020cbb1813func_02072824Ejj(g, 0x16, b);
}

extern "C" void func_0206f5ac(u8 *p, u32 code) {
    void *heap = data_021f482c;
    void *buf = func_020e8618(heap, 0xf4);
    s32 r = 0xb;
    func_02116048(p + 1, buf, 0xf4);
    if (func_02096a50(buf, 1)) {
        if (func_02096880()) {
            r = 9;
        } else {
            r = 0xa;
        }
    }
    func_020e85fc(heap, buf);
    func_0206f604(r, code);
}

extern "C" void func_0206f5a0(u8 *p) { data_020de390 = *p; }

extern "C" void func_0206f56c(u8 *p) {
    func_02116048(p + 1, data_021cb410, 0x10);
    func_0206db34(data_021ed2f8, data_021cb410);
    func_0206dad8();
    func_020795a8(data_021dfd8c);
}

extern "C" void func_0206f53c(u32 x) {
    if (x == 0) {
        func_0200402c(0x67);
    } else {
        func_0200402c(0x66);
    }
    void *r = func_0208a578();
    _ZN12Unk_020e0f1013func_0208c134Eii(r, data_020de394[x], 0);
}

extern "C" void func_0206f4f0(u8 *p) {
    s32 i = p[0] - 0xd;
    if (i == 0) {
        if (!_ZN12Unk_020e0f1013func_0208c1a4Ev(func_0208a578())) {
            func_0206f53c(i);
            func_0206f604(0x12, 4);
        }
    } else {
        if (_ZN12Unk_020e0f1013func_0208c1a4Ev(func_0208a578())) {
            func_0206f53c(i);
            func_0206f604((u8)(i + 0x12), 4);
        }
    }
}
