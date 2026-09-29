#include "types.h"

// data_021c6240 object
struct Unk_0205c3b0 {
    u32 unk_00[25];
    u16 unk_64[25];
    u16 unk_96[25];

    void func_0205c3b0(s32 i, u32 v);
    u32 func_0205c3bc(s32 i);
    s32 func_0205c3c8(s32 v);
    void func_0205c400(s32 i, u32 v);
    u32 func_0205c40c(s32 i);
    u32 func_0205c418(s32 i);
    void func_0205c420();
    void func_0205c460();
    void func_0205c558();
};

struct Unk_0205c788_Elem { u8 pad[0xd]; u8 unk_0d; u8 pad2[0xe]; };
struct Unk_0205c788_Sub { u8 pad[0x14]; };

// data_021c6314 object
struct Unk_0205c788 {
    u32 unk_00[4];
    Unk_0205c788_Sub unk_10[4];
    u8 unk_60[4][0x1c];

    Unk_0205c788();
    ~Unk_0205c788();
    Unk_0205c788_Elem *func_0205c788(s32 i);
    void *func_0205c794(s32 i);
    u32 func_0205c7a0(s32 i);
    void func_0205c7a8();
    void func_0205c7ec();
};

extern Unk_0205c3b0 data_021c6240;
extern Unk_0205c788 data_021c6314;
extern void *data_021c6208, *data_021c620c, *data_021c6210, *data_021c6214, *data_021c6218;
extern void *data_021c61e0;
extern void *data_021c61d0;
extern u8 *data_020cbb18;
extern u8 data_020cab98[];
extern u16 data_020dc11c[];
extern u8 *data_020dc10c[];
extern u8 data_020dc108[];
extern u16 data_020caf64[];
extern u16 data_020cacdc[];
extern char data_021c622c[];
extern char data_020dc3a4[];
extern char *data_020dc3b8[];
extern void *data_021c6404;

extern "C" {
void *func_020e8e7c();
void func_020e8c88(void *);
void *func_020e8628(void *, u32, s32);
void func_020e885c(void *);
void func_020e877c(void *);
void func_02116048(void *, void *, u32);
s32 func_020641b4(char *, void *, u32);
s32 func_020639e8(char *, char *, ...);
s32 func_0205beb8();
s32 func_0205bed4();
s32 func_0205bd54();
s32 func_0205bd70();
s32 func_020b50e8();
u8 func_020b4928(u32);
u8 func_020b491c(u32);
s32 func_02084fbc();
s32 func_020b89f0(void *, s32, s32);
s32 func_020b89c8(void *);
s32 func_020b8b08(void *);
void func_020b8b20(void *);
s32 func_0210629c(void *);
s32 func_02055210(void *, s32);
void func_02055200(void *);
s32 func_02055340(void *, s32, s32, s32);
void func_020553a8(void *);
void func_020553b4(void *);
void func_021355f0(void *, s32, s32, void (*)(void *));
void func_02135714(void *, s32, s32, void (*)(void *), void (*)(void *));
void func_02135558(void *, void *);
BOOL func_0204b2d4(u16 *);
s32 func_0204b25c(u16 *);
u32 func_0203c6c0();
BOOL func_0203c6b0(void *, void *);
void *func_0205cc68(void *, s32);
void func_0205cc58(u16 *, void *, s32);
struct Unk_0205ca2c_Elem { u16 v; Unk_0205ca2c_Elem() { v = 0xffff; } ~Unk_0205ca2c_Elem(); };
void func_0205cc4c(void *, s32, u16 *);
void func_02004b60();
extern u16 data_021c63e4;
extern u32 data_021c63e8;
extern u8 data_021c63ec[];
extern void func_0205c268(u8 *, s32);
extern Unk_0205c788_Elem *func_0205c66c(u8 *);
extern void *func_0205c680(u8 *);
extern void *func_0205c694(u8 *);
extern void func_0205c380(u8 *, u32);
extern u32 func_0205c5d0(u32);
extern u32 func_0205c5fc();
extern u32 func_0205c604();
extern u32 func_0205c5f4();
extern char *func_0205c60c(u32);
extern char *func_0205c8d0(u32);
extern u32 func_0205c8c8();
extern u32 func_0205c8c0();
extern u32 func_0205c8bc();
extern u32 func_0205c8b8();
extern void func_0205c2dc(u8 *, s32, s32, s32);
}

