#include "types.h"

extern "C" {
void func_0210629c();
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
};

extern "C" void func_020b8cf0() {
    func_0210629c();
}

Unk_020e4618::Unk_020e4618() {
    unk_0d = 0;
    unk_0e = 0xa;
    unk_0f = 1;
}
