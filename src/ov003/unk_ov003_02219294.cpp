// mwcc-version: 1.2/base
// ov003 TU22, first function only (.text 0x02219294-0x022192b4): D0 of FieldObjectShapeQuery. Its D1 lives in main, so the destructor is
// never defined as a C++ destructor; D0 is written as a plain function under the mangled name.
#include "types.h"

extern "C" {
extern u32 _ZTV21FieldObjectShapeQuery[];
void _ZN15UnitShapeQueryXD2Ev(void *self);
void _ZdlPv(void *p);

void *_ZN21FieldObjectShapeQueryD0Ev(void *self)
{
    *(u32 *)self = (u32)&_ZTV21FieldObjectShapeQuery[2];
    _ZN15UnitShapeQueryXD2Ev(self);
    _ZdlPv(self);
    return self;
}
}