extern "C" {

void func_0205c158() { data_021c6208 = func_020e8e7c(); }
void func_0205c170() { func_020e8c88(data_021c620c); data_021c620c = 0; }
void func_0205c18c() { data_021c620c = func_020e8e7c(); }
void func_0205c1a4() { func_020e8c88(data_021c6210); data_021c6210 = 0; }
void func_0205c1c0() { data_021c6210 = func_020e8e7c(); }
void func_0205c1d8() { func_020e8c88(data_021c6214); data_021c6214 = 0; }
void func_0205c1f4() { data_021c6214 = func_020e8e7c(); }
void func_0205c20c() { func_020e8c88(data_021c6218); data_021c6218 = 0; }
void func_0205c228() { data_021c6218 = func_020e8e7c(); }

u32 func_0205c240(u8 *p) { return data_021c6240.func_0205c40c(*p); }
u32 func_0205c254(u8 *p) { return data_021c6240.func_0205c418(*p); }

}

void Unk_0205c3b0::func_0205c3b0(s32 i, u32 v) { unk_96[i] = v; }
u32 Unk_0205c3b0::func_0205c3bc(s32 i) { return unk_96[i]; }
void Unk_0205c3b0::func_0205c400(s32 i, u32 v) { unk_64[i] = v; }
u32 Unk_0205c3b0::func_0205c40c(s32 i) { return unk_64[i]; }
u32 Unk_0205c3b0::func_0205c418(s32 i) { return unk_00[i]; }

extern "C" {

void func_0205c268(u8 *p, s32 v) {
    u32 cur = *p;
    if (v != cur) {
        u32 x = data_021c6240.func_0205c40c(v);
        if (x != data_021c6240.func_0205c40c(cur)) {
            u32 sz = data_021c6240.func_0205c3bc(v);
            if (sz != 0) {
                u32 a = data_021c6240.func_0205c418(v);
                u32 b = data_021c6240.func_0205c418(cur);
                if (a != 0 && b != 0) {
                    func_02116048((void *)a, (void *)b, sz);
                    data_021c6240.func_0205c400(cur, x);
                    data_021c6240.func_0205c3b0(cur, sz);
                }
            }
        }
    }
}

void func_0205c2dc(u8 *p, s32 a, s32 b, s32 c) {
    u32 cur = *p;
    if (a >= 0x144) {
        data_021c6240.func_0205c400(cur, 0x144);
        data_021c6240.func_0205c3b0(cur, 0);
        return;
    }
    if (c == 0 && a == data_021c6240.func_0205c40c(cur)) return;
    if (b != 0) {
        s32 slot = data_021c6240.func_0205c3c8(a);
        if (slot != 0x19) {
            func_0205c268(p, slot);
            return;
        }
    }
    u32 buf = data_021c6240.func_0205c418(cur);
    u32 sz;
    if ((s32)cur > 8) sz = func_0205c5fc();
    else sz = func_0205c604();
    s32 r = func_020641b4(func_0205c60c(a), (void *)buf, sz);
    if (r != 0) {
        data_021c6240.func_0205c400(cur, a);
        data_021c6240.func_0205c3b0(cur, r);
    }
}

void func_0205c380(u8 *p, u32 v) { *p = v; }

void func_0205c384(u8 *p, u32 v) {
    func_0205c380(p, v);
    func_0205c2dc(p, 0x144, 0, 0);
}

void func_0205c3a4() {}
void func_0205c3a8(u8 *p) { *p = 0x19; }

}

s32 Unk_0205c3b0::func_0205c3c8(s32 v) {
    s32 lo = 0, hi = 0x19;
    if (v < 0x137) hi = 9;
    else lo = 9;
    for (; lo < hi; lo++) {
        s32 c = unk_64[lo];
        if (c == v) return lo;
    }
    return 0x19;
}

void Unk_0205c3b0::func_0205c420() {
    s32 i;
    for (i = 0; i < 0x19; i++) {
        unk_00[i] = 0;
        unk_64[i] = 0x144;
        unk_96[i] = 0;
    }
    if (data_021c61e0) func_020e885c(data_021c61e0);
}

