#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" {
// Other files
void *func_020898b8(void *p);
s32 func_02089244(void);
void func_02089268(void *p, void *v);
void func_02089264(void *p, s32 v);
void func_02089260(void *p, s32 v);
void func_02089258(void *p, s32 a, s32 b);
void func_02089140(void *p);
void *func_02089248(void *p);
s32 func_0208989c(void *p);
s32 func_02089884(void *p);
s32 func_02089228(void *p, s32 v);
s32 func_02089210(void *p, s32 v);
void func_02087e70(s32 a, u32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k, s32 l);
void func_020897fc(void *p);
void func_02089b18(void *p);
s32 func_02089bb4(void *p);
void func_02002848(void *p);
s32 func_02003b5c(void);
void func_020e7fd4(void);
void func_020e814c(void);
void func_0210171c(u32 a, u32 b);
void func_0210197c(u32 a, u32 b);
u32 func_0210f460(void);
u32 func_0210f4cc(void);
void func_0206d49c(void);
void func_020e79a0(void *list, void *node);
void func_020652ec(void *list, void *node);
void func_02065328(void *list);
void func_021127c0(char *buf, u32 size, const char *fmt, char *ap);

extern u8 data_020d5d14[];
extern u8 data_021ef5c8, data_021ef5cc, data_021ef5d0, data_021ef5d4, data_021ef5d8, data_021ef5dc, data_021ef5e0;
extern u8 data_021ef5e4, data_021ef5e8, data_021ef5ec, data_021ef5f0, data_021ef5f4, data_021ef5f8, data_021ef5fc;
extern u16 data_021ef600, data_021ef604;
extern u8 data_021f4770, data_021f4774;
extern u16 data_021f4778, data_021f477c;
extern u32 data_021ef608, data_021ef60c, data_021ef610, data_021ef614, data_021ef618, data_021ef61c, data_021ef620;
extern u32 data_021ef624, data_021ef628, data_021ef62c;
extern u32 (*data_0213bc10)(u32, u32);
extern u32 (*data_0213bc18)(u32);
extern void *data_021ef630;
extern void *data_021ef638;

void func_020b7f7c(void);
u32 func_020b80b8(u32 a, u32 b);
u32 func_020b8090(u32 a);
u32 func_020b80f8(u32 a);
void func_020b8130(u32 *o, u32 size);
void func_020b81fc(u32 *o0, u32 *o1, u32 size);
void func_020b82e8(u16 *a, u32 b, const char *fmt, char *ap);
void func_020b830c(u16 *dst, u32 base, const char *s);
void func_020b8338(u16 *dst, u32 base, s32 c);
}

class Unk_02089270 {
public:
    Unk_02089270();
    ~Unk_02089270();

    /* 0x00 */ u8 unk_00[0x14];
};

// Base of Unk_020e451c (ctor func_02089e60, dtor func_02089d9c), 0xbc bytes
class Unk_02089e60 {
public:
    Unk_02089e60(s32 a);
    virtual ~Unk_02089e60();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();

    /* 0x04 */ u8 unk_04[0xb8];
};

class Unk_020e451c : public Unk_02089e60 {
public:
    Unk_020e451c();
    virtual ~Unk_020e451c();
    virtual void vfunc_08();
    virtual void vfunc_0c();

    void func_020b7ae4();
    BOOL func_020b7b34();
    BOOL func_020b7b50();
    void func_020b7b6c(u8 v);
    void func_020b7b74();
    void func_020b7ba8();

    /* 0xbc */ Unk_02089270 unk_bc;
    /* 0xd0 */ s32 unk_d0;
    /* 0xd4 */ u8 unk_d4;
    /* 0xd5 */ u8 unk_d5;
    /* 0xd6 */ u8 unk_d6;
    /* 0xd7 */ u8 unk_d7;
    /* 0xd8 */ u8 unk_d8;
};

extern "C" void func_020b7a24(Unk_020e451c *p);

void Unk_020e451c::func_020b7ae4() {
    func_020898b8(this);
    s32 r4 = func_02089244();
    func_02089268(&unk_bc, data_020d5d14);
    func_02089264(&unk_bc, 1);
    func_02089260(&unk_bc, 0);
    func_02089258(&unk_bc, r4, 0);
    func_02089140(&unk_bc);
}

