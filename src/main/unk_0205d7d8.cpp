// mwcc-flags: -str reuse
#include "types.h"

extern "C" {
void *func_020e8628(void *heap, s32 size, s32 align);
void func_020e877c(void);
void func_020e885c(void *p);
void *NNS_G3dGetTex(void *h);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 func_020641b4(const char *path, void *buf, s32 size);
s32 func_0205bd00(void);
s32 func_0205bd1c(void);
void _ZN12Unk_0205f8d413func_0205fba8Ev(void *p);
s32 func_02061b24(u16 *p);
s32 func_0204b430(u16 *p);
s32 func_0204b5ec(u16 *p);
void func_02063a1c(void *, void *, void *, void *);
void func_02063a5c(void *, void *, void *, void *);
void _ZN12Unk_0205ca9413func_0205ca94EPtiii(void *, void *, s32, s32, s32);
void *func_0205cdbc();
s32 func_0205c91c(void *);
s32 NNS_G3dTexGetRequiredSize(void *p);
s32 NNS_G3dTex4x4GetRequiredSize(void *p);
s32 NNS_G3dPlttGetRequiredSize(void *p);
extern u8 *data_020cbb18;
extern u32 data_021c61cc;
}

class Unk_020b83b0 {
public:
    u32 unk_04;
    u32 unk_08;
    u8 unk_0c;
    Unk_020b83b0() : unk_04(0), unk_08(0), unk_0c(0xff) {}
};

class Unk_020e4618 : public Unk_020b83b0 {
public:
    u8 unk_0d;
    u8 unk_0e;
    u8 unk_0f;
    Unk_020e4618();
    virtual BOOL vfunc_00() = 0;
};

struct Unk_020b8c1c {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

class Unk_020e45ec : public Unk_020e4618 {
public:
    Unk_020b8c1c unk_10;
    Unk_020e45ec();
    virtual BOOL vfunc_00();
    void func_020b89c8(void);
    BOOL func_020b89f0(u32 *a, u8 b);
    void func_020b8b08(void);
};

class Unk_020dbe24 {
public:
    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u8 unk_10;
    u8 unk_11;

    Unk_020dbe24();
    virtual ~Unk_020dbe24();
    void func_020551f4(u32 a, u32 b, u32 c);
    void func_02055200(void);
    void func_02055210(void *p);
    u32 func_0205526c(u32 a, u32 b);
    u32 func_02055298(u32 a, u32 b, u32 c);
    u32 func_020552d8(u32 a, u32 b);
    u32 func_020552ec(u32 a, u32 b);
    u32 func_02055300(u32 a);
    u32 func_02055314(u32 a, u32 b);
    u32 func_02055328(u32 a);
    u32 func_02055334(u32 a);
    void func_02055340(void *a, void *b, void *c);
};

static inline BOOL Unk_0205d4e4_IsTwo(u8 v) {
    return v == 2 ? TRUE : FALSE;
}

static inline BOOL Unk_0205d4e4_IsOne(u8 v) {
    return v == 1 ? TRUE : FALSE;
}

class Unk_0205dbb8 {
public:
    void *unk_00[4];
    Unk_020dbe24 unk_10[4][2];
    Unk_020e45ec unk_b0[4][2];
    void *unk_190[4][2];
    u8 unk_1b0[4][2];

    void func_0205dbb8(u32 i, u32 j, u32 v);
    s32 func_0205dbc8(u32 i, u32 j);
    Unk_020e45ec *func_0205dbd8(u32 i, u32 j);
    Unk_020dbe24 *func_0205dbe8(u32 i, u32 j);
    void func_0205dbf8(u32 i, u32 j, void *v);
    void *func_0205dc0c(u32 i, u32 j);
    void *func_0205dc20(u32 i);
    void func_0205dc28(void);
    void func_0205dcac(void);
};

struct Unk_0205dd38_Pair {
    u32 unk_00;
    u32 unk_04;
};

struct Unk_0205dd38_Bytes {
    u8 unk_00;
    u8 unk_01;
};

class Unk_0205dd1c {
public:
    u32 unk_00[4];
    Unk_020dbe24 unk_10[8];
    Unk_020e45ec unk_b0[8];
    Unk_0205dd38_Pair unk_190[4];
    Unk_0205dd38_Bytes unk_1b0[4];

    Unk_0205dd1c();
    ~Unk_0205dd1c();
};

static inline BOOL Unk_0205da08_InRange(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1429 && *p <= 0x1430) {
        r = TRUE;
    }
    return r;
}

