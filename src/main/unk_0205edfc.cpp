#include "types.h"

struct Unk_0205f6f8_Cfg { u8 pad[0x6c]; u8 unk_6c; };

struct Unk_0205eebc {
    u32 unk_00[4];
    Unk_0205eebc();
    ~Unk_0205eebc();
};

struct Unk_0205ee34 {
    u8 unk_00;
    Unk_0205ee34();
};

extern "C" {
extern void *data_021c61b8;
extern Unk_0205f6f8_Cfg *data_020cbb18;
extern void func_0205bb64(void);
extern s32 func_0205bb48(void);
extern void func_020e885c(void *p);
extern void func_020e877c(void *p);
extern void *func_020e8da0(u32 size, void *heap);
u32 func_0205eec0(void);
u32 func_0205ee3c(u32 *base, u32 idx);
void func_0205ee44(u32 *tbl);
void func_0205ee7c(u32 *tbl);
}

Unk_0205eebc data_021c73b8;

extern "C" void func_0205eee0(void) {
    func_0205bb64();
    func_0205ee7c(data_021c73b8.unk_00);
    if (data_021c61b8) {
        func_020e877c(data_021c61b8);
    }
}

extern "C" void func_0205eec8(void) {
    func_0205ee44(data_021c73b8.unk_00);
    func_0205bb48();
}

extern "C" u32 func_0205eec0(void) { return 0x768; }

Unk_0205eebc::Unk_0205eebc() {}

Unk_0205eebc::~Unk_0205eebc() {}

extern "C" void func_0205ee7c(u32 *tbl) {
    void *heap = data_021c61b8;
    u32 n = data_020cbb18->unk_6c;
    u32 i;
    for (i = 0; i < n; i++) {
        tbl[i] = (u32)func_020e8da0(func_0205eec0(), heap);
    }
}

extern "C" void func_0205ee44(u32 *tbl) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (tbl[i]) {
            func_020e885c((void *)tbl[i]);
            tbl[i] = 0;
        }
    }
    if (data_021c61b8) {
        func_020e885c(data_021c61b8);
    }
}

extern "C" u32 func_0205ee3c(u32 *base, u32 idx) {
    return base[idx];
}

Unk_0205ee34::Unk_0205ee34() { unk_00 = 4; }

extern "C" void func_0205ee30(void) {}

extern "C" void func_0205ee10(u8 *p, u8 v) {
    func_020e885c((void *)func_0205ee3c(data_021c73b8.unk_00, v));
    *p = v;
}

extern "C" u32 func_0205edfc(u8 *p) {
    return func_0205ee3c(data_021c73b8.unk_00, *p);
}
