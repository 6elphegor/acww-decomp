#include "types.h"

// TU102: 0x020637f8-0x02063850. Constructor/destructor of Unk_020dd374 (and its vtable, .data
// 0x020dd36c-0x020dd384) and two virtuals of Unk_020dd38c.

extern "C" {
void _ZdlPv(void *);
}

class Unk_020e2a78;

class Unk_020e2a60 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL func_020a77f8(Unk_020e2a78 *src);

    /* 0x04 */ u8 unk_04[10];
};

class Unk_020e2a78 {
public:
    Unk_020e2a78();
    virtual ~Unk_020e2a78();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
};

class Unk_020dd374 : public Unk_020e2a60 {
public:
    Unk_020dd374();
    virtual ~Unk_020dd374();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
    void func_020637e8(void *p, u32 n);

    /* 0x0e */ u8 unk_0e[14];
};

class Unk_020dd38c : public Unk_020e2a78 {
public:
    Unk_020dd38c();
    virtual ~Unk_020dd38c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
};

u32 Unk_020dd38c::vfunc_08() { return 9; }

u8 *Unk_020dd38c::vfunc_0c() { return (u8 *)this + 0x12; }

Unk_020dd374::Unk_020dd374() {}

Unk_020dd374::~Unk_020dd374() {}