BOOL Unk_020e451c::func_020b7b34() {
    if (unk_d8 != 0 && unk_d0 < 0x19) {
        return TRUE;
    }
    return FALSE;
}

BOOL Unk_020e451c::func_020b7b50() {
    if (unk_d8 != 0 && unk_d0 == 0x1d) {
        return TRUE;
    }
    return FALSE;
}

void Unk_020e451c::func_020b7b6c(u8 v) {
    unk_d8 = v;
}

void Unk_020e451c::func_020b7b74() {
    func_020897fc(this);
    unk_d4 = 0;
    unk_d5 = 0;
    unk_d0 = 0;
    unk_d6 = 0;
    unk_d7 = 0;
    unk_d8 = 0;
}

void Unk_020e451c::func_020b7ba8() {
    unk_d4 = 1;
}

void Unk_020e451c::vfunc_0c() {
    unk_d7 = unk_d6;
    func_02089b18(this);
    func_020b7a24(this);
}

void Unk_020e451c::vfunc_08() {
    s32 r7, y;
    s32 r4 = 0;
    if (unk_d0 < 0x19) {
        if (unk_d5 != 0) {
            void *a = func_02089248(&unk_bc);
            r7 = (s32)func_020898b8(this);
            r4 = func_0208989c(this);
            s32 b = func_02089884(this);
            r4 = r4 + func_02089228((void *)r7, -1) + func_02089228(&unk_bc, -1);
            y = b + func_02089210((void *)r7, -1) + func_02089210(&unk_bc, -1);
            func_02087e70(r7, (u32)a, r4, y, -1, -1, 0x1000, 0x1000, 0, -1, 0, 0);
            r4 = 1;
        }
        func_02089bb4(this);
    }
    unk_d6 = r4;
}

Unk_020e451c::~Unk_020e451c() {
}

Unk_020e451c::Unk_020e451c() : Unk_02089e60(1) {
    unk_d0 = 0;
    unk_d4 = 0;
    unk_d5 = 0;
    unk_d6 = 0;
    unk_d7 = 0;
    unk_d8 = 0;
}

// Vtable 0x020e4540
class Unk_020e4540 : public Unk_020d8c7c {
public:
    Unk_020e4540() {}
    virtual ~Unk_020e4540();
};

Unk_020e4540::~Unk_020e4540() {
}

extern "C" Unk_020e4540 *func_020b7d10() {
    return new Unk_020e4540();
}

// Vtable 0x020e4590
class Unk_020e4590 : public Unk_020d8c7c {
public:
    virtual ~Unk_020e4590();
    virtual BOOL vfunc_24();
};

Unk_020e4590::~Unk_020e4590() {
}

BOOL Unk_020e4590::vfunc_24() {
    func_02002848((u8 *)this + 0x50);
    return TRUE;
}

