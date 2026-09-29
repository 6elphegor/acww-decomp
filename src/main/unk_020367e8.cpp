#include "types.h"

extern "C" {
void func_02133ef8(void *, u32);
void func_02034d70(u32);
void func_02034dd0(u32, u32, u32);
void func_02034e10(u32, u32, u32, u32);
void func_02034d84(void);
s32 func_0209cf0c(void);
void func_0209cfb8(u16 *);
void func_0209cf18(u16 *);
s32 func_0209cf00(void);
void func_0205c170(void);
void func_020639e8(void *buf, const void *fmt, ...);
void *func_02037244(void *, void *);
void *func_020641ec(void *, void *, s32, s32);
s32 func_02101340(void *, const void *, void *);
void func_02101310(void *);
void *func_021012bc(const void *);
void *func_021062dc(void *);
void *func_021065dc(void *);
void *func_021065f8(void *, s32);
void *func_02106618(void *);
void *func_02106634(void *, s32);
void *func_02106654(void *);
void *func_02106670(void *, s32);
void *func_02106690(void *);
void *func_021066ac(void *, s32);
void *func_0210629c(void *);
void func_02055724(void *, s32);
void *func_0205588c(void *, void *);
void func_020e8558(void *);
void *func_020e8608(void *, u32);
void func_02116048(void *, void *, u32);
void *func_0204df64(void *);
extern u16 data_020d8d8c, data_020d8d88, data_020d8d90;
extern u16 data_020c8af8[];
extern u8 data_020d8ebc[], data_020d8ed0[], data_020d8ed4[], data_020d8ee4[], data_020d8ef4[];
extern u8 data_020d8f04[], data_020d8f14[], data_020d8f24[], data_020d8f34[], data_020d8f44[];
extern u8 data_020d8f58[], data_020d8f68[], data_020d8f7c[], data_020d8f90[], data_020d8fa0[];
extern u8 data_020d8fb4[], data_020d8fc4[], data_020d8fd8[];
extern void *data_021c620c;
extern void *data_021f482c;
extern u8 data_021e3680[];
extern u8 data_021c1b90[];
void *func_02036f24(s32 id, void *heap);
s32 func_020370f8(void *);
struct Unk_021e5890_T { u8 pad[0x14]; u8 unk_14; };
extern Unk_021e5890_T data_021e5890;
}

// ---- object with s32 / u16 / u8 fields at 0,4,6,8 (time / date snapshot?) ----
struct Unk_02036a64 {
    s32 unk_00;
    u16 unk_04;
    u8 unk_06;
    u8 unk_07;
    s32 unk_08;
    s32 unk_0c;
    u16 unk_10;
    u16 unk_12;
    s32 unk_14;

    void func_02036a64();
    BOOL func_02036a98();
    BOOL func_02036aa8();
    BOOL func_02036ab8(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
    BOOL func_02036b14(u32 a, u32 b, u32 c, u32 d);
    BOOL func_02036b50(u16 *a, u16 *b);
};

extern "C" Unk_02036a64 *func_02035d94(void);

// ---- Unk_020d8e64 ----
struct Unk_020d8e64 {
    u32 unk_04;
    u16 unk_08;
    u8 unk_0a;
    u8 unk_0b;

    Unk_020d8e64(u32 v);
    virtual ~Unk_020d8e64();
    void func_020366e0();
    void func_02036800();
    void func_020367e8();
    void func_020367fc();
    void func_02036808();
};

void Unk_020d8e64::func_02036800()
{
    func_020367e8();
}

void Unk_020d8e64::func_020367e8()
{
    func_020366e0();
    unk_0a = 0;
    unk_0b = 0;
}

void Unk_020d8e64::func_020367fc()
{
}

void Unk_020d8e64::func_02036808()
{
    unk_08 = 0xffff;
    unk_0a = 0;
    unk_0b = 0;
}

Unk_020d8e64::~Unk_020d8e64()
{
}

Unk_020d8e64::Unk_020d8e64(u32 v) : unk_04(v), unk_08(0xffff), unk_0a(0), unk_0b(0)
{
}

// ---- Unk_020d8e04 ----
struct Unk_020d8e04 {
    u32 unk_04;
    s32 unk_08;
    u16 unk_0c;
    u8 unk_0e;
    u8 unk_0f;
    u8 unk_10;

