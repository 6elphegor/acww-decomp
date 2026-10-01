#include "types.h"

struct Unk_02082d68 {
    u8 unk_00;
    Unk_02082d68();
    ~Unk_02082d68();
};

struct Unk_020e085c {
    s32 unk_04;
    Unk_020e085c(s32 n);
    virtual ~Unk_020e085c();
    virtual void vfunc_08(u32 i) = 0;
    virtual void vfunc_0c(u32 i);
    virtual Unk_02082d68 *vfunc_10(u32 i) = 0;
    s32 func_02082cb0();
    void func_02082d04();
};

extern "C" {
void func_0205e274(void *);
void func_0205e310(void *, u32, u32, u16 *, u32, u32);
void _ZN12Unk_0205d1f813func_0205d20cEj(void *);
void _ZN12Unk_0205ce0c13func_0205cf84Ej(void *);
void _ZN12Unk_0205ca9413func_0205cba8Ev(void *);
void _ZN12Unk_0205ca9413func_0205cbb0Ej(void *);
void func_02077b84(void *);
void func_02077ad8(void *);
void func_02077b18(void *);
void func_0205c384(void *);
struct Unk_020829b0;
void _ZN12Unk_020829b013func_020829b0Ev(Unk_020829b0 *, u32);
}

struct Unk_0205e66c {
    u32 pad[26];
    Unk_0205e66c();
    ~Unk_0205e66c();
};
struct Unk_0205d1f8 {
    u8 pad;
    Unk_0205d1f8();
    ~Unk_0205d1f8();
};
struct Unk_0205ce0c {
    u8 pad;
    Unk_0205ce0c();
    ~Unk_0205ce0c();
};
struct Unk_02077b8c {
    u32 pad;
    Unk_02077b8c();
    ~Unk_02077b8c();
};
struct Unk_0205ca94 {
    u8 pad;
    Unk_0205ca94();
    ~Unk_0205ca94();
};
struct Unk_02077af8 {
    u32 unk_00;
    Unk_02077af8();
    ~Unk_02077af8();
};
struct Unk_02077b38 {
    u32 unk_00;
    Unk_02077b38();
    ~Unk_02077b38();
};
struct Unk_0205c3a4 {
    Unk_0205c3a4();
    ~Unk_0205c3a4();
};

// ---- 0x020e077c
struct Unk_020825b4 : Unk_02082d68 {
    Unk_020825b4();
    ~Unk_020825b4();
    Unk_0205ce0c unk_01;
    void func_020825b4(u32 id);
};

struct Unk_020e077c : Unk_020e085c {
    Unk_020825b4 unk_08[5];
    Unk_020e077c();
    virtual ~Unk_020e077c();
    virtual void vfunc_08(u32 i);
    virtual Unk_020825b4 *vfunc_10(u32 i);
    Unk_0205ce0c *func_020824b8(u32 i);
};

extern Unk_020e077c data_021cd324;
extern "C" Unk_020e077c *func_02082514();

// ---- 0x020e0798
struct Unk_02082af0 : Unk_02082d68 {
    Unk_02082af0();
    ~Unk_02082af0();
    Unk_02077b38 unk_04;
    void func_02082af0(u32 x);
};

struct Unk_020e0798 : Unk_020e085c {
    Unk_02082af0 unk_08[8];
    Unk_020e0798();
    virtual ~Unk_020e0798();
    virtual void vfunc_08(u32 i);
    virtual Unk_02082af0 *vfunc_10(u32 i);
    Unk_02077b38 *func_020829f4(u32 i);
};

extern Unk_020e0798 data_021cd3d4;
extern "C" Unk_020e0798 *func_02082a50();

// ---- 0x020e07b4
struct Unk_020826f4 : Unk_02082d68 {
    Unk_020826f4();
    ~Unk_020826f4();
    Unk_02077b8c unk_04;
    void func_020826f4(u32 id);
};

struct Unk_020e07b4 : Unk_020e085c {
    Unk_020826f4 unk_08[5];
    Unk_020e07b4();
    virtual ~Unk_020e07b4();
    virtual void vfunc_08(u32 i);
    virtual Unk_020826f4 *vfunc_10(u32 i);
    Unk_02077b8c *func_020825f8(u32 i);
};

extern Unk_020e07b4 data_021cd3a4;
extern "C" Unk_020e07b4 *func_02082654();

// ---- 0x020e07d0
struct Unk_0208285c : Unk_02082d68 {
    Unk_0208285c();
    ~Unk_0208285c();
    Unk_0205ca94 unk_01;
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
    Unk_0205ca94 *func_02082738(u32 i);
};

