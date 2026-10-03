#include "types.h"

extern "C" {
void _ZdlPv(void *);
void MI_CpuCopy8(void *, void *, u32);
BOOL func_020a78a4(void *, const void *, s32);
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
    BOOL func_020a7aa0(Unk_020e2a60 *src, BOOL a, BOOL b);
};

class Unk_020dd38c : public Unk_020e2a78 {
public:
    Unk_020dd38c();
    virtual ~Unk_020dd38c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
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

extern "C" void func_020638d0(void *src, Unk_020e2a78 *dst) {
    Unk_020dd374 buf;
    func_020a78a4(&buf, (u8 *)src + 2, 8);
    dst->func_020a7aa0(&buf, 0, 0);
}

extern "C" void func_020638a0(u8 *dst, Unk_020e2a78 *src) {
    Unk_020dd374 buf;
    buf.func_020a77f8(src);
    buf.func_020637e8(dst + 2, 8);
}

Unk_020dd38c::Unk_020dd38c() {}

Unk_020dd38c::~Unk_020dd38c() {}

u32 Unk_020dd38c::vfunc_08() { return 9; }

u8 *Unk_020dd38c::vfunc_0c() { return (u8 *)this + 0x12; }

Unk_020dd374::Unk_020dd374() {}

Unk_020dd374::~Unk_020dd374() {}

u32 Unk_020dd374::vfunc_08() { return 8; }

void Unk_020dd374::func_020637e8(void *p, u32 n) { MI_CpuCopy8(unk_0e, p, n); }

u8 *Unk_020dd374::vfunc_0c() { return unk_0e; }

