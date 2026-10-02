// mwcc-flags: -nothumb -O4,p
// G007a: autoload_2 0x020f0fb4-0x020f24c0 (107 functions). mwcc 1.2/base, C++, ARM, -O4,p. PARTIAL: part of a class file
// (31 vtables at 0x0213b2d0-0x0213b8e8, 30 near-identical subclasses of one base class, base members from 0x020f2aec up).
// Per subclass: vfunc_0c (init, vtable slot 3), D0 (deleting dtor), D1 (dtor), constructor. All are extern "C" under their symbols.txt
// names with the object first; no class with virtuals is defined, so no vtable is emitted; vtables stay extern.
#include "types.h"

class SubObj {
public:
    virtual void vfunc_00();
};

struct Obj {
    /* 0x00 */ u32 *vptr;
    /* 0x04 */ u8 id;
};

struct Glob {
    /* 0x00 */ u8 pad0[0x30];
    /* 0x30 */ u32 f30;
    /* 0x34 */ u8 pad1[0x19];
    /* 0x4d */ u8 f4d;
    /* 0x4e */ u8 pad2[0x14];
    /* 0x62 */ u8 f62;
};

extern "C" {
extern Glob data_021f5b80;
extern u32 data_0213b3a0[];
extern u32 data_0213b3d4[];
extern u32 data_0213b408[];
extern u32 data_0213b43c[];
extern u32 data_0213b470[];
extern u32 data_0213b4a4[];
extern u32 data_0213b4d8[];
extern u32 data_0213b50c[];
extern u32 data_0213b540[];
extern u32 data_0213b304[];
extern u32 data_0213b36c[];
extern u32 data_0213b5a8[];
extern u32 data_0213b5dc[];
extern u32 data_0213b610[];
extern u32 data_0213b644[];
extern u32 data_0213b678[];
extern u32 data_0213b6ac[];
extern u32 data_0213b6e0[];
extern u32 data_0213b714[];
extern u32 data_0213b748[];
extern u32 data_0213b77c[];
extern u32 data_0213b7b0[];
extern u32 data_0213b7e4[];
extern u32 data_0213b818[];
extern u32 data_0213b84c[];
extern u32 data_0213b880[];

void _ZdlPv(void *p);
void *func_020edc88(void);
void func_0210be44(void *p);
void func_020efab8(void);
void func_020f0838(Glob *g, s32 v);
void func_020f29c8(Obj *self);
void func_020f2a94(Obj *self);
void func_020f2aec(Obj *self);
void func_020f2be4(Obj *self);
void func_020f2c2c(Obj *self);
void func_020f2c58(Obj *self, s32 v);
void func_020f2ca8(Obj *self);
void func_020f2cd4(Obj *self, u32 a, s32 b);
void func_020f2eac(Obj *self, s32 v);
void func_020f2fac(Obj *self);
void func_020f2fc8(Obj *self);
void func_020f3078(Obj *self);
void func_020f44f0(s32 v);
void func_020f51b4(u32 v);
void func_020f80a4(void *p, s32 v);
void func_020f80ac(void *p);
void func_020f80d8(void *p);
void func_020f8290(void *p);
}

extern "C" Obj *func_020f2494(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b36c;
    self->id = 19;
    return self;
}

