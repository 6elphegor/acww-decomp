#include "types.h"

// TU185: 0x0209c3e0-0x0209c4a8. Three flag bytes in .bss (autoload_3 0x021d7274-0x021d7278) and their accessors.

class Unk_020cbb18 {
public:
    BOOL func_02072e44();
    void func_020728d4();
    void func_020728a4(u8 *buf, u32 n);
    void func_02072824(u32 cmd, u32 arg);
};

extern "C" {
extern Unk_020cbb18 *data_020cbb18;
extern u8 data_020e416c;

u8 data_021d7274[3];
}

class Unk_0209c41c_Actor {
public:
    virtual void vfunc_00();
    virtual void vfunc_04();
    virtual void vfunc_08();
    virtual void vfunc_0c();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
    virtual void vfunc_1c();
    virtual void vfunc_20();
    virtual void vfunc_24();
    virtual void vfunc_28();
    virtual void vfunc_2c();
    virtual void vfunc_30();
    virtual void vfunc_34();
    virtual void vfunc_38();
    virtual void vfunc_3c();
    virtual void vfunc_40();
    virtual void vfunc_44();
    virtual void vfunc_48();
    virtual void vfunc_4c();
    virtual void vfunc_50();
    virtual void vfunc_54();
    virtual void vfunc_58();
    virtual void vfunc_5c();
    virtual BOOL vfunc_60(u32 v);
};

struct Unk_0209c41c_Pack {
    u8 lo : 4;
    u8 hi : 4;
};

extern "C" BOOL func_0209c41c(Unk_0209c41c_Actor *self, u8 v) {
    BOOL is1;
    if (data_020e416c == 1) is1 = TRUE;
    else is1 = FALSE;
    if (is1) {
        if (self->vfunc_60(v)) {
            u8 idx = *((u8 *)self + 0xea);
            if (idx < 3) {
                if (data_020cbb18->func_02072e44()) {
                    Unk_0209c41c_Pack pk;
                    pk.lo = idx;
                    pk.hi = v;
                    Unk_020cbb18 *g = data_020cbb18;
                    g->func_020728d4();
                    g->func_020728a4((u8 *)&pk, 1);
                    g->func_02072824(0x25, 4);
                }
            }
            return TRUE;
        }
    }
    return FALSE;
}

extern "C" void func_0209c408() {
    u32 i = 0;
    u8 z = i;
    for (; i < 3; i++) data_021d7274[i] = z;
}

extern "C" u32 func_0209c3f4(u32 idx) {
    if (idx < 3) return data_021d7274[idx];
    return 0;
}

extern "C" BOOL func_0209c3e0(u32 idx, u8 v) {
    if (idx < 3) {
        data_021d7274[idx] = v;
        return TRUE;
    }
    return FALSE;
}
