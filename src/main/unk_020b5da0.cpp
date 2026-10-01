#include "types.h"
#include "Unk_020d8c7c.h"

extern "C" void func_020040cc(void);

// Intermediate class (vtable 0x020e2988); its constructor and destructor are inline.
// Its virtuals vfunc_04/08/10/14/1c/20/28/2c are defined by another unit (declared only).
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

class Unk_020e4428 : public Unk_020e2988 {
public:
    Unk_020e4428() {}
    virtual BOOL vfunc_00();
    virtual BOOL vfunc_0c();
    virtual BOOL vfunc_18();
    virtual BOOL vfunc_24();
    virtual BOOL vfunc_30();
    virtual ~Unk_020e4428() {}
};

extern "C" Unk_020e4428 *func_020b5e18(void) {
    return new Unk_020e4428();
}

BOOL Unk_020e4428::vfunc_00() {
    func_020040cc();
    return TRUE;
}

BOOL Unk_020e4428::vfunc_0c() { return TRUE; }

BOOL Unk_020e4428::vfunc_18() { return TRUE; }

BOOL Unk_020e4428::vfunc_24() { return TRUE; }

BOOL Unk_020e4428::vfunc_30() {}

