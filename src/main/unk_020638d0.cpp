#include "types.h"

extern "C" BOOL func_020a78a4(void *, const void *, s32);

class Unk_020e2a60 {
public:
    Unk_020e2a60();
    virtual ~Unk_020e2a60();
    virtual u32 vfunc_08() = 0;
    virtual u8 *vfunc_0c() = 0;

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

class Unk_020dd374 : public Unk_020e2a60 {
public:
    Unk_020dd374();
    virtual ~Unk_020dd374();
    virtual u32 vfunc_08();
    virtual u8 *vfunc_0c();

    /* 0x0e */ u8 unk_0e[14];
};

extern "C" void func_020638d0(void *src, Unk_020e2a78 *dst) {
    Unk_020dd374 buf;
    func_020a78a4(&buf, (u8 *)src + 2, 8);
    dst->func_020a7aa0(&buf, 0, 0);
}
