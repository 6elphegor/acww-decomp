#include "types.h"
#include "Unk_020d8c7c.h"

// Vtable at 0x020e2988; its constructor and destructor are inline. The virtuals are defined by another unit.
class Unk_020e2988 : public Unk_020d8c7c {
public:
    Unk_020e2988() {
        unk_04[0xf] |= 1;
        unk_04[0xf] |= 4;
    }
    virtual BOOL vfunc_04();
    virtual void vfunc_08();
    virtual BOOL vfunc_10();
    virtual BOOL vfunc_14();
    virtual BOOL vfunc_1c();
    virtual BOOL vfunc_20();
    virtual BOOL vfunc_28();
    virtual BOOL vfunc_2c();
    virtual ~Unk_020e2988() {}
};

// Vtable 0x020e4124
class Unk_020e4124 : public Unk_020e2988 {
public:
};

extern "C" Unk_020e4124 *func_020b478c(void) { return new Unk_020e4124; }