void Unk_0205c3b0::func_0205c460() {
    void *heap = data_021c61e0;
    u32 n = data_020cbb18[0x6c];
    u32 m = func_020b4928(func_020b50e8());
    if (n < m) m = n;
    u32 k = m ? m : 1;
    u32 v[4];
    v[0] = func_020b491c(func_020b50e8()) + func_02084fbc() - k;
    v[1] = func_0205c604();
    v[2] = func_0205c5fc();
    v[3] = func_0205c5f4();
    u32 i;
    for (i = 0; i < m; i++) unk_00[i] = (u32)func_020e8628(heap, v[1], 4);
    for (i = 4; i < v[0] + 4; i++) unk_00[i] = (u32)func_020e8628(heap, v[1], 4);
    for (i = 9; i < m + 9; i++) unk_00[i] = (u32)func_020e8628(heap, v[2], 4);
    m = 4;
    for (i = 0xd; i < v[0] + 0xd; i++) unk_00[i] = (u32)func_020e8628(heap, v[2], m);
    for (i = 0x12; i < v[0] + 0x12; i++) unk_00[i] = (u32)func_020e8628(heap, v[3], m);
}

extern "C" {

void func_0205c554() {}

}

void Unk_0205c3b0::func_0205c558() {
    for (s32 i = 0; i < 0x19; i++) unk_64[i] = 0x144;
}

extern "C" {

u32 func_0205c570(u32 i) { return data_020cab98[i]; }
u32 func_0205c57c(u32 i) { return data_020dc11c[i]; }
u32 func_0205c588(u32 a, u32 b) {
    func_0205c5d0(a);
    u8 *q = data_020dc10c[a] + b * 2;
    return q[1];
}
u32 func_0205c5ac(u32 a, u32 b) {
    func_0205c5d0(a);
    return data_020dc10c[a][b * 2];
}
u32 func_0205c5d0(u32 i) { return data_020dc108[i]; }
u32 func_0205c5dc(u32 i) { return data_020caf64[i]; }
u32 func_0205c5e8(u32 i) { return data_020cacdc[i]; }
u32 func_0205c5f4() { return 0x270; }
u32 func_0205c5fc() { return 0x270; }
u32 func_0205c604() { return 0x15c0; }
char *func_0205c60c(u32 x) {
    u32 z = x >> 5;
    func_020639e8(data_021c622c, data_020dc3a4, z, x);
    return data_021c622c;
}

void func_0205c62c() {
    data_021c6240.func_0205c420();
    func_0205beb8();
}

void func_0205c644() {
    func_0205bed4();
    data_021c6240.func_0205c460();
    if (data_021c61e0) func_020e877c(data_021c61e0);
}

Unk_0205c788_Elem *func_0205c66c(u8 *p) { return data_021c6314.func_0205c788(*p); }
void *func_0205c680(u8 *p) { return data_021c6314.func_0205c794(*p); }
void *func_0205c694(u8 *p) { return (void *)data_021c6314.func_0205c7a0(*p); }


s32 func_0205c6a8(u8 *p) {
    Unk_0205c788_Elem *e = func_0205c66c(p);
    u32 s = e->unk_0d;
    BOOL a = s == 2 ? TRUE : FALSE;
    if (a) return TRUE;
    BOOL b = s == 1 ? TRUE : FALSE;
    if (!b) {
        func_020b89f0(e, func_0210629c(func_0205c694(p)), 1);
    }
    return FALSE;
}

void func_0205c6f4(u8 *p) {
    s32 x = func_0210629c(func_0205c694(p));
    func_02055210(func_0205c680(p), x);
}

s32 func_0205c718(u8 *p, u32 idx) {
    void *buf = func_0205c694(p);
    char *name = func_0205c8d0(idx);
    return func_020641b4(name, buf, func_0205c8c8());
}

void func_0205c744(u8 *p) {
    u32 s = func_0205c66c(p)->unk_0d;
    BOOL a = s == 1 ? TRUE : FALSE;
    if (a) func_020b89c8(func_0205c66c(p));
    else func_020b8b08(func_0205c66c(p));
}

void func_0205c778(u8 *p, u32 v) { *p = v; }
void func_0205c77c() {}
void func_0205c780(u8 *p) { *p = 4; }

}