    Unk_020d8e04(u32 v);
    virtual ~Unk_020d8e04();
    void func_02036858();
    void func_020368dc();
    void func_020368f8(u32 x);
    void func_02036914();
    void func_0203693c();
    void func_0203695c();
    void func_02036984(u32 v);
    void func_02036988();
    void func_020369ac();
    void func_020369c4();
    void func_020369e4();
    void func_02036a00();
    void func_02036a08();
};

void Unk_020d8e04::func_02036858()
{
    Unk_02036a64 *p = func_02035d94();
    BOOL r = p->func_02036b14(0x3b, 0x32, 0, 0x10);
    u16 a[4];
    a[0] = data_020d8d8c;
    a[1] = data_020d8d88;
    a[2] = data_020d8d90;
    func_02133ef8(&a[3], 2);
    if (p->func_02036b50(&a[0], &a[2]) || p->func_02036b50(&a[1], &a[3])) {
        r = FALSE;
    }
    if (r) {
        func_020368f8(200);
    } else {
        func_020368dc();
    }
}

void Unk_020d8e04::func_020368dc()
{
    if (unk_0e != 0) {
        func_02034d70(0x1b);
        unk_0e = 0;
    }
}

void Unk_020d8e04::func_020368f8(u32 x)
{
    if (unk_0e == 0) {
        func_02034dd0(0x1b, x, 0);
        unk_0e = 1;
    }
}

void Unk_020d8e04::func_02036914()
{
    u32 v = func_02035d94()->unk_07;
    if (v != unk_08) {
        func_0203693c();
        unk_08 = v;
        func_0203695c();
    }
}

void Unk_020d8e04::func_0203693c()
{
    u16 t = unk_0c;
    if (t != 0xffff) {
        func_02034d84();
        unk_0c = 0xffff;
    }
}

void Unk_020d8e04::func_0203695c()
{
    u16 t = data_020c8af8[unk_08];
    func_02034e10(0x24, t, 0x7f, 0);
    unk_0c = t;
}

void Unk_020d8e04::func_02036984(u32 v)
{
    unk_0f = v;
}

void Unk_020d8e04::func_02036988()
{
    if (unk_0f == 0) {
        func_0203693c();
        unk_08 = 0x18;
        func_020368dc();
    }
    unk_10 = 0;
}

void Unk_020d8e04::func_020369ac()
{
    unk_10 = 1;
    func_02036914();
    func_02036858();
}

void Unk_020d8e04::func_020369c4()
{
    func_0203693c();
    unk_08 = 0x18;
    func_020368dc();
    unk_0f = 0;
    unk_10 = 0;
}

void Unk_020d8e04::func_020369e4()
{
    if (unk_10 != 0) {
        func_02036914();
        func_02036858();
    }
}

void Unk_020d8e04::func_02036a00()
{
    func_020369c4();
}

void Unk_020d8e04::func_02036a08()
{
    unk_0c = 0xffff;
    unk_08 = 0x18;
    unk_0e = 0;
    unk_0f = 0;
    unk_10 = 0;
}

Unk_020d8e04::~Unk_020d8e04()
{
}

Unk_020d8e04::Unk_020d8e04(u32 v) : unk_04(v), unk_08(0x18), unk_0c(0xffff), unk_0e(0), unk_0f(0), unk_10(0)
{
}

// ---- Unk_02036a64 methods ----
void Unk_02036a64::func_02036a64()
{
    unk_0c = unk_00;
    unk_10 = unk_04;
    unk_12 = *(u16 *)&unk_06;
    unk_14 = unk_08;
    unk_00 = func_0209cf0c();
    func_0209cfb8(&unk_04);
    func_0209cf18((u16 *)&unk_06);
    unk_08 = func_0209cf00();
}

BOOL Unk_02036a64::func_02036a98()
{
    if (unk_0c != unk_00) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02036a64::func_02036aa8()
{
    if (*((u8 *)this + 0x13) != unk_07) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_02036a64::func_02036ab8(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f)
{
    u32 t = unk_08 + (unk_07 * 0xe10 + unk_06 * 0x3c);
    u32 lo = c + (a * 0xe10 + b * 0x3c);
    u32 hi = f + (d * 0xe10 + e * 0x3c);
    BOOL r = FALSE;
    if (lo <= hi) {
        if (t >= lo && t < hi) r = TRUE;
    } else {
        if (t >= lo || t < hi) r = TRUE;
    }
    return r;
}

BOOL Unk_02036a64::func_02036b14(u32 a, u32 b, u32 c, u32 d)
{
    u32 t = unk_08 + unk_06 * 0x3c;
    u32 lo = b + a * 0x3c;
    u32 hi = d + c * 0x3c;
    BOOL r = FALSE;
    if (lo <= hi) {
        if (t >= lo && t < hi) r = TRUE;
    } else {
        if (t >= lo || t < hi) r = TRUE;
    }
    return r;
}

BOOL Unk_02036a64::func_02036b50(u16 *a, u16 *b)
{
    if (unk_04 == *a && *(u16 *)&unk_06 == *b) {
        return TRUE;
    }
    return FALSE;
}

extern "C" void func_02036b68(Unk_02036a64 *p)
{
    p->func_02036a64();
    p->func_02036a64();
}

extern "C" void func_02036b7c(Unk_02036a64 *p)
{
    p->func_02036a64();
}

extern "C" void func_02036b84(void)
{
}

extern "C" void func_02036b88(Unk_02036a64 *p)
{
    p->func_02036a64();
    p->func_02036a64();
}

extern "C" void func_02036b9c(void)
{
}

extern "C" void func_02036ba0(void)
{
}

// ---- Unk_02036bf8 (0x1c bytes) ----
struct Unk_02036bf8 {
    s32 unk_00;
    u16 unk_04;
    s32 unk_08;
    s32 unk_0c;
    u8 unk_10;
    u8 unk_11;
    u8 unk_12;
    u8 unk_13;
    u8 unk_14;
    s32 unk_18;

    BOOL func_02036ba4();
    void func_02036bbc(Unk_02036bf8 *src);
    void func_02036bf8();
    void func_02036c18();
    Unk_02036bf8 *func_02036c1c(s32 a, u32 b, s32 c, s32 d, u8 e);
    Unk_02036bf8 *func_02036c48();
};

BOOL Unk_02036bf8::func_02036ba4()
{
    BOOL r = FALSE;
    if (unk_18 > 0) {
        unk_18 = unk_18 - 1;
        if (unk_18 <= 0) {
            r = TRUE;
        }
    }
    return r;
}

void Unk_02036bf8::func_02036bf8()
{
    unk_00 = 0x25;
    unk_04 = 0xffff;
    unk_08 = 0;
    unk_0c = 0;
    unk_10 = 0;
    unk_11 = 0;
    unk_12 = 0;
    unk_13 = 0;
    unk_14 = 0;
    unk_18 = 0;
}

void Unk_02036bf8::func_02036bbc(Unk_02036bf8 *src)
{
    func_02036bf8();
    unk_00 = src->unk_00;
    unk_04 = src->unk_04;
    unk_08 = src->unk_08;
    unk_0c = src->unk_0c;
    unk_10 = src->unk_10;
    unk_11 = src->unk_11;
    unk_12 = src->unk_12;
    unk_13 = src->unk_13;
    unk_14 = src->unk_14;
    unk_18 = src->unk_18;
}

void Unk_02036bf8::func_02036c18()
{
}

Unk_02036bf8 *Unk_02036bf8::func_02036c1c(s32 a, u32 b, s32 c, s32 d, u8 e)
{
    func_02036bf8();
    unk_00 = a;
    unk_04 = b;
    unk_0c = c;
    unk_08 = d;
    unk_10 = e;
    return this;
}

Unk_02036bf8 *Unk_02036bf8::func_02036c48()
{
    func_02036bf8();
    return this;
}

extern "C" u8 *func_02036c58(void)
{
    return data_021c1b90;
}

struct Unk_02036c60_Vec { s32 x, y, z; };

struct Unk_02036c60_Ent { u8 a; u8 pad; s16 b; s16 c; };

Unk_02036c60_Vec func_02036c60(u8 *base, s32 idx)
{
    Unk_02036c60_Vec v;
    Unk_02036c60_Ent *e = (Unk_02036c60_Ent *)(base + 2);
    v.x = e[idx].a;
    v.y = e[idx].b << 12;
    v.z = e[idx].c << 12;
    return v;
}

extern "C" s32 func_02036c90(s16 *p)
{
    return *p;
}

// ---- Unk_02036cec ----
struct Unk_02036cec_Entry {
    s32 unk_00;
    void *unk_04;
    void *unk_08;
    void *unk_0c;
    void *unk_10;
    void *unk_14;
    void *unk_18;
    void *unk_1c;
    void *unk_20;
    u8 unk_24[4];
    void *unk_28;
    s32 unk_2c;
};

struct Unk_02036cec_Small {
    s32 unk_00;
    void *unk_04;
};

struct Unk_02036cec {
    Unk_02036cec_Entry unk_000[31];
    Unk_02036cec_Small unk_5d0[9];
    u8 unk_618;
    u8 pad_619[3];
    s32 unk_61c;
    u8 pad_620[0x10];
    s32 unk_630;
    s32 unk_634;
    s32 unk_638;
    s32 unk_63c;
    s32 unk_640;
    s32 unk_644;
    s32 unk_648;

    s32 func_02036c98();
    s32 func_02036ca4();
    s32 func_02036cb0();
    s32 func_02036cbc();
    s32 func_02036cc8();
    s32 func_02036cd4();
    s32 func_02036ce0();
    BOOL func_02036cec();
    Unk_02036cec_Entry *func_02036d54(s32 id);
    void *func_02036eb8(s32 id);
    void func_02036fa4();
    void func_02037074();
};

s32 Unk_02036cec::func_02036c98() { return unk_648; }
s32 Unk_02036cec::func_02036ca4() { return unk_644; }
s32 Unk_02036cec::func_02036cb0() { return unk_640; }
s32 Unk_02036cec::func_02036cbc() { return unk_63c; }
s32 Unk_02036cec::func_02036cc8() { return unk_638; }
s32 Unk_02036cec::func_02036cd4() { return unk_634; }
s32 Unk_02036cec::func_02036ce0() { return unk_630; }

BOOL Unk_02036cec::func_02036cec()
{
    Unk_02036cec_Entry *e = unk_000;
    Unk_02036cec_Small *s;
    u32 i, j;
    for (i = 0; i < 0x1f; e++, i++) {
        e->unk_00 = 0xffff;
        e->unk_04 = 0;
        e->unk_08 = 0;
        e->unk_0c = 0;
        e->unk_14 = 0;
        e->unk_18 = 0;
        e->unk_1c = 0;
        e->unk_10 = 0;
        e->unk_28 = 0;
        e->unk_2c = 0;
        e->unk_20 = 0;
    }
    s = unk_5d0;
    for (j = 0; j < 9; s++, j++) {
        s->unk_00 = 0xffff;
        s->unk_04 = 0;
    }
    unk_630 = 0;
    unk_618 = 0;
    unk_61c = 0;
    func_0205c170();
    return TRUE;
}

Unk_02036cec_Entry *Unk_02036cec::func_02036d54(s32 id)
{
    void *heap = data_021c620c;
    Unk_02036cec_Entry *e = unk_000;
    struct { s32 tmp; u8 buf[0x20]; u8 file[0x68]; } l;
    u32 i;
    for (i = 0; i < 0x1f; e++, i++) {
        if (e->unk_04 == 0) {
            s32 hi = id >> 4;
            void *p;
            func_020639e8(l.buf, data_020d8ebc, hi, id);
            e->unk_04 = func_02037244(l.buf, e->unk_24);
            if (func_02101340(l.file, data_020d8ed0, e->unk_04)) {
                u8 *q = (u8 *)func_021062dc(func_021012bc(data_020d8ed4));
                e->unk_08 = q + *(s32 *)(q + *(u16 *)(q + 0xe) + 0xc);
                e->unk_0c = func_021012bc(data_020d8ee4);
                e->unk_10 = func_021012bc(data_020d8ef4);
                p = func_021012bc(data_020d8f04);
                if (p) {
                    e->unk_14 = func_021065f8(func_021065dc(p), 0);
                }
                p = func_021012bc(data_020d8f14);
                if (p) {
                    e->unk_18 = func_02106634(func_02106618(p), 0);
                }
                p = func_021012bc(data_020d8f24);
                if (p) {
                    e->unk_1c = func_02106670(func_02106654(p), 0);
                }
                p = func_021012bc(data_020d8f34);
                if (p) {
                    e->unk_28 = (u8 *)p + 2;
                    e->unk_2c = *(s16 *)p;
                }
                func_02101310(l.file);
            }
            if (((id & 0xf000) >> 12) == 1) {
                func_020639e8(l.buf, data_020d8f44, hi, id);
                p = func_020641ec(l.buf, data_021f482c, -4, 0);
                if (p) {
                    l.tmp = (s32)func_0210629c(p);
                    func_02055724((void *)l.tmp, 0);
                    e->unk_20 = func_0205588c((void *)l.tmp, heap);
                    if (p) {
                        func_020e8558(p);
                    }
                }
            }
            e->unk_00 = id;
            return e;
        }
        if (e->unk_00 == id) {
            return e;
        }
    }
    return 0;
}

void *Unk_02036cec::func_02036eb8(s32 id)
{
    u32 i, j;
    void *r = 0;
    Unk_02036cec_Entry *e = unk_000;
    Unk_02036cec_Small *s;
    for (i = 0; i < 0x1f; e++, i++) {
        if (e->unk_00 == id) {
            r = e->unk_0c;
            break;
        }
    }
    s = unk_5d0;
    for (j = 0; j < 9; s++, j++) {
        if (s->unk_04 == 0) {
            if (r) {
                s->unk_00 = id;
                s->unk_04 = r;
            } else {
                s->unk_04 = func_02036f24(id, data_021c620c);
                s->unk_00 = id;
            }
            return s->unk_04;
        }
        if (s->unk_00 == id) {
            return s->unk_04;
        }
    }
    return 0;
}

void *func_02036f24(s32 id, void *heap)
{
    u8 buf[0x20];
    u8 file[0x68];
    void *p, *r, *t;
    func_020639e8(buf, data_020d8ebc, id >> 4, id);
    p = func_020641ec(buf, data_021f482c, -4, 0);
    r = 0;
    if (func_02101340(file, data_020d8ed0, p)) {
        t = func_021012bc(data_020d8ee4);
        func_02101310(file);
        r = func_020e8608(heap, 0x180);
        func_02116048(t, r, 0x180);
    }
    if (p) {
        func_020e8558(p);
    }
    return r;
}

void Unk_02036cec::func_02036fa4()
{
    u8 file[0x68];
    void *p = func_02037244(data_020d8f58, 0);
    if (func_02101340(file, data_020d8ed0, p)) {
        unk_634 = (s32)func_02106634(func_02106618(func_021012bc(data_020d8f68)), 0);
        unk_638 = (s32)func_02106670(func_02106654(func_021012bc(data_020d8f7c)), 0);
        unk_63c = (s32)func_021066ac(func_02106690(func_021012bc(data_020d8f90)), 0);
        unk_640 = (s32)func_0210629c(func_021012bc(data_020d8fa0));
        unk_644 = (s32)func_021066ac(func_02106690(func_021012bc(data_020d8fb4)), 0);
        unk_648 = (s32)func_0210629c(func_021012bc(data_020d8fc4));
        func_02101310(file);
    }
}

void Unk_02036cec::func_02037074()
{
    u8 buf[0x20];
    s32 a = func_020370f8(this);
    s32 b = func_020370f8(this);
    void *p;
    func_020639e8(buf, data_020d8fd8, a, b, ((u32)(data_021e5890.unk_14 << 24) >> 26) + 0x61);
    p = func_020641ec(buf, data_021f482c, -4, 0);
    s32 *q = &unk_630;
    *q = (s32)func_0210629c(p);
    func_02055724((void *)*q, 0);
    unk_630 = (s32)func_0205588c((void *)unk_630, data_021c620c);
    if (p) {
        func_020e8558(p);
    }
}

extern "C" s32 func_020370f8(void *)
{
    return (s32)func_0204df64(data_021e3680);
}