extern Unk_020e07d0 data_021cd338;
extern "C" Unk_020e07d0 *func_020827bc();

// ---- 0x020e07ec
struct Unk_02082314 : Unk_02082d68 {
    Unk_02082314();
    ~Unk_02082314();
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

// ---- 0x020e0808
struct Unk_020829b0 : Unk_02082d68 {
    Unk_02077af8 unk_04;
    void func_020829b0();
    Unk_020829b0();
    ~Unk_020829b0();
};

struct Unk_020e0808 : Unk_020e085c {
    Unk_020829b0 unk_08[4];
    Unk_020e0808();
    virtual ~Unk_020e0808();
    virtual void vfunc_08(u32 i);
    virtual Unk_020829b0 *vfunc_10(u32 i);
    Unk_02077af8 *func_020828b4(u32 i);
};

extern Unk_020e0808 data_021cd37c;
extern "C" Unk_020e0808 *func_02082910();

// ---- 0x020e0824
struct Unk_02082474 : Unk_02082d68 {
    Unk_02082474();
    ~Unk_02082474();
    Unk_0205d1f8 unk_01;
    void func_02082474(u32 id);
};

struct Unk_020e0824 : Unk_020e085c {
    Unk_02082474 unk_08[5];
    Unk_020e0824();
    virtual ~Unk_020e0824();
    virtual void vfunc_08(u32 i);
    virtual Unk_02082474 *vfunc_10(u32 i);
    Unk_0205d1f8 *func_02082378(u32 i);
};

extern Unk_020e0824 data_021cd34c;
extern "C" Unk_020e0824 *func_020823d4();

// ---- 0x020e0840
struct Unk_02082c54 : Unk_02082d68 {
    Unk_02082c54();
    ~Unk_02082c54();
    Unk_0205c3a4 unk_01[3];
    void func_02082c54(s32 a, s32 i);
};

struct Unk_020e0840 : Unk_020e085c {
    Unk_02082c54 unk_08[5];
    Unk_020e0840();
    virtual ~Unk_020e0840();
    virtual Unk_02082c54 *vfunc_10(u32 i);
    virtual void vfunc_08(u32 i);
    Unk_0205c3a4 *func_02082b34(u32 i, u32 off);
};

extern Unk_020e0840 data_021cd360;
extern "C" Unk_020e0840 *func_02082bb4();

extern const s32 data_020cf1bc[];
const s32 data_020cf1bc[3] = {4, 0xd, 0x12};

void Unk_020e085c::func_02082d04() {
    for (s32 i = 0; i < unk_04; i++) {
        Unk_02082d68 *p = vfunc_10(i);
        if (p) p->unk_00 = 0;
    }
}

void Unk_020e085c::vfunc_0c(u32 i) {
    if (i < (u32)unk_04) {
        Unk_02082d68 *p = vfunc_10(i);
        if (p) p->unk_00 = 0;
    }
}

s32 Unk_020e085c::func_02082cb0() {
    s32 r = -1;
    for (s32 i = 0; i < unk_04; i++) {
        Unk_02082d68 *p = vfunc_10(i);
        if (p && p->unk_00 == 0) {
            r = i;
            break;
        }
    }
    return r;
}

Unk_02082c54::Unk_02082c54() {}

Unk_02082c54::~Unk_02082c54() {}

void Unk_02082c54::func_02082c54(s32 a, s32 i) {
    func_0205c384(&unk_01[i]);
}

Unk_020e0840::Unk_020e0840() : Unk_020e085c(5) {}

Unk_020e0840::~Unk_020e0840() {}

extern "C" Unk_020e0840 *func_02082bb4() { return &data_021cd360; }

void Unk_020e0840::vfunc_08(u32 i) {
    if (i < (u32)unk_04) {
        for (s32 k = 0; k < 3; k++) {
            func_02082bb4()->unk_08[i].func_02082c54(i + data_020cf1bc[k], k);
            Unk_02082c54 *a = func_02082bb4()->unk_08;
            *(u8 *)(i * 4 + (u32)a) = 1;
        }
    }
}

Unk_02082c54 *Unk_020e0840::vfunc_10(u32 i) {
    Unk_02082c54 *r = 0;
    if (i < (u32)unk_04) r = &unk_08[i];
    return r;
}

Unk_0205c3a4 *Unk_020e0840::func_02082b34(u32 i, u32 off) {
    Unk_0205c3a4 *r = 0;
    if (i < (u32)unk_04) r = (Unk_0205c3a4 *)((u8 *)&func_02082bb4()->unk_08[i] + 1 + off);
    return r;
}

Unk_02082af0::Unk_02082af0() {}

Unk_02082af0::~Unk_02082af0() {}

void Unk_02082af0::func_02082af0(u32 x) {
    func_02077b18(&unk_04);
    unk_00 = 1;
}

Unk_020e0798::Unk_020e0798() : Unk_020e085c(8) {}

Unk_020e0798::~Unk_020e0798() {}

extern "C" Unk_020e0798 *func_02082a50() { return &data_021cd3d4; }

void Unk_020e0798::vfunc_08(u32 i) {
    if (i < (u32)unk_04) {
        u32 t = 0;
        t += i;
        func_02082a50()->unk_08[i].func_02082af0(t);
    }
}

Unk_02082af0 *Unk_020e0798::vfunc_10(u32 i) {
    Unk_02082af0 *r = 0;
    if (i < (u32)unk_04) r = &unk_08[i];
    return r;
}

Unk_02077b38 *Unk_020e0798::func_020829f4(u32 i) {
    Unk_02077b38 *r = 0;
    if (i < (u32)unk_04) {
        Unk_02082af0 *e = &func_02082a50()->unk_08[i];
        r = &e->unk_04;
    }
    return r;
}

Unk_020829b0::Unk_020829b0() {}

Unk_020829b0::~Unk_020829b0() {}

void Unk_020829b0::func_020829b0() {
    func_02077ad8(&unk_04);
    unk_00 = 1;
}

Unk_020e0808::Unk_020e0808() : Unk_020e085c(4) {}

Unk_020e0808::~Unk_020e0808() {}

extern "C" Unk_020e0808 *func_02082910() { return &data_021cd37c; }

void Unk_020e0808::vfunc_08(u32 i) {
    if (i < (u32)unk_04) {
        u32 id = 0;
        id += i;
        _ZN12Unk_020829b013func_020829b0Ev(&func_02082910()->unk_08[i], id);
    }
}

Unk_020829b0 *Unk_020e0808::vfunc_10(u32 i) {
    Unk_020829b0 *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

Unk_02077af8 *Unk_020e0808::func_020828b4(u32 i) {
    Unk_02077af8 *r = 0;
    if (i < (u32)unk_04) {
        Unk_020829b0 *e = &func_02082910()->unk_08[i];
        r = &e->unk_04;
    }
    return r;
}

Unk_0208285c::Unk_0208285c() {}

Unk_0208285c::~Unk_0208285c() {}

void Unk_0208285c::func_02082870(u32 id) {
    _ZN12Unk_0205ca9413func_0205cbb0Ej(&unk_01);
    unk_00 = 1;
}

void Unk_0208285c::func_0208285c() {
    _ZN12Unk_0205ca9413func_0205cba8Ev(&unk_01);
    unk_00 = 0;
}

Unk_020e07d0::Unk_020e07d0() : Unk_020e085c(5) {}

Unk_020e07d0::~Unk_020e07d0() {}

extern "C" Unk_020e07d0 *func_020827bc() { return &data_021cd338; }

void Unk_020e07d0::vfunc_08(u32 i) {
    if (i < (u32)unk_04) {
        u32 id = 5;
        id += i;
        func_020827bc()->unk_08[i].func_02082870(id);
    }
}

void Unk_020e07d0::vfunc_0c(u32 i) {
    Unk_020e085c::vfunc_0c(i);
    if (i < (u32)unk_04) {
        func_020827bc()->unk_08[i].func_0208285c();
    }
}

Unk_0208285c *Unk_020e07d0::vfunc_10(u32 i) {
    Unk_0208285c *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

Unk_0205ca94 *Unk_020e07d0::func_02082738(u32 i) {
    Unk_0205ca94 *r = 0;
    if (i < (u32)unk_04) {
        Unk_0208285c *e = &func_020827bc()->unk_08[i];
        r = &e->unk_01;
    }
    return r;
}

Unk_020826f4::Unk_020826f4() {}

Unk_020826f4::~Unk_020826f4() {}

void Unk_020826f4::func_020826f4(u32 id) {
    func_02077b84(&unk_04);
    unk_00 = 1;
}

Unk_020e07b4::Unk_020e07b4() : Unk_020e085c(5) {}

Unk_020e07b4::~Unk_020e07b4() {}

extern "C" Unk_020e07b4 *func_02082654() { return &data_021cd3a4; }

void Unk_020e07b4::vfunc_08(u32 i) {
    if (i < (u32)unk_04) {
        u32 id = 0;
        id += i;
        func_02082654()->unk_08[i].func_020826f4(id);
    }
}

Unk_020826f4 *Unk_020e07b4::vfunc_10(u32 i) {
    Unk_020826f4 *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

Unk_02077b8c *Unk_020e07b4::func_020825f8(u32 i) {
    Unk_02077b8c *r = 0;
    if (i < (u32)unk_04) {
        Unk_020826f4 *e = &func_02082654()->unk_08[i];
        r = &e->unk_04;
    }
    return r;
}

Unk_020825b4::Unk_020825b4() {}

Unk_020825b4::~Unk_020825b4() {}

void Unk_020825b4::func_020825b4(u32 id) {
    _ZN12Unk_0205ce0c13func_0205cf84Ej(&unk_01);
    unk_00 = 1;
}

Unk_020e077c::Unk_020e077c() : Unk_020e085c(5) {}

Unk_020e077c::~Unk_020e077c() {}

extern "C" Unk_020e077c *func_02082514() { return &data_021cd324; }

void Unk_020e077c::vfunc_08(u32 i) {
    if (i < (u32)unk_04) {
        u32 id = 4;
        id += i;
        func_02082514()->unk_08[i].func_020825b4(id);
    }
}

Unk_020825b4 *Unk_020e077c::vfunc_10(u32 i) {
    Unk_020825b4 *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

Unk_0205ce0c *Unk_020e077c::func_020824b8(u32 i) {
    Unk_0205ce0c *r = 0;
    if (i < (u32)unk_04) {
        Unk_020825b4 *e = &func_02082514()->unk_08[i];
        r = &e->unk_01;
    }
    return r;
}

Unk_02082474::Unk_02082474() {}

Unk_02082474::~Unk_02082474() {}

void Unk_02082474::func_02082474(u32 id) {
    _ZN12Unk_0205d1f813func_0205d20cEj(&unk_01);
    unk_00 = 1;
}

Unk_020e0824::Unk_020e0824() : Unk_020e085c(5) {}

Unk_020e0824::~Unk_020e0824() {}

extern "C" Unk_020e0824 *func_020823d4() { return &data_021cd34c; }

void Unk_020e0824::vfunc_08(u32 i) {
    if (i < (u32)unk_04) {
        u32 id = 4;
        id += i;
        func_020823d4()->unk_08[i].func_02082474(id);
    }
}

Unk_02082474 *Unk_020e0824::vfunc_10(u32 i) {
    Unk_02082474 *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

Unk_0205d1f8 *Unk_020e0824::func_02082378(u32 i) {
    Unk_0205d1f8 *r = 0;
    if (i < (u32)unk_04) {
        Unk_02082474 *e = &func_020823d4()->unk_08[i];
        r = &e->unk_01;
    }
    return r;
}

Unk_02082314::Unk_02082314() {}

Unk_02082314::~Unk_02082314() {}

void Unk_02082314::func_02082328(u32 id, u16 *p) {
    func_0205e310(&unk_04, id, 0, p, 0, 0);
    unk_00 = 1;
}

void Unk_02082314::func_02082314() {
    func_0205e274(&unk_04);
    unk_00 = 0;
}

Unk_020e07ec::Unk_020e07ec() : Unk_020e085c(5) {}

Unk_020e07ec::~Unk_020e07ec() {}

extern "C" Unk_020e07ec *func_02082274() { return &data_021cd41c; }

void Unk_020e07ec::vfunc_08(u32 i) {
    u16 t = 0xfff1;
    func_020821fc(i, &t);
}

void Unk_020e07ec::vfunc_0c(u32 i) {
    Unk_020e085c::vfunc_0c(i);
    if (i < (u32)unk_04) {
        func_02082274()->unk_08[i].func_02082314();
    }
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

Unk_02082314 *Unk_020e07ec::vfunc_10(u32 i) {
    Unk_02082314 *r = 0;
    if (i < (u32)unk_04) {
        r = &unk_08[i];
    }
    return r;
}

// ---- 0x020e07ec functions
Unk_0205e66c *Unk_020e07ec::func_020821c4(u32 i) {
    if (i < (u32)unk_04) {
        Unk_02082314 *e = &func_02082274()->unk_08[i];
        return &e->unk_04;
    }
    return 0;
}

// bss, in the original __sinit construction order
Unk_020e0840 data_021cd360;
Unk_020e0798 data_021cd3d4;
Unk_020e0808 data_021cd37c;
Unk_020e07d0 data_021cd338;
Unk_020e07b4 data_021cd3a4;
Unk_020e077c data_021cd324;
Unk_020e0824 data_021cd34c;
Unk_020e07ec data_021cd41c;
