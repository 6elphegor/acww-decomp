#include "types.h"

extern u32 OVERLAY_1_ID[];
extern u32 OVERLAY_65_ID[];

extern "C" {
extern u8 data_021fccfc[];
extern u8 data_021cc7d0[];
extern u8 data_021cb3b8;
u32 func_01ffa2ec(void);
void func_01ffa3c0(void);
void func_01ffa3d4(u32 v);
void func_01ff80e0(s32 v);
void func_01ff81a8(s32 v);
void func_02076c24(void *p, s32 v);
void func_02076c50(void *p);
void func_ov065_02277ba4(void *(*alloc)(u32, void *, u32), void (*free)(u32, void *));
void func_0204ef2c(u32 id);
void func_0204eee4(u32 id);
void *func_020e85b4(u32 size, u32 align);
void func_020e8558(void *p);
void func_ov001_0220cb30(void *p, s32 a, s32 b);
s32 func_02117dd8(s32 a, s32 b, s32 c);
void WaitByLoop(s32 n);
void func_0206d774(void *arg, void *p);
void func_020e7fcc(void *st, u32 v);
}

// 4-byte colour constants (constructed by __sinit)
struct Unk_021cb3c4_Col {
    u8 r, g, b, a;
    Unk_021cb3c4_Col(u8 r_, u8 g_, u8 b_, u8 a_) : r(r_), g(g_), b(b_), a(a_) {}
};

// 4-byte object seeded with func_020e7fcc(this, 1); its destructor is the empty func_02060b98 (alias)
class Unk_021cb3d4 {
public:
    Unk_021cb3d4() { func_020e7fcc(this, 1); }
    ~Unk_021cb3d4();
    u32 unk_00;
};

extern "C" void *func_0206d5ac(u32 a, void *p, u32 n);
extern "C" void func_0206d5a0(u32 a, void *p);
extern "C" void func_0206d514(void);
extern "C" void func_0206d4e8(s32 a, s32 b);
extern "C" void func_0206d4a4(void *arg);

extern "C" void *func_0206d5ac(u32 a, void *p, u32 n) {
    return func_020e85b4((u32)p, n);
}

extern "C" void func_0206d5a0(u32 a, void *p) {
    func_020e8558(p);
}

extern "C" void func_0206d514(void) {
    u32 ime = func_01ffa2ec();
    volatile u16 *reg = (volatile u16 *)0x4000208;
    u16 old = *reg;
    *reg = 0;
    func_01ff80e0(7);
    func_01ff81a8(7);
    func_02076c24(data_021cc7d0, (s32)OVERLAY_65_ID);
    func_ov065_02277ba4(func_0206d5ac, func_0206d5a0);
    func_0204ef2c((u32)OVERLAY_1_ID);
    void *p = func_020e85b4(0x40000, 0x20);
    func_ov001_0220cb30(p, 1, 0x20);
    func_020e8558(p);
    func_0204eee4((u32)OVERLAY_1_ID);
    func_02076c50(data_021cc7d0);
    *reg;
    *reg = old;
    func_01ffa3d4(ime);
}

extern "C" void func_0206d4e8(s32 a, s32 b) {
    while (func_02117dd8(0xe, a, 0) != 0) {
        WaitByLoop(b);
    }
}

extern "C" void func_0206d4a4(void *arg) {
    func_01ffa2ec();
    func_0206d4e8(1, 1);
    if (data_021cb3b8 == 0) {
        data_021cb3b8 = 1;
        func_0206d774(arg, data_021fccfc);
    }
    while (data_021cb3b8 != 0) {
        func_01ffa2ec();
        func_01ffa3c0();
    }
}

Unk_021cb3c4_Col data_021cb3d8(31, 20, 20, 31);
u8 data_021cb3b8;
Unk_021cb3c4_Col data_021cb3e0(20, 20, 31, 31);
s32 data_021cb3dc;
Unk_021cb3c4_Col data_021cb3c8(31, 31, 20, 31);
u32 data_021cb3ec[2];
Unk_021cb3c4_Col data_021cb3c4(20, 31, 20, 31);
Unk_021cb3c4_Col data_021cb3cc(20, 31, 31, 31);
Unk_021cb3c4_Col data_021cb3d0(20, 24, 24, 31);
u32 data_021cb3e4[2];
Unk_021cb3d4 data_021cb3d4;
u8 data_021cb3bc;
u16 data_021cb3c0;