Unk_0205c788_Elem *Unk_0205c788::func_0205c788(s32 i) { return (Unk_0205c788_Elem *)(unk_60[i]); }
void *Unk_0205c788::func_0205c794(s32 i) { return &unk_10[i]; }
u32 Unk_0205c788::func_0205c7a0(s32 i) { return unk_00[i]; }

void Unk_0205c788::func_0205c7a8() {
    for (s32 i = 0; i < 4; i++) func_02055200(&unk_10[i]);
    s32 j;
    for (j = 0; j < 4; j++) unk_00[j] = 0;
    if (data_021c61d0) func_020e885c(data_021c61d0);
}

void Unk_0205c788::func_0205c7ec() {
    u32 cnt = data_020cbb18[0x6c];
    u32 i;
    for (i = 0; i < cnt; i++) {
        u32 a = func_0205c8c0();
        u32 b = func_0205c8bc();
        u32 c = func_0205c8b8();
        func_02055340(&unk_10[i], a, b, c);
    }
    void *heap = data_021c61d0;
    for (i = 0; i < cnt; i++) unk_00[i] = (u32)func_020e8628(heap, func_0205c8c8(), 4);
}

Unk_0205c788::~Unk_0205c788() {
    func_021355f0(unk_10, 4, 0x14, func_020553a8);
}

Unk_0205c788::Unk_0205c788() {
    func_02135714(unk_10, 4, 0x14, func_020553b4, func_020553a8);
    u8 *e = unk_60[0];
    u8 *end = unk_60[0] + 0x70;
    do {
        func_020b8b20(e);
        e += 0x1c;
    } while (e != end);
}

extern "C" {

u32 func_0205c8b8() { return 0x60; }
u32 func_0205c8bc() { return 0; }
u32 func_0205c8c0() { return 0x440; }
u32 func_0205c8c8() { return 0x2380; }
char *func_0205c8d0(u32 i) { return data_020dc3b8[i]; }

void func_0205c8dc() {
    data_021c6314.func_0205c7a8();
    func_0205bd54();
}

void func_0205c8f4() {
    func_0205bd70();
    data_021c6314.func_0205c7ec();
    if (data_021c61d0) func_020e877c(data_021c61d0);
}

void func_0205c91c(u8 *p) { func_0205cc68(&data_021c6404, *p); }

}

static inline BOOL Unk_0205c930_R(volatile u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    u16 a = *p;
    u16 b = *p;
    if (b >= lo && a <= hi) r = TRUE;
    return r;
}

extern "C" {

void func_0205c930(u8 *p, s32 x) {
    u32 cur = *p;
    if (x != cur) {
        u16 v[2];
        func_0205cc58(&v[0], &data_021c6404, x);
        func_0205cc58(&v[1], &data_021c6404, cur);
        BOOL ok = FALSE;
        volatile u16 *pv = v;
        u16 a = *pv;
        u16 b = *pv;
        if (b >= 0x12a8 && a <= 0x12af) ok = TRUE;
        if (ok) {
            BOOL ok2;
            if (a >= 0x1429 && a <= 0x1430) ok2 = TRUE; else ok2 = FALSE;
            if (ok2) {
                BOOL ok3;
                if (a >= 0x13a0 && a <= 0x13a7) ok3 = TRUE; else ok3 = FALSE;
                if (ok3) goto copy;
            }
        }
        {
            BOOL eq;
            if (func_0204b2d4(v)) {
                s32 q = func_0204b25c(v);
                if (q == func_0204b25c(&v[1])) eq = TRUE; else eq = FALSE;
            } else {
                if (v[0] == v[1]) eq = TRUE; else eq = FALSE;
            }
            if (eq) return;
        }
    copy:
        void *pa = func_0205cc68(&data_021c6404, x);
        void *pb = func_0205cc68(&data_021c6404, cur);
        if (pa != 0 && pb != 0) {
            func_02116048(pa, pb, func_0203c6c0());
            func_0205cc4c(&data_021c6404, cur, v);
        }
    }
}

void func_0205ca2c(u8 *p, void *q) {
    u32 cur = *p;
    if (func_0203c6b0(func_0205cc68(&data_021c6404, cur), q)) {
        static Unk_0205ca2c_Elem dflt;
        func_0205cc4c(&data_021c6404, cur, &dflt.v);
    }
}

}
