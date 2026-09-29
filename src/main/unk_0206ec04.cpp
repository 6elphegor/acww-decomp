#include "types.h"
#include "Unk_020d8c7c.h"

// Vtable at 0x020de234; its out-of-line virtuals live in another file.
class Unk_020de234 : public Unk_020d8c7c {
public:
    Unk_020de234() {}
    virtual void vfunc_08();
    virtual ~Unk_020de234();
};

extern "C" {
extern u16 data_021cb548[];
extern u8 data_021cb528[];
extern u8 data_021cb4a4;
extern u8 data_021cb4a0;
extern u8 data_021cb4b0;
extern u8 data_021cb4ac;
extern u32 data_021cb4d4;
extern s32 data_021cb4d8;
extern u16 data_021cb4c4;
extern u32 data_021cb504[3];
extern u32 data_021cb51c[3];
extern u32 data_021cb4e8[];
extern u32 data_021cb4c8;
extern u32 data_021cb4e4;
extern u8 data_020de014[2];
extern u32 *data_020de2d8[];
extern u16 data_020de27c[];
extern u8 data_021cb538[];
extern u8 data_021d726c;
extern u8 data_021f4770;
extern u8 data_021f4774;
extern u8 data_021ef5ec;
extern u8 data_021ef5f0;
extern u16 data_021f47d8[];

void *func_0209750c();
void *func_02098750(void *);
u16 *func_02097f6c(void *, s32);
u32 func_02097eb0(void *, s32);
void func_0205125c(void *, s32);
void func_02051268(u32, void *, u32);
void func_0205137c();
s32 func_0208f024();
s32 func_0208f038();
s32 func_0208f044();
void func_0204eee4(u32);
void func_0204ef2c(u32);
s32 func_0202e880(u32, u32, u32, u32);
void func_020e79a0(void *, void *);
void func_020e7968(void *, u32);
BOOL func_0206e660();
void func_0206df78();
BOOL func_0203d4d4();
s32 func_020b50e8();
BOOL func_0203e2f4();
s32 func_0201188c();
void func_0203da24(u32);
void func_0206dfe4();
void func_0205c1a4();
void func_02065328(void *);
void func_0205c1c0(u32, u32);
void func_0206e020();
void func_02045400(u32);
void func_0206f53c(u32);

BOOL func_0206ef74(u32);
void func_0206ef8c(u32);
void func_0206ef9c(u32);
s32 func_0206ef28();
s32 func_0206ef3c();
BOOL func_0206edb0();
BOOL func_0206f140();
BOOL func_0206f0f8(u32);
BOOL func_0206eca4(u32);
void func_0206ed5c(u32);
BOOL func_0206f068(s32);
void func_0206efac(s32);
void func_0206efd0(s32);
void func_0206f020(s32);
void func_0206f044(s32);
BOOL func_0206eff4(s32);
BOOL func_0206f178(u32);
BOOL func_0206f1b4();
BOOL func_0206f1fc();
void func_0206f254();
}

