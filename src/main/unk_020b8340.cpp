#include "types.h"

extern "C" {
void func_020e79a0(void *list, void *node);
BOOL func_020652ec(void *list, void *node);
void func_02065328(void *list);
}

// Two-word list head, cleared by __sinit (inline constructor).
class Unk_021ef630 {
public:
    void *unk_00;
    void *unk_04;

    Unk_021ef630() : unk_00(0), unk_04(0) {}
};

extern Unk_021ef630 data_021ef630;
extern Unk_021ef630 data_021ef638;

// Five-word command record (fields depend on the mode it was set up for).
struct Unk_020b8b40 {
    u32 unk_00;
    u8 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;

    void func_020b8b44(void);
    void func_020b8b68(u32 a, u8 b, u32 c, u8 d);
    void func_020b8b80(void);
    void func_020b8ba0(u32 a, u8 b, u32 c);
    void func_020b8bac(void);
    void func_020b8bc4(u32 a, u8 b, u32 c, u32 d);
    u8 func_020b8bd0(void);
    void func_020b8be0(void);
    void func_020b8bfc(u32 a, u8 b, u32 c, u32 d, u32 e);
    void func_020b8c0c(void);
};

// Three-word record used by three modes.
struct Unk_020b8c1c {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
};

extern "C" {
u8 func_020b8b40(Unk_020b8b40 *p);
u8 func_020b8b7c(Unk_020b8b40 *p);
u8 func_020b8ba8(Unk_020b8b40 *p);
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
    void func_020b8464(void);
    BOOL func_020b847c(void);
    void func_020b8cc0(void);
};

extern "C" {
void func_020b83b0(Unk_020e4618 *p);
BOOL func_020b83c8(Unk_020e4618 *p);
}

class Unk_020e45f8 : public Unk_020e4618 {
public:
    Unk_020b8b40 unk_10;

    Unk_020e45f8();
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    BOOL func_020b8618(u32 a, u8 b, u32 c, u8 d);
    BOOL func_020b8670(u32 a, u8 b, u32 c);
    BOOL func_020b86c0(u32 a, u8 b, u32 c, u32 d);
    BOOL func_020b8714(u32 a, u8 b, u32 c, u32 d, u32 e);
    void func_020b876c(void);
    void func_020b87d0(void);
};

class Unk_020e4608 : public Unk_020e45f8 {
public:
    Unk_020b8b40 unk_24;

    Unk_020e4608();
    virtual BOOL vfunc_00();
    virtual void vfunc_04();
    BOOL func_020b84a4(u32 a, u8 b, u32 c, u32 d, u32 e, u32 f, u8 g);
    BOOL func_020b851c(u32 a, u32 b, u8 c, u32 d, u32 e, u32 f, u32 g);
};

class Unk_020b8340_Task {
public:
    virtual BOOL vfunc_00();

    /* 0x04 */ u8 unk_04[9];
    /* 0x0d */ u8 unk_0d;
    /* 0x0e */ u8 unk_0e;
    /* 0x0f */ u8 unk_0f;
};

BOOL Unk_020e4608::func_020b851c(u32 a, u32 b, u8 c, u32 d, u32 e, u32 f, u32 g) {
    func_020b876c();
    unk_0e = 8;
    unk_10.func_020b8bfc(a, c, d, d, e);
    unk_0f = unk_10.func_020b8bd0();
    unk_24.func_020b8bfc(b, c, f, f, g);
    unk_0f += unk_24.func_020b8bd0();
    unk_0c = 4;
    if (func_020b83c8(this)) {
        return TRUE;
    }
    vfunc_04();
    return FALSE;
}

BOOL Unk_020e4608::func_020b84a4(u32 a, u8 b, u32 c, u32 d, u32 e, u32 f, u8 g) {
    func_020b876c();
    unk_0e = 9;
    unk_10.func_020b8bfc(a, b, c, d, e);
    unk_0f = unk_10.func_020b8bd0();
    unk_24.func_020b8ba0(f, b, g);
    unk_0f += func_020b8b7c(&unk_24);
    unk_0c = 4;
    if (func_020b83c8(this)) {
        return TRUE;
    }
    vfunc_04();
    return FALSE;
}

extern "C" void func_020b8494(void) {
    func_02065328(&data_021ef638);
}

BOOL Unk_020e4618::func_020b847c(void) {
    return func_020652ec(&data_021ef638, (Unk_020b83b0 *)this);
}

void Unk_020e4618::func_020b8464(void) {
    func_020e79a0(&data_021ef638, (Unk_020b83b0 *)this);
}

static inline Unk_020b8340_Task *Unk_020b8340_First(void **l) {
    Unk_020b8340_Task *t = (Unk_020b8340_Task *)*l;
    if (t != 0) t = (Unk_020b8340_Task *)((u8 *)t - 4);
    return t;
}

extern "C" void func_020b83f0(void) {
    Unk_020b8340_Task *r5;
    for (r5 = Unk_020b8340_First((void **)&data_021ef638); r5 != 0; r5 = Unk_020b8340_First((void **)&data_021ef638)) {
        if (*(u16 *)0x4000006 + r5->unk_0f > 0xd4) break;
        BOOL ready = (r5->unk_0d == 1) ? TRUE : FALSE;
        if (ready) {
            if (r5->vfunc_00() != 0) {
                r5->unk_0d = 2;
            }
        }
        if (r5 != 0) r5 = (Unk_020b8340_Task *)((u8 *)r5 + 4);
        func_020e79a0(&data_021ef638, r5);
    }
    volatile u16 *vc = (volatile u16 *)0x4000006;
    if (*vc <= 0xd5) {
        u16 t = *vc;
    }
}

extern "C" void func_020b83e0(void) {
    func_02065328(&data_021ef630);
}

extern "C" BOOL func_020b83c8(Unk_020e4618 *p) {
    u8 *n = (u8 *)p;
    if (n != 0) n = n + 4;
    return func_020652ec(&data_021ef630, n);
}

extern "C" void func_020b83b0(Unk_020e4618 *p) {
    u8 *n = (u8 *)p;
    if (n != 0) n = n + 4;
    func_020e79a0(&data_021ef630, n);
}

extern "C" void func_020b8340(void) {
    Unk_020b8340_Task *r5;
    for (r5 = Unk_020b8340_First((void **)&data_021ef630); r5 != 0; r5 = Unk_020b8340_First((void **)&data_021ef630)) {
        if (*(u16 *)0x4000006 + r5->unk_0f > 0x104) break;
        BOOL ready = (r5->unk_0d == 1) ? TRUE : FALSE;
        if (ready) {
            if (r5->vfunc_00() != 0) {
                r5->unk_0d = 2;
            }
        }
        if (r5 != 0) r5 = (Unk_020b8340_Task *)((u8 *)r5 + 4);
        func_020e79a0(&data_021ef630, r5);
    }
}

Unk_021ef630 data_021ef638;
Unk_021ef630 data_021ef630;
