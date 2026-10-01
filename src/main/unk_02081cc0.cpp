#include "types.h"

extern "C" {
s32 func_02082bb4();
s32 _ZN12Unk_020e085c13func_02082d04Ev();
s32 func_020827bc();
s32 func_02082654();
s32 func_02082514();
s32 func_020823d4();
s32 func_02082274();
s32 func_02082910();
s32 func_02082a50();
s32 _ZN12Unk_020e07ec13func_020821c4Ej(void *, s32);
s32 _ZN12Unk_020e07ec13func_020821fcEjPt(void *, s32, s32);
s32 _ZN12Unk_020e082413func_02082378Ej(void *, s32);
s32 _ZN12Unk_020e077c13func_020824b8Ej(void *, s32);
s32 _ZN12Unk_020e07b413func_020825f8Ej(void *, s32);
s32 _ZN12Unk_020e07d013func_02082738Ej(void *, s32);
s32 _ZN12Unk_020e080813func_020828b4Ej(void *, s32);
s32 _ZN12Unk_020e079813func_020829f4Ej(void *, s32);
s32 _ZN12Unk_020e084013func_02082b34Ejj(void *, s32, u32);
s32 _ZN12Unk_020e085c13func_02082cb0Ev(void *);
void func_02081d10();
}

struct Unk_020e085c {
    s32 unk_04;
    virtual ~Unk_020e085c();
    virtual void vfunc_08(u32 i) = 0;
    virtual void vfunc_0c(u32 i);
    virtual void *vfunc_10(u32 i) = 0;
};

// Same object as Unk_020e0718 (symbols.txt names two of its methods after the class Unk_020821b4); declaration only.
struct Unk_020821b4 {
    s8 unk_04;
    Unk_020821b4();
    virtual ~Unk_020821b4();
    virtual Unk_020e085c *vfunc_08() = 0;
    void *func_02081d4c();
    void *func_02081d6c(s32 a);
};

struct Unk_020e0768 : Unk_020821b4 {
    Unk_020e0768();
    virtual ~Unk_020e0768();
    virtual Unk_020e085c *vfunc_08();
    void *func_02081f44();
};

struct Unk_020e06c8 : Unk_020821b4 {
    Unk_020e06c8();
    virtual ~Unk_020e06c8();
    virtual Unk_020e085c *vfunc_08();
    void *func_02081e5c();
};

struct Unk_020e06dc : Unk_020821b4 {
    Unk_020e06dc();
    virtual ~Unk_020e06dc();
    virtual Unk_020e085c *vfunc_08();
    void *func_0208202c();
};

struct Unk_020e06f0 : Unk_020821b4 {
    Unk_020e06f0();
    virtual ~Unk_020e06f0();
    virtual Unk_020e085c *vfunc_08();
};

struct Unk_020e0704 : Unk_020821b4 {
    Unk_020e0704();
    virtual ~Unk_020e0704();
    virtual Unk_020e085c *vfunc_08();
};

struct Unk_020e0718 {
    s8 unk_04;
    Unk_020e0718();
    virtual ~Unk_020e0718();
    virtual Unk_020e085c *vfunc_08() = 0;
    void *func_020820a0(u32 off);
    void func_0208211c();
    BOOL func_02082140();
};

struct Unk_020e072c : Unk_020e0718 {
    Unk_020e072c();
    virtual ~Unk_020e072c();
    virtual Unk_020e085c *vfunc_08();
    void *func_02081de8();
};

struct Unk_020e0740 : Unk_020e0718 {
    Unk_020e0740();
    virtual ~Unk_020e0740();
    virtual Unk_020e085c *vfunc_08();
    void *func_02081fb8();
};

struct Unk_020e0754 : Unk_020e0718 {
    Unk_020e0754();
    virtual ~Unk_020e0754();
    virtual Unk_020e085c *vfunc_08();
    void *func_02081ed0();
};

Unk_020e0718::Unk_020e0718() : unk_04(-1) {}

Unk_020e0718::~Unk_020e0718() {}

BOOL Unk_020e0718::func_02082140() {
    Unk_020e085c *c = vfunc_08();
    BOOL r = FALSE;
    if (c) {
        if (unk_04 == -1) {
            u32 i = _ZN12Unk_020e085c13func_02082cb0Ev(c);
            if (i < (u32)c->unk_04) {
                unk_04 = i;
                c->vfunc_08(unk_04);
                r = TRUE;
            }
        } else {
            r = TRUE;
        }
    }
    return r;
}

void Unk_020e0718::func_0208211c() {
    Unk_020e085c *c = vfunc_08();
    if (c) {
        c->vfunc_0c(unk_04);
        unk_04 = -1;
    }
}

Unk_020e0704::Unk_020e0704() {}

Unk_020e0704::~Unk_020e0704() {}