extern "C" Obj *func_020f2470(Obj *self) {
    self->vptr = data_0213b36c;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f2444(Obj *self) {
    self->vptr = data_0213b36c;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f23fc(Obj *self) {
    func_020f2cd4(self, 0x2a824, 6);
    func_020f2ca8(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f23d0(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b3a0;
    self->id = 20;
    return self;
}

extern "C" Obj *func_020f23ac(Obj *self) {
    self->vptr = data_0213b3a0;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f2380(Obj *self) {
    self->vptr = data_0213b3a0;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f2338(Obj *self) {
    func_020f2cd4(self, 0x2a824, 7);
    func_020f2ca8(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f230c(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b3d4;
    self->id = 21;
    return self;
}

extern "C" Obj *func_020f22e8(Obj *self) {
    self->vptr = data_0213b3d4;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f22bc(Obj *self) {
    self->vptr = data_0213b3d4;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f2274(Obj *self) {
    func_020f2cd4(self, 0x2a824, 8);
    func_020f2ca8(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f2248(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b408;
    self->id = 22;
    return self;
}

extern "C" Obj *func_020f2224(Obj *self) {
    self->vptr = data_0213b408;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f21f8(Obj *self) {
    self->vptr = data_0213b408;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f21b0(Obj *self) {
    func_020f2cd4(self, 0x2a824, 9);
    func_020f2ca8(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f2184(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b43c;
    self->id = 23;
    return self;
}

extern "C" Obj *func_020f2160(Obj *self) {
    self->vptr = data_0213b43c;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f2134(Obj *self) {
    self->vptr = data_0213b43c;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f20dc(Obj *self) {
    func_020f2cd4(self, 0x2a824, 10);
    func_020f2ca8(self);
    func_020f2c2c(self);
    func_020f2be4(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f20b0(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b470;
    self->id = 24;
    return self;
}

extern "C" Obj *func_020f208c(Obj *self) {
    self->vptr = data_0213b470;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f2060(Obj *self) {
    self->vptr = data_0213b470;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f2018(Obj *self) {
    func_020f2cd4(self, 0x2a824, 11);
    func_020f2ca8(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f1fec(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b4a4;
    self->id = 30;
    return self;
}

extern "C" Obj *func_020f1fc8(Obj *self) {
    self->vptr = data_0213b4a4;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f1f9c(Obj *self) {
    self->vptr = data_0213b4a4;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f1f44(Obj *self) {
    func_020f2cd4(self, 0x232f4, 12);
    func_020f2ca8(self);
    func_020f2c2c(self);
    func_020f2be4(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f1f18(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b4d8;
    self->id = 31;
    return self;
}

extern "C" Obj *func_020f1ef4(Obj *self) {
    self->vptr = data_0213b4d8;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f1ec8(Obj *self) {
    self->vptr = data_0213b4d8;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f1e70(Obj *self) {
    func_020f2cd4(self, 0x232f4, 13);
    func_020f2ca8(self);
    func_020f2c2c(self);
    func_020f2be4(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f1e44(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b50c;
    self->id = 32;
    return self;
}

extern "C" Obj *func_020f1e20(Obj *self) {
    self->vptr = data_0213b50c;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f1df4(Obj *self) {
    self->vptr = data_0213b50c;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f1d9c(Obj *self) {
    func_020f2cd4(self, 0x232f4, 14);
    func_020f2ca8(self);
    func_020f2c2c(self);
    func_020f2be4(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f1d70(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b540;
    self->id = 33;
    return self;
}

extern "C" Obj *func_020f1d4c(Obj *self) {
    self->vptr = data_0213b540;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f1d20(Obj *self) {
    self->vptr = data_0213b540;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f1cc8(Obj *self) {
    func_020f2cd4(self, 0x232f4, 15);
    func_020f2ca8(self);
    func_020f2c2c(self);
    func_020f2be4(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f1c9c(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b304;
    self->id = 34;
    return self;
}

extern "C" Obj *func_020f1c78(Obj *self) {
    self->vptr = data_0213b304;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f1c4c(Obj *self) {
    self->vptr = data_0213b304;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f1bf4(Obj *self) {
    func_020f2cd4(self, 0x232f4, 16);
    func_020f2ca8(self);
    func_020f2c2c(self);
    func_020f2be4(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f1bc8(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b5a8;
    self->id = 35;
    return self;
}

extern "C" Obj *func_020f1ba4(Obj *self) {
    self->vptr = data_0213b5a8;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f1b78(Obj *self) {
    self->vptr = data_0213b5a8;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f1b30(Obj *self) {
    func_020f2cd4(self, 0x232f4, 17);
    func_020f2ca8(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f1b04(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b5dc;
    self->id = 40;
    return self;
}

extern "C" Obj *func_020f1ae0(Obj *self) {
    self->vptr = data_0213b5dc;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f1ab4(Obj *self) {
    self->vptr = data_0213b5dc;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f1a6c(Obj *self) {
    func_020f2cd4(self, 0x245c0, 18);
    func_020f2ca8(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f1a38(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b610;
    func_020f80d8((u8 *)self + 8);
    self->id = 41;
    return self;
}

extern "C" Obj *func_020f1a08(Obj *self) {
    self->vptr = data_0213b610;
    func_020f80ac((u8 *)self + 8);
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f19d0(Obj *self) {
    self->vptr = data_0213b610;
    func_020f80ac((u8 *)self + 8);
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f1988(Obj *self) {
    func_020f2cd4(self, 0x2a824, 19);
    func_020f2ca8(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" void func_020f1964(Obj *self) {
    func_020f2fac(self);
    ((SubObj *)((u8 *)self + 8))->vfunc_00();
}

extern "C" void func_020f191c(Obj *self, u32 a, u32 c) {
    if (c >= 99 && c <= 171) {
        func_020f8290((u8 *)self + 8);
        func_020f80a4((u8 *)self + 8, 1);
    } else {
        func_020f80a4((u8 *)self + 8, 0);
    }
}

extern "C" Obj *func_020f18f0(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b644;
    self->id = 42;
    return self;
}

extern "C" Obj *func_020f18cc(Obj *self) {
    self->vptr = data_0213b644;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f18a0(Obj *self) {
    self->vptr = data_0213b644;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f1858(Obj *self) {
    func_020f2cd4(self, 0x245c0, 20);
    func_020f2ca8(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f182c(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b678;
    self->id = 43;
    return self;
}

extern "C" Obj *func_020f1808(Obj *self) {
    self->vptr = data_0213b678;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f17dc(Obj *self) {
    self->vptr = data_0213b678;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f1794(Obj *self) {
    func_020f2cd4(self, 0x245c0, 21);
    func_020f2ca8(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f1768(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b6ac;
    self->id = 44;
    return self;
}

extern "C" Obj *func_020f1744(Obj *self) {
    self->vptr = data_0213b6ac;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f1718(Obj *self) {
    self->vptr = data_0213b6ac;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f16d0(Obj *self) {
    func_020f2cd4(self, 0x245c0, 22);
    func_020f2ca8(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f16a4(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b6e0;
    self->id = 45;
    return self;
}

extern "C" Obj *func_020f1680(Obj *self) {
    self->vptr = data_0213b6e0;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f1654(Obj *self) {
    self->vptr = data_0213b6e0;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f160c(Obj *self) {
    func_020f2cd4(self, 0x245c0, 23);
    func_020f2ca8(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f15e0(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b714;
    self->id = 46;
    return self;
}

extern "C" Obj *func_020f15bc(Obj *self) {
    self->vptr = data_0213b714;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f1590(Obj *self) {
    self->vptr = data_0213b714;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f1548(Obj *self) {
    func_020f2cd4(self, 0x245c0, 24);
    func_020f2ca8(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f151c(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b748;
    self->id = 47;
    return self;
}

extern "C" Obj *func_020f14f8(Obj *self) {
    self->vptr = data_0213b748;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f14cc(Obj *self) {
    self->vptr = data_0213b748;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f1484(Obj *self) {
    func_020f2cd4(self, 0x245c0, 25);
    func_020f2ca8(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f1458(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b77c;
    self->id = 48;
    return self;
}

extern "C" Obj *func_020f1434(Obj *self) {
    self->vptr = data_0213b77c;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f1408(Obj *self) {
    self->vptr = data_0213b77c;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f13c0(Obj *self) {
    func_020f2cd4(self, 0x245c0, 26);
    func_020f2ca8(self);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f138c(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b7b0;
    self->id = 50;
    func_020f44f0(1);
    return self;
}

extern "C" Obj *func_020f1368(Obj *self) {
    self->vptr = data_0213b7b0;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f133c(Obj *self) {
    self->vptr = data_0213b7b0;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f12f4(Obj *self) {
    func_020f2cd4(self, 0x0, 27);
    func_020f2c58(self, 3);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f12c8(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b7e4;
    self->id = 51;
    return self;
}

extern "C" Obj *func_020f12a4(Obj *self) {
    self->vptr = data_0213b7e4;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f1278(Obj *self) {
    self->vptr = data_0213b7e4;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f1238(Obj *self) {
    func_020f2cd4(self, 0x0, 28);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
    func_020efab8();
}

extern "C" void func_020f1200(Obj *self) {
    func_020f51b4(data_021f5b80.f30);
    data_021f5b80.f4d = 1;
    func_020f2eac(self, 17);
}

extern "C" Obj *func_020f11d4(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b818;
    self->id = 52;
    return self;
}

extern "C" Obj *func_020f11b0(Obj *self) {
    self->vptr = data_0213b818;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f1184(Obj *self) {
    self->vptr = data_0213b818;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f1144(Obj *self) {
    func_020f2cd4(self, 0x2a824, 29);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f1118(Obj *self) {
    func_020f2a94(self);
    self->vptr = data_0213b84c;
    self->id = 60;
    return self;
}

extern "C" Obj *func_020f10f4(Obj *self) {
    self->vptr = data_0213b84c;
    func_020f29c8(self);
    return self;
}

extern "C" Obj *func_020f10c8(Obj *self) {
    self->vptr = data_0213b84c;
    func_020f29c8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f1070(Obj *self) {
    func_020f2cd4(self, 0x21ef8, 4);
    func_020f2c58(self, 2);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    func_020f0838(&data_021f5b80, 143);
    data_021f5b80.f62 = 0;
}

extern "C" Obj *func_020f1044(Obj *self) {
    func_020f3078(self);
    self->vptr = data_0213b880;
    self->id = 99;
    return self;
}

extern "C" Obj *func_020f1020(Obj *self) {
    self->vptr = data_0213b880;
    func_020f2fc8(self);
    return self;
}

extern "C" Obj *func_020f0ff4(Obj *self) {
    self->vptr = data_0213b880;
    func_020f2fc8(self);
    _ZdlPv(self);
    return self;
}

extern "C" void func_020f0fb4(Obj *self) {
    func_020f2cd4(self, 0x2a824, 29);
    func_020f2aec(self);
    func_0210be44(func_020edc88());
    data_021f5b80.f62 = 0;
}
