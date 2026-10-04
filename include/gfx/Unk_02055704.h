#ifndef GFX_UNK_02055704_H
#define GFX_UNK_02055704_H

#include "types.h"

// Model resource sub-object (base of CachedModel, 0x98 bytes; see src/main/unk_02054190.cpp).
// symbols.txt names the ctor at 0x02055704 _ZN5ModelC1Ev, so this is probably class Model.

class Unk_02055704 {
public:
    Unk_02055704();
    virtual ~Unk_02055704();
    /* 0x04 */ u8 pad_04[0x94];
};

#endif
