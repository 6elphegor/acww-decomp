// mwcc-version: 1.2/sp2
#include "types.h"

extern "C" {
void *func_020641ec(void *a, void *heap, s32 b, s32 c);
void *func_021062dc(void *h);
void *func_0210629c(void *h);
void *func_020e8608(void *heap, u32 size);
void func_020e85fc(void *heap, void *p);
void func_021039ec(void *a, void *b);
void func_02103830(void *a, void *b);
void func_02103978(void *a, void *b, s32 c, s32 d);
void func_021037b4(void *a, void *b, s32 c, void *d);
void *func_020558bc(void *a, u32 tag);
void *func_02055928(void *a, void *b);
void *func_0205598c(void *a);
void func_02055724(void *a, void *b);
void *func_020716cc(void);
void *func_020716e8(void *a, void *b, void *c);
void *func_0205588c(void *a, void *b);
s32 func_02103d3c(void *p);
s32 func_02103d30(void *p);
s32 func_02103c34(void *p);
void func_02103d1c(void *p, s32 a, s32 b);
void func_02103c2c(void *p, s32 a);
extern void *data_021f482c;
s32 func_02105dcc(void *a, void *b, s32 c, s32 d);
void *func_021041e8(void);
void func_01ffb94c(void *a, void *b, void *c);
typedef u32 (*Unk_02055340_Fn)(void *, s32, s32);
extern Unk_02055340_Fn data_0213bc10;
extern Unk_02055340_Fn data_0213bc18;
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
};

struct Unk_02054584_Data {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u8 pad_0c[0x1c];
    u8 unk_28[0x24];
    s32 unk_4c;
    s32 unk_50;
    s32 unk_54;
};

struct Unk_02054628_Obj {
    u8 *unk_00;
    u8 pad_04[0xb0];
    Unk_02054584_Data *unk_b4;
    u8 pad_b8[0x1c];
    u8 *unk_d4;
};

struct Unk_02054778_Info {
    u32 unk_00;
    u16 unk_04;
    u16 pad_06;
    u32 unk_08;
};

class Unk_02055704 {
public:
    Unk_02055704();
    virtual ~Unk_02055704();
    u32 unk_04;
    u32 unk_08;
    u8 *unk_0c;
    u8 pad_10[8];
    Unk_02054584_Data *unk_18;
    s32 unk_1c;
    Unk_02054584_Data *unk_20;
    u8 pad_24[0x18];
    void *unk_3c;
    u8 pad_40[0x1c];
    void *unk_5c;
    u8 pad_60[0x34];
    void *unk_94;

    BOOL func_020555dc(void);
    void func_0205562c(void);
};

class Unk_020dbd34 : public Unk_02055704 {
public:
    Unk_020dbd34();
    virtual ~Unk_020dbd34();
    u32 unk_98;
    BOOL func_02054b14(void);
    BOOL func_02054b38(void *heap);
    void func_02054b70(void *a);
    BOOL func_02054bac(void *a, void *b, void *c);
    BOOL func_02054c2c(void *a, void *b);
    BOOL func_02054c64(void *res, void *name, void *tex, void *d, u32 *e, s32 f);
    BOOL func_02054c88(void *res, void *name);
    BOOL func_02054c9c(void *res, void *name, void *tex, void *d, u32 *e, s32 f, u32 tag);
    BOOL func_02054d58(void *res, void *name, u32 tag);
};

class Unk_020dbe7c {
public:
    virtual ~Unk_020dbe7c();
    inline Unk_020dbe7c() : unk_a4(0), unk_a8(0), unk_ac(0x1000) {}
    u32 unk_a0;
    s32 unk_a4;
    s32 unk_a8;
    s32 unk_ac;
    u32 unk_b0;
};

class Unk_020dbe7c_Sub {
public:
    Unk_020dbe7c_Sub();
    virtual ~Unk_020dbe7c_Sub();
    u8 unk_bc[0x18];
    u8 *unk_d4;
    u8 unk_d8[0x14];
    u32 unk_ec;
    s32 unk_f0;
};

class Unk_020dbd54 : public Unk_020dbd34, public Unk_020dbe7c {
public:
    Unk_020dbd54();
    virtual ~Unk_020dbd54();
    Unk_02054584_Data *unk_b4;

