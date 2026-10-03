#include "types.h"
#include "Unk_020d8c7c.h"

struct Unk_0204da0c_Size {
    s32 w;
    s32 h;
};

struct Unk_0204da0c_Map {
    u32 unk_00;
    Unk_0204da0c_Size unk_04;
};

struct Unk_0204c3c0_Ver {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_0204c3f4_Slot {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
};

struct Unk_0204c3f4 {
    /* 0x00 */ Unk_0204c3c0_Ver unk_00;
    /* 0x04 */ s32 unk_04;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0a */ u8 unk_0a;
    /* 0x0b */ u8 unk_0b;
    /* 0x0c */ u8 pad_0c[0x21 - 0x0c];
    /* 0x21 */ s8 unk_21;
    /* 0x22 */ u8 unk_22;
    /* 0x23 */ u8 pad_23[0x54 - 0x23];
    /* 0x54 */ u8 unk_54;
    /* 0x55 */ u8 unk_55;
    /* 0x56 */ u8 unk_56;
    /* 0x57 */ u8 unk_57;
    /* 0x58 */ Unk_0204c3f4_Slot unk_58[4];
    /* 0x68 */ u8 unk_68;
    /* 0x69 */ u8 unk_69;
    /* 0x6a */ u8 unk_6a;
    /* 0x6b */ u8 unk_6b;
};

extern "C" {
extern u16 data_020ca2e8[];
}

extern "C" {
extern u8 data_020e416c;
}

extern "C" {
extern void *gCurrentHeap;
}

extern "C" {
extern void *data_021c47c4;
}

extern "C" {
extern void *data_021c47d0;
}

extern "C" {
extern u32 data_021e58a8[];
}

extern "C" {
extern u32 data_021e3680[];
}

extern "C" {
Unk_0204da0c_Map *func_0204da0c();
}

extern "C" {
u16 *func_0204ebd8(Unk_0204da0c_Map *m, s32 cx, s32 cy, s32 lx, s32 ly, s32 z);
}

extern "C" {
s32 func_0204eb30(Unk_0204da0c_Map *m, u16 *v, s32 x, s32 y, s32 z);
}

extern "C" {
s32 func_0204e914(Unk_0204da0c_Map *m, s32 x, s32 y);
}

extern "C" {
s32 _ZN12Unk_0204e2f013func_0204e300Eii(void *m, s32 x, s32 y);
}

extern "C" {
void func_0204edf8(s32 *a, s32 *b, s32 c, s32 d, s32 e, s32 f);
}

extern "C" {
void func_0209cf88(void *p);
}

extern "C" {
s32 func_0209cdc0(void *a, void *b);
}

extern "C" {
s32 func_0209ceac(u32 a, u32 b, u32 c);
}

extern "C" {
void func_0204c21c(void *p);
}

extern "C" {
void func_0204c20c(void *p);
}

extern "C" {
void func_0204c1d8(void *p);
}

extern "C" {
void func_0204c22c(void *p, void *q);
}

extern "C" {
void func_0204c290(void *p);
}

extern "C" {
void func_02045e34();
}

extern "C" {
s32 func_02063b8c(s32 a);
}

extern "C" {
BOOL Item_IsTreeStage0(u16 *p);
}

extern "C" {
s32 func_0205b470();
}

extern "C" {
s32 _ZN12Unk_0204e2f013func_0204e2ccEi(void *a, void *heap);
}

extern "C" {
void _ZN12Unk_0204e2f013func_0204e2f0Ev();
}

extern "C" {
s32 _ZN12Unk_0204e2f013func_0204e1a8EP18Unk_0204debc_EntryP16Unk_0204e1a8_Outi(void *a, void *b, void *c, void *heap);
}

extern "C" {
void Heap_Free(void *heap, void *p);
}

extern "C" {
void *Heap_Alloc(void *heap, s32 size);
}

extern "C" {
struct Unk_020b5350_Info {
    u32 *unk_00;
    u8 unk_04;
    u8 unk_05;
    u16 unk_06;
};
}

extern "C" {
Unk_020b5350_Info *func_020b5350();
}

extern "C" {
s32 func_020b52d0();
}

extern "C" {
u32 func_020603c8(void *p);
}

extern "C" {
u32 _ZN9HouseData13func_020604f8EiPv(void *p, u32 a, void *heap);
}

extern "C" {
s32 func_020b50e8();
}

extern "C" {
s32 func_020b52f8();
}

extern "C" {
u32 func_020b5328();
}

extern "C" {
s32 func_020b51a4();
}

extern "C" {
u32 func_020b51d4();
}

extern "C" {
s32 func_020b530c();
}

extern "C" {
void *_ZN7TownMap13func_0204debcEi(void *p, void *heap);
}

extern "C" {
void *func_0204ce50(void *heap, s32 n);
}

extern "C" {
void *func_0204d22c(void *a, u32 b, void *heap);
}

extern "C" {
void *func_0204ee64(s32 n, void *heap);
}

extern "C" {
s32 func_0204ce80(s32 a, u32 b);
}

extern "C" {
u32 func_0204cda0(s32 a, u32 b, void *heap, s32 n);
}

extern "C" {
Unk_0204da0c_Map *func_0204d500(s32 a);
}

extern "C" {
s32 func_0204cc48(void *a, s32 b, s32 c, s32 d);
}

static inline BOOL Unk_0204c5c0_IsZero(u8 v) { return v == 0 ? TRUE : FALSE; }
static inline BOOL Unk_0204cab4_IsOne(u8 v) { return v == 1 ? TRUE : FALSE; }

// ---- func_0204c318 ----
static inline BOOL Unk_0204c318_InRange(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi) r = TRUE;
    return r;
}

