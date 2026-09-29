#include "types.h"

void operator delete(void *);

struct Unk_02082d6c {
    u8 unk_00;
    Unk_02082d6c();
    ~Unk_02082d6c();
};

struct Unk_020e085c {
    s32 unk_04;
    Unk_020e085c(s32 n);
    virtual ~Unk_020e085c();
    virtual void vfunc_08(u32 i) = 0;
    virtual void vfunc_0c(u32 i);
    virtual Unk_02082d6c *vfunc_10(u32 i) = 0;
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

struct Unk_020e06f0 : Unk_020e0718 {
    Unk_020e06f0();
    virtual ~Unk_020e06f0();
    virtual Unk_020e085c *vfunc_08();
};

struct Unk_020e0704 : Unk_020e0718 {
    Unk_020e0704();
    virtual ~Unk_020e0704();
    virtual Unk_020e085c *vfunc_08();
};

extern "C" {
s32 func_02082b34(Unk_020e085c *, s32, u32);
s32 func_02082cb0(Unk_020e085c *);
void func_0205e274(void *);
void func_0205e310(void *, u32, u32, u16 *, u32, u32);
void func_0205d20c(void *);
void func_0205cf84(void *);
void func_0205cba8(void *);
void func_0205cbb0(void *);
void func_02077b84(void *);
void func_02077ad8(void *);
}

struct Unk_0205e66c {
    u32 pad[26];
    Unk_0205e66c();
    ~Unk_0205e66c();
};
struct Unk_0205d230 {
    u8 pad;
    Unk_0205d230();
    ~Unk_0205d230();
};
struct Unk_0205cfac {
    u8 pad;
    Unk_0205cfac();
    ~Unk_0205cfac();
};
struct Unk_02077b90 {
    u32 pad;
    Unk_02077b90();
    ~Unk_02077b90();
};
struct Unk_0205cbe0 {
    u8 pad;
    Unk_0205cbe0();
    ~Unk_0205cbe0();
};
struct Unk_02077afc {
    u32 pad[1];
    Unk_02077afc();
    ~Unk_02077afc();
};

// ---- A: 0x020e07ec
struct Unk_02082314 : Unk_02082d6c {
    Unk_0205e66c unk_04;
    void func_02082314();
    void func_02082328(u32 id, u16 *p);
};

struct Unk_020e07ec : Unk_020e085c {
    Unk_02082314 unk_08[5];
    Unk_020e07ec();
    virtual ~Unk_020e07ec();
    virtual void vfunc_08(u32 i);
    virtual void vfunc_0c(u32 i);
    virtual Unk_02082314 *vfunc_10(u32 i);
    Unk_0205e66c *func_020821c4(u32 i);
    BOOL func_020821fc(u32 i, u16 *p);
};

extern Unk_020e07ec data_021cd41c;
extern "C" Unk_020e07ec *func_02082274();

Unk_020e0718::~Unk_020e0718() {}

Unk_020e06f0::Unk_020e06f0() {}

void *Unk_020e0718::func_020820a0(u32 off) {
    Unk_020e085c *c = vfunc_08();
    void *r = 0;
    if (c) {
        r = (void *)func_02082b34(c, unk_04, off);
    }
    return r;
}

Unk_020e0704::~Unk_020e0704() {}

Unk_020e0704::Unk_020e0704() {}

void Unk_020e0718::func_0208211c() {
    Unk_020e085c *c = vfunc_08();
    if (c) {
        c->vfunc_0c(unk_04);
        unk_04 = -1;
    }
}

BOOL Unk_020e0718::func_02082140() {
    Unk_020e085c *c = vfunc_08();
    BOOL r = FALSE;
    if (c) {
        if (unk_04 == -1) {
            u32 i = func_02082cb0(c);
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

Unk_020e0718::Unk_020e0718() : unk_04(-1) {}

Unk_0205e66c *Unk_020e07ec::func_020821c4(u32 i) {
    if (i < (u32)unk_04) {
        Unk_02082314 *e = &func_02082274()->unk_08[i];
        return &e->unk_04;
    }
    return 0;
}

Unk_02082314 *Unk_020e07ec::vfunc_10(u32 i) {
    Unk_02082314 *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

BOOL Unk_020e07ec::func_020821fc(u32 i, u16 *p) {
    BOOL r = FALSE;
    if (i < (u32)unk_04) {
        u32 id = 4;
        id += i;
        func_02082274()->unk_08[i].func_02082328(id, p);
        r = TRUE;
    }
    return r;
}

void Unk_020e07ec::vfunc_0c(u32 i) {
    Unk_020e085c::vfunc_0c(i);
    if (i < (u32)unk_04) {
        func_02082274()->unk_08[i].func_02082314();
    }
}

void Unk_020e07ec::vfunc_08(u32 i) {
    u16 t = 0xfff1;
    func_020821fc(i, &t);
}

Unk_020e07ec::~Unk_020e07ec() {}

Unk_020e07ec::Unk_020e07ec() : Unk_020e085c(5) {}

void Unk_02082314::func_02082314() {
    func_0205e274(&unk_04);
    unk_00 = 0;
}

void Unk_02082314::func_02082328(u32 id, u16 *p) {
    func_0205e310(&unk_04, id, 0, p, 0, 0);
    unk_00 = 1;
}

// ---- Unk_020e0824
struct Unk_02082474 : Unk_02082d6c {
    Unk_0205d230 unk_01;
    void func_02082474(u32 id);
};

struct Unk_020e0824 : Unk_020e085c {
    Unk_02082474 unk_08[5];
    Unk_020e0824();
    virtual ~Unk_020e0824();
    virtual void vfunc_08(u32 i);
    virtual void vfunc_0c(u32 i);
    virtual Unk_02082474 *vfunc_10(u32 i);
    Unk_0205d230 *func_02082378(u32 i);
};

extern Unk_020e0824 data_021cd34c;
extern "C" Unk_020e0824 *func_020823d4();

// ---- Unk_020e077c
struct Unk_020825b4 : Unk_02082d6c {
    Unk_0205cfac unk_01;
    void func_020825b4(u32 id);
};

struct Unk_020e077c : Unk_020e085c {
    Unk_020825b4 unk_08[5];
    Unk_020e077c();
    virtual ~Unk_020e077c();
    virtual void vfunc_08(u32 i);
    virtual void vfunc_0c(u32 i);
    virtual Unk_020825b4 *vfunc_10(u32 i);
    Unk_0205cfac *func_020824b8(u32 i);
};

extern Unk_020e077c data_021cd324;
extern "C" Unk_020e077c *func_02082514();

// ---- Unk_020e07b4
struct Unk_020826f4 : Unk_02082d6c {
    Unk_02077b90 unk_04;
    void func_020826f4(u32 id);
};

struct Unk_020e07b4 : Unk_020e085c {
    Unk_020826f4 unk_08[5];
    Unk_020e07b4();
    virtual ~Unk_020e07b4();
    virtual void vfunc_08(u32 i);
    virtual void vfunc_0c(u32 i);
    virtual Unk_020826f4 *vfunc_10(u32 i);
    Unk_02077b90 *func_020825f8(u32 i);
};

extern Unk_020e07b4 data_021cd3a4;
extern "C" Unk_020e07b4 *func_02082654();

// ---- Unk_020e07d0
struct Unk_0208285c : Unk_02082d6c {
    Unk_0205cbe0 unk_01;
    void func_02082870(u32 id);
    void func_0208285c();
};

struct Unk_020e07d0 : Unk_020e085c {
    Unk_0208285c unk_08[5];
    Unk_020e07d0();
    virtual ~Unk_020e07d0();
    virtual void vfunc_08(u32 i);
    virtual void vfunc_0c(u32 i);
    virtual Unk_0208285c *vfunc_10(u32 i);
    Unk_0205cbe0 *func_02082738(u32 i);
};

extern Unk_020e07d0 data_021cd338;
extern "C" Unk_020e07d0 *func_020827bc();

// ---- Unk_020e0808
struct Unk_020829b0 : Unk_02082d6c {
    Unk_02077afc unk_04;
    void func_020829b0(u32 id);
    Unk_020829b0();
    ~Unk_020829b0();
};

struct Unk_020e0808 : Unk_020e085c {
    Unk_020829b0 unk_08[4];
    Unk_020e0808();
    virtual ~Unk_020e0808();
    virtual void vfunc_08(u32 i);
    virtual void vfunc_0c(u32 i);
    virtual Unk_020829b0 *vfunc_10(u32 i);
    Unk_02077afc *func_020828b4(u32 i);
};

extern Unk_020e0808 data_021cd37c;
extern "C" Unk_020e0808 *func_02082910();

Unk_0205d230 *Unk_020e0824::func_02082378(u32 i) {
    Unk_0205d230 *r = 0;
    if (i < (u32)unk_04) {
        Unk_02082474 *e = &func_020823d4()->unk_08[i];
        r = &e->unk_01;
    }
    return r;
}

Unk_02082474 *Unk_020e0824::vfunc_10(u32 i) {
    Unk_02082474 *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

void Unk_020e0824::vfunc_08(u32 i) {
    if (i < (u32)unk_04) {
        u32 id = 4;
        id += i;
        func_020823d4()->unk_08[i].func_02082474(id);
    }
}

Unk_020e0824::~Unk_020e0824() {}

Unk_020e0824::Unk_020e0824() : Unk_020e085c(5) {}

void Unk_02082474::func_02082474(u32 id) {
    func_0205d20c(&unk_01);
    unk_00 = 1;
}

Unk_0205cfac *Unk_020e077c::func_020824b8(u32 i) {
    Unk_0205cfac *r = 0;
    if (i < (u32)unk_04) {
        Unk_020825b4 *e = &func_02082514()->unk_08[i];
        r = &e->unk_01;
    }
    return r;
}

Unk_020825b4 *Unk_020e077c::vfunc_10(u32 i) {
    Unk_020825b4 *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

void Unk_020e077c::vfunc_08(u32 i) {
    if (i < (u32)unk_04) {
        u32 id = 4;
        id += i;
        func_02082514()->unk_08[i].func_020825b4(id);
    }
}

Unk_020e077c::~Unk_020e077c() {}

Unk_020e077c::Unk_020e077c() : Unk_020e085c(5) {}

void Unk_020825b4::func_020825b4(u32 id) {
    func_0205cf84(&unk_01);
    unk_00 = 1;
}

Unk_02077b90 *Unk_020e07b4::func_020825f8(u32 i) {
    Unk_02077b90 *r = 0;
    if (i < (u32)unk_04) {
        Unk_020826f4 *e = &func_02082654()->unk_08[i];
        r = &e->unk_04;
    }
    return r;
}

Unk_020826f4 *Unk_020e07b4::vfunc_10(u32 i) {
    Unk_020826f4 *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

void Unk_020e07b4::vfunc_08(u32 i) {
    if (i < (u32)unk_04) {
        u32 id = 0;
        id += i;
        func_02082654()->unk_08[i].func_020826f4(id);
    }
}

Unk_020e07b4::~Unk_020e07b4() {}

Unk_020e07b4::Unk_020e07b4() : Unk_020e085c(5) {}

void Unk_020826f4::func_020826f4(u32 id) {
    func_02077b84(&unk_04);
    unk_00 = 1;
}

Unk_0205cbe0 *Unk_020e07d0::func_02082738(u32 i) {
    Unk_0205cbe0 *r = 0;
    if (i < (u32)unk_04) {
        Unk_0208285c *e = &func_020827bc()->unk_08[i];
        r = &e->unk_01;
    }
    return r;
}

Unk_0208285c *Unk_020e07d0::vfunc_10(u32 i) {
    Unk_0208285c *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

void Unk_020e07d0::vfunc_0c(u32 i) {
    Unk_020e085c::vfunc_0c(i);
    if (i < (u32)unk_04) {
        func_020827bc()->unk_08[i].func_0208285c();
    }
}

void Unk_020e07d0::vfunc_08(u32 i) {
    if (i < (u32)unk_04) {
        u32 id = 5;
        id += i;
        func_020827bc()->unk_08[i].func_02082870(id);
    }
}

Unk_020e07d0::~Unk_020e07d0() {}

Unk_020e07d0::Unk_020e07d0() : Unk_020e085c(5) {}

void Unk_0208285c::func_02082870(u32 id) {
    func_0205cbb0(&unk_01);
    unk_00 = 1;
}

void Unk_0208285c::func_0208285c() {
    func_0205cba8(&unk_01);
    unk_00 = 0;
}

Unk_02077afc *Unk_020e0808::func_020828b4(u32 i) {
    Unk_02077afc *r = 0;
    if (i < (u32)unk_04) {
        Unk_020829b0 *e = &func_02082910()->unk_08[i];
        r = &e->unk_04;
    }
    return r;
}

Unk_020829b0 *Unk_020e0808::vfunc_10(u32 i) {
    Unk_020829b0 *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

void Unk_020e0808::vfunc_08(u32 i) {
    if (i < (u32)unk_04) {
        u32 id = 0;
        id += i;
        func_02082910()->unk_08[i].func_020829b0(id);
    }
}

Unk_020e0808::~Unk_020e0808() {}

Unk_020e0808::Unk_020e0808() : Unk_020e085c(4) {}

extern "C" Unk_020e07ec *func_02082274() { return &data_021cd41c; }
extern "C" Unk_020e0824 *func_020823d4() { return &data_021cd34c; }
extern "C" Unk_020e077c *func_02082514() { return &data_021cd324; }
extern "C" Unk_020e07b4 *func_02082654() { return &data_021cd3a4; }
extern "C" Unk_020e07d0 *func_020827bc() { return &data_021cd338; }
extern "C" Unk_020e0808 *func_02082910() { return &data_021cd37c; }