    void func_0205468c();
    void func_020546c8();
    void func_020546ec();
    s32 func_02054710();
    void func_020547a4(s32 v);
    s32 func_020547cc(void *q);
    void func_020547e4();
    BOOL func_02054800(void *x);
};

class Unk_0205454c : public Unk_020dbd54, public Unk_020dbe7c_Sub {
public:
    Unk_0205454c();
    virtual ~Unk_0205454c();

    void func_0205436c(s32 a, s32 b, s32 c, s32 d, u16 e, u16 f);
    void func_0205439c();
    void func_020543b4(Unk_0205454c *x);
    void func_020543d4(Unk_0205454c *x);
    void func_02054420(Unk_0205454c *x);
    void func_02054440(Unk_0205454c *x);
    Unk_02054584_Data *func_02054584();
    u32 func_0205458c();
    void func_02054720(s32 a, s32 b, s32 c, u16 d, u16 e);
};

class Unk_020dbda4 : public Unk_0205454c {
public:
    Unk_020dbda4();
    virtual ~Unk_020dbda4();
    u32 unk_f4;
    Unk_020dbe7c unk_f8;
    Unk_020dbe7c_Sub unk_110;
    s32 unk_14c;
    s32 unk_150;
};


class Unk_020dbd44 {
public:
    u32 unk_04;
    u32 unk_08;
    Unk_020dbd44();
    virtual ~Unk_020dbd44();
};

Unk_020dbd44::Unk_020dbd44() : unk_04(0), unk_08(0) {}
Unk_020dbd44::~Unk_020dbd44() {}

Unk_020dbd34::Unk_020dbd34() : unk_98(0x4e554c4c) {}
Unk_020dbd34::~Unk_020dbd34() {}

BOOL Unk_020dbd34::func_02054b14(void) {
    BOOL r = TRUE;
    r &= func_020555dc();
    unk_98 = 0x4e554c4c;
    return r;
}

BOOL Unk_020dbd34::func_02054b38(void *heap) {
    u32 size = unk_0c[0x17] * 0x58;
    if (heap == NULL) {
        heap = data_021f482c;
    }
    void *p = func_020e8608(heap, size);
    if (p == NULL) {
        return FALSE;
    }
    unk_3c = p;
    unk_08 |= 1;
    return TRUE;
}

static inline u8 *Unk_02054b70_Off(u8 *p) {
    return p + *(u32 *)(p + *(u16 *)(p + 0xe) + 0xc);
}

void Unk_020dbd34::func_02054b70(void *a) {
    u8 *p = Unk_02054b70_Off((u8 *)func_021062dc(a));
    void *q = func_0210629c(a);
    unk_5c = p;
    func_021039ec(unk_5c, q);
    func_02103830(unk_5c, q);
    func_0205562c();
}

BOOL Unk_020dbd34::func_02054bac(void *a, void *b, void *c) {
    void *heap = data_021f482c;
    void *h = func_020641ec(a, heap, -4, 0);
    if (h == NULL) {
        return FALSE;
    }
    u8 *p = Unk_02054b70_Off((u8 *)func_021062dc(h));
    unk_5c = func_020558bc(p, 0x4e554c4c);
    void *r = func_020716e8(func_020716cc(), b, c);
    func_02103978(unk_5c, r, 0, 0);
    func_021037b4(unk_5c, r, 0, 0);
    func_020e85fc(heap, h);
    func_0205562c();
    return TRUE;
}

BOOL Unk_020dbd34::func_02054c2c(void *a, void *b) {
    unk_5c = func_0205598c(a);
    if (unk_5c != NULL) {
        func_0205562c();
        return TRUE;
    }
    unk_98 = (u32)a;
    return func_02054d58(b, NULL, (u32)a);
}

BOOL Unk_020dbd34::func_02054c64(void *res, void *name, void *tex, void *d, u32 *e, s32 f) {
    return func_02054c9c(res, name, tex, d, e, f, 0x4e554c4c);
}

BOOL Unk_020dbd34::func_02054c88(void *res, void *name) {
    return func_02054d58(res, name, 0x4e554c4c);
}