extern "C" void func_0204c6a4(Unk_0204da0c_Map *p);

// ---- func_0204c6a4 ----
static inline BOOL Unk_0204c6a4_Check(u16 *p) {
    BOOL f9 = TRUE, f8 = TRUE, f7 = TRUE, f6 = TRUE, f5 = TRUE, f4 = TRUE, f3 = TRUE, f2 = TRUE, f1 = FALSE;
    u32 v = *p;
    if (v >= 0x26 && v <= 0x2a) f1 = TRUE;
    if (!f1 && !(v >= 0x5d && v <= 0x61)) f2 = FALSE;
    if (!f2 && !(v >= 0x2f && v <= 0x56)) f3 = FALSE;
    if (!f3 && !(v >= 0x57 && v <= 0x5b)) f4 = FALSE;
    if (!f4 && !(v >= 0x66 && v <= 0x68)) f5 = FALSE;
    if (!f5 && !(v == 0x69)) f6 = FALSE;
    if (!f6 && !(v >= 0x6a && v <= 0x6c)) f7 = FALSE;
    if (!f7 && !(v == 0x6d)) f8 = FALSE;
    if (!f8 && !(v >= 0xc8 && v <= 0xcf)) f9 = FALSE;
    return f9;
}

// ---- Unk_020da3d4 ----
class Unk_020da3d4 : public GameProc {
public:
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL onExecute();
    virtual BOOL onDraw();

    /* 0x50 */ u16 unk_50;
    /* 0x52 */ u16 pad_52;
    /* 0x54 */ u32 *unk_54;
    /* 0x58 */ s32 unk_58;

    s32 func_0204c5c0(void *heap);
    void func_0204c684(u32 *out, s32 n);
    void func_0204cb28(u32 v, s32 idx);
    void func_0204cb3c(void *heap);
    void func_0204cb8c(void *heap);
    u32 *func_0204c9e8(u32 *src, s32 n, void *heap);
    u32 func_0204cab4(u32 v, s32 idx, void *heap);
};
extern "C" Unk_020da3d4 *func_0204cbf0();
extern "C" Unk_0204da0c_Map *func_0204cbc0(s32 a);
extern "C" void func_0204c6a4(Unk_0204da0c_Map *p);