static inline BOOL Unk_0205ddc8_In(u16 *p, u32 lo, u32 hi) {
    BOOL r = FALSE;
    if (*p >= lo && *p <= hi)
        r = TRUE;
    return r;
}

static inline s32 Unk_0205ddc8_Idx(u32 v, u32 lo, u32 hi) {
    if (v >= lo && v <= hi)
        return v - lo;
    return -1;
}

extern "C" {
extern const u8 data_020cb3b0[0x10];
extern const u8 data_020cb3c0[0x10];
extern const u8 data_020cb3d0[0x18];
extern const u8 data_020cb3e8[0x20];
extern const u8 data_020cb408[0x48];
extern char data_021c6630[0x14];

void func_0205df98(u8 *p);
void func_0205df70(void);
void func_0205df58(void);
char *func_0205df38(u32 a);
u32 func_0205df2c(u32 i);
u32 func_0205df20(u32 i);
u32 func_0205df14(u32 i);
u32 func_0205df08(u32 i);
u32 func_0205defc(u32 i);
void func_0205ddc8(s32 flag, u32 a, u16 *p, u32 *o1, u32 *o2);
s32 func_0205ddc0(void);
s32 func_0205ddb8(void);
s32 func_0205ddb4(void);
s32 func_0205ddb0(void);
void func_0205dbb0(u8 *p);
void func_0205dbac();
void func_0205dba8(u8 *p, u8 v);
void func_0205db70(u8 *p);
void func_0205db04(u8 *p);
s32 func_0205da08(u8 *p, s32 a, s32 b, u16 *c, s32 d);
void func_0205d934(u8 *p);
BOOL func_0205d87c(u8 *p);
void *func_0205d868(u8 *p);
void *func_0205d854(u8 *p, s32 j);
void func_0205d834(u8 *p, s32 j, void *v);
Unk_020dbe24 *func_0205d820(u8 *p, s32 j);
Unk_020e45ec *func_0205d80c(u8 *p, s32 j);
s32 func_0205d7f8(u8 *p, s32 j);
void func_0205d7d8(u8 *p, s32 j, u32 v);
}

const u8 data_020cb3c0[0x10] = {0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f};
const u8 data_020cb3b0[0x10] = {0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f};
const u8 data_020cb3d0[0x18] = {0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93,
                                0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x00, 0x00};
const u8 data_020cb3e8[0x20] = {0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f,
                                0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f};
const u8 data_020cb408[0x48] = {0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f,
                                0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f,
                                0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f,
                                0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f,
                                0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87};

char data_021c6630[0x14];
Unk_0205dd1c data_021c6644;

#define MGR ((Unk_0205dbb8 *)&data_021c6644)

extern "C" void func_0205df98(u8 *p) {
    _ZN12Unk_0205f8d413func_0205fba8Ev(p + 0x28);
}

extern "C" void func_0205df70(void) {
    func_0205bd1c();
    MGR->func_0205dcac();
    if (data_021c61cc != 0)
        func_020e877c();
}

extern "C" void func_0205df58(void) {
    MGR->func_0205dc28();
    func_0205bd00();
}

extern "C" char *func_0205df38(u32 a) {
    func_020639e8(data_021c6630, "/PHead/%d/%d.nsbmd", a >> 5, a);
    return data_021c6630;
}

extern "C" u32 func_0205df2c(u32 i) { return data_020cb3b0[i]; }
extern "C" u32 func_0205df20(u32 i) { return data_020cb3c0[i]; }
extern "C" u32 func_0205df14(u32 i) { return data_020cb408[i]; }
extern "C" u32 func_0205df08(u32 i) { return data_020cb3e8[i]; }
extern "C" u32 func_0205defc(u32 i) { return data_020cb3d0[i]; }

extern "C" void func_0205ddc8(s32 flag, u32 a, u16 *p, u32 *o1, u32 *o2) {
    u32 r = 0x9e;
    BOOL k = FALSE;
    if (*p >= 0x13a8 && *p <= 0x13c7)
        k = TRUE;
    if (k) {
        s32 t = Unk_0205ddc8_Idx(*p, 0x13a8, 0x13c7);
        if (t >= 0 && (u32)t < 0x20)
            a = func_0205df08(t);
        else
            a = func_0205df08(0);
    } else {
        u32 v = *p;
        if ((v >= 0x13c8 && v <= 0x1407) || (v >= 0x1429 && v <= 0x1430)) {
            if (func_02061b24(p) == 0) {
                a = func_0205df20(a);
                goto done1;
            }
        }
        a = func_0205df2c(a);
    }
done1:
    BOOL k2 = FALSE;
    if (*p >= 0x1429 && *p <= 0x1430)
        k2 = TRUE;
    if (k2) {
        if (flag == 0)
            r = 0x80;
        else
            r = 0x81;
    } else {
        u32 v = *p;
        if (v >= 0x13c8 && v <= 0x1407) {
            s32 t = Unk_0205ddc8_Idx(v, 0x13c8, 0x1407);
            if (t >= 0 && (u32)t < 0x48)
                r = func_0205df14(t);
        } else if (v >= 0x1408 && v <= 0x1428) {
            if (func_0204b430(p) != 0) {
                s32 t = func_0204b5ec(p);
                if (t >= 0 && (u32)t < 0x16) {
                    r = func_0205defc(t);
                    if (r == 0x9c)
                        r = 0x9d;
                }
            }
        }
    }
    *o1 = a;
    *o2 = r;
}