BOOL Unk_020dbd34::func_02054c9c(void *res, void *name, void *tex, void *d, u32 *e, s32 f, u32 tag) {
    void *heap = data_021f482c;
    void *h = func_020641ec(res, heap, -4, 0);
    if (h == NULL) {
        return FALSE;
    }
    u8 *p = Unk_02054b70_Off((u8 *)func_021062dc(h));
    if (name != NULL) {
        unk_5c = func_02055928(p, name);
    } else {
        unk_5c = func_020558bc(p, tag);
    }
    if (tex != NULL) {
        func_021039ec(unk_5c, tex);
    } else {
        void *q = func_0210629c(h);
        if (q != NULL) {
            func_02055724(q, unk_94);
            func_021039ec(unk_5c, q);
        }
    }
    if (d != NULL) {
        s32 i;
        for (i = 0; i < f; i++) {
            func_021037b4(unk_5c, d, i, (void *)e[i]);
        }
    }
    func_020e85fc(heap, h);
    func_0205562c();
    return TRUE;
}

BOOL Unk_020dbd34::func_02054d58(void *res, void *name, u32 tag) {
    void *heap = data_021f482c;
    void *h = func_020641ec(res, heap, -4, 0);
    if (h == NULL) {
        return FALSE;
    }
    u8 *p = Unk_02054b70_Off((u8 *)func_021062dc(h));
    void *q = func_0210629c(h);
    if (name != NULL) {
        unk_5c = func_02055928(p, name);
    } else {
        unk_5c = func_020558bc(p, tag);
    }
    if (q != NULL) {
        func_02055724(q, unk_94);
        func_021039ec(unk_5c, q);
        func_02103830(unk_5c, q);
    }
    func_020e85fc(heap, h);
    func_0205562c();
    return TRUE;
}

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

class Unk_020dbe04 {
public:
    u32 unk_04;
    void *unk_08;
    void *unk_0c;
    void *unk_10;
    Unk_020e45ec unk_14;
    u8 unk_30;
    u8 unk_31;

    Unk_020dbe04();
    virtual ~Unk_020dbe04();
    u32 func_02055014(void *a, Unk_020dbe24 *b, void *c);
    u32 func_02055090(void *res, Unk_020dbe24 *b, void *tex, void *heap);
    void func_0205516c(void);
    void *func_0205500c(void);
    void *func_02055010(void);
};

static inline BOOL Unk_02055014_IsTwo(u8 v) {
    return v == 2 ? TRUE : FALSE;
}

u32 Unk_020dbe04::func_02055014(void *a, Unk_020dbe24 *b, void *c) {
    u32 st = unk_30;
    if (st == 3) {
        return st;
    }
    if (st == 0) {
        b->func_02055210(a);
        unk_14.func_020b89f0((u32 *)a, 1);
        unk_30 = 1;
        return unk_30;
    }
    if (st == 1) {
        if (!Unk_02055014_IsTwo(unk_14.unk_0d)) {
            return st;
        }
        unk_30 = 2;
    }
    if (unk_30 == 2) {
        unk_10 = func_0205588c(a, c);
        unk_30 = 3;
    }
    return unk_30;
}

u32 Unk_020dbe04::func_02055090(void *res, Unk_020dbe24 *b, void *tex, void *heap) {
    u32 st = unk_30;
    if (st == 3) {
        return st;
    }
    if (heap == NULL) {
        heap = data_021f482c;
    }
    if (st == 0) {
        unk_04 = (u32)func_020641ec(res, heap, -4, 0);
        unk_08 = heap;
        void *q = func_0210629c((void *)unk_04);
        b->func_02055210(q);
        unk_14.func_020b89f0((u32 *)q, 1);
        unk_30 = 1;
        return unk_30;
    }
    if (st == 1) {
        if (!Unk_02055014_IsTwo(unk_14.unk_0d)) {
            return st;
        }
        unk_30 = 2;
    }
    if (unk_30 == 2) {
        u8 *p = Unk_02054b70_Off((u8 *)func_021062dc((void *)unk_04));
        unk_0c = func_02055928(p, tex);
        void *q = func_0210629c((void *)unk_04);
        func_021039ec(unk_0c, q);
        func_02103830(unk_0c, q);
        func_020e85fc(unk_08, (void *)unk_04);
        unk_08 = NULL;
        unk_04 = 0;
        unk_30 = 3;
    }
    return unk_30;
}

void Unk_020dbe04::func_0205516c(void) {
    if (unk_04 != 0) {
        func_020e85fc(unk_08, (void *)unk_04);
    }
    unk_04 = 0;
    unk_08 = NULL;
    unk_0c = NULL;
    unk_10 = NULL;
    unk_30 = 0;
    unk_14.func_020b89c8();
}

