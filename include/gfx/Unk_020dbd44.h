#ifndef GFX_UNK_020DBD44_H
#define GFX_UNK_020DBD44_H

#include "types.h"

// 0x10-byte polymorphic model-set holder (vtable 0x020dbd3c); ctor/dtor in main (src/main/unk_02053848.cpp).
// Embedded by value in FieldObjectManager (ov003) and the ov004 room objects.
class Unk_020dbd44 {
public:
    /* 0x04 */ u32 unk_04;
    /* 0x08 */ u32 unk_08;
    /* 0x0c */ u32 unk_0c;
    Unk_020dbd44();
    virtual ~Unk_020dbd44();
};

#endif
