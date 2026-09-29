#include "types.h"

extern "C" {
void *func_020e8628(void *heap, s32 size, s32 align);
void func_020e877c(void *p);
void func_020e885c(void *p);
void *func_0210629c(void *h);
s32 func_020639e8(char *buf, const char *fmt, ...);
s32 func_020641b4(const char *path, void *buf, s32 size);
s32 func_0205be04();
s32 func_0205be20();
s32 func_0205bc60();
s32 func_0205bc7c();
void func_0205d3a8(u32 *arr);
void func_0205ca94(void *, void *, s32, s32, s32);
void *func_0205cdbc();
s32 func_0205c91c(void *);
void func_02063a1c(void *, void *, void *, void *);
void func_02063a5c(void *, void *, void *, void *);
s32 func_02103d3c(void *p);
s32 func_02103d30(void *p);
s32 func_02103c34(void *p);
char *func_0205d778(s32 x);
char *func_0205df38(s32 x);
s32 func_0205ddc0();
extern void *data_021c61d8;
extern void *data_021c61c4;
extern void *data_021c61cc;
extern u8 *data_020cbb18;
extern u32 data_021c650c[];
extern char data_021c651c[];
extern char data_021c653c[];
extern char data_021c6630[];
extern char data_020dc3fc[];
extern char data_020dc410[];
extern char data_020dc424[];
extern char data_020dc42c[];
extern char data_020dc430[];
extern u8 data_020cb364[];
extern u8 data_020cb370[];
s32 func_0205d418();
s32 func_0205d748();
s32 func_0205d74c();
s32 func_0205d750();
s32 func_0205d770();
s32 func_0205ddb0();
s32 func_0205ddb4();
s32 func_0205ddb8();
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

class Unk_0205d5e4 {
public:
    void *unk_00[4];
    Unk_020dbe24 unk_10[4];
    Unk_020e45ec unk_60[4];
    u8 unk_d0[4];

    Unk_0205d5e4();
    ~Unk_0205d5e4();
    void func_0205d5e4(u32 i, u32 v);
    u8 func_0205d5ec(u32 i);
    Unk_020e45ec *func_0205d5f4(u32 i);
    Unk_020dbe24 *func_0205d600(u32 i);
    void *func_0205d60c(u32 i);
    void func_0205d614(void);
    void func_0205d668(void);
};

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


static inline BOOL Unk_0205da08_InRange(u16 *p) {
    BOOL r = FALSE;
    if (*p >= 0x1429 && *p <= 0x1430) {
        r = TRUE;
    }
    return r;
}

extern "C" {
extern Unk_0205d5e4 data_021c6550;
void func_0205d7d8(u8 *p, s32 j, u32 v);
void func_0205d834(u8 *p, s32 j, void *v);
void *func_0205d868(u8 *p);

s32 func_0205da08(u8 *p, s32 a, s32 b, u16 *c, s32 d) {
    volatile s32 rem;
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
            rem = sz - r4;
            res = func_020641b4(func_0205df38(b), buf, rem);
            if (res != 0) {
                func_0205d834(p, 1, buf);
                if (Unk_0205da08_InRange(c)) {
                    void *x = func_0205cdbc();
                    func_0205ca94(x, c, d, 0, 0);
                    void *m = func_0210629c((void *)func_0205c91c(x));
                    void *n = func_0210629c(buf);
                    func_02063a5c(m, n, data_020dc424, data_020dc42c);
                    func_02063a1c(m, n, data_020dc424, data_020dc42c);
                }
            } else {
                func_0205d7d8(p, 1, 0x9e);
            }
        }
    }
    return r4 + res;
}


extern Unk_0205dbb8 data_021c6644;

void func_0205d3d0(u32 *arr) {
    void *heap = data_021c61d8;
    u32 n = *(u8 *)(data_020cbb18 + 0x6c);
    u32 i;
    for (i = 0; i < n; i++) {
        arr[i] = (u32)func_020e8628(heap, func_0205d418(), 4);
    }
}

void func_0205d410() {}
void func_0205d414() {}

char *func_0205d420(u32 x) {
    func_020639e8(data_021c651c, data_020dc3fc, x >> 5, x);
    return data_021c651c;
}

void func_0205d440() {
    func_0205d3a8(data_021c650c);
    func_0205be04();
}

void func_0205d458() {
    func_0205be20();
    func_0205d3d0(data_021c650c);
    if (data_021c61d8) {
        func_020e877c(data_021c61d8);
    }
}

void func_0205d480(u8 *p, s32 v) {
    data_021c6550.func_0205d5e4(*p, v);
}
u8 func_0205d494(u8 *p) {
    return data_021c6550.func_0205d5ec(*p);
}
Unk_020e45ec *func_0205d4a8(u8 *p) {
    return data_021c6550.func_0205d5f4(*p);
}
Unk_020dbe24 *func_0205d4bc(u8 *p) {
    return data_021c6550.func_0205d600(*p);
}
void *func_0205d4d0(u8 *p) {
    return data_021c6550.func_0205d60c(*p);
}