void *Unk_020dbe04::func_0205500c(void) {
    return unk_10;
}

void *Unk_020dbe04::func_02055010(void) {
    return unk_0c;
}

Unk_020dbe04::~Unk_020dbe04() {}

Unk_020dbe04::Unk_020dbe04() {
    unk_04 = 0;
    unk_08 = NULL;
    unk_0c = NULL;
    unk_10 = NULL;
    unk_30 = 0;
    unk_31 = 0;
}

Unk_020dbe24::~Unk_020dbe24() {}

Unk_020dbe24::Unk_020dbe24() {
    func_02055200();
}

void Unk_020dbe24::func_020551f4(u32 a, u32 b, u32 c) {
    unk_04 = a;
    unk_08 = b;
    unk_0c = c;
    unk_11 = 1;
}

void Unk_020dbe24::func_02055200(void) {
    unk_04 = 0;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_11 = 0;
}

void Unk_020dbe24::func_02055210(void *p) {
    s32 a = func_02103d3c(p);
    s32 b = func_02103d30(p);
    s32 c = func_02103c34(p);
    s32 x = func_02055334(a);
    s32 y = func_02055328(b);
    s32 z = func_02055300(c);
    func_02103d1c(p, x, y);
    func_02103c2c(p, z);
    unk_10 = 1;
}

u32 Unk_020dbe24::func_020552d8(u32 a, u32 b) {
    return func_02055298(b, unk_08, a);
}

u32 Unk_020dbe24::func_020552ec(u32 a, u32 b) {
    return func_02055298(b, unk_04, a);
}

u32 Unk_020dbe24::func_0205526c(u32 a, u32 b) {
    u32 v = (unk_0c & 0xffff) << 3;
    v += ((a & 0xffff0000) >> 16) << 3;
    u32 r = (b >> 3) << 16;
    return r | ((v >> 3) & 0xffff);
}

u32 Unk_020dbe24::func_02055298(u32 a, u32 b, u32 c) {
    u32 v = (b & 0xffff) << 3;
    v += ((c & 0x7fff0000) >> 16) << 4;
    u32 top = (c & 0x80000000) >> 31;
    top <<= 31;
    u32 r = (a >> 4) << 16;
    return top | (r | ((v >> 3) & 0xffff));
}

u32 Unk_020dbe24::func_02055300(u32 a) {
    return (unk_0c & 0xffff) | ((a >> 3) << 16);
}

u32 Unk_020dbe24::func_02055314(u32 a, u32 b) {
    return (b & 0x8000ffff) | ((a >> 4) << 16);
}

u32 Unk_020dbe24::func_02055328(u32 a) {
    return func_02055314(a, unk_08);
}

u32 Unk_020dbe24::func_02055334(u32 a) {
    return func_02055314(a, unk_04);
}

void Unk_020dbe24::func_02055340(void *a, void *b, void *c) {
    if (a != NULL) {
        unk_04 = data_0213bc10(a, 0, 0);
    }
    if (b != NULL) {
        unk_08 = data_0213bc10(b, 1, 0);
    }
    if (c != NULL) {
        unk_0c = data_0213bc18(c, 0, 0);
    }
    unk_10 = 1;
}

extern "C" BOOL func_020553cc(u8 *p, void *a, s32 b) {
    if (!func_02105dcc(p + 8, a, 0, b)) {
        return FALSE;
    }
    func_01ffb94c(a, func_021041e8(), a);
    return TRUE;
}

// Adjuster-thunk hosts (Unk_020dbd54, Unk_0205454c, Unk_020dbda4 come from the r139 hierarchy).
class Unk_020dbd74 : public Unk_020dbd34, public Unk_020dbe7c, public Unk_020dbe7c_Sub {
public:
    Unk_020dbd74();
    virtual ~Unk_020dbd74();
};
Unk_020dbd74::~Unk_020dbd74() {}
Unk_020dbd54::~Unk_020dbd54() {}
Unk_0205454c::~Unk_0205454c() {}
Unk_020dbda4::~Unk_020dbda4() {}

void Unk_test_thunks() {
    Unk_020dbd54 a;
    Unk_0205454c b;
    Unk_020dbda4 c;
    Unk_020dbd74 d;
}