extern "C" s32 func_0205ddc0(void) { return 0x2864; }
extern "C" s32 func_0205ddb8(void) { return 0x1220; }
extern "C" s32 func_0205ddb4(void) { return 0; }
extern "C" s32 func_0205ddb0(void) { return 0xc0; }

Unk_0205dd1c::Unk_0205dd1c() {
    for (s32 i = 0; i < 4; i++) {
        unk_00[i] = 0;
        unk_190[i].unk_00 = 0;
        unk_190[i].unk_04 = 0;
        unk_1b0[i].unk_00 = 0x9e;
        unk_1b0[i].unk_01 = 0x9e;
    }
}

Unk_0205dd1c::~Unk_0205dd1c() {}

void Unk_0205dbb8::func_0205dcac(void) {
    u32 n = *(u8 *)(data_020cbb18 + 0x6c);
    u32 i;
    for (i = 0; i < n; i++) {
        unk_10[i][0].func_02055340((void *)func_0205ddb8(), (void *)func_0205ddb4(), (void *)func_0205ddb0());
    }
    void *heap = (void *)data_021c61cc;
    for (i = 0; i < n; i++) {
        unk_00[i] = func_020e8628(heap, func_0205ddc0(), 4);
    }
}

void Unk_0205dbb8::func_0205dc28(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        unk_10[i][0].func_02055200();
        unk_10[i][1].func_02055200();
    }
    for (i = 0; i < 4; i++) {
        unk_00[i] = NULL;
        unk_190[i][0] = NULL;
        unk_190[i][1] = NULL;
    }
    if (data_021c61cc) {
        func_020e885c((void *)data_021c61cc);
    }
    for (i = 0; i < 4; i++) {
        unk_1b0[i][0] = 0x9e;
        unk_1b0[i][1] = 0x9e;
    }
}

void *Unk_0205dbb8::func_0205dc20(u32 i) { return unk_00[i]; }
void *Unk_0205dbb8::func_0205dc0c(u32 i, u32 j) { return unk_190[i][j]; }
void Unk_0205dbb8::func_0205dbf8(u32 i, u32 j, void *v) { unk_190[i][j] = v; }
Unk_020dbe24 *Unk_0205dbb8::func_0205dbe8(u32 i, u32 j) { return &unk_10[i][j]; }
Unk_020e45ec *Unk_0205dbb8::func_0205dbd8(u32 i, u32 j) { return &unk_b0[i][j]; }
s32 Unk_0205dbb8::func_0205dbc8(u32 i, u32 j) { return unk_1b0[i][j]; }
void Unk_0205dbb8::func_0205dbb8(u32 i, u32 j, u32 v) { unk_1b0[i][j] = v; }

extern "C" void func_0205dbb0(u8 *p) {
    *p = 4;
}
extern "C" void func_0205dbac() {}
extern "C" void func_0205dba8(u8 *p, u8 v) {
    *p = v;
}

extern "C" void func_0205db70(u8 *p) {
    func_0205db04(p);
    func_0205d834(p, 0, 0);
    func_0205d834(p, 1, 0);
    func_0205d7d8(p, 0, 0x9e);
    func_0205d7d8(p, 1, 0x9e);
}

extern "C" void func_0205db04(u8 *p) {
    if (Unk_0205d4e4_IsOne(func_0205d80c(p, 0)->unk_0d)) {
        func_0205d80c(p, 0)->func_020b89c8();
    } else {
        func_0205d80c(p, 0)->func_020b8b08();
    }
    if (Unk_0205d4e4_IsOne(func_0205d80c(p, 1)->unk_0d)) {
        func_0205d80c(p, 1)->func_020b89c8();
    } else {
        func_0205d80c(p, 1)->func_020b8b08();
    }
}