BOOL func_0205d4e4(u8 *p) {
    Unk_020e45ec *o = func_0205d4a8(p);
    u8 st = o->unk_0d;
    if (Unk_0205d4e4_IsTwo(st)) {
        return TRUE;
    }
    if (!Unk_0205d4e4_IsOne(st)) {
        o->func_020b89f0((u32 *)func_0210629c(func_0205d4d0(p)), 1);
    }
    return FALSE;
}

void func_0205d530(u8 *p) {
    void *q = func_0210629c(func_0205d4d0(p));
    func_0205d4bc(p)->func_02055210(q);
}

void func_0205d554(u8 *p, s32 idx) {
    void *r6 = func_0205d4d0(p);
    func_0205d480(p, idx);
    if (idx < 0x4b) {
        char *path = func_0205d778(idx);
        func_020641b4(path, r6, func_0205d770());
    }
}

void func_0205d588(u8 *p) {
    if (Unk_0205d4e4_IsOne(func_0205d4a8(p)->unk_0d)) {
        func_0205d4a8(p)->func_020b89c8();
    } else {
        func_0205d4a8(p)->func_020b8b08();
    }
}

void func_0205d5bc(u8 *p) {
    func_0205d588(p);
    func_0205d480(p, 0x4b);
}

void func_0205d5d4(u8 *p, u8 v) {
    *p = v;
}
void func_0205d5d8() {}
void func_0205d5dc(u8 *p) {
    *p = 4;
}

u8 func_0205d758(u32 i) {
    return data_020cb364[i];
}
u8 func_0205d764(u32 i) {
    return data_020cb370[i];
}

char *func_0205d778(s32 x) {
    func_020639e8(data_021c653c, data_020dc410, (u32)x >> 5, x);
    return data_021c653c;
}

void func_0205d798() {
    data_021c6550.func_0205d614();
    func_0205bc60();
}

void func_0205d7b0() {
    func_0205bc7c();
    data_021c6550.func_0205d668();
    if (data_021c61c4) {
        func_020e877c(data_021c61c4);
    }
}

void func_0205d7d8(u8 *p, s32 j, u32 v) {
    data_021c6644.func_0205dbb8(*p, j, v);
}
s32 func_0205d7f8(u8 *p, s32 j) {
    return data_021c6644.func_0205dbc8(*p, j);
}
Unk_020e45ec *func_0205d80c(u8 *p, s32 j) {
    return data_021c6644.func_0205dbd8(*p, j);
}
Unk_020dbe24 *func_0205d820(u8 *p, s32 j) {
    return data_021c6644.func_0205dbe8(*p, j);
}
void func_0205d834(u8 *p, s32 j, void *v) {
    data_021c6644.func_0205dbf8(*p, j, v);
}
void *func_0205d854(u8 *p, s32 j) {
    return data_021c6644.func_0205dc0c(*p, j);
}
void *func_0205d868(u8 *p) {
    return data_021c6644.func_0205dc20(*p);
}

BOOL func_0205d87c(u8 *p) {
    BOOL r6 = FALSE, r4 = FALSE;
    Unk_020e45ec *o = func_0205d80c(p, r6);
    u8 st = o->unk_0d;
    if (Unk_0205d4e4_IsTwo(st)) {
        r6 = TRUE;
    } else if (!Unk_0205d4e4_IsOne(st)) {
        o->func_020b89f0((u32 *)func_0210629c(func_0205d854(p, 0)), 1);
    }
    if (func_0205d7f8(p, 1) < 0x9e) {
        void *d = func_0205d854(p, 1);
        Unk_020e45ec *o2 = func_0205d80c(p, 1);
        u8 st2 = o2->unk_0d;
        if (Unk_0205d4e4_IsTwo(st2)) {
            r4 = TRUE;
        } else if (!Unk_0205d4e4_IsOne(st2)) {
            o2->func_020b89f0((u32 *)func_0210629c(d), 1);
        }
    } else {
        r4 = TRUE;
    }
    if (r6 && r4) {
        return TRUE;
    }
    return FALSE;
}