void *Unk_020e0718::func_020820a0(u32 off) {
    Unk_020e085c *c = vfunc_08();
    void *r = 0;
    if (c) {
        r = (void *)_ZN12Unk_020e084013func_02082b34Ejj(c, unk_04, off);
    }
    return r;
}

Unk_020e06f0::Unk_020e06f0() {}

Unk_020e06f0::~Unk_020e06f0() {}

void *Unk_020e06dc::func_0208202c() {
    void *p = vfunc_08();
    void *r = 0;
    if (p) {
        r = (void *)_ZN12Unk_020e079813func_020829f4Ej(p, (s8)unk_04);
    }
    return r;
}

Unk_020e06dc::Unk_020e06dc() {}

Unk_020e06dc::~Unk_020e06dc() {}

void *Unk_020e0740::func_02081fb8() {
    void *p = vfunc_08();
    void *r = 0;
    if (p) {
        r = (void *)_ZN12Unk_020e080813func_020828b4Ej(p, (s8)unk_04);
    }
    return r;
}

Unk_020e0740::Unk_020e0740() {}

Unk_020e0740::~Unk_020e0740() {}

void *Unk_020e0768::func_02081f44() {
    void *p = vfunc_08();
    void *r = 0;
    if (p) {
        r = (void *)_ZN12Unk_020e07d013func_02082738Ej(p, (s8)unk_04);
    }
    return r;
}

Unk_020e0768::Unk_020e0768() {}

Unk_020e0768::~Unk_020e0768() {}

void *Unk_020e0754::func_02081ed0() {
    void *p = vfunc_08();
    void *r = 0;
    if (p) {
        r = (void *)_ZN12Unk_020e07b413func_020825f8Ej(p, (s8)unk_04);
    }
    return r;
}

Unk_020e0754::Unk_020e0754() {}

Unk_020e0754::~Unk_020e0754() {}

void *Unk_020e06c8::func_02081e5c() {
    void *p = vfunc_08();
    void *r = 0;
    if (p) {
        r = (void *)_ZN12Unk_020e077c13func_020824b8Ej(p, (s8)unk_04);
    }
    return r;
}

Unk_020e06c8::Unk_020e06c8() {}

Unk_020e06c8::~Unk_020e06c8() {}

void *Unk_020e072c::func_02081de8() {
    void *p = vfunc_08();
    void *r = 0;
    if (p) {
        r = (void *)_ZN12Unk_020e082413func_02082378Ej(p, (s8)unk_04);
    }
    return r;
}

Unk_020e072c::Unk_020e072c() {}

Unk_020e072c::~Unk_020e072c() {}

void *Unk_020821b4::func_02081d6c(s32 a) {
    void *p = vfunc_08();
    void *r = 0;
    if (p) {
        r = (void *)_ZN12Unk_020e07ec13func_020821fcEjPt(p, (s8)unk_04, a);
    }
    return r;
}

void *Unk_020821b4::func_02081d4c() {
    void *p = vfunc_08();
    if (p) {
        return (void *)_ZN12Unk_020e07ec13func_020821c4Ej(p, (s8)unk_04);
    }
    return 0;
}

extern "C" void func_02081d10() {
    func_02082bb4();
    _ZN12Unk_020e085c13func_02082d04Ev();
    func_020827bc();
    _ZN12Unk_020e085c13func_02082d04Ev();
    func_02082654();
    _ZN12Unk_020e085c13func_02082d04Ev();
    func_02082514();
    _ZN12Unk_020e085c13func_02082d04Ev();
    func_020823d4();
    _ZN12Unk_020e085c13func_02082d04Ev();
    func_02082274();
    _ZN12Unk_020e085c13func_02082d04Ev();
}

extern "C" void func_02081d08() { func_02081d10(); }

extern "C" void func_02081d00() { func_02081d10(); }

Unk_020e085c *Unk_020e072c::vfunc_08() { return (Unk_020e085c *)func_02082274(); }

Unk_020e085c *Unk_020e06c8::vfunc_08() { return (Unk_020e085c *)func_020823d4(); }

Unk_020e085c *Unk_020e0754::vfunc_08() { return (Unk_020e085c *)func_02082514(); }

Unk_020e085c *Unk_020e0768::vfunc_08() { return (Unk_020e085c *)func_02082654(); }

Unk_020e085c *Unk_020e0740::vfunc_08() { return (Unk_020e085c *)func_020827bc(); }

Unk_020e085c *Unk_020e06dc::vfunc_08() { return (Unk_020e085c *)func_02082910(); }

Unk_020e085c *Unk_020e06f0::vfunc_08() { return (Unk_020e085c *)func_02082a50(); }

Unk_020e085c *Unk_020e0704::vfunc_08() { return (Unk_020e085c *)func_02082bb4(); }