extern "C" s32 func_0205da08(u8 *p, s32 a, s32 b, u16 *c, s32 d) {
    void *buf = func_0205d868(p);
    s32 sz = func_0205ddc0();
    s32 r4 = func_020641b4(func_0205df38(a), buf, sz);
    s32 res = 0;
    if (r4 != 0) {
        r4 = (r4 + 3) & ~3;
        func_0205d834(p, res, buf);
        func_0205d7d8(p, 0, a);
        func_0205d7d8(p, 1, b);
        if (b < 0x9e) {
            buf = (u8 *)buf + r4;
            sz -= r4;
            res = func_020641b4(func_0205df38(b), buf, sz);
            if (res != 0) {
                func_0205d834(p, 1, buf);
                if (Unk_0205da08_InRange(c)) {
                    void *x = func_0205cdbc();
                    _ZN12Unk_0205ca9413func_0205ca94EPtiii(x, c, d, 0, 0);
                    void *m = NNS_G3dGetTex((void *)func_0205c91c(x));
                    void *n = NNS_G3dGetTex(buf);
                    func_02063a5c(m, n, (void *)"cloth", (void *)"myD");
                    func_02063a1c(m, n, (void *)"cloth", (void *)"myD");
                }
            } else {
                func_0205d7d8(p, 1, 0x9e);
            }
        }
    }
    return r4 + res;
}

extern "C" void func_0205d934(u8 *p) {
    void *q = NNS_G3dGetTex(func_0205d854(p, 0));
    Unk_020dbe24 *d0 = func_0205d820(p, 0);
    d0->func_02055210(q);
    if (func_0205d7f8(p, 1) < 0x9e) {
        void *src = func_0205d854(p, 1);
        if (src) {
            s32 a = NNS_G3dTexGetRequiredSize(q);
            s32 b = NNS_G3dTex4x4GetRequiredSize(q);
            s32 c = NNS_G3dPlttGetRequiredSize(q);
            void *q2 = NNS_G3dGetTex(src);
            s32 e = NNS_G3dTexGetRequiredSize(q2);
            s32 f = NNS_G3dTex4x4GetRequiredSize(q2);
            s32 g = NNS_G3dPlttGetRequiredSize(q2);
            Unk_020dbe24 *d1 = func_0205d820(p, 1);
            u32 x = d0->func_020552ec(d0->func_02055334(a), e);
            u32 y = d0->func_020552d8(d0->func_02055328(b), f);
            u32 z = d0->func_0205526c(d0->func_02055300(c), g);
            d1->func_020551f4(x, y, z);
            d1->func_02055210(q2);
        }
    }
}

extern "C" BOOL func_0205d87c(u8 *p) {
    BOOL r6 = FALSE, r4 = FALSE;
    Unk_020e45ec *o = func_0205d80c(p, r6);
    u8 st = o->unk_0d;
    if (Unk_0205d4e4_IsTwo(st)) {
        r6 = TRUE;
    } else if (!Unk_0205d4e4_IsOne(st)) {
        o->func_020b89f0((u32 *)NNS_G3dGetTex(func_0205d854(p, 0)), 1);
    }
    if (func_0205d7f8(p, 1) < 0x9e) {
        void *d = func_0205d854(p, 1);
        Unk_020e45ec *o2 = func_0205d80c(p, 1);
        u8 st2 = o2->unk_0d;
        if (Unk_0205d4e4_IsTwo(st2)) {
            r4 = TRUE;
        } else if (!Unk_0205d4e4_IsOne(st2)) {
            o2->func_020b89f0((u32 *)NNS_G3dGetTex(d), 1);
        }
    } else {
        r4 = TRUE;
    }
    if (r6 && r4) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void *func_0205d868(u8 *p) {
    return MGR->func_0205dc20(*p);
}
extern "C" void *func_0205d854(u8 *p, s32 j) {
    return MGR->func_0205dc0c(*p, j);
}
extern "C" void func_0205d834(u8 *p, s32 j, void *v) {
    MGR->func_0205dbf8(*p, j, v);
}
extern "C" Unk_020dbe24 *func_0205d820(u8 *p, s32 j) {
    return MGR->func_0205dbe8(*p, j);
}
extern "C" Unk_020e45ec *func_0205d80c(u8 *p, s32 j) {
    return MGR->func_0205dbd8(*p, j);
}
extern "C" s32 func_0205d7f8(u8 *p, s32 j) {
    return MGR->func_0205dbc8(*p, j);
}
extern "C" void func_0205d7d8(u8 *p, s32 j, u32 v) {
    MGR->func_0205dbb8(*p, j, v);
}