extern "C" {
void func_020b7d84(void) {
    data_021ef5e8 = data_021ef5f8;
    data_021ef5e4 = data_021ef5f4;
    data_021ef5e0 = data_021ef5f0;
    data_021ef5dc = data_021ef5ec;
    data_021ef5d8 = data_021ef5c8;
    data_021ef5d4 = data_021ef5fc;
    u8 t = data_021f4770;
    data_021ef5d0 = t;
    data_021ef5cc = data_021f4774 ? 1 : 0;
    data_021ef600 = (u8)data_021f4778;
    data_021ef604 = (u8)data_021f477c;
    if ((s32)(*(volatile u16 *)0x27fffa8 & 0x8000) >> 15) {
        data_021f4774 = t;
        data_021f4770 = 0;
        data_021f4778 = 0;
        data_021f477c = 0;
    } else {
        func_020e7fd4();
    }
    if (data_021f4770 != 0) {
        BOOL p = (data_021f4770 != 0 && data_021f4774 != 0) ? TRUE : FALSE;
        if (p) {
            data_021ef5f8 = data_021f4778;
            data_021ef5f4 = data_021f477c;
            data_021ef5c8 = 0;
        }
        if (data_021ef5c8 < 0xc8) {
            data_021ef5c8++;
        }
        u32 v = (u8)data_021f4778;
        data_021ef5f0 = v;
        data_021ef5ec = data_021f477c;
        func_02003b5c();
    } else {
        BOOL p = (data_021f4770 == 0 && data_021f4774 != 0) ? TRUE : FALSE;
        if (p) {
            data_021ef5fc = 0;
        }
        if (data_021ef5fc < 0xc8) {
            data_021ef5fc++;
        }
    }
}

void func_020b7eec(void) {
    func_020e814c();
    data_021ef5c8 = 0;
    data_021ef5fc = 0xc8;
    data_021ef5d8 = 0;
    data_021ef5d4 = 0xc8;
}

void func_020b7f7c(void) {
}

void func_020b7f80(void) {
    func_0210171c(4, 1);
    func_0210197c(0x8000, 1);
    data_0213bc10 = func_020b80b8;
    data_0213bc18 = func_020b8090;
    data_021ef608 = 0;
    data_021ef62c = func_0210f460();
    data_021ef61c = 0;
    data_021ef620 = 0;
    data_021ef624 = 0;
    data_021ef628 = 0;
    data_021ef60c = 0;
    data_021ef610 = 0;
    data_021ef614 = 0;
    data_021ef618 = 0;
    u32 r = func_0210f4cc();
    switch (r) {
    case 0xf:
        data_021ef628 = 0;
        data_021ef624 = 0x20000;
        data_021ef620 = 0x30000;
        data_021ef61c = 0x40000;
        data_021ef618 = 0x20000;
        data_021ef614 = 0x30000;
        data_021ef610 = 0x40000;
        data_021ef60c = 0x80000;
        break;
    case 7:
        data_021ef628 = 0;
        data_021ef624 = 0x20000;
        data_021ef620 = 0x30000;
        data_021ef61c = 0x40000;
        data_021ef618 = 0x20000;
        data_021ef614 = 0x30000;
        data_021ef610 = 0x40000;
        data_021ef60c = 0x60000;
        break;
    default:
        func_0206d49c();
        break;
    }
}

u32 func_020b8090(u32 a) {
    a = (a + 7) & ~7;
    u32 r = func_020b80f8(a);
    return ((a >> 3) << 16) | ((r >> 3) & 0xffff);
}

u32 func_020b80b8(u32 a, u32 b) {
    u32 x, y;
    if (b != 0) {
        func_020b81fc(&x, &y, a);
    } else {
        func_020b8130(&x, a);
    }
    return (b << 31) | (((a >> 4) << 16) | ((x >> 3) & 0xffff));
}

u32 func_020b80f8(u32 a) {
    u32 p = data_021ef608;
    a = (a + 0xf) & 0xfff0;
    u32 n = p + a;
    data_021ef608 = n;
    if (n >= data_021ef62c) {
        data_021ef608 = p;
        func_0206d49c();
        return 0;
    }
    return p;
}

void func_020b8130(u32 *o, u32 size) {
    u32 a = data_021ef60c;
    u32 avail1 = a - data_021ef61c;
    u32 c = data_021ef610;
    u32 avail2 = c - data_021ef620;
    if (avail1 >= size) {
        if (avail2 >= size) {
            if ((avail2 - size) * 2 > avail1 - size) {
                *o = c - size;
                data_021ef610 = *o;
                return;
            }
        }
        *o = a - size;
        data_021ef60c = *o;
        return;
    }
    if (avail2 >= size) {
        *o = c - size;
        data_021ef610 = *o;
        return;
    }
    a = data_021ef618;
    avail1 = a - data_021ef628;
    c = data_021ef614;
    avail2 = c - data_021ef624;
    if (avail1 >= size) {
        if (avail2 >= size) {
            if ((avail2 - size) * 2 > avail1 - size) {
                *o = c - size;
                data_021ef614 = *o;
                return;
            }
        }
        *o = a - size;
        data_021ef618 = *o;
        return;
    }
    if (avail2 >= size) {
        *o = c - size;
        data_021ef614 = *o;
        return;
    }
    func_020b7f7c();
    func_0206d49c();
    *o = 0;
}

void func_020b81fc(u32 *o0, u32 *o1, u32 size) {
    u32 v = data_021ef628;
    if (v + size <= data_021ef618 && data_021ef624 + (size >> 1) <= data_021ef614) {
        *o0 = v;
        *o1 = data_021ef624;
        data_021ef628 = data_021ef628 + size;
        data_021ef624 = data_021ef624 + (size >> 1);
    } else {
        v = data_021ef61c;
        u32 e = v + size;
        if (e <= data_021ef60c && e <= 0x60000 && data_021ef620 + (size >> 1) <= data_021ef610) {
            *o0 = v;
            *o1 = data_021ef620;
            data_021ef61c = data_021ef61c + size;
            data_021ef620 = data_021ef620 + (size >> 1);
        } else {
            func_020b7f7c();
            func_0206d49c();
            *o0 = 0;
            *o1 = 0x20000;
        }
    }
}

struct Unk_020b82b8_Str {
    u16 unk_00;
    u16 unk_02;
};

void func_020b82b8(Unk_020b82b8_Str *self, u16 *a, const char *fmt, ...) {
    char *ap = (char *)(((u32)&fmt) & ~3) + 4;
    func_020b82e8(a, self->unk_02, fmt, ap);
}

void func_020b82d8(Unk_020b82b8_Str *self, u16 *dst, const char *s) {
    func_020b830c(dst, self->unk_02, s);
}

void func_020b82e8(u16 *a, u32 b, const char *fmt, char *ap) {
    char buf[0x81];
    func_021127c0(buf, 0x81, fmt, ap);
    func_020b830c(a, b, buf);
}

void func_020b830c(u16 *dst, u32 base, const char *s) {
    s32 i = 0;
    while (s[i] != 0) {
        func_020b8338(dst, base, (s++)[i]);
        dst++;
    }
}

void func_020b8338(u16 *dst, u32 base, s32 c) {
    *dst = base + c;
}
}