extern "C" Unk_020da3d4 *func_0204cbf0() {
    return new Unk_020da3d4;
}

extern "C" Unk_0204da0c_Map *func_0204cbc0(s32 a) {
    Unk_0204da0c_Map *r = NULL;
    if (a == 0) {
        r = func_0204da0c();
    } else if (func_020b530c() == 1) {
        r = func_0204d500(a);
    }
    return r;
}

void Unk_020da3d4::func_0204cb8c(void *heap) {
    s32 i;
    if (unk_58 > 0) {
        unk_54 = (u32 *)Heap_Alloc(heap, unk_58 * 4);
        if (unk_54 != NULL) {
            for (i = 0; i < unk_58; i++) unk_54[i] = 0;
        }
    }
}

void Unk_020da3d4::func_0204cb3c(void *heap) {
    s32 i;
    if (unk_54 != NULL) {
        if (unk_58 > 0) {
            for (i = 0; i < unk_58; i++) {
                if (unk_54[i] != 0) {
                    Heap_Free(heap, (void *)unk_54[i]);
                    unk_54[i] = 0;
                }
            }
            Heap_Free(heap, unk_54);
            unk_54 = NULL;
            unk_58 = 0;
        }
    }
}

void Unk_020da3d4::func_0204cb28(u32 v, s32 idx) {
    if (unk_54 != NULL && idx < unk_58) unk_54[idx] = v;
}

u32 Unk_020da3d4::func_0204cab4(u32 v, s32 idx, void *heap) {
    s32 k = 4;
    u32 m = v & 0xfff;
    u32 r = 0;
    u8 c = data_020e416c;
    if (Unk_0204c5c0_IsZero(c)) {
        k = 0;
    } else if (Unk_0204cab4_IsOne(c)) {
        k = 1;
    }
    if (k != 4) {
        if (func_0204ce80(k, m) == 1) {
            r = func_0204cda0(k, m, heap, 4);
            func_0204cb28(r, idx);
        }
    }
    return r;
}

u32 *Unk_020da3d4::func_0204c9e8(u32 *src, s32 n, void *heap) {
    u32 *r = NULL;
    s32 i;
    if (func_020b50e8() == 0 || func_020b50e8() == 0x31 || func_020b50e8() == 0x2c) {
        r = (u32 *)_ZN7TownMap13func_0204debcEi(data_021e3680, heap);
    } else if (func_020b52f8()) {
        r = (u32 *)_ZN9HouseData13func_020604f8EiPv(data_021e58a8, func_020b5328(), heap);
    } else if (func_020b51a4()) {
        i = func_020b51d4();
        r = (u32 *)func_0204ce50(heap, 4);
        func_0204cb28((u32)r, 0);
        r = (u32 *)func_0204d22c(r, i, heap);
    } else if (src != NULL && n > 0) {
        r = (u32 *)func_0204ee64(n, heap);
        if (r != NULL) {
            for (i = 0; i < n; i++) {
                u32 *e = r + i * 4;
                e[0] = *src;
                e[1] = func_0204cab4(e[0], i, heap);
                src++;
            }
        }
    }
    return r;
}

