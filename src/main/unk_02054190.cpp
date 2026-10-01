// mwcc-version: 1.2/sp2
#include "types.h"

inline void *operator new(unsigned long, void *p) { return p; }

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
    u8 pad_0c[0xc];
    Unk_02054584_Data *unk_18;
    s32 unk_1c;
    Unk_02054584_Data *unk_20;
    u8 pad_24[0x18];
    s32 unk_3c;
    u8 pad_40[0x1c];
    void *unk_5c;
    u8 pad_60[0x38];
};

class Unk_020dbd34 : public Unk_02055704 {
public:
    Unk_020dbd34();
    virtual ~Unk_020dbd34();
    u32 unk_98;
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

struct Unk_02054970_Table {
    u32 unk_00;
    u32 unk_04;
    Unk_020dbd34 *unk_08;
    u8 *unk_0c;
};

extern "C" {
void func_01ffb448(void *p);
s32 func_01ffcc10(void);
void func_02056520(void *p, s32 v);
void func_02056544(void *p);
void func_02056160(void *p, void *q);
void func_020561d8(void *p, void *q);
void func_0205668c(void *p, u32 a, s32 b, s32 c, u32 d);
void func_020566bc(void *p);
void func_02104000(void *a, s32 b, void *c, s32 d);
void func_02103d64(void *a, void *b);
void func_02103e40(void *a, void *b);
void func_0205553c(void *p, void *q);
void *func_02055c08(void *a, void *b, void *c);
extern u8 data_020dbd28[];
void func_0206fde4(u32 v);
void func_0206fe0c(u32 v);
void func_0206fd10(void *a, void *b, void *c);
void func_0206fd84(void *a);
void func_0206fd64(void *a);
void func_0206fdb4(void *a, void *b);
BOOL func_02054b14(void *p);
s32 func_0212a190(void *a, void *b);
void *func_020641ec(void *a, void *b, s32 c, s32 d);
extern void *data_021f482c;
extern void *data_021c6214;
void *func_021062dc(void *p);
void *func_0210629c(void *p);
void *func_020e8608(void *heap, u32 size);
void func_020e85fc(void *heap, void *p);
void func_02116048(void *src, void *dst, u32 size);
void func_02055724(void *a, s32 b);
void *func_0205588c(void *a, void *heap);
void *func_02055928(void *a, void *heap);
void func_02055600(void *a, void *b, void *c);
}

Unk_020dbda4::~Unk_020dbda4() {}

Unk_020dbda4::Unk_020dbda4()
{
    unk_f4 = 0;
    unk_14c = 0;
    unk_150 = 0;
}

void Unk_0205454c::func_0205436c(s32 a, s32 b, s32 c, s32 d, u16 e, u16 f)
{
    Unk_020dbe7c_Sub &r = *this;
    func_02056520(&r, b);
    func_02054720(a, c, d, e, f);
}

void Unk_0205454c::func_0205439c()
{
    Unk_020dbe7c_Sub &r = *this;
    func_02056544(&r);
    func_020547e4();
}

void Unk_0205454c::func_020543b4(Unk_0205454c *x)
{
    if (func_01ffcc10() == 0) {
        func_020543d4(x);
    }
}

void Unk_0205454c::func_020543d4(Unk_0205454c *x)
{
    Unk_02054584_Data *d = x->unk_b4;
    if (d->unk_00 & 4) {
        d->unk_4c = 0;
        d->unk_50 = 0;
        d->unk_54 = 0;
    }
    if (d->unk_00 & 2) {
        func_01ffb448(d->unk_28);
    }
    if (unk_f0 != 0) {
        Unk_020dbe7c_Sub &r = *this;
        func_020561d8(&r, x);
    }
}

void Unk_0205454c::func_02054420(Unk_0205454c *x)
{
    if (func_01ffcc10() == 0) {
        func_02054440(x);
    }
}

void Unk_0205454c::func_02054440(Unk_0205454c *x)
{
    if (unk_f0 != 0) {
        Unk_020dbe7c_Sub &r = *this;
        func_02056160(&r, x);
    }
}

Unk_0205454c::~Unk_0205454c() {}

Unk_0205454c::Unk_0205454c()
{
}

Unk_02054584_Data *Unk_0205454c::func_02054584()
{
    return unk_b4;
}

u32 Unk_0205454c::func_0205458c()
{
    return unk_b4->unk_08;
}

extern "C" void func_02054594(void *unused, Unk_02054628_Obj *o, void *p)
{
    u32 t = *o->unk_00 & 0xe0;
    if (t == 0x40) {
        func_0206fde4(o->unk_00[4]);
    } else if (t == 0x60) {
        func_0206fde4(o->unk_00[5]);
    }
    if (p != 0) {
        Unk_02054584_Data *d = o->unk_b4;
        func_0206fd10(d->unk_28, &d->unk_4c, p);
    } else {
        Unk_02054584_Data *d = o->unk_b4;
        u32 f = d->unk_00;
        if (f & 2) {
            if (!(f & 4)) {
                func_0206fd84(&d->unk_4c);
            }
        } else if (f & 4) {
            func_0206fd64(d->unk_28);
        } else {
            func_0206fdb4(d->unk_28, &d->unk_4c);
        }
    }
    if (t == 0x20 || t == 0x60) {
        func_0206fe0c(o->unk_00[4]);
    }
}

extern "C" void func_02054628(Unk_02054628_Obj *o, s32 x)
{
    u32 idx = o->unk_00[1];
    if (idx >= 2) {
        u8 *b = o->unk_d4;
        u32 off = *(u16 *)(b + 6);
        u8 *t = b + off;
        u32 st = *(u16 *)(b + off);
        u8 *e = b + *(s32 *)(t + st * idx + 4);
        s32 *v = (s32 *)(e + 4);
        Unk_02054584_Data *d = o->unk_b4;
        d->unk_4c = v[0];
        d->unk_50 = v[1];
        d->unk_54 = v[2];
    } else if (idx == 1) {
        if (x != 0) {
            u8 *b = o->unk_d4;
            u32 off = *(u16 *)(b + 6);
            u8 *t = b + off;
            Unk_02054584_Data *d = o->unk_b4;
            s32 old = d->unk_50;
            u32 st = *(u16 *)(b + off);
            u8 *e = b + *(s32 *)(t + st * idx + 4);
            d->unk_50 = old + (*(s32 *)(e + 8) - x);
        }
    }
}

void Unk_020dbd54::func_0205468c()
{
    if (unk_b4 != 0) {
        if (unk_18 == unk_b4) {
            func_02103d64(&unk_08, unk_18);
            unk_b4 = 0;
        } else if (unk_20 == unk_b4) {
            func_02103d64(&unk_08, unk_20);
            unk_b4 = 0;
        }
    }
}

void Unk_020dbd54::func_020546c8()
{
    if (unk_b4 != 0) {
        func_02103d64(&unk_08, unk_20);
        unk_b4 = 0;
    }
}

void Unk_020dbd54::func_020546ec()
{
    if (unk_b4 != 0) {
        func_02103d64(&unk_08, unk_18);
        unk_b4 = 0;
    }
}

s32 Unk_020dbd54::func_02054710()
{
    func_02103e40(&unk_08, unk_b4);
}

extern "C" u16 func_02054778(u32 kind, Unk_02054778_Info *p)
{
    u16 r = p->unk_04;
    if (kind == 0 || kind == 2) {
        u32 f = p->unk_08;
        if (f & 2) {
            return r;
        }
        if (f & 1) {
            r = r - 1;
        }
    }
    return r;
}

void Unk_0205454c::func_02054720(s32 a, s32 b, s32 c, u16 d, u16 e)
{
    if (e == 0) {
        e = func_02054778(b, (Unk_02054778_Info *)a);
    }
    Unk_020dbe7c &r = *this;
    func_0205668c(&r, e, b, c, d);
    func_02104000(unk_b4, a, unk_5c, 0);
    unk_b4->unk_00 = unk_a4;
}

void Unk_020dbd54::func_020547a4(s32 v)
{
    unk_a4 = v << 12;
    unk_b4->unk_00 = unk_a4;
    if (unk_3c != 0) {
        unk_08 |= 1;
    }
}

s32 Unk_020dbd54::func_020547cc(void *q)
{
    if (unk_3c != 0) {
        unk_08 |= 1;
    }
    func_0205553c(this, q);
}

void Unk_020dbd54::func_020547e4()
{
    Unk_020dbe7c &r = *this;
    func_020566bc(&r);
    unk_b4->unk_00 = unk_a4;
}

BOOL Unk_020dbd54::func_02054800(void *x)
{
    if (unk_b4 != 0 || unk_5c == 0) {
        return FALSE;
    }
    unk_b4 = (Unk_02054584_Data *)func_02055c08(unk_5c, data_020dbd28, x);
    if (unk_b4 != 0) {
        return TRUE;
    }
    return FALSE;
}

Unk_020dbd54::~Unk_020dbd54() {}

Unk_020dbd54::Unk_020dbd54()
{
    unk_b4 = 0;
}

extern "C" BOOL func_02054970(Unk_02054970_Table *t)
{
    BOOL r = TRUE;
    if (t->unk_04 == 0) {
        return r;
    }
    for (u32 i = 0; i < t->unk_04; i++) {
        r &= func_02054b14(&t->unk_08[i]);
    }
    t->unk_04 = 0;
    return TRUE;
}

extern "C" void *func_020549ac(Unk_02054970_Table *t, void *name)
{
    u32 i = 0;
    u32 n = t->unk_04;
    for (; i < n; i++) {
        if (func_0212a190(name, t->unk_0c + i * 16) == 0) {
            return &t->unk_08[i];
        }
    }
    return 0;
}

extern "C" BOOL func_020549e4(Unk_02054970_Table *t, void *file, void *heap)
{
    u32 size;
    void *fileHeap;
    void *res;
    void *hdr;
    u32 i;
    if (heap == 0) {
        heap = data_021c6214;
    }
    fileHeap = data_021f482c;
    res = func_020641ec(file, fileHeap, -4, 0);
    if (res == 0) {
        return FALSE;
    }
    u8 *hdr2 = (u8 *)func_021062dc(res);
    t->unk_04 = hdr2[9];
    size = t->unk_04 << 4;
    t->unk_0c = (u8 *)func_020e8608(heap, size);
    {
        u8 *p = hdr2 + 8;
        p = p + *(u16 *)(hdr2 + 0xe);
        func_02116048(p + *(u16 *)(p + 2), t->unk_0c, size);
    }
    t->unk_08 = (Unk_020dbd34 *)func_020e8608(heap, t->unk_04 * 0x9c);
    for (i = 0; i < t->unk_04; i++) {
        new (&t->unk_08[i]) Unk_020dbd34();
    }
    hdr = func_0210629c(res);
    func_02055724(hdr, 0);
    hdr = func_0205588c(hdr, heap);
    for (i = 0; i < t->unk_04; i++) {
        u8 *h = (u8 *)func_021062dc(res);
        u8 *p = h + 8;
        u32 off = *(u16 *)(h + 0xe);
        u32 st = *(u16 *)(p + off);
        u8 *q = h + *(s32 *)(p + off + st * i + 4);
        void *r = func_02055928(q, heap);
        func_02055600(&t->unk_08[i], r, hdr);
    }
    func_020e85fc(fileHeap, res);
    return TRUE;
}

Unk_020dbd34::Unk_020dbd34()
{
    unk_98 = 0x4e554c4c;
}