class Unk_020b8340_Task {
public:
    virtual BOOL vfunc_00();

    /* 0x04 */ u8 unk_04[9];
    /* 0x0d */ u8 unk_0d;
    /* 0x0e */ u8 unk_0e;
    /* 0x0f */ u8 unk_0f;
};

extern "C" {
void func_020b8340(void) {
    Unk_020b8340_Task *r5 = (Unk_020b8340_Task *)data_021ef630;
    if (r5 != 0) r5 = (Unk_020b8340_Task *)((u8 *)r5 - 4);
    u16 *vcount = (u16 *)0x4000006;
    u8 two = 2;
    void **list = &data_021ef630;
    while (r5 != 0) {
        if (*vcount + r5->unk_0f > 0x104) break;
        BOOL ready = (r5->unk_0d == 1) ? TRUE : FALSE;
        if (ready) {
            if (r5->vfunc_00() != 0) {
                r5->unk_0d = two;
            }
        }
        if (r5 != 0) r5 = (Unk_020b8340_Task *)((u8 *)r5 + 4);
        func_020e79a0(list, r5);
        r5 = (Unk_020b8340_Task *)*list;
        if (r5 != 0) r5 = (Unk_020b8340_Task *)((u8 *)r5 - 4);
    }
}

void func_020b83b0(Unk_020b8340_Task *p) {
    u8 *n = (u8 *)p;
    if (n != 0) n = n + 4;
    func_020e79a0(&data_021ef630, n);
}

void func_020b83c8(Unk_020b8340_Task *p) {
    u8 *n = (u8 *)p;
    if (n != 0) n = n + 4;
    func_020652ec(&data_021ef630, n);
}

void func_020b83e0(void) {
    func_02065328(&data_021ef630);
}

void func_020b83f0(void) {
    Unk_020b8340_Task *r5 = (Unk_020b8340_Task *)data_021ef638;
    if (r5 != 0) r5 = (Unk_020b8340_Task *)((u8 *)r5 - 4);
    u16 *vcount = (u16 *)0x4000006;
    u8 two = 2;
    void **list = &data_021ef638;
    while (r5 != 0) {
        if (*vcount + r5->unk_0f > 0xd4) break;
        BOOL ready = (r5->unk_0d == 1) ? TRUE : FALSE;
        if (ready) {
            if (r5->vfunc_00() != 0) {
                r5->unk_0d = two;
            }
        }
        if (r5 != 0) r5 = (Unk_020b8340_Task *)((u8 *)r5 + 4);
        func_020e79a0(list, r5);
        r5 = (Unk_020b8340_Task *)*list;
        if (r5 != 0) r5 = (Unk_020b8340_Task *)((u8 *)r5 - 4);
    }
    volatile u16 *vc = (volatile u16 *)0x4000006;
    if (*vc <= 0xd5) {
        u16 t = *vc;
    }
}
}