extern "C" void func_0204c6a4(Unk_0204da0c_Map *p) {
    s32 x;
    u16 *t;
    u16 *t2;
    u16 val;
    Unk_0204da0c_Size *sz;
    s32 cx;
    s32 y;
    s32 w;
    s32 h;
    s32 x0;
    s32 y0;
    s32 x1;
    s32 y1;
    s32 cy;
    if (p == NULL) return;
    sz = &p->unk_04;
    w = sz->w;
    h = sz->h;
    val = 0xfff1;
    x0 = 0;
    y0 = 0;
    x1 = 0;
    y1 = 0;
    func_0204edf8(&x0, &y0, 1, 1, 0, 0);
    func_0204edf8(&x1, &y1, w - 2, h - 2, 15, 15);
    y = y0;
    x = x0;
    if (x <= x1) {
        goto test;
    loop:
        _ZN12Unk_0204e2f013func_0204e300Eii(p, x, y);
            cx = x >> 4;
            cy = y >> 4;
            t = func_0204ebd8(p, cx, cy, x - (cx << 4), y - (cy << 4), 0);
            if (t) {
                if (Unk_0204c6a4_Check(t)) {
                    if (!Item_IsTreeStage0(t)) func_0204eb30(p, &val, x, y, 0);
                }
            }
        x++;
    test:
        if (x <= x1) goto loop;
    }
    y = y0;
    goto test2;
loop2:
    {
        x = x0;
        _ZN12Unk_0204e2f013func_0204e300Eii(p, x, y);
            cx = x >> 4;
            cy = y >> 4;
            t = func_0204ebd8(p, cx, cy, x - (cx << 4), y - (cy << 4), 0);
            if (t) {
                if (Unk_0204c6a4_Check(t)) {
                    if (!Item_IsTreeStage0(t)) func_0204eb30(p, &val, x, y, 0);
                }
            }
        x = x1;
        _ZN12Unk_0204e2f013func_0204e300Eii(p, x, y);
            cx = x >> 4;
            cy = y >> 4;
            t2 = func_0204ebd8(p, cx, cy, x - (cx << 4), y - ((u32)cy << 4), 0);
            if (t2) {
                if (Unk_0204c6a4_Check(t2)) {
                    if (!Item_IsTreeStage0(t2)) func_0204eb30(p, &val, x, y, 0);
                }
            }
    }
    y++;
test2:
    if (y <= y1) goto loop2;
}

void Unk_020da3d4::func_0204c684(u32 *out, s32 n) {
    if (func_020b52d0()) *out = func_020603c8(data_021e58a8);
}

s32 Unk_020da3d4::func_0204c5c0(void *heap) {
    Unk_020b5350_Info *info;
    void *h;
    u32 *src;
    u32 *r;
    struct { s32 a; s32 b; } sz;
    unk_54 = NULL;
    unk_58 = 0;
    if (data_021c47c4 == NULL) {
        data_021c47c4 = Heap_Alloc(heap, 0x20);
        if (data_021c47c4 != NULL) _ZN12Unk_0204e2f013func_0204e2f0Ev();
    }
    if (data_021c47c4 != NULL) {
        info = func_020b5350();
        h = gCurrentHeap;
        src = NULL;
        sz.a = 0;
        sz.b = 0;
        if (info != NULL) {
            u32 nb = info->unk_05;
            u32 na = info->unk_04;
            sz.a = na;
            sz.b = nb;
            unk_58 = sz.a * sz.b;
            func_0204cb8c(h);
            src = info->unk_00;
            func_0204c684(src, unk_58);
            unk_50 = info->unk_06;
        }
        r = func_0204c9e8(src, unk_58, h);
        if (r != NULL) {
            _ZN12Unk_0204e2f013func_0204e1a8EP18Unk_0204debc_EntryP16Unk_0204e1a8_Outi(data_021c47c4, r, &sz, h);
            if (Unk_0204c5c0_IsZero(data_020e416c)) func_0204c6a4((Unk_0204da0c_Map *)data_021c47c4);
            Heap_Free(h, r);
        }
    }
    return TRUE;
}

BOOL Unk_020da3d4::vfunc_00() {
    if (!func_0204c5c0(gCurrentHeap)) return FALSE;
    func_0205b470();
    return TRUE;
}

BOOL Unk_020da3d4::vfunc_0c() {
    void *heap = gCurrentHeap;
    if (data_021c47c4 != NULL) {
        func_0204cb3c(heap);
        _ZN12Unk_0204e2f013func_0204e2ccEi(data_021c47c4, heap);
        Heap_Free(heap, data_021c47c4);
        data_021c47c4 = NULL;
    }
    return TRUE;
}

BOOL Unk_020da3d4::onExecute() { return TRUE; }

BOOL Unk_020da3d4::onDraw() { return TRUE; }

