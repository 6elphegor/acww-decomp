#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" void func_02002848(void *p);

// Vtable 0x020e4590 (destructor left implicit: mwcc then emits D1, D0 in that order)
class Unk_020e4590 : public Unk_020d8c7c {
public:
    virtual BOOL vfunc_24();
};

BOOL Unk_020e4590::vfunc_24() {
    func_02002848((u8 *)this + 0x50);
    return TRUE;
}