extern "C" {

void func_0206ec04() {
    void *p;
    s32 i;
    p = func_02098750(func_0209750c());
    for (i = 0; i < 15; i++) {
        data_021cb548[i] = *func_02097f6c(p, i);
        data_021cb528[i] = func_02097eb0(p, i);
    }
}

u32 func_0206ec48() { return data_021cb4a4; }
void func_0206ec54(u32 v) { data_021cb4a4 = v; }
void func_0206ec60() { data_021cb4a4 = 0; }

BOOL func_0206ec6c() {
    if (func_0206f140()) return TRUE;
    return FALSE;
}

BOOL func_0206ec84(u32 a, u32 b) {
    if (func_0206eca4(a)) {
        data_021cb4a0 = b;
        return TRUE;
    }
    return FALSE;
}

BOOL func_0206eca4(u32 a) {
    if (!func_0206f140()) return FALSE;
    data_021cb4b0 = a;
    return func_0206f0f8(9);
}

void func_0206ecc8(u32 a, u32 b) {
    func_0205125c(data_021cb538, 16);
    func_02051268(a, data_021cb538, b);
}

void *func_0206ecf0() { return data_021cb538; }
void func_0206ecf8(u32 v) { data_021cb4ac = v; }

BOOL func_0206ed04() {
    if (data_021cb4ac == 2) return TRUE;
    return FALSE;
}
BOOL func_0206ed18() {
    if (data_021cb4ac == 1) return TRUE;
    return FALSE;
}
void func_0206ed2c(u32 v) { data_021cb4a0 = v; }
u32 func_0206ed38() { return data_021cb4a0; }
void func_0206ed44(u32 v) { data_021cb4b0 = v; }
u32 func_0206ed50() { return data_021cb4b0; }
void func_0206ed5c(u32 v) { data_021cb4d4 = v; }
u32 func_0206ed68() { return data_021cb4d4; }

void func_0206ed74() { return func_0206ef8c(0x10); }
void func_0206ed80() { return func_0206ef9c(0x10); }
BOOL func_0206ed8c() { return func_0206ef74(0x10); }
void func_0206ed98() { return func_0206ef8c(4); }
void func_0206eda4() { return func_0206ef9c(4); }
BOOL func_0206edb0() { return func_0206ef74(4); }

s32 func_0206edbc() {
    if (func_0206edb0()) return data_021cb4d8;
    return 0x1000;
}
s32 func_0206ede0() {
    if (func_0206edb0()) return data_021cb4d8;
    return 0;
}
void func_0206ee00(s32 v) { data_021cb4d8 = v; }

void func_0206ee0c(u16 *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 from, u32 to) {
    s32 y, x, idx;
    u32 f = (from << 28) >> 16;
    u32 t = (to << 28) >> 16;
    for (y = y0; y <= y1; y++) {
        for (x = x0, idx = x0 + y * 32; x <= x1; idx++, x++) {
            u16 *p = &tbl[idx];
            u32 v = *p;
            u32 k = v & 0xf000;
            if (f == k) {
                *p = t | (v & 0xfff);
            }
        }
    }
}

void func_0206ee80(u16 *tbl, s32 x0, s32 y0, s32 x1, s32 y1, u32 to) {
    s32 y, x, idx;
    u32 t = (to << 28) >> 16;
    for (y = y0; y <= y1; y++) {
        for (x = x0, idx = x0 + y * 32; x <= x1; idx++, x++) {
            u16 *p = &tbl[idx];
            u32 v = *p;
            *p = t | (v & 0xfff);
        }
    }
}

s32 func_0206eed4(s32 v) {
    return (v & 0xf) * 2 + (v >> 4) * 64;
}

void func_0206eee4() {
    if (func_0208f024()) func_0206ef28();
    else func_0206ef3c();
}

BOOL func_0206ef00() { return func_0206ef74(2); }
BOOL func_0206ef0c() {
    if (func_0206ef74(2)) return FALSE;
    return TRUE;
}
s32 func_0206ef28() {
    func_0206ef9c(2);
    func_0208f044();
}
s32 func_0206ef3c() {
    func_0206ef8c(2);
    func_0208f038();
}
BOOL func_0206ef50() { return func_0206ef74(1); }
void func_0206ef5c() { func_0206ef9c(1); }
void func_0206ef68() { func_0206ef8c(1); }

BOOL func_0206ef74(u32 m) {
    if (m == (m & data_021cb4c4)) return TRUE;
    return FALSE;
}
void func_0206ef8c(u32 m) { data_021cb4c4 &= ~m; }
void func_0206ef9c(u32 m) { data_021cb4c4 |= m; }

void func_0206efac(s32 i) { data_021cb504[i >> 5] &= ~(1 << (i & 0x1f)); }
void func_0206efd0(s32 i) { data_021cb504[i >> 5] |= (1 << (i & 0x1f)); }
BOOL func_0206eff4(s32 i) {
    BOOL r = TRUE;
    if (!((1 << (i & 0x1f)) & data_021cb504[i >> 5])) r = FALSE;
    return r;
}
void func_0206f020(s32 i) { data_021cb51c[i >> 5] &= ~(1 << (i & 0x1f)); }
void func_0206f044(s32 i) { data_021cb51c[i >> 5] |= (1 << (i & 0x1f)); }
BOOL func_0206f068(s32 i) {
    BOOL r = TRUE;
    if (!((1 << (i & 0x1f)) & data_021cb51c[i >> 5])) r = FALSE;
    return r;
}

BOOL func_0206f094(u32 v) {
    BOOL r = func_0206f0f8(12);
    if (r) func_0206ed5c(v);
    return r;
}

BOOL func_0206f0b8(u32 v) {
    if (data_020de014[0] != 1) return FALSE;
    if (data_021cb4e8[0] == 0) return FALSE;
    if (func_0206f068(v)) return FALSE;
    data_020de014[1] = v;
    data_020de014[0] = 2;
    return TRUE;
}

BOOL func_0206f0f8(u32 v) {
    if (!func_0206f140()) return FALSE;
    data_020de014[1] = v;
    data_020de014[0] = 2;
    return TRUE;
}

BOOL func_0206f11c() {
    if (data_020de014[0] == 0) return FALSE;
    if (data_021cb4e8[0] != 0) return TRUE;
    return FALSE;
}

BOOL func_0206f140() {
    if (data_020de014[0] != 1) return FALSE;
    if (data_021cb4e8[0] == 0) return TRUE;
    return FALSE;
}

void func_0206f164() {
    data_021cb4c4 = 0;
    data_021cb4d8 = 0;
}

BOOL func_0206f178(u32 i) {
    u32 *e;
    s32 n;
    e = data_020de2d8[i];
    n = 0;
    while (e[n] != (u32)-1) {
        func_0204eee4(e[n]);
        n++;
    }
    func_0206f020(i);
    func_0206efac(i);
    return TRUE;
}

BOOL func_0206f1b4() {
    if (data_020de014[0] != 2) return FALSE;
    u32 *e = data_020de2d8[data_020de014[1]];
    s32 n = 0;
    while (e[n] != (u32)-1) {
        func_0204ef2c(e[n]);
        n++;
    }
    data_020de014[0] = 3;
    func_0206f044(data_020de014[1]);
    return TRUE;
}

BOOL func_0206f1fc() {
    u32 t;
    if (data_020de014[0] != 3) return FALSE;
    if (data_021cb4e8[0] != 0) t = ((u32 *)data_021cb4e8[0])[2];
    else t = data_021cb4c8;
    func_0206e660();
    if (!func_0202e880(data_020de27c[data_020de014[1]], t, data_020de014[1], 4)) return FALSE;
    data_020de014[0] = 1;
    return TRUE;
}

void func_0206f254() {
    u8 i;
    if (data_021cb504[0] != 0 || data_021cb504[1] != 0 || data_021cb504[2] != 0) {
        for (i = 0; i < 0x2e; i++) {
            if (func_0206eff4(i)) func_0206f178(i);
        }
    }
}

void func_0206f290(u8 *o) {
    func_020e79a0(data_021cb4e8, o);
    func_0206efd0(*(*(u8 **)(o + 8) + 0x90));
}

void func_0206f2b0(u32 v) { func_020e7968(data_021cb4e8, v); }
BOOL func_0206f2c0() { return TRUE; }

BOOL func_0206f2c4() {
    u32 k;
    BOOL r;
    func_0206f254();
    func_0206f1b4();
    func_0206f1fc();
    func_0206df78();
    if (func_0203d4d4()) return TRUE;
    if (func_020b50e8() == 6) return TRUE;
    if (data_021d726c) return TRUE;
    if (func_0203e2f4()) return TRUE;
    if (func_0206f140()) {
        if (data_021f4770 && data_021f4774) r = TRUE;
        else r = FALSE;
        if (r && data_021ef5ec <= 0x10 && data_021ef5f0 >= 0xe8) {
            func_0203da24(0);
            data_021cb4b0 = 0;
            func_0206ef3c();
            return TRUE;
        }
        k = data_021f47d8[1];
        if (k & 4) {
            func_0203da24(0);
            data_021cb4b0 = 4;
            func_0206ef28();
            return TRUE;
        }
        if (k & 0x800) {
            func_0203da24(0);
            data_021cb4b0 = 0;
            func_0206ef28();
            return TRUE;
        }
        if (func_0201188c() != 2 && (data_021f47d8[1] & 0x400)) {
            func_0203da24(0);
            data_021cb4b0 = 5;
            func_0206ef28();
            return TRUE;
        }
    }
    return TRUE;
}

BOOL func_0206f3e0() {
    data_021cb504[0] |= data_021cb51c[0];
    data_021cb504[1] |= data_021cb51c[1];
    data_021cb504[2] |= data_021cb51c[2];
    func_0206f254();
    func_0206dfe4();
    func_0205c1a4();
    func_02065328(data_021cb4e8);
    data_020de014[1] = 0x2e;
    data_020de014[0] = 0;
    data_021cb4c8 = 0;
    return TRUE;
}

BOOL func_0206f43c(u32 v) {
    func_0205c1c0(0x8c00, 0);
    data_021cb51c[0] = data_021cb51c[1] = data_021cb51c[2] = 0;
    data_021cb504[0] = data_021cb504[1] = data_021cb504[2] = 0;
    data_020de014[1] = 0x2e;
    data_020de014[0] = 1;
    data_021cb4c8 = v;
    data_021cb4c4 = 0;
    func_0206f164();
    func_0206e020();
    data_021cb4d4 = 0;
    func_0205137c();
    data_021cb4e4 = 0;
    return TRUE;
}

Unk_020de234 *func_0206f4ac() { return new Unk_020de234; }

void func_0206f4d8(u8 *o) { func_02045400(o[1]); }
void func_0206f4e4(u8 *o) { func_0206f53c(o[0] - 0x12); }

}
