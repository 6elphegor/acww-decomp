#include "types.h"

// Second file after U096 (0x02060b7c-0x02060b9c): the global random-number object data_021c7c88, its __sinit
// (.init 0x020c4648), the empty destructor 0x02060b98 and func_02060b7c. Source: prep/U096/notes.txt.

extern "C" {
void *func_0209cbe0();
s32 func_020e7fcc(void *a, void *b);
}

// 4-byte object seeded with func_020e7fcc(this, 1) (same class as in src/main/unk_0206d4a4.cpp, which only declares
// the destructor)
class Unk_021cb3d4 {
public:
    Unk_021cb3d4() { func_020e7fcc(this, (void *)1); }
    ~Unk_021cb3d4();
    u32 unk_00;
};

Unk_021cb3d4 data_021c7c88;

Unk_021cb3d4::~Unk_021cb3d4() {}

extern "C" s32 func_02060b7c() {
    void *r = func_0209cbe0();
    return func_020e7fcc(&data_021c7c88, r);
}