void func_0205d934(u8 *p) {
    void *q = func_0210629c(func_0205d854(p, 0));
    Unk_020dbe24 *d0 = func_0205d820(p, 0);
    d0->func_02055210(q);
    if (func_0205d7f8(p, 1) < 0x9e) {
        void *src = func_0205d854(p, 1);
        if (src) {
            s32 a = func_02103d3c(q);
            s32 b = func_02103d30(q);
            s32 c = func_02103c34(q);
            void *q2 = func_0210629c(src);
            s32 e = func_02103d3c(q2);
            s32 f = func_02103d30(q2);
            s32 g = func_02103c34(q2);
            Unk_020dbe24 *d1 = func_0205d820(p, 1);
            u32 x = d0->func_020552ec(d0->func_02055334(a), e);
            u32 y = d0->func_020552d8(d0->func_02055328(b), f);
            u32 z = d0->func_0205526c(d0->func_02055300(c), g);
            d1->func_020551f4(x, y, z);
            d1->func_02055210(q2);
        }
    }
}

void func_0205db04(u8 *p) {
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

void func_0205db70(u8 *p) {
    func_0205db04(p);
    func_0205d834(p, 0, 0);
    func_0205d834(p, 1, 0);
    func_0205d7d8(p, 0, 0x9e);
    func_0205d7d8(p, 1, 0x9e);
}

void func_0205dba8(u8 *p, u8 v) {
    *p = v;
}
void func_0205dbac() {}
void func_0205dbb0(u8 *p) {
    *p = 4;
}

s32 func_0205d418() { return 0x2e30; }
s32 func_0205d748() { return 0x60; }
s32 func_0205d74c() { return 0; }
s32 func_0205d750() { return 0x600; }
s32 func_0205d770() { return 0xc74; }
s32 func_0205ddb0() { return 0xc0; }
s32 func_0205ddb4() { return 0; }
s32 func_0205ddb8() { return 0x1220; }
s32 func_0205ddc0() { return 0x2864; }
}

void Unk_0205d5e4::func_0205d5e4(u32 i, u32 v) { unk_d0[i] = v; }
u8 Unk_0205d5e4::func_0205d5ec(u32 i) { return unk_d0[i]; }
Unk_020e45ec *Unk_0205d5e4::func_0205d5f4(u32 i) { return &unk_60[i]; }
Unk_020dbe24 *Unk_0205d5e4::func_0205d600(u32 i) { return &unk_10[i]; }
void *Unk_0205d5e4::func_0205d60c(u32 i) { return unk_00[i]; }

void Unk_0205d5e4::func_0205d614(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        unk_10[i].func_02055200();
    }
    for (i = 0; i < 4; i++) {
        unk_00[i] = NULL;
    }
    if (data_021c61c4) {
        func_020e885c(data_021c61c4);
    }
    for (i = 0; i < 4; i++) {
        unk_d0[i] = 0x4b;
    }
}

void Unk_0205d5e4::func_0205d668(void) {
    u32 n = *(u8 *)(data_020cbb18 + 0x6c);
    u32 i;
    for (i = 0; i < n; i++) {
        unk_10[i].func_02055340((void *)func_0205d750(), (void *)func_0205d74c(), (void *)func_0205d748());
    }
    void *heap = data_021c61c4;
    for (i = 0; i < n; i++) {
        unk_00[i] = func_020e8628(heap, func_0205d770(), 4);
    }
}

Unk_0205d5e4::~Unk_0205d5e4() {}

Unk_0205d5e4::Unk_0205d5e4() {
    s32 i;
    for (i = 0; i < 4; i++) {
        unk_00[i] = NULL;
        unk_d0[i] = 0x4b;
    }
}

void Unk_0205dbb8::func_0205dbb8(u32 i, u32 j, u32 v) { unk_1b0[i][j] = v; }
s32 Unk_0205dbb8::func_0205dbc8(u32 i, u32 j) { return unk_1b0[i][j]; }
Unk_020e45ec *Unk_0205dbb8::func_0205dbd8(u32 i, u32 j) { return &unk_b0[i][j]; }
Unk_020dbe24 *Unk_0205dbb8::func_0205dbe8(u32 i, u32 j) { return &unk_10[i][j]; }
void Unk_0205dbb8::func_0205dbf8(u32 i, u32 j, void *v) { unk_190[i][j] = v; }
void *Unk_0205dbb8::func_0205dc0c(u32 i, u32 j) { return unk_190[i][j]; }
void *Unk_0205dbb8::func_0205dc20(u32 i) { return unk_00[i]; }

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
        func_020e885c(data_021c61cc);
    }
    for (i = 0; i < 4; i++) {
        unk_1b0[i][0] = 0x9e;
        unk_1b0[i][1] = 0x9e;
    }
}

void Unk_0205dbb8::func_0205dcac(void) {
    u32 n = *(u8 *)(data_020cbb18 + 0x6c);
    u32 i;
    for (i = 0; i < n; i++) {
        unk_10[i][0].func_02055340((void *)func_0205ddb8(), (void *)func_0205ddb4(), (void *)func_0205ddb0());
    }
    void *heap = data_021c61cc;
    for (i = 0; i < n; i++) {
        unk_00[i] = func_020e8628(heap, func_0205ddc0(), 4);
    }
}
