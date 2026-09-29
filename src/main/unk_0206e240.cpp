#include "types.h"

class Unk_020e4608 {
public:
    BOOL func_020b84a4(u32 a, u8 b, u32 c, u32 d, u32 e, u32 f, u8 g);
};

extern "C" {
u32 func_0209750c();
void *func_020e8618(void *, u32);
void func_020e85fc(void *, void *);
void func_0203c764(void *, void *, u32);
void *func_0203c6d0(void *);
void *func_0203c6e4(void *);
void func_0206dbcc(u16 *, u16 *);
void func_0200203c(void *, void *, u32, u32);
s32 func_020983c0(u32 a, u16 *p);
}
extern void *data_021f482c;

extern "C" void func_0206e240(u16 *p, Unk_020e4608 *x, u8 *img, u16 *pal) {
    u32 r = func_0209750c();
    BOOL in1 = FALSE;
    u32 v = *p;
    if (v >= 0x11a8 && v <= 0x12a7) in1 = TRUE;
    if (in1 || (v >= 0x12a8 && v <= 0x12af)) {
        void *heap = data_021f482c;
        void *o = func_020e8618(heap, 0x2c4);
        if (o != NULL) {
            func_0203c764(o, p, r);
            func_0206dbcc((u16 *)func_0203c6d0(o), pal);
            func_0200203c(func_0203c6e4(o), img, 4, 4);
            func_020e85fc(heap, o);
            if (x->func_020b84a4((u32)img, 5, 0, 0, 0xf, (u32)pal, 0) != 0) {
                func_020983c0(r, p);
            }
        }
    }
}
