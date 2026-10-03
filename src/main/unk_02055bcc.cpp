#include "types.h"

class AnimFrameCtrl {
public:
    virtual ~AnimFrameCtrl();

    u32 unk_04;
    u32 unk_08;
    u32 unk_0c;
    u32 unk_10;
    u32 unk_14;
};

class ModelAnim : public AnimFrameCtrl {
public:
    ModelAnim();
    virtual ~ModelAnim();
    BOOL func_02055bcc(u32 a, void *c);

    u32 unk_18;
    u32 unk_1c;
};

extern "C" {
u32 NNS_G3dAnmObjCalcSizeRequired(const char *a, u32 b);
void *Heap_Alloc(void *h, u32 n);
extern void *gCurrentHeap;
}

char data_020dbe40[4] = {'M', 0, 'A', 'T'};

extern "C" void *func_02055c08(u32 a, const char *b, void *c) {
    if (a == 0) {
        return NULL;
    }
    u32 n = NNS_G3dAnmObjCalcSizeRequired(b, a);
    if (c == NULL) {
        c = gCurrentHeap;
    }
    return Heap_Alloc(c, n);
}

BOOL ModelAnim::func_02055bcc(u32 a, void *c) {
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
