// mwcc-version: 1.2/base
// ov003 TU22, first function only (.text 0x02219294-0x022192b4): D0 of FieldObjectShapeQuery. Its D1 lives in main, so the destructor is
// never defined as a C++ destructor; D0 is written as a plain function under the mangled name.
#include "types.h"
#include "field/FieldObjectShapeQuery.h"
#include "proto/ov003/unk_ov003_02219294.h"

extern "C" void *_ZN21FieldObjectShapeQueryD0Ev(void *self)
{
    FieldObjectShapeQuery *q = static_cast<FieldObjectShapeQuery *>(self);
    q->FieldObjectShapeQuery::~FieldObjectShapeQuery();
    operator delete(q);
    return self;
}
