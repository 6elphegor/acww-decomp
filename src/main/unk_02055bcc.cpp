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
    BOOL func_02055bcc(u32 a, void *c);

    u32 unk_18;
    u32 unk_1c;
};

extern "C" {
u32 NNS_G3dAnmObjCalcSizeRequired(const char *a, u32 b);
void *func_020e8608(void *h, u32 n);
extern void *data_021f482c;
}

char data_020dbe40[4] = {'M', 0, 'A', 'T'};

extern "C" void *func_02055c08(u32 a, const char *b, void *c) {
    if (a == 0) {
        return NULL;
    }
    u32 n = NNS_G3dAnmObjCalcSizeRequired(b, a);
    if (c == NULL) {
        c = data_021f482c;
    }
    return func_020e8608(c, n);
}

BOOL Unk_020dbe4c::func_02055bcc(u32 a, void *c) {
    if (unk_18 != 0 || unk_1c != 0) {
        return FALSE;
    }
    unk_18 = (u32)func_02055c08(a, data_020dbe40, c);
    unk_1c = a;
    if (unk_18 != 0) {
        return TRUE;
    }
    return FALSE;
}
