#include "types.h"

extern "C" {
void _ZdlPv(void *);
void MI_CpuCopy8(void *, void *, u32);
BOOL EncodedString_SetRaw(void *, const void *, s32);
}

class MsgString;

class EncodedString {
public:
    EncodedString();
    virtual ~EncodedString();
    virtual u32 capacity() = 0;
    virtual u8 *data() = 0;
    BOOL fromMsgString(MsgString *src);

    /* 0x04 */ u8 unk_04[10];
};

class MsgString {
public:
    MsgString();
    virtual ~MsgString();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;
    BOOL fromEncoded(EncodedString *src, BOOL a, BOOL b);
};

class Unk_020dd38c : public MsgString {
public:
    Unk_020dd38c();
    virtual ~Unk_020dd38c();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();
};

class Unk_020dd374 : public EncodedString {
public:
    Unk_020dd374();
    virtual ~Unk_020dd374();
    virtual u32 capacity();
    virtual u8 *data();
    void func_020637e8(void *p, u32 n);

    /* 0x0e */ u8 unk_0e[14];
};

extern "C" void func_020638d0(void *src, MsgString *dst) {
    Unk_020dd374 buf;
    EncodedString_SetRaw(&buf, (u8 *)src + 2, 8);
    dst->fromEncoded(&buf, 0, 0);
}

extern "C" void func_020638a0(u8 *dst, MsgString *src) {
    Unk_020dd374 buf;
    buf.fromMsgString(src);
    buf.func_020637e8(dst + 2, 8);
}

Unk_020dd38c::Unk_020dd38c() {}

Unk_020dd38c::~Unk_020dd38c() {}

u32 Unk_020dd38c::vfunc_08() { return 9; }

u8 *Unk_020dd38c::vfunc_0c() { return (u8 *)this + 0x12; }

Unk_020dd374::Unk_020dd374() {}

Unk_020dd374::~Unk_020dd374() {}

u32 Unk_020dd374::capacity() { return 8; }

void Unk_020dd374::func_020637e8(void *p, u32 n) { MI_CpuCopy8(unk_0e, p, n); }

u8 *Unk_020dd374::data() { return unk_0e; }

