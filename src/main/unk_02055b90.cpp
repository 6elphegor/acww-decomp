#include "types.h"

class Unk_020dbe7c {
public:
    virtual ~Unk_020dbe7c();

    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

class Unk_020dbe4c : public Unk_020dbe7c {
public:
    Unk_020dbe4c();
    virtual ~Unk_020dbe4c();
    BOOL func_02055b90(u32 a, void *c);

    u32 unk_18;
    u32 unk_1c;
};

extern "C" void *func_02055c08(u32 a, const char *b, void *c);

char data_020dbe3c[4] = {'J', 0, 'A', 'C'};

BOOL Unk_020dbe4c::func_02055b90(u32 a, void *c) {
    if (unk_18 != 0 || unk_1c != 0) {
        return FALSE;
    }
    unk_18 = (u32)func_02055c08(a, data_020dbe3c, c);
    unk_1c = a;
    if (unk_18 != 0) {
        return TRUE;
    }
    return FALSE;
}
